/*
** Automatically generated from `term_constr_fixpoint.m'
** by the Mercury compiler,
** version rotd-2016-03-21
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


/* :- module transform_hlds.term_constr_fixpoint. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__term_constr_fixpoint__init
ENDINIT
*/

#include "transform_hlds.term_constr_fixpoint.mih"


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
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_constr_util.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



struct transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0_s {
  MR_Word transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__SizeVarSet_9;
  MR_bool transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__succeeded;
  MR_Word transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__NewConstraints_19;
  MR_Word transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__OldConstraints_20;
  jmp_buf transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__commit_0;
  MR_Word transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__OldConstraint_22;
  MR_Box transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__conv0_OldConstraint_22;
};

struct transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0_s {
  MR_bool transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__succeeded;
  MR_Word transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__IterationInfos_12;
  jmp_buf transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__commit_0;
  MR_Word transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__OneInfo_15;
  MR_Word transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__V_24_24;
  MR_Box transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__conv2_OneInfo_15;
};


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_fixpoint__list__pti_list_1__plain_transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_fixpoint__term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_fixpoint__list__pti_list_1__plain_term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_fixpoint__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_fixpoint__varset__ti_varset_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_fixpoint__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_fixpoint__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0;

static const MR_PseudoTypeInfo transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_types_fixpoint_info_0_0[6];

static const MR_ConstString transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_names_fixpoint_info_0_0[6];

static const MR_DuFunctorDesc transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_functor_desc_fixpoint_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_stag_ordered_fixpoint_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_ptag_ordered_fixpoint_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_name_ordered_fixpoint_info_0[1];

static const MR_Integer transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__functor_number_map_fixpoint_info_0[1];

static const MR_PseudoTypeInfo transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_types_fixpoint_options_0_0[2];

static const MR_ConstString transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_names_fixpoint_options_0_0[2];

static const MR_DuFunctorDesc transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_functor_desc_fixpoint_options_0_0;

static const MR_DuFunctorDescPtr transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_stag_ordered_fixpoint_options_0_0[1];

static const MR_DuPtagLayout transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_ptag_ordered_fixpoint_options_0[1];

static const MR_DuFunctorDescPtr transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_name_ordered_fixpoint_options_0[1];

static const MR_Integer transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__functor_number_map_fixpoint_options_0[1];

static const MR_PseudoTypeInfo transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_types_iteration_info_0_0[3];

static const MR_ConstString transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_names_iteration_info_0_0[3];

static const MR_DuFunctorDesc transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_functor_desc_iteration_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_stag_ordered_iteration_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_ptag_ordered_iteration_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_name_ordered_iteration_info_0[1];

static const MR_Integer transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__functor_number_map_iteration_info_0[1];

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_fixpoint__list__ti_list_1transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0;

static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____fixpoint_info_0_0_10001(
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____fixpoint_info_0_0_10001(
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____fixpoint_options_0_0_10001(
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____fixpoint_options_0_0_10001(
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____iteration_info_0_0_10001(
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____iteration_info_0_0_10001(
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____iteration_infos_0_0_10001(
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____iteration_infos_0_0_10001(
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_105_114_119_105_115_101_95_109_97_112_95_50_95_95_104_111_50_95_95_91_51_93_95_48_4_p_0(
  MR_Word transform_hlds__term_constr_fixpoint__V_27_27,
  MR_Word transform_hlds__term_constr_fixpoint__V_28_28,
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__3_3,
  MR_Word * transform_hlds__term_constr_fixpoint__HeadVar__4_4);

static MR_Word MR_CALL 
transform_hlds__term_constr_fixpoint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_105_114_119_105_115_101_95_109_97_112_95_95_104_111_49_95_95_91_51_93_95_48_2_f_0(
  MR_Word transform_hlds__term_constr_fixpoint__V_24_24,
  MR_Word transform_hlds__term_constr_fixpoint__V_25_25,
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2);

static MR_Word MR_CALL 
transform_hlds__term_constr_fixpoint__IntroducedFrom__func__term_traverse_abstract_disj_pairwise__412__1_5_f_0(
  MR_Word transform_hlds__term_constr_fixpoint__Locals_7,
  MR_Word transform_hlds__term_constr_fixpoint__Info_8,
  MR_Word transform_hlds__term_constr_fixpoint__SizeVarSet_10,
  MR_Word transform_hlds__term_constr_fixpoint__PolyToLeft_11,
  MR_Word transform_hlds__term_constr_fixpoint__LambdaHeadVar__1_24);

static MR_Word MR_CALL 
transform_hlds__term_constr_fixpoint__IntroducedFrom__func__do_fixpoint_calculation__136__1_1_f_0(
  MR_Word transform_hlds__term_constr_fixpoint__LambdaHeadVar__1_25);

static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____iteration_infos_0_0(
  MR_Word * transform_hlds__term_constr_fixpoint__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____iteration_infos_0_0(
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____iteration_info_0_0(
  MR_Word * transform_hlds__term_constr_fixpoint__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____iteration_info_0_0(
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____fixpoint_info_0_0(
  MR_Word * transform_hlds__term_constr_fixpoint__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____fixpoint_info_0_0(
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_1(
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_3(
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_2(
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_4(
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0(
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_fixpoint__SizeVarSet_9,
  MR_Integer transform_hlds__term_constr_fixpoint__Iteration_10,
  MR_Word transform_hlds__term_constr_fixpoint__OldPoly_11,
  MR_Word transform_hlds__term_constr_fixpoint__NewPoly_12,
  MR_Word * transform_hlds__term_constr_fixpoint__ResultPoly_13,
  MR_Word * transform_hlds__term_constr_fixpoint__ChangeFlag_14);

static MR_Box MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_pairwise_5_p_0_1(
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_pairwise_5_p_0(
  MR_Word transform_hlds__term_constr_fixpoint__Goals_6,
  MR_Word transform_hlds__term_constr_fixpoint__Locals_7,
  MR_Word transform_hlds__term_constr_fixpoint__Info_8,
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_22,
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_23);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_linearly_2_5_p_0(
  MR_Word transform_hlds__term_constr_fixpoint__Info_6,
  MR_Word transform_hlds__term_constr_fixpoint__Locals_7,
  MR_Word transform_hlds__term_constr_fixpoint__Goal_8,
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_13,
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_14);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_linearly_5_p_0_1(
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_linearly_5_p_0(
  MR_Word transform_hlds__term_constr_fixpoint__Goals_6,
  MR_Word transform_hlds__term_constr_fixpoint__Locals_7,
  MR_Word transform_hlds__term_constr_fixpoint__Info_8,
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_11,
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_12);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__post_process_abstract_goal_5_p_0(
  MR_Word transform_hlds__term_constr_fixpoint__Locals_6,
  MR_Word transform_hlds__term_constr_fixpoint__Info_7,
  MR_Word transform_hlds__term_constr_fixpoint__GoalPolyhedron0_8,
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_11,
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_12);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_goal_4_p_0_1(
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_goal_4_p_0(
  MR_Word transform_hlds__term_constr_fixpoint__Info_5,
  MR_Word transform_hlds__term_constr_fixpoint__Goal_6,
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_33,
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_34);

static MR_Word MR_CALL 
transform_hlds__term_constr_fixpoint__init_fixpoint_info_6_f_0(
  MR_Word transform_hlds__term_constr_fixpoint__ModuleInfo_8,
  MR_Word transform_hlds__term_constr_fixpoint__SizeVarSet_9,
  MR_Word transform_hlds__term_constr_fixpoint__PPId_10,
  MR_Integer transform_hlds__term_constr_fixpoint__MaxMatrixSize_11,
  MR_Word transform_hlds__term_constr_fixpoint__HeadVars_12,
  MR_Word transform_hlds__term_constr_fixpoint__Zeros_13);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_iterate_over_abstract_proc_6_p_0(
  MR_Integer transform_hlds__term_constr_fixpoint__Iteration_7,
  MR_Word transform_hlds__term_constr_fixpoint__Options_8,
  MR_Word transform_hlds__term_constr_fixpoint__ModuleInfo_9,
  MR_Word transform_hlds__term_constr_fixpoint__Proc_10,
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_IterationInfo_0_34,
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_IterationInfo_35);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__update_size_info_3_p_0(
  MR_Word transform_hlds__term_constr_fixpoint__Info_4,
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_10);

static MR_Word MR_CALL 
transform_hlds__term_constr_fixpoint__or_flags_1_f_0(
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__1_1);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_9(
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_8(
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_7(
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_6(
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_1(
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_2(
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_4(
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_3(
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_5(
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg);


static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_1[5][2];

static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_2[2][9];

static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_3[1][5];

static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_4[4][3];

static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_5[1][6];

static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_6[1][1];

static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_7[1][7];

static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_8[1][8];




static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_constr_fixpoint_scalar_common_1[1]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__term_constr_fixpoint_scalar_common_1[1]))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_2[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_fixpoint_options_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0)),
    ((MR_Box) (&transform_hlds__term_constr_fixpoint__list__pti_list_1__plain_transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0)),
    ((MR_Box) (&transform_hlds__term_constr_fixpoint__list__pti_list_1__plain_transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__term_constr_fixpoint__list__pti_list_1__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_fixpoint_info_0)),
    ((MR_Box) (&transform_hlds__term_constr_fixpoint__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0)),
    ((MR_Box) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0)),
    ((MR_Box) (&transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_4[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&transform_hlds__term_constr_fixpoint_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__term_constr_fixpoint_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__term_constr_fixpoint_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__term_constr_fixpoint_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_9)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_5[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_6[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_7[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_fixpoint_info_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0)),
    ((MR_Box) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0)),
    ((MR_Box) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_8[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_fixpoint_info_0)),
    ((MR_Box) (&transform_hlds__term_constr_fixpoint__list__pti_list_1__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0)),
    ((MR_Box) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0)),
    ((MR_Box) (&libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_fixpoint__list__pti_list_1__plain_transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_fixpoint__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_fixpoint__list__pti_list_1__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_fixpoint__term__ti_var_1term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_fixpoint__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_fixpoint__varset__ti_varset_1term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_fixpoint__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_fixpoint__term__ti_var_1term__type_ctor_info_generic_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_fixpoint__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_fixpoint__term__ti_var_1term__type_ctor_info_generic_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_types_fixpoint_info_0_0[6] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_fixpoint__varset__ti_varset_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_fixpoint__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_fixpoint__set_ordlist__ti_set_ordlist_1term__ti_var_1term__type_ctor_info_generic_0
};

static const MR_ConstString transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_names_fixpoint_info_0_0[6] = {
  (MR_String) "tcfi_module_info",
  (MR_String) "tcfi_varset",
  (MR_String) "tcfi_ppid",
  (MR_String) "tcfi_max_matrix_size",
  (MR_String) "tcfi_curr_head_vars",
  (MR_String) "tcfi_zeros"
};

static const MR_DuFunctorDesc transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_functor_desc_fixpoint_info_0_0 = {
  (MR_String) "fixpoint_info",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_types_fixpoint_info_0_0,
  transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_names_fixpoint_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_stag_ordered_fixpoint_info_0_0[1] = {
  &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_functor_desc_fixpoint_info_0_0
};

static const MR_DuPtagLayout transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_ptag_ordered_fixpoint_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_stag_ordered_fixpoint_info_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_name_ordered_fixpoint_info_0[1] = {
  &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_functor_desc_fixpoint_info_0_0
};

static const MR_Integer transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__functor_number_map_fixpoint_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_fixpoint_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_fixpoint____Unify____fixpoint_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_fixpoint____Compare____fixpoint_info_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_fixpoint",
  (MR_String) "fixpoint_info",
  {     transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_name_ordered_fixpoint_info_0 },
  {     transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_ptag_ordered_fixpoint_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__functor_number_map_fixpoint_info_0
};

static const MR_PseudoTypeInfo transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_types_fixpoint_options_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_widening_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_names_fixpoint_options_0_0[2] = {
  (MR_String) "fo_widening",
  (MR_String) "fo_max_size"
};

static const MR_DuFunctorDesc transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_functor_desc_fixpoint_options_0_0 = {
  (MR_String) "fixpoint_options",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_types_fixpoint_options_0_0,
  transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_names_fixpoint_options_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_stag_ordered_fixpoint_options_0_0[1] = {
  &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_functor_desc_fixpoint_options_0_0
};

static const MR_DuPtagLayout transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_ptag_ordered_fixpoint_options_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_stag_ordered_fixpoint_options_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_name_ordered_fixpoint_options_0[1] = {
  &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_functor_desc_fixpoint_options_0_0
};

static const MR_Integer transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__functor_number_map_fixpoint_options_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_fixpoint_options_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_fixpoint____Unify____fixpoint_options_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_fixpoint____Compare____fixpoint_options_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_fixpoint",
  (MR_String) "fixpoint_options",
  {     transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_name_ordered_fixpoint_options_0 },
  {     transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_ptag_ordered_fixpoint_options_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__functor_number_map_fixpoint_options_0
};

static const MR_PseudoTypeInfo transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_types_iteration_info_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

static const MR_ConstString transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_names_iteration_info_0_0[3] = {
  (MR_String) "ii_ppid",
  (MR_String) "ii_arg_size_poly",
  (MR_String) "ii_change_flag"
};

static const MR_DuFunctorDesc transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_functor_desc_iteration_info_0_0 = {
  (MR_String) "iteration_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_types_iteration_info_0_0,
  transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_names_iteration_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_stag_ordered_iteration_info_0_0[1] = {
  &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_functor_desc_iteration_info_0_0
};

static const MR_DuPtagLayout transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_ptag_ordered_iteration_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_stag_ordered_iteration_info_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_name_ordered_iteration_info_0[1] = {
  &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_functor_desc_iteration_info_0_0
};

static const MR_Integer transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__functor_number_map_iteration_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_constr_fixpoint____Unify____iteration_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_fixpoint____Compare____iteration_info_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_fixpoint",
  (MR_String) "iteration_info",
  {     transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_name_ordered_iteration_info_0 },
  {     transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_ptag_ordered_iteration_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__functor_number_map_iteration_info_0
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_fixpoint__list__ti_list_1transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_infos_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_constr_fixpoint____Unify____iteration_infos_0_0_10001)),
  ((MR_Box) (transform_hlds__term_constr_fixpoint____Compare____iteration_infos_0_0_10001)),
  (MR_String) "transform_hlds.term_constr_fixpoint",
  (MR_String) "iteration_infos",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__term_constr_fixpoint__list__ti_list_1transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____fixpoint_info_0_0_10001(
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;

    {
      transform_hlds__term_constr_fixpoint__succeeded = transform_hlds__term_constr_fixpoint____Unify____fixpoint_info_0_0(((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2));
    }
    return transform_hlds__term_constr_fixpoint__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____fixpoint_info_0_0_10001(
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_constr_fixpoint__conv0_HeadVar__1_1;

    {
      transform_hlds__term_constr_fixpoint____Compare____fixpoint_info_0_0(&transform_hlds__term_constr_fixpoint__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_3));
    }
    *transform_hlds__term_constr_fixpoint__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_fixpoint__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____fixpoint_options_0_0_10001(
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;

    {
      transform_hlds__term_constr_fixpoint__succeeded = transform_hlds__term_constr_fixpoint____Unify____fixpoint_options_0_0(((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2));
    }
    return transform_hlds__term_constr_fixpoint__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____fixpoint_options_0_0_10001(
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_constr_fixpoint__conv0_HeadVar__1_1;

    {
      transform_hlds__term_constr_fixpoint____Compare____fixpoint_options_0_0(&transform_hlds__term_constr_fixpoint__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_3));
    }
    *transform_hlds__term_constr_fixpoint__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_fixpoint__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____iteration_info_0_0_10001(
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;

    {
      transform_hlds__term_constr_fixpoint__succeeded = transform_hlds__term_constr_fixpoint____Unify____iteration_info_0_0(((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2));
    }
    return transform_hlds__term_constr_fixpoint__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____iteration_info_0_0_10001(
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_constr_fixpoint__conv0_HeadVar__1_1;

    {
      transform_hlds__term_constr_fixpoint____Compare____iteration_info_0_0(&transform_hlds__term_constr_fixpoint__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_3));
    }
    *transform_hlds__term_constr_fixpoint__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_fixpoint__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____iteration_infos_0_0_10001(
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;

    {
      transform_hlds__term_constr_fixpoint__succeeded = transform_hlds__term_constr_fixpoint____Unify____iteration_infos_0_0(((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2));
    }
    return transform_hlds__term_constr_fixpoint__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____iteration_infos_0_0_10001(
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_constr_fixpoint__conv0_HeadVar__1_1;

    {
      transform_hlds__term_constr_fixpoint____Compare____iteration_infos_0_0(&transform_hlds__term_constr_fixpoint__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_3));
    }
    *transform_hlds__term_constr_fixpoint__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_constr_fixpoint__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_105_114_119_105_115_101_95_109_97_112_95_50_95_95_104_111_50_95_95_91_51_93_95_48_4_p_0(
  MR_Word transform_hlds__term_constr_fixpoint__V_27_27,
  MR_Word transform_hlds__term_constr_fixpoint__V_28_28,
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__3_3,
  MR_Word * transform_hlds__term_constr_fixpoint__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_constr_fixpoint__succeeded;

        if ((transform_hlds__term_constr_fixpoint__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__term_constr_fixpoint__HeadVar__4_4 = transform_hlds__term_constr_fixpoint__HeadVar__3_3;
        else
          {
            MR_Word transform_hlds__term_constr_fixpoint__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word transform_hlds__term_constr_fixpoint__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 0)));

            if ((transform_hlds__term_constr_fixpoint__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *transform_hlds__term_constr_fixpoint__HeadVar__4_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_constr_fixpoint__V_26_26));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_constr_fixpoint__HeadVar__3_3));
              }
            else
              {
                MR_Word transform_hlds__term_constr_fixpoint__Y_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__V_25_25, (MR_Integer) 0)));
                MR_Word transform_hlds__term_constr_fixpoint__Rest_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__V_25_25, (MR_Integer) 1)));
                MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Acc_21_21;
                MR_Word transform_hlds__term_constr_fixpoint__V_22_22;
                MR_Word transform_hlds__term_constr_fixpoint__V_52_52;
                MR_Integer transform_hlds__term_constr_fixpoint__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_27_27, (MR_Integer) 3)));
                MR_Word transform_hlds__term_constr_fixpoint__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_27_27, (MR_Integer) 0)));
                MR_Word transform_hlds__term_constr_fixpoint__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_27_27, (MR_Integer) 1)));
                MR_Word transform_hlds__term_constr_fixpoint__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_27_27, (MR_Integer) 2)));
                MR_Word transform_hlds__term_constr_fixpoint__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_27_27, (MR_Integer) 4)));
                MR_Word transform_hlds__term_constr_fixpoint__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_27_27, (MR_Integer) 5)));

                {
                  transform_hlds__term_constr_fixpoint__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__V_52_52, 0) = ((MR_Box) (transform_hlds__term_constr_fixpoint__V_53_53));
                }
                {
                  libs__polyhedron__convex_union_5_p_0(transform_hlds__term_constr_fixpoint__V_28_28, transform_hlds__term_constr_fixpoint__V_52_52, transform_hlds__term_constr_fixpoint__V_26_26, transform_hlds__term_constr_fixpoint__Y_15, &transform_hlds__term_constr_fixpoint__V_22_22);
                }
                {
                  transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Acc_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Acc_21_21, 0) = ((MR_Box) (transform_hlds__term_constr_fixpoint__V_22_22));
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Acc_21_21, 1) = ((MR_Box) (transform_hlds__term_constr_fixpoint__HeadVar__3_3));
                }
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2__tmp_copy_2 = transform_hlds__term_constr_fixpoint__Rest_16;
                  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__3__tmp_copy_3 = transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Acc_21_21;

                  transform_hlds__term_constr_fixpoint__HeadVar__3_3 = transform_hlds__term_constr_fixpoint__HeadVar__3__tmp_copy_3;
                  transform_hlds__term_constr_fixpoint__HeadVar__2_2 = transform_hlds__term_constr_fixpoint__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
          }
      }
      break;
    }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_fixpoint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_105_114_119_105_115_101_95_109_97_112_95_95_104_111_49_95_95_91_51_93_95_48_2_f_0(
  MR_Word transform_hlds__term_constr_fixpoint__V_24_24,
  MR_Word transform_hlds__term_constr_fixpoint__V_25_25,
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_constr_fixpoint__succeeded;
        MR_Word transform_hlds__term_constr_fixpoint__X_3;

        if ((transform_hlds__term_constr_fixpoint__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_fixpoint", (MR_String) "function \140transform_hlds.term_constr_fixpoint.pairwise_map\'/2", (MR_String) "empty list");
            }
          }
        else
          {
            MR_Word transform_hlds__term_constr_fixpoint__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word transform_hlds__term_constr_fixpoint__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 0)));

            if ((transform_hlds__term_constr_fixpoint__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              transform_hlds__term_constr_fixpoint__X_3 = transform_hlds__term_constr_fixpoint__V_23_23;
            else
              {
                MR_Word transform_hlds__term_constr_fixpoint__X0_18;
                MR_Word transform_hlds__term_constr_fixpoint__Y_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__V_22_22, (MR_Integer) 0)));
                MR_Word transform_hlds__term_constr_fixpoint__Rest_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__V_22_22, (MR_Integer) 1)));
                MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Acc_21_42;
                MR_Word transform_hlds__term_constr_fixpoint__V_43_43;
                MR_Word transform_hlds__term_constr_fixpoint__V_71_71;
                MR_Integer transform_hlds__term_constr_fixpoint__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_24_24, (MR_Integer) 3)));
                MR_Word transform_hlds__term_constr_fixpoint__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_24_24, (MR_Integer) 0)));
                MR_Word transform_hlds__term_constr_fixpoint__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_24_24, (MR_Integer) 1)));
                MR_Word transform_hlds__term_constr_fixpoint__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_24_24, (MR_Integer) 2)));
                MR_Word transform_hlds__term_constr_fixpoint__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_24_24, (MR_Integer) 4)));
                MR_Word transform_hlds__term_constr_fixpoint__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_24_24, (MR_Integer) 5)));

                {
                  transform_hlds__term_constr_fixpoint__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__V_71_71, 0) = ((MR_Box) (transform_hlds__term_constr_fixpoint__V_72_72));
                }
                {
                  libs__polyhedron__convex_union_5_p_0(transform_hlds__term_constr_fixpoint__V_25_25, transform_hlds__term_constr_fixpoint__V_71_71, transform_hlds__term_constr_fixpoint__V_23_23, transform_hlds__term_constr_fixpoint__Y_36, &transform_hlds__term_constr_fixpoint__V_43_43);
                }
                {
                  transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Acc_21_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Acc_21_42, 0) = ((MR_Box) (transform_hlds__term_constr_fixpoint__V_43_43));
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Acc_21_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  transform_hlds__term_constr_fixpoint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_105_114_119_105_115_101_95_109_97_112_95_50_95_95_104_111_50_95_95_91_51_93_95_48_4_p_0(transform_hlds__term_constr_fixpoint__V_24_24, transform_hlds__term_constr_fixpoint__V_25_25, transform_hlds__term_constr_fixpoint__Rest_37, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Acc_21_42, &transform_hlds__term_constr_fixpoint__X0_18);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2__tmp_copy_2 = transform_hlds__term_constr_fixpoint__X0_18;

                  transform_hlds__term_constr_fixpoint__HeadVar__2_2 = transform_hlds__term_constr_fixpoint__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
          }
        return transform_hlds__term_constr_fixpoint__X_3;
      }
      break;
    }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_fixpoint__IntroducedFrom__func__term_traverse_abstract_disj_pairwise__412__1_5_f_0(
  MR_Word transform_hlds__term_constr_fixpoint__Locals_7,
  MR_Word transform_hlds__term_constr_fixpoint__Info_8,
  MR_Word transform_hlds__term_constr_fixpoint__SizeVarSet_10,
  MR_Word transform_hlds__term_constr_fixpoint__PolyToLeft_11,
  MR_Word transform_hlds__term_constr_fixpoint__LambdaHeadVar__1_24)
{
  {
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
    MR_Word transform_hlds__term_constr_fixpoint__LambdaHeadVar__2_25;
    MR_Word transform_hlds__term_constr_fixpoint__Poly0_15;

    {
      transform_hlds__term_constr_fixpoint__term_traverse_abstract_goal_4_p_0(transform_hlds__term_constr_fixpoint__Info_8, transform_hlds__term_constr_fixpoint__LambdaHeadVar__1_24, transform_hlds__term_constr_fixpoint__PolyToLeft_11, &transform_hlds__term_constr_fixpoint__Poly0_15);
    }
    {
      transform_hlds__term_constr_fixpoint__LambdaHeadVar__2_25 = libs__polyhedron__project_3_f_0(transform_hlds__term_constr_fixpoint__Locals_7, transform_hlds__term_constr_fixpoint__SizeVarSet_10, transform_hlds__term_constr_fixpoint__Poly0_15);
    }
    return transform_hlds__term_constr_fixpoint__LambdaHeadVar__2_25;
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_fixpoint__IntroducedFrom__func__do_fixpoint_calculation__136__1_1_f_0(
  MR_Word transform_hlds__term_constr_fixpoint__LambdaHeadVar__1_25)
{
  {
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
    MR_Word transform_hlds__term_constr_fixpoint__LambdaHeadVar__2_26;
    MR_Word transform_hlds__term_constr_fixpoint__Identity_19;
    MR_Word transform_hlds__term_constr_fixpoint__V_40_40;
    MR_Word transform_hlds__term_constr_fixpoint__V_42_42;
    MR_Word transform_hlds__term_constr_fixpoint__V_41_41;

    {
      transform_hlds__term_constr_fixpoint__Identity_19 = libs__polyhedron__universe_0_f_0();
    }
    transform_hlds__term_constr_fixpoint__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__LambdaHeadVar__1_25, (MR_Integer) 0)));
    transform_hlds__term_constr_fixpoint__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__LambdaHeadVar__1_25, (MR_Integer) 1)));
    transform_hlds__term_constr_fixpoint__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__LambdaHeadVar__1_25, (MR_Integer) 2)));
    {
      transform_hlds__term_constr_fixpoint__LambdaHeadVar__2_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__LambdaHeadVar__2_26, 0) = ((MR_Box) (transform_hlds__term_constr_fixpoint__V_40_40));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__LambdaHeadVar__2_26, 1) = ((MR_Box) (transform_hlds__term_constr_fixpoint__Identity_19));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__LambdaHeadVar__2_26, 2) = ((MR_Box) (transform_hlds__term_constr_fixpoint__V_42_42));
    }
    return transform_hlds__term_constr_fixpoint__LambdaHeadVar__2_26;
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____iteration_infos_0_0(
  MR_Word * transform_hlds__term_constr_fixpoint__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
    MR_Word transform_hlds__term_constr_fixpoint__Cast_HeadVar1_4 = transform_hlds__term_constr_fixpoint__HeadVar__2_2;
    MR_Word transform_hlds__term_constr_fixpoint__Cast_HeadVar2_5 = transform_hlds__term_constr_fixpoint__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[0], transform_hlds__term_constr_fixpoint__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_fixpoint__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_constr_fixpoint__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____iteration_infos_0_0(
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
    MR_Word transform_hlds__term_constr_fixpoint__Cast_HeadVar1_3 = transform_hlds__term_constr_fixpoint__HeadVar__1_1;
    MR_Word transform_hlds__term_constr_fixpoint__Cast_HeadVar2_4 = transform_hlds__term_constr_fixpoint__HeadVar__2_2;

    {
      transform_hlds__term_constr_fixpoint__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[0], ((MR_Box) (transform_hlds__term_constr_fixpoint__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_constr_fixpoint__Cast_HeadVar2_4)));
    }
    return transform_hlds__term_constr_fixpoint__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____iteration_info_0_0(
  MR_Word * transform_hlds__term_constr_fixpoint__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
    MR_Integer transform_hlds__term_constr_fixpoint__CastX_12 = (MR_Integer) transform_hlds__term_constr_fixpoint__HeadVar__2_2;
    MR_Integer transform_hlds__term_constr_fixpoint__CastY_13 = (MR_Integer) transform_hlds__term_constr_fixpoint__HeadVar__3_3;

    transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__CastX_12 == transform_hlds__term_constr_fixpoint__CastY_13);
    if (transform_hlds__term_constr_fixpoint__succeeded)
      *transform_hlds__term_constr_fixpoint__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__term_constr_fixpoint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__term_constr_fixpoint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__term_constr_fixpoint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__term_constr_fixpoint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__term_constr_fixpoint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__term_constr_fixpoint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word transform_hlds__term_constr_fixpoint__V_10_10;

        {
          hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_constr_fixpoint__V_10_10, transform_hlds__term_constr_fixpoint__V_4_4, transform_hlds__term_constr_fixpoint__V_7_7);
        }
        transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__V_10_10 == (MR_Integer) 0);
        transform_hlds__term_constr_fixpoint__succeeded = !(transform_hlds__term_constr_fixpoint__succeeded);
        if (transform_hlds__term_constr_fixpoint__succeeded)
          *transform_hlds__term_constr_fixpoint__HeadVar__1_1 = transform_hlds__term_constr_fixpoint__V_10_10;
        else
          {
            MR_Word transform_hlds__term_constr_fixpoint__V_11_11;

            {
              libs__polyhedron____Compare____polyhedron_0_0(&transform_hlds__term_constr_fixpoint__V_11_11, transform_hlds__term_constr_fixpoint__V_5_5, transform_hlds__term_constr_fixpoint__V_8_8);
            }
            transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__V_11_11 == (MR_Integer) 0);
            transform_hlds__term_constr_fixpoint__succeeded = !(transform_hlds__term_constr_fixpoint__succeeded);
            if (transform_hlds__term_constr_fixpoint__succeeded)
              *transform_hlds__term_constr_fixpoint__HeadVar__1_1 = transform_hlds__term_constr_fixpoint__V_11_11;
            else
              {
                MR_Integer transform_hlds__term_constr_fixpoint__V_17_17 = (MR_Integer) transform_hlds__term_constr_fixpoint__V_6_6;
                MR_Integer transform_hlds__term_constr_fixpoint__V_18_18 = (MR_Integer) transform_hlds__term_constr_fixpoint__V_9_9;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_constr_fixpoint__HeadVar__1_1, transform_hlds__term_constr_fixpoint__V_17_17, transform_hlds__term_constr_fixpoint__V_18_18);
                }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____iteration_info_0_0(
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
    MR_Integer transform_hlds__term_constr_fixpoint__CastX_9 = (MR_Integer) transform_hlds__term_constr_fixpoint__HeadVar__1_1;
    MR_Integer transform_hlds__term_constr_fixpoint__CastY_10 = (MR_Integer) transform_hlds__term_constr_fixpoint__HeadVar__2_2;

    transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__CastX_9 == transform_hlds__term_constr_fixpoint__CastY_10);
    if (transform_hlds__term_constr_fixpoint__succeeded)
      transform_hlds__term_constr_fixpoint__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__term_constr_fixpoint__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__term_constr_fixpoint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__term_constr_fixpoint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word transform_hlds__term_constr_fixpoint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__term_constr_fixpoint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__term_constr_fixpoint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 2)));

        {
          transform_hlds__term_constr_fixpoint__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_constr_fixpoint__V_3_3, transform_hlds__term_constr_fixpoint__V_6_6);
        }
        if (transform_hlds__term_constr_fixpoint__succeeded)
          {
            {
              transform_hlds__term_constr_fixpoint__succeeded = libs__polyhedron____Unify____polyhedron_0_0(transform_hlds__term_constr_fixpoint__V_4_4, transform_hlds__term_constr_fixpoint__V_7_7);
            }
            if (transform_hlds__term_constr_fixpoint__succeeded)
              transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__V_5_5 == transform_hlds__term_constr_fixpoint__V_8_8);
          }
      }
    return transform_hlds__term_constr_fixpoint__succeeded;
  }
}

void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____fixpoint_options_0_0(
  MR_Word * transform_hlds__term_constr_fixpoint__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
    MR_Integer transform_hlds__term_constr_fixpoint__CastX_9 = (MR_Integer) transform_hlds__term_constr_fixpoint__HeadVar__2_2;
    MR_Integer transform_hlds__term_constr_fixpoint__CastY_10 = (MR_Integer) transform_hlds__term_constr_fixpoint__HeadVar__3_3;

    transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__CastX_9 == transform_hlds__term_constr_fixpoint__CastY_10);
    if (transform_hlds__term_constr_fixpoint__succeeded)
      *transform_hlds__term_constr_fixpoint__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__term_constr_fixpoint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer transform_hlds__term_constr_fixpoint__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__term_constr_fixpoint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer transform_hlds__term_constr_fixpoint__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__term_constr_fixpoint__V_8_8;
        MR_Integer transform_hlds__term_constr_fixpoint__V_13_13 = (MR_Integer) transform_hlds__term_constr_fixpoint__V_4_4;
        MR_Integer transform_hlds__term_constr_fixpoint__V_14_14 = (MR_Integer) transform_hlds__term_constr_fixpoint__V_6_6;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_constr_fixpoint__V_8_8, transform_hlds__term_constr_fixpoint__V_13_13, transform_hlds__term_constr_fixpoint__V_14_14);
        }
        transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__V_8_8 == (MR_Integer) 0);
        transform_hlds__term_constr_fixpoint__succeeded = !(transform_hlds__term_constr_fixpoint__succeeded);
        if (transform_hlds__term_constr_fixpoint__succeeded)
          *transform_hlds__term_constr_fixpoint__HeadVar__1_1 = transform_hlds__term_constr_fixpoint__V_8_8;
        else
          {
            mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_constr_fixpoint__HeadVar__1_1, transform_hlds__term_constr_fixpoint__V_5_5, transform_hlds__term_constr_fixpoint__V_7_7);
          }
      }
  }
}

MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____fixpoint_options_0_0(
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
    MR_Integer transform_hlds__term_constr_fixpoint__CastX_7 = (MR_Integer) transform_hlds__term_constr_fixpoint__HeadVar__1_1;
    MR_Integer transform_hlds__term_constr_fixpoint__CastY_8 = (MR_Integer) transform_hlds__term_constr_fixpoint__HeadVar__2_2;

    transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__CastX_7 == transform_hlds__term_constr_fixpoint__CastY_8);
    if (transform_hlds__term_constr_fixpoint__succeeded)
      transform_hlds__term_constr_fixpoint__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__term_constr_fixpoint__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer transform_hlds__term_constr_fixpoint__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__term_constr_fixpoint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer transform_hlds__term_constr_fixpoint__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer transform_hlds__term_constr_fixpoint__V_10_10 = (MR_Integer) transform_hlds__term_constr_fixpoint__V_3_3;
        MR_Integer transform_hlds__term_constr_fixpoint__V_11_11 = (MR_Integer) transform_hlds__term_constr_fixpoint__V_5_5;

        transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__V_10_10 == transform_hlds__term_constr_fixpoint__V_11_11);
        if (transform_hlds__term_constr_fixpoint__succeeded)
          transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__V_4_4 == transform_hlds__term_constr_fixpoint__V_6_6);
      }
    return transform_hlds__term_constr_fixpoint__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____fixpoint_info_0_0(
  MR_Word * transform_hlds__term_constr_fixpoint__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2,
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
    MR_Integer transform_hlds__term_constr_fixpoint__CastX_21 = (MR_Integer) transform_hlds__term_constr_fixpoint__HeadVar__2_2;
    MR_Integer transform_hlds__term_constr_fixpoint__CastY_22 = (MR_Integer) transform_hlds__term_constr_fixpoint__HeadVar__3_3;

    transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__CastX_21 == transform_hlds__term_constr_fixpoint__CastY_22);
    if (transform_hlds__term_constr_fixpoint__succeeded)
      *transform_hlds__term_constr_fixpoint__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__term_constr_fixpoint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__term_constr_fixpoint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__term_constr_fixpoint__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer transform_hlds__term_constr_fixpoint__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word transform_hlds__term_constr_fixpoint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word transform_hlds__term_constr_fixpoint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word transform_hlds__term_constr_fixpoint__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__term_constr_fixpoint__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__term_constr_fixpoint__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__3_3, (MR_Integer) 2)));
        MR_Integer transform_hlds__term_constr_fixpoint__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word transform_hlds__term_constr_fixpoint__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word transform_hlds__term_constr_fixpoint__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word transform_hlds__term_constr_fixpoint__V_16_16;

        {
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__term_constr_fixpoint__V_16_16, transform_hlds__term_constr_fixpoint__V_4_4, transform_hlds__term_constr_fixpoint__V_10_10);
        }
        transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__V_16_16 == (MR_Integer) 0);
        transform_hlds__term_constr_fixpoint__succeeded = !(transform_hlds__term_constr_fixpoint__succeeded);
        if (transform_hlds__term_constr_fixpoint__succeeded)
          *transform_hlds__term_constr_fixpoint__HeadVar__1_1 = transform_hlds__term_constr_fixpoint__V_16_16;
        else
          {
            MR_Word transform_hlds__term_constr_fixpoint__V_17_17;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[2], &transform_hlds__term_constr_fixpoint__V_17_17, ((MR_Box) (transform_hlds__term_constr_fixpoint__V_5_5)), ((MR_Box) (transform_hlds__term_constr_fixpoint__V_11_11)));
            }
            transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__V_17_17 == (MR_Integer) 0);
            transform_hlds__term_constr_fixpoint__succeeded = !(transform_hlds__term_constr_fixpoint__succeeded);
            if (transform_hlds__term_constr_fixpoint__succeeded)
              *transform_hlds__term_constr_fixpoint__HeadVar__1_1 = transform_hlds__term_constr_fixpoint__V_17_17;
            else
              {
                MR_Word transform_hlds__term_constr_fixpoint__V_18_18;

                {
                  hlds__hlds_pred____Compare____pred_proc_id_0_0(&transform_hlds__term_constr_fixpoint__V_18_18, transform_hlds__term_constr_fixpoint__V_6_6, transform_hlds__term_constr_fixpoint__V_12_12);
                }
                transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__V_18_18 == (MR_Integer) 0);
                transform_hlds__term_constr_fixpoint__succeeded = !(transform_hlds__term_constr_fixpoint__succeeded);
                if (transform_hlds__term_constr_fixpoint__succeeded)
                  *transform_hlds__term_constr_fixpoint__HeadVar__1_1 = transform_hlds__term_constr_fixpoint__V_18_18;
                else
                  {
                    MR_Word transform_hlds__term_constr_fixpoint__V_19_19;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_constr_fixpoint__V_19_19, transform_hlds__term_constr_fixpoint__V_7_7, transform_hlds__term_constr_fixpoint__V_13_13);
                    }
                    transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__V_19_19 == (MR_Integer) 0);
                    transform_hlds__term_constr_fixpoint__succeeded = !(transform_hlds__term_constr_fixpoint__succeeded);
                    if (transform_hlds__term_constr_fixpoint__succeeded)
                      *transform_hlds__term_constr_fixpoint__HeadVar__1_1 = transform_hlds__term_constr_fixpoint__V_19_19;
                    else
                      {
                        MR_Word transform_hlds__term_constr_fixpoint__V_20_20;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[3], &transform_hlds__term_constr_fixpoint__V_20_20, ((MR_Box) (transform_hlds__term_constr_fixpoint__V_8_8)), ((MR_Box) (transform_hlds__term_constr_fixpoint__V_14_14)));
                        }
                        transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__V_20_20 == (MR_Integer) 0);
                        transform_hlds__term_constr_fixpoint__succeeded = !(transform_hlds__term_constr_fixpoint__succeeded);
                        if (transform_hlds__term_constr_fixpoint__succeeded)
                          *transform_hlds__term_constr_fixpoint__HeadVar__1_1 = transform_hlds__term_constr_fixpoint__V_20_20;
                        else
                          {
                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[4], transform_hlds__term_constr_fixpoint__HeadVar__1_1, ((MR_Box) (transform_hlds__term_constr_fixpoint__V_9_9)), ((MR_Box) (transform_hlds__term_constr_fixpoint__V_15_15)));
                            }
                          }
                      }
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____fixpoint_info_0_0(
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
    MR_Integer transform_hlds__term_constr_fixpoint__CastX_15 = (MR_Integer) transform_hlds__term_constr_fixpoint__HeadVar__1_1;
    MR_Integer transform_hlds__term_constr_fixpoint__CastY_16 = (MR_Integer) transform_hlds__term_constr_fixpoint__HeadVar__2_2;

    transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__CastX_15 == transform_hlds__term_constr_fixpoint__CastY_16);
    if (transform_hlds__term_constr_fixpoint__succeeded)
      transform_hlds__term_constr_fixpoint__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__term_constr_fixpoint__TypeInfo_18_18;
        MR_Word transform_hlds__term_constr_fixpoint__TypeInfo_20_20;
        MR_Word transform_hlds__term_constr_fixpoint__TypeInfo_21_21;
        MR_Word transform_hlds__term_constr_fixpoint__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__term_constr_fixpoint__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__term_constr_fixpoint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer transform_hlds__term_constr_fixpoint__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word transform_hlds__term_constr_fixpoint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word transform_hlds__term_constr_fixpoint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word transform_hlds__term_constr_fixpoint__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__term_constr_fixpoint__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__term_constr_fixpoint__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer transform_hlds__term_constr_fixpoint__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word transform_hlds__term_constr_fixpoint__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word transform_hlds__term_constr_fixpoint__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__2_2, (MR_Integer) 5)));

        {
          transform_hlds__term_constr_fixpoint__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__term_constr_fixpoint__V_3_3, transform_hlds__term_constr_fixpoint__V_9_9);
        }
        if (transform_hlds__term_constr_fixpoint__succeeded)
          {
            transform_hlds__term_constr_fixpoint__TypeInfo_18_18 = (MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[2];
            {
              transform_hlds__term_constr_fixpoint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_fixpoint__TypeInfo_18_18, ((MR_Box) (transform_hlds__term_constr_fixpoint__V_4_4)), ((MR_Box) (transform_hlds__term_constr_fixpoint__V_10_10)));
            }
            if (transform_hlds__term_constr_fixpoint__succeeded)
              {
                {
                  transform_hlds__term_constr_fixpoint__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(transform_hlds__term_constr_fixpoint__V_5_5, transform_hlds__term_constr_fixpoint__V_11_11);
                }
                if (transform_hlds__term_constr_fixpoint__succeeded)
                  {
                    transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__V_6_6 == transform_hlds__term_constr_fixpoint__V_12_12);
                    if (transform_hlds__term_constr_fixpoint__succeeded)
                      {
                        transform_hlds__term_constr_fixpoint__TypeInfo_20_20 = (MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[3];
                        {
                          transform_hlds__term_constr_fixpoint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_fixpoint__TypeInfo_20_20, ((MR_Box) (transform_hlds__term_constr_fixpoint__V_7_7)), ((MR_Box) (transform_hlds__term_constr_fixpoint__V_13_13)));
                        }
                        if (transform_hlds__term_constr_fixpoint__succeeded)
                          {
                            transform_hlds__term_constr_fixpoint__TypeInfo_21_21 = (MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[4];
                            {
                              transform_hlds__term_constr_fixpoint__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__term_constr_fixpoint__TypeInfo_21_21, ((MR_Box) (transform_hlds__term_constr_fixpoint__V_8_8)), ((MR_Box) (transform_hlds__term_constr_fixpoint__V_14_14)));
                            }
                          }
                      }
                  }
              }
          }
      }
    return transform_hlds__term_constr_fixpoint__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_1(
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg)
{
  {
    struct transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0_s * transform_hlds__term_constr_fixpoint__env_ptr = (struct transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0_s *) transform_hlds__term_constr_fixpoint__env_ptr_arg;

    MR_builtin_longjmp((transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_3(
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg)
{
  {
    struct transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0_s * transform_hlds__term_constr_fixpoint__env_ptr = (struct transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0_s *) transform_hlds__term_constr_fixpoint__env_ptr_arg;

    (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__OldConstraint_22 = ((MR_Word) (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__conv0_OldConstraint_22);
    {
      transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_2(transform_hlds__term_constr_fixpoint__env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_2(
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg)
{
  {
    struct transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0_s * transform_hlds__term_constr_fixpoint__env_ptr = (struct transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0_s *) transform_hlds__term_constr_fixpoint__env_ptr_arg;

    {
      (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__succeeded = libs__lp_rational__entailed_3_p_0((transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__SizeVarSet_9, (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__NewConstraints_19, (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__OldConstraint_22);
    }
    (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__succeeded = !((transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__succeeded);
    if ((transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__succeeded)
      {
        transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_1(transform_hlds__term_constr_fixpoint__env_ptr);
      }
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_4(
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg)
{
  {
    struct transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0_s * transform_hlds__term_constr_fixpoint__env_ptr = (struct transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0_s *) transform_hlds__term_constr_fixpoint__env_ptr_arg;

    if (MR_builtin_setjmp((transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0, &(transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__conv0_OldConstraint_22, (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__OldConstraints_20, transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_3, transform_hlds__term_constr_fixpoint__env_ptr);
          }
        }
        (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0(
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_fixpoint__SizeVarSet_9,
  MR_Integer transform_hlds__term_constr_fixpoint__Iteration_10,
  MR_Word transform_hlds__term_constr_fixpoint__OldPoly_11,
  MR_Word transform_hlds__term_constr_fixpoint__NewPoly_12,
  MR_Word * transform_hlds__term_constr_fixpoint__ResultPoly_13,
  MR_Word * transform_hlds__term_constr_fixpoint__ChangeFlag_14)
{
  {
    struct transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0_s transform_hlds__term_constr_fixpoint__env;

    (transform_hlds__term_constr_fixpoint__env).transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__SizeVarSet_9 = transform_hlds__term_constr_fixpoint__SizeVarSet_9;
    {
      MR_Integer transform_hlds__term_constr_fixpoint__Threshold_8 = (MR_Integer) transform_hlds__term_constr_fixpoint__HeadVar__1_1;

      (transform_hlds__term_constr_fixpoint__env).transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__succeeded = (transform_hlds__term_constr_fixpoint__Iteration_10 > transform_hlds__term_constr_fixpoint__Threshold_8);
      if ((transform_hlds__term_constr_fixpoint__env).transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__succeeded)
        {
          *transform_hlds__term_constr_fixpoint__ResultPoly_13 = libs__polyhedron__widen_3_f_0(transform_hlds__term_constr_fixpoint__OldPoly_11, transform_hlds__term_constr_fixpoint__NewPoly_12, (transform_hlds__term_constr_fixpoint__env).transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__SizeVarSet_9);
        }
      else
        *transform_hlds__term_constr_fixpoint__ResultPoly_13 = transform_hlds__term_constr_fixpoint__NewPoly_12;
      {
        (transform_hlds__term_constr_fixpoint__env).transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__NewConstraints_19 = libs__polyhedron__non_false_constraints_1_f_0(transform_hlds__term_constr_fixpoint__NewPoly_12);
      }
      {
        (transform_hlds__term_constr_fixpoint__env).transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__OldConstraints_20 = libs__polyhedron__non_false_constraints_1_f_0(transform_hlds__term_constr_fixpoint__OldPoly_11);
      }
      {
        transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_4(&transform_hlds__term_constr_fixpoint__env);
      }
      if ((transform_hlds__term_constr_fixpoint__env).transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__succeeded)
        *transform_hlds__term_constr_fixpoint__ChangeFlag_14 = (MR_Integer) 1;
      else
        *transform_hlds__term_constr_fixpoint__ChangeFlag_14 = (MR_Integer) 0;
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_pairwise_5_p_0_1(
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2;
    MR_Box transform_hlds__term_constr_fixpoint__closure = transform_hlds__term_constr_fixpoint__closure_arg;
    MR_Word transform_hlds__term_constr_fixpoint__conv0_LambdaHeadVar__2_25;

    {
      transform_hlds__term_constr_fixpoint__conv0_LambdaHeadVar__2_25 = transform_hlds__term_constr_fixpoint__IntroducedFrom__func__term_traverse_abstract_disj_pairwise__412__1_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_1));
    }
    transform_hlds__term_constr_fixpoint__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_fixpoint__conv0_LambdaHeadVar__2_25));
    return transform_hlds__term_constr_fixpoint__wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_pairwise_5_p_0(
  MR_Word transform_hlds__term_constr_fixpoint__Goals_6,
  MR_Word transform_hlds__term_constr_fixpoint__Locals_7,
  MR_Word transform_hlds__term_constr_fixpoint__Info_8,
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_22,
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_23)
{
  {
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
    MR_Word transform_hlds__term_constr_fixpoint__SizeVarSet_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_8, (MR_Integer) 1)));
    MR_Word transform_hlds__term_constr_fixpoint__PolyToLeft_11;
    MR_Word transform_hlds__term_constr_fixpoint__ToPoly_12;
    MR_Word transform_hlds__term_constr_fixpoint__Polyhedra0_16;
    MR_Word transform_hlds__term_constr_fixpoint__ConvexUnion_21;
    MR_Word transform_hlds__term_constr_fixpoint__V_31_31;
    MR_Word transform_hlds__term_constr_fixpoint__V_32_32;
    MR_Word transform_hlds__term_constr_fixpoint__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_8, (MR_Integer) 0)));
    MR_Word transform_hlds__term_constr_fixpoint__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_8, (MR_Integer) 2)));
    MR_Integer transform_hlds__term_constr_fixpoint__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_8, (MR_Integer) 3)));
    MR_Word transform_hlds__term_constr_fixpoint__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_8, (MR_Integer) 4)));
    MR_Word transform_hlds__term_constr_fixpoint__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_8, (MR_Integer) 5)));

    {
      transform_hlds__term_constr_fixpoint__PolyToLeft_11 = libs__polyhedron__universe_0_f_0();
    }
    {
      transform_hlds__term_constr_fixpoint__ToPoly_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__ToPoly_12, 0) = ((MR_Box) (&transform_hlds__term_constr_fixpoint_scalar_common_2[1]));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__ToPoly_12, 1) = ((MR_Box) (transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_pairwise_5_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__ToPoly_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__ToPoly_12, 3) = ((MR_Box) (transform_hlds__term_constr_fixpoint__Locals_7));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__ToPoly_12, 4) = ((MR_Box) (transform_hlds__term_constr_fixpoint__Info_8));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__ToPoly_12, 5) = ((MR_Box) (transform_hlds__term_constr_fixpoint__SizeVarSet_10));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__ToPoly_12, 6) = ((MR_Box) (transform_hlds__term_constr_fixpoint__PolyToLeft_11));
    }
    {
      transform_hlds__term_constr_fixpoint__Polyhedra0_16 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0, (MR_Word) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0, transform_hlds__term_constr_fixpoint__ToPoly_12, transform_hlds__term_constr_fixpoint__Goals_6);
    }
    {
      transform_hlds__term_constr_fixpoint__V_32_32 = libs__polyhedron__empty_0_f_0();
    }
    {
      transform_hlds__term_constr_fixpoint__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__V_31_31, 0) = ((MR_Box) (transform_hlds__term_constr_fixpoint__V_32_32));
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__V_31_31, 1) = ((MR_Box) (transform_hlds__term_constr_fixpoint__Polyhedra0_16));
    }
    {
      transform_hlds__term_constr_fixpoint__ConvexUnion_21 = transform_hlds__term_constr_fixpoint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_105_114_119_105_115_101_95_109_97_112_95_95_104_111_49_95_95_91_51_93_95_48_2_f_0(transform_hlds__term_constr_fixpoint__Info_8, transform_hlds__term_constr_fixpoint__SizeVarSet_10, transform_hlds__term_constr_fixpoint__V_31_31);
    }
    {
      libs__polyhedron__intersection_3_p_0(transform_hlds__term_constr_fixpoint__ConvexUnion_21, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_22, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_23);
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_linearly_2_5_p_0(
  MR_Word transform_hlds__term_constr_fixpoint__Info_6,
  MR_Word transform_hlds__term_constr_fixpoint__Locals_7,
  MR_Word transform_hlds__term_constr_fixpoint__Goal_8,
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_13,
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_14)
{
  {
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
    MR_Word transform_hlds__term_constr_fixpoint__SizeVarSet_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_6, (MR_Integer) 1)));
    MR_Word transform_hlds__term_constr_fixpoint__Polyhedron0_11;
    MR_Word transform_hlds__term_constr_fixpoint__Polyhedron1_12;
    MR_Word transform_hlds__term_constr_fixpoint__V_15_15;
    MR_Word transform_hlds__term_constr_fixpoint__V_16_16;
    MR_Integer transform_hlds__term_constr_fixpoint__V_18_18;
    MR_Word transform_hlds__term_constr_fixpoint__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_6, (MR_Integer) 0)));
    MR_Word transform_hlds__term_constr_fixpoint__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_6, (MR_Integer) 2)));
    MR_Integer transform_hlds__term_constr_fixpoint__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_6, (MR_Integer) 3)));
    MR_Word transform_hlds__term_constr_fixpoint__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_6, (MR_Integer) 4)));
    MR_Word transform_hlds__term_constr_fixpoint__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_6, (MR_Integer) 5)));
    MR_Word transform_hlds__term_constr_fixpoint__V_24_24;
    MR_Word transform_hlds__term_constr_fixpoint__V_25_25;
    MR_Word transform_hlds__term_constr_fixpoint__V_26_26;
    MR_Word transform_hlds__term_constr_fixpoint__V_27_27;
    MR_Word transform_hlds__term_constr_fixpoint__V_28_28;

    {
      transform_hlds__term_constr_fixpoint__V_15_15 = libs__polyhedron__universe_0_f_0();
    }
    {
      transform_hlds__term_constr_fixpoint__term_traverse_abstract_goal_4_p_0(transform_hlds__term_constr_fixpoint__Info_6, transform_hlds__term_constr_fixpoint__Goal_8, transform_hlds__term_constr_fixpoint__V_15_15, &transform_hlds__term_constr_fixpoint__Polyhedron0_11);
    }
    {
      transform_hlds__term_constr_fixpoint__Polyhedron1_12 = libs__polyhedron__project_3_f_0(transform_hlds__term_constr_fixpoint__Locals_7, transform_hlds__term_constr_fixpoint__SizeVarSet_10, transform_hlds__term_constr_fixpoint__Polyhedron0_11);
    }
    transform_hlds__term_constr_fixpoint__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_6, (MR_Integer) 0)));
    transform_hlds__term_constr_fixpoint__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_6, (MR_Integer) 1)));
    transform_hlds__term_constr_fixpoint__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_6, (MR_Integer) 2)));
    transform_hlds__term_constr_fixpoint__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_6, (MR_Integer) 3)));
    transform_hlds__term_constr_fixpoint__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_6, (MR_Integer) 4)));
    transform_hlds__term_constr_fixpoint__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_6, (MR_Integer) 5)));
    {
      transform_hlds__term_constr_fixpoint__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__V_16_16, 0) = ((MR_Box) (transform_hlds__term_constr_fixpoint__V_18_18));
    }
    {
      libs__polyhedron__convex_union_5_p_0(transform_hlds__term_constr_fixpoint__SizeVarSet_10, transform_hlds__term_constr_fixpoint__V_16_16, transform_hlds__term_constr_fixpoint__Polyhedron1_12, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_13, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_14);
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_linearly_5_p_0_1(
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__term_constr_fixpoint__closure = transform_hlds__term_constr_fixpoint__closure_arg;
    MR_Word transform_hlds__term_constr_fixpoint__conv0_STATE_VARIABLE_Polyhedron_14;

    {
      transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_linearly_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2), &transform_hlds__term_constr_fixpoint__conv0_STATE_VARIABLE_Polyhedron_14);
    }
    *transform_hlds__term_constr_fixpoint__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_fixpoint__conv0_STATE_VARIABLE_Polyhedron_14));
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_linearly_5_p_0(
  MR_Word transform_hlds__term_constr_fixpoint__Goals_6,
  MR_Word transform_hlds__term_constr_fixpoint__Locals_7,
  MR_Word transform_hlds__term_constr_fixpoint__Info_8,
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_11,
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_12)
{
  {
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
    MR_Word transform_hlds__term_constr_fixpoint__ConvexUnion_10;
    MR_Word transform_hlds__term_constr_fixpoint__V_13_13;
    MR_Word transform_hlds__term_constr_fixpoint__V_14_14;
    MR_Box transform_hlds__term_constr_fixpoint__conv1_ConvexUnion_10;

    {
      transform_hlds__term_constr_fixpoint__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_13_13, 0) = ((MR_Box) (&transform_hlds__term_constr_fixpoint_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_13_13, 1) = ((MR_Box) (transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_linearly_5_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_13_13, 3) = ((MR_Box) (transform_hlds__term_constr_fixpoint__Info_8));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_13_13, 4) = ((MR_Box) (transform_hlds__term_constr_fixpoint__Locals_7));
    }
    {
      transform_hlds__term_constr_fixpoint__V_14_14 = libs__polyhedron__empty_0_f_0();
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0, (MR_Word) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0, transform_hlds__term_constr_fixpoint__V_13_13, transform_hlds__term_constr_fixpoint__Goals_6, ((MR_Box) (transform_hlds__term_constr_fixpoint__V_14_14)), &transform_hlds__term_constr_fixpoint__conv1_ConvexUnion_10);
    }
    transform_hlds__term_constr_fixpoint__ConvexUnion_10 = ((MR_Word) transform_hlds__term_constr_fixpoint__conv1_ConvexUnion_10);
    {
      libs__polyhedron__intersection_3_p_0(transform_hlds__term_constr_fixpoint__ConvexUnion_10, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_11, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_12);
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__post_process_abstract_goal_5_p_0(
  MR_Word transform_hlds__term_constr_fixpoint__Locals_6,
  MR_Word transform_hlds__term_constr_fixpoint__Info_7,
  MR_Word transform_hlds__term_constr_fixpoint__GoalPolyhedron0_8,
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_11,
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_12)
{
  {
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
    MR_Word transform_hlds__term_constr_fixpoint__GoalPolyhedron_10;

    {
      transform_hlds__term_constr_fixpoint__succeeded = libs__polyhedron__is_empty_1_p_0(transform_hlds__term_constr_fixpoint__GoalPolyhedron0_8);
    }
    if (transform_hlds__term_constr_fixpoint__succeeded)
      {
        transform_hlds__term_constr_fixpoint__GoalPolyhedron_10 = libs__polyhedron__empty_0_f_0();
      }
    else
      {
        MR_Word transform_hlds__term_constr_fixpoint__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_7, (MR_Integer) 1)));
        MR_Word transform_hlds__term_constr_fixpoint__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_7, (MR_Integer) 0)));
        MR_Word transform_hlds__term_constr_fixpoint__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_7, (MR_Integer) 2)));
        MR_Integer transform_hlds__term_constr_fixpoint__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_7, (MR_Integer) 3)));
        MR_Word transform_hlds__term_constr_fixpoint__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_7, (MR_Integer) 4)));
        MR_Word transform_hlds__term_constr_fixpoint__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_7, (MR_Integer) 5)));

        {
          transform_hlds__term_constr_fixpoint__GoalPolyhedron_10 = libs__polyhedron__project_3_f_0(transform_hlds__term_constr_fixpoint__Locals_6, transform_hlds__term_constr_fixpoint__V_13_13, transform_hlds__term_constr_fixpoint__GoalPolyhedron0_8);
        }
      }
    {
      libs__polyhedron__intersection_3_p_0(transform_hlds__term_constr_fixpoint__GoalPolyhedron_10, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_11, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_12);
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_goal_4_p_0_1(
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__term_constr_fixpoint__closure = transform_hlds__term_constr_fixpoint__closure_arg;
    MR_Word transform_hlds__term_constr_fixpoint__conv0_STATE_VARIABLE_Polyhedron_34;

    {
      transform_hlds__term_constr_fixpoint__term_traverse_abstract_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2), &transform_hlds__term_constr_fixpoint__conv0_STATE_VARIABLE_Polyhedron_34);
    }
    *transform_hlds__term_constr_fixpoint__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_fixpoint__conv0_STATE_VARIABLE_Polyhedron_34));
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_goal_4_p_0(
  MR_Word transform_hlds__term_constr_fixpoint__Info_5,
  MR_Word transform_hlds__term_constr_fixpoint__Goal_6,
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_33,
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_34)
{
  {
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;

    switch (MR_tag((MR_Word) transform_hlds__term_constr_fixpoint__Goal_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__term_constr_fixpoint__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 0)));
          MR_Word transform_hlds__term_constr_fixpoint__Locals_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 2)));
          MR_Word transform_hlds__term_constr_fixpoint__PriorConstraints_12;
          MR_Word transform_hlds__term_constr_fixpoint__Polyhedron0_13;
          MR_Integer transform_hlds__term_constr_fixpoint___Size_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 1)));
          MR_Word transform_hlds__term_constr_fixpoint__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 3)));

          {
            transform_hlds__term_constr_fixpoint__PriorConstraints_12 = libs__polyhedron__universe_0_f_0();
          }
          {
            transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_linearly_5_p_0(transform_hlds__term_constr_fixpoint__Goals_8, transform_hlds__term_constr_fixpoint__Locals_10, transform_hlds__term_constr_fixpoint__Info_5, transform_hlds__term_constr_fixpoint__PriorConstraints_12, &transform_hlds__term_constr_fixpoint__Polyhedron0_13);
          }
          {
            transform_hlds__term_constr_fixpoint__post_process_abstract_goal_5_p_0(transform_hlds__term_constr_fixpoint__Locals_10, transform_hlds__term_constr_fixpoint__Info_5, transform_hlds__term_constr_fixpoint__Polyhedron0_13, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_33, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_34);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__term_constr_fixpoint__V_40_40;
          MR_Word transform_hlds__term_constr_fixpoint__V_41_41;
          MR_Word transform_hlds__term_constr_fixpoint__Goals_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 0)));
          MR_Word transform_hlds__term_constr_fixpoint__Locals_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 1)));
          MR_Word transform_hlds__term_constr_fixpoint__Polyhedron0_46;
          MR_Word transform_hlds__term_constr_fixpoint__GoalPolyhedron_85;
          MR_Word transform_hlds__term_constr_fixpoint__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 2)));
          MR_Box transform_hlds__term_constr_fixpoint__conv1_Polyhedron0_46;

          {
            transform_hlds__term_constr_fixpoint__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_40_40, 0) = ((MR_Box) (&transform_hlds__term_constr_fixpoint_scalar_common_7[0]));
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_40_40, 1) = ((MR_Box) (transform_hlds__term_constr_fixpoint__term_traverse_abstract_goal_4_p_0_1));
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_40_40, 3) = ((MR_Box) (transform_hlds__term_constr_fixpoint__Info_5));
          }
          {
            transform_hlds__term_constr_fixpoint__V_41_41 = libs__polyhedron__universe_0_f_0();
          }
          {
            mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0, (MR_Word) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0, transform_hlds__term_constr_fixpoint__V_40_40, transform_hlds__term_constr_fixpoint__Goals_44, ((MR_Box) (transform_hlds__term_constr_fixpoint__V_41_41)), &transform_hlds__term_constr_fixpoint__conv1_Polyhedron0_46);
          }
          transform_hlds__term_constr_fixpoint__Polyhedron0_46 = ((MR_Word) transform_hlds__term_constr_fixpoint__conv1_Polyhedron0_46);
          {
            transform_hlds__term_constr_fixpoint__succeeded = libs__polyhedron__is_empty_1_p_0(transform_hlds__term_constr_fixpoint__Polyhedron0_46);
          }
          if (transform_hlds__term_constr_fixpoint__succeeded)
            {
              transform_hlds__term_constr_fixpoint__GoalPolyhedron_85 = libs__polyhedron__empty_0_f_0();
            }
          else
            {
              MR_Word transform_hlds__term_constr_fixpoint__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 1)));
              MR_Word transform_hlds__term_constr_fixpoint__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 0)));
              MR_Word transform_hlds__term_constr_fixpoint__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 2)));
              MR_Integer transform_hlds__term_constr_fixpoint__V_90_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 3)));
              MR_Word transform_hlds__term_constr_fixpoint__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 4)));
              MR_Word transform_hlds__term_constr_fixpoint__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 5)));

              {
                transform_hlds__term_constr_fixpoint__GoalPolyhedron_85 = libs__polyhedron__project_3_f_0(transform_hlds__term_constr_fixpoint__Locals_45, transform_hlds__term_constr_fixpoint__V_86_86, transform_hlds__term_constr_fixpoint__Polyhedron0_46);
              }
            }
          {
            libs__polyhedron__intersection_3_p_0(transform_hlds__term_constr_fixpoint__GoalPolyhedron_85, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_33, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_34);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__term_constr_fixpoint__CallPPId0_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 0)));
          MR_Word transform_hlds__term_constr_fixpoint__CallVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 2)));
          MR_Word transform_hlds__term_constr_fixpoint__CallZeros_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 3)));
          MR_Word transform_hlds__term_constr_fixpoint__CallArgsPoly_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 6)));
          MR_Word transform_hlds__term_constr_fixpoint__CallPPId_21 = (MR_Word) transform_hlds__term_constr_fixpoint__CallPPId0_15;
          MR_Word transform_hlds__term_constr_fixpoint__CallProcInfo_23;
          MR_Word transform_hlds__term_constr_fixpoint__CallTerm2Info_24;
          MR_Word transform_hlds__term_constr_fixpoint__CallArgSizeInfo_25;
          MR_Word transform_hlds__term_constr_fixpoint__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 0)));
          MR_Word transform_hlds__term_constr_fixpoint__Locals_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 4)));
          MR_Word transform_hlds__term_constr_fixpoint__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 1)));
          MR_Word transform_hlds__term_constr_fixpoint__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 5)));
          MR_Word transform_hlds__term_constr_fixpoint__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 1)));
          MR_Word transform_hlds__term_constr_fixpoint__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 2)));
          MR_Integer transform_hlds__term_constr_fixpoint__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 3)));
          MR_Word transform_hlds__term_constr_fixpoint__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 4)));
          MR_Word transform_hlds__term_constr_fixpoint__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 5)));
          MR_Word transform_hlds__term_constr_fixpoint__V_22_22;

          {
            hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_constr_fixpoint__V_36_36, transform_hlds__term_constr_fixpoint__CallPPId_21, &transform_hlds__term_constr_fixpoint__V_22_22, &transform_hlds__term_constr_fixpoint__CallProcInfo_23);
          }
          {
            hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_fixpoint__CallProcInfo_23, &transform_hlds__term_constr_fixpoint__CallTerm2Info_24);
          }
          {
            transform_hlds__term_constr_fixpoint__CallArgSizeInfo_25 = transform_hlds__term_constr_main_types__term2_info_get_success_constrs_1_f_0(transform_hlds__term_constr_fixpoint__CallTerm2Info_24);
          }
          if ((transform_hlds__term_constr_fixpoint__CallArgSizeInfo_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              *transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_34 = libs__polyhedron__empty_0_f_0();
            }
          else
            {
              MR_Word transform_hlds__term_constr_fixpoint__SizeInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__CallArgSizeInfo_25, (MR_Integer) 0)));

              {
                transform_hlds__term_constr_fixpoint__succeeded = libs__polyhedron__is_empty_1_p_0(transform_hlds__term_constr_fixpoint__SizeInfo_26);
              }
              if (transform_hlds__term_constr_fixpoint__succeeded)
                {
                  *transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_34 = libs__polyhedron__empty_0_f_0();
                }
              else
                {
                  {
                    transform_hlds__term_constr_fixpoint__succeeded = libs__polyhedron__is_universe_1_p_0(transform_hlds__term_constr_fixpoint__SizeInfo_26);
                  }
                  if (transform_hlds__term_constr_fixpoint__succeeded)
                    *transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_34 = transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_33;
                  else
                    {
                      MR_Word transform_hlds__term_constr_fixpoint__HeadVars_27;
                      MR_Word transform_hlds__term_constr_fixpoint__SubstMap_28;
                      MR_Word transform_hlds__term_constr_fixpoint__Polyhedron1_29;
                      MR_Word transform_hlds__term_constr_fixpoint__Polyhedron2_30;
                      MR_Word transform_hlds__term_constr_fixpoint__Polyhedron0_47;
                      MR_Word transform_hlds__term_constr_fixpoint__GoalPolyhedron_71;

                      {
                        transform_hlds__term_constr_fixpoint__HeadVars_27 = transform_hlds__term_constr_main_types__term2_info_get_head_vars_1_f_0(transform_hlds__term_constr_fixpoint__CallTerm2Info_24);
                      }
                      {
                        transform_hlds__term_constr_fixpoint__SubstMap_28 = transform_hlds__term_constr_util__create_var_substitution_2_f_0(transform_hlds__term_constr_fixpoint__CallVars_17, transform_hlds__term_constr_fixpoint__HeadVars_27);
                      }
                      {
                        transform_hlds__term_constr_fixpoint__Polyhedron0_47 = libs__polyhedron__substitute_vars_2_f_0(transform_hlds__term_constr_fixpoint__SubstMap_28, transform_hlds__term_constr_fixpoint__SizeInfo_26);
                      }
                      {
                        transform_hlds__term_constr_fixpoint__Polyhedron1_29 = libs__polyhedron__intersection_2_f_0(transform_hlds__term_constr_fixpoint__Polyhedron0_47, transform_hlds__term_constr_fixpoint__CallArgsPoly_20);
                      }
                      {
                        transform_hlds__term_constr_fixpoint__Polyhedron2_30 = libs__polyhedron__zero_vars_2_f_0(transform_hlds__term_constr_fixpoint__CallZeros_18, transform_hlds__term_constr_fixpoint__Polyhedron1_29);
                      }
                      {
                        transform_hlds__term_constr_fixpoint__succeeded = libs__polyhedron__is_empty_1_p_0(transform_hlds__term_constr_fixpoint__Polyhedron2_30);
                      }
                      if (transform_hlds__term_constr_fixpoint__succeeded)
                        {
                          transform_hlds__term_constr_fixpoint__GoalPolyhedron_71 = libs__polyhedron__empty_0_f_0();
                        }
                      else
                        {
                          MR_Word transform_hlds__term_constr_fixpoint__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 1)));
                          MR_Word transform_hlds__term_constr_fixpoint__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 0)));
                          MR_Word transform_hlds__term_constr_fixpoint__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 2)));
                          MR_Integer transform_hlds__term_constr_fixpoint__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 3)));
                          MR_Word transform_hlds__term_constr_fixpoint__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 4)));
                          MR_Word transform_hlds__term_constr_fixpoint__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_5, (MR_Integer) 5)));

                          {
                            transform_hlds__term_constr_fixpoint__GoalPolyhedron_71 = libs__polyhedron__project_3_f_0(transform_hlds__term_constr_fixpoint__Locals_52, transform_hlds__term_constr_fixpoint__V_72_72, transform_hlds__term_constr_fixpoint__Polyhedron2_30);
                          }
                        }
                      {
                        libs__polyhedron__intersection_3_p_0(transform_hlds__term_constr_fixpoint__GoalPolyhedron_71, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_33, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_34);
                      }
                    }
                }
            }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word transform_hlds__term_constr_fixpoint__Poly_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 0)));
          MR_Word transform_hlds__term_constr_fixpoint__Locals_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 1)));
          MR_Word transform_hlds__term_constr_fixpoint__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_fixpoint__Goal_6, (MR_Integer) 2)));

          {
            transform_hlds__term_constr_fixpoint__post_process_abstract_goal_5_p_0(transform_hlds__term_constr_fixpoint__Locals_54, transform_hlds__term_constr_fixpoint__Info_5, transform_hlds__term_constr_fixpoint__Poly_31, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_0_33, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_34);
          }
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_fixpoint__init_fixpoint_info_6_f_0(
  MR_Word transform_hlds__term_constr_fixpoint__ModuleInfo_8,
  MR_Word transform_hlds__term_constr_fixpoint__SizeVarSet_9,
  MR_Word transform_hlds__term_constr_fixpoint__PPId_10,
  MR_Integer transform_hlds__term_constr_fixpoint__MaxMatrixSize_11,
  MR_Word transform_hlds__term_constr_fixpoint__HeadVars_12,
  MR_Word transform_hlds__term_constr_fixpoint__Zeros_13)
{
  {
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
    MR_Word transform_hlds__term_constr_fixpoint__HeadVar__7_7;

    {
      transform_hlds__term_constr_fixpoint__HeadVar__7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__7_7, 0) = ((MR_Box) (transform_hlds__term_constr_fixpoint__ModuleInfo_8));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__7_7, 1) = ((MR_Box) (transform_hlds__term_constr_fixpoint__SizeVarSet_9));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__7_7, 2) = ((MR_Box) (transform_hlds__term_constr_fixpoint__PPId_10));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__7_7, 3) = ((MR_Box) (transform_hlds__term_constr_fixpoint__MaxMatrixSize_11));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__7_7, 4) = ((MR_Box) (transform_hlds__term_constr_fixpoint__HeadVars_12));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__7_7, 5) = ((MR_Box) (transform_hlds__term_constr_fixpoint__Zeros_13));
    }
    return transform_hlds__term_constr_fixpoint__HeadVar__7_7;
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_iterate_over_abstract_proc_6_p_0(
  MR_Integer transform_hlds__term_constr_fixpoint__Iteration_7,
  MR_Word transform_hlds__term_constr_fixpoint__Options_8,
  MR_Word transform_hlds__term_constr_fixpoint__ModuleInfo_9,
  MR_Word transform_hlds__term_constr_fixpoint__Proc_10,
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_IterationInfo_0_34,
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_IterationInfo_35)
{
  {
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
    MR_Word transform_hlds__term_constr_fixpoint__TypeInfo_136_136;
    MR_Word transform_hlds__term_constr_fixpoint__WideningInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Options_8, (MR_Integer) 0)));
    MR_Integer transform_hlds__term_constr_fixpoint__MaxMatrixSize_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Options_8, (MR_Integer) 1)));
    MR_Word transform_hlds__term_constr_fixpoint__AbstractPPId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 0)));
    MR_Word transform_hlds__term_constr_fixpoint__PPId_15 = (MR_Word) transform_hlds__term_constr_fixpoint__AbstractPPId_14;
    MR_Word transform_hlds__term_constr_fixpoint__SizeVarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 7)));
    MR_Word transform_hlds__term_constr_fixpoint__Zeros_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 8)));
    MR_Word transform_hlds__term_constr_fixpoint__HeadVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 3)));
    MR_Word transform_hlds__term_constr_fixpoint__Globals_19;
    MR_Word transform_hlds__term_constr_fixpoint__DebugTerm_20;
    MR_Word transform_hlds__term_constr_fixpoint__Info_22;
    MR_Word transform_hlds__term_constr_fixpoint__BugConstrs0_24;
    MR_Word transform_hlds__term_constr_fixpoint__ConstrVarsSet_25;
    MR_Word transform_hlds__term_constr_fixpoint__HeadVarSet_26;
    MR_Word transform_hlds__term_constr_fixpoint__BadVarsSet_27;
    MR_Word transform_hlds__term_constr_fixpoint__BadVars_28;
    MR_Word transform_hlds__term_constr_fixpoint__ArgSizeInfo_29;
    MR_Word transform_hlds__term_constr_fixpoint__OldPolyhedron_30;
    MR_Word transform_hlds__term_constr_fixpoint__ChangeFlag_32;
    MR_Word transform_hlds__term_constr_fixpoint__ThisIterationInfo_33;
    MR_Word transform_hlds__term_constr_fixpoint__V_51_51;
    MR_Word transform_hlds__term_constr_fixpoint__V_52_52;
    MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_53_53;
    MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_54_54;
    MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_55_55;
    MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_56_56;
    MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_65_65;
    MR_Word transform_hlds__term_constr_fixpoint__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 1)));
    MR_Word transform_hlds__term_constr_fixpoint__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 2)));
    MR_Word transform_hlds__term_constr_fixpoint__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 4)));
    MR_Word transform_hlds__term_constr_fixpoint__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 5)));
    MR_Word transform_hlds__term_constr_fixpoint__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 6)));
    MR_Word transform_hlds__term_constr_fixpoint__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 9)));
    MR_Integer transform_hlds__term_constr_fixpoint__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 10)));
    MR_Word transform_hlds__term_constr_fixpoint__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 11)));
    MR_Word transform_hlds__term_constr_fixpoint__V_113_113;
    MR_Word transform_hlds__term_constr_fixpoint__V_114_114;
    MR_Word transform_hlds__term_constr_fixpoint__V_115_115;
    MR_Word transform_hlds__term_constr_fixpoint__V_116_116;
    MR_Word transform_hlds__term_constr_fixpoint__V_117_117;
    MR_Word transform_hlds__term_constr_fixpoint__V_118_118;
    MR_Word transform_hlds__term_constr_fixpoint__V_119_119;
    MR_Word transform_hlds__term_constr_fixpoint__V_120_120;
    MR_Word transform_hlds__term_constr_fixpoint__V_121_121;
    MR_Integer transform_hlds__term_constr_fixpoint__V_122_122;
    MR_Word transform_hlds__term_constr_fixpoint__V_123_123;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__term_constr_fixpoint__ModuleInfo_9, &transform_hlds__term_constr_fixpoint__Globals_19);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__term_constr_fixpoint__Globals_19, (MR_Integer) 71, &transform_hlds__term_constr_fixpoint__DebugTerm_20);
    }
    switch (transform_hlds__term_constr_fixpoint__DebugTerm_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String transform_hlds__term_constr_fixpoint__V_140_140;

          {
            mercury__io__write_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__term_constr_fixpoint__PPId_15)));
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ": ");
          }
          {
            hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(transform_hlds__term_constr_fixpoint__ModuleInfo_9, transform_hlds__term_constr_fixpoint__PPId_15);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " ");
          }
          {
            transform_hlds__term_constr_util__write_size_vars_4_p_0(transform_hlds__term_constr_fixpoint__SizeVarSet_16, transform_hlds__term_constr_fixpoint__HeadVars_18);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "\nIteration ");
          }
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_6[0], transform_hlds__term_constr_fixpoint__Iteration_7, &transform_hlds__term_constr_fixpoint__V_140_140);
          }
          {
            mercury__io__write_string_3_p_0(transform_hlds__term_constr_fixpoint__V_140_140);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ":\n");
          }
          {
            mercury__io__flush_output_2_p_0();
          }
        }
        break;
    }
    {
      transform_hlds__term_constr_fixpoint__Info_22 = transform_hlds__term_constr_fixpoint__init_fixpoint_info_6_f_0(transform_hlds__term_constr_fixpoint__ModuleInfo_9, transform_hlds__term_constr_fixpoint__SizeVarSet_16, transform_hlds__term_constr_fixpoint__PPId_15, transform_hlds__term_constr_fixpoint__MaxMatrixSize_13, transform_hlds__term_constr_fixpoint__HeadVars_18, transform_hlds__term_constr_fixpoint__Zeros_17);
    }
    transform_hlds__term_constr_fixpoint__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 0)));
    transform_hlds__term_constr_fixpoint__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 1)));
    transform_hlds__term_constr_fixpoint__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 2)));
    transform_hlds__term_constr_fixpoint__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 3)));
    transform_hlds__term_constr_fixpoint__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 4)));
    transform_hlds__term_constr_fixpoint__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 5)));
    transform_hlds__term_constr_fixpoint__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 6)));
    transform_hlds__term_constr_fixpoint__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 7)));
    transform_hlds__term_constr_fixpoint__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 8)));
    transform_hlds__term_constr_fixpoint__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 9)));
    transform_hlds__term_constr_fixpoint__V_122_122 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 10)));
    transform_hlds__term_constr_fixpoint__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 11)));
    {
      transform_hlds__term_constr_fixpoint__V_52_52 = libs__polyhedron__universe_0_f_0();
    }
    {
      transform_hlds__term_constr_fixpoint__term_traverse_abstract_goal_4_p_0(transform_hlds__term_constr_fixpoint__Info_22, transform_hlds__term_constr_fixpoint__V_51_51, transform_hlds__term_constr_fixpoint__V_52_52, &transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_53_53);
    }
    {
      libs__polyhedron__optimize_3_p_0(transform_hlds__term_constr_fixpoint__SizeVarSet_16, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_53_53, &transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_54_54);
    }
    {
      transform_hlds__term_constr_fixpoint__BugConstrs0_24 = libs__polyhedron__constraints_1_f_0(transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_54_54);
    }
    {
      transform_hlds__term_constr_fixpoint__ConstrVarsSet_25 = libs__lp_rational__get_vars_from_constraints_1_f_0(transform_hlds__term_constr_fixpoint__BugConstrs0_24);
    }
    transform_hlds__term_constr_fixpoint__TypeInfo_136_136 = (MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[1];
    {
      transform_hlds__term_constr_fixpoint__HeadVarSet_26 = mercury__set__from_list_1_f_0(transform_hlds__term_constr_fixpoint__TypeInfo_136_136, transform_hlds__term_constr_fixpoint__HeadVars_18);
    }
    {
      transform_hlds__term_constr_fixpoint__BadVarsSet_27 = mercury__set__difference_2_f_0(transform_hlds__term_constr_fixpoint__TypeInfo_136_136, transform_hlds__term_constr_fixpoint__ConstrVarsSet_25, transform_hlds__term_constr_fixpoint__HeadVarSet_26);
    }
    {
      transform_hlds__term_constr_fixpoint__BadVars_28 = mercury__set__to_sorted_list_1_f_0(transform_hlds__term_constr_fixpoint__TypeInfo_136_136, transform_hlds__term_constr_fixpoint__BadVarsSet_27);
    }
    {
      transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_55_55 = libs__polyhedron__project_3_f_0(transform_hlds__term_constr_fixpoint__BadVars_28, transform_hlds__term_constr_fixpoint__SizeVarSet_16, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_54_54);
    }
    {
      libs__polyhedron__optimize_3_p_0(transform_hlds__term_constr_fixpoint__SizeVarSet_16, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_55_55, &transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_56_56);
    }
    switch (transform_hlds__term_constr_fixpoint__DebugTerm_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            libs__polyhedron__write_polyhedron_4_p_0(transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_56_56, transform_hlds__term_constr_fixpoint__SizeVarSet_16);
          }
          {
            mercury__io__nl_2_p_0();
          }
          {
            mercury__io__flush_output_2_p_0();
          }
        }
        break;
    }
    {
      transform_hlds__term_constr_fixpoint__ArgSizeInfo_29 = transform_hlds__term_constr_util__lookup_proc_constr_arg_size_info_2_f_0(transform_hlds__term_constr_fixpoint__ModuleInfo_9, transform_hlds__term_constr_fixpoint__PPId_15);
    }
    if ((transform_hlds__term_constr_fixpoint__ArgSizeInfo_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        transform_hlds__term_constr_fixpoint__OldPolyhedron_30 = libs__polyhedron__empty_0_f_0();
      }
    else
      transform_hlds__term_constr_fixpoint__OldPolyhedron_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__ArgSizeInfo_29, (MR_Integer) 0)));
    {
      transform_hlds__term_constr_fixpoint__succeeded = libs__polyhedron__is_empty_1_p_0(transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_56_56);
    }
    if (transform_hlds__term_constr_fixpoint__succeeded)
      {
        {
          transform_hlds__term_constr_fixpoint__succeeded = libs__polyhedron__is_empty_1_p_0(transform_hlds__term_constr_fixpoint__OldPolyhedron_30);
        }
        if (transform_hlds__term_constr_fixpoint__succeeded)
          transform_hlds__term_constr_fixpoint__ChangeFlag_32 = (MR_Integer) 0;
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_fixpoint", (MR_String) "predicate \140transform_hlds.term_constr_fixpoint.term_iterate_over_abstract_proc\'/6", (MR_String) "old polyhedron is empty");
              return;
            }
          }
        transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_65_65 = transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_56_56;
      }
    else
      {
        MR_Word transform_hlds__term_constr_fixpoint__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 9)));
        MR_Word transform_hlds__term_constr_fixpoint__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 0)));
        MR_Word transform_hlds__term_constr_fixpoint__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 1)));
        MR_Word transform_hlds__term_constr_fixpoint__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 2)));
        MR_Word transform_hlds__term_constr_fixpoint__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 3)));
        MR_Word transform_hlds__term_constr_fixpoint__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 4)));
        MR_Word transform_hlds__term_constr_fixpoint__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 5)));
        MR_Word transform_hlds__term_constr_fixpoint__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 6)));
        MR_Word transform_hlds__term_constr_fixpoint__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 7)));
        MR_Word transform_hlds__term_constr_fixpoint__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 8)));
        MR_Integer transform_hlds__term_constr_fixpoint__V_133_133 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 10)));
        MR_Word transform_hlds__term_constr_fixpoint__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Proc_10, (MR_Integer) 11)));

        transform_hlds__term_constr_fixpoint__succeeded = (transform_hlds__term_constr_fixpoint__V_64_64 == (MR_Integer) 0);
        if (transform_hlds__term_constr_fixpoint__succeeded)
          {
            transform_hlds__term_constr_fixpoint__ChangeFlag_32 = (MR_Integer) 0;
            transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_65_65 = transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_56_56;
          }
        else
          {
            {
              transform_hlds__term_constr_fixpoint__succeeded = libs__polyhedron__is_empty_1_p_0(transform_hlds__term_constr_fixpoint__OldPolyhedron_30);
            }
            if (transform_hlds__term_constr_fixpoint__succeeded)
              {
                transform_hlds__term_constr_fixpoint__ChangeFlag_32 = (MR_Integer) 1;
                transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_65_65 = transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_56_56;
              }
            else
              {
                transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0(transform_hlds__term_constr_fixpoint__WideningInfo_12, transform_hlds__term_constr_fixpoint__SizeVarSet_16, transform_hlds__term_constr_fixpoint__Iteration_7, transform_hlds__term_constr_fixpoint__OldPolyhedron_30, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_56_56, &transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_65_65, &transform_hlds__term_constr_fixpoint__ChangeFlag_32);
              }
          }
      }
    {
      transform_hlds__term_constr_fixpoint__ThisIterationInfo_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__ThisIterationInfo_33, 0) = ((MR_Box) (transform_hlds__term_constr_fixpoint__PPId_15));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__ThisIterationInfo_33, 1) = ((MR_Box) (transform_hlds__term_constr_fixpoint__STATE_VARIABLE_Polyhedron_65_65));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__ThisIterationInfo_33, 2) = ((MR_Box) (transform_hlds__term_constr_fixpoint__ChangeFlag_32));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *transform_hlds__term_constr_fixpoint__STATE_VARIABLE_IterationInfo_35 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_constr_fixpoint__ThisIterationInfo_33));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_constr_fixpoint__STATE_VARIABLE_IterationInfo_0_34));
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__update_size_info_3_p_0(
  MR_Word transform_hlds__term_constr_fixpoint__Info_4,
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_10)
{
  {
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
    MR_Word transform_hlds__term_constr_fixpoint__PPId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_4, (MR_Integer) 0)));
    MR_Word transform_hlds__term_constr_fixpoint__Poly_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_4, (MR_Integer) 1)));
    MR_Word transform_hlds__term_constr_fixpoint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_4, (MR_Integer) 2)));

    {
      transform_hlds__term_constr_util__update_arg_size_info_4_p_0(transform_hlds__term_constr_fixpoint__PPId_6, transform_hlds__term_constr_fixpoint__Poly_7, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_0_9, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_10);
    }
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_fixpoint__or_flags_1_f_0(
  MR_Word transform_hlds__term_constr_fixpoint__HeadVar__1_1)
{
  {
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
    MR_Word transform_hlds__term_constr_fixpoint__HeadVar__2_2;

    if ((transform_hlds__term_constr_fixpoint__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      transform_hlds__term_constr_fixpoint__HeadVar__2_2 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__term_constr_fixpoint__Info_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__term_constr_fixpoint__Infos_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_fixpoint__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__term_constr_fixpoint__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_3, (MR_Integer) 2)));
        MR_Word transform_hlds__term_constr_fixpoint__V_6_6;
        MR_Word transform_hlds__term_constr_fixpoint__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_3, (MR_Integer) 0)));
        MR_Word transform_hlds__term_constr_fixpoint__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__Info_3, (MR_Integer) 1)));

        {
          transform_hlds__term_constr_fixpoint__V_6_6 = transform_hlds__term_constr_fixpoint__or_flags_1_f_0(transform_hlds__term_constr_fixpoint__Infos_4);
        }
        {
          transform_hlds__term_constr_fixpoint__HeadVar__2_2 = mercury__bool__or_2_f_0(transform_hlds__term_constr_fixpoint__V_5_5, transform_hlds__term_constr_fixpoint__V_6_6);
        }
      }
    return transform_hlds__term_constr_fixpoint__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
transform_hlds__term_constr_fixpoint__fixpoint_options_init_2_f_0(
  MR_Word transform_hlds__term_constr_fixpoint__Widening_4,
  MR_Integer transform_hlds__term_constr_fixpoint__MaxMatrixSize_5)
{
  {
    MR_bool transform_hlds__term_constr_fixpoint__succeeded;
    MR_Word transform_hlds__term_constr_fixpoint__HeadVar__3_3;

    {
      transform_hlds__term_constr_fixpoint__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__term_constr_fixpoint__Widening_4));
      MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__term_constr_fixpoint__MaxMatrixSize_5));
    }
    return transform_hlds__term_constr_fixpoint__HeadVar__3_3;
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_9(
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__term_constr_fixpoint__closure = transform_hlds__term_constr_fixpoint__closure_arg;
    MR_Word transform_hlds__term_constr_fixpoint__conv8_STATE_VARIABLE_ModuleInfo_10;

    {
      transform_hlds__term_constr_fixpoint__update_size_info_3_p_0(((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2), &transform_hlds__term_constr_fixpoint__conv8_STATE_VARIABLE_ModuleInfo_10);
    }
    *transform_hlds__term_constr_fixpoint__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_fixpoint__conv8_STATE_VARIABLE_ModuleInfo_10));
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_8(
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__term_constr_fixpoint__closure = transform_hlds__term_constr_fixpoint__closure_arg;
    MR_Word transform_hlds__term_constr_fixpoint__conv6_STATE_VARIABLE_ModuleInfo_10;

    {
      transform_hlds__term_constr_fixpoint__update_size_info_3_p_0(((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2), &transform_hlds__term_constr_fixpoint__conv6_STATE_VARIABLE_ModuleInfo_10);
    }
    *transform_hlds__term_constr_fixpoint__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_fixpoint__conv6_STATE_VARIABLE_ModuleInfo_10));
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_7(
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__term_constr_fixpoint__closure = transform_hlds__term_constr_fixpoint__closure_arg;
    MR_Word transform_hlds__term_constr_fixpoint__conv4_STATE_VARIABLE_ModuleInfo_10;

    {
      transform_hlds__term_constr_fixpoint__update_size_info_3_p_0(((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2), &transform_hlds__term_constr_fixpoint__conv4_STATE_VARIABLE_ModuleInfo_10);
    }
    *transform_hlds__term_constr_fixpoint__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_fixpoint__conv4_STATE_VARIABLE_ModuleInfo_10));
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_6(
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1)
{
  {
    MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2;
    MR_Box transform_hlds__term_constr_fixpoint__closure = transform_hlds__term_constr_fixpoint__closure_arg;
    MR_Word transform_hlds__term_constr_fixpoint__conv3_LambdaHeadVar__2_26;

    {
      transform_hlds__term_constr_fixpoint__conv3_LambdaHeadVar__2_26 = transform_hlds__term_constr_fixpoint__IntroducedFrom__func__do_fixpoint_calculation__136__1_1_f_0(((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_1));
    }
    transform_hlds__term_constr_fixpoint__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_fixpoint__conv3_LambdaHeadVar__2_26));
    return transform_hlds__term_constr_fixpoint__wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_1(
  MR_Box transform_hlds__term_constr_fixpoint__closure_arg,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_fixpoint__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_fixpoint__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__term_constr_fixpoint__closure = transform_hlds__term_constr_fixpoint__closure_arg;
    MR_Word transform_hlds__term_constr_fixpoint__conv0_STATE_VARIABLE_IterationInfo_35;

    {
      transform_hlds__term_constr_fixpoint__term_iterate_over_abstract_proc_6_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_fixpoint__wrapper_arg_2), &transform_hlds__term_constr_fixpoint__conv0_STATE_VARIABLE_IterationInfo_35);
    }
    *transform_hlds__term_constr_fixpoint__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_fixpoint__conv0_STATE_VARIABLE_IterationInfo_35));
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_2(
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg)
{
  {
    struct transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0_s * transform_hlds__term_constr_fixpoint__env_ptr = (struct transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0_s *) transform_hlds__term_constr_fixpoint__env_ptr_arg;

    MR_builtin_longjmp((transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_4(
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg)
{
  {
    struct transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0_s * transform_hlds__term_constr_fixpoint__env_ptr = (struct transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0_s *) transform_hlds__term_constr_fixpoint__env_ptr_arg;

    (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__OneInfo_15 = ((MR_Word) (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__conv2_OneInfo_15);
    {
      transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_3(transform_hlds__term_constr_fixpoint__env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_3(
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg)
{
  {
    struct transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0_s * transform_hlds__term_constr_fixpoint__env_ptr = (struct transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0_s *) transform_hlds__term_constr_fixpoint__env_ptr_arg;

    {
      MR_Word transform_hlds__term_constr_fixpoint__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__OneInfo_15, (MR_Integer) 0)));
      MR_Word transform_hlds__term_constr_fixpoint__V_39_39;

      (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__OneInfo_15, (MR_Integer) 1)));
      transform_hlds__term_constr_fixpoint__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__OneInfo_15, (MR_Integer) 2)));
      {
        (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__succeeded = libs__polyhedron__is_empty_1_p_0((transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__V_24_24);
      }
      if ((transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__succeeded)
        {
          transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_2(transform_hlds__term_constr_fixpoint__env_ptr);
        }
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_5(
  void * transform_hlds__term_constr_fixpoint__env_ptr_arg)
{
  {
    struct transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0_s * transform_hlds__term_constr_fixpoint__env_ptr = (struct transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0_s *) transform_hlds__term_constr_fixpoint__env_ptr_arg;

    if (MR_builtin_setjmp((transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0, &(transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__conv2_OneInfo_15, (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__IterationInfos_12, transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_4, transform_hlds__term_constr_fixpoint__env_ptr);
          }
        }
        (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (transform_hlds__term_constr_fixpoint__env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0(
  MR_Word transform_hlds__term_constr_fixpoint__Options_7,
  MR_Word transform_hlds__term_constr_fixpoint__SCC_8,
  MR_Integer transform_hlds__term_constr_fixpoint__Iteration_9,
  MR_Word * transform_hlds__term_constr_fixpoint__HeadVar__4_4,
  MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_0_20,
  MR_Word * transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_21)
{
  {
    struct transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0_s transform_hlds__term_constr_fixpoint__env;

    {
      MR_Word transform_hlds__term_constr_fixpoint__AbstractSCC_11;
      MR_Word transform_hlds__term_constr_fixpoint__ChangeFlag_13;
      MR_Word transform_hlds__term_constr_fixpoint__V_22_22;
      MR_Box transform_hlds__term_constr_fixpoint__conv1_IterationInfos_12;

      *transform_hlds__term_constr_fixpoint__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        transform_hlds__term_constr_fixpoint__AbstractSCC_11 = transform_hlds__term_constr_util__get_abstract_scc_2_f_0(transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_0_20, transform_hlds__term_constr_fixpoint__SCC_8);
      }
      {
        transform_hlds__term_constr_fixpoint__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_22_22, 0) = ((MR_Box) (&transform_hlds__term_constr_fixpoint_scalar_common_2[0]));
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_22_22, 1) = ((MR_Box) (transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_1));
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_22_22, 3) = ((MR_Box) (transform_hlds__term_constr_fixpoint__Iteration_9));
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_22_22, 4) = ((MR_Box) (transform_hlds__term_constr_fixpoint__Options_7));
        MR_hl_field(MR_mktag(0), transform_hlds__term_constr_fixpoint__V_22_22, 5) = ((MR_Box) (transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_0_20));
      }
      {
        mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0, (MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[0], transform_hlds__term_constr_fixpoint__V_22_22, transform_hlds__term_constr_fixpoint__AbstractSCC_11, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__term_constr_fixpoint__conv1_IterationInfos_12);
      }
      (transform_hlds__term_constr_fixpoint__env).transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__IterationInfos_12 = ((MR_Word) transform_hlds__term_constr_fixpoint__conv1_IterationInfos_12);
      {
        transform_hlds__term_constr_fixpoint__ChangeFlag_13 = transform_hlds__term_constr_fixpoint__or_flags_1_f_0((transform_hlds__term_constr_fixpoint__env).transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__IterationInfos_12);
      }
      switch (transform_hlds__term_constr_fixpoint__ChangeFlag_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_5(&transform_hlds__term_constr_fixpoint__env);
            }
            if ((transform_hlds__term_constr_fixpoint__env).transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__succeeded)
              {
                MR_Word transform_hlds__term_constr_fixpoint__TypeCtorInfo_57_57 = (MR_Word) &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0;
                MR_Word transform_hlds__term_constr_fixpoint__V_28_28;
                MR_Box transform_hlds__term_constr_fixpoint__conv5_STATE_VARIABLE_ModuleInfo_21;

                {
                  transform_hlds__term_constr_fixpoint__V_28_28 = mercury__list__map_2_f_0(transform_hlds__term_constr_fixpoint__TypeCtorInfo_57_57, transform_hlds__term_constr_fixpoint__TypeCtorInfo_57_57, (MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_4[0], (transform_hlds__term_constr_fixpoint__env).transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__IterationInfos_12);
                }
                {
                  mercury__list__foldl_4_p_0(transform_hlds__term_constr_fixpoint__TypeCtorInfo_57_57, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_4[1], transform_hlds__term_constr_fixpoint__V_28_28, ((MR_Box) (transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_0_20)), &transform_hlds__term_constr_fixpoint__conv5_STATE_VARIABLE_ModuleInfo_21);
                }
                *transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_21 = ((MR_Word) transform_hlds__term_constr_fixpoint__conv5_STATE_VARIABLE_ModuleInfo_21);
              }
            else
              {
                MR_Box transform_hlds__term_constr_fixpoint__conv7_STATE_VARIABLE_ModuleInfo_21;

                {
                  mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_4[2], (transform_hlds__term_constr_fixpoint__env).transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__IterationInfos_12, ((MR_Box) (transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_0_20)), &transform_hlds__term_constr_fixpoint__conv7_STATE_VARIABLE_ModuleInfo_21);
                }
                *transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_21 = ((MR_Word) transform_hlds__term_constr_fixpoint__conv7_STATE_VARIABLE_ModuleInfo_21);
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_33_33;
            MR_Integer transform_hlds__term_constr_fixpoint__V_34_34;
            MR_Box transform_hlds__term_constr_fixpoint__conv9_STATE_VARIABLE_ModuleInfo_33_33;
            MR_Word transform_hlds__term_constr_fixpoint__V_14_14;

            {
              mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_4[3], (transform_hlds__term_constr_fixpoint__env).transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__IterationInfos_12, ((MR_Box) (transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_0_20)), &transform_hlds__term_constr_fixpoint__conv9_STATE_VARIABLE_ModuleInfo_33_33);
            }
            transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_33_33 = ((MR_Word) transform_hlds__term_constr_fixpoint__conv9_STATE_VARIABLE_ModuleInfo_33_33);
            transform_hlds__term_constr_fixpoint__V_34_34 = (transform_hlds__term_constr_fixpoint__Iteration_9 + (MR_Integer) 1);
            {
              transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0(transform_hlds__term_constr_fixpoint__Options_7, transform_hlds__term_constr_fixpoint__SCC_8, transform_hlds__term_constr_fixpoint__V_34_34, &transform_hlds__term_constr_fixpoint__V_14_14, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_33_33, transform_hlds__term_constr_fixpoint__STATE_VARIABLE_ModuleInfo_21);
            }
          }
          break;
      }
    }
  }
}

void mercury__transform_hlds__term_constr_fixpoint__init(void)
{
}

void mercury__transform_hlds__term_constr_fixpoint__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_fixpoint_info_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_fixpoint_options_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0);
	MR_register_type_ctor_info(&transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_infos_0);
}

void mercury__transform_hlds__term_constr_fixpoint__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.term_constr_fixpoint. */
