/*
** Automatically generated from `mdbcomp.shared_utilities.m'
** by the Mercury compiler,
** version 2015-10-27
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module mdbcomp.shared_utilities. */
/* :- implementation. */

/*
INIT mercury__mdbcomp__shared_utilities__init
ENDINIT
*/

#include "mdbcomp.shared_utilities.mih"


#include "mdbcomp.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"










#include "io.mh"
#include "mdbcomp.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.shared_utilities.mh"



#line 29 "shared_utilities.m"
void MR_CALL 
mdbcomp__shared_utilities__unlimit_stack_2_p_0(void)
#line 29 "shared_utilities.m"
{
#line 48 "shared_utilities.m"
  {
#line 48 "shared_utilities.m"
    MR_bool mdbcomp__shared_utilities__succeeded;

#line 51 "shared_utilities.m"
{
#define MR_PROC_LABEL mdbcomp__shared_utilities__unlimit_stack_2_p_0


		{
#line 51 "shared_utilities.m"

#if defined(MR_HAVE_SETRLIMIT)
    struct rlimit   limit_struct;
    rlim_t          max_value;

    if (getrlimit(RLIMIT_STACK, &limit_struct) != 0) {
        MR_fatal_error("could not get current stack limit");
    }

    max_value = limit_struct.rlim_max;
    limit_struct.rlim_cur = limit_struct.rlim_max;
    /* If this fails, we have no recourse, so ignore any failure. */
    (void) setrlimit(RLIMIT_STACK, &limit_struct);
#endif

#line 110 "mdbcomp.shared_utilities.c"

		;}
#undef MR_PROC_LABEL
#line 51 "shared_utilities.m"
}
#line 48 "shared_utilities.m"
  }
#line 29 "shared_utilities.m"
}

void mercury__mdbcomp__shared_utilities__init(void)
{
}

void mercury__mdbcomp__shared_utilities__init_type_tables(void)
{
}

void mercury__mdbcomp__shared_utilities__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdbcomp.shared_utilities. */
