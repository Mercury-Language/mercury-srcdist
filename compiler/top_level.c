/*
** Automatically generated from `top_level.m'
** by the Mercury compiler,
** version rotd-2022-01-19
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


// :- module top_level.
// :- implementation.

/*
INIT mercury__top_level__init
ENDINIT
*/

#include "top_level.mih"


#include "builtin.mih"
#include "private_builtin.mih"













void mercury__top_level__init(void)
{
}

void mercury__top_level__init_type_tables(void)
{
}

void mercury__top_level__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__top_level__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module top_level.
