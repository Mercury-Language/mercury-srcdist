/*
** Automatically generated from `hlds_out.m'
** by the Mercury compiler,
** version rotd-2024-06-30
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


// :- module hlds.hlds_out.
// :- implementation.

/*
INIT mercury__hlds__hlds_out__init
ENDINIT
*/

#include "hlds.hlds_out.mih"


#include "builtin.mih"
#include "hlds.mih"
#include "private_builtin.mih"












void mercury__hlds__hlds_out__init(void)
{
}

void mercury__hlds__hlds_out__init_type_tables(void)
{
}

void mercury__hlds__hlds_out__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_out__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.hlds_out.
