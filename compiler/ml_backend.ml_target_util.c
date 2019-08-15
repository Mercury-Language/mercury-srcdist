/*
** Automatically generated from `ml_target_util.m'
** by the Mercury compiler,
** version rotd-2019-08-15
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


// :- module ml_backend.ml_target_util.
// :- implementation.

/*
INIT mercury__ml_backend__ml_target_util__init
ENDINIT
*/

#include "ml_backend.ml_target_util.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "parse_tree.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"










#include "io.mh"
#include "string.mh"
#include "time.mh"



MR_Word MR_CALL 
ml_backend__ml_target_util__target_supports_inheritence_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        {
          MR_Box conv0_HeadVar__2_2;

          conv0_HeadVar__2_2 = mercury__require__unexpected_2_f_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_String) "function \140ml_backend.ml_target_util.target_supports_inheritence\'/1", (MR_String) "target erlang");
          HeadVar__2_2 = ((MR_Word) (conv0_HeadVar__2_2));
        }
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_Integer) 1;
        break;
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_target_util__target_supports_break_and_continue_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        {
          mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_target_util.target_supports_break_and_continue\'/1", (MR_String) "target erlang");
        }
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_Integer) 1;
        break;
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_target_util__globals_target_supports_break_and_continue_1_f_0(
  MR_Word Globals_3)
{
  {
    MR_Word SupportsBreakContinue_4;
    MR_Word Target_5;

    libs__globals__get_target_2_p_0(Globals_3, &Target_5);
    switch (Target_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        SupportsBreakContinue_4 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        SupportsBreakContinue_4 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        {
          mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_target_util.target_supports_break_and_continue\'/1", (MR_String) "target erlang");
        }
        break;
      case (MR_Integer) 2:
        SupportsBreakContinue_4 = (MR_Integer) 1;
        break;
    }
    return SupportsBreakContinue_4;
  }
}

MR_Word MR_CALL 
ml_backend__ml_target_util__globals_target_supports_computed_goto_1_f_0(
  MR_Word Globals_3)
{
  {
    MR_Word SupportsComputedGoto_4;
    MR_Word Target_5;

    libs__globals__get_target_2_p_0(Globals_3, &Target_5);
    SupportsComputedGoto_4 = ml_backend__ml_target_util__target_supports_computed_goto_1_f_0(Target_5);
    return SupportsComputedGoto_4;
  }
}

MR_Word MR_CALL 
ml_backend__ml_target_util__target_supports_computed_goto_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        {
          MR_Box conv0_HeadVar__2_2;

          conv0_HeadVar__2_2 = mercury__require__unexpected_2_f_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_String) "function \140ml_backend.ml_target_util.target_supports_computed_goto\'/1", (MR_String) "target erlang");
          HeadVar__2_2 = ((MR_Word) (conv0_HeadVar__2_2));
        }
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_Integer) 0;
        break;
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_target_util__globals_target_supports_goto_1_f_0(
  MR_Word Globals_3)
{
  {
    MR_Word SupportsGoto_4;
    MR_Word Target_5;

    libs__globals__get_target_2_p_0(Globals_3, &Target_5);
    SupportsGoto_4 = ml_backend__ml_target_util__target_supports_goto_1_f_0(Target_5);
    return SupportsGoto_4;
  }
}

MR_Word MR_CALL 
ml_backend__ml_target_util__target_supports_goto_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        {
          MR_Box conv0_HeadVar__2_2;

          conv0_HeadVar__2_2 = mercury__require__unexpected_2_f_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_String) "function \140ml_backend.ml_target_util.target_supports_goto\'/1", (MR_String) "target erlang");
          HeadVar__2_2 = ((MR_Word) (conv0_HeadVar__2_2));
        }
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_Integer) 0;
        break;
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_target_util__globals_target_supports_string_switch_1_f_0(
  MR_Word Globals_3)
{
  {
    MR_Word SupportsStringSwitch_4;
    MR_Word Target_5;

    libs__globals__get_target_2_p_0(Globals_3, &Target_5);
    SupportsStringSwitch_4 = ml_backend__ml_target_util__target_supports_string_switch_1_f_0(Target_5);
    return SupportsStringSwitch_4;
  }
}

MR_Word MR_CALL 
ml_backend__ml_target_util__target_supports_string_switch_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        {
          MR_Box conv0_HeadVar__2_2;

          conv0_HeadVar__2_2 = mercury__require__unexpected_2_f_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_String) "function \140ml_backend.ml_target_util.target_supports_string_switch\'/1", (MR_String) "target erlang");
          HeadVar__2_2 = ((MR_Word) (conv0_HeadVar__2_2));
        }
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_Integer) 1;
        break;
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_target_util__globals_target_supports_int64_switch_1_f_0(
  MR_Word Globals_3)
{
  {
    MR_Word SupportsInt64Switch_4;
    MR_Word Target_5;

    libs__globals__get_target_2_p_0(Globals_3, &Target_5);
    SupportsInt64Switch_4 = ml_backend__ml_target_util__target_supports_int64_switch_1_f_0(Target_5);
    return SupportsInt64Switch_4;
  }
}

MR_Word MR_CALL 
ml_backend__ml_target_util__globals_target_supports_int_type_switch_2_f_0(
  MR_Word Globals_4,
  MR_Word IntType_5)
{
  {
    MR_Word SupportsIntTypeSwitch_6;

    switch (IntType_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 4:
      case (MR_Integer) 6:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
      case (MR_Integer) 5:
      case (MR_Integer) 7:
      case (MR_Integer) 3:
        {
          MR_Word Target_9;

          libs__globals__get_target_2_p_0(Globals_4, &Target_9);
          SupportsIntTypeSwitch_6 = ml_backend__ml_target_util__target_supports_int_switch_1_f_0(Target_9);
        }
        break;
      case (MR_Integer) 8:
      case (MR_Integer) 9:
        {
          MR_Word Target_12;

          libs__globals__get_target_2_p_0(Globals_4, &Target_12);
          SupportsIntTypeSwitch_6 = ml_backend__ml_target_util__target_supports_int64_switch_1_f_0(Target_12);
        }
        break;
    }
    return SupportsIntTypeSwitch_6;
  }
}

MR_Word MR_CALL 
ml_backend__ml_target_util__target_supports_int64_switch_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        {
          MR_Box conv0_HeadVar__2_2;

          conv0_HeadVar__2_2 = mercury__require__unexpected_2_f_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_String) "function \140ml_backend.ml_target_util.target_supports_int64_switch\'/1", (MR_String) "target erlang");
          HeadVar__2_2 = ((MR_Word) (conv0_HeadVar__2_2));
        }
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_Integer) 0;
        break;
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_target_util__globals_target_supports_int_switch_1_f_0(
  MR_Word Globals_3)
{
  {
    MR_Word SupportsIntSwitch_4;
    MR_Word Target_5;

    libs__globals__get_target_2_p_0(Globals_3, &Target_5);
    SupportsIntSwitch_4 = ml_backend__ml_target_util__target_supports_int_switch_1_f_0(Target_5);
    return SupportsIntSwitch_4;
  }
}

MR_Word MR_CALL 
ml_backend__ml_target_util__target_supports_int_switch_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        {
          MR_Box conv0_HeadVar__2_2;

          conv0_HeadVar__2_2 = mercury__require__unexpected_2_f_0((MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_String) "function \140ml_backend.ml_target_util.target_supports_int_switch\'/1", (MR_String) "target erlang");
          HeadVar__2_2 = ((MR_Word) (conv0_HeadVar__2_2));
        }
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_Integer) 1;
        break;
    }
    return HeadVar__2_2;
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

// :- end_module ml_backend.ml_target_util.
