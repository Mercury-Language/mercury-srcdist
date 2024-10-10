/*
** Automatically generated from `transform_hlds.m'
** by the Mercury compiler,
** version rotd-2024-10-10
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


// :- module transform_hlds.
// :- implementation.

/*
INIT mercury__transform_hlds__init
ENDINIT
*/

#include "transform_hlds.mih"


#include "builtin.mih"
#include "private_builtin.mih"












void mercury__transform_hlds__init(void)
{
}

void mercury__transform_hlds__init_type_tables(void)
{
}

void mercury__transform_hlds__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.
