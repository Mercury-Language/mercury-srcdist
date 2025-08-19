/*
** Automatically generated from `mark_trace_goals.m'
** by the Mercury compiler,
** version rotd-2025-08-19
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


// :- module check_hlds.simplify.mark_trace_goals.
// :- implementation.

/*
INIT mercury__check_hlds__simplify__mark_trace_goals__init
ENDINIT
*/

#include "check_hlds.simplify.mark_trace_goals.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.simplify.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__mark_trace_goals__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__mark_trace_goals__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__mark_trace_goals__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__mark_trace_goals__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

static void MR_CALL 
check_hlds__simplify__mark_trace_goals__IntroducedFrom__pred__rejoin_last_nontrace_maps__303__1_2_p_0(
  MR_Word HeadVar__1_16,
  MR_Word * HeadVar__2_17);

static void MR_CALL 
check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_cases_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ContainsTrace_0_3,
  MR_Word * STATE_VARIABLE_ContainsTrace_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_LastNonTraceMaps_0_6,
  MR_Word * STATE_VARIABLE_LastNonTraceMaps_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9);

static void MR_CALL 
check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_disj_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ContainsTrace_0_3,
  MR_Word * STATE_VARIABLE_ContainsTrace_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_LastNonTraceMaps_0_6,
  MR_Word * STATE_VARIABLE_LastNonTraceMaps_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9);

static void MR_CALL 
check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_conj_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ContainsTrace_0_3,
  MR_Word * STATE_VARIABLE_ContainsTrace_4,
  MR_Word STATE_VARIABLE_LastNonTraceMap_0_5,
  MR_Word * STATE_VARIABLE_LastNonTraceMap_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
check_hlds__simplify__mark_trace_goals__rejoin_last_nontrace_maps_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__mark_trace_goals__rejoin_last_nontrace_maps_2_p_0(
  MR_Word LastNonTraceMaps_3,
  MR_Word * LastNonTraceMap_4);

static void MR_CALL 
check_hlds__simplify__mark_trace_goals__build_rejoined_last_nontrace_map_4_p_0(
  MR_String PrevFileName_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_LastNonTraceMap_0_3,
  MR_Word * STATE_VARIABLE_LastNonTraceMap_4);

static MR_bool MR_CALL 
check_hlds__simplify__mark_trace_goals____Unify____last_nontrace_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__mark_trace_goals____Compare____last_nontrace_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__simplify__mark_trace_goals_scalar_common_1[3][3];

static /* final */ const MR_Box check_hlds__simplify__mark_trace_goals_scalar_common_2[24][2];

static /* final */ const MR_Box check_hlds__simplify__mark_trace_goals_scalar_common_3[2][1];

static /* final */ const MR_Box check_hlds__simplify__mark_trace_goals_scalar_common_4[1][5];




static /* final */ const MR_Box check_hlds__simplify__mark_trace_goals_scalar_common_1[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__simplify__mark_trace_goals_scalar_common_4[0])),
    ((MR_Box) (check_hlds__simplify__mark_trace_goals__rejoin_last_nontrace_maps_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__mark_trace_goals_scalar_common_2[24][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__simplify__mark_trace_goals_scalar_common_1[1]))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: this trace goal was"))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__mark_trace_goals_scalar_common_2[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "reordered"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__mark_trace_goals_scalar_common_2[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the text of the program."))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__mark_trace_goals_scalar_common_2[6]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__mark_trace_goals_scalar_common_2[5])))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to execute after some goals that follow it"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__mark_trace_goals_scalar_common_2[8]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__mark_trace_goals_scalar_common_2[7])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "that the trace goal was moved after."))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__mark_trace_goals_scalar_common_2[10]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__mark_trace_goals_scalar_common_2[5])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and this goal may be only part of the conjunct"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__mark_trace_goals_scalar_common_2[12]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__mark_trace_goals_scalar_common_2[11])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "only within its original conjunction,"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__mark_trace_goals_scalar_common_2[14]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__mark_trace_goals_scalar_common_2[13])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Note that the trace goal would have been moved"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__mark_trace_goals_scalar_common_2[16]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__mark_trace_goals_scalar_common_2[15])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "this trace goal was moved after."))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__mark_trace_goals_scalar_common_2[18]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__mark_trace_goals_scalar_common_2[17])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of the last primitive goal that"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__mark_trace_goals_scalar_common_2[20]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__mark_trace_goals_scalar_common_2[19])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "This is the location"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__mark_trace_goals_scalar_common_2[22]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__mark_trace_goals_scalar_common_2[21])))
  },
};

static /* final */ const MR_Box check_hlds__simplify__mark_trace_goals_scalar_common_3[2][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 198U) },
};

static /* final */ const MR_Box check_hlds__simplify__mark_trace_goals_scalar_common_4[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__simplify__mark_trace_goals__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__simplify__mark_trace_goals__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__mark_trace_goals__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__mark_trace_goals__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__mark_trace_goals__list__pti_list_1__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__simplify__mark_trace_goals__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0) }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__mark_trace_goals__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__mark_trace_goals__check_hlds__simplify__mark_trace_goals__type_ctor_info_last_nontrace_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__mark_trace_goals____Unify____last_nontrace_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__mark_trace_goals____Compare____last_nontrace_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.mark_trace_goals",
  (MR_String) "last_nontrace_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__simplify__mark_trace_goals__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
check_hlds__simplify__mark_trace_goals__IntroducedFrom__pred__rejoin_last_nontrace_maps__303__1_2_p_0(
  MR_Word HeadVar__1_16,
  MR_Word * HeadVar__2_17)
{
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), HeadVar__1_16, HeadVar__2_17);
}

void MR_CALL 
check_hlds__simplify__mark_trace_goals____Compare____last_nontrace_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__mark_trace_goals_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
check_hlds__simplify__mark_trace_goals____Unify____last_nontrace_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__mark_trace_goals_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_cases_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ContainsTrace_0_3,
  MR_Word * STATE_VARIABLE_ContainsTrace_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_LastNonTraceMaps_0_6,
  MR_Word * STATE_VARIABLE_LastNonTraceMaps_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_9 = STATE_VARIABLE_Specs_0_8;
    *STATE_VARIABLE_LastNonTraceMaps_7 = STATE_VARIABLE_LastNonTraceMaps_0_6;
    *STATE_VARIABLE_ContainsTrace_4 = STATE_VARIABLE_ContainsTrace_0_3;
  }
  else
  {
    MR_Word Case0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Cases0_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Case_22;
    MR_Word Cases_23;
    MR_Word MainConsId_28 = ((MR_Word) ((MR_hl_field(0, Case0_20, 0))));
    MR_Word OtherConsIds_29 = ((MR_Word) ((MR_hl_field(0, Case0_20, 1))));
    MR_Word Goal0_30 = ((MR_Word) ((MR_hl_field(0, Case0_20, 2))));
    MR_Word Goal_31;
    MR_Word GoalContainsTrace_32;
    MR_Word GoalLastNonTraceMap_33;
    MR_Word STATE_VARIABLE_Specs_1_40;
    MR_Word STATE_VARIABLE_ContainsTrace_1_41;
    MR_Word STATE_VARIABLE_LastNonTraceMaps_1_42;

    check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_goal_7_p_0(Goal0_30, &Goal_31, &GoalContainsTrace_32, HeadVar__5_5, &GoalLastNonTraceMap_33, STATE_VARIABLE_Specs_0_8, &STATE_VARIABLE_Specs_1_40);
    {
      Case_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_22, 0) = ((MR_Box) (MainConsId_28));
      MR_hl_field(0, Case_22, 1) = ((MR_Box) (OtherConsIds_29));
      MR_hl_field(0, Case_22, 2) = ((MR_Box) (Goal_31));
    }
    STATE_VARIABLE_ContainsTrace_1_41 = hlds__hlds_goal__worst_contains_trace_2_f_0(GoalContainsTrace_32, STATE_VARIABLE_ContainsTrace_0_3);
    {
      STATE_VARIABLE_LastNonTraceMaps_1_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_LastNonTraceMaps_1_42, 0) = ((MR_Box) (GoalLastNonTraceMap_33));
      MR_hl_field(1, STATE_VARIABLE_LastNonTraceMaps_1_42, 1) = ((MR_Box) (STATE_VARIABLE_LastNonTraceMaps_0_6));
    }
    check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_cases_9_p_0(Cases0_21, &Cases_23, STATE_VARIABLE_ContainsTrace_1_41, STATE_VARIABLE_ContainsTrace_4, HeadVar__5_5, STATE_VARIABLE_LastNonTraceMaps_1_42, STATE_VARIABLE_LastNonTraceMaps_7, STATE_VARIABLE_Specs_1_40, STATE_VARIABLE_Specs_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_22));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_23));
    }
  }
}

static void MR_CALL 
check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_disj_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ContainsTrace_0_3,
  MR_Word * STATE_VARIABLE_ContainsTrace_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_LastNonTraceMaps_0_6,
  MR_Word * STATE_VARIABLE_LastNonTraceMaps_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_9 = STATE_VARIABLE_Specs_0_8;
    *STATE_VARIABLE_LastNonTraceMaps_7 = STATE_VARIABLE_LastNonTraceMaps_0_6;
    *STATE_VARIABLE_ContainsTrace_4 = STATE_VARIABLE_ContainsTrace_0_3;
  }
  else
  {
    MR_Word Goal0_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Goals0_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Goal_22;
    MR_Word Goals_23;
    MR_Word GoalContainsTrace_28;
    MR_Word GoalLastNonTraceMap_29;
    MR_Word STATE_VARIABLE_Specs_1_36;
    MR_Word STATE_VARIABLE_ContainsTrace_1_37;
    MR_Word STATE_VARIABLE_LastNonTraceMaps_1_38;

    check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_goal_7_p_0(Goal0_20, &Goal_22, &GoalContainsTrace_28, HeadVar__5_5, &GoalLastNonTraceMap_29, STATE_VARIABLE_Specs_0_8, &STATE_VARIABLE_Specs_1_36);
    STATE_VARIABLE_ContainsTrace_1_37 = hlds__hlds_goal__worst_contains_trace_2_f_0(GoalContainsTrace_28, STATE_VARIABLE_ContainsTrace_0_3);
    {
      STATE_VARIABLE_LastNonTraceMaps_1_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_LastNonTraceMaps_1_38, 0) = ((MR_Box) (GoalLastNonTraceMap_29));
      MR_hl_field(1, STATE_VARIABLE_LastNonTraceMaps_1_38, 1) = ((MR_Box) (STATE_VARIABLE_LastNonTraceMaps_0_6));
    }
    check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_disj_9_p_0(Goals0_21, &Goals_23, STATE_VARIABLE_ContainsTrace_1_37, STATE_VARIABLE_ContainsTrace_4, HeadVar__5_5, STATE_VARIABLE_LastNonTraceMaps_1_38, STATE_VARIABLE_LastNonTraceMaps_7, STATE_VARIABLE_Specs_1_36, STATE_VARIABLE_Specs_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_22));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_23));
    }
  }
}

static void MR_CALL 
check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_conj_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ContainsTrace_0_3,
  MR_Word * STATE_VARIABLE_ContainsTrace_4,
  MR_Word STATE_VARIABLE_LastNonTraceMap_0_5,
  MR_Word * STATE_VARIABLE_LastNonTraceMap_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    *STATE_VARIABLE_LastNonTraceMap_6 = STATE_VARIABLE_LastNonTraceMap_0_5;
    *STATE_VARIABLE_ContainsTrace_4 = STATE_VARIABLE_ContainsTrace_0_3;
  }
  else
  {
    MR_Word Goal0_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Goals0_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Goal_20;
    MR_Word Goals_21;
    MR_Word GoalContainsTrace_25;
    MR_Word STATE_VARIABLE_LastNonTraceMap_1_32;
    MR_Word STATE_VARIABLE_Specs_1_33;
    MR_Word STATE_VARIABLE_ContainsTrace_1_34;

    check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_goal_7_p_0(Goal0_18, &Goal_20, &GoalContainsTrace_25, STATE_VARIABLE_LastNonTraceMap_0_5, &STATE_VARIABLE_LastNonTraceMap_1_32, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_1_33);
    STATE_VARIABLE_ContainsTrace_1_34 = hlds__hlds_goal__worst_contains_trace_2_f_0(GoalContainsTrace_25, STATE_VARIABLE_ContainsTrace_0_3);
    check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_conj_8_p_0(Goals0_19, &Goals_21, STATE_VARIABLE_ContainsTrace_1_34, STATE_VARIABLE_ContainsTrace_4, STATE_VARIABLE_LastNonTraceMap_1_32, STATE_VARIABLE_LastNonTraceMap_6, STATE_VARIABLE_Specs_1_33, STATE_VARIABLE_Specs_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_20));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_21));
    }
  }
}

void MR_CALL 
check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_goal_7_p_0(
  MR_Word Goal0_8,
  MR_Word * Goal_9,
  MR_Word * ContainsTrace_10,
  MR_Word STATE_VARIABLE_LastNonTraceMap_0_121,
  MR_Word * STATE_VARIABLE_LastNonTraceMap_122,
  MR_Word STATE_VARIABLE_Specs_0_123,
  MR_Word * STATE_VARIABLE_Specs_124)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_13 = ((MR_Word) ((MR_hl_field(0, Goal0_8, 0))));
  MR_Word GoalInfo0_14 = ((MR_Word) ((MR_hl_field(0, Goal0_8, 1))));
  MR_Word GoalExpr_38;
  MR_Word GoalInfo_120;

  switch (MR_tag((MR_Word) GoalExpr0_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_64 = (MR_Word) ((MR_Word) (GoalExpr0_13));
        MR_Word SubGoal_65;
        MR_Word Var_66;

        check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_goal_7_p_0(SubGoal0_64, &SubGoal_65, ContainsTrace_10, STATE_VARIABLE_LastNonTraceMap_0_121, &Var_66, STATE_VARIABLE_Specs_0_123, STATE_VARIABLE_Specs_124);
        GoalExpr_38 = (MR_Word) ((MR_Word) (SubGoal_65));
        *STATE_VARIABLE_LastNonTraceMap_122 = STATE_VARIABLE_LastNonTraceMap_0_121;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        MR_String FileName_39;
        MR_Integer LineNumber_40;
        MR_Word Var_125;
        MR_Integer MaxLineNumber0_41;
        MR_Box conv0_MaxLineNumber0_41;

        GoalExpr_38 = GoalExpr0_13;
        *ContainsTrace_10 = (MR_Integer) 1;
        Var_125 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_14);
        FileName_39 = ((MR_String) ((MR_hl_field(0, Var_125, 0))));
        LineNumber_40 = ((MR_Integer) ((MR_hl_field(0, Var_125, 1))));
        succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), STATE_VARIABLE_LastNonTraceMap_0_121, ((MR_Box) (FileName_39)), &conv0_MaxLineNumber0_41);
        if (succeeded)
        {
          MaxLineNumber0_41 = ((MR_Integer) (conv0_MaxLineNumber0_41));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          succeeded = (LineNumber_40 > MaxLineNumber0_41);
          if (succeeded)
            mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (FileName_39)), ((MR_Box) (LineNumber_40)), STATE_VARIABLE_LastNonTraceMap_0_121, STATE_VARIABLE_LastNonTraceMap_122);
          else
            *STATE_VARIABLE_LastNonTraceMap_122 = STATE_VARIABLE_LastNonTraceMap_0_121;
        }
        else
          mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (FileName_39)), ((MR_Box) (LineNumber_40)), STATE_VARIABLE_LastNonTraceMap_0_121, STATE_VARIABLE_LastNonTraceMap_122);
        *STATE_VARIABLE_Specs_124 = STATE_VARIABLE_Specs_0_123;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_13, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            MR_String FileName_39;
            MR_Integer LineNumber_40;
            MR_Word Var_125;
            MR_Integer MaxLineNumber0_41;
            MR_Box conv0_MaxLineNumber0_41;

            GoalExpr_38 = GoalExpr0_13;
            *ContainsTrace_10 = (MR_Integer) 1;
            Var_125 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_14);
            FileName_39 = ((MR_String) ((MR_hl_field(0, Var_125, 0))));
            LineNumber_40 = ((MR_Integer) ((MR_hl_field(0, Var_125, 1))));
            succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), STATE_VARIABLE_LastNonTraceMap_0_121, ((MR_Box) (FileName_39)), &conv0_MaxLineNumber0_41);
            if (succeeded)
            {
              MaxLineNumber0_41 = ((MR_Integer) (conv0_MaxLineNumber0_41));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              succeeded = (LineNumber_40 > MaxLineNumber0_41);
              if (succeeded)
                mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (FileName_39)), ((MR_Box) (LineNumber_40)), STATE_VARIABLE_LastNonTraceMap_0_121, STATE_VARIABLE_LastNonTraceMap_122);
              else
                *STATE_VARIABLE_LastNonTraceMap_122 = STATE_VARIABLE_LastNonTraceMap_0_121;
            }
            else
              mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (FileName_39)), ((MR_Box) (LineNumber_40)), STATE_VARIABLE_LastNonTraceMap_0_121, STATE_VARIABLE_LastNonTraceMap_122);
            *STATE_VARIABLE_Specs_124 = STATE_VARIABLE_Specs_0_123;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_42 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_13, 1))) & (MR_Integer) 1);
            MR_Word SubGoals0_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 2))));
            MR_Word SubGoals_45;

            check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_conj_8_p_0(SubGoals0_43, &SubGoals_45, (MR_Integer) 1, ContainsTrace_10, STATE_VARIABLE_LastNonTraceMap_0_121, STATE_VARIABLE_LastNonTraceMap_122, STATE_VARIABLE_Specs_0_123, STATE_VARIABLE_Specs_124);
            {
              GoalExpr_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_38, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_38, 1) = (MR_Box) ((MR_Unsigned) (ConjType_42));
              MR_hl_field(3, GoalExpr_38, 2) = ((MR_Box) (SubGoals_45));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word EndLastNonTraceMaps_46;
            MR_Word SubGoals0_210 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 1))));
            MR_Word SubGoals_212;

            check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_disj_9_p_0(SubGoals0_210, &SubGoals_212, (MR_Integer) 1, ContainsTrace_10, STATE_VARIABLE_LastNonTraceMap_0_121, (MR_Word) ((MR_Unsigned) 0U), &EndLastNonTraceMaps_46, STATE_VARIABLE_Specs_0_123, STATE_VARIABLE_Specs_124);
            check_hlds__simplify__mark_trace_goals__rejoin_last_nontrace_maps_2_p_0(EndLastNonTraceMaps_46, STATE_VARIABLE_LastNonTraceMap_122);
            {
              GoalExpr_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_38, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_38, 1) = ((MR_Box) (SubGoals_212));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word SwitchVar_47 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 1))));
            MR_Word CanFail_48 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_13, 2))) & (MR_Integer) 1);
            MR_Word Cases0_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 3))));
            MR_Word Cases_50;
            MR_Word EndLastNonTraceMaps_214;

            check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_cases_9_p_0(Cases0_49, &Cases_50, (MR_Integer) 1, ContainsTrace_10, STATE_VARIABLE_LastNonTraceMap_0_121, (MR_Word) ((MR_Unsigned) 0U), &EndLastNonTraceMaps_214, STATE_VARIABLE_Specs_0_123, STATE_VARIABLE_Specs_124);
            check_hlds__simplify__mark_trace_goals__rejoin_last_nontrace_maps_2_p_0(EndLastNonTraceMaps_214, STATE_VARIABLE_LastNonTraceMap_122);
            {
              GoalExpr_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_38, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_38, 1) = ((MR_Box) (SwitchVar_47));
              MR_hl_field(3, GoalExpr_38, 2) = (MR_Box) ((MR_Unsigned) (CanFail_48));
              MR_hl_field(3, GoalExpr_38, 3) = ((MR_Box) (Cases_50));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_67 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 1))));
            MR_Word SubGoal0_221 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 2))));
            MR_Word SubGoal_222;

            switch (MR_tag((MR_Word) Reason_67)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_goal_7_p_0(SubGoal0_221, &SubGoal_222, ContainsTrace_10, STATE_VARIABLE_LastNonTraceMap_0_121, STATE_VARIABLE_LastNonTraceMap_122, STATE_VARIABLE_Specs_0_123, STATE_VARIABLE_Specs_124);
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Reason_67, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 8:
                    check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_goal_7_p_0(SubGoal0_221, &SubGoal_222, ContainsTrace_10, STATE_VARIABLE_LastNonTraceMap_0_121, STATE_VARIABLE_LastNonTraceMap_122, STATE_VARIABLE_Specs_0_123, STATE_VARIABLE_Specs_124);
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word FGT_83 = ((MR_Unsigned) ((MR_hl_field(3, Reason_67, 2))) & (MR_Integer) 3);

                      switch (FGT_83) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                        case (MR_Integer) 2:
                          {
                            SubGoal_222 = SubGoal0_221;
                            *ContainsTrace_10 = (MR_Integer) 1;
                            *STATE_VARIABLE_LastNonTraceMap_122 = STATE_VARIABLE_LastNonTraceMap_0_121;
                            *STATE_VARIABLE_Specs_124 = STATE_VARIABLE_Specs_0_123;
                          }
                          break;
                        case (MR_Integer) 0:
                        case (MR_Integer) 3:
                          check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_goal_7_p_0(SubGoal0_221, &SubGoal_222, ContainsTrace_10, STATE_VARIABLE_LastNonTraceMap_0_121, STATE_VARIABLE_LastNonTraceMap_122, STATE_VARIABLE_Specs_0_123, STATE_VARIABLE_Specs_124);
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      MR_Word Context_73;
                      MR_String FileName_215;
                      MR_Integer LineNumber_216;
                      MR_Integer LastLineNumber_74;
                      MR_Box conv1_LastLineNumber_74;

                      SubGoal_222 = SubGoal0_221;
                      *ContainsTrace_10 = (MR_Integer) 0;
                      Context_73 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_14);
                      FileName_215 = ((MR_String) ((MR_hl_field(0, Context_73, 0))));
                      LineNumber_216 = ((MR_Integer) ((MR_hl_field(0, Context_73, 1))));
                      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), STATE_VARIABLE_LastNonTraceMap_0_121, ((MR_Box) (FileName_215)), &conv1_LastLineNumber_74);
                      if (succeeded)
                      {
                        LastLineNumber_74 = ((MR_Integer) (conv1_LastLineNumber_74));
                        succeeded = MR_TRUE;
                      }
                      if (succeeded)
                        succeeded = (LastLineNumber_74 > LineNumber_216);
                      if (succeeded)
                      {
                        MR_Word TracePieces_76;
                        MR_Word TraceMsg_78;
                        MR_Word LastMsg_79;
                        MR_Word Spec_81;
                        MR_Word Var_150;
                        MR_Word Var_151;
                        MR_Word Var_188;
                        MR_Word Var_191;
                        MR_Word Var_192;

                        Var_151 = parse_tree__error_spec__color_as_hint_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__mark_trace_goals_scalar_common_2[4])));
                        Var_150 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_151, (MR_Word) (MR_mkword(1, &check_hlds__simplify__mark_trace_goals_scalar_common_2[9])));
                        TracePieces_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__mark_trace_goals_scalar_common_2[2])), Var_150);
                        {
                          TraceMsg_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, TraceMsg_78, 0) = ((MR_Box) (Context_73));
                          MR_hl_field(0, TraceMsg_78, 1) = ((MR_Box) (TracePieces_76));
                        }
                        {
                          Var_188 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, Var_188, 0) = ((MR_Box) (FileName_215));
                          MR_hl_field(0, Var_188, 1) = ((MR_Box) (LastLineNumber_74));
                        }
                        {
                          LastMsg_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, LastMsg_79, 0) = ((MR_Box) (Var_188));
                          MR_hl_field(0, LastMsg_79, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__mark_trace_goals_scalar_common_2[23])));
                        }
                        {
                          Var_192 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_192, 0) = ((MR_Box) (LastMsg_79));
                          MR_hl_field(1, Var_192, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          Var_191 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_191, 0) = ((MR_Box) (TraceMsg_78));
                          MR_hl_field(1, Var_191, 1) = ((MR_Box) (Var_192));
                        }
                        {
                          Spec_81 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(2, Spec_81, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.mark_trace_goals.set_goal_contains_trace_features_in_goal\'/7"));
                          MR_hl_field(2, Spec_81, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__mark_trace_goals_scalar_common_3[1])));
                          MR_hl_field(2, Spec_81, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__mark_trace_goals_scalar_common_3[0])));
                          MR_hl_field(2, Spec_81, 3) = ((MR_Box) (Var_191));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *STATE_VARIABLE_Specs_124 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_81));
                          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_123));
                        }
                      }
                      else
                        *STATE_VARIABLE_Specs_124 = STATE_VARIABLE_Specs_0_123;
                      *STATE_VARIABLE_LastNonTraceMap_122 = STATE_VARIABLE_LastNonTraceMap_0_121;
                    }
                    break;
                }
                break;
            }
            {
              GoalExpr_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_38, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, GoalExpr_38, 1) = ((MR_Box) (Reason_67));
              MR_hl_field(3, GoalExpr_38, 2) = ((MR_Box) (SubGoal_222));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 1))));
            MR_Word Cond0_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 2))));
            MR_Word Then0_53 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 3))));
            MR_Word Else0_54 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 4))));
            MR_Word Cond_55;
            MR_Word CondContainsTrace_56;
            MR_Word LastNonTraceMapAfterCond_57;
            MR_Word Then_58;
            MR_Word ThenContainsTrace_59;
            MR_Word LastNonTraceMapAfterThen_60;
            MR_Word Else_61;
            MR_Word ElseContainsTrace_62;
            MR_Word LastNonTraceMapAfterElse_63;
            MR_Word STATE_VARIABLE_Specs_4_136;
            MR_Word STATE_VARIABLE_Specs_5_137;
            MR_Word Var_139;
            MR_Word Var_140;
            MR_Word Var_142;

            check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_goal_7_p_0(Cond0_52, &Cond_55, &CondContainsTrace_56, STATE_VARIABLE_LastNonTraceMap_0_121, &LastNonTraceMapAfterCond_57, STATE_VARIABLE_Specs_0_123, &STATE_VARIABLE_Specs_4_136);
            check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_goal_7_p_0(Then0_53, &Then_58, &ThenContainsTrace_59, LastNonTraceMapAfterCond_57, &LastNonTraceMapAfterThen_60, STATE_VARIABLE_Specs_4_136, &STATE_VARIABLE_Specs_5_137);
            check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_goal_7_p_0(Else0_54, &Else_61, &ElseContainsTrace_62, STATE_VARIABLE_LastNonTraceMap_0_121, &LastNonTraceMapAfterElse_63, STATE_VARIABLE_Specs_5_137, STATE_VARIABLE_Specs_124);
            Var_139 = hlds__hlds_goal__worst_contains_trace_2_f_0(ThenContainsTrace_59, ElseContainsTrace_62);
            *ContainsTrace_10 = hlds__hlds_goal__worst_contains_trace_2_f_0(CondContainsTrace_56, Var_139);
            {
              Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_142, 0) = ((MR_Box) (LastNonTraceMapAfterElse_63));
              MR_hl_field(1, Var_142, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_140 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_140, 0) = ((MR_Box) (LastNonTraceMapAfterThen_60));
              MR_hl_field(1, Var_140, 1) = ((MR_Box) (Var_142));
            }
            check_hlds__simplify__mark_trace_goals__rejoin_last_nontrace_maps_2_p_0(Var_140, STATE_VARIABLE_LastNonTraceMap_122);
            {
              GoalExpr_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_38, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_38, 1) = ((MR_Box) (Vars_51));
              MR_hl_field(3, GoalExpr_38, 2) = ((MR_Box) (Cond_55));
              MR_hl_field(3, GoalExpr_38, 3) = ((MR_Box) (Then_58));
              MR_hl_field(3, GoalExpr_38, 4) = ((MR_Box) (Else_61));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_100 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_13, 1))));

            switch (MR_tag((MR_Word) ShortHand0_100)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.mark_trace_goals.set_goal_contains_trace_features_in_goal\'/7", (MR_String) "bi_implication");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_101 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_100, 0))) & (MR_Integer) 3);
                  MR_Word Outer_102 = ((MR_Word) ((MR_hl_field(1, ShortHand0_100, 1))));
                  MR_Word Inner_103 = ((MR_Word) ((MR_hl_field(1, ShortHand0_100, 2))));
                  MR_Word MaybeOutputVars_104 = ((MR_Word) ((MR_hl_field(1, ShortHand0_100, 3))));
                  MR_Word MainGoal0_105 = ((MR_Word) ((MR_hl_field(1, ShortHand0_100, 4))));
                  MR_Word OrElseGoals0_106 = ((MR_Word) ((MR_hl_field(1, ShortHand0_100, 5))));
                  MR_Word OrElseInners_107 = ((MR_Word) ((MR_hl_field(1, ShortHand0_100, 6))));
                  MR_Word MainGoal_108;
                  MR_Word MainContainsTrace_109;
                  MR_Word LastNonTraceMapAfterMain_110;
                  MR_Word OrElseGoals_112;
                  MR_Word OrElseContainsTrace_113;
                  MR_Word LastNonTraceMaps_114;
                  MR_Word ShortHand_115;
                  MR_Word STATE_VARIABLE_Specs_11_199;
                  MR_Word Var_200;

                  check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_goal_7_p_0(MainGoal0_105, &MainGoal_108, &MainContainsTrace_109, STATE_VARIABLE_LastNonTraceMap_0_121, &LastNonTraceMapAfterMain_110, STATE_VARIABLE_Specs_0_123, &STATE_VARIABLE_Specs_11_199);
                  {
                    Var_200 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_200, 0) = ((MR_Box) (LastNonTraceMapAfterMain_110));
                    MR_hl_field(1, Var_200, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_disj_9_p_0(OrElseGoals0_106, &OrElseGoals_112, (MR_Integer) 1, &OrElseContainsTrace_113, STATE_VARIABLE_LastNonTraceMap_0_121, Var_200, &LastNonTraceMaps_114, STATE_VARIABLE_Specs_11_199, STATE_VARIABLE_Specs_124);
                  *ContainsTrace_10 = hlds__hlds_goal__worst_contains_trace_2_f_0(MainContainsTrace_109, OrElseContainsTrace_113);
                  check_hlds__simplify__mark_trace_goals__rejoin_last_nontrace_maps_2_p_0(LastNonTraceMaps_114, STATE_VARIABLE_LastNonTraceMap_122);
                  {
                    ShortHand_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ShortHand_115, 0) = (MR_Box) ((MR_Unsigned) (GoalType_101));
                    MR_hl_field(1, ShortHand_115, 1) = ((MR_Box) (Outer_102));
                    MR_hl_field(1, ShortHand_115, 2) = ((MR_Box) (Inner_103));
                    MR_hl_field(1, ShortHand_115, 3) = ((MR_Box) (MaybeOutputVars_104));
                    MR_hl_field(1, ShortHand_115, 4) = ((MR_Box) (MainGoal_108));
                    MR_hl_field(1, ShortHand_115, 5) = ((MR_Box) (OrElseGoals_112));
                    MR_hl_field(1, ShortHand_115, 6) = ((MR_Box) (OrElseInners_107));
                  }
                  {
                    GoalExpr_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, GoalExpr_38, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(3, GoalExpr_38, 1) = ((MR_Box) (ShortHand_115));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIO_116 = ((MR_Word) ((MR_hl_field(2, ShortHand0_100, 0))));
                  MR_Word ResultVar_117 = ((MR_Word) ((MR_hl_field(2, ShortHand0_100, 1))));
                  MR_Word SubGoal0_223 = ((MR_Word) ((MR_hl_field(2, ShortHand0_100, 2))));
                  MR_Word SubGoal_224;
                  MR_Word ShortHand_225;

                  check_hlds__simplify__mark_trace_goals__set_goal_contains_trace_features_in_goal_7_p_0(SubGoal0_223, &SubGoal_224, ContainsTrace_10, STATE_VARIABLE_LastNonTraceMap_0_121, STATE_VARIABLE_LastNonTraceMap_122, STATE_VARIABLE_Specs_0_123, STATE_VARIABLE_Specs_124);
                  {
                    ShortHand_225 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, ShortHand_225, 0) = ((MR_Box) (MaybeIO_116));
                    MR_hl_field(2, ShortHand_225, 1) = ((MR_Box) (ResultVar_117));
                    MR_hl_field(2, ShortHand_225, 2) = ((MR_Box) (SubGoal_224));
                  }
                  {
                    GoalExpr_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, GoalExpr_38, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(3, GoalExpr_38, 1) = ((MR_Box) (ShortHand_225));
                  }
                }
                break;
            }
          }
          break;
      }
      break;
  }
  switch (*ContainsTrace_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 20, GoalInfo0_14, &GoalInfo_120);
      break;
    case (MR_Integer) 0:
      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 20, GoalInfo0_14, &GoalInfo_120);
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_38));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_120));
  }
}

static void MR_CALL 
check_hlds__simplify__mark_trace_goals__rejoin_last_nontrace_maps_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_17;

  check_hlds__simplify__mark_trace_goals__IntroducedFrom__pred__rejoin_last_nontrace_maps__303__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_17);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_17));
}

static void MR_CALL 
check_hlds__simplify__mark_trace_goals__rejoin_last_nontrace_maps_2_p_0(
  MR_Word LastNonTraceMaps_3,
  MR_Word * LastNonTraceMap_4)
{
  MR_Word LastNonTraceMapALs_5;
  MR_Word LastNonTraceMapAL_6;
  MR_Word SortedLastNonTraceMapAL_7;
  MR_Word RevSortedLastNonTraceMapAL_8;
  MR_Word LastNonTraceMap0_9;

  mercury__list__map_3_p_0((MR_Word) (&check_hlds__simplify__mark_trace_goals_scalar_common_1[0]), (MR_Word) (&check_hlds__simplify__mark_trace_goals_scalar_common_2[0]), (MR_Word) (&check_hlds__simplify__mark_trace_goals_scalar_common_1[2]), LastNonTraceMaps_3, &LastNonTraceMapALs_5);
  mercury__list__condense_2_p_0((MR_Word) (&check_hlds__simplify__mark_trace_goals_scalar_common_1[1]), LastNonTraceMapALs_5, &LastNonTraceMapAL_6);
  mercury__list__sort_2_p_0((MR_Word) (&check_hlds__simplify__mark_trace_goals_scalar_common_1[1]), LastNonTraceMapAL_6, &SortedLastNonTraceMapAL_7);
  mercury__list__reverse_2_p_0((MR_Word) (&check_hlds__simplify__mark_trace_goals_scalar_common_1[1]), SortedLastNonTraceMapAL_7, &RevSortedLastNonTraceMapAL_8);
  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), &LastNonTraceMap0_9);
  if ((RevSortedLastNonTraceMapAL_8 == (MR_Word) ((MR_Unsigned) 0U)))
    *LastNonTraceMap_4 = LastNonTraceMap0_9;
  else
  {
    MR_String HeadFileName_10;
    MR_Integer HeadLineNumber_11;
    MR_Word TailFileNameLineNumbers_12 = ((MR_Word) ((MR_hl_field(1, RevSortedLastNonTraceMapAL_8, 1))));
    MR_Word LastNonTraceMap1_13;
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(1, RevSortedLastNonTraceMapAL_8, 0))));

    HeadFileName_10 = ((MR_String) ((MR_hl_field(0, Var_15, 0))));
    HeadLineNumber_11 = ((MR_Integer) ((MR_hl_field(0, Var_15, 1))));
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (HeadFileName_10)), ((MR_Box) (HeadLineNumber_11)), LastNonTraceMap0_9, &LastNonTraceMap1_13);
    check_hlds__simplify__mark_trace_goals__build_rejoined_last_nontrace_map_4_p_0(HeadFileName_10, TailFileNameLineNumbers_12, LastNonTraceMap1_13, LastNonTraceMap_4);
  }
}

static void MR_CALL 
check_hlds__simplify__mark_trace_goals__build_rejoined_last_nontrace_map_4_p_0(
  MR_String PrevFileName_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_LastNonTraceMap_0_3,
  MR_Word * STATE_VARIABLE_LastNonTraceMap_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_LastNonTraceMap_4 = STATE_VARIABLE_LastNonTraceMap_0_3;
    else
    {
      MR_String FileName_10;
      MR_Integer LineNumber_11;
      MR_Word TailFileNameLineNumbers_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word STATE_VARIABLE_LastNonTraceMap_1_17;
      MR_String next_value_of_PrevFileName_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_LastNonTraceMap_0_3;

      FileName_10 = ((MR_String) ((MR_hl_field(0, Var_16, 0))));
      LineNumber_11 = ((MR_Integer) ((MR_hl_field(0, Var_16, 1))));
      succeeded = (strcmp(FileName_10, PrevFileName_1) == 0);
      if (succeeded)
        STATE_VARIABLE_LastNonTraceMap_1_17 = STATE_VARIABLE_LastNonTraceMap_0_3;
      else
        mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (FileName_10)), ((MR_Box) (LineNumber_11)), STATE_VARIABLE_LastNonTraceMap_0_3, &STATE_VARIABLE_LastNonTraceMap_1_17);
      // direct tailcall eliminated
      ;
      next_value_of_PrevFileName_1 = FileName_10;
      next_value_of_HeadVar__2_2 = TailFileNameLineNumbers_12;
      next_value_of_STATE_VARIABLE_LastNonTraceMap_0_3 = STATE_VARIABLE_LastNonTraceMap_1_17;
      PrevFileName_1 = next_value_of_PrevFileName_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_LastNonTraceMap_0_3 = next_value_of_STATE_VARIABLE_LastNonTraceMap_0_3;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__mark_trace_goals____Unify____last_nontrace_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__mark_trace_goals____Unify____last_nontrace_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__mark_trace_goals____Compare____last_nontrace_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__mark_trace_goals____Compare____last_nontrace_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__simplify__mark_trace_goals__init(void)
{
}

void mercury__check_hlds__simplify__mark_trace_goals__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__simplify__mark_trace_goals__check_hlds__simplify__mark_trace_goals__type_ctor_info_last_nontrace_map_0);
}

void mercury__check_hlds__simplify__mark_trace_goals__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__simplify__mark_trace_goals__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.simplify.mark_trace_goals.
