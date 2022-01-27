/*
** Automatically generated from `ml_target_util.m'
** by the Mercury compiler,
** version 2015-10-27
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


#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "parse_tree.mih"
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



#line 39 "ml_target_util.m"
MR_Word MR_CALL 
ml_backend__ml_target_util__target_supports_inheritence_1_f_0(
#line 39 "ml_target_util.m"
  MR_Word ml_backend__ml_target_util__HeadVar__1_1)
#line 39 "ml_target_util.m"
{
#line 103 "ml_target_util.m"
  {
#line 103 "ml_target_util.m"
    MR_bool ml_backend__ml_target_util__succeeded;
#line 103 "ml_target_util.m"
    MR_Word ml_backend__ml_target_util__HeadVar__2_2;

#line 103 "ml_target_util.m"
#line 103 "ml_target_util.m"
    switch (ml_backend__ml_target_util__HeadVar__1_1) {
#line 103 "ml_target_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 103 "ml_target_util.m"
      case (MR_Integer) 0:
#line 103 "ml_target_util.m"
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 0;
#line 103 "ml_target_util.m"
        break;
#line 103 "ml_target_util.m"
      case (MR_Integer) 1:
#line 104 "ml_target_util.m"
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
#line 103 "ml_target_util.m"
        break;
#line 103 "ml_target_util.m"
      case (MR_Integer) 3:
#line 106 "ml_target_util.m"
        {
#line 107 "ml_target_util.m"
          MR_Box ml_backend__ml_target_util__conv0_HeadVar__2_2;

#line 107 "ml_target_util.m"
          {
#line 107 "ml_target_util.m"
            ml_backend__ml_target_util__conv0_HeadVar__2_2 = mercury__require__unexpected_3_f_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_String) "ml_backend.ml_target_util", (MR_String) "function \140ml_backend.ml_target_util.target_supports_inheritence\'/1", (MR_String) "target erlang");
          }
#line 107 "ml_target_util.m"
          ml_backend__ml_target_util__HeadVar__2_2 = ((MR_Word) ml_backend__ml_target_util__conv0_HeadVar__2_2);
#line 106 "ml_target_util.m"
        }
#line 103 "ml_target_util.m"
        break;
#line 103 "ml_target_util.m"
      case (MR_Integer) 2:
#line 105 "ml_target_util.m"
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
#line 103 "ml_target_util.m"
        break;
#line 103 "ml_target_util.m"
    }
#line 103 "ml_target_util.m"
    return ml_backend__ml_target_util__HeadVar__2_2;
#line 103 "ml_target_util.m"
  }
#line 39 "ml_target_util.m"
}

#line 35 "ml_target_util.m"
MR_Word MR_CALL 
ml_backend__ml_target_util__target_supports_break_and_continue_1_f_0(
#line 35 "ml_target_util.m"
  MR_Word ml_backend__ml_target_util__HeadVar__1_1)
#line 35 "ml_target_util.m"
{
#line 96 "ml_target_util.m"
  {
#line 96 "ml_target_util.m"
    MR_bool ml_backend__ml_target_util__succeeded;
#line 96 "ml_target_util.m"
    MR_Word ml_backend__ml_target_util__HeadVar__2_2;

#line 96 "ml_target_util.m"
#line 96 "ml_target_util.m"
    switch (ml_backend__ml_target_util__HeadVar__1_1) {
#line 96 "ml_target_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 96 "ml_target_util.m"
      case (MR_Integer) 0:
#line 96 "ml_target_util.m"
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
#line 96 "ml_target_util.m"
        break;
#line 96 "ml_target_util.m"
      case (MR_Integer) 1:
#line 97 "ml_target_util.m"
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
#line 96 "ml_target_util.m"
        break;
#line 96 "ml_target_util.m"
      case (MR_Integer) 3:
#line 100 "ml_target_util.m"
        {
#line 101 "ml_target_util.m"
          {
#line 101 "ml_target_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_target_util", (MR_String) "function \140ml_backend.ml_target_util.target_supports_break_and_continue\'/1", (MR_String) "target erlang");
          }
#line 100 "ml_target_util.m"
        }
#line 96 "ml_target_util.m"
        break;
#line 96 "ml_target_util.m"
      case (MR_Integer) 2:
#line 98 "ml_target_util.m"
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
#line 96 "ml_target_util.m"
        break;
#line 96 "ml_target_util.m"
    }
#line 96 "ml_target_util.m"
    return ml_backend__ml_target_util__HeadVar__2_2;
#line 96 "ml_target_util.m"
  }
#line 35 "ml_target_util.m"
}

#line 34 "ml_target_util.m"
MR_Word MR_CALL 
ml_backend__ml_target_util__target_supports_computed_goto_1_f_0(
#line 34 "ml_target_util.m"
  MR_Word ml_backend__ml_target_util__HeadVar__1_1)
#line 34 "ml_target_util.m"
{
#line 83 "ml_target_util.m"
  {
#line 83 "ml_target_util.m"
    MR_bool ml_backend__ml_target_util__succeeded;
#line 83 "ml_target_util.m"
    MR_Word ml_backend__ml_target_util__HeadVar__2_2;

#line 83 "ml_target_util.m"
#line 83 "ml_target_util.m"
    switch (ml_backend__ml_target_util__HeadVar__1_1) {
#line 83 "ml_target_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 83 "ml_target_util.m"
      case (MR_Integer) 0:
#line 83 "ml_target_util.m"
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
#line 83 "ml_target_util.m"
        break;
#line 83 "ml_target_util.m"
      case (MR_Integer) 1:
#line 84 "ml_target_util.m"
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
#line 83 "ml_target_util.m"
        break;
#line 83 "ml_target_util.m"
      case (MR_Integer) 3:
#line 87 "ml_target_util.m"
        {
#line 88 "ml_target_util.m"
          MR_Box ml_backend__ml_target_util__conv0_HeadVar__2_2;

#line 88 "ml_target_util.m"
          {
#line 88 "ml_target_util.m"
            ml_backend__ml_target_util__conv0_HeadVar__2_2 = mercury__require__unexpected_3_f_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_String) "ml_backend.ml_target_util", (MR_String) "function \140ml_backend.ml_target_util.target_supports_computed_goto\'/1", (MR_String) "target erlang");
          }
#line 88 "ml_target_util.m"
          ml_backend__ml_target_util__HeadVar__2_2 = ((MR_Word) ml_backend__ml_target_util__conv0_HeadVar__2_2);
#line 87 "ml_target_util.m"
        }
#line 83 "ml_target_util.m"
        break;
#line 83 "ml_target_util.m"
      case (MR_Integer) 2:
#line 85 "ml_target_util.m"
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 0;
#line 83 "ml_target_util.m"
        break;
#line 83 "ml_target_util.m"
    }
#line 83 "ml_target_util.m"
    return ml_backend__ml_target_util__HeadVar__2_2;
#line 83 "ml_target_util.m"
  }
#line 34 "ml_target_util.m"
}

#line 33 "ml_target_util.m"
MR_Word MR_CALL 
ml_backend__ml_target_util__target_supports_goto_1_f_0(
#line 33 "ml_target_util.m"
  MR_Word ml_backend__ml_target_util__HeadVar__1_1)
#line 33 "ml_target_util.m"
{
#line 90 "ml_target_util.m"
  {
#line 90 "ml_target_util.m"
    MR_bool ml_backend__ml_target_util__succeeded;
#line 90 "ml_target_util.m"
    MR_Word ml_backend__ml_target_util__HeadVar__2_2;

#line 90 "ml_target_util.m"
#line 90 "ml_target_util.m"
    switch (ml_backend__ml_target_util__HeadVar__1_1) {
#line 90 "ml_target_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 90 "ml_target_util.m"
      case (MR_Integer) 0:
#line 90 "ml_target_util.m"
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
#line 90 "ml_target_util.m"
        break;
#line 90 "ml_target_util.m"
      case (MR_Integer) 1:
#line 91 "ml_target_util.m"
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
#line 90 "ml_target_util.m"
        break;
#line 90 "ml_target_util.m"
      case (MR_Integer) 3:
#line 93 "ml_target_util.m"
        {
#line 94 "ml_target_util.m"
          MR_Box ml_backend__ml_target_util__conv0_HeadVar__2_2;

#line 94 "ml_target_util.m"
          {
#line 94 "ml_target_util.m"
            ml_backend__ml_target_util__conv0_HeadVar__2_2 = mercury__require__unexpected_3_f_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_String) "ml_backend.ml_target_util", (MR_String) "function \140ml_backend.ml_target_util.target_supports_goto\'/1", (MR_String) "target erlang");
          }
#line 94 "ml_target_util.m"
          ml_backend__ml_target_util__HeadVar__2_2 = ((MR_Word) ml_backend__ml_target_util__conv0_HeadVar__2_2);
#line 93 "ml_target_util.m"
        }
#line 90 "ml_target_util.m"
        break;
#line 90 "ml_target_util.m"
      case (MR_Integer) 2:
#line 92 "ml_target_util.m"
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 0;
#line 90 "ml_target_util.m"
        break;
#line 90 "ml_target_util.m"
    }
#line 90 "ml_target_util.m"
    return ml_backend__ml_target_util__HeadVar__2_2;
#line 90 "ml_target_util.m"
  }
#line 33 "ml_target_util.m"
}

#line 32 "ml_target_util.m"
MR_Word MR_CALL 
ml_backend__ml_target_util__target_supports_string_switch_1_f_0(
#line 32 "ml_target_util.m"
  MR_Word ml_backend__ml_target_util__HeadVar__1_1)
#line 32 "ml_target_util.m"
{
#line 76 "ml_target_util.m"
  {
#line 76 "ml_target_util.m"
    MR_bool ml_backend__ml_target_util__succeeded;
#line 76 "ml_target_util.m"
    MR_Word ml_backend__ml_target_util__HeadVar__2_2;

#line 76 "ml_target_util.m"
#line 76 "ml_target_util.m"
    switch (ml_backend__ml_target_util__HeadVar__1_1) {
#line 76 "ml_target_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 76 "ml_target_util.m"
      case (MR_Integer) 0:
#line 76 "ml_target_util.m"
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 0;
#line 76 "ml_target_util.m"
        break;
#line 76 "ml_target_util.m"
      case (MR_Integer) 1:
#line 77 "ml_target_util.m"
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
#line 76 "ml_target_util.m"
        break;
#line 76 "ml_target_util.m"
      case (MR_Integer) 3:
#line 80 "ml_target_util.m"
        {
#line 81 "ml_target_util.m"
          MR_Box ml_backend__ml_target_util__conv0_HeadVar__2_2;

#line 81 "ml_target_util.m"
          {
#line 81 "ml_target_util.m"
            ml_backend__ml_target_util__conv0_HeadVar__2_2 = mercury__require__unexpected_3_f_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_String) "ml_backend.ml_target_util", (MR_String) "function \140ml_backend.ml_target_util.target_supports_string_switch\'/1", (MR_String) "target erlang");
          }
#line 81 "ml_target_util.m"
          ml_backend__ml_target_util__HeadVar__2_2 = ((MR_Word) ml_backend__ml_target_util__conv0_HeadVar__2_2);
#line 80 "ml_target_util.m"
        }
#line 76 "ml_target_util.m"
        break;
#line 76 "ml_target_util.m"
      case (MR_Integer) 2:
#line 78 "ml_target_util.m"
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 0;
#line 76 "ml_target_util.m"
        break;
#line 76 "ml_target_util.m"
    }
#line 76 "ml_target_util.m"
    return ml_backend__ml_target_util__HeadVar__2_2;
#line 76 "ml_target_util.m"
  }
#line 32 "ml_target_util.m"
}

#line 31 "ml_target_util.m"
MR_Word MR_CALL 
ml_backend__ml_target_util__target_supports_int_switch_1_f_0(
#line 31 "ml_target_util.m"
  MR_Word ml_backend__ml_target_util__HeadVar__1_1)
#line 31 "ml_target_util.m"
{
#line 70 "ml_target_util.m"
  {
#line 70 "ml_target_util.m"
    MR_bool ml_backend__ml_target_util__succeeded;
#line 70 "ml_target_util.m"
    MR_Word ml_backend__ml_target_util__HeadVar__2_2;

#line 70 "ml_target_util.m"
#line 70 "ml_target_util.m"
    switch (ml_backend__ml_target_util__HeadVar__1_1) {
#line 70 "ml_target_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 70 "ml_target_util.m"
      case (MR_Integer) 0:
#line 70 "ml_target_util.m"
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
#line 70 "ml_target_util.m"
        break;
#line 70 "ml_target_util.m"
      case (MR_Integer) 1:
#line 71 "ml_target_util.m"
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
#line 70 "ml_target_util.m"
        break;
#line 70 "ml_target_util.m"
      case (MR_Integer) 3:
#line 73 "ml_target_util.m"
        {
#line 74 "ml_target_util.m"
          MR_Box ml_backend__ml_target_util__conv0_HeadVar__2_2;

#line 74 "ml_target_util.m"
          {
#line 74 "ml_target_util.m"
            ml_backend__ml_target_util__conv0_HeadVar__2_2 = mercury__require__unexpected_3_f_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_String) "ml_backend.ml_target_util", (MR_String) "function \140ml_backend.ml_target_util.target_supports_int_switch\'/1", (MR_String) "target erlang");
          }
#line 74 "ml_target_util.m"
          ml_backend__ml_target_util__HeadVar__2_2 = ((MR_Word) ml_backend__ml_target_util__conv0_HeadVar__2_2);
#line 73 "ml_target_util.m"
        }
#line 70 "ml_target_util.m"
        break;
#line 70 "ml_target_util.m"
      case (MR_Integer) 2:
#line 72 "ml_target_util.m"
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
#line 70 "ml_target_util.m"
        break;
#line 70 "ml_target_util.m"
    }
#line 70 "ml_target_util.m"
    return ml_backend__ml_target_util__HeadVar__2_2;
#line 70 "ml_target_util.m"
  }
#line 31 "ml_target_util.m"
}

#line 29 "ml_target_util.m"
MR_Word MR_CALL 
ml_backend__ml_target_util__globals_target_supports_break_and_continue_1_f_0(
#line 29 "ml_target_util.m"
  MR_Word ml_backend__ml_target_util__Globals_3)
#line 29 "ml_target_util.m"
{
#line 64 "ml_target_util.m"
  {
#line 64 "ml_target_util.m"
    MR_bool ml_backend__ml_target_util__succeeded;
#line 64 "ml_target_util.m"
    MR_Word ml_backend__ml_target_util__SupportsBreakContinue_4;
#line 64 "ml_target_util.m"
    MR_Word ml_backend__ml_target_util__Target_5;

#line 65 "ml_target_util.m"
    {
#line 65 "ml_target_util.m"
      libs__globals__get_target_2_p_0(ml_backend__ml_target_util__Globals_3, &ml_backend__ml_target_util__Target_5);
    }
#line 66 "ml_target_util.m"
    {
#line 66 "ml_target_util.m"
      return ml_backend__ml_target_util__SupportsBreakContinue_4 = ml_backend__ml_target_util__target_supports_break_and_continue_1_f_0(ml_backend__ml_target_util__Target_5);
    }
#line 64 "ml_target_util.m"
    return ml_backend__ml_target_util__SupportsBreakContinue_4;
#line 64 "ml_target_util.m"
  }
#line 29 "ml_target_util.m"
}

#line 28 "ml_target_util.m"
MR_Word MR_CALL 
ml_backend__ml_target_util__globals_target_supports_computed_goto_1_f_0(
#line 28 "ml_target_util.m"
  MR_Word ml_backend__ml_target_util__Globals_3)
#line 28 "ml_target_util.m"
{
#line 60 "ml_target_util.m"
  {
#line 60 "ml_target_util.m"
    MR_bool ml_backend__ml_target_util__succeeded;
#line 60 "ml_target_util.m"
    MR_Word ml_backend__ml_target_util__SupportsComputedGoto_4;
#line 60 "ml_target_util.m"
    MR_Word ml_backend__ml_target_util__Target_5;

#line 61 "ml_target_util.m"
    {
#line 61 "ml_target_util.m"
      libs__globals__get_target_2_p_0(ml_backend__ml_target_util__Globals_3, &ml_backend__ml_target_util__Target_5);
    }
#line 62 "ml_target_util.m"
    {
#line 62 "ml_target_util.m"
      return ml_backend__ml_target_util__SupportsComputedGoto_4 = ml_backend__ml_target_util__target_supports_computed_goto_1_f_0(ml_backend__ml_target_util__Target_5);
    }
#line 60 "ml_target_util.m"
    return ml_backend__ml_target_util__SupportsComputedGoto_4;
#line 60 "ml_target_util.m"
  }
#line 28 "ml_target_util.m"
}

#line 27 "ml_target_util.m"
MR_Word MR_CALL 
ml_backend__ml_target_util__globals_target_supports_goto_1_f_0(
#line 27 "ml_target_util.m"
  MR_Word ml_backend__ml_target_util__Globals_3)
#line 27 "ml_target_util.m"
{
#line 56 "ml_target_util.m"
  {
#line 56 "ml_target_util.m"
    MR_bool ml_backend__ml_target_util__succeeded;
#line 56 "ml_target_util.m"
    MR_Word ml_backend__ml_target_util__SupportsGoto_4;
#line 56 "ml_target_util.m"
    MR_Word ml_backend__ml_target_util__Target_5;

#line 57 "ml_target_util.m"
    {
#line 57 "ml_target_util.m"
      libs__globals__get_target_2_p_0(ml_backend__ml_target_util__Globals_3, &ml_backend__ml_target_util__Target_5);
    }
#line 58 "ml_target_util.m"
    {
#line 58 "ml_target_util.m"
      return ml_backend__ml_target_util__SupportsGoto_4 = ml_backend__ml_target_util__target_supports_goto_1_f_0(ml_backend__ml_target_util__Target_5);
    }
#line 56 "ml_target_util.m"
    return ml_backend__ml_target_util__SupportsGoto_4;
#line 56 "ml_target_util.m"
  }
#line 27 "ml_target_util.m"
}

#line 26 "ml_target_util.m"
MR_Word MR_CALL 
ml_backend__ml_target_util__globals_target_supports_string_switch_1_f_0(
#line 26 "ml_target_util.m"
  MR_Word ml_backend__ml_target_util__Globals_3)
#line 26 "ml_target_util.m"
{
#line 52 "ml_target_util.m"
  {
#line 52 "ml_target_util.m"
    MR_bool ml_backend__ml_target_util__succeeded;
#line 52 "ml_target_util.m"
    MR_Word ml_backend__ml_target_util__SupportsStringSwitch_4;
#line 52 "ml_target_util.m"
    MR_Word ml_backend__ml_target_util__Target_5;

#line 53 "ml_target_util.m"
    {
#line 53 "ml_target_util.m"
      libs__globals__get_target_2_p_0(ml_backend__ml_target_util__Globals_3, &ml_backend__ml_target_util__Target_5);
    }
#line 54 "ml_target_util.m"
    {
#line 54 "ml_target_util.m"
      return ml_backend__ml_target_util__SupportsStringSwitch_4 = ml_backend__ml_target_util__target_supports_string_switch_1_f_0(ml_backend__ml_target_util__Target_5);
    }
#line 52 "ml_target_util.m"
    return ml_backend__ml_target_util__SupportsStringSwitch_4;
#line 52 "ml_target_util.m"
  }
#line 26 "ml_target_util.m"
}

#line 25 "ml_target_util.m"
MR_Word MR_CALL 
ml_backend__ml_target_util__globals_target_supports_int_switch_1_f_0(
#line 25 "ml_target_util.m"
  MR_Word ml_backend__ml_target_util__Globals_3)
#line 25 "ml_target_util.m"
{
#line 48 "ml_target_util.m"
  {
#line 48 "ml_target_util.m"
    MR_bool ml_backend__ml_target_util__succeeded;
#line 48 "ml_target_util.m"
    MR_Word ml_backend__ml_target_util__SupportsIntSwitch_4;
#line 48 "ml_target_util.m"
    MR_Word ml_backend__ml_target_util__Target_5;

#line 49 "ml_target_util.m"
    {
#line 49 "ml_target_util.m"
      libs__globals__get_target_2_p_0(ml_backend__ml_target_util__Globals_3, &ml_backend__ml_target_util__Target_5);
    }
#line 50 "ml_target_util.m"
    {
#line 50 "ml_target_util.m"
      return ml_backend__ml_target_util__SupportsIntSwitch_4 = ml_backend__ml_target_util__target_supports_int_switch_1_f_0(ml_backend__ml_target_util__Target_5);
    }
#line 48 "ml_target_util.m"
    return ml_backend__ml_target_util__SupportsIntSwitch_4;
#line 48 "ml_target_util.m"
  }
#line 25 "ml_target_util.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ml_backend.ml_target_util. */
