/*
** Automatically generated from `parse_tree.m'
** by the Mercury compiler,
** version rotd-2015-06-22
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


/* :- module parse_tree. */
/* :- implementation. */

/*
INIT mercury__parse_tree__init
ENDINIT
*/

#include "parse_tree.mih"


#include "builtin.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "private_builtin.mih"













void mercury__parse_tree__init(void)
{
}

void mercury__parse_tree__init_type_tables(void)
{
}

void mercury__parse_tree__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree. */
