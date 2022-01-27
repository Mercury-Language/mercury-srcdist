/*
** Automatically generated from `push_goals_together.m'
** by the Mercury compiler,
** version rotd-2017-01-21
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


/* :- module transform_hlds.implicit_parallelism.push_goals_together. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__implicit_parallelism__push_goals_together__init
ENDINIT
*/

#include "transform_hlds.implicit_parallelism.push_goals_together.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
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
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
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
transform_hlds__implicit_parallelism__push_goals_together____Unify____maybe_pushable_0_0_10001(
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Compare____maybe_pushable_0_0_10001(
  MR_Box * transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2,
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Unify____push_info_0_0_10001(
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Compare____push_info_0_0_10001(
  MR_Box * transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2,
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Unify____push_result_0_0_10001(
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Compare____push_result_0_0_10001(
  MR_Box * transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2,
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__IntroducedFrom__pred__push_into_goal__625__1_2_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__TailPaths_9,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_119);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__IntroducedFrom__pred__push_into_goal__646__1_2_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__TailPaths_9,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_113);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Compare____push_info_0_0(
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Unify____push_info_0_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Compare____maybe_pushable_0_0(
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Unify____maybe_pushable_0_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_1,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__maybe_steps_after_3_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Step_4,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Tail_5);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__find_relative_paths_3_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_of_case_3_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__AddedGoals_4,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Case0_5,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Case_6);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__AddedGoals_4,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal0_5,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Goal_6);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__build_ite_paths_map_3_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__build_switch_paths_map_3_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_0_2,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_3);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__build_disj_paths_map_3_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_0_2,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_3);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_p_0_1(
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure_arg,
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
  MR_Box * transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__PathList_2,
  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Pushable_6);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_p_0_1(
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure_arg,
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
  MR_Box * transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Pushable_6);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0_4(
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure_arg,
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
  MR_Box * transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0_3(
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure_arg,
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
  MR_Box * transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0_2(
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure_arg);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0_1(
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure_arg);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__LoHi_7,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadPath_8,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__TailPaths_9,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal0_10,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Goal_11,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Pushable_12);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__is_non_rtti_var_2_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__RttiVarMaps_3,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Arg_4);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__is_pushable_case_list_3_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_list_3_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_p_0_1(
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure_arg,
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushInfo_4,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal_5,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Pushable_6);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__find_hi_goals_7_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3,
  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__6_6,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__7_7);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__find_lo_hi_goals_9_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushInfo_10,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Conjuncts_11,
  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__Lo_12,
  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__Hi_13,
  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__Cur_14,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Before_15,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__LoHi_16,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__After_17,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Pushable_18);

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_p_0_1(
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure_arg,
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
  MR_Box * transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushGoal_6,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushInfo_7,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Result_8,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_32,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_33);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__do_push_in_cases_7_p_0(
  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__6_6,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__7_7);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goals_7_p_0(
  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__6_6,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__7_7);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushGoal_2,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushInfo_3,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Result_4,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_5,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6);

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__do_push_list_5_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushInfo_2,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_4,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_5);


static /* final */ const MR_Box transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[4][2];

static /* final */ const MR_Box transform_hlds__implicit_parallelism__push_goals_together_scalar_common_2[3][6];

static /* final */ const MR_Box transform_hlds__implicit_parallelism__push_goals_together_scalar_common_3[2][5];

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
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box transform_hlds__implicit_parallelism__push_goals_together_scalar_common_2[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__push_goals_together__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__push_goals_together__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
};

static /* final */ const MR_Box transform_hlds__implicit_parallelism__push_goals_together_scalar_common_3[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__push_goals_together__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__push_goals_together__list__pti_list_1__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0)),
    ((MR_Box) (&transform_hlds__implicit_parallelism__push_goals_together__list__pti_list_1__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0))
  },
};

static /* final */ const MR_Box transform_hlds__implicit_parallelism__push_goals_together_scalar_common_4[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&transform_hlds__implicit_parallelism__push_goals_together_scalar_common_2[0])),
    ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[3])))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__implicit_parallelism__push_goals_together__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__implicit_parallelism__push_goals_together__list__pti_list_1__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__implicit_parallelism__push_goals_together__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static const MR_EnumFunctorDesc transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_maybe_pushable_0_0 = {
  (MR_String) "not_pushable",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_maybe_pushable_0_1 = {
  (MR_String) "pushable",
  (MR_Integer) 1
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together____Unify____maybe_pushable_0_0_10001)),
  ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together____Compare____maybe_pushable_0_0_10001)),
  (MR_String) "transform_hlds.implicit_parallelism.push_goals_together",
  (MR_String) "maybe_pushable",
  {     transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_name_ordered_maybe_pushable_0 },
  {     transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_value_ordered_maybe_pushable_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__functor_number_map_maybe_pushable_0
};

static const MR_Integer transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__functor_number_map_push_info_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__notag_functor_desc_push_info_0 = {
  (MR_String) "push_info",
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
  (MR_String) "pi_rtti_varmaps",
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__type_ctor_info_push_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together____Unify____push_info_0_0_10001)),
  ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together____Compare____push_info_0_0_10001)),
  (MR_String) "transform_hlds.implicit_parallelism.push_goals_together",
  (MR_String) "push_info",
  {     &transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__notag_functor_desc_push_info_0 },
  {     &transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__notag_functor_desc_push_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__functor_number_map_push_info_0
};

static const MR_EnumFunctorDesc transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_push_result_0_0 = {
  (MR_String) "push_failed",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_functor_desc_push_result_0_1 = {
  (MR_String) "push_succeeded",
  (MR_Integer) 1
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together____Unify____push_result_0_0_10001)),
  ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together____Compare____push_result_0_0_10001)),
  (MR_String) "transform_hlds.implicit_parallelism.push_goals_together",
  (MR_String) "push_result",
  {     transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_name_ordered_push_result_0 },
  {     transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__enum_value_ordered_push_result_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__implicit_parallelism__push_goals_together__transform_hlds__implicit_parallelism__push_goals_together__functor_number_map_push_result_0
};

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Unify____maybe_pushable_0_0_10001(
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;

    {
      transform_hlds__implicit_parallelism__push_goals_together__succeeded = transform_hlds__implicit_parallelism__push_goals_together____Unify____maybe_pushable_0_0(((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1), ((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2));
    }
    return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Compare____maybe_pushable_0_0_10001(
  MR_Box * transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2,
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__conv0_HeadVar__1_1;

    {
      transform_hlds__implicit_parallelism__push_goals_together____Compare____maybe_pushable_0_0(&transform_hlds__implicit_parallelism__push_goals_together__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2), ((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_3));
    }
    *transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1 = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Unify____push_info_0_0_10001(
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;

    {
      transform_hlds__implicit_parallelism__push_goals_together__succeeded = transform_hlds__implicit_parallelism__push_goals_together____Unify____push_info_0_0(((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1), ((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2));
    }
    return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Compare____push_info_0_0_10001(
  MR_Box * transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2,
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__conv0_HeadVar__1_1;

    {
      transform_hlds__implicit_parallelism__push_goals_together____Compare____push_info_0_0(&transform_hlds__implicit_parallelism__push_goals_together__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2), ((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_3));
    }
    *transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1 = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Unify____push_result_0_0_10001(
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;

    {
      transform_hlds__implicit_parallelism__push_goals_together__succeeded = transform_hlds__implicit_parallelism__push_goals_together____Unify____push_result_0_0(((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1), ((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2));
    }
    return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Compare____push_result_0_0_10001(
  MR_Box * transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2,
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__conv0_HeadVar__1_1;

    {
      transform_hlds__implicit_parallelism__push_goals_together____Compare____push_result_0_0(&transform_hlds__implicit_parallelism__push_goals_together__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2), ((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_3));
    }
    *transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1 = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__IntroducedFrom__pred__push_into_goal__625__1_2_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__TailPaths_9,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_119)
{
  {
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;

    {
      transform_hlds__implicit_parallelism__push_goals_together__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[1], ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__TailPaths_9)), ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_119)));
    }
    return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__IntroducedFrom__pred__push_into_goal__646__1_2_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__TailPaths_9,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_113)
{
  {
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;

    {
      transform_hlds__implicit_parallelism__push_goals_together__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[1], ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__TailPaths_9)), ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_113)));
    }
    return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
  }
}

void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Compare____push_result_0_0(
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;
    MR_Integer transform_hlds__implicit_parallelism__push_goals_together__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2;
    MR_Integer transform_hlds__implicit_parallelism__push_goals_together__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, transform_hlds__implicit_parallelism__push_goals_together__Cast_HeadVar1_4, transform_hlds__implicit_parallelism__push_goals_together__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Unify____push_result_0_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_1,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_1 == transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2);

    return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Compare____push_info_0_0(
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;
    MR_Integer transform_hlds__implicit_parallelism__push_goals_together__CastX_6 = (MR_Integer) transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2;
    MR_Integer transform_hlds__implicit_parallelism__push_goals_together__CastY_7 = (MR_Integer) transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3;

    transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__CastX_6 == transform_hlds__implicit_parallelism__push_goals_together__CastY_7);
    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
      *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_4_4 = (MR_Word) transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2;
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_5_5 = (MR_Word) transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3;

        {
          hlds__hlds_rtti____Compare____rtti_varmaps_0_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, transform_hlds__implicit_parallelism__push_goals_together__V_4_4, transform_hlds__implicit_parallelism__push_goals_together__V_5_5);
        }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Unify____push_info_0_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;
    MR_Integer transform_hlds__implicit_parallelism__push_goals_together__CastX_5 = (MR_Integer) transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1;
    MR_Integer transform_hlds__implicit_parallelism__push_goals_together__CastY_6 = (MR_Integer) transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2;

    transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__CastX_5 == transform_hlds__implicit_parallelism__push_goals_together__CastY_6);
    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
      transform_hlds__implicit_parallelism__push_goals_together__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_3_3 = (MR_Word) transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1;
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_4_4 = (MR_Word) transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2;

        {
          transform_hlds__implicit_parallelism__push_goals_together__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(transform_hlds__implicit_parallelism__push_goals_together__V_3_3, transform_hlds__implicit_parallelism__push_goals_together__V_4_4);
        }
      }
    return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Compare____maybe_pushable_0_0(
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;
    MR_Integer transform_hlds__implicit_parallelism__push_goals_together__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2;
    MR_Integer transform_hlds__implicit_parallelism__push_goals_together__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, transform_hlds__implicit_parallelism__push_goals_together__Cast_HeadVar1_4, transform_hlds__implicit_parallelism__push_goals_together__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together____Unify____maybe_pushable_0_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_1,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_1 == transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2);

    return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__maybe_steps_after_3_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Step_4,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Tail_5)
{
  {
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_6_6;

    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
      {
        transform_hlds__implicit_parallelism__push_goals_together__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2, (MR_Integer) 0)));
        *transform_hlds__implicit_parallelism__push_goals_together__Tail_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2, (MR_Integer) 1)));
        {
          transform_hlds__implicit_parallelism__push_goals_together__succeeded = mdbcomp__goal_path____Unify____goal_path_step_0_0(transform_hlds__implicit_parallelism__push_goals_together__Step_4, transform_hlds__implicit_parallelism__push_goals_together__V_6_6);
        }
      }
    return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__find_relative_paths_3_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;

    if ((transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        transform_hlds__implicit_parallelism__push_goals_together__succeeded = MR_TRUE;
      }
    else
      {
        MR_String transform_hlds__implicit_parallelism__push_goals_together__HeadStr_6 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__TailStrs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadRelPath_8;
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__TailRelPaths_9;
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadGoalPath_10;

        {
          transform_hlds__implicit_parallelism__push_goals_together__succeeded = mdbcomp__goal_path__goal_path_from_string_2_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadStr_6, &transform_hlds__implicit_parallelism__push_goals_together__HeadGoalPath_10);
        }
        if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
          {
            {
              transform_hlds__implicit_parallelism__push_goals_together__succeeded = mdbcomp__goal_path__goal_path_inside_relative_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, transform_hlds__implicit_parallelism__push_goals_together__HeadGoalPath_10, &transform_hlds__implicit_parallelism__push_goals_together__HeadRelPath_8);
            }
            if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
              {
                {
                  transform_hlds__implicit_parallelism__push_goals_together__succeeded = transform_hlds__implicit_parallelism__push_goals_together__find_relative_paths_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, transform_hlds__implicit_parallelism__push_goals_together__TailStrs_7, &transform_hlds__implicit_parallelism__push_goals_together__TailRelPaths_9);
                }
                if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__HeadRelPath_8));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__TailRelPaths_9));
                    }
                    transform_hlds__implicit_parallelism__push_goals_together__succeeded = MR_TRUE;
                  }
              }
          }
      }
    return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_of_case_3_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__AddedGoals_4,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Case0_5,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Case_6)
{
  {
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__MainConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__Case0_5, (MR_Integer) 0)));
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__OtherConsIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__Case0_5, (MR_Integer) 1)));
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__Case0_5, (MR_Integer) 2)));
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal_10;

    {
      transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__AddedGoals_4, transform_hlds__implicit_parallelism__push_goals_together__Goal0_9, &transform_hlds__implicit_parallelism__push_goals_together__Goal_10);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__implicit_parallelism__push_goals_together__Case_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__MainConsId_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__OtherConsIds_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Goal_10));
    }
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__AddedGoals_4,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal0_5,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Goal_6)
{
  {
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__Goal0_5, (MR_Integer) 0)));
    MR_Word transform_hlds__implicit_parallelism__push_goals_together___GoalInfo0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__Goal0_5, (MR_Integer) 1)));
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__Conjuncts0_9;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_10_10;

    transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
      {
        transform_hlds__implicit_parallelism__push_goals_together__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_7, (MR_Integer) 1)));
        transform_hlds__implicit_parallelism__push_goals_together__Conjuncts0_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_7, (MR_Integer) 2)));
        transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__V_10_10 == (MR_Integer) 0);
      }
    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
      {
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_11_11;

        {
          transform_hlds__implicit_parallelism__push_goals_together__V_11_11 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__implicit_parallelism__push_goals_together__Conjuncts0_9, transform_hlds__implicit_parallelism__push_goals_together__AddedGoals_4);
        }
        {
          hlds__goal_util__create_conj_from_list_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__V_11_11, (MR_Integer) 0, transform_hlds__implicit_parallelism__push_goals_together__Goal_6);
        }
      }
    else
      {
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_13_13;

        {
          transform_hlds__implicit_parallelism__push_goals_together__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__V_13_13, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Goal0_5));
          MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__V_13_13, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__AddedGoals_4));
        }
        {
          hlds__goal_util__create_conj_from_list_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__V_13_13, (MR_Integer) 0, transform_hlds__implicit_parallelism__push_goals_together__Goal_6);
        }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__build_ite_paths_map_3_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;

    if ((transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        transform_hlds__implicit_parallelism__push_goals_together__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Head_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Tail_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__ThenPathsTail_8;
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__ElsePathsTail_9;
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadFirstStep_10;
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadLaterPath_11;

        {
          transform_hlds__implicit_parallelism__push_goals_together__succeeded = transform_hlds__implicit_parallelism__push_goals_together__build_ite_paths_map_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__Tail_5, &transform_hlds__implicit_parallelism__push_goals_together__ThenPathsTail_8, &transform_hlds__implicit_parallelism__push_goals_together__ElsePathsTail_9);
        }
        if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
          {
            transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__Head_4)) == (MR_mktag((MR_Integer) 1)));
            if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
              {
                transform_hlds__implicit_parallelism__push_goals_together__HeadFirstStep_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Head_4, (MR_Integer) 0)));
                transform_hlds__implicit_parallelism__push_goals_together__HeadLaterPath_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Head_4, (MR_Integer) 1)));
                transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__HeadFirstStep_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__HeadLaterPath_11));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__ThenPathsTail_8));
                    }
                    *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3 = transform_hlds__implicit_parallelism__push_goals_together__ElsePathsTail_9;
                    transform_hlds__implicit_parallelism__push_goals_together__succeeded = MR_TRUE;
                  }
                else
                  {
                    transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__HeadFirstStep_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                      {
                        *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2 = transform_hlds__implicit_parallelism__push_goals_together__ThenPathsTail_8;
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__HeadLaterPath_11));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__ElsePathsTail_9));
                        }
                        transform_hlds__implicit_parallelism__push_goals_together__succeeded = MR_TRUE;
                      }
                  }
              }
          }
      }
    return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__build_switch_paths_map_3_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_0_2,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;

        if ((transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_3 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_0_2;
            transform_hlds__implicit_parallelism__push_goals_together__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer transform_hlds__implicit_parallelism__push_goals_together__N_10;
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadLaterPath_12;
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_17_17;
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_20_20;
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_11_11;
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__One_13;
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__More_14;
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__TypeInfo_27_27;
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_18_18;
            MR_Box transform_hlds__implicit_parallelism__push_goals_together__conv0_V_18_18;

            transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__Head_7)) == (MR_mktag((MR_Integer) 1)));
            if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
              {
                transform_hlds__implicit_parallelism__push_goals_together__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Head_7, (MR_Integer) 0)));
                transform_hlds__implicit_parallelism__push_goals_together__HeadLaterPath_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Head_7, (MR_Integer) 1)));
                transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__V_17_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__V_17_17, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                  {
                    transform_hlds__implicit_parallelism__push_goals_together__N_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__V_17_17, (MR_Integer) 1)));
                    transform_hlds__implicit_parallelism__push_goals_together__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__V_17_17, (MR_Integer) 2)));
                    transform_hlds__implicit_parallelism__push_goals_together__TypeInfo_27_27 = (MR_Word) &transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[2];
                    {
                      transform_hlds__implicit_parallelism__push_goals_together__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__TypeInfo_27_27, transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_0_2, transform_hlds__implicit_parallelism__push_goals_together__N_10, &transform_hlds__implicit_parallelism__push_goals_together__conv0_V_18_18);
                    }
                    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                      {
                        transform_hlds__implicit_parallelism__push_goals_together__V_18_18 = ((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__conv0_V_18_18);
                        transform_hlds__implicit_parallelism__push_goals_together__succeeded = MR_TRUE;
                      }
                    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                      {
                        transform_hlds__implicit_parallelism__push_goals_together__One_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_18_18, (MR_Integer) 0)));
                        transform_hlds__implicit_parallelism__push_goals_together__More_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_18_18, (MR_Integer) 1)));
                        transform_hlds__implicit_parallelism__push_goals_together__succeeded = MR_TRUE;
                      }
                    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                      {
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_19_19;
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_21_21;

                        {
                          transform_hlds__implicit_parallelism__push_goals_together__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__V_21_21, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__One_13));
                          MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__V_21_21, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__More_14));
                        }
                        {
                          transform_hlds__implicit_parallelism__push_goals_together__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_19_19, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__HeadLaterPath_12));
                          MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_19_19, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__V_21_21));
                        }
                        {
                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[2], transform_hlds__implicit_parallelism__push_goals_together__N_10, ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__V_19_19)), transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_0_2, &transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_20_20);
                        }
                      }
                    else
                      {
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_22_22;

                        {
                          transform_hlds__implicit_parallelism__push_goals_together__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_22_22, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__HeadLaterPath_12));
                          MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[2], transform_hlds__implicit_parallelism__push_goals_together__N_10, ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__V_22_22)), transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_0_2, &transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_20_20);
                        }
                      }
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1__tmp_copy_1 = transform_hlds__implicit_parallelism__push_goals_together__Tail_8;
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_0__tmp_copy_2 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_20_20;

                        transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_0_2 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_0__tmp_copy_2;
                        transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1 = transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1__tmp_copy_1;
                      }
                      continue;
                    }
                  }
              }
          }
        return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__build_disj_paths_map_3_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_0_2,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;

        if ((transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_3 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_0_2;
            transform_hlds__implicit_parallelism__push_goals_together__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer transform_hlds__implicit_parallelism__push_goals_together__N_10;
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadLaterPath_11;
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_16_16;
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_19_19;
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__One_12;
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__More_13;
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__TypeInfo_26_26;
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_17_17;
            MR_Box transform_hlds__implicit_parallelism__push_goals_together__conv0_V_17_17;

            transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__Head_7)) == (MR_mktag((MR_Integer) 1)));
            if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
              {
                transform_hlds__implicit_parallelism__push_goals_together__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Head_7, (MR_Integer) 0)));
                transform_hlds__implicit_parallelism__push_goals_together__HeadLaterPath_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Head_7, (MR_Integer) 1)));
                transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__V_16_16)) == (MR_mktag((MR_Integer) 2)));
                if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                  {
                    transform_hlds__implicit_parallelism__push_goals_together__N_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__implicit_parallelism__push_goals_together__V_16_16, (MR_Integer) 0)));
                    transform_hlds__implicit_parallelism__push_goals_together__TypeInfo_26_26 = (MR_Word) &transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[2];
                    {
                      transform_hlds__implicit_parallelism__push_goals_together__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__TypeInfo_26_26, transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_0_2, transform_hlds__implicit_parallelism__push_goals_together__N_10, &transform_hlds__implicit_parallelism__push_goals_together__conv0_V_17_17);
                    }
                    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                      {
                        transform_hlds__implicit_parallelism__push_goals_together__V_17_17 = ((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__conv0_V_17_17);
                        transform_hlds__implicit_parallelism__push_goals_together__succeeded = MR_TRUE;
                      }
                    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                      {
                        transform_hlds__implicit_parallelism__push_goals_together__One_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_17_17, (MR_Integer) 0)));
                        transform_hlds__implicit_parallelism__push_goals_together__More_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_17_17, (MR_Integer) 1)));
                        transform_hlds__implicit_parallelism__push_goals_together__succeeded = MR_TRUE;
                      }
                    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                      {
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_18_18;
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_20_20;

                        {
                          transform_hlds__implicit_parallelism__push_goals_together__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__V_20_20, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__One_12));
                          MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__V_20_20, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__More_13));
                        }
                        {
                          transform_hlds__implicit_parallelism__push_goals_together__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_18_18, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__HeadLaterPath_11));
                          MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_18_18, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__V_20_20));
                        }
                        {
                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[2], transform_hlds__implicit_parallelism__push_goals_together__N_10, ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__V_18_18)), transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_0_2, &transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_19_19);
                        }
                      }
                    else
                      {
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_21_21;

                        {
                          transform_hlds__implicit_parallelism__push_goals_together__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_21_21, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__HeadLaterPath_11));
                          MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[2], transform_hlds__implicit_parallelism__push_goals_together__N_10, ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__V_21_21)), transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_0_2, &transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_19_19);
                        }
                      }
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1__tmp_copy_1 = transform_hlds__implicit_parallelism__push_goals_together__Tail_8;
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_0__tmp_copy_2 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_19_19;

                        transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_0_2 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_DisjPathsMap_0__tmp_copy_2;
                        transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1 = transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1__tmp_copy_1;
                      }
                      continue;
                    }
                  }
              }
          }
        return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_p_0_1(
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure_arg,
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
  MR_Box * transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure = transform_hlds__implicit_parallelism__push_goals_together__closure_arg;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__conv0_Case_6;

    {
      transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_of_case_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1), &transform_hlds__implicit_parallelism__push_goals_together__conv0_Case_6);
    }
    *transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2 = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__conv0_Case_6));
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__PathList_2,
  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Pushable_6)
{
  {
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;

    if ((transform_hlds__implicit_parallelism__push_goals_together__PathList_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 1;
        }
      else
        {
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_35_35;
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadCase0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4, (MR_Integer) 0)));
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__TailCases0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4, (MR_Integer) 1)));
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadCase_18;
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__TailCases_19;
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_32_32;
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__MainConsId_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__HeadCase0_16, (MR_Integer) 0)));
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__OtherConsIds_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__HeadCase0_16, (MR_Integer) 1)));
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal0_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__HeadCase0_16, (MR_Integer) 2)));
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal_64;

          {
            transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, transform_hlds__implicit_parallelism__push_goals_together__Goal0_63, &transform_hlds__implicit_parallelism__push_goals_together__Goal_64);
          }
          {
            transform_hlds__implicit_parallelism__push_goals_together__HeadCase_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__HeadCase_18, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__MainConsId_61));
            MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__HeadCase_18, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__OtherConsIds_62));
            MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__HeadCase_18, 2) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Goal_64));
          }
          {
            transform_hlds__implicit_parallelism__push_goals_together__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_32_32, 0) = ((MR_Box) (&transform_hlds__implicit_parallelism__push_goals_together_scalar_common_2[2]));
            MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_32_32, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_p_0_1));
            MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_32_32, 3) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1));
          }
          transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
          {
            mercury__list__map_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_35_35, transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_35_35, transform_hlds__implicit_parallelism__push_goals_together__V_32_32, transform_hlds__implicit_parallelism__push_goals_together__TailCases0_17, &transform_hlds__implicit_parallelism__push_goals_together__TailCases_19);
          }
          *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 1;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__HeadCase_18));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__TailCases_19));
          }
        }
    else
      {
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__PathList_2, (MR_Integer) 1)));
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__PathList_2, (MR_Integer) 0)));

        if ((transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 0;
          }
        else
          {
            MR_Integer transform_hlds__implicit_parallelism__push_goals_together__PathListHeadNum_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_57_57, (MR_Integer) 0)));
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__One_24;
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__More_25;
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_57_57, (MR_Integer) 1)));
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadCase0_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__TailCases0_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4, (MR_Integer) 1)));
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadCase_43;
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__TailCases_44;

            transform_hlds__implicit_parallelism__push_goals_together__One_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_27_27, (MR_Integer) 0)));
            transform_hlds__implicit_parallelism__push_goals_together__More_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_27_27, (MR_Integer) 1)));
            transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__PathListHeadNum_23 == transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3);
            if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
              {
                MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_26;
                MR_Word transform_hlds__implicit_parallelism__push_goals_together__MainConsId_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__HeadCase0_41, (MR_Integer) 0)));
                MR_Word transform_hlds__implicit_parallelism__push_goals_together__OtherConsIds_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__HeadCase0_41, (MR_Integer) 1)));
                MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal0_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__HeadCase0_41, (MR_Integer) 2)));
                MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal_74;

                {
                  transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, transform_hlds__implicit_parallelism__push_goals_together__One_24, transform_hlds__implicit_parallelism__push_goals_together__More_25, transform_hlds__implicit_parallelism__push_goals_together__Goal0_73, &transform_hlds__implicit_parallelism__push_goals_together__Goal_74, &transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_26);
                }
                {
                  transform_hlds__implicit_parallelism__push_goals_together__HeadCase_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__HeadCase_43, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__MainConsId_71));
                  MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__HeadCase_43, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__OtherConsIds_72));
                  MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__HeadCase_43, 2) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Goal_74));
                }
                switch (transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_26) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      transform_hlds__implicit_parallelism__push_goals_together__TailCases_44 = transform_hlds__implicit_parallelism__push_goals_together__TailCases0_42;
                      *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 0;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Integer transform_hlds__implicit_parallelism__push_goals_together__V_28_28 = (transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3 + (MR_Integer) 1);

                      {
                        transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, transform_hlds__implicit_parallelism__push_goals_together__V_56_56, transform_hlds__implicit_parallelism__push_goals_together__V_28_28, transform_hlds__implicit_parallelism__push_goals_together__TailCases0_42, &transform_hlds__implicit_parallelism__push_goals_together__TailCases_44, transform_hlds__implicit_parallelism__push_goals_together__Pushable_6);
                      }
                    }
                    break;
                }
              }
            else
              {
                MR_Integer transform_hlds__implicit_parallelism__push_goals_together__V_30_30;
                MR_Word transform_hlds__implicit_parallelism__push_goals_together__MainConsId_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__HeadCase0_41, (MR_Integer) 0)));
                MR_Word transform_hlds__implicit_parallelism__push_goals_together__OtherConsIds_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__HeadCase0_41, (MR_Integer) 1)));
                MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal0_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__HeadCase0_41, (MR_Integer) 2)));
                MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal_81;

                {
                  transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, transform_hlds__implicit_parallelism__push_goals_together__Goal0_80, &transform_hlds__implicit_parallelism__push_goals_together__Goal_81);
                }
                {
                  transform_hlds__implicit_parallelism__push_goals_together__HeadCase_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__HeadCase_43, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__MainConsId_78));
                  MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__HeadCase_43, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__OtherConsIds_79));
                  MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__HeadCase_43, 2) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Goal_81));
                }
                transform_hlds__implicit_parallelism__push_goals_together__V_30_30 = (transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3 + (MR_Integer) 1);
                {
                  transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, transform_hlds__implicit_parallelism__push_goals_together__PathList_2, transform_hlds__implicit_parallelism__push_goals_together__V_30_30, transform_hlds__implicit_parallelism__push_goals_together__TailCases0_42, &transform_hlds__implicit_parallelism__push_goals_together__TailCases_44, transform_hlds__implicit_parallelism__push_goals_together__Pushable_6);
                }
              }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__HeadCase_43));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__TailCases_44));
            }
          }
      }
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_p_0_1(
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure_arg,
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
  MR_Box * transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure = transform_hlds__implicit_parallelism__push_goals_together__closure_arg;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__conv0_Goal_6;

    {
      transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1), &transform_hlds__implicit_parallelism__push_goals_together__conv0_Goal_6);
    }
    *transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2 = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__conv0_Goal_6));
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Pushable_6)
{
  {
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;

    if ((transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 1;
        }
      else
        {
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_35_35;
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadDisjunct0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4, (MR_Integer) 0)));
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__TailDisjuncts0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4, (MR_Integer) 1)));
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadDisjunct_18;
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__TailDisjuncts_19;
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_32_32;

          {
            transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, transform_hlds__implicit_parallelism__push_goals_together__HeadDisjunct0_16, &transform_hlds__implicit_parallelism__push_goals_together__HeadDisjunct_18);
          }
          {
            transform_hlds__implicit_parallelism__push_goals_together__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_32_32, 0) = ((MR_Box) (&transform_hlds__implicit_parallelism__push_goals_together_scalar_common_2[1]));
            MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_32_32, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_p_0_1));
            MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_32_32, 3) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1));
          }
          transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
          {
            mercury__list__map_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_35_35, transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_35_35, transform_hlds__implicit_parallelism__push_goals_together__V_32_32, transform_hlds__implicit_parallelism__push_goals_together__TailDisjuncts0_17, &transform_hlds__implicit_parallelism__push_goals_together__TailDisjuncts_19);
          }
          *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 1;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__HeadDisjunct_18));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__TailDisjuncts_19));
          }
        }
    else
      {
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2, (MR_Integer) 0)));

        if ((transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 0;
          }
        else
          {
            MR_Integer transform_hlds__implicit_parallelism__push_goals_together__PathListHeadNum_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_57_57, (MR_Integer) 0)));
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__One_24;
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__More_25;
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_57_57, (MR_Integer) 1)));
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadDisjunct0_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__TailDisjuncts0_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4, (MR_Integer) 1)));
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadDisjunct_43;
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__TailDisjuncts_44;

            transform_hlds__implicit_parallelism__push_goals_together__One_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_27_27, (MR_Integer) 0)));
            transform_hlds__implicit_parallelism__push_goals_together__More_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_27_27, (MR_Integer) 1)));
            transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__PathListHeadNum_23 == transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3);
            if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
              {
                MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_26;

                {
                  transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, transform_hlds__implicit_parallelism__push_goals_together__One_24, transform_hlds__implicit_parallelism__push_goals_together__More_25, transform_hlds__implicit_parallelism__push_goals_together__HeadDisjunct0_41, &transform_hlds__implicit_parallelism__push_goals_together__HeadDisjunct_43, &transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_26);
                }
                switch (transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_26) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      transform_hlds__implicit_parallelism__push_goals_together__TailDisjuncts_44 = transform_hlds__implicit_parallelism__push_goals_together__TailDisjuncts0_42;
                      *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 0;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Integer transform_hlds__implicit_parallelism__push_goals_together__V_28_28 = (transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3 + (MR_Integer) 1);

                      {
                        transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, transform_hlds__implicit_parallelism__push_goals_together__V_56_56, transform_hlds__implicit_parallelism__push_goals_together__V_28_28, transform_hlds__implicit_parallelism__push_goals_together__TailDisjuncts0_42, &transform_hlds__implicit_parallelism__push_goals_together__TailDisjuncts_44, transform_hlds__implicit_parallelism__push_goals_together__Pushable_6);
                      }
                    }
                    break;
                }
              }
            else
              {
                MR_Integer transform_hlds__implicit_parallelism__push_goals_together__V_30_30;

                {
                  transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, transform_hlds__implicit_parallelism__push_goals_together__HeadDisjunct0_41, &transform_hlds__implicit_parallelism__push_goals_together__HeadDisjunct_43);
                }
                transform_hlds__implicit_parallelism__push_goals_together__V_30_30 = (transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3 + (MR_Integer) 1);
                {
                  transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2, transform_hlds__implicit_parallelism__push_goals_together__V_30_30, transform_hlds__implicit_parallelism__push_goals_together__TailDisjuncts0_42, &transform_hlds__implicit_parallelism__push_goals_together__TailDisjuncts_44, transform_hlds__implicit_parallelism__push_goals_together__Pushable_6);
                }
              }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__HeadDisjunct_43));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__TailDisjuncts_44));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0_4(
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure_arg,
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
  MR_Box * transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;
    MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure = transform_hlds__implicit_parallelism__push_goals_together__closure_arg;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__conv2_Tail_5;

    {
      transform_hlds__implicit_parallelism__push_goals_together__succeeded = transform_hlds__implicit_parallelism__push_goals_together__maybe_steps_after_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1), &transform_hlds__implicit_parallelism__push_goals_together__conv2_Tail_5);
    }
    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
      {
        *transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2 = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__conv2_Tail_5));
        transform_hlds__implicit_parallelism__push_goals_together__succeeded = MR_TRUE;
      }
    return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0_3(
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure_arg,
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
  MR_Box * transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;
    MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure = transform_hlds__implicit_parallelism__push_goals_together__closure_arg;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__conv0_Tail_5;

    {
      transform_hlds__implicit_parallelism__push_goals_together__succeeded = transform_hlds__implicit_parallelism__push_goals_together__maybe_steps_after_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1), &transform_hlds__implicit_parallelism__push_goals_together__conv0_Tail_5);
    }
    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
      {
        *transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2 = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__conv0_Tail_5));
        transform_hlds__implicit_parallelism__push_goals_together__succeeded = MR_TRUE;
      }
    return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0_2(
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure_arg)
{
  {
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;
    MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure = transform_hlds__implicit_parallelism__push_goals_together__closure_arg;

    {
      transform_hlds__implicit_parallelism__push_goals_together__succeeded = transform_hlds__implicit_parallelism__push_goals_together__IntroducedFrom__pred__push_into_goal__646__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__closure, (MR_Integer) 4))));
    }
    return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0_1(
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure_arg)
{
  {
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;
    MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure = transform_hlds__implicit_parallelism__push_goals_together__closure_arg;

    {
      transform_hlds__implicit_parallelism__push_goals_together__succeeded = transform_hlds__implicit_parallelism__push_goals_together__IntroducedFrom__pred__push_into_goal__625__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__closure, (MR_Integer) 4))));
    }
    return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__LoHi_7,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadPath_8,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__TailPaths_9,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal0_10,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Goal_11,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Pushable_12)
{
  {
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__Goal0_10, (MR_Integer) 0)));
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__Goal0_10, (MR_Integer) 1)));

    if ((transform_hlds__implicit_parallelism__push_goals_together__HeadPath_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_116_116;

        {
          transform_hlds__implicit_parallelism__push_goals_together__V_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_116_116, 0) = ((MR_Box) (&transform_hlds__implicit_parallelism__push_goals_together_scalar_common_3[1]));
          MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_116_116, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0_1));
          MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_116_116, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_116_116, 3) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__TailPaths_9));
          MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_116_116, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mercury__require__expect_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__V_116_116, (MR_String) "transform_hlds.implicit_parallelism.push_goals_together", (MR_String) "TailSteps != []");
        }
        {
          transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__LoHi_7, transform_hlds__implicit_parallelism__push_goals_together__Goal0_10, transform_hlds__implicit_parallelism__push_goals_together__Goal_11);
        }
        *transform_hlds__implicit_parallelism__push_goals_together__Pushable_12 = (MR_Integer) 1;
      }
    else
      {
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__FirstHeadStep_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadPath_8, (MR_Integer) 0)));
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__LaterHeadPath_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadPath_8, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *transform_hlds__implicit_parallelism__push_goals_together__Goal_11 = transform_hlds__implicit_parallelism__push_goals_together__Goal0_10;
              *transform_hlds__implicit_parallelism__push_goals_together__Pushable_12 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              *transform_hlds__implicit_parallelism__push_goals_together__Goal_11 = transform_hlds__implicit_parallelism__push_goals_together__Goal0_10;
              *transform_hlds__implicit_parallelism__push_goals_together__Pushable_12 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_13, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                {
                  *transform_hlds__implicit_parallelism__push_goals_together__Goal_11 = transform_hlds__implicit_parallelism__push_goals_together__Goal0_10;
                  *transform_hlds__implicit_parallelism__push_goals_together__Pushable_12 = (MR_Integer) 0;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__ConjType_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_13, (MR_Integer) 1)));
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Conjuncts0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_13, (MR_Integer) 2)));
                  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__V_42_42;

                  transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__FirstHeadStep_15)) == (MR_mktag((MR_Integer) 1)));
                  if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                    {
                      transform_hlds__implicit_parallelism__push_goals_together__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__FirstHeadStep_15, (MR_Integer) 0)));
                      transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__LaterHeadPath_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                    {
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_110_110;

                      {
                        transform_hlds__implicit_parallelism__push_goals_together__V_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_110_110, 0) = ((MR_Box) (&transform_hlds__implicit_parallelism__push_goals_together_scalar_common_3[1]));
                        MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_110_110, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0_2));
                        MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_110_110, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_110_110, 3) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__TailPaths_9));
                        MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_110_110, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        mercury__require__expect_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__V_110_110, (MR_String) "transform_hlds.implicit_parallelism.push_goals_together", (MR_String) "TailSteps != []");
                      }
                      {
                        transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__LoHi_7, transform_hlds__implicit_parallelism__push_goals_together__Goal0_10, transform_hlds__implicit_parallelism__push_goals_together__Goal_11);
                      }
                      *transform_hlds__implicit_parallelism__push_goals_together__Pushable_12 = (MR_Integer) 1;
                    }
                  else
                    {
                      MR_Integer transform_hlds__implicit_parallelism__push_goals_together__ConjNum_43;
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__LaterTailPaths_44;
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__SelectedConjunct0_45;
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_143_143;
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_144_144;
                      MR_Integer transform_hlds__implicit_parallelism__push_goals_together__Length_46;
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_114_114;
                      MR_Box transform_hlds__implicit_parallelism__push_goals_together__conv1_SelectedConjunct0_45;

                      transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__FirstHeadStep_15)) == (MR_mktag((MR_Integer) 1)));
                      if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                        {
                          transform_hlds__implicit_parallelism__push_goals_together__ConjNum_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__FirstHeadStep_15, (MR_Integer) 0)));
                          transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_143_143 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;
                          {
                            transform_hlds__implicit_parallelism__push_goals_together__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_114_114, 0) = ((MR_Box) (&transform_hlds__implicit_parallelism__push_goals_together_scalar_common_2[0]));
                            MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_114_114, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0_3));
                            MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_114_114, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_114_114, 3) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__FirstHeadStep_15));
                          }
                          {
                            transform_hlds__implicit_parallelism__push_goals_together__succeeded = mercury__list__map_3_p_2(transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_143_143, transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_143_143, transform_hlds__implicit_parallelism__push_goals_together__V_114_114, transform_hlds__implicit_parallelism__push_goals_together__TailPaths_9, &transform_hlds__implicit_parallelism__push_goals_together__LaterTailPaths_44);
                          }
                          if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                            {
                              transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_144_144 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                              {
                                transform_hlds__implicit_parallelism__push_goals_together__succeeded = mercury__list__index1_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_144_144, transform_hlds__implicit_parallelism__push_goals_together__Conjuncts0_41, transform_hlds__implicit_parallelism__push_goals_together__ConjNum_43, &transform_hlds__implicit_parallelism__push_goals_together__conv1_SelectedConjunct0_45);
                              }
                              if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                                {
                                  transform_hlds__implicit_parallelism__push_goals_together__SelectedConjunct0_45 = ((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__conv1_SelectedConjunct0_45);
                                  transform_hlds__implicit_parallelism__push_goals_together__succeeded = MR_TRUE;
                                }
                              if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                                {
                                  {
                                    mercury__list__length_2_p_0(transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_144_144, transform_hlds__implicit_parallelism__push_goals_together__Conjuncts0_41, &transform_hlds__implicit_parallelism__push_goals_together__Length_46);
                                  }
                                  transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__ConjNum_43 == transform_hlds__implicit_parallelism__push_goals_together__Length_46);
                                }
                            }
                        }
                      if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                        {
                          MR_Word transform_hlds__implicit_parallelism__push_goals_together__SelectedConjunct_47;
                          MR_Word transform_hlds__implicit_parallelism__push_goals_together__Conjuncts_48;
                          MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_49;

                          {
                            transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__LoHi_7, transform_hlds__implicit_parallelism__push_goals_together__LaterHeadPath_16, transform_hlds__implicit_parallelism__push_goals_together__LaterTailPaths_44, transform_hlds__implicit_parallelism__push_goals_together__SelectedConjunct0_45, &transform_hlds__implicit_parallelism__push_goals_together__SelectedConjunct_47, transform_hlds__implicit_parallelism__push_goals_together__Pushable_12);
                          }
                          {
                            mercury__list__det_replace_nth_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__implicit_parallelism__push_goals_together__Conjuncts0_41, transform_hlds__implicit_parallelism__push_goals_together__ConjNum_43, ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__SelectedConjunct_47)), &transform_hlds__implicit_parallelism__push_goals_together__Conjuncts_48);
                          }
                          {
                            transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_49, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__ConjType_40));
                            MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_49, 2) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Conjuncts_48));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            *transform_hlds__implicit_parallelism__push_goals_together__Goal_11 = base;
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_49));
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalInfo0_14));
                          }
                        }
                      else
                        {
                          *transform_hlds__implicit_parallelism__push_goals_together__Goal_11 = transform_hlds__implicit_parallelism__push_goals_together__Goal0_10;
                          *transform_hlds__implicit_parallelism__push_goals_together__Pushable_12 = (MR_Integer) 0;
                        }
                    }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Disjuncts0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_13, (MR_Integer) 1)));
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__PathsMap_51;
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_107_107;
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_108_108;

                  {
                    transform_hlds__implicit_parallelism__push_goals_together__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__V_107_107, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__HeadPath_8));
                    MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__V_107_107, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__TailPaths_9));
                  }
                  {
                    transform_hlds__implicit_parallelism__push_goals_together__V_108_108 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[2]);
                  }
                  {
                    transform_hlds__implicit_parallelism__push_goals_together__succeeded = transform_hlds__implicit_parallelism__push_goals_together__build_disj_paths_map_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__V_107_107, transform_hlds__implicit_parallelism__push_goals_together__V_108_108, &transform_hlds__implicit_parallelism__push_goals_together__PathsMap_51);
                  }
                  if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                    {
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__PathsList_52;
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__Disjuncts_53;
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_120;

                      {
                        mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[2], transform_hlds__implicit_parallelism__push_goals_together__PathsMap_51, &transform_hlds__implicit_parallelism__push_goals_together__PathsList_52);
                      }
                      {
                        transform_hlds__implicit_parallelism__push_goals_together__push_into_disjuncts_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__LoHi_7, transform_hlds__implicit_parallelism__push_goals_together__PathsList_52, (MR_Integer) 1, transform_hlds__implicit_parallelism__push_goals_together__Disjuncts0_50, &transform_hlds__implicit_parallelism__push_goals_together__Disjuncts_53, transform_hlds__implicit_parallelism__push_goals_together__Pushable_12);
                      }
                      {
                        transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                        MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_120, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Disjuncts_53));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        *transform_hlds__implicit_parallelism__push_goals_together__Goal_11 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_120));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalInfo0_14));
                      }
                    }
                  else
                    {
                      *transform_hlds__implicit_parallelism__push_goals_together__Goal_11 = transform_hlds__implicit_parallelism__push_goals_together__Goal0_10;
                      *transform_hlds__implicit_parallelism__push_goals_together__Pushable_12 = (MR_Integer) 0;
                    }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_13, (MR_Integer) 1)));
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__CanFail_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_13, (MR_Integer) 2)));
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Cases0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_13, (MR_Integer) 3)));
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__PathsMap_126;
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_104_104;
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_105_105;

                  {
                    transform_hlds__implicit_parallelism__push_goals_together__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__V_104_104, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__HeadPath_8));
                    MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__V_104_104, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__TailPaths_9));
                  }
                  {
                    transform_hlds__implicit_parallelism__push_goals_together__V_105_105 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[2]);
                  }
                  {
                    transform_hlds__implicit_parallelism__push_goals_together__succeeded = transform_hlds__implicit_parallelism__push_goals_together__build_switch_paths_map_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__V_104_104, transform_hlds__implicit_parallelism__push_goals_together__V_105_105, &transform_hlds__implicit_parallelism__push_goals_together__PathsMap_126);
                  }
                  if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                    {
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__Cases_57;
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_123;
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__PathsList_124;

                      {
                        mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[2], transform_hlds__implicit_parallelism__push_goals_together__PathsMap_126, &transform_hlds__implicit_parallelism__push_goals_together__PathsList_124);
                      }
                      {
                        transform_hlds__implicit_parallelism__push_goals_together__push_into_cases_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__LoHi_7, transform_hlds__implicit_parallelism__push_goals_together__PathsList_124, (MR_Integer) 1, transform_hlds__implicit_parallelism__push_goals_together__Cases0_56, &transform_hlds__implicit_parallelism__push_goals_together__Cases_57, transform_hlds__implicit_parallelism__push_goals_together__Pushable_12);
                      }
                      {
                        transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                        MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_123, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Var_54));
                        MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_123, 2) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__CanFail_55));
                        MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_123, 3) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Cases_57));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        *transform_hlds__implicit_parallelism__push_goals_together__Goal_11 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_123));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalInfo0_14));
                      }
                    }
                  else
                    {
                      *transform_hlds__implicit_parallelism__push_goals_together__Goal_11 = transform_hlds__implicit_parallelism__push_goals_together__Goal0_10;
                      *transform_hlds__implicit_parallelism__push_goals_together__Pushable_12 = (MR_Integer) 0;
                    }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Reason_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_13, (MR_Integer) 1)));
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__SubGoal0_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_13, (MR_Integer) 2)));
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__SubGoalInfo0_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__SubGoal0_74, (MR_Integer) 1)));
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Detism_77;
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__SubDetism_78;
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together___SubGoalExpr0_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__SubGoal0_74, (MR_Integer) 0)));
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadPathAfter_79;
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__TailPathsAfter_80;
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_156_156;
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_98_98;
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_99_99;
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_100_100;

                  {
                    transform_hlds__implicit_parallelism__push_goals_together__Detism_77 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__implicit_parallelism__push_goals_together__GoalInfo0_14);
                  }
                  {
                    transform_hlds__implicit_parallelism__push_goals_together__SubDetism_78 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__implicit_parallelism__push_goals_together__SubGoalInfo0_76);
                  }
                  transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__Detism_77 == transform_hlds__implicit_parallelism__push_goals_together__SubDetism_78);
                  if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                    {
                      transform_hlds__implicit_parallelism__push_goals_together__V_99_99 = (MR_Integer) 1;
                      transform_hlds__implicit_parallelism__push_goals_together__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[3]);
                      {
                        transform_hlds__implicit_parallelism__push_goals_together__succeeded = transform_hlds__implicit_parallelism__push_goals_together__maybe_steps_after_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__V_98_98, transform_hlds__implicit_parallelism__push_goals_together__HeadPath_8, &transform_hlds__implicit_parallelism__push_goals_together__HeadPathAfter_79);
                      }
                      if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                        {
                          transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_156_156 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;
                          transform_hlds__implicit_parallelism__push_goals_together__V_100_100 = (MR_Word) &transform_hlds__implicit_parallelism__push_goals_together_scalar_common_4[0];
                          {
                            transform_hlds__implicit_parallelism__push_goals_together__succeeded = mercury__list__map_3_p_2(transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_156_156, transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_156_156, transform_hlds__implicit_parallelism__push_goals_together__V_100_100, transform_hlds__implicit_parallelism__push_goals_together__TailPaths_9, &transform_hlds__implicit_parallelism__push_goals_together__TailPathsAfter_80);
                          }
                        }
                    }
                  if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                    {
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__SubGoal_81;
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_136;

                      {
                        transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__LoHi_7, transform_hlds__implicit_parallelism__push_goals_together__HeadPathAfter_79, transform_hlds__implicit_parallelism__push_goals_together__TailPathsAfter_80, transform_hlds__implicit_parallelism__push_goals_together__SubGoal0_74, &transform_hlds__implicit_parallelism__push_goals_together__SubGoal_81, transform_hlds__implicit_parallelism__push_goals_together__Pushable_12);
                      }
                      {
                        transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                        MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_136, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Reason_73));
                        MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_136, 2) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__SubGoal_81));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        *transform_hlds__implicit_parallelism__push_goals_together__Goal_11 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_136));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalInfo0_14));
                      }
                    }
                  else
                    {
                      *transform_hlds__implicit_parallelism__push_goals_together__Goal_11 = transform_hlds__implicit_parallelism__push_goals_together__Goal0_10;
                      *transform_hlds__implicit_parallelism__push_goals_together__Pushable_12 = (MR_Integer) 0;
                    }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Vars_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_13, (MR_Integer) 1)));
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Cond_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_13, (MR_Integer) 2)));
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Then0_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_13, (MR_Integer) 3)));
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Else0_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_13, (MR_Integer) 4)));
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__ThenPaths_62;
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__ElsePaths_63;
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__ThenPathsTail_161;
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__ElsePathsTail_162;
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadFirstStep_163;
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadLaterPath_164;

                  {
                    transform_hlds__implicit_parallelism__push_goals_together__succeeded = transform_hlds__implicit_parallelism__push_goals_together__build_ite_paths_map_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__TailPaths_9, &transform_hlds__implicit_parallelism__push_goals_together__ThenPathsTail_161, &transform_hlds__implicit_parallelism__push_goals_together__ElsePathsTail_162);
                  }
                  if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                    {
                      transform_hlds__implicit_parallelism__push_goals_together__HeadFirstStep_163 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadPath_8, (MR_Integer) 0)));
                      transform_hlds__implicit_parallelism__push_goals_together__HeadLaterPath_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadPath_8, (MR_Integer) 1)));
                      transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__HeadFirstStep_163 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                      if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                        {
                          {
                            transform_hlds__implicit_parallelism__push_goals_together__ThenPaths_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__ThenPaths_62, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__HeadLaterPath_164));
                            MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__ThenPaths_62, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__ThenPathsTail_161));
                          }
                          transform_hlds__implicit_parallelism__push_goals_together__ElsePaths_63 = transform_hlds__implicit_parallelism__push_goals_together__ElsePathsTail_162;
                          transform_hlds__implicit_parallelism__push_goals_together__succeeded = MR_TRUE;
                        }
                      else
                        {
                          transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__HeadFirstStep_163 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                          if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                            {
                              transform_hlds__implicit_parallelism__push_goals_together__ThenPaths_62 = transform_hlds__implicit_parallelism__push_goals_together__ThenPathsTail_161;
                              {
                                transform_hlds__implicit_parallelism__push_goals_together__ElsePaths_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__ElsePaths_63, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__HeadLaterPath_164));
                                MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__ElsePaths_63, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__ElsePathsTail_162));
                              }
                              transform_hlds__implicit_parallelism__push_goals_together__succeeded = MR_TRUE;
                            }
                        }
                    }
                  if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                    {
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__Then_64;
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__ThenPushable_65;
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__Else_68;
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__ElsePushable_69;

                      if ((transform_hlds__implicit_parallelism__push_goals_together__ThenPaths_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          {
                            transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__LoHi_7, transform_hlds__implicit_parallelism__push_goals_together__Then0_60, &transform_hlds__implicit_parallelism__push_goals_together__Then_64);
                          }
                          transform_hlds__implicit_parallelism__push_goals_together__ThenPushable_65 = (MR_Integer) 1;
                        }
                      else
                        {
                          MR_Word transform_hlds__implicit_parallelism__push_goals_together__ThenPathsHead_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__ThenPaths_62, (MR_Integer) 0)));
                          MR_Word transform_hlds__implicit_parallelism__push_goals_together__ThenPathsTail_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__ThenPaths_62, (MR_Integer) 1)));

                          {
                            transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__LoHi_7, transform_hlds__implicit_parallelism__push_goals_together__ThenPathsHead_66, transform_hlds__implicit_parallelism__push_goals_together__ThenPathsTail_67, transform_hlds__implicit_parallelism__push_goals_together__Then0_60, &transform_hlds__implicit_parallelism__push_goals_together__Then_64, &transform_hlds__implicit_parallelism__push_goals_together__ThenPushable_65);
                          }
                        }
                      if ((transform_hlds__implicit_parallelism__push_goals_together__ElsePaths_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          {
                            transform_hlds__implicit_parallelism__push_goals_together__add_goals_at_end_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__LoHi_7, transform_hlds__implicit_parallelism__push_goals_together__Else0_61, &transform_hlds__implicit_parallelism__push_goals_together__Else_68);
                          }
                          transform_hlds__implicit_parallelism__push_goals_together__ElsePushable_69 = (MR_Integer) 1;
                        }
                      else
                        {
                          MR_Word transform_hlds__implicit_parallelism__push_goals_together__ElsePathsHead_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__ElsePaths_63, (MR_Integer) 0)));
                          MR_Word transform_hlds__implicit_parallelism__push_goals_together__ElsePathsTail_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__ElsePaths_63, (MR_Integer) 1)));

                          {
                            transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__LoHi_7, transform_hlds__implicit_parallelism__push_goals_together__ElsePathsHead_70, transform_hlds__implicit_parallelism__push_goals_together__ElsePathsTail_71, transform_hlds__implicit_parallelism__push_goals_together__Else0_61, &transform_hlds__implicit_parallelism__push_goals_together__Else_68, &transform_hlds__implicit_parallelism__push_goals_together__ElsePushable_69);
                          }
                        }
                      transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__ThenPushable_65 == (MR_Integer) 1);
                      if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                        transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__ElsePushable_69 == (MR_Integer) 1);
                      if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                        {
                          MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_131;

                          {
                            transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                            MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_131, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Vars_58));
                            MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_131, 2) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Cond_59));
                            MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_131, 3) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Then_64));
                            MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_131, 4) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Else_68));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            *transform_hlds__implicit_parallelism__push_goals_together__Goal_11 = base;
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_131));
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalInfo0_14));
                          }
                          *transform_hlds__implicit_parallelism__push_goals_together__Pushable_12 = (MR_Integer) 1;
                        }
                      else
                        {
                          *transform_hlds__implicit_parallelism__push_goals_together__Goal_11 = transform_hlds__implicit_parallelism__push_goals_together__Goal0_10;
                          *transform_hlds__implicit_parallelism__push_goals_together__Pushable_12 = (MR_Integer) 0;
                        }
                    }
                  else
                    {
                      *transform_hlds__implicit_parallelism__push_goals_together__Goal_11 = transform_hlds__implicit_parallelism__push_goals_together__Goal0_10;
                      *transform_hlds__implicit_parallelism__push_goals_together__Pushable_12 = (MR_Integer) 0;
                    }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Shorthand_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_13, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__Shorthand_82)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.implicit_parallelism.push_goals_together", (MR_String) "predicate \140transform_hlds.implicit_parallelism.push_goals_together.push_into_goal\'/6", (MR_String) "bi_implication");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                      {
                        *transform_hlds__implicit_parallelism__push_goals_together__Goal_11 = transform_hlds__implicit_parallelism__push_goals_together__Goal0_10;
                        *transform_hlds__implicit_parallelism__push_goals_together__Pushable_12 = (MR_Integer) 0;
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
transform_hlds__implicit_parallelism__push_goals_together__is_non_rtti_var_2_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__RttiVarMaps_3,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Arg_4)
{
  {
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__RttiVarInfo_5;

    {
      hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__RttiVarMaps_3, transform_hlds__implicit_parallelism__push_goals_together__Arg_4, &transform_hlds__implicit_parallelism__push_goals_together__RttiVarInfo_5);
    }
    transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__RttiVarInfo_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__is_pushable_case_list_3_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;

        if ((transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3 = (MR_Integer) 1;
        else
          {
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__Case_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__Cases_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__Case_6, (MR_Integer) 2)));
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_12;
            MR_Word transform_hlds__implicit_parallelism__push_goals_together___MainConsId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__Case_6, (MR_Integer) 0)));
            MR_Word transform_hlds__implicit_parallelism__push_goals_together___OtherConsIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__Case_6, (MR_Integer) 1)));

            {
              transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, transform_hlds__implicit_parallelism__push_goals_together__Goal_11, &transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_12);
            }
            switch (transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_12) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2__tmp_copy_2 = transform_hlds__implicit_parallelism__push_goals_together__Cases_7;

                    transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2 = transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2__tmp_copy_2;
                  }
                  continue;
                }
                break;
            }
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_list_3_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;

        if ((transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3 = (MR_Integer) 1;
        else
          {
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goals_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_9;

            {
              transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, transform_hlds__implicit_parallelism__push_goals_together__Goal_6, &transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_9);
            }
            switch (transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_9) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2__tmp_copy_2 = transform_hlds__implicit_parallelism__push_goals_together__Goals_7;

                    transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2 = transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2__tmp_copy_2;
                  }
                  continue;
                }
                break;
            }
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_p_0_1(
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure_arg,
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;
    MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure = transform_hlds__implicit_parallelism__push_goals_together__closure_arg;

    {
      transform_hlds__implicit_parallelism__push_goals_together__succeeded = transform_hlds__implicit_parallelism__push_goals_together__is_non_rtti_var_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1));
    }
    return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushInfo_4,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal_5,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Pushable_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__Goal_5, (MR_Integer) 0)));
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__Goal_5, (MR_Integer) 1)));
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Purity_9;
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Detism_10;

        {
          transform_hlds__implicit_parallelism__push_goals_together__Purity_9 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__implicit_parallelism__push_goals_together__GoalInfo_8);
        }
        {
          transform_hlds__implicit_parallelism__push_goals_together__Detism_10 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__implicit_parallelism__push_goals_together__GoalInfo_8);
        }
        transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__Purity_9 == (MR_Integer) 0);
        if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
          transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__Detism_10 == (MR_Integer) 0);
        if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
          switch (MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word transform_hlds__implicit_parallelism__push_goals_together__SubGoal_64 = (MR_Word) MR_body(((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7), (MR_Integer) 0);

                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal__tmp_copy_5 = transform_hlds__implicit_parallelism__push_goals_together__SubGoal_64;

                  transform_hlds__implicit_parallelism__push_goals_together__Goal_5 = transform_hlds__implicit_parallelism__push_goals_together__Goal__tmp_copy_5;
                }
                continue;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word transform_hlds__implicit_parallelism__push_goals_together__Unification_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7, (MR_Integer) 3)));
                MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7, (MR_Integer) 0)));
                MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7, (MR_Integer) 1)));
                MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7, (MR_Integer) 2)));
                MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7, (MR_Integer) 4)));

                switch (MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__Unification_14)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 2:
                    *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__Args_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Unification_14, (MR_Integer) 2)));
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__RttiVarMaps_33 = (MR_Word) transform_hlds__implicit_parallelism__push_goals_together__PushInfo_4;
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Unification_14, (MR_Integer) 0)));
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Unification_14, (MR_Integer) 1)));
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Unification_14, (MR_Integer) 3)));
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Unification_14, (MR_Integer) 4)));
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Unification_14, (MR_Integer) 5)));
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_89_89;

                      {
                        transform_hlds__implicit_parallelism__push_goals_together__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_89_89, 0) = ((MR_Box) (&transform_hlds__implicit_parallelism__push_goals_together_scalar_common_3[0]));
                        MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_89_89, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_p_0_1));
                        MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_89_89, 3) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__RttiVarMaps_33));
                      }
                      {
                        transform_hlds__implicit_parallelism__push_goals_together__succeeded = mercury__list__all_true_2_p_0((MR_Word) &transform_hlds__implicit_parallelism__push_goals_together_scalar_common_1[0], transform_hlds__implicit_parallelism__push_goals_together__V_89_89, transform_hlds__implicit_parallelism__push_goals_together__Args_29);
                      }
                      if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                        *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 1;
                      else
                        *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 0;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__Unification_14, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.implicit_parallelism.push_goals_together", (MR_String) "predicate \140transform_hlds.implicit_parallelism.push_goals_together.is_pushable_goal\'/3", (MR_String) "complicated_unify");
                            return;
                          }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                  *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goals_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7, (MR_Integer) 2)));
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7, (MR_Integer) 1)));

                    {
                      transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_list_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__PushInfo_4, transform_hlds__implicit_parallelism__push_goals_together__Goals_56, transform_hlds__implicit_parallelism__push_goals_together__Pushable_6);
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goals_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7, (MR_Integer) 1)));

                    {
                      transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_list_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__PushInfo_4, transform_hlds__implicit_parallelism__push_goals_together__Goals_92, transform_hlds__implicit_parallelism__push_goals_together__Pushable_6);
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__Cases_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7, (MR_Integer) 3)));
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7, (MR_Integer) 1)));
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7, (MR_Integer) 2)));

                    {
                      transform_hlds__implicit_parallelism__push_goals_together__is_pushable_case_list_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__PushInfo_4, transform_hlds__implicit_parallelism__push_goals_together__Cases_59, transform_hlds__implicit_parallelism__push_goals_together__Pushable_6);
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__SubGoal_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7, (MR_Integer) 2)));
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7, (MR_Integer) 1)));

                    /* direct tailcall eliminated */
                    {
                      MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal__tmp_copy_5 = transform_hlds__implicit_parallelism__push_goals_together__SubGoal_93;

                      transform_hlds__implicit_parallelism__push_goals_together__Goal_5 = transform_hlds__implicit_parallelism__push_goals_together__Goal__tmp_copy_5;
                    }
                    continue;
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__Then_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7, (MR_Integer) 3)));
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__Else_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7, (MR_Integer) 4)));
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_84_84;
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7, (MR_Integer) 2)));
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goals_97;
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_99;
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7, (MR_Integer) 1)));

                    {
                      transform_hlds__implicit_parallelism__push_goals_together__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__V_84_84, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Else_63));
                      MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      transform_hlds__implicit_parallelism__push_goals_together__Goals_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Goals_97, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Then_62));
                      MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Goals_97, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__V_84_84));
                    }
                    {
                      transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__PushInfo_4, transform_hlds__implicit_parallelism__push_goals_together__Goal_96, &transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_99);
                    }
                    switch (transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_99) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Goals_97, (MR_Integer) 0)));
                          MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goals_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Goals_97, (MR_Integer) 1)));
                          MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_105;

                          {
                            transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__PushInfo_4, transform_hlds__implicit_parallelism__push_goals_together__Goal_102, &transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_105);
                          }
                          switch (transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_105) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 0;
                              break;
                            case (MR_Integer) 1:
                              {
                                MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Goals_103, (MR_Integer) 0)));
                                MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_111;
                                MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goals_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Goals_103, (MR_Integer) 1)));

                                {
                                  transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__PushInfo_4, transform_hlds__implicit_parallelism__push_goals_together__Goal_108, &transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_111);
                                }
                                switch (transform_hlds__implicit_parallelism__push_goals_together__GoalPushable_111) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 0;
                                    break;
                                  case (MR_Integer) 1:
                                    *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 1;
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
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__Shorthand_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_7, (MR_Integer) 1)));

                    switch (MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__Shorthand_66)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.implicit_parallelism.push_goals_together", (MR_String) "predicate \140transform_hlds.implicit_parallelism.push_goals_together.is_pushable_goal\'/3", (MR_String) "bi_implication");
                            return;
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                      case (MR_Integer) 2:
                        *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 0;
                        break;
                    }
                  }
                  break;
              }
              break;
          }
        else
          *transform_hlds__implicit_parallelism__push_goals_together__Pushable_6 = (MR_Integer) 0;
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__find_hi_goals_7_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3,
  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__6_6,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__7_7)
{
  {
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;

    if ((transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__7_7 = (MR_Integer) 0;
      }
    else
      {
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Head_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Tail_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadPushable_19;

        {
          transform_hlds__implicit_parallelism__push_goals_together__is_pushable_goal_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, transform_hlds__implicit_parallelism__push_goals_together__Head_12, &transform_hlds__implicit_parallelism__push_goals_together__HeadPushable_19);
        }
        switch (transform_hlds__implicit_parallelism__push_goals_together__HeadPushable_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__7_7 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 1:
            {
              transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4 == transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3);
              if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Head_12));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__6_6 = transform_hlds__implicit_parallelism__push_goals_together__Tail_13;
                  *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__7_7 = (MR_Integer) 1;
                }
              else
                {
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__LoHiTail_20;
                  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__V_22_22 = (transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4 + (MR_Integer) 1);

                  {
                    transform_hlds__implicit_parallelism__push_goals_together__find_hi_goals_7_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, transform_hlds__implicit_parallelism__push_goals_together__Tail_13, transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3, transform_hlds__implicit_parallelism__push_goals_together__V_22_22, &transform_hlds__implicit_parallelism__push_goals_together__LoHiTail_20, transform_hlds__implicit_parallelism__push_goals_together__HeadVar__6_6, transform_hlds__implicit_parallelism__push_goals_together__HeadVar__7_7);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Head_12));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__LoHiTail_20));
                  }
                }
            }
            break;
        }
      }
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__find_lo_hi_goals_9_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushInfo_10,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Conjuncts_11,
  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__Lo_12,
  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__Hi_13,
  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__Cur_14,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Before_15,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__LoHi_16,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__After_17,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Pushable_18)
{
  {
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__Cur_14 == transform_hlds__implicit_parallelism__push_goals_together__Lo_12);

    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
      {
        {
          transform_hlds__implicit_parallelism__push_goals_together__find_hi_goals_7_p_0(transform_hlds__implicit_parallelism__push_goals_together__PushInfo_10, transform_hlds__implicit_parallelism__push_goals_together__Conjuncts_11, transform_hlds__implicit_parallelism__push_goals_together__Hi_13, transform_hlds__implicit_parallelism__push_goals_together__Cur_14, transform_hlds__implicit_parallelism__push_goals_together__LoHi_16, transform_hlds__implicit_parallelism__push_goals_together__After_17, transform_hlds__implicit_parallelism__push_goals_together__Pushable_18);
        }
        *transform_hlds__implicit_parallelism__push_goals_together__Before_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
    if ((transform_hlds__implicit_parallelism__push_goals_together__Conjuncts_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__implicit_parallelism__push_goals_together__Before_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__implicit_parallelism__push_goals_together__LoHi_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__implicit_parallelism__push_goals_together__After_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__implicit_parallelism__push_goals_together__Pushable_18 = (MR_Integer) 0;
      }
    else
      {
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Head_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Conjuncts_11, (MR_Integer) 0)));
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Tail_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Conjuncts_11, (MR_Integer) 1)));
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__BeforeTail_21;
        MR_Integer transform_hlds__implicit_parallelism__push_goals_together__V_22_22 = (transform_hlds__implicit_parallelism__push_goals_together__Cur_14 + (MR_Integer) 1);

        {
          transform_hlds__implicit_parallelism__push_goals_together__find_lo_hi_goals_9_p_0(transform_hlds__implicit_parallelism__push_goals_together__PushInfo_10, transform_hlds__implicit_parallelism__push_goals_together__Tail_20, transform_hlds__implicit_parallelism__push_goals_together__Lo_12, transform_hlds__implicit_parallelism__push_goals_together__Hi_13, transform_hlds__implicit_parallelism__push_goals_together__V_22_22, &transform_hlds__implicit_parallelism__push_goals_together__BeforeTail_21, transform_hlds__implicit_parallelism__push_goals_together__LoHi_16, transform_hlds__implicit_parallelism__push_goals_together__After_17, transform_hlds__implicit_parallelism__push_goals_together__Pushable_18);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__implicit_parallelism__push_goals_together__Before_15 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Head_19));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__BeforeTail_21));
        }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_p_0_1(
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure_arg,
  MR_Box transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1,
  MR_Box * transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;
    MR_Box transform_hlds__implicit_parallelism__push_goals_together__closure = transform_hlds__implicit_parallelism__push_goals_together__closure_arg;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__conv0_Tail_5;

    {
      transform_hlds__implicit_parallelism__push_goals_together__succeeded = transform_hlds__implicit_parallelism__push_goals_together__maybe_steps_after_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_1), &transform_hlds__implicit_parallelism__push_goals_together__conv0_Tail_5);
    }
    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
      {
        *transform_hlds__implicit_parallelism__push_goals_together__wrapper_arg_2 = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__conv0_Tail_5));
        transform_hlds__implicit_parallelism__push_goals_together__succeeded = MR_TRUE;
      }
    return transform_hlds__implicit_parallelism__push_goals_together__succeeded;
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushGoal_6,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushInfo_7,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Result_8,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_32,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_33)
{
  {
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;
    MR_String transform_hlds__implicit_parallelism__push_goals_together__GoalPathStr_10 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__PushGoal_6, (MR_Integer) 0)));
    MR_Integer transform_hlds__implicit_parallelism__push_goals_together__Lo_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__PushGoal_6, (MR_Integer) 1)));
    MR_Integer transform_hlds__implicit_parallelism__push_goals_together__Hi_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__PushGoal_6, (MR_Integer) 2)));
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushedInto_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__PushGoal_6, (MR_Integer) 3)));
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalPath_14;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_15;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalInfo0_16;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__Before0_18;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__After_20;
    MR_Integer transform_hlds__implicit_parallelism__push_goals_together__PushConjNum_24;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushIntoGoal_28;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_50_50;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_51_51;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__Conjuncts_17;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__LoHi_19;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__RelGoalPaths_21;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadRelGoalPath_22;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__TailRelGoalPaths_23;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadRestRelPath_25;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__TailRestRelPaths_26;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushIntoGoal0_27;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_34_34;
    MR_Integer transform_hlds__implicit_parallelism__push_goals_together__V_35_35;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_36_36;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_37_37;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_38_38;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_40_40;
    MR_Integer transform_hlds__implicit_parallelism__push_goals_together__V_41_41;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_53_53;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_54_54;
    MR_Box transform_hlds__implicit_parallelism__push_goals_together__conv1_PushIntoGoal0_27;

    {
      mdbcomp__goal_path__goal_path_from_string_det_2_p_0(transform_hlds__implicit_parallelism__push_goals_together__GoalPathStr_10, &transform_hlds__implicit_parallelism__push_goals_together__GoalPath_14);
    }
    transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_32, (MR_Integer) 0)));
    transform_hlds__implicit_parallelism__push_goals_together__GoalInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_32, (MR_Integer) 1)));
    transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
      {
        transform_hlds__implicit_parallelism__push_goals_together__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_15, (MR_Integer) 1)));
        transform_hlds__implicit_parallelism__push_goals_together__Conjuncts_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_15, (MR_Integer) 2)));
        transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__V_34_34 == (MR_Integer) 0);
        if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
          {
            transform_hlds__implicit_parallelism__push_goals_together__V_35_35 = (MR_Integer) 1;
            transform_hlds__implicit_parallelism__push_goals_together__V_36_36 = (MR_Integer) 1;
            {
              transform_hlds__implicit_parallelism__push_goals_together__find_lo_hi_goals_9_p_0(transform_hlds__implicit_parallelism__push_goals_together__PushInfo_7, transform_hlds__implicit_parallelism__push_goals_together__Conjuncts_17, transform_hlds__implicit_parallelism__push_goals_together__Lo_11, transform_hlds__implicit_parallelism__push_goals_together__Hi_12, transform_hlds__implicit_parallelism__push_goals_together__V_35_35, &transform_hlds__implicit_parallelism__push_goals_together__Before0_18, &transform_hlds__implicit_parallelism__push_goals_together__LoHi_19, &transform_hlds__implicit_parallelism__push_goals_together__After_20, &transform_hlds__implicit_parallelism__push_goals_together__V_53_53);
            }
            transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__V_36_36 == transform_hlds__implicit_parallelism__push_goals_together__V_53_53);
            if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
              {
                {
                  transform_hlds__implicit_parallelism__push_goals_together__succeeded = transform_hlds__implicit_parallelism__push_goals_together__find_relative_paths_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__GoalPath_14, transform_hlds__implicit_parallelism__push_goals_together__PushedInto_13, &transform_hlds__implicit_parallelism__push_goals_together__RelGoalPaths_21);
                }
                if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                  {
                    transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__RelGoalPaths_21)) == (MR_mktag((MR_Integer) 1)));
                    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                      {
                        transform_hlds__implicit_parallelism__push_goals_together__HeadRelGoalPath_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__RelGoalPaths_21, (MR_Integer) 0)));
                        transform_hlds__implicit_parallelism__push_goals_together__TailRelGoalPaths_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__RelGoalPaths_21, (MR_Integer) 1)));
                        transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__HeadRelGoalPath_22)) == (MR_mktag((MR_Integer) 1)));
                        if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                          {
                            transform_hlds__implicit_parallelism__push_goals_together__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadRelGoalPath_22, (MR_Integer) 0)));
                            transform_hlds__implicit_parallelism__push_goals_together__HeadRestRelPath_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadRelGoalPath_22, (MR_Integer) 1)));
                            transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__V_37_37)) == (MR_mktag((MR_Integer) 1)));
                            if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                              {
                                transform_hlds__implicit_parallelism__push_goals_together__PushConjNum_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__V_37_37, (MR_Integer) 0)));
                                transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_50_50 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;
                                {
                                  transform_hlds__implicit_parallelism__push_goals_together__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_38_38, 0) = ((MR_Box) (&transform_hlds__implicit_parallelism__push_goals_together_scalar_common_2[0]));
                                  MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_38_38, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_p_0_1));
                                  MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                  MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__V_38_38, 3) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__V_37_37));
                                }
                                {
                                  transform_hlds__implicit_parallelism__push_goals_together__succeeded = mercury__list__map_3_p_2(transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_50_50, transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_50_50, transform_hlds__implicit_parallelism__push_goals_together__V_38_38, transform_hlds__implicit_parallelism__push_goals_together__TailRelGoalPaths_23, &transform_hlds__implicit_parallelism__push_goals_together__TailRestRelPaths_26);
                                }
                                if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                                  {
                                    transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_51_51 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                                    {
                                      transform_hlds__implicit_parallelism__push_goals_together__succeeded = mercury__list__index1_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_51_51, transform_hlds__implicit_parallelism__push_goals_together__Before0_18, transform_hlds__implicit_parallelism__push_goals_together__PushConjNum_24, &transform_hlds__implicit_parallelism__push_goals_together__conv1_PushIntoGoal0_27);
                                    }
                                    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                                      {
                                        transform_hlds__implicit_parallelism__push_goals_together__PushIntoGoal0_27 = ((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__conv1_PushIntoGoal0_27);
                                        transform_hlds__implicit_parallelism__push_goals_together__succeeded = MR_TRUE;
                                      }
                                    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                                      {
                                        transform_hlds__implicit_parallelism__push_goals_together__V_40_40 = (MR_Integer) 1;
                                        {
                                          transform_hlds__implicit_parallelism__push_goals_together__push_into_goal_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__LoHi_19, transform_hlds__implicit_parallelism__push_goals_together__HeadRestRelPath_25, transform_hlds__implicit_parallelism__push_goals_together__TailRestRelPaths_26, transform_hlds__implicit_parallelism__push_goals_together__PushIntoGoal0_27, &transform_hlds__implicit_parallelism__push_goals_together__PushIntoGoal_28, &transform_hlds__implicit_parallelism__push_goals_together__V_54_54);
                                        }
                                        transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__V_40_40 == transform_hlds__implicit_parallelism__push_goals_together__V_54_54);
                                        if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                                          {
                                            transform_hlds__implicit_parallelism__push_goals_together__V_41_41 = (transform_hlds__implicit_parallelism__push_goals_together__Lo_11 - transform_hlds__implicit_parallelism__push_goals_together__PushConjNum_24);
                                            transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__V_41_41 == (MR_Integer) 1);
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
    if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
      {
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_52_52 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Before_29;
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_30;
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_43_43;

        {
          mercury__list__det_replace_nth_4_p_0(transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_52_52, transform_hlds__implicit_parallelism__push_goals_together__Before0_18, transform_hlds__implicit_parallelism__push_goals_together__PushConjNum_24, ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__PushIntoGoal_28)), &transform_hlds__implicit_parallelism__push_goals_together__Before_29);
        }
        {
          transform_hlds__implicit_parallelism__push_goals_together__V_43_43 = mercury__list__f_43_43_2_f_0(transform_hlds__implicit_parallelism__push_goals_together__TypeCtorInfo_52_52, transform_hlds__implicit_parallelism__push_goals_together__Before_29, transform_hlds__implicit_parallelism__push_goals_together__After_20);
        }
        {
          transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_30, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_30, 2) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__V_43_43));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_33 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_30));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalInfo0_16));
        }
        *transform_hlds__implicit_parallelism__push_goals_together__Result_8 = (MR_Integer) 1;
      }
    else
      {
        *transform_hlds__implicit_parallelism__push_goals_together__Result_8 = (MR_Integer) 0;
        *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_33 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_32;
      }
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__do_push_in_cases_7_p_0(
  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__6_6,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__7_7)
{
  {
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;

    if ((transform_hlds__implicit_parallelism__push_goals_together__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5 = (MR_Integer) 0;
        *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Case0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__6_6, (MR_Integer) 0)));
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Cases0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__6_6, (MR_Integer) 1)));
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Case_23;
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Cases_24;

        transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1 == (MR_Integer) 1);
        if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
          {
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__MainConsId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__Case0_21, (MR_Integer) 0)));
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__OtherConsIds_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__Case0_21, (MR_Integer) 1)));
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__Case0_21, (MR_Integer) 2)));
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal_28;

            {
              transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2, transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3, transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4, transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5, transform_hlds__implicit_parallelism__push_goals_together__Goal0_27, &transform_hlds__implicit_parallelism__push_goals_together__Goal_28);
            }
            {
              transform_hlds__implicit_parallelism__push_goals_together__Case_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__Case_23, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__MainConsId_25));
              MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__Case_23, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__OtherConsIds_26));
              MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__Case_23, 2) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Goal_28));
            }
            transform_hlds__implicit_parallelism__push_goals_together__Cases_24 = transform_hlds__implicit_parallelism__push_goals_together__Cases0_22;
          }
        else
          {
            MR_Integer transform_hlds__implicit_parallelism__push_goals_together__V_29_29;

            transform_hlds__implicit_parallelism__push_goals_together__Case_23 = transform_hlds__implicit_parallelism__push_goals_together__Case0_21;
            transform_hlds__implicit_parallelism__push_goals_together__V_29_29 = (transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1 - (MR_Integer) 1);
            {
              transform_hlds__implicit_parallelism__push_goals_together__do_push_in_cases_7_p_0(transform_hlds__implicit_parallelism__push_goals_together__V_29_29, transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2, transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3, transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4, transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5, transform_hlds__implicit_parallelism__push_goals_together__Cases0_22, &transform_hlds__implicit_parallelism__push_goals_together__Cases_24);
            }
          }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__7_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Case_23));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Cases_24));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goals_7_p_0(
  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__6_6,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__7_7)
{
  {
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;

    if ((transform_hlds__implicit_parallelism__push_goals_together__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5 = (MR_Integer) 0;
        *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__6_6, (MR_Integer) 0)));
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goals0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__6_6, (MR_Integer) 1)));
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal_23;
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goals_24;

        transform_hlds__implicit_parallelism__push_goals_together__succeeded = (transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1 == (MR_Integer) 1);
        if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
          {
            {
              transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2, transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3, transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4, transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5, transform_hlds__implicit_parallelism__push_goals_together__Goal0_21, &transform_hlds__implicit_parallelism__push_goals_together__Goal_23);
            }
            transform_hlds__implicit_parallelism__push_goals_together__Goals_24 = transform_hlds__implicit_parallelism__push_goals_together__Goals0_22;
          }
        else
          {
            MR_Integer transform_hlds__implicit_parallelism__push_goals_together__V_25_25;

            transform_hlds__implicit_parallelism__push_goals_together__Goal_23 = transform_hlds__implicit_parallelism__push_goals_together__Goal0_21;
            transform_hlds__implicit_parallelism__push_goals_together__V_25_25 = (transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1 - (MR_Integer) 1);
            {
              transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goals_7_p_0(transform_hlds__implicit_parallelism__push_goals_together__V_25_25, transform_hlds__implicit_parallelism__push_goals_together__HeadVar__2_2, transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3, transform_hlds__implicit_parallelism__push_goals_together__HeadVar__4_4, transform_hlds__implicit_parallelism__push_goals_together__HeadVar__5_5, transform_hlds__implicit_parallelism__push_goals_together__Goals0_22, &transform_hlds__implicit_parallelism__push_goals_together__Goals_24);
            }
          }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__7_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Goal_23));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Goals_24));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushGoal_2,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushInfo_3,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__Result_4,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_5,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6)
{
  {
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;

    if ((transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        transform_hlds__implicit_parallelism__push_goals_together__perform_push_transform_5_p_0(transform_hlds__implicit_parallelism__push_goals_together__PushGoal_2, transform_hlds__implicit_parallelism__push_goals_together__PushInfo_3, transform_hlds__implicit_parallelism__push_goals_together__Result_4, transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_5, transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6);
      }
    else
      {
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Step_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Path_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_5, (MR_Integer) 0)));
        MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalInfo0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_5, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__Step_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(transform_hlds__implicit_parallelism__push_goals_together__Step_14)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Vars0_33;
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Cond0_34;
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Then0_35;
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Else0_36;

                  transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                    {
                      transform_hlds__implicit_parallelism__push_goals_together__Vars0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 1)));
                      transform_hlds__implicit_parallelism__push_goals_together__Cond0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 2)));
                      transform_hlds__implicit_parallelism__push_goals_together__Then0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 3)));
                      transform_hlds__implicit_parallelism__push_goals_together__Else0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 4)));
                      {
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Cond_37;
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_95;

                        {
                          transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__Path_15, transform_hlds__implicit_parallelism__push_goals_together__PushGoal_2, transform_hlds__implicit_parallelism__push_goals_together__PushInfo_3, transform_hlds__implicit_parallelism__push_goals_together__Result_4, transform_hlds__implicit_parallelism__push_goals_together__Cond0_34, &transform_hlds__implicit_parallelism__push_goals_together__Cond_37);
                        }
                        {
                          transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_95, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Vars0_33));
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_95, 2) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Cond_37));
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_95, 3) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Then0_35));
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_95, 4) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Else0_36));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_95));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalInfo0_21));
                        }
                      }
                    }
                  else
                    {
                      *transform_hlds__implicit_parallelism__push_goals_together__Result_4 = (MR_Integer) 0;
                      *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_5;
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Vars0_100;
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Cond0_101;
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Then0_102;
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Else0_103;

                  transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                    {
                      transform_hlds__implicit_parallelism__push_goals_together__Vars0_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 1)));
                      transform_hlds__implicit_parallelism__push_goals_together__Cond0_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 2)));
                      transform_hlds__implicit_parallelism__push_goals_together__Then0_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 3)));
                      transform_hlds__implicit_parallelism__push_goals_together__Else0_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 4)));
                      {
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Then_38;
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_98;

                        {
                          transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__Path_15, transform_hlds__implicit_parallelism__push_goals_together__PushGoal_2, transform_hlds__implicit_parallelism__push_goals_together__PushInfo_3, transform_hlds__implicit_parallelism__push_goals_together__Result_4, transform_hlds__implicit_parallelism__push_goals_together__Then0_102, &transform_hlds__implicit_parallelism__push_goals_together__Then_38);
                        }
                        {
                          transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_98, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Vars0_100));
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_98, 2) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Cond0_101));
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_98, 3) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Then_38));
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_98, 4) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Else0_103));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_98));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalInfo0_21));
                        }
                      }
                    }
                  else
                    {
                      *transform_hlds__implicit_parallelism__push_goals_together__Result_4 = (MR_Integer) 0;
                      *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_5;
                    }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Vars0_111;
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Cond0_112;
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Then0_113;
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Else0_114;

                  transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                    {
                      transform_hlds__implicit_parallelism__push_goals_together__Vars0_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 1)));
                      transform_hlds__implicit_parallelism__push_goals_together__Cond0_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 2)));
                      transform_hlds__implicit_parallelism__push_goals_together__Then0_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 3)));
                      transform_hlds__implicit_parallelism__push_goals_together__Else0_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 4)));
                      {
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Else_39;
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_109;

                        {
                          transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__Path_15, transform_hlds__implicit_parallelism__push_goals_together__PushGoal_2, transform_hlds__implicit_parallelism__push_goals_together__PushInfo_3, transform_hlds__implicit_parallelism__push_goals_together__Result_4, transform_hlds__implicit_parallelism__push_goals_together__Else0_114, &transform_hlds__implicit_parallelism__push_goals_together__Else_39);
                        }
                        {
                          transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_109, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Vars0_111));
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_109, 2) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Cond0_112));
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_109, 3) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Then0_113));
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_109, 4) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Else_39));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_109));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalInfo0_21));
                        }
                      }
                    }
                  else
                    {
                      *transform_hlds__implicit_parallelism__push_goals_together__Result_4 = (MR_Integer) 0;
                      *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_5;
                    }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__SubGoal0_40;

                  transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20)) == (MR_mktag((MR_Integer) 0)));
                  if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                    {
                      transform_hlds__implicit_parallelism__push_goals_together__SubGoal0_40 = (MR_Word) MR_body(((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20), (MR_Integer) 0);
                      {
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__SubGoal_41;
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_120;

                        {
                          transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__Path_15, transform_hlds__implicit_parallelism__push_goals_together__PushGoal_2, transform_hlds__implicit_parallelism__push_goals_together__PushInfo_3, transform_hlds__implicit_parallelism__push_goals_together__Result_4, transform_hlds__implicit_parallelism__push_goals_together__SubGoal0_40, &transform_hlds__implicit_parallelism__push_goals_together__SubGoal_41);
                        }
                        transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_120 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__implicit_parallelism__push_goals_together__SubGoal_41);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_120));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalInfo0_21));
                        }
                      }
                    }
                  else
                    {
                      *transform_hlds__implicit_parallelism__push_goals_together__Result_4 = (MR_Integer) 0;
                      *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_5;
                    }
                }
                break;
              case (MR_Integer) 4:
              case (MR_Integer) 5:
              case (MR_Integer) 6:
                {
                  *transform_hlds__implicit_parallelism__push_goals_together__Result_4 = (MR_Integer) 0;
                  *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_5;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer transform_hlds__implicit_parallelism__push_goals_together__N_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__Step_14, (MR_Integer) 0)));
              MR_Word transform_hlds__implicit_parallelism__push_goals_together__ConjType_23;
              MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goals0_24;

              transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                {
                  transform_hlds__implicit_parallelism__push_goals_together__ConjType_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 1)));
                  transform_hlds__implicit_parallelism__push_goals_together__Goals0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 2)));
                  {
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goals_25;
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_26;

                    {
                      transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goals_7_p_0(transform_hlds__implicit_parallelism__push_goals_together__N_22, transform_hlds__implicit_parallelism__push_goals_together__Path_15, transform_hlds__implicit_parallelism__push_goals_together__PushGoal_2, transform_hlds__implicit_parallelism__push_goals_together__PushInfo_3, transform_hlds__implicit_parallelism__push_goals_together__Result_4, transform_hlds__implicit_parallelism__push_goals_together__Goals0_24, &transform_hlds__implicit_parallelism__push_goals_together__Goals_25);
                    }
                    {
                      transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_26, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__ConjType_23));
                      MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_26, 2) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Goals_25));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_26));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalInfo0_21));
                    }
                  }
                }
              else
                {
                  *transform_hlds__implicit_parallelism__push_goals_together__Result_4 = (MR_Integer) 0;
                  *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_5;
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer transform_hlds__implicit_parallelism__push_goals_together__N_87 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__implicit_parallelism__push_goals_together__Step_14, (MR_Integer) 0)));
              MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goals0_84;

              transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                {
                  transform_hlds__implicit_parallelism__push_goals_together__Goals0_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 1)));
                  {
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goals_82;
                    MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_83;

                    {
                      transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goals_7_p_0(transform_hlds__implicit_parallelism__push_goals_together__N_87, transform_hlds__implicit_parallelism__push_goals_together__Path_15, transform_hlds__implicit_parallelism__push_goals_together__PushGoal_2, transform_hlds__implicit_parallelism__push_goals_together__PushInfo_3, transform_hlds__implicit_parallelism__push_goals_together__Result_4, transform_hlds__implicit_parallelism__push_goals_together__Goals0_84, &transform_hlds__implicit_parallelism__push_goals_together__Goals_82);
                    }
                    {
                      transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_83, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Goals_82));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_83));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalInfo0_21));
                    }
                  }
                }
              else
                {
                  *transform_hlds__implicit_parallelism__push_goals_together__Result_4 = (MR_Integer) 0;
                  *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_5;
                }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__Step_14, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer transform_hlds__implicit_parallelism__push_goals_together__N_93 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__Step_14, (MR_Integer) 1)));
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__Step_14, (MR_Integer) 2)));
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Var_29;
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__CanFail_30;
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Cases0_31;

                  transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                    {
                      transform_hlds__implicit_parallelism__push_goals_together__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 1)));
                      transform_hlds__implicit_parallelism__push_goals_together__CanFail_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 2)));
                      transform_hlds__implicit_parallelism__push_goals_together__Cases0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 3)));
                      {
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__Cases_32;
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_91;

                        {
                          transform_hlds__implicit_parallelism__push_goals_together__do_push_in_cases_7_p_0(transform_hlds__implicit_parallelism__push_goals_together__N_93, transform_hlds__implicit_parallelism__push_goals_together__Path_15, transform_hlds__implicit_parallelism__push_goals_together__PushGoal_2, transform_hlds__implicit_parallelism__push_goals_together__PushInfo_3, transform_hlds__implicit_parallelism__push_goals_together__Result_4, transform_hlds__implicit_parallelism__push_goals_together__Cases0_31, &transform_hlds__implicit_parallelism__push_goals_together__Cases_32);
                        }
                        {
                          transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_91, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Var_29));
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_91, 2) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__CanFail_30));
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_91, 3) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Cases_32));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_91));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalInfo0_21));
                        }
                      }
                    }
                  else
                    {
                      *transform_hlds__implicit_parallelism__push_goals_together__Result_4 = (MR_Integer) 0;
                      *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_5;
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__Reason_43;
                  MR_Word transform_hlds__implicit_parallelism__push_goals_together__SubGoal0_126;

                  transform_hlds__implicit_parallelism__push_goals_together__succeeded = ((((MR_tag((MR_Word) transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 0)))) == (MR_Integer) 5)));
                  if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
                    {
                      transform_hlds__implicit_parallelism__push_goals_together__Reason_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 1)));
                      transform_hlds__implicit_parallelism__push_goals_together__SubGoal0_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr0_20, (MR_Integer) 2)));
                      {
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_123;
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__SubGoal_124;

                        {
                          transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__Path_15, transform_hlds__implicit_parallelism__push_goals_together__PushGoal_2, transform_hlds__implicit_parallelism__push_goals_together__PushInfo_3, transform_hlds__implicit_parallelism__push_goals_together__Result_4, transform_hlds__implicit_parallelism__push_goals_together__SubGoal0_126, &transform_hlds__implicit_parallelism__push_goals_together__SubGoal_124);
                        }
                        {
                          transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_123, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__Reason_43));
                          MR_hl_field(MR_mktag(3), transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_123, 2) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__SubGoal_124));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalExpr_123));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__implicit_parallelism__push_goals_together__GoalInfo0_21));
                        }
                      }
                    }
                  else
                    {
                      *transform_hlds__implicit_parallelism__push_goals_together__Result_4 = (MR_Integer) 0;
                      *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_5;
                    }
                }
                break;
              case (MR_Integer) 2:
                {
                  *transform_hlds__implicit_parallelism__push_goals_together__Result_4 = (MR_Integer) 0;
                  *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_6 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_5;
                }
                break;
            }
            break;
        }
      }
  }
}

static void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__do_push_list_5_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushInfo_2,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_4,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;

        if ((transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3 = (MR_Integer) 1;
            *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_5 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_4;
          }
        else
          {
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushGoal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushGoals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1, (MR_Integer) 1)));
            MR_String transform_hlds__implicit_parallelism__push_goals_together__GoalPathStr_26 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__PushGoal_10, (MR_Integer) 0)));
            MR_Integer transform_hlds__implicit_parallelism__push_goals_together___Lo_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__PushGoal_10, (MR_Integer) 1)));
            MR_Integer transform_hlds__implicit_parallelism__push_goals_together___Hi_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__PushGoal_10, (MR_Integer) 2)));
            MR_Word transform_hlds__implicit_parallelism__push_goals_together___PushedInto_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__implicit_parallelism__push_goals_together__PushGoal_10, (MR_Integer) 3)));
            MR_Word transform_hlds__implicit_parallelism__push_goals_together__GoalPath_30;

            {
              transform_hlds__implicit_parallelism__push_goals_together__succeeded = mdbcomp__goal_path__goal_path_from_string_2_p_0(transform_hlds__implicit_parallelism__push_goals_together__GoalPathStr_26, &transform_hlds__implicit_parallelism__push_goals_together__GoalPath_30);
            }
            if (transform_hlds__implicit_parallelism__push_goals_together__succeeded)
              {
                MR_Word transform_hlds__implicit_parallelism__push_goals_together__Result_15;
                MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_18_18;

                {
                  transform_hlds__implicit_parallelism__push_goals_together__do_push_in_goal_6_p_0(transform_hlds__implicit_parallelism__push_goals_together__GoalPath_30, transform_hlds__implicit_parallelism__push_goals_together__PushGoal_10, transform_hlds__implicit_parallelism__push_goals_together__PushInfo_2, &transform_hlds__implicit_parallelism__push_goals_together__Result_15, transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_4, &transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_18_18);
                }
                switch (transform_hlds__implicit_parallelism__push_goals_together__Result_15) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3 = (MR_Integer) 0;
                      *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_5 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_18_18;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1__tmp_copy_1 = transform_hlds__implicit_parallelism__push_goals_together__PushGoals_11;
                        MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0__tmp_copy_4 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_18_18;

                        transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_4 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0__tmp_copy_4;
                        transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1_1 = transform_hlds__implicit_parallelism__push_goals_together__HeadVar__1__tmp_copy_1;
                      }
                      continue;
                    }
                    break;
                }
              }
            else
              {
                *transform_hlds__implicit_parallelism__push_goals_together__HeadVar__3_3 = (MR_Integer) 0;
                *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_5 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_Goal_0_4;
              }
          }
      }
      break;
    }
}

void MR_CALL 
transform_hlds__implicit_parallelism__push_goals_together__push_goals_in_proc_6_p_0(
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushGoals_7,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__OverallResult_8,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_0_29,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_30,
  MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ModuleInfo_32)
{
  {
    MR_bool transform_hlds__implicit_parallelism__push_goals_together__succeeded;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal0_11;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__VarSet0_12;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__VarTypes0_13;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__RttiVarMaps0_14;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__PushInfo_15;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__Globals_16;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal1_19;
    MR_Word transform_hlds__implicit_parallelism__push_goals_together__OutInfo_17;

    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_0_29, &transform_hlds__implicit_parallelism__push_goals_together__Goal0_11);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_0_29, &transform_hlds__implicit_parallelism__push_goals_together__VarSet0_12);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_0_29, &transform_hlds__implicit_parallelism__push_goals_together__VarTypes0_13);
    }
    {
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_0_29, &transform_hlds__implicit_parallelism__push_goals_together__RttiVarMaps0_14);
    }
    transform_hlds__implicit_parallelism__push_goals_together__PushInfo_15 = (MR_Word) transform_hlds__implicit_parallelism__push_goals_together__RttiVarMaps0_14;
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ModuleInfo_0_31, &transform_hlds__implicit_parallelism__push_goals_together__Globals_16);
    }
    {
      transform_hlds__implicit_parallelism__push_goals_together__OutInfo_17 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(transform_hlds__implicit_parallelism__push_goals_together__Globals_16, (MR_Integer) 1);
    }
    {
      transform_hlds__implicit_parallelism__push_goals_together__do_push_list_5_p_0(transform_hlds__implicit_parallelism__push_goals_together__PushGoals_7, transform_hlds__implicit_parallelism__push_goals_together__PushInfo_15, transform_hlds__implicit_parallelism__push_goals_together__OverallResult_8, transform_hlds__implicit_parallelism__push_goals_together__Goal0_11, &transform_hlds__implicit_parallelism__push_goals_together__Goal1_19);
    }
    switch (*transform_hlds__implicit_parallelism__push_goals_together__OverallResult_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_30 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_0_29;
          *transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ModuleInfo_32 = transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ModuleInfo_0_31;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__HeadVars_20;
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal2_22;
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__VarSet_23;
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__VarTypes_24;
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__RttiVarMaps_25;
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__InstMap0_26;
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__InstVarSet_27;
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__Goal_28;
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_53_53;
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_54_54;
          MR_Word transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_55_55;
          MR_Word transform_hlds__implicit_parallelism__push_goals_together___Warnings_21;

          {
            hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_0_29, &transform_hlds__implicit_parallelism__push_goals_together__HeadVars_20);
          }
          {
            hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 1, transform_hlds__implicit_parallelism__push_goals_together__HeadVars_20, &transform_hlds__implicit_parallelism__push_goals_together___Warnings_21, transform_hlds__implicit_parallelism__push_goals_together__Goal1_19, &transform_hlds__implicit_parallelism__push_goals_together__Goal2_22, transform_hlds__implicit_parallelism__push_goals_together__VarSet0_12, &transform_hlds__implicit_parallelism__push_goals_together__VarSet_23, transform_hlds__implicit_parallelism__push_goals_together__VarTypes0_13, &transform_hlds__implicit_parallelism__push_goals_together__VarTypes_24, transform_hlds__implicit_parallelism__push_goals_together__RttiVarMaps0_14, &transform_hlds__implicit_parallelism__push_goals_together__RttiVarMaps_25);
          }
          {
            hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_0_29, transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ModuleInfo_0_31, &transform_hlds__implicit_parallelism__push_goals_together__InstMap0_26);
          }
          {
            hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_0_29, &transform_hlds__implicit_parallelism__push_goals_together__InstVarSet_27);
          }
          {
            check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 1, transform_hlds__implicit_parallelism__push_goals_together__Goal2_22, &transform_hlds__implicit_parallelism__push_goals_together__Goal_28, transform_hlds__implicit_parallelism__push_goals_together__VarTypes_24, transform_hlds__implicit_parallelism__push_goals_together__InstVarSet_27, transform_hlds__implicit_parallelism__push_goals_together__InstMap0_26, transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ModuleInfo_0_31, transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ModuleInfo_32);
          }
          {
            hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__Goal_28, transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_0_29, &transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_53_53);
          }
          {
            hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__VarSet_23, transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_53_53, &transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_54_54);
          }
          {
            hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__VarTypes_24, transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_54_54, &transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_55_55);
          }
          {
            hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__implicit_parallelism__push_goals_together__RttiVarMaps_25, transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_55_55, transform_hlds__implicit_parallelism__push_goals_together__STATE_VARIABLE_ProcInfo_30);
          }
        }
        break;
    }
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

/* :- end_module transform_hlds.implicit_parallelism.push_goals_together. */
