/*
** Automatically generated from `mdbcomp.m'
** by the Mercury compiler,
** version rotd-2016-05-13
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


/* :- module mdbcomp. */
/* :- implementation. */

/*
INIT mercury__mdbcomp__init
ENDINIT
*/

#include "mdbcomp.mih"


#include "builtin.mih"
#include "private_builtin.mih"










#include "mdbcomp.mh"



void MR_CALL 
mdbcomp__version_1_p_0(
  MR_String * mdbcomp__Version_1)
{
  {
    MR_bool mdbcomp__succeeded;

{
#define MR_PROC_LABEL mdbcomp__version_1_p_0

	MR_String Version;

		{

    MR_ConstString version_string;

    version_string = MR_VERSION ", configured for " MR_FULLARCH;
    /*
    ** Cast away const needed here, because Mercury declares Version
    ** with type MR_String rather than MR_ConstString.
    */
    Version = (MR_String) (MR_Word) version_string;


		;}
#undef MR_PROC_LABEL
	 *mdbcomp__Version_1  = Version;
}
  }
}

void mercury__mdbcomp__init(void)
{
}

void mercury__mdbcomp__init_type_tables(void)
{
}

void mercury__mdbcomp__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdbcomp. */
