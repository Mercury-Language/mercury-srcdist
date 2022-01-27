/*
** Automatically generated from `grade_lib.m'
** by the Mercury compiler,
** version rotd-2021-05-30
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


// :- module grade_lib.
// :- implementation.

/*
INIT mercury__grade_lib__init
ENDINIT
*/

#include "grade_lib.mih"


#include "builtin.mih"
#include "private_builtin.mih"













void MR_CALL 
grade_lib__grade_lib_version_1_p_0(
  MR_String * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_String) "v1";
}

void mercury__grade_lib__init(void)
{
}

void mercury__grade_lib__init_type_tables(void)
{
}

void mercury__grade_lib__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__grade_lib__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module grade_lib.
