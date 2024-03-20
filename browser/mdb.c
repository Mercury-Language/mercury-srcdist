/*
** Automatically generated from `mdb.m'
** by the Mercury compiler,
** version rotd-2024-03-20
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


// :- module mdb.
// :- implementation.

/*
INIT mercury__mdb__init
ENDINIT
*/

#include "mdb.mih"


#include "builtin.mih"
#include "private_builtin.mih"










#include "mdb.mh"


void MR_CALL 
mdb__version_1_p_0(
  MR_String * Version_1)
{
{
#define MR_PROC_LABEL mdb__version_1_p_0

	MR_String Version;

		{

    MR_ConstString version_string =
        MR_VERSION ", configured for " MR_FULLARCH;

    // We need to cast away const here, because Mercury declares Version
    // to have type MR_String, not MR_ConstString.
    Version = (MR_String) (MR_Word) version_string;


		;}
#undef MR_PROC_LABEL
	*Version_1  = Version;
}
}

void mercury__mdb__init(void)
{
}

void mercury__mdb__init_type_tables(void)
{
}

void mercury__mdb__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdb__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdb.
