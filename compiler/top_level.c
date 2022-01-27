/*
** Automatically generated from `top_level.m'
** by the Mercury compiler,
** version DEV
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


/* :- module top_level. */
/* :- implementation. */

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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module top_level. */
