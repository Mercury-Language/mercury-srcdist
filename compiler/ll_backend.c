/*
** Automatically generated from `ll_backend.m'
** by the Mercury compiler,
** version rotd-2026-07-26
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


// :- module ll_backend.
// :- implementation.

/*
INIT mercury__ll_backend__init
ENDINIT
*/

#include "ll_backend.mih"


#include "builtin.mih"
#include "private_builtin.mih"












void mercury__ll_backend__init(void)
{
}

void mercury__ll_backend__init_type_tables(void)
{
}

void mercury__ll_backend__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module ll_backend.
