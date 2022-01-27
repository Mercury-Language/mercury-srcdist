/*
** Automatically generated from `ml_target_util.m'
** by the Mercury compiler,
** version rotd-2016-09-27
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


/* :- module ml_backend.ml_target_util. */
/* :- implementation. */

/*
INIT mercury__ml_backend__ml_target_util__init
ENDINIT
*/

#include "ml_backend.ml_target_util.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
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
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"










#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



MR_Word MR_CALL 
ml_backend__ml_target_util__target_supports_inheritence_1_f_0(
  MR_Word ml_backend__ml_target_util__HeadVar__1_1)
{
  {
    MR_bool ml_backend__ml_target_util__succeeded;
    MR_Word ml_backend__ml_target_util__HeadVar__2_2;

    switch (ml_backend__ml_target_util__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        {
          MR_Box ml_backend__ml_target_util__conv0_HeadVar__2_2;

          {
            ml_backend__ml_target_util__conv0_HeadVar__2_2 = mercury__require__unexpected_3_f_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_String) "ml_backend.ml_target_util", (MR_String) "function \140ml_backend.ml_target_util.target_supports_inheritence\'/1", (MR_String) "target erlang");
          }
          ml_backend__ml_target_util__HeadVar__2_2 = ((MR_Word) ml_backend__ml_target_util__conv0_HeadVar__2_2);
        }
        break;
      case (MR_Integer) 2:
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
        break;
    }
    return ml_backend__ml_target_util__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_target_util__target_supports_break_and_continue_1_f_0(
  MR_Word ml_backend__ml_target_util__HeadVar__1_1)
{
  {
    MR_bool ml_backend__ml_target_util__succeeded;
    MR_Word ml_backend__ml_target_util__HeadVar__2_2;

    switch (ml_backend__ml_target_util__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_target_util", (MR_String) "function \140ml_backend.ml_target_util.target_supports_break_and_continue\'/1", (MR_String) "target erlang");
          }
        }
        break;
      case (MR_Integer) 2:
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
        break;
    }
    return ml_backend__ml_target_util__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_target_util__target_supports_computed_goto_1_f_0(
  MR_Word ml_backend__ml_target_util__HeadVar__1_1)
{
  {
    MR_bool ml_backend__ml_target_util__succeeded;
    MR_Word ml_backend__ml_target_util__HeadVar__2_2;

    switch (ml_backend__ml_target_util__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        {
          MR_Box ml_backend__ml_target_util__conv0_HeadVar__2_2;

          {
            ml_backend__ml_target_util__conv0_HeadVar__2_2 = mercury__require__unexpected_3_f_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_String) "ml_backend.ml_target_util", (MR_String) "function \140ml_backend.ml_target_util.target_supports_computed_goto\'/1", (MR_String) "target erlang");
          }
          ml_backend__ml_target_util__HeadVar__2_2 = ((MR_Word) ml_backend__ml_target_util__conv0_HeadVar__2_2);
        }
        break;
      case (MR_Integer) 2:
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 0;
        break;
    }
    return ml_backend__ml_target_util__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_target_util__target_supports_goto_1_f_0(
  MR_Word ml_backend__ml_target_util__HeadVar__1_1)
{
  {
    MR_bool ml_backend__ml_target_util__succeeded;
    MR_Word ml_backend__ml_target_util__HeadVar__2_2;

    switch (ml_backend__ml_target_util__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        {
          MR_Box ml_backend__ml_target_util__conv0_HeadVar__2_2;

          {
            ml_backend__ml_target_util__conv0_HeadVar__2_2 = mercury__require__unexpected_3_f_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_String) "ml_backend.ml_target_util", (MR_String) "function \140ml_backend.ml_target_util.target_supports_goto\'/1", (MR_String) "target erlang");
          }
          ml_backend__ml_target_util__HeadVar__2_2 = ((MR_Word) ml_backend__ml_target_util__conv0_HeadVar__2_2);
        }
        break;
      case (MR_Integer) 2:
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 0;
        break;
    }
    return ml_backend__ml_target_util__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_target_util__target_supports_string_switch_1_f_0(
  MR_Word ml_backend__ml_target_util__HeadVar__1_1)
{
  {
    MR_bool ml_backend__ml_target_util__succeeded;
    MR_Word ml_backend__ml_target_util__HeadVar__2_2;

    switch (ml_backend__ml_target_util__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        {
          MR_Box ml_backend__ml_target_util__conv0_HeadVar__2_2;

          {
            ml_backend__ml_target_util__conv0_HeadVar__2_2 = mercury__require__unexpected_3_f_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_String) "ml_backend.ml_target_util", (MR_String) "function \140ml_backend.ml_target_util.target_supports_string_switch\'/1", (MR_String) "target erlang");
          }
          ml_backend__ml_target_util__HeadVar__2_2 = ((MR_Word) ml_backend__ml_target_util__conv0_HeadVar__2_2);
        }
        break;
      case (MR_Integer) 2:
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 0;
        break;
    }
    return ml_backend__ml_target_util__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_target_util__target_supports_int_switch_1_f_0(
  MR_Word ml_backend__ml_target_util__HeadVar__1_1)
{
  {
    MR_bool ml_backend__ml_target_util__succeeded;
    MR_Word ml_backend__ml_target_util__HeadVar__2_2;

    switch (ml_backend__ml_target_util__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        {
          MR_Box ml_backend__ml_target_util__conv0_HeadVar__2_2;

          {
            ml_backend__ml_target_util__conv0_HeadVar__2_2 = mercury__require__unexpected_3_f_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_String) "ml_backend.ml_target_util", (MR_String) "function \140ml_backend.ml_target_util.target_supports_int_switch\'/1", (MR_String) "target erlang");
          }
          ml_backend__ml_target_util__HeadVar__2_2 = ((MR_Word) ml_backend__ml_target_util__conv0_HeadVar__2_2);
        }
        break;
      case (MR_Integer) 2:
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
        break;
    }
    return ml_backend__ml_target_util__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_target_util__globals_target_supports_break_and_continue_1_f_0(
  MR_Word ml_backend__ml_target_util__Globals_3)
{
  {
    MR_bool ml_backend__ml_target_util__succeeded;
    MR_Word ml_backend__ml_target_util__SupportsBreakContinue_4;
    MR_Word ml_backend__ml_target_util__Target_5;

    {
      libs__globals__get_target_2_p_0(ml_backend__ml_target_util__Globals_3, &ml_backend__ml_target_util__Target_5);
    }
    {
      ml_backend__ml_target_util__SupportsBreakContinue_4 = ml_backend__ml_target_util__target_supports_break_and_continue_1_f_0(ml_backend__ml_target_util__Target_5);
    }
    return ml_backend__ml_target_util__SupportsBreakContinue_4;
  }
}

MR_Word MR_CALL 
ml_backend__ml_target_util__globals_target_supports_computed_goto_1_f_0(
  MR_Word ml_backend__ml_target_util__Globals_3)
{
  {
    MR_bool ml_backend__ml_target_util__succeeded;
    MR_Word ml_backend__ml_target_util__SupportsComputedGoto_4;
    MR_Word ml_backend__ml_target_util__Target_5;

    {
      libs__globals__get_target_2_p_0(ml_backend__ml_target_util__Globals_3, &ml_backend__ml_target_util__Target_5);
    }
    {
      ml_backend__ml_target_util__SupportsComputedGoto_4 = ml_backend__ml_target_util__target_supports_computed_goto_1_f_0(ml_backend__ml_target_util__Target_5);
    }
    return ml_backend__ml_target_util__SupportsComputedGoto_4;
  }
}

MR_Word MR_CALL 
ml_backend__ml_target_util__globals_target_supports_goto_1_f_0(
  MR_Word ml_backend__ml_target_util__Globals_3)
{
  {
    MR_bool ml_backend__ml_target_util__succeeded;
    MR_Word ml_backend__ml_target_util__SupportsGoto_4;
    MR_Word ml_backend__ml_target_util__Target_5;

    {
      libs__globals__get_target_2_p_0(ml_backend__ml_target_util__Globals_3, &ml_backend__ml_target_util__Target_5);
    }
    {
      ml_backend__ml_target_util__SupportsGoto_4 = ml_backend__ml_target_util__target_supports_goto_1_f_0(ml_backend__ml_target_util__Target_5);
    }
    return ml_backend__ml_target_util__SupportsGoto_4;
  }
}

MR_Word MR_CALL 
ml_backend__ml_target_util__globals_target_supports_string_switch_1_f_0(
  MR_Word ml_backend__ml_target_util__Globals_3)
{
  {
    MR_bool ml_backend__ml_target_util__succeeded;
    MR_Word ml_backend__ml_target_util__SupportsStringSwitch_4;
    MR_Word ml_backend__ml_target_util__Target_5;

    {
      libs__globals__get_target_2_p_0(ml_backend__ml_target_util__Globals_3, &ml_backend__ml_target_util__Target_5);
    }
    {
      ml_backend__ml_target_util__SupportsStringSwitch_4 = ml_backend__ml_target_util__target_supports_string_switch_1_f_0(ml_backend__ml_target_util__Target_5);
    }
    return ml_backend__ml_target_util__SupportsStringSwitch_4;
  }
}

MR_Word MR_CALL 
ml_backend__ml_target_util__globals_target_supports_int_switch_1_f_0(
  MR_Word ml_backend__ml_target_util__Globals_3)
{
  {
    MR_bool ml_backend__ml_target_util__succeeded;
    MR_Word ml_backend__ml_target_util__SupportsIntSwitch_4;
    MR_Word ml_backend__ml_target_util__Target_5;

    {
      libs__globals__get_target_2_p_0(ml_backend__ml_target_util__Globals_3, &ml_backend__ml_target_util__Target_5);
    }
    {
      ml_backend__ml_target_util__SupportsIntSwitch_4 = ml_backend__ml_target_util__target_supports_int_switch_1_f_0(ml_backend__ml_target_util__Target_5);
    }
    return ml_backend__ml_target_util__SupportsIntSwitch_4;
  }
}

void mercury__ml_backend__ml_target_util__init(void)
{
}

void mercury__ml_backend__ml_target_util__init_type_tables(void)
{
}

void mercury__ml_backend__ml_target_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_target_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ml_backend.ml_target_util. */
