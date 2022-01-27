/*
** Automatically generated from `mer_browser.m'
** by the Mercury compiler,
** version rotd-2021-04-29
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


// :- module mer_browser.
// :- implementation.

/*
INIT mercury__mer_browser__init
ENDINIT
*/

#include "mer_browser.mih"


#include "builtin.mih"
#include "mdb.mih"
#include "private_builtin.mih"













void mercury__mer_browser__init(void)
{
}

void mercury__mer_browser__init_type_tables(void)
{
}

void mercury__mer_browser__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mer_browser__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mer_browser.
