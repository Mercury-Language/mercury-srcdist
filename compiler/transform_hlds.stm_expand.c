/*
** Automatically generated from `stm_expand.m'
** by the Mercury compiler,
** version rotd-2016-01-15
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


/* :- module transform_hlds.stm_expand. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__stm_expand__init
ENDINIT
*/

#include "transform_hlds.stm_expand.mih"


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
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.polymorphism.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.make_goal.mih"
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
#include "mdbcomp.builtin_modules.mih"
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
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct1 transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__stm_expand__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__stm_expand__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__stm_expand__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__stm_expand__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_goal_vars_0_0[5];

static const MR_ConstString transform_hlds__stm_expand__transform_hlds__stm_expand__field_names_stm_goal_vars_0_0[5];

static const MR_DuFunctorDesc transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_goal_vars_0_0;

static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_goal_vars_0_0[1];

static const MR_DuPtagLayout transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_goal_vars_0[1];

static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_goal_vars_0[1];

static const MR_Integer transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_goal_vars_0[1];

static const MR_PseudoTypeInfo transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_info_0_0[7];

static const MR_ConstString transform_hlds__stm_expand__transform_hlds__stm_expand__field_names_stm_info_0_0[7];

static const MR_DuFunctorDesc transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_info_0[1];

static const MR_Integer transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_info_0[1];

static const MR_PseudoTypeInfo transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_new_pred_info_0_0[7];

static const MR_ConstString transform_hlds__stm_expand__transform_hlds__stm_expand__field_names_stm_new_pred_info_0_0[7];

static const MR_DuFunctorDesc transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_new_pred_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_new_pred_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_new_pred_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_new_pred_info_0[1];

static const MR_Integer transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_new_pred_info_0[1];

static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_goal_vars_0_0_10001(
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box transform_hlds__stm_expand__wrapper_arg_2);

static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_goal_vars_0_0_10001(
  MR_Box * transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box transform_hlds__stm_expand__wrapper_arg_2,
  MR_Box transform_hlds__stm_expand__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_info_0_0_10001(
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box transform_hlds__stm_expand__wrapper_arg_2);

static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_info_0_0_10001(
  MR_Box * transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box transform_hlds__stm_expand__wrapper_arg_2,
  MR_Box transform_hlds__stm_expand__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_new_pred_info_0_0_10001(
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box transform_hlds__stm_expand__wrapper_arg_2);

static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_new_pred_info_0_0_10001(
  MR_Box * transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box transform_hlds__stm_expand__wrapper_arg_2,
  MR_Box transform_hlds__stm_expand__wrapper_arg_3);

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_51_93_95_48_6_p_0(
  MR_Word transform_hlds__stm_expand__V_29_29,
  MR_Word transform_hlds__stm_expand__V_30_30,
  MR_Word transform_hlds__stm_expand__Src1_8,
  MR_Word transform_hlds__stm_expand__Src2_9,
  MR_Word * transform_hlds__stm_expand__Dest_10,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Accum_0_18,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Accum_19);

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_51_93_95_48_6_p_0(
  MR_Word transform_hlds__stm_expand__V_29_29,
  MR_Word transform_hlds__stm_expand__V_30_30,
  MR_Word transform_hlds__stm_expand__Src1_8,
  MR_Word transform_hlds__stm_expand__Src2_9,
  MR_Word * transform_hlds__stm_expand__Dest_10,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Accum_0_18,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Accum_19);

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_54_50_53_95_95_49_95_95_91_50_93_95_48_3_p_0(
  MR_Word transform_hlds__stm_expand__HeadVar__1_12,
  MR_Word * transform_hlds__stm_expand__HeadVar__3_20);

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_54_50_52_95_95_49_95_95_91_50_93_95_48_3_p_0(
  MR_Word transform_hlds__stm_expand__HeadVar__1_10,
  MR_Word * transform_hlds__stm_expand__HeadVar__3_14);

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_114_95_101_108_115_101_95_101_110_100_95_98_114_97_110_99_104_95_95_49_56_48_56_95_95_49_95_95_91_49_93_95_48_4_p_0(
  MR_Word * transform_hlds__stm_expand__LambdaHeadVar__2_42,
  MR_Word transform_hlds__stm_expand__LambdaHeadVar__3_43,
  MR_Word * transform_hlds__stm_expand__LambdaHeadVar__4_44);

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_p_0_1(
  MR_Box transform_hlds__stm_expand__closure_arg,
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_3,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_4,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_5,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_6);

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_p_0(
  MR_Word transform_hlds__stm_expand__InitInstmap_12,
  MR_Word transform_hlds__stm_expand__FinalInstmap_13,
  MR_Word transform_hlds__stm_expand__OuterDI_14,
  MR_Word transform_hlds__stm_expand__OuterUO_15,
  MR_Word transform_hlds__stm_expand__AtomicGoal0_18,
  MR_Word transform_hlds__stm_expand__OrElseGoals0_19,
  MR_Word * transform_hlds__stm_expand__Goal_20,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_54,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_55);

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_p_0_1(
  MR_Box transform_hlds__stm_expand__closure_arg,
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_3,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_4,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_5,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_6);

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_p_0(
  MR_Word transform_hlds__stm_expand__GoalType_11,
  MR_Word transform_hlds__stm_expand__InitInstmap_12,
  MR_Word transform_hlds__stm_expand__FinalInstmap_13,
  MR_Word transform_hlds__stm_expand__Outer_14,
  MR_Word transform_hlds__stm_expand__MainGoal_16,
  MR_Word transform_hlds__stm_expand__OrElseGoals_17,
  MR_Word * transform_hlds__stm_expand__FinalGoal_18,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_26);

static void MR_CALL 
transform_hlds__stm_expand__map3_in_foldl__ho1_7_p_0(
  MR_Word transform_hlds__stm_expand__Src1_9,
  MR_Word transform_hlds__stm_expand__Src2_10,
  MR_Word transform_hlds__stm_expand__Src3_11,
  MR_Word * transform_hlds__stm_expand__Dest_12,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Accum_0_22,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Accum_23);

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2625__1_3_p_0(
  MR_Word transform_hlds__stm_expand__HeadVar__1_12,
  MR_Word transform_hlds__stm_expand__HeadVar__2_19,
  MR_Word * transform_hlds__stm_expand__HeadVar__3_20);

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2624__1_3_p_0(
  MR_Word transform_hlds__stm_expand__HeadVar__1_10,
  MR_Word transform_hlds__stm_expand__HeadVar__2_13,
  MR_Word * transform_hlds__stm_expand__HeadVar__3_14);

static MR_bool MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__make_type_info__2387__1_2_p_0(
  MR_Word transform_hlds__stm_expand__PolySpecs_20,
  MR_Word transform_hlds__stm_expand__HeadVar__2_28);

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__rename_var_in_wrapper_pred__2105__1_4_p_0(
  MR_Word transform_hlds__stm_expand__ResultVar0_10,
  MR_Word transform_hlds__stm_expand__ResultVar_12,
  MR_Word transform_hlds__stm_expand__LambdaHeadVar__1_35,
  MR_Word * transform_hlds__stm_expand__LambdaHeadVar__2_36);

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1822__1_6_p_0(
  MR_Word transform_hlds__stm_expand__LambdaHeadVar__1_51,
  MR_Word transform_hlds__stm_expand__LambdaHeadVar__2_52,
  MR_Word transform_hlds__stm_expand__LambdaHeadVar__3_53,
  MR_Word * transform_hlds__stm_expand__LambdaHeadVar__4_54,
  MR_Word transform_hlds__stm_expand__LambdaHeadVar__5_55,
  MR_Word * transform_hlds__stm_expand__LambdaHeadVar__6_56);

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1808__1_4_p_0(
  MR_Word transform_hlds__stm_expand__LambdaHeadVar__1_41,
  MR_Word * transform_hlds__stm_expand__LambdaHeadVar__2_42,
  MR_Word transform_hlds__stm_expand__LambdaHeadVar__3_43,
  MR_Word * transform_hlds__stm_expand__LambdaHeadVar__4_44);

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_wrapper_for_goal_list__1359__1_7_p_0(
  MR_Word transform_hlds__stm_expand__ResultType_10,
  MR_Word transform_hlds__stm_expand__ResultVar_11,
  MR_Word transform_hlds__stm_expand__LambdaHeadVar__1_36,
  MR_Word transform_hlds__stm_expand__LambdaHeadVar__2_37,
  MR_Word * transform_hlds__stm_expand__LambdaHeadVar__3_38,
  MR_Word transform_hlds__stm_expand__LambdaHeadVar__4_39,
  MR_Word * transform_hlds__stm_expand__LambdaHeadVar__5_40);

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__1006__1_5_p_0(
  MR_Word transform_hlds__stm_expand__IsValidConstVar_15,
  MR_Word transform_hlds__stm_expand__LambdaHeadVar__1_79,
  MR_Word * transform_hlds__stm_expand__LambdaHeadVar__2_80,
  MR_Word transform_hlds__stm_expand__LambdaHeadVar__3_81,
  MR_Word * transform_hlds__stm_expand__LambdaHeadVar__4_82);

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__991__1_5_p_0(
  MR_Word transform_hlds__stm_expand__LambdaHeadVar__1_50,
  MR_Word * transform_hlds__stm_expand__LambdaHeadVar__2_51,
  MR_Word * transform_hlds__stm_expand__LambdaHeadVar__3_52,
  MR_Word transform_hlds__stm_expand__LambdaHeadVar__4_53,
  MR_Word * transform_hlds__stm_expand__LambdaHeadVar__5_54);

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_nested_goal__800__1_7_p_0(
  MR_Word transform_hlds__stm_expand__ResultType_43,
  MR_Word transform_hlds__stm_expand__ResultVar_44,
  MR_Word transform_hlds__stm_expand__LambdaHeadVar__1_89,
  MR_Word transform_hlds__stm_expand__LambdaHeadVar__2_90,
  MR_Word * transform_hlds__stm_expand__LambdaHeadVar__3_91,
  MR_Word transform_hlds__stm_expand__LambdaHeadVar__4_92,
  MR_Word * transform_hlds__stm_expand__LambdaHeadVar__5_93);

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__583__1_2_p_0(
  MR_Word transform_hlds__stm_expand__LambdaHeadVar__1_11,
  MR_Word * transform_hlds__stm_expand__LambdaHeadVar__2_12);

static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_new_pred_info_0_0(
  MR_Word * transform_hlds__stm_expand__HeadVar__1_1,
  MR_Word transform_hlds__stm_expand__HeadVar__2_2,
  MR_Word transform_hlds__stm_expand__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_new_pred_info_0_0(
  MR_Word transform_hlds__stm_expand__HeadVar__1_1,
  MR_Word transform_hlds__stm_expand__HeadVar__2_2);

static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_info_0_0(
  MR_Word * transform_hlds__stm_expand__HeadVar__1_1,
  MR_Word transform_hlds__stm_expand__HeadVar__2_2,
  MR_Word transform_hlds__stm_expand__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_info_0_0(
  MR_Word transform_hlds__stm_expand__HeadVar__1_1,
  MR_Word transform_hlds__stm_expand__HeadVar__2_2);

static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_goal_vars_0_0(
  MR_Word * transform_hlds__stm_expand__HeadVar__1_1,
  MR_Word transform_hlds__stm_expand__HeadVar__2_2,
  MR_Word transform_hlds__stm_expand__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_goal_vars_0_0(
  MR_Word transform_hlds__stm_expand__HeadVar__1_1,
  MR_Word transform_hlds__stm_expand__HeadVar__2_2);

static void MR_CALL 
transform_hlds__stm_expand__get_input_output_modes_3_p_0_2(
  MR_Box transform_hlds__stm_expand__closure_arg,
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2);

static void MR_CALL 
transform_hlds__stm_expand__get_input_output_modes_3_p_0_1(
  MR_Box transform_hlds__stm_expand__closure_arg,
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2);

static void MR_CALL 
transform_hlds__stm_expand__get_input_output_modes_3_p_0(
  MR_Word transform_hlds__stm_expand__StmGoalVars_4,
  MR_Word * transform_hlds__stm_expand__InputModes_5,
  MR_Word * transform_hlds__stm_expand__OutputModes_6);

static void MR_CALL 
transform_hlds__stm_expand__get_input_output_types_4_p_0(
  MR_Word transform_hlds__stm_expand__StmGoalVars_5,
  MR_Word transform_hlds__stm_expand__StmInfo_6,
  MR_Word * transform_hlds__stm_expand__InputTypes_7,
  MR_Word * transform_hlds__stm_expand__OutputTypes_8);

static void MR_CALL 
transform_hlds__stm_expand__get_input_output_varlist_3_p_0(
  MR_Word transform_hlds__stm_expand__StmGoalVars_4,
  MR_Word * transform_hlds__stm_expand__Input_5,
  MR_Word * transform_hlds__stm_expand__Output_6);

static void MR_CALL 
transform_hlds__stm_expand__get_pred_proc_id_2_p_0(
  MR_Word transform_hlds__stm_expand__NewPredInfo0_3,
  MR_Word * transform_hlds__stm_expand__PredProcId_4);

static void MR_CALL 
transform_hlds__stm_expand__new_pred_set_goal_3_p_0(
  MR_Word transform_hlds__stm_expand__Goal_4,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_17);

static void MR_CALL 
transform_hlds__stm_expand__run_quantification_over_pred_2_p_0(
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_10);

static void MR_CALL 
transform_hlds__stm_expand__update_new_pred_info_3_p_0(
  MR_Word transform_hlds__stm_expand__StmInfo_4,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_7,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_8);

static void MR_CALL 
transform_hlds__stm_expand__commit_new_pred_3_p_0(
  MR_Word transform_hlds__stm_expand__NewPred_4,
  MR_Word transform_hlds__stm_expand__StmInfo0_5,
  MR_Word * transform_hlds__stm_expand__StmInfo_6);

static void MR_CALL 
transform_hlds__stm_expand__set_head_vars_3_p_0(
  MR_Word transform_hlds__stm_expand__NewHeadVars_4,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_9);

static void MR_CALL 
transform_hlds__stm_expand__create_cloned_pred_10_p_0(
  MR_Word transform_hlds__stm_expand__ProcHeadVars_11,
  MR_Word transform_hlds__stm_expand__PredArgTypes_12,
  MR_Word transform_hlds__stm_expand__ProcHeadModes_13,
  MR_String transform_hlds__stm_expand__Prefix_14,
  MR_Word transform_hlds__stm_expand__OrigGoal_15,
  MR_Word transform_hlds__stm_expand__MaybeDetism_16,
  MR_Word * transform_hlds__stm_expand__NewStmPredInfo_17,
  MR_Word * transform_hlds__stm_expand__CallGoal_18,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_66);

static MR_bool MR_CALL 
transform_hlds__stm_expand__make_type_info_5_p_0_1(
  MR_Box transform_hlds__stm_expand__closure_arg);

static void MR_CALL 
transform_hlds__stm_expand__make_type_info_5_p_0(
  MR_Word transform_hlds__stm_expand__Type_6,
  MR_Word * transform_hlds__stm_expand__Var_7,
  MR_Word * transform_hlds__stm_expand__Goals_8,
  MR_Word transform_hlds__stm_expand__NewPredInfo0_9,
  MR_Word * transform_hlds__stm_expand__NewPredInfo_10);

static void MR_CALL 
transform_hlds__stm_expand__create_plain_conj_2_p_0(
  MR_Word transform_hlds__stm_expand__GoalsInConj_3,
  MR_Word * transform_hlds__stm_expand__ConjGoal_4);

static void MR_CALL 
transform_hlds__stm_expand__create_promise_purity_scope_3_p_0(
  MR_Word transform_hlds__stm_expand__GoalIn_4,
  MR_Word transform_hlds__stm_expand__ScopePurity_5,
  MR_Word * transform_hlds__stm_expand__GoalOut_6);

static void MR_CALL 
transform_hlds__stm_expand__create_switch_disjunction_7_p_0(
  MR_Word transform_hlds__stm_expand__ProgVar_8,
  MR_Word transform_hlds__stm_expand__Cases_9,
  MR_Word transform_hlds__stm_expand__Detism_10,
  MR_Word transform_hlds__stm_expand__Purity_11,
  MR_Word * transform_hlds__stm_expand__OutGoal_12,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_19,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_20);

static void MR_CALL 
transform_hlds__stm_expand__create_if_then_else_9_p_0(
  MR_Word transform_hlds__stm_expand__ExistVars_10,
  MR_Word transform_hlds__stm_expand__Cond_11,
  MR_Word transform_hlds__stm_expand__Then_12,
  MR_Word transform_hlds__stm_expand__Else_13,
  MR_Word transform_hlds__stm_expand__Detism_14,
  MR_Word transform_hlds__stm_expand__Purity_15,
  MR_Word * transform_hlds__stm_expand__OutGoal_16,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_23,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_24);

static void MR_CALL 
transform_hlds__stm_expand__create_closure_8_p_0(
  MR_Word transform_hlds__stm_expand__PredProcID_9,
  MR_Word transform_hlds__stm_expand__Args_10,
  MR_Word transform_hlds__stm_expand__ArgTypes_11,
  MR_Word transform_hlds__stm_expand__ArgModes_12,
  MR_Word * transform_hlds__stm_expand__ClosureVar_13,
  MR_Word * transform_hlds__stm_expand__ClosureAssignGoal_14,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_26);

static void MR_CALL 
transform_hlds__stm_expand__create_simple_call_12_p_0(
  MR_Word transform_hlds__stm_expand__ModuleName_13,
  MR_String transform_hlds__stm_expand__ProcName_14,
  MR_Word transform_hlds__stm_expand__PredOrFunc_15,
  MR_Word transform_hlds__stm_expand__Mode_16,
  MR_Word transform_hlds__stm_expand__Detism_17,
  MR_Word transform_hlds__stm_expand__Purity_18,
  MR_Word transform_hlds__stm_expand__ProgVars_19,
  MR_Word transform_hlds__stm_expand__GoalFeatures_20,
  MR_Word transform_hlds__stm_expand__InstmapDelta_21,
  MR_Word * transform_hlds__stm_expand__Goal_22,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_27);

static void MR_CALL 
transform_hlds__stm_expand__create_var_unify_6_p_0(
  MR_Word transform_hlds__stm_expand__VarLHS_7,
  MR_Word transform_hlds__stm_expand__VarRHS_8,
  MR_Word transform_hlds__stm_expand__UnifyMode_9,
  MR_Word * transform_hlds__stm_expand__Goal_10,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_26);

static void MR_CALL 
transform_hlds__stm_expand__create_var_unify_stm_6_p_0(
  MR_Word transform_hlds__stm_expand__VarLHS_7,
  MR_Word transform_hlds__stm_expand__VarRHS_8,
  MR_Word transform_hlds__stm_expand__UnifyMode_9,
  MR_Word * transform_hlds__stm_expand__Goal_10,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_26);

static void MR_CALL 
transform_hlds__stm_expand__create_var_test_6_p_0(
  MR_Word transform_hlds__stm_expand__VarLHS_7,
  MR_Word transform_hlds__stm_expand__VarRHS_8,
  MR_Word transform_hlds__stm_expand__UnifyMode_9,
  MR_Word * transform_hlds__stm_expand__Goal_10,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_26);

static void MR_CALL 
transform_hlds__stm_expand__create_aux_variable_assignment_7_p_0(
  MR_Word transform_hlds__stm_expand__Cons_8,
  MR_Word transform_hlds__stm_expand__Type_9,
  MR_Word transform_hlds__stm_expand__MaybeName_10,
  MR_Word * transform_hlds__stm_expand__Goal_11,
  MR_Word * transform_hlds__stm_expand__Var_12,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_14,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_15);

static void MR_CALL 
transform_hlds__stm_expand__create_aux_variable_5_p_0(
  MR_Word transform_hlds__stm_expand__Type_6,
  MR_Word transform_hlds__stm_expand__MaybeName0_7,
  MR_Word * transform_hlds__stm_expand__Var_8,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_17);

static void MR_CALL 
transform_hlds__stm_expand__create_aux_variable_stm_5_p_0(
  MR_Word transform_hlds__stm_expand__Type_6,
  MR_Word transform_hlds__stm_expand__MaybeName0_7,
  MR_Word * transform_hlds__stm_expand__Var_8,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_15);

static void MR_CALL 
transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_p_0_1(
  MR_Box transform_hlds__stm_expand__closure_arg,
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2);

static void MR_CALL 
transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_p_0(
  MR_String transform_hlds__stm_expand__Name_9,
  MR_Word transform_hlds__stm_expand__ResultVar0_10,
  MR_Word transform_hlds__stm_expand__ResultType_11,
  MR_Word * transform_hlds__stm_expand__ResultVar_12,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_32,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Goal_0_33,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Goal_34);

static void MR_CALL 
transform_hlds__stm_expand__construct_output_7_p_0(
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_8,
  MR_Word transform_hlds__stm_expand__ResultType_9,
  MR_Word transform_hlds__stm_expand__ResultVar_10,
  MR_Word transform_hlds__stm_expand__StmInfo_11,
  MR_Word * transform_hlds__stm_expand__Goals_12,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_27);

static void MR_CALL 
transform_hlds__stm_expand__deconstruct_output_7_p_0(
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_8,
  MR_Word transform_hlds__stm_expand__ReturnType_9,
  MR_Word transform_hlds__stm_expand__ReturnExceptVar_10,
  MR_Word * transform_hlds__stm_expand__Goal_11,
  MR_Word transform_hlds__stm_expand__StmInfo_12,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_28,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29);

static void MR_CALL 
transform_hlds__stm_expand__make_return_type_2_p_0(
  MR_Word transform_hlds__stm_expand__Types_3,
  MR_Word * transform_hlds__stm_expand__ReturnType_4);

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_branch_13_p_0(
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_14,
  MR_Word transform_hlds__stm_expand__ReturnType_15,
  MR_Word transform_hlds__stm_expand__OuterStmDIVar_16,
  MR_Word transform_hlds__stm_expand__OuterStmUOVar_17,
  MR_Word transform_hlds__stm_expand__InnerSTMVar_18,
  MR_Word transform_hlds__stm_expand__RttiVar_19,
  MR_Word transform_hlds__stm_expand__RollbackExceptionRttiVar_20,
  MR_Word transform_hlds__stm_expand__WrapperID_21,
  MR_Word transform_hlds__stm_expand__RetryBranch_22,
  MR_Word * transform_hlds__stm_expand__Goal_23,
  MR_Word transform_hlds__stm_expand__StmInfo_24,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_49,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_50);

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_end_branch_7_p_0_1(
  MR_Box transform_hlds__stm_expand__closure_arg,
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2,
  MR_Box transform_hlds__stm_expand__wrapper_arg_3,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_4);

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_end_branch_7_p_0(
  MR_Word transform_hlds__stm_expand__StmVars_8,
  MR_Word transform_hlds__stm_expand__OuterSTMDI_9,
  MR_Word transform_hlds__stm_expand__OuterSTMUO_10,
  MR_Word transform_hlds__stm_expand__ExceptionRttiVar_11,
  MR_Word * transform_hlds__stm_expand__Goal_12,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_39,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_40);

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_p_0(
  MR_Integer transform_hlds__stm_expand__Count_5,
  MR_Word * transform_hlds__stm_expand__Vars_6,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_11,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_12);

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_branches_13_p_0(
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_14,
  MR_Word transform_hlds__stm_expand__ReturnType_15,
  MR_Word transform_hlds__stm_expand__OuterStmDIVar_16,
  MR_Word transform_hlds__stm_expand__OuterStmUOVar_17,
  MR_Word transform_hlds__stm_expand__InnerSTMVars_18,
  MR_Word transform_hlds__stm_expand__RttiVar_19,
  MR_Word transform_hlds__stm_expand__RollbackExceptionRttiVar_20,
  MR_Word transform_hlds__stm_expand__WrapperIDs_21,
  MR_Word transform_hlds__stm_expand__EndBranch_22,
  MR_Word * transform_hlds__stm_expand__Goal_23,
  MR_Word transform_hlds__stm_expand__StmInfo_24,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_33,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34);

static MR_bool MR_CALL 
transform_hlds__stm_expand__create_or_else_pred_2_8_p_0_2(
  MR_Box transform_hlds__stm_expand__closure_arg);

static MR_bool MR_CALL 
transform_hlds__stm_expand__create_or_else_pred_2_8_p_0_1(
  MR_Box transform_hlds__stm_expand__closure_arg);

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_pred_2_8_p_0(
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_9,
  MR_Word transform_hlds__stm_expand__Closures_10,
  MR_Word transform_hlds__stm_expand__StmDI_11,
  MR_Word transform_hlds__stm_expand__StmUO_12,
  MR_Word transform_hlds__stm_expand__ReturnType_13,
  MR_Word transform_hlds__stm_expand__StmInfo_14,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_28,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29);

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_pred_8_p_0(
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_9,
  MR_Word transform_hlds__stm_expand__BranchGoalVars_10,
  MR_Word transform_hlds__stm_expand__Closures_11,
  MR_Word transform_hlds__stm_expand__StmDI_12,
  MR_Word transform_hlds__stm_expand__StmUO_13,
  MR_Word * transform_hlds__stm_expand__CallGoal_14,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_31,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_32);

static void MR_CALL 
transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_p_0(
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_12,
  MR_Word transform_hlds__stm_expand__AtomicGoal_13,
  MR_Word transform_hlds__stm_expand__ResultType_14,
  MR_Word transform_hlds__stm_expand__ResultVar_15,
  MR_Word transform_hlds__stm_expand__StmDI_16,
  MR_Word transform_hlds__stm_expand__StmUO_17,
  MR_Word transform_hlds__stm_expand__CopySTM_18,
  MR_Word * transform_hlds__stm_expand__Goal_19,
  MR_Word transform_hlds__stm_expand__StmInfo_20,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_28,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29);

static void MR_CALL 
transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_p_0(
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_10,
  MR_Word transform_hlds__stm_expand__ResultType_11,
  MR_Word transform_hlds__stm_expand__ResultVar0_12,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_0_30,
  MR_Word * transform_hlds__stm_expand__PredProcId_14,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31,
  MR_Word * transform_hlds__stm_expand__CallGoal_16,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_32,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_33);

static void MR_CALL 
transform_hlds__stm_expand__create_simple_wrapper_pred_8_p_0(
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_9,
  MR_Word transform_hlds__stm_expand__ResultType_10,
  MR_Word transform_hlds__stm_expand__ResultVar0_11,
  MR_Word transform_hlds__stm_expand__AtomicGoal_12,
  MR_Word * transform_hlds__stm_expand__PredProcId_13,
  MR_Word * transform_hlds__stm_expand__CallGoal_14,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_17,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_18);

static void MR_CALL 
transform_hlds__stm_expand__create_post_wrapper_goal_11_p_0(
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_12,
  MR_Word transform_hlds__stm_expand__AtomicGoal_13,
  MR_Word transform_hlds__stm_expand__ResultType_14,
  MR_Word transform_hlds__stm_expand__ResultVar_15,
  MR_Word transform_hlds__stm_expand__StmDI_16,
  MR_Word transform_hlds__stm_expand__StmUO_17,
  MR_Word transform_hlds__stm_expand__CopySTM_18,
  MR_Word * transform_hlds__stm_expand__Goal_19,
  MR_Word transform_hlds__stm_expand__StmInfo_20,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_47,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_48);

static void MR_CALL 
transform_hlds__stm_expand__create_wrapper_pred_2_9_p_0(
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_10,
  MR_Word transform_hlds__stm_expand__ResultType_11,
  MR_Word transform_hlds__stm_expand__ResultVar0_12,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_0_30,
  MR_Word * transform_hlds__stm_expand__PredProcId_14,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31,
  MR_Word * transform_hlds__stm_expand__CallGoal_16,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_32,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_33);

static void MR_CALL 
transform_hlds__stm_expand__create_wrapper_for_goal_list_8_p_0(
  MR_Word transform_hlds__stm_expand__AtomicGoalVarList_9,
  MR_Word transform_hlds__stm_expand__ResultType_10,
  MR_Word transform_hlds__stm_expand__ResultVar_11,
  MR_Word transform_hlds__stm_expand__GoalList_12,
  MR_Word * transform_hlds__stm_expand__PredProcId_13,
  MR_Word * transform_hlds__stm_expand__CallGoal_14,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_33,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34);

static void MR_CALL 
transform_hlds__stm_expand__move_variables_to_new_pred_9_p_0_1(
  MR_Box transform_hlds__stm_expand__closure_arg,
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box transform_hlds__stm_expand__wrapper_arg_2,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_3,
  MR_Box transform_hlds__stm_expand__wrapper_arg_4,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_5,
  MR_Box transform_hlds__stm_expand__wrapper_arg_6,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_7,
  MR_Box transform_hlds__stm_expand__wrapper_arg_8,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_9,
  MR_Box transform_hlds__stm_expand__wrapper_arg_10,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_11);

static void MR_CALL 
transform_hlds__stm_expand__move_variables_to_new_pred_9_p_0(
  MR_Word transform_hlds__stm_expand__AtomicGoal0_10,
  MR_Word * transform_hlds__stm_expand__AtomicGoal_11,
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_12,
  MR_Word transform_hlds__stm_expand__InnerDI_13,
  MR_Word transform_hlds__stm_expand__InnerUO_14,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_42,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_44);

static void MR_CALL 
transform_hlds__stm_expand__apply_varset_to_preds_11_p_0(
  MR_Word transform_hlds__stm_expand__ProgVar_12,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredVarSet_0_20,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredVarSet_21,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredVarTypes_0_22,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredVarTypes_23,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_OldPredVarSet_0_24,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_OldPredVarSet_25,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_OldPredVarTypes_0_26,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_OldPredVarTypes_27,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_VarMapping_0_28,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_VarMapping_29);

static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_2_8_p_0_1(
  MR_Box transform_hlds__stm_expand__closure_arg,
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2);

static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_2_8_p_0(
  MR_Word transform_hlds__stm_expand__AtomicGoalVarList_9,
  MR_Word transform_hlds__stm_expand__RecCallGoal_10,
  MR_Word transform_hlds__stm_expand__AtomicGoal_11,
  MR_Word transform_hlds__stm_expand__OrElseGoals_12,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_27,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_28,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_29);

static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_6_p_0_1(
  MR_Box transform_hlds__stm_expand__closure_arg,
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2);

static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_6_p_0(
  MR_Word transform_hlds__stm_expand__AtomicGoalVarList_7,
  MR_Word * transform_hlds__stm_expand__CallGoal_8,
  MR_Word transform_hlds__stm_expand__AtomicGoal_9,
  MR_Word transform_hlds__stm_expand__OrElseGoals_10,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_21,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_22);

static void MR_CALL 
transform_hlds__stm_expand__create_rollback_handler_goal_10_p_0(
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_11,
  MR_Word transform_hlds__stm_expand__ReturnType_12,
  MR_Word transform_hlds__stm_expand__StmVarDI_13,
  MR_Word transform_hlds__stm_expand__StmVarUO_14,
  MR_Word transform_hlds__stm_expand__WrapperID_15,
  MR_Word transform_hlds__stm_expand__RecCall_16,
  MR_Word * transform_hlds__stm_expand__Goal_17,
  MR_Word transform_hlds__stm_expand__StmInfo_18,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_40,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_41);

static MR_bool MR_CALL 
transform_hlds__stm_expand__create_test_on_exception_7_p_0_1(
  MR_Box transform_hlds__stm_expand__closure_arg);

static void MR_CALL 
transform_hlds__stm_expand__create_test_on_exception_7_p_0(
  MR_Word transform_hlds__stm_expand__ExceptVar_8,
  MR_Word transform_hlds__stm_expand__StmVar_9,
  MR_Word transform_hlds__stm_expand__ReturnType_10,
  MR_Word transform_hlds__stm_expand__RecCall_11,
  MR_Word * transform_hlds__stm_expand__Goal_12,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_24,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_25);

static void MR_CALL 
transform_hlds__stm_expand__create_retry_handler_branch_5_p_0(
  MR_Word transform_hlds__stm_expand__StmVar_6,
  MR_Word transform_hlds__stm_expand__RecCall_7,
  MR_Word * transform_hlds__stm_expand__Goal_8,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_14,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_15);

static MR_bool MR_CALL 
transform_hlds__stm_expand__create_validate_exception_goal_7_p_0_1(
  MR_Box transform_hlds__stm_expand__closure_arg);

static void MR_CALL 
transform_hlds__stm_expand__create_validate_exception_goal_7_p_0(
  MR_Word transform_hlds__stm_expand__StmVar_8,
  MR_Word transform_hlds__stm_expand__ExceptionVar_9,
  MR_Word transform_hlds__stm_expand__ReturnType_10,
  MR_Word transform_hlds__stm_expand__RecursiveCall_11,
  MR_Word * transform_hlds__stm_expand__Goal_12,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_21,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_22);

static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_many_7_p_0_2(
  MR_Box transform_hlds__stm_expand__closure_arg,
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2,
  MR_Box transform_hlds__stm_expand__wrapper_arg_3,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_4);

static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_many_7_p_0_1(
  MR_Box transform_hlds__stm_expand__closure_arg,
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_3,
  MR_Box transform_hlds__stm_expand__wrapper_arg_4,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_5);

static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_many_7_p_0(
  MR_Word transform_hlds__stm_expand__StmVars_8,
  MR_Word transform_hlds__stm_expand__UnlockAfterwards_9,
  MR_Word transform_hlds__stm_expand__ValidGoal_10,
  MR_Word transform_hlds__stm_expand__InvalidGoal_11,
  MR_Word * transform_hlds__stm_expand__Goals_12,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_33,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34);

static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_7_p_0(
  MR_Word transform_hlds__stm_expand__StmVar_8,
  MR_Word transform_hlds__stm_expand__UnlockAfterwards_9,
  MR_Word transform_hlds__stm_expand__ValidGoal_10,
  MR_Word transform_hlds__stm_expand__InvalidGoal_11,
  MR_Word * transform_hlds__stm_expand__Goals_12,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_19,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_20);

static void MR_CALL 
transform_hlds__stm_expand__template_if_exceptres_is_cons_8_p_0(
  MR_Word transform_hlds__stm_expand__RttiVar_9,
  MR_Word transform_hlds__stm_expand__ExceptVar_10,
  MR_Word transform_hlds__stm_expand__RollbackExceptCons_11,
  MR_Word transform_hlds__stm_expand__TrueGoal_12,
  MR_Word transform_hlds__stm_expand__FalseGoal_13,
  MR_Word * transform_hlds__stm_expand__Goal_14,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_26);

static void MR_CALL 
transform_hlds__stm_expand__create_top_level_pred_8_p_0_1(
  MR_Box transform_hlds__stm_expand__closure_arg,
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2);

static void MR_CALL 
transform_hlds__stm_expand__create_top_level_pred_8_p_0(
  MR_Word transform_hlds__stm_expand__AtomicGoalVarList_9,
  MR_Word transform_hlds__stm_expand__OuterDI_10,
  MR_Word transform_hlds__stm_expand__OuterUO_11,
  MR_Word transform_hlds__stm_expand__AtomicGoal_12,
  MR_Word transform_hlds__stm_expand__OrElseGoals_13,
  MR_Word * transform_hlds__stm_expand__Goal_14,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_30,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_31);

static void MR_CALL 
transform_hlds__stm_expand__strip_goal_calls_6_p_0(
  MR_Word transform_hlds__stm_expand__Goal0_7,
  MR_Word * transform_hlds__stm_expand__Goal_8,
  MR_Word * transform_hlds__stm_expand__StmOutDI_9,
  MR_Word * transform_hlds__stm_expand__StmOutUO_10,
  MR_Word * transform_hlds__stm_expand__StmInDI_11,
  MR_Word * transform_hlds__stm_expand__StmInUO_12);

static void MR_CALL 
transform_hlds__stm_expand__remove_tail_4_p_0(
  MR_Word transform_hlds__stm_expand__HeadVar__1_1,
  MR_Word * transform_hlds__stm_expand__HeadVar__2_2,
  MR_Word * transform_hlds__stm_expand__HeadVar__3_3,
  MR_Word * transform_hlds__stm_expand__HeadVar__4_4);

static void MR_CALL 
transform_hlds__stm_expand__calc_pred_variables_list_9_p_0(
  MR_Word transform_hlds__stm_expand__InitInstmap_10,
  MR_Word transform_hlds__stm_expand__FinalInstmap_11,
  MR_Word transform_hlds__stm_expand__Goals_12,
  MR_Word transform_hlds__stm_expand__InnerDIs_13,
  MR_Word transform_hlds__stm_expand__InnerUOs_14,
  MR_Word transform_hlds__stm_expand__IgnoreVarList0_15,
  MR_Word * transform_hlds__stm_expand__StmGoalVarList_16,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_27,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_28);

static void MR_CALL 
transform_hlds__stm_expand__common_goal_vars_from_list_2_p_0_1(
  MR_Box transform_hlds__stm_expand__closure_arg,
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2);

static void MR_CALL 
transform_hlds__stm_expand__common_goal_vars_from_list_2_p_0(
  MR_Word transform_hlds__stm_expand__GoalList_3,
  MR_Word * transform_hlds__stm_expand__GoalVar_4);

static void MR_CALL 
transform_hlds__stm_expand__order_vars_into_groups_2_10_p_0(
  MR_Word transform_hlds__stm_expand__ModuleInfo_1,
  MR_Word transform_hlds__stm_expand__HeadVar__2_2,
  MR_Word transform_hlds__stm_expand__InitInstmap_3,
  MR_Word transform_hlds__stm_expand__FinalInstmap_4,
  MR_Word transform_hlds__stm_expand__HeadVar__5_5,
  MR_Word * transform_hlds__stm_expand__HeadVar__6_6,
  MR_Word transform_hlds__stm_expand__HeadVar__7_7,
  MR_Word * transform_hlds__stm_expand__HeadVar__8_8,
  MR_Word transform_hlds__stm_expand__HeadVar__9_9,
  MR_Word * transform_hlds__stm_expand__HeadVar__10_10);

static void MR_CALL 
transform_hlds__stm_expand__stm_process_switch_cases_5_p_0(
  MR_Word transform_hlds__stm_expand__HeadVar__1_1,
  MR_Word transform_hlds__stm_expand__HeadVar__2_2,
  MR_Word * transform_hlds__stm_expand__HeadVar__3_3,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_0_4,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Info_5);

static void MR_CALL 
transform_hlds__stm_expand__stm_process_if_then_else_9_p_0(
  MR_Word transform_hlds__stm_expand__Instmap0_10,
  MR_Word transform_hlds__stm_expand__Cond0_11,
  MR_Word transform_hlds__stm_expand__Then0_12,
  MR_Word transform_hlds__stm_expand__Else0_13,
  MR_Word * transform_hlds__stm_expand__Cond_14,
  MR_Word * transform_hlds__stm_expand__Then_15,
  MR_Word * transform_hlds__stm_expand__Else_16,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_0_22,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Info_23);

static void MR_CALL 
transform_hlds__stm_expand__stm_process_disj_5_p_0(
  MR_Word transform_hlds__stm_expand__Instmap_6,
  MR_Word transform_hlds__stm_expand__GoalList0_7,
  MR_Word * transform_hlds__stm_expand__GoalList_8,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_0_14,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Info_15);

static void MR_CALL 
transform_hlds__stm_expand__stm_process_conj_5_p_0(
  MR_Word transform_hlds__stm_expand__Instmap0_6,
  MR_Word transform_hlds__stm_expand__GoalList0_7,
  MR_Word * transform_hlds__stm_expand__GoalList_8,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_0_18,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Info_19);

static void MR_CALL 
transform_hlds__stm_expand__stm_process_goal_5_p_0(
  MR_Word transform_hlds__stm_expand__Instmap_6,
  MR_Word transform_hlds__stm_expand__Goal0_7,
  MR_Word * transform_hlds__stm_expand__Goal_8,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_0_96,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Info_97);

static void MR_CALL 
transform_hlds__stm_expand__stm_process_proc_4_p_0(
  MR_Word transform_hlds__stm_expand__PredId_5,
  MR_Integer transform_hlds__stm_expand__ProcId_6,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_20);

static void MR_CALL 
transform_hlds__stm_expand__stm_process_pred_3_p_0_1(
  MR_Box transform_hlds__stm_expand__closure_arg,
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box transform_hlds__stm_expand__wrapper_arg_2,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_3);

static void MR_CALL 
transform_hlds__stm_expand__stm_process_pred_3_p_0(
  MR_Word transform_hlds__stm_expand__PredId_4,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_9);

static void MR_CALL 
transform_hlds__stm_expand__stm_process_module_2_p_0_1(
  MR_Box transform_hlds__stm_expand__closure_arg,
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box transform_hlds__stm_expand__wrapper_arg_2,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_1[8][2];

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_2[15][3];

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_3[2][6];

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_4[3][7];

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_5[2][5];

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_6[26][1];

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_7[2][8];

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_8[1][14];

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_9[1][9];




static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "--temp-context--")),
    ((MR_Box) ((MR_Integer) 999))
  },
};

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_2[15][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_1[0])),
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__stm_expand__stm_process_module_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__stm_expand__common_goal_vars_from_list_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__stm_expand__create_top_level_pred_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_7[0])),
    ((MR_Box) (transform_hlds__stm_expand__template_lock_and_validate_many_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__stm_expand__create_rollback_pred_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__stm_expand__create_rollback_pred_2_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_8[0])),
    ((MR_Box) (transform_hlds__stm_expand__move_variables_to_new_pred_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__stm_expand__create_or_else_end_branch_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_9[0])),
    ((MR_Box) (transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&transform_hlds__stm_expand_scalar_common_9[0])),
    ((MR_Box) (transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_3[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_4[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0)),
    ((MR_Box) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_5[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0)),
    ((MR_Box) (&transform_hlds__stm_expand__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__stm_expand__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__stm_expand__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_6[26][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "UnivPayload"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "RollbackExcpt"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "ValidResult"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "IsValidConst"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "ExceptUnivVar"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "ExceptionResult"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "ResultVar"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "STM0"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "STM"))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "NewUO"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "Stm_Expand_IsValid"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "Stm_Expand_Rollback"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "STMDI"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "STMUO"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "InnSTM"))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "RetryCons"))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "RollbackCons"))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "InnerSTM0"))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "ExcptRes"))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "BoringResult"))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "SuccessResult"))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "Closure"))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "res"))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "InterSTM"))
  },
};

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_7[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0)),
    ((MR_Box) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0)),
    ((MR_Box) (&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_8[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__stm_expand_scalar_common_9[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__stm_expand__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__stm_expand__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__stm_expand__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__stm_expand__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__stm_expand__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__stm_expand__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_goal_vars_0_0[5] = {
  (MR_PseudoTypeInfo) &transform_hlds__stm_expand__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__stm_expand__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__stm_expand__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__stm_expand__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_ConstString transform_hlds__stm_expand__transform_hlds__stm_expand__field_names_stm_goal_vars_0_0[5] = {
  (MR_String) "vars_input",
  (MR_String) "vars_local",
  (MR_String) "vars_output",
  (MR_String) "vars_innerDI",
  (MR_String) "vars_innerUO"
};

static const MR_DuFunctorDesc transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_goal_vars_0_0 = {
  (MR_String) "stm_goal_vars",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_goal_vars_0_0,
  transform_hlds__stm_expand__transform_hlds__stm_expand__field_names_stm_goal_vars_0_0,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_goal_vars_0_0[1] = {
  &transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_goal_vars_0_0
};

static const MR_DuPtagLayout transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_goal_vars_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_goal_vars_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_goal_vars_0[1] = {
  &transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_goal_vars_0_0
};

static const MR_Integer transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_goal_vars_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__stm_expand____Unify____stm_goal_vars_0_0_10001)),
  ((MR_Box) (transform_hlds__stm_expand____Compare____stm_goal_vars_0_0_10001)),
  (MR_String) "transform_hlds.stm_expand",
  (MR_String) "stm_goal_vars",
  {     transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_goal_vars_0 },
  {     transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_goal_vars_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_goal_vars_0
};

static const MR_PseudoTypeInfo transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_info_0_0[7] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString transform_hlds__stm_expand__transform_hlds__stm_expand__field_names_stm_info_0_0[7] = {
  (MR_String) "stm_info_module_info",
  (MR_String) "stm_info_pred_id",
  (MR_String) "stm_info_proc_id",
  (MR_String) "stm_info_proc_info",
  (MR_String) "stm_info_pred_info",
  (MR_String) "stm_info_requalify",
  (MR_String) "stm_info_expand_id"
};

static const MR_DuFunctorDesc transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_info_0_0 = {
  (MR_String) "stm_info",
  (MR_Integer) 7,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_info_0_0,
  transform_hlds__stm_expand__transform_hlds__stm_expand__field_names_stm_info_0_0,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_info_0_0[1] = {
  &transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_info_0_0
};

static const MR_DuPtagLayout transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_info_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_info_0[1] = {
  &transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_info_0_0
};

static const MR_Integer transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__stm_expand____Unify____stm_info_0_0_10001)),
  ((MR_Box) (transform_hlds__stm_expand____Compare____stm_info_0_0_10001)),
  (MR_String) "transform_hlds.stm_expand",
  (MR_String) "stm_info",
  {     transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_info_0 },
  {     transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_info_0
};

static const MR_PseudoTypeInfo transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_new_pred_info_0_0[7] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString transform_hlds__stm_expand__transform_hlds__stm_expand__field_names_stm_new_pred_info_0_0[7] = {
  (MR_String) "new_pred_module_info",
  (MR_String) "new_pred_pred_id",
  (MR_String) "new_pred_proc_id",
  (MR_String) "new_pred_pred_info",
  (MR_String) "new_pred_proc_info",
  (MR_String) "new_pred_context",
  (MR_String) "new_pred_var_cnt"
};

static const MR_DuFunctorDesc transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_new_pred_info_0_0 = {
  (MR_String) "stm_new_pred_info",
  (MR_Integer) 7,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__stm_expand__transform_hlds__stm_expand__field_types_stm_new_pred_info_0_0,
  transform_hlds__stm_expand__transform_hlds__stm_expand__field_names_stm_new_pred_info_0_0,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_new_pred_info_0_0[1] = {
  &transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_new_pred_info_0_0
};

static const MR_DuPtagLayout transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_new_pred_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__stm_expand__transform_hlds__stm_expand__du_stag_ordered_stm_new_pred_info_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_new_pred_info_0[1] = {
  &transform_hlds__stm_expand__transform_hlds__stm_expand__du_functor_desc_stm_new_pred_info_0_0
};

static const MR_Integer transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_new_pred_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__stm_expand____Unify____stm_new_pred_info_0_0_10001)),
  ((MR_Box) (transform_hlds__stm_expand____Compare____stm_new_pred_info_0_0_10001)),
  (MR_String) "transform_hlds.stm_expand",
  (MR_String) "stm_new_pred_info",
  {     transform_hlds__stm_expand__transform_hlds__stm_expand__du_name_ordered_stm_new_pred_info_0 },
  {     transform_hlds__stm_expand__transform_hlds__stm_expand__du_ptag_ordered_stm_new_pred_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__stm_expand__transform_hlds__stm_expand__functor_number_map_stm_new_pred_info_0
};

static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_goal_vars_0_0_10001(
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box transform_hlds__stm_expand__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;

    {
      transform_hlds__stm_expand__succeeded = transform_hlds__stm_expand____Unify____stm_goal_vars_0_0(((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), ((MR_Word) transform_hlds__stm_expand__wrapper_arg_2));
    }
    return transform_hlds__stm_expand__succeeded;
  }
}

static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_goal_vars_0_0_10001(
  MR_Box * transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box transform_hlds__stm_expand__wrapper_arg_2,
  MR_Box transform_hlds__stm_expand__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__stm_expand__conv0_HeadVar__1_1;

    {
      transform_hlds__stm_expand____Compare____stm_goal_vars_0_0(&transform_hlds__stm_expand__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__stm_expand__wrapper_arg_2), ((MR_Word) transform_hlds__stm_expand__wrapper_arg_3));
    }
    *transform_hlds__stm_expand__wrapper_arg_1 = ((MR_Box) (transform_hlds__stm_expand__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_info_0_0_10001(
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box transform_hlds__stm_expand__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;

    {
      transform_hlds__stm_expand__succeeded = transform_hlds__stm_expand____Unify____stm_info_0_0(((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), ((MR_Word) transform_hlds__stm_expand__wrapper_arg_2));
    }
    return transform_hlds__stm_expand__succeeded;
  }
}

static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_info_0_0_10001(
  MR_Box * transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box transform_hlds__stm_expand__wrapper_arg_2,
  MR_Box transform_hlds__stm_expand__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__stm_expand__conv0_HeadVar__1_1;

    {
      transform_hlds__stm_expand____Compare____stm_info_0_0(&transform_hlds__stm_expand__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__stm_expand__wrapper_arg_2), ((MR_Word) transform_hlds__stm_expand__wrapper_arg_3));
    }
    *transform_hlds__stm_expand__wrapper_arg_1 = ((MR_Box) (transform_hlds__stm_expand__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_new_pred_info_0_0_10001(
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box transform_hlds__stm_expand__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;

    {
      transform_hlds__stm_expand__succeeded = transform_hlds__stm_expand____Unify____stm_new_pred_info_0_0(((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), ((MR_Word) transform_hlds__stm_expand__wrapper_arg_2));
    }
    return transform_hlds__stm_expand__succeeded;
  }
}

static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_new_pred_info_0_0_10001(
  MR_Box * transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box transform_hlds__stm_expand__wrapper_arg_2,
  MR_Box transform_hlds__stm_expand__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__stm_expand__conv0_HeadVar__1_1;

    {
      transform_hlds__stm_expand____Compare____stm_new_pred_info_0_0(&transform_hlds__stm_expand__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__stm_expand__wrapper_arg_2), ((MR_Word) transform_hlds__stm_expand__wrapper_arg_3));
    }
    *transform_hlds__stm_expand__wrapper_arg_1 = ((MR_Box) (transform_hlds__stm_expand__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_51_93_95_48_6_p_0(
  MR_Word transform_hlds__stm_expand__V_29_29,
  MR_Word transform_hlds__stm_expand__V_30_30,
  MR_Word transform_hlds__stm_expand__Src1_8,
  MR_Word transform_hlds__stm_expand__Src2_9,
  MR_Word * transform_hlds__stm_expand__Dest_10,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Accum_0_18,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Accum_19)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__Src1_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (transform_hlds__stm_expand__succeeded)
      transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__Src2_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (transform_hlds__stm_expand__succeeded)
      {
        *transform_hlds__stm_expand__Dest_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__stm_expand__STATE_VARIABLE_Accum_19 = transform_hlds__stm_expand__STATE_VARIABLE_Accum_0_18;
      }
    else
      {
        MR_Word transform_hlds__stm_expand__S_12;
        MR_Word transform_hlds__stm_expand__Ss_13;
        MR_Word transform_hlds__stm_expand__T_14;
        MR_Word transform_hlds__stm_expand__Ts_15;

        transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__Src1_8)) == (MR_mktag((MR_Integer) 1)));
        if (transform_hlds__stm_expand__succeeded)
          {
            transform_hlds__stm_expand__S_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src1_8, (MR_Integer) 0)));
            transform_hlds__stm_expand__Ss_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src1_8, (MR_Integer) 1)));
            transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__Src2_9)) == (MR_mktag((MR_Integer) 1)));
            if (transform_hlds__stm_expand__succeeded)
              {
                transform_hlds__stm_expand__T_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src2_9, (MR_Integer) 0)));
                transform_hlds__stm_expand__Ts_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src2_9, (MR_Integer) 1)));
              }
          }
        if (transform_hlds__stm_expand__succeeded)
          {
            MR_Word transform_hlds__stm_expand__R_16;
            MR_Word transform_hlds__stm_expand__Rs_17;
            MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Accum_20_20;

            {
              transform_hlds__stm_expand__IntroducedFrom__pred__create_nested_goal__800__1_7_p_0(transform_hlds__stm_expand__V_29_29, transform_hlds__stm_expand__V_30_30, transform_hlds__stm_expand__S_12, transform_hlds__stm_expand__T_14, &transform_hlds__stm_expand__R_16, transform_hlds__stm_expand__STATE_VARIABLE_Accum_0_18, &transform_hlds__stm_expand__STATE_VARIABLE_Accum_20_20);
            }
            {
              transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_51_93_95_48_6_p_0(transform_hlds__stm_expand__V_29_29, transform_hlds__stm_expand__V_30_30, transform_hlds__stm_expand__Ss_13, transform_hlds__stm_expand__Ts_15, &transform_hlds__stm_expand__Rs_17, transform_hlds__stm_expand__STATE_VARIABLE_Accum_20_20, transform_hlds__stm_expand__STATE_VARIABLE_Accum_19);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__stm_expand__Dest_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__R_16));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__stm_expand__Rs_17));
            }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.map2_in_foldl\'/6", (MR_String) "source list lengths mismatch");
              return;
            }
          }
      }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_51_93_95_48_6_p_0(
  MR_Word transform_hlds__stm_expand__V_29_29,
  MR_Word transform_hlds__stm_expand__V_30_30,
  MR_Word transform_hlds__stm_expand__Src1_8,
  MR_Word transform_hlds__stm_expand__Src2_9,
  MR_Word * transform_hlds__stm_expand__Dest_10,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Accum_0_18,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Accum_19)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__Src1_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (transform_hlds__stm_expand__succeeded)
      transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__Src2_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (transform_hlds__stm_expand__succeeded)
      {
        *transform_hlds__stm_expand__Dest_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__stm_expand__STATE_VARIABLE_Accum_19 = transform_hlds__stm_expand__STATE_VARIABLE_Accum_0_18;
      }
    else
      {
        MR_Word transform_hlds__stm_expand__S_12;
        MR_Word transform_hlds__stm_expand__Ss_13;
        MR_Word transform_hlds__stm_expand__T_14;
        MR_Word transform_hlds__stm_expand__Ts_15;

        transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__Src1_8)) == (MR_mktag((MR_Integer) 1)));
        if (transform_hlds__stm_expand__succeeded)
          {
            transform_hlds__stm_expand__S_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src1_8, (MR_Integer) 0)));
            transform_hlds__stm_expand__Ss_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src1_8, (MR_Integer) 1)));
            transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__Src2_9)) == (MR_mktag((MR_Integer) 1)));
            if (transform_hlds__stm_expand__succeeded)
              {
                transform_hlds__stm_expand__T_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src2_9, (MR_Integer) 0)));
                transform_hlds__stm_expand__Ts_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src2_9, (MR_Integer) 1)));
              }
          }
        if (transform_hlds__stm_expand__succeeded)
          {
            MR_Word transform_hlds__stm_expand__R_16;
            MR_Word transform_hlds__stm_expand__Rs_17;
            MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Accum_20_20;

            {
              transform_hlds__stm_expand__IntroducedFrom__pred__create_wrapper_for_goal_list__1359__1_7_p_0(transform_hlds__stm_expand__V_29_29, transform_hlds__stm_expand__V_30_30, transform_hlds__stm_expand__S_12, transform_hlds__stm_expand__T_14, &transform_hlds__stm_expand__R_16, transform_hlds__stm_expand__STATE_VARIABLE_Accum_0_18, &transform_hlds__stm_expand__STATE_VARIABLE_Accum_20_20);
            }
            {
              transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_51_93_95_48_6_p_0(transform_hlds__stm_expand__V_29_29, transform_hlds__stm_expand__V_30_30, transform_hlds__stm_expand__Ss_13, transform_hlds__stm_expand__Ts_15, &transform_hlds__stm_expand__Rs_17, transform_hlds__stm_expand__STATE_VARIABLE_Accum_20_20, transform_hlds__stm_expand__STATE_VARIABLE_Accum_19);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__stm_expand__Dest_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__R_16));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__stm_expand__Rs_17));
            }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.map2_in_foldl\'/6", (MR_String) "source list lengths mismatch");
              return;
            }
          }
      }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_54_50_53_95_95_49_95_95_91_50_93_95_48_3_p_0(
  MR_Word transform_hlds__stm_expand__HeadVar__1_12,
  MR_Word * transform_hlds__stm_expand__HeadVar__3_20)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;

    *transform_hlds__stm_expand__HeadVar__3_20 = transform_hlds__stm_expand__HeadVar__1_12;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_54_50_52_95_95_49_95_95_91_50_93_95_48_3_p_0(
  MR_Word transform_hlds__stm_expand__HeadVar__1_10,
  MR_Word * transform_hlds__stm_expand__HeadVar__3_14)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;

    *transform_hlds__stm_expand__HeadVar__3_14 = transform_hlds__stm_expand__HeadVar__1_10;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_114_95_101_108_115_101_95_101_110_100_95_98_114_97_110_99_104_95_95_49_56_48_56_95_95_49_95_95_91_49_93_95_48_4_p_0(
  MR_Word * transform_hlds__stm_expand__LambdaHeadVar__2_42,
  MR_Word transform_hlds__stm_expand__LambdaHeadVar__3_43,
  MR_Word * transform_hlds__stm_expand__LambdaHeadVar__4_44)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__V_45_45;

    {
      transform_hlds__stm_expand__V_45_45 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
    {
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_45_45, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[25]), transform_hlds__stm_expand__LambdaHeadVar__2_42, transform_hlds__stm_expand__LambdaHeadVar__3_43, transform_hlds__stm_expand__LambdaHeadVar__4_44);
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_p_0_1(
  MR_Box transform_hlds__stm_expand__closure_arg,
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_3,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_4,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_5,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_6)
{
  {
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
    MR_Word transform_hlds__stm_expand__conv4_Goal_8;
    MR_Word transform_hlds__stm_expand__conv3_StmOutDI_9;
    MR_Word transform_hlds__stm_expand__conv2_StmOutUO_10;
    MR_Word transform_hlds__stm_expand__conv1_StmInDI_11;
    MR_Word transform_hlds__stm_expand__conv0_StmInUO_12;

    {
      transform_hlds__stm_expand__strip_goal_calls_6_p_0(((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), &transform_hlds__stm_expand__conv4_Goal_8, &transform_hlds__stm_expand__conv3_StmOutDI_9, &transform_hlds__stm_expand__conv2_StmOutUO_10, &transform_hlds__stm_expand__conv1_StmInDI_11, &transform_hlds__stm_expand__conv0_StmInUO_12);
    }
    *transform_hlds__stm_expand__wrapper_arg_2 = ((MR_Box) (transform_hlds__stm_expand__conv4_Goal_8));
    *transform_hlds__stm_expand__wrapper_arg_3 = ((MR_Box) (transform_hlds__stm_expand__conv3_StmOutDI_9));
    *transform_hlds__stm_expand__wrapper_arg_4 = ((MR_Box) (transform_hlds__stm_expand__conv2_StmOutUO_10));
    *transform_hlds__stm_expand__wrapper_arg_5 = ((MR_Box) (transform_hlds__stm_expand__conv1_StmInDI_11));
    *transform_hlds__stm_expand__wrapper_arg_6 = ((MR_Box) (transform_hlds__stm_expand__conv0_StmInUO_12));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_p_0(
  MR_Word transform_hlds__stm_expand__InitInstmap_12,
  MR_Word transform_hlds__stm_expand__FinalInstmap_13,
  MR_Word transform_hlds__stm_expand__OuterDI_14,
  MR_Word transform_hlds__stm_expand__OuterUO_15,
  MR_Word transform_hlds__stm_expand__AtomicGoal0_18,
  MR_Word transform_hlds__stm_expand__OrElseGoals0_19,
  MR_Word * transform_hlds__stm_expand__Goal_20,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_54,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_55)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_145_145;
    MR_Word transform_hlds__stm_expand__TypeInfo_146_146;
    MR_Word transform_hlds__stm_expand__AtomicGoal_22;
    MR_Word transform_hlds__stm_expand__MainOuterDI_23;
    MR_Word transform_hlds__stm_expand__MainOuterUO_24;
    MR_Word transform_hlds__stm_expand__MainInnerDI_25;
    MR_Word transform_hlds__stm_expand__MainInnerUO_26;
    MR_Word transform_hlds__stm_expand__OrElseGoals_27;
    MR_Word transform_hlds__stm_expand__OrElseInnerDIs_30;
    MR_Word transform_hlds__stm_expand__OrElseInnerUOs_31;
    MR_Word transform_hlds__stm_expand__V_28_28;
    MR_Word transform_hlds__stm_expand__V_29_29;

    {
      transform_hlds__stm_expand__strip_goal_calls_6_p_0(transform_hlds__stm_expand__AtomicGoal0_18, &transform_hlds__stm_expand__AtomicGoal_22, &transform_hlds__stm_expand__MainOuterDI_23, &transform_hlds__stm_expand__MainOuterUO_24, &transform_hlds__stm_expand__MainInnerDI_25, &transform_hlds__stm_expand__MainInnerUO_26);
    }
    transform_hlds__stm_expand__TypeCtorInfo_145_145 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    transform_hlds__stm_expand__TypeInfo_146_146 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0];
    {
      mercury__list__map5_7_p_0(transform_hlds__stm_expand__TypeCtorInfo_145_145, transform_hlds__stm_expand__TypeCtorInfo_145_145, transform_hlds__stm_expand__TypeInfo_146_146, transform_hlds__stm_expand__TypeInfo_146_146, transform_hlds__stm_expand__TypeInfo_146_146, transform_hlds__stm_expand__TypeInfo_146_146, (MR_Word) &transform_hlds__stm_expand_scalar_common_2[14], transform_hlds__stm_expand__OrElseGoals0_19, &transform_hlds__stm_expand__OrElseGoals_27, &transform_hlds__stm_expand__V_28_28, &transform_hlds__stm_expand__V_29_29, &transform_hlds__stm_expand__OrElseInnerDIs_30, &transform_hlds__stm_expand__OrElseInnerUOs_31);
    }
    if ((transform_hlds__stm_expand__OrElseGoals_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word transform_hlds__stm_expand__CopyDIVars_32;
        MR_Word transform_hlds__stm_expand__CopyUOVars_33;
        MR_Word transform_hlds__stm_expand__V_108_108;
        MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_109_109;
        MR_Word transform_hlds__stm_expand__V_110_110;
        MR_Word transform_hlds__stm_expand__V_111_111;
        MR_Word transform_hlds__stm_expand__V_112_112;
        MR_Word transform_hlds__stm_expand__V_114_114;
        MR_Word transform_hlds__stm_expand__V_115_115;
        MR_Word transform_hlds__stm_expand__V_116_116;
        MR_Word transform_hlds__stm_expand__V_117_117;
        MR_Word transform_hlds__stm_expand__V_118_118;

        {
          transform_hlds__stm_expand__V_110_110 = parse_tree__prog_mode__uo_mode_0_f_0();
        }
        {
          transform_hlds__stm_expand__V_111_111 = parse_tree__prog_mode__di_mode_0_f_0();
        }
        {
          transform_hlds__stm_expand__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_108_108, 0) = ((MR_Box) (transform_hlds__stm_expand__V_110_110));
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_108_108, 1) = ((MR_Box) (transform_hlds__stm_expand__V_111_111));
        }
        {
          transform_hlds__stm_expand__create_var_unify_stm_6_p_0(transform_hlds__stm_expand__MainInnerDI_25, transform_hlds__stm_expand__MainOuterDI_23, transform_hlds__stm_expand__V_108_108, &transform_hlds__stm_expand__CopyDIVars_32, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_54, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_109_109);
        }
        {
          transform_hlds__stm_expand__V_114_114 = parse_tree__prog_mode__uo_mode_0_f_0();
        }
        {
          transform_hlds__stm_expand__V_115_115 = parse_tree__prog_mode__di_mode_0_f_0();
        }
        {
          transform_hlds__stm_expand__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_112_112, 0) = ((MR_Box) (transform_hlds__stm_expand__V_114_114));
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_112_112, 1) = ((MR_Box) (transform_hlds__stm_expand__V_115_115));
        }
        {
          transform_hlds__stm_expand__create_var_unify_stm_6_p_0(transform_hlds__stm_expand__MainOuterUO_24, transform_hlds__stm_expand__MainInnerUO_26, transform_hlds__stm_expand__V_112_112, &transform_hlds__stm_expand__CopyUOVars_33, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_109_109, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_55);
        }
        {
          transform_hlds__stm_expand__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_118_118, 0) = ((MR_Box) (transform_hlds__stm_expand__CopyUOVars_33));
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          transform_hlds__stm_expand__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_117_117, 0) = ((MR_Box) (transform_hlds__stm_expand__AtomicGoal_22));
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_117_117, 1) = ((MR_Box) (transform_hlds__stm_expand__V_118_118));
        }
        {
          transform_hlds__stm_expand__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_116_116, 0) = ((MR_Box) (transform_hlds__stm_expand__CopyDIVars_32));
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_116_116, 1) = ((MR_Box) (transform_hlds__stm_expand__V_117_117));
        }
        {
          transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_116_116, transform_hlds__stm_expand__Goal_20);
        }
      }
    else
      {
        MR_Word transform_hlds__stm_expand__GoalList_37;
        MR_Word transform_hlds__stm_expand__AtomicGoalVars_38;
        MR_Word transform_hlds__stm_expand__AtomicGoalVarList1_39;
        MR_Word transform_hlds__stm_expand__OutputTypes_42;
        MR_Word transform_hlds__stm_expand__ResultType_43;
        MR_Word transform_hlds__stm_expand__ResultVar_44;
        MR_Word transform_hlds__stm_expand__PPIDList_52;
        MR_Word transform_hlds__stm_expand__OrElseCall_53;
        MR_Word transform_hlds__stm_expand__V_57_57;
        MR_Word transform_hlds__stm_expand__V_58_58;
        MR_Word transform_hlds__stm_expand__V_59_59;
        MR_Word transform_hlds__stm_expand__V_60_60;
        MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_61_61;
        MR_Word transform_hlds__stm_expand__V_62_62;
        MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_87_87;
        MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_94_94;
        MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_95_95;
        MR_Word transform_hlds__stm_expand__V_96_96;
        MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_97_97;
        MR_Word transform_hlds__stm_expand__V_98_98;
        MR_Word transform_hlds__stm_expand__V_99_99;
        MR_Word transform_hlds__stm_expand__V_100_100;
        MR_Word transform_hlds__stm_expand__V_102_102;
        MR_Word transform_hlds__stm_expand__V_103_103;
        MR_Word transform_hlds__stm_expand__V_104_104;
        MR_Word transform_hlds__stm_expand__V_105_105;
        MR_Word transform_hlds__stm_expand__V_106_106;
        MR_Word transform_hlds__stm_expand__CopyDIVars_125;
        MR_Word transform_hlds__stm_expand__CopyUOVars_126;
        MR_Word transform_hlds__stm_expand__V_41_41;

        {
          transform_hlds__stm_expand__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_57_57, 0) = ((MR_Box) (transform_hlds__stm_expand__AtomicGoal0_18));
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_57_57, 1) = ((MR_Box) (transform_hlds__stm_expand__OrElseGoals0_19));
        }
        {
          transform_hlds__stm_expand__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_58_58, 0) = ((MR_Box) (transform_hlds__stm_expand__MainInnerDI_25));
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_58_58, 1) = ((MR_Box) (transform_hlds__stm_expand__OrElseInnerDIs_30));
        }
        {
          transform_hlds__stm_expand__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_59_59, 0) = ((MR_Box) (transform_hlds__stm_expand__MainInnerUO_26));
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_59_59, 1) = ((MR_Box) (transform_hlds__stm_expand__OrElseInnerUOs_31));
        }
        {
          transform_hlds__stm_expand__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_62_62, 0) = ((MR_Box) (transform_hlds__stm_expand__OuterUO_15));
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          transform_hlds__stm_expand__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_60_60, 0) = ((MR_Box) (transform_hlds__stm_expand__OuterDI_14));
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_60_60, 1) = ((MR_Box) (transform_hlds__stm_expand__V_62_62));
        }
        {
          transform_hlds__stm_expand__calc_pred_variables_list_9_p_0(transform_hlds__stm_expand__InitInstmap_12, transform_hlds__stm_expand__FinalInstmap_13, transform_hlds__stm_expand__V_57_57, transform_hlds__stm_expand__V_58_58, transform_hlds__stm_expand__V_59_59, transform_hlds__stm_expand__V_60_60, &transform_hlds__stm_expand__AtomicGoalVarList1_39, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_54, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_61_61);
        }
        {
          transform_hlds__stm_expand__GoalList_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalList_37, 0) = ((MR_Box) (transform_hlds__stm_expand__AtomicGoal_22));
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalList_37, 1) = ((MR_Box) (transform_hlds__stm_expand__OrElseGoals_27));
        }
        {
          transform_hlds__stm_expand__common_goal_vars_from_list_2_p_0(transform_hlds__stm_expand__AtomicGoalVarList1_39, &transform_hlds__stm_expand__AtomicGoalVars_38);
        }
        {
          transform_hlds__stm_expand__get_input_output_types_4_p_0(transform_hlds__stm_expand__AtomicGoalVars_38, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_61_61, &transform_hlds__stm_expand__V_41_41, &transform_hlds__stm_expand__OutputTypes_42);
        }
        {
          transform_hlds__stm_expand__make_return_type_2_p_0(transform_hlds__stm_expand__OutputTypes_42, &transform_hlds__stm_expand__ResultType_43);
        }
        {
          transform_hlds__stm_expand__create_aux_variable_stm_5_p_0(transform_hlds__stm_expand__ResultType_43, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[24]), &transform_hlds__stm_expand__ResultVar_44, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_61_61, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_87_87);
        }
        {
          transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_51_95_95_91_51_93_95_48_6_p_0(transform_hlds__stm_expand__ResultType_43, transform_hlds__stm_expand__ResultVar_44, transform_hlds__stm_expand__GoalList_37, transform_hlds__stm_expand__AtomicGoalVarList1_39, &transform_hlds__stm_expand__PPIDList_52, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_87_87, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_94_94);
        }
        {
          transform_hlds__stm_expand__create_or_else_pred_8_p_0(transform_hlds__stm_expand__AtomicGoalVars_38, transform_hlds__stm_expand__AtomicGoalVarList1_39, transform_hlds__stm_expand__PPIDList_52, transform_hlds__stm_expand__MainInnerDI_25, transform_hlds__stm_expand__MainInnerUO_26, &transform_hlds__stm_expand__OrElseCall_53, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_94_94, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_95_95);
        }
        {
          transform_hlds__stm_expand__V_98_98 = parse_tree__prog_mode__uo_mode_0_f_0();
        }
        {
          transform_hlds__stm_expand__V_99_99 = parse_tree__prog_mode__di_mode_0_f_0();
        }
        {
          transform_hlds__stm_expand__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_96_96, 0) = ((MR_Box) (transform_hlds__stm_expand__V_98_98));
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_96_96, 1) = ((MR_Box) (transform_hlds__stm_expand__V_99_99));
        }
        {
          transform_hlds__stm_expand__create_var_unify_stm_6_p_0(transform_hlds__stm_expand__MainInnerDI_25, transform_hlds__stm_expand__MainOuterDI_23, transform_hlds__stm_expand__V_96_96, &transform_hlds__stm_expand__CopyDIVars_125, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_95_95, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_97_97);
        }
        {
          transform_hlds__stm_expand__V_102_102 = parse_tree__prog_mode__uo_mode_0_f_0();
        }
        {
          transform_hlds__stm_expand__V_103_103 = parse_tree__prog_mode__di_mode_0_f_0();
        }
        {
          transform_hlds__stm_expand__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_100_100, 0) = ((MR_Box) (transform_hlds__stm_expand__V_102_102));
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_100_100, 1) = ((MR_Box) (transform_hlds__stm_expand__V_103_103));
        }
        {
          transform_hlds__stm_expand__create_var_unify_stm_6_p_0(transform_hlds__stm_expand__MainOuterUO_24, transform_hlds__stm_expand__MainInnerUO_26, transform_hlds__stm_expand__V_100_100, &transform_hlds__stm_expand__CopyUOVars_126, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_97_97, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_55);
        }
        {
          transform_hlds__stm_expand__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_106_106, 0) = ((MR_Box) (transform_hlds__stm_expand__CopyUOVars_126));
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_106_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          transform_hlds__stm_expand__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_105_105, 0) = ((MR_Box) (transform_hlds__stm_expand__OrElseCall_53));
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_105_105, 1) = ((MR_Box) (transform_hlds__stm_expand__V_106_106));
        }
        {
          transform_hlds__stm_expand__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_104_104, 0) = ((MR_Box) (transform_hlds__stm_expand__CopyDIVars_125));
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_104_104, 1) = ((MR_Box) (transform_hlds__stm_expand__V_105_105));
        }
        {
          transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_104_104, transform_hlds__stm_expand__Goal_20);
        }
      }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_p_0_1(
  MR_Box transform_hlds__stm_expand__closure_arg,
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_3,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_4,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_5,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_6)
{
  {
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
    MR_Word transform_hlds__stm_expand__conv4_Goal_8;
    MR_Word transform_hlds__stm_expand__conv3_StmOutDI_9;
    MR_Word transform_hlds__stm_expand__conv2_StmOutUO_10;
    MR_Word transform_hlds__stm_expand__conv1_StmInDI_11;
    MR_Word transform_hlds__stm_expand__conv0_StmInUO_12;

    {
      transform_hlds__stm_expand__strip_goal_calls_6_p_0(((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), &transform_hlds__stm_expand__conv4_Goal_8, &transform_hlds__stm_expand__conv3_StmOutDI_9, &transform_hlds__stm_expand__conv2_StmOutUO_10, &transform_hlds__stm_expand__conv1_StmInDI_11, &transform_hlds__stm_expand__conv0_StmInUO_12);
    }
    *transform_hlds__stm_expand__wrapper_arg_2 = ((MR_Box) (transform_hlds__stm_expand__conv4_Goal_8));
    *transform_hlds__stm_expand__wrapper_arg_3 = ((MR_Box) (transform_hlds__stm_expand__conv3_StmOutDI_9));
    *transform_hlds__stm_expand__wrapper_arg_4 = ((MR_Box) (transform_hlds__stm_expand__conv2_StmOutUO_10));
    *transform_hlds__stm_expand__wrapper_arg_5 = ((MR_Box) (transform_hlds__stm_expand__conv1_StmInDI_11));
    *transform_hlds__stm_expand__wrapper_arg_6 = ((MR_Box) (transform_hlds__stm_expand__conv0_StmInUO_12));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_p_0(
  MR_Word transform_hlds__stm_expand__GoalType_11,
  MR_Word transform_hlds__stm_expand__InitInstmap_12,
  MR_Word transform_hlds__stm_expand__FinalInstmap_13,
  MR_Word transform_hlds__stm_expand__Outer_14,
  MR_Word transform_hlds__stm_expand__MainGoal_16,
  MR_Word transform_hlds__stm_expand__OrElseGoals_17,
  MR_Word * transform_hlds__stm_expand__FinalGoal_18,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_26)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__OuterDI_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Outer_14, (MR_Integer) 0)));
    MR_Word transform_hlds__stm_expand__OuterUO_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Outer_14, (MR_Integer) 1)));
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34_34;
    MR_Word transform_hlds__stm_expand__V_37_37;
    MR_Word transform_hlds__stm_expand__V_38_38;
    MR_Integer transform_hlds__stm_expand__V_39_39;
    MR_Word transform_hlds__stm_expand__V_40_40;
    MR_Word transform_hlds__stm_expand__V_41_41;
    MR_Integer transform_hlds__stm_expand__V_43_43;
    MR_Word transform_hlds__stm_expand__V_42_42;

    switch (transform_hlds__stm_expand__GoalType_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_110_101_115_116_101_100_95_103_111_97_108_95_95_91_53_44_32_54_93_95_48_11_p_0(transform_hlds__stm_expand__InitInstmap_12, transform_hlds__stm_expand__FinalInstmap_13, transform_hlds__stm_expand__OuterDI_20, transform_hlds__stm_expand__OuterUO_21, transform_hlds__stm_expand__MainGoal_16, transform_hlds__stm_expand__OrElseGoals_17, transform_hlds__stm_expand__FinalGoal_18, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34_34);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__stm_expand__TypeCtorInfo_50_82;
          MR_Word transform_hlds__stm_expand__TypeInfo_51_83;
          MR_Word transform_hlds__stm_expand__AtomicGoal_56;
          MR_Word transform_hlds__stm_expand__MainInnerDI_59;
          MR_Word transform_hlds__stm_expand__MainInnerUO_60;
          MR_Word transform_hlds__stm_expand__OrElseGoals_61;
          MR_Word transform_hlds__stm_expand__OrElseInnerDIs_64;
          MR_Word transform_hlds__stm_expand__OrElseInnerUOs_65;
          MR_Word transform_hlds__stm_expand__AtomicGoalVarList_66;
          MR_Word transform_hlds__stm_expand__V_68_68;
          MR_Word transform_hlds__stm_expand__V_69_69;
          MR_Word transform_hlds__stm_expand__V_70_70;
          MR_Word transform_hlds__stm_expand__V_71_71;
          MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_40_72;
          MR_Word transform_hlds__stm_expand__V_73_73;
          MR_Word transform_hlds__stm_expand__V_57_57;
          MR_Word transform_hlds__stm_expand__V_58_58;
          MR_Word transform_hlds__stm_expand__V_62_62;
          MR_Word transform_hlds__stm_expand__V_63_63;

          {
            transform_hlds__stm_expand__strip_goal_calls_6_p_0(transform_hlds__stm_expand__MainGoal_16, &transform_hlds__stm_expand__AtomicGoal_56, &transform_hlds__stm_expand__V_57_57, &transform_hlds__stm_expand__V_58_58, &transform_hlds__stm_expand__MainInnerDI_59, &transform_hlds__stm_expand__MainInnerUO_60);
          }
          transform_hlds__stm_expand__TypeCtorInfo_50_82 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
          transform_hlds__stm_expand__TypeInfo_51_83 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0];
          {
            mercury__list__map5_7_p_0(transform_hlds__stm_expand__TypeCtorInfo_50_82, transform_hlds__stm_expand__TypeCtorInfo_50_82, transform_hlds__stm_expand__TypeInfo_51_83, transform_hlds__stm_expand__TypeInfo_51_83, transform_hlds__stm_expand__TypeInfo_51_83, transform_hlds__stm_expand__TypeInfo_51_83, (MR_Word) &transform_hlds__stm_expand_scalar_common_2[13], transform_hlds__stm_expand__OrElseGoals_17, &transform_hlds__stm_expand__OrElseGoals_61, &transform_hlds__stm_expand__V_62_62, &transform_hlds__stm_expand__V_63_63, &transform_hlds__stm_expand__OrElseInnerDIs_64, &transform_hlds__stm_expand__OrElseInnerUOs_65);
          }
          {
            transform_hlds__stm_expand__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_68_68, 0) = ((MR_Box) (transform_hlds__stm_expand__MainGoal_16));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_68_68, 1) = ((MR_Box) (transform_hlds__stm_expand__OrElseGoals_17));
          }
          {
            transform_hlds__stm_expand__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_69_69, 0) = ((MR_Box) (transform_hlds__stm_expand__MainInnerDI_59));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_69_69, 1) = ((MR_Box) (transform_hlds__stm_expand__OrElseInnerDIs_64));
          }
          {
            transform_hlds__stm_expand__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_70_70, 0) = ((MR_Box) (transform_hlds__stm_expand__MainInnerUO_60));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_70_70, 1) = ((MR_Box) (transform_hlds__stm_expand__OrElseInnerUOs_65));
          }
          {
            transform_hlds__stm_expand__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_73_73, 0) = ((MR_Box) (transform_hlds__stm_expand__OuterUO_21));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            transform_hlds__stm_expand__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_71_71, 0) = ((MR_Box) (transform_hlds__stm_expand__OuterDI_20));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_71_71, 1) = ((MR_Box) (transform_hlds__stm_expand__V_73_73));
          }
          {
            transform_hlds__stm_expand__calc_pred_variables_list_9_p_0(transform_hlds__stm_expand__InitInstmap_12, transform_hlds__stm_expand__FinalInstmap_13, transform_hlds__stm_expand__V_68_68, transform_hlds__stm_expand__V_69_69, transform_hlds__stm_expand__V_70_70, transform_hlds__stm_expand__V_71_71, &transform_hlds__stm_expand__AtomicGoalVarList_66, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_40_72);
          }
          {
            transform_hlds__stm_expand__create_top_level_pred_8_p_0(transform_hlds__stm_expand__AtomicGoalVarList_66, transform_hlds__stm_expand__OuterDI_20, transform_hlds__stm_expand__OuterUO_21, transform_hlds__stm_expand__AtomicGoal_56, transform_hlds__stm_expand__OrElseGoals_61, transform_hlds__stm_expand__FinalGoal_18, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_40_72, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34_34);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.stm_create_actual_goal\'/10", (MR_String) "unknown atomic goal type");
            return;
          }
        }
        break;
    }
    transform_hlds__stm_expand__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34_34, (MR_Integer) 0)));
    transform_hlds__stm_expand__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34_34, (MR_Integer) 1)));
    transform_hlds__stm_expand__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34_34, (MR_Integer) 2)));
    transform_hlds__stm_expand__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34_34, (MR_Integer) 3)));
    transform_hlds__stm_expand__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34_34, (MR_Integer) 4)));
    transform_hlds__stm_expand__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34_34, (MR_Integer) 5)));
    transform_hlds__stm_expand__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34_34, (MR_Integer) 6)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_26 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__V_37_37));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_38_38));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__V_39_39));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__V_40_40));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__V_41_41));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__V_43_43));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__map3_in_foldl__ho1_7_p_0(
  MR_Word transform_hlds__stm_expand__Src1_9,
  MR_Word transform_hlds__stm_expand__Src2_10,
  MR_Word transform_hlds__stm_expand__Src3_11,
  MR_Word * transform_hlds__stm_expand__Dest_12,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Accum_0_22,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Accum_23)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__Src1_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (transform_hlds__stm_expand__succeeded)
      {
        transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__Src2_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (transform_hlds__stm_expand__succeeded)
          transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__Src3_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (transform_hlds__stm_expand__succeeded)
      {
        *transform_hlds__stm_expand__Dest_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__stm_expand__STATE_VARIABLE_Accum_23 = transform_hlds__stm_expand__STATE_VARIABLE_Accum_0_22;
      }
    else
      {
        MR_Word transform_hlds__stm_expand__S_14;
        MR_Word transform_hlds__stm_expand__Ss_15;
        MR_Word transform_hlds__stm_expand__T_16;
        MR_Word transform_hlds__stm_expand__Ts_17;
        MR_Word transform_hlds__stm_expand__U_18;
        MR_Word transform_hlds__stm_expand__Us_19;

        transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__Src1_9)) == (MR_mktag((MR_Integer) 1)));
        if (transform_hlds__stm_expand__succeeded)
          {
            transform_hlds__stm_expand__S_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src1_9, (MR_Integer) 0)));
            transform_hlds__stm_expand__Ss_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src1_9, (MR_Integer) 1)));
            transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__Src2_10)) == (MR_mktag((MR_Integer) 1)));
            if (transform_hlds__stm_expand__succeeded)
              {
                transform_hlds__stm_expand__T_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src2_10, (MR_Integer) 0)));
                transform_hlds__stm_expand__Ts_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src2_10, (MR_Integer) 1)));
                transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__Src3_11)) == (MR_mktag((MR_Integer) 1)));
                if (transform_hlds__stm_expand__succeeded)
                  {
                    transform_hlds__stm_expand__U_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src3_11, (MR_Integer) 0)));
                    transform_hlds__stm_expand__Us_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Src3_11, (MR_Integer) 1)));
                  }
              }
          }
        if (transform_hlds__stm_expand__succeeded)
          {
            MR_Word transform_hlds__stm_expand__R_20;
            MR_Word transform_hlds__stm_expand__Rs_21;
            MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Accum_24_24;

            {
              transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1822__1_6_p_0(transform_hlds__stm_expand__S_14, transform_hlds__stm_expand__T_16, transform_hlds__stm_expand__U_18, &transform_hlds__stm_expand__R_20, transform_hlds__stm_expand__STATE_VARIABLE_Accum_0_22, &transform_hlds__stm_expand__STATE_VARIABLE_Accum_24_24);
            }
            {
              transform_hlds__stm_expand__map3_in_foldl__ho1_7_p_0(transform_hlds__stm_expand__Ss_15, transform_hlds__stm_expand__Ts_17, transform_hlds__stm_expand__Us_19, &transform_hlds__stm_expand__Rs_21, transform_hlds__stm_expand__STATE_VARIABLE_Accum_24_24, transform_hlds__stm_expand__STATE_VARIABLE_Accum_23);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__stm_expand__Dest_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__R_20));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__stm_expand__Rs_21));
            }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.map3_in_foldl\'/7", (MR_String) "source list lengths mismatch");
              return;
            }
          }
      }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2625__1_3_p_0(
  MR_Word transform_hlds__stm_expand__HeadVar__1_12,
  MR_Word transform_hlds__stm_expand__HeadVar__2_19,
  MR_Word * transform_hlds__stm_expand__HeadVar__3_20)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;

    {
      transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_54_50_53_95_95_49_95_95_91_50_93_95_48_3_p_0(transform_hlds__stm_expand__HeadVar__1_12, transform_hlds__stm_expand__HeadVar__3_20);
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2624__1_3_p_0(
  MR_Word transform_hlds__stm_expand__HeadVar__1_10,
  MR_Word transform_hlds__stm_expand__HeadVar__2_13,
  MR_Word * transform_hlds__stm_expand__HeadVar__3_14)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;

    {
      transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_103_101_116_95_105_110_112_117_116_95_111_117_116_112_117_116_95_109_111_100_101_115_95_95_50_54_50_52_95_95_49_95_95_91_50_93_95_48_3_p_0(transform_hlds__stm_expand__HeadVar__1_10, transform_hlds__stm_expand__HeadVar__3_14);
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__make_type_info__2387__1_2_p_0(
  MR_Word transform_hlds__stm_expand__PolySpecs_20,
  MR_Word transform_hlds__stm_expand__HeadVar__2_28)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;

    {
      transform_hlds__stm_expand__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[4], ((MR_Box) (transform_hlds__stm_expand__PolySpecs_20)), ((MR_Box) (transform_hlds__stm_expand__HeadVar__2_28)));
    }
    return transform_hlds__stm_expand__succeeded;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__rename_var_in_wrapper_pred__2105__1_4_p_0(
  MR_Word transform_hlds__stm_expand__ResultVar0_10,
  MR_Word transform_hlds__stm_expand__ResultVar_12,
  MR_Word transform_hlds__stm_expand__LambdaHeadVar__1_35,
  MR_Word * transform_hlds__stm_expand__LambdaHeadVar__2_36)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;

    {
      transform_hlds__stm_expand__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[0], ((MR_Box) (transform_hlds__stm_expand__LambdaHeadVar__1_35)), ((MR_Box) (transform_hlds__stm_expand__ResultVar0_10)));
    }
    if (transform_hlds__stm_expand__succeeded)
      *transform_hlds__stm_expand__LambdaHeadVar__2_36 = transform_hlds__stm_expand__ResultVar_12;
    else
      *transform_hlds__stm_expand__LambdaHeadVar__2_36 = transform_hlds__stm_expand__LambdaHeadVar__1_35;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1822__1_6_p_0(
  MR_Word transform_hlds__stm_expand__LambdaHeadVar__1_51,
  MR_Word transform_hlds__stm_expand__LambdaHeadVar__2_52,
  MR_Word transform_hlds__stm_expand__LambdaHeadVar__3_53,
  MR_Word * transform_hlds__stm_expand__LambdaHeadVar__4_54,
  MR_Word transform_hlds__stm_expand__LambdaHeadVar__5_55,
  MR_Word * transform_hlds__stm_expand__LambdaHeadVar__6_56)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__V_57_57;
    MR_Word transform_hlds__stm_expand__V_63_63;
    MR_Word transform_hlds__stm_expand__V_65_65;
    MR_Word transform_hlds__stm_expand__V_66_66;
    MR_Word transform_hlds__stm_expand__V_67_67;
    MR_Word transform_hlds__stm_expand__V_69_69;
    MR_Word transform_hlds__stm_expand__V_70_70;
    MR_Word transform_hlds__stm_expand__V_71_71;
    MR_Word transform_hlds__stm_expand__V_74_74;
    MR_Word transform_hlds__stm_expand__V_75_75;
    MR_Word transform_hlds__stm_expand__V_77_77;
    MR_Word transform_hlds__stm_expand__V_78_78;

    {
      transform_hlds__stm_expand__V_57_57 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_67_67, 0) = ((MR_Box) (transform_hlds__stm_expand__LambdaHeadVar__3_53));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_66_66, 0) = ((MR_Box) (transform_hlds__stm_expand__LambdaHeadVar__2_52));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_66_66, 1) = ((MR_Box) (transform_hlds__stm_expand__V_67_67));
    }
    {
      transform_hlds__stm_expand__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_63_63, 0) = ((MR_Box) (transform_hlds__stm_expand__LambdaHeadVar__1_51));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_63_63, 1) = ((MR_Box) (transform_hlds__stm_expand__V_66_66));
    }
    transform_hlds__stm_expand__V_71_71 = (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[6]);
    {
      transform_hlds__stm_expand__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_70_70, 0) = ((MR_Box) (transform_hlds__stm_expand__LambdaHeadVar__1_51));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_70_70, 1) = ((MR_Box) (transform_hlds__stm_expand__V_71_71));
    }
    {
      transform_hlds__stm_expand__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_75_75, 0) = ((MR_Box) (transform_hlds__stm_expand__LambdaHeadVar__2_52));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_78_78, 0) = ((MR_Box) (transform_hlds__stm_expand__LambdaHeadVar__3_53));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_78_78, 1) = ((MR_Box) (transform_hlds__stm_expand__V_71_71));
    }
    {
      transform_hlds__stm_expand__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_77_77, 0) = ((MR_Box) (transform_hlds__stm_expand__V_78_78));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_74_74, 0) = ((MR_Box) (transform_hlds__stm_expand__V_75_75));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_74_74, 1) = ((MR_Box) (transform_hlds__stm_expand__V_77_77));
    }
    {
      transform_hlds__stm_expand__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_69_69, 0) = ((MR_Box) (transform_hlds__stm_expand__V_70_70));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_69_69, 1) = ((MR_Box) (transform_hlds__stm_expand__V_74_74));
    }
    {
      transform_hlds__stm_expand__V_65_65 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_69_69);
    }
    {
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_57_57, (MR_String) "stm_merge_nested_logs", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__V_63_63, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_65_65, transform_hlds__stm_expand__LambdaHeadVar__4_54, transform_hlds__stm_expand__LambdaHeadVar__5_55, transform_hlds__stm_expand__LambdaHeadVar__6_56);
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1808__1_4_p_0(
  MR_Word transform_hlds__stm_expand__LambdaHeadVar__1_41,
  MR_Word * transform_hlds__stm_expand__LambdaHeadVar__2_42,
  MR_Word transform_hlds__stm_expand__LambdaHeadVar__3_43,
  MR_Word * transform_hlds__stm_expand__LambdaHeadVar__4_44)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;

    {
      transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_111_114_95_101_108_115_101_95_101_110_100_95_98_114_97_110_99_104_95_95_49_56_48_56_95_95_49_95_95_91_49_93_95_48_4_p_0(transform_hlds__stm_expand__LambdaHeadVar__2_42, transform_hlds__stm_expand__LambdaHeadVar__3_43, transform_hlds__stm_expand__LambdaHeadVar__4_44);
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_wrapper_for_goal_list__1359__1_7_p_0(
  MR_Word transform_hlds__stm_expand__ResultType_10,
  MR_Word transform_hlds__stm_expand__ResultVar_11,
  MR_Word transform_hlds__stm_expand__LambdaHeadVar__1_36,
  MR_Word transform_hlds__stm_expand__LambdaHeadVar__2_37,
  MR_Word * transform_hlds__stm_expand__LambdaHeadVar__3_38,
  MR_Word transform_hlds__stm_expand__LambdaHeadVar__4_39,
  MR_Word * transform_hlds__stm_expand__LambdaHeadVar__5_40)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__V_27_27;
    MR_Word transform_hlds__stm_expand__V_79_79;

    {
      transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_p_0(transform_hlds__stm_expand__LambdaHeadVar__2_37, transform_hlds__stm_expand__ResultType_10, transform_hlds__stm_expand__ResultVar_11, transform_hlds__stm_expand__LambdaHeadVar__1_36, transform_hlds__stm_expand__LambdaHeadVar__3_38, &transform_hlds__stm_expand__V_79_79, &transform_hlds__stm_expand__V_27_27, transform_hlds__stm_expand__LambdaHeadVar__4_39, transform_hlds__stm_expand__LambdaHeadVar__5_40);
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__1006__1_5_p_0(
  MR_Word transform_hlds__stm_expand__IsValidConstVar_15,
  MR_Word transform_hlds__stm_expand__LambdaHeadVar__1_79,
  MR_Word * transform_hlds__stm_expand__LambdaHeadVar__2_80,
  MR_Word transform_hlds__stm_expand__LambdaHeadVar__3_81,
  MR_Word * transform_hlds__stm_expand__LambdaHeadVar__4_82)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__V_83_83;
    MR_Word transform_hlds__stm_expand__V_84_84;
    MR_Word transform_hlds__stm_expand__V_85_85;

    {
      transform_hlds__stm_expand__V_84_84 = parse_tree__prog_mode__in_mode_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_85_85 = parse_tree__prog_mode__in_mode_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_83_83, 0) = ((MR_Box) (transform_hlds__stm_expand__V_84_84));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_83_83, 1) = ((MR_Box) (transform_hlds__stm_expand__V_85_85));
    }
    {
      transform_hlds__stm_expand__create_var_test_6_p_0(transform_hlds__stm_expand__LambdaHeadVar__1_79, transform_hlds__stm_expand__IsValidConstVar_15, transform_hlds__stm_expand__V_83_83, transform_hlds__stm_expand__LambdaHeadVar__2_80, transform_hlds__stm_expand__LambdaHeadVar__3_81, transform_hlds__stm_expand__LambdaHeadVar__4_82);
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__991__1_5_p_0(
  MR_Word transform_hlds__stm_expand__LambdaHeadVar__1_50,
  MR_Word * transform_hlds__stm_expand__LambdaHeadVar__2_51,
  MR_Word * transform_hlds__stm_expand__LambdaHeadVar__3_52,
  MR_Word transform_hlds__stm_expand__LambdaHeadVar__4_53,
  MR_Word * transform_hlds__stm_expand__LambdaHeadVar__5_54)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__NPI1_23;
    MR_Word transform_hlds__stm_expand__V_55_55;
    MR_Word transform_hlds__stm_expand__V_58_58;
    MR_Word transform_hlds__stm_expand__V_64_64;
    MR_Word transform_hlds__stm_expand__V_66_66;
    MR_Word transform_hlds__stm_expand__V_67_67;
    MR_Word transform_hlds__stm_expand__V_69_69;
    MR_Word transform_hlds__stm_expand__V_70_70;
    MR_Word transform_hlds__stm_expand__V_74_74;
    MR_Word transform_hlds__stm_expand__V_75_75;

    {
      transform_hlds__stm_expand__V_55_55 = parse_tree__builtin_lib_types__stm_valid_result_type_0_f_0();
    }
    {
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_55_55, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[3]), transform_hlds__stm_expand__LambdaHeadVar__3_52, transform_hlds__stm_expand__LambdaHeadVar__4_53, &transform_hlds__stm_expand__NPI1_23);
    }
    {
      transform_hlds__stm_expand__V_58_58 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_67_67, 0) = ((MR_Box) (*transform_hlds__stm_expand__LambdaHeadVar__3_52));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_64_64, 0) = ((MR_Box) (transform_hlds__stm_expand__LambdaHeadVar__1_50));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_64_64, 1) = ((MR_Box) (transform_hlds__stm_expand__V_67_67));
    }
    {
      transform_hlds__stm_expand__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_70_70, 0) = ((MR_Box) (transform_hlds__stm_expand__LambdaHeadVar__1_50));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[6])));
    }
    {
      transform_hlds__stm_expand__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_75_75, 0) = ((MR_Box) (*transform_hlds__stm_expand__LambdaHeadVar__3_52));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_74_74, 0) = ((MR_Box) (transform_hlds__stm_expand__V_75_75));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_69_69, 0) = ((MR_Box) (transform_hlds__stm_expand__V_70_70));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_69_69, 1) = ((MR_Box) (transform_hlds__stm_expand__V_74_74));
    }
    {
      transform_hlds__stm_expand__V_66_66 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_69_69);
    }
    {
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_58_58, (MR_String) "stm_validate", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__V_64_64, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_66_66, transform_hlds__stm_expand__LambdaHeadVar__2_51, transform_hlds__stm_expand__NPI1_23, transform_hlds__stm_expand__LambdaHeadVar__5_54);
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__create_nested_goal__800__1_7_p_0(
  MR_Word transform_hlds__stm_expand__ResultType_43,
  MR_Word transform_hlds__stm_expand__ResultVar_44,
  MR_Word transform_hlds__stm_expand__LambdaHeadVar__1_89,
  MR_Word transform_hlds__stm_expand__LambdaHeadVar__2_90,
  MR_Word * transform_hlds__stm_expand__LambdaHeadVar__3_91,
  MR_Word transform_hlds__stm_expand__LambdaHeadVar__4_92,
  MR_Word * transform_hlds__stm_expand__LambdaHeadVar__5_93)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__V_51_51;

    {
      transform_hlds__stm_expand__create_simple_wrapper_pred_8_p_0(transform_hlds__stm_expand__LambdaHeadVar__2_90, transform_hlds__stm_expand__ResultType_43, transform_hlds__stm_expand__ResultVar_44, transform_hlds__stm_expand__LambdaHeadVar__1_89, transform_hlds__stm_expand__LambdaHeadVar__3_91, &transform_hlds__stm_expand__V_51_51, transform_hlds__stm_expand__LambdaHeadVar__4_92, transform_hlds__stm_expand__LambdaHeadVar__5_93);
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__583__1_2_p_0(
  MR_Word transform_hlds__stm_expand__LambdaHeadVar__1_11,
  MR_Word * transform_hlds__stm_expand__LambdaHeadVar__2_12)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__V_15_15;
    MR_Word transform_hlds__stm_expand__V_16_16;
    MR_Word transform_hlds__stm_expand__V_17_17;
    MR_Word transform_hlds__stm_expand__V_18_18;

    *transform_hlds__stm_expand__LambdaHeadVar__2_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__LambdaHeadVar__1_11, (MR_Integer) 0)));
    transform_hlds__stm_expand__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__LambdaHeadVar__1_11, (MR_Integer) 1)));
    transform_hlds__stm_expand__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__LambdaHeadVar__1_11, (MR_Integer) 2)));
    transform_hlds__stm_expand__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__LambdaHeadVar__1_11, (MR_Integer) 3)));
    transform_hlds__stm_expand__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__LambdaHeadVar__1_11, (MR_Integer) 4)));
  }
}

static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_new_pred_info_0_0(
  MR_Word * transform_hlds__stm_expand__HeadVar__1_1,
  MR_Word transform_hlds__stm_expand__HeadVar__2_2,
  MR_Word transform_hlds__stm_expand__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Integer transform_hlds__stm_expand__CastX_24 = (MR_Integer) transform_hlds__stm_expand__HeadVar__2_2;
    MR_Integer transform_hlds__stm_expand__CastY_25 = (MR_Integer) transform_hlds__stm_expand__HeadVar__3_3;

    transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__CastX_24 == transform_hlds__stm_expand__CastY_25);
    if (transform_hlds__stm_expand__succeeded)
      *transform_hlds__stm_expand__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__stm_expand__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__stm_expand__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer transform_hlds__stm_expand__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__stm_expand__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word transform_hlds__stm_expand__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word transform_hlds__stm_expand__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer transform_hlds__stm_expand__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word transform_hlds__stm_expand__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__stm_expand__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer transform_hlds__stm_expand__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word transform_hlds__stm_expand__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word transform_hlds__stm_expand__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word transform_hlds__stm_expand__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 5)));
        MR_Integer transform_hlds__stm_expand__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word transform_hlds__stm_expand__V_18_18;

        {
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__stm_expand__V_18_18, transform_hlds__stm_expand__V_4_4, transform_hlds__stm_expand__V_11_11);
        }
        transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_18_18 == (MR_Integer) 0);
        transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
        if (transform_hlds__stm_expand__succeeded)
          *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_18_18;
        else
          {
            MR_Word transform_hlds__stm_expand__V_19_19;

            {
              hlds__hlds_pred____Compare____pred_id_0_0(&transform_hlds__stm_expand__V_19_19, transform_hlds__stm_expand__V_5_5, transform_hlds__stm_expand__V_12_12);
            }
            transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_19_19 == (MR_Integer) 0);
            transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
            if (transform_hlds__stm_expand__succeeded)
              *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_19_19;
            else
              {
                MR_Word transform_hlds__stm_expand__V_20_20;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__stm_expand__V_20_20, transform_hlds__stm_expand__V_6_6, transform_hlds__stm_expand__V_13_13);
                }
                transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_20_20 == (MR_Integer) 0);
                transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
                if (transform_hlds__stm_expand__succeeded)
                  *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_20_20;
                else
                  {
                    MR_Word transform_hlds__stm_expand__V_21_21;

                    {
                      hlds__hlds_pred____Compare____pred_info_0_0(&transform_hlds__stm_expand__V_21_21, transform_hlds__stm_expand__V_7_7, transform_hlds__stm_expand__V_14_14);
                    }
                    transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_21_21 == (MR_Integer) 0);
                    transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
                    if (transform_hlds__stm_expand__succeeded)
                      *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_21_21;
                    else
                      {
                        MR_Word transform_hlds__stm_expand__V_22_22;

                        {
                          hlds__hlds_pred____Compare____proc_info_0_0(&transform_hlds__stm_expand__V_22_22, transform_hlds__stm_expand__V_8_8, transform_hlds__stm_expand__V_15_15);
                        }
                        transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_22_22 == (MR_Integer) 0);
                        transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
                        if (transform_hlds__stm_expand__succeeded)
                          *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_22_22;
                        else
                          {
                            MR_Word transform_hlds__stm_expand__V_23_23;

                            {
                              mercury__term____Compare____context_0_0(&transform_hlds__stm_expand__V_23_23, transform_hlds__stm_expand__V_9_9, transform_hlds__stm_expand__V_16_16);
                            }
                            transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_23_23 == (MR_Integer) 0);
                            transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
                            if (transform_hlds__stm_expand__succeeded)
                              *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_23_23;
                            else
                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__stm_expand__HeadVar__1_1, transform_hlds__stm_expand__V_10_10, transform_hlds__stm_expand__V_17_17);
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
transform_hlds__stm_expand____Unify____stm_new_pred_info_0_0(
  MR_Word transform_hlds__stm_expand__HeadVar__1_1,
  MR_Word transform_hlds__stm_expand__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Integer transform_hlds__stm_expand__CastX_17 = (MR_Integer) transform_hlds__stm_expand__HeadVar__1_1;
    MR_Integer transform_hlds__stm_expand__CastY_18 = (MR_Integer) transform_hlds__stm_expand__HeadVar__2_2;

    transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__CastX_17 == transform_hlds__stm_expand__CastY_18);
    if (transform_hlds__stm_expand__succeeded)
      transform_hlds__stm_expand__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__stm_expand__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__stm_expand__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer transform_hlds__stm_expand__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word transform_hlds__stm_expand__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word transform_hlds__stm_expand__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word transform_hlds__stm_expand__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 5)));
        MR_Integer transform_hlds__stm_expand__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word transform_hlds__stm_expand__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__stm_expand__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer transform_hlds__stm_expand__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__stm_expand__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word transform_hlds__stm_expand__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word transform_hlds__stm_expand__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer transform_hlds__stm_expand__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 6)));

        {
          transform_hlds__stm_expand__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__stm_expand__V_3_3, transform_hlds__stm_expand__V_10_10);
        }
        if (transform_hlds__stm_expand__succeeded)
          {
            {
              transform_hlds__stm_expand__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__stm_expand__V_4_4, transform_hlds__stm_expand__V_11_11);
            }
            if (transform_hlds__stm_expand__succeeded)
              {
                transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_5_5 == transform_hlds__stm_expand__V_12_12);
                if (transform_hlds__stm_expand__succeeded)
                  {
                    {
                      transform_hlds__stm_expand__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(transform_hlds__stm_expand__V_6_6, transform_hlds__stm_expand__V_13_13);
                    }
                    if (transform_hlds__stm_expand__succeeded)
                      {
                        {
                          transform_hlds__stm_expand__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(transform_hlds__stm_expand__V_7_7, transform_hlds__stm_expand__V_14_14);
                        }
                        if (transform_hlds__stm_expand__succeeded)
                          {
                            {
                              transform_hlds__stm_expand__succeeded = mercury__term____Unify____context_0_0(transform_hlds__stm_expand__V_8_8, transform_hlds__stm_expand__V_15_15);
                            }
                            if (transform_hlds__stm_expand__succeeded)
                              transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_9_9 == transform_hlds__stm_expand__V_16_16);
                          }
                      }
                  }
              }
          }
      }
    return transform_hlds__stm_expand__succeeded;
  }
}

static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_info_0_0(
  MR_Word * transform_hlds__stm_expand__HeadVar__1_1,
  MR_Word transform_hlds__stm_expand__HeadVar__2_2,
  MR_Word transform_hlds__stm_expand__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Integer transform_hlds__stm_expand__CastX_24 = (MR_Integer) transform_hlds__stm_expand__HeadVar__2_2;
    MR_Integer transform_hlds__stm_expand__CastY_25 = (MR_Integer) transform_hlds__stm_expand__HeadVar__3_3;

    transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__CastX_24 == transform_hlds__stm_expand__CastY_25);
    if (transform_hlds__stm_expand__succeeded)
      *transform_hlds__stm_expand__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__stm_expand__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__stm_expand__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer transform_hlds__stm_expand__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__stm_expand__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word transform_hlds__stm_expand__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word transform_hlds__stm_expand__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer transform_hlds__stm_expand__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word transform_hlds__stm_expand__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__stm_expand__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer transform_hlds__stm_expand__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word transform_hlds__stm_expand__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word transform_hlds__stm_expand__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word transform_hlds__stm_expand__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 5)));
        MR_Integer transform_hlds__stm_expand__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word transform_hlds__stm_expand__V_18_18;

        {
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__stm_expand__V_18_18, transform_hlds__stm_expand__V_4_4, transform_hlds__stm_expand__V_11_11);
        }
        transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_18_18 == (MR_Integer) 0);
        transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
        if (transform_hlds__stm_expand__succeeded)
          *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_18_18;
        else
          {
            MR_Word transform_hlds__stm_expand__V_19_19;

            {
              hlds__hlds_pred____Compare____pred_id_0_0(&transform_hlds__stm_expand__V_19_19, transform_hlds__stm_expand__V_5_5, transform_hlds__stm_expand__V_12_12);
            }
            transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_19_19 == (MR_Integer) 0);
            transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
            if (transform_hlds__stm_expand__succeeded)
              *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_19_19;
            else
              {
                MR_Word transform_hlds__stm_expand__V_20_20;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__stm_expand__V_20_20, transform_hlds__stm_expand__V_6_6, transform_hlds__stm_expand__V_13_13);
                }
                transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_20_20 == (MR_Integer) 0);
                transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
                if (transform_hlds__stm_expand__succeeded)
                  *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_20_20;
                else
                  {
                    MR_Word transform_hlds__stm_expand__V_21_21;

                    {
                      hlds__hlds_pred____Compare____proc_info_0_0(&transform_hlds__stm_expand__V_21_21, transform_hlds__stm_expand__V_7_7, transform_hlds__stm_expand__V_14_14);
                    }
                    transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_21_21 == (MR_Integer) 0);
                    transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
                    if (transform_hlds__stm_expand__succeeded)
                      *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_21_21;
                    else
                      {
                        MR_Word transform_hlds__stm_expand__V_22_22;

                        {
                          hlds__hlds_pred____Compare____pred_info_0_0(&transform_hlds__stm_expand__V_22_22, transform_hlds__stm_expand__V_8_8, transform_hlds__stm_expand__V_15_15);
                        }
                        transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_22_22 == (MR_Integer) 0);
                        transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
                        if (transform_hlds__stm_expand__succeeded)
                          *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_22_22;
                        else
                          {
                            MR_Word transform_hlds__stm_expand__V_23_23;
                            MR_Integer transform_hlds__stm_expand__V_33_33 = (MR_Integer) transform_hlds__stm_expand__V_9_9;
                            MR_Integer transform_hlds__stm_expand__V_34_34 = (MR_Integer) transform_hlds__stm_expand__V_16_16;

                            {
                              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__stm_expand__V_23_23, transform_hlds__stm_expand__V_33_33, transform_hlds__stm_expand__V_34_34);
                            }
                            transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_23_23 == (MR_Integer) 0);
                            transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
                            if (transform_hlds__stm_expand__succeeded)
                              *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_23_23;
                            else
                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__stm_expand__HeadVar__1_1, transform_hlds__stm_expand__V_10_10, transform_hlds__stm_expand__V_17_17);
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
transform_hlds__stm_expand____Unify____stm_info_0_0(
  MR_Word transform_hlds__stm_expand__HeadVar__1_1,
  MR_Word transform_hlds__stm_expand__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Integer transform_hlds__stm_expand__CastX_17 = (MR_Integer) transform_hlds__stm_expand__HeadVar__1_1;
    MR_Integer transform_hlds__stm_expand__CastY_18 = (MR_Integer) transform_hlds__stm_expand__HeadVar__2_2;

    transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__CastX_17 == transform_hlds__stm_expand__CastY_18);
    if (transform_hlds__stm_expand__succeeded)
      transform_hlds__stm_expand__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__stm_expand__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__stm_expand__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer transform_hlds__stm_expand__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word transform_hlds__stm_expand__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word transform_hlds__stm_expand__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word transform_hlds__stm_expand__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 5)));
        MR_Integer transform_hlds__stm_expand__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word transform_hlds__stm_expand__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__stm_expand__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer transform_hlds__stm_expand__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__stm_expand__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word transform_hlds__stm_expand__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word transform_hlds__stm_expand__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer transform_hlds__stm_expand__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 6)));

        {
          transform_hlds__stm_expand__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__stm_expand__V_3_3, transform_hlds__stm_expand__V_10_10);
        }
        if (transform_hlds__stm_expand__succeeded)
          {
            {
              transform_hlds__stm_expand__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__stm_expand__V_4_4, transform_hlds__stm_expand__V_11_11);
            }
            if (transform_hlds__stm_expand__succeeded)
              {
                transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_5_5 == transform_hlds__stm_expand__V_12_12);
                if (transform_hlds__stm_expand__succeeded)
                  {
                    {
                      transform_hlds__stm_expand__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(transform_hlds__stm_expand__V_6_6, transform_hlds__stm_expand__V_13_13);
                    }
                    if (transform_hlds__stm_expand__succeeded)
                      {
                        {
                          transform_hlds__stm_expand__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(transform_hlds__stm_expand__V_7_7, transform_hlds__stm_expand__V_14_14);
                        }
                        if (transform_hlds__stm_expand__succeeded)
                          {
                            transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_8_8 == transform_hlds__stm_expand__V_15_15);
                            if (transform_hlds__stm_expand__succeeded)
                              transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_9_9 == transform_hlds__stm_expand__V_16_16);
                          }
                      }
                  }
              }
          }
      }
    return transform_hlds__stm_expand__succeeded;
  }
}

static void MR_CALL 
transform_hlds__stm_expand____Compare____stm_goal_vars_0_0(
  MR_Word * transform_hlds__stm_expand__HeadVar__1_1,
  MR_Word transform_hlds__stm_expand__HeadVar__2_2,
  MR_Word transform_hlds__stm_expand__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Integer transform_hlds__stm_expand__CastX_18 = (MR_Integer) transform_hlds__stm_expand__HeadVar__2_2;
    MR_Integer transform_hlds__stm_expand__CastY_19 = (MR_Integer) transform_hlds__stm_expand__HeadVar__3_3;

    transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__CastX_18 == transform_hlds__stm_expand__CastY_19);
    if (transform_hlds__stm_expand__succeeded)
      *transform_hlds__stm_expand__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__stm_expand__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__stm_expand__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__stm_expand__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__stm_expand__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word transform_hlds__stm_expand__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word transform_hlds__stm_expand__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__stm_expand__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__stm_expand__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word transform_hlds__stm_expand__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word transform_hlds__stm_expand__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word transform_hlds__stm_expand__V_14_14;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[1], &transform_hlds__stm_expand__V_14_14, ((MR_Box) (transform_hlds__stm_expand__V_4_4)), ((MR_Box) (transform_hlds__stm_expand__V_9_9)));
        }
        transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_14_14 == (MR_Integer) 0);
        transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
        if (transform_hlds__stm_expand__succeeded)
          *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_14_14;
        else
          {
            MR_Word transform_hlds__stm_expand__V_15_15;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[1], &transform_hlds__stm_expand__V_15_15, ((MR_Box) (transform_hlds__stm_expand__V_5_5)), ((MR_Box) (transform_hlds__stm_expand__V_10_10)));
            }
            transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_15_15 == (MR_Integer) 0);
            transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
            if (transform_hlds__stm_expand__succeeded)
              *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_15_15;
            else
              {
                MR_Word transform_hlds__stm_expand__V_16_16;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[1], &transform_hlds__stm_expand__V_16_16, ((MR_Box) (transform_hlds__stm_expand__V_6_6)), ((MR_Box) (transform_hlds__stm_expand__V_11_11)));
                }
                transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_16_16 == (MR_Integer) 0);
                transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
                if (transform_hlds__stm_expand__succeeded)
                  *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_16_16;
                else
                  {
                    MR_Word transform_hlds__stm_expand__V_17_17;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[0], &transform_hlds__stm_expand__V_17_17, ((MR_Box) (transform_hlds__stm_expand__V_7_7)), ((MR_Box) (transform_hlds__stm_expand__V_12_12)));
                    }
                    transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_17_17 == (MR_Integer) 0);
                    transform_hlds__stm_expand__succeeded = !(transform_hlds__stm_expand__succeeded);
                    if (transform_hlds__stm_expand__succeeded)
                      *transform_hlds__stm_expand__HeadVar__1_1 = transform_hlds__stm_expand__V_17_17;
                    else
                      {
                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[0], transform_hlds__stm_expand__HeadVar__1_1, ((MR_Box) (transform_hlds__stm_expand__V_8_8)), ((MR_Box) (transform_hlds__stm_expand__V_13_13)));
                        }
                      }
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__stm_expand____Unify____stm_goal_vars_0_0(
  MR_Word transform_hlds__stm_expand__HeadVar__1_1,
  MR_Word transform_hlds__stm_expand__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Integer transform_hlds__stm_expand__CastX_13 = (MR_Integer) transform_hlds__stm_expand__HeadVar__1_1;
    MR_Integer transform_hlds__stm_expand__CastY_14 = (MR_Integer) transform_hlds__stm_expand__HeadVar__2_2;

    transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__CastX_13 == transform_hlds__stm_expand__CastY_14);
    if (transform_hlds__stm_expand__succeeded)
      transform_hlds__stm_expand__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__stm_expand__TypeInfo_16_16;
        MR_Word transform_hlds__stm_expand__TypeInfo_17_17;
        MR_Word transform_hlds__stm_expand__TypeInfo_18_18;
        MR_Word transform_hlds__stm_expand__TypeInfo_19_19;
        MR_Word transform_hlds__stm_expand__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__stm_expand__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__stm_expand__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word transform_hlds__stm_expand__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word transform_hlds__stm_expand__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word transform_hlds__stm_expand__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__stm_expand__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__stm_expand__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__stm_expand__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word transform_hlds__stm_expand__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 4)));

        {
          transform_hlds__stm_expand__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[1], ((MR_Box) (transform_hlds__stm_expand__V_3_3)), ((MR_Box) (transform_hlds__stm_expand__V_8_8)));
        }
        if (transform_hlds__stm_expand__succeeded)
          {
            transform_hlds__stm_expand__TypeInfo_16_16 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1];
            {
              transform_hlds__stm_expand__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__stm_expand__TypeInfo_16_16, ((MR_Box) (transform_hlds__stm_expand__V_4_4)), ((MR_Box) (transform_hlds__stm_expand__V_9_9)));
            }
            if (transform_hlds__stm_expand__succeeded)
              {
                transform_hlds__stm_expand__TypeInfo_17_17 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1];
                {
                  transform_hlds__stm_expand__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__stm_expand__TypeInfo_17_17, ((MR_Box) (transform_hlds__stm_expand__V_5_5)), ((MR_Box) (transform_hlds__stm_expand__V_10_10)));
                }
                if (transform_hlds__stm_expand__succeeded)
                  {
                    transform_hlds__stm_expand__TypeInfo_18_18 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0];
                    {
                      transform_hlds__stm_expand__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__stm_expand__TypeInfo_18_18, ((MR_Box) (transform_hlds__stm_expand__V_6_6)), ((MR_Box) (transform_hlds__stm_expand__V_11_11)));
                    }
                    if (transform_hlds__stm_expand__succeeded)
                      {
                        transform_hlds__stm_expand__TypeInfo_19_19 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0];
                        {
                          transform_hlds__stm_expand__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__stm_expand__TypeInfo_19_19, ((MR_Box) (transform_hlds__stm_expand__V_7_7)), ((MR_Box) (transform_hlds__stm_expand__V_12_12)));
                        }
                      }
                  }
              }
          }
      }
    return transform_hlds__stm_expand__succeeded;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__get_input_output_modes_3_p_0_2(
  MR_Box transform_hlds__stm_expand__closure_arg,
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
    MR_Word transform_hlds__stm_expand__conv1_HeadVar__3_20;

    {
      transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2625__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), &transform_hlds__stm_expand__conv1_HeadVar__3_20);
    }
    *transform_hlds__stm_expand__wrapper_arg_2 = ((MR_Box) (transform_hlds__stm_expand__conv1_HeadVar__3_20));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__get_input_output_modes_3_p_0_1(
  MR_Box transform_hlds__stm_expand__closure_arg,
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
    MR_Word transform_hlds__stm_expand__conv0_HeadVar__3_14;

    {
      transform_hlds__stm_expand__IntroducedFrom__pred__get_input_output_modes__2624__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), &transform_hlds__stm_expand__conv0_HeadVar__3_14);
    }
    *transform_hlds__stm_expand__wrapper_arg_2 = ((MR_Box) (transform_hlds__stm_expand__conv0_HeadVar__3_14));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__get_input_output_modes_3_p_0(
  MR_Word transform_hlds__stm_expand__StmGoalVars_4,
  MR_Word * transform_hlds__stm_expand__InputModes_5,
  MR_Word * transform_hlds__stm_expand__OutputModes_6)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__TypeInfo_17_17;
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_18_18;
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_17_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word transform_hlds__stm_expand__InputVars_7;
    MR_Word transform_hlds__stm_expand__OutputVars_8;
    MR_Word transform_hlds__stm_expand__V_9_9;
    MR_Word transform_hlds__stm_expand__V_10_10;
    MR_Word transform_hlds__stm_expand__V_11_11;
    MR_Word transform_hlds__stm_expand__V_12_12;
    MR_Word transform_hlds__stm_expand__InputSet_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_4, (MR_Integer) 0)));
    MR_Word transform_hlds__stm_expand__OutputSet_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_4, (MR_Integer) 2)));
    MR_Word transform_hlds__stm_expand__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_4, (MR_Integer) 1)));
    MR_Word transform_hlds__stm_expand__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_4, (MR_Integer) 3)));
    MR_Word transform_hlds__stm_expand__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_4, (MR_Integer) 4)));

    {
      transform_hlds__stm_expand__InputVars_7 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_36, transform_hlds__stm_expand__InputSet_26);
    }
    {
      transform_hlds__stm_expand__OutputVars_8 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_36, transform_hlds__stm_expand__OutputSet_27);
    }
    {
      transform_hlds__stm_expand__V_10_10 = parse_tree__prog_mode__in_mode_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_9_9, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_9_9, 1) = ((MR_Box) (transform_hlds__stm_expand__get_input_output_modes_3_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_9_9, 3) = ((MR_Box) (transform_hlds__stm_expand__V_10_10));
    }
    transform_hlds__stm_expand__TypeInfo_17_17 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0];
    transform_hlds__stm_expand__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
    {
      mercury__list__map_3_p_0(transform_hlds__stm_expand__TypeInfo_17_17, transform_hlds__stm_expand__TypeCtorInfo_18_18, transform_hlds__stm_expand__V_9_9, transform_hlds__stm_expand__InputVars_7, transform_hlds__stm_expand__InputModes_5);
    }
    {
      transform_hlds__stm_expand__V_12_12 = parse_tree__prog_mode__out_mode_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_11_11, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_11_11, 1) = ((MR_Box) (transform_hlds__stm_expand__get_input_output_modes_3_p_0_2));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_11_11, 3) = ((MR_Box) (transform_hlds__stm_expand__V_12_12));
    }
    {
      mercury__list__map_3_p_0(transform_hlds__stm_expand__TypeInfo_17_17, transform_hlds__stm_expand__TypeCtorInfo_18_18, transform_hlds__stm_expand__V_11_11, transform_hlds__stm_expand__OutputVars_8, transform_hlds__stm_expand__OutputModes_6);
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__get_input_output_types_4_p_0(
  MR_Word transform_hlds__stm_expand__StmGoalVars_5,
  MR_Word transform_hlds__stm_expand__StmInfo_6,
  MR_Word * transform_hlds__stm_expand__InputTypes_7,
  MR_Word * transform_hlds__stm_expand__OutputTypes_8)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_17_32;
    MR_Word transform_hlds__stm_expand__ProcInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_6, (MR_Integer) 3)));
    MR_Word transform_hlds__stm_expand__VarTypes_10;
    MR_Word transform_hlds__stm_expand__InputVars_11;
    MR_Word transform_hlds__stm_expand__OutputVars_12;
    MR_Word transform_hlds__stm_expand__InputSet_22;
    MR_Word transform_hlds__stm_expand__OutputSet_23;
    MR_Word transform_hlds__stm_expand__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_6, (MR_Integer) 0)));
    MR_Word transform_hlds__stm_expand__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_6, (MR_Integer) 1)));
    MR_Integer transform_hlds__stm_expand__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_6, (MR_Integer) 2)));
    MR_Word transform_hlds__stm_expand__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_6, (MR_Integer) 4)));
    MR_Word transform_hlds__stm_expand__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_6, (MR_Integer) 5)));
    MR_Integer transform_hlds__stm_expand__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_6, (MR_Integer) 6)));
    MR_Word transform_hlds__stm_expand__V_24_24;
    MR_Word transform_hlds__stm_expand__V_26_26;
    MR_Word transform_hlds__stm_expand__V_27_27;

    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__stm_expand__ProcInfo0_9, &transform_hlds__stm_expand__VarTypes_10);
    }
    transform_hlds__stm_expand__InputSet_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_5, (MR_Integer) 0)));
    transform_hlds__stm_expand__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_5, (MR_Integer) 1)));
    transform_hlds__stm_expand__OutputSet_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_5, (MR_Integer) 2)));
    transform_hlds__stm_expand__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_5, (MR_Integer) 3)));
    transform_hlds__stm_expand__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_5, (MR_Integer) 4)));
    transform_hlds__stm_expand__TypeCtorInfo_17_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      transform_hlds__stm_expand__InputVars_11 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_32, transform_hlds__stm_expand__InputSet_22);
    }
    {
      transform_hlds__stm_expand__OutputVars_12 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_32, transform_hlds__stm_expand__OutputSet_23);
    }
    {
      hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__stm_expand__VarTypes_10, transform_hlds__stm_expand__InputVars_11, transform_hlds__stm_expand__InputTypes_7);
    }
    {
      hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__stm_expand__VarTypes_10, transform_hlds__stm_expand__OutputVars_12, transform_hlds__stm_expand__OutputTypes_8);
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__get_input_output_varlist_3_p_0(
  MR_Word transform_hlds__stm_expand__StmGoalVars_4,
  MR_Word * transform_hlds__stm_expand__Input_5,
  MR_Word * transform_hlds__stm_expand__Output_6)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word transform_hlds__stm_expand__InputSet_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_4, (MR_Integer) 0)));
    MR_Word transform_hlds__stm_expand__OutputSet_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_4, (MR_Integer) 2)));
    MR_Word transform_hlds__stm_expand__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_4, (MR_Integer) 1)));
    MR_Word transform_hlds__stm_expand__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_4, (MR_Integer) 3)));
    MR_Word transform_hlds__stm_expand__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVars_4, (MR_Integer) 4)));

    {
      *transform_hlds__stm_expand__Input_5 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_17, transform_hlds__stm_expand__InputSet_7);
    }
    {
      *transform_hlds__stm_expand__Output_6 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_17, transform_hlds__stm_expand__OutputSet_8);
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__get_pred_proc_id_2_p_0(
  MR_Word transform_hlds__stm_expand__NewPredInfo0_3,
  MR_Word * transform_hlds__stm_expand__PredProcId_4)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_3, (MR_Integer) 1)));
    MR_Integer transform_hlds__stm_expand__ProcId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_3, (MR_Integer) 2)));
    MR_Word transform_hlds__stm_expand__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_3, (MR_Integer) 0)));
    MR_Word transform_hlds__stm_expand__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_3, (MR_Integer) 3)));
    MR_Word transform_hlds__stm_expand__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_3, (MR_Integer) 4)));
    MR_Word transform_hlds__stm_expand__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_3, (MR_Integer) 5)));
    MR_Integer transform_hlds__stm_expand__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_3, (MR_Integer) 6)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__stm_expand__PredProcId_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__PredId_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__ProcId_6));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__new_pred_set_goal_3_p_0(
  MR_Word transform_hlds__stm_expand__Goal_4,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_17)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_32_32;
    MR_Word transform_hlds__stm_expand__ProcInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 4)));
    MR_Word transform_hlds__stm_expand__GoalVars_7;
    MR_Word transform_hlds__stm_expand__GoalVarsSet_8;
    MR_Word transform_hlds__stm_expand__ProcVarSet0_9;
    MR_Word transform_hlds__stm_expand__ProcVarTypes0_10;
    MR_Word transform_hlds__stm_expand__ProgVarSet_11;
    MR_Word transform_hlds__stm_expand__ProcVarTypes_12;
    MR_Word transform_hlds__stm_expand__ProcInfo1_13;
    MR_Word transform_hlds__stm_expand__ProcInfo2_14;
    MR_Word transform_hlds__stm_expand__ProcInfo_15;
    MR_Word transform_hlds__stm_expand__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 0)));
    MR_Word transform_hlds__stm_expand__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 1)));
    MR_Integer transform_hlds__stm_expand__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 2)));
    MR_Word transform_hlds__stm_expand__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 3)));
    MR_Word transform_hlds__stm_expand__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 5)));
    MR_Integer transform_hlds__stm_expand__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 6)));
    MR_Word transform_hlds__stm_expand__V_25_25;
    MR_Word transform_hlds__stm_expand__V_26_26;
    MR_Integer transform_hlds__stm_expand__V_27_27;
    MR_Word transform_hlds__stm_expand__V_28_28;
    MR_Word transform_hlds__stm_expand__V_30_30;
    MR_Integer transform_hlds__stm_expand__V_31_31;
    MR_Word transform_hlds__stm_expand__V_29_29;

    {
      hlds__goal_util__goal_vars_2_p_0(transform_hlds__stm_expand__Goal_4, &transform_hlds__stm_expand__GoalVars_7);
    }
    transform_hlds__stm_expand__TypeCtorInfo_32_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      transform_hlds__stm_expand__GoalVarsSet_8 = parse_tree__set_of_var__bitset_to_set_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_32_32, transform_hlds__stm_expand__GoalVars_7);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__stm_expand__ProcInfo0_6, &transform_hlds__stm_expand__ProcVarSet0_9);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__stm_expand__ProcInfo0_6, &transform_hlds__stm_expand__ProcVarTypes0_10);
    }
    {
      mercury__varset__select_3_p_0(transform_hlds__stm_expand__TypeCtorInfo_32_32, transform_hlds__stm_expand__GoalVarsSet_8, transform_hlds__stm_expand__ProcVarSet0_9, &transform_hlds__stm_expand__ProgVarSet_11);
    }
    {
      hlds__vartypes__vartypes_select_3_p_0(transform_hlds__stm_expand__GoalVarsSet_8, transform_hlds__stm_expand__ProcVarTypes0_10, &transform_hlds__stm_expand__ProcVarTypes_12);
    }
    {
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__stm_expand__ProgVarSet_11, transform_hlds__stm_expand__ProcInfo0_6, &transform_hlds__stm_expand__ProcInfo1_13);
    }
    {
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__stm_expand__Goal_4, transform_hlds__stm_expand__ProcInfo1_13, &transform_hlds__stm_expand__ProcInfo2_14);
    }
    {
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__stm_expand__ProcVarTypes_12, transform_hlds__stm_expand__ProcInfo2_14, &transform_hlds__stm_expand__ProcInfo_15);
    }
    transform_hlds__stm_expand__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 0)));
    transform_hlds__stm_expand__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 1)));
    transform_hlds__stm_expand__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 2)));
    transform_hlds__stm_expand__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 3)));
    transform_hlds__stm_expand__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 4)));
    transform_hlds__stm_expand__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 5)));
    transform_hlds__stm_expand__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 6)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__V_25_25));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_26_26));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__V_27_27));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__V_28_28));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__ProcInfo_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__V_30_30));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__V_31_31));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__run_quantification_over_pred_2_p_0(
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_10)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__ProcInfo0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 4)));
    MR_Word transform_hlds__stm_expand__ModuleInfo0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 0)));
    MR_Word transform_hlds__stm_expand__ProcInfo1_6;
    MR_Word transform_hlds__stm_expand__ProcInfo_7;
    MR_Word transform_hlds__stm_expand__ModuleInfo_8;
    MR_Word transform_hlds__stm_expand__V_28_28;
    MR_Integer transform_hlds__stm_expand__V_29_29;
    MR_Word transform_hlds__stm_expand__V_30_30;
    MR_Word transform_hlds__stm_expand__V_32_32;
    MR_Integer transform_hlds__stm_expand__V_33_33;
    MR_Word transform_hlds__stm_expand__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 1)));
    MR_Integer transform_hlds__stm_expand__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 2)));
    MR_Word transform_hlds__stm_expand__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 3)));
    MR_Word transform_hlds__stm_expand__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 5)));
    MR_Integer transform_hlds__stm_expand__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 6)));
    MR_Word transform_hlds__stm_expand__V_27_27;
    MR_Word transform_hlds__stm_expand__V_31_31;

    {
      hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__stm_expand__ProcInfo0_4, &transform_hlds__stm_expand__ProcInfo1_6);
    }
    {
      check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, transform_hlds__stm_expand__ProcInfo1_6, &transform_hlds__stm_expand__ProcInfo_7, transform_hlds__stm_expand__ModuleInfo0_5, &transform_hlds__stm_expand__ModuleInfo_8);
    }
    transform_hlds__stm_expand__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 0)));
    transform_hlds__stm_expand__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 1)));
    transform_hlds__stm_expand__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 2)));
    transform_hlds__stm_expand__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 3)));
    transform_hlds__stm_expand__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 4)));
    transform_hlds__stm_expand__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 5)));
    transform_hlds__stm_expand__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_9, (MR_Integer) 6)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__ModuleInfo_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_28_28));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__V_29_29));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__V_30_30));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__ProcInfo_7));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__V_32_32));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__V_33_33));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__update_new_pred_info_3_p_0(
  MR_Word transform_hlds__stm_expand__StmInfo_4,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_7,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_8)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__ModuleInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_4, (MR_Integer) 0)));
    MR_Word transform_hlds__stm_expand__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_4, (MR_Integer) 1)));
    MR_Integer transform_hlds__stm_expand__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_4, (MR_Integer) 2)));
    MR_Word transform_hlds__stm_expand__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_4, (MR_Integer) 3)));
    MR_Word transform_hlds__stm_expand__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_4, (MR_Integer) 4)));
    MR_Word transform_hlds__stm_expand__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_4, (MR_Integer) 5)));
    MR_Integer transform_hlds__stm_expand__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_4, (MR_Integer) 6)));
    MR_Word transform_hlds__stm_expand__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_7, (MR_Integer) 1)));
    MR_Integer transform_hlds__stm_expand__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_7, (MR_Integer) 2)));
    MR_Word transform_hlds__stm_expand__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_7, (MR_Integer) 3)));
    MR_Word transform_hlds__stm_expand__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_7, (MR_Integer) 4)));
    MR_Word transform_hlds__stm_expand__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_7, (MR_Integer) 5)));
    MR_Integer transform_hlds__stm_expand__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_7, (MR_Integer) 6)));
    MR_Word transform_hlds__stm_expand__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_7, (MR_Integer) 0)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__ModuleInfo_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_17_17));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__V_18_18));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__V_19_19));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__V_20_20));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__V_21_21));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__V_22_22));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__commit_new_pred_3_p_0(
  MR_Word transform_hlds__stm_expand__NewPred_4,
  MR_Word transform_hlds__stm_expand__StmInfo0_5,
  MR_Word * transform_hlds__stm_expand__StmInfo_6)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__OrigPredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_5, (MR_Integer) 1)));
    MR_Integer transform_hlds__stm_expand__OrigProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_5, (MR_Integer) 2)));
    MR_Word transform_hlds__stm_expand__OrigProcInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_5, (MR_Integer) 3)));
    MR_Word transform_hlds__stm_expand__OrigPredInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_5, (MR_Integer) 4)));
    MR_Word transform_hlds__stm_expand__StmExpanded_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_5, (MR_Integer) 5)));
    MR_Integer transform_hlds__stm_expand__ExpandNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_5, (MR_Integer) 6)));
    MR_Word transform_hlds__stm_expand__PredModuleInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPred_4, (MR_Integer) 0)));
    MR_Word transform_hlds__stm_expand__NewPredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPred_4, (MR_Integer) 1)));
    MR_Integer transform_hlds__stm_expand__NewProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPred_4, (MR_Integer) 2)));
    MR_Word transform_hlds__stm_expand__NewPredInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPred_4, (MR_Integer) 3)));
    MR_Word transform_hlds__stm_expand__NewProcInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPred_4, (MR_Integer) 4)));
    MR_Word transform_hlds__stm_expand__PredModuleInfo_21;
    MR_Word transform_hlds__stm_expand___StmModuleInfo0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_5, (MR_Integer) 0)));
    MR_Word transform_hlds__stm_expand__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPred_4, (MR_Integer) 5)));
    MR_Integer transform_hlds__stm_expand__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPred_4, (MR_Integer) 6)));

    {
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__stm_expand__NewPredId_15, transform_hlds__stm_expand__NewProcId_16, transform_hlds__stm_expand__NewPredInfo_17, transform_hlds__stm_expand__NewProcInfo_18, transform_hlds__stm_expand__PredModuleInfo0_14, &transform_hlds__stm_expand__PredModuleInfo_21);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__stm_expand__StmInfo_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__PredModuleInfo_21));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__OrigPredId_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__OrigProcId_9));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__OrigProcInfo_10));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__OrigPredInfo_11));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__StmExpanded_12));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__ExpandNum_13));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__set_head_vars_3_p_0(
  MR_Word transform_hlds__stm_expand__NewHeadVars_4,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_9)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__ProcInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 4)));
    MR_Word transform_hlds__stm_expand__ProcInfo_7;
    MR_Word transform_hlds__stm_expand__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 0)));
    MR_Word transform_hlds__stm_expand__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 1)));
    MR_Integer transform_hlds__stm_expand__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 2)));
    MR_Word transform_hlds__stm_expand__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 3)));
    MR_Word transform_hlds__stm_expand__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 5)));
    MR_Integer transform_hlds__stm_expand__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 6)));
    MR_Word transform_hlds__stm_expand__V_17_17;
    MR_Word transform_hlds__stm_expand__V_18_18;
    MR_Integer transform_hlds__stm_expand__V_19_19;
    MR_Word transform_hlds__stm_expand__V_20_20;
    MR_Word transform_hlds__stm_expand__V_22_22;
    MR_Integer transform_hlds__stm_expand__V_23_23;
    MR_Word transform_hlds__stm_expand__V_21_21;

    {
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__stm_expand__NewHeadVars_4, transform_hlds__stm_expand__ProcInfo0_6, &transform_hlds__stm_expand__ProcInfo_7);
    }
    transform_hlds__stm_expand__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 0)));
    transform_hlds__stm_expand__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 1)));
    transform_hlds__stm_expand__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 2)));
    transform_hlds__stm_expand__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 3)));
    transform_hlds__stm_expand__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 4)));
    transform_hlds__stm_expand__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 5)));
    transform_hlds__stm_expand__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_8, (MR_Integer) 6)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__V_17_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_18_18));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__V_19_19));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__V_20_20));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__ProcInfo_7));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__V_22_22));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__V_23_23));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_cloned_pred_10_p_0(
  MR_Word transform_hlds__stm_expand__ProcHeadVars_11,
  MR_Word transform_hlds__stm_expand__PredArgTypes_12,
  MR_Word transform_hlds__stm_expand__ProcHeadModes_13,
  MR_String transform_hlds__stm_expand__Prefix_14,
  MR_Word transform_hlds__stm_expand__OrigGoal_15,
  MR_Word transform_hlds__stm_expand__MaybeDetism_16,
  MR_Word * transform_hlds__stm_expand__NewStmPredInfo_17,
  MR_Word * transform_hlds__stm_expand__CallGoal_18,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_66)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_140_140;
    MR_Word transform_hlds__stm_expand__ModuleInfo0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 0)));
    MR_Word transform_hlds__stm_expand__PredInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 4)));
    MR_Integer transform_hlds__stm_expand__ProcId_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 2)));
    MR_Word transform_hlds__stm_expand__PredId_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 1)));
    MR_Integer transform_hlds__stm_expand__ExpansionCnt0_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 6)));
    MR_Integer transform_hlds__stm_expand__Arity_25;
    MR_Word transform_hlds__stm_expand__GoalInfo0_27;
    MR_Word transform_hlds__stm_expand__ProcInfo_28;
    MR_Word transform_hlds__stm_expand__ProcContext_29;
    MR_Word transform_hlds__stm_expand__ProcVarSet_30;
    MR_Word transform_hlds__stm_expand__ProcVarTypes_31;
    MR_Word transform_hlds__stm_expand__ProcInstVarSet_32;
    MR_Word transform_hlds__stm_expand__ProcGoal_34;
    MR_Word transform_hlds__stm_expand__ProcRttiVarMaps_35;
    MR_Word transform_hlds__stm_expand__HasParallelConj_36;
    MR_Word transform_hlds__stm_expand__VarNameRemap_37;
    MR_Word transform_hlds__stm_expand__NewProcInfo_38;
    MR_Word transform_hlds__stm_expand__ModuleName_39;
    MR_String transform_hlds__stm_expand__OrigPredName_40;
    MR_Word transform_hlds__stm_expand__PredOrFunc_41;
    MR_Word transform_hlds__stm_expand__PredContext_42;
    MR_Word transform_hlds__stm_expand__NewPredName_43;
    MR_Word transform_hlds__stm_expand__OrigPredOrigin_44;
    MR_Word transform_hlds__stm_expand__NewPredOrigin_45;
    MR_Word transform_hlds__stm_expand__PredTypeVarSet_46;
    MR_Word transform_hlds__stm_expand__PredExistQVars_47;
    MR_Word transform_hlds__stm_expand__PredClassContext_48;
    MR_Word transform_hlds__stm_expand__PredAssertions_49;
    MR_Word transform_hlds__stm_expand__Markers_50;
    MR_Integer transform_hlds__stm_expand__NewProcId_51;
    MR_Word transform_hlds__stm_expand__NewPredInfo_52;
    MR_Word transform_hlds__stm_expand__PredicateTable0_53;
    MR_Word transform_hlds__stm_expand__NewPredId_54;
    MR_Word transform_hlds__stm_expand__PredicateTable_55;
    MR_Word transform_hlds__stm_expand__ModuleInfo_56;
    MR_Word transform_hlds__stm_expand__CallExpr_57;
    MR_Word transform_hlds__stm_expand__CallNonLocals_58;
    MR_Word transform_hlds__stm_expand__CallInstmapDelta_59;
    MR_Word transform_hlds__stm_expand__CallDeterminism_60;
    MR_Word transform_hlds__stm_expand__CallPurity_61;
    MR_Word transform_hlds__stm_expand__CallContext_62;
    MR_Word transform_hlds__stm_expand__GoalInfo_63;
    MR_Integer transform_hlds__stm_expand__ExpansionCnt_64;
    MR_String transform_hlds__stm_expand__V_69_69;
    MR_String transform_hlds__stm_expand__V_71_71;
    MR_String transform_hlds__stm_expand__V_72_72;
    MR_String transform_hlds__stm_expand__V_74_74;
    MR_String transform_hlds__stm_expand__V_75_75;
    MR_String transform_hlds__stm_expand__V_77_77;
    MR_String transform_hlds__stm_expand__V_78_78;
    MR_String transform_hlds__stm_expand__V_79_79;
    MR_String transform_hlds__stm_expand__V_81_81;
    MR_String transform_hlds__stm_expand__V_82_82;
    MR_String transform_hlds__stm_expand__V_83_83;
    MR_String transform_hlds__stm_expand__V_85_85;
    MR_Word transform_hlds__stm_expand__V_126_126;
    MR_Integer transform_hlds__stm_expand__V_127_127;
    MR_Word transform_hlds__stm_expand__V_128_128;
    MR_Word transform_hlds__stm_expand__V_129_129;
    MR_Word transform_hlds__stm_expand__V_130_130;
    MR_Word transform_hlds__stm_expand__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 3)));
    MR_Word transform_hlds__stm_expand__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 5)));
    MR_Word transform_hlds__stm_expand__V_26_26;
    MR_Word transform_hlds__stm_expand__V_125_125;
    MR_Integer transform_hlds__stm_expand__V_131_131;

    {
      mercury__list__length_2_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[0], transform_hlds__stm_expand__ProcHeadVars_11, &transform_hlds__stm_expand__Arity_25);
    }
    transform_hlds__stm_expand__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__OrigGoal_15, (MR_Integer) 0)));
    transform_hlds__stm_expand__GoalInfo0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__OrigGoal_15, (MR_Integer) 1)));
    {
      hlds__hlds_pred__pred_info_proc_info_3_p_0(transform_hlds__stm_expand__PredInfo_21, transform_hlds__stm_expand__ProcId_22, &transform_hlds__stm_expand__ProcInfo_28);
    }
    {
      hlds__hlds_pred__proc_info_get_context_2_p_0(transform_hlds__stm_expand__ProcInfo_28, &transform_hlds__stm_expand__ProcContext_29);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__stm_expand__ProcInfo_28, &transform_hlds__stm_expand__ProcVarSet_30);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__stm_expand__ProcInfo_28, &transform_hlds__stm_expand__ProcVarTypes_31);
    }
    {
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__stm_expand__ProcInfo_28, &transform_hlds__stm_expand__ProcInstVarSet_32);
    }
    if ((transform_hlds__stm_expand__MaybeDetism_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(transform_hlds__stm_expand__ProcInfo_28, &transform_hlds__stm_expand__CallDeterminism_60);
      }
    else
      transform_hlds__stm_expand__CallDeterminism_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MaybeDetism_16, (MR_Integer) 0)));
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__stm_expand__ProcInfo_28, &transform_hlds__stm_expand__ProcGoal_34);
    }
    {
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__stm_expand__ProcInfo_28, &transform_hlds__stm_expand__ProcRttiVarMaps_35);
    }
    {
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__stm_expand__ProcInfo_28, &transform_hlds__stm_expand__HasParallelConj_36);
    }
    {
      hlds__hlds_pred__proc_info_get_var_name_remap_2_p_0(transform_hlds__stm_expand__ProcInfo_28, &transform_hlds__stm_expand__VarNameRemap_37);
    }
    {
      hlds__hlds_pred__proc_info_create_14_p_0(transform_hlds__stm_expand__ProcContext_29, transform_hlds__stm_expand__ProcVarSet_30, transform_hlds__stm_expand__ProcVarTypes_31, transform_hlds__stm_expand__ProcHeadVars_11, transform_hlds__stm_expand__ProcInstVarSet_32, transform_hlds__stm_expand__ProcHeadModes_13, (MR_Integer) 2, transform_hlds__stm_expand__CallDeterminism_60, transform_hlds__stm_expand__ProcGoal_34, transform_hlds__stm_expand__ProcRttiVarMaps_35, (MR_Integer) 1, transform_hlds__stm_expand__HasParallelConj_36, transform_hlds__stm_expand__VarNameRemap_37, &transform_hlds__stm_expand__NewProcInfo_38);
    }
    {
      transform_hlds__stm_expand__ModuleName_39 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__stm_expand__PredInfo_21);
    }
    {
      transform_hlds__stm_expand__OrigPredName_40 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__stm_expand__PredInfo_21);
    }
    {
      transform_hlds__stm_expand__PredOrFunc_41 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__stm_expand__PredInfo_21);
    }
    {
      hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__stm_expand__PredInfo_21, &transform_hlds__stm_expand__PredContext_42);
    }
    transform_hlds__stm_expand__TypeCtorInfo_140_140 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      transform_hlds__stm_expand__V_78_78 = mercury__string__string_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_140_140, ((MR_Box) (transform_hlds__stm_expand__Arity_25)));
    }
    {
      transform_hlds__stm_expand__V_82_82 = mercury__string__string_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (transform_hlds__stm_expand__PredId_23)));
    }
    {
      transform_hlds__stm_expand__V_85_85 = mercury__string__string_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_140_140, ((MR_Box) (transform_hlds__stm_expand__ExpansionCnt0_24)));
    }
    {
      transform_hlds__stm_expand__V_83_83 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__stm_expand__V_85_85);
    }
    {
      transform_hlds__stm_expand__V_81_81 = mercury__string__f_43_43_2_f_0(transform_hlds__stm_expand__V_82_82, transform_hlds__stm_expand__V_83_83);
    }
    {
      transform_hlds__stm_expand__V_79_79 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__stm_expand__V_81_81);
    }
    {
      transform_hlds__stm_expand__V_77_77 = mercury__string__f_43_43_2_f_0(transform_hlds__stm_expand__V_78_78, transform_hlds__stm_expand__V_79_79);
    }
    {
      transform_hlds__stm_expand__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__stm_expand__V_77_77);
    }
    {
      transform_hlds__stm_expand__V_74_74 = mercury__string__f_43_43_2_f_0(transform_hlds__stm_expand__OrigPredName_40, transform_hlds__stm_expand__V_75_75);
    }
    {
      transform_hlds__stm_expand__V_72_72 = mercury__string__f_43_43_2_f_0((MR_String) "_", transform_hlds__stm_expand__V_74_74);
    }
    {
      transform_hlds__stm_expand__V_71_71 = mercury__string__f_43_43_2_f_0(transform_hlds__stm_expand__Prefix_14, transform_hlds__stm_expand__V_72_72);
    }
    {
      transform_hlds__stm_expand__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) "StmExpanded_", transform_hlds__stm_expand__V_71_71);
    }
    {
      transform_hlds__stm_expand__NewPredName_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__NewPredName_43, 0) = ((MR_Box) (transform_hlds__stm_expand__ModuleName_39));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__NewPredName_43, 1) = ((MR_Box) (transform_hlds__stm_expand__V_69_69));
    }
    {
      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__stm_expand__PredInfo_21, &transform_hlds__stm_expand__OrigPredOrigin_44);
    }
    {
      transform_hlds__stm_expand__NewPredOrigin_45 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__NewPredOrigin_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__NewPredOrigin_45, 1) = ((MR_Box) (transform_hlds__stm_expand__OrigPredOrigin_44));
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__NewPredOrigin_45, 2) = ((MR_Box) (transform_hlds__stm_expand__PredId_23));
    }
    {
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__stm_expand__PredInfo_21, &transform_hlds__stm_expand__PredTypeVarSet_46);
    }
    {
      hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(transform_hlds__stm_expand__PredInfo_21, &transform_hlds__stm_expand__PredExistQVars_47);
    }
    {
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__stm_expand__PredInfo_21, &transform_hlds__stm_expand__PredClassContext_48);
    }
    {
      hlds__hlds_pred__pred_info_get_assertions_2_p_0(transform_hlds__stm_expand__PredInfo_21, &transform_hlds__stm_expand__PredAssertions_49);
    }
    {
      hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__stm_expand__PredInfo_21, &transform_hlds__stm_expand__Markers_50);
    }
    {
      hlds__hlds_pred__pred_info_create_16_p_0(transform_hlds__stm_expand__ModuleName_39, transform_hlds__stm_expand__NewPredName_43, transform_hlds__stm_expand__PredOrFunc_41, transform_hlds__stm_expand__PredContext_42, transform_hlds__stm_expand__NewPredOrigin_45, (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))), transform_hlds__stm_expand__Markers_50, transform_hlds__stm_expand__PredArgTypes_12, transform_hlds__stm_expand__PredTypeVarSet_46, transform_hlds__stm_expand__PredExistQVars_47, transform_hlds__stm_expand__PredClassContext_48, transform_hlds__stm_expand__PredAssertions_49, transform_hlds__stm_expand__VarNameRemap_37, transform_hlds__stm_expand__NewProcInfo_38, &transform_hlds__stm_expand__NewProcId_51, &transform_hlds__stm_expand__NewPredInfo_52);
    }
    {
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__stm_expand__ModuleInfo0_20, &transform_hlds__stm_expand__PredicateTable0_53);
    }
    {
      hlds__pred_table__predicate_table_insert_4_p_0(transform_hlds__stm_expand__NewPredInfo_52, &transform_hlds__stm_expand__NewPredId_54, transform_hlds__stm_expand__PredicateTable0_53, &transform_hlds__stm_expand__PredicateTable_55);
    }
    {
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(transform_hlds__stm_expand__PredicateTable_55, transform_hlds__stm_expand__ModuleInfo0_20, &transform_hlds__stm_expand__ModuleInfo_56);
    }
    {
      transform_hlds__stm_expand__CallExpr_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__CallExpr_57, 0) = ((MR_Box) (transform_hlds__stm_expand__NewPredId_54));
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__CallExpr_57, 1) = ((MR_Box) (transform_hlds__stm_expand__NewProcId_51));
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__CallExpr_57, 2) = ((MR_Box) (transform_hlds__stm_expand__ProcHeadVars_11));
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__CallExpr_57, 3) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__CallExpr_57, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__CallExpr_57, 5) = ((MR_Box) (transform_hlds__stm_expand__NewPredName_43));
    }
    {
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__stm_expand__ProcHeadVars_11, &transform_hlds__stm_expand__CallNonLocals_58);
    }
    {
      hlds__instmap__instmap_delta_from_mode_list_4_p_0(transform_hlds__stm_expand__ProcHeadVars_11, transform_hlds__stm_expand__ProcHeadModes_13, transform_hlds__stm_expand__ModuleInfo0_20, &transform_hlds__stm_expand__CallInstmapDelta_59);
    }
    {
      transform_hlds__stm_expand__CallPurity_61 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__stm_expand__GoalInfo0_27);
    }
    {
      transform_hlds__stm_expand__CallContext_62 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__stm_expand__GoalInfo0_27);
    }
    {
      hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__stm_expand__CallNonLocals_58, transform_hlds__stm_expand__CallInstmapDelta_59, transform_hlds__stm_expand__CallDeterminism_60, transform_hlds__stm_expand__CallPurity_61, transform_hlds__stm_expand__CallContext_62, &transform_hlds__stm_expand__GoalInfo_63);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__stm_expand__CallGoal_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__CallExpr_57));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo_63));
    }
    transform_hlds__stm_expand__ExpansionCnt_64 = (transform_hlds__stm_expand__ExpansionCnt0_24 + (MR_Integer) 1);
    transform_hlds__stm_expand__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 0)));
    transform_hlds__stm_expand__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 1)));
    transform_hlds__stm_expand__V_127_127 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 2)));
    transform_hlds__stm_expand__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 3)));
    transform_hlds__stm_expand__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 4)));
    transform_hlds__stm_expand__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 5)));
    transform_hlds__stm_expand__V_131_131 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_65, (MR_Integer) 6)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_66 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__ModuleInfo_56));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_126_126));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__V_127_127));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__V_128_128));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__V_129_129));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__V_130_130));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__ExpansionCnt_64));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__stm_expand__NewStmPredInfo_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__ModuleInfo_56));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__NewPredId_54));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__NewProcId_51));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__NewPredInfo_52));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__NewProcInfo_38));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__CallContext_62));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((MR_Integer) 0));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__stm_expand__make_type_info_5_p_0_1(
  MR_Box transform_hlds__stm_expand__closure_arg)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;

    {
      transform_hlds__stm_expand__succeeded = transform_hlds__stm_expand__IntroducedFrom__pred__make_type_info__2387__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__closure, (MR_Integer) 4))));
    }
    return transform_hlds__stm_expand__succeeded;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__make_type_info_5_p_0(
  MR_Word transform_hlds__stm_expand__Type_6,
  MR_Word * transform_hlds__stm_expand__Var_7,
  MR_Word * transform_hlds__stm_expand__Goals_8,
  MR_Word transform_hlds__stm_expand__NewPredInfo0_9,
  MR_Word * transform_hlds__stm_expand__NewPredInfo_10)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__ModuleInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_9, (MR_Integer) 0)));
    MR_Word transform_hlds__stm_expand__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_9, (MR_Integer) 1)));
    MR_Integer transform_hlds__stm_expand__ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_9, (MR_Integer) 2)));
    MR_Word transform_hlds__stm_expand__PredInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_9, (MR_Integer) 3)));
    MR_Word transform_hlds__stm_expand__ProcInfo0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_9, (MR_Integer) 4)));
    MR_Word transform_hlds__stm_expand__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_9, (MR_Integer) 5)));
    MR_Integer transform_hlds__stm_expand__VarCnt_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo0_9, (MR_Integer) 6)));
    MR_Word transform_hlds__stm_expand__PolyInfo0_18;
    MR_Word transform_hlds__stm_expand__PolyInfo_19;
    MR_Word transform_hlds__stm_expand__PolySpecs_20;
    MR_Word transform_hlds__stm_expand__PredInfo_21;
    MR_Word transform_hlds__stm_expand__ProcInfo_22;
    MR_Word transform_hlds__stm_expand__ModuleInfo_23;
    MR_Word transform_hlds__stm_expand__V_24_24;

    {
      check_hlds__polymorphism__create_poly_info_4_p_0(transform_hlds__stm_expand__ModuleInfo0_11, transform_hlds__stm_expand__PredInfo0_14, transform_hlds__stm_expand__ProcInfo0_15, &transform_hlds__stm_expand__PolyInfo0_18);
    }
    {
      check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(transform_hlds__stm_expand__Type_6, transform_hlds__stm_expand__Context_16, transform_hlds__stm_expand__Var_7, transform_hlds__stm_expand__Goals_8, transform_hlds__stm_expand__PolyInfo0_18, &transform_hlds__stm_expand__PolyInfo_19);
    }
    {
      check_hlds__polymorphism__poly_info_extract_7_p_0(transform_hlds__stm_expand__PolyInfo_19, &transform_hlds__stm_expand__PolySpecs_20, transform_hlds__stm_expand__PredInfo0_14, &transform_hlds__stm_expand__PredInfo_21, transform_hlds__stm_expand__ProcInfo0_15, &transform_hlds__stm_expand__ProcInfo_22, &transform_hlds__stm_expand__ModuleInfo_23);
    }
    {
      transform_hlds__stm_expand__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_24_24, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_24_24, 1) = ((MR_Box) (transform_hlds__stm_expand__make_type_info_5_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_24_24, 3) = ((MR_Box) (transform_hlds__stm_expand__PolySpecs_20));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_24_24, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mercury__require__expect_4_p_0(transform_hlds__stm_expand__V_24_24, (MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.make_type_info\'/5", (MR_String) "got errors while making type_info_var");
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__stm_expand__NewPredInfo_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__ModuleInfo_23));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__PredId_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__ProcId_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__PredInfo_21));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__ProcInfo_22));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__Context_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__VarCnt_17));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_plain_conj_2_p_0(
  MR_Word transform_hlds__stm_expand__GoalsInConj_3,
  MR_Word * transform_hlds__stm_expand__ConjGoal_4)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__ConjGoalExpr_6;
    MR_Word transform_hlds__stm_expand__NonLocals_7;
    MR_Word transform_hlds__stm_expand__InstMapDelta_8;
    MR_Word transform_hlds__stm_expand__Detism_9;
    MR_Word transform_hlds__stm_expand__Purity_10;
    MR_Word transform_hlds__stm_expand__GoalAInfo_11;
    MR_Word transform_hlds__stm_expand__Context_12;
    MR_Word transform_hlds__stm_expand__ConjGoalInfo_13;
    MR_Word transform_hlds__stm_expand__V_14_14;
    MR_Box transform_hlds__stm_expand__conv0_V_14_14;
    MR_Word transform_hlds__stm_expand__V_15_15;

    {
      transform_hlds__stm_expand__ConjGoalExpr_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__ConjGoalExpr_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__ConjGoalExpr_6, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__ConjGoalExpr_6, 2) = ((MR_Box) (transform_hlds__stm_expand__GoalsInConj_3));
    }
    {
      hlds__hlds_goal__goal_list_nonlocals_2_p_0(transform_hlds__stm_expand__GoalsInConj_3, &transform_hlds__stm_expand__NonLocals_7);
    }
    {
      hlds__hlds_goal__goal_list_instmap_delta_2_p_0(transform_hlds__stm_expand__GoalsInConj_3, &transform_hlds__stm_expand__InstMapDelta_8);
    }
    {
      hlds__hlds_goal__goal_list_determinism_2_p_0(transform_hlds__stm_expand__GoalsInConj_3, &transform_hlds__stm_expand__Detism_9);
    }
    {
      hlds__hlds_goal__goal_list_purity_2_p_0(transform_hlds__stm_expand__GoalsInConj_3, &transform_hlds__stm_expand__Purity_10);
    }
    {
      transform_hlds__stm_expand__conv0_V_14_14 = mercury__list__det_head_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__stm_expand__GoalsInConj_3);
    }
    transform_hlds__stm_expand__V_14_14 = ((MR_Word) transform_hlds__stm_expand__conv0_V_14_14);
    transform_hlds__stm_expand__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_14_14, (MR_Integer) 0)));
    transform_hlds__stm_expand__GoalAInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_14_14, (MR_Integer) 1)));
    {
      transform_hlds__stm_expand__Context_12 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__stm_expand__GoalAInfo_11);
    }
    {
      hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__stm_expand__NonLocals_7, transform_hlds__stm_expand__InstMapDelta_8, transform_hlds__stm_expand__Detism_9, transform_hlds__stm_expand__Purity_10, transform_hlds__stm_expand__Context_12, &transform_hlds__stm_expand__ConjGoalInfo_13);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__stm_expand__ConjGoal_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__ConjGoalExpr_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__ConjGoalInfo_13));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_promise_purity_scope_3_p_0(
  MR_Word transform_hlds__stm_expand__GoalIn_4,
  MR_Word transform_hlds__stm_expand__ScopePurity_5,
  MR_Word * transform_hlds__stm_expand__GoalOut_6)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__GoalInInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalIn_4, (MR_Integer) 1)));
    MR_Word transform_hlds__stm_expand__NonLocals_9;
    MR_Word transform_hlds__stm_expand__InstMapDelta_10;
    MR_Word transform_hlds__stm_expand__Detism_11;
    MR_Word transform_hlds__stm_expand__Context_13;
    MR_Word transform_hlds__stm_expand__GoalInfo_14;
    MR_Word transform_hlds__stm_expand__Reason_15;
    MR_Word transform_hlds__stm_expand__GoalOutExpr_16;
    MR_Word transform_hlds__stm_expand__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalIn_4, (MR_Integer) 0)));

    {
      transform_hlds__stm_expand__NonLocals_9 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__stm_expand__GoalInInfo_8);
    }
    {
      transform_hlds__stm_expand__InstMapDelta_10 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__stm_expand__GoalInInfo_8);
    }
    {
      transform_hlds__stm_expand__Detism_11 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__stm_expand__GoalInInfo_8);
    }
    {
      transform_hlds__stm_expand__Context_13 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__stm_expand__GoalInInfo_8);
    }
    {
      hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__stm_expand__NonLocals_9, transform_hlds__stm_expand__InstMapDelta_10, transform_hlds__stm_expand__Detism_11, transform_hlds__stm_expand__ScopePurity_5, transform_hlds__stm_expand__Context_13, &transform_hlds__stm_expand__GoalInfo_14);
    }
    {
      transform_hlds__stm_expand__Reason_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__Reason_15, 0) = ((MR_Box) (transform_hlds__stm_expand__ScopePurity_5));
    }
    {
      transform_hlds__stm_expand__GoalOutExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalOutExpr_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalOutExpr_16, 1) = ((MR_Box) (transform_hlds__stm_expand__Reason_15));
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalOutExpr_16, 2) = ((MR_Box) (transform_hlds__stm_expand__GoalIn_4));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__stm_expand__GoalOut_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__GoalOutExpr_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo_14));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_switch_disjunction_7_p_0(
  MR_Word transform_hlds__stm_expand__ProgVar_8,
  MR_Word transform_hlds__stm_expand__Cases_9,
  MR_Word transform_hlds__stm_expand__Detism_10,
  MR_Word transform_hlds__stm_expand__Purity_11,
  MR_Word * transform_hlds__stm_expand__OutGoal_12,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_19,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_20)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_19, (MR_Integer) 5)));
    MR_Word transform_hlds__stm_expand__NonLocals_15;
    MR_Word transform_hlds__stm_expand__InstMapDelta_16;
    MR_Word transform_hlds__stm_expand__OutGoalExpr_17;
    MR_Word transform_hlds__stm_expand__GoalInfo_18;
    MR_Word transform_hlds__stm_expand__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_19, (MR_Integer) 0)));
    MR_Word transform_hlds__stm_expand__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_19, (MR_Integer) 1)));
    MR_Integer transform_hlds__stm_expand__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_19, (MR_Integer) 2)));
    MR_Word transform_hlds__stm_expand__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_19, (MR_Integer) 3)));
    MR_Word transform_hlds__stm_expand__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_19, (MR_Integer) 4)));
    MR_Integer transform_hlds__stm_expand__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_19, (MR_Integer) 6)));

    {
      transform_hlds__stm_expand__NonLocals_15 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
    {
      hlds__instmap__instmap_delta_init_reachable_1_p_0(&transform_hlds__stm_expand__InstMapDelta_16);
    }
    {
      transform_hlds__stm_expand__OutGoalExpr_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__OutGoalExpr_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__OutGoalExpr_17, 1) = ((MR_Box) (transform_hlds__stm_expand__ProgVar_8));
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__OutGoalExpr_17, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__OutGoalExpr_17, 3) = ((MR_Box) (transform_hlds__stm_expand__Cases_9));
    }
    {
      hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__stm_expand__NonLocals_15, transform_hlds__stm_expand__InstMapDelta_16, transform_hlds__stm_expand__Detism_10, transform_hlds__stm_expand__Purity_11, transform_hlds__stm_expand__Context_14, &transform_hlds__stm_expand__GoalInfo_18);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__stm_expand__OutGoal_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__OutGoalExpr_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo_18));
    }
    *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_20 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_19;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_if_then_else_9_p_0(
  MR_Word transform_hlds__stm_expand__ExistVars_10,
  MR_Word transform_hlds__stm_expand__Cond_11,
  MR_Word transform_hlds__stm_expand__Then_12,
  MR_Word transform_hlds__stm_expand__Else_13,
  MR_Word transform_hlds__stm_expand__Detism_14,
  MR_Word transform_hlds__stm_expand__Purity_15,
  MR_Word * transform_hlds__stm_expand__OutGoal_16,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_23,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_24)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_23, (MR_Integer) 5)));
    MR_Word transform_hlds__stm_expand__OutGoalExpr_19;
    MR_Word transform_hlds__stm_expand__NonLocals_20;
    MR_Word transform_hlds__stm_expand__InstMapDelta_21;
    MR_Word transform_hlds__stm_expand__GoalInfo_22;
    MR_Word transform_hlds__stm_expand__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_23, (MR_Integer) 0)));
    MR_Word transform_hlds__stm_expand__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_23, (MR_Integer) 1)));
    MR_Integer transform_hlds__stm_expand__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_23, (MR_Integer) 2)));
    MR_Word transform_hlds__stm_expand__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_23, (MR_Integer) 3)));
    MR_Word transform_hlds__stm_expand__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_23, (MR_Integer) 4)));
    MR_Integer transform_hlds__stm_expand__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_23, (MR_Integer) 6)));

    {
      transform_hlds__stm_expand__OutGoalExpr_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__OutGoalExpr_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__OutGoalExpr_19, 1) = ((MR_Box) (transform_hlds__stm_expand__ExistVars_10));
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__OutGoalExpr_19, 2) = ((MR_Box) (transform_hlds__stm_expand__Cond_11));
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__OutGoalExpr_19, 3) = ((MR_Box) (transform_hlds__stm_expand__Then_12));
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__OutGoalExpr_19, 4) = ((MR_Box) (transform_hlds__stm_expand__Else_13));
    }
    {
      transform_hlds__stm_expand__NonLocals_20 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
    {
      hlds__instmap__instmap_delta_init_reachable_1_p_0(&transform_hlds__stm_expand__InstMapDelta_21);
    }
    {
      hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__stm_expand__NonLocals_20, transform_hlds__stm_expand__InstMapDelta_21, transform_hlds__stm_expand__Detism_14, transform_hlds__stm_expand__Purity_15, transform_hlds__stm_expand__Context_18, &transform_hlds__stm_expand__GoalInfo_22);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__stm_expand__OutGoal_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__OutGoalExpr_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo_22));
    }
    *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_24 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_23;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_closure_8_p_0(
  MR_Word transform_hlds__stm_expand__PredProcID_9,
  MR_Word transform_hlds__stm_expand__Args_10,
  MR_Word transform_hlds__stm_expand__ArgTypes_11,
  MR_Word transform_hlds__stm_expand__ArgModes_12,
  MR_Word * transform_hlds__stm_expand__ClosureVar_13,
  MR_Word * transform_hlds__stm_expand__ClosureAssignGoal_14,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_26)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__ShroudPredProcID_16;
    MR_Word transform_hlds__stm_expand__ClosureType_17;
    MR_Word transform_hlds__stm_expand__ClosureCons_18;
    MR_Word transform_hlds__stm_expand__ClosureAssignGoal0_19;
    MR_Word transform_hlds__stm_expand__ClosureAssignInstmapDeltaList_20;
    MR_Word transform_hlds__stm_expand__ClosureAssignInstmapDelta_21;
    MR_Word transform_hlds__stm_expand__ClosureAssignExpr_22;
    MR_Word transform_hlds__stm_expand__ClosureAssignInfo0_23;
    MR_Word transform_hlds__stm_expand__ClosureAssignInfo_24;
    MR_Word transform_hlds__stm_expand__V_33_33;
    MR_Word transform_hlds__stm_expand__V_35_35;
    MR_Word transform_hlds__stm_expand__V_36_36;
    MR_Word transform_hlds__stm_expand__V_38_38;
    MR_Word transform_hlds__stm_expand__V_39_39;

    {
      transform_hlds__stm_expand__ShroudPredProcID_16 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(transform_hlds__stm_expand__PredProcID_9);
    }
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    {
      parse_tree__prog_type__construct_higher_order_pred_type_4_p_0((MR_Integer) 0, transform_hlds__stm_expand__ArgTypes_11, &transform_hlds__stm_expand__ClosureType_17);
    }
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    {
      transform_hlds__stm_expand__ClosureCons_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__ClosureCons_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__ClosureCons_18, 1) = ((MR_Box) (transform_hlds__stm_expand__ShroudPredProcID_16));
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__ClosureCons_18, 2) = NULL;
    }
    {
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__ClosureType_17, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[23]), transform_hlds__stm_expand__ClosureVar_13, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_26);
    }
    {
      hlds__make_goal__construct_functor_4_p_0(*transform_hlds__stm_expand__ClosureVar_13, transform_hlds__stm_expand__ClosureCons_18, transform_hlds__stm_expand__Args_10, &transform_hlds__stm_expand__ClosureAssignGoal0_19);
    }
    {
      transform_hlds__stm_expand__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_33_33, 0) = ((MR_Box) (*transform_hlds__stm_expand__ClosureVar_13));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_39_39, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_39_39, 1) = ((MR_Box) (transform_hlds__stm_expand__ArgModes_12));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_39_39, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_39_39, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    transform_hlds__stm_expand__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) transform_hlds__stm_expand__V_39_39);
    {
      transform_hlds__stm_expand__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__V_36_36, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__V_36_36, 2) = ((MR_Box) (transform_hlds__stm_expand__V_38_38));
    }
    {
      transform_hlds__stm_expand__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_35_35, 0) = ((MR_Box) (transform_hlds__stm_expand__V_36_36));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__ClosureAssignInstmapDeltaList_20 = mercury__assoc_list__from_corresponding_lists_2_f_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, transform_hlds__stm_expand__V_33_33, transform_hlds__stm_expand__V_35_35);
    }
    {
      transform_hlds__stm_expand__ClosureAssignInstmapDelta_21 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__ClosureAssignInstmapDeltaList_20);
    }
    transform_hlds__stm_expand__ClosureAssignExpr_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__ClosureAssignGoal0_19, (MR_Integer) 0)));
    transform_hlds__stm_expand__ClosureAssignInfo0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__ClosureAssignGoal0_19, (MR_Integer) 1)));
    {
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__stm_expand__ClosureAssignInstmapDelta_21, transform_hlds__stm_expand__ClosureAssignInfo0_23, &transform_hlds__stm_expand__ClosureAssignInfo_24);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__stm_expand__ClosureAssignGoal_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__ClosureAssignExpr_22));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__ClosureAssignInfo_24));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_simple_call_12_p_0(
  MR_Word transform_hlds__stm_expand__ModuleName_13,
  MR_String transform_hlds__stm_expand__ProcName_14,
  MR_Word transform_hlds__stm_expand__PredOrFunc_15,
  MR_Word transform_hlds__stm_expand__Mode_16,
  MR_Word transform_hlds__stm_expand__Detism_17,
  MR_Word transform_hlds__stm_expand__Purity_18,
  MR_Word transform_hlds__stm_expand__ProgVars_19,
  MR_Word transform_hlds__stm_expand__GoalFeatures_20,
  MR_Word transform_hlds__stm_expand__InstmapDelta_21,
  MR_Word * transform_hlds__stm_expand__Goal_22,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_27)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__Context_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26, (MR_Integer) 5)));
    MR_Word transform_hlds__stm_expand__ModuleInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26, (MR_Integer) 0)));
    MR_Word transform_hlds__stm_expand__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26, (MR_Integer) 1)));
    MR_Integer transform_hlds__stm_expand__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26, (MR_Integer) 2)));
    MR_Word transform_hlds__stm_expand__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26, (MR_Integer) 3)));
    MR_Word transform_hlds__stm_expand__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26, (MR_Integer) 4)));
    MR_Integer transform_hlds__stm_expand__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26, (MR_Integer) 6)));

    {
      hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__stm_expand__ModuleName_13, transform_hlds__stm_expand__ProcName_14, transform_hlds__stm_expand__PredOrFunc_15, transform_hlds__stm_expand__Mode_16, transform_hlds__stm_expand__Detism_17, transform_hlds__stm_expand__Purity_18, transform_hlds__stm_expand__ProgVars_19, transform_hlds__stm_expand__GoalFeatures_20, transform_hlds__stm_expand__InstmapDelta_21, transform_hlds__stm_expand__ModuleInfo_25, transform_hlds__stm_expand__Context_24, transform_hlds__stm_expand__Goal_22);
    }
    *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_27 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_var_unify_6_p_0(
  MR_Word transform_hlds__stm_expand__VarLHS_7,
  MR_Word transform_hlds__stm_expand__VarRHS_8,
  MR_Word transform_hlds__stm_expand__UnifyMode_9,
  MR_Word * transform_hlds__stm_expand__Goal_10,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_26)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 5)));
    MR_Word transform_hlds__stm_expand__ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 0)));
    MR_Word transform_hlds__stm_expand__UnifyType_14;
    MR_Word transform_hlds__stm_expand__UnifyRHS_15;
    MR_Word transform_hlds__stm_expand__ModeLHS_17;
    MR_Word transform_hlds__stm_expand__ModeRHS_18;
    MR_Word transform_hlds__stm_expand__InstmapDelta_19;
    MR_Word transform_hlds__stm_expand__GoalExpr_20;
    MR_Word transform_hlds__stm_expand__NonLocals_21;
    MR_Word transform_hlds__stm_expand__GoalInfo_24;
    MR_Word transform_hlds__stm_expand__V_29_29;
    MR_Word transform_hlds__stm_expand__V_30_30;
    MR_Word transform_hlds__stm_expand__V_31_31;
    MR_Word transform_hlds__stm_expand__V_33_33;
    MR_Word transform_hlds__stm_expand__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 1)));
    MR_Integer transform_hlds__stm_expand__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 2)));
    MR_Word transform_hlds__stm_expand__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 3)));
    MR_Word transform_hlds__stm_expand__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 4)));
    MR_Integer transform_hlds__stm_expand__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 6)));

    {
      transform_hlds__stm_expand__UnifyType_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__UnifyType_14, 0) = ((MR_Box) (transform_hlds__stm_expand__VarLHS_7));
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__UnifyType_14, 1) = ((MR_Box) (transform_hlds__stm_expand__VarRHS_8));
    }
    {
      transform_hlds__stm_expand__UnifyRHS_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__UnifyRHS_15, 0) = ((MR_Box) (transform_hlds__stm_expand__VarRHS_8));
    }
    transform_hlds__stm_expand__ModeLHS_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__UnifyMode_9, (MR_Integer) 0)));
    transform_hlds__stm_expand__ModeRHS_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__UnifyMode_9, (MR_Integer) 1)));
    {
      transform_hlds__stm_expand__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_31_31, 0) = ((MR_Box) (transform_hlds__stm_expand__VarRHS_8));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_29_29, 0) = ((MR_Box) (transform_hlds__stm_expand__VarLHS_7));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_29_29, 1) = ((MR_Box) (transform_hlds__stm_expand__V_31_31));
    }
    {
      transform_hlds__stm_expand__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_33_33, 0) = ((MR_Box) (transform_hlds__stm_expand__ModeRHS_18));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_30_30, 0) = ((MR_Box) (transform_hlds__stm_expand__ModeLHS_17));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_30_30, 1) = ((MR_Box) (transform_hlds__stm_expand__V_33_33));
    }
    {
      hlds__instmap__instmap_delta_from_mode_list_4_p_0(transform_hlds__stm_expand__V_29_29, transform_hlds__stm_expand__V_30_30, transform_hlds__stm_expand__ModuleInfo_13, &transform_hlds__stm_expand__InstmapDelta_19);
    }
    {
      transform_hlds__stm_expand__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 0) = ((MR_Box) (transform_hlds__stm_expand__VarLHS_7));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 1) = ((MR_Box) (transform_hlds__stm_expand__UnifyRHS_15));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 2) = ((MR_Box) (transform_hlds__stm_expand__UnifyMode_9));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 3) = ((MR_Box) (transform_hlds__stm_expand__UnifyType_14));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 4) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_1[6]));
    }
    {
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__stm_expand__V_29_29, &transform_hlds__stm_expand__NonLocals_21);
    }
    {
      hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__stm_expand__NonLocals_21, transform_hlds__stm_expand__InstmapDelta_19, (MR_Integer) 0, (MR_Integer) 0, transform_hlds__stm_expand__Context_12, &transform_hlds__stm_expand__GoalInfo_24);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__stm_expand__Goal_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__GoalExpr_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo_24));
    }
    *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_26 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_var_unify_stm_6_p_0(
  MR_Word transform_hlds__stm_expand__VarLHS_7,
  MR_Word transform_hlds__stm_expand__VarRHS_8,
  MR_Word transform_hlds__stm_expand__UnifyMode_9,
  MR_Word * transform_hlds__stm_expand__Goal_10,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_26)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25, (MR_Integer) 0)));
    MR_Word transform_hlds__stm_expand__UnifyType_14;
    MR_Word transform_hlds__stm_expand__UnifyRHS_15;
    MR_Word transform_hlds__stm_expand__ModeLHS_17;
    MR_Word transform_hlds__stm_expand__ModeRHS_18;
    MR_Word transform_hlds__stm_expand__InstmapDelta_19;
    MR_Word transform_hlds__stm_expand__GoalExpr_20;
    MR_Word transform_hlds__stm_expand__NonLocals_21;
    MR_Word transform_hlds__stm_expand__GoalInfo_24;
    MR_Word transform_hlds__stm_expand__V_31_31;
    MR_Word transform_hlds__stm_expand__V_32_32;
    MR_Word transform_hlds__stm_expand__V_33_33;
    MR_Word transform_hlds__stm_expand__V_35_35;
    MR_Word transform_hlds__stm_expand__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25, (MR_Integer) 1)));
    MR_Integer transform_hlds__stm_expand__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25, (MR_Integer) 2)));
    MR_Word transform_hlds__stm_expand__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25, (MR_Integer) 3)));
    MR_Word transform_hlds__stm_expand__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25, (MR_Integer) 4)));
    MR_Word transform_hlds__stm_expand__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25, (MR_Integer) 5)));
    MR_Integer transform_hlds__stm_expand__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25, (MR_Integer) 6)));

    {
      transform_hlds__stm_expand__UnifyType_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__UnifyType_14, 0) = ((MR_Box) (transform_hlds__stm_expand__VarLHS_7));
      MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__UnifyType_14, 1) = ((MR_Box) (transform_hlds__stm_expand__VarRHS_8));
    }
    {
      transform_hlds__stm_expand__UnifyRHS_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__UnifyRHS_15, 0) = ((MR_Box) (transform_hlds__stm_expand__VarRHS_8));
    }
    transform_hlds__stm_expand__ModeLHS_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__UnifyMode_9, (MR_Integer) 0)));
    transform_hlds__stm_expand__ModeRHS_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__UnifyMode_9, (MR_Integer) 1)));
    {
      transform_hlds__stm_expand__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_33_33, 0) = ((MR_Box) (transform_hlds__stm_expand__VarRHS_8));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_31_31, 0) = ((MR_Box) (transform_hlds__stm_expand__VarLHS_7));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_31_31, 1) = ((MR_Box) (transform_hlds__stm_expand__V_33_33));
    }
    {
      transform_hlds__stm_expand__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_35_35, 0) = ((MR_Box) (transform_hlds__stm_expand__ModeRHS_18));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_32_32, 0) = ((MR_Box) (transform_hlds__stm_expand__ModeLHS_17));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_32_32, 1) = ((MR_Box) (transform_hlds__stm_expand__V_35_35));
    }
    {
      hlds__instmap__instmap_delta_from_mode_list_4_p_0(transform_hlds__stm_expand__V_31_31, transform_hlds__stm_expand__V_32_32, transform_hlds__stm_expand__ModuleInfo_13, &transform_hlds__stm_expand__InstmapDelta_19);
    }
    {
      transform_hlds__stm_expand__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 0) = ((MR_Box) (transform_hlds__stm_expand__VarLHS_7));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 1) = ((MR_Box) (transform_hlds__stm_expand__UnifyRHS_15));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 2) = ((MR_Box) (transform_hlds__stm_expand__UnifyMode_9));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 3) = ((MR_Box) (transform_hlds__stm_expand__UnifyType_14));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 4) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_1[6]));
    }
    {
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__stm_expand__V_31_31, &transform_hlds__stm_expand__NonLocals_21);
    }
    {
      hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__stm_expand__NonLocals_21, transform_hlds__stm_expand__InstmapDelta_19, (MR_Integer) 0, (MR_Integer) 0, (MR_Word) &transform_hlds__stm_expand_scalar_common_1[7], &transform_hlds__stm_expand__GoalInfo_24);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__stm_expand__Goal_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__GoalExpr_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo_24));
    }
    *transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_26 = transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_25;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_var_test_6_p_0(
  MR_Word transform_hlds__stm_expand__VarLHS_7,
  MR_Word transform_hlds__stm_expand__VarRHS_8,
  MR_Word transform_hlds__stm_expand__UnifyMode_9,
  MR_Word * transform_hlds__stm_expand__Goal_10,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_26)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 5)));
    MR_Word transform_hlds__stm_expand__ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 0)));
    MR_Word transform_hlds__stm_expand__UnifyType_14;
    MR_Word transform_hlds__stm_expand__UnifyRHS_15;
    MR_Word transform_hlds__stm_expand__ModeLHS_17;
    MR_Word transform_hlds__stm_expand__ModeRHS_18;
    MR_Word transform_hlds__stm_expand__InstmapDelta_19;
    MR_Word transform_hlds__stm_expand__GoalExpr_20;
    MR_Word transform_hlds__stm_expand__NonLocals_21;
    MR_Word transform_hlds__stm_expand__GoalInfo_24;
    MR_Word transform_hlds__stm_expand__V_29_29;
    MR_Word transform_hlds__stm_expand__V_30_30;
    MR_Word transform_hlds__stm_expand__V_31_31;
    MR_Word transform_hlds__stm_expand__V_33_33;
    MR_Word transform_hlds__stm_expand__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 1)));
    MR_Integer transform_hlds__stm_expand__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 2)));
    MR_Word transform_hlds__stm_expand__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 3)));
    MR_Word transform_hlds__stm_expand__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 4)));
    MR_Integer transform_hlds__stm_expand__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, (MR_Integer) 6)));

    {
      transform_hlds__stm_expand__UnifyType_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__UnifyType_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__UnifyType_14, 1) = ((MR_Box) (transform_hlds__stm_expand__VarLHS_7));
      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__UnifyType_14, 2) = ((MR_Box) (transform_hlds__stm_expand__VarRHS_8));
    }
    {
      transform_hlds__stm_expand__UnifyRHS_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__UnifyRHS_15, 0) = ((MR_Box) (transform_hlds__stm_expand__VarRHS_8));
    }
    transform_hlds__stm_expand__ModeLHS_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__UnifyMode_9, (MR_Integer) 0)));
    transform_hlds__stm_expand__ModeRHS_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__UnifyMode_9, (MR_Integer) 1)));
    {
      transform_hlds__stm_expand__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_31_31, 0) = ((MR_Box) (transform_hlds__stm_expand__VarRHS_8));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_29_29, 0) = ((MR_Box) (transform_hlds__stm_expand__VarLHS_7));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_29_29, 1) = ((MR_Box) (transform_hlds__stm_expand__V_31_31));
    }
    {
      transform_hlds__stm_expand__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_33_33, 0) = ((MR_Box) (transform_hlds__stm_expand__ModeRHS_18));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_30_30, 0) = ((MR_Box) (transform_hlds__stm_expand__ModeLHS_17));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_30_30, 1) = ((MR_Box) (transform_hlds__stm_expand__V_33_33));
    }
    {
      hlds__instmap__instmap_delta_from_mode_list_4_p_0(transform_hlds__stm_expand__V_29_29, transform_hlds__stm_expand__V_30_30, transform_hlds__stm_expand__ModuleInfo_13, &transform_hlds__stm_expand__InstmapDelta_19);
    }
    {
      transform_hlds__stm_expand__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 0) = ((MR_Box) (transform_hlds__stm_expand__VarLHS_7));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 1) = ((MR_Box) (transform_hlds__stm_expand__UnifyRHS_15));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 2) = ((MR_Box) (transform_hlds__stm_expand__UnifyMode_9));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 3) = ((MR_Box) (transform_hlds__stm_expand__UnifyType_14));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalExpr_20, 4) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_1[6]));
    }
    {
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__stm_expand__V_29_29, &transform_hlds__stm_expand__NonLocals_21);
    }
    {
      hlds__hlds_goal__goal_info_init_6_p_0(transform_hlds__stm_expand__NonLocals_21, transform_hlds__stm_expand__InstmapDelta_19, (MR_Integer) 1, (MR_Integer) 0, transform_hlds__stm_expand__Context_12, &transform_hlds__stm_expand__GoalInfo_24);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__stm_expand__Goal_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__GoalExpr_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo_24));
    }
    *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_26 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_aux_variable_assignment_7_p_0(
  MR_Word transform_hlds__stm_expand__Cons_8,
  MR_Word transform_hlds__stm_expand__Type_9,
  MR_Word transform_hlds__stm_expand__MaybeName_10,
  MR_Word * transform_hlds__stm_expand__Goal_11,
  MR_Word * transform_hlds__stm_expand__Var_12,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_14,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_15)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;

    {
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__Type_9, transform_hlds__stm_expand__MaybeName_10, transform_hlds__stm_expand__Var_12, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_14, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_15);
    }
    {
      hlds__make_goal__make_const_construction_3_p_0(*transform_hlds__stm_expand__Var_12, transform_hlds__stm_expand__Cons_8, transform_hlds__stm_expand__Goal_11);
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_aux_variable_5_p_0(
  MR_Word transform_hlds__stm_expand__Type_6,
  MR_Word transform_hlds__stm_expand__MaybeName0_7,
  MR_Word * transform_hlds__stm_expand__Var_8,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_17)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__ProcInfo0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 4)));
    MR_Integer transform_hlds__stm_expand__Cnt0_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 6)));
    MR_Word transform_hlds__stm_expand__MaybeName_12;
    MR_Word transform_hlds__stm_expand__ProcInfo_14;
    MR_Integer transform_hlds__stm_expand__Cnt_15;
    MR_Word transform_hlds__stm_expand__V_37_37;
    MR_Word transform_hlds__stm_expand__V_38_38;
    MR_Integer transform_hlds__stm_expand__V_39_39;
    MR_Word transform_hlds__stm_expand__V_40_40;
    MR_Word transform_hlds__stm_expand__V_42_42;
    MR_Word transform_hlds__stm_expand__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 0)));
    MR_Word transform_hlds__stm_expand__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 1)));
    MR_Integer transform_hlds__stm_expand__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 2)));
    MR_Word transform_hlds__stm_expand__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 3)));
    MR_Word transform_hlds__stm_expand__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 5)));
    MR_Word transform_hlds__stm_expand__V_41_41;
    MR_Integer transform_hlds__stm_expand__V_43_43;

    if ((transform_hlds__stm_expand__MaybeName0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      transform_hlds__stm_expand__MaybeName_12 = transform_hlds__stm_expand__MaybeName0_7;
    else
      {
        MR_String transform_hlds__stm_expand__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MaybeName0_7, (MR_Integer) 0)));
        MR_String transform_hlds__stm_expand__V_18_18;
        MR_String transform_hlds__stm_expand__V_19_19;
        MR_String transform_hlds__stm_expand__V_21_21;

        {
          transform_hlds__stm_expand__V_21_21 = mercury__string__string_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__stm_expand__Cnt0_11)));
        }
        {
          transform_hlds__stm_expand__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "_Aux_", transform_hlds__stm_expand__V_21_21);
        }
        {
          transform_hlds__stm_expand__V_18_18 = mercury__string__f_43_43_2_f_0(transform_hlds__stm_expand__Name_13, transform_hlds__stm_expand__V_19_19);
        }
        {
          transform_hlds__stm_expand__MaybeName_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MaybeName_12, 0) = ((MR_Box) (transform_hlds__stm_expand__V_18_18));
        }
      }
    {
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(transform_hlds__stm_expand__Type_6, transform_hlds__stm_expand__MaybeName_12, transform_hlds__stm_expand__Var_8, transform_hlds__stm_expand__ProcInfo0_10, &transform_hlds__stm_expand__ProcInfo_14);
    }
    transform_hlds__stm_expand__Cnt_15 = (transform_hlds__stm_expand__Cnt0_11 + (MR_Integer) 1);
    transform_hlds__stm_expand__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 0)));
    transform_hlds__stm_expand__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 1)));
    transform_hlds__stm_expand__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 2)));
    transform_hlds__stm_expand__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 3)));
    transform_hlds__stm_expand__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 4)));
    transform_hlds__stm_expand__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 5)));
    transform_hlds__stm_expand__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_16, (MR_Integer) 6)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__V_37_37));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_38_38));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__V_39_39));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__V_40_40));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__ProcInfo_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__V_42_42));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__Cnt_15));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_aux_variable_stm_5_p_0(
  MR_Word transform_hlds__stm_expand__Type_6,
  MR_Word transform_hlds__stm_expand__MaybeName0_7,
  MR_Word * transform_hlds__stm_expand__Var_8,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_15)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__ProcInfo0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 3)));
    MR_Word transform_hlds__stm_expand__MaybeName_11;
    MR_Word transform_hlds__stm_expand__ProcInfo_13;
    MR_Word transform_hlds__stm_expand__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 0)));
    MR_Word transform_hlds__stm_expand__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 1)));
    MR_Integer transform_hlds__stm_expand__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 2)));
    MR_Word transform_hlds__stm_expand__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 4)));
    MR_Word transform_hlds__stm_expand__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 5)));
    MR_Integer transform_hlds__stm_expand__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 6)));
    MR_Word transform_hlds__stm_expand__V_25_25;
    MR_Word transform_hlds__stm_expand__V_26_26;
    MR_Integer transform_hlds__stm_expand__V_27_27;
    MR_Word transform_hlds__stm_expand__V_29_29;
    MR_Word transform_hlds__stm_expand__V_30_30;
    MR_Integer transform_hlds__stm_expand__V_31_31;
    MR_Word transform_hlds__stm_expand__V_28_28;

    if ((transform_hlds__stm_expand__MaybeName0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      transform_hlds__stm_expand__MaybeName_11 = transform_hlds__stm_expand__MaybeName0_7;
    else
      {
        MR_String transform_hlds__stm_expand__Name_12 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MaybeName0_7, (MR_Integer) 0)));
        MR_String transform_hlds__stm_expand__V_16_16;

        {
          transform_hlds__stm_expand__V_16_16 = mercury__string__f_43_43_2_f_0(transform_hlds__stm_expand__Name_12, (MR_String) "_Aux_STM");
        }
        {
          transform_hlds__stm_expand__MaybeName_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MaybeName_11, 0) = ((MR_Box) (transform_hlds__stm_expand__V_16_16));
        }
      }
    {
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(transform_hlds__stm_expand__Type_6, transform_hlds__stm_expand__MaybeName_11, transform_hlds__stm_expand__Var_8, transform_hlds__stm_expand__ProcInfo0_10, &transform_hlds__stm_expand__ProcInfo_13);
    }
    transform_hlds__stm_expand__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 0)));
    transform_hlds__stm_expand__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 1)));
    transform_hlds__stm_expand__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 2)));
    transform_hlds__stm_expand__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 3)));
    transform_hlds__stm_expand__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 4)));
    transform_hlds__stm_expand__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 5)));
    transform_hlds__stm_expand__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_14, (MR_Integer) 6)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_15 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__V_25_25));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_26_26));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__V_27_27));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__ProcInfo_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__V_29_29));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__V_30_30));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__V_31_31));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_p_0_1(
  MR_Box transform_hlds__stm_expand__closure_arg,
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
    MR_Word transform_hlds__stm_expand__conv0_LambdaHeadVar__2_36;

    {
      transform_hlds__stm_expand__IntroducedFrom__pred__rename_var_in_wrapper_pred__2105__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), &transform_hlds__stm_expand__conv0_LambdaHeadVar__2_36);
    }
    *transform_hlds__stm_expand__wrapper_arg_2 = ((MR_Box) (transform_hlds__stm_expand__conv0_LambdaHeadVar__2_36));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_p_0(
  MR_String transform_hlds__stm_expand__Name_9,
  MR_Word transform_hlds__stm_expand__ResultVar0_10,
  MR_Word transform_hlds__stm_expand__ResultType_11,
  MR_Word * transform_hlds__stm_expand__ResultVar_12,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_32,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Goal_0_33,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Goal_34)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_54_54;
    MR_Word transform_hlds__stm_expand__TypeInfo_55_55;
    MR_Word transform_hlds__stm_expand__NewProcInfo0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 4)));
    MR_Word transform_hlds__stm_expand__NewPredVarSet0_16;
    MR_Word transform_hlds__stm_expand__NewPredVarTypes0_17;
    MR_Word transform_hlds__stm_expand__NewHeadVars0_18;
    MR_Word transform_hlds__stm_expand__NewPredVarSet1_19;
    MR_Word transform_hlds__stm_expand__NewPredVarTypes1_20;
    MR_Word transform_hlds__stm_expand__NewPredVarSet_21;
    MR_Word transform_hlds__stm_expand__NewPredVarTypes_22;
    MR_Word transform_hlds__stm_expand__VarMapping_23;
    MR_Word transform_hlds__stm_expand__MapLambda_24;
    MR_Word transform_hlds__stm_expand__NewHeadVars_27;
    MR_Word transform_hlds__stm_expand__NewProcInfo1_28;
    MR_Word transform_hlds__stm_expand__NewProcInfo2_29;
    MR_Word transform_hlds__stm_expand__NewProcInfo_30;
    MR_Word transform_hlds__stm_expand__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 0)));
    MR_Word transform_hlds__stm_expand__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 1)));
    MR_Integer transform_hlds__stm_expand__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 2)));
    MR_Word transform_hlds__stm_expand__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 3)));
    MR_Word transform_hlds__stm_expand__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 5)));
    MR_Integer transform_hlds__stm_expand__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 6)));
    MR_Word transform_hlds__stm_expand__V_47_47;
    MR_Word transform_hlds__stm_expand__V_48_48;
    MR_Integer transform_hlds__stm_expand__V_49_49;
    MR_Word transform_hlds__stm_expand__V_50_50;
    MR_Word transform_hlds__stm_expand__V_52_52;
    MR_Integer transform_hlds__stm_expand__V_53_53;
    MR_Word transform_hlds__stm_expand__V_51_51;

    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__stm_expand__NewProcInfo0_15, &transform_hlds__stm_expand__NewPredVarSet0_16);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__stm_expand__NewProcInfo0_15, &transform_hlds__stm_expand__NewPredVarTypes0_17);
    }
    {
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__stm_expand__NewProcInfo0_15, &transform_hlds__stm_expand__NewHeadVars0_18);
    }
    transform_hlds__stm_expand__TypeCtorInfo_54_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      mercury__varset__delete_var_3_p_0(transform_hlds__stm_expand__TypeCtorInfo_54_54, transform_hlds__stm_expand__ResultVar0_10, transform_hlds__stm_expand__NewPredVarSet0_16, &transform_hlds__stm_expand__NewPredVarSet1_19);
    }
    {
      hlds__vartypes__delete_var_type_3_p_0(transform_hlds__stm_expand__ResultVar0_10, transform_hlds__stm_expand__NewPredVarTypes0_17, &transform_hlds__stm_expand__NewPredVarTypes1_20);
    }
    {
      mercury__varset__new_named_var_4_p_0(transform_hlds__stm_expand__TypeCtorInfo_54_54, transform_hlds__stm_expand__Name_9, transform_hlds__stm_expand__ResultVar_12, transform_hlds__stm_expand__NewPredVarSet1_19, &transform_hlds__stm_expand__NewPredVarSet_21);
    }
    {
      hlds__vartypes__add_var_type_4_p_0(*transform_hlds__stm_expand__ResultVar_12, transform_hlds__stm_expand__ResultType_11, transform_hlds__stm_expand__NewPredVarTypes1_20, &transform_hlds__stm_expand__NewPredVarTypes_22);
    }
    transform_hlds__stm_expand__TypeInfo_55_55 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0];
    {
      transform_hlds__stm_expand__VarMapping_23 = mercury__map__singleton_2_f_0(transform_hlds__stm_expand__TypeInfo_55_55, transform_hlds__stm_expand__TypeInfo_55_55, ((MR_Box) (transform_hlds__stm_expand__ResultVar0_10)), ((MR_Box) (*transform_hlds__stm_expand__ResultVar_12)));
    }
    {
      transform_hlds__stm_expand__MapLambda_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__MapLambda_24, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__MapLambda_24, 1) = ((MR_Box) (transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__MapLambda_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__MapLambda_24, 3) = ((MR_Box) (transform_hlds__stm_expand__ResultVar0_10));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__MapLambda_24, 4) = ((MR_Box) (*transform_hlds__stm_expand__ResultVar_12));
    }
    {
      mercury__list__map_3_p_0(transform_hlds__stm_expand__TypeInfo_55_55, transform_hlds__stm_expand__TypeInfo_55_55, transform_hlds__stm_expand__MapLambda_24, transform_hlds__stm_expand__NewHeadVars0_18, &transform_hlds__stm_expand__NewHeadVars_27);
    }
    {
      hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(transform_hlds__stm_expand__VarMapping_23, transform_hlds__stm_expand__STATE_VARIABLE_Goal_0_33, transform_hlds__stm_expand__STATE_VARIABLE_Goal_34);
    }
    {
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__stm_expand__NewPredVarSet_21, transform_hlds__stm_expand__NewProcInfo0_15, &transform_hlds__stm_expand__NewProcInfo1_28);
    }
    {
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__stm_expand__NewPredVarTypes_22, transform_hlds__stm_expand__NewProcInfo1_28, &transform_hlds__stm_expand__NewProcInfo2_29);
    }
    {
      hlds__hlds_pred__proc_info_set_headvars_3_p_0(transform_hlds__stm_expand__NewHeadVars_27, transform_hlds__stm_expand__NewProcInfo2_29, &transform_hlds__stm_expand__NewProcInfo_30);
    }
    transform_hlds__stm_expand__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 0)));
    transform_hlds__stm_expand__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 1)));
    transform_hlds__stm_expand__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 2)));
    transform_hlds__stm_expand__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 3)));
    transform_hlds__stm_expand__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 4)));
    transform_hlds__stm_expand__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 5)));
    transform_hlds__stm_expand__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_31, (MR_Integer) 6)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_32 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__V_47_47));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_48_48));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__V_49_49));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__V_50_50));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__NewProcInfo_30));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__V_52_52));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__V_53_53));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__construct_output_7_p_0(
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_8,
  MR_Word transform_hlds__stm_expand__ResultType_9,
  MR_Word transform_hlds__stm_expand__ResultVar_10,
  MR_Word transform_hlds__stm_expand__StmInfo_11,
  MR_Word * transform_hlds__stm_expand__Goals_12,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_27)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_17_56 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_17_84;
    MR_Word transform_hlds__stm_expand__OutputVars_15;
    MR_Word transform_hlds__stm_expand__OutputTypes_17;
    MR_Word transform_hlds__stm_expand__InputSet_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 0)));
    MR_Word transform_hlds__stm_expand__OutputSet_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 2)));
    MR_Word transform_hlds__stm_expand__ProcInfo0_61;
    MR_Word transform_hlds__stm_expand__VarTypes_62;
    MR_Word transform_hlds__stm_expand__InputVars_63;
    MR_Word transform_hlds__stm_expand__OutputVars_64;
    MR_Word transform_hlds__stm_expand__InputSet_74;
    MR_Word transform_hlds__stm_expand__OutputSet_75;
    MR_Word transform_hlds__stm_expand__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 1)));
    MR_Word transform_hlds__stm_expand__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 3)));
    MR_Word transform_hlds__stm_expand__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 4)));
    MR_Word transform_hlds__stm_expand__V_14_14;
    MR_Word transform_hlds__stm_expand__V_65_65;
    MR_Word transform_hlds__stm_expand__V_66_66;
    MR_Integer transform_hlds__stm_expand__V_67_67;
    MR_Word transform_hlds__stm_expand__V_68_68;
    MR_Word transform_hlds__stm_expand__V_69_69;
    MR_Integer transform_hlds__stm_expand__V_70_70;
    MR_Word transform_hlds__stm_expand__V_76_76;
    MR_Word transform_hlds__stm_expand__V_78_78;
    MR_Word transform_hlds__stm_expand__V_79_79;
    MR_Word transform_hlds__stm_expand__V_16_16;

    {
      transform_hlds__stm_expand__V_14_14 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_56, transform_hlds__stm_expand__InputSet_46);
    }
    {
      transform_hlds__stm_expand__OutputVars_15 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_56, transform_hlds__stm_expand__OutputSet_47);
    }
    transform_hlds__stm_expand__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_11, (MR_Integer) 0)));
    transform_hlds__stm_expand__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_11, (MR_Integer) 1)));
    transform_hlds__stm_expand__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_11, (MR_Integer) 2)));
    transform_hlds__stm_expand__ProcInfo0_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_11, (MR_Integer) 3)));
    transform_hlds__stm_expand__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_11, (MR_Integer) 4)));
    transform_hlds__stm_expand__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_11, (MR_Integer) 5)));
    transform_hlds__stm_expand__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_11, (MR_Integer) 6)));
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__stm_expand__ProcInfo0_61, &transform_hlds__stm_expand__VarTypes_62);
    }
    transform_hlds__stm_expand__InputSet_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 0)));
    transform_hlds__stm_expand__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 1)));
    transform_hlds__stm_expand__OutputSet_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 2)));
    transform_hlds__stm_expand__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 3)));
    transform_hlds__stm_expand__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 4)));
    transform_hlds__stm_expand__TypeCtorInfo_17_84 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      transform_hlds__stm_expand__InputVars_63 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_84, transform_hlds__stm_expand__InputSet_74);
    }
    {
      transform_hlds__stm_expand__OutputVars_64 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_84, transform_hlds__stm_expand__OutputSet_75);
    }
    {
      hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__stm_expand__VarTypes_62, transform_hlds__stm_expand__InputVars_63, &transform_hlds__stm_expand__V_16_16);
    }
    {
      hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__stm_expand__VarTypes_62, transform_hlds__stm_expand__OutputVars_64, &transform_hlds__stm_expand__OutputTypes_17);
    }
    if ((transform_hlds__stm_expand__OutputTypes_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word transform_hlds__stm_expand__Goal_18;
        MR_Word transform_hlds__stm_expand__V_36_36;

        {
          transform_hlds__stm_expand__V_36_36 = parse_tree__builtin_lib_types__stm_dummy_output_functor_0_f_0();
        }
        {
          hlds__make_goal__make_const_construction_3_p_0(transform_hlds__stm_expand__ResultVar_10, transform_hlds__stm_expand__V_36_36, &transform_hlds__stm_expand__Goal_18);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__stm_expand__Goals_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_18));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_27 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26;
      }
    else
      {
        MR_Word transform_hlds__stm_expand__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__OutputTypes_17, (MR_Integer) 1)));
        MR_Word transform_hlds__stm_expand__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__OutputTypes_17, (MR_Integer) 0)));

        if ((transform_hlds__stm_expand__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word transform_hlds__stm_expand__OutVar_20;
            MR_Word transform_hlds__stm_expand__V_31_31;
            MR_Word transform_hlds__stm_expand__V_33_33;
            MR_Word transform_hlds__stm_expand__V_34_34;
            MR_Word transform_hlds__stm_expand__Goal_38;
            MR_Box transform_hlds__stm_expand__conv0_OutVar_20;

            {
              transform_hlds__stm_expand__conv0_OutVar_20 = mercury__list__det_head_1_f_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[0], transform_hlds__stm_expand__OutputVars_15);
            }
            transform_hlds__stm_expand__OutVar_20 = ((MR_Word) transform_hlds__stm_expand__conv0_OutVar_20);
            {
              transform_hlds__stm_expand__V_33_33 = parse_tree__prog_mode__out_mode_0_f_0();
            }
            {
              transform_hlds__stm_expand__V_34_34 = parse_tree__prog_mode__in_mode_0_f_0();
            }
            {
              transform_hlds__stm_expand__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_31_31, 0) = ((MR_Box) (transform_hlds__stm_expand__V_33_33));
              MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_31_31, 1) = ((MR_Box) (transform_hlds__stm_expand__V_34_34));
            }
            {
              transform_hlds__stm_expand__create_var_unify_6_p_0(transform_hlds__stm_expand__ResultVar_10, transform_hlds__stm_expand__OutVar_20, transform_hlds__stm_expand__V_31_31, &transform_hlds__stm_expand__Goal_38, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_27);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__stm_expand__Goals_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_38));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
        else
          {
            MR_Word transform_hlds__stm_expand__MakeType_25;
            MR_Word transform_hlds__stm_expand__Goal_39;
            MR_Word transform_hlds__stm_expand__V_24_24;

            {
              transform_hlds__stm_expand__make_type_info_5_p_0(transform_hlds__stm_expand__ResultType_9, &transform_hlds__stm_expand__V_24_24, &transform_hlds__stm_expand__MakeType_25, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_27);
            }
            {
              hlds__make_goal__construct_tuple_3_p_0(transform_hlds__stm_expand__ResultVar_10, transform_hlds__stm_expand__OutputVars_15, &transform_hlds__stm_expand__Goal_39);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__stm_expand__Goals_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_39));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__stm_expand__MakeType_25));
            }
          }
      }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__deconstruct_output_7_p_0(
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_8,
  MR_Word transform_hlds__stm_expand__ReturnType_9,
  MR_Word transform_hlds__stm_expand__ReturnExceptVar_10,
  MR_Word * transform_hlds__stm_expand__Goal_11,
  MR_Word transform_hlds__stm_expand__StmInfo_12,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_28,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_17_67 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_17_95;
    MR_Word transform_hlds__stm_expand__OutputVars_15;
    MR_Word transform_hlds__stm_expand__OutputTypes_17;
    MR_Word transform_hlds__stm_expand__InputSet_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 0)));
    MR_Word transform_hlds__stm_expand__OutputSet_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 2)));
    MR_Word transform_hlds__stm_expand__ProcInfo0_72;
    MR_Word transform_hlds__stm_expand__VarTypes_73;
    MR_Word transform_hlds__stm_expand__InputVars_74;
    MR_Word transform_hlds__stm_expand__OutputVars_75;
    MR_Word transform_hlds__stm_expand__InputSet_85;
    MR_Word transform_hlds__stm_expand__OutputSet_86;
    MR_Word transform_hlds__stm_expand__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 1)));
    MR_Word transform_hlds__stm_expand__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 3)));
    MR_Word transform_hlds__stm_expand__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 4)));
    MR_Word transform_hlds__stm_expand__V_14_14;
    MR_Word transform_hlds__stm_expand__V_76_76;
    MR_Word transform_hlds__stm_expand__V_77_77;
    MR_Integer transform_hlds__stm_expand__V_78_78;
    MR_Word transform_hlds__stm_expand__V_79_79;
    MR_Word transform_hlds__stm_expand__V_80_80;
    MR_Integer transform_hlds__stm_expand__V_81_81;
    MR_Word transform_hlds__stm_expand__V_87_87;
    MR_Word transform_hlds__stm_expand__V_89_89;
    MR_Word transform_hlds__stm_expand__V_90_90;
    MR_Word transform_hlds__stm_expand__V_16_16;

    {
      transform_hlds__stm_expand__V_14_14 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_67, transform_hlds__stm_expand__InputSet_57);
    }
    {
      transform_hlds__stm_expand__OutputVars_15 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_67, transform_hlds__stm_expand__OutputSet_58);
    }
    transform_hlds__stm_expand__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_12, (MR_Integer) 0)));
    transform_hlds__stm_expand__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_12, (MR_Integer) 1)));
    transform_hlds__stm_expand__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_12, (MR_Integer) 2)));
    transform_hlds__stm_expand__ProcInfo0_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_12, (MR_Integer) 3)));
    transform_hlds__stm_expand__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_12, (MR_Integer) 4)));
    transform_hlds__stm_expand__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_12, (MR_Integer) 5)));
    transform_hlds__stm_expand__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_12, (MR_Integer) 6)));
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__stm_expand__ProcInfo0_72, &transform_hlds__stm_expand__VarTypes_73);
    }
    transform_hlds__stm_expand__InputSet_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 0)));
    transform_hlds__stm_expand__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 1)));
    transform_hlds__stm_expand__OutputSet_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 2)));
    transform_hlds__stm_expand__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 3)));
    transform_hlds__stm_expand__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_8, (MR_Integer) 4)));
    transform_hlds__stm_expand__TypeCtorInfo_17_95 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      transform_hlds__stm_expand__InputVars_74 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_95, transform_hlds__stm_expand__InputSet_85);
    }
    {
      transform_hlds__stm_expand__OutputVars_75 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_95, transform_hlds__stm_expand__OutputSet_86);
    }
    {
      hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__stm_expand__VarTypes_73, transform_hlds__stm_expand__InputVars_74, &transform_hlds__stm_expand__V_16_16);
    }
    {
      hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__stm_expand__VarTypes_73, transform_hlds__stm_expand__OutputVars_75, &transform_hlds__stm_expand__OutputTypes_17);
    }
    if ((transform_hlds__stm_expand__OutputTypes_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word transform_hlds__stm_expand__SuccessResultVar_18;
        MR_Word transform_hlds__stm_expand__V_47_47;
        MR_Word transform_hlds__stm_expand__V_48_48;

        {
          transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__ReturnType_9, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[21]), &transform_hlds__stm_expand__SuccessResultVar_18, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_28, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29);
        }
        {
          transform_hlds__stm_expand__V_47_47 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
        }
        {
          transform_hlds__stm_expand__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_48_48, 0) = ((MR_Box) (transform_hlds__stm_expand__SuccessResultVar_18));
          MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_goal__deconstruct_functor_4_p_0(transform_hlds__stm_expand__ReturnExceptVar_10, transform_hlds__stm_expand__V_47_47, transform_hlds__stm_expand__V_48_48, transform_hlds__stm_expand__Goal_11);
        }
      }
    else
      {
        MR_Word transform_hlds__stm_expand__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__OutputTypes_17, (MR_Integer) 1)));
        MR_Word transform_hlds__stm_expand__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__OutputTypes_17, (MR_Integer) 0)));

        if ((transform_hlds__stm_expand__V_52_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word transform_hlds__stm_expand__OutVar_20;
            MR_Word transform_hlds__stm_expand__V_41_41;
            MR_Word transform_hlds__stm_expand__V_42_42;
            MR_Box transform_hlds__stm_expand__conv0_OutVar_20;

            {
              transform_hlds__stm_expand__conv0_OutVar_20 = mercury__list__det_head_1_f_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[0], transform_hlds__stm_expand__OutputVars_15);
            }
            transform_hlds__stm_expand__OutVar_20 = ((MR_Word) transform_hlds__stm_expand__conv0_OutVar_20);
            {
              transform_hlds__stm_expand__V_41_41 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
            }
            {
              transform_hlds__stm_expand__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_42_42, 0) = ((MR_Box) (transform_hlds__stm_expand__OutVar_20));
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_goal__deconstruct_functor_4_p_0(transform_hlds__stm_expand__ReturnExceptVar_10, transform_hlds__stm_expand__V_41_41, transform_hlds__stm_expand__V_42_42, transform_hlds__stm_expand__Goal_11);
            }
            *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_28;
          }
        else
          {
            MR_Word transform_hlds__stm_expand__MakeType_25;
            MR_Word transform_hlds__stm_expand__DeconstructGoal_26;
            MR_Word transform_hlds__stm_expand__UnifyOutputGoal_27;
            MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31;
            MR_Word transform_hlds__stm_expand__V_35_35;
            MR_Word transform_hlds__stm_expand__V_36_36;
            MR_Word transform_hlds__stm_expand__V_38_38;
            MR_Word transform_hlds__stm_expand__V_39_39;
            MR_Word transform_hlds__stm_expand__SuccessResultVar_50;
            MR_Word transform_hlds__stm_expand__V_24_24;

            {
              transform_hlds__stm_expand__make_type_info_5_p_0(transform_hlds__stm_expand__ReturnType_9, &transform_hlds__stm_expand__V_24_24, &transform_hlds__stm_expand__MakeType_25, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_28, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31);
            }
            {
              transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__ReturnType_9, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[22]), &transform_hlds__stm_expand__SuccessResultVar_50, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29);
            }
            {
              transform_hlds__stm_expand__V_35_35 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
            }
            {
              transform_hlds__stm_expand__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_36_36, 0) = ((MR_Box) (transform_hlds__stm_expand__SuccessResultVar_50));
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_goal__deconstruct_functor_4_p_0(transform_hlds__stm_expand__ReturnExceptVar_10, transform_hlds__stm_expand__V_35_35, transform_hlds__stm_expand__V_36_36, &transform_hlds__stm_expand__DeconstructGoal_26);
            }
            {
              hlds__make_goal__deconstruct_tuple_3_p_0(transform_hlds__stm_expand__SuccessResultVar_50, transform_hlds__stm_expand__OutputVars_15, &transform_hlds__stm_expand__UnifyOutputGoal_27);
            }
            {
              transform_hlds__stm_expand__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_39_39, 0) = ((MR_Box) (transform_hlds__stm_expand__UnifyOutputGoal_27));
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_39_39, 1) = ((MR_Box) (transform_hlds__stm_expand__MakeType_25));
            }
            {
              transform_hlds__stm_expand__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_38_38, 0) = ((MR_Box) (transform_hlds__stm_expand__DeconstructGoal_26));
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_38_38, 1) = ((MR_Box) (transform_hlds__stm_expand__V_39_39));
            }
            {
              transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_38_38, transform_hlds__stm_expand__Goal_11);
            }
          }
      }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__make_return_type_2_p_0(
  MR_Word transform_hlds__stm_expand__Types_3,
  MR_Word * transform_hlds__stm_expand__ReturnType_4)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;

    if ((transform_hlds__stm_expand__Types_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__stm_expand__ReturnType_4 = parse_tree__builtin_lib_types__stm_dummy_output_type_0_f_0();
      }
    else
      {
        MR_Word transform_hlds__stm_expand__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Types_3, (MR_Integer) 1)));
        MR_Word transform_hlds__stm_expand__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Types_3, (MR_Integer) 0)));

        if ((transform_hlds__stm_expand__V_11_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__stm_expand__ReturnType_4 = transform_hlds__stm_expand__V_12_12;
        else
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__stm_expand__ReturnType_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__stm_expand__Types_3));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
      }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_branch_13_p_0(
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_14,
  MR_Word transform_hlds__stm_expand__ReturnType_15,
  MR_Word transform_hlds__stm_expand__OuterStmDIVar_16,
  MR_Word transform_hlds__stm_expand__OuterStmUOVar_17,
  MR_Word transform_hlds__stm_expand__InnerSTMVar_18,
  MR_Word transform_hlds__stm_expand__RttiVar_19,
  MR_Word transform_hlds__stm_expand__RollbackExceptionRttiVar_20,
  MR_Word transform_hlds__stm_expand__WrapperID_21,
  MR_Word transform_hlds__stm_expand__RetryBranch_22,
  MR_Word * transform_hlds__stm_expand__Goal_23,
  MR_Word transform_hlds__stm_expand__StmInfo_24,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_49,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_50)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__InputVars_26;
    MR_Word transform_hlds__stm_expand__InputTypes_28;
    MR_Word transform_hlds__stm_expand__InputModes_30;
    MR_Word transform_hlds__stm_expand__InnerSTM0Var_32;
    MR_Word transform_hlds__stm_expand__ReturnExceptVar_33;
    MR_Word transform_hlds__stm_expand__AtomicClosureVar_34;
    MR_Word transform_hlds__stm_expand__ClosureAssign_35;
    MR_Word transform_hlds__stm_expand__CreateNestedLogCall_36;
    MR_Word transform_hlds__stm_expand__TryStmCall_37;
    MR_Word transform_hlds__stm_expand__DeconstructGoal_38;
    MR_Word transform_hlds__stm_expand__MergeNestedLogsCall_39;
    MR_Word transform_hlds__stm_expand__SuccessBranch_40;
    MR_Word transform_hlds__stm_expand__DiscardCall_41;
    MR_Word transform_hlds__stm_expand__RethrowCall_42;
    MR_Word transform_hlds__stm_expand__ExceptUnivVar_43;
    MR_Word transform_hlds__stm_expand__DeconstructException_44;
    MR_Word transform_hlds__stm_expand__NotRetryBranch_45;
    MR_Word transform_hlds__stm_expand__IfRetryGoal_46;
    MR_Word transform_hlds__stm_expand__ExceptionBranch_47;
    MR_Word transform_hlds__stm_expand__DisjGoal_48;
    MR_Word transform_hlds__stm_expand__V_51_51;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_53_53;
    MR_Word transform_hlds__stm_expand__V_55_55;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_57_57;
    MR_Word transform_hlds__stm_expand__V_59_59;
    MR_Word transform_hlds__stm_expand__V_60_60;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_61_61;
    MR_Word transform_hlds__stm_expand__V_62_62;
    MR_Word transform_hlds__stm_expand__V_63_63;
    MR_Word transform_hlds__stm_expand__V_64_64;
    MR_Word transform_hlds__stm_expand__V_65_65;
    MR_Word transform_hlds__stm_expand__V_66_66;
    MR_Word transform_hlds__stm_expand__V_68_68;
    MR_Word transform_hlds__stm_expand__V_69_69;
    MR_Word transform_hlds__stm_expand__V_70_70;
    MR_Word transform_hlds__stm_expand__V_71_71;
    MR_Word transform_hlds__stm_expand__V_72_72;
    MR_Word transform_hlds__stm_expand__V_73_73;
    MR_Word transform_hlds__stm_expand__V_75_75;
    MR_Word transform_hlds__stm_expand__V_81_81;
    MR_Word transform_hlds__stm_expand__V_83_83;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_84_84;
    MR_Word transform_hlds__stm_expand__V_85_85;
    MR_Word transform_hlds__stm_expand__V_87_87;
    MR_Word transform_hlds__stm_expand__V_88_88;
    MR_Word transform_hlds__stm_expand__V_89_89;
    MR_Word transform_hlds__stm_expand__V_92_92;
    MR_Word transform_hlds__stm_expand__V_93_93;
    MR_Word transform_hlds__stm_expand__V_96_96;
    MR_Word transform_hlds__stm_expand__V_102_102;
    MR_Word transform_hlds__stm_expand__V_104_104;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_105_105;
    MR_Word transform_hlds__stm_expand__V_107_107;
    MR_Word transform_hlds__stm_expand__V_108_108;
    MR_Word transform_hlds__stm_expand__V_109_109;
    MR_Word transform_hlds__stm_expand__V_110_110;
    MR_Word transform_hlds__stm_expand__V_112_112;
    MR_Word transform_hlds__stm_expand__V_113_113;
    MR_Word transform_hlds__stm_expand__V_114_114;
    MR_Word transform_hlds__stm_expand__V_117_117;
    MR_Word transform_hlds__stm_expand__V_118_118;
    MR_Word transform_hlds__stm_expand__V_122_122;
    MR_Word transform_hlds__stm_expand__V_123_123;
    MR_Word transform_hlds__stm_expand__V_125_125;
    MR_Word transform_hlds__stm_expand__V_126_126;
    MR_Word transform_hlds__stm_expand__V_130_130;
    MR_Word transform_hlds__stm_expand__V_131_131;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_134_134;
    MR_Word transform_hlds__stm_expand__V_135_135;
    MR_Word transform_hlds__stm_expand__V_141_141;
    MR_Word transform_hlds__stm_expand__V_143_143;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_144_144;
    MR_Word transform_hlds__stm_expand__V_145_145;
    MR_Word transform_hlds__stm_expand__V_146_146;
    MR_Word transform_hlds__stm_expand__V_148_148;
    MR_Word transform_hlds__stm_expand__V_149_149;
    MR_Word transform_hlds__stm_expand__V_153_153;
    MR_Word transform_hlds__stm_expand__V_158_158;
    MR_Word transform_hlds__stm_expand__V_159_159;
    MR_Word transform_hlds__stm_expand__V_162_162;
    MR_Word transform_hlds__stm_expand__V_163_163;
    MR_Word transform_hlds__stm_expand__V_165_165;
    MR_Word transform_hlds__stm_expand__V_173_173;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_174_174;
    MR_Word transform_hlds__stm_expand__V_176_176;
    MR_Word transform_hlds__stm_expand__V_182_182;
    MR_Word transform_hlds__stm_expand__V_188_188;
    MR_Word transform_hlds__stm_expand__V_190_190;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_191_191;
    MR_Word transform_hlds__stm_expand__V_192_192;
    MR_Word transform_hlds__stm_expand__V_197_197;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_199_199;
    MR_Word transform_hlds__stm_expand__V_201_201;
    MR_Word transform_hlds__stm_expand__V_202_202;
    MR_Word transform_hlds__stm_expand__V_204_204;
    MR_Word transform_hlds__stm_expand__V_205_205;
    MR_Word transform_hlds__stm_expand__V_207_207;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_208_208;
    MR_Word transform_hlds__stm_expand__V_209_209;
    MR_Word transform_hlds__stm_expand__V_210_210;
    MR_Word transform_hlds__stm_expand__V_212_212;
    MR_Word transform_hlds__stm_expand__V_216_216;
    MR_Word transform_hlds__stm_expand__V_217_217;
    MR_Word transform_hlds__stm_expand__V_219_219;
    MR_Word transform_hlds__stm_expand__V_220_220;
    MR_Word transform_hlds__stm_expand__V_221_221;
    MR_Word transform_hlds__stm_expand__V_224_224;
    MR_Word transform_hlds__stm_expand__V_225_225;
    MR_Word transform_hlds__stm_expand__V_226_226;
    MR_Word transform_hlds__stm_expand__V_227_227;
    MR_Word transform_hlds__stm_expand__V_27_27;
    MR_Word transform_hlds__stm_expand__V_29_29;
    MR_Word transform_hlds__stm_expand__V_31_31;

    {
      transform_hlds__stm_expand__get_input_output_varlist_3_p_0(transform_hlds__stm_expand__AtomicGoalVars_14, &transform_hlds__stm_expand__InputVars_26, &transform_hlds__stm_expand__V_27_27);
    }
    {
      transform_hlds__stm_expand__get_input_output_types_4_p_0(transform_hlds__stm_expand__AtomicGoalVars_14, transform_hlds__stm_expand__StmInfo_24, &transform_hlds__stm_expand__InputTypes_28, &transform_hlds__stm_expand__V_29_29);
    }
    {
      transform_hlds__stm_expand__get_input_output_modes_3_p_0(transform_hlds__stm_expand__AtomicGoalVars_14, &transform_hlds__stm_expand__InputModes_30, &transform_hlds__stm_expand__V_31_31);
    }
    {
      transform_hlds__stm_expand__V_51_51 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
    {
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_51_51, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[19]), &transform_hlds__stm_expand__InnerSTM0Var_32, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_49, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_53_53);
    }
    {
      transform_hlds__stm_expand__V_55_55 = parse_tree__builtin_lib_types__exception_result_type_1_f_0(transform_hlds__stm_expand__ReturnType_15);
    }
    {
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_55_55, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[20]), &transform_hlds__stm_expand__ReturnExceptVar_33, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_53_53, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_57_57);
    }
    {
      transform_hlds__stm_expand__V_64_64 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_66_66 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_65_65, 0) = ((MR_Box) (transform_hlds__stm_expand__V_66_66));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_63_63, 0) = ((MR_Box) (transform_hlds__stm_expand__V_64_64));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_63_63, 1) = ((MR_Box) (transform_hlds__stm_expand__V_65_65));
    }
    {
      transform_hlds__stm_expand__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_62_62, 0) = ((MR_Box) (transform_hlds__stm_expand__ReturnType_15));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_62_62, 1) = ((MR_Box) (transform_hlds__stm_expand__V_63_63));
    }
    {
      transform_hlds__stm_expand__V_59_59 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__stm_expand__InputTypes_28, transform_hlds__stm_expand__V_62_62);
    }
    {
      transform_hlds__stm_expand__V_69_69 = parse_tree__prog_mode__out_mode_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_71_71 = parse_tree__prog_mode__di_mode_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_73_73 = parse_tree__prog_mode__uo_mode_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_72_72, 0) = ((MR_Box) (transform_hlds__stm_expand__V_73_73));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_70_70, 0) = ((MR_Box) (transform_hlds__stm_expand__V_71_71));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_70_70, 1) = ((MR_Box) (transform_hlds__stm_expand__V_72_72));
    }
    {
      transform_hlds__stm_expand__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_68_68, 0) = ((MR_Box) (transform_hlds__stm_expand__V_69_69));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_68_68, 1) = ((MR_Box) (transform_hlds__stm_expand__V_70_70));
    }
    {
      transform_hlds__stm_expand__V_60_60 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__stm_expand__InputModes_30, transform_hlds__stm_expand__V_68_68);
    }
    {
      transform_hlds__stm_expand__create_closure_8_p_0(transform_hlds__stm_expand__WrapperID_21, transform_hlds__stm_expand__InputVars_26, transform_hlds__stm_expand__V_59_59, transform_hlds__stm_expand__V_60_60, &transform_hlds__stm_expand__AtomicClosureVar_34, &transform_hlds__stm_expand__ClosureAssign_35, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_57_57, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_61_61);
    }
    {
      transform_hlds__stm_expand__V_75_75 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_85_85, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerSTM0Var_32));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_81_81, 0) = ((MR_Box) (transform_hlds__stm_expand__OuterStmDIVar_16));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_81_81, 1) = ((MR_Box) (transform_hlds__stm_expand__V_85_85));
    }
    transform_hlds__stm_expand__V_89_89 = (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[6]);
    {
      transform_hlds__stm_expand__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_88_88, 0) = ((MR_Box) (transform_hlds__stm_expand__OuterStmDIVar_16));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_88_88, 1) = ((MR_Box) (transform_hlds__stm_expand__V_89_89));
    }
    {
      transform_hlds__stm_expand__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_93_93, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerSTM0Var_32));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_92_92, 0) = ((MR_Box) (transform_hlds__stm_expand__V_93_93));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_87_87, 0) = ((MR_Box) (transform_hlds__stm_expand__V_88_88));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_87_87, 1) = ((MR_Box) (transform_hlds__stm_expand__V_92_92));
    }
    {
      transform_hlds__stm_expand__V_83_83 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_87_87);
    }
    {
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_75_75, (MR_String) "stm_create_nested_transaction_log", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__V_81_81, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_83_83, &transform_hlds__stm_expand__CreateNestedLogCall_36, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_61_61, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_84_84);
    }
    {
      transform_hlds__stm_expand__V_96_96 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_110_110, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerSTMVar_18));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_109_109, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerSTM0Var_32));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_109_109, 1) = ((MR_Box) (transform_hlds__stm_expand__V_110_110));
    }
    {
      transform_hlds__stm_expand__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_108_108, 0) = ((MR_Box) (transform_hlds__stm_expand__ReturnExceptVar_33));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_108_108, 1) = ((MR_Box) (transform_hlds__stm_expand__V_109_109));
    }
    {
      transform_hlds__stm_expand__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_107_107, 0) = ((MR_Box) (transform_hlds__stm_expand__AtomicClosureVar_34));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_107_107, 1) = ((MR_Box) (transform_hlds__stm_expand__V_108_108));
    }
    {
      transform_hlds__stm_expand__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_102_102, 0) = ((MR_Box) (transform_hlds__stm_expand__RttiVar_19));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_102_102, 1) = ((MR_Box) (transform_hlds__stm_expand__V_107_107));
    }
    transform_hlds__stm_expand__V_114_114 = (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[5]);
    {
      transform_hlds__stm_expand__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_113_113, 0) = ((MR_Box) (transform_hlds__stm_expand__RttiVar_19));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_113_113, 1) = ((MR_Box) (transform_hlds__stm_expand__V_114_114));
    }
    {
      transform_hlds__stm_expand__V_118_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_118_118, 0) = ((MR_Box) (transform_hlds__stm_expand__AtomicClosureVar_34));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_118_118, 1) = ((MR_Box) (transform_hlds__stm_expand__V_114_114));
    }
    {
      transform_hlds__stm_expand__V_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_123_123, 0) = ((MR_Box) (transform_hlds__stm_expand__ReturnExceptVar_33));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_123_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_126_126, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerSTM0Var_32));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_126_126, 1) = ((MR_Box) (transform_hlds__stm_expand__V_89_89));
    }
    {
      transform_hlds__stm_expand__V_131_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_131_131, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerSTMVar_18));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_131_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_130_130, 0) = ((MR_Box) (transform_hlds__stm_expand__V_131_131));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_125_125, 0) = ((MR_Box) (transform_hlds__stm_expand__V_126_126));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_125_125, 1) = ((MR_Box) (transform_hlds__stm_expand__V_130_130));
    }
    {
      transform_hlds__stm_expand__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_122_122, 0) = ((MR_Box) (transform_hlds__stm_expand__V_123_123));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_122_122, 1) = ((MR_Box) (transform_hlds__stm_expand__V_125_125));
    }
    {
      transform_hlds__stm_expand__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_117_117, 0) = ((MR_Box) (transform_hlds__stm_expand__V_118_118));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_117_117, 1) = ((MR_Box) (transform_hlds__stm_expand__V_122_122));
    }
    {
      transform_hlds__stm_expand__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_112_112, 0) = ((MR_Box) (transform_hlds__stm_expand__V_113_113));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_112_112, 1) = ((MR_Box) (transform_hlds__stm_expand__V_117_117));
    }
    {
      transform_hlds__stm_expand__V_104_104 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_112_112);
    }
    {
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_96_96, (MR_String) "unsafe_try_stm", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[7]), (MR_Integer) 4, (MR_Integer) 0, transform_hlds__stm_expand__V_102_102, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_104_104, &transform_hlds__stm_expand__TryStmCall_37, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_84_84, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_105_105);
    }
    {
      transform_hlds__stm_expand__deconstruct_output_7_p_0(transform_hlds__stm_expand__AtomicGoalVars_14, transform_hlds__stm_expand__ReturnType_15, transform_hlds__stm_expand__ReturnExceptVar_33, &transform_hlds__stm_expand__DeconstructGoal_38, transform_hlds__stm_expand__StmInfo_24, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_105_105, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_134_134);
    }
    {
      transform_hlds__stm_expand__V_135_135 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_146_146, 0) = ((MR_Box) (transform_hlds__stm_expand__OuterStmUOVar_17));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_146_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_145_145, 0) = ((MR_Box) (transform_hlds__stm_expand__OuterStmDIVar_16));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_145_145, 1) = ((MR_Box) (transform_hlds__stm_expand__V_146_146));
    }
    {
      transform_hlds__stm_expand__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_141_141, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerSTMVar_18));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_141_141, 1) = ((MR_Box) (transform_hlds__stm_expand__V_145_145));
    }
    {
      transform_hlds__stm_expand__V_149_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_149_149, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerSTMVar_18));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_149_149, 1) = ((MR_Box) (transform_hlds__stm_expand__V_89_89));
    }
    {
      transform_hlds__stm_expand__V_159_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_159_159, 0) = ((MR_Box) (transform_hlds__stm_expand__OuterStmUOVar_17));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_159_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_158_158, 0) = ((MR_Box) (transform_hlds__stm_expand__V_159_159));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_158_158, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_153_153, 0) = ((MR_Box) (transform_hlds__stm_expand__V_88_88));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_153_153, 1) = ((MR_Box) (transform_hlds__stm_expand__V_158_158));
    }
    {
      transform_hlds__stm_expand__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_148_148, 0) = ((MR_Box) (transform_hlds__stm_expand__V_149_149));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_148_148, 1) = ((MR_Box) (transform_hlds__stm_expand__V_153_153));
    }
    {
      transform_hlds__stm_expand__V_143_143 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_148_148);
    }
    {
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_135_135, (MR_String) "stm_merge_nested_logs", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__V_141_141, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_143_143, &transform_hlds__stm_expand__MergeNestedLogsCall_39, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_134_134, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_144_144);
    }
    {
      transform_hlds__stm_expand__V_163_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_163_163, 0) = ((MR_Box) (transform_hlds__stm_expand__MergeNestedLogsCall_39));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_163_163, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_162_162, 0) = ((MR_Box) (transform_hlds__stm_expand__DeconstructGoal_38));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_162_162, 1) = ((MR_Box) (transform_hlds__stm_expand__V_163_163));
    }
    {
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_162_162, &transform_hlds__stm_expand__SuccessBranch_40);
    }
    {
      transform_hlds__stm_expand__V_165_165 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_176_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_176_176, 0) = ((MR_Box) (transform_hlds__stm_expand__V_149_149));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_176_176, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_173_173 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_176_176);
    }
    {
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_165_165, (MR_String) "stm_discard_transaction_log", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__V_110_110, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_173_173, &transform_hlds__stm_expand__DiscardCall_41, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_144_144, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_174_174);
    }
    {
      transform_hlds__stm_expand__V_182_182 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_192_192, 0) = ((MR_Box) (transform_hlds__stm_expand__ReturnExceptVar_33));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_192_192, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_188_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_188_188, 0) = ((MR_Box) (transform_hlds__stm_expand__RttiVar_19));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_188_188, 1) = ((MR_Box) (transform_hlds__stm_expand__V_192_192));
    }
    {
      transform_hlds__stm_expand__V_190_190 = hlds__instmap__instmap_delta_bind_vars_1_f_0(transform_hlds__stm_expand__V_188_188);
    }
    {
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_182_182, (MR_String) "rethrow", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 6, (MR_Integer) 0, transform_hlds__stm_expand__V_188_188, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_190_190, &transform_hlds__stm_expand__RethrowCall_42, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_174_174, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_191_191);
    }
    {
      transform_hlds__stm_expand__V_197_197 = parse_tree__builtin_lib_types__univ_type_0_f_0();
    }
    {
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_197_197, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[5]), &transform_hlds__stm_expand__ExceptUnivVar_43, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_191_191, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_199_199);
    }
    {
      transform_hlds__stm_expand__V_201_201 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_202_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_202_202, 0) = ((MR_Box) (transform_hlds__stm_expand__ExceptUnivVar_43));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_202_202, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_goal__deconstruct_functor_4_p_0(transform_hlds__stm_expand__ReturnExceptVar_33, transform_hlds__stm_expand__V_201_201, transform_hlds__stm_expand__V_202_202, &transform_hlds__stm_expand__DeconstructException_44);
    }
    {
      transform_hlds__stm_expand__V_205_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_205_205, 0) = ((MR_Box) (transform_hlds__stm_expand__RethrowCall_42));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_205_205, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_204_204, 0) = ((MR_Box) (transform_hlds__stm_expand__DiscardCall_41));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_204_204, 1) = ((MR_Box) (transform_hlds__stm_expand__V_205_205));
    }
    {
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_204_204, &transform_hlds__stm_expand__NotRetryBranch_45);
    }
    {
      transform_hlds__stm_expand__V_207_207 = parse_tree__builtin_lib_types__stm_rollback_retry_functor_0_f_0();
    }
    {
      transform_hlds__stm_expand__template_if_exceptres_is_cons_8_p_0(transform_hlds__stm_expand__RollbackExceptionRttiVar_20, transform_hlds__stm_expand__ExceptUnivVar_43, transform_hlds__stm_expand__V_207_207, transform_hlds__stm_expand__RetryBranch_22, transform_hlds__stm_expand__NotRetryBranch_45, &transform_hlds__stm_expand__IfRetryGoal_46, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_199_199, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_208_208);
    }
    {
      transform_hlds__stm_expand__V_210_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_210_210, 0) = ((MR_Box) (transform_hlds__stm_expand__IfRetryGoal_46));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_210_210, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_209_209, 0) = ((MR_Box) (transform_hlds__stm_expand__DeconstructException_44));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_209_209, 1) = ((MR_Box) (transform_hlds__stm_expand__V_210_210));
    }
    {
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_209_209, &transform_hlds__stm_expand__ExceptionBranch_47);
    }
    {
      transform_hlds__stm_expand__V_217_217 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_216_216 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_216_216, 0) = ((MR_Box) (transform_hlds__stm_expand__V_217_217));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_216_216, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_216_216, 2) = ((MR_Box) (transform_hlds__stm_expand__ExceptionBranch_47));
    }
    {
      transform_hlds__stm_expand__V_221_221 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_220_220 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_220_220, 0) = ((MR_Box) (transform_hlds__stm_expand__V_221_221));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_220_220, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_220_220, 2) = ((MR_Box) (transform_hlds__stm_expand__SuccessBranch_40));
    }
    {
      transform_hlds__stm_expand__V_219_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_219_219, 0) = ((MR_Box) (transform_hlds__stm_expand__V_220_220));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_219_219, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_212_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_212_212, 0) = ((MR_Box) (transform_hlds__stm_expand__V_216_216));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_212_212, 1) = ((MR_Box) (transform_hlds__stm_expand__V_219_219));
    }
    {
      transform_hlds__stm_expand__create_switch_disjunction_7_p_0(transform_hlds__stm_expand__ReturnExceptVar_33, transform_hlds__stm_expand__V_212_212, (MR_Integer) 0, (MR_Integer) 2, &transform_hlds__stm_expand__DisjGoal_48, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_208_208, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_50);
    }
    {
      transform_hlds__stm_expand__V_227_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_227_227, 0) = ((MR_Box) (transform_hlds__stm_expand__DisjGoal_48));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_227_227, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_226_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_226_226, 0) = ((MR_Box) (transform_hlds__stm_expand__TryStmCall_37));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_226_226, 1) = ((MR_Box) (transform_hlds__stm_expand__V_227_227));
    }
    {
      transform_hlds__stm_expand__V_225_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_225_225, 0) = ((MR_Box) (transform_hlds__stm_expand__ClosureAssign_35));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_225_225, 1) = ((MR_Box) (transform_hlds__stm_expand__V_226_226));
    }
    {
      transform_hlds__stm_expand__V_224_224 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_224_224, 0) = ((MR_Box) (transform_hlds__stm_expand__CreateNestedLogCall_36));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_224_224, 1) = ((MR_Box) (transform_hlds__stm_expand__V_225_225));
    }
    {
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_224_224, transform_hlds__stm_expand__Goal_23);
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_end_branch_7_p_0_1(
  MR_Box transform_hlds__stm_expand__closure_arg,
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2,
  MR_Box transform_hlds__stm_expand__wrapper_arg_3,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_4)
{
  {
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
    MR_Word transform_hlds__stm_expand__conv1_LambdaHeadVar__2_42;
    MR_Word transform_hlds__stm_expand__conv0_LambdaHeadVar__4_44;

    {
      transform_hlds__stm_expand__IntroducedFrom__pred__create_or_else_end_branch__1808__1_4_p_0(((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), &transform_hlds__stm_expand__conv1_LambdaHeadVar__2_42, ((MR_Word) transform_hlds__stm_expand__wrapper_arg_3), &transform_hlds__stm_expand__conv0_LambdaHeadVar__4_44);
    }
    *transform_hlds__stm_expand__wrapper_arg_2 = ((MR_Box) (transform_hlds__stm_expand__conv1_LambdaHeadVar__2_42));
    *transform_hlds__stm_expand__wrapper_arg_4 = ((MR_Box) (transform_hlds__stm_expand__conv0_LambdaHeadVar__4_44));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_end_branch_7_p_0(
  MR_Word transform_hlds__stm_expand__StmVars_8,
  MR_Word transform_hlds__stm_expand__OuterSTMDI_9,
  MR_Word transform_hlds__stm_expand__OuterSTMUO_10,
  MR_Word transform_hlds__stm_expand__ExceptionRttiVar_11,
  MR_Word * transform_hlds__stm_expand__Goal_12,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_39,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_40)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__TypeInfo_156_156 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0];
    MR_Word transform_hlds__stm_expand__StmVarsMinusHead_19;
    MR_Word transform_hlds__stm_expand__IntermediateStmVars_20;
    MR_Word transform_hlds__stm_expand__MergeStmVarsIn_21;
    MR_Word transform_hlds__stm_expand__MergeStmVarsOut_22;
    MR_Word transform_hlds__stm_expand__MergeGoals_28;
    MR_Word transform_hlds__stm_expand__UnlockCall_29;
    MR_Word transform_hlds__stm_expand__AssignRetryCons_30;
    MR_Word transform_hlds__stm_expand__RetryConsVar_31;
    MR_Word transform_hlds__stm_expand__RetryCall_32;
    MR_Word transform_hlds__stm_expand__ValidGoal_33;
    MR_Word transform_hlds__stm_expand__AssignRollbackCons_34;
    MR_Word transform_hlds__stm_expand__RollbackConsVar_35;
    MR_Word transform_hlds__stm_expand__ThrowCall_36;
    MR_Word transform_hlds__stm_expand__InvalidGoal_37;
    MR_Word transform_hlds__stm_expand__Goals_38;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_48_48;
    MR_Word transform_hlds__stm_expand__V_49_49;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_83_83;
    MR_Word transform_hlds__stm_expand__V_84_84;
    MR_Word transform_hlds__stm_expand__V_92_92;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_93_93;
    MR_Word transform_hlds__stm_expand__V_94_94;
    MR_Word transform_hlds__stm_expand__V_95_95;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_97_97;
    MR_Word transform_hlds__stm_expand__V_99_99;
    MR_Word transform_hlds__stm_expand__V_105_105;
    MR_Word transform_hlds__stm_expand__V_107_107;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_108_108;
    MR_Word transform_hlds__stm_expand__V_109_109;
    MR_Word transform_hlds__stm_expand__V_114_114;
    MR_Word transform_hlds__stm_expand__V_115_115;
    MR_Word transform_hlds__stm_expand__V_116_116;
    MR_Word transform_hlds__stm_expand__V_117_117;
    MR_Word transform_hlds__stm_expand__V_119_119;
    MR_Word transform_hlds__stm_expand__V_120_120;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_122_122;
    MR_Word transform_hlds__stm_expand__V_124_124;
    MR_Word transform_hlds__stm_expand__V_130_130;
    MR_Word transform_hlds__stm_expand__V_132_132;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_133_133;
    MR_Word transform_hlds__stm_expand__V_134_134;
    MR_Word transform_hlds__stm_expand__V_139_139;
    MR_Word transform_hlds__stm_expand__V_140_140;
    MR_Word transform_hlds__stm_expand__V_141_141;
    MR_Box transform_hlds__stm_expand__conv2_STATE_VARIABLE_NewPredInfo_48_48;

    {
      transform_hlds__stm_expand__StmVarsMinusHead_19 = mercury__list__det_tail_1_f_0(transform_hlds__stm_expand__TypeInfo_156_156, transform_hlds__stm_expand__StmVars_8);
    }
    {
      mercury__list__map_foldl_5_p_0(transform_hlds__stm_expand__TypeInfo_156_156, transform_hlds__stm_expand__TypeInfo_156_156, (MR_Word) &transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0, (MR_Word) &transform_hlds__stm_expand_scalar_common_2[12], transform_hlds__stm_expand__StmVarsMinusHead_19, &transform_hlds__stm_expand__IntermediateStmVars_20, ((MR_Box) (transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_39)), &transform_hlds__stm_expand__conv2_STATE_VARIABLE_NewPredInfo_48_48);
    }
    transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_48_48 = ((MR_Word) transform_hlds__stm_expand__conv2_STATE_VARIABLE_NewPredInfo_48_48);
    {
      transform_hlds__stm_expand__MergeStmVarsIn_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MergeStmVarsIn_21, 0) = ((MR_Box) (transform_hlds__stm_expand__OuterSTMDI_9));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MergeStmVarsIn_21, 1) = ((MR_Box) (transform_hlds__stm_expand__IntermediateStmVars_20));
    }
    {
      transform_hlds__stm_expand__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_49_49, 0) = ((MR_Box) (transform_hlds__stm_expand__OuterSTMUO_10));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__MergeStmVarsOut_22 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeInfo_156_156, transform_hlds__stm_expand__IntermediateStmVars_20, transform_hlds__stm_expand__V_49_49);
    }
    {
      transform_hlds__stm_expand__map3_in_foldl__ho1_7_p_0(transform_hlds__stm_expand__StmVars_8, transform_hlds__stm_expand__MergeStmVarsIn_21, transform_hlds__stm_expand__MergeStmVarsOut_22, &transform_hlds__stm_expand__MergeGoals_28, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_48_48, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_83_83);
    }
    {
      transform_hlds__stm_expand__V_84_84 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_92_92 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
    {
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_84_84, (MR_String) "stm_unlock", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_92_92, &transform_hlds__stm_expand__UnlockCall_29, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_83_83, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_93_93);
    }
    {
      transform_hlds__stm_expand__V_94_94 = parse_tree__builtin_lib_types__stm_rollback_retry_functor_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_95_95 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    }
    {
      transform_hlds__stm_expand__create_aux_variable_assignment_7_p_0(transform_hlds__stm_expand__V_94_94, transform_hlds__stm_expand__V_95_95, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[17]), &transform_hlds__stm_expand__AssignRetryCons_30, &transform_hlds__stm_expand__RetryConsVar_31, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_93_93, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_97_97);
    }
    {
      transform_hlds__stm_expand__V_99_99 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_109_109, 0) = ((MR_Box) (transform_hlds__stm_expand__RetryConsVar_31));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_109_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_105_105, 0) = ((MR_Box) (transform_hlds__stm_expand__ExceptionRttiVar_11));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_105_105, 1) = ((MR_Box) (transform_hlds__stm_expand__V_109_109));
    }
    {
      transform_hlds__stm_expand__V_107_107 = hlds__instmap__instmap_delta_bind_vars_1_f_0(transform_hlds__stm_expand__V_105_105);
    }
    {
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_99_99, (MR_String) "throw", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 6, (MR_Integer) 0, transform_hlds__stm_expand__V_105_105, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_107_107, &transform_hlds__stm_expand__RetryCall_32, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_97_97, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_108_108);
    }
    {
      transform_hlds__stm_expand__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_117_117, 0) = ((MR_Box) (transform_hlds__stm_expand__RetryCall_32));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_117_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_116_116, 0) = ((MR_Box) (transform_hlds__stm_expand__AssignRetryCons_30));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_116_116, 1) = ((MR_Box) (transform_hlds__stm_expand__V_117_117));
    }
    {
      transform_hlds__stm_expand__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_115_115, 0) = ((MR_Box) (transform_hlds__stm_expand__UnlockCall_29));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_115_115, 1) = ((MR_Box) (transform_hlds__stm_expand__V_116_116));
    }
    {
      transform_hlds__stm_expand__V_114_114 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__stm_expand__MergeGoals_28, transform_hlds__stm_expand__V_115_115);
    }
    {
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_114_114, &transform_hlds__stm_expand__ValidGoal_33);
    }
    {
      transform_hlds__stm_expand__V_119_119 = parse_tree__builtin_lib_types__stm_rollback_exception_functor_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_120_120 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    }
    {
      transform_hlds__stm_expand__create_aux_variable_assignment_7_p_0(transform_hlds__stm_expand__V_119_119, transform_hlds__stm_expand__V_120_120, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[18]), &transform_hlds__stm_expand__AssignRollbackCons_34, &transform_hlds__stm_expand__RollbackConsVar_35, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_108_108, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_122_122);
    }
    {
      transform_hlds__stm_expand__V_124_124 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_134_134, 0) = ((MR_Box) (transform_hlds__stm_expand__RollbackConsVar_35));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_130_130, 0) = ((MR_Box) (transform_hlds__stm_expand__ExceptionRttiVar_11));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_130_130, 1) = ((MR_Box) (transform_hlds__stm_expand__V_134_134));
    }
    {
      transform_hlds__stm_expand__V_132_132 = hlds__instmap__instmap_delta_bind_vars_1_f_0(transform_hlds__stm_expand__V_130_130);
    }
    {
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_124_124, (MR_String) "throw", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 6, (MR_Integer) 0, transform_hlds__stm_expand__V_130_130, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_132_132, &transform_hlds__stm_expand__ThrowCall_36, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_122_122, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_133_133);
    }
    {
      transform_hlds__stm_expand__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_141_141, 0) = ((MR_Box) (transform_hlds__stm_expand__ThrowCall_36));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_141_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_140_140, 0) = ((MR_Box) (transform_hlds__stm_expand__AssignRollbackCons_34));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_140_140, 1) = ((MR_Box) (transform_hlds__stm_expand__V_141_141));
    }
    {
      transform_hlds__stm_expand__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_139_139, 0) = ((MR_Box) (transform_hlds__stm_expand__UnlockCall_29));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_139_139, 1) = ((MR_Box) (transform_hlds__stm_expand__V_140_140));
    }
    {
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_139_139, &transform_hlds__stm_expand__InvalidGoal_37);
    }
    {
      transform_hlds__stm_expand__template_lock_and_validate_many_7_p_0(transform_hlds__stm_expand__StmVars_8, (MR_Integer) 0, transform_hlds__stm_expand__ValidGoal_33, transform_hlds__stm_expand__InvalidGoal_37, &transform_hlds__stm_expand__Goals_38, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_133_133, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_40);
    }
    {
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__Goals_38, transform_hlds__stm_expand__Goal_12);
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_p_0(
  MR_Integer transform_hlds__stm_expand__Count_5,
  MR_Word * transform_hlds__stm_expand__Vars_6,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_11,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_12)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__Count_5 == (MR_Integer) 0);

    if (transform_hlds__stm_expand__succeeded)
      {
        *transform_hlds__stm_expand__Vars_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_12 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_11;
      }
    else
      {
        transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__Count_5 > (MR_Integer) 0);
        if (transform_hlds__stm_expand__succeeded)
          {
            MR_Word transform_hlds__stm_expand__Var_8;
            MR_Integer transform_hlds__stm_expand__Count1_9;
            MR_Word transform_hlds__stm_expand__Vars0_10;
            MR_Word transform_hlds__stm_expand__V_14_14;
            MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_16_16;

            {
              transform_hlds__stm_expand__V_14_14 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
            }
            {
              transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_14_14, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[16]), &transform_hlds__stm_expand__Var_8, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_11, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_16_16);
            }
            transform_hlds__stm_expand__Count1_9 = (transform_hlds__stm_expand__Count_5 - (MR_Integer) 1);
            {
              transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_p_0(transform_hlds__stm_expand__Count1_9, &transform_hlds__stm_expand__Vars0_10, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_16_16, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_12);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__stm_expand__Vars_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__Var_8));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__stm_expand__Vars0_10));
            }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.create_or_else_inner_stm_vars\'/4", (MR_String) "negative count");
              return;
            }
          }
      }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_branches_13_p_0(
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_14,
  MR_Word transform_hlds__stm_expand__ReturnType_15,
  MR_Word transform_hlds__stm_expand__OuterStmDIVar_16,
  MR_Word transform_hlds__stm_expand__OuterStmUOVar_17,
  MR_Word transform_hlds__stm_expand__InnerSTMVars_18,
  MR_Word transform_hlds__stm_expand__RttiVar_19,
  MR_Word transform_hlds__stm_expand__RollbackExceptionRttiVar_20,
  MR_Word transform_hlds__stm_expand__WrapperIDs_21,
  MR_Word transform_hlds__stm_expand__EndBranch_22,
  MR_Word * transform_hlds__stm_expand__Goal_23,
  MR_Word transform_hlds__stm_expand__StmInfo_24,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_33,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__InnerSTMVars_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (transform_hlds__stm_expand__succeeded)
      {
        transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__WrapperIDs_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (transform_hlds__stm_expand__succeeded)
          transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__AtomicGoalVars_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (transform_hlds__stm_expand__succeeded)
      {
        *transform_hlds__stm_expand__Goal_23 = transform_hlds__stm_expand__EndBranch_22;
        *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_33;
      }
    else
      {
        MR_Word transform_hlds__stm_expand__AGV_26;
        MR_Word transform_hlds__stm_expand__AGVs_27;
        MR_Word transform_hlds__stm_expand__InnerVar_28;
        MR_Word transform_hlds__stm_expand__InnerSTMVars0_29;
        MR_Word transform_hlds__stm_expand__WrapID_30;
        MR_Word transform_hlds__stm_expand__WrapperIDs0_31;

        transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__AtomicGoalVars_14)) == (MR_mktag((MR_Integer) 1)));
        if (transform_hlds__stm_expand__succeeded)
          {
            transform_hlds__stm_expand__AGV_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__AtomicGoalVars_14, (MR_Integer) 0)));
            transform_hlds__stm_expand__AGVs_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__AtomicGoalVars_14, (MR_Integer) 1)));
            transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__InnerSTMVars_18)) == (MR_mktag((MR_Integer) 1)));
            if (transform_hlds__stm_expand__succeeded)
              {
                transform_hlds__stm_expand__InnerVar_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__InnerSTMVars_18, (MR_Integer) 0)));
                transform_hlds__stm_expand__InnerSTMVars0_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__InnerSTMVars_18, (MR_Integer) 1)));
                transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__WrapperIDs_21)) == (MR_mktag((MR_Integer) 1)));
                if (transform_hlds__stm_expand__succeeded)
                  {
                    transform_hlds__stm_expand__WrapID_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__WrapperIDs_21, (MR_Integer) 0)));
                    transform_hlds__stm_expand__WrapperIDs0_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__WrapperIDs_21, (MR_Integer) 1)));
                  }
              }
          }
        if (transform_hlds__stm_expand__succeeded)
          {
            MR_Word transform_hlds__stm_expand__Goal0_32;
            MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_35_35;

            {
              transform_hlds__stm_expand__create_or_else_branches_13_p_0(transform_hlds__stm_expand__AGVs_27, transform_hlds__stm_expand__ReturnType_15, transform_hlds__stm_expand__OuterStmDIVar_16, transform_hlds__stm_expand__OuterStmUOVar_17, transform_hlds__stm_expand__InnerSTMVars0_29, transform_hlds__stm_expand__RttiVar_19, transform_hlds__stm_expand__RollbackExceptionRttiVar_20, transform_hlds__stm_expand__WrapperIDs0_31, transform_hlds__stm_expand__EndBranch_22, &transform_hlds__stm_expand__Goal0_32, transform_hlds__stm_expand__StmInfo_24, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_33, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_35_35);
            }
            {
              transform_hlds__stm_expand__create_or_else_branch_13_p_0(transform_hlds__stm_expand__AGV_26, transform_hlds__stm_expand__ReturnType_15, transform_hlds__stm_expand__OuterStmDIVar_16, transform_hlds__stm_expand__OuterStmUOVar_17, transform_hlds__stm_expand__InnerVar_28, transform_hlds__stm_expand__RttiVar_19, transform_hlds__stm_expand__RollbackExceptionRttiVar_20, transform_hlds__stm_expand__WrapID_30, transform_hlds__stm_expand__Goal0_32, transform_hlds__stm_expand__Goal_23, transform_hlds__stm_expand__StmInfo_24, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_35_35, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34);
            }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.create_or_else_branches\'/13", (MR_String) "mismatched lists");
              return;
            }
          }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__stm_expand__create_or_else_pred_2_8_p_0_2(
  MR_Box transform_hlds__stm_expand__closure_arg)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;

    {
      transform_hlds__stm_expand__succeeded = transform_hlds__stm_expand__IntroducedFrom__pred__make_type_info__2387__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__closure, (MR_Integer) 4))));
    }
    return transform_hlds__stm_expand__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__stm_expand__create_or_else_pred_2_8_p_0_1(
  MR_Box transform_hlds__stm_expand__closure_arg)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;

    {
      transform_hlds__stm_expand__succeeded = transform_hlds__stm_expand__IntroducedFrom__pred__make_type_info__2387__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__closure, (MR_Integer) 4))));
    }
    return transform_hlds__stm_expand__succeeded;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_pred_2_8_p_0(
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_9,
  MR_Word transform_hlds__stm_expand__Closures_10,
  MR_Word transform_hlds__stm_expand__StmDI_11,
  MR_Word transform_hlds__stm_expand__StmUO_12,
  MR_Word transform_hlds__stm_expand__ReturnType_13,
  MR_Word transform_hlds__stm_expand__StmInfo_14,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_28,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_43_43;
    MR_Integer transform_hlds__stm_expand__ClosureCount_16;
    MR_Word transform_hlds__stm_expand__InnerSTMVars_17;
    MR_Word transform_hlds__stm_expand__ReturnRttiVar_18;
    MR_Word transform_hlds__stm_expand__CreateRetTypeInfo_19;
    MR_Word transform_hlds__stm_expand__ExceptRttiVar_20;
    MR_Word transform_hlds__stm_expand__CreateExceptTypeInfo_21;
    MR_Word transform_hlds__stm_expand__EndBranchGoal_22;
    MR_Word transform_hlds__stm_expand__MainGoal0_23;
    MR_Word transform_hlds__stm_expand__TopLevelGoalList0_24;
    MR_Word transform_hlds__stm_expand__TopLevelGoalList_25;
    MR_Word transform_hlds__stm_expand__MainGoal1_26;
    MR_Word transform_hlds__stm_expand__MainGoal_27;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_30_30;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31;
    MR_Word transform_hlds__stm_expand__V_32_32;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_35_35;
    MR_Word transform_hlds__stm_expand__V_36_36;
    MR_Word transform_hlds__stm_expand__V_37_37;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_40_40;
    MR_Word transform_hlds__stm_expand__ModuleInfo0_49;
    MR_Word transform_hlds__stm_expand__PredId_50;
    MR_Integer transform_hlds__stm_expand__ProcId_51;
    MR_Word transform_hlds__stm_expand__PredInfo0_52;
    MR_Word transform_hlds__stm_expand__ProcInfo0_53;
    MR_Word transform_hlds__stm_expand__Context_54;
    MR_Integer transform_hlds__stm_expand__VarCnt_55;
    MR_Word transform_hlds__stm_expand__PolyInfo0_56;
    MR_Word transform_hlds__stm_expand__PolyInfo_57;
    MR_Word transform_hlds__stm_expand__PolySpecs_58;
    MR_Word transform_hlds__stm_expand__PredInfo_59;
    MR_Word transform_hlds__stm_expand__ProcInfo_60;
    MR_Word transform_hlds__stm_expand__ModuleInfo_61;
    MR_Word transform_hlds__stm_expand__V_62_62;
    MR_Word transform_hlds__stm_expand__ModuleInfo0_73;
    MR_Word transform_hlds__stm_expand__PredId_74;
    MR_Integer transform_hlds__stm_expand__ProcId_75;
    MR_Word transform_hlds__stm_expand__PredInfo0_76;
    MR_Word transform_hlds__stm_expand__ProcInfo0_77;
    MR_Word transform_hlds__stm_expand__Context_78;
    MR_Integer transform_hlds__stm_expand__VarCnt_79;
    MR_Word transform_hlds__stm_expand__PolyInfo0_80;
    MR_Word transform_hlds__stm_expand__PolyInfo_81;
    MR_Word transform_hlds__stm_expand__PolySpecs_82;
    MR_Word transform_hlds__stm_expand__PredInfo_83;
    MR_Word transform_hlds__stm_expand__ProcInfo_84;
    MR_Word transform_hlds__stm_expand__ModuleInfo_85;
    MR_Word transform_hlds__stm_expand__V_86_86;

    {
      mercury__list__length_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__stm_expand__Closures_10, &transform_hlds__stm_expand__ClosureCount_16);
    }
    {
      transform_hlds__stm_expand__create_or_else_inner_stm_vars_4_p_0(transform_hlds__stm_expand__ClosureCount_16, &transform_hlds__stm_expand__InnerSTMVars_17, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_28, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_30_30);
    }
    transform_hlds__stm_expand__ModuleInfo0_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_30_30, (MR_Integer) 0)));
    transform_hlds__stm_expand__PredId_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_30_30, (MR_Integer) 1)));
    transform_hlds__stm_expand__ProcId_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_30_30, (MR_Integer) 2)));
    transform_hlds__stm_expand__PredInfo0_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_30_30, (MR_Integer) 3)));
    transform_hlds__stm_expand__ProcInfo0_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_30_30, (MR_Integer) 4)));
    transform_hlds__stm_expand__Context_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_30_30, (MR_Integer) 5)));
    transform_hlds__stm_expand__VarCnt_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_30_30, (MR_Integer) 6)));
    {
      check_hlds__polymorphism__create_poly_info_4_p_0(transform_hlds__stm_expand__ModuleInfo0_49, transform_hlds__stm_expand__PredInfo0_52, transform_hlds__stm_expand__ProcInfo0_53, &transform_hlds__stm_expand__PolyInfo0_56);
    }
    {
      check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(transform_hlds__stm_expand__ReturnType_13, transform_hlds__stm_expand__Context_54, &transform_hlds__stm_expand__ReturnRttiVar_18, &transform_hlds__stm_expand__CreateRetTypeInfo_19, transform_hlds__stm_expand__PolyInfo0_56, &transform_hlds__stm_expand__PolyInfo_57);
    }
    {
      check_hlds__polymorphism__poly_info_extract_7_p_0(transform_hlds__stm_expand__PolyInfo_57, &transform_hlds__stm_expand__PolySpecs_58, transform_hlds__stm_expand__PredInfo0_52, &transform_hlds__stm_expand__PredInfo_59, transform_hlds__stm_expand__ProcInfo0_53, &transform_hlds__stm_expand__ProcInfo_60, &transform_hlds__stm_expand__ModuleInfo_61);
    }
    {
      transform_hlds__stm_expand__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_62_62, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_62_62, 1) = ((MR_Box) (transform_hlds__stm_expand__create_or_else_pred_2_8_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_62_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_62_62, 3) = ((MR_Box) (transform_hlds__stm_expand__PolySpecs_58));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_62_62, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mercury__require__expect_4_p_0(transform_hlds__stm_expand__V_62_62, (MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.make_type_info\'/5", (MR_String) "got errors while making type_info_var");
    }
    {
      transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, 0) = ((MR_Box) (transform_hlds__stm_expand__ModuleInfo_61));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, 1) = ((MR_Box) (transform_hlds__stm_expand__PredId_50));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, 2) = ((MR_Box) (transform_hlds__stm_expand__ProcId_51));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, 3) = ((MR_Box) (transform_hlds__stm_expand__PredInfo_59));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, 4) = ((MR_Box) (transform_hlds__stm_expand__ProcInfo_60));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, 5) = ((MR_Box) (transform_hlds__stm_expand__Context_54));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, 6) = ((MR_Box) (transform_hlds__stm_expand__VarCnt_55));
    }
    {
      transform_hlds__stm_expand__V_32_32 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    }
    transform_hlds__stm_expand__ModuleInfo0_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, (MR_Integer) 0)));
    transform_hlds__stm_expand__PredId_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, (MR_Integer) 1)));
    transform_hlds__stm_expand__ProcId_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, (MR_Integer) 2)));
    transform_hlds__stm_expand__PredInfo0_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, (MR_Integer) 3)));
    transform_hlds__stm_expand__ProcInfo0_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, (MR_Integer) 4)));
    transform_hlds__stm_expand__Context_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, (MR_Integer) 5)));
    transform_hlds__stm_expand__VarCnt_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, (MR_Integer) 6)));
    {
      check_hlds__polymorphism__create_poly_info_4_p_0(transform_hlds__stm_expand__ModuleInfo0_73, transform_hlds__stm_expand__PredInfo0_76, transform_hlds__stm_expand__ProcInfo0_77, &transform_hlds__stm_expand__PolyInfo0_80);
    }
    {
      check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(transform_hlds__stm_expand__V_32_32, transform_hlds__stm_expand__Context_78, &transform_hlds__stm_expand__ExceptRttiVar_20, &transform_hlds__stm_expand__CreateExceptTypeInfo_21, transform_hlds__stm_expand__PolyInfo0_80, &transform_hlds__stm_expand__PolyInfo_81);
    }
    {
      check_hlds__polymorphism__poly_info_extract_7_p_0(transform_hlds__stm_expand__PolyInfo_81, &transform_hlds__stm_expand__PolySpecs_82, transform_hlds__stm_expand__PredInfo0_76, &transform_hlds__stm_expand__PredInfo_83, transform_hlds__stm_expand__ProcInfo0_77, &transform_hlds__stm_expand__ProcInfo_84, &transform_hlds__stm_expand__ModuleInfo_85);
    }
    {
      transform_hlds__stm_expand__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_86_86, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_86_86, 1) = ((MR_Box) (transform_hlds__stm_expand__create_or_else_pred_2_8_p_0_2));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_86_86, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_86_86, 3) = ((MR_Box) (transform_hlds__stm_expand__PolySpecs_82));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_86_86, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mercury__require__expect_4_p_0(transform_hlds__stm_expand__V_86_86, (MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.make_type_info\'/5", (MR_String) "got errors while making type_info_var");
    }
    {
      transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33, 0) = ((MR_Box) (transform_hlds__stm_expand__ModuleInfo_85));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33, 1) = ((MR_Box) (transform_hlds__stm_expand__PredId_74));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33, 2) = ((MR_Box) (transform_hlds__stm_expand__ProcId_75));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33, 3) = ((MR_Box) (transform_hlds__stm_expand__PredInfo_83));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33, 4) = ((MR_Box) (transform_hlds__stm_expand__ProcInfo_84));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33, 5) = ((MR_Box) (transform_hlds__stm_expand__Context_78));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33, 6) = ((MR_Box) (transform_hlds__stm_expand__VarCnt_79));
    }
    {
      transform_hlds__stm_expand__create_or_else_end_branch_7_p_0(transform_hlds__stm_expand__InnerSTMVars_17, transform_hlds__stm_expand__StmDI_11, transform_hlds__stm_expand__StmUO_12, transform_hlds__stm_expand__ExceptRttiVar_20, &transform_hlds__stm_expand__EndBranchGoal_22, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34);
    }
    {
      transform_hlds__stm_expand__create_or_else_branches_13_p_0(transform_hlds__stm_expand__AtomicGoalVars_9, transform_hlds__stm_expand__ReturnType_13, transform_hlds__stm_expand__StmDI_11, transform_hlds__stm_expand__StmUO_12, transform_hlds__stm_expand__InnerSTMVars_17, transform_hlds__stm_expand__ReturnRttiVar_18, transform_hlds__stm_expand__ExceptRttiVar_20, transform_hlds__stm_expand__Closures_10, transform_hlds__stm_expand__EndBranchGoal_22, &transform_hlds__stm_expand__MainGoal0_23, transform_hlds__stm_expand__StmInfo_14, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_35_35);
    }
    transform_hlds__stm_expand__TypeCtorInfo_43_43 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    {
      transform_hlds__stm_expand__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_37_37, 0) = ((MR_Box) (transform_hlds__stm_expand__MainGoal0_23));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_36_36 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_43_43, transform_hlds__stm_expand__CreateExceptTypeInfo_21, transform_hlds__stm_expand__V_37_37);
    }
    {
      transform_hlds__stm_expand__TopLevelGoalList0_24 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_43_43, transform_hlds__stm_expand__CreateRetTypeInfo_19, transform_hlds__stm_expand__V_36_36);
    }
    {
      hlds__goal_util__flatten_conj_2_p_0(transform_hlds__stm_expand__TopLevelGoalList0_24, &transform_hlds__stm_expand__TopLevelGoalList_25);
    }
    {
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__TopLevelGoalList_25, &transform_hlds__stm_expand__MainGoal1_26);
    }
    {
      transform_hlds__stm_expand__create_promise_purity_scope_3_p_0(transform_hlds__stm_expand__MainGoal1_26, (MR_Integer) 0, &transform_hlds__stm_expand__MainGoal_27);
    }
    {
      transform_hlds__stm_expand__new_pred_set_goal_3_p_0(transform_hlds__stm_expand__MainGoal_27, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_35_35, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_40_40);
    }
    {
      transform_hlds__stm_expand__run_quantification_over_pred_2_p_0(transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_40_40, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29);
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_or_else_pred_8_p_0(
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_9,
  MR_Word transform_hlds__stm_expand__BranchGoalVars_10,
  MR_Word transform_hlds__stm_expand__Closures_11,
  MR_Word transform_hlds__stm_expand__StmDI_12,
  MR_Word transform_hlds__stm_expand__StmUO_13,
  MR_Word * transform_hlds__stm_expand__CallGoal_14,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_31,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_32)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__TypeInfo_67_67;
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_68_68;
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_69_69;
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_17_83 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word transform_hlds__stm_expand__InputVars_16;
    MR_Word transform_hlds__stm_expand__OutputVars_17;
    MR_Word transform_hlds__stm_expand__InputTypes_18;
    MR_Word transform_hlds__stm_expand__OutputTypes_19;
    MR_Word transform_hlds__stm_expand__InputModes_20;
    MR_Word transform_hlds__stm_expand__OutputModes_21;
    MR_Word transform_hlds__stm_expand__ReturnType_23;
    MR_Word transform_hlds__stm_expand__NewPredInfo0_24;
    MR_Word transform_hlds__stm_expand__NewStmDI_25;
    MR_Word transform_hlds__stm_expand__NewPredInfo1_26;
    MR_Word transform_hlds__stm_expand__NewStmUO_27;
    MR_Word transform_hlds__stm_expand__NewPredInfo2_28;
    MR_Word transform_hlds__stm_expand__NewPredInfo3_29;
    MR_Word transform_hlds__stm_expand__NewPredInfo_30;
    MR_Word transform_hlds__stm_expand__V_33_33;
    MR_Word transform_hlds__stm_expand__V_34_34;
    MR_Word transform_hlds__stm_expand__V_35_35;
    MR_Word transform_hlds__stm_expand__V_37_37;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_38_38;
    MR_Word transform_hlds__stm_expand__V_39_39;
    MR_Word transform_hlds__stm_expand__V_40_40;
    MR_Word transform_hlds__stm_expand__V_41_41;
    MR_Word transform_hlds__stm_expand__V_43_43;
    MR_Word transform_hlds__stm_expand__V_44_44;
    MR_Word transform_hlds__stm_expand__V_45_45;
    MR_Word transform_hlds__stm_expand__V_46_46;
    MR_Word transform_hlds__stm_expand__V_47_47;
    MR_Word transform_hlds__stm_expand__V_49_49;
    MR_Word transform_hlds__stm_expand__V_50_50;
    MR_Word transform_hlds__stm_expand__V_51_51;
    MR_Word transform_hlds__stm_expand__V_52_52;
    MR_Word transform_hlds__stm_expand__V_53_53;
    MR_Word transform_hlds__stm_expand__V_55_55;
    MR_Word transform_hlds__stm_expand__V_58_58;
    MR_Word transform_hlds__stm_expand__V_61_61;
    MR_Word transform_hlds__stm_expand__V_62_62;
    MR_Word transform_hlds__stm_expand__V_63_63;
    MR_Word transform_hlds__stm_expand__V_64_64;
    MR_Word transform_hlds__stm_expand__InputSet_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_9, (MR_Integer) 0)));
    MR_Word transform_hlds__stm_expand__OutputSet_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_9, (MR_Integer) 2)));
    MR_Word transform_hlds__stm_expand__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_9, (MR_Integer) 1)));
    MR_Word transform_hlds__stm_expand__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_9, (MR_Integer) 3)));
    MR_Word transform_hlds__stm_expand__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_9, (MR_Integer) 4)));

    {
      transform_hlds__stm_expand__InputVars_16 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_83, transform_hlds__stm_expand__InputSet_73);
    }
    {
      transform_hlds__stm_expand__OutputVars_17 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_83, transform_hlds__stm_expand__OutputSet_74);
    }
    {
      transform_hlds__stm_expand__get_input_output_types_4_p_0(transform_hlds__stm_expand__AtomicGoalVars_9, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_31, &transform_hlds__stm_expand__InputTypes_18, &transform_hlds__stm_expand__OutputTypes_19);
    }
    {
      transform_hlds__stm_expand__get_input_output_modes_3_p_0(transform_hlds__stm_expand__AtomicGoalVars_9, &transform_hlds__stm_expand__InputModes_20, &transform_hlds__stm_expand__OutputModes_21);
    }
    if ((transform_hlds__stm_expand__OutputTypes_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        transform_hlds__stm_expand__ReturnType_23 = parse_tree__builtin_lib_types__stm_dummy_output_type_0_f_0();
      }
    else
      {
        MR_Word transform_hlds__stm_expand__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__OutputTypes_19, (MR_Integer) 1)));
        MR_Word transform_hlds__stm_expand__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__OutputTypes_19, (MR_Integer) 0)));

        if ((transform_hlds__stm_expand__V_92_92 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          transform_hlds__stm_expand__ReturnType_23 = transform_hlds__stm_expand__V_93_93;
        else
          {
            {
              transform_hlds__stm_expand__ReturnType_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__ReturnType_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__ReturnType_23, 1) = ((MR_Box) (transform_hlds__stm_expand__OutputTypes_19));
              MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__ReturnType_23, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
      }
    transform_hlds__stm_expand__TypeInfo_67_67 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0];
    {
      transform_hlds__stm_expand__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 0) = ((MR_Box) (transform_hlds__stm_expand__StmUO_13));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_40_40, 0) = ((MR_Box) (transform_hlds__stm_expand__StmDI_12));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_40_40, 1) = ((MR_Box) (transform_hlds__stm_expand__V_41_41));
    }
    {
      transform_hlds__stm_expand__V_39_39 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeInfo_67_67, transform_hlds__stm_expand__OutputVars_17, transform_hlds__stm_expand__V_40_40);
    }
    {
      transform_hlds__stm_expand__V_33_33 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeInfo_67_67, transform_hlds__stm_expand__InputVars_16, transform_hlds__stm_expand__V_39_39);
    }
    transform_hlds__stm_expand__TypeCtorInfo_68_68 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    {
      transform_hlds__stm_expand__V_45_45 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_47_47 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 0) = ((MR_Box) (transform_hlds__stm_expand__V_47_47));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_44_44, 0) = ((MR_Box) (transform_hlds__stm_expand__V_45_45));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_44_44, 1) = ((MR_Box) (transform_hlds__stm_expand__V_46_46));
    }
    {
      transform_hlds__stm_expand__V_43_43 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_68_68, transform_hlds__stm_expand__OutputTypes_19, transform_hlds__stm_expand__V_44_44);
    }
    {
      transform_hlds__stm_expand__V_34_34 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_68_68, transform_hlds__stm_expand__InputTypes_18, transform_hlds__stm_expand__V_43_43);
    }
    transform_hlds__stm_expand__TypeCtorInfo_69_69 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
    {
      transform_hlds__stm_expand__V_51_51 = parse_tree__prog_mode__di_mode_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_53_53 = parse_tree__prog_mode__uo_mode_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_52_52, 0) = ((MR_Box) (transform_hlds__stm_expand__V_53_53));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_50_50, 0) = ((MR_Box) (transform_hlds__stm_expand__V_51_51));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_50_50, 1) = ((MR_Box) (transform_hlds__stm_expand__V_52_52));
    }
    {
      transform_hlds__stm_expand__V_49_49 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_69_69, transform_hlds__stm_expand__OutputModes_21, transform_hlds__stm_expand__V_50_50);
    }
    {
      transform_hlds__stm_expand__V_35_35 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_69_69, transform_hlds__stm_expand__InputModes_20, transform_hlds__stm_expand__V_49_49);
    }
    {
      transform_hlds__stm_expand__V_37_37 = hlds__make_goal__true_goal_0_f_0();
    }
    {
      transform_hlds__stm_expand__create_cloned_pred_10_p_0(transform_hlds__stm_expand__V_33_33, transform_hlds__stm_expand__V_34_34, transform_hlds__stm_expand__V_35_35, (MR_String) "or_else", transform_hlds__stm_expand__V_37_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__stm_expand__NewPredInfo0_24, transform_hlds__stm_expand__CallGoal_14, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_31, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_38_38);
    }
    {
      transform_hlds__stm_expand__V_55_55 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
    {
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_55_55, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[14]), &transform_hlds__stm_expand__NewStmDI_25, transform_hlds__stm_expand__NewPredInfo0_24, &transform_hlds__stm_expand__NewPredInfo1_26);
    }
    {
      transform_hlds__stm_expand__V_58_58 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
    {
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_58_58, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[15]), &transform_hlds__stm_expand__NewStmUO_27, transform_hlds__stm_expand__NewPredInfo1_26, &transform_hlds__stm_expand__NewPredInfo2_28);
    }
    {
      transform_hlds__stm_expand__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_64_64, 0) = ((MR_Box) (transform_hlds__stm_expand__NewStmUO_27));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_63_63, 0) = ((MR_Box) (transform_hlds__stm_expand__NewStmDI_25));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_63_63, 1) = ((MR_Box) (transform_hlds__stm_expand__V_64_64));
    }
    {
      transform_hlds__stm_expand__V_62_62 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeInfo_67_67, transform_hlds__stm_expand__OutputVars_17, transform_hlds__stm_expand__V_63_63);
    }
    {
      transform_hlds__stm_expand__V_61_61 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeInfo_67_67, transform_hlds__stm_expand__InputVars_16, transform_hlds__stm_expand__V_62_62);
    }
    {
      transform_hlds__stm_expand__set_head_vars_3_p_0(transform_hlds__stm_expand__V_61_61, transform_hlds__stm_expand__NewPredInfo2_28, &transform_hlds__stm_expand__NewPredInfo3_29);
    }
    {
      transform_hlds__stm_expand__create_or_else_pred_2_8_p_0(transform_hlds__stm_expand__BranchGoalVars_10, transform_hlds__stm_expand__Closures_11, transform_hlds__stm_expand__NewStmDI_25, transform_hlds__stm_expand__NewStmUO_27, transform_hlds__stm_expand__ReturnType_23, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_38_38, transform_hlds__stm_expand__NewPredInfo3_29, &transform_hlds__stm_expand__NewPredInfo_30);
    }
    {
      transform_hlds__stm_expand__commit_new_pred_3_p_0(transform_hlds__stm_expand__NewPredInfo_30, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_38_38, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_32);
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_p_0(
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_12,
  MR_Word transform_hlds__stm_expand__AtomicGoal_13,
  MR_Word transform_hlds__stm_expand__ResultType_14,
  MR_Word transform_hlds__stm_expand__ResultVar_15,
  MR_Word transform_hlds__stm_expand__StmDI_16,
  MR_Word transform_hlds__stm_expand__StmUO_17,
  MR_Word transform_hlds__stm_expand__CopySTM_18,
  MR_Word * transform_hlds__stm_expand__Goal_19,
  MR_Word transform_hlds__stm_expand__StmInfo_20,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_28,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__AssignResult_22;
    MR_Word transform_hlds__stm_expand__Call1_23;
    MR_Word transform_hlds__stm_expand__Call2_24;
    MR_Word transform_hlds__stm_expand__TopLevelGoalList0_26;
    MR_Word transform_hlds__stm_expand__TopLevelGoalList_27;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34;

    {
      transform_hlds__stm_expand__construct_output_7_p_0(transform_hlds__stm_expand__AtomicGoalVars_12, transform_hlds__stm_expand__ResultType_14, transform_hlds__stm_expand__ResultVar_15, transform_hlds__stm_expand__StmInfo_20, &transform_hlds__stm_expand__AssignResult_22, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_28, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34);
    }
    transform_hlds__stm_expand__Call1_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    transform_hlds__stm_expand__Call2_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    switch (transform_hlds__stm_expand__CopySTM_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__stm_expand__TypeCtorInfo_49_49 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
          MR_Word transform_hlds__stm_expand__V_35_35;
          MR_Word transform_hlds__stm_expand__V_36_36;
          MR_Word transform_hlds__stm_expand__V_38_38;

          {
            transform_hlds__stm_expand__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_36_36, 0) = ((MR_Box) (transform_hlds__stm_expand__AtomicGoal_13));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            transform_hlds__stm_expand__V_38_38 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_49_49, transform_hlds__stm_expand__Call2_24, transform_hlds__stm_expand__AssignResult_22);
          }
          {
            transform_hlds__stm_expand__V_35_35 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_49_49, transform_hlds__stm_expand__V_36_36, transform_hlds__stm_expand__V_38_38);
          }
          {
            transform_hlds__stm_expand__TopLevelGoalList0_26 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_49_49, transform_hlds__stm_expand__Call1_23, transform_hlds__stm_expand__V_35_35);
          }
          *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__stm_expand__TypeCtorInfo_48_48;
          MR_Word transform_hlds__stm_expand__CopySTMAssign_25;
          MR_Word transform_hlds__stm_expand__V_39_39;
          MR_Word transform_hlds__stm_expand__V_41_41;
          MR_Word transform_hlds__stm_expand__V_42_42;
          MR_Word transform_hlds__stm_expand__V_43_43;
          MR_Word transform_hlds__stm_expand__V_44_44;
          MR_Word transform_hlds__stm_expand__V_45_45;
          MR_Word transform_hlds__stm_expand__V_47_47;

          {
            transform_hlds__stm_expand__V_41_41 = parse_tree__prog_mode__uo_mode_0_f_0();
          }
          {
            transform_hlds__stm_expand__V_42_42 = parse_tree__prog_mode__di_mode_0_f_0();
          }
          {
            transform_hlds__stm_expand__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_39_39, 0) = ((MR_Box) (transform_hlds__stm_expand__V_41_41));
            MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_39_39, 1) = ((MR_Box) (transform_hlds__stm_expand__V_42_42));
          }
          {
            transform_hlds__stm_expand__create_var_unify_6_p_0(transform_hlds__stm_expand__StmUO_17, transform_hlds__stm_expand__StmDI_16, transform_hlds__stm_expand__V_39_39, &transform_hlds__stm_expand__CopySTMAssign_25, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29);
          }
          transform_hlds__stm_expand__TypeCtorInfo_48_48 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
          {
            transform_hlds__stm_expand__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_45_45, 0) = ((MR_Box) (transform_hlds__stm_expand__AtomicGoal_13));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            transform_hlds__stm_expand__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_44_44, 0) = ((MR_Box) (transform_hlds__stm_expand__CopySTMAssign_25));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_44_44, 1) = ((MR_Box) (transform_hlds__stm_expand__V_45_45));
          }
          {
            transform_hlds__stm_expand__V_47_47 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_48_48, transform_hlds__stm_expand__Call2_24, transform_hlds__stm_expand__AssignResult_22);
          }
          {
            transform_hlds__stm_expand__V_43_43 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_48_48, transform_hlds__stm_expand__V_44_44, transform_hlds__stm_expand__V_47_47);
          }
          {
            transform_hlds__stm_expand__TopLevelGoalList0_26 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_48_48, transform_hlds__stm_expand__Call1_23, transform_hlds__stm_expand__V_43_43);
          }
        }
        break;
    }
    {
      hlds__goal_util__flatten_conj_2_p_0(transform_hlds__stm_expand__TopLevelGoalList0_26, &transform_hlds__stm_expand__TopLevelGoalList_27);
    }
    {
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__TopLevelGoalList_27, transform_hlds__stm_expand__Goal_19);
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_p_0(
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_10,
  MR_Word transform_hlds__stm_expand__ResultType_11,
  MR_Word transform_hlds__stm_expand__ResultVar0_12,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_0_30,
  MR_Word * transform_hlds__stm_expand__PredProcId_14,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31,
  MR_Word * transform_hlds__stm_expand__CallGoal_16,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_32,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_33)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__TypeInfo_86_86;
    MR_Word transform_hlds__stm_expand__InnerDI_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_10, (MR_Integer) 3)));
    MR_Word transform_hlds__stm_expand__InnerUO0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_10, (MR_Integer) 4)));
    MR_Word transform_hlds__stm_expand__InputVars_20;
    MR_Word transform_hlds__stm_expand__InputTypes_22;
    MR_Word transform_hlds__stm_expand__InputModes_24;
    MR_Word transform_hlds__stm_expand__ResultVar_26;
    MR_Word transform_hlds__stm_expand__CopyStm_27;
    MR_Word transform_hlds__stm_expand__InnerUO_28;
    MR_Word transform_hlds__stm_expand__WrapperGoal_29;
    MR_Word transform_hlds__stm_expand__V_34_34;
    MR_Word transform_hlds__stm_expand__V_35_35;
    MR_Word transform_hlds__stm_expand__V_36_36;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_39_39;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_40_40;
    MR_Word transform_hlds__stm_expand__V_41_41;
    MR_Word transform_hlds__stm_expand__V_42_42;
    MR_Word transform_hlds__stm_expand__V_43_43;
    MR_Word transform_hlds__stm_expand__V_45_45;
    MR_Word transform_hlds__stm_expand__V_46_46;
    MR_Word transform_hlds__stm_expand__V_47_47;
    MR_Word transform_hlds__stm_expand__V_48_48;
    MR_Word transform_hlds__stm_expand__V_49_49;
    MR_Word transform_hlds__stm_expand__V_51_51;
    MR_Word transform_hlds__stm_expand__V_52_52;
    MR_Word transform_hlds__stm_expand__V_53_53;
    MR_Word transform_hlds__stm_expand__V_54_54;
    MR_Word transform_hlds__stm_expand__V_55_55;
    MR_Word transform_hlds__stm_expand__V_56_56;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_59_59;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_60_60;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_61_61;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_62_62;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_63_63;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_66_66;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_68_68;
    MR_Word transform_hlds__stm_expand__V_69_69;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_70_70;
    MR_Word transform_hlds__stm_expand__V_71_71;
    MR_Word transform_hlds__stm_expand__V_72_72;
    MR_Word transform_hlds__stm_expand__V_73_73;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_75_75;
    MR_Word transform_hlds__stm_expand__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_10, (MR_Integer) 0)));
    MR_Word transform_hlds__stm_expand__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_10, (MR_Integer) 1)));
    MR_Word transform_hlds__stm_expand__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_10, (MR_Integer) 2)));
    MR_Word transform_hlds__stm_expand__V_21_21;
    MR_Word transform_hlds__stm_expand__V_23_23;
    MR_Word transform_hlds__stm_expand__V_25_25;

    {
      transform_hlds__stm_expand__get_input_output_varlist_3_p_0(transform_hlds__stm_expand__AtomicGoalVars_10, &transform_hlds__stm_expand__InputVars_20, &transform_hlds__stm_expand__V_21_21);
    }
    {
      transform_hlds__stm_expand__get_input_output_types_4_p_0(transform_hlds__stm_expand__AtomicGoalVars_10, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_32, &transform_hlds__stm_expand__InputTypes_22, &transform_hlds__stm_expand__V_23_23);
    }
    {
      transform_hlds__stm_expand__get_input_output_modes_3_p_0(transform_hlds__stm_expand__AtomicGoalVars_10, &transform_hlds__stm_expand__InputModes_24, &transform_hlds__stm_expand__V_25_25);
    }
    transform_hlds__stm_expand__TypeInfo_86_86 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0];
    {
      transform_hlds__stm_expand__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_43_43, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerUO0_19));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_42_42, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerDI_18));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_42_42, 1) = ((MR_Box) (transform_hlds__stm_expand__V_43_43));
    }
    {
      transform_hlds__stm_expand__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 0) = ((MR_Box) (transform_hlds__stm_expand__ResultVar0_12));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 1) = ((MR_Box) (transform_hlds__stm_expand__V_42_42));
    }
    {
      transform_hlds__stm_expand__V_34_34 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeInfo_86_86, transform_hlds__stm_expand__InputVars_20, transform_hlds__stm_expand__V_41_41);
    }
    {
      transform_hlds__stm_expand__V_47_47 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_49_49 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_48_48, 0) = ((MR_Box) (transform_hlds__stm_expand__V_49_49));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 0) = ((MR_Box) (transform_hlds__stm_expand__V_47_47));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 1) = ((MR_Box) (transform_hlds__stm_expand__V_48_48));
    }
    {
      transform_hlds__stm_expand__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_45_45, 0) = ((MR_Box) (transform_hlds__stm_expand__ResultType_11));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_45_45, 1) = ((MR_Box) (transform_hlds__stm_expand__V_46_46));
    }
    {
      transform_hlds__stm_expand__V_35_35 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__stm_expand__InputTypes_22, transform_hlds__stm_expand__V_45_45);
    }
    {
      transform_hlds__stm_expand__V_52_52 = parse_tree__prog_mode__out_mode_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_54_54 = parse_tree__prog_mode__di_mode_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_56_56 = parse_tree__prog_mode__uo_mode_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_55_55, 0) = ((MR_Box) (transform_hlds__stm_expand__V_56_56));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_53_53, 0) = ((MR_Box) (transform_hlds__stm_expand__V_54_54));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_53_53, 1) = ((MR_Box) (transform_hlds__stm_expand__V_55_55));
    }
    {
      transform_hlds__stm_expand__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_51_51, 0) = ((MR_Box) (transform_hlds__stm_expand__V_52_52));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_51_51, 1) = ((MR_Box) (transform_hlds__stm_expand__V_53_53));
    }
    {
      transform_hlds__stm_expand__V_36_36 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__stm_expand__InputModes_24, transform_hlds__stm_expand__V_51_51);
    }
    {
      transform_hlds__stm_expand__create_cloned_pred_10_p_0(transform_hlds__stm_expand__V_34_34, transform_hlds__stm_expand__V_35_35, transform_hlds__stm_expand__V_36_36, (MR_String) "simple_wrapper", transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_0_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_39_39, transform_hlds__stm_expand__CallGoal_16, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_32, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_40_40);
    }
    {
      transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_p_0((MR_String) "stm_ResultVar", transform_hlds__stm_expand__ResultVar0_12, transform_hlds__stm_expand__ResultType_11, &transform_hlds__stm_expand__ResultVar_26, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_39_39, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_59_59, transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_0_30, &transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_60_60);
    }
    {
      transform_hlds__stm_expand__move_variables_to_new_pred_9_p_0(transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_60_60, &transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_61_61, transform_hlds__stm_expand__AtomicGoalVars_10, transform_hlds__stm_expand__InnerDI_18, transform_hlds__stm_expand__InnerUO0_19, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_59_59, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_62_62, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_40_40, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_63_63);
    }
    {
      transform_hlds__stm_expand__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[0], ((MR_Box) (transform_hlds__stm_expand__InnerUO0_19)), ((MR_Box) (transform_hlds__stm_expand__InnerDI_18)));
    }
    if (transform_hlds__stm_expand__succeeded)
      {
        MR_Word transform_hlds__stm_expand__V_64_64;

        transform_hlds__stm_expand__CopyStm_27 = (MR_Integer) 1;
        {
          transform_hlds__stm_expand__V_64_64 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
        }
        {
          transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_64_64, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[11]), &transform_hlds__stm_expand__InnerUO_28, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_62_62, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_66_66);
        }
      }
    else
      {
        transform_hlds__stm_expand__CopyStm_27 = (MR_Integer) 0;
        transform_hlds__stm_expand__InnerUO_28 = transform_hlds__stm_expand__InnerUO0_19;
        transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_66_66 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_62_62;
      }
    {
      transform_hlds__stm_expand__create_simple_post_wrapper_goal_11_p_0(transform_hlds__stm_expand__AtomicGoalVars_10, transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_61_61, transform_hlds__stm_expand__ResultType_11, transform_hlds__stm_expand__ResultVar_26, transform_hlds__stm_expand__InnerDI_18, transform_hlds__stm_expand__InnerUO_28, transform_hlds__stm_expand__CopyStm_27, &transform_hlds__stm_expand__WrapperGoal_29, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_63_63, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_66_66, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_68_68);
    }
    {
      transform_hlds__stm_expand__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_73_73, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerUO_28));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_72_72, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerDI_18));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_72_72, 1) = ((MR_Box) (transform_hlds__stm_expand__V_73_73));
    }
    {
      transform_hlds__stm_expand__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_71_71, 0) = ((MR_Box) (transform_hlds__stm_expand__ResultVar_26));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_71_71, 1) = ((MR_Box) (transform_hlds__stm_expand__V_72_72));
    }
    {
      transform_hlds__stm_expand__V_69_69 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeInfo_86_86, transform_hlds__stm_expand__InputVars_20, transform_hlds__stm_expand__V_71_71);
    }
    {
      transform_hlds__stm_expand__set_head_vars_3_p_0(transform_hlds__stm_expand__V_69_69, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_68_68, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_70_70);
    }
    {
      transform_hlds__stm_expand__new_pred_set_goal_3_p_0(transform_hlds__stm_expand__WrapperGoal_29, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_70_70, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_75_75);
    }
    {
      transform_hlds__stm_expand__run_quantification_over_pred_2_p_0(transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_75_75, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31);
    }
    {
      transform_hlds__stm_expand__get_pred_proc_id_2_p_0(*transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31, transform_hlds__stm_expand__PredProcId_14);
    }
    {
      transform_hlds__stm_expand__commit_new_pred_3_p_0(*transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_63_63, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_33);
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_simple_wrapper_pred_8_p_0(
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_9,
  MR_Word transform_hlds__stm_expand__ResultType_10,
  MR_Word transform_hlds__stm_expand__ResultVar0_11,
  MR_Word transform_hlds__stm_expand__AtomicGoal_12,
  MR_Word * transform_hlds__stm_expand__PredProcId_13,
  MR_Word * transform_hlds__stm_expand__CallGoal_14,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_17,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_18)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__V_16_16;

    {
      transform_hlds__stm_expand__create_simple_wrapper_pred_2_9_p_0(transform_hlds__stm_expand__AtomicGoalVars_9, transform_hlds__stm_expand__ResultType_10, transform_hlds__stm_expand__ResultVar0_11, transform_hlds__stm_expand__AtomicGoal_12, transform_hlds__stm_expand__PredProcId_13, &transform_hlds__stm_expand__V_16_16, transform_hlds__stm_expand__CallGoal_14, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_17, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_18);
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_post_wrapper_goal_11_p_0(
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_12,
  MR_Word transform_hlds__stm_expand__AtomicGoal_13,
  MR_Word transform_hlds__stm_expand__ResultType_14,
  MR_Word transform_hlds__stm_expand__ResultVar_15,
  MR_Word transform_hlds__stm_expand__StmDI_16,
  MR_Word transform_hlds__stm_expand__StmUO_17,
  MR_Word transform_hlds__stm_expand__CopySTM_18,
  MR_Word * transform_hlds__stm_expand__Goal_19,
  MR_Word transform_hlds__stm_expand__StmInfo_20,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_47,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_48)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_169_169;
    MR_Word transform_hlds__stm_expand__StmModuleName_22;
    MR_Word transform_hlds__stm_expand__ExceptionModuleName_23;
    MR_Word transform_hlds__stm_expand__AssignResult_24;
    MR_Word transform_hlds__stm_expand__IsValidVar_25;
    MR_Word transform_hlds__stm_expand__ValidTrueFunctor_26;
    MR_Word transform_hlds__stm_expand__ValidFalseFunctor_27;
    MR_Word transform_hlds__stm_expand__RollbackCons_28;
    MR_Word transform_hlds__stm_expand__ConstRollbackGoal_29;
    MR_Word transform_hlds__stm_expand__RollbackVar_30;
    MR_Word transform_hlds__stm_expand__Goal_StmLock_Call_31;
    MR_Word transform_hlds__stm_expand__Goal_StmUnLock_Call_32;
    MR_Word transform_hlds__stm_expand__Goal_StmValidate_Call_33;
    MR_Word transform_hlds__stm_expand__Goal_StmCommit_Call_34;
    MR_Word transform_hlds__stm_expand__TypeInfoVar_35;
    MR_Word transform_hlds__stm_expand__CreateTypeInfoGoals_36;
    MR_Word transform_hlds__stm_expand__Goal_ExceptionThrow_Call_37;
    MR_Word transform_hlds__stm_expand__Goal_ValidBranch_38;
    MR_Word transform_hlds__stm_expand__Goal_InvalidBranch_39;
    MR_Word transform_hlds__stm_expand__DisjGoal_40;
    MR_Word transform_hlds__stm_expand__PostAtomicTopLevelList_41;
    MR_Word transform_hlds__stm_expand__PostAtomicGoal0_42;
    MR_Word transform_hlds__stm_expand__PostAtomicGoal_43;
    MR_Word transform_hlds__stm_expand__TopLevelGoalList0_45;
    MR_Word transform_hlds__stm_expand__TopLevelGoalList_46;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_49_49;
    MR_Word transform_hlds__stm_expand__V_50_50;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_52_52;
    MR_Word transform_hlds__stm_expand__V_54_54;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_56_56;
    MR_Word transform_hlds__stm_expand__V_65_65;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_66_66;
    MR_Word transform_hlds__stm_expand__V_74_74;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_75_75;
    MR_Word transform_hlds__stm_expand__V_81_81;
    MR_Word transform_hlds__stm_expand__V_83_83;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_84_84;
    MR_Word transform_hlds__stm_expand__V_85_85;
    MR_Word transform_hlds__stm_expand__V_87_87;
    MR_Word transform_hlds__stm_expand__V_88_88;
    MR_Word transform_hlds__stm_expand__V_92_92;
    MR_Word transform_hlds__stm_expand__V_93_93;
    MR_Word transform_hlds__stm_expand__V_103_103;
    MR_Word transform_hlds__stm_expand__V_105_105;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_106_106;
    MR_Word transform_hlds__stm_expand__V_108_108;
    MR_Word transform_hlds__stm_expand__V_114_114;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_115_115;
    MR_Word transform_hlds__stm_expand__V_121_121;
    MR_Word transform_hlds__stm_expand__V_123_123;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_124_124;
    MR_Word transform_hlds__stm_expand__V_125_125;
    MR_Word transform_hlds__stm_expand__V_130_130;
    MR_Word transform_hlds__stm_expand__V_131_131;
    MR_Word transform_hlds__stm_expand__V_133_133;
    MR_Word transform_hlds__stm_expand__V_134_134;
    MR_Word transform_hlds__stm_expand__V_135_135;
    MR_Word transform_hlds__stm_expand__V_137_137;
    MR_Word transform_hlds__stm_expand__V_138_138;
    MR_Word transform_hlds__stm_expand__V_140_140;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_143_143;
    MR_Word transform_hlds__stm_expand__V_144_144;
    MR_Word transform_hlds__stm_expand__V_146_146;
    MR_Word transform_hlds__stm_expand__V_147_147;
    MR_Word transform_hlds__stm_expand__V_150_150;
    MR_Word transform_hlds__stm_expand__V_151_151;

    {
      transform_hlds__stm_expand__StmModuleName_22 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
    {
      transform_hlds__stm_expand__ExceptionModuleName_23 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
    {
      transform_hlds__stm_expand__construct_output_7_p_0(transform_hlds__stm_expand__AtomicGoalVars_12, transform_hlds__stm_expand__ResultType_14, transform_hlds__stm_expand__ResultVar_15, transform_hlds__stm_expand__StmInfo_20, &transform_hlds__stm_expand__AssignResult_24, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_47, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_49_49);
    }
    {
      transform_hlds__stm_expand__V_50_50 = parse_tree__builtin_lib_types__stm_valid_result_type_0_f_0();
    }
    {
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_50_50, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[12]), &transform_hlds__stm_expand__IsValidVar_25, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_49_49, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_52_52);
    }
    {
      transform_hlds__stm_expand__ValidTrueFunctor_26 = parse_tree__builtin_lib_types__stm_validres_valid_functor_0_f_0();
    }
    {
      transform_hlds__stm_expand__ValidFalseFunctor_27 = parse_tree__builtin_lib_types__stm_validres_invalid_functor_0_f_0();
    }
    {
      transform_hlds__stm_expand__RollbackCons_28 = parse_tree__builtin_lib_types__stm_rollback_exception_functor_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_54_54 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    }
    {
      transform_hlds__stm_expand__create_aux_variable_assignment_7_p_0(transform_hlds__stm_expand__RollbackCons_28, transform_hlds__stm_expand__V_54_54, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[13]), &transform_hlds__stm_expand__ConstRollbackGoal_29, &transform_hlds__stm_expand__RollbackVar_30, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_52_52, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_56_56);
    }
    {
      transform_hlds__stm_expand__V_65_65 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
    {
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__StmModuleName_22, (MR_String) "stm_lock", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_65_65, &transform_hlds__stm_expand__Goal_StmLock_Call_31, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_56_56, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_66_66);
    }
    {
      transform_hlds__stm_expand__V_74_74 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
    {
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__StmModuleName_22, (MR_String) "stm_unlock", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_74_74, &transform_hlds__stm_expand__Goal_StmUnLock_Call_32, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_66_66, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_75_75);
    }
    {
      transform_hlds__stm_expand__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_85_85, 0) = ((MR_Box) (transform_hlds__stm_expand__IsValidVar_25));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_81_81, 0) = ((MR_Box) (transform_hlds__stm_expand__StmUO_17));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_81_81, 1) = ((MR_Box) (transform_hlds__stm_expand__V_85_85));
    }
    {
      transform_hlds__stm_expand__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_88_88, 0) = ((MR_Box) (transform_hlds__stm_expand__StmUO_17));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[6])));
    }
    {
      transform_hlds__stm_expand__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_93_93, 0) = ((MR_Box) (transform_hlds__stm_expand__IsValidVar_25));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[5])));
    }
    {
      transform_hlds__stm_expand__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_92_92, 0) = ((MR_Box) (transform_hlds__stm_expand__V_93_93));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_87_87, 0) = ((MR_Box) (transform_hlds__stm_expand__V_88_88));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_87_87, 1) = ((MR_Box) (transform_hlds__stm_expand__V_92_92));
    }
    {
      transform_hlds__stm_expand__V_83_83 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_87_87);
    }
    {
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__StmModuleName_22, (MR_String) "stm_validate", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__V_81_81, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_83_83, &transform_hlds__stm_expand__Goal_StmValidate_Call_33, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_75_75, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_84_84);
    }
    {
      transform_hlds__stm_expand__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_103_103, 0) = ((MR_Box) (transform_hlds__stm_expand__StmUO_17));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_108_108, 0) = ((MR_Box) (transform_hlds__stm_expand__V_88_88));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_105_105 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_108_108);
    }
    {
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__StmModuleName_22, (MR_String) "stm_commit", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__V_103_103, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_105_105, &transform_hlds__stm_expand__Goal_StmCommit_Call_34, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_84_84, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_106_106);
    }
    {
      transform_hlds__stm_expand__V_114_114 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    }
    {
      transform_hlds__stm_expand__make_type_info_5_p_0(transform_hlds__stm_expand__V_114_114, &transform_hlds__stm_expand__TypeInfoVar_35, &transform_hlds__stm_expand__CreateTypeInfoGoals_36, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_106_106, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_115_115);
    }
    {
      transform_hlds__stm_expand__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_125_125, 0) = ((MR_Box) (transform_hlds__stm_expand__RollbackVar_30));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_125_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_121_121, 0) = ((MR_Box) (transform_hlds__stm_expand__TypeInfoVar_35));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_121_121, 1) = ((MR_Box) (transform_hlds__stm_expand__V_125_125));
    }
    {
      transform_hlds__stm_expand__V_123_123 = hlds__instmap__instmap_delta_bind_vars_1_f_0(transform_hlds__stm_expand__V_121_121);
    }
    {
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__ExceptionModuleName_23, (MR_String) "throw", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 6, (MR_Integer) 0, transform_hlds__stm_expand__V_121_121, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_123_123, &transform_hlds__stm_expand__Goal_ExceptionThrow_Call_37, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_115_115, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_124_124);
    }
    {
      transform_hlds__stm_expand__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_131_131, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_StmUnLock_Call_32));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_131_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_130_130, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_StmCommit_Call_34));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_130_130, 1) = ((MR_Box) (transform_hlds__stm_expand__V_131_131));
    }
    {
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_130_130, &transform_hlds__stm_expand__Goal_ValidBranch_38);
    }
    transform_hlds__stm_expand__TypeCtorInfo_169_169 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    {
      transform_hlds__stm_expand__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_135_135, 0) = ((MR_Box) (transform_hlds__stm_expand__ConstRollbackGoal_29));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_134_134, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_StmUnLock_Call_32));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_134_134, 1) = ((MR_Box) (transform_hlds__stm_expand__V_135_135));
    }
    {
      transform_hlds__stm_expand__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_138_138, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_ExceptionThrow_Call_37));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_138_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_137_137 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_169_169, transform_hlds__stm_expand__CreateTypeInfoGoals_36, transform_hlds__stm_expand__V_138_138);
    }
    {
      transform_hlds__stm_expand__V_133_133 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_169_169, transform_hlds__stm_expand__V_134_134, transform_hlds__stm_expand__V_137_137);
    }
    {
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_133_133, &transform_hlds__stm_expand__Goal_InvalidBranch_39);
    }
    {
      transform_hlds__stm_expand__V_144_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_144_144, 0) = ((MR_Box) (transform_hlds__stm_expand__ValidTrueFunctor_26));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_144_144, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_144_144, 2) = ((MR_Box) (transform_hlds__stm_expand__Goal_ValidBranch_38));
    }
    {
      transform_hlds__stm_expand__V_147_147 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_147_147, 0) = ((MR_Box) (transform_hlds__stm_expand__ValidFalseFunctor_27));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_147_147, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_147_147, 2) = ((MR_Box) (transform_hlds__stm_expand__Goal_InvalidBranch_39));
    }
    {
      transform_hlds__stm_expand__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_146_146, 0) = ((MR_Box) (transform_hlds__stm_expand__V_147_147));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_146_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_140_140, 0) = ((MR_Box) (transform_hlds__stm_expand__V_144_144));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_140_140, 1) = ((MR_Box) (transform_hlds__stm_expand__V_146_146));
    }
    {
      transform_hlds__stm_expand__create_switch_disjunction_7_p_0(transform_hlds__stm_expand__IsValidVar_25, transform_hlds__stm_expand__V_140_140, (MR_Integer) 0, (MR_Integer) 2, &transform_hlds__stm_expand__DisjGoal_40, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_124_124, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_143_143);
    }
    {
      transform_hlds__stm_expand__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_151_151, 0) = ((MR_Box) (transform_hlds__stm_expand__DisjGoal_40));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_151_151, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_150_150, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_StmValidate_Call_33));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_150_150, 1) = ((MR_Box) (transform_hlds__stm_expand__V_151_151));
    }
    {
      transform_hlds__stm_expand__PostAtomicTopLevelList_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__PostAtomicTopLevelList_41, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_StmLock_Call_31));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__PostAtomicTopLevelList_41, 1) = ((MR_Box) (transform_hlds__stm_expand__V_150_150));
    }
    {
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__PostAtomicTopLevelList_41, &transform_hlds__stm_expand__PostAtomicGoal0_42);
    }
    {
      transform_hlds__stm_expand__create_promise_purity_scope_3_p_0(transform_hlds__stm_expand__PostAtomicGoal0_42, (MR_Integer) 0, &transform_hlds__stm_expand__PostAtomicGoal_43);
    }
    switch (transform_hlds__stm_expand__CopySTM_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__stm_expand__V_154_154;
          MR_Word transform_hlds__stm_expand__V_156_156;
          MR_Word transform_hlds__stm_expand__V_157_157;

          {
            transform_hlds__stm_expand__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_154_154, 0) = ((MR_Box) (transform_hlds__stm_expand__AtomicGoal_13));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_154_154, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            transform_hlds__stm_expand__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_157_157, 0) = ((MR_Box) (transform_hlds__stm_expand__PostAtomicGoal_43));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_157_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            transform_hlds__stm_expand__V_156_156 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_169_169, transform_hlds__stm_expand__AssignResult_24, transform_hlds__stm_expand__V_157_157);
          }
          {
            transform_hlds__stm_expand__TopLevelGoalList0_45 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_169_169, transform_hlds__stm_expand__V_154_154, transform_hlds__stm_expand__V_156_156);
          }
          *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_48 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_143_143;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__stm_expand__CopySTMAssign_44;
          MR_Word transform_hlds__stm_expand__V_159_159;
          MR_Word transform_hlds__stm_expand__V_161_161;
          MR_Word transform_hlds__stm_expand__V_162_162;
          MR_Word transform_hlds__stm_expand__V_163_163;
          MR_Word transform_hlds__stm_expand__V_165_165;
          MR_Word transform_hlds__stm_expand__V_166_166;
          MR_Word transform_hlds__stm_expand__V_167_167;

          {
            transform_hlds__stm_expand__V_161_161 = parse_tree__prog_mode__uo_mode_0_f_0();
          }
          {
            transform_hlds__stm_expand__V_162_162 = parse_tree__prog_mode__di_mode_0_f_0();
          }
          {
            transform_hlds__stm_expand__V_159_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_159_159, 0) = ((MR_Box) (transform_hlds__stm_expand__V_161_161));
            MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_159_159, 1) = ((MR_Box) (transform_hlds__stm_expand__V_162_162));
          }
          {
            transform_hlds__stm_expand__create_var_unify_6_p_0(transform_hlds__stm_expand__StmUO_17, transform_hlds__stm_expand__StmDI_16, transform_hlds__stm_expand__V_159_159, &transform_hlds__stm_expand__CopySTMAssign_44, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_143_143, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_48);
          }
          {
            transform_hlds__stm_expand__V_163_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_163_163, 0) = ((MR_Box) (transform_hlds__stm_expand__AtomicGoal_13));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_163_163, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            transform_hlds__stm_expand__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_167_167, 0) = ((MR_Box) (transform_hlds__stm_expand__PostAtomicGoal_43));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_167_167, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            transform_hlds__stm_expand__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_166_166, 0) = ((MR_Box) (transform_hlds__stm_expand__CopySTMAssign_44));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_166_166, 1) = ((MR_Box) (transform_hlds__stm_expand__V_167_167));
          }
          {
            transform_hlds__stm_expand__V_165_165 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_169_169, transform_hlds__stm_expand__AssignResult_24, transform_hlds__stm_expand__V_166_166);
          }
          {
            transform_hlds__stm_expand__TopLevelGoalList0_45 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_169_169, transform_hlds__stm_expand__V_163_163, transform_hlds__stm_expand__V_165_165);
          }
        }
        break;
    }
    {
      hlds__goal_util__flatten_conj_2_p_0(transform_hlds__stm_expand__TopLevelGoalList0_45, &transform_hlds__stm_expand__TopLevelGoalList_46);
    }
    {
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__TopLevelGoalList_46, transform_hlds__stm_expand__Goal_19);
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_wrapper_pred_2_9_p_0(
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_10,
  MR_Word transform_hlds__stm_expand__ResultType_11,
  MR_Word transform_hlds__stm_expand__ResultVar0_12,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_0_30,
  MR_Word * transform_hlds__stm_expand__PredProcId_14,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31,
  MR_Word * transform_hlds__stm_expand__CallGoal_16,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_32,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_33)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__TypeInfo_86_86;
    MR_Word transform_hlds__stm_expand__InnerDI_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_10, (MR_Integer) 3)));
    MR_Word transform_hlds__stm_expand__InnerUO0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_10, (MR_Integer) 4)));
    MR_Word transform_hlds__stm_expand__InputVars_20;
    MR_Word transform_hlds__stm_expand__InputTypes_22;
    MR_Word transform_hlds__stm_expand__InputModes_24;
    MR_Word transform_hlds__stm_expand__ResultVar_26;
    MR_Word transform_hlds__stm_expand__CopyStm_27;
    MR_Word transform_hlds__stm_expand__InnerUO_28;
    MR_Word transform_hlds__stm_expand__WrapperGoal_29;
    MR_Word transform_hlds__stm_expand__V_34_34;
    MR_Word transform_hlds__stm_expand__V_35_35;
    MR_Word transform_hlds__stm_expand__V_36_36;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_39_39;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_40_40;
    MR_Word transform_hlds__stm_expand__V_41_41;
    MR_Word transform_hlds__stm_expand__V_42_42;
    MR_Word transform_hlds__stm_expand__V_43_43;
    MR_Word transform_hlds__stm_expand__V_45_45;
    MR_Word transform_hlds__stm_expand__V_46_46;
    MR_Word transform_hlds__stm_expand__V_47_47;
    MR_Word transform_hlds__stm_expand__V_48_48;
    MR_Word transform_hlds__stm_expand__V_49_49;
    MR_Word transform_hlds__stm_expand__V_51_51;
    MR_Word transform_hlds__stm_expand__V_52_52;
    MR_Word transform_hlds__stm_expand__V_53_53;
    MR_Word transform_hlds__stm_expand__V_54_54;
    MR_Word transform_hlds__stm_expand__V_55_55;
    MR_Word transform_hlds__stm_expand__V_56_56;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_59_59;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_60_60;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_61_61;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_62_62;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_63_63;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_66_66;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_68_68;
    MR_Word transform_hlds__stm_expand__V_69_69;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_70_70;
    MR_Word transform_hlds__stm_expand__V_71_71;
    MR_Word transform_hlds__stm_expand__V_72_72;
    MR_Word transform_hlds__stm_expand__V_73_73;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_75_75;
    MR_Word transform_hlds__stm_expand__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_10, (MR_Integer) 0)));
    MR_Word transform_hlds__stm_expand__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_10, (MR_Integer) 1)));
    MR_Word transform_hlds__stm_expand__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_10, (MR_Integer) 2)));
    MR_Word transform_hlds__stm_expand__V_21_21;
    MR_Word transform_hlds__stm_expand__V_23_23;
    MR_Word transform_hlds__stm_expand__V_25_25;

    {
      transform_hlds__stm_expand__get_input_output_varlist_3_p_0(transform_hlds__stm_expand__AtomicGoalVars_10, &transform_hlds__stm_expand__InputVars_20, &transform_hlds__stm_expand__V_21_21);
    }
    {
      transform_hlds__stm_expand__get_input_output_types_4_p_0(transform_hlds__stm_expand__AtomicGoalVars_10, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_32, &transform_hlds__stm_expand__InputTypes_22, &transform_hlds__stm_expand__V_23_23);
    }
    {
      transform_hlds__stm_expand__get_input_output_modes_3_p_0(transform_hlds__stm_expand__AtomicGoalVars_10, &transform_hlds__stm_expand__InputModes_24, &transform_hlds__stm_expand__V_25_25);
    }
    transform_hlds__stm_expand__TypeInfo_86_86 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0];
    {
      transform_hlds__stm_expand__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_43_43, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerUO0_19));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_42_42, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerDI_18));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_42_42, 1) = ((MR_Box) (transform_hlds__stm_expand__V_43_43));
    }
    {
      transform_hlds__stm_expand__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 0) = ((MR_Box) (transform_hlds__stm_expand__ResultVar0_12));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 1) = ((MR_Box) (transform_hlds__stm_expand__V_42_42));
    }
    {
      transform_hlds__stm_expand__V_34_34 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeInfo_86_86, transform_hlds__stm_expand__InputVars_20, transform_hlds__stm_expand__V_41_41);
    }
    {
      transform_hlds__stm_expand__V_47_47 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_49_49 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_48_48, 0) = ((MR_Box) (transform_hlds__stm_expand__V_49_49));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 0) = ((MR_Box) (transform_hlds__stm_expand__V_47_47));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 1) = ((MR_Box) (transform_hlds__stm_expand__V_48_48));
    }
    {
      transform_hlds__stm_expand__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_45_45, 0) = ((MR_Box) (transform_hlds__stm_expand__ResultType_11));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_45_45, 1) = ((MR_Box) (transform_hlds__stm_expand__V_46_46));
    }
    {
      transform_hlds__stm_expand__V_35_35 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__stm_expand__InputTypes_22, transform_hlds__stm_expand__V_45_45);
    }
    {
      transform_hlds__stm_expand__V_52_52 = parse_tree__prog_mode__out_mode_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_54_54 = parse_tree__prog_mode__di_mode_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_56_56 = parse_tree__prog_mode__uo_mode_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_55_55, 0) = ((MR_Box) (transform_hlds__stm_expand__V_56_56));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_53_53, 0) = ((MR_Box) (transform_hlds__stm_expand__V_54_54));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_53_53, 1) = ((MR_Box) (transform_hlds__stm_expand__V_55_55));
    }
    {
      transform_hlds__stm_expand__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_51_51, 0) = ((MR_Box) (transform_hlds__stm_expand__V_52_52));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_51_51, 1) = ((MR_Box) (transform_hlds__stm_expand__V_53_53));
    }
    {
      transform_hlds__stm_expand__V_36_36 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__stm_expand__InputModes_24, transform_hlds__stm_expand__V_51_51);
    }
    {
      transform_hlds__stm_expand__create_cloned_pred_10_p_0(transform_hlds__stm_expand__V_34_34, transform_hlds__stm_expand__V_35_35, transform_hlds__stm_expand__V_36_36, (MR_String) "wrapper", transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_0_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_39_39, transform_hlds__stm_expand__CallGoal_16, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_32, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_40_40);
    }
    {
      transform_hlds__stm_expand__rename_var_in_wrapper_pred_8_p_0((MR_String) "stm_ResultVar", transform_hlds__stm_expand__ResultVar0_12, transform_hlds__stm_expand__ResultType_11, &transform_hlds__stm_expand__ResultVar_26, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_39_39, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_59_59, transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_0_30, &transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_60_60);
    }
    {
      transform_hlds__stm_expand__move_variables_to_new_pred_9_p_0(transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_60_60, &transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_61_61, transform_hlds__stm_expand__AtomicGoalVars_10, transform_hlds__stm_expand__InnerDI_18, transform_hlds__stm_expand__InnerUO0_19, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_59_59, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_62_62, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_40_40, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_63_63);
    }
    {
      transform_hlds__stm_expand__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[0], ((MR_Box) (transform_hlds__stm_expand__InnerUO0_19)), ((MR_Box) (transform_hlds__stm_expand__InnerDI_18)));
    }
    if (transform_hlds__stm_expand__succeeded)
      {
        MR_Word transform_hlds__stm_expand__V_64_64;

        transform_hlds__stm_expand__CopyStm_27 = (MR_Integer) 1;
        {
          transform_hlds__stm_expand__V_64_64 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
        }
        {
          transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_64_64, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[11]), &transform_hlds__stm_expand__InnerUO_28, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_62_62, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_66_66);
        }
      }
    else
      {
        transform_hlds__stm_expand__CopyStm_27 = (MR_Integer) 0;
        transform_hlds__stm_expand__InnerUO_28 = transform_hlds__stm_expand__InnerUO0_19;
        transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_66_66 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_62_62;
      }
    {
      transform_hlds__stm_expand__create_post_wrapper_goal_11_p_0(transform_hlds__stm_expand__AtomicGoalVars_10, transform_hlds__stm_expand__STATE_VARIABLE_AtomicGoal_61_61, transform_hlds__stm_expand__ResultType_11, transform_hlds__stm_expand__ResultVar_26, transform_hlds__stm_expand__InnerDI_18, transform_hlds__stm_expand__InnerUO_28, transform_hlds__stm_expand__CopyStm_27, &transform_hlds__stm_expand__WrapperGoal_29, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_63_63, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_66_66, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_68_68);
    }
    {
      transform_hlds__stm_expand__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_73_73, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerUO_28));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_72_72, 0) = ((MR_Box) (transform_hlds__stm_expand__InnerDI_18));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_72_72, 1) = ((MR_Box) (transform_hlds__stm_expand__V_73_73));
    }
    {
      transform_hlds__stm_expand__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_71_71, 0) = ((MR_Box) (transform_hlds__stm_expand__ResultVar0_12));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_71_71, 1) = ((MR_Box) (transform_hlds__stm_expand__V_72_72));
    }
    {
      transform_hlds__stm_expand__V_69_69 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeInfo_86_86, transform_hlds__stm_expand__InputVars_20, transform_hlds__stm_expand__V_71_71);
    }
    {
      transform_hlds__stm_expand__set_head_vars_3_p_0(transform_hlds__stm_expand__V_69_69, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_68_68, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_70_70);
    }
    {
      transform_hlds__stm_expand__new_pred_set_goal_3_p_0(transform_hlds__stm_expand__WrapperGoal_29, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_70_70, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_75_75);
    }
    {
      transform_hlds__stm_expand__run_quantification_over_pred_2_p_0(transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_75_75, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31);
    }
    {
      transform_hlds__stm_expand__get_pred_proc_id_2_p_0(*transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31, transform_hlds__stm_expand__PredProcId_14);
    }
    {
      transform_hlds__stm_expand__commit_new_pred_3_p_0(*transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_63_63, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_33);
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_wrapper_for_goal_list_8_p_0(
  MR_Word transform_hlds__stm_expand__AtomicGoalVarList_9,
  MR_Word transform_hlds__stm_expand__ResultType_10,
  MR_Word transform_hlds__stm_expand__ResultVar_11,
  MR_Word transform_hlds__stm_expand__GoalList_12,
  MR_Word * transform_hlds__stm_expand__PredProcId_13,
  MR_Word * transform_hlds__stm_expand__CallGoal_14,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_33,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;

    if ((transform_hlds__stm_expand__GoalList_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.create_wrapper_for_goal_list\'/8", (MR_String) "empty list");
          return;
        }
      }
    else
      {
        MR_Word transform_hlds__stm_expand__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalList_12, (MR_Integer) 1)));
        MR_Word transform_hlds__stm_expand__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalList_12, (MR_Integer) 0)));

        if ((transform_hlds__stm_expand__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word transform_hlds__stm_expand__AtomicGoalVars_17;
            MR_Box transform_hlds__stm_expand__conv0_AtomicGoalVars_17;
            MR_Word transform_hlds__stm_expand__V_79_79;

            {
              transform_hlds__stm_expand__conv0_AtomicGoalVars_17 = mercury__list__det_head_1_f_0((MR_Word) &transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0, transform_hlds__stm_expand__AtomicGoalVarList_9);
            }
            transform_hlds__stm_expand__AtomicGoalVars_17 = ((MR_Word) transform_hlds__stm_expand__conv0_AtomicGoalVars_17);
            {
              transform_hlds__stm_expand__create_wrapper_pred_2_9_p_0(transform_hlds__stm_expand__AtomicGoalVars_17, transform_hlds__stm_expand__ResultType_10, transform_hlds__stm_expand__ResultVar_11, transform_hlds__stm_expand__V_69_69, transform_hlds__stm_expand__PredProcId_13, &transform_hlds__stm_expand__V_79_79, transform_hlds__stm_expand__CallGoal_14, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_33, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34);
            }
          }
        else
          {
            MR_Word transform_hlds__stm_expand__PPIDList_28;
            MR_Word transform_hlds__stm_expand__StmDI_30;
            MR_Word transform_hlds__stm_expand__StmUO_31;
            MR_Word transform_hlds__stm_expand__NewAtomicGoal_32;
            MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_41_41;
            MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_42_42;
            MR_Word transform_hlds__stm_expand__AtomicGoalVars_54;
            MR_Word transform_hlds__stm_expand__V_55_55;
            MR_Word transform_hlds__stm_expand__V_56_56;
            MR_Word transform_hlds__stm_expand__V_57_57;
            MR_Word transform_hlds__stm_expand__V_90_90;

            {
              transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_50_95_105_110_95_102_111_108_100_108_95_95_104_111_50_95_95_91_51_93_95_48_6_p_0(transform_hlds__stm_expand__ResultType_10, transform_hlds__stm_expand__ResultVar_11, transform_hlds__stm_expand__GoalList_12, transform_hlds__stm_expand__AtomicGoalVarList_9, &transform_hlds__stm_expand__PPIDList_28, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_33, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_41_41);
            }
            {
              transform_hlds__stm_expand__common_goal_vars_from_list_2_p_0(transform_hlds__stm_expand__AtomicGoalVarList_9, &transform_hlds__stm_expand__AtomicGoalVars_54);
            }
            transform_hlds__stm_expand__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_54, (MR_Integer) 0)));
            transform_hlds__stm_expand__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_54, (MR_Integer) 1)));
            transform_hlds__stm_expand__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_54, (MR_Integer) 2)));
            transform_hlds__stm_expand__StmDI_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_54, (MR_Integer) 3)));
            transform_hlds__stm_expand__StmUO_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_54, (MR_Integer) 4)));
            {
              transform_hlds__stm_expand__create_or_else_pred_8_p_0(transform_hlds__stm_expand__AtomicGoalVars_54, transform_hlds__stm_expand__AtomicGoalVarList_9, transform_hlds__stm_expand__PPIDList_28, transform_hlds__stm_expand__StmDI_30, transform_hlds__stm_expand__StmUO_31, &transform_hlds__stm_expand__NewAtomicGoal_32, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_41_41, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_42_42);
            }
            {
              transform_hlds__stm_expand__create_wrapper_pred_2_9_p_0(transform_hlds__stm_expand__AtomicGoalVars_54, transform_hlds__stm_expand__ResultType_10, transform_hlds__stm_expand__ResultVar_11, transform_hlds__stm_expand__NewAtomicGoal_32, transform_hlds__stm_expand__PredProcId_13, &transform_hlds__stm_expand__V_90_90, transform_hlds__stm_expand__CallGoal_14, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_42_42, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_34);
            }
          }
      }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__move_variables_to_new_pred_9_p_0_1(
  MR_Box transform_hlds__stm_expand__closure_arg,
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box transform_hlds__stm_expand__wrapper_arg_2,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_3,
  MR_Box transform_hlds__stm_expand__wrapper_arg_4,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_5,
  MR_Box transform_hlds__stm_expand__wrapper_arg_6,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_7,
  MR_Box transform_hlds__stm_expand__wrapper_arg_8,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_9,
  MR_Box transform_hlds__stm_expand__wrapper_arg_10,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_11)
{
  {
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
    MR_Word transform_hlds__stm_expand__conv4_STATE_VARIABLE_NewPredVarSet_21;
    MR_Word transform_hlds__stm_expand__conv3_STATE_VARIABLE_NewPredVarTypes_23;
    MR_Word transform_hlds__stm_expand__conv2_STATE_VARIABLE_OldPredVarSet_25;
    MR_Word transform_hlds__stm_expand__conv1_STATE_VARIABLE_OldPredVarTypes_27;
    MR_Word transform_hlds__stm_expand__conv0_STATE_VARIABLE_VarMapping_29;

    {
      transform_hlds__stm_expand__apply_varset_to_preds_11_p_0(((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), ((MR_Word) transform_hlds__stm_expand__wrapper_arg_2), &transform_hlds__stm_expand__conv4_STATE_VARIABLE_NewPredVarSet_21, ((MR_Word) transform_hlds__stm_expand__wrapper_arg_4), &transform_hlds__stm_expand__conv3_STATE_VARIABLE_NewPredVarTypes_23, ((MR_Word) transform_hlds__stm_expand__wrapper_arg_6), &transform_hlds__stm_expand__conv2_STATE_VARIABLE_OldPredVarSet_25, ((MR_Word) transform_hlds__stm_expand__wrapper_arg_8), &transform_hlds__stm_expand__conv1_STATE_VARIABLE_OldPredVarTypes_27, ((MR_Word) transform_hlds__stm_expand__wrapper_arg_10), &transform_hlds__stm_expand__conv0_STATE_VARIABLE_VarMapping_29);
    }
    *transform_hlds__stm_expand__wrapper_arg_3 = ((MR_Box) (transform_hlds__stm_expand__conv4_STATE_VARIABLE_NewPredVarSet_21));
    *transform_hlds__stm_expand__wrapper_arg_5 = ((MR_Box) (transform_hlds__stm_expand__conv3_STATE_VARIABLE_NewPredVarTypes_23));
    *transform_hlds__stm_expand__wrapper_arg_7 = ((MR_Box) (transform_hlds__stm_expand__conv2_STATE_VARIABLE_OldPredVarSet_25));
    *transform_hlds__stm_expand__wrapper_arg_9 = ((MR_Box) (transform_hlds__stm_expand__conv1_STATE_VARIABLE_OldPredVarTypes_27));
    *transform_hlds__stm_expand__wrapper_arg_11 = ((MR_Box) (transform_hlds__stm_expand__conv0_STATE_VARIABLE_VarMapping_29));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__move_variables_to_new_pred_9_p_0(
  MR_Word transform_hlds__stm_expand__AtomicGoal0_10,
  MR_Word * transform_hlds__stm_expand__AtomicGoal_11,
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_12,
  MR_Word transform_hlds__stm_expand__InnerDI_13,
  MR_Word transform_hlds__stm_expand__InnerUO_14,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_42,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_44)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__TypeInfo_75_75;
    MR_Word transform_hlds__stm_expand__TypeInfo_87_87;
    MR_Word transform_hlds__stm_expand__TypeInfo_88_88;
    MR_Word transform_hlds__stm_expand__NewProcInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 4)));
    MR_Word transform_hlds__stm_expand__OldProcInfo0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 3)));
    MR_Word transform_hlds__stm_expand__NewPredVarSet0_19;
    MR_Word transform_hlds__stm_expand__NewPredVarTypes0_20;
    MR_Word transform_hlds__stm_expand__OldPredVarSet0_21;
    MR_Word transform_hlds__stm_expand__OldPredVarTypes0_22;
    MR_Word transform_hlds__stm_expand__LocalVars_24;
    MR_Word transform_hlds__stm_expand__OrigInnerDI_26;
    MR_Word transform_hlds__stm_expand__OrigInnerUO_27;
    MR_Word transform_hlds__stm_expand__LocalVarList_28;
    MR_Word transform_hlds__stm_expand__VarMapping0_29;
    MR_Word transform_hlds__stm_expand__NewPredVarSet_30;
    MR_Word transform_hlds__stm_expand__NewPredVarTypes_31;
    MR_Word transform_hlds__stm_expand__OldPredVarSet_32;
    MR_Word transform_hlds__stm_expand__OldPredVarTypes_33;
    MR_Word transform_hlds__stm_expand__VarMapping1_34;
    MR_Word transform_hlds__stm_expand__VarMapping_35;
    MR_Word transform_hlds__stm_expand__NewProcInfo1_37;
    MR_Word transform_hlds__stm_expand__NewProcInfo_38;
    MR_Word transform_hlds__stm_expand__OldProcInfo1_39;
    MR_Word transform_hlds__stm_expand__OldProcInfo_40;
    MR_Word transform_hlds__stm_expand__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 0)));
    MR_Word transform_hlds__stm_expand__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 1)));
    MR_Integer transform_hlds__stm_expand__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 2)));
    MR_Word transform_hlds__stm_expand__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 3)));
    MR_Word transform_hlds__stm_expand__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 5)));
    MR_Integer transform_hlds__stm_expand__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 6)));
    MR_Word transform_hlds__stm_expand__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 0)));
    MR_Word transform_hlds__stm_expand__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 1)));
    MR_Integer transform_hlds__stm_expand__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 2)));
    MR_Word transform_hlds__stm_expand__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 4)));
    MR_Word transform_hlds__stm_expand__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 5)));
    MR_Integer transform_hlds__stm_expand__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 6)));
    MR_Word transform_hlds__stm_expand__V_23_23;
    MR_Word transform_hlds__stm_expand__V_25_25;
    MR_Box transform_hlds__stm_expand__conv9_NewPredVarSet_30;
    MR_Box transform_hlds__stm_expand__conv8_NewPredVarTypes_31;
    MR_Box transform_hlds__stm_expand__conv7_OldPredVarSet_32;
    MR_Box transform_hlds__stm_expand__conv6_OldPredVarTypes_33;
    MR_Box transform_hlds__stm_expand__conv5_VarMapping1_34;
    MR_Word transform_hlds__stm_expand__V_60_60;
    MR_Word transform_hlds__stm_expand__V_61_61;
    MR_Integer transform_hlds__stm_expand__V_62_62;
    MR_Word transform_hlds__stm_expand__V_63_63;
    MR_Word transform_hlds__stm_expand__V_65_65;
    MR_Integer transform_hlds__stm_expand__V_66_66;
    MR_Word transform_hlds__stm_expand__V_64_64;
    MR_Word transform_hlds__stm_expand__V_67_67;
    MR_Word transform_hlds__stm_expand__V_68_68;
    MR_Integer transform_hlds__stm_expand__V_69_69;
    MR_Word transform_hlds__stm_expand__V_71_71;
    MR_Word transform_hlds__stm_expand__V_72_72;
    MR_Integer transform_hlds__stm_expand__V_73_73;
    MR_Word transform_hlds__stm_expand__V_70_70;

    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__stm_expand__NewProcInfo0_17, &transform_hlds__stm_expand__NewPredVarSet0_19);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__stm_expand__NewProcInfo0_17, &transform_hlds__stm_expand__NewPredVarTypes0_20);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__stm_expand__OldProcInfo0_18, &transform_hlds__stm_expand__OldPredVarSet0_21);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__stm_expand__OldProcInfo0_18, &transform_hlds__stm_expand__OldPredVarTypes0_22);
    }
    transform_hlds__stm_expand__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_12, (MR_Integer) 0)));
    transform_hlds__stm_expand__LocalVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_12, (MR_Integer) 1)));
    transform_hlds__stm_expand__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_12, (MR_Integer) 2)));
    transform_hlds__stm_expand__OrigInnerDI_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_12, (MR_Integer) 3)));
    transform_hlds__stm_expand__OrigInnerUO_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_12, (MR_Integer) 4)));
    {
      transform_hlds__stm_expand__LocalVarList_28 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__stm_expand__LocalVars_24);
    }
    transform_hlds__stm_expand__TypeInfo_75_75 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0];
    {
      transform_hlds__stm_expand__VarMapping0_29 = mercury__map__init_0_f_0(transform_hlds__stm_expand__TypeInfo_75_75, transform_hlds__stm_expand__TypeInfo_75_75);
    }
    transform_hlds__stm_expand__TypeInfo_87_87 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[3];
    transform_hlds__stm_expand__TypeInfo_88_88 = (MR_Word) &transform_hlds__stm_expand_scalar_common_2[0];
    {
      mercury__list__foldl5_12_p_0(transform_hlds__stm_expand__TypeInfo_75_75, transform_hlds__stm_expand__TypeInfo_87_87, transform_hlds__stm_expand__TypeInfo_88_88, transform_hlds__stm_expand__TypeInfo_87_87, transform_hlds__stm_expand__TypeInfo_88_88, (MR_Word) &transform_hlds__stm_expand_scalar_common_2[1], (MR_Word) &transform_hlds__stm_expand_scalar_common_2[11], transform_hlds__stm_expand__LocalVarList_28, ((MR_Box) (transform_hlds__stm_expand__NewPredVarSet0_19)), &transform_hlds__stm_expand__conv9_NewPredVarSet_30, ((MR_Box) (transform_hlds__stm_expand__NewPredVarTypes0_20)), &transform_hlds__stm_expand__conv8_NewPredVarTypes_31, ((MR_Box) (transform_hlds__stm_expand__OldPredVarSet0_21)), &transform_hlds__stm_expand__conv7_OldPredVarSet_32, ((MR_Box) (transform_hlds__stm_expand__OldPredVarTypes0_22)), &transform_hlds__stm_expand__conv6_OldPredVarTypes_33, ((MR_Box) (transform_hlds__stm_expand__VarMapping0_29)), &transform_hlds__stm_expand__conv5_VarMapping1_34);
    }
    transform_hlds__stm_expand__NewPredVarSet_30 = ((MR_Word) transform_hlds__stm_expand__conv9_NewPredVarSet_30);
    transform_hlds__stm_expand__NewPredVarTypes_31 = ((MR_Word) transform_hlds__stm_expand__conv8_NewPredVarTypes_31);
    transform_hlds__stm_expand__OldPredVarSet_32 = ((MR_Word) transform_hlds__stm_expand__conv7_OldPredVarSet_32);
    transform_hlds__stm_expand__OldPredVarTypes_33 = ((MR_Word) transform_hlds__stm_expand__conv6_OldPredVarTypes_33);
    transform_hlds__stm_expand__VarMapping1_34 = ((MR_Word) transform_hlds__stm_expand__conv5_VarMapping1_34);
    {
      transform_hlds__stm_expand__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[0], ((MR_Box) (transform_hlds__stm_expand__OrigInnerDI_26)), ((MR_Box) (transform_hlds__stm_expand__OrigInnerUO_27)));
    }
    if (transform_hlds__stm_expand__succeeded)
      {
        mercury__map__det_insert_4_p_0(transform_hlds__stm_expand__TypeInfo_75_75, transform_hlds__stm_expand__TypeInfo_75_75, ((MR_Box) (transform_hlds__stm_expand__OrigInnerDI_26)), ((MR_Box) (transform_hlds__stm_expand__InnerDI_13)), transform_hlds__stm_expand__VarMapping1_34, &transform_hlds__stm_expand__VarMapping_35);
      }
    else
      {
        MR_Word transform_hlds__stm_expand__VarMapping2_36;

        {
          mercury__map__det_insert_4_p_0(transform_hlds__stm_expand__TypeInfo_75_75, transform_hlds__stm_expand__TypeInfo_75_75, ((MR_Box) (transform_hlds__stm_expand__OrigInnerDI_26)), ((MR_Box) (transform_hlds__stm_expand__InnerDI_13)), transform_hlds__stm_expand__VarMapping1_34, &transform_hlds__stm_expand__VarMapping2_36);
        }
        {
          mercury__map__det_insert_4_p_0(transform_hlds__stm_expand__TypeInfo_75_75, transform_hlds__stm_expand__TypeInfo_75_75, ((MR_Box) (transform_hlds__stm_expand__OrigInnerUO_27)), ((MR_Box) (transform_hlds__stm_expand__InnerUO_14)), transform_hlds__stm_expand__VarMapping2_36, &transform_hlds__stm_expand__VarMapping_35);
        }
      }
    {
      hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(transform_hlds__stm_expand__VarMapping_35, transform_hlds__stm_expand__AtomicGoal0_10, transform_hlds__stm_expand__AtomicGoal_11);
    }
    {
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__stm_expand__NewPredVarSet_30, transform_hlds__stm_expand__NewProcInfo0_17, &transform_hlds__stm_expand__NewProcInfo1_37);
    }
    {
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__stm_expand__NewPredVarTypes_31, transform_hlds__stm_expand__NewProcInfo1_37, &transform_hlds__stm_expand__NewProcInfo_38);
    }
    {
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__stm_expand__OldPredVarSet_32, transform_hlds__stm_expand__OldProcInfo0_18, &transform_hlds__stm_expand__OldProcInfo1_39);
    }
    {
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__stm_expand__OldPredVarTypes_33, transform_hlds__stm_expand__OldProcInfo1_39, &transform_hlds__stm_expand__OldProcInfo_40);
    }
    transform_hlds__stm_expand__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 0)));
    transform_hlds__stm_expand__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 1)));
    transform_hlds__stm_expand__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 2)));
    transform_hlds__stm_expand__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 3)));
    transform_hlds__stm_expand__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 4)));
    transform_hlds__stm_expand__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 5)));
    transform_hlds__stm_expand__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_41, (MR_Integer) 6)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_42 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__V_60_60));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_61_61));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__V_62_62));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__V_63_63));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__NewProcInfo_38));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__V_65_65));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__V_66_66));
    }
    transform_hlds__stm_expand__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 0)));
    transform_hlds__stm_expand__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 1)));
    transform_hlds__stm_expand__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 2)));
    transform_hlds__stm_expand__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 3)));
    transform_hlds__stm_expand__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 4)));
    transform_hlds__stm_expand__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 5)));
    transform_hlds__stm_expand__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_43, (MR_Integer) 6)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_44 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__V_67_67));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_68_68));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__V_69_69));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__OldProcInfo_40));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__V_71_71));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__V_72_72));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__V_73_73));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__apply_varset_to_preds_11_p_0(
  MR_Word transform_hlds__stm_expand__ProgVar_12,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredVarSet_0_20,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredVarSet_21,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredVarTypes_0_22,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredVarTypes_23,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_OldPredVarSet_0_24,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_OldPredVarSet_25,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_OldPredVarTypes_0_26,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_OldPredVarTypes_27,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_VarMapping_0_28,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_VarMapping_29)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__TypeInfo_34_34;
    MR_Word transform_hlds__stm_expand__ProgType_18;
    MR_Word transform_hlds__stm_expand__NewProgVar_19;

    {
      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__stm_expand__STATE_VARIABLE_OldPredVarTypes_0_26, transform_hlds__stm_expand__ProgVar_12, &transform_hlds__stm_expand__ProgType_18);
    }
    {
      mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &transform_hlds__stm_expand__NewProgVar_19, transform_hlds__stm_expand__STATE_VARIABLE_NewPredVarSet_0_20, transform_hlds__stm_expand__STATE_VARIABLE_NewPredVarSet_21);
    }
    {
      hlds__vartypes__add_var_type_4_p_0(transform_hlds__stm_expand__NewProgVar_19, transform_hlds__stm_expand__ProgType_18, transform_hlds__stm_expand__STATE_VARIABLE_NewPredVarTypes_0_22, transform_hlds__stm_expand__STATE_VARIABLE_NewPredVarTypes_23);
    }
    transform_hlds__stm_expand__TypeInfo_34_34 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0];
    {
      mercury__map__det_insert_4_p_0(transform_hlds__stm_expand__TypeInfo_34_34, transform_hlds__stm_expand__TypeInfo_34_34, ((MR_Box) (transform_hlds__stm_expand__ProgVar_12)), ((MR_Box) (transform_hlds__stm_expand__NewProgVar_19)), transform_hlds__stm_expand__STATE_VARIABLE_VarMapping_0_28, transform_hlds__stm_expand__STATE_VARIABLE_VarMapping_29);
    }
    *transform_hlds__stm_expand__STATE_VARIABLE_OldPredVarTypes_27 = transform_hlds__stm_expand__STATE_VARIABLE_OldPredVarTypes_0_26;
    *transform_hlds__stm_expand__STATE_VARIABLE_OldPredVarSet_25 = transform_hlds__stm_expand__STATE_VARIABLE_OldPredVarSet_0_24;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_2_8_p_0_1(
  MR_Box transform_hlds__stm_expand__closure_arg,
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
    MR_Word transform_hlds__stm_expand__conv0_LambdaHeadVar__2_12;

    {
      transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__583__1_2_p_0(((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), &transform_hlds__stm_expand__conv0_LambdaHeadVar__2_12);
    }
    *transform_hlds__stm_expand__wrapper_arg_2 = ((MR_Box) (transform_hlds__stm_expand__conv0_LambdaHeadVar__2_12));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_2_8_p_0(
  MR_Word transform_hlds__stm_expand__AtomicGoalVarList_9,
  MR_Word transform_hlds__stm_expand__RecCallGoal_10,
  MR_Word transform_hlds__stm_expand__AtomicGoal_11,
  MR_Word transform_hlds__stm_expand__OrElseGoals_12,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_27,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_28,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_29)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_24_69 = (MR_Word) &transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0;
    MR_Word transform_hlds__stm_expand__AtomicGoalVars_15;
    MR_Word transform_hlds__stm_expand__OutputTypes_17;
    MR_Word transform_hlds__stm_expand__ResultType_18;
    MR_Word transform_hlds__stm_expand__ResultVar_19;
    MR_Word transform_hlds__stm_expand__InnerDI_20;
    MR_Word transform_hlds__stm_expand__InnerUO_21;
    MR_Word transform_hlds__stm_expand__ProcessGoalList_22;
    MR_Word transform_hlds__stm_expand__WrapperID_23;
    MR_Word transform_hlds__stm_expand__RollbackGoal_25;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31;
    MR_Word transform_hlds__stm_expand__V_33_33;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_35_35;
    MR_Word transform_hlds__stm_expand__V_37_37;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_39_39;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_41_41;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_42_42;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_43_43;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_45_45;
    MR_Word transform_hlds__stm_expand__InputVarList_53;
    MR_Word transform_hlds__stm_expand__InputVars_54;
    MR_Word transform_hlds__stm_expand__GoalVar0_55;
    MR_Box transform_hlds__stm_expand__conv1_GoalVar0_55;
    MR_Word transform_hlds__stm_expand__V_65_65;
    MR_Word transform_hlds__stm_expand__V_66_66;
    MR_Word transform_hlds__stm_expand__V_67_67;
    MR_Word transform_hlds__stm_expand__V_68_68;
    MR_Word transform_hlds__stm_expand__V_64_64;
    MR_Word transform_hlds__stm_expand__V_16_16;
    MR_Word transform_hlds__stm_expand__V_24_24;

    {
      mercury__list__map_3_p_0(transform_hlds__stm_expand__TypeCtorInfo_24_69, (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1], (MR_Word) &transform_hlds__stm_expand_scalar_common_2[10], transform_hlds__stm_expand__AtomicGoalVarList_9, &transform_hlds__stm_expand__InputVarList_53);
    }
    {
      transform_hlds__stm_expand__InputVars_54 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__stm_expand__InputVarList_53);
    }
    {
      transform_hlds__stm_expand__conv1_GoalVar0_55 = mercury__list__det_head_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_24_69, transform_hlds__stm_expand__AtomicGoalVarList_9);
    }
    transform_hlds__stm_expand__GoalVar0_55 = ((MR_Word) transform_hlds__stm_expand__conv1_GoalVar0_55);
    transform_hlds__stm_expand__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_55, (MR_Integer) 0)));
    transform_hlds__stm_expand__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_55, (MR_Integer) 1)));
    transform_hlds__stm_expand__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_55, (MR_Integer) 2)));
    transform_hlds__stm_expand__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_55, (MR_Integer) 3)));
    transform_hlds__stm_expand__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_55, (MR_Integer) 4)));
    {
      transform_hlds__stm_expand__AtomicGoalVars_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_15, 0) = ((MR_Box) (transform_hlds__stm_expand__InputVars_54));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_15, 1) = ((MR_Box) (transform_hlds__stm_expand__V_65_65));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_15, 2) = ((MR_Box) (transform_hlds__stm_expand__V_66_66));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_15, 3) = ((MR_Box) (transform_hlds__stm_expand__V_67_67));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_15, 4) = ((MR_Box) (transform_hlds__stm_expand__V_68_68));
    }
    {
      transform_hlds__stm_expand__get_input_output_types_4_p_0(transform_hlds__stm_expand__AtomicGoalVars_15, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_28, &transform_hlds__stm_expand__V_16_16, &transform_hlds__stm_expand__OutputTypes_17);
    }
    if ((transform_hlds__stm_expand__OutputTypes_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        transform_hlds__stm_expand__ResultType_18 = parse_tree__builtin_lib_types__stm_dummy_output_type_0_f_0();
      }
    else
      {
        MR_Word transform_hlds__stm_expand__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__OutputTypes_17, (MR_Integer) 1)));
        MR_Word transform_hlds__stm_expand__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__OutputTypes_17, (MR_Integer) 0)));

        if ((transform_hlds__stm_expand__V_80_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          transform_hlds__stm_expand__ResultType_18 = transform_hlds__stm_expand__V_81_81;
        else
          {
            {
              transform_hlds__stm_expand__ResultType_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__ResultType_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__ResultType_18, 1) = ((MR_Box) (transform_hlds__stm_expand__OutputTypes_17));
              MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__ResultType_18, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
      }
    {
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__ResultType_18, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[8]), &transform_hlds__stm_expand__ResultVar_19, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_26, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31);
    }
    {
      transform_hlds__stm_expand__V_33_33 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
    {
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_33_33, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[9]), &transform_hlds__stm_expand__InnerDI_20, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_31_31, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_35_35);
    }
    {
      transform_hlds__stm_expand__V_37_37 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
    {
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_37_37, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[10]), &transform_hlds__stm_expand__InnerUO_21, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_35_35, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_39_39);
    }
    {
      transform_hlds__stm_expand__commit_new_pred_3_p_0(transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_39_39, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_28, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_41_41);
    }
    {
      transform_hlds__stm_expand__ProcessGoalList_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__ProcessGoalList_22, 0) = ((MR_Box) (transform_hlds__stm_expand__AtomicGoal_11));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__ProcessGoalList_22, 1) = ((MR_Box) (transform_hlds__stm_expand__OrElseGoals_12));
    }
    {
      transform_hlds__stm_expand__create_wrapper_for_goal_list_8_p_0(transform_hlds__stm_expand__AtomicGoalVarList_9, transform_hlds__stm_expand__ResultType_18, transform_hlds__stm_expand__ResultVar_19, transform_hlds__stm_expand__ProcessGoalList_22, &transform_hlds__stm_expand__WrapperID_23, &transform_hlds__stm_expand__V_24_24, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_41_41, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_42_42);
    }
    {
      transform_hlds__stm_expand__update_new_pred_info_3_p_0(transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_42_42, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_39_39, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_43_43);
    }
    {
      transform_hlds__stm_expand__create_rollback_handler_goal_10_p_0(transform_hlds__stm_expand__AtomicGoalVars_15, transform_hlds__stm_expand__ResultType_18, transform_hlds__stm_expand__InnerDI_20, transform_hlds__stm_expand__InnerUO_21, transform_hlds__stm_expand__WrapperID_23, transform_hlds__stm_expand__RecCallGoal_10, &transform_hlds__stm_expand__RollbackGoal_25, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_42_42, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_43_43, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44);
    }
    {
      transform_hlds__stm_expand__new_pred_set_goal_3_p_0(transform_hlds__stm_expand__RollbackGoal_25, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_45_45);
    }
    {
      transform_hlds__stm_expand__run_quantification_over_pred_2_p_0(transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_45_45, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_27);
    }
    {
      transform_hlds__stm_expand__commit_new_pred_3_p_0(*transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_27, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_42_42, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_29);
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_6_p_0_1(
  MR_Box transform_hlds__stm_expand__closure_arg,
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
    MR_Word transform_hlds__stm_expand__conv0_LambdaHeadVar__2_12;

    {
      transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__583__1_2_p_0(((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), &transform_hlds__stm_expand__conv0_LambdaHeadVar__2_12);
    }
    *transform_hlds__stm_expand__wrapper_arg_2 = ((MR_Box) (transform_hlds__stm_expand__conv0_LambdaHeadVar__2_12));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_rollback_pred_6_p_0(
  MR_Word transform_hlds__stm_expand__AtomicGoalVarList_7,
  MR_Word * transform_hlds__stm_expand__CallGoal_8,
  MR_Word transform_hlds__stm_expand__AtomicGoal_9,
  MR_Word transform_hlds__stm_expand__OrElseGoals_10,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_21,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_22)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_24_55 = (MR_Word) &transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0;
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_17_71;
    MR_Word transform_hlds__stm_expand__AtomicGoalVars_12;
    MR_Word transform_hlds__stm_expand__InputVars_13;
    MR_Word transform_hlds__stm_expand__OutputVars_14;
    MR_Word transform_hlds__stm_expand__InputTypes_15;
    MR_Word transform_hlds__stm_expand__OutputTypes_16;
    MR_Word transform_hlds__stm_expand__InputModes_17;
    MR_Word transform_hlds__stm_expand__OutputModes_18;
    MR_Word transform_hlds__stm_expand__NewPredInfo0_19;
    MR_Word transform_hlds__stm_expand__NewPredInfo_20;
    MR_Word transform_hlds__stm_expand__V_23_23;
    MR_Word transform_hlds__stm_expand__V_24_24;
    MR_Word transform_hlds__stm_expand__V_25_25;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_28_28;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_29_29;
    MR_Word transform_hlds__stm_expand__InputVarList_39;
    MR_Word transform_hlds__stm_expand__GoalVar0_41;
    MR_Word transform_hlds__stm_expand__InputSet_61;
    MR_Word transform_hlds__stm_expand__OutputSet_62;
    MR_Word transform_hlds__stm_expand__OrigPredId_76;
    MR_Integer transform_hlds__stm_expand__OrigProcId_77;
    MR_Word transform_hlds__stm_expand__OrigProcInfo_78;
    MR_Word transform_hlds__stm_expand__OrigPredInfo_79;
    MR_Word transform_hlds__stm_expand__StmExpanded_80;
    MR_Integer transform_hlds__stm_expand__ExpandNum_81;
    MR_Word transform_hlds__stm_expand__PredModuleInfo0_82;
    MR_Word transform_hlds__stm_expand__NewPredId_83;
    MR_Integer transform_hlds__stm_expand__NewProcId_84;
    MR_Word transform_hlds__stm_expand__NewPredInfo_85;
    MR_Word transform_hlds__stm_expand__NewProcInfo_86;
    MR_Word transform_hlds__stm_expand__PredModuleInfo_89;
    MR_Box transform_hlds__stm_expand__conv1_GoalVar0_41;
    MR_Word transform_hlds__stm_expand__V_51_51;
    MR_Word transform_hlds__stm_expand__V_53_53;
    MR_Word transform_hlds__stm_expand__V_54_54;
    MR_Word transform_hlds__stm_expand__V_50_50;
    MR_Word transform_hlds__stm_expand___StmModuleInfo0_75;
    MR_Word transform_hlds__stm_expand__V_87_87;
    MR_Integer transform_hlds__stm_expand__V_88_88;

    {
      mercury__list__map_3_p_0(transform_hlds__stm_expand__TypeCtorInfo_24_55, (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1], (MR_Word) &transform_hlds__stm_expand_scalar_common_2[9], transform_hlds__stm_expand__AtomicGoalVarList_7, &transform_hlds__stm_expand__InputVarList_39);
    }
    {
      transform_hlds__stm_expand__InputSet_61 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__stm_expand__InputVarList_39);
    }
    {
      transform_hlds__stm_expand__conv1_GoalVar0_41 = mercury__list__det_head_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_24_55, transform_hlds__stm_expand__AtomicGoalVarList_7);
    }
    transform_hlds__stm_expand__GoalVar0_41 = ((MR_Word) transform_hlds__stm_expand__conv1_GoalVar0_41);
    transform_hlds__stm_expand__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_41, (MR_Integer) 0)));
    transform_hlds__stm_expand__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_41, (MR_Integer) 1)));
    transform_hlds__stm_expand__OutputSet_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_41, (MR_Integer) 2)));
    transform_hlds__stm_expand__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_41, (MR_Integer) 3)));
    transform_hlds__stm_expand__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_41, (MR_Integer) 4)));
    {
      transform_hlds__stm_expand__AtomicGoalVars_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_12, 0) = ((MR_Box) (transform_hlds__stm_expand__InputSet_61));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_12, 1) = ((MR_Box) (transform_hlds__stm_expand__V_51_51));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_12, 2) = ((MR_Box) (transform_hlds__stm_expand__OutputSet_62));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_12, 3) = ((MR_Box) (transform_hlds__stm_expand__V_53_53));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_12, 4) = ((MR_Box) (transform_hlds__stm_expand__V_54_54));
    }
    transform_hlds__stm_expand__TypeCtorInfo_17_71 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      transform_hlds__stm_expand__InputVars_13 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_71, transform_hlds__stm_expand__InputSet_61);
    }
    {
      transform_hlds__stm_expand__OutputVars_14 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_17_71, transform_hlds__stm_expand__OutputSet_62);
    }
    {
      transform_hlds__stm_expand__get_input_output_types_4_p_0(transform_hlds__stm_expand__AtomicGoalVars_12, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_21, &transform_hlds__stm_expand__InputTypes_15, &transform_hlds__stm_expand__OutputTypes_16);
    }
    {
      transform_hlds__stm_expand__get_input_output_modes_3_p_0(transform_hlds__stm_expand__AtomicGoalVars_12, &transform_hlds__stm_expand__InputModes_17, &transform_hlds__stm_expand__OutputModes_18);
    }
    {
      transform_hlds__stm_expand__V_23_23 = mercury__list__f_43_43_2_f_0((MR_Word) &transform_hlds__stm_expand_scalar_common_1[0], transform_hlds__stm_expand__InputVars_13, transform_hlds__stm_expand__OutputVars_14);
    }
    {
      transform_hlds__stm_expand__V_24_24 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__stm_expand__InputTypes_15, transform_hlds__stm_expand__OutputTypes_16);
    }
    {
      transform_hlds__stm_expand__V_25_25 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__stm_expand__InputModes_17, transform_hlds__stm_expand__OutputModes_18);
    }
    {
      transform_hlds__stm_expand__create_cloned_pred_10_p_0(transform_hlds__stm_expand__V_23_23, transform_hlds__stm_expand__V_24_24, transform_hlds__stm_expand__V_25_25, (MR_String) "rollback", transform_hlds__stm_expand__AtomicGoal_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__stm_expand__NewPredInfo0_19, transform_hlds__stm_expand__CallGoal_8, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_21, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_28_28);
    }
    {
      transform_hlds__stm_expand__create_rollback_pred_2_8_p_0(transform_hlds__stm_expand__AtomicGoalVarList_7, *transform_hlds__stm_expand__CallGoal_8, transform_hlds__stm_expand__AtomicGoal_9, transform_hlds__stm_expand__OrElseGoals_10, transform_hlds__stm_expand__NewPredInfo0_19, &transform_hlds__stm_expand__NewPredInfo_20, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_28_28, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_29_29);
    }
    transform_hlds__stm_expand___StmModuleInfo0_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_29_29, (MR_Integer) 0)));
    transform_hlds__stm_expand__OrigPredId_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_29_29, (MR_Integer) 1)));
    transform_hlds__stm_expand__OrigProcId_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_29_29, (MR_Integer) 2)));
    transform_hlds__stm_expand__OrigProcInfo_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_29_29, (MR_Integer) 3)));
    transform_hlds__stm_expand__OrigPredInfo_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_29_29, (MR_Integer) 4)));
    transform_hlds__stm_expand__StmExpanded_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_29_29, (MR_Integer) 5)));
    transform_hlds__stm_expand__ExpandNum_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_29_29, (MR_Integer) 6)));
    transform_hlds__stm_expand__PredModuleInfo0_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo_20, (MR_Integer) 0)));
    transform_hlds__stm_expand__NewPredId_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo_20, (MR_Integer) 1)));
    transform_hlds__stm_expand__NewProcId_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo_20, (MR_Integer) 2)));
    transform_hlds__stm_expand__NewPredInfo_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo_20, (MR_Integer) 3)));
    transform_hlds__stm_expand__NewProcInfo_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo_20, (MR_Integer) 4)));
    transform_hlds__stm_expand__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo_20, (MR_Integer) 5)));
    transform_hlds__stm_expand__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__NewPredInfo_20, (MR_Integer) 6)));
    {
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(transform_hlds__stm_expand__NewPredId_83, transform_hlds__stm_expand__NewProcId_84, transform_hlds__stm_expand__NewPredInfo_85, transform_hlds__stm_expand__NewProcInfo_86, transform_hlds__stm_expand__PredModuleInfo0_82, &transform_hlds__stm_expand__PredModuleInfo_89);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_22 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__PredModuleInfo_89));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__OrigPredId_76));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__OrigProcId_77));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__OrigProcInfo_78));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__OrigPredInfo_79));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__stm_expand__StmExpanded_80));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__stm_expand__ExpandNum_81));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_rollback_handler_goal_10_p_0(
  MR_Word transform_hlds__stm_expand__AtomicGoalVars_11,
  MR_Word transform_hlds__stm_expand__ReturnType_12,
  MR_Word transform_hlds__stm_expand__StmVarDI_13,
  MR_Word transform_hlds__stm_expand__StmVarUO_14,
  MR_Word transform_hlds__stm_expand__WrapperID_15,
  MR_Word transform_hlds__stm_expand__RecCall_16,
  MR_Word * transform_hlds__stm_expand__Goal_17,
  MR_Word transform_hlds__stm_expand__StmInfo_18,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_40,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_41)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__InputVars_20;
    MR_Word transform_hlds__stm_expand__InputTypes_22;
    MR_Word transform_hlds__stm_expand__InputModes_24;
    MR_Word transform_hlds__stm_expand__AtomicClosureVar_26;
    MR_Word transform_hlds__stm_expand__ClosureAssign_27;
    MR_Word transform_hlds__stm_expand__RttiTypeVar_28;
    MR_Word transform_hlds__stm_expand__RttiTypeVarAssign_29;
    MR_Word transform_hlds__stm_expand__Exception_Result_Type_30;
    MR_Word transform_hlds__stm_expand__ExceptRes_Success_Functor_31;
    MR_Word transform_hlds__stm_expand__ExceptRes_Failure_Functor_32;
    MR_Word transform_hlds__stm_expand__ReturnExceptVar_33;
    MR_Word transform_hlds__stm_expand__Goal_StmCreate_34;
    MR_Word transform_hlds__stm_expand__Goal_TryStm_35;
    MR_Word transform_hlds__stm_expand__Branch_AtomicSuccess_36;
    MR_Word transform_hlds__stm_expand__Branch_AtomicException_37;
    MR_Word transform_hlds__stm_expand__DisjGoal_38;
    MR_Word transform_hlds__stm_expand__Goal0_39;
    MR_Word transform_hlds__stm_expand__V_42_42;
    MR_Word transform_hlds__stm_expand__V_43_43;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44;
    MR_Word transform_hlds__stm_expand__V_45_45;
    MR_Word transform_hlds__stm_expand__V_46_46;
    MR_Word transform_hlds__stm_expand__V_47_47;
    MR_Word transform_hlds__stm_expand__V_48_48;
    MR_Word transform_hlds__stm_expand__V_49_49;
    MR_Word transform_hlds__stm_expand__V_51_51;
    MR_Word transform_hlds__stm_expand__V_52_52;
    MR_Word transform_hlds__stm_expand__V_53_53;
    MR_Word transform_hlds__stm_expand__V_54_54;
    MR_Word transform_hlds__stm_expand__V_55_55;
    MR_Word transform_hlds__stm_expand__V_56_56;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_58_58;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_60_60;
    MR_Word transform_hlds__stm_expand__V_62_62;
    MR_Word transform_hlds__stm_expand__V_68_68;
    MR_Word transform_hlds__stm_expand__V_70_70;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_71_71;
    MR_Word transform_hlds__stm_expand__V_73_73;
    MR_Word transform_hlds__stm_expand__V_74_74;
    MR_Word transform_hlds__stm_expand__V_75_75;
    MR_Word transform_hlds__stm_expand__V_79_79;
    MR_Word transform_hlds__stm_expand__V_85_85;
    MR_Word transform_hlds__stm_expand__V_87_87;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_88_88;
    MR_Word transform_hlds__stm_expand__V_90_90;
    MR_Word transform_hlds__stm_expand__V_91_91;
    MR_Word transform_hlds__stm_expand__V_92_92;
    MR_Word transform_hlds__stm_expand__V_93_93;
    MR_Word transform_hlds__stm_expand__V_95_95;
    MR_Word transform_hlds__stm_expand__V_96_96;
    MR_Word transform_hlds__stm_expand__V_97_97;
    MR_Word transform_hlds__stm_expand__V_100_100;
    MR_Word transform_hlds__stm_expand__V_101_101;
    MR_Word transform_hlds__stm_expand__V_105_105;
    MR_Word transform_hlds__stm_expand__V_106_106;
    MR_Word transform_hlds__stm_expand__V_110_110;
    MR_Word transform_hlds__stm_expand__V_111_111;
    MR_Word transform_hlds__stm_expand__V_115_115;
    MR_Word transform_hlds__stm_expand__V_116_116;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_121_121;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_122_122;
    MR_Word transform_hlds__stm_expand__V_123_123;
    MR_Word transform_hlds__stm_expand__V_127_127;
    MR_Word transform_hlds__stm_expand__V_129_129;
    MR_Word transform_hlds__stm_expand__V_130_130;
    MR_Word transform_hlds__stm_expand__V_133_133;
    MR_Word transform_hlds__stm_expand__V_134_134;
    MR_Word transform_hlds__stm_expand__V_135_135;
    MR_Word transform_hlds__stm_expand__V_136_136;
    MR_Word transform_hlds__stm_expand__V_137_137;
    MR_Word transform_hlds__stm_expand__V_21_21;
    MR_Word transform_hlds__stm_expand__V_23_23;
    MR_Word transform_hlds__stm_expand__V_25_25;

    {
      transform_hlds__stm_expand__get_input_output_varlist_3_p_0(transform_hlds__stm_expand__AtomicGoalVars_11, &transform_hlds__stm_expand__InputVars_20, &transform_hlds__stm_expand__V_21_21);
    }
    {
      transform_hlds__stm_expand__get_input_output_types_4_p_0(transform_hlds__stm_expand__AtomicGoalVars_11, transform_hlds__stm_expand__StmInfo_18, &transform_hlds__stm_expand__InputTypes_22, &transform_hlds__stm_expand__V_23_23);
    }
    {
      transform_hlds__stm_expand__get_input_output_modes_3_p_0(transform_hlds__stm_expand__AtomicGoalVars_11, &transform_hlds__stm_expand__InputModes_24, &transform_hlds__stm_expand__V_25_25);
    }
    {
      transform_hlds__stm_expand__V_47_47 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_49_49 = parse_tree__builtin_lib_types__stm_state_type_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_48_48, 0) = ((MR_Box) (transform_hlds__stm_expand__V_49_49));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 0) = ((MR_Box) (transform_hlds__stm_expand__V_47_47));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 1) = ((MR_Box) (transform_hlds__stm_expand__V_48_48));
    }
    {
      transform_hlds__stm_expand__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_45_45, 0) = ((MR_Box) (transform_hlds__stm_expand__ReturnType_12));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_45_45, 1) = ((MR_Box) (transform_hlds__stm_expand__V_46_46));
    }
    {
      transform_hlds__stm_expand__V_42_42 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__stm_expand__InputTypes_22, transform_hlds__stm_expand__V_45_45);
    }
    {
      transform_hlds__stm_expand__V_52_52 = parse_tree__prog_mode__out_mode_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_54_54 = parse_tree__prog_mode__di_mode_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_56_56 = parse_tree__prog_mode__uo_mode_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_55_55, 0) = ((MR_Box) (transform_hlds__stm_expand__V_56_56));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_53_53, 0) = ((MR_Box) (transform_hlds__stm_expand__V_54_54));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_53_53, 1) = ((MR_Box) (transform_hlds__stm_expand__V_55_55));
    }
    {
      transform_hlds__stm_expand__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_51_51, 0) = ((MR_Box) (transform_hlds__stm_expand__V_52_52));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_51_51, 1) = ((MR_Box) (transform_hlds__stm_expand__V_53_53));
    }
    {
      transform_hlds__stm_expand__V_43_43 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__stm_expand__InputModes_24, transform_hlds__stm_expand__V_51_51);
    }
    {
      transform_hlds__stm_expand__create_closure_8_p_0(transform_hlds__stm_expand__WrapperID_15, transform_hlds__stm_expand__InputVars_20, transform_hlds__stm_expand__V_42_42, transform_hlds__stm_expand__V_43_43, &transform_hlds__stm_expand__AtomicClosureVar_26, &transform_hlds__stm_expand__ClosureAssign_27, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_40, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44);
    }
    {
      transform_hlds__stm_expand__make_type_info_5_p_0(transform_hlds__stm_expand__ReturnType_12, &transform_hlds__stm_expand__RttiTypeVar_28, &transform_hlds__stm_expand__RttiTypeVarAssign_29, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_58_58);
    }
    {
      transform_hlds__stm_expand__Exception_Result_Type_30 = parse_tree__builtin_lib_types__exception_result_type_1_f_0(transform_hlds__stm_expand__ReturnType_12);
    }
    {
      transform_hlds__stm_expand__ExceptRes_Success_Functor_31 = parse_tree__builtin_lib_types__exception_succeeded_functor_0_f_0();
    }
    {
      transform_hlds__stm_expand__ExceptRes_Failure_Functor_32 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
    }
    {
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__Exception_Result_Type_30, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[6]), &transform_hlds__stm_expand__ReturnExceptVar_33, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_58_58, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_60_60);
    }
    {
      transform_hlds__stm_expand__V_62_62 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_68_68, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVarDI_13));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    transform_hlds__stm_expand__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[6]);
    {
      transform_hlds__stm_expand__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_74_74, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVarDI_13));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_74_74, 1) = ((MR_Box) (transform_hlds__stm_expand__V_75_75));
    }
    {
      transform_hlds__stm_expand__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_73_73, 0) = ((MR_Box) (transform_hlds__stm_expand__V_74_74));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_70_70 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_73_73);
    }
    {
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_62_62, (MR_String) "stm_create_transaction_log", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__V_68_68, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_70_70, &transform_hlds__stm_expand__Goal_StmCreate_34, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_60_60, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_71_71);
    }
    {
      transform_hlds__stm_expand__V_79_79 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_93_93, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVarUO_14));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_92_92, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVarDI_13));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_92_92, 1) = ((MR_Box) (transform_hlds__stm_expand__V_93_93));
    }
    {
      transform_hlds__stm_expand__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_91_91, 0) = ((MR_Box) (transform_hlds__stm_expand__ReturnExceptVar_33));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_91_91, 1) = ((MR_Box) (transform_hlds__stm_expand__V_92_92));
    }
    {
      transform_hlds__stm_expand__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_90_90, 0) = ((MR_Box) (transform_hlds__stm_expand__AtomicClosureVar_26));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_90_90, 1) = ((MR_Box) (transform_hlds__stm_expand__V_91_91));
    }
    {
      transform_hlds__stm_expand__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_85_85, 0) = ((MR_Box) (transform_hlds__stm_expand__RttiTypeVar_28));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_85_85, 1) = ((MR_Box) (transform_hlds__stm_expand__V_90_90));
    }
    transform_hlds__stm_expand__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[5]);
    {
      transform_hlds__stm_expand__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_96_96, 0) = ((MR_Box) (transform_hlds__stm_expand__RttiTypeVar_28));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_96_96, 1) = ((MR_Box) (transform_hlds__stm_expand__V_97_97));
    }
    {
      transform_hlds__stm_expand__V_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_101_101, 0) = ((MR_Box) (transform_hlds__stm_expand__AtomicClosureVar_26));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_101_101, 1) = ((MR_Box) (transform_hlds__stm_expand__V_97_97));
    }
    {
      transform_hlds__stm_expand__V_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_106_106, 0) = ((MR_Box) (transform_hlds__stm_expand__ReturnExceptVar_33));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_106_106, 1) = ((MR_Box) (transform_hlds__stm_expand__V_97_97));
    }
    {
      transform_hlds__stm_expand__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_111_111, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVarDI_13));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[8])));
    }
    {
      transform_hlds__stm_expand__V_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_116_116, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVarUO_14));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_116_116, 1) = ((MR_Box) (transform_hlds__stm_expand__V_75_75));
    }
    {
      transform_hlds__stm_expand__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_115_115, 0) = ((MR_Box) (transform_hlds__stm_expand__V_116_116));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_115_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_110_110, 0) = ((MR_Box) (transform_hlds__stm_expand__V_111_111));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_110_110, 1) = ((MR_Box) (transform_hlds__stm_expand__V_115_115));
    }
    {
      transform_hlds__stm_expand__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_105_105, 0) = ((MR_Box) (transform_hlds__stm_expand__V_106_106));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_105_105, 1) = ((MR_Box) (transform_hlds__stm_expand__V_110_110));
    }
    {
      transform_hlds__stm_expand__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_100_100, 0) = ((MR_Box) (transform_hlds__stm_expand__V_101_101));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_100_100, 1) = ((MR_Box) (transform_hlds__stm_expand__V_105_105));
    }
    {
      transform_hlds__stm_expand__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_95_95, 0) = ((MR_Box) (transform_hlds__stm_expand__V_96_96));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_95_95, 1) = ((MR_Box) (transform_hlds__stm_expand__V_100_100));
    }
    {
      transform_hlds__stm_expand__V_87_87 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_95_95);
    }
    {
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_79_79, (MR_String) "unsafe_try_stm", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[7]), (MR_Integer) 4, (MR_Integer) 0, transform_hlds__stm_expand__V_85_85, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_87_87, &transform_hlds__stm_expand__Goal_TryStm_35, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_71_71, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_88_88);
    }
    {
      transform_hlds__stm_expand__deconstruct_output_7_p_0(transform_hlds__stm_expand__AtomicGoalVars_11, transform_hlds__stm_expand__ReturnType_12, transform_hlds__stm_expand__ReturnExceptVar_33, &transform_hlds__stm_expand__Branch_AtomicSuccess_36, transform_hlds__stm_expand__StmInfo_18, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_88_88, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_121_121);
    }
    {
      transform_hlds__stm_expand__create_test_on_exception_7_p_0(transform_hlds__stm_expand__ReturnExceptVar_33, transform_hlds__stm_expand__StmVarUO_14, transform_hlds__stm_expand__ReturnType_12, transform_hlds__stm_expand__RecCall_16, &transform_hlds__stm_expand__Branch_AtomicException_37, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_121_121, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_122_122);
    }
    {
      transform_hlds__stm_expand__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_127_127, 0) = ((MR_Box) (transform_hlds__stm_expand__ExceptRes_Failure_Functor_32));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_127_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_127_127, 2) = ((MR_Box) (transform_hlds__stm_expand__Branch_AtomicException_37));
    }
    {
      transform_hlds__stm_expand__V_130_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_130_130, 0) = ((MR_Box) (transform_hlds__stm_expand__ExceptRes_Success_Functor_31));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_130_130, 2) = ((MR_Box) (transform_hlds__stm_expand__Branch_AtomicSuccess_36));
    }
    {
      transform_hlds__stm_expand__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_129_129, 0) = ((MR_Box) (transform_hlds__stm_expand__V_130_130));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_129_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_123_123, 0) = ((MR_Box) (transform_hlds__stm_expand__V_127_127));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_123_123, 1) = ((MR_Box) (transform_hlds__stm_expand__V_129_129));
    }
    {
      transform_hlds__stm_expand__create_switch_disjunction_7_p_0(transform_hlds__stm_expand__ReturnExceptVar_33, transform_hlds__stm_expand__V_123_123, (MR_Integer) 0, (MR_Integer) 2, &transform_hlds__stm_expand__DisjGoal_38, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_122_122, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_41);
    }
    {
      transform_hlds__stm_expand__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_134_134, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_StmCreate_34));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_134_134, 1) = ((MR_Box) (transform_hlds__stm_expand__RttiTypeVarAssign_29));
    }
    {
      transform_hlds__stm_expand__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_137_137, 0) = ((MR_Box) (transform_hlds__stm_expand__DisjGoal_38));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_137_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_136_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_136_136, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_TryStm_35));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_136_136, 1) = ((MR_Box) (transform_hlds__stm_expand__V_137_137));
    }
    {
      transform_hlds__stm_expand__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_135_135, 0) = ((MR_Box) (transform_hlds__stm_expand__ClosureAssign_27));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_135_135, 1) = ((MR_Box) (transform_hlds__stm_expand__V_136_136));
    }
    {
      transform_hlds__stm_expand__V_133_133 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__stm_expand__V_134_134, transform_hlds__stm_expand__V_135_135);
    }
    {
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_133_133, &transform_hlds__stm_expand__Goal0_39);
    }
    {
      transform_hlds__stm_expand__create_promise_purity_scope_3_p_0(transform_hlds__stm_expand__Goal0_39, (MR_Integer) 0, transform_hlds__stm_expand__Goal_17);
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__stm_expand__create_test_on_exception_7_p_0_1(
  MR_Box transform_hlds__stm_expand__closure_arg)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;

    {
      transform_hlds__stm_expand__succeeded = transform_hlds__stm_expand__IntroducedFrom__pred__make_type_info__2387__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__closure, (MR_Integer) 4))));
    }
    return transform_hlds__stm_expand__succeeded;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_test_on_exception_7_p_0(
  MR_Word transform_hlds__stm_expand__ExceptVar_8,
  MR_Word transform_hlds__stm_expand__StmVar_9,
  MR_Word transform_hlds__stm_expand__ReturnType_10,
  MR_Word transform_hlds__stm_expand__RecCall_11,
  MR_Word * transform_hlds__stm_expand__Goal_12,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_24,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_25)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_67_67;
    MR_Word transform_hlds__stm_expand__ExceptUnivVar_14;
    MR_Word transform_hlds__stm_expand__DeconstructException_15;
    MR_Word transform_hlds__stm_expand__TypeInfoRollbackVar_16;
    MR_Word transform_hlds__stm_expand__TypeInfoRollbackAssign_17;
    MR_Word transform_hlds__stm_expand__DropStateGoal_18;
    MR_Word transform_hlds__stm_expand__TrueGoal_19;
    MR_Word transform_hlds__stm_expand__RethrowBranch_20;
    MR_Word transform_hlds__stm_expand__RetryBranch_21;
    MR_Word transform_hlds__stm_expand__FalseGoal_22;
    MR_Word transform_hlds__stm_expand__IfThenElseGoal_23;
    MR_Word transform_hlds__stm_expand__V_26_26;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_28_28;
    MR_Word transform_hlds__stm_expand__V_30_30;
    MR_Word transform_hlds__stm_expand__V_31_31;
    MR_Word transform_hlds__stm_expand__V_33_33;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34;
    MR_Word transform_hlds__stm_expand__V_35_35;
    MR_Word transform_hlds__stm_expand__V_41_41;
    MR_Word transform_hlds__stm_expand__V_43_43;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44;
    MR_Word transform_hlds__stm_expand__V_46_46;
    MR_Word transform_hlds__stm_expand__V_47_47;
    MR_Word transform_hlds__stm_expand__V_52_52;
    MR_Word transform_hlds__stm_expand__V_53_53;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_55_55;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_56_56;
    MR_Word transform_hlds__stm_expand__V_57_57;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_58_58;
    MR_Word transform_hlds__stm_expand__V_59_59;
    MR_Word transform_hlds__stm_expand__V_61_61;
    MR_Word transform_hlds__stm_expand__V_62_62;
    MR_Word transform_hlds__stm_expand__V_64_64;
    MR_Word transform_hlds__stm_expand__V_65_65;
    MR_Word transform_hlds__stm_expand__ModuleInfo0_73;
    MR_Word transform_hlds__stm_expand__PredId_74;
    MR_Integer transform_hlds__stm_expand__ProcId_75;
    MR_Word transform_hlds__stm_expand__PredInfo0_76;
    MR_Word transform_hlds__stm_expand__ProcInfo0_77;
    MR_Word transform_hlds__stm_expand__Context_78;
    MR_Integer transform_hlds__stm_expand__VarCnt_79;
    MR_Word transform_hlds__stm_expand__PolyInfo0_80;
    MR_Word transform_hlds__stm_expand__PolyInfo_81;
    MR_Word transform_hlds__stm_expand__PolySpecs_82;
    MR_Word transform_hlds__stm_expand__PredInfo_83;
    MR_Word transform_hlds__stm_expand__ProcInfo_84;
    MR_Word transform_hlds__stm_expand__ModuleInfo_85;
    MR_Word transform_hlds__stm_expand__V_86_86;

    {
      transform_hlds__stm_expand__V_26_26 = parse_tree__builtin_lib_types__univ_type_0_f_0();
    }
    {
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_26_26, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[5]), &transform_hlds__stm_expand__ExceptUnivVar_14, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_24, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_28_28);
    }
    {
      transform_hlds__stm_expand__V_30_30 = parse_tree__builtin_lib_types__exception_exception_functor_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_31_31, 0) = ((MR_Box) (transform_hlds__stm_expand__ExceptUnivVar_14));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_goal__deconstruct_functor_4_p_0(transform_hlds__stm_expand__ExceptVar_8, transform_hlds__stm_expand__V_30_30, transform_hlds__stm_expand__V_31_31, &transform_hlds__stm_expand__DeconstructException_15);
    }
    {
      transform_hlds__stm_expand__V_33_33 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    }
    transform_hlds__stm_expand__ModuleInfo0_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_28_28, (MR_Integer) 0)));
    transform_hlds__stm_expand__PredId_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_28_28, (MR_Integer) 1)));
    transform_hlds__stm_expand__ProcId_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_28_28, (MR_Integer) 2)));
    transform_hlds__stm_expand__PredInfo0_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_28_28, (MR_Integer) 3)));
    transform_hlds__stm_expand__ProcInfo0_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_28_28, (MR_Integer) 4)));
    transform_hlds__stm_expand__Context_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_28_28, (MR_Integer) 5)));
    transform_hlds__stm_expand__VarCnt_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_28_28, (MR_Integer) 6)));
    {
      check_hlds__polymorphism__create_poly_info_4_p_0(transform_hlds__stm_expand__ModuleInfo0_73, transform_hlds__stm_expand__PredInfo0_76, transform_hlds__stm_expand__ProcInfo0_77, &transform_hlds__stm_expand__PolyInfo0_80);
    }
    {
      check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(transform_hlds__stm_expand__V_33_33, transform_hlds__stm_expand__Context_78, &transform_hlds__stm_expand__TypeInfoRollbackVar_16, &transform_hlds__stm_expand__TypeInfoRollbackAssign_17, transform_hlds__stm_expand__PolyInfo0_80, &transform_hlds__stm_expand__PolyInfo_81);
    }
    {
      check_hlds__polymorphism__poly_info_extract_7_p_0(transform_hlds__stm_expand__PolyInfo_81, &transform_hlds__stm_expand__PolySpecs_82, transform_hlds__stm_expand__PredInfo0_76, &transform_hlds__stm_expand__PredInfo_83, transform_hlds__stm_expand__ProcInfo0_77, &transform_hlds__stm_expand__ProcInfo_84, &transform_hlds__stm_expand__ModuleInfo_85);
    }
    {
      transform_hlds__stm_expand__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_86_86, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_86_86, 1) = ((MR_Box) (transform_hlds__stm_expand__create_test_on_exception_7_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_86_86, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_86_86, 3) = ((MR_Box) (transform_hlds__stm_expand__PolySpecs_82));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_86_86, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mercury__require__expect_4_p_0(transform_hlds__stm_expand__V_86_86, (MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.make_type_info\'/5", (MR_String) "got errors while making type_info_var");
    }
    {
      transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34, 0) = ((MR_Box) (transform_hlds__stm_expand__ModuleInfo_85));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34, 1) = ((MR_Box) (transform_hlds__stm_expand__PredId_74));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34, 2) = ((MR_Box) (transform_hlds__stm_expand__ProcId_75));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34, 3) = ((MR_Box) (transform_hlds__stm_expand__PredInfo_83));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34, 4) = ((MR_Box) (transform_hlds__stm_expand__ProcInfo_84));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34, 5) = ((MR_Box) (transform_hlds__stm_expand__Context_78));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34, 6) = ((MR_Box) (transform_hlds__stm_expand__VarCnt_79));
    }
    {
      transform_hlds__stm_expand__V_35_35 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVar_9));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_47_47, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVar_9));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[8])));
    }
    {
      transform_hlds__stm_expand__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 0) = ((MR_Box) (transform_hlds__stm_expand__V_47_47));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_43_43 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_46_46);
    }
    {
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_35_35, (MR_String) "stm_discard_transaction_log", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__V_41_41, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_43_43, &transform_hlds__stm_expand__DropStateGoal_18, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44);
    }
    {
      transform_hlds__stm_expand__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_53_53, 0) = ((MR_Box) (transform_hlds__stm_expand__RecCall_11));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_52_52, 0) = ((MR_Box) (transform_hlds__stm_expand__DropStateGoal_18));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_52_52, 1) = ((MR_Box) (transform_hlds__stm_expand__V_53_53));
    }
    {
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_52_52, &transform_hlds__stm_expand__TrueGoal_19);
    }
    {
      transform_hlds__stm_expand__create_validate_exception_goal_7_p_0(transform_hlds__stm_expand__StmVar_9, transform_hlds__stm_expand__ExceptVar_8, transform_hlds__stm_expand__ReturnType_10, transform_hlds__stm_expand__RecCall_11, &transform_hlds__stm_expand__RethrowBranch_20, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_55_55);
    }
    {
      transform_hlds__stm_expand__create_retry_handler_branch_5_p_0(transform_hlds__stm_expand__StmVar_9, transform_hlds__stm_expand__RecCall_11, &transform_hlds__stm_expand__RetryBranch_21, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_55_55, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_56_56);
    }
    {
      transform_hlds__stm_expand__V_57_57 = parse_tree__builtin_lib_types__stm_rollback_retry_functor_0_f_0();
    }
    {
      transform_hlds__stm_expand__template_if_exceptres_is_cons_8_p_0(transform_hlds__stm_expand__TypeInfoRollbackVar_16, transform_hlds__stm_expand__ExceptUnivVar_14, transform_hlds__stm_expand__V_57_57, transform_hlds__stm_expand__RetryBranch_21, transform_hlds__stm_expand__RethrowBranch_20, &transform_hlds__stm_expand__FalseGoal_22, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_56_56, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_58_58);
    }
    {
      transform_hlds__stm_expand__V_59_59 = parse_tree__builtin_lib_types__stm_rollback_exception_functor_0_f_0();
    }
    {
      transform_hlds__stm_expand__template_if_exceptres_is_cons_8_p_0(transform_hlds__stm_expand__TypeInfoRollbackVar_16, transform_hlds__stm_expand__ExceptUnivVar_14, transform_hlds__stm_expand__V_59_59, transform_hlds__stm_expand__TrueGoal_19, transform_hlds__stm_expand__FalseGoal_22, &transform_hlds__stm_expand__IfThenElseGoal_23, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_58_58, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_25);
    }
    transform_hlds__stm_expand__TypeCtorInfo_67_67 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    {
      transform_hlds__stm_expand__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_62_62, 0) = ((MR_Box) (transform_hlds__stm_expand__DeconstructException_15));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_65_65, 0) = ((MR_Box) (transform_hlds__stm_expand__IfThenElseGoal_23));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_64_64 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_67_67, transform_hlds__stm_expand__TypeInfoRollbackAssign_17, transform_hlds__stm_expand__V_65_65);
    }
    {
      transform_hlds__stm_expand__V_61_61 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_67_67, transform_hlds__stm_expand__V_62_62, transform_hlds__stm_expand__V_64_64);
    }
    {
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_61_61, transform_hlds__stm_expand__Goal_12);
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_retry_handler_branch_5_p_0(
  MR_Word transform_hlds__stm_expand__StmVar_6,
  MR_Word transform_hlds__stm_expand__RecCall_7,
  MR_Word * transform_hlds__stm_expand__Goal_8,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_14,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_15)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__BlockGoal_10;
    MR_Word transform_hlds__stm_expand__UnlockGoal_11;
    MR_Word transform_hlds__stm_expand__LockAndValidateGoals_12;
    MR_Word transform_hlds__stm_expand__DropStateCall_13;
    MR_Word transform_hlds__stm_expand__V_16_16;
    MR_Word transform_hlds__stm_expand__V_22_22;
    MR_Word transform_hlds__stm_expand__V_24_24;
    MR_Word transform_hlds__stm_expand__V_27_27;
    MR_Word transform_hlds__stm_expand__V_35_35;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_36_36;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_38_38;
    MR_Word transform_hlds__stm_expand__V_39_39;
    MR_Word transform_hlds__stm_expand__V_47_47;
    MR_Word transform_hlds__stm_expand__V_50_50;
    MR_Word transform_hlds__stm_expand__V_51_51;
    MR_Word transform_hlds__stm_expand__V_56_56;
    MR_Word transform_hlds__stm_expand__V_57_57;
    MR_Word transform_hlds__stm_expand__V_58_58;
    MR_Word transform_hlds__stm_expand__Context_74;
    MR_Word transform_hlds__stm_expand__ModuleInfo_75;
    MR_Word transform_hlds__stm_expand__V_77_77;
    MR_Integer transform_hlds__stm_expand__V_78_78;
    MR_Word transform_hlds__stm_expand__V_79_79;
    MR_Word transform_hlds__stm_expand__V_80_80;
    MR_Integer transform_hlds__stm_expand__V_81_81;

    {
      transform_hlds__stm_expand__V_16_16 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_22_22, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVar_6));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_24_24 = hlds__instmap__instmap_delta_bind_var_1_f_0(transform_hlds__stm_expand__StmVar_6);
    }
    transform_hlds__stm_expand__ModuleInfo_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_14, (MR_Integer) 0)));
    transform_hlds__stm_expand__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_14, (MR_Integer) 1)));
    transform_hlds__stm_expand__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_14, (MR_Integer) 2)));
    transform_hlds__stm_expand__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_14, (MR_Integer) 3)));
    transform_hlds__stm_expand__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_14, (MR_Integer) 4)));
    transform_hlds__stm_expand__Context_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_14, (MR_Integer) 5)));
    transform_hlds__stm_expand__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_14, (MR_Integer) 6)));
    {
      hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__stm_expand__V_16_16, (MR_String) "stm_block", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__V_22_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_24_24, transform_hlds__stm_expand__ModuleInfo_75, transform_hlds__stm_expand__Context_74, &transform_hlds__stm_expand__BlockGoal_10);
    }
    {
      transform_hlds__stm_expand__V_27_27 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_35_35 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
    {
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_27_27, (MR_String) "stm_unlock", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_35_35, &transform_hlds__stm_expand__UnlockGoal_11, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_14, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_36_36);
    }
    {
      transform_hlds__stm_expand__template_lock_and_validate_7_p_0(transform_hlds__stm_expand__StmVar_6, (MR_Integer) 0, transform_hlds__stm_expand__BlockGoal_10, transform_hlds__stm_expand__UnlockGoal_11, &transform_hlds__stm_expand__LockAndValidateGoals_12, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_36_36, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_38_38);
    }
    {
      transform_hlds__stm_expand__V_39_39 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_51_51, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVar_6));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[8])));
    }
    {
      transform_hlds__stm_expand__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_50_50, 0) = ((MR_Box) (transform_hlds__stm_expand__V_51_51));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_47_47 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_50_50);
    }
    {
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_39_39, (MR_String) "stm_discard_transaction_log", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__V_22_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_47_47, &transform_hlds__stm_expand__DropStateCall_13, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_38_38, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_15);
    }
    {
      transform_hlds__stm_expand__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_58_58, 0) = ((MR_Box) (transform_hlds__stm_expand__RecCall_7));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_57_57, 0) = ((MR_Box) (transform_hlds__stm_expand__DropStateCall_13));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_57_57, 1) = ((MR_Box) (transform_hlds__stm_expand__V_58_58));
    }
    {
      transform_hlds__stm_expand__V_56_56 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__stm_expand__LockAndValidateGoals_12, transform_hlds__stm_expand__V_57_57);
    }
    {
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_56_56, transform_hlds__stm_expand__Goal_8);
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__stm_expand__create_validate_exception_goal_7_p_0_1(
  MR_Box transform_hlds__stm_expand__closure_arg)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;

    {
      transform_hlds__stm_expand__succeeded = transform_hlds__stm_expand__IntroducedFrom__pred__make_type_info__2387__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__closure, (MR_Integer) 4))));
    }
    return transform_hlds__stm_expand__succeeded;
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_validate_exception_goal_7_p_0(
  MR_Word transform_hlds__stm_expand__StmVar_8,
  MR_Word transform_hlds__stm_expand__ExceptionVar_9,
  MR_Word transform_hlds__stm_expand__ReturnType_10,
  MR_Word transform_hlds__stm_expand__RecursiveCall_11,
  MR_Word * transform_hlds__stm_expand__Goal_12,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_21,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_22)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__TypeInfoVar_14;
    MR_Word transform_hlds__stm_expand__CreateTypeInfoGoals_15;
    MR_Word transform_hlds__stm_expand__Goal_ExceptionThrow_Call_16;
    MR_Word transform_hlds__stm_expand__Goal_ValidBranch_17;
    MR_Word transform_hlds__stm_expand__DropStateCall_18;
    MR_Word transform_hlds__stm_expand__Goal_InvalidBranch_19;
    MR_Word transform_hlds__stm_expand__Goals_20;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_23_23;
    MR_Word transform_hlds__stm_expand__V_24_24;
    MR_Word transform_hlds__stm_expand__V_30_30;
    MR_Word transform_hlds__stm_expand__V_32_32;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33;
    MR_Word transform_hlds__stm_expand__V_34_34;
    MR_Word transform_hlds__stm_expand__V_39_39;
    MR_Word transform_hlds__stm_expand__V_40_40;
    MR_Word transform_hlds__stm_expand__V_42_42;
    MR_Word transform_hlds__stm_expand__V_48_48;
    MR_Word transform_hlds__stm_expand__V_50_50;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_51_51;
    MR_Word transform_hlds__stm_expand__V_53_53;
    MR_Word transform_hlds__stm_expand__V_54_54;
    MR_Word transform_hlds__stm_expand__V_59_59;
    MR_Word transform_hlds__stm_expand__V_60_60;
    MR_Word transform_hlds__stm_expand__ModuleInfo0_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_21, (MR_Integer) 0)));
    MR_Word transform_hlds__stm_expand__PredId_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_21, (MR_Integer) 1)));
    MR_Integer transform_hlds__stm_expand__ProcId_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_21, (MR_Integer) 2)));
    MR_Word transform_hlds__stm_expand__PredInfo0_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_21, (MR_Integer) 3)));
    MR_Word transform_hlds__stm_expand__ProcInfo0_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_21, (MR_Integer) 4)));
    MR_Word transform_hlds__stm_expand__Context_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_21, (MR_Integer) 5)));
    MR_Integer transform_hlds__stm_expand__VarCnt_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_21, (MR_Integer) 6)));
    MR_Word transform_hlds__stm_expand__PolyInfo0_77;
    MR_Word transform_hlds__stm_expand__PolyInfo_78;
    MR_Word transform_hlds__stm_expand__PolySpecs_79;
    MR_Word transform_hlds__stm_expand__PredInfo_80;
    MR_Word transform_hlds__stm_expand__ProcInfo_81;
    MR_Word transform_hlds__stm_expand__ModuleInfo_82;
    MR_Word transform_hlds__stm_expand__V_83_83;

    {
      check_hlds__polymorphism__create_poly_info_4_p_0(transform_hlds__stm_expand__ModuleInfo0_70, transform_hlds__stm_expand__PredInfo0_73, transform_hlds__stm_expand__ProcInfo0_74, &transform_hlds__stm_expand__PolyInfo0_77);
    }
    {
      check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(transform_hlds__stm_expand__ReturnType_10, transform_hlds__stm_expand__Context_75, &transform_hlds__stm_expand__TypeInfoVar_14, &transform_hlds__stm_expand__CreateTypeInfoGoals_15, transform_hlds__stm_expand__PolyInfo0_77, &transform_hlds__stm_expand__PolyInfo_78);
    }
    {
      check_hlds__polymorphism__poly_info_extract_7_p_0(transform_hlds__stm_expand__PolyInfo_78, &transform_hlds__stm_expand__PolySpecs_79, transform_hlds__stm_expand__PredInfo0_73, &transform_hlds__stm_expand__PredInfo_80, transform_hlds__stm_expand__ProcInfo0_74, &transform_hlds__stm_expand__ProcInfo_81, &transform_hlds__stm_expand__ModuleInfo_82);
    }
    {
      transform_hlds__stm_expand__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_83_83, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_83_83, 1) = ((MR_Box) (transform_hlds__stm_expand__create_validate_exception_goal_7_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_83_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_83_83, 3) = ((MR_Box) (transform_hlds__stm_expand__PolySpecs_79));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_83_83, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mercury__require__expect_4_p_0(transform_hlds__stm_expand__V_83_83, (MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.make_type_info\'/5", (MR_String) "got errors while making type_info_var");
    }
    {
      transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_23_23, 0) = ((MR_Box) (transform_hlds__stm_expand__ModuleInfo_82));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_23_23, 1) = ((MR_Box) (transform_hlds__stm_expand__PredId_71));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_23_23, 2) = ((MR_Box) (transform_hlds__stm_expand__ProcId_72));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_23_23, 3) = ((MR_Box) (transform_hlds__stm_expand__PredInfo_80));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_23_23, 4) = ((MR_Box) (transform_hlds__stm_expand__ProcInfo_81));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_23_23, 5) = ((MR_Box) (transform_hlds__stm_expand__Context_75));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_23_23, 6) = ((MR_Box) (transform_hlds__stm_expand__VarCnt_76));
    }
    {
      transform_hlds__stm_expand__V_24_24 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_34_34, 0) = ((MR_Box) (transform_hlds__stm_expand__ExceptionVar_9));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_30_30, 0) = ((MR_Box) (transform_hlds__stm_expand__TypeInfoVar_14));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_30_30, 1) = ((MR_Box) (transform_hlds__stm_expand__V_34_34));
    }
    {
      transform_hlds__stm_expand__V_32_32 = hlds__instmap__instmap_delta_bind_vars_1_f_0(transform_hlds__stm_expand__V_30_30);
    }
    {
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_24_24, (MR_String) "rethrow", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 6, (MR_Integer) 0, transform_hlds__stm_expand__V_30_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_32_32, &transform_hlds__stm_expand__Goal_ExceptionThrow_Call_16, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_23_23, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33);
    }
    {
      transform_hlds__stm_expand__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_40_40, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_ExceptionThrow_Call_16));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_39_39 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__stm_expand__CreateTypeInfoGoals_15, transform_hlds__stm_expand__V_40_40);
    }
    {
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_39_39, &transform_hlds__stm_expand__Goal_ValidBranch_17);
    }
    {
      transform_hlds__stm_expand__V_42_42 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_48_48, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVar_8));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_54_54, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVar_8));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[8])));
    }
    {
      transform_hlds__stm_expand__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_53_53, 0) = ((MR_Box) (transform_hlds__stm_expand__V_54_54));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_50_50 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_53_53);
    }
    {
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_42_42, (MR_String) "stm_discard_transaction_log", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__V_48_48, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_50_50, &transform_hlds__stm_expand__DropStateCall_18, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_51_51);
    }
    {
      transform_hlds__stm_expand__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_60_60, 0) = ((MR_Box) (transform_hlds__stm_expand__RecursiveCall_11));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_59_59, 0) = ((MR_Box) (transform_hlds__stm_expand__DropStateCall_18));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_59_59, 1) = ((MR_Box) (transform_hlds__stm_expand__V_60_60));
    }
    {
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_59_59, &transform_hlds__stm_expand__Goal_InvalidBranch_19);
    }
    {
      transform_hlds__stm_expand__template_lock_and_validate_7_p_0(transform_hlds__stm_expand__StmVar_8, (MR_Integer) 1, transform_hlds__stm_expand__Goal_ValidBranch_17, transform_hlds__stm_expand__Goal_InvalidBranch_19, &transform_hlds__stm_expand__Goals_20, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_51_51, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_22);
    }
    {
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__Goals_20, transform_hlds__stm_expand__Goal_12);
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_many_7_p_0_2(
  MR_Box transform_hlds__stm_expand__closure_arg,
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2,
  MR_Box transform_hlds__stm_expand__wrapper_arg_3,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_4)
{
  {
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
    MR_Word transform_hlds__stm_expand__conv5_LambdaHeadVar__2_80;
    MR_Word transform_hlds__stm_expand__conv4_LambdaHeadVar__4_82;

    {
      transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__1006__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), &transform_hlds__stm_expand__conv5_LambdaHeadVar__2_80, ((MR_Word) transform_hlds__stm_expand__wrapper_arg_3), &transform_hlds__stm_expand__conv4_LambdaHeadVar__4_82);
    }
    *transform_hlds__stm_expand__wrapper_arg_2 = ((MR_Box) (transform_hlds__stm_expand__conv5_LambdaHeadVar__2_80));
    *transform_hlds__stm_expand__wrapper_arg_4 = ((MR_Box) (transform_hlds__stm_expand__conv4_LambdaHeadVar__4_82));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_many_7_p_0_1(
  MR_Box transform_hlds__stm_expand__closure_arg,
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_3,
  MR_Box transform_hlds__stm_expand__wrapper_arg_4,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
    MR_Word transform_hlds__stm_expand__conv2_LambdaHeadVar__2_51;
    MR_Word transform_hlds__stm_expand__conv1_LambdaHeadVar__3_52;
    MR_Word transform_hlds__stm_expand__conv0_LambdaHeadVar__5_54;

    {
      transform_hlds__stm_expand__IntroducedFrom__pred__template_lock_and_validate_many__991__1_5_p_0(((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), &transform_hlds__stm_expand__conv2_LambdaHeadVar__2_51, &transform_hlds__stm_expand__conv1_LambdaHeadVar__3_52, ((MR_Word) transform_hlds__stm_expand__wrapper_arg_4), &transform_hlds__stm_expand__conv0_LambdaHeadVar__5_54);
    }
    *transform_hlds__stm_expand__wrapper_arg_2 = ((MR_Box) (transform_hlds__stm_expand__conv2_LambdaHeadVar__2_51));
    *transform_hlds__stm_expand__wrapper_arg_3 = ((MR_Box) (transform_hlds__stm_expand__conv1_LambdaHeadVar__3_52));
    *transform_hlds__stm_expand__wrapper_arg_5 = ((MR_Box) (transform_hlds__stm_expand__conv0_LambdaHeadVar__5_54));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_many_7_p_0(
  MR_Word transform_hlds__stm_expand__StmVars_8,
  MR_Word transform_hlds__stm_expand__UnlockAfterwards_9,
  MR_Word transform_hlds__stm_expand__ValidGoal_10,
  MR_Word transform_hlds__stm_expand__InvalidGoal_11,
  MR_Word * transform_hlds__stm_expand__Goals_12,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_33,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__TypeInfo_119_119;
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_120_120;
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_121_121;
    MR_Word transform_hlds__stm_expand__AssignValidConst_14;
    MR_Word transform_hlds__stm_expand__IsValidConstVar_15;
    MR_Word transform_hlds__stm_expand__LockCall_16;
    MR_Word transform_hlds__stm_expand__ValidCalls_24;
    MR_Word transform_hlds__stm_expand__IsValidVars_25;
    MR_Word transform_hlds__stm_expand__CreateValidTests_26;
    MR_Word transform_hlds__stm_expand__TestValidGoals_29;
    MR_Word transform_hlds__stm_expand__TestValidCond_30;
    MR_Word transform_hlds__stm_expand__ITEGoal_31;
    MR_Word transform_hlds__stm_expand__V_35_35;
    MR_Word transform_hlds__stm_expand__V_36_36;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_38_38;
    MR_Word transform_hlds__stm_expand__V_40_40;
    MR_Word transform_hlds__stm_expand__V_48_48;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_49_49;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_78_78;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_86_86;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_90_90;
    MR_Box transform_hlds__stm_expand__conv3_STATE_VARIABLE_NewPredInfo_78_78;
    MR_Box transform_hlds__stm_expand__conv6_STATE_VARIABLE_NewPredInfo_86_86;

    {
      transform_hlds__stm_expand__V_35_35 = parse_tree__builtin_lib_types__stm_validres_valid_functor_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_36_36 = parse_tree__builtin_lib_types__stm_valid_result_type_0_f_0();
    }
    {
      transform_hlds__stm_expand__create_aux_variable_assignment_7_p_0(transform_hlds__stm_expand__V_35_35, transform_hlds__stm_expand__V_36_36, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[4]), &transform_hlds__stm_expand__AssignValidConst_14, &transform_hlds__stm_expand__IsValidConstVar_15, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_33, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_38_38);
    }
    {
      transform_hlds__stm_expand__V_40_40 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_48_48 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
    {
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_40_40, (MR_String) "stm_lock", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_48_48, &transform_hlds__stm_expand__LockCall_16, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_38_38, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_49_49);
    }
    transform_hlds__stm_expand__TypeInfo_119_119 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0];
    transform_hlds__stm_expand__TypeCtorInfo_120_120 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    transform_hlds__stm_expand__TypeCtorInfo_121_121 = (MR_Word) &transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0;
    {
      mercury__list__map2_foldl_6_p_0(transform_hlds__stm_expand__TypeInfo_119_119, transform_hlds__stm_expand__TypeCtorInfo_120_120, transform_hlds__stm_expand__TypeInfo_119_119, transform_hlds__stm_expand__TypeCtorInfo_121_121, (MR_Word) &transform_hlds__stm_expand_scalar_common_2[7], transform_hlds__stm_expand__StmVars_8, &transform_hlds__stm_expand__ValidCalls_24, &transform_hlds__stm_expand__IsValidVars_25, ((MR_Box) (transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_49_49)), &transform_hlds__stm_expand__conv3_STATE_VARIABLE_NewPredInfo_78_78);
    }
    transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_78_78 = ((MR_Word) transform_hlds__stm_expand__conv3_STATE_VARIABLE_NewPredInfo_78_78);
    {
      transform_hlds__stm_expand__CreateValidTests_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__CreateValidTests_26, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__CreateValidTests_26, 1) = ((MR_Box) (transform_hlds__stm_expand__template_lock_and_validate_many_7_p_0_2));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__CreateValidTests_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__CreateValidTests_26, 3) = ((MR_Box) (transform_hlds__stm_expand__IsValidConstVar_15));
    }
    {
      mercury__list__map_foldl_5_p_0(transform_hlds__stm_expand__TypeInfo_119_119, transform_hlds__stm_expand__TypeCtorInfo_120_120, transform_hlds__stm_expand__TypeCtorInfo_121_121, transform_hlds__stm_expand__CreateValidTests_26, transform_hlds__stm_expand__IsValidVars_25, &transform_hlds__stm_expand__TestValidGoals_29, ((MR_Box) (transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_78_78)), &transform_hlds__stm_expand__conv6_STATE_VARIABLE_NewPredInfo_86_86);
    }
    transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_86_86 = ((MR_Word) transform_hlds__stm_expand__conv6_STATE_VARIABLE_NewPredInfo_86_86);
    {
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__TestValidGoals_29, &transform_hlds__stm_expand__TestValidCond_30);
    }
    {
      transform_hlds__stm_expand__create_if_then_else_9_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__TestValidCond_30, transform_hlds__stm_expand__ValidGoal_10, transform_hlds__stm_expand__InvalidGoal_11, (MR_Integer) 4, (MR_Integer) 2, &transform_hlds__stm_expand__ITEGoal_31, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_86_86, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_90_90);
    }
    switch (transform_hlds__stm_expand__UnlockAfterwards_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__stm_expand__V_91_91;
          MR_Word transform_hlds__stm_expand__V_92_92;
          MR_Word transform_hlds__stm_expand__V_93_93;

          {
            transform_hlds__stm_expand__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_92_92, 0) = ((MR_Box) (transform_hlds__stm_expand__LockCall_16));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_92_92, 1) = ((MR_Box) (transform_hlds__stm_expand__ValidCalls_24));
          }
          {
            transform_hlds__stm_expand__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_91_91, 0) = ((MR_Box) (transform_hlds__stm_expand__AssignValidConst_14));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_91_91, 1) = ((MR_Box) (transform_hlds__stm_expand__V_92_92));
          }
          {
            transform_hlds__stm_expand__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_93_93, 0) = ((MR_Box) (transform_hlds__stm_expand__ITEGoal_31));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            *transform_hlds__stm_expand__Goals_12 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_120_120, transform_hlds__stm_expand__V_91_91, transform_hlds__stm_expand__V_93_93);
          }
          *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_90_90;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__stm_expand__UnlockCall_32;
          MR_Word transform_hlds__stm_expand__V_95_95;
          MR_Word transform_hlds__stm_expand__V_103_103;
          MR_Word transform_hlds__stm_expand__V_105_105;
          MR_Word transform_hlds__stm_expand__V_106_106;
          MR_Word transform_hlds__stm_expand__V_107_107;
          MR_Word transform_hlds__stm_expand__V_108_108;

          {
            transform_hlds__stm_expand__V_95_95 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
          }
          {
            transform_hlds__stm_expand__V_103_103 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
          {
            transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_95_95, (MR_String) "stm_unlock", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_103_103, &transform_hlds__stm_expand__UnlockCall_32, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_90_90, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34);
          }
          {
            transform_hlds__stm_expand__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_106_106, 0) = ((MR_Box) (transform_hlds__stm_expand__LockCall_16));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_106_106, 1) = ((MR_Box) (transform_hlds__stm_expand__ValidCalls_24));
          }
          {
            transform_hlds__stm_expand__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_105_105, 0) = ((MR_Box) (transform_hlds__stm_expand__AssignValidConst_14));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_105_105, 1) = ((MR_Box) (transform_hlds__stm_expand__V_106_106));
          }
          {
            transform_hlds__stm_expand__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_108_108, 0) = ((MR_Box) (transform_hlds__stm_expand__ITEGoal_31));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            transform_hlds__stm_expand__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_107_107, 0) = ((MR_Box) (transform_hlds__stm_expand__UnlockCall_32));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_107_107, 1) = ((MR_Box) (transform_hlds__stm_expand__V_108_108));
          }
          {
            *transform_hlds__stm_expand__Goals_12 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_120_120, transform_hlds__stm_expand__V_105_105, transform_hlds__stm_expand__V_107_107);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__template_lock_and_validate_7_p_0(
  MR_Word transform_hlds__stm_expand__StmVar_8,
  MR_Word transform_hlds__stm_expand__UnlockAfterwards_9,
  MR_Word transform_hlds__stm_expand__ValidGoal_10,
  MR_Word transform_hlds__stm_expand__InvalidGoal_11,
  MR_Word * transform_hlds__stm_expand__Goals_12,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_19,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_20)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__IsValidVar_14;
    MR_Word transform_hlds__stm_expand__LockCall_15;
    MR_Word transform_hlds__stm_expand__ValidCall_16;
    MR_Word transform_hlds__stm_expand__DisjGoal_17;
    MR_Word transform_hlds__stm_expand__V_21_21;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_23_23;
    MR_Word transform_hlds__stm_expand__V_25_25;
    MR_Word transform_hlds__stm_expand__V_33_33;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34;
    MR_Word transform_hlds__stm_expand__V_35_35;
    MR_Word transform_hlds__stm_expand__V_41_41;
    MR_Word transform_hlds__stm_expand__V_43_43;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44;
    MR_Word transform_hlds__stm_expand__V_45_45;
    MR_Word transform_hlds__stm_expand__V_47_47;
    MR_Word transform_hlds__stm_expand__V_48_48;
    MR_Word transform_hlds__stm_expand__V_52_52;
    MR_Word transform_hlds__stm_expand__V_53_53;
    MR_Word transform_hlds__stm_expand__V_56_56;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_59_59;
    MR_Word transform_hlds__stm_expand__V_60_60;
    MR_Word transform_hlds__stm_expand__V_61_61;
    MR_Word transform_hlds__stm_expand__V_63_63;
    MR_Word transform_hlds__stm_expand__V_64_64;
    MR_Word transform_hlds__stm_expand__V_65_65;

    {
      transform_hlds__stm_expand__V_21_21 = parse_tree__builtin_lib_types__stm_valid_result_type_0_f_0();
    }
    {
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_21_21, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[3]), &transform_hlds__stm_expand__IsValidVar_14, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_19, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_23_23);
    }
    {
      transform_hlds__stm_expand__V_25_25 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_33_33 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
    {
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_25_25, (MR_String) "stm_lock", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_33_33, &transform_hlds__stm_expand__LockCall_15, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_23_23, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34);
    }
    {
      transform_hlds__stm_expand__V_35_35 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_45_45, 0) = ((MR_Box) (transform_hlds__stm_expand__IsValidVar_14));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVar_8));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 1) = ((MR_Box) (transform_hlds__stm_expand__V_45_45));
    }
    {
      transform_hlds__stm_expand__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_48_48, 0) = ((MR_Box) (transform_hlds__stm_expand__StmVar_8));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[6])));
    }
    {
      transform_hlds__stm_expand__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_53_53, 0) = ((MR_Box) (transform_hlds__stm_expand__IsValidVar_14));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_52_52, 0) = ((MR_Box) (transform_hlds__stm_expand__V_53_53));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_47_47, 0) = ((MR_Box) (transform_hlds__stm_expand__V_48_48));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_47_47, 1) = ((MR_Box) (transform_hlds__stm_expand__V_52_52));
    }
    {
      transform_hlds__stm_expand__V_43_43 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_47_47);
    }
    {
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_35_35, (MR_String) "stm_validate", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__V_41_41, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_43_43, &transform_hlds__stm_expand__ValidCall_16, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_34_34, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44);
    }
    {
      transform_hlds__stm_expand__V_61_61 = parse_tree__builtin_lib_types__stm_validres_valid_functor_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_60_60, 0) = ((MR_Box) (transform_hlds__stm_expand__V_61_61));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_60_60, 2) = ((MR_Box) (transform_hlds__stm_expand__ValidGoal_10));
    }
    {
      transform_hlds__stm_expand__V_65_65 = parse_tree__builtin_lib_types__stm_validres_invalid_functor_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_64_64, 0) = ((MR_Box) (transform_hlds__stm_expand__V_65_65));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_64_64, 2) = ((MR_Box) (transform_hlds__stm_expand__InvalidGoal_11));
    }
    {
      transform_hlds__stm_expand__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_63_63, 0) = ((MR_Box) (transform_hlds__stm_expand__V_64_64));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_56_56, 0) = ((MR_Box) (transform_hlds__stm_expand__V_60_60));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_56_56, 1) = ((MR_Box) (transform_hlds__stm_expand__V_63_63));
    }
    {
      transform_hlds__stm_expand__create_switch_disjunction_7_p_0(transform_hlds__stm_expand__IsValidVar_14, transform_hlds__stm_expand__V_56_56, (MR_Integer) 0, (MR_Integer) 2, &transform_hlds__stm_expand__DisjGoal_17, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_59_59);
    }
    switch (transform_hlds__stm_expand__UnlockAfterwards_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__stm_expand__V_68_68;
          MR_Word transform_hlds__stm_expand__V_69_69;

          {
            transform_hlds__stm_expand__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_69_69, 0) = ((MR_Box) (transform_hlds__stm_expand__DisjGoal_17));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            transform_hlds__stm_expand__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_68_68, 0) = ((MR_Box) (transform_hlds__stm_expand__ValidCall_16));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_68_68, 1) = ((MR_Box) (transform_hlds__stm_expand__V_69_69));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *transform_hlds__stm_expand__Goals_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__LockCall_15));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_68_68));
          }
          *transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_20 = transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_59_59;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__stm_expand__UnlockCall_18;
          MR_Word transform_hlds__stm_expand__V_71_71;
          MR_Word transform_hlds__stm_expand__V_79_79;
          MR_Word transform_hlds__stm_expand__V_81_81;
          MR_Word transform_hlds__stm_expand__V_82_82;
          MR_Word transform_hlds__stm_expand__V_83_83;

          {
            transform_hlds__stm_expand__V_71_71 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
          }
          {
            transform_hlds__stm_expand__V_79_79 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          }
          {
            transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_71_71, (MR_String) "stm_unlock", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_79_79, &transform_hlds__stm_expand__UnlockCall_18, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_59_59, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_20);
          }
          {
            transform_hlds__stm_expand__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_83_83, 0) = ((MR_Box) (transform_hlds__stm_expand__DisjGoal_17));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            transform_hlds__stm_expand__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_82_82, 0) = ((MR_Box) (transform_hlds__stm_expand__UnlockCall_18));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_82_82, 1) = ((MR_Box) (transform_hlds__stm_expand__V_83_83));
          }
          {
            transform_hlds__stm_expand__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_81_81, 0) = ((MR_Box) (transform_hlds__stm_expand__ValidCall_16));
            MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_81_81, 1) = ((MR_Box) (transform_hlds__stm_expand__V_82_82));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *transform_hlds__stm_expand__Goals_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__LockCall_15));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_81_81));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__template_if_exceptres_is_cons_8_p_0(
  MR_Word transform_hlds__stm_expand__RttiVar_9,
  MR_Word transform_hlds__stm_expand__ExceptVar_10,
  MR_Word transform_hlds__stm_expand__RollbackExceptCons_11,
  MR_Word transform_hlds__stm_expand__TrueGoal_12,
  MR_Word transform_hlds__stm_expand__FalseGoal_13,
  MR_Word * transform_hlds__stm_expand__Goal_14,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_26)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__UnivPayloadVar_16;
    MR_Word transform_hlds__stm_expand__AssignGoal_17;
    MR_Word transform_hlds__stm_expand__RollbackExceptVar_18;
    MR_Word transform_hlds__stm_expand__UnivCall_19;
    MR_Word transform_hlds__stm_expand__TestGoal_21;
    MR_Word transform_hlds__stm_expand__CondGoal_22;
    MR_Word transform_hlds__stm_expand__V_27_27;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29_29;
    MR_Word transform_hlds__stm_expand__V_31_31;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33;
    MR_Word transform_hlds__stm_expand__V_35_35;
    MR_Word transform_hlds__stm_expand__V_41_41;
    MR_Word transform_hlds__stm_expand__V_43_43;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44;
    MR_Word transform_hlds__stm_expand__V_46_46;
    MR_Word transform_hlds__stm_expand__V_47_47;
    MR_Word transform_hlds__stm_expand__V_49_49;
    MR_Word transform_hlds__stm_expand__V_50_50;
    MR_Word transform_hlds__stm_expand__V_51_51;
    MR_Word transform_hlds__stm_expand__V_54_54;
    MR_Word transform_hlds__stm_expand__V_55_55;
    MR_Word transform_hlds__stm_expand__V_59_59;
    MR_Word transform_hlds__stm_expand__V_60_60;
    MR_Word transform_hlds__stm_expand__V_63_63;
    MR_Word transform_hlds__stm_expand__V_69_69;
    MR_Word transform_hlds__stm_expand__V_71_71;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_72_72;
    MR_Word transform_hlds__stm_expand__V_73_73;
    MR_Word transform_hlds__stm_expand__V_74_74;
    MR_Word transform_hlds__stm_expand__V_76_76;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_77_77;
    MR_Word transform_hlds__stm_expand__V_78_78;
    MR_Word transform_hlds__stm_expand__V_79_79;
    MR_Word transform_hlds__stm_expand__V_80_80;
    MR_Word transform_hlds__stm_expand__V_81_81;
    MR_Word transform_hlds__stm_expand__V_82_82;
    MR_Word transform_hlds__stm_expand___UnifyCall_20;

    {
      transform_hlds__stm_expand__V_27_27 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    }
    {
      transform_hlds__stm_expand__create_aux_variable_5_p_0(transform_hlds__stm_expand__V_27_27, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[0]), &transform_hlds__stm_expand__UnivPayloadVar_16, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_0_25, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29_29);
    }
    {
      transform_hlds__stm_expand__V_31_31 = parse_tree__builtin_lib_types__stm_rollback_exception_type_0_f_0();
    }
    {
      transform_hlds__stm_expand__create_aux_variable_assignment_7_p_0(transform_hlds__stm_expand__RollbackExceptCons_11, transform_hlds__stm_expand__V_31_31, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[1]), &transform_hlds__stm_expand__AssignGoal_17, &transform_hlds__stm_expand__RollbackExceptVar_18, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_29_29, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33);
    }
    {
      transform_hlds__stm_expand__V_35_35 = mdbcomp__builtin_modules__mercury_univ_module_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_47_47, 0) = ((MR_Box) (transform_hlds__stm_expand__ExceptVar_10));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 0) = ((MR_Box) (transform_hlds__stm_expand__UnivPayloadVar_16));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 1) = ((MR_Box) (transform_hlds__stm_expand__V_47_47));
    }
    {
      transform_hlds__stm_expand__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 0) = ((MR_Box) (transform_hlds__stm_expand__RttiVar_9));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 1) = ((MR_Box) (transform_hlds__stm_expand__V_46_46));
    }
    transform_hlds__stm_expand__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__stm_expand_scalar_common_2[5]);
    {
      transform_hlds__stm_expand__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_50_50, 0) = ((MR_Box) (transform_hlds__stm_expand__RttiVar_9));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_50_50, 1) = ((MR_Box) (transform_hlds__stm_expand__V_51_51));
    }
    {
      transform_hlds__stm_expand__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_55_55, 0) = ((MR_Box) (transform_hlds__stm_expand__ExceptVar_10));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_55_55, 1) = ((MR_Box) (transform_hlds__stm_expand__V_51_51));
    }
    {
      transform_hlds__stm_expand__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_60_60, 0) = ((MR_Box) (transform_hlds__stm_expand__UnivPayloadVar_16));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_59_59, 0) = ((MR_Box) (transform_hlds__stm_expand__V_60_60));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_54_54, 0) = ((MR_Box) (transform_hlds__stm_expand__V_55_55));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_54_54, 1) = ((MR_Box) (transform_hlds__stm_expand__V_59_59));
    }
    {
      transform_hlds__stm_expand__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_49_49, 0) = ((MR_Box) (transform_hlds__stm_expand__V_50_50));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_49_49, 1) = ((MR_Box) (transform_hlds__stm_expand__V_54_54));
    }
    {
      transform_hlds__stm_expand__V_43_43 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(transform_hlds__stm_expand__V_49_49);
    }
    {
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_35_35, (MR_String) "type_to_univ", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__stm_expand_scalar_common_6[2]), (MR_Integer) 1, (MR_Integer) 0, transform_hlds__stm_expand__V_41_41, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_43_43, &transform_hlds__stm_expand__UnivCall_19, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_33_33, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44);
    }
    {
      transform_hlds__stm_expand__V_63_63 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_74_74, 0) = ((MR_Box) (transform_hlds__stm_expand__UnivPayloadVar_16));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_73_73, 0) = ((MR_Box) (transform_hlds__stm_expand__RollbackExceptVar_18));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_73_73, 1) = ((MR_Box) (transform_hlds__stm_expand__V_74_74));
    }
    {
      transform_hlds__stm_expand__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_69_69, 0) = ((MR_Box) (transform_hlds__stm_expand__RttiVar_9));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_69_69, 1) = ((MR_Box) (transform_hlds__stm_expand__V_73_73));
    }
    {
      transform_hlds__stm_expand__V_71_71 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
    {
      transform_hlds__stm_expand__create_simple_call_12_p_0(transform_hlds__stm_expand__V_63_63, (MR_String) "unify", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 1, (MR_Integer) 0, transform_hlds__stm_expand__V_69_69, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__V_71_71, &transform_hlds__stm_expand___UnifyCall_20, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_44_44, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_72_72);
    }
    {
      transform_hlds__stm_expand__V_78_78 = parse_tree__prog_mode__in_mode_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_79_79 = parse_tree__prog_mode__in_mode_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_76_76, 0) = ((MR_Box) (transform_hlds__stm_expand__V_78_78));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_76_76, 1) = ((MR_Box) (transform_hlds__stm_expand__V_79_79));
    }
    {
      transform_hlds__stm_expand__create_var_test_6_p_0(transform_hlds__stm_expand__UnivPayloadVar_16, transform_hlds__stm_expand__RollbackExceptVar_18, transform_hlds__stm_expand__V_76_76, &transform_hlds__stm_expand__TestGoal_21, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_72_72, &transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_77_77);
    }
    {
      transform_hlds__stm_expand__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_82_82, 0) = ((MR_Box) (transform_hlds__stm_expand__TestGoal_21));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_81_81, 0) = ((MR_Box) (transform_hlds__stm_expand__UnivCall_19));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_81_81, 1) = ((MR_Box) (transform_hlds__stm_expand__V_82_82));
    }
    {
      transform_hlds__stm_expand__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_80_80, 0) = ((MR_Box) (transform_hlds__stm_expand__AssignGoal_17));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_80_80, 1) = ((MR_Box) (transform_hlds__stm_expand__V_81_81));
    }
    {
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_80_80, &transform_hlds__stm_expand__CondGoal_22);
    }
    {
      transform_hlds__stm_expand__create_if_then_else_9_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__stm_expand__CondGoal_22, transform_hlds__stm_expand__TrueGoal_12, transform_hlds__stm_expand__FalseGoal_13, (MR_Integer) 0, (MR_Integer) 2, transform_hlds__stm_expand__Goal_14, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_77_77, transform_hlds__stm_expand__STATE_VARIABLE_NewPredInfo_26);
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_top_level_pred_8_p_0_1(
  MR_Box transform_hlds__stm_expand__closure_arg,
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
    MR_Word transform_hlds__stm_expand__conv0_LambdaHeadVar__2_12;

    {
      transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__583__1_2_p_0(((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), &transform_hlds__stm_expand__conv0_LambdaHeadVar__2_12);
    }
    *transform_hlds__stm_expand__wrapper_arg_2 = ((MR_Box) (transform_hlds__stm_expand__conv0_LambdaHeadVar__2_12));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__create_top_level_pred_8_p_0(
  MR_Word transform_hlds__stm_expand__AtomicGoalVarList_9,
  MR_Word transform_hlds__stm_expand__OuterDI_10,
  MR_Word transform_hlds__stm_expand__OuterUO_11,
  MR_Word transform_hlds__stm_expand__AtomicGoal_12,
  MR_Word transform_hlds__stm_expand__OrElseGoals_13,
  MR_Word * transform_hlds__stm_expand__Goal_14,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_30,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_31)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__TypeInfo_62_62;
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_63_63;
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_64_64;
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_24_86;
    MR_Word transform_hlds__stm_expand__WrapperCall_16;
    MR_Word transform_hlds__stm_expand__AtomicGoalVars_17;
    MR_Word transform_hlds__stm_expand__InputVars_18;
    MR_Word transform_hlds__stm_expand__OutputVars_19;
    MR_Word transform_hlds__stm_expand__InputTypes_20;
    MR_Word transform_hlds__stm_expand__OutputTypes_21;
    MR_Word transform_hlds__stm_expand__InputModes_22;
    MR_Word transform_hlds__stm_expand__OutputModes_23;
    MR_Word transform_hlds__stm_expand__NewPredInfo0_24;
    MR_Word transform_hlds__stm_expand__CopyIOAssign_25;
    MR_Word transform_hlds__stm_expand__NewPredInfo1_26;
    MR_Word transform_hlds__stm_expand__TopLevelGoal_27;
    MR_Word transform_hlds__stm_expand__NewPredInfo2_28;
    MR_Word transform_hlds__stm_expand__NewPredInfo_29;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_32_32;
    MR_Word transform_hlds__stm_expand__V_33_33;
    MR_Word transform_hlds__stm_expand__V_34_34;
    MR_Word transform_hlds__stm_expand__V_35_35;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_38_38;
    MR_Word transform_hlds__stm_expand__V_39_39;
    MR_Word transform_hlds__stm_expand__V_40_40;
    MR_Word transform_hlds__stm_expand__V_41_41;
    MR_Word transform_hlds__stm_expand__V_43_43;
    MR_Word transform_hlds__stm_expand__V_44_44;
    MR_Word transform_hlds__stm_expand__V_45_45;
    MR_Word transform_hlds__stm_expand__V_46_46;
    MR_Word transform_hlds__stm_expand__V_47_47;
    MR_Word transform_hlds__stm_expand__V_49_49;
    MR_Word transform_hlds__stm_expand__V_50_50;
    MR_Word transform_hlds__stm_expand__V_51_51;
    MR_Word transform_hlds__stm_expand__V_52_52;
    MR_Word transform_hlds__stm_expand__V_53_53;
    MR_Word transform_hlds__stm_expand__V_55_55;
    MR_Word transform_hlds__stm_expand__V_56_56;
    MR_Word transform_hlds__stm_expand__V_57_57;
    MR_Word transform_hlds__stm_expand__V_58_58;
    MR_Word transform_hlds__stm_expand__V_59_59;
    MR_Word transform_hlds__stm_expand__InputVarList_70;
    MR_Word transform_hlds__stm_expand__InputVars_71;
    MR_Word transform_hlds__stm_expand__GoalVar0_72;
    MR_Box transform_hlds__stm_expand__conv1_GoalVar0_72;
    MR_Word transform_hlds__stm_expand__V_82_82;
    MR_Word transform_hlds__stm_expand__V_83_83;
    MR_Word transform_hlds__stm_expand__V_84_84;
    MR_Word transform_hlds__stm_expand__V_85_85;
    MR_Word transform_hlds__stm_expand__V_81_81;

    {
      transform_hlds__stm_expand__create_rollback_pred_6_p_0(transform_hlds__stm_expand__AtomicGoalVarList_9, &transform_hlds__stm_expand__WrapperCall_16, transform_hlds__stm_expand__AtomicGoal_12, transform_hlds__stm_expand__OrElseGoals_13, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_30, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_32_32);
    }
    transform_hlds__stm_expand__TypeCtorInfo_24_86 = (MR_Word) &transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0;
    {
      mercury__list__map_3_p_0(transform_hlds__stm_expand__TypeCtorInfo_24_86, (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1], (MR_Word) &transform_hlds__stm_expand_scalar_common_2[4], transform_hlds__stm_expand__AtomicGoalVarList_9, &transform_hlds__stm_expand__InputVarList_70);
    }
    {
      transform_hlds__stm_expand__InputVars_71 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__stm_expand__InputVarList_70);
    }
    {
      transform_hlds__stm_expand__conv1_GoalVar0_72 = mercury__list__det_head_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_24_86, transform_hlds__stm_expand__AtomicGoalVarList_9);
    }
    transform_hlds__stm_expand__GoalVar0_72 = ((MR_Word) transform_hlds__stm_expand__conv1_GoalVar0_72);
    transform_hlds__stm_expand__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_72, (MR_Integer) 0)));
    transform_hlds__stm_expand__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_72, (MR_Integer) 1)));
    transform_hlds__stm_expand__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_72, (MR_Integer) 2)));
    transform_hlds__stm_expand__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_72, (MR_Integer) 3)));
    transform_hlds__stm_expand__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_72, (MR_Integer) 4)));
    {
      transform_hlds__stm_expand__AtomicGoalVars_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_17, 0) = ((MR_Box) (transform_hlds__stm_expand__InputVars_71));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_17, 1) = ((MR_Box) (transform_hlds__stm_expand__V_82_82));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_17, 2) = ((MR_Box) (transform_hlds__stm_expand__V_83_83));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_17, 3) = ((MR_Box) (transform_hlds__stm_expand__V_84_84));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__AtomicGoalVars_17, 4) = ((MR_Box) (transform_hlds__stm_expand__V_85_85));
    }
    {
      transform_hlds__stm_expand__get_input_output_varlist_3_p_0(transform_hlds__stm_expand__AtomicGoalVars_17, &transform_hlds__stm_expand__InputVars_18, &transform_hlds__stm_expand__OutputVars_19);
    }
    {
      transform_hlds__stm_expand__get_input_output_types_4_p_0(transform_hlds__stm_expand__AtomicGoalVars_17, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_32_32, &transform_hlds__stm_expand__InputTypes_20, &transform_hlds__stm_expand__OutputTypes_21);
    }
    {
      transform_hlds__stm_expand__get_input_output_modes_3_p_0(transform_hlds__stm_expand__AtomicGoalVars_17, &transform_hlds__stm_expand__InputModes_22, &transform_hlds__stm_expand__OutputModes_23);
    }
    transform_hlds__stm_expand__TypeInfo_62_62 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[0];
    {
      transform_hlds__stm_expand__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 0) = ((MR_Box) (transform_hlds__stm_expand__OuterUO_11));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_40_40, 0) = ((MR_Box) (transform_hlds__stm_expand__OuterDI_10));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_40_40, 1) = ((MR_Box) (transform_hlds__stm_expand__V_41_41));
    }
    {
      transform_hlds__stm_expand__V_39_39 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeInfo_62_62, transform_hlds__stm_expand__OutputVars_19, transform_hlds__stm_expand__V_40_40);
    }
    {
      transform_hlds__stm_expand__V_33_33 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeInfo_62_62, transform_hlds__stm_expand__InputVars_18, transform_hlds__stm_expand__V_39_39);
    }
    transform_hlds__stm_expand__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    {
      transform_hlds__stm_expand__V_45_45 = parse_tree__builtin_lib_types__io_io_type_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_47_47 = parse_tree__builtin_lib_types__io_io_type_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 0) = ((MR_Box) (transform_hlds__stm_expand__V_47_47));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_44_44, 0) = ((MR_Box) (transform_hlds__stm_expand__V_45_45));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_44_44, 1) = ((MR_Box) (transform_hlds__stm_expand__V_46_46));
    }
    {
      transform_hlds__stm_expand__V_43_43 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_63_63, transform_hlds__stm_expand__OutputTypes_21, transform_hlds__stm_expand__V_44_44);
    }
    {
      transform_hlds__stm_expand__V_34_34 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_63_63, transform_hlds__stm_expand__InputTypes_20, transform_hlds__stm_expand__V_43_43);
    }
    transform_hlds__stm_expand__TypeCtorInfo_64_64 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
    {
      transform_hlds__stm_expand__V_51_51 = parse_tree__prog_mode__di_mode_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_53_53 = parse_tree__prog_mode__uo_mode_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_52_52, 0) = ((MR_Box) (transform_hlds__stm_expand__V_53_53));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_50_50, 0) = ((MR_Box) (transform_hlds__stm_expand__V_51_51));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_50_50, 1) = ((MR_Box) (transform_hlds__stm_expand__V_52_52));
    }
    {
      transform_hlds__stm_expand__V_49_49 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_64_64, transform_hlds__stm_expand__OutputModes_23, transform_hlds__stm_expand__V_50_50);
    }
    {
      transform_hlds__stm_expand__V_35_35 = mercury__list__f_43_43_2_f_0(transform_hlds__stm_expand__TypeCtorInfo_64_64, transform_hlds__stm_expand__InputModes_22, transform_hlds__stm_expand__V_49_49);
    }
    {
      transform_hlds__stm_expand__create_cloned_pred_10_p_0(transform_hlds__stm_expand__V_33_33, transform_hlds__stm_expand__V_34_34, transform_hlds__stm_expand__V_35_35, (MR_String) "toplevel", transform_hlds__stm_expand__AtomicGoal_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__stm_expand__NewPredInfo0_24, transform_hlds__stm_expand__Goal_14, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_32_32, &transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_38_38);
    }
    {
      transform_hlds__stm_expand__V_56_56 = parse_tree__prog_mode__uo_mode_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_57_57 = parse_tree__prog_mode__di_mode_0_f_0();
    }
    {
      transform_hlds__stm_expand__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_55_55, 0) = ((MR_Box) (transform_hlds__stm_expand__V_56_56));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_55_55, 1) = ((MR_Box) (transform_hlds__stm_expand__V_57_57));
    }
    {
      transform_hlds__stm_expand__create_var_unify_6_p_0(transform_hlds__stm_expand__OuterUO_11, transform_hlds__stm_expand__OuterDI_10, transform_hlds__stm_expand__V_55_55, &transform_hlds__stm_expand__CopyIOAssign_25, transform_hlds__stm_expand__NewPredInfo0_24, &transform_hlds__stm_expand__NewPredInfo1_26);
    }
    {
      transform_hlds__stm_expand__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_59_59, 0) = ((MR_Box) (transform_hlds__stm_expand__CopyIOAssign_25));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__stm_expand__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_58_58, 0) = ((MR_Box) (transform_hlds__stm_expand__WrapperCall_16));
      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_58_58, 1) = ((MR_Box) (transform_hlds__stm_expand__V_59_59));
    }
    {
      transform_hlds__stm_expand__create_plain_conj_2_p_0(transform_hlds__stm_expand__V_58_58, &transform_hlds__stm_expand__TopLevelGoal_27);
    }
    {
      transform_hlds__stm_expand__new_pred_set_goal_3_p_0(transform_hlds__stm_expand__TopLevelGoal_27, transform_hlds__stm_expand__NewPredInfo1_26, &transform_hlds__stm_expand__NewPredInfo2_28);
    }
    {
      transform_hlds__stm_expand__run_quantification_over_pred_2_p_0(transform_hlds__stm_expand__NewPredInfo2_28, &transform_hlds__stm_expand__NewPredInfo_29);
    }
    {
      transform_hlds__stm_expand__commit_new_pred_3_p_0(transform_hlds__stm_expand__NewPredInfo_29, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_38_38, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_31);
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__strip_goal_calls_6_p_0(
  MR_Word transform_hlds__stm_expand__Goal0_7,
  MR_Word * transform_hlds__stm_expand__Goal_8,
  MR_Word * transform_hlds__stm_expand__StmOutDI_9,
  MR_Word * transform_hlds__stm_expand__StmOutUO_10,
  MR_Word * transform_hlds__stm_expand__StmInDI_11,
  MR_Word * transform_hlds__stm_expand__StmInUO_12)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__GoalList0_13;
    MR_Word transform_hlds__stm_expand__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Goal0_7, (MR_Integer) 1)));
    MR_Word transform_hlds__stm_expand__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Goal0_7, (MR_Integer) 0)));
    MR_Word transform_hlds__stm_expand__V_29_29;

    transform_hlds__stm_expand__succeeded = ((((MR_tag((MR_Word) transform_hlds__stm_expand__V_28_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__V_28_28, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (transform_hlds__stm_expand__succeeded)
      {
        transform_hlds__stm_expand__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__V_28_28, (MR_Integer) 1)));
        transform_hlds__stm_expand__GoalList0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__V_28_28, (MR_Integer) 2)));
        transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_29_29 == (MR_Integer) 0);
      }
    if (transform_hlds__stm_expand__succeeded)
      if ((transform_hlds__stm_expand__GoalList0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.strip_goal_calls\'/6", (MR_String) "empty conjunction");
            return;
          }
        }
      else
        {
          MR_Word transform_hlds__stm_expand__TypeInfo_41_41;
          MR_Word transform_hlds__stm_expand__GoalList_17;
          MR_Word transform_hlds__stm_expand__MaybeOutVarPair_18;
          MR_Word transform_hlds__stm_expand__MaybeInVarPair_19;
          MR_Word transform_hlds__stm_expand__MaybeInDI_20;
          MR_Word transform_hlds__stm_expand__MaybeInUO_21;
          MR_Word transform_hlds__stm_expand__MaybeOutDI_22;
          MR_Word transform_hlds__stm_expand__MaybeOutUO_23;
          MR_Box transform_hlds__stm_expand__conv0_MaybeInDI_20;
          MR_Box transform_hlds__stm_expand__conv1_MaybeInUO_21;
          MR_Box transform_hlds__stm_expand__conv2_MaybeOutDI_22;
          MR_Box transform_hlds__stm_expand__conv3_MaybeOutUO_23;
          MR_Word transform_hlds__stm_expand__StmInDI0_24;
          MR_Word transform_hlds__stm_expand__StmInUO0_25;
          MR_Word transform_hlds__stm_expand__StmOutDI0_26;
          MR_Word transform_hlds__stm_expand__StmOutUO0_27;

          {
            transform_hlds__stm_expand__remove_tail_4_p_0(transform_hlds__stm_expand__GoalList0_13, &transform_hlds__stm_expand__GoalList_17, &transform_hlds__stm_expand__MaybeOutVarPair_18, &transform_hlds__stm_expand__MaybeInVarPair_19);
          }
          transform_hlds__stm_expand__TypeInfo_41_41 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[2];
          {
            transform_hlds__stm_expand__conv0_MaybeInDI_20 = mercury__pair__fst_1_f_0(transform_hlds__stm_expand__TypeInfo_41_41, transform_hlds__stm_expand__TypeInfo_41_41, transform_hlds__stm_expand__MaybeInVarPair_19);
          }
          transform_hlds__stm_expand__MaybeInDI_20 = ((MR_Word) transform_hlds__stm_expand__conv0_MaybeInDI_20);
          {
            transform_hlds__stm_expand__conv1_MaybeInUO_21 = mercury__pair__snd_1_f_0(transform_hlds__stm_expand__TypeInfo_41_41, transform_hlds__stm_expand__TypeInfo_41_41, transform_hlds__stm_expand__MaybeInVarPair_19);
          }
          transform_hlds__stm_expand__MaybeInUO_21 = ((MR_Word) transform_hlds__stm_expand__conv1_MaybeInUO_21);
          {
            transform_hlds__stm_expand__conv2_MaybeOutDI_22 = mercury__pair__fst_1_f_0(transform_hlds__stm_expand__TypeInfo_41_41, transform_hlds__stm_expand__TypeInfo_41_41, transform_hlds__stm_expand__MaybeOutVarPair_18);
          }
          transform_hlds__stm_expand__MaybeOutDI_22 = ((MR_Word) transform_hlds__stm_expand__conv2_MaybeOutDI_22);
          {
            transform_hlds__stm_expand__conv3_MaybeOutUO_23 = mercury__pair__snd_1_f_0(transform_hlds__stm_expand__TypeInfo_41_41, transform_hlds__stm_expand__TypeInfo_41_41, transform_hlds__stm_expand__MaybeOutVarPair_18);
          }
          transform_hlds__stm_expand__MaybeOutUO_23 = ((MR_Word) transform_hlds__stm_expand__conv3_MaybeOutUO_23);
          transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__MaybeInDI_20)) == (MR_mktag((MR_Integer) 1)));
          if (transform_hlds__stm_expand__succeeded)
            {
              transform_hlds__stm_expand__StmInDI0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MaybeInDI_20, (MR_Integer) 0)));
              transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__MaybeInUO_21)) == (MR_mktag((MR_Integer) 1)));
              if (transform_hlds__stm_expand__succeeded)
                {
                  transform_hlds__stm_expand__StmInUO0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MaybeInUO_21, (MR_Integer) 0)));
                  transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__MaybeOutDI_22)) == (MR_mktag((MR_Integer) 1)));
                  if (transform_hlds__stm_expand__succeeded)
                    {
                      transform_hlds__stm_expand__StmOutDI0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MaybeOutDI_22, (MR_Integer) 0)));
                      transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__MaybeOutUO_23)) == (MR_mktag((MR_Integer) 1)));
                      if (transform_hlds__stm_expand__succeeded)
                        transform_hlds__stm_expand__StmOutUO0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MaybeOutUO_23, (MR_Integer) 0)));
                    }
                }
            }
          if (transform_hlds__stm_expand__succeeded)
            {
              MR_Word transform_hlds__stm_expand__V_30_30;

              *transform_hlds__stm_expand__StmInDI_11 = transform_hlds__stm_expand__StmInDI0_24;
              *transform_hlds__stm_expand__StmInUO_12 = transform_hlds__stm_expand__StmInUO0_25;
              *transform_hlds__stm_expand__StmOutDI_9 = transform_hlds__stm_expand__StmOutDI0_26;
              *transform_hlds__stm_expand__StmOutUO_10 = transform_hlds__stm_expand__StmOutUO0_27;
              {
                transform_hlds__stm_expand__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__V_30_30, 1) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__V_30_30, 2) = ((MR_Box) (transform_hlds__stm_expand__GoalList_17));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__stm_expand__Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__V_30_30));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo_14));
              }
            }
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.strip_goal_calls\'/6", (MR_String) "Vars not extracted");
                return;
              }
            }
        }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.strip_goal_calls\'/6", (MR_String) "atomic_goal not a conj");
          return;
        }
      }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__remove_tail_4_p_0(
  MR_Word transform_hlds__stm_expand__HeadVar__1_1,
  MR_Word * transform_hlds__stm_expand__HeadVar__2_2,
  MR_Word * transform_hlds__stm_expand__HeadVar__3_3,
  MR_Word * transform_hlds__stm_expand__HeadVar__4_4)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;

    if ((transform_hlds__stm_expand__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__stm_expand__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__stm_expand__HeadVar__3_3 = (MR_Word) &transform_hlds__stm_expand_scalar_common_1[5];
        *transform_hlds__stm_expand__HeadVar__4_4 = *transform_hlds__stm_expand__HeadVar__3_3;
      }
    else
      {
        MR_Word transform_hlds__stm_expand__HeadGoal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__stm_expand__TailGoals0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__stm_expand__MaybeOutDI_12;
        MR_Word transform_hlds__stm_expand__MaybeOutUO_13;
        MR_Word transform_hlds__stm_expand__MaybeInDI_14;
        MR_Word transform_hlds__stm_expand__MaybeInUO_15;
        MR_Word transform_hlds__stm_expand__TailGoals_16;
        MR_Word transform_hlds__stm_expand__MaybeOutDI0_17;
        MR_Word transform_hlds__stm_expand__MaybeOutUO0_18;
        MR_Word transform_hlds__stm_expand__MaybeInDI0_19;
        MR_Word transform_hlds__stm_expand__MaybeInUO0_20;
        MR_Word transform_hlds__stm_expand__HeadGoalExpr0_21;
        MR_Word transform_hlds__stm_expand__V_35_35;
        MR_Word transform_hlds__stm_expand__V_36_36;
        MR_Word transform_hlds__stm_expand__V_22_22;
        MR_Word transform_hlds__stm_expand__X_26;
        MR_Word transform_hlds__stm_expand__V_27;
        MR_Word transform_hlds__stm_expand__V_37_37;
        MR_Word transform_hlds__stm_expand__V_38_38;
        MR_Word transform_hlds__stm_expand__V_39_39;
        MR_Word transform_hlds__stm_expand__V_40_40;
        MR_Word transform_hlds__stm_expand__V_41_41;
        MR_Word transform_hlds__stm_expand__V_49_49;
        MR_Word transform_hlds__stm_expand__V_53_53;
        MR_String transform_hlds__stm_expand__V_54_54;
        MR_Word transform_hlds__stm_expand__V_23_23;
        MR_Integer transform_hlds__stm_expand__V_24_24;
        MR_Word transform_hlds__stm_expand__V_28_28;
        MR_Word transform_hlds__stm_expand__V_29_29;
        MR_Word transform_hlds__stm_expand__V_25_25;

        {
          transform_hlds__stm_expand__remove_tail_4_p_0(transform_hlds__stm_expand__TailGoals0_10, &transform_hlds__stm_expand__TailGoals_16, &transform_hlds__stm_expand__V_35_35, &transform_hlds__stm_expand__V_36_36);
        }
        transform_hlds__stm_expand__MaybeOutDI0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_35_35, (MR_Integer) 0)));
        transform_hlds__stm_expand__MaybeOutUO0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_35_35, (MR_Integer) 1)));
        transform_hlds__stm_expand__MaybeInDI0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_36_36, (MR_Integer) 0)));
        transform_hlds__stm_expand__MaybeInUO0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_36_36, (MR_Integer) 1)));
        transform_hlds__stm_expand__HeadGoalExpr0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadGoal0_9, (MR_Integer) 0)));
        transform_hlds__stm_expand__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadGoal0_9, (MR_Integer) 1)));
        transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__HeadGoalExpr0_21)) == (MR_mktag((MR_Integer) 2)));
        if (transform_hlds__stm_expand__succeeded)
          {
            transform_hlds__stm_expand__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__HeadGoalExpr0_21, (MR_Integer) 0)));
            transform_hlds__stm_expand__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__HeadGoalExpr0_21, (MR_Integer) 1)));
            transform_hlds__stm_expand__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__HeadGoalExpr0_21, (MR_Integer) 2)));
            transform_hlds__stm_expand__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__HeadGoalExpr0_21, (MR_Integer) 3)));
            transform_hlds__stm_expand__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__HeadGoalExpr0_21, (MR_Integer) 4)));
            transform_hlds__stm_expand__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__HeadGoalExpr0_21, (MR_Integer) 5)));
            transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__V_37_37)) == (MR_mktag((MR_Integer) 1)));
            if (transform_hlds__stm_expand__succeeded)
              {
                transform_hlds__stm_expand__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_37_37, (MR_Integer) 0)));
                transform_hlds__stm_expand__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_37_37, (MR_Integer) 1)));
                transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__V_38_38)) == (MR_mktag((MR_Integer) 1)));
                if (transform_hlds__stm_expand__succeeded)
                  {
                    transform_hlds__stm_expand__X_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_38_38, (MR_Integer) 0)));
                    transform_hlds__stm_expand__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_38_38, (MR_Integer) 1)));
                    transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__V_39_39)) == (MR_mktag((MR_Integer) 1)));
                    if (transform_hlds__stm_expand__succeeded)
                      {
                        transform_hlds__stm_expand__V_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_39_39, (MR_Integer) 0)));
                        transform_hlds__stm_expand__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_39_39, (MR_Integer) 1)));
                        transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_40_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (transform_hlds__stm_expand__succeeded)
                          {
                            {
                              transform_hlds__stm_expand__V_53_53 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
                            }
                            transform_hlds__stm_expand__V_54_54 = (MR_String) "stm_from_outer_to_inner";
                            {
                              transform_hlds__stm_expand__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_49_49, 0) = ((MR_Box) (transform_hlds__stm_expand__V_53_53));
                              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_49_49, 1) = ((MR_Box) (transform_hlds__stm_expand__V_54_54));
                            }
                            {
                              transform_hlds__stm_expand__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__stm_expand__V_41_41, transform_hlds__stm_expand__V_49_49);
                            }
                          }
                      }
                  }
              }
          }
        if (transform_hlds__stm_expand__succeeded)
          {
            {
              transform_hlds__stm_expand__MaybeInDI_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MaybeInDI_14, 0) = ((MR_Box) (transform_hlds__stm_expand__V_27));
            }
            transform_hlds__stm_expand__MaybeInUO_15 = transform_hlds__stm_expand__MaybeInUO0_20;
            {
              transform_hlds__stm_expand__MaybeOutDI_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MaybeOutDI_12, 0) = ((MR_Box) (transform_hlds__stm_expand__X_26));
            }
            transform_hlds__stm_expand__MaybeOutUO_13 = transform_hlds__stm_expand__MaybeOutUO0_18;
            *transform_hlds__stm_expand__HeadVar__2_2 = transform_hlds__stm_expand__TailGoals_16;
          }
        else
          {
            MR_Word transform_hlds__stm_expand__X_47;
            MR_Word transform_hlds__stm_expand__V_48;
            MR_Word transform_hlds__stm_expand__V_42_42;
            MR_Word transform_hlds__stm_expand__V_43_43;
            MR_Word transform_hlds__stm_expand__V_44_44;
            MR_Word transform_hlds__stm_expand__V_45_45;
            MR_Word transform_hlds__stm_expand__V_46_46;
            MR_Word transform_hlds__stm_expand__V_50_50;
            MR_Word transform_hlds__stm_expand__V_55_55;
            MR_String transform_hlds__stm_expand__V_56_56;
            MR_Word transform_hlds__stm_expand__V_30_30;
            MR_Integer transform_hlds__stm_expand__V_31_31;
            MR_Word transform_hlds__stm_expand__V_33_33;
            MR_Word transform_hlds__stm_expand__V_34_34;
            MR_Word transform_hlds__stm_expand__V_32_32;

            transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__HeadGoalExpr0_21)) == (MR_mktag((MR_Integer) 2)));
            if (transform_hlds__stm_expand__succeeded)
              {
                transform_hlds__stm_expand__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__HeadGoalExpr0_21, (MR_Integer) 0)));
                transform_hlds__stm_expand__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__HeadGoalExpr0_21, (MR_Integer) 1)));
                transform_hlds__stm_expand__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__HeadGoalExpr0_21, (MR_Integer) 2)));
                transform_hlds__stm_expand__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__HeadGoalExpr0_21, (MR_Integer) 3)));
                transform_hlds__stm_expand__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__HeadGoalExpr0_21, (MR_Integer) 4)));
                transform_hlds__stm_expand__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__stm_expand__HeadGoalExpr0_21, (MR_Integer) 5)));
                transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__V_42_42)) == (MR_mktag((MR_Integer) 1)));
                if (transform_hlds__stm_expand__succeeded)
                  {
                    transform_hlds__stm_expand__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_42_42, (MR_Integer) 0)));
                    transform_hlds__stm_expand__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_42_42, (MR_Integer) 1)));
                    transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__V_43_43)) == (MR_mktag((MR_Integer) 1)));
                    if (transform_hlds__stm_expand__succeeded)
                      {
                        transform_hlds__stm_expand__V_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_43_43, (MR_Integer) 0)));
                        transform_hlds__stm_expand__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_43_43, (MR_Integer) 1)));
                        transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__V_44_44)) == (MR_mktag((MR_Integer) 1)));
                        if (transform_hlds__stm_expand__succeeded)
                          {
                            transform_hlds__stm_expand__X_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_44_44, (MR_Integer) 0)));
                            transform_hlds__stm_expand__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_44_44, (MR_Integer) 1)));
                            transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (transform_hlds__stm_expand__succeeded)
                              {
                                {
                                  transform_hlds__stm_expand__V_55_55 = mdbcomp__builtin_modules__mercury_stm_builtin_module_0_f_0();
                                }
                                transform_hlds__stm_expand__V_56_56 = (MR_String) "stm_from_inner_to_outer";
                                {
                                  transform_hlds__stm_expand__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_50_50, 0) = ((MR_Box) (transform_hlds__stm_expand__V_55_55));
                                  MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_50_50, 1) = ((MR_Box) (transform_hlds__stm_expand__V_56_56));
                                }
                                {
                                  transform_hlds__stm_expand__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__stm_expand__V_46_46, transform_hlds__stm_expand__V_50_50);
                                }
                              }
                          }
                      }
                  }
              }
            if (transform_hlds__stm_expand__succeeded)
              {
                transform_hlds__stm_expand__MaybeInDI_14 = transform_hlds__stm_expand__MaybeInDI0_19;
                {
                  transform_hlds__stm_expand__MaybeInUO_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MaybeInUO_15, 0) = ((MR_Box) (transform_hlds__stm_expand__V_48));
                }
                transform_hlds__stm_expand__MaybeOutDI_12 = transform_hlds__stm_expand__MaybeOutDI0_17;
                {
                  transform_hlds__stm_expand__MaybeOutUO_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__MaybeOutUO_13, 0) = ((MR_Box) (transform_hlds__stm_expand__X_47));
                }
                *transform_hlds__stm_expand__HeadVar__2_2 = transform_hlds__stm_expand__TailGoals_16;
              }
            else
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *transform_hlds__stm_expand__HeadVar__2_2 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__HeadGoal0_9));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__stm_expand__TailGoals_16));
                }
                transform_hlds__stm_expand__MaybeInDI_14 = transform_hlds__stm_expand__MaybeInDI0_19;
                transform_hlds__stm_expand__MaybeInUO_15 = transform_hlds__stm_expand__MaybeInUO0_20;
                transform_hlds__stm_expand__MaybeOutDI_12 = transform_hlds__stm_expand__MaybeOutDI0_17;
                transform_hlds__stm_expand__MaybeOutUO_13 = transform_hlds__stm_expand__MaybeOutUO0_18;
              }
          }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *transform_hlds__stm_expand__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__MaybeOutDI_12));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__MaybeOutUO_13));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *transform_hlds__stm_expand__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__MaybeInDI_14));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__MaybeInUO_15));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__calc_pred_variables_list_9_p_0(
  MR_Word transform_hlds__stm_expand__InitInstmap_10,
  MR_Word transform_hlds__stm_expand__FinalInstmap_11,
  MR_Word transform_hlds__stm_expand__Goals_12,
  MR_Word transform_hlds__stm_expand__InnerDIs_13,
  MR_Word transform_hlds__stm_expand__InnerUOs_14,
  MR_Word transform_hlds__stm_expand__IgnoreVarList0_15,
  MR_Word * transform_hlds__stm_expand__StmGoalVarList_16,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_27,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_28)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__Goals_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    if (transform_hlds__stm_expand__succeeded)
      {
        transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__InnerDIs_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (transform_hlds__stm_expand__succeeded)
          transform_hlds__stm_expand__succeeded = (transform_hlds__stm_expand__InnerUOs_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (transform_hlds__stm_expand__succeeded)
      {
        *transform_hlds__stm_expand__StmGoalVarList_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_28 = transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_27;
      }
    else
      {
        MR_Word transform_hlds__stm_expand__HeadGoal_18;
        MR_Word transform_hlds__stm_expand__TailGoals_19;
        MR_Word transform_hlds__stm_expand__HeadInnerDI_20;
        MR_Word transform_hlds__stm_expand__TailInnerDIs_21;
        MR_Word transform_hlds__stm_expand__HeadInnerUO_22;
        MR_Word transform_hlds__stm_expand__TailInnerUOs_23;

        transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__Goals_12)) == (MR_mktag((MR_Integer) 1)));
        if (transform_hlds__stm_expand__succeeded)
          {
            transform_hlds__stm_expand__HeadGoal_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Goals_12, (MR_Integer) 0)));
            transform_hlds__stm_expand__TailGoals_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__Goals_12, (MR_Integer) 1)));
            transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__InnerDIs_13)) == (MR_mktag((MR_Integer) 1)));
            if (transform_hlds__stm_expand__succeeded)
              {
                transform_hlds__stm_expand__HeadInnerDI_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__InnerDIs_13, (MR_Integer) 0)));
                transform_hlds__stm_expand__TailInnerDIs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__InnerDIs_13, (MR_Integer) 1)));
                transform_hlds__stm_expand__succeeded = ((MR_tag((MR_Word) transform_hlds__stm_expand__InnerUOs_14)) == (MR_mktag((MR_Integer) 1)));
                if (transform_hlds__stm_expand__succeeded)
                  {
                    transform_hlds__stm_expand__HeadInnerUO_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__InnerUOs_14, (MR_Integer) 0)));
                    transform_hlds__stm_expand__TailInnerUOs_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__InnerUOs_14, (MR_Integer) 1)));
                  }
              }
          }
        if (transform_hlds__stm_expand__succeeded)
          {
            MR_Word transform_hlds__stm_expand__TypeCtorInfo_44_69;
            MR_Word transform_hlds__stm_expand__IgnoreVarList_24;
            MR_Word transform_hlds__stm_expand__StmGoalVar_25;
            MR_Word transform_hlds__stm_expand__StmGoalVarList0_26;
            MR_Word transform_hlds__stm_expand__V_29_29;
            MR_Word transform_hlds__stm_expand__ModuleInfo_45;
            MR_Word transform_hlds__stm_expand__GoalVars0_46;
            MR_Word transform_hlds__stm_expand__GoalVars_47;
            MR_Word transform_hlds__stm_expand__GoalVarList_48;
            MR_Word transform_hlds__stm_expand__GoalInfo_50;
            MR_Word transform_hlds__stm_expand__GoalNonLocalSet0_51;
            MR_Word transform_hlds__stm_expand__GoalNonLocalSet_52;
            MR_Word transform_hlds__stm_expand__GoalNonLocals_53;
            MR_Word transform_hlds__stm_expand__LocalVarsList_54;
            MR_Word transform_hlds__stm_expand__InputVarsList_55;
            MR_Word transform_hlds__stm_expand__OutputVarsList_59;
            MR_Word transform_hlds__stm_expand__LocalVars_60;
            MR_Word transform_hlds__stm_expand__InputVars_61;
            MR_Word transform_hlds__stm_expand__OutputVars_62;
            MR_Word transform_hlds__stm_expand__V_63_63;
            MR_Integer transform_hlds__stm_expand__V_64_64;
            MR_Word transform_hlds__stm_expand__V_65_65;
            MR_Word transform_hlds__stm_expand__V_66_66;
            MR_Word transform_hlds__stm_expand__V_67_67;
            MR_Integer transform_hlds__stm_expand__V_68_68;
            MR_Word transform_hlds__stm_expand__V_49_49;
            MR_Word transform_hlds__stm_expand__V_56_56;
            MR_Word transform_hlds__stm_expand__V_57_57;
            MR_Word transform_hlds__stm_expand___InputVarsList_58;

            {
              transform_hlds__stm_expand__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_29_29, 0) = ((MR_Box) (transform_hlds__stm_expand__HeadInnerUO_22));
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__V_29_29, 1) = ((MR_Box) (transform_hlds__stm_expand__IgnoreVarList0_15));
            }
            {
              transform_hlds__stm_expand__IgnoreVarList_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__IgnoreVarList_24, 0) = ((MR_Box) (transform_hlds__stm_expand__HeadInnerDI_20));
              MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__IgnoreVarList_24, 1) = ((MR_Box) (transform_hlds__stm_expand__V_29_29));
            }
            transform_hlds__stm_expand__ModuleInfo_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_27, (MR_Integer) 0)));
            transform_hlds__stm_expand__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_27, (MR_Integer) 1)));
            transform_hlds__stm_expand__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_27, (MR_Integer) 2)));
            transform_hlds__stm_expand__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_27, (MR_Integer) 3)));
            transform_hlds__stm_expand__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_27, (MR_Integer) 4)));
            transform_hlds__stm_expand__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_27, (MR_Integer) 5)));
            transform_hlds__stm_expand__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_27, (MR_Integer) 6)));
            {
              hlds__goal_util__goal_vars_2_p_0(transform_hlds__stm_expand__HeadGoal_18, &transform_hlds__stm_expand__GoalVars0_46);
            }
            transform_hlds__stm_expand__TypeCtorInfo_44_69 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            {
              parse_tree__set_of_var__delete_list_3_p_0(transform_hlds__stm_expand__TypeCtorInfo_44_69, transform_hlds__stm_expand__IgnoreVarList_24, transform_hlds__stm_expand__GoalVars0_46, &transform_hlds__stm_expand__GoalVars_47);
            }
            {
              transform_hlds__stm_expand__GoalVarList_48 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_44_69, transform_hlds__stm_expand__GoalVars_47);
            }
            transform_hlds__stm_expand__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadGoal_18, (MR_Integer) 0)));
            transform_hlds__stm_expand__GoalInfo_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__HeadGoal_18, (MR_Integer) 1)));
            {
              transform_hlds__stm_expand__GoalNonLocalSet0_51 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__stm_expand__GoalInfo_50);
            }
            {
              parse_tree__set_of_var__delete_list_3_p_0(transform_hlds__stm_expand__TypeCtorInfo_44_69, transform_hlds__stm_expand__IgnoreVarList_24, transform_hlds__stm_expand__GoalNonLocalSet0_51, &transform_hlds__stm_expand__GoalNonLocalSet_52);
            }
            {
              transform_hlds__stm_expand__GoalNonLocals_53 = parse_tree__set_of_var__to_sorted_list_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_44_69, transform_hlds__stm_expand__GoalNonLocalSet_52);
            }
            {
              transform_hlds__stm_expand__order_vars_into_groups_2_10_p_0(transform_hlds__stm_expand__ModuleInfo_45, transform_hlds__stm_expand__GoalVarList_48, transform_hlds__stm_expand__InitInstmap_10, transform_hlds__stm_expand__FinalInstmap_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__stm_expand__LocalVarsList_54, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__stm_expand__InputVarsList_55, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__stm_expand__V_56_56);
            }
            {
              transform_hlds__stm_expand__order_vars_into_groups_2_10_p_0(transform_hlds__stm_expand__ModuleInfo_45, transform_hlds__stm_expand__GoalNonLocals_53, transform_hlds__stm_expand__InitInstmap_10, transform_hlds__stm_expand__FinalInstmap_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__stm_expand__V_57_57, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__stm_expand___InputVarsList_58, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__stm_expand__OutputVarsList_59);
            }
            {
              transform_hlds__stm_expand__LocalVars_60 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_44_69, transform_hlds__stm_expand__LocalVarsList_54);
            }
            {
              transform_hlds__stm_expand__InputVars_61 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_44_69, transform_hlds__stm_expand__InputVarsList_55);
            }
            {
              transform_hlds__stm_expand__OutputVars_62 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_44_69, transform_hlds__stm_expand__OutputVarsList_59);
            }
            {
              transform_hlds__stm_expand__StmGoalVar_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVar_25, 0) = ((MR_Box) (transform_hlds__stm_expand__InputVars_61));
              MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVar_25, 1) = ((MR_Box) (transform_hlds__stm_expand__LocalVars_60));
              MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVar_25, 2) = ((MR_Box) (transform_hlds__stm_expand__OutputVars_62));
              MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVar_25, 3) = ((MR_Box) (transform_hlds__stm_expand__HeadInnerDI_20));
              MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmGoalVar_25, 4) = ((MR_Box) (transform_hlds__stm_expand__HeadInnerUO_22));
            }
            {
              transform_hlds__stm_expand__calc_pred_variables_list_9_p_0(transform_hlds__stm_expand__InitInstmap_10, transform_hlds__stm_expand__FinalInstmap_11, transform_hlds__stm_expand__TailGoals_19, transform_hlds__stm_expand__TailInnerDIs_21, transform_hlds__stm_expand__TailInnerUOs_23, transform_hlds__stm_expand__IgnoreVarList_24, &transform_hlds__stm_expand__StmGoalVarList0_26, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_0_27, transform_hlds__stm_expand__STATE_VARIABLE_StmInfo_28);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__stm_expand__StmGoalVarList_16 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__StmGoalVar_25));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__stm_expand__StmGoalVarList0_26));
            }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.calc_pred_variables_list\'/9", (MR_String) "lengths mismatch");
              return;
            }
          }
      }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__common_goal_vars_from_list_2_p_0_1(
  MR_Box transform_hlds__stm_expand__closure_arg,
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
    MR_Word transform_hlds__stm_expand__conv0_LambdaHeadVar__2_12;

    {
      transform_hlds__stm_expand__IntroducedFrom__pred__common_goal_vars_from_list__583__1_2_p_0(((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), &transform_hlds__stm_expand__conv0_LambdaHeadVar__2_12);
    }
    *transform_hlds__stm_expand__wrapper_arg_2 = ((MR_Box) (transform_hlds__stm_expand__conv0_LambdaHeadVar__2_12));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__common_goal_vars_from_list_2_p_0(
  MR_Word transform_hlds__stm_expand__GoalList_3,
  MR_Word * transform_hlds__stm_expand__GoalVar_4)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_24_24 = (MR_Word) &transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0;
    MR_Word transform_hlds__stm_expand__InputVarList_8;
    MR_Word transform_hlds__stm_expand__InputVars_9;
    MR_Word transform_hlds__stm_expand__GoalVar0_10;
    MR_Box transform_hlds__stm_expand__conv1_GoalVar0_10;
    MR_Word transform_hlds__stm_expand__V_20_20;
    MR_Word transform_hlds__stm_expand__V_21_21;
    MR_Word transform_hlds__stm_expand__V_22_22;
    MR_Word transform_hlds__stm_expand__V_23_23;
    MR_Word transform_hlds__stm_expand__V_19_19;

    {
      mercury__list__map_3_p_0(transform_hlds__stm_expand__TypeCtorInfo_24_24, (MR_Word) &transform_hlds__stm_expand_scalar_common_1[1], (MR_Word) &transform_hlds__stm_expand_scalar_common_2[3], transform_hlds__stm_expand__GoalList_3, &transform_hlds__stm_expand__InputVarList_8);
    }
    {
      transform_hlds__stm_expand__InputVars_9 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__stm_expand__InputVarList_8);
    }
    {
      transform_hlds__stm_expand__conv1_GoalVar0_10 = mercury__list__det_head_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_24_24, transform_hlds__stm_expand__GoalList_3);
    }
    transform_hlds__stm_expand__GoalVar0_10 = ((MR_Word) transform_hlds__stm_expand__conv1_GoalVar0_10);
    transform_hlds__stm_expand__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_10, (MR_Integer) 0)));
    transform_hlds__stm_expand__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_10, (MR_Integer) 1)));
    transform_hlds__stm_expand__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_10, (MR_Integer) 2)));
    transform_hlds__stm_expand__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_10, (MR_Integer) 3)));
    transform_hlds__stm_expand__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__GoalVar0_10, (MR_Integer) 4)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__stm_expand__GoalVar_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__InputVars_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__V_20_20));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__stm_expand__V_21_21));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__stm_expand__V_22_22));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__stm_expand__V_23_23));
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__order_vars_into_groups_2_10_p_0(
  MR_Word transform_hlds__stm_expand__ModuleInfo_1,
  MR_Word transform_hlds__stm_expand__HeadVar__2_2,
  MR_Word transform_hlds__stm_expand__InitInstmap_3,
  MR_Word transform_hlds__stm_expand__FinalInstmap_4,
  MR_Word transform_hlds__stm_expand__HeadVar__5_5,
  MR_Word * transform_hlds__stm_expand__HeadVar__6_6,
  MR_Word transform_hlds__stm_expand__HeadVar__7_7,
  MR_Word * transform_hlds__stm_expand__HeadVar__8_8,
  MR_Word transform_hlds__stm_expand__HeadVar__9_9,
  MR_Word * transform_hlds__stm_expand__HeadVar__10_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__stm_expand__succeeded;

        if ((transform_hlds__stm_expand__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *transform_hlds__stm_expand__HeadVar__10_10 = transform_hlds__stm_expand__HeadVar__9_9;
            *transform_hlds__stm_expand__HeadVar__8_8 = transform_hlds__stm_expand__HeadVar__7_7;
            *transform_hlds__stm_expand__HeadVar__6_6 = transform_hlds__stm_expand__HeadVar__5_5;
          }
        else
          {
            MR_Word transform_hlds__stm_expand__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word transform_hlds__stm_expand__Vars_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word transform_hlds__stm_expand__InitVarInst_31;
            MR_Word transform_hlds__stm_expand__FinalVarInst_32;
            MR_Word transform_hlds__stm_expand__STATE_VARIABLE_LocalVars_39_39;
            MR_Word transform_hlds__stm_expand__STATE_VARIABLE_OutputVars_40_40;
            MR_Word transform_hlds__stm_expand__STATE_VARIABLE_InputVars_41_41;

            {
              hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__stm_expand__InitInstmap_3, transform_hlds__stm_expand__Var_24, &transform_hlds__stm_expand__InitVarInst_31);
            }
            {
              hlds__instmap__instmap_lookup_var_3_p_0(transform_hlds__stm_expand__FinalInstmap_4, transform_hlds__stm_expand__Var_24, &transform_hlds__stm_expand__FinalVarInst_32);
            }
            {
              transform_hlds__stm_expand__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(transform_hlds__stm_expand__ModuleInfo_1, transform_hlds__stm_expand__InitVarInst_31);
            }
            if (transform_hlds__stm_expand__succeeded)
              {
                transform_hlds__stm_expand__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(transform_hlds__stm_expand__ModuleInfo_1, transform_hlds__stm_expand__FinalVarInst_32);
              }
            if (transform_hlds__stm_expand__succeeded)
              {
                {
                  transform_hlds__stm_expand__STATE_VARIABLE_LocalVars_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__STATE_VARIABLE_LocalVars_39_39, 0) = ((MR_Box) (transform_hlds__stm_expand__Var_24));
                  MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__STATE_VARIABLE_LocalVars_39_39, 1) = ((MR_Box) (transform_hlds__stm_expand__HeadVar__5_5));
                }
                transform_hlds__stm_expand__STATE_VARIABLE_OutputVars_40_40 = transform_hlds__stm_expand__HeadVar__9_9;
                transform_hlds__stm_expand__STATE_VARIABLE_InputVars_41_41 = transform_hlds__stm_expand__HeadVar__7_7;
              }
            else
              {
                {
                  transform_hlds__stm_expand__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(transform_hlds__stm_expand__ModuleInfo_1, transform_hlds__stm_expand__InitVarInst_31);
                }
                if (transform_hlds__stm_expand__succeeded)
                  {
                    transform_hlds__stm_expand__succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(transform_hlds__stm_expand__ModuleInfo_1, transform_hlds__stm_expand__FinalVarInst_32);
                  }
                if (transform_hlds__stm_expand__succeeded)
                  {
                    {
                      transform_hlds__stm_expand__STATE_VARIABLE_OutputVars_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__STATE_VARIABLE_OutputVars_40_40, 0) = ((MR_Box) (transform_hlds__stm_expand__Var_24));
                      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__STATE_VARIABLE_OutputVars_40_40, 1) = ((MR_Box) (transform_hlds__stm_expand__HeadVar__9_9));
                    }
                    transform_hlds__stm_expand__STATE_VARIABLE_InputVars_41_41 = transform_hlds__stm_expand__HeadVar__7_7;
                  }
                else
                  {
                    {
                      transform_hlds__stm_expand__succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(transform_hlds__stm_expand__ModuleInfo_1, transform_hlds__stm_expand__InitVarInst_31);
                    }
                    if (transform_hlds__stm_expand__succeeded)
                      {
                        transform_hlds__stm_expand__succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(transform_hlds__stm_expand__ModuleInfo_1, transform_hlds__stm_expand__FinalVarInst_32);
                      }
                    if (transform_hlds__stm_expand__succeeded)
                      {
                        transform_hlds__stm_expand__STATE_VARIABLE_InputVars_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__STATE_VARIABLE_InputVars_41_41, 0) = ((MR_Box) (transform_hlds__stm_expand__Var_24));
                        MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__STATE_VARIABLE_InputVars_41_41, 1) = ((MR_Box) (transform_hlds__stm_expand__HeadVar__7_7));
                      }
                    else
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.order_vars_into_groups_2\'/10", (MR_String) "unhandled inst case");
                          return;
                        }
                      }
                    transform_hlds__stm_expand__STATE_VARIABLE_OutputVars_40_40 = transform_hlds__stm_expand__HeadVar__9_9;
                  }
                transform_hlds__stm_expand__STATE_VARIABLE_LocalVars_39_39 = transform_hlds__stm_expand__HeadVar__5_5;
              }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__stm_expand__HeadVar__2__tmp_copy_2 = transform_hlds__stm_expand__Vars_25;
              MR_Word transform_hlds__stm_expand__HeadVar__5__tmp_copy_5 = transform_hlds__stm_expand__STATE_VARIABLE_LocalVars_39_39;
              MR_Word transform_hlds__stm_expand__HeadVar__7__tmp_copy_7 = transform_hlds__stm_expand__STATE_VARIABLE_InputVars_41_41;
              MR_Word transform_hlds__stm_expand__HeadVar__9__tmp_copy_9 = transform_hlds__stm_expand__STATE_VARIABLE_OutputVars_40_40;

              transform_hlds__stm_expand__HeadVar__9_9 = transform_hlds__stm_expand__HeadVar__9__tmp_copy_9;
              transform_hlds__stm_expand__HeadVar__7_7 = transform_hlds__stm_expand__HeadVar__7__tmp_copy_7;
              transform_hlds__stm_expand__HeadVar__5_5 = transform_hlds__stm_expand__HeadVar__5__tmp_copy_5;
              transform_hlds__stm_expand__HeadVar__2_2 = transform_hlds__stm_expand__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__stm_expand__stm_process_switch_cases_5_p_0(
  MR_Word transform_hlds__stm_expand__HeadVar__1_1,
  MR_Word transform_hlds__stm_expand__HeadVar__2_2,
  MR_Word * transform_hlds__stm_expand__HeadVar__3_3,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_0_4,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Info_5)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;

    if ((transform_hlds__stm_expand__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__stm_expand__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__stm_expand__STATE_VARIABLE_Info_5 = transform_hlds__stm_expand__STATE_VARIABLE_Info_0_4;
      }
    else
      {
        MR_Word transform_hlds__stm_expand__Case0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__stm_expand__Cases0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__stm_expand__Case_13;
        MR_Word transform_hlds__stm_expand__Cases_14;
        MR_Word transform_hlds__stm_expand__MainConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Case0_11, (MR_Integer) 0)));
        MR_Word transform_hlds__stm_expand__OtherConsIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Case0_11, (MR_Integer) 1)));
        MR_Word transform_hlds__stm_expand__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Case0_11, (MR_Integer) 2)));
        MR_Word transform_hlds__stm_expand__Goal_19;
        MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_22_22;

        {
          transform_hlds__stm_expand__stm_process_goal_5_p_0(transform_hlds__stm_expand__HeadVar__1_1, transform_hlds__stm_expand__Goal0_18, &transform_hlds__stm_expand__Goal_19, transform_hlds__stm_expand__STATE_VARIABLE_Info_0_4, &transform_hlds__stm_expand__STATE_VARIABLE_Info_22_22);
        }
        {
          transform_hlds__stm_expand__stm_process_switch_cases_5_p_0(transform_hlds__stm_expand__HeadVar__1_1, transform_hlds__stm_expand__Cases0_12, &transform_hlds__stm_expand__Cases_14, transform_hlds__stm_expand__STATE_VARIABLE_Info_22_22, transform_hlds__stm_expand__STATE_VARIABLE_Info_5);
        }
        {
          transform_hlds__stm_expand__Case_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Case_13, 0) = ((MR_Box) (transform_hlds__stm_expand__MainConsId_16));
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Case_13, 1) = ((MR_Box) (transform_hlds__stm_expand__OtherConsIds_17));
          MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Case_13, 2) = ((MR_Box) (transform_hlds__stm_expand__Goal_19));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__stm_expand__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__Case_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__stm_expand__Cases_14));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__stm_process_if_then_else_9_p_0(
  MR_Word transform_hlds__stm_expand__Instmap0_10,
  MR_Word transform_hlds__stm_expand__Cond0_11,
  MR_Word transform_hlds__stm_expand__Then0_12,
  MR_Word transform_hlds__stm_expand__Else0_13,
  MR_Word * transform_hlds__stm_expand__Cond_14,
  MR_Word * transform_hlds__stm_expand__Then_15,
  MR_Word * transform_hlds__stm_expand__Else_16,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_0_22,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Info_23)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__CondInfo_19;
    MR_Word transform_hlds__stm_expand__CondInstmapDelta_20;
    MR_Word transform_hlds__stm_expand__InstmapAfterCond_21;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_24_24;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_25_25;
    MR_Word transform_hlds__stm_expand__V_18_18;

    {
      transform_hlds__stm_expand__stm_process_goal_5_p_0(transform_hlds__stm_expand__Instmap0_10, transform_hlds__stm_expand__Cond0_11, transform_hlds__stm_expand__Cond_14, transform_hlds__stm_expand__STATE_VARIABLE_Info_0_22, &transform_hlds__stm_expand__STATE_VARIABLE_Info_24_24);
    }
    transform_hlds__stm_expand__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Cond0_11, (MR_Integer) 0)));
    transform_hlds__stm_expand__CondInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Cond0_11, (MR_Integer) 1)));
    {
      transform_hlds__stm_expand__CondInstmapDelta_20 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__stm_expand__CondInfo_19);
    }
    {
      hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__stm_expand__Instmap0_10, transform_hlds__stm_expand__CondInstmapDelta_20, &transform_hlds__stm_expand__InstmapAfterCond_21);
    }
    {
      transform_hlds__stm_expand__stm_process_goal_5_p_0(transform_hlds__stm_expand__InstmapAfterCond_21, transform_hlds__stm_expand__Then0_12, transform_hlds__stm_expand__Then_15, transform_hlds__stm_expand__STATE_VARIABLE_Info_24_24, &transform_hlds__stm_expand__STATE_VARIABLE_Info_25_25);
    }
    {
      transform_hlds__stm_expand__stm_process_goal_5_p_0(transform_hlds__stm_expand__Instmap0_10, transform_hlds__stm_expand__Else0_13, transform_hlds__stm_expand__Else_16, transform_hlds__stm_expand__STATE_VARIABLE_Info_25_25, transform_hlds__stm_expand__STATE_VARIABLE_Info_23);
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__stm_process_disj_5_p_0(
  MR_Word transform_hlds__stm_expand__Instmap_6,
  MR_Word transform_hlds__stm_expand__GoalList0_7,
  MR_Word * transform_hlds__stm_expand__GoalList_8,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_0_14,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Info_15)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;

    if ((transform_hlds__stm_expand__GoalList0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__stm_expand__GoalList_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__stm_expand__STATE_VARIABLE_Info_15 = transform_hlds__stm_expand__STATE_VARIABLE_Info_0_14;
      }
    else
      {
        MR_Word transform_hlds__stm_expand__Goal0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalList0_7, (MR_Integer) 0)));
        MR_Word transform_hlds__stm_expand__Goals0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalList0_7, (MR_Integer) 1)));
        MR_Word transform_hlds__stm_expand__Goal_12;
        MR_Word transform_hlds__stm_expand__Goals_13;
        MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_16_16;

        {
          transform_hlds__stm_expand__stm_process_goal_5_p_0(transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__Goal0_10, &transform_hlds__stm_expand__Goal_12, transform_hlds__stm_expand__STATE_VARIABLE_Info_0_14, &transform_hlds__stm_expand__STATE_VARIABLE_Info_16_16);
        }
        {
          transform_hlds__stm_expand__stm_process_disj_5_p_0(transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__Goals0_11, &transform_hlds__stm_expand__Goals_13, transform_hlds__stm_expand__STATE_VARIABLE_Info_16_16, transform_hlds__stm_expand__STATE_VARIABLE_Info_15);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__stm_expand__GoalList_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_12));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__stm_expand__Goals_13));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__stm_process_conj_5_p_0(
  MR_Word transform_hlds__stm_expand__Instmap0_6,
  MR_Word transform_hlds__stm_expand__GoalList0_7,
  MR_Word * transform_hlds__stm_expand__GoalList_8,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_0_18,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Info_19)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;

    if ((transform_hlds__stm_expand__GoalList0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__stm_expand__GoalList_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__stm_expand__STATE_VARIABLE_Info_19 = transform_hlds__stm_expand__STATE_VARIABLE_Info_0_18;
      }
    else
      {
        MR_Word transform_hlds__stm_expand__Goal0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalList0_7, (MR_Integer) 0)));
        MR_Word transform_hlds__stm_expand__Goals0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalList0_7, (MR_Integer) 1)));
        MR_Word transform_hlds__stm_expand__InstmapDelta_12;
        MR_Word transform_hlds__stm_expand__GoalInfo_13;
        MR_Word transform_hlds__stm_expand__Goal_14;
        MR_Word transform_hlds__stm_expand__Instmap_16;
        MR_Word transform_hlds__stm_expand__Goals_17;
        MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_20_20;
        MR_Word transform_hlds__stm_expand__V_15_15;

        {
          transform_hlds__stm_expand__stm_process_goal_5_p_0(transform_hlds__stm_expand__Instmap0_6, transform_hlds__stm_expand__Goal0_10, &transform_hlds__stm_expand__Goal_14, transform_hlds__stm_expand__STATE_VARIABLE_Info_0_18, &transform_hlds__stm_expand__STATE_VARIABLE_Info_20_20);
        }
        transform_hlds__stm_expand__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Goal0_10, (MR_Integer) 0)));
        transform_hlds__stm_expand__GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Goal0_10, (MR_Integer) 1)));
        {
          transform_hlds__stm_expand__InstmapDelta_12 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__stm_expand__GoalInfo_13);
        }
        {
          hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__stm_expand__Instmap0_6, transform_hlds__stm_expand__InstmapDelta_12, &transform_hlds__stm_expand__Instmap_16);
        }
        {
          transform_hlds__stm_expand__stm_process_conj_5_p_0(transform_hlds__stm_expand__Instmap_16, transform_hlds__stm_expand__Goals0_11, &transform_hlds__stm_expand__Goals_17, transform_hlds__stm_expand__STATE_VARIABLE_Info_20_20, transform_hlds__stm_expand__STATE_VARIABLE_Info_19);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__stm_expand__GoalList_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_14));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__stm_expand__Goals_17));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__stm_process_goal_5_p_0(
  MR_Word transform_hlds__stm_expand__Instmap_6,
  MR_Word transform_hlds__stm_expand__Goal0_7,
  MR_Word * transform_hlds__stm_expand__Goal_8,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_0_96,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_Info_97)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__GoalExpr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Goal0_7, (MR_Integer) 0)));
    MR_Word transform_hlds__stm_expand__GoalInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__Goal0_7, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) transform_hlds__stm_expand__GoalExpr0_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__stm_expand__SubGoal0_23 = (MR_Word) MR_body(((MR_Word) transform_hlds__stm_expand__GoalExpr0_10), (MR_Integer) 0);
          MR_Word transform_hlds__stm_expand__SubGoal_24;
          MR_Word transform_hlds__stm_expand__GoalExpr_120;

          {
            transform_hlds__stm_expand__stm_process_goal_5_p_0(transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__SubGoal0_23, &transform_hlds__stm_expand__SubGoal_24, transform_hlds__stm_expand__STATE_VARIABLE_Info_0_96, transform_hlds__stm_expand__STATE_VARIABLE_Info_97);
          }
          transform_hlds__stm_expand__GoalExpr_120 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__stm_expand__SubGoal_24);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *transform_hlds__stm_expand__Goal_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__GoalExpr_120));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo0_11));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *transform_hlds__stm_expand__Goal_8 = transform_hlds__stm_expand__Goal0_7;
          *transform_hlds__stm_expand__STATE_VARIABLE_Info_97 = transform_hlds__stm_expand__STATE_VARIABLE_Info_0_96;
        }
        break;
      case (MR_Integer) 2:
        {
          *transform_hlds__stm_expand__Goal_8 = transform_hlds__stm_expand__Goal0_7;
          *transform_hlds__stm_expand__STATE_VARIABLE_Info_97 = transform_hlds__stm_expand__STATE_VARIABLE_Info_0_96;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              *transform_hlds__stm_expand__Goal_8 = transform_hlds__stm_expand__Goal0_7;
              *transform_hlds__stm_expand__STATE_VARIABLE_Info_97 = transform_hlds__stm_expand__STATE_VARIABLE_Info_0_96;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__stm_expand__ConjType_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 1)));
              MR_Word transform_hlds__stm_expand__Conjuncts0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 2)));
              MR_Word transform_hlds__stm_expand__Conjuncts_19;
              MR_Word transform_hlds__stm_expand__GoalExpr_20;

              {
                transform_hlds__stm_expand__stm_process_conj_5_p_0(transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__Conjuncts0_18, &transform_hlds__stm_expand__Conjuncts_19, transform_hlds__stm_expand__STATE_VARIABLE_Info_0_96, transform_hlds__stm_expand__STATE_VARIABLE_Info_97);
              }
              {
                transform_hlds__stm_expand__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_20, 1) = ((MR_Box) (transform_hlds__stm_expand__ConjType_17));
                MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_20, 2) = ((MR_Box) (transform_hlds__stm_expand__Conjuncts_19));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__stm_expand__Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__GoalExpr_20));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo0_11));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word transform_hlds__stm_expand__Disjuncts0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 1)));
              MR_Word transform_hlds__stm_expand__Disjuncts_22;
              MR_Word transform_hlds__stm_expand__GoalExpr_119;

              {
                transform_hlds__stm_expand__stm_process_disj_5_p_0(transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__Disjuncts0_21, &transform_hlds__stm_expand__Disjuncts_22, transform_hlds__stm_expand__STATE_VARIABLE_Info_0_96, transform_hlds__stm_expand__STATE_VARIABLE_Info_97);
              }
              {
                transform_hlds__stm_expand__GoalExpr_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_119, 1) = ((MR_Box) (transform_hlds__stm_expand__Disjuncts_22));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__stm_expand__Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__GoalExpr_119));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo0_11));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word transform_hlds__stm_expand__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 1)));
              MR_Word transform_hlds__stm_expand__CanFail_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 2)));
              MR_Word transform_hlds__stm_expand__Cases0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 3)));
              MR_Word transform_hlds__stm_expand__Cases_28;
              MR_Word transform_hlds__stm_expand__GoalExpr_121;

              {
                transform_hlds__stm_expand__stm_process_switch_cases_5_p_0(transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__Cases0_27, &transform_hlds__stm_expand__Cases_28, transform_hlds__stm_expand__STATE_VARIABLE_Info_0_96, transform_hlds__stm_expand__STATE_VARIABLE_Info_97);
              }
              {
                transform_hlds__stm_expand__GoalExpr_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_121, 1) = ((MR_Box) (transform_hlds__stm_expand__Var_25));
                MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_121, 2) = ((MR_Box) (transform_hlds__stm_expand__CanFail_26));
                MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_121, 3) = ((MR_Box) (transform_hlds__stm_expand__Cases_28));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__stm_expand__Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__GoalExpr_121));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo0_11));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word transform_hlds__stm_expand__Reason_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 1)));
              MR_Word transform_hlds__stm_expand__InnerGoal0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 2)));

              switch (MR_tag((MR_Word) transform_hlds__stm_expand__Reason_29)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    MR_Word transform_hlds__stm_expand__GoalExpr_125;
                    MR_Word transform_hlds__stm_expand__InnerGoal_126;

                    {
                      transform_hlds__stm_expand__stm_process_goal_5_p_0(transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__InnerGoal0_30, &transform_hlds__stm_expand__InnerGoal_126, transform_hlds__stm_expand__STATE_VARIABLE_Info_0_96, transform_hlds__stm_expand__STATE_VARIABLE_Info_97);
                    }
                    {
                      transform_hlds__stm_expand__GoalExpr_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_125, 1) = ((MR_Box) (transform_hlds__stm_expand__Reason_29));
                      MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_125, 2) = ((MR_Box) (transform_hlds__stm_expand__InnerGoal_126));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      *transform_hlds__stm_expand__Goal_8 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__GoalExpr_125));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo0_11));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__Reason_29, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.stm_process_goal\'/5", (MR_String) "unexpected scope");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                    case (MR_Integer) 4:
                    case (MR_Integer) 6:
                    case (MR_Integer) 7:
                      {
                        MR_Word transform_hlds__stm_expand__GoalExpr_125;
                        MR_Word transform_hlds__stm_expand__InnerGoal_126;

                        {
                          transform_hlds__stm_expand__stm_process_goal_5_p_0(transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__InnerGoal0_30, &transform_hlds__stm_expand__InnerGoal_126, transform_hlds__stm_expand__STATE_VARIABLE_Info_0_96, transform_hlds__stm_expand__STATE_VARIABLE_Info_97);
                        }
                        {
                          transform_hlds__stm_expand__GoalExpr_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_125, 1) = ((MR_Box) (transform_hlds__stm_expand__Reason_29));
                          MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_125, 2) = ((MR_Box) (transform_hlds__stm_expand__InnerGoal_126));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          *transform_hlds__stm_expand__Goal_8 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__GoalExpr_125));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo0_11));
                        }
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Word transform_hlds__stm_expand__FGT_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__Reason_29, (MR_Integer) 2)));
                        MR_Word transform_hlds__stm_expand__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__Reason_29, (MR_Integer) 1)));

                        switch (transform_hlds__stm_expand__FGT_32) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                          case (MR_Integer) 2:
                            {
                              *transform_hlds__stm_expand__Goal_8 = transform_hlds__stm_expand__Goal0_7;
                              *transform_hlds__stm_expand__STATE_VARIABLE_Info_97 = transform_hlds__stm_expand__STATE_VARIABLE_Info_0_96;
                            }
                            break;
                          case (MR_Integer) 0:
                            {
                              {
                                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.stm_process_goal\'/5", (MR_String) "unexpected scope");
                                return;
                              }
                            }
                            break;
                          case (MR_Integer) 3:
                            {
                              MR_Word transform_hlds__stm_expand__InnerGoal_33;
                              MR_Word transform_hlds__stm_expand__GoalExpr_122;

                              {
                                transform_hlds__stm_expand__stm_process_goal_5_p_0(transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__InnerGoal0_30, &transform_hlds__stm_expand__InnerGoal_33, transform_hlds__stm_expand__STATE_VARIABLE_Info_0_96, transform_hlds__stm_expand__STATE_VARIABLE_Info_97);
                              }
                              {
                                transform_hlds__stm_expand__GoalExpr_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                                MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_122, 1) = ((MR_Box) (transform_hlds__stm_expand__Reason_29));
                                MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_122, 2) = ((MR_Box) (transform_hlds__stm_expand__InnerGoal_33));
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                *transform_hlds__stm_expand__Goal_8 = base;
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__GoalExpr_122));
                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo0_11));
                              }
                            }
                            break;
                        }
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word transform_hlds__stm_expand__Vars_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 1)));
              MR_Word transform_hlds__stm_expand__Cond0_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 2)));
              MR_Word transform_hlds__stm_expand__Then0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 3)));
              MR_Word transform_hlds__stm_expand__Else0_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 4)));
              MR_Word transform_hlds__stm_expand__Cond_56;
              MR_Word transform_hlds__stm_expand__Then_57;
              MR_Word transform_hlds__stm_expand__Else_58;
              MR_Word transform_hlds__stm_expand__GoalExpr_129;

              {
                transform_hlds__stm_expand__stm_process_if_then_else_9_p_0(transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__Cond0_53, transform_hlds__stm_expand__Then0_54, transform_hlds__stm_expand__Else0_55, &transform_hlds__stm_expand__Cond_56, &transform_hlds__stm_expand__Then_57, &transform_hlds__stm_expand__Else_58, transform_hlds__stm_expand__STATE_VARIABLE_Info_0_96, transform_hlds__stm_expand__STATE_VARIABLE_Info_97);
              }
              {
                transform_hlds__stm_expand__GoalExpr_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_129, 1) = ((MR_Box) (transform_hlds__stm_expand__Vars_52));
                MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_129, 2) = ((MR_Box) (transform_hlds__stm_expand__Cond_56));
                MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_129, 3) = ((MR_Box) (transform_hlds__stm_expand__Then_57));
                MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr_129, 4) = ((MR_Box) (transform_hlds__stm_expand__Else_58));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__stm_expand__Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__stm_expand__GoalExpr_129));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__stm_expand__GoalInfo0_11));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word transform_hlds__stm_expand__ShortHand0_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__stm_expand__GoalExpr0_10, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) transform_hlds__stm_expand__ShortHand0_77)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.stm_process_goal\'/5", (MR_String) "bi_implication");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word transform_hlds__stm_expand__TypeCtorInfo_130_130;
                    MR_Word transform_hlds__stm_expand__GoalType_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__ShortHand0_77, (MR_Integer) 0)));
                    MR_Word transform_hlds__stm_expand__Outer_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__ShortHand0_77, (MR_Integer) 1)));
                    MR_Word transform_hlds__stm_expand__GoalDisj_86;
                    MR_Word transform_hlds__stm_expand__MainGoal_87;
                    MR_Word transform_hlds__stm_expand__OrElseGoals_88;
                    MR_Word transform_hlds__stm_expand__InstmapDelta_89;
                    MR_Word transform_hlds__stm_expand__FinalInstmap_90;
                    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_104_104;
                    MR_Word transform_hlds__stm_expand__Goal0_137 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__ShortHand0_77, (MR_Integer) 4)));
                    MR_Word transform_hlds__stm_expand__Goals0_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__ShortHand0_77, (MR_Integer) 5)));
                    MR_Word transform_hlds__stm_expand__Goal_139;
                    MR_Word transform_hlds__stm_expand__Goals_140;
                    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_Info_16_141;
                    MR_Word transform_hlds__stm_expand__Inner_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__ShortHand0_77, (MR_Integer) 2)));
                    MR_Word transform_hlds__stm_expand___MaybeOutputVars_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__ShortHand0_77, (MR_Integer) 3)));
                    MR_Word transform_hlds__stm_expand___OrElseInners_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__ShortHand0_77, (MR_Integer) 6)));
                    MR_Box transform_hlds__stm_expand__conv0_MainGoal_87;

                    {
                      transform_hlds__stm_expand__stm_process_goal_5_p_0(transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__Goal0_137, &transform_hlds__stm_expand__Goal_139, transform_hlds__stm_expand__STATE_VARIABLE_Info_0_96, &transform_hlds__stm_expand__STATE_VARIABLE_Info_16_141);
                    }
                    {
                      transform_hlds__stm_expand__stm_process_disj_5_p_0(transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__Goals0_138, &transform_hlds__stm_expand__Goals_140, transform_hlds__stm_expand__STATE_VARIABLE_Info_16_141, &transform_hlds__stm_expand__STATE_VARIABLE_Info_104_104);
                    }
                    {
                      transform_hlds__stm_expand__GoalDisj_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalDisj_86, 0) = ((MR_Box) (transform_hlds__stm_expand__Goal_139));
                      MR_hl_field(MR_mktag(1), transform_hlds__stm_expand__GoalDisj_86, 1) = ((MR_Box) (transform_hlds__stm_expand__Goals_140));
                    }
                    transform_hlds__stm_expand__TypeCtorInfo_130_130 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                    {
                      transform_hlds__stm_expand__conv0_MainGoal_87 = mercury__list__det_head_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_130_130, transform_hlds__stm_expand__GoalDisj_86);
                    }
                    transform_hlds__stm_expand__MainGoal_87 = ((MR_Word) transform_hlds__stm_expand__conv0_MainGoal_87);
                    {
                      transform_hlds__stm_expand__OrElseGoals_88 = mercury__list__det_tail_1_f_0(transform_hlds__stm_expand__TypeCtorInfo_130_130, transform_hlds__stm_expand__GoalDisj_86);
                    }
                    {
                      transform_hlds__stm_expand__InstmapDelta_89 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__stm_expand__GoalInfo0_11);
                    }
                    {
                      hlds__instmap__apply_instmap_delta_3_p_0(transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__InstmapDelta_89, &transform_hlds__stm_expand__FinalInstmap_90);
                    }
                    {
                      transform_hlds__stm_expand__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_109_95_99_114_101_97_116_101_95_97_99_116_117_97_108_95_103_111_97_108_95_95_91_53_93_95_48_10_p_0(transform_hlds__stm_expand__GoalType_78, transform_hlds__stm_expand__Instmap_6, transform_hlds__stm_expand__FinalInstmap_90, transform_hlds__stm_expand__Outer_79, transform_hlds__stm_expand__MainGoal_87, transform_hlds__stm_expand__OrElseGoals_88, transform_hlds__stm_expand__Goal_8, transform_hlds__stm_expand__STATE_VARIABLE_Info_104_104, transform_hlds__stm_expand__STATE_VARIABLE_Info_97);
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.stm_expand", (MR_String) "predicate \140transform_hlds.stm_expand.stm_process_goal\'/5", (MR_String) "try_goal");
                      return;
                    }
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

static void MR_CALL 
transform_hlds__stm_expand__stm_process_proc_4_p_0(
  MR_Word transform_hlds__stm_expand__PredId_5,
  MR_Integer transform_hlds__stm_expand__ProcId_6,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_20)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_23_23;
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_24_24;
    MR_Word transform_hlds__stm_expand__TypeCtorInfo_26_26;
    MR_Word transform_hlds__stm_expand__PredTable0_8;
    MR_Word transform_hlds__stm_expand__PredInfo0_9;
    MR_Word transform_hlds__stm_expand__ProcTable0_10;
    MR_Word transform_hlds__stm_expand__ProcInfo0_11;
    MR_Word transform_hlds__stm_expand__ProcInfo_12;
    MR_Word transform_hlds__stm_expand__PredInfo1_13;
    MR_Word transform_hlds__stm_expand__ProcTable1_14;
    MR_Word transform_hlds__stm_expand__ProcTable_15;
    MR_Word transform_hlds__stm_expand__PredInfo_16;
    MR_Word transform_hlds__stm_expand__PredTable1_17;
    MR_Word transform_hlds__stm_expand__PredTable_18;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_21_21;
    MR_Word transform_hlds__stm_expand__Goal0_38;
    MR_Word transform_hlds__stm_expand__InitInstmap_39;
    MR_Word transform_hlds__stm_expand__StmInfo0_40;
    MR_Word transform_hlds__stm_expand__Goal_41;
    MR_Word transform_hlds__stm_expand__StmInfo_42;
    MR_Word transform_hlds__stm_expand__RecalcInfo_45;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_31_49;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_ProcInfo_32_50;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_ProcInfo_34_52;
    MR_Box transform_hlds__stm_expand__conv0_PredInfo0_9;
    MR_Box transform_hlds__stm_expand__conv1_ProcInfo0_11;
    MR_Word transform_hlds__stm_expand__V_43_43;
    MR_Integer transform_hlds__stm_expand__V_44_44;
    MR_Integer transform_hlds__stm_expand__V_46_46;

    {
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_0_19, &transform_hlds__stm_expand__PredTable0_8);
    }
    transform_hlds__stm_expand__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    transform_hlds__stm_expand__TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
    {
      mercury__map__lookup_3_p_0(transform_hlds__stm_expand__TypeCtorInfo_23_23, transform_hlds__stm_expand__TypeCtorInfo_24_24, transform_hlds__stm_expand__PredTable0_8, ((MR_Box) (transform_hlds__stm_expand__PredId_5)), &transform_hlds__stm_expand__conv0_PredInfo0_9);
    }
    transform_hlds__stm_expand__PredInfo0_9 = ((MR_Word) transform_hlds__stm_expand__conv0_PredInfo0_9);
    {
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__stm_expand__PredInfo0_9, &transform_hlds__stm_expand__ProcTable0_10);
    }
    transform_hlds__stm_expand__TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__stm_expand__TypeCtorInfo_26_26, transform_hlds__stm_expand__ProcTable0_10, transform_hlds__stm_expand__ProcId_6, &transform_hlds__stm_expand__conv1_ProcInfo0_11);
    }
    transform_hlds__stm_expand__ProcInfo0_11 = ((MR_Word) transform_hlds__stm_expand__conv1_ProcInfo0_11);
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__stm_expand__ProcInfo0_11, &transform_hlds__stm_expand__Goal0_38);
    }
    {
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__stm_expand__ProcInfo0_11, transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_0_19, &transform_hlds__stm_expand__InitInstmap_39);
    }
    {
      transform_hlds__stm_expand__StmInfo0_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_40, 0) = ((MR_Box) (transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_0_19));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_40, 1) = ((MR_Box) (transform_hlds__stm_expand__PredId_5));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_40, 2) = ((MR_Box) (transform_hlds__stm_expand__ProcId_6));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_40, 3) = ((MR_Box) (transform_hlds__stm_expand__ProcInfo0_11));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_40, 4) = ((MR_Box) (transform_hlds__stm_expand__PredInfo0_9));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_40, 5) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo0_40, 6) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      transform_hlds__stm_expand__stm_process_goal_5_p_0(transform_hlds__stm_expand__InitInstmap_39, transform_hlds__stm_expand__Goal0_38, &transform_hlds__stm_expand__Goal_41, transform_hlds__stm_expand__StmInfo0_40, &transform_hlds__stm_expand__StmInfo_42);
    }
    transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_31_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_42, (MR_Integer) 0)));
    transform_hlds__stm_expand__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_42, (MR_Integer) 1)));
    transform_hlds__stm_expand__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_42, (MR_Integer) 2)));
    transform_hlds__stm_expand__STATE_VARIABLE_ProcInfo_32_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_42, (MR_Integer) 3)));
    transform_hlds__stm_expand__PredInfo1_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_42, (MR_Integer) 4)));
    transform_hlds__stm_expand__RecalcInfo_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_42, (MR_Integer) 5)));
    transform_hlds__stm_expand__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__StmInfo_42, (MR_Integer) 6)));
    {
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__stm_expand__Goal_41, transform_hlds__stm_expand__STATE_VARIABLE_ProcInfo_32_50, &transform_hlds__stm_expand__STATE_VARIABLE_ProcInfo_34_52);
    }
    switch (transform_hlds__stm_expand__RecalcInfo_45) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          transform_hlds__stm_expand__ProcInfo_12 = transform_hlds__stm_expand__STATE_VARIABLE_ProcInfo_34_52;
          transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_21_21 = transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_31_49;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__stm_expand__STATE_VARIABLE_ProcInfo_36_54;

          {
            hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__stm_expand__STATE_VARIABLE_ProcInfo_34_52, &transform_hlds__stm_expand__STATE_VARIABLE_ProcInfo_36_54);
          }
          {
            check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, transform_hlds__stm_expand__STATE_VARIABLE_ProcInfo_36_54, &transform_hlds__stm_expand__ProcInfo_12, transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_31_49, &transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_21_21);
          }
        }
        break;
    }
    {
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__stm_expand__PredInfo1_13, &transform_hlds__stm_expand__ProcTable1_14);
    }
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__stm_expand__TypeCtorInfo_26_26, transform_hlds__stm_expand__ProcId_6, ((MR_Box) (transform_hlds__stm_expand__ProcInfo_12)), transform_hlds__stm_expand__ProcTable1_14, &transform_hlds__stm_expand__ProcTable_15);
    }
    {
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__stm_expand__ProcTable_15, transform_hlds__stm_expand__PredInfo1_13, &transform_hlds__stm_expand__PredInfo_16);
    }
    {
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_21_21, &transform_hlds__stm_expand__PredTable1_17);
    }
    {
      mercury__map__det_update_4_p_0(transform_hlds__stm_expand__TypeCtorInfo_23_23, transform_hlds__stm_expand__TypeCtorInfo_24_24, ((MR_Box) (transform_hlds__stm_expand__PredId_5)), ((MR_Box) (transform_hlds__stm_expand__PredInfo_16)), transform_hlds__stm_expand__PredTable1_17, &transform_hlds__stm_expand__PredTable_18);
    }
    {
      hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__stm_expand__PredTable_18, transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_21_21, transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_20);
    }
  }
}

static void MR_CALL 
transform_hlds__stm_expand__stm_process_pred_3_p_0_1(
  MR_Box transform_hlds__stm_expand__closure_arg,
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box transform_hlds__stm_expand__wrapper_arg_2,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
    MR_Word transform_hlds__stm_expand__conv0_STATE_VARIABLE_ModuleInfo_20;

    {
      transform_hlds__stm_expand__stm_process_proc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__closure, (MR_Integer) 3))), ((MR_Integer) transform_hlds__stm_expand__wrapper_arg_1), ((MR_Word) transform_hlds__stm_expand__wrapper_arg_2), &transform_hlds__stm_expand__conv0_STATE_VARIABLE_ModuleInfo_20);
    }
    *transform_hlds__stm_expand__wrapper_arg_3 = ((MR_Box) (transform_hlds__stm_expand__conv0_STATE_VARIABLE_ModuleInfo_20));
  }
}

static void MR_CALL 
transform_hlds__stm_expand__stm_process_pred_3_p_0(
  MR_Word transform_hlds__stm_expand__PredId_4,
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__PredInfo_6;
    MR_Word transform_hlds__stm_expand__ProcIds_7;
    MR_Word transform_hlds__stm_expand__V_10_10;
    MR_Box transform_hlds__stm_expand__conv1_STATE_VARIABLE_ModuleInfo_9;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_0_8, transform_hlds__stm_expand__PredId_4, &transform_hlds__stm_expand__PredInfo_6);
    }
    {
      transform_hlds__stm_expand__ProcIds_7 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__stm_expand__PredInfo_6);
    }
    {
      transform_hlds__stm_expand__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_10_10, 0) = ((MR_Box) (&transform_hlds__stm_expand_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_10_10, 1) = ((MR_Box) (transform_hlds__stm_expand__stm_process_pred_3_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__stm_expand__V_10_10, 3) = ((MR_Box) (transform_hlds__stm_expand__PredId_4));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__stm_expand__V_10_10, transform_hlds__stm_expand__ProcIds_7, ((MR_Box) (transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_0_8)), &transform_hlds__stm_expand__conv1_STATE_VARIABLE_ModuleInfo_9);
    }
    *transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) transform_hlds__stm_expand__conv1_STATE_VARIABLE_ModuleInfo_9);
  }
}

static void MR_CALL 
transform_hlds__stm_expand__stm_process_module_2_p_0_1(
  MR_Box transform_hlds__stm_expand__closure_arg,
  MR_Box transform_hlds__stm_expand__wrapper_arg_1,
  MR_Box transform_hlds__stm_expand__wrapper_arg_2,
  MR_Box * transform_hlds__stm_expand__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__stm_expand__closure = transform_hlds__stm_expand__closure_arg;
    MR_Word transform_hlds__stm_expand__conv0_STATE_VARIABLE_ModuleInfo_9;

    {
      transform_hlds__stm_expand__stm_process_pred_3_p_0(((MR_Word) transform_hlds__stm_expand__wrapper_arg_1), ((MR_Word) transform_hlds__stm_expand__wrapper_arg_2), &transform_hlds__stm_expand__conv0_STATE_VARIABLE_ModuleInfo_9);
    }
    *transform_hlds__stm_expand__wrapper_arg_3 = ((MR_Box) (transform_hlds__stm_expand__conv0_STATE_VARIABLE_ModuleInfo_9));
  }
}

void MR_CALL 
transform_hlds__stm_expand__stm_process_module_2_p_0(
  MR_Word transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_6)
{
  {
    MR_bool transform_hlds__stm_expand__succeeded;
    MR_Word transform_hlds__stm_expand__PredIds_4;
    MR_Word transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_8_8;
    MR_Box transform_hlds__stm_expand__conv1_STATE_VARIABLE_ModuleInfo_8_8;

    {
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_0_5, &transform_hlds__stm_expand__PredIds_4);
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__stm_expand_scalar_common_2[2], transform_hlds__stm_expand__PredIds_4, ((MR_Box) (transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_0_5)), &transform_hlds__stm_expand__conv1_STATE_VARIABLE_ModuleInfo_8_8);
    }
    transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_8_8 = ((MR_Word) transform_hlds__stm_expand__conv1_STATE_VARIABLE_ModuleInfo_8_8);
    {
      hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_8_8, transform_hlds__stm_expand__STATE_VARIABLE_ModuleInfo_6);
    }
  }
}

void mercury__transform_hlds__stm_expand__init(void)
{
}

void mercury__transform_hlds__stm_expand__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_goal_vars_0);
	MR_register_type_ctor_info(&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_info_0);
	MR_register_type_ctor_info(&transform_hlds__stm_expand__transform_hlds__stm_expand__type_ctor_info_stm_new_pred_info_0);
}

void mercury__transform_hlds__stm_expand__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.stm_expand. */
