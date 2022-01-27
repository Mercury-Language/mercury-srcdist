/*
** Automatically generated from `llds_out.m'
** by the Mercury compiler,
** version rotd-2015-05-05
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


/* :- module ll_backend.llds_out. */
/* :- implementation. */

/*
INIT mercury__ll_backend__llds_out__init
ENDINIT
*/

#include "ll_backend.llds_out.mih"


#include "backend_libs.mih"
#include "builtin.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "private_builtin.mih"













void mercury__ll_backend__llds_out__init(void)
{
}

void mercury__ll_backend__llds_out__init_type_tables(void)
{
}

void mercury__ll_backend__llds_out__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.llds_out. */
