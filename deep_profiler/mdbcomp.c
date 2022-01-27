/*
** Automatically generated from `mdbcomp.m'
** by the Mercury compiler,
** version rotd-2014-11-20
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


#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"










#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 23 "mdbcomp.m"
void MR_CALL 
mdbcomp__version_1_p_0(
#line 23 "mdbcomp.m"
  MR_String * mdbcomp__Version_1)
#line 23 "mdbcomp.m"
{
#line 48 "mdbcomp.m"
  {
#line 48 "mdbcomp.m"
    MR_bool mdbcomp__succeeded;

#line 51 "mdbcomp.m"
{
#define MR_PROC_LABEL mdbcomp__version_1_p_0

	MR_String Version;

		{
#line 51 "mdbcomp.m"

    MR_ConstString version_string;

    version_string = MR_VERSION ", configured for " MR_FULLARCH;
    /*
    ** Cast away const needed here, because Mercury declares Version
    ** with type MR_String rather than MR_ConstString.
    */
    Version = (MR_String) (MR_Word) version_string;

#line 109 "mdbcomp.c"

		;}
#undef MR_PROC_LABEL
	 *mdbcomp__Version_1  = Version;
#line 51 "mdbcomp.m"
}
#line 48 "mdbcomp.m"
  }
#line 23 "mdbcomp.m"
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
