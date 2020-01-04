/*
** Automatically generated from `mdbcomp.shared_utilities.m'
** by the Mercury compiler,
** version rotd-2020-01-04
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module mdbcomp.shared_utilities.
// :- implementation.

/*
INIT mercury__mdbcomp__shared_utilities__init
ENDINIT
*/

#include "mdbcomp.shared_utilities.mih"


#include "mdbcomp.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"










#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "mdbcomp.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.shared_utilities.mh"



void MR_CALL 
mdbcomp__shared_utilities__unlimit_stack_2_p_0(void)
{
  {
{
#define MR_PROC_LABEL mdbcomp__shared_utilities__unlimit_stack_2_p_0


		{

#if defined(MR_HAVE_SETRLIMIT)
    struct rlimit   limit_struct;
    rlim_t          max_value;
    char            errbuf[MR_STRERROR_BUF_SIZE];

    if (getrlimit(RLIMIT_STACK, &limit_struct) != 0) {
        MR_fatal_error("could not get current stack limit: %s",
            MR_strerror(errno, errbuf, sizeof(errbuf)));
    }

    max_value = limit_struct.rlim_max;
    limit_struct.rlim_cur = limit_struct.rlim_max;
    /* If this fails, we have no recourse, so ignore any failure. */
    (void) setrlimit(RLIMIT_STACK, &limit_struct);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__mdbcomp__shared_utilities__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdbcomp.shared_utilities.
