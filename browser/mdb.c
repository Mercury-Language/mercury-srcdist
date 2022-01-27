/*
** Automatically generated from `mdb.m'
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


/* :- module mdb. */
/* :- implementation. */

/*
INIT mercury__mdb__init
ENDINIT
*/

#include "mdb.mih"


#include "builtin.mih"
#include "mdbcomp.mih"
#include "private_builtin.mih"










#include "mdb.mh"



#line 14 "mdb.m"
void MR_CALL 
mdb__version_1_p_0(
#line 14 "mdb.m"
  MR_String * mdb__Version_1)
#line 14 "mdb.m"
{
#line 57 "mdb.m"
  {
#line 57 "mdb.m"
    MR_bool mdb__succeeded;

#line 60 "mdb.m"
{
#define MR_PROC_LABEL mdb__version_1_p_0

	MR_String Version;

		{
#line 60 "mdb.m"

    MR_ConstString version_string = 
        MR_VERSION ", configured for " MR_FULLARCH;
    /*
    ** Cast away const needed here, because Mercury declares Version
    ** with type MR_String rather than MR_ConstString.
    */
    Version = (MR_String) (MR_Word) version_string;

#line 78 "mdb.c"

		;}
#undef MR_PROC_LABEL
	 *mdb__Version_1  = Version;
#line 60 "mdb.m"
}
#line 57 "mdb.m"
  }
#line 14 "mdb.m"
}

void mercury__mdb__init(void)
{
}

void mercury__mdb__init_type_tables(void)
{
}

void mercury__mdb__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdb. */
