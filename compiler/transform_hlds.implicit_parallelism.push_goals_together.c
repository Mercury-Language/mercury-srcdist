/*
** Automatically generated from `push_goals_together.m'
** by the Mercury compiler,
** version rotd-2020-09-20
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


// :- module transform_hlds.implicit_parallelism.push_goals_together.
// :- implementation.

/*
INIT mercury__transform_hlds__implicit_parallelism__push_goals_together__init
ENDINIT
*/

#include "transform_hlds.implicit_parallelism.push_goals_together.mih"


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
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.implicit_parallelism.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__implicit_parallelism__push_goals_together__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__implicit_parallelism__push_goals_together__list__pti_list_1__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__implicit_parallelism__push_goals_together__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_EnumFunctorDesc transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_maybe_pushable_0_0;

static const MR_EnumFunctorDesc transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_maybe_pushable_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_value_ordered_maybe_pushable_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_name_ordered_maybe_pushable_0[2];

static const MR_Integer transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__functor_number_map_maybe_pushable_0[2];

static const MR_Integer transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__functor_number_map_push_info_0[1];

static const MR_NotagFunctorDesc transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__notag_functor_desc_push_info_0;

static const MR_EnumFunctorDesc transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_push_result_0_0;

static const MR_EnumFunctorDesc transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_push_result_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_value_ordered_push_result_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_name_ordered_push_result_0[2];

static const MR_Integer transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__functor_number_map_push_result_0[2];

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__IntroducedFrom__pred__push_into_goal__626__1_2_p_0(
  MR_Word TailPaths_9,
  MR_Word HeadVar__2_118);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__IntroducedFrom__pred__push_into_goal__647__1_2_p_0(
  MR_Word TailPaths_9,
  MR_Word HeadVar__2_112);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Compare____push_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Unify____push_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Compare____maybe_pushable_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Unify____maybe_pushable_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_of_case_3_p_0(
  MR_Word AddedGoals_4,
  MR_Word Case0_5,
  MR_Word * Case_6);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__is_non_rtti_var_2_p_0(
  MR_Word RttiVarMaps_3,
  MR_Word Arg_4);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__do_push_list_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PushInfo_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Goal_0_4,
  MR_Word * STATE_VARIABLE_Goal_5);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__do_push_in_cases_7_p_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goals_7_p_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PushGoal_2,
  MR_Word PushInfo_3,
  MR_Word * Result_4,
  MR_Word STATE_VARIABLE_Goal_0_5,
  MR_Word * STATE_VARIABLE_Goal_6);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_p_0(
  MR_Word PushGoal_6,
  MR_Word PushInfo_7,
  MR_Word * Result_8,
  MR_Word STATE_VARIABLE_Goal_0_32,
  MR_Word * STATE_VARIABLE_Goal_33);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__find_relative_paths_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PathList_2,
  MR_Integer HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * Pushable_6);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * Pushable_6);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0(
  MR_Word LoHi_7,
  MR_Word HeadPath_8,
  MR_Word TailPaths_9,
  MR_Word Goal0_10,
  MR_Word * Goal_11,
  MR_Word * Pushable_12);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__maybe_steps_after_3_p_0(
  MR_Word Step_4,
  MR_Word HeadVar__2_2,
  MR_Word * Tail_5);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__build_ite_paths_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__build_switch_paths_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_DisjPathsMap_0_2,
  MR_Word * STATE_VARIABLE_DisjPathsMap_3);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__build_disj_paths_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_DisjPathsMap_0_2,
  MR_Word * STATE_VARIABLE_DisjPathsMap_3);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_p_0(
  MR_Word AddedGoals_4,
  MR_Word Goal0_5,
  MR_Word * Goal_6);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__find_lo_hi_goals_9_p_0(
  MR_Word PushInfo_10,
  MR_Word Conjuncts_11,
  MR_Integer Lo_12,
  MR_Integer Hi_13,
  MR_Integer Cur_14,
  MR_Word * Before_15,
  MR_Word * LoHi_16,
  MR_Word * After_17,
  MR_Word * Pushable_18);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__find_hi_goals_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_p_0(
  MR_Word PushInfo_4,
  MR_Word Goal_5,
  MR_Word * Pushable_6);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__is_pushable_case_list_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_list_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Unify____maybe_pushable_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Compare____maybe_pushable_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Unify____push_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Compare____push_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Unify____push_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Compare____push_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[4][2];

static /* final */ const MR_Box transform_hlds__implicit_parallelism__push_goals_together_scalar_common_2[2][5];

static /* final */ const MR_Box transform_hlds__implicit_parallelism__push_goals_together_scalar_common_3[3][6];

static /* final */ const MR_Box transform_hlds__implicit_parallelism__push_goals_together_scalar_common_4[1][4];




static /* final */ const MR_Box transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
};

static /* final */ const MR_Box transform_hlds__implicit_parallelism__push_goals_together_scalar_common_2[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__push_goals_together__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__push_goals_together__list__pti_list_1__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__push_goals_together__list__pti_list_1__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0))
  },
};

static /* final */ const MR_Box transform_hlds__implicit_parallelism__push_goals_together_scalar_common_3[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__push_goals_together__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__push_goals_together__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
};

static /* final */ const MR_Box transform_hlds__implicit_parallelism__push_goals_together_scalar_common_4[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&transform_hlds__implicit_parallelism__push_goals_together_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[3])))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__implicit_parallelism__push_goals_together__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__implicit_parallelism__push_goals_together__list__pti_list_1__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__implicit_parallelism__push_goals_together__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_EnumFunctorDesc transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_maybe_pushable_0_0 = {
  (MR_String) "not_pushable",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_maybe_pushable_0_1 = {
  (MR_String) "pushable",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_value_ordered_maybe_pushable_0[2] = {
  &transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_maybe_pushable_0_0,
  &transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_maybe_pushable_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_name_ordered_maybe_pushable_0[2] = {
  &transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_maybe_pushable_0_0,
  &transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_maybe_pushable_0_1
};

static const MR_Integer transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__functor_number_map_maybe_pushable_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__type_ctor_info_maybe_pushable_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together____Unify____maybe_pushable_0_0_10001)),
  ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together____Compare____maybe_pushable_0_0_10001)),
  (MR_String) "transform_hlds.implicit_parallelism.push_goals_together",
  (MR_String) "maybe_pushable",
  {     transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_name_ordered_maybe_pushable_0 },
  {     transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_value_ordered_maybe_pushable_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__functor_number_map_maybe_pushable_0
};

static const MR_Integer transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__functor_number_map_push_info_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__notag_functor_desc_push_info_0 = {
  (MR_String) "push_info",
  (MR_PseudoTypeInfo) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0),
  (MR_String) "pi_rtti_varmaps",
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__type_ctor_info_push_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together____Unify____push_info_0_0_10001)),
  ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together____Compare____push_info_0_0_10001)),
  (MR_String) "transform_hlds.implicit_parallelism.push_goals_together",
  (MR_String) "push_info",
  {     &transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__notag_functor_desc_push_info_0 },
  {     &transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__notag_functor_desc_push_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__functor_number_map_push_info_0
};

static const MR_EnumFunctorDesc transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_push_result_0_0 = {
  (MR_String) "push_failed",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_push_result_0_1 = {
  (MR_String) "push_succeeded",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_value_ordered_push_result_0[2] = {
  &transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_push_result_0_0,
  &transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_push_result_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_name_ordered_push_result_0[2] = {
  &transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_push_result_0_0,
  &transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_push_result_0_1
};

static const MR_Integer transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__functor_number_map_push_result_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__type_ctor_info_push_result_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together____Unify____push_result_0_0_10001)),
  ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together____Compare____push_result_0_0_10001)),
  (MR_String) "transform_hlds.implicit_parallelism.push_goals_together",
  (MR_String) "push_result",
  {     transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_name_ordered_push_result_0 },
  {     transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_value_ordered_push_result_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__functor_number_map_push_result_0
};

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__IntroducedFrom__pred__push_into_goal__626__1_2_p_0(
  MR_Word TailPaths_9,
  MR_Word HeadVar__2_118)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[1]), ((MR_Box) (TailPaths_9)), ((MR_Box) (HeadVar__2_118)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__IntroducedFrom__pred__push_into_goal__647__1_2_p_0(
  MR_Word TailPaths_9,
  MR_Word HeadVar__2_112)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[1]), ((MR_Box) (TailPaths_9)), ((MR_Box) (HeadVar__2_112)));
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Compare____push_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Unify____push_result_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Compare____push_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
      MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

      hlds__hlds_rtti____Compare____rtti_varmaps_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Unify____push_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
      MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

      succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(ArgX1_3, ArgY1_4);
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Compare____maybe_pushable_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Unify____maybe_pushable_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_of_case_3_p_0(
  MR_Word AddedGoals_4,
  MR_Word Case0_5,
  MR_Word * Case_6)
{
  {
    MR_Word MainConsId_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_5, (MR_Integer) 0))));
    MR_Word OtherConsIds_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_5, (MR_Integer) 1))));
    MR_Word Goal0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_5, (MR_Integer) 2))));
    MR_Word Goal_10;

    transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_p_0(AddedGoals_4, Goal0_9, &Goal_10);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Case_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MainConsId_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OtherConsIds_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Goal_10));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__is_non_rtti_var_2_p_0(
  MR_Word RttiVarMaps_3,
  MR_Word Arg_4)
{
  {
    MR_bool succeeded;
    MR_Word RttiVarInfo_5;

    hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(RttiVarMaps_3, Arg_4, &RttiVarInfo_5);
    succeeded = (RttiVarInfo_5 == (MR_Word) ((MR_Unsigned) 0U));
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_p_0(
  MR_Word PushGoals_7,
  MR_Word * OverallResult_8,
  MR_Word STATE_VARIABLE_ProcInfo_0_29,
  MR_Word * STATE_VARIABLE_ProcInfo_30,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32)
{
  {
    MR_Word Goal0_11;
    MR_Word VarSet0_12;
    MR_Word VarTypes0_13;
    MR_Word RttiVarMaps0_14;
    MR_Word PushInfo_15;
    MR_Word Globals_16;
    MR_Word Goal1_19;
    MR_Word OutInfo_17;

    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_29, &Goal0_11);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(STATE_VARIABLE_ProcInfo_0_29, &VarSet0_12);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_0_29, &VarTypes0_13);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_0_29, &RttiVarMaps0_14);
    PushInfo_15 = (MR_Word) (RttiVarMaps0_14);
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_31, &Globals_16);
    OutInfo_17 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(Globals_16, (MR_Integer) 1);
    transform_hlds__implicit_parallelism__push_goals_together__do_push_list_5_p_0(PushGoals_7, PushInfo_15, OverallResult_8, Goal0_11, &Goal1_19);
    switch (*OverallResult_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_ProcInfo_30 = STATE_VARIABLE_ProcInfo_0_29;
          *STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word HeadVars_20;
          MR_Word Goal2_22;
          MR_Word VarSet_23;
          MR_Word VarTypes_24;
          MR_Word RttiVarMaps_25;
          MR_Word InstMap0_26;
          MR_Word InstVarSet_27;
          MR_Word Goal_28;
          MR_Word STATE_VARIABLE_ProcInfo_53_53;
          MR_Word STATE_VARIABLE_ProcInfo_54_54;
          MR_Word STATE_VARIABLE_ProcInfo_55_55;
          MR_Word _Warnings_21;

          hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_0_29, &HeadVars_20);
          hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 1, HeadVars_20, &_Warnings_21, Goal1_19, &Goal2_22, VarSet0_12, &VarSet_23, VarTypes0_13, &VarTypes_24, RttiVarMaps0_14, &RttiVarMaps_25);
          hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ProcInfo_0_29, STATE_VARIABLE_ModuleInfo_0_31, &InstMap0_26);
          hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(STATE_VARIABLE_ProcInfo_0_29, &InstVarSet_27);
          check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 1, Goal2_22, &Goal_28, VarTypes_24, InstVarSet_27, InstMap0_26, STATE_VARIABLE_ModuleInfo_0_31, STATE_VARIABLE_ModuleInfo_32);
          hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_28, STATE_VARIABLE_ProcInfo_0_29, &STATE_VARIABLE_ProcInfo_53_53);
          hlds__hlds_pred__proc_info_set_varset_3_p_0(VarSet_23, STATE_VARIABLE_ProcInfo_53_53, &STATE_VARIABLE_ProcInfo_54_54);
          hlds__hlds_pred__proc_info_set_vartypes_3_p_0(VarTypes_24, STATE_VARIABLE_ProcInfo_54_54, &STATE_VARIABLE_ProcInfo_55_55);
          hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_25, STATE_VARIABLE_ProcInfo_55_55, STATE_VARIABLE_ProcInfo_30);
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__do_push_list_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PushInfo_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Goal_0_4,
  MR_Word * STATE_VARIABLE_Goal_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Integer) 1;
      *STATE_VARIABLE_Goal_5 = STATE_VARIABLE_Goal_0_4;
    }
    else
    {
      MR_Word PushGoal_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PushGoals_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String GoalPathStr_26 = ((MR_String) ((MR_hl_field(MR_mktag(0), PushGoal_10, (MR_Integer) 0))));
      MR_Word GoalPath_30;

      succeeded = mdbcomp__goal_path__goal_path_from_string_2_p_0(GoalPathStr_26, &GoalPath_30);
      if (succeeded)
      {
        MR_Word Result_15;
        MR_Word STATE_VARIABLE_Goal_18_18;

        transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_p_0(GoalPath_30, PushGoal_10, PushInfo_2, &Result_15, STATE_VARIABLE_Goal_0_4, &STATE_VARIABLE_Goal_18_18);
        switch (Result_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *HeadVar__3_3 = (MR_Integer) 0;
              *STATE_VARIABLE_Goal_5 = STATE_VARIABLE_Goal_18_18;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_HeadVar__1_1 = PushGoals_11;
              MR_Word next_value_of_STATE_VARIABLE_Goal_0_4 = STATE_VARIABLE_Goal_18_18;

              // direct tailcall eliminated
              ;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              STATE_VARIABLE_Goal_0_4 = next_value_of_STATE_VARIABLE_Goal_0_4;
              continue;
            }
            break;
        }
      }
      else
      {
        *HeadVar__3_3 = (MR_Integer) 0;
        *STATE_VARIABLE_Goal_5 = STATE_VARIABLE_Goal_0_4;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__do_push_in_cases_7_p_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  {
    MR_bool succeeded;

    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Integer) 0;
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Case0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word Cases0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
      MR_Word Case_23;
      MR_Word Cases_24;

      succeeded = (HeadVar__1_1 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word MainConsId_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_21, (MR_Integer) 0))));
        MR_Word OtherConsIds_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_21, (MR_Integer) 1))));
        MR_Word Goal0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_21, (MR_Integer) 2))));
        MR_Word Goal_28;

        transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_p_0(HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, Goal0_27, &Goal_28);
        {
          Case_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Case_23, 0) = ((MR_Box) (MainConsId_25));
          MR_hl_field(MR_mktag(0), Case_23, 1) = ((MR_Box) (OtherConsIds_26));
          MR_hl_field(MR_mktag(0), Case_23, 2) = ((MR_Box) (Goal_28));
        }
        Cases_24 = Cases0_22;
      }
      else
      {
        MR_Integer Var_29;

        Case_23 = Case0_21;
        Var_29 = (MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) 1);
        transform_hlds__implicit_parallelism__push_goals_together__do_push_in_cases_7_p_0(Var_29, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, Cases0_22, &Cases_24);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__7_7 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_23));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_24));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goals_7_p_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  {
    MR_bool succeeded;

    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Integer) 0;
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Goal0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word Goals0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
      MR_Word Goal_23;
      MR_Word Goals_24;

      succeeded = (HeadVar__1_1 == (MR_Integer) 1);
      if (succeeded)
      {
        transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_p_0(HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, Goal0_21, &Goal_23);
        Goals_24 = Goals0_22;
      }
      else
      {
        MR_Integer Var_25;

        Goal_23 = Goal0_21;
        Var_25 = (MR_Integer) ((MR_Unsigned) HeadVar__1_1 - (MR_Unsigned) 1);
        transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goals_7_p_0(Var_25, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, Goals0_22, &Goals_24);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__7_7 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_23));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_24));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PushGoal_2,
  MR_Word PushInfo_3,
  MR_Word * Result_4,
  MR_Word STATE_VARIABLE_Goal_0_5,
  MR_Word * STATE_VARIABLE_Goal_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_p_0(PushGoal_2, PushInfo_3, Result_4, STATE_VARIABLE_Goal_0_5, STATE_VARIABLE_Goal_6);
    else
    {
      MR_Word Step_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Path_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalExpr0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_5, (MR_Integer) 0))));
      MR_Word GoalInfo0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_5, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) Step_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Step_14)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Vars0_33;
                MR_Word Cond0_34;
                MR_Word Then0_35;
                MR_Word Else0_36;

                succeeded = ((((MR_tag((MR_Word) GoalExpr0_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  Vars0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 1))));
                  Cond0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 2))));
                  Then0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 3))));
                  Else0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 4))));
                  {
                    MR_Word Cond_37;
                    MR_Word GoalExpr_95;

                    transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_p_0(Path_15, PushGoal_2, PushInfo_3, Result_4, Cond0_34, &Cond_37);
                    {
                      GoalExpr_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_95, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), GoalExpr_95, 1) = ((MR_Box) (Vars0_33));
                      MR_hl_field(MR_mktag(3), GoalExpr_95, 2) = ((MR_Box) (Cond_37));
                      MR_hl_field(MR_mktag(3), GoalExpr_95, 3) = ((MR_Box) (Then0_35));
                      MR_hl_field(MR_mktag(3), GoalExpr_95, 4) = ((MR_Box) (Else0_36));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *STATE_VARIABLE_Goal_6 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_95));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_21));
                    }
                  }
                }
                else
                {
                  *Result_4 = (MR_Integer) 0;
                  *STATE_VARIABLE_Goal_6 = STATE_VARIABLE_Goal_0_5;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Vars0_100;
                MR_Word Cond0_101;
                MR_Word Then0_102;
                MR_Word Else0_103;

                succeeded = ((((MR_tag((MR_Word) GoalExpr0_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  Vars0_100 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 1))));
                  Cond0_101 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 2))));
                  Then0_102 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 3))));
                  Else0_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 4))));
                  {
                    MR_Word Then_38;
                    MR_Word GoalExpr_98;

                    transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_p_0(Path_15, PushGoal_2, PushInfo_3, Result_4, Then0_102, &Then_38);
                    {
                      GoalExpr_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_98, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), GoalExpr_98, 1) = ((MR_Box) (Vars0_100));
                      MR_hl_field(MR_mktag(3), GoalExpr_98, 2) = ((MR_Box) (Cond0_101));
                      MR_hl_field(MR_mktag(3), GoalExpr_98, 3) = ((MR_Box) (Then_38));
                      MR_hl_field(MR_mktag(3), GoalExpr_98, 4) = ((MR_Box) (Else0_103));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *STATE_VARIABLE_Goal_6 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_98));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_21));
                    }
                  }
                }
                else
                {
                  *Result_4 = (MR_Integer) 0;
                  *STATE_VARIABLE_Goal_6 = STATE_VARIABLE_Goal_0_5;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Vars0_111;
                MR_Word Cond0_112;
                MR_Word Then0_113;
                MR_Word Else0_114;

                succeeded = ((((MR_tag((MR_Word) GoalExpr0_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  Vars0_111 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 1))));
                  Cond0_112 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 2))));
                  Then0_113 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 3))));
                  Else0_114 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 4))));
                  {
                    MR_Word Else_39;
                    MR_Word GoalExpr_109;

                    transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_p_0(Path_15, PushGoal_2, PushInfo_3, Result_4, Else0_114, &Else_39);
                    {
                      GoalExpr_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_109, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), GoalExpr_109, 1) = ((MR_Box) (Vars0_111));
                      MR_hl_field(MR_mktag(3), GoalExpr_109, 2) = ((MR_Box) (Cond0_112));
                      MR_hl_field(MR_mktag(3), GoalExpr_109, 3) = ((MR_Box) (Then0_113));
                      MR_hl_field(MR_mktag(3), GoalExpr_109, 4) = ((MR_Box) (Else_39));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *STATE_VARIABLE_Goal_6 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_109));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_21));
                    }
                  }
                }
                else
                {
                  *Result_4 = (MR_Integer) 0;
                  *STATE_VARIABLE_Goal_6 = STATE_VARIABLE_Goal_0_5;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word SubGoal0_40;

                succeeded = ((MR_tag((MR_Word) GoalExpr0_20)) == (MR_Integer) 0);
                if (succeeded)
                {
                  SubGoal0_40 = (MR_Word) ((MR_Word) (GoalExpr0_20));
                  {
                    MR_Word SubGoal_41;
                    MR_Word GoalExpr_120;

                    transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_p_0(Path_15, PushGoal_2, PushInfo_3, Result_4, SubGoal0_40, &SubGoal_41);
                    GoalExpr_120 = (MR_Word) ((MR_Word) (SubGoal_41));
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *STATE_VARIABLE_Goal_6 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_120));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_21));
                    }
                  }
                }
                else
                {
                  *Result_4 = (MR_Integer) 0;
                  *STATE_VARIABLE_Goal_6 = STATE_VARIABLE_Goal_0_5;
                }
              }
              break;
            case (MR_Integer) 4:
            case (MR_Integer) 5:
            case (MR_Integer) 6:
              {
                *Result_4 = (MR_Integer) 0;
                *STATE_VARIABLE_Goal_6 = STATE_VARIABLE_Goal_0_5;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer N_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Step_14, (MR_Integer) 0))));
            MR_Word ConjType_23;
            MR_Word Goals0_24;

            succeeded = ((((MR_tag((MR_Word) GoalExpr0_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              ConjType_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 1))) & (MR_Integer) 1);
              Goals0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 2))));
              {
                MR_Word Goals_25;
                MR_Word GoalExpr_26;

                transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goals_7_p_0(N_22, Path_15, PushGoal_2, PushInfo_3, Result_4, Goals0_24, &Goals_25);
                {
                  GoalExpr_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_26, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(MR_mktag(3), GoalExpr_26, 1) = (MR_Box) ((MR_Unsigned) (ConjType_23));
                  MR_hl_field(MR_mktag(3), GoalExpr_26, 2) = ((MR_Box) (Goals_25));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *STATE_VARIABLE_Goal_6 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_26));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_21));
                }
              }
            }
            else
            {
              *Result_4 = (MR_Integer) 0;
              *STATE_VARIABLE_Goal_6 = STATE_VARIABLE_Goal_0_5;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer N_87 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Step_14, (MR_Integer) 0))));
            MR_Word Goals0_84;

            succeeded = ((((MR_tag((MR_Word) GoalExpr0_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 0)))) == (MR_Integer) 3)));
            if (succeeded)
            {
              Goals0_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 1))));
              {
                MR_Word Goals_82;
                MR_Word GoalExpr_83;

                transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goals_7_p_0(N_87, Path_15, PushGoal_2, PushInfo_3, Result_4, Goals0_84, &Goals_82);
                {
                  GoalExpr_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_83, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(MR_mktag(3), GoalExpr_83, 1) = ((MR_Box) (Goals_82));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *STATE_VARIABLE_Goal_6 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_83));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_21));
                }
              }
            }
            else
            {
              *Result_4 = (MR_Integer) 0;
              *STATE_VARIABLE_Goal_6 = STATE_VARIABLE_Goal_0_5;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Step_14, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer N_93 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Step_14, (MR_Integer) 1))));
                MR_Word Var_29;
                MR_Word CanFail_30;
                MR_Word Cases0_31;

                succeeded = ((((MR_tag((MR_Word) GoalExpr0_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (succeeded)
                {
                  Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 1))));
                  CanFail_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 2))) & (MR_Integer) 1);
                  Cases0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 3))));
                  {
                    MR_Word Cases_32;
                    MR_Word GoalExpr_91;

                    transform_hlds__implicit_parallelism__push_goals_together__do_push_in_cases_7_p_0(N_93, Path_15, PushGoal_2, PushInfo_3, Result_4, Cases0_31, &Cases_32);
                    {
                      GoalExpr_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_91, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(3), GoalExpr_91, 1) = ((MR_Box) (Var_29));
                      MR_hl_field(MR_mktag(3), GoalExpr_91, 2) = (MR_Box) ((MR_Unsigned) (CanFail_30));
                      MR_hl_field(MR_mktag(3), GoalExpr_91, 3) = ((MR_Box) (Cases_32));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *STATE_VARIABLE_Goal_6 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_91));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_21));
                    }
                  }
                }
                else
                {
                  *Result_4 = (MR_Integer) 0;
                  *STATE_VARIABLE_Goal_6 = STATE_VARIABLE_Goal_0_5;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Reason_43;
                MR_Word SubGoal0_126;

                succeeded = ((((MR_tag((MR_Word) GoalExpr0_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (succeeded)
                {
                  Reason_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 1))));
                  SubGoal0_126 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_20, (MR_Integer) 2))));
                  {
                    MR_Word GoalExpr_123;
                    MR_Word SubGoal_124;

                    transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_p_0(Path_15, PushGoal_2, PushInfo_3, Result_4, SubGoal0_126, &SubGoal_124);
                    {
                      GoalExpr_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_123, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(MR_mktag(3), GoalExpr_123, 1) = ((MR_Box) (Reason_43));
                      MR_hl_field(MR_mktag(3), GoalExpr_123, 2) = ((MR_Box) (SubGoal_124));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *STATE_VARIABLE_Goal_6 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_123));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_21));
                    }
                  }
                }
                else
                {
                  *Result_4 = (MR_Integer) 0;
                  *STATE_VARIABLE_Goal_6 = STATE_VARIABLE_Goal_0_5;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                *Result_4 = (MR_Integer) 0;
                *STATE_VARIABLE_Goal_6 = STATE_VARIABLE_Goal_0_5;
              }
              break;
          }
          break;
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_Tail_5;

    succeeded = transform_hlds__implicit_parallelism__push_goals_together__maybe_steps_after_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Tail_5);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_Tail_5));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_p_0(
  MR_Word PushGoal_6,
  MR_Word PushInfo_7,
  MR_Word * Result_8,
  MR_Word STATE_VARIABLE_Goal_0_32,
  MR_Word * STATE_VARIABLE_Goal_33)
{
  {
    MR_bool succeeded;
    MR_String GoalPathStr_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), PushGoal_6, (MR_Integer) 0))));
    MR_Integer Lo_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PushGoal_6, (MR_Integer) 1))));
    MR_Integer Hi_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PushGoal_6, (MR_Integer) 2))));
    MR_Word PushedInto_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PushGoal_6, (MR_Integer) 3))));
    MR_Word GoalPath_14;
    MR_Word GoalExpr0_15;
    MR_Word GoalInfo0_16;
    MR_Word Before0_18;
    MR_Word After_20;
    MR_Integer PushConjNum_24;
    MR_Word PushIntoGoal_28;
    MR_Word TypeCtorInfo_50_50;
    MR_Word TypeCtorInfo_51_51;
    MR_Word Conjuncts_17;
    MR_Word LoHi_19;
    MR_Word RelGoalPaths_21;
    MR_Word HeadRelGoalPath_22;
    MR_Word TailRelGoalPaths_23;
    MR_Word HeadRestRelPath_25;
    MR_Word TailRestRelPaths_26;
    MR_Word PushIntoGoal0_27;
    MR_Word Var_34;
    MR_Integer Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_40;
    MR_Integer Var_41;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Box conv1_PushIntoGoal0_27;

    mdbcomp__goal_path__goal_path_from_string_det_2_p_0(GoalPathStr_10, &GoalPath_14);
    GoalExpr0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_32, (MR_Integer) 0))));
    GoalInfo0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_32, (MR_Integer) 1))));
    succeeded = ((((MR_tag((MR_Word) GoalExpr0_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 1))) & (MR_Integer) 1);
      Conjuncts_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 2))));
      succeeded = (Var_34 == (MR_Integer) 0);
      if (succeeded)
      {
        Var_35 = (MR_Integer) 1;
        Var_36 = (MR_Integer) 1;
        transform_hlds__implicit_parallelism__push_goals_together__find_lo_hi_goals_9_p_0(PushInfo_7, Conjuncts_17, Lo_11, Hi_12, Var_35, &Before0_18, &LoHi_19, &After_20, &Var_53);
        succeeded = (Var_36 == Var_53);
        if (succeeded)
        {
          succeeded = transform_hlds__implicit_parallelism__push_goals_together__find_relative_paths_3_p_0(GoalPath_14, PushedInto_13, &RelGoalPaths_21);
          if (succeeded)
          {
            succeeded = (RelGoalPaths_21 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              HeadRelGoalPath_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RelGoalPaths_21, (MR_Integer) 0))));
              TailRelGoalPaths_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RelGoalPaths_21, (MR_Integer) 1))));
              succeeded = (HeadRelGoalPath_22 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadRelGoalPath_22, (MR_Integer) 0))));
                HeadRestRelPath_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadRelGoalPath_22, (MR_Integer) 1))));
                succeeded = ((MR_tag((MR_Word) Var_37)) == (MR_Integer) 1);
                if (succeeded)
                {
                  PushConjNum_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_37, (MR_Integer) 0))));
                  TypeCtorInfo_50_50 = (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0);
                  {
                    Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&transform_hlds__implicit_parallelism__push_goals_together_scalar_common_3[0]));
                    MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_p_0_1));
                    MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (Var_37));
                  }
                  succeeded = mercury__list__map_3_p_2(TypeCtorInfo_50_50, TypeCtorInfo_50_50, Var_38, TailRelGoalPaths_23, &TailRestRelPaths_26);
                  if (succeeded)
                  {
                    TypeCtorInfo_51_51 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
                    succeeded = mercury__list__index1_3_p_0(TypeCtorInfo_51_51, Before0_18, PushConjNum_24, &conv1_PushIntoGoal0_27);
                    if (succeeded)
                    {
                      PushIntoGoal0_27 = ((MR_Word) (conv1_PushIntoGoal0_27));
                      succeeded = MR_TRUE;
                    }
                    if (succeeded)
                    {
                      Var_40 = (MR_Integer) 1;
                      transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0(LoHi_19, HeadRestRelPath_25, TailRestRelPaths_26, PushIntoGoal0_27, &PushIntoGoal_28, &Var_54);
                      succeeded = (Var_40 == Var_54);
                      if (succeeded)
                      {
                        Var_41 = (MR_Integer) ((MR_Unsigned) Lo_11 - (MR_Unsigned) PushConjNum_24);
                        succeeded = (Var_41 == (MR_Integer) 1);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word Before_29;
      MR_Word GoalExpr_30;
      MR_Word Var_43;

      mercury__list__det_replace_nth_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Before0_18, PushConjNum_24, ((MR_Box) (PushIntoGoal_28)), &Before_29);
      Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Before_29, After_20);
      {
        GoalExpr_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), GoalExpr_30, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), GoalExpr_30, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), GoalExpr_30, 2) = ((MR_Box) (Var_43));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Goal_33 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_30));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_16));
      }
      *Result_8 = (MR_Integer) 1;
    }
    else
    {
      *Result_8 = (MR_Integer) 0;
      *STATE_VARIABLE_Goal_33 = STATE_VARIABLE_Goal_0_32;
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__find_relative_paths_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_String HeadStr_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word TailStrs_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word HeadRelPath_8;
      MR_Word TailRelPaths_9;
      MR_Word HeadGoalPath_10;

      succeeded = mdbcomp__goal_path__goal_path_from_string_2_p_0(HeadStr_6, &HeadGoalPath_10);
      if (succeeded)
      {
        succeeded = mdbcomp__goal_path__goal_path_inside_relative_3_p_0(HeadVar__1_1, HeadGoalPath_10, &HeadRelPath_8);
        if (succeeded)
        {
          succeeded = transform_hlds__implicit_parallelism__push_goals_together__find_relative_paths_3_p_0(HeadVar__1_1, TailStrs_7, &TailRelPaths_9);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadRelPath_8));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailRelPaths_9));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Case_6;

    transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_of_case_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Case_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Case_6));
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PathList_2,
  MR_Integer HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * Pushable_6)
{
  {
    MR_bool succeeded;

    if ((PathList_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
        *Pushable_6 = (MR_Integer) 1;
      }
      else
      {
        MR_Word HeadCase0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
        MR_Word TailCases0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
        MR_Word HeadCase_18;
        MR_Word TailCases_19;
        MR_Word Var_32;
        MR_Word MainConsId_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCase0_16, (MR_Integer) 0))));
        MR_Word OtherConsIds_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCase0_16, (MR_Integer) 1))));
        MR_Word Goal0_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCase0_16, (MR_Integer) 2))));
        MR_Word Goal_64;

        transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_p_0(HeadVar__1_1, Goal0_63, &Goal_64);
        {
          HeadCase_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), HeadCase_18, 0) = ((MR_Box) (MainConsId_61));
          MR_hl_field(MR_mktag(0), HeadCase_18, 1) = ((MR_Box) (OtherConsIds_62));
          MR_hl_field(MR_mktag(0), HeadCase_18, 2) = ((MR_Box) (Goal_64));
        }
        {
          Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&transform_hlds__implicit_parallelism__push_goals_together_scalar_common_3[2]));
          MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_p_0_1));
          MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (HeadVar__1_1));
        }
        mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), Var_32, TailCases0_17, &TailCases_19);
        *Pushable_6 = (MR_Integer) 1;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadCase_18));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailCases_19));
        }
      }
    else
    {
      MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PathList_2, (MR_Integer) 1))));
      MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PathList_2, (MR_Integer) 0))));

      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
        *Pushable_6 = (MR_Integer) 0;
      }
      else
      {
        MR_Integer PathListHeadNum_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_57, (MR_Integer) 0))));
        MR_Word One_24;
        MR_Word More_25;
        MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_57, (MR_Integer) 1))));
        MR_Word HeadCase0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
        MR_Word TailCases0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
        MR_Word HeadCase_43;
        MR_Word TailCases_44;

        One_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 0))));
        More_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 1))));
        succeeded = (PathListHeadNum_23 == HeadVar__3_3);
        if (succeeded)
        {
          MR_Word GoalPushable_26;
          MR_Word MainConsId_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCase0_41, (MR_Integer) 0))));
          MR_Word OtherConsIds_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCase0_41, (MR_Integer) 1))));
          MR_Word Goal0_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCase0_41, (MR_Integer) 2))));
          MR_Word Goal_74;

          transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0(HeadVar__1_1, One_24, More_25, Goal0_73, &Goal_74, &GoalPushable_26);
          {
            HeadCase_43 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), HeadCase_43, 0) = ((MR_Box) (MainConsId_71));
            MR_hl_field(MR_mktag(0), HeadCase_43, 1) = ((MR_Box) (OtherConsIds_72));
            MR_hl_field(MR_mktag(0), HeadCase_43, 2) = ((MR_Box) (Goal_74));
          }
          switch (GoalPushable_26) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                TailCases_44 = TailCases0_42;
                *Pushable_6 = (MR_Integer) 0;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer Var_28 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 + (MR_Unsigned) 1);

                transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_p_0(HeadVar__1_1, Var_56, Var_28, TailCases0_42, &TailCases_44, Pushable_6);
              }
              break;
          }
        }
        else
        {
          MR_Integer Var_30;
          MR_Word MainConsId_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCase0_41, (MR_Integer) 0))));
          MR_Word OtherConsIds_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCase0_41, (MR_Integer) 1))));
          MR_Word Goal0_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCase0_41, (MR_Integer) 2))));
          MR_Word Goal_81;

          transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_p_0(HeadVar__1_1, Goal0_80, &Goal_81);
          {
            HeadCase_43 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), HeadCase_43, 0) = ((MR_Box) (MainConsId_78));
            MR_hl_field(MR_mktag(0), HeadCase_43, 1) = ((MR_Box) (OtherConsIds_79));
            MR_hl_field(MR_mktag(0), HeadCase_43, 2) = ((MR_Box) (Goal_81));
          }
          Var_30 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 + (MR_Unsigned) 1);
          transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_p_0(HeadVar__1_1, PathList_2, Var_30, TailCases0_42, &TailCases_44, Pushable_6);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadCase_43));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailCases_44));
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Goal_6;

    transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Goal_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Goal_6));
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * Pushable_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
        *Pushable_6 = (MR_Integer) 1;
      }
      else
      {
        MR_Word HeadDisjunct0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
        MR_Word TailDisjuncts0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
        MR_Word HeadDisjunct_18;
        MR_Word TailDisjuncts_19;
        MR_Word Var_32;

        transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_p_0(HeadVar__1_1, HeadDisjunct0_16, &HeadDisjunct_18);
        {
          Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&transform_hlds__implicit_parallelism__push_goals_together_scalar_common_3[1]));
          MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_p_0_1));
          MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (HeadVar__1_1));
        }
        mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_32, TailDisjuncts0_17, &TailDisjuncts_19);
        *Pushable_6 = (MR_Integer) 1;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadDisjunct_18));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailDisjuncts_19));
        }
      }
    else
    {
      MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
        *Pushable_6 = (MR_Integer) 0;
      }
      else
      {
        MR_Integer PathListHeadNum_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_57, (MR_Integer) 0))));
        MR_Word One_24;
        MR_Word More_25;
        MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_57, (MR_Integer) 1))));
        MR_Word HeadDisjunct0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
        MR_Word TailDisjuncts0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
        MR_Word HeadDisjunct_43;
        MR_Word TailDisjuncts_44;

        One_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 0))));
        More_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 1))));
        succeeded = (PathListHeadNum_23 == HeadVar__3_3);
        if (succeeded)
        {
          MR_Word GoalPushable_26;

          transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0(HeadVar__1_1, One_24, More_25, HeadDisjunct0_41, &HeadDisjunct_43, &GoalPushable_26);
          switch (GoalPushable_26) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                TailDisjuncts_44 = TailDisjuncts0_42;
                *Pushable_6 = (MR_Integer) 0;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer Var_28 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 + (MR_Unsigned) 1);

                transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_p_0(HeadVar__1_1, Var_56, Var_28, TailDisjuncts0_42, &TailDisjuncts_44, Pushable_6);
              }
              break;
          }
        }
        else
        {
          MR_Integer Var_30;

          transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_p_0(HeadVar__1_1, HeadDisjunct0_41, &HeadDisjunct_43);
          Var_30 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 + (MR_Unsigned) 1);
          transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_p_0(HeadVar__1_1, HeadVar__2_2, Var_30, TailDisjuncts0_42, &TailDisjuncts_44, Pushable_6);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadDisjunct_43));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailDisjuncts_44));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv2_Tail_5;

    succeeded = transform_hlds__implicit_parallelism__push_goals_together__maybe_steps_after_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_Tail_5);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv2_Tail_5));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_Tail_5;

    succeeded = transform_hlds__implicit_parallelism__push_goals_together__maybe_steps_after_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Tail_5);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_Tail_5));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__implicit_parallelism__push_goals_together__IntroducedFrom__pred__push_into_goal__647__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__implicit_parallelism__push_goals_together__IntroducedFrom__pred__push_into_goal__626__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0(
  MR_Word LoHi_7,
  MR_Word HeadPath_8,
  MR_Word TailPaths_9,
  MR_Word Goal0_10,
  MR_Word * Goal_11,
  MR_Word * Pushable_12)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_10, (MR_Integer) 0))));
    MR_Word GoalInfo0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_10, (MR_Integer) 1))));

    if ((HeadPath_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_115;

      {
        Var_115 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_115, 0) = ((MR_Box) (&transform_hlds__implicit_parallelism__push_goals_together_scalar_common_2[1]));
        MR_hl_field(MR_mktag(0), Var_115, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_115, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_115, 3) = ((MR_Box) (TailPaths_9));
        MR_hl_field(MR_mktag(0), Var_115, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__require__expect_3_p_0(Var_115, (MR_String) "predicate \140transform_hlds.implicit_parallelism.push_goals_together.push_into_goal\'/6", (MR_String) "TailSteps != []");
      transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_p_0(LoHi_7, Goal0_10, Goal_11);
      *Pushable_12 = (MR_Integer) 1;
    }
    else
    {
      MR_Word FirstHeadStep_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadPath_8, (MR_Integer) 0))));
      MR_Word LaterHeadPath_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadPath_8, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) GoalExpr0_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Goal_11 = Goal0_10;
            *Pushable_12 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            *Goal_11 = Goal0_10;
            *Pushable_12 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              {
                *Goal_11 = Goal0_10;
                *Pushable_12 = (MR_Integer) 0;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ConjType_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word Conjuncts0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 2))));

                succeeded = ((MR_tag((MR_Word) FirstHeadStep_15)) == (MR_Integer) 1);
                if (succeeded)
                  succeeded = (LaterHeadPath_16 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  MR_Word Var_109;

                  {
                    Var_109 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_109, 0) = ((MR_Box) (&transform_hlds__implicit_parallelism__push_goals_together_scalar_common_2[1]));
                    MR_hl_field(MR_mktag(0), Var_109, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0_2));
                    MR_hl_field(MR_mktag(0), Var_109, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_109, 3) = ((MR_Box) (TailPaths_9));
                    MR_hl_field(MR_mktag(0), Var_109, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  mercury__require__expect_3_p_0(Var_109, (MR_String) "predicate \140transform_hlds.implicit_parallelism.push_goals_together.push_into_goal\'/6", (MR_String) "TailSteps != []");
                  transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_p_0(LoHi_7, Goal0_10, Goal_11);
                  *Pushable_12 = (MR_Integer) 1;
                }
                else
                {
                  MR_Integer ConjNum_43;
                  MR_Word LaterTailPaths_44;
                  MR_Word SelectedConjunct0_45;
                  MR_Word TypeCtorInfo_142_142;
                  MR_Word TypeCtorInfo_143_143;
                  MR_Integer Length_46;
                  MR_Word Var_113;
                  MR_Box conv1_SelectedConjunct0_45;

                  succeeded = ((MR_tag((MR_Word) FirstHeadStep_15)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    ConjNum_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), FirstHeadStep_15, (MR_Integer) 0))));
                    TypeCtorInfo_142_142 = (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0);
                    {
                      Var_113 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_113, 0) = ((MR_Box) (&transform_hlds__implicit_parallelism__push_goals_together_scalar_common_3[0]));
                      MR_hl_field(MR_mktag(0), Var_113, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0_3));
                      MR_hl_field(MR_mktag(0), Var_113, 2) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), Var_113, 3) = ((MR_Box) (FirstHeadStep_15));
                    }
                    succeeded = mercury__list__map_3_p_2(TypeCtorInfo_142_142, TypeCtorInfo_142_142, Var_113, TailPaths_9, &LaterTailPaths_44);
                    if (succeeded)
                    {
                      TypeCtorInfo_143_143 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0);
                      succeeded = mercury__list__index1_3_p_0(TypeCtorInfo_143_143, Conjuncts0_41, ConjNum_43, &conv1_SelectedConjunct0_45);
                      if (succeeded)
                      {
                        SelectedConjunct0_45 = ((MR_Word) (conv1_SelectedConjunct0_45));
                        succeeded = MR_TRUE;
                      }
                      if (succeeded)
                      {
                        mercury__list__length_2_p_0(TypeCtorInfo_143_143, Conjuncts0_41, &Length_46);
                        succeeded = (ConjNum_43 == Length_46);
                      }
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word SelectedConjunct_47;
                    MR_Word Conjuncts_48;
                    MR_Word GoalExpr_49;

                    transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0(LoHi_7, LaterHeadPath_16, LaterTailPaths_44, SelectedConjunct0_45, &SelectedConjunct_47, Pushable_12);
                    mercury__list__det_replace_nth_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjuncts0_41, ConjNum_43, ((MR_Box) (SelectedConjunct_47)), &Conjuncts_48);
                    {
                      GoalExpr_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_49, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), GoalExpr_49, 1) = (MR_Box) ((MR_Unsigned) (ConjType_40));
                      MR_hl_field(MR_mktag(3), GoalExpr_49, 2) = ((MR_Box) (Conjuncts_48));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *Goal_11 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_49));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_14));
                    }
                  }
                  else
                  {
                    *Goal_11 = Goal0_10;
                    *Pushable_12 = (MR_Integer) 0;
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Disjuncts0_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1))));
                MR_Word PathsMap_51;
                MR_Word Var_106;
                MR_Word Var_107;

                {
                  Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (HeadPath_8));
                  MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (TailPaths_9));
                }
                Var_107 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[2]));
                succeeded = transform_hlds__implicit_parallelism__push_goals_together__build_disj_paths_map_3_p_0(Var_106, Var_107, &PathsMap_51);
                if (succeeded)
                {
                  MR_Word PathsList_52;
                  MR_Word Disjuncts_53;
                  MR_Word GoalExpr_119;

                  mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[2]), PathsMap_51, &PathsList_52);
                  transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_p_0(LoHi_7, PathsList_52, (MR_Integer) 1, Disjuncts0_50, &Disjuncts_53, Pushable_12);
                  {
                    GoalExpr_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), GoalExpr_119, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(MR_mktag(3), GoalExpr_119, 1) = ((MR_Box) (Disjuncts_53));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    *Goal_11 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_119));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_14));
                  }
                }
                else
                {
                  *Goal_11 = Goal0_10;
                  *Pushable_12 = (MR_Integer) 0;
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1))));
                MR_Word CanFail_55 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 2))) & (MR_Integer) 1);
                MR_Word Cases0_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 3))));
                MR_Word PathsMap_125;
                MR_Word Var_103;
                MR_Word Var_104;

                {
                  Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (HeadPath_8));
                  MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) (TailPaths_9));
                }
                Var_104 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[2]));
                succeeded = transform_hlds__implicit_parallelism__push_goals_together__build_switch_paths_map_3_p_0(Var_103, Var_104, &PathsMap_125);
                if (succeeded)
                {
                  MR_Word Cases_57;
                  MR_Word GoalExpr_122;
                  MR_Word PathsList_123;

                  mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[2]), PathsMap_125, &PathsList_123);
                  transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_p_0(LoHi_7, PathsList_123, (MR_Integer) 1, Cases0_56, &Cases_57, Pushable_12);
                  {
                    GoalExpr_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), GoalExpr_122, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(MR_mktag(3), GoalExpr_122, 1) = ((MR_Box) (Var_54));
                    MR_hl_field(MR_mktag(3), GoalExpr_122, 2) = (MR_Box) ((MR_Unsigned) (CanFail_55));
                    MR_hl_field(MR_mktag(3), GoalExpr_122, 3) = ((MR_Box) (Cases_57));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    *Goal_11 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_122));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_14));
                  }
                }
                else
                {
                  *Goal_11 = Goal0_10;
                  *Pushable_12 = (MR_Integer) 0;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1))));
                MR_Word SubGoal0_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 2))));
                MR_Word SubGoalInfo0_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal0_74, (MR_Integer) 1))));
                MR_Word Detism_77;
                MR_Word SubDetism_78;
                MR_Word HeadPathAfter_79;
                MR_Word TailPathsAfter_80;
                MR_Word TypeCtorInfo_155_155;
                MR_Word Var_97;
                MR_Word Var_99;

                Detism_77 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_14);
                SubDetism_78 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(SubGoalInfo0_76);
                succeeded = (Detism_77 == SubDetism_78);
                if (succeeded)
                {
                  Var_97 = (MR_Word) (MR_mkword(MR_mktag(3), &transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[3]));
                  succeeded = transform_hlds__implicit_parallelism__push_goals_together__maybe_steps_after_3_p_0(Var_97, HeadPath_8, &HeadPathAfter_79);
                  if (succeeded)
                  {
                    TypeCtorInfo_155_155 = (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0);
                    Var_99 = (MR_Word) (&transform_hlds__implicit_parallelism__push_goals_together_scalar_common_4[0]);
                    succeeded = mercury__list__map_3_p_2(TypeCtorInfo_155_155, TypeCtorInfo_155_155, Var_99, TailPaths_9, &TailPathsAfter_80);
                  }
                }
                if (succeeded)
                {
                  MR_Word SubGoal_81;
                  MR_Word GoalExpr_135;

                  transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0(LoHi_7, HeadPathAfter_79, TailPathsAfter_80, SubGoal0_74, &SubGoal_81, Pushable_12);
                  {
                    GoalExpr_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), GoalExpr_135, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), GoalExpr_135, 1) = ((MR_Box) (Reason_73));
                    MR_hl_field(MR_mktag(3), GoalExpr_135, 2) = ((MR_Box) (SubGoal_81));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    *Goal_11 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_135));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_14));
                  }
                }
                else
                {
                  *Goal_11 = Goal0_10;
                  *Pushable_12 = (MR_Integer) 0;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Vars_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1))));
                MR_Word Cond_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 2))));
                MR_Word Then0_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 3))));
                MR_Word Else0_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 4))));
                MR_Word ThenPaths_62;
                MR_Word ElsePaths_63;
                MR_Word ThenPathsTail_160;
                MR_Word ElsePathsTail_161;
                MR_Word HeadFirstStep_162;
                MR_Word HeadLaterPath_163;

                succeeded = transform_hlds__implicit_parallelism__push_goals_together__build_ite_paths_map_3_p_0(TailPaths_9, &ThenPathsTail_160, &ElsePathsTail_161);
                if (succeeded)
                {
                  HeadFirstStep_162 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadPath_8, (MR_Integer) 0))));
                  HeadLaterPath_163 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadPath_8, (MR_Integer) 1))));
                  succeeded = (HeadFirstStep_162 == (MR_Word) ((MR_Unsigned) 4U));
                  if (succeeded)
                  {
                    {
                      ThenPaths_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ThenPaths_62, 0) = ((MR_Box) (HeadLaterPath_163));
                      MR_hl_field(MR_mktag(1), ThenPaths_62, 1) = ((MR_Box) (ThenPathsTail_160));
                    }
                    ElsePaths_63 = ElsePathsTail_161;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (HeadFirstStep_162 == (MR_Word) ((MR_Unsigned) 4U));
                    if (succeeded)
                    {
                      ThenPaths_62 = ThenPathsTail_160;
                      {
                        ElsePaths_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ElsePaths_63, 0) = ((MR_Box) (HeadLaterPath_163));
                        MR_hl_field(MR_mktag(1), ElsePaths_63, 1) = ((MR_Box) (ElsePathsTail_161));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Word Then_64;
                  MR_Word ThenPushable_65;
                  MR_Word Else_68;
                  MR_Word ElsePushable_69;

                  if ((ThenPaths_62 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_p_0(LoHi_7, Then0_60, &Then_64);
                    ThenPushable_65 = (MR_Integer) 1;
                  }
                  else
                  {
                    MR_Word ThenPathsHead_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ThenPaths_62, (MR_Integer) 0))));
                    MR_Word ThenPathsTail_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ThenPaths_62, (MR_Integer) 1))));

                    transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0(LoHi_7, ThenPathsHead_66, ThenPathsTail_67, Then0_60, &Then_64, &ThenPushable_65);
                  }
                  if ((ElsePaths_63 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_p_0(LoHi_7, Else0_61, &Else_68);
                    ElsePushable_69 = (MR_Integer) 1;
                  }
                  else
                  {
                    MR_Word ElsePathsHead_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ElsePaths_63, (MR_Integer) 0))));
                    MR_Word ElsePathsTail_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ElsePaths_63, (MR_Integer) 1))));

                    transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0(LoHi_7, ElsePathsHead_70, ElsePathsTail_71, Else0_61, &Else_68, &ElsePushable_69);
                  }
                  succeeded = (ThenPushable_65 == (MR_Integer) 1);
                  if (succeeded)
                    succeeded = (ElsePushable_69 == (MR_Integer) 1);
                  if (succeeded)
                  {
                    MR_Word GoalExpr_130;

                    {
                      GoalExpr_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_130, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), GoalExpr_130, 1) = ((MR_Box) (Vars_58));
                      MR_hl_field(MR_mktag(3), GoalExpr_130, 2) = ((MR_Box) (Cond_59));
                      MR_hl_field(MR_mktag(3), GoalExpr_130, 3) = ((MR_Box) (Then_64));
                      MR_hl_field(MR_mktag(3), GoalExpr_130, 4) = ((MR_Box) (Else_68));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *Goal_11 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_130));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_14));
                    }
                    *Pushable_12 = (MR_Integer) 1;
                  }
                  else
                  {
                    *Goal_11 = Goal0_10;
                    *Pushable_12 = (MR_Integer) 0;
                  }
                }
                else
                {
                  *Goal_11 = Goal0_10;
                  *Pushable_12 = (MR_Integer) 0;
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Shorthand_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_13, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) Shorthand_82)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.implicit_parallelism.push_goals_together.push_into_goal\'/6", (MR_String) "bi_implication");
                      return;
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    {
                      *Goal_11 = Goal0_10;
                      *Pushable_12 = (MR_Integer) 0;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__maybe_steps_after_3_p_0(
  MR_Word Step_4,
  MR_Word HeadVar__2_2,
  MR_Word * Tail_5)
{
  {
    MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Var_6;

    if (succeeded)
    {
      Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      *Tail_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      succeeded = mdbcomp__goal_path____Unify____goal_path_step_0_0(Step_4, Var_6);
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__build_ite_paths_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Head_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Tail_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ThenPathsTail_8;
      MR_Word ElsePathsTail_9;
      MR_Word HeadFirstStep_10;
      MR_Word HeadLaterPath_11;

      succeeded = transform_hlds__implicit_parallelism__push_goals_together__build_ite_paths_map_3_p_0(Tail_5, &ThenPathsTail_8, &ElsePathsTail_9);
      if (succeeded)
      {
        succeeded = (Head_4 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          HeadFirstStep_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Head_4, (MR_Integer) 0))));
          HeadLaterPath_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Head_4, (MR_Integer) 1))));
          succeeded = (HeadFirstStep_10 == (MR_Word) ((MR_Unsigned) 4U));
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadLaterPath_11));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ThenPathsTail_8));
            }
            *HeadVar__3_3 = ElsePathsTail_9;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (HeadFirstStep_10 == (MR_Word) ((MR_Unsigned) 4U));
            if (succeeded)
            {
              *HeadVar__2_2 = ThenPathsTail_8;
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__3_3 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadLaterPath_11));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ElsePathsTail_9));
              }
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__build_switch_paths_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_DisjPathsMap_0_2,
  MR_Word * STATE_VARIABLE_DisjPathsMap_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_DisjPathsMap_3 = STATE_VARIABLE_DisjPathsMap_0_2;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Head_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Tail_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer N_10;
      MR_Word HeadLaterPath_12;
      MR_Word Var_17;
      MR_Word STATE_VARIABLE_DisjPathsMap_20_20;
      MR_Word One_13;
      MR_Word More_14;
      MR_Word TypeInfo_27_27;
      MR_Word Var_18;
      MR_Box conv0_Var_18;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_DisjPathsMap_0_2;

      succeeded = (Head_7 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Head_7, (MR_Integer) 0))));
        HeadLaterPath_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Head_7, (MR_Integer) 1))));
        succeeded = ((((MR_tag((MR_Word) Var_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_17, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          N_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_17, (MR_Integer) 1))));
          TypeInfo_27_27 = (MR_Word) (&transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[2]);
          succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_27_27, STATE_VARIABLE_DisjPathsMap_0_2, N_10, &conv0_Var_18);
          if (succeeded)
          {
            Var_18 = ((MR_Word) (conv0_Var_18));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            One_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0))));
            More_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1))));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word Var_19;
            MR_Word Var_21;

            {
              Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (One_13));
              MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (More_14));
            }
            {
              Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (HeadLaterPath_12));
              MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (Var_21));
            }
            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[2]), N_10, ((MR_Box) (Var_19)), STATE_VARIABLE_DisjPathsMap_0_2, &STATE_VARIABLE_DisjPathsMap_20_20);
          }
          else
          {
            MR_Word Var_22;

            {
              Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (HeadLaterPath_12));
              MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[2]), N_10, ((MR_Box) (Var_22)), STATE_VARIABLE_DisjPathsMap_0_2, &STATE_VARIABLE_DisjPathsMap_20_20);
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Tail_8;
          next_value_of_STATE_VARIABLE_DisjPathsMap_0_2 = STATE_VARIABLE_DisjPathsMap_20_20;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          STATE_VARIABLE_DisjPathsMap_0_2 = next_value_of_STATE_VARIABLE_DisjPathsMap_0_2;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__build_disj_paths_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_DisjPathsMap_0_2,
  MR_Word * STATE_VARIABLE_DisjPathsMap_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_DisjPathsMap_3 = STATE_VARIABLE_DisjPathsMap_0_2;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Head_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Tail_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer N_10;
      MR_Word HeadLaterPath_11;
      MR_Word Var_16;
      MR_Word STATE_VARIABLE_DisjPathsMap_19_19;
      MR_Word One_12;
      MR_Word More_13;
      MR_Word TypeInfo_26_26;
      MR_Word Var_17;
      MR_Box conv0_Var_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_DisjPathsMap_0_2;

      succeeded = (Head_7 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Head_7, (MR_Integer) 0))));
        HeadLaterPath_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Head_7, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 2);
        if (succeeded)
        {
          N_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_16, (MR_Integer) 0))));
          TypeInfo_26_26 = (MR_Word) (&transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[2]);
          succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(TypeInfo_26_26, STATE_VARIABLE_DisjPathsMap_0_2, N_10, &conv0_Var_17);
          if (succeeded)
          {
            Var_17 = ((MR_Word) (conv0_Var_17));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            One_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0))));
            More_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 1))));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word Var_18;
            MR_Word Var_20;

            {
              Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (One_12));
              MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (More_13));
            }
            {
              Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (HeadLaterPath_11));
              MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (Var_20));
            }
            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[2]), N_10, ((MR_Box) (Var_18)), STATE_VARIABLE_DisjPathsMap_0_2, &STATE_VARIABLE_DisjPathsMap_19_19);
          }
          else
          {
            MR_Word Var_21;

            {
              Var_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (HeadLaterPath_11));
              MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[2]), N_10, ((MR_Box) (Var_21)), STATE_VARIABLE_DisjPathsMap_0_2, &STATE_VARIABLE_DisjPathsMap_19_19);
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Tail_8;
          next_value_of_STATE_VARIABLE_DisjPathsMap_0_2 = STATE_VARIABLE_DisjPathsMap_19_19;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          STATE_VARIABLE_DisjPathsMap_0_2 = next_value_of_STATE_VARIABLE_DisjPathsMap_0_2;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_p_0(
  MR_Word AddedGoals_4,
  MR_Word Goal0_5,
  MR_Word * Goal_6)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 0))));
    MR_Word Conjuncts0_9;
    MR_Word Var_10;

    succeeded = ((((MR_tag((MR_Word) GoalExpr0_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 1))) & (MR_Integer) 1);
      Conjuncts0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_7, (MR_Integer) 2))));
      succeeded = (Var_10 == (MR_Integer) 0);
    }
    if (succeeded)
    {
      MR_Word Var_11;

      Var_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjuncts0_9, AddedGoals_4);
      hlds__goal_util__create_conj_from_list_3_p_0(Var_11, (MR_Integer) 0, Goal_6);
    }
    else
    {
      MR_Word Var_13;

      {
        Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Goal0_5));
        MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (AddedGoals_4));
      }
      hlds__goal_util__create_conj_from_list_3_p_0(Var_13, (MR_Integer) 0, Goal_6);
    }
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__find_lo_hi_goals_9_p_0(
  MR_Word PushInfo_10,
  MR_Word Conjuncts_11,
  MR_Integer Lo_12,
  MR_Integer Hi_13,
  MR_Integer Cur_14,
  MR_Word * Before_15,
  MR_Word * LoHi_16,
  MR_Word * After_17,
  MR_Word * Pushable_18)
{
  {
    MR_bool succeeded = (Cur_14 == Lo_12);

    if (succeeded)
    {
      transform_hlds__implicit_parallelism__push_goals_together__find_hi_goals_7_p_0(PushInfo_10, Conjuncts_11, Hi_13, Cur_14, LoHi_16, After_17, Pushable_18);
      *Before_15 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    if ((Conjuncts_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Before_15 = (MR_Word) ((MR_Unsigned) 0U);
      *LoHi_16 = (MR_Word) ((MR_Unsigned) 0U);
      *After_17 = (MR_Word) ((MR_Unsigned) 0U);
      *Pushable_18 = (MR_Integer) 0;
    }
    else
    {
      MR_Word Head_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Conjuncts_11, (MR_Integer) 0))));
      MR_Word Tail_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Conjuncts_11, (MR_Integer) 1))));
      MR_Word BeforeTail_21;
      MR_Integer Var_22 = (MR_Integer) ((MR_Unsigned) Cur_14 + (MR_Unsigned) 1);

      transform_hlds__implicit_parallelism__push_goals_together__find_lo_hi_goals_9_p_0(PushInfo_10, Tail_20, Lo_12, Hi_13, Var_22, &BeforeTail_21, LoHi_16, After_17, Pushable_18);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Before_15 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Head_19));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (BeforeTail_21));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__find_hi_goals_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__7_7 = (MR_Integer) 0;
    }
    else
    {
      MR_Word Head_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Tail_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word HeadPushable_19;

      transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_p_0(HeadVar__1_1, Head_12, &HeadPushable_19);
      switch (HeadPushable_19) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
            *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
            *HeadVar__7_7 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 1:
          {
            succeeded = (HeadVar__4_4 == HeadVar__3_3);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__5_5 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Head_12));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              *HeadVar__6_6 = Tail_13;
              *HeadVar__7_7 = (MR_Integer) 1;
            }
            else
            {
              MR_Word LoHiTail_20;
              MR_Integer Var_22 = (MR_Integer) ((MR_Unsigned) HeadVar__4_4 + (MR_Unsigned) 1);

              transform_hlds__implicit_parallelism__push_goals_together__find_hi_goals_7_p_0(HeadVar__1_1, Tail_13, HeadVar__3_3, Var_22, &LoHiTail_20, HeadVar__6_6, HeadVar__7_7);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__5_5 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Head_12));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LoHiTail_20));
              }
            }
          }
          break;
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__implicit_parallelism__push_goals_together__is_non_rtti_var_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_p_0(
  MR_Word PushInfo_4,
  MR_Word Goal_5,
  MR_Word * Pushable_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 0))));
    MR_Word GoalInfo_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 1))));
    MR_Word Purity_9;
    MR_Word Detism_10;

    // setup for model_det tailcalls optimized into a loop
    ;
    Purity_9 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo_8);
    Detism_10 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_8);
    succeeded = (Purity_9 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (Detism_10 == (MR_Integer) 0);
    if (succeeded)
      switch (MR_tag((MR_Word) GoalExpr_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_64 = (MR_Word) ((MR_Word) (GoalExpr_7));
            MR_Word next_value_of_Goal_5 = SubGoal_64;

            // direct tailcall eliminated
            ;
            Goal_5 = next_value_of_Goal_5;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Unification_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_7, (MR_Integer) 3))));

            switch (MR_tag((MR_Word) Unification_14)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 2:
                *Pushable_6 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Args_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_14, (MR_Integer) 2))));
                  MR_Word RttiVarMaps_33 = (MR_Word) (PushInfo_4);
                  MR_Word Var_87;

                  {
                    Var_87 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (&transform_hlds__implicit_parallelism__push_goals_together_scalar_common_2[0]));
                    MR_hl_field(MR_mktag(0), Var_87, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_p_0_1));
                    MR_hl_field(MR_mktag(0), Var_87, 2) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), Var_87, 3) = ((MR_Box) (RttiVarMaps_33));
                  }
                  succeeded = mercury__list__all_true_2_p_0((MR_Word) (&transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[0]), Var_87, Args_29);
                  if (succeeded)
                    *Pushable_6 = (MR_Integer) 1;
                  else
                    *Pushable_6 = (MR_Integer) 0;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Unification_14, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *Pushable_6 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.implicit_parallelism.push_goals_together.is_pushable_goal\'/3", (MR_String) "complicated_unify");
                      return;
                    }
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          *Pushable_6 = (MR_Integer) 1;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              *Pushable_6 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));

                transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_list_3_p_0(PushInfo_4, Goals_56, Pushable_6);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));

                transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_list_3_p_0(PushInfo_4, Goals_90, Pushable_6);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 3))));

                transform_hlds__implicit_parallelism__push_goals_together__is_pushable_case_list_3_p_0(PushInfo_4, Cases_59, Pushable_6);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubGoal_91 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
                MR_Word next_value_of_Goal_5 = SubGoal_91;

                // direct tailcall eliminated
                ;
                Goal_5 = next_value_of_Goal_5;
                continue;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Then_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 3))));
                MR_Word Else_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 4))));
                MR_Word Var_83;
                MR_Word Goal_94 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
                MR_Word Goals_95;
                MR_Word GoalPushable_97;

                {
                  Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Else_63));
                  MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Goals_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Goals_95, 0) = ((MR_Box) (Then_62));
                  MR_hl_field(MR_mktag(1), Goals_95, 1) = ((MR_Box) (Var_83));
                }
                transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_p_0(PushInfo_4, Goal_94, &GoalPushable_97);
                switch (GoalPushable_97) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *Pushable_6 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Goal_100 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_95, (MR_Integer) 0))));
                      MR_Word Goals_101 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_95, (MR_Integer) 1))));
                      MR_Word GoalPushable_103;

                      transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_p_0(PushInfo_4, Goal_100, &GoalPushable_103);
                      switch (GoalPushable_103) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          *Pushable_6 = (MR_Integer) 0;
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word Goal_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_101, (MR_Integer) 0))));
                            MR_Word GoalPushable_109;

                            transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_p_0(PushInfo_4, Goal_106, &GoalPushable_109);
                            switch (GoalPushable_109) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                *Pushable_6 = (MR_Integer) 0;
                                break;
                              case (MR_Integer) 1:
                                *Pushable_6 = (MR_Integer) 1;
                                break;
                            }
                          }
                          break;
                      }
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Shorthand_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) Shorthand_66)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.implicit_parallelism.push_goals_together.is_pushable_goal\'/3", (MR_String) "bi_implication");
                      return;
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    *Pushable_6 = (MR_Integer) 0;
                    break;
                }
              }
              break;
          }
          break;
      }
    else
      *Pushable_6 = (MR_Integer) 0;
    break;
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__is_pushable_case_list_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Integer) 1;
    else
    {
      MR_Word Case_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Cases_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Goal_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_6, (MR_Integer) 2))));
      MR_Word GoalPushable_12;

      transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_p_0(HeadVar__1_1, Goal_11, &GoalPushable_12);
      switch (GoalPushable_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__3_3 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_HeadVar__2_2 = Cases_7;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_list_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Integer) 1;
    else
    {
      MR_Word Goal_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word GoalPushable_9;

      transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_p_0(HeadVar__1_1, Goal_6, &GoalPushable_9);
      switch (GoalPushable_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__3_3 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_HeadVar__2_2 = Goals_7;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
          break;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Unify____maybe_pushable_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__implicit_parallelism__push_goals_together____Unify____maybe_pushable_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Compare____maybe_pushable_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__implicit_parallelism__push_goals_together____Compare____maybe_pushable_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Unify____push_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__implicit_parallelism__push_goals_together____Unify____push_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Compare____push_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__implicit_parallelism__push_goals_together____Compare____push_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Unify____push_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__implicit_parallelism__push_goals_together____Unify____push_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Compare____push_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__implicit_parallelism__push_goals_together____Compare____push_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__transform_hlds__implicit_parallelism__push_goals_together__init(void)
{
}

void mercury__transform_hlds__implicit_parallelism__push_goals_together__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__type_ctor_info_maybe_pushable_0);
	MR_register_type_ctor_info(&transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__type_ctor_info_push_info_0);
	MR_register_type_ctor_info(&transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__type_ctor_info_push_result_0);
}

void mercury__transform_hlds__implicit_parallelism__push_goals_together__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__implicit_parallelism__push_goals_together__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.implicit_parallelism.push_goals_together.
