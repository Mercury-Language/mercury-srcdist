/*
** Copyright (C) 1995-2005, 2007, 2010 The University of Melbourne.
** This file may only be copied under the terms of the GNU Library General
** Public License - see the file COPYING.LIB in the Mercury distribution.
*/

/* mercury_string.h - string handling */

#ifndef MERCURY_STRING_H
#define MERCURY_STRING_H

#include "mercury_heap.h"	/* for MR_offset_incr_hp_atomic */

#include <string.h>	/* for strcmp() etc. */
#include <stdarg.h>

/*
** Mercury characters are given type `MR_Char', which is a typedef for `char'.
** But BEWARE: when stored in an MR_Integer, the value must be
** first cast to `MR_UnsignedChar'.
** Mercury strings are stored as pointers to '\0'-terminated arrays of MR_Char.
** Mercury strings must not contain null characters. Unexpected null characters
** are a source of security vulnerabilities.
**
** We may eventually move to using wchar_t for Mercury characters and strings,
** so it is important to use these typedefs.
**
** The actual typedefs are in mercury_types.h to avoid problems with
** circular #includes.
**
** typedef char MR_Char;
** typedef unsigned char MR_UnsignedChar;
**
** typedef MR_Char *MR_String;
** typedef const MR_Char *MR_ConstString;
*/

/*
** MR_string_const("...", len):
**	Given a C string literal and its length, returns a Mercury string.
*/

#define MR_string_const(string, len) ((MR_String) string)

#define MR_make_string_const(string) \
		MR_string_const((string), sizeof(string) - 1)

/*
** MR_bool MR_string_equal(MR_ConstString s1, MR_ConstString s2):
** Return true iff the two Mercury strings s1 and s2 are equal.
*/

#define MR_string_equal(s1,s2) (strcmp((char*)(s1),(char*)(s2))==0)

/*
** void MR_make_aligned_string(MR_String ptr, const char *string):
**	Given a C string `string', set `ptr' to be a Mercury string
**	with the same contents.  (`ptr' must be an lvalue.)
**	If the resulting Mercury string is to be used by Mercury code,
**	then the string pointed to by `string' should have been either
**	statically allocated or allocated on the Mercury heap.
**
** BEWARE: this may modify `MR_hp', so it must only be called from
** places where `MR_hp' is valid.  If calling it from inside a C function,
** rather than inside Mercury code, you may need to call
** MR_{save/restore}_transient_hp().
**
** Algorithm: if the string is aligned, just set ptr equal to it.
** Otherwise, allocate space on the heap and copy the C string to
** the Mercury string.
*/

#define MR_make_aligned_string(ptr, string) 				\
	do { 								\
		if (MR_tag((MR_Word) (string)) != 0) {			\
			MR_make_aligned_string_copy((ptr), (string));	\
		} else { 						\
			/* The cast is there to cast away const, if needed */ \
			(ptr) = (MR_String) (string);			\
		}							\
	} while(0)

/*
** void MR_make_aligned_string_copy(MR_String ptr, const char * string):
** Same as MR_make_aligned_string(ptr, string), except that the string
** is guaranteed to be copied. This is useful for copying C strings
** onto the Mercury heap.
**
** BEWARE: this may modify `MR_hp', so it must only be called from
** places where `MR_hp' is valid.  If calling it from inside a C function,
** rather than inside Mercury code, you may need to call
** MR_{save/restore}_transient_hp().
*/

#define MR_make_aligned_string_copy(ptr, string) 			\
	do {								\
		MR_Word make_aligned_string_tmp;			\
		char	*make_aligned_string_ptr;			\
									\
	  	MR_offset_incr_hp_atomic(make_aligned_string_tmp, 0,	\
			(strlen(string) + sizeof(MR_Word)) / sizeof(MR_Word)); \
	    	make_aligned_string_ptr =				\
			(char *) make_aligned_string_tmp;		\
	    	strcpy(make_aligned_string_ptr, (string));		\
	    	(ptr) = make_aligned_string_ptr;			\
	} while(0)

/*
** void MR_make_aligned_string_copy_saved_hp(MR_String ptr,
** 	const char * string):
** Same as MR_make_aligned_string_copy(ptr, string), except that it uses
** MR_offset_incr_saved_hp_atomic instead of MR_offset_incr_hp_atomic.
*/

#define MR_make_aligned_string_copy_saved_hp(ptr, string) 		\
	do {								\
		MR_Word	make_aligned_string_tmp;			\
		char	*make_aligned_string_ptr;			\
									\
	  	MR_offset_incr_saved_hp_atomic(make_aligned_string_tmp,	0, \
	    	    (strlen(string) + sizeof(MR_Word)) / sizeof(MR_Word)); \
	    	make_aligned_string_ptr =				\
		    (char *) make_aligned_string_tmp;			\
	    	strcpy(make_aligned_string_ptr, (string));		\
	    	(ptr) = make_aligned_string_ptr;			\
	} while(0)

/*
** void MR_make_aligned_string_copy_saved_hp_quote(MR_String ptr,
**		const char * string):
** Same as MR_make_aligned_string_copy_saved_hp(ptr, string), except that
** it puts double quote marks at the start and end of the string.
*/

#define MR_make_aligned_string_copy_saved_hp_quote(ptr, string)		\
	do {								\
		MR_Word	make_aligned_string_tmp;			\
		char	*make_aligned_string_ptr;			\
									\
	  	MR_offset_incr_saved_hp_atomic(make_aligned_string_tmp,	0, \
	    	    (strlen(string) + 2 + sizeof(MR_Word)) / sizeof(MR_Word)); \
	    	make_aligned_string_ptr =				\
		    (char *) make_aligned_string_tmp;			\
                sprintf(make_aligned_string_ptr, "%c%s%c", '"', string, '"'); \
	    	(ptr) = make_aligned_string_ptr;			\
	} while(0)

/*
** void MR_allocate_aligned_string_msg(MR_String ptr, size_t len,
**	MR_Code *proclabel):
** Allocate enough word aligned memory to hold len characters.  Also
** record for memory profiling purposes the location, proclabel, of the
** allocation if profiling is enabled.
**
** BEWARE: this may modify `MR_hp', so it must only be called from
** places where `MR_hp' is valid.  If calling it from inside a C function,
** rather than inside Mercury code, you may need to call
** MR_{save/restore}_transient_hp().
*/

#define MR_allocate_aligned_string_msg(ptr, len, proclabel)		\
	do {								\
		MR_Word	make_aligned_string_tmp;			\
		char	*make_aligned_string_ptr;			\
									\
	  	MR_offset_incr_hp_atomic_msg(make_aligned_string_tmp, 0,\
	    	    ((len) + sizeof(MR_Word)) / sizeof(MR_Word),	\
		    proclabel, "string:string/0");			\
	    	make_aligned_string_ptr =				\
		    (char *) make_aligned_string_tmp;			\
	    	(ptr) = make_aligned_string_ptr;			\
	} while(0)

#define MR_allocate_aligned_string_saved_hp(ptr, len)			\
	do {								\
		MR_Word	make_aligned_string_tmp;			\
		char	*make_aligned_string_ptr;			\
									\
	  	MR_offset_incr_saved_hp_atomic(make_aligned_string_tmp, 0,\
	    	    ((len) + sizeof(MR_Word)) / sizeof(MR_Word));	\
	    	make_aligned_string_ptr =				\
		    (char *) make_aligned_string_tmp;			\
	    	(ptr) = make_aligned_string_ptr;			\
	} while(0)

/*
** MR_do_hash_string{,2,3}(int & hash, MR_Word string):
** Given a Mercury string `string', set `hash' to the hash value
** for that string.  (`hash' must be an lvalue.)
**
** This is an implementation detail used to implement MR_hash_string{,2,3}().
** It should not be used directly. Use MR_hash_string{,2,3}() instead.
**
** Note that these functions are also defined in library/string.m.
** The definition heres and in string.m must be kept equivalent.
*/

#define MR_do_hash_string(hash, s)					\
	{								\
		int len;						\
		MR_CHECK_EXPR_TYPE(hash, int);				\
		MR_CHECK_EXPR_TYPE(s, MR_ConstString);			\
		len = 0;						\
		hash = 0;						\
		while(((MR_ConstString)(s))[len]) {			\
			hash ^= (hash << 5);				\
			hash ^= (MR_UnsignedChar) ((MR_ConstString)(s))[len]; \
			len++;						\
		}							\
		hash ^= len;						\
	}

#define MR_do_hash_string2(hash, s)					\
	{								\
		int len;						\
		MR_CHECK_EXPR_TYPE(hash, int);				\
		MR_CHECK_EXPR_TYPE(s, MR_ConstString);			\
		len = 0;						\
		hash = 0;						\
		while(((MR_ConstString)(s))[len]) {			\
			hash = hash * 37;				\
			hash += (MR_UnsignedChar) ((MR_ConstString)(s))[len]; \
			len++;						\
		}							\
		hash ^= len;						\
	}

#define MR_do_hash_string3(hash, s)					\
	{								\
		int len;						\
		MR_CHECK_EXPR_TYPE(hash, int);				\
		MR_CHECK_EXPR_TYPE(s, MR_ConstString);			\
		len = 0;						\
		hash = 0;						\
		while(((MR_ConstString)(s))[len]) {			\
			hash = hash * 49;				\
			hash += (MR_UnsignedChar) ((MR_ConstString)(s))[len]; \
			len++;						\
		}							\
		hash ^= len;						\
	}

/*
** MR_hash_string{,2,3}(s):
**	Given a Mercury string `s', return a hash value for that string.
*/

MR_Integer	MR_hash_string(MR_ConstString);
MR_Integer	MR_hash_string2(MR_ConstString);
MR_Integer	MR_hash_string3(MR_ConstString);

#ifdef __GNUC__
#define MR_hash_string(s)						\
	({								\
	 	MR_Integer hash_string_result;				\
		MR_CHECK_EXPR_TYPE(s, MR_ConstString);			\
		MR_do_hash_string(hash_string_result, s);		\
		hash_string_result;					\
	})

#define MR_hash_string2(s)						\
	({								\
	 	MR_Integer hash_string_result;				\
		MR_CHECK_EXPR_TYPE(s, MR_ConstString);			\
		MR_do_hash_string2(hash_string_result, s);		\
		hash_string_result;					\
	})

#define MR_hash_string3(s)						\
	({								\
	 	MR_Integer hash_string_result;				\
		MR_CHECK_EXPR_TYPE(s, MR_ConstString);			\
		MR_do_hash_string3(hash_string_result, s);		\
		hash_string_result;					\
	})
#endif

/*
** If we are not using gcc, the actual definitions of these functions
** are runtime/mercury_string.c; they use the macros below.
*/

#define MR_HASH_STRING_FUNC_BODY					\
	   MR_Integer hash_string_result;				\
	   MR_do_hash_string(hash_string_result, s);			\
	   return hash_string_result;
#define MR_HASH_STRING2_FUNC_BODY					\
	   MR_Integer hash_string_result;				\
	   MR_do_hash_string2(hash_string_result, s);			\
	   return hash_string_result;
#define MR_HASH_STRING3_FUNC_BODY					\
	   MR_Integer hash_string_result;				\
	   MR_do_hash_string3(hash_string_result, s);			\
	   return hash_string_result;

/*
** A version of strcmp to which we can pass Mercury words
** without having to cast the arguments first.
*/

#define MR_strcmp(s, t) 	strcmp((const char *)(s), (const char *)(t))

/*
** Return an MR_String which has been created using the format string,
** fmt, passed to sprintf.  If memory profiling is turned on, record the
** allocation as coming from proclabel.  The MR_String returned has been
** allocated on the mercury heap using MR_allocate_aligned_string_msg.
**
** BEWARE: this may modify the saved copy of `MR_hp', so it must only be
** called from places where the saved copy of `MR_hp' is valid.
** You will generally need to call MR_{save/restore}_transient_hp()
** before/after calling this function.
*/

MR_String MR_make_string(MR_Code *proclabel, const char *fmt, ...);

#endif /* not MERCURY_STRING_H */
