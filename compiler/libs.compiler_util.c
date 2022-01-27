/*
** Automatically generated from `compiler_util.m'
** by the Mercury compiler,
** version rotd-2015-08-10
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


/* :- module libs.compiler_util. */
/* :- implementation. */

/*
INIT mercury__libs__compiler_util__init
ENDINIT
*/

#include "libs.compiler_util.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"










#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 38 "compiler_util.m"
void MR_CALL 
libs__compiler_util__report_warning_to_stream_5_p_0(
#line 38 "compiler_util.m"
  MR_Word libs__compiler_util__Globals_6,
#line 38 "compiler_util.m"
  MR_Word libs__compiler_util__Stream_7,
#line 38 "compiler_util.m"
  MR_String libs__compiler_util__Message_8)
#line 38 "compiler_util.m"
{
#line 65 "compiler_util.m"
  {
#line 65 "compiler_util.m"
    MR_bool libs__compiler_util__succeeded;
#line 65 "compiler_util.m"
    MR_Word libs__compiler_util__HaltAtWarn_18;

#line 53 "compiler_util.m"
    {
#line 53 "compiler_util.m"
      libs__globals__lookup_bool_option_3_p_0(libs__compiler_util__Globals_6, (MR_Integer) 2, &libs__compiler_util__HaltAtWarn_18);
    }
#line 57 "compiler_util.m"
#line 57 "compiler_util.m"
    switch (libs__compiler_util__HaltAtWarn_18) {
#line 57 "compiler_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 57 "compiler_util.m"
      case (MR_Integer) 0:
#line 58 "compiler_util.m"
        {
#line 58 "compiler_util.m"
        }
#line 57 "compiler_util.m"
        break;
#line 57 "compiler_util.m"
      case (MR_Integer) 1:
#line 55 "compiler_util.m"
        {
#line 56 "compiler_util.m"
          {
#line 56 "compiler_util.m"
            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          }
#line 55 "compiler_util.m"
        }
#line 57 "compiler_util.m"
        break;
#line 57 "compiler_util.m"
    }
#line 67 "compiler_util.m"
    {
#line 67 "compiler_util.m"
      mercury__io__write_string_4_p_0(libs__compiler_util__Stream_7, libs__compiler_util__Message_8);
#line 67 "compiler_util.m"
      return;
    }
#line 65 "compiler_util.m"
  }
#line 38 "compiler_util.m"
}

#line 33 "compiler_util.m"
void MR_CALL 
libs__compiler_util__report_warning_4_p_0(
#line 33 "compiler_util.m"
  MR_Word libs__compiler_util__Globals_5,
#line 33 "compiler_util.m"
  MR_String libs__compiler_util__Message_6)
#line 33 "compiler_util.m"
{
#line 61 "compiler_util.m"
  {
#line 61 "compiler_util.m"
    MR_bool libs__compiler_util__succeeded;
#line 61 "compiler_util.m"
    MR_Word libs__compiler_util__HaltAtWarn_16;

#line 53 "compiler_util.m"
    {
#line 53 "compiler_util.m"
      libs__globals__lookup_bool_option_3_p_0(libs__compiler_util__Globals_5, (MR_Integer) 2, &libs__compiler_util__HaltAtWarn_16);
    }
#line 57 "compiler_util.m"
#line 57 "compiler_util.m"
    switch (libs__compiler_util__HaltAtWarn_16) {
#line 57 "compiler_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 57 "compiler_util.m"
      case (MR_Integer) 0:
#line 58 "compiler_util.m"
        {
#line 58 "compiler_util.m"
        }
#line 57 "compiler_util.m"
        break;
#line 57 "compiler_util.m"
      case (MR_Integer) 1:
#line 55 "compiler_util.m"
        {
#line 56 "compiler_util.m"
          {
#line 56 "compiler_util.m"
            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          }
#line 55 "compiler_util.m"
        }
#line 57 "compiler_util.m"
        break;
#line 57 "compiler_util.m"
    }
#line 63 "compiler_util.m"
    {
#line 63 "compiler_util.m"
      mercury__io__write_string_3_p_0(libs__compiler_util__Message_6);
#line 63 "compiler_util.m"
      return;
    }
#line 61 "compiler_util.m"
  }
#line 33 "compiler_util.m"
}

#line 28 "compiler_util.m"
void MR_CALL 
libs__compiler_util__record_warning_3_p_0(
#line 28 "compiler_util.m"
  MR_Word libs__compiler_util__Globals_4)
#line 28 "compiler_util.m"
{
#line 52 "compiler_util.m"
  {
#line 52 "compiler_util.m"
    MR_bool libs__compiler_util__succeeded;
#line 52 "compiler_util.m"
    MR_Word libs__compiler_util__HaltAtWarn_6;

#line 53 "compiler_util.m"
    {
#line 53 "compiler_util.m"
      libs__globals__lookup_bool_option_3_p_0(libs__compiler_util__Globals_4, (MR_Integer) 2, &libs__compiler_util__HaltAtWarn_6);
    }
#line 57 "compiler_util.m"
#line 57 "compiler_util.m"
    switch (libs__compiler_util__HaltAtWarn_6) {
#line 57 "compiler_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 57 "compiler_util.m"
      case (MR_Integer) 0:
#line 58 "compiler_util.m"
        {
#line 58 "compiler_util.m"
        }
#line 57 "compiler_util.m"
        break;
#line 57 "compiler_util.m"
      case (MR_Integer) 1:
#line 55 "compiler_util.m"
        {
#line 56 "compiler_util.m"
          {
#line 56 "compiler_util.m"
            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 56 "compiler_util.m"
            return;
          }
#line 55 "compiler_util.m"
        }
#line 57 "compiler_util.m"
        break;
#line 57 "compiler_util.m"
    }
#line 52 "compiler_util.m"
  }
#line 28 "compiler_util.m"
}

void mercury__libs__compiler_util__init(void)
{
}

void mercury__libs__compiler_util__init_type_tables(void)
{
}

void mercury__libs__compiler_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module libs.compiler_util. */
