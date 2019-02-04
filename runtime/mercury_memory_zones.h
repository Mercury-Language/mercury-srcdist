/*
** Copyright (C) 1998-2002, 2004-2006 The University of Melbourne.
** This file may only be copied under the terms of the GNU Library General
** Public License - see the file COPYING.LIB in the Mercury distribution.
*/

/*
** mercury_memory_zones.h
**
** This module defines a generic memory zone handler, which can be used for
** stacks and heaps in the Mercury runtime.  It provides functions for
** generating offsets so that different memory zones begin at different
** offsets (improves performance with direct mapped caches).  It also
** handles the fake_reg array for holding Mercury virtual registers.
*/

#ifndef	MERCURY_MEMORY_ZONES_H
#define	MERCURY_MEMORY_ZONES_H

#include "mercury_regs.h"		/* for MR_NUM_REAL_R_REGS, etc */

#include <stdio.h>			/* for FILE */
#include <stdlib.h>			/* for size_t */

#include "mercury_types.h"		/* for MR_Word */
#include "mercury_std.h"		/* for MR_bool */

typedef struct MR_MemoryZone_Struct	MR_MemoryZone;

typedef MR_bool	MR_ZoneHandler(MR_Word *addr, MR_MemoryZone *zone,
			void *context);

/*
** The Mercury runtime uses a number of memory areas or *zones*. These
** hold the detstack, the nondetstack, the heap, and potentially other
** areas such as a trail, a "solutions"-heap, and so on.
** These memory areas are each represented by an MR_MemoryZone structure
** that contains the following fields:
**
** next		The memory zones are organized as a linked list of free zones
**		and linked list of used zones. The next field, if not NULL,
**		points to the next memory zone in the list.
**
** name		A string constant used to name the allocated area.
**
** id		An integer which together with the name should uniquely
**		identify the allocated area.
**
** desired_size The desired size of the zone in kilobytes. The actual size
** 		may be larger due to roundups.
**
** redzone_size The desired size of the redzone in kilobytes. The actual size
** 		may be larger due to roundups.
**
** bottom	The address of the bottom of the allocated area
**		(should be on a page boundary).
**
** top		The address one word past the top of the allocated area
**		(should be on a page boundary).
**
** min		The address of the lowest part of the allocated that
**		will be used. This may be different to `bottom'
**		so that the use of different memory zones doesn't
**		beat the cache.
**
** max		The highest address in this memory area that has been
**		used so far. This is only computed if MR_LOWLEVEL_DEBUG
**		is enabled.
**
** hardmax	The address of the bottom of the last page of the allocated
**		area. This is one higher than the highest address that
**		can be used in this zone. We never unprotect the
**		last page of a zone so that we retain protection
**		against overrunning the end of the zone. This is
**		obviously only available on platforms that have
**		mprotect. (Should be on a page boundary.)
**
** redzone	The address of the start of the region that has been
**		mprotected as a redzone.  Redzone is only available on
**		platforms where MR_CHECK_OVERFLOW_VIA_MPROTECT is defined.
**		(Should be on a page boundary.)
**
** redzone_base The original redzone.
**
** handler	The address of a function to handle accesses in the
**		redzone of this allocated area. This is only
**		available with MR_CHECK_OVERFLOW_VIA_MPROTECT.
**
** gc_threshold	This field, which is only used for heap zones, points to
** 		MR_heap_margin_size bytes before MR_zone_end (which is defined
** 		as one the fields above by the macros below). It is used to
** 		decide when to do garbage collection without incurring the
** 		expense of a subtraction on every allocation.
**
** extend_threshold
** 		This field, which is only used for stack zones, points to
** 		MR_stack_margin_size bytes before MR_zone_end.
*/

struct MR_MemoryZone_Struct {
	MR_MemoryZone		*MR_zone_next;
	const char		*MR_zone_name;
	int			MR_zone_id;
	size_t			MR_zone_desired_size;
	size_t			MR_zone_redzone_size;
	MR_Word			*MR_zone_bottom;
	MR_Word			*MR_zone_top;
	MR_Word			*MR_zone_min;
	MR_Word			*MR_zone_max;
#ifdef MR_PROTECTPAGE
	MR_Word			*MR_zone_hardmax;
#endif	/* MR_PROTECTPAGE */

#ifdef MR_CHECK_OVERFLOW_VIA_MPROTECT
	MR_Word			*MR_zone_redzone_base;
	MR_Word			*MR_zone_redzone;
	MR_ZoneHandler		*MR_zone_handler;
#endif /* MR_CHECK_OVERFLOW_VIA_MPROTECT */

#if defined(MR_NATIVE_GC) && defined(MR_HIGHLEVEL_CODE)
	char			*MR_zone_gc_threshold;
				/* == MR_zone_end - MR_heap_margin_size */
#endif
#if defined(MR_STACK_SEGMENTS) && !defined(MR_HIGHLEVEL_CODE)
	char			*MR_zone_extend_threshold;
				/* == MR_zone_end - MR_stack_margin_size */
#endif
};

	/*
	** MR_zone_end specifies the end of the area accessible without
	** a page fault. It is used by MR_clear_zone_for_GC().
	*/
#ifdef MR_CHECK_OVERFLOW_VIA_MPROTECT
	#define MR_zone_end	MR_zone_redzone
#elif defined(MR_PROTECTPAGE)
	#define MR_zone_end	MR_zone_hardmax
#else
	#define MR_zone_end	MR_zone_top
#endif

/*
** MR_clear_zone_for_GC(MR_MemoryZone *zone, void *start_address):
** Zero out the (hopefully unused) portion of the zone from the specified
** `start_address' to the end of the zone. This is used to avoid unwanted
** memory retention due to false hits in the conservative garbage collector.
*/
#define MR_clear_zone_for_GC(zone, start_address) \
	((void) MR_memset((start_address), 0, \
		(char*)((zone)->MR_zone_end) - (char *)(start_address)))

/*
** Rather then using mprotect directly, we call MR_protect_pages which
** is OS independent.
*/
#ifdef MR_PROTECTPAGE

  #ifdef MR_WIN32
    #ifndef PROT_NONE
      #define PROT_NONE  0x0000
    #endif
    #ifndef PROT_READ
      #define PROT_READ  0x0001
    #endif
    #ifndef PROT_WRITE
      #define PROT_WRITE 0x0002
    #endif
  #endif

int MR_protect_pages(void *addr, size_t size, int prot_flags);

#endif

/*
** MR_init_zones() initializes the memory zone pool and the offset
** generator.  It should be used before any zones are created or
** offsets requested.
*/

extern	void		MR_init_zones(void);

/*
** MR_create_zone(Name, Id, Size, Offset, RedZoneSize, FaultHandler)
** allocates a new memory zone with name Name, and number Id, size
** Size (in bytes - which gets rounded up to the nearest multiple of
** the page size), an offset Offset from the page boundary at which
** to start using the memory region (used to help avoid beating the cache),
** the amount Redzone of memory (in bytes) to be protected as a redzone
** (must be less than Size), and the address of a function to handle
** memory references in the redzone.
** If it fails to allocate or protect the zone, then it exits.
** If MR_CHECK_OVERFLOW_VIA_MPROTECT is unavailable, then the last two
** arguments are ignored.
*/

extern	MR_MemoryZone	*MR_create_zone(const char *name, int id,
				size_t size, size_t offset, size_t redsize,
				MR_ZoneHandler *handler);

/*
** MR_construct_zone(Name, Id, Base, Size, Offset, RedZoneSize, FaultHandler)
** has the same behaviour as MR_create_zone, except instead of allocating
** the memory, it takes a pointer to a region of memory that must be at
** least Size + MR_unit[*] bytes, or if MR_PROTECTPAGE is defined, then it
** must be at least Size + 2 * MR_unit[*] bytes.
** If it fails to protect the redzone then it exits.
** If MR_CHECK_OVERFLOW_VIA_MPROTECT is unavailable, then the last two
** arguments are ignored.
**
** [*] MR_unit is a global variable containing the page size in bytes
*/

extern	MR_MemoryZone	*MR_construct_zone(const char *name, int Id,
				MR_Word *base, size_t size, size_t offset,
				size_t redsize, MR_ZoneHandler *handler);

/*
** MR_extend_zone(Zone, NewSize) extends Zone to increase its size to NewSize,
** and returns the difference between the new address of the memory area of
** the zone and the old.
*/

extern	MR_Integer	MR_extend_zone(MR_MemoryZone *zone,
				size_t new_size);

/*
** MR_reset_redzone(Zone) resets the redzone on the given MR_MemoryZone to the
** original zone specified in the call to {create,construct}_zone() if
** MR_CHECK_OVERFLOW_VIA_MPROTECT is defined.  Otherwise it does nothing.
*/

extern	void		MR_reset_redzone(MR_MemoryZone *zone);

/*
** MR_get_used_memory_zones() returns a pointer to the linked list of
** used memory zones.
*/

extern	MR_MemoryZone	*MR_get_used_memory_zones(void);

/*
** Returns true iff ptr is the given zone.
*/

extern	MR_bool		MR_in_zone(const MR_Word *ptr,
				const MR_MemoryZone *zone);

/*
** MR_debug_memory(fp) prints out debugging information about the current
** memory zones to fp.
*/

extern	void		MR_debug_memory(FILE *fp);

/*
** MR_debug_memory_zone(fp, zone) prints out debugging information about zone
** to fp.
*/

extern	void		MR_debug_memory_zone(FILE *fp, MR_MemoryZone *zone);

/*
** Return the given zone to the list of free zones.
*/

extern	void		MR_unget_zone(MR_MemoryZone *zone);

/*
** MR_next_offset() returns sucessive offsets across the primary cache. Useful
** when calling {create,construct}_zone().
*/

extern	size_t		MR_next_offset(void);

#endif /* not MERCURY_MEMORY_ZONES_H */
