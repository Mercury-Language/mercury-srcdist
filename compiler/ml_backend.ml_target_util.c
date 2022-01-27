/*
** Automatically generated from `ml_target_util.m'
** by the Mercury compiler,
** version rotd-2014-12-12
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


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"










#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"



#line 39 "ml_target_util.m"
MR_Word MR_CALL 
ml_backend__ml_target_util__target_supports_inheritence_1_f_0(
#line 39 "ml_target_util.m"
  MR_Word ml_backend__ml_target_util__HeadVar__1_1)
#line 39 "ml_target_util.m"
{
#line 108 "ml_target_util.m"
  {
#line 108 "ml_target_util.m"
    MR_bool ml_backend__ml_target_util__succeeded;
#line 108 "ml_target_util.m"
    MR_Word ml_backend__ml_target_util__HeadVar__2_2;

#line 108 "ml_target_util.m"
    if ((ml_backend__ml_target_util__HeadVar__1_1 == (MR_Integer) 0))
#line 108 "ml_target_util.m"
      ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 0;
#line 108 "ml_target_util.m"
    else
#line 108 "ml_target_util.m"
      if ((ml_backend__ml_target_util__HeadVar__1_1 == (MR_Integer) 2))
#line 110 "ml_target_util.m"
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
#line 108 "ml_target_util.m"
      else
#line 108 "ml_target_util.m"
        if ((ml_backend__ml_target_util__HeadVar__1_1 == (MR_Integer) 4))
#line 112 "ml_target_util.m"
          {
#line 113 "ml_target_util.m"
            MR_Box ml_backend__ml_target_util__conv0_HeadVar__2_2;

#line 113 "ml_target_util.m"
            {
#line 113 "ml_target_util.m"
              ml_backend__ml_target_util__conv0_HeadVar__2_2 = mercury__require__unexpected_3_f_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_String) "ml_backend.ml_target_util", (MR_String) "function \140ml_backend.ml_target_util.target_supports_inheritence\'/1", (MR_String) "target erlang");
            }
#line 113 "ml_target_util.m"
            ml_backend__ml_target_util__HeadVar__2_2 = ((MR_Word) ml_backend__ml_target_util__conv0_HeadVar__2_2);
#line 112 "ml_target_util.m"
          }
#line 108 "ml_target_util.m"
        else
#line 108 "ml_target_util.m"
          if ((ml_backend__ml_target_util__HeadVar__1_1 == (MR_Integer) 1))
#line 109 "ml_target_util.m"
            ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
#line 108 "ml_target_util.m"
          else
#line 111 "ml_target_util.m"
            ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
#line 108 "ml_target_util.m"
    return ml_backend__ml_target_util__HeadVar__2_2;
#line 108 "ml_target_util.m"
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
#line 100 "ml_target_util.m"
  {
#line 100 "ml_target_util.m"
    MR_bool ml_backend__ml_target_util__succeeded;
#line 100 "ml_target_util.m"
    MR_Word ml_backend__ml_target_util__HeadVar__2_2;

#line 100 "ml_target_util.m"
    if ((ml_backend__ml_target_util__HeadVar__1_1 == (MR_Integer) 0))
#line 100 "ml_target_util.m"
      ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
#line 100 "ml_target_util.m"
    else
#line 100 "ml_target_util.m"
      if ((ml_backend__ml_target_util__HeadVar__1_1 == (MR_Integer) 2))
#line 102 "ml_target_util.m"
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
#line 100 "ml_target_util.m"
      else
#line 100 "ml_target_util.m"
        if ((ml_backend__ml_target_util__HeadVar__1_1 == (MR_Integer) 4))
#line 105 "ml_target_util.m"
          {
#line 106 "ml_target_util.m"
            {
#line 106 "ml_target_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_target_util", (MR_String) "function \140ml_backend.ml_target_util.target_supports_break_and_continue\'/1", (MR_String) "target erlang");
            }
#line 105 "ml_target_util.m"
          }
#line 100 "ml_target_util.m"
        else
#line 100 "ml_target_util.m"
          if ((ml_backend__ml_target_util__HeadVar__1_1 == (MR_Integer) 1))
#line 101 "ml_target_util.m"
            ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 0;
#line 100 "ml_target_util.m"
          else
#line 103 "ml_target_util.m"
            ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
#line 100 "ml_target_util.m"
    return ml_backend__ml_target_util__HeadVar__2_2;
#line 100 "ml_target_util.m"
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
#line 85 "ml_target_util.m"
  {
#line 85 "ml_target_util.m"
    MR_bool ml_backend__ml_target_util__succeeded;
#line 85 "ml_target_util.m"
    MR_Word ml_backend__ml_target_util__HeadVar__2_2;

#line 85 "ml_target_util.m"
    if ((ml_backend__ml_target_util__HeadVar__1_1 == (MR_Integer) 0))
#line 85 "ml_target_util.m"
      ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
#line 85 "ml_target_util.m"
    else
#line 85 "ml_target_util.m"
      if ((ml_backend__ml_target_util__HeadVar__1_1 == (MR_Integer) 2))
#line 87 "ml_target_util.m"
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
#line 85 "ml_target_util.m"
      else
#line 85 "ml_target_util.m"
        if ((ml_backend__ml_target_util__HeadVar__1_1 == (MR_Integer) 4))
#line 90 "ml_target_util.m"
          {
#line 91 "ml_target_util.m"
            MR_Box ml_backend__ml_target_util__conv0_HeadVar__2_2;

#line 91 "ml_target_util.m"
            {
#line 91 "ml_target_util.m"
              ml_backend__ml_target_util__conv0_HeadVar__2_2 = mercury__require__unexpected_3_f_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_String) "ml_backend.ml_target_util", (MR_String) "function \140ml_backend.ml_target_util.target_supports_computed_goto\'/1", (MR_String) "target erlang");
            }
#line 91 "ml_target_util.m"
            ml_backend__ml_target_util__HeadVar__2_2 = ((MR_Word) ml_backend__ml_target_util__conv0_HeadVar__2_2);
#line 90 "ml_target_util.m"
          }
#line 85 "ml_target_util.m"
        else
#line 85 "ml_target_util.m"
          if ((ml_backend__ml_target_util__HeadVar__1_1 == (MR_Integer) 1))
#line 86 "ml_target_util.m"
            ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
#line 85 "ml_target_util.m"
          else
#line 88 "ml_target_util.m"
            ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 0;
#line 85 "ml_target_util.m"
    return ml_backend__ml_target_util__HeadVar__2_2;
#line 85 "ml_target_util.m"
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
#line 93 "ml_target_util.m"
  {
#line 93 "ml_target_util.m"
    MR_bool ml_backend__ml_target_util__succeeded;
#line 93 "ml_target_util.m"
    MR_Word ml_backend__ml_target_util__HeadVar__2_2;

#line 93 "ml_target_util.m"
    if ((ml_backend__ml_target_util__HeadVar__1_1 == (MR_Integer) 0))
#line 93 "ml_target_util.m"
      ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
#line 93 "ml_target_util.m"
    else
#line 93 "ml_target_util.m"
      if ((ml_backend__ml_target_util__HeadVar__1_1 == (MR_Integer) 2))
#line 95 "ml_target_util.m"
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
#line 93 "ml_target_util.m"
      else
#line 93 "ml_target_util.m"
        if ((ml_backend__ml_target_util__HeadVar__1_1 == (MR_Integer) 4))
#line 97 "ml_target_util.m"
          {
#line 98 "ml_target_util.m"
            MR_Box ml_backend__ml_target_util__conv0_HeadVar__2_2;

#line 98 "ml_target_util.m"
            {
#line 98 "ml_target_util.m"
              ml_backend__ml_target_util__conv0_HeadVar__2_2 = mercury__require__unexpected_3_f_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_String) "ml_backend.ml_target_util", (MR_String) "function \140ml_backend.ml_target_util.target_supports_goto\'/1", (MR_String) "target erlang");
            }
#line 98 "ml_target_util.m"
            ml_backend__ml_target_util__HeadVar__2_2 = ((MR_Word) ml_backend__ml_target_util__conv0_HeadVar__2_2);
#line 97 "ml_target_util.m"
          }
#line 93 "ml_target_util.m"
        else
#line 93 "ml_target_util.m"
          if ((ml_backend__ml_target_util__HeadVar__1_1 == (MR_Integer) 1))
#line 94 "ml_target_util.m"
            ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
#line 93 "ml_target_util.m"
          else
#line 96 "ml_target_util.m"
            ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 0;
#line 93 "ml_target_util.m"
    return ml_backend__ml_target_util__HeadVar__2_2;
#line 93 "ml_target_util.m"
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
#line 77 "ml_target_util.m"
  {
#line 77 "ml_target_util.m"
    MR_bool ml_backend__ml_target_util__succeeded;
#line 77 "ml_target_util.m"
    MR_Word ml_backend__ml_target_util__HeadVar__2_2;

#line 77 "ml_target_util.m"
    if ((ml_backend__ml_target_util__HeadVar__1_1 == (MR_Integer) 0))
#line 77 "ml_target_util.m"
      ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 0;
#line 77 "ml_target_util.m"
    else
#line 77 "ml_target_util.m"
      if ((ml_backend__ml_target_util__HeadVar__1_1 == (MR_Integer) 2))
#line 79 "ml_target_util.m"
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
#line 77 "ml_target_util.m"
      else
#line 77 "ml_target_util.m"
        if ((ml_backend__ml_target_util__HeadVar__1_1 == (MR_Integer) 4))
#line 82 "ml_target_util.m"
          {
#line 83 "ml_target_util.m"
            MR_Box ml_backend__ml_target_util__conv0_HeadVar__2_2;

#line 83 "ml_target_util.m"
            {
#line 83 "ml_target_util.m"
              ml_backend__ml_target_util__conv0_HeadVar__2_2 = mercury__require__unexpected_3_f_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_String) "ml_backend.ml_target_util", (MR_String) "function \140ml_backend.ml_target_util.target_supports_string_switch\'/1", (MR_String) "target erlang");
            }
#line 83 "ml_target_util.m"
            ml_backend__ml_target_util__HeadVar__2_2 = ((MR_Word) ml_backend__ml_target_util__conv0_HeadVar__2_2);
#line 82 "ml_target_util.m"
          }
#line 77 "ml_target_util.m"
        else
#line 77 "ml_target_util.m"
          if ((ml_backend__ml_target_util__HeadVar__1_1 == (MR_Integer) 1))
#line 78 "ml_target_util.m"
            ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 0;
#line 77 "ml_target_util.m"
          else
#line 80 "ml_target_util.m"
            ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 0;
#line 77 "ml_target_util.m"
    return ml_backend__ml_target_util__HeadVar__2_2;
#line 77 "ml_target_util.m"
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
    if ((ml_backend__ml_target_util__HeadVar__1_1 == (MR_Integer) 0))
#line 70 "ml_target_util.m"
      ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
#line 70 "ml_target_util.m"
    else
#line 70 "ml_target_util.m"
      if ((ml_backend__ml_target_util__HeadVar__1_1 == (MR_Integer) 2))
#line 72 "ml_target_util.m"
        ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
#line 70 "ml_target_util.m"
      else
#line 70 "ml_target_util.m"
        if ((ml_backend__ml_target_util__HeadVar__1_1 == (MR_Integer) 4))
#line 74 "ml_target_util.m"
          {
#line 75 "ml_target_util.m"
            MR_Box ml_backend__ml_target_util__conv0_HeadVar__2_2;

#line 75 "ml_target_util.m"
            {
#line 75 "ml_target_util.m"
              ml_backend__ml_target_util__conv0_HeadVar__2_2 = mercury__require__unexpected_3_f_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_String) "ml_backend.ml_target_util", (MR_String) "function \140ml_backend.ml_target_util.target_supports_int_switch\'/1", (MR_String) "target erlang");
            }
#line 75 "ml_target_util.m"
            ml_backend__ml_target_util__HeadVar__2_2 = ((MR_Word) ml_backend__ml_target_util__conv0_HeadVar__2_2);
#line 74 "ml_target_util.m"
          }
#line 70 "ml_target_util.m"
        else
#line 70 "ml_target_util.m"
          if ((ml_backend__ml_target_util__HeadVar__1_1 == (MR_Integer) 1))
#line 71 "ml_target_util.m"
            ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 0;
#line 70 "ml_target_util.m"
          else
#line 73 "ml_target_util.m"
            ml_backend__ml_target_util__HeadVar__2_2 = (MR_Integer) 1;
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
