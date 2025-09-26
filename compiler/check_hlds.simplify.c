/*
** Automatically generated from `simplify.m'
** by the Mercury compiler,
** version rotd-2025-09-26
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


// :- module check_hlds.simplify.
// :- implementation.

/*
INIT mercury__check_hlds__simplify__init
ENDINIT
*/

#include "check_hlds.simplify.mih"


#include "builtin.mih"
#include "check_hlds.mih"
#include "private_builtin.mih"












void mercury__check_hlds__simplify__init(void)
{
}

void mercury__check_hlds__simplify__init_type_tables(void)
{
}

void mercury__check_hlds__simplify__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__simplify__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.simplify.
