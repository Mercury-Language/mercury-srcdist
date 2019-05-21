/*
** Automatically generated from `term_constr_fixpoint.m'
** by the Mercury compiler,
** version rotd-2017-12-06
** configured for x86_64-pc-linux-gnu.
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


// :- module transform_hlds.term_constr_fixpoint.
// :- implementation.

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
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "libs.dependency_graph.mih"
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
  MR_Word transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__Var_24;
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

static MR_Word MR_CALL 
transform_hlds__term_constr_fixpoint__IntroducedFrom__func__term_traverse_abstract_disj_pairwise__413__1_5_f_0(
  MR_Word Locals_7,
  MR_Word Info_8,
  MR_Word SizeVarSet_10,
  MR_Word PolyToLeft_11,
  MR_Word LambdaHeadVar__1_24);

static MR_Word MR_CALL 
transform_hlds__term_constr_fixpoint__IntroducedFrom__func__do_fixpoint_calculation__137__1_1_f_0(
  MR_Word LambdaHeadVar__1_25);

static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____iteration_infos_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____iteration_infos_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____iteration_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____iteration_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____fixpoint_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____fixpoint_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Box MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_pairwise_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_pairwise_5_p_0(
  MR_Word Goals_6,
  MR_Word Locals_7,
  MR_Word Info_8,
  MR_Word STATE_VARIABLE_Polyhedron_0_22,
  MR_Word * STATE_VARIABLE_Polyhedron_23);

static MR_Word MR_CALL 
transform_hlds__term_constr_fixpoint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_105_114_119_105_115_101_95_109_97_112_95_95_104_111_49_95_95_91_51_93_95_48_2_f_0(
  MR_Word Var_24,
  MR_Word Var_25,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_105_114_119_105_115_101_95_109_97_112_95_50_95_95_104_111_50_95_95_91_51_93_95_48_4_p_0(
  MR_Word Var_27,
  MR_Word Var_28,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_linearly_2_5_p_0(
  MR_Word Info_6,
  MR_Word Locals_7,
  MR_Word Goal_8,
  MR_Word STATE_VARIABLE_Polyhedron_0_13,
  MR_Word * STATE_VARIABLE_Polyhedron_14);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_iterate_over_abstract_proc_6_p_0(
  MR_Integer Iteration_7,
  MR_Word Options_8,
  MR_Word ModuleInfo_9,
  MR_Word Proc_10,
  MR_Word STATE_VARIABLE_IterationInfo_0_34,
  MR_Word * STATE_VARIABLE_IterationInfo_35);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word SizeVarSet_9,
  MR_Integer Iteration_10,
  MR_Word OldPoly_11,
  MR_Word NewPoly_12,
  MR_Word * ResultPoly_13,
  MR_Word * ChangeFlag_14);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_goal_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_goal_4_p_0(
  MR_Word Info_5,
  MR_Word Goal_6,
  MR_Word STATE_VARIABLE_Polyhedron_0_33,
  MR_Word * STATE_VARIABLE_Polyhedron_34);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_linearly_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_linearly_5_p_0(
  MR_Word Goals_6,
  MR_Word Locals_7,
  MR_Word Info_8,
  MR_Word STATE_VARIABLE_Polyhedron_0_11,
  MR_Word * STATE_VARIABLE_Polyhedron_12);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__post_process_abstract_goal_5_p_0(
  MR_Word Locals_6,
  MR_Word Info_7,
  MR_Word GoalPolyhedron0_8,
  MR_Word STATE_VARIABLE_Polyhedron_0_11,
  MR_Word * STATE_VARIABLE_Polyhedron_12);

static MR_Word MR_CALL 
transform_hlds__term_constr_fixpoint__init_fixpoint_info_6_f_0(
  MR_Word ModuleInfo_8,
  MR_Word SizeVarSet_9,
  MR_Word PPId_10,
  MR_Integer MaxMatrixSize_11,
  MR_Word HeadVars_12,
  MR_Word Zeros_13);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__update_size_info_3_p_0(
  MR_Word Info_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_5(
  void * env_ptr_arg);

static MR_Word MR_CALL 
transform_hlds__term_constr_fixpoint__or_flags_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____fixpoint_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____fixpoint_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____fixpoint_options_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____fixpoint_options_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____iteration_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____iteration_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____iteration_infos_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____iteration_infos_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_1[5][2];

static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_2[2][9];

static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_3[1][5];

static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_4[4][3];

static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_5[1][6];

static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_6[1][8];

static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_7[1][7];

static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_8[1][1];




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

static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_6[1][8] = {
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

static /* final */ const MR_Box transform_hlds__term_constr_fixpoint_scalar_common_8[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_types_fixpoint_info_0_0,
  transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_names_fixpoint_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_stag_ordered_fixpoint_info_0_0[1] = {
  &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_functor_desc_fixpoint_info_0_0
};

static const MR_DuPtagLayout transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_ptag_ordered_fixpoint_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_types_fixpoint_options_0_0,
  transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_names_fixpoint_options_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_stag_ordered_fixpoint_options_0_0[1] = {
  &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_functor_desc_fixpoint_options_0_0
};

static const MR_DuPtagLayout transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_ptag_ordered_fixpoint_options_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_types_iteration_info_0_0,
  transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__field_names_iteration_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_stag_ordered_iteration_info_0_0[1] = {
  &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_functor_desc_iteration_info_0_0
};

static const MR_DuPtagLayout transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__du_ptag_ordered_iteration_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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

static MR_Word MR_CALL 
transform_hlds__term_constr_fixpoint__IntroducedFrom__func__term_traverse_abstract_disj_pairwise__413__1_5_f_0(
  MR_Word Locals_7,
  MR_Word Info_8,
  MR_Word SizeVarSet_10,
  MR_Word PolyToLeft_11,
  MR_Word LambdaHeadVar__1_24)
{
  {
    MR_Word LambdaHeadVar__2_25;
    MR_Word Poly0_15;

    transform_hlds__term_constr_fixpoint__term_traverse_abstract_goal_4_p_0(Info_8, LambdaHeadVar__1_24, PolyToLeft_11, &Poly0_15);
    LambdaHeadVar__2_25 = libs__polyhedron__project_3_f_0(Locals_7, SizeVarSet_10, Poly0_15);
    return LambdaHeadVar__2_25;
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_fixpoint__IntroducedFrom__func__do_fixpoint_calculation__137__1_1_f_0(
  MR_Word LambdaHeadVar__1_25)
{
  {
    MR_Word LambdaHeadVar__2_26;
    MR_Word Identity_19;
    MR_Word Var_40;
    MR_Word Var_42;
    MR_Word Var_41;

    Identity_19 = libs__polyhedron__universe_0_f_0();
    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_25, (MR_Integer) 0)));
    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_25, (MR_Integer) 1)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_25, (MR_Integer) 2)));
    {
      LambdaHeadVar__2_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_26, 0) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_26, 1) = ((MR_Box) (Identity_19));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_26, 2) = ((MR_Box) (Var_42));
    }
    return LambdaHeadVar__2_26;
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____iteration_infos_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[0], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____iteration_infos_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[0], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____iteration_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word Var_10;

      hlds__hlds_pred____Compare____pred_proc_id_0_0(&Var_10, ArgX1_4, ArgY1_5);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        libs__polyhedron____Compare____polyhedron_0_0(&Var_11, ArgX2_6, ArgY2_7);
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          MR_Integer Var_17 = (MR_Integer) ArgX3_8;
          MR_Integer Var_18 = (MR_Integer) ArgY3_9;

          mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_17, Var_18);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____iteration_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));

      succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = libs__polyhedron____Unify____polyhedron_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____fixpoint_options_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Integer ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_8;
      MR_Integer Var_13 = (MR_Integer) ArgX1_4;
      MR_Integer Var_14 = (MR_Integer) ArgY1_5;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_8, Var_13, Var_14);
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
        mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, ArgX2_6, ArgY2_7);
    }
  }
}

MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____fixpoint_options_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer Var_10 = (MR_Integer) ArgX1_3;
      MR_Integer Var_11 = (MR_Integer) ArgY1_4;

      succeeded = (Var_10 == Var_11);
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____fixpoint_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_22 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Integer ArgX4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Integer ArgY4_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)));
      MR_Word Var_16;

      hlds__hlds_module____Compare____module_info_0_0(&Var_16, ArgX1_4, ArgY1_5);
      succeeded = (Var_16 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_16;
      else
      {
        MR_Word Var_17;

        mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[2], &Var_17, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_17 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_17;
        else
        {
          MR_Word Var_18;

          hlds__hlds_pred____Compare____pred_proc_id_0_0(&Var_18, ArgX3_8, ArgY3_9);
          succeeded = (Var_18 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_18;
          else
          {
            MR_Word Var_19;

            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_19, ArgX4_10, ArgY4_11);
            succeeded = (Var_19 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_19;
            else
            {
              MR_Word Var_20;

              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[3], &Var_20, ((MR_Box) (ArgX5_12)), ((MR_Box) (ArgY5_13)));
              succeeded = (Var_20 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_20;
              else
              {
                mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[4], HeadVar__1_1, ((MR_Box) (ArgX6_14)), ((MR_Box) (ArgY6_15)));
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_16 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_18_18;
      MR_Word TypeInfo_20_20;
      MR_Word TypeInfo_21_21;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer ArgX4_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Integer ArgY4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
      MR_Word ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_18_18 = (MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[2];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
            {
              TypeInfo_20_20 = (MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[3];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_21_21 = (MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[4];
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_pairwise_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_25;

    conv0_LambdaHeadVar__2_25 = transform_hlds__term_constr_fixpoint__IntroducedFrom__func__term_traverse_abstract_disj_pairwise__413__1_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_25));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_pairwise_5_p_0(
  MR_Word Goals_6,
  MR_Word Locals_7,
  MR_Word Info_8,
  MR_Word STATE_VARIABLE_Polyhedron_0_22,
  MR_Word * STATE_VARIABLE_Polyhedron_23)
{
  {
    MR_Word SizeVarSet_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1)));
    MR_Word PolyToLeft_11;
    MR_Word ToPoly_12;
    MR_Word Polyhedra0_16;
    MR_Word ConvexUnion_21;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2)));
    MR_Integer Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3)));
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 4)));
    MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5)));

    PolyToLeft_11 = libs__polyhedron__universe_0_f_0();
    {
      ToPoly_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ToPoly_12, 0) = ((MR_Box) (&transform_hlds__term_constr_fixpoint_scalar_common_2[1]));
      MR_hl_field(MR_mktag(0), ToPoly_12, 1) = ((MR_Box) (transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_pairwise_5_p_0_1));
      MR_hl_field(MR_mktag(0), ToPoly_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), ToPoly_12, 3) = ((MR_Box) (Locals_7));
      MR_hl_field(MR_mktag(0), ToPoly_12, 4) = ((MR_Box) (Info_8));
      MR_hl_field(MR_mktag(0), ToPoly_12, 5) = ((MR_Box) (SizeVarSet_10));
      MR_hl_field(MR_mktag(0), ToPoly_12, 6) = ((MR_Box) (PolyToLeft_11));
    }
    Polyhedra0_16 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0, (MR_Word) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0, ToPoly_12, Goals_6);
    Var_32 = libs__polyhedron__empty_0_f_0();
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Polyhedra0_16));
    }
    ConvexUnion_21 = transform_hlds__term_constr_fixpoint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_105_114_119_105_115_101_95_109_97_112_95_95_104_111_49_95_95_91_51_93_95_48_2_f_0(Info_8, SizeVarSet_10, Var_31);
    libs__polyhedron__intersection_3_p_0(ConvexUnion_21, STATE_VARIABLE_Polyhedron_0_22, STATE_VARIABLE_Polyhedron_23);
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_fixpoint__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_97_105_114_119_105_115_101_95_109_97_112_95_95_104_111_49_95_95_91_51_93_95_48_2_f_0(
  MR_Word Var_24,
  MR_Word Var_25,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_Word X_3;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_fixpoint", (MR_String) "function \140transform_hlds.term_constr_fixpoint.pairwise_map\'/2", (MR_String) "empty list");
    }
    else
    {
      MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if ((Var_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        X_3 = Var_23;
      else
      {
        MR_Word X0_18;
        MR_Word Y_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_22, (MR_Integer) 0)));
        MR_Word Rest_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_22, (MR_Integer) 1)));
        MR_Word STATE_VARIABLE_Acc_21_42;
        MR_Word Var_43;
        MR_Word Var_71;
        MR_Integer Var_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 3)));
        MR_Word Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0)));
        MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 1)));
        MR_Word Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 2)));
        MR_Word Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 4)));
        MR_Word Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 5)));
        MR_Word next_value_of_HeadVar__2_2;

        {
          Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
        }
        libs__polyhedron__convex_union_5_p_0(Var_25, Var_71, Var_23, Y_36, &Var_43);
        {
          STATE_VARIABLE_Acc_21_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Acc_21_42, 0) = ((MR_Box) (Var_43));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Acc_21_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        transform_hlds__term_constr_fixpoint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_105_114_119_105_115_101_95_109_97_112_95_50_95_95_104_111_50_95_95_91_51_93_95_48_4_p_0(Var_24, Var_25, Rest_37, STATE_VARIABLE_Acc_21_42, &X0_18);
        // direct tailcall eliminated
        next_value_of_HeadVar__2_2 = X0_18;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return X_3;
    break;
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_105_114_119_105_115_101_95_109_97_112_95_50_95_95_104_111_50_95_95_91_51_93_95_48_4_p_0(
  MR_Word Var_27,
  MR_Word Var_28,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if ((Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_26));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (HeadVar__3_3));
        }
      else
      {
        MR_Word Y_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 0)));
        MR_Word Rest_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 1)));
        MR_Word STATE_VARIABLE_Acc_21_21;
        MR_Word Var_22;
        MR_Word Var_52;
        MR_Integer Var_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 3)));
        MR_Word Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 0)));
        MR_Word Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 1)));
        MR_Word Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 2)));
        MR_Word Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 4)));
        MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 5)));
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_HeadVar__3_3;

        {
          Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
        }
        libs__polyhedron__convex_union_5_p_0(Var_28, Var_52, Var_26, Y_15, &Var_22);
        {
          STATE_VARIABLE_Acc_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Acc_21_21, 0) = ((MR_Box) (Var_22));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Acc_21_21, 1) = ((MR_Box) (HeadVar__3_3));
        }
        // direct tailcall eliminated
        next_value_of_HeadVar__2_2 = Rest_16;
        next_value_of_HeadVar__3_3 = STATE_VARIABLE_Acc_21_21;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_linearly_2_5_p_0(
  MR_Word Info_6,
  MR_Word Locals_7,
  MR_Word Goal_8,
  MR_Word STATE_VARIABLE_Polyhedron_0_13,
  MR_Word * STATE_VARIABLE_Polyhedron_14)
{
  {
    MR_Word SizeVarSet_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
    MR_Word Polyhedron0_11;
    MR_Word Polyhedron1_12;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Integer Var_18;
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 0)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 2)));
    MR_Integer Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 4)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)));
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;

    Var_15 = libs__polyhedron__universe_0_f_0();
    transform_hlds__term_constr_fixpoint__term_traverse_abstract_goal_4_p_0(Info_6, Goal_8, Var_15, &Polyhedron0_11);
    Polyhedron1_12 = libs__polyhedron__project_3_f_0(Locals_7, SizeVarSet_10, Polyhedron0_11);
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 0)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 2)));
    Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3)));
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 4)));
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)));
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Var_18));
    }
    libs__polyhedron__convex_union_5_p_0(SizeVarSet_10, Var_16, Polyhedron1_12, STATE_VARIABLE_Polyhedron_0_13, STATE_VARIABLE_Polyhedron_14);
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_iterate_over_abstract_proc_6_p_0(
  MR_Integer Iteration_7,
  MR_Word Options_8,
  MR_Word ModuleInfo_9,
  MR_Word Proc_10,
  MR_Word STATE_VARIABLE_IterationInfo_0_34,
  MR_Word * STATE_VARIABLE_IterationInfo_35)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_136_136;
    MR_Word WideningInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Options_8, (MR_Integer) 0)));
    MR_Integer MaxMatrixSize_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Options_8, (MR_Integer) 1)));
    MR_Word AbstractPPId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Proc_10, (MR_Integer) 0)));
    MR_Word PPId_15 = (MR_Word) AbstractPPId_14;
    MR_Word SizeVarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Proc_10, (MR_Integer) 7)));
    MR_Word Zeros_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Proc_10, (MR_Integer) 8)));
    MR_Word HeadVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Proc_10, (MR_Integer) 3)));
    MR_Word Globals_19;
    MR_Word DebugTerm_20;
    MR_Word Info_22;
    MR_Word BugConstrs0_24;
    MR_Word ConstrVarsSet_25;
    MR_Word HeadVarSet_26;
    MR_Word BadVarsSet_27;
    MR_Word BadVars_28;
    MR_Word ArgSizeInfo_29;
    MR_Word OldPolyhedron_30;
    MR_Word ChangeFlag_32;
    MR_Word ThisIterationInfo_33;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word STATE_VARIABLE_Polyhedron_53_53;
    MR_Word STATE_VARIABLE_Polyhedron_54_54;
    MR_Word STATE_VARIABLE_Polyhedron_55_55;
    MR_Word STATE_VARIABLE_Polyhedron_56_56;
    MR_Word STATE_VARIABLE_Polyhedron_65_65;
    MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), Proc_10, (MR_Integer) 1)));
    MR_Word Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), Proc_10, (MR_Integer) 2)));
    MR_Word Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), Proc_10, (MR_Integer) 4)));
    MR_Word Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), Proc_10, (MR_Integer) 5)));
    MR_Word Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), Proc_10, (MR_Integer) 6)));
    MR_Word Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), Proc_10, (MR_Integer) 9)));
    MR_Integer Var_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Proc_10, (MR_Integer) 10)));
    MR_Word Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), Proc_10, (MR_Integer) 11)));
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Word Var_120;
    MR_Word Var_121;
    MR_Integer Var_122;
    MR_Word Var_123;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_9, &Globals_19);
    libs__globals__lookup_bool_option_3_p_0(Globals_19, (MR_Integer) 82, &DebugTerm_20);
    switch (DebugTerm_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_140;

          mercury__io__write_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (PPId_15)));
          mercury__io__write_string_3_p_0((MR_String) ": ");
          hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(ModuleInfo_9, PPId_15);
          mercury__io__write_string_3_p_0((MR_String) " ");
          transform_hlds__term_constr_util__write_size_vars_4_p_0(SizeVarSet_16, HeadVars_18);
          mercury__io__write_string_3_p_0((MR_String) "\nIteration ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_8[0], Iteration_7, &Var_140);
          mercury__io__write_string_3_p_0(Var_140);
          mercury__io__write_string_3_p_0((MR_String) ":\n");
          mercury__io__flush_output_2_p_0();
        }
        break;
    }
    Info_22 = transform_hlds__term_constr_fixpoint__init_fixpoint_info_6_f_0(ModuleInfo_9, SizeVarSet_16, PPId_15, MaxMatrixSize_13, HeadVars_18, Zeros_17);
    Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), Proc_10, (MR_Integer) 0)));
    Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), Proc_10, (MR_Integer) 1)));
    Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), Proc_10, (MR_Integer) 2)));
    Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), Proc_10, (MR_Integer) 3)));
    Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), Proc_10, (MR_Integer) 4)));
    Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), Proc_10, (MR_Integer) 5)));
    Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), Proc_10, (MR_Integer) 6)));
    Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), Proc_10, (MR_Integer) 7)));
    Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), Proc_10, (MR_Integer) 8)));
    Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), Proc_10, (MR_Integer) 9)));
    Var_122 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Proc_10, (MR_Integer) 10)));
    Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), Proc_10, (MR_Integer) 11)));
    Var_52 = libs__polyhedron__universe_0_f_0();
    transform_hlds__term_constr_fixpoint__term_traverse_abstract_goal_4_p_0(Info_22, Var_51, Var_52, &STATE_VARIABLE_Polyhedron_53_53);
    libs__polyhedron__optimize_3_p_0(SizeVarSet_16, STATE_VARIABLE_Polyhedron_53_53, &STATE_VARIABLE_Polyhedron_54_54);
    BugConstrs0_24 = libs__polyhedron__constraints_1_f_0(STATE_VARIABLE_Polyhedron_54_54);
    ConstrVarsSet_25 = libs__lp_rational__get_vars_from_constraints_1_f_0(BugConstrs0_24);
    TypeInfo_136_136 = (MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[1];
    HeadVarSet_26 = mercury__set__from_list_1_f_0(TypeInfo_136_136, HeadVars_18);
    BadVarsSet_27 = mercury__set__difference_2_f_0(TypeInfo_136_136, ConstrVarsSet_25, HeadVarSet_26);
    BadVars_28 = mercury__set__to_sorted_list_1_f_0(TypeInfo_136_136, BadVarsSet_27);
    STATE_VARIABLE_Polyhedron_55_55 = libs__polyhedron__project_3_f_0(BadVars_28, SizeVarSet_16, STATE_VARIABLE_Polyhedron_54_54);
    libs__polyhedron__optimize_3_p_0(SizeVarSet_16, STATE_VARIABLE_Polyhedron_55_55, &STATE_VARIABLE_Polyhedron_56_56);
    switch (DebugTerm_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          libs__polyhedron__write_polyhedron_4_p_0(STATE_VARIABLE_Polyhedron_56_56, SizeVarSet_16);
          mercury__io__nl_2_p_0();
          mercury__io__flush_output_2_p_0();
        }
        break;
    }
    ArgSizeInfo_29 = transform_hlds__term_constr_util__lookup_proc_constr_arg_size_info_2_f_0(ModuleInfo_9, PPId_15);
    if ((ArgSizeInfo_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      OldPolyhedron_30 = libs__polyhedron__empty_0_f_0();
    else
      OldPolyhedron_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgSizeInfo_29, (MR_Integer) 0)));
    succeeded = libs__polyhedron__is_empty_1_p_0(STATE_VARIABLE_Polyhedron_56_56);
    if (succeeded)
    {
      succeeded = libs__polyhedron__is_empty_1_p_0(OldPolyhedron_30);
      if (succeeded)
        ChangeFlag_32 = (MR_Integer) 0;
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_fixpoint", (MR_String) "predicate \140transform_hlds.term_constr_fixpoint.term_iterate_over_abstract_proc\'/6", (MR_String) "old polyhedron is empty");
          return;
        }
      }
      STATE_VARIABLE_Polyhedron_65_65 = STATE_VARIABLE_Polyhedron_56_56;
    }
    else
    {
      MR_Word Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), Proc_10, (MR_Integer) 9)));
      MR_Word Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), Proc_10, (MR_Integer) 0)));
      MR_Word Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), Proc_10, (MR_Integer) 1)));
      MR_Word Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), Proc_10, (MR_Integer) 2)));
      MR_Word Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), Proc_10, (MR_Integer) 3)));
      MR_Word Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), Proc_10, (MR_Integer) 4)));
      MR_Word Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), Proc_10, (MR_Integer) 5)));
      MR_Word Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), Proc_10, (MR_Integer) 6)));
      MR_Word Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), Proc_10, (MR_Integer) 7)));
      MR_Word Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), Proc_10, (MR_Integer) 8)));
      MR_Integer Var_133 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Proc_10, (MR_Integer) 10)));
      MR_Word Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), Proc_10, (MR_Integer) 11)));

      succeeded = (Var_64 == (MR_Integer) 0);
      if (succeeded)
      {
        ChangeFlag_32 = (MR_Integer) 0;
        STATE_VARIABLE_Polyhedron_65_65 = STATE_VARIABLE_Polyhedron_56_56;
      }
      else
      {
        succeeded = libs__polyhedron__is_empty_1_p_0(OldPolyhedron_30);
        if (succeeded)
        {
          ChangeFlag_32 = (MR_Integer) 1;
          STATE_VARIABLE_Polyhedron_65_65 = STATE_VARIABLE_Polyhedron_56_56;
        }
        else
          transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0(WideningInfo_12, SizeVarSet_16, Iteration_7, OldPolyhedron_30, STATE_VARIABLE_Polyhedron_56_56, &STATE_VARIABLE_Polyhedron_65_65, &ChangeFlag_32);
      }
    }
    {
      ThisIterationInfo_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ThisIterationInfo_33, 0) = ((MR_Box) (PPId_15));
      MR_hl_field(MR_mktag(0), ThisIterationInfo_33, 1) = ((MR_Box) (STATE_VARIABLE_Polyhedron_65_65));
      MR_hl_field(MR_mktag(0), ThisIterationInfo_33, 2) = ((MR_Box) (ChangeFlag_32));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_IterationInfo_35 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ThisIterationInfo_33));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_IterationInfo_0_34));
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_1(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0_s * env_ptr = (struct transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0_s * env_ptr = (struct transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__OldConstraint_22 = ((MR_Word) (env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__conv0_OldConstraint_22);
    transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_2(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0_s * env_ptr = (struct transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__succeeded = libs__lp_rational__entailed_3_p_0((env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__SizeVarSet_9, (env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__NewConstraints_19, (env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__OldConstraint_22);
    (env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__succeeded = !((env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__succeeded);
    if ((env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__succeeded)
      transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_1(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_4(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0_s * env_ptr = (struct transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0, &(env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__conv0_OldConstraint_22, (env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__OldConstraints_20, transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_3, env_ptr);
        }
        (env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word SizeVarSet_9,
  MR_Integer Iteration_10,
  MR_Word OldPoly_11,
  MR_Word NewPoly_12,
  MR_Word * ResultPoly_13,
  MR_Word * ChangeFlag_14)
{
  {
    struct transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0_s env;

    (env).transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__SizeVarSet_9 = SizeVarSet_9;
    {
      MR_Integer Threshold_8 = (MR_Integer) HeadVar__1_1;

      (env).transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__succeeded = (Iteration_10 > Threshold_8);
      if ((env).transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__succeeded)
        *ResultPoly_13 = libs__polyhedron__widen_3_f_0(OldPoly_11, NewPoly_12, (env).transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__SizeVarSet_9);
      else
        *ResultPoly_13 = NewPoly_12;
      (env).transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__NewConstraints_19 = libs__polyhedron__non_false_constraints_1_f_0(NewPoly_12);
      (env).transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__OldConstraints_20 = libs__polyhedron__non_false_constraints_1_f_0(OldPoly_11);
      transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_4(&env);
      if ((env).transform_hlds__term_constr_fixpoint__test_fixpoint_and_perhaps_widen_7_p_0_env_0__succeeded)
        *ChangeFlag_14 = (MR_Integer) 1;
      else
        *ChangeFlag_14 = (MR_Integer) 0;
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_goal_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Polyhedron_34;

    transform_hlds__term_constr_fixpoint__term_traverse_abstract_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_Polyhedron_34);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Polyhedron_34));
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_goal_4_p_0(
  MR_Word Info_5,
  MR_Word Goal_6,
  MR_Word STATE_VARIABLE_Polyhedron_0_33,
  MR_Word * STATE_VARIABLE_Polyhedron_34)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Goal_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 0)));
          MR_Word Locals_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 2)));
          MR_Word PriorConstraints_12;
          MR_Word Polyhedron0_13;
          MR_Integer _Size_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 1)));
          MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 3)));

          PriorConstraints_12 = libs__polyhedron__universe_0_f_0();
          transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_linearly_5_p_0(Goals_8, Locals_10, Info_5, PriorConstraints_12, &Polyhedron0_13);
          transform_hlds__term_constr_fixpoint__post_process_abstract_goal_5_p_0(Locals_10, Info_5, Polyhedron0_13, STATE_VARIABLE_Polyhedron_0_33, STATE_VARIABLE_Polyhedron_34);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_40;
          MR_Word Var_41;
          MR_Word Goals_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), Goal_6, (MR_Integer) 0)));
          MR_Word Locals_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), Goal_6, (MR_Integer) 1)));
          MR_Word Polyhedron0_46;
          MR_Word GoalPolyhedron_85;
          MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Goal_6, (MR_Integer) 2)));
          MR_Box conv1_Polyhedron0_46;

          {
            Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&transform_hlds__term_constr_fixpoint_scalar_common_7[0]));
            MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (transform_hlds__term_constr_fixpoint__term_traverse_abstract_goal_4_p_0_1));
            MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (Info_5));
          }
          Var_41 = libs__polyhedron__universe_0_f_0();
          mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0, (MR_Word) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0, Var_40, Goals_44, ((MR_Box) (Var_41)), &conv1_Polyhedron0_46);
          Polyhedron0_46 = ((MR_Word) conv1_Polyhedron0_46);
          succeeded = libs__polyhedron__is_empty_1_p_0(Polyhedron0_46);
          if (succeeded)
            GoalPolyhedron_85 = libs__polyhedron__empty_0_f_0();
          else
          {
            MR_Word Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)));
            MR_Word Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 0)));
            MR_Word Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 2)));
            MR_Integer Var_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 3)));
            MR_Word Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4)));
            MR_Word Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5)));

            GoalPolyhedron_85 = libs__polyhedron__project_3_f_0(Locals_45, Var_86, Polyhedron0_46);
          }
          libs__polyhedron__intersection_3_p_0(GoalPolyhedron_85, STATE_VARIABLE_Polyhedron_0_33, STATE_VARIABLE_Polyhedron_34);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word CallPPId0_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), Goal_6, (MR_Integer) 0)));
          MR_Word CallVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), Goal_6, (MR_Integer) 2)));
          MR_Word CallZeros_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), Goal_6, (MR_Integer) 3)));
          MR_Word CallArgsPoly_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), Goal_6, (MR_Integer) 6)));
          MR_Word CallPPId_21 = (MR_Word) CallPPId0_15;
          MR_Word CallProcInfo_23;
          MR_Word CallTerm2Info_24;
          MR_Word CallArgSizeInfo_25;
          MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 0)));
          MR_Word Locals_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), Goal_6, (MR_Integer) 4)));
          MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), Goal_6, (MR_Integer) 1)));
          MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), Goal_6, (MR_Integer) 5)));
          MR_Word Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)));
          MR_Word Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 2)));
          MR_Integer Var_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 3)));
          MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4)));
          MR_Word Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5)));
          MR_Word Var_22;

          hlds__hlds_module__module_info_pred_proc_info_4_p_0(Var_36, CallPPId_21, &Var_22, &CallProcInfo_23);
          hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(CallProcInfo_23, &CallTerm2Info_24);
          CallArgSizeInfo_25 = transform_hlds__term_constr_main_types__term2_info_get_success_constrs_1_f_0(CallTerm2Info_24);
          if ((CallArgSizeInfo_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *STATE_VARIABLE_Polyhedron_34 = libs__polyhedron__empty_0_f_0();
          else
          {
            MR_Word SizeInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), CallArgSizeInfo_25, (MR_Integer) 0)));

            succeeded = libs__polyhedron__is_empty_1_p_0(SizeInfo_26);
            if (succeeded)
              *STATE_VARIABLE_Polyhedron_34 = libs__polyhedron__empty_0_f_0();
            else
            {
              succeeded = libs__polyhedron__is_universe_1_p_0(SizeInfo_26);
              if (succeeded)
                *STATE_VARIABLE_Polyhedron_34 = STATE_VARIABLE_Polyhedron_0_33;
              else
              {
                MR_Word HeadVars_27;
                MR_Word SubstMap_28;
                MR_Word Polyhedron1_29;
                MR_Word Polyhedron2_30;
                MR_Word Polyhedron0_47;
                MR_Word GoalPolyhedron_71;

                HeadVars_27 = transform_hlds__term_constr_main_types__term2_info_get_head_vars_1_f_0(CallTerm2Info_24);
                SubstMap_28 = transform_hlds__term_constr_util__create_var_substitution_2_f_0(CallVars_17, HeadVars_27);
                Polyhedron0_47 = libs__polyhedron__substitute_vars_2_f_0(SubstMap_28, SizeInfo_26);
                Polyhedron1_29 = libs__polyhedron__intersection_2_f_0(Polyhedron0_47, CallArgsPoly_20);
                Polyhedron2_30 = libs__polyhedron__zero_vars_2_f_0(CallZeros_18, Polyhedron1_29);
                succeeded = libs__polyhedron__is_empty_1_p_0(Polyhedron2_30);
                if (succeeded)
                  GoalPolyhedron_71 = libs__polyhedron__empty_0_f_0();
                else
                {
                  MR_Word Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)));
                  MR_Word Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 0)));
                  MR_Word Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 2)));
                  MR_Integer Var_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 3)));
                  MR_Word Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4)));
                  MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5)));

                  GoalPolyhedron_71 = libs__polyhedron__project_3_f_0(Locals_52, Var_72, Polyhedron2_30);
                }
                libs__polyhedron__intersection_3_p_0(GoalPolyhedron_71, STATE_VARIABLE_Polyhedron_0_33, STATE_VARIABLE_Polyhedron_34);
              }
            }
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Poly_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 0)));
          MR_Word Locals_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 1)));
          MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 2)));

          transform_hlds__term_constr_fixpoint__post_process_abstract_goal_5_p_0(Locals_54, Info_5, Poly_31, STATE_VARIABLE_Polyhedron_0_33, STATE_VARIABLE_Polyhedron_34);
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_linearly_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Polyhedron_14;

    transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_linearly_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_Polyhedron_14);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Polyhedron_14));
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_linearly_5_p_0(
  MR_Word Goals_6,
  MR_Word Locals_7,
  MR_Word Info_8,
  MR_Word STATE_VARIABLE_Polyhedron_0_11,
  MR_Word * STATE_VARIABLE_Polyhedron_12)
{
  {
    MR_Word ConvexUnion_10;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Box conv1_ConvexUnion_10;

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&transform_hlds__term_constr_fixpoint_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (transform_hlds__term_constr_fixpoint__term_traverse_abstract_disj_linearly_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (Info_8));
      MR_hl_field(MR_mktag(0), Var_13, 4) = ((MR_Box) (Locals_7));
    }
    Var_14 = libs__polyhedron__empty_0_f_0();
    mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_goal_0, (MR_Word) &libs__polyhedron__libs__polyhedron__type_ctor_info_polyhedron_0, Var_13, Goals_6, ((MR_Box) (Var_14)), &conv1_ConvexUnion_10);
    ConvexUnion_10 = ((MR_Word) conv1_ConvexUnion_10);
    libs__polyhedron__intersection_3_p_0(ConvexUnion_10, STATE_VARIABLE_Polyhedron_0_11, STATE_VARIABLE_Polyhedron_12);
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__post_process_abstract_goal_5_p_0(
  MR_Word Locals_6,
  MR_Word Info_7,
  MR_Word GoalPolyhedron0_8,
  MR_Word STATE_VARIABLE_Polyhedron_0_11,
  MR_Word * STATE_VARIABLE_Polyhedron_12)
{
  {
    MR_bool succeeded;
    MR_Word GoalPolyhedron_10;

    succeeded = libs__polyhedron__is_empty_1_p_0(GoalPolyhedron0_8);
    if (succeeded)
      GoalPolyhedron_10 = libs__polyhedron__empty_0_f_0();
    else
    {
      MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1)));
      MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0)));
      MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 2)));
      MR_Integer Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 3)));
      MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 4)));
      MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5)));

      GoalPolyhedron_10 = libs__polyhedron__project_3_f_0(Locals_6, Var_13, GoalPolyhedron0_8);
    }
    libs__polyhedron__intersection_3_p_0(GoalPolyhedron_10, STATE_VARIABLE_Polyhedron_0_11, STATE_VARIABLE_Polyhedron_12);
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_fixpoint__init_fixpoint_info_6_f_0(
  MR_Word ModuleInfo_8,
  MR_Word SizeVarSet_9,
  MR_Word PPId_10,
  MR_Integer MaxMatrixSize_11,
  MR_Word HeadVars_12,
  MR_Word Zeros_13)
{
  {
    MR_Word HeadVar__7_7;

    {
      HeadVar__7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__7_7, 0) = ((MR_Box) (ModuleInfo_8));
      MR_hl_field(MR_mktag(0), HeadVar__7_7, 1) = ((MR_Box) (SizeVarSet_9));
      MR_hl_field(MR_mktag(0), HeadVar__7_7, 2) = ((MR_Box) (PPId_10));
      MR_hl_field(MR_mktag(0), HeadVar__7_7, 3) = ((MR_Box) (MaxMatrixSize_11));
      MR_hl_field(MR_mktag(0), HeadVar__7_7, 4) = ((MR_Box) (HeadVars_12));
      MR_hl_field(MR_mktag(0), HeadVar__7_7, 5) = ((MR_Box) (Zeros_13));
    }
    return HeadVar__7_7;
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__update_size_info_3_p_0(
  MR_Word Info_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10)
{
  {
    MR_Word PPId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 0)));
    MR_Word Poly_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 1)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 2)));

    transform_hlds__term_constr_util__update_arg_size_info_4_p_0(PPId_6, Poly_7, STATE_VARIABLE_ModuleInfo_0_9, STATE_VARIABLE_ModuleInfo_10);
  }
}

MR_Word MR_CALL 
transform_hlds__term_constr_fixpoint__fixpoint_options_init_2_f_0(
  MR_Word Widening_4,
  MR_Integer MaxMatrixSize_5)
{
  {
    MR_Word HeadVar__3_3;

    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (Widening_4));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (MaxMatrixSize_5));
    }
    return HeadVar__3_3;
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_ModuleInfo_10;

    transform_hlds__term_constr_fixpoint__update_size_info_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv8_STATE_VARIABLE_ModuleInfo_10);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_ModuleInfo_10));
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_ModuleInfo_10;

    transform_hlds__term_constr_fixpoint__update_size_info_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv6_STATE_VARIABLE_ModuleInfo_10);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_ModuleInfo_10));
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_ModuleInfo_10;

    transform_hlds__term_constr_fixpoint__update_size_info_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv4_STATE_VARIABLE_ModuleInfo_10);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ModuleInfo_10));
  }
}

static MR_Box MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_LambdaHeadVar__2_26;

    conv3_LambdaHeadVar__2_26 = transform_hlds__term_constr_fixpoint__IntroducedFrom__func__do_fixpoint_calculation__137__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_26));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_IterationInfo_35;

    transform_hlds__term_constr_fixpoint__term_iterate_over_abstract_proc_6_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_IterationInfo_35);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_IterationInfo_35));
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0_s * env_ptr = (struct transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_4(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0_s * env_ptr = (struct transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__OneInfo_15 = ((MR_Word) (env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__conv2_OneInfo_15);
    transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_3(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0_s * env_ptr = (struct transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0_s *) env_ptr_arg;

    {
      MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__OneInfo_15, (MR_Integer) 0)));
      MR_Word Var_39;

      (env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__OneInfo_15, (MR_Integer) 1)));
      Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__OneInfo_15, (MR_Integer) 2)));
      (env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__succeeded = libs__polyhedron__is_empty_1_p_0((env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__Var_24);
      if ((env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__succeeded)
        transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_2(env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_5(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0_s * env_ptr = (struct transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0, &(env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__conv2_OneInfo_15, (env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__IterationInfos_12, transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_4, env_ptr);
        }
        (env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0(
  MR_Word Options_7,
  MR_Word SCC_8,
  MR_Integer Iteration_9,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_20,
  MR_Word * STATE_VARIABLE_ModuleInfo_21)
{
  {
    struct transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0_s env;

    {
      MR_Word AbstractSCC_11;
      MR_Word ChangeFlag_13;
      MR_Word Var_22;
      MR_Box conv1_IterationInfos_12;

      *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      AbstractSCC_11 = transform_hlds__term_constr_util__get_abstract_scc_2_f_0(STATE_VARIABLE_ModuleInfo_0_20, SCC_8);
      {
        Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&transform_hlds__term_constr_fixpoint_scalar_common_2[0]));
        MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (Iteration_9));
        MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (Options_7));
        MR_hl_field(MR_mktag(0), Var_22, 5) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_20));
      }
      mercury__set__foldl_4_p_0((MR_Word) &transform_hlds__term_constr_data__transform_hlds__term_constr_data__type_ctor_info_abstract_proc_0, (MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_1[0], Var_22, AbstractSCC_11, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv1_IterationInfos_12);
      (env).transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__IterationInfos_12 = ((MR_Word) conv1_IterationInfos_12);
      ChangeFlag_13 = transform_hlds__term_constr_fixpoint__or_flags_1_f_0((env).transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__IterationInfos_12);
      switch (ChangeFlag_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_5(&env);
            if ((env).transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__succeeded)
            {
              MR_Word TypeCtorInfo_57_57 = (MR_Word) &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0;
              MR_Word Var_28;
              MR_Box conv5_STATE_VARIABLE_ModuleInfo_21;

              Var_28 = mercury__list__map_2_f_0(TypeCtorInfo_57_57, TypeCtorInfo_57_57, (MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_4[0], (env).transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__IterationInfos_12);
              mercury__list__foldl_4_p_0(TypeCtorInfo_57_57, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_4[1], Var_28, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_20)), &conv5_STATE_VARIABLE_ModuleInfo_21);
              *STATE_VARIABLE_ModuleInfo_21 = ((MR_Word) conv5_STATE_VARIABLE_ModuleInfo_21);
            }
            else
            {
              MR_Box conv7_STATE_VARIABLE_ModuleInfo_21;

              mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_4[2], (env).transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__IterationInfos_12, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_20)), &conv7_STATE_VARIABLE_ModuleInfo_21);
              *STATE_VARIABLE_ModuleInfo_21 = ((MR_Word) conv7_STATE_VARIABLE_ModuleInfo_21);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word STATE_VARIABLE_ModuleInfo_33_33;
            MR_Integer Var_34;
            MR_Box conv9_STATE_VARIABLE_ModuleInfo_33_33;
            MR_Word Var_14;

            mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__term_constr_fixpoint__transform_hlds__term_constr_fixpoint__type_ctor_info_iteration_info_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__term_constr_fixpoint_scalar_common_4[3], (env).transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0_env_0__IterationInfos_12, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_20)), &conv9_STATE_VARIABLE_ModuleInfo_33_33);
            STATE_VARIABLE_ModuleInfo_33_33 = ((MR_Word) conv9_STATE_VARIABLE_ModuleInfo_33_33);
            Var_34 = (Iteration_9 + (MR_Integer) 1);
            transform_hlds__term_constr_fixpoint__do_fixpoint_calculation_6_p_0(Options_7, SCC_8, Var_34, &Var_14, STATE_VARIABLE_ModuleInfo_33_33, STATE_VARIABLE_ModuleInfo_21);
          }
          break;
      }
    }
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_fixpoint__or_flags_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word Info_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Infos_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
      MR_Word Var_6;
      MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
      MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));

      Var_6 = transform_hlds__term_constr_fixpoint__or_flags_1_f_0(Infos_4);
      HeadVar__2_2 = mercury__bool__or_2_f_0(Var_5, Var_6);
    }
    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____fixpoint_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__term_constr_fixpoint____Unify____fixpoint_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____fixpoint_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__term_constr_fixpoint____Compare____fixpoint_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____fixpoint_options_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__term_constr_fixpoint____Unify____fixpoint_options_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____fixpoint_options_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__term_constr_fixpoint____Compare____fixpoint_options_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____iteration_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__term_constr_fixpoint____Unify____iteration_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____iteration_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__term_constr_fixpoint____Compare____iteration_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_fixpoint____Unify____iteration_infos_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__term_constr_fixpoint____Unify____iteration_infos_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_fixpoint____Compare____iteration_infos_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__term_constr_fixpoint____Compare____iteration_infos_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__term_constr_fixpoint__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.term_constr_fixpoint.
