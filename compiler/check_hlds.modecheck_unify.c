/*
** Automatically generated from `modecheck_unify.m'
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


/* :- module check_hlds.modecheck_unify. */
/* :- implementation. */

/*
INIT mercury__check_hlds__modecheck_unify__init
ENDINIT
*/

#include "check_hlds.modecheck_unify.mih"


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
#include "check_hlds.inst_match.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.inst_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_debug.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.modecheck_goal.mih"
#include "check_hlds.modecheck_util.mih"
#include "check_hlds.modes.mih"
#include "check_hlds.polymorphism.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "check_hlds.unique_modes.mih"
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
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
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



struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s {
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16;
  MR_bool check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded;
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_24;
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ModuleInfo0_29;
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__VarTypes_30;
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstsOfArgVars_31;
  jmp_buf check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__commit_0;
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__TypeInfo_106_106;
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstArg_37;
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVar_38;
  MR_Word check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgType_39;
  MR_Box check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__conv0_InstArg_37;
  MR_Box check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__conv1_ArgVar_38;
};


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_unify__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_unify__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__maybe__pti_maybe_1__plain_list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modecheck_unify__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_EnumFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_0;

static const MR_EnumFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_1;

static const MR_EnumFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_2;

static const MR_EnumFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_value_ordered_match_mode_result_0[3];

static const MR_EnumFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_name_ordered_match_mode_result_0[3];

static const MR_Integer check_hlds__modecheck_unify__check_hlds__modecheck_unify__functor_number_map_match_mode_result_0[3];

static const MR_PseudoTypeInfo check_hlds__modecheck_unify__check_hlds__modecheck_unify__field_types_match_modes_result_0_0[1];

static const MR_DuFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_functor_desc_match_modes_result_0_0;

static const MR_DuFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_functor_desc_match_modes_result_0_1;

static const MR_DuFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_stag_ordered_match_modes_result_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_stag_ordered_match_modes_result_0_1[1];

static const MR_DuPtagLayout check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_ptag_ordered_match_modes_result_0[2];

static const MR_DuFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_name_ordered_match_modes_result_0[2];

static const MR_Integer check_hlds__modecheck_unify__check_hlds__modecheck_unify__functor_number_map_match_modes_result_0[2];

static MR_bool MR_CALL 
check_hlds__modecheck_unify____Unify____match_mode_result_0_0_10001(
  MR_Box check_hlds__modecheck_unify__wrapper_arg_1,
  MR_Box check_hlds__modecheck_unify__wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_unify____Compare____match_mode_result_0_0_10001(
  MR_Box * check_hlds__modecheck_unify__wrapper_arg_1,
  MR_Box check_hlds__modecheck_unify__wrapper_arg_2,
  MR_Box check_hlds__modecheck_unify__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__modecheck_unify____Unify____match_modes_result_0_0_10001(
  MR_Box check_hlds__modecheck_unify__wrapper_arg_1,
  MR_Box check_hlds__modecheck_unify__wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_unify____Compare____match_modes_result_0_0_10001(
  MR_Box * check_hlds__modecheck_unify__wrapper_arg_1,
  MR_Box check_hlds__modecheck_unify__wrapper_arg_2,
  MR_Box check_hlds__modecheck_unify__wrapper_arg_3);

static void MR_CALL 
check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_116_121_112_101_95_105_110_102_111_95_97_114_103_115_95_97_114_101_95_103_114_111_117_110_100_95_95_91_51_93_95_48_5_p_0(
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_5);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0_2(
  MR_Box check_hlds__modecheck_unify__closure_arg,
  MR_Box check_hlds__modecheck_unify__wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0_1(
  MR_Box check_hlds__modecheck_unify__closure_arg,
  MR_Box check_hlds__modecheck_unify__wrapper_arg_1);

static void MR_CALL 
check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0(
  MR_Word check_hlds__modecheck_unify__X_9,
  MR_Word check_hlds__modecheck_unify__LambdaRHS_10,
  MR_Word check_hlds__modecheck_unify__Unification0_11,
  MR_Word check_hlds__modecheck_unify__UnifyContext_12,
  MR_Word * check_hlds__modecheck_unify__UnifyGoalExpr_14,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_68,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_69);

static MR_Word MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__func__bind_args_if_needed__1604__1_1_f_0(
  MR_Word check_hlds__modecheck_unify__LambdaHeadVar__1_19);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__categorize_unify_var_functor__1374__1_2_p_0(
  MR_Word check_hlds__modecheck_unify__MaybeTakeAddr_32,
  MR_Word check_hlds__modecheck_unify__HeadVar__2_76);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__categorize_unify_var_lambda__1269__1_2_p_0(
  MR_Word check_hlds__modecheck_unify__MaybeTakeAddr_30,
  MR_Word check_hlds__modecheck_unify__HeadVar__2_91);

static MR_Word MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__func__modecheck_unify_lambda__508__1_1_f_0(
  MR_Word check_hlds__modecheck_unify__LambdaHeadVar__1_49);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_rhs_lambda__458__1_3_p_0(
  MR_Word check_hlds__modecheck_unify__InstMap1_33,
  MR_Word check_hlds__modecheck_unify__ModuleInfo2_48,
  MR_Word check_hlds__modecheck_unify__LambdaHeadVar__1_96);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_rhs_lambda__379__1_4_p_0(
  MR_Word check_hlds__modecheck_unify__ModuleInfo0_25,
  MR_Word check_hlds__modecheck_unify__InstMap1_33,
  MR_Word check_hlds__modecheck_unify__NonLocalTypes_42,
  MR_Word check_hlds__modecheck_unify__LambdaHeadVar__1_73);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_functor__276__1_2_p_0(
  MR_Word check_hlds__modecheck_unify__ArgVars0_14,
  MR_Word check_hlds__modecheck_unify__HeadVar__2_59);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_functor__274__1_2_p_0(
  MR_Word check_hlds__modecheck_unify__IsExistConstruction_13,
  MR_Word check_hlds__modecheck_unify__HeadVar__2_54);

static void MR_CALL 
check_hlds__modecheck_unify____Compare____match_modes_result_0_0(
  MR_Word * check_hlds__modecheck_unify__HeadVar__1_1,
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
  MR_Word check_hlds__modecheck_unify__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__modecheck_unify____Unify____match_modes_result_0_0(
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2);

static void MR_CALL 
check_hlds__modecheck_unify____Compare____match_mode_result_0_0(
  MR_Word * check_hlds__modecheck_unify__HeadVar__1_1,
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
  MR_Word check_hlds__modecheck_unify__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__modecheck_unify____Unify____match_mode_result_0_0(
  MR_Word check_hlds__modecheck_unify__HeadVar__2_1,
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2);

static void MR_CALL 
check_hlds__modecheck_unify__pair_with_final_inst_3_p_0(
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
  MR_Word check_hlds__modecheck_unify__FinalInst_2,
  MR_Word * check_hlds__modecheck_unify__HeadVar__3_3);

static void MR_CALL 
check_hlds__modecheck_unify__pair_up_insts_3_p_0(
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
  MR_Word * check_hlds__modecheck_unify__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__try_get_mode_of_args_3_p_0(
  MR_Word check_hlds__modecheck_unify__ArgInitInsts_4,
  MR_Word check_hlds__modecheck_unify__FinalInst_5,
  MR_Word * check_hlds__modecheck_unify__ArgFromToInsts_6);

static void MR_CALL 
check_hlds__modecheck_unify__get_mode_of_args_3_p_0(
  MR_Word check_hlds__modecheck_unify__ArgInitInsts_4,
  MR_Word check_hlds__modecheck_unify__FinalInst_5,
  MR_Word * check_hlds__modecheck_unify__ArgFromToInsts_6);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__ground_args_5_p_0(
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
  MR_Word check_hlds__modecheck_unify__HeadVar__3_3,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_5);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__try_bind_args_2_5_p_0(
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
  MR_Word check_hlds__modecheck_unify__HeadVar__3_3,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_5);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__try_bind_args_5_p_0(
  MR_Word check_hlds__modecheck_unify__Inst_6,
  MR_Word check_hlds__modecheck_unify__ArgVars_7,
  MR_Word check_hlds__modecheck_unify__UnifyArgInsts_8,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20);

static MR_Box MR_CALL 
check_hlds__modecheck_unify__bind_args_if_needed_6_p_0_1(
  MR_Box check_hlds__modecheck_unify__closure_arg,
  MR_Box check_hlds__modecheck_unify__wrapper_arg_1);

static void MR_CALL 
check_hlds__modecheck_unify__bind_args_if_needed_6_p_0(
  MR_Word check_hlds__modecheck_unify__InstOfX_7,
  MR_Word check_hlds__modecheck_unify__Inst_8,
  MR_Word check_hlds__modecheck_unify__ArgVars_9,
  MR_Word check_hlds__modecheck_unify__InstOfXArgs_10,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_16,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_17);

static void MR_CALL 
check_hlds__modecheck_unify__match_mode_by_higher_order_insts_6_p_0(
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
  MR_Word check_hlds__modecheck_unify__HeadVar__3_3,
  MR_Word check_hlds__modecheck_unify__HeadVar__4_4,
  MR_Word check_hlds__modecheck_unify__ArgModesList_5,
  MR_Word * check_hlds__modecheck_unify__HeadVar__6_6);

static void MR_CALL 
check_hlds__modecheck_unify__match_modes_by_higher_order_insts_2_8_p_0(
  MR_Word check_hlds__modecheck_unify__ModuleInfo_1,
  MR_Word check_hlds__modecheck_unify__InstMap_2,
  MR_Word check_hlds__modecheck_unify__VarTypes_3,
  MR_Word check_hlds__modecheck_unify__ArgVars_4,
  MR_Word check_hlds__modecheck_unify__PredInfo_5,
  MR_Word check_hlds__modecheck_unify__HeadVar__6_6,
  MR_Word check_hlds__modecheck_unify__RevMatchedProcIds_7,
  MR_Word * check_hlds__modecheck_unify__Result_8);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_functor_12_p_0_1(
  MR_Box check_hlds__modecheck_unify__closure_arg);

static void MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_functor_12_p_0(
  MR_Word check_hlds__modecheck_unify__FromToInstsOfX_13,
  MR_Word check_hlds__modecheck_unify__FromToInstsOfXArgs_14,
  MR_Word check_hlds__modecheck_unify__ArgFromToInsts_15,
  MR_Word check_hlds__modecheck_unify__X_16,
  MR_Word check_hlds__modecheck_unify__NewConsId_17,
  MR_Word check_hlds__modecheck_unify__ArgVars_18,
  MR_Word check_hlds__modecheck_unify__VarTypes_19,
  MR_Word check_hlds__modecheck_unify__UnifyContext_20,
  MR_Word check_hlds__modecheck_unify__Unification0_21,
  MR_Word * check_hlds__modecheck_unify__Unification_22,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_70,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_71);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_lambda_11_p_0_1(
  MR_Box check_hlds__modecheck_unify__closure_arg);

static void MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_lambda_11_p_0(
  MR_Word check_hlds__modecheck_unify__FromToInstsOfX_12,
  MR_Word check_hlds__modecheck_unify__ArgFromToInsts_13,
  MR_Word check_hlds__modecheck_unify__X_14,
  MR_Word check_hlds__modecheck_unify__ArgVars_15,
  MR_Word check_hlds__modecheck_unify__PredOrFunc_16,
  MR_Word check_hlds__modecheck_unify__RHS0_17,
  MR_Word * check_hlds__modecheck_unify__RHS_18,
  MR_Word check_hlds__modecheck_unify__Unification0_19,
  MR_Word * check_hlds__modecheck_unify__Unification_20,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_80,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_81);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_complicated_unify_11_p_0(
  MR_Word check_hlds__modecheck_unify__X_12,
  MR_Word check_hlds__modecheck_unify__Y_13,
  MR_Word check_hlds__modecheck_unify__Type_14,
  MR_Word check_hlds__modecheck_unify__FromToInstsOfX_15,
  MR_Word check_hlds__modecheck_unify__FromToInstsOfY_16,
  MR_Word check_hlds__modecheck_unify__Detism_17,
  MR_Word check_hlds__modecheck_unify__UnifyContext_18,
  MR_Word check_hlds__modecheck_unify__Unification0_19,
  MR_Word * check_hlds__modecheck_unify__Unification_20,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_61,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_62);

static void MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_var_14_p_0(
  MR_Word check_hlds__modecheck_unify__FromToInstsOfX_15,
  MR_Word check_hlds__modecheck_unify__FromToInstsOfY_16,
  MR_Word check_hlds__modecheck_unify__LiveX_17,
  MR_Word check_hlds__modecheck_unify__LiveY_18,
  MR_Word check_hlds__modecheck_unify__X_19,
  MR_Word check_hlds__modecheck_unify__Y_20,
  MR_Word check_hlds__modecheck_unify__Detism_21,
  MR_Word check_hlds__modecheck_unify__UnifyContext_22,
  MR_Word check_hlds__modecheck_unify__GoalInfo_23,
  MR_Word check_hlds__modecheck_unify__VarTypes_24,
  MR_Word check_hlds__modecheck_unify__Unification0_25,
  MR_Word * check_hlds__modecheck_unify__Unify_26,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_51,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_52);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__split_complicated_subunifies_2_6_p_0(
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
  MR_Word * check_hlds__modecheck_unify__HeadVar__3_3,
  MR_Word * check_hlds__modecheck_unify__HeadVar__4_4,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_5,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_6);

static void MR_CALL 
check_hlds__modecheck_unify__split_complicated_subunifies_7_p_0(
  MR_Word check_hlds__modecheck_unify__Unification0_8,
  MR_Word * check_hlds__modecheck_unify__Unification_9,
  MR_Word check_hlds__modecheck_unify__ArgVars0_10,
  MR_Word * check_hlds__modecheck_unify__ArgVars_11,
  MR_Word * check_hlds__modecheck_unify__ExtraGoals_12,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_21,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_22);

static void MR_CALL 
check_hlds__modecheck_unify__maybe_generate_cannot_succeed_warning_5_p_0(
  MR_Word check_hlds__modecheck_unify__X_6,
  MR_Word check_hlds__modecheck_unify__InstOfX_7,
  MR_Word check_hlds__modecheck_unify__ConsId_8,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20);

static void MR_CALL 
check_hlds__modecheck_unify__handle_var_functor_mode_error_9_p_0(
  MR_Word check_hlds__modecheck_unify__X_10,
  MR_Word check_hlds__modecheck_unify__InstConsId_11,
  MR_Word check_hlds__modecheck_unify__ArgVars0_12,
  MR_Word check_hlds__modecheck_unify__InstOfX_13,
  MR_Word check_hlds__modecheck_unify__InstArgs_14,
  MR_Word check_hlds__modecheck_unify__WaitingVarsList_15,
  MR_Word * check_hlds__modecheck_unify__GoalExpr_16,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_22,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_23);

static void MR_CALL 
check_hlds__modecheck_unify__ensure_exist_constr_is_construction_8_p_0(
  MR_Word check_hlds__modecheck_unify__IsExistConstruction_9,
  MR_Word check_hlds__modecheck_unify__X0_10,
  MR_Word * check_hlds__modecheck_unify__X_11,
  MR_Word * check_hlds__modecheck_unify__InstOfX_12,
  MR_Word * check_hlds__modecheck_unify__LiveX_13,
  MR_Word * check_hlds__modecheck_unify__ExtraGoals_14,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_1(
  void * check_hlds__modecheck_unify__env_ptr_arg);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_3(
  void * check_hlds__modecheck_unify__env_ptr_arg);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_5(
  void * check_hlds__modecheck_unify__env_ptr_arg);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_4(
  void * check_hlds__modecheck_unify__env_ptr_arg);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_2(
  void * check_hlds__modecheck_unify__env_ptr_arg);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_6(
  void * check_hlds__modecheck_unify__env_ptr_arg);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0(
  MR_Word check_hlds__modecheck_unify__X0_12,
  MR_Word check_hlds__modecheck_unify__TypeOfX_13,
  MR_Word check_hlds__modecheck_unify__ConsId0_14,
  MR_Word check_hlds__modecheck_unify__IsExistConstruction_15,
  MR_Word check_hlds__modecheck_unify__ArgVars0_16,
  MR_Word check_hlds__modecheck_unify__Unification0_17,
  MR_Word check_hlds__modecheck_unify__UnifyContext_18,
  MR_Word check_hlds__modecheck_unify__GoalInfo0_19,
  MR_Word * check_hlds__modecheck_unify__GoalExpr_20,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_67,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_68);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_const_struct_7_p_0(
  MR_Word check_hlds__modecheck_unify__X_8,
  MR_Word check_hlds__modecheck_unify__ConsId_9,
  MR_Integer check_hlds__modecheck_unify__ConstNum_10,
  MR_Word check_hlds__modecheck_unify__UnifyContext_11,
  MR_Word * check_hlds__modecheck_unify__UnifyGoalExpr_12,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_30,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_31);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_rhs_undetermined_mode_lambda_8_p_0(
  MR_Word check_hlds__modecheck_unify__X_9,
  MR_Word check_hlds__modecheck_unify__RHS0_10,
  MR_Word check_hlds__modecheck_unify__Unification_11,
  MR_Word check_hlds__modecheck_unify__UnifyContext_12,
  MR_Word check_hlds__modecheck_unify__GoalInfo0_13,
  MR_Word * check_hlds__modecheck_unify__Goal_14,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_42,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_43);

static MR_Box MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_lambda_12_p_0_1(
  MR_Box check_hlds__modecheck_unify__closure_arg,
  MR_Box check_hlds__modecheck_unify__wrapper_arg_1);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_lambda_12_p_0(
  MR_Word check_hlds__modecheck_unify__X_13,
  MR_Word check_hlds__modecheck_unify__PredOrFunc_14,
  MR_Word check_hlds__modecheck_unify__ArgVars_15,
  MR_Word check_hlds__modecheck_unify__LambdaModes_16,
  MR_Word check_hlds__modecheck_unify__LambdaDetism_17,
  MR_Word check_hlds__modecheck_unify__RHS0_18,
  MR_Word * check_hlds__modecheck_unify__RHS_19,
  MR_Word check_hlds__modecheck_unify__Unification0_20,
  MR_Word * check_hlds__modecheck_unify__Unification_21,
  MR_Word * check_hlds__modecheck_unify__UnifyMode_22,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_40,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_41);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_functor_10_p_0_2(
  MR_Box check_hlds__modecheck_unify__closure_arg);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_functor_10_p_0_1(
  MR_Box check_hlds__modecheck_unify__closure_arg);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_functor_10_p_0(
  MR_Word check_hlds__modecheck_unify__X_11,
  MR_Word check_hlds__modecheck_unify__ConsId_12,
  MR_Word check_hlds__modecheck_unify__IsExistConstruction_13,
  MR_Word check_hlds__modecheck_unify__ArgVars0_14,
  MR_Word check_hlds__modecheck_unify__Unification0_15,
  MR_Word check_hlds__modecheck_unify__UnifyContext_16,
  MR_Word check_hlds__modecheck_unify__GoalInfo0_17,
  MR_Word * check_hlds__modecheck_unify__GoalExpr_18,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_39,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_40);

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_var_8_p_0(
  MR_Word check_hlds__modecheck_unify__X_9,
  MR_Word check_hlds__modecheck_unify__Y_10,
  MR_Word check_hlds__modecheck_unify__Unification0_11,
  MR_Word check_hlds__modecheck_unify__UnifyContext_12,
  MR_Word check_hlds__modecheck_unify__UnifyGoalInfo0_13,
  MR_Word * check_hlds__modecheck_unify__UnifyGoalExpr_14,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_36,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_37);

static MR_bool MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_8_p_0_1(
  MR_Box check_hlds__modecheck_unify__closure_arg,
  MR_Box check_hlds__modecheck_unify__wrapper_arg_1);


static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_1[13][2];

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_2[1][4];

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_3[2][6];

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_4[4][3];

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_5[5][5];

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_6[4][1];

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_7[1][7];




static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_1[13][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_1[3]))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_1[5])),
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_1[5]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_2[0]))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_6[0])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_6[2])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_6[3])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_1[1]))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_3[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&check_hlds__modecheck_unify__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__modecheck_unify__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_4[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_5[2])),
    ((MR_Box) (check_hlds__modecheck_unify__modecheck_unify_lambda_12_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_5[4])),
    ((MR_Box) (check_hlds__modecheck_unify__bind_args_if_needed_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_5[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_is_exist_constr_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_is_exist_constr_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__modecheck_unify__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__modecheck_unify__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__modecheck_unify__maybe__pti_maybe_1__plain_list__ti_list_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__modecheck_unify__maybe__pti_maybe_1__plain_list__ti_list_1builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_unify__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_6[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "int"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "__LambdaGoal__"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "func"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "pred"))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_unify_scalar_common_7[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&check_hlds__modecheck_unify__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__modecheck_unify__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_unify__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modecheck_unify__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_unify__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__maybe__pti_maybe_1__plain_list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modecheck_unify__list__ti_list_1builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_unify__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modecheck_unify__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__modecheck_unify__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_EnumFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_0 = {
  (MR_String) "ho_insts_match",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_1 = {
  (MR_String) "ho_insts_do_not_match",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_2 = {
  (MR_String) "ho_arg_not_ground",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_value_ordered_match_mode_result_0[3] = {
  &check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_0,
  &check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_1,
  &check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_2
};

static const MR_EnumFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_name_ordered_match_mode_result_0[3] = {
  &check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_2,
  &check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_1,
  &check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_functor_desc_match_mode_result_0_0
};

static const MR_Integer check_hlds__modecheck_unify__check_hlds__modecheck_unify__functor_number_map_match_mode_result_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__modecheck_unify__check_hlds__modecheck_unify__type_ctor_info_match_mode_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__modecheck_unify____Unify____match_mode_result_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_unify____Compare____match_mode_result_0_0_10001)),
  (MR_String) "check_hlds.modecheck_unify",
  (MR_String) "match_mode_result",
  {     check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_name_ordered_match_mode_result_0 },
  {     check_hlds__modecheck_unify__check_hlds__modecheck_unify__enum_value_ordered_match_mode_result_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__modecheck_unify__check_hlds__modecheck_unify__functor_number_map_match_mode_result_0
};

static const MR_PseudoTypeInfo check_hlds__modecheck_unify__check_hlds__modecheck_unify__field_types_match_modes_result_0_0[1] = {
  (MR_PseudoTypeInfo) &check_hlds__modecheck_unify__list__ti_list_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_functor_desc_match_modes_result_0_0 = {
  (MR_String) "possible_modes",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__modecheck_unify__check_hlds__modecheck_unify__field_types_match_modes_result_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_functor_desc_match_modes_result_0_1 = {
  (MR_String) "ho_arg_not_ground",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_stag_ordered_match_modes_result_0_0[1] = {
  &check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_functor_desc_match_modes_result_0_1
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_stag_ordered_match_modes_result_0_1[1] = {
  &check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_functor_desc_match_modes_result_0_0
};

static const MR_DuPtagLayout check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_ptag_ordered_match_modes_result_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_stag_ordered_match_modes_result_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_stag_ordered_match_modes_result_0_1
  }
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_name_ordered_match_modes_result_0[2] = {
  &check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_functor_desc_match_modes_result_0_1,
  &check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_functor_desc_match_modes_result_0_0
};

static const MR_Integer check_hlds__modecheck_unify__check_hlds__modecheck_unify__functor_number_map_match_modes_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__modecheck_unify__check_hlds__modecheck_unify__type_ctor_info_match_modes_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__modecheck_unify____Unify____match_modes_result_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_unify____Compare____match_modes_result_0_0_10001)),
  (MR_String) "check_hlds.modecheck_unify",
  (MR_String) "match_modes_result",
  {     check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_name_ordered_match_modes_result_0 },
  {     check_hlds__modecheck_unify__check_hlds__modecheck_unify__du_ptag_ordered_match_modes_result_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__modecheck_unify__check_hlds__modecheck_unify__functor_number_map_match_modes_result_0
};

static MR_bool MR_CALL 
check_hlds__modecheck_unify____Unify____match_mode_result_0_0_10001(
  MR_Box check_hlds__modecheck_unify__wrapper_arg_1,
  MR_Box check_hlds__modecheck_unify__wrapper_arg_2)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded;

    {
      check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify____Unify____match_mode_result_0_0(((MR_Word) check_hlds__modecheck_unify__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_unify__wrapper_arg_2));
    }
    return check_hlds__modecheck_unify__succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_unify____Compare____match_mode_result_0_0_10001(
  MR_Box * check_hlds__modecheck_unify__wrapper_arg_1,
  MR_Box check_hlds__modecheck_unify__wrapper_arg_2,
  MR_Box check_hlds__modecheck_unify__wrapper_arg_3)
{
  {
    MR_Word check_hlds__modecheck_unify__conv0_HeadVar__1_1;

    {
      check_hlds__modecheck_unify____Compare____match_mode_result_0_0(&check_hlds__modecheck_unify__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modecheck_unify__wrapper_arg_2), ((MR_Word) check_hlds__modecheck_unify__wrapper_arg_3));
    }
    *check_hlds__modecheck_unify__wrapper_arg_1 = ((MR_Box) (check_hlds__modecheck_unify__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify____Unify____match_modes_result_0_0_10001(
  MR_Box check_hlds__modecheck_unify__wrapper_arg_1,
  MR_Box check_hlds__modecheck_unify__wrapper_arg_2)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded;

    {
      check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify____Unify____match_modes_result_0_0(((MR_Word) check_hlds__modecheck_unify__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_unify__wrapper_arg_2));
    }
    return check_hlds__modecheck_unify__succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_unify____Compare____match_modes_result_0_0_10001(
  MR_Box * check_hlds__modecheck_unify__wrapper_arg_1,
  MR_Box check_hlds__modecheck_unify__wrapper_arg_2,
  MR_Box check_hlds__modecheck_unify__wrapper_arg_3)
{
  {
    MR_Word check_hlds__modecheck_unify__conv0_HeadVar__1_1;

    {
      check_hlds__modecheck_unify____Compare____match_modes_result_0_0(&check_hlds__modecheck_unify__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modecheck_unify__wrapper_arg_2), ((MR_Word) check_hlds__modecheck_unify__wrapper_arg_3));
    }
    *check_hlds__modecheck_unify__wrapper_arg_1 = ((MR_Box) (check_hlds__modecheck_unify__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_116_121_112_101_95_105_110_102_111_95_97_114_103_115_95_97_114_101_95_103_114_111_117_110_100_95_95_91_51_93_95_48_5_p_0(
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__modecheck_unify__succeeded;

        if ((check_hlds__modecheck_unify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_5 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4;
        else
          {
            MR_Word check_hlds__modecheck_unify__ArgVar_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__modecheck_unify__ArgVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__modecheck_unify__ArgType_16;

            {
              hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_unify__HeadVar__2_2, check_hlds__modecheck_unify__ArgVar_11, &check_hlds__modecheck_unify__ArgType_16);
            }
            {
              check_hlds__modecheck_unify__succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(check_hlds__modecheck_unify__ArgType_16);
            }
            if (check_hlds__modecheck_unify__succeeded)
              {
                MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20_20;
                MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_22_22;

                {
                  check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0((MR_Integer) 1, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20_20);
                }
                {
                  check_hlds__modecheck_util__modecheck_introduced_type_info_var_has_inst_no_exact_match_5_p_0(check_hlds__modecheck_unify__ArgVar_11, check_hlds__modecheck_unify__ArgType_16, (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_unify_scalar_common_4[2]), check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20_20, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_22_22);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__modecheck_unify__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_unify__ArgVars_12;
                  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0__tmp_copy_4 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_22_22;

                  check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0__tmp_copy_4;
                  check_hlds__modecheck_unify__HeadVar__1_1 = check_hlds__modecheck_unify__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
            else
              *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_5 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0_2(
  MR_Box check_hlds__modecheck_unify__closure_arg,
  MR_Box check_hlds__modecheck_unify__wrapper_arg_1)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded;
    MR_Box check_hlds__modecheck_unify__closure = check_hlds__modecheck_unify__closure_arg;

    {
      check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_rhs_lambda__458__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__modecheck_unify__wrapper_arg_1));
    }
    return check_hlds__modecheck_unify__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0_1(
  MR_Box check_hlds__modecheck_unify__closure_arg,
  MR_Box check_hlds__modecheck_unify__wrapper_arg_1)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded;
    MR_Box check_hlds__modecheck_unify__closure = check_hlds__modecheck_unify__closure_arg;

    {
      check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_rhs_lambda__379__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__modecheck_unify__wrapper_arg_1));
    }
    return check_hlds__modecheck_unify__succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0(
  MR_Word check_hlds__modecheck_unify__X_9,
  MR_Word check_hlds__modecheck_unify__LambdaRHS_10,
  MR_Word check_hlds__modecheck_unify__Unification0_11,
  MR_Word check_hlds__modecheck_unify__UnifyContext_12,
  MR_Word * check_hlds__modecheck_unify__UnifyGoalExpr_14,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_68,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_69)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded;
    MR_Word check_hlds__modecheck_unify__TypeInfo_109_109;
    MR_Word check_hlds__modecheck_unify__TypeCtorInfo_111_111;
    MR_Word check_hlds__modecheck_unify__Purity_16 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__LambdaRHS_10, (MR_Integer) 0)))) & (MR_Integer) 3);
    MR_Word check_hlds__modecheck_unify__Groundness_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__LambdaRHS_10, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__modecheck_unify__PredOrFunc_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__LambdaRHS_10, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word check_hlds__modecheck_unify__ArgVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__LambdaRHS_10, (MR_Integer) 2)));
    MR_Word check_hlds__modecheck_unify__Vars_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__LambdaRHS_10, (MR_Integer) 3)));
    MR_Word check_hlds__modecheck_unify__Modes0_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__LambdaRHS_10, (MR_Integer) 4)));
    MR_Word check_hlds__modecheck_unify__Det_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__LambdaRHS_10, (MR_Integer) 5)));
    MR_Word check_hlds__modecheck_unify__Goal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__LambdaRHS_10, (MR_Integer) 6)));
    MR_Word check_hlds__modecheck_unify__ModuleInfo0_25;
    MR_Word check_hlds__modecheck_unify__HowToCheckGoal_26;
    MR_Word check_hlds__modecheck_unify__Modes_28;
    MR_Word check_hlds__modecheck_unify__VarInitialInsts_29;
    MR_Word check_hlds__modecheck_unify__VarInstAL_30;
    MR_Word check_hlds__modecheck_unify__VarInstMapDelta_31;
    MR_Word check_hlds__modecheck_unify__InstMap0_32;
    MR_Word check_hlds__modecheck_unify__InstMap1_33;
    MR_Word check_hlds__modecheck_unify__ArgLives_34;
    MR_Word check_hlds__modecheck_unify__LiveVarsList_35;
    MR_Word check_hlds__modecheck_unify__LiveVars_36;
    MR_Word check_hlds__modecheck_unify__GoalInfo0_38;
    MR_Word check_hlds__modecheck_unify__NonLocals0_39;
    MR_Word check_hlds__modecheck_unify__NonLocals1_40;
    MR_Word check_hlds__modecheck_unify__NonLocals_41;
    MR_Word check_hlds__modecheck_unify__NonLocalsList_46;
    MR_Word check_hlds__modecheck_unify__NonLocalInsts_47;
    MR_Word check_hlds__modecheck_unify__ModuleInfo2_48;
    MR_Word check_hlds__modecheck_unify__RHS_57;
    MR_Word check_hlds__modecheck_unify__Unification_58;
    MR_Word check_hlds__modecheck_unify__UnifyMode_59;
    MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_70_70;
    MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_71_71;
    MR_Word check_hlds__modecheck_unify__V_37_37;

    {
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_68, &check_hlds__modecheck_unify__ModuleInfo0_25);
    }
    {
      check_hlds__mode_info__mode_info_get_how_to_check_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_68, &check_hlds__modecheck_unify__HowToCheckGoal_26);
    }
    switch (check_hlds__modecheck_unify__HowToCheckGoal_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__modecheck_unify__VarTypes_27;

          {
            check_hlds__mode_info__mode_info_get_types_of_vars_3_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_68, check_hlds__modecheck_unify__Vars_21, &check_hlds__modecheck_unify__VarTypes_27);
          }
          {
            check_hlds__mode_util__propagate_types_into_mode_list_4_p_0(check_hlds__modecheck_unify__ModuleInfo0_25, check_hlds__modecheck_unify__VarTypes_27, check_hlds__modecheck_unify__Modes0_22, &check_hlds__modecheck_unify__Modes_28);
          }
        }
        break;
      case (MR_Integer) 1:
        check_hlds__modecheck_unify__Modes_28 = check_hlds__modecheck_unify__Modes0_22;
        break;
    }
    {
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__modecheck_unify__ModuleInfo0_25, check_hlds__modecheck_unify__Modes_28, &check_hlds__modecheck_unify__VarInitialInsts_29);
    }
    check_hlds__modecheck_unify__TypeInfo_109_109 = (MR_Word) &check_hlds__modecheck_unify_scalar_common_1[0];
    {
      mercury__assoc_list__from_corresponding_lists_3_p_0(check_hlds__modecheck_unify__TypeInfo_109_109, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__modecheck_unify__Vars_21, check_hlds__modecheck_unify__VarInitialInsts_29, &check_hlds__modecheck_unify__VarInstAL_30);
    }
    {
      check_hlds__modecheck_unify__VarInstMapDelta_31 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__modecheck_unify__VarInstAL_30);
    }
    {
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_68, &check_hlds__modecheck_unify__InstMap0_32);
    }
    {
      hlds__instmap__apply_instmap_delta_3_p_0(check_hlds__modecheck_unify__InstMap0_32, check_hlds__modecheck_unify__VarInstMapDelta_31, &check_hlds__modecheck_unify__InstMap1_33);
    }
    {
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_unify__InstMap1_33, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_68, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_70_70);
    }
    {
      check_hlds__mode_util__get_arg_lives_3_p_0(check_hlds__modecheck_unify__ModuleInfo0_25, check_hlds__modecheck_unify__Modes_28, &check_hlds__modecheck_unify__ArgLives_34);
    }
    {
      check_hlds__modecheck_util__get_live_vars_3_p_0(check_hlds__modecheck_unify__Vars_21, check_hlds__modecheck_unify__ArgLives_34, &check_hlds__modecheck_unify__LiveVarsList_35);
    }
    check_hlds__modecheck_unify__TypeCtorInfo_111_111 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      parse_tree__set_of_var__list_to_set_2_p_0(check_hlds__modecheck_unify__TypeCtorInfo_111_111, check_hlds__modecheck_unify__LiveVarsList_35, &check_hlds__modecheck_unify__LiveVars_36);
    }
    {
      check_hlds__mode_info__mode_info_add_live_vars_3_p_0(check_hlds__modecheck_unify__LiveVars_36, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_70_70, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_71_71);
    }
    check_hlds__modecheck_unify__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Goal0_24, (MR_Integer) 0)));
    check_hlds__modecheck_unify__GoalInfo0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Goal0_24, (MR_Integer) 1)));
    {
      check_hlds__modecheck_unify__NonLocals0_39 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modecheck_unify__GoalInfo0_38);
    }
    {
      parse_tree__set_of_var__delete_list_3_p_0(check_hlds__modecheck_unify__TypeCtorInfo_111_111, check_hlds__modecheck_unify__Vars_21, check_hlds__modecheck_unify__NonLocals0_39, &check_hlds__modecheck_unify__NonLocals1_40);
    }
    switch (check_hlds__modecheck_unify__Groundness_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__modecheck_unify__NonLocalTypes_42;
          MR_Word check_hlds__modecheck_unify__V_72_72;

          {
            check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_71_71, &check_hlds__modecheck_unify__NonLocalTypes_42);
          }
          {
            check_hlds__modecheck_unify__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_72_72, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_7[0]));
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_72_72, 1) = ((MR_Box) (check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0_1));
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_72_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_72_72, 3) = ((MR_Box) (check_hlds__modecheck_unify__ModuleInfo0_25));
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_72_72, 4) = ((MR_Box) (check_hlds__modecheck_unify__InstMap1_33));
            MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_72_72, 5) = ((MR_Box) (check_hlds__modecheck_unify__NonLocalTypes_42));
          }
          {
            check_hlds__modecheck_unify__NonLocals_41 = parse_tree__set_of_var__filter_2_f_0(check_hlds__modecheck_unify__TypeCtorInfo_111_111, check_hlds__modecheck_unify__V_72_72, check_hlds__modecheck_unify__NonLocals1_40);
          }
        }
        break;
      case (MR_Integer) 0:
        check_hlds__modecheck_unify__NonLocals_41 = check_hlds__modecheck_unify__NonLocals1_40;
        break;
    }
    {
      parse_tree__set_of_var__to_sorted_list_2_p_0(check_hlds__modecheck_unify__TypeCtorInfo_111_111, check_hlds__modecheck_unify__NonLocals_41, &check_hlds__modecheck_unify__NonLocalsList_46);
    }
    {
      hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__modecheck_unify__InstMap1_33, check_hlds__modecheck_unify__NonLocalsList_46, &check_hlds__modecheck_unify__NonLocalInsts_47);
    }
    {
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_71_71, &check_hlds__modecheck_unify__ModuleInfo2_48);
    }
    check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__Groundness_17 == (MR_Integer) 0);
    if (check_hlds__modecheck_unify__succeeded)
      {
        check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__Purity_16 == (MR_Integer) 2);
        check_hlds__modecheck_unify__succeeded = !(check_hlds__modecheck_unify__succeeded);
      }
    if (check_hlds__modecheck_unify__succeeded)
      {
        check_hlds__modecheck_unify__succeeded = check_hlds__inst_test__inst_list_is_ground_2_p_0(check_hlds__modecheck_unify__NonLocalInsts_47, check_hlds__modecheck_unify__ModuleInfo2_48);
      }
    else
      {
        check_hlds__modecheck_unify__succeeded = check_hlds__inst_test__inst_list_is_ground_or_any_2_p_0(check_hlds__modecheck_unify__NonLocalInsts_47, check_hlds__modecheck_unify__ModuleInfo2_48);
      }
    if (check_hlds__modecheck_unify__succeeded)
      {
        MR_Word check_hlds__modecheck_unify__SharedNonLocalInsts_49;
        MR_Word check_hlds__modecheck_unify__ModuleInfo3_50;
        MR_Word check_hlds__modecheck_unify__InstMap2_51;
        MR_Word check_hlds__modecheck_unify__Goal1_52;
        MR_Word check_hlds__modecheck_unify__FinalInsts_53;
        MR_Word check_hlds__modecheck_unify__Goal_54;
        MR_Word check_hlds__modecheck_unify__InstMap11_55;
        MR_Word check_hlds__modecheck_unify__RHS0_56;
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_77_77;
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_78_78;
        MR_Word check_hlds__modecheck_unify__V_79_79;
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_80_80;
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_83_83;
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_85_85;
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_86_86;
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_89_89;
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_90_90;
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_92_92;
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_93_93;

        {
          check_hlds__inst_util__make_shared_inst_list_4_p_0(check_hlds__modecheck_unify__NonLocalInsts_47, &check_hlds__modecheck_unify__SharedNonLocalInsts_49, check_hlds__modecheck_unify__ModuleInfo2_48, &check_hlds__modecheck_unify__ModuleInfo3_50);
        }
        {
          hlds__instmap__instmap_set_vars_corresponding_4_p_0(check_hlds__modecheck_unify__NonLocalsList_46, check_hlds__modecheck_unify__SharedNonLocalInsts_49, check_hlds__modecheck_unify__InstMap1_33, &check_hlds__modecheck_unify__InstMap2_51);
        }
        {
          check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__modecheck_unify__ModuleInfo3_50, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_71_71, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_77_77);
        }
        {
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_unify__InstMap2_51, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_77_77, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_78_78);
        }
        {
          check_hlds__modecheck_unify__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_79_79, 0) = ((MR_Box) (check_hlds__modecheck_unify__PredOrFunc_18));
        }
        {
          check_hlds__mode_info__mode_info_lock_vars_4_p_0(check_hlds__modecheck_unify__V_79_79, check_hlds__modecheck_unify__NonLocals_41, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_78_78, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_80_80);
        }
        {
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "lambda goal", check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_80_80, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_83_83);
        }
        switch (check_hlds__modecheck_unify__HowToCheckGoal_26) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_unify__Goal0_24, &check_hlds__modecheck_unify__Goal1_52, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_83_83, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_85_85);
            }
            break;
          case (MR_Integer) 1:
            {
              check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__modecheck_unify__Goal0_24, &check_hlds__modecheck_unify__Goal1_52, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_83_83, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_85_85);
            }
            break;
        }
        {
          check_hlds__mode_util__mode_list_get_final_insts_3_p_0(check_hlds__modecheck_unify__ModuleInfo0_25, check_hlds__modecheck_unify__Modes_28, &check_hlds__modecheck_unify__FinalInsts_53);
        }
        {
          check_hlds__modes__modecheck_lambda_final_insts_6_p_0(check_hlds__modecheck_unify__Vars_21, check_hlds__modecheck_unify__FinalInsts_53, check_hlds__modecheck_unify__Goal1_52, &check_hlds__modecheck_unify__Goal_54, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_85_85, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_86_86);
        }
        {
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "lambda goal", check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_86_86, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_89_89);
        }
        {
          check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__modecheck_unify__LiveVars_36, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_89_89, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_90_90);
        }
        {
          check_hlds__mode_info__mode_info_unlock_vars_4_p_0(check_hlds__modecheck_unify__V_79_79, check_hlds__modecheck_unify__NonLocals_41, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_90_90, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_92_92);
        }
        {
          hlds__instmap__instmap_set_vars_corresponding_4_p_0(check_hlds__modecheck_unify__NonLocalsList_46, check_hlds__modecheck_unify__SharedNonLocalInsts_49, check_hlds__modecheck_unify__InstMap0_32, &check_hlds__modecheck_unify__InstMap11_55);
        }
        {
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_unify__InstMap11_55, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_92_92, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_93_93);
        }
        {
          check_hlds__modecheck_unify__RHS0_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_56, 0) = ((MR_Box) ((check_hlds__modecheck_unify__Purity_16 | ((((check_hlds__modecheck_unify__Groundness_17 << (MR_Integer) 2)) | ((check_hlds__modecheck_unify__PredOrFunc_18 << (MR_Integer) 3)))))));
          MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_56, 1) = (MR_Integer) 0;
          MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_56, 2) = ((MR_Box) (check_hlds__modecheck_unify__ArgVars_20));
          MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_56, 3) = ((MR_Box) (check_hlds__modecheck_unify__Vars_21));
          MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_56, 4) = ((MR_Box) (check_hlds__modecheck_unify__Modes_28));
          MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_56, 5) = ((MR_Box) (check_hlds__modecheck_unify__Det_23));
          MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_56, 6) = ((MR_Box) (check_hlds__modecheck_unify__Goal_54));
        }
        {
          check_hlds__modecheck_unify__modecheck_unify_lambda_12_p_0(check_hlds__modecheck_unify__X_9, check_hlds__modecheck_unify__PredOrFunc_18, check_hlds__modecheck_unify__ArgVars_20, check_hlds__modecheck_unify__Modes_28, check_hlds__modecheck_unify__Det_23, check_hlds__modecheck_unify__RHS0_56, &check_hlds__modecheck_unify__RHS_57, check_hlds__modecheck_unify__Unification0_11, &check_hlds__modecheck_unify__Unification_58, &check_hlds__modecheck_unify__UnifyMode_59, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_93_93, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_69);
        }
      }
    else
      {
        MR_Word check_hlds__modecheck_unify__NonGroundNonLocals_62;
        MR_Word check_hlds__modecheck_unify__V_95_95;

        {
          check_hlds__modecheck_unify__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_95_95, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_3[1]));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_95_95, 1) = ((MR_Box) (check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0_2));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_95_95, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_95_95, 3) = ((MR_Box) (check_hlds__modecheck_unify__InstMap1_33));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_95_95, 4) = ((MR_Box) (check_hlds__modecheck_unify__ModuleInfo2_48));
        }
        {
          mercury__list__filter_3_p_0(check_hlds__modecheck_unify__TypeInfo_109_109, check_hlds__modecheck_unify__V_95_95, check_hlds__modecheck_unify__NonLocalsList_46, &check_hlds__modecheck_unify__NonGroundNonLocals_62);
        }
        if ((check_hlds__modecheck_unify__NonGroundNonLocals_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unification_rhs_lambda\'/8", (MR_String) "very strange var");
              return;
            }
          }
        else
          {
            MR_Word check_hlds__modecheck_unify__BadVar_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__NonGroundNonLocals_62, (MR_Integer) 0)));
            MR_Word check_hlds__modecheck_unify__BadInst_65;
            MR_Word check_hlds__modecheck_unify__WaitingVars_66;
            MR_Word check_hlds__modecheck_unify__ModeError_67;
            MR_Word check_hlds__modecheck_unify__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__NonGroundNonLocals_62, (MR_Integer) 1)));

            {
              hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_unify__InstMap1_33, check_hlds__modecheck_unify__BadVar_63, &check_hlds__modecheck_unify__BadInst_65);
            }
            {
              check_hlds__modecheck_unify__WaitingVars_66 = parse_tree__set_of_var__make_singleton_1_f_0(check_hlds__modecheck_unify__TypeCtorInfo_111_111, check_hlds__modecheck_unify__BadVar_63);
            }
            {
              check_hlds__modecheck_unify__ModeError_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_67, 1) = ((MR_Box) (check_hlds__modecheck_unify__BadVar_63));
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_67, 2) = ((MR_Box) (check_hlds__modecheck_unify__BadInst_65));
            }
            {
              check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_66, check_hlds__modecheck_unify__ModeError_67, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_71_71, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_69);
            }
          }
        check_hlds__modecheck_unify__RHS_57 = check_hlds__modecheck_unify__LambdaRHS_10;
        check_hlds__modecheck_unify__UnifyMode_59 = (MR_Word) &check_hlds__modecheck_unify_scalar_common_1[6];
        check_hlds__modecheck_unify__Unification_58 = check_hlds__modecheck_unify__Unification0_11;
      }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      *check_hlds__modecheck_unify__UnifyGoalExpr_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_9));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__RHS_57));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__modecheck_unify__UnifyMode_59));
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__modecheck_unify__Unification_58));
      MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__modecheck_unify__UnifyContext_12));
    }
  }
}

static MR_Word MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__func__bind_args_if_needed__1604__1_1_f_0(
  MR_Word check_hlds__modecheck_unify__LambdaHeadVar__1_19)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded;
    MR_Word check_hlds__modecheck_unify__LambdaHeadVar__2_20;

    {
      check_hlds__modecheck_unify__LambdaHeadVar__2_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__LambdaHeadVar__2_20, 0) = ((MR_Box) (check_hlds__modecheck_unify__LambdaHeadVar__1_19));
    }
    return check_hlds__modecheck_unify__LambdaHeadVar__2_20;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__categorize_unify_var_functor__1374__1_2_p_0(
  MR_Word check_hlds__modecheck_unify__MaybeTakeAddr_32,
  MR_Word check_hlds__modecheck_unify__HeadVar__2_76)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded;

    {
      check_hlds__modecheck_unify__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__modecheck_unify_scalar_common_1[4], ((MR_Box) (check_hlds__modecheck_unify__MaybeTakeAddr_32)), ((MR_Box) (check_hlds__modecheck_unify__HeadVar__2_76)));
    }
    return check_hlds__modecheck_unify__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__categorize_unify_var_lambda__1269__1_2_p_0(
  MR_Word check_hlds__modecheck_unify__MaybeTakeAddr_30,
  MR_Word check_hlds__modecheck_unify__HeadVar__2_91)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded;

    {
      check_hlds__modecheck_unify__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__modecheck_unify_scalar_common_1[4], ((MR_Box) (check_hlds__modecheck_unify__MaybeTakeAddr_30)), ((MR_Box) (check_hlds__modecheck_unify__HeadVar__2_91)));
    }
    return check_hlds__modecheck_unify__succeeded;
  }
}

static MR_Word MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__func__modecheck_unify_lambda__508__1_1_f_0(
  MR_Word check_hlds__modecheck_unify__LambdaHeadVar__1_49)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded;
    MR_Word check_hlds__modecheck_unify__LambdaHeadVar__2_50;

    {
      check_hlds__modecheck_unify__LambdaHeadVar__2_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__LambdaHeadVar__2_50, 0) = ((MR_Box) (check_hlds__modecheck_unify__LambdaHeadVar__1_49));
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__LambdaHeadVar__2_50, 1) = ((MR_Box) (check_hlds__modecheck_unify__LambdaHeadVar__1_49));
    }
    return check_hlds__modecheck_unify__LambdaHeadVar__2_50;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_rhs_lambda__458__1_3_p_0(
  MR_Word check_hlds__modecheck_unify__InstMap1_33,
  MR_Word check_hlds__modecheck_unify__ModuleInfo2_48,
  MR_Word check_hlds__modecheck_unify__LambdaHeadVar__1_96)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded;
    MR_Word check_hlds__modecheck_unify__Inst_61;

    {
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_unify__InstMap1_33, check_hlds__modecheck_unify__LambdaHeadVar__1_96, &check_hlds__modecheck_unify__Inst_61);
    }
    {
      check_hlds__modecheck_unify__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(check_hlds__modecheck_unify__ModuleInfo2_48, check_hlds__modecheck_unify__Inst_61);
    }
    check_hlds__modecheck_unify__succeeded = !(check_hlds__modecheck_unify__succeeded);
    return check_hlds__modecheck_unify__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_rhs_lambda__379__1_4_p_0(
  MR_Word check_hlds__modecheck_unify__ModuleInfo0_25,
  MR_Word check_hlds__modecheck_unify__InstMap1_33,
  MR_Word check_hlds__modecheck_unify__NonLocalTypes_42,
  MR_Word check_hlds__modecheck_unify__LambdaHeadVar__1_73)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded;
    MR_Word check_hlds__modecheck_unify__NonLocalType_44;
    MR_Word check_hlds__modecheck_unify__NonLocalInst_45;

    {
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_unify__NonLocalTypes_42, check_hlds__modecheck_unify__LambdaHeadVar__1_73, &check_hlds__modecheck_unify__NonLocalType_44);
    }
    {
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_unify__InstMap1_33, check_hlds__modecheck_unify__LambdaHeadVar__1_73, &check_hlds__modecheck_unify__NonLocalInst_45);
    }
    {
      check_hlds__modecheck_unify__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modecheck_unify__NonLocalInst_45, (MR_Word) MR_mkword(MR_mktag(2), &check_hlds__modecheck_unify_scalar_common_1[12]), check_hlds__modecheck_unify__NonLocalType_44, check_hlds__modecheck_unify__ModuleInfo0_25);
    }
    check_hlds__modecheck_unify__succeeded = !(check_hlds__modecheck_unify__succeeded);
    return check_hlds__modecheck_unify__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_functor__276__1_2_p_0(
  MR_Word check_hlds__modecheck_unify__ArgVars0_14,
  MR_Word check_hlds__modecheck_unify__HeadVar__2_59)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded;

    {
      check_hlds__modecheck_unify__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__modecheck_unify_scalar_common_1[1], ((MR_Box) (check_hlds__modecheck_unify__ArgVars0_14)), ((MR_Box) (check_hlds__modecheck_unify__HeadVar__2_59)));
    }
    return check_hlds__modecheck_unify__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_functor__274__1_2_p_0(
  MR_Word check_hlds__modecheck_unify__IsExistConstruction_13,
  MR_Word check_hlds__modecheck_unify__HeadVar__2_54)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__IsExistConstruction_13 == check_hlds__modecheck_unify__HeadVar__2_54);

    return check_hlds__modecheck_unify__succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_unify____Compare____match_modes_result_0_0(
  MR_Word * check_hlds__modecheck_unify__HeadVar__1_1,
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
  MR_Word check_hlds__modecheck_unify__HeadVar__3_3)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded;
    MR_Integer check_hlds__modecheck_unify__CastX_8 = (MR_Integer) check_hlds__modecheck_unify__HeadVar__2_2;
    MR_Integer check_hlds__modecheck_unify__CastY_9 = (MR_Integer) check_hlds__modecheck_unify__HeadVar__3_3;

    check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__CastX_8 == check_hlds__modecheck_unify__CastY_9);
    if (check_hlds__modecheck_unify__succeeded)
      *check_hlds__modecheck_unify__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((check_hlds__modecheck_unify__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((check_hlds__modecheck_unify__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__modecheck_unify__HeadVar__1_1 = (MR_Integer) 0;
      else
        *check_hlds__modecheck_unify__HeadVar__1_1 = (MR_Integer) 2;
    else
      {
        MR_Word check_hlds__modecheck_unify__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__2_2, (MR_Integer) 0)));

        if ((check_hlds__modecheck_unify__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__modecheck_unify__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Word check_hlds__modecheck_unify__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modecheck_unify_scalar_common_1[3], check_hlds__modecheck_unify__HeadVar__1_1, ((MR_Box) (check_hlds__modecheck_unify__V_11_11)), ((MR_Box) (check_hlds__modecheck_unify__V_5_5)));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify____Unify____match_modes_result_0_0(
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded;
    MR_Integer check_hlds__modecheck_unify__CastX_7 = (MR_Integer) check_hlds__modecheck_unify__HeadVar__1_1;
    MR_Integer check_hlds__modecheck_unify__CastY_8 = (MR_Integer) check_hlds__modecheck_unify__HeadVar__2_2;

    check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__CastX_7 == check_hlds__modecheck_unify__CastY_8);
    if (check_hlds__modecheck_unify__succeeded)
      check_hlds__modecheck_unify__succeeded = MR_TRUE;
    else
    if ((check_hlds__modecheck_unify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer check_hlds__modecheck_unify__CastX_5 = (MR_Integer) check_hlds__modecheck_unify__HeadVar__1_1;
        MR_Integer check_hlds__modecheck_unify__CastY_6 = (MR_Integer) check_hlds__modecheck_unify__HeadVar__2_2;

        check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__CastY_6 == check_hlds__modecheck_unify__CastX_5);
      }
    else
      {
        MR_Word check_hlds__modecheck_unify__TypeInfo_9_9;
        MR_Word check_hlds__modecheck_unify__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__modecheck_unify__V_4_4;

        check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__modecheck_unify__succeeded)
          {
            check_hlds__modecheck_unify__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__2_2, (MR_Integer) 0)));
            check_hlds__modecheck_unify__TypeInfo_9_9 = (MR_Word) &check_hlds__modecheck_unify_scalar_common_1[3];
            {
              check_hlds__modecheck_unify__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_unify__TypeInfo_9_9, ((MR_Box) (check_hlds__modecheck_unify__V_3_3)), ((MR_Box) (check_hlds__modecheck_unify__V_4_4)));
            }
          }
      }
    return check_hlds__modecheck_unify__succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_unify____Compare____match_mode_result_0_0(
  MR_Word * check_hlds__modecheck_unify__HeadVar__1_1,
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
  MR_Word check_hlds__modecheck_unify__HeadVar__3_3)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded;
    MR_Integer check_hlds__modecheck_unify__Cast_HeadVar1_4 = (MR_Integer) check_hlds__modecheck_unify__HeadVar__2_2;
    MR_Integer check_hlds__modecheck_unify__Cast_HeadVar2_5 = (MR_Integer) check_hlds__modecheck_unify__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__modecheck_unify__HeadVar__1_1, check_hlds__modecheck_unify__Cast_HeadVar1_4, check_hlds__modecheck_unify__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify____Unify____match_mode_result_0_0(
  MR_Word check_hlds__modecheck_unify__HeadVar__2_1,
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__HeadVar__2_1 == check_hlds__modecheck_unify__HeadVar__2_2);

    return check_hlds__modecheck_unify__succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__pair_with_final_inst_3_p_0(
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
  MR_Word check_hlds__modecheck_unify__FinalInst_2,
  MR_Word * check_hlds__modecheck_unify__HeadVar__3_3)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded;

    if ((check_hlds__modecheck_unify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__modecheck_unify__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word check_hlds__modecheck_unify__InitInst_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__modecheck_unify__InitInsts_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__modecheck_unify__FromToInst_8;
        MR_Word check_hlds__modecheck_unify__FromToInsts_9;

        {
          check_hlds__modecheck_unify__FromToInst_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInst_8, 0) = ((MR_Box) (check_hlds__modecheck_unify__InitInst_5));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInst_8, 1) = ((MR_Box) (check_hlds__modecheck_unify__FinalInst_2));
        }
        {
          check_hlds__modecheck_unify__pair_with_final_inst_3_p_0(check_hlds__modecheck_unify__InitInsts_6, check_hlds__modecheck_unify__FinalInst_2, &check_hlds__modecheck_unify__FromToInsts_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__modecheck_unify__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__FromToInst_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__FromToInsts_9));
        }
      }
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__pair_up_insts_3_p_0(
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
  MR_Word * check_hlds__modecheck_unify__HeadVar__3_3)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded;

    if ((check_hlds__modecheck_unify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((check_hlds__modecheck_unify__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__modecheck_unify__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.pair_up_insts\'/3", (MR_String) "mismatched list lengths");
            return;
          }
        }
    else
      {
        MR_Word check_hlds__modecheck_unify__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__modecheck_unify__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__1_1, (MR_Integer) 0)));

        if ((check_hlds__modecheck_unify__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.pair_up_insts\'/3", (MR_String) "mismatched list lengths");
              return;
            }
          }
        else
          {
            MR_Word check_hlds__modecheck_unify__InstB_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word check_hlds__modecheck_unify__InstsB_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__modecheck_unify__FromToInst_20;
            MR_Word check_hlds__modecheck_unify__FromToInsts_21;

            {
              check_hlds__modecheck_unify__FromToInst_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInst_20, 0) = ((MR_Box) (check_hlds__modecheck_unify__V_23_23));
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInst_20, 1) = ((MR_Box) (check_hlds__modecheck_unify__InstB_18));
            }
            {
              check_hlds__modecheck_unify__pair_up_insts_3_p_0(check_hlds__modecheck_unify__V_22_22, check_hlds__modecheck_unify__InstsB_19, &check_hlds__modecheck_unify__FromToInsts_21);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__modecheck_unify__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__FromToInst_20));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__FromToInsts_21));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__try_get_mode_of_args_3_p_0(
  MR_Word check_hlds__modecheck_unify__ArgInitInsts_4,
  MR_Word check_hlds__modecheck_unify__FinalInst_5,
  MR_Word * check_hlds__modecheck_unify__ArgFromToInsts_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__modecheck_unify__succeeded;

        switch (MR_tag((MR_Word) check_hlds__modecheck_unify__FinalInst_5)) {
          default:
            check_hlds__modecheck_unify__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            switch (MR_unmkbody(check_hlds__modecheck_unify__FinalInst_5)) {
              default:
                check_hlds__modecheck_unify__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                {
                  {
                    check_hlds__modecheck_unify__pair_with_final_inst_3_p_0(check_hlds__modecheck_unify__ArgInitInsts_4, check_hlds__modecheck_unify__FinalInst_5, check_hlds__modecheck_unify__ArgFromToInsts_6);
                  }
                  check_hlds__modecheck_unify__succeeded = MR_TRUE;
                }
                break;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__modecheck_unify__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__FinalInst_5, (MR_Integer) 1)));
              MR_Word check_hlds__modecheck_unify___Uniq_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__FinalInst_5, (MR_Integer) 0)));

              check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (check_hlds__modecheck_unify__succeeded)
                {
                  {
                    check_hlds__modecheck_unify__pair_with_final_inst_3_p_0(check_hlds__modecheck_unify__ArgInitInsts_4, check_hlds__modecheck_unify__FinalInst_5, check_hlds__modecheck_unify__ArgFromToInsts_6);
                  }
                  check_hlds__modecheck_unify__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__FinalInst_5, (MR_Integer) 0)))) {
              default:
                check_hlds__modecheck_unify__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__modecheck_unify__BoundInsts_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__FinalInst_5, (MR_Integer) 3)));
                  MR_Word check_hlds__modecheck_unify___InstResults_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__FinalInst_5, (MR_Integer) 2)));
                  MR_Word check_hlds__modecheck_unify___Uniq_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__FinalInst_5, (MR_Integer) 1)));

                  if ((check_hlds__modecheck_unify__BoundInsts_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      {
                        check_hlds__modecheck_unify__pair_with_final_inst_3_p_0(check_hlds__modecheck_unify__ArgInitInsts_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), check_hlds__modecheck_unify__ArgFromToInsts_6);
                      }
                      check_hlds__modecheck_unify__succeeded = MR_TRUE;
                    }
                  else
                    {
                      MR_Word check_hlds__modecheck_unify__FunctorArgInsts_11;
                      MR_Word check_hlds__modecheck_unify__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__BoundInsts_9, (MR_Integer) 0)));
                      MR_Word check_hlds__modecheck_unify__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__BoundInsts_9, (MR_Integer) 1)));
                      MR_Word check_hlds__modecheck_unify___Name_10;

                      check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__V_15_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (check_hlds__modecheck_unify__succeeded)
                        {
                          check_hlds__modecheck_unify___Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_14_14, (MR_Integer) 0)));
                          check_hlds__modecheck_unify__FunctorArgInsts_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_14_14, (MR_Integer) 1)));
                          {
                            check_hlds__modecheck_unify__pair_up_insts_3_p_0(check_hlds__modecheck_unify__ArgInitInsts_4, check_hlds__modecheck_unify__FunctorArgInsts_11, check_hlds__modecheck_unify__ArgFromToInsts_6);
                          }
                          check_hlds__modecheck_unify__succeeded = MR_TRUE;
                        }
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__modecheck_unify__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__FinalInst_5, (MR_Integer) 2)));
                  MR_Word check_hlds__modecheck_unify___Uniq_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__FinalInst_5, (MR_Integer) 1)));

                  check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  if (check_hlds__modecheck_unify__succeeded)
                    {
                      {
                        check_hlds__modecheck_unify__pair_with_final_inst_3_p_0(check_hlds__modecheck_unify__ArgInitInsts_4, check_hlds__modecheck_unify__FinalInst_5, check_hlds__modecheck_unify__ArgFromToInsts_6);
                      }
                      check_hlds__modecheck_unify__succeeded = MR_TRUE;
                    }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word check_hlds__modecheck_unify__SubInst_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__FinalInst_5, (MR_Integer) 2)));
                  MR_Word check_hlds__modecheck_unify__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__FinalInst_5, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__modecheck_unify__FinalInst__tmp_copy_5 = check_hlds__modecheck_unify__SubInst_13;

                    check_hlds__modecheck_unify__FinalInst_5 = check_hlds__modecheck_unify__FinalInst__tmp_copy_5;
                  }
                  continue;
                }
                break;
            }
            break;
        }
        return check_hlds__modecheck_unify__succeeded;
      }
      break;
    }
}

static void MR_CALL 
check_hlds__modecheck_unify__get_mode_of_args_3_p_0(
  MR_Word check_hlds__modecheck_unify__ArgInitInsts_4,
  MR_Word check_hlds__modecheck_unify__FinalInst_5,
  MR_Word * check_hlds__modecheck_unify__ArgFromToInsts_6)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded;
    MR_Word check_hlds__modecheck_unify__ArgFromToInstsPrime_7;

    {
      check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__try_get_mode_of_args_3_p_0(check_hlds__modecheck_unify__ArgInitInsts_4, check_hlds__modecheck_unify__FinalInst_5, &check_hlds__modecheck_unify__ArgFromToInstsPrime_7);
    }
    if (check_hlds__modecheck_unify__succeeded)
      *check_hlds__modecheck_unify__ArgFromToInsts_6 = check_hlds__modecheck_unify__ArgFromToInstsPrime_7;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.get_mode_of_args\'/3", (MR_String) "try_get_mode_of_args failed");
          return;
        }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__ground_args_5_p_0(
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
  MR_Word check_hlds__modecheck_unify__HeadVar__3_3,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__modecheck_unify__succeeded;

        if ((check_hlds__modecheck_unify__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (check_hlds__modecheck_unify__succeeded)
              {
                *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_5 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4;
                check_hlds__modecheck_unify__succeeded = MR_TRUE;
              }
          }
        else
          {
            MR_Word check_hlds__modecheck_unify__Arg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word check_hlds__modecheck_unify__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__modecheck_unify__UnifyArgInst_13;
            MR_Word check_hlds__modecheck_unify__UnifyArgInsts_14;
            MR_Word check_hlds__modecheck_unify__Ground_16;
            MR_Word check_hlds__modecheck_unify__V_19_19;
            MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20_20;

            check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__modecheck_unify__succeeded)
              {
                check_hlds__modecheck_unify__UnifyArgInst_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__3_3, (MR_Integer) 0)));
                check_hlds__modecheck_unify__UnifyArgInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__3_3, (MR_Integer) 1)));
                check_hlds__modecheck_unify__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  check_hlds__modecheck_unify__Ground_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Ground_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Ground_16, 1) = ((MR_Box) (check_hlds__modecheck_unify__HeadVar__1_1));
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Ground_16, 2) = ((MR_Box) (check_hlds__modecheck_unify__V_19_19));
                }
                {
                  check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_unify__Arg_11, check_hlds__modecheck_unify__Ground_16, check_hlds__modecheck_unify__UnifyArgInst_13, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20_20);
                }
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__modecheck_unify__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_unify__Args_12;
                    MR_Word check_hlds__modecheck_unify__HeadVar__3__tmp_copy_3 = check_hlds__modecheck_unify__UnifyArgInsts_14;
                    MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0__tmp_copy_4 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20_20;

                    check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0__tmp_copy_4;
                    check_hlds__modecheck_unify__HeadVar__3_3 = check_hlds__modecheck_unify__HeadVar__3__tmp_copy_3;
                    check_hlds__modecheck_unify__HeadVar__2_2 = check_hlds__modecheck_unify__HeadVar__2__tmp_copy_2;
                  }
                  continue;
                }
              }
          }
        return check_hlds__modecheck_unify__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__try_bind_args_2_5_p_0(
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
  MR_Word check_hlds__modecheck_unify__HeadVar__3_3,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__modecheck_unify__succeeded;

        if ((check_hlds__modecheck_unify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (check_hlds__modecheck_unify__succeeded)
              {
                check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (check_hlds__modecheck_unify__succeeded)
                  {
                    *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_5 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4;
                    check_hlds__modecheck_unify__succeeded = MR_TRUE;
                  }
              }
          }
        else
          {
            MR_Word check_hlds__modecheck_unify__Arg_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__modecheck_unify__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__modecheck_unify__Inst_11;
            MR_Word check_hlds__modecheck_unify__Insts_12;
            MR_Word check_hlds__modecheck_unify__UnifyArgInst_13;
            MR_Word check_hlds__modecheck_unify__UnifyArgInsts_14;
            MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_18_18;

            check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__modecheck_unify__succeeded)
              {
                check_hlds__modecheck_unify__Inst_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__modecheck_unify__Insts_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__2_2, (MR_Integer) 1)));
                check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__modecheck_unify__succeeded)
                  {
                    check_hlds__modecheck_unify__UnifyArgInst_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__3_3, (MR_Integer) 0)));
                    check_hlds__modecheck_unify__UnifyArgInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__3_3, (MR_Integer) 1)));
                    {
                      check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_unify__Arg_9, check_hlds__modecheck_unify__Inst_11, check_hlds__modecheck_unify__UnifyArgInst_13, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_18_18);
                    }
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word check_hlds__modecheck_unify__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_unify__Args_10;
                        MR_Word check_hlds__modecheck_unify__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_unify__Insts_12;
                        MR_Word check_hlds__modecheck_unify__HeadVar__3__tmp_copy_3 = check_hlds__modecheck_unify__UnifyArgInsts_14;
                        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0__tmp_copy_4 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_18_18;

                        check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_4 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0__tmp_copy_4;
                        check_hlds__modecheck_unify__HeadVar__3_3 = check_hlds__modecheck_unify__HeadVar__3__tmp_copy_3;
                        check_hlds__modecheck_unify__HeadVar__2_2 = check_hlds__modecheck_unify__HeadVar__2__tmp_copy_2;
                        check_hlds__modecheck_unify__HeadVar__1_1 = check_hlds__modecheck_unify__HeadVar__1__tmp_copy_1;
                      }
                      continue;
                    }
                  }
              }
          }
        return check_hlds__modecheck_unify__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__try_bind_args_5_p_0(
  MR_Word check_hlds__modecheck_unify__Inst_6,
  MR_Word check_hlds__modecheck_unify__ArgVars_7,
  MR_Word check_hlds__modecheck_unify__UnifyArgInsts_8,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__modecheck_unify__succeeded;

        switch (MR_tag((MR_Word) check_hlds__modecheck_unify__Inst_6)) {
          default:
            check_hlds__modecheck_unify__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            switch (MR_unmkbody(check_hlds__modecheck_unify__Inst_6)) {
              default:
                check_hlds__modecheck_unify__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__modecheck_unify__InstMap_10;

                  {
                    hlds__instmap__init_unreachable_1_p_0(&check_hlds__modecheck_unify__InstMap_10);
                  }
                  {
                    check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_unify__InstMap_10, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20);
                  }
                  check_hlds__modecheck_unify__succeeded = MR_TRUE;
                }
                break;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_6, (MR_Integer) 0)))) {
              default:
                check_hlds__modecheck_unify__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__modecheck_unify__BoundInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_6, (MR_Integer) 3)));
                  MR_Word check_hlds__modecheck_unify___Uniq_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_6, (MR_Integer) 1)));
                  MR_Word check_hlds__modecheck_unify___InstResults_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_6, (MR_Integer) 2)));

                  if ((check_hlds__modecheck_unify__BoundInsts_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      MR_Word check_hlds__modecheck_unify__InstMap_29;

                      {
                        hlds__instmap__init_unreachable_1_p_0(&check_hlds__modecheck_unify__InstMap_29);
                      }
                      {
                        check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_unify__InstMap_29, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20);
                      }
                      check_hlds__modecheck_unify__succeeded = MR_TRUE;
                    }
                  else
                    {
                      MR_Word check_hlds__modecheck_unify__ArgInsts_16;
                      MR_Word check_hlds__modecheck_unify__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__BoundInsts_14, (MR_Integer) 0)));
                      MR_Word check_hlds__modecheck_unify__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__BoundInsts_14, (MR_Integer) 1)));
                      MR_Word check_hlds__modecheck_unify__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_22_22, (MR_Integer) 0)));

                      check_hlds__modecheck_unify__ArgInsts_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_22_22, (MR_Integer) 1)));
                      check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (check_hlds__modecheck_unify__succeeded)
                        {
                          check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__try_bind_args_2_5_p_0(check_hlds__modecheck_unify__ArgVars_7, check_hlds__modecheck_unify__ArgInsts_16, check_hlds__modecheck_unify__UnifyArgInsts_8, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20);
                        }
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__modecheck_unify__Uniq_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_6, (MR_Integer) 1)));
                  MR_Word check_hlds__modecheck_unify__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_6, (MR_Integer) 2)));

                  check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  if (check_hlds__modecheck_unify__succeeded)
                    {
                      check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__ground_args_5_p_0(check_hlds__modecheck_unify__Uniq_11, check_hlds__modecheck_unify__ArgVars_7, check_hlds__modecheck_unify__UnifyArgInsts_8, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20);
                    }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word check_hlds__modecheck_unify__SubInst_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_6, (MR_Integer) 2)));
                  MR_Word check_hlds__modecheck_unify__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Inst_6, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__modecheck_unify__Inst__tmp_copy_6 = check_hlds__modecheck_unify__SubInst_18;

                    check_hlds__modecheck_unify__Inst_6 = check_hlds__modecheck_unify__Inst__tmp_copy_6;
                  }
                  continue;
                }
                break;
            }
            break;
        }
        return check_hlds__modecheck_unify__succeeded;
      }
      break;
    }
}

static MR_Box MR_CALL 
check_hlds__modecheck_unify__bind_args_if_needed_6_p_0_1(
  MR_Box check_hlds__modecheck_unify__closure_arg,
  MR_Box check_hlds__modecheck_unify__wrapper_arg_1)
{
  {
    MR_Box check_hlds__modecheck_unify__wrapper_arg_2;
    MR_Box check_hlds__modecheck_unify__closure = check_hlds__modecheck_unify__closure_arg;
    MR_Word check_hlds__modecheck_unify__conv0_LambdaHeadVar__2_20;

    {
      check_hlds__modecheck_unify__conv0_LambdaHeadVar__2_20 = check_hlds__modecheck_unify__IntroducedFrom__func__bind_args_if_needed__1604__1_1_f_0(((MR_Word) check_hlds__modecheck_unify__wrapper_arg_1));
    }
    check_hlds__modecheck_unify__wrapper_arg_2 = ((MR_Box) (check_hlds__modecheck_unify__conv0_LambdaHeadVar__2_20));
    return check_hlds__modecheck_unify__wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__bind_args_if_needed_6_p_0(
  MR_Word check_hlds__modecheck_unify__InstOfX_7,
  MR_Word check_hlds__modecheck_unify__Inst_8,
  MR_Word check_hlds__modecheck_unify__ArgVars_9,
  MR_Word check_hlds__modecheck_unify__InstOfXArgs_10,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_16,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_17)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded;
    MR_Word check_hlds__modecheck_unify__ModuleInfo_12;

    {
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_16, &check_hlds__modecheck_unify__ModuleInfo_12);
    }
    {
      check_hlds__modecheck_unify__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(check_hlds__modecheck_unify__ModuleInfo_12, check_hlds__modecheck_unify__InstOfX_7);
    }
    if (check_hlds__modecheck_unify__succeeded)
      *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_17 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_16;
    else
      {
        MR_Word check_hlds__modecheck_unify__InFromGroundTerm_13;

        {
          check_hlds__mode_info__mode_info_get_in_from_ground_term_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_16, &check_hlds__modecheck_unify__InFromGroundTerm_13);
        }
        switch (check_hlds__modecheck_unify__InFromGroundTerm_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_17 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_16;
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__modecheck_unify__UnifyArgInsts_14;
              MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_12_31;

              {
                check_hlds__modecheck_unify__UnifyArgInsts_14 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &check_hlds__modecheck_unify_scalar_common_1[2], (MR_Word) &check_hlds__modecheck_unify_scalar_common_4[3], check_hlds__modecheck_unify__InstOfXArgs_10);
              }
              {
                check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__try_bind_args_5_p_0(check_hlds__modecheck_unify__Inst_8, check_hlds__modecheck_unify__ArgVars_9, check_hlds__modecheck_unify__UnifyArgInsts_14, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_16, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_12_31);
              }
              if (check_hlds__modecheck_unify__succeeded)
                *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_17 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_12_31;
              else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.bind_args\'/5", (MR_String) "try_bind_args failed");
                    return;
                  }
                }
            }
            break;
        }
      }
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__match_mode_by_higher_order_insts_6_p_0(
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
  MR_Word check_hlds__modecheck_unify__HeadVar__3_3,
  MR_Word check_hlds__modecheck_unify__HeadVar__4_4,
  MR_Word check_hlds__modecheck_unify__ArgModesList_5,
  MR_Word * check_hlds__modecheck_unify__HeadVar__6_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__modecheck_unify__succeeded;

        if ((check_hlds__modecheck_unify__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__modecheck_unify__HeadVar__6_6 = (MR_Integer) 0;
        else
          {
            MR_Word check_hlds__modecheck_unify__Arg_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word check_hlds__modecheck_unify__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__4_4, (MR_Integer) 1)));
            MR_Word check_hlds__modecheck_unify__ArgMode_18;
            MR_Word check_hlds__modecheck_unify__ArgModes_19;
            MR_Word check_hlds__modecheck_unify__Initial_20;
            MR_Word check_hlds__modecheck_unify__V_28_28;
            MR_Word check_hlds__modecheck_unify__V_21_21;
            MR_Word check_hlds__modecheck_unify__V_22_22;

            if ((check_hlds__modecheck_unify__ArgModesList_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.match_mode_by_higher_order_insts\'/6", (MR_String) "too many arguments");
                  return;
                }
              }
            else
              {
                check_hlds__modecheck_unify__ArgMode_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__ArgModesList_5, (MR_Integer) 0)));
                check_hlds__modecheck_unify__ArgModes_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__ArgModesList_5, (MR_Integer) 1)));
              }
            {
              check_hlds__modecheck_unify__Initial_20 = check_hlds__mode_util__mode_get_initial_inst_2_f_0(check_hlds__modecheck_unify__HeadVar__1_1, check_hlds__modecheck_unify__ArgMode_18);
            }
            check_hlds__modecheck_unify__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_unify__Initial_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Initial_20, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (check_hlds__modecheck_unify__succeeded)
              {
                check_hlds__modecheck_unify__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Initial_20, (MR_Integer) 1)));
                check_hlds__modecheck_unify__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Initial_20, (MR_Integer) 2)));
                check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__V_28_28)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__modecheck_unify__succeeded)
                  check_hlds__modecheck_unify__V_22_22 = (MR_Word) MR_body(((MR_Word) check_hlds__modecheck_unify__V_28_28), (MR_Integer) 1);
              }
            if (check_hlds__modecheck_unify__succeeded)
              {
                MR_Word check_hlds__modecheck_unify__ArgInst_23;
                MR_Word check_hlds__modecheck_unify__ArgType_24;

                {
                  hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_unify__HeadVar__2_2, check_hlds__modecheck_unify__Arg_14, &check_hlds__modecheck_unify__ArgInst_23);
                }
                {
                  hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_unify__HeadVar__3_3, check_hlds__modecheck_unify__Arg_14, &check_hlds__modecheck_unify__ArgType_24);
                }
                {
                  check_hlds__modecheck_unify__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modecheck_unify__ArgInst_23, check_hlds__modecheck_unify__Initial_20, check_hlds__modecheck_unify__ArgType_24, check_hlds__modecheck_unify__HeadVar__1_1);
                }
                if (check_hlds__modecheck_unify__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word check_hlds__modecheck_unify__HeadVar__4__tmp_copy_4 = check_hlds__modecheck_unify__Args_15;
                      MR_Word check_hlds__modecheck_unify__ArgModesList__tmp_copy_5 = check_hlds__modecheck_unify__ArgModes_19;

                      check_hlds__modecheck_unify__ArgModesList_5 = check_hlds__modecheck_unify__ArgModesList__tmp_copy_5;
                      check_hlds__modecheck_unify__HeadVar__4_4 = check_hlds__modecheck_unify__HeadVar__4__tmp_copy_4;
                    }
                    continue;
                  }
                else
                  {
                    {
                      check_hlds__modecheck_unify__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(check_hlds__modecheck_unify__HeadVar__1_1, check_hlds__modecheck_unify__ArgInst_23);
                    }
                    if (check_hlds__modecheck_unify__succeeded)
                      *check_hlds__modecheck_unify__HeadVar__6_6 = (MR_Integer) 1;
                    else
                      *check_hlds__modecheck_unify__HeadVar__6_6 = (MR_Integer) 2;
                  }
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__modecheck_unify__HeadVar__4__tmp_copy_4 = check_hlds__modecheck_unify__Args_15;
                  MR_Word check_hlds__modecheck_unify__ArgModesList__tmp_copy_5 = check_hlds__modecheck_unify__ArgModes_19;

                  check_hlds__modecheck_unify__ArgModesList_5 = check_hlds__modecheck_unify__ArgModesList__tmp_copy_5;
                  check_hlds__modecheck_unify__HeadVar__4_4 = check_hlds__modecheck_unify__HeadVar__4__tmp_copy_4;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__modecheck_unify__match_modes_by_higher_order_insts_2_8_p_0(
  MR_Word check_hlds__modecheck_unify__ModuleInfo_1,
  MR_Word check_hlds__modecheck_unify__InstMap_2,
  MR_Word check_hlds__modecheck_unify__VarTypes_3,
  MR_Word check_hlds__modecheck_unify__ArgVars_4,
  MR_Word check_hlds__modecheck_unify__PredInfo_5,
  MR_Word check_hlds__modecheck_unify__HeadVar__6_6,
  MR_Word check_hlds__modecheck_unify__RevMatchedProcIds_7,
  MR_Word * check_hlds__modecheck_unify__Result_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__modecheck_unify__succeeded;

        if ((check_hlds__modecheck_unify__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word check_hlds__modecheck_unify__V_16_16;

            {
              check_hlds__modecheck_unify__V_16_16 = mercury__list__reverse_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__modecheck_unify__RevMatchedProcIds_7);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__modecheck_unify__Result_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__V_16_16));
            }
          }
        else
          {
            MR_Integer check_hlds__modecheck_unify__ProcId_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__6_6, (MR_Integer) 0)));
            MR_Word check_hlds__modecheck_unify__ProcIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__6_6, (MR_Integer) 1)));
            MR_Word check_hlds__modecheck_unify__ProcInfo_26;
            MR_Word check_hlds__modecheck_unify__ArgModes_27;
            MR_Word check_hlds__modecheck_unify__ProcResult_28;

            {
              hlds__hlds_pred__pred_info_proc_info_3_p_0(check_hlds__modecheck_unify__PredInfo_5, check_hlds__modecheck_unify__ProcId_22, &check_hlds__modecheck_unify__ProcInfo_26);
            }
            {
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__modecheck_unify__ProcInfo_26, &check_hlds__modecheck_unify__ArgModes_27);
            }
            {
              check_hlds__modecheck_unify__match_mode_by_higher_order_insts_6_p_0(check_hlds__modecheck_unify__ModuleInfo_1, check_hlds__modecheck_unify__InstMap_2, check_hlds__modecheck_unify__VarTypes_3, check_hlds__modecheck_unify__ArgVars_4, check_hlds__modecheck_unify__ArgModes_27, &check_hlds__modecheck_unify__ProcResult_28);
            }
            switch (check_hlds__modecheck_unify__ProcResult_28) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                *check_hlds__modecheck_unify__Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
              case (MR_Integer) 1:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__modecheck_unify__HeadVar__6__tmp_copy_6 = check_hlds__modecheck_unify__ProcIds_23;

                    check_hlds__modecheck_unify__HeadVar__6_6 = check_hlds__modecheck_unify__HeadVar__6__tmp_copy_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__modecheck_unify__V_29_29;

                  {
                    check_hlds__modecheck_unify__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_29_29, 0) = ((MR_Box) (check_hlds__modecheck_unify__ProcId_22));
                    MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_29_29, 1) = ((MR_Box) (check_hlds__modecheck_unify__RevMatchedProcIds_7));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__modecheck_unify__HeadVar__6__tmp_copy_6 = check_hlds__modecheck_unify__ProcIds_23;
                    MR_Word check_hlds__modecheck_unify__RevMatchedProcIds__tmp_copy_7 = check_hlds__modecheck_unify__V_29_29;

                    check_hlds__modecheck_unify__RevMatchedProcIds_7 = check_hlds__modecheck_unify__RevMatchedProcIds__tmp_copy_7;
                    check_hlds__modecheck_unify__HeadVar__6_6 = check_hlds__modecheck_unify__HeadVar__6__tmp_copy_6;
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
check_hlds__modecheck_unify__categorize_unify_var_functor_12_p_0_1(
  MR_Box check_hlds__modecheck_unify__closure_arg)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded;
    MR_Box check_hlds__modecheck_unify__closure = check_hlds__modecheck_unify__closure_arg;

    {
      check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__IntroducedFrom__pred__categorize_unify_var_functor__1374__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 4))));
    }
    return check_hlds__modecheck_unify__succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_functor_12_p_0(
  MR_Word check_hlds__modecheck_unify__FromToInstsOfX_13,
  MR_Word check_hlds__modecheck_unify__FromToInstsOfXArgs_14,
  MR_Word check_hlds__modecheck_unify__ArgFromToInsts_15,
  MR_Word check_hlds__modecheck_unify__X_16,
  MR_Word check_hlds__modecheck_unify__NewConsId_17,
  MR_Word check_hlds__modecheck_unify__ArgVars_18,
  MR_Word check_hlds__modecheck_unify__VarTypes_19,
  MR_Word check_hlds__modecheck_unify__UnifyContext_20,
  MR_Word check_hlds__modecheck_unify__Unification0_21,
  MR_Word * check_hlds__modecheck_unify__Unification_22,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_70,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_71)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded;
    MR_Word check_hlds__modecheck_unify__TypeOfX_24;
    MR_Word check_hlds__modecheck_unify__SubInfo_34;
    MR_Word check_hlds__modecheck_unify__ConsId_35;
    MR_Word check_hlds__modecheck_unify__ArgModes_48;
    MR_Word check_hlds__modecheck_unify__ModuleInfo_49;

    {
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_unify__VarTypes_19, check_hlds__modecheck_unify__X_16, &check_hlds__modecheck_unify__TypeOfX_24);
    }
    switch (MR_tag((MR_Word) check_hlds__modecheck_unify__Unification0_21)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__modecheck_unify__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_21, (MR_Integer) 0)));
          MR_Word check_hlds__modecheck_unify__V_27_27;
          MR_Word check_hlds__modecheck_unify__V_28_28;
          MR_Word check_hlds__modecheck_unify__V_29_29;
          MR_Word check_hlds__modecheck_unify__V_30_30;

          check_hlds__modecheck_unify__ConsId_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_21, (MR_Integer) 1)));
          check_hlds__modecheck_unify__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_21, (MR_Integer) 2)));
          check_hlds__modecheck_unify__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_21, (MR_Integer) 3)));
          check_hlds__modecheck_unify__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_21, (MR_Integer) 4)));
          check_hlds__modecheck_unify__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_21, (MR_Integer) 5)));
          check_hlds__modecheck_unify__SubInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_21, (MR_Integer) 6)));
          if ((check_hlds__modecheck_unify__SubInfo_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
            }
          else
            {
              MR_Word check_hlds__modecheck_unify__MaybeTakeAddr_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__SubInfo_34, (MR_Integer) 0)));
              MR_Word check_hlds__modecheck_unify__V_72_72;
              MR_Word check_hlds__modecheck_unify___MaybeSize0_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__SubInfo_34, (MR_Integer) 1)));

              {
                check_hlds__modecheck_unify__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_72_72, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_5[3]));
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_72_72, 1) = ((MR_Box) (check_hlds__modecheck_unify__categorize_unify_var_functor_12_p_0_1));
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_72_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_72_72, 3) = ((MR_Box) (check_hlds__modecheck_unify__MaybeTakeAddr_32));
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_72_72, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                mercury__require__expect_4_p_0(check_hlds__modecheck_unify__V_72_72, (MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.categorize_unify_var_functor\'/12", (MR_String) "take_addr");
              }
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__modecheck_unify__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_21, (MR_Integer) 0)));
          MR_Word check_hlds__modecheck_unify__V_37_37;
          MR_Word check_hlds__modecheck_unify__V_38_38;
          MR_Word check_hlds__modecheck_unify__V_39_39;
          MR_Word check_hlds__modecheck_unify__V_40_40;

          check_hlds__modecheck_unify__ConsId_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_21, (MR_Integer) 1)));
          check_hlds__modecheck_unify__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_21, (MR_Integer) 2)));
          check_hlds__modecheck_unify__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_21, (MR_Integer) 3)));
          check_hlds__modecheck_unify__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_21, (MR_Integer) 4)));
          check_hlds__modecheck_unify__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_21, (MR_Integer) 5)));
          check_hlds__modecheck_unify__SubInfo_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 2:
        {
          check_hlds__modecheck_unify__SubInfo_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          check_hlds__modecheck_unify__ConsId_35 = check_hlds__modecheck_unify__NewConsId_17;
        }
        break;
      case (MR_Integer) 3:
        {
          check_hlds__modecheck_unify__SubInfo_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          check_hlds__modecheck_unify__ConsId_35 = check_hlds__modecheck_unify__NewConsId_17;
        }
        break;
    }
    {
      check_hlds__mode_util__from_to_insts_to_unify_modes_3_p_0(check_hlds__modecheck_unify__FromToInstsOfXArgs_14, check_hlds__modecheck_unify__ArgFromToInsts_15, &check_hlds__modecheck_unify__ArgModes_48);
    }
    {
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_70, &check_hlds__modecheck_unify__ModuleInfo_49);
    }
    {
      check_hlds__modecheck_unify__succeeded = check_hlds__mode_util__from_to_insts_is_output_2_p_0(check_hlds__modecheck_unify__ModuleInfo_49, check_hlds__modecheck_unify__FromToInstsOfX_13);
    }
    if (check_hlds__modecheck_unify__succeeded)
      {
        MR_Word check_hlds__modecheck_unify__V_79_79;
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_80_80;
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_81_81;

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__modecheck_unify__Unification_22 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_16));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__ConsId_35));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__modecheck_unify__ArgVars_18));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__modecheck_unify__ArgModes_48));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__modecheck_unify__SubInfo_34));
        }
        {
          check_hlds__modecheck_unify__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_79_79, 0) = ((MR_Box) (check_hlds__modecheck_unify__UnifyContext_20));
        }
        {
          check_hlds__mode_info__mode_info_set_call_context_3_p_0(check_hlds__modecheck_unify__V_79_79, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_70, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_80_80);
        }
        {
          check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_116_121_112_101_95_105_110_102_111_95_97_114_103_115_95_97_114_101_95_103_114_111_117_110_100_95_95_91_51_93_95_48_5_p_0(check_hlds__modecheck_unify__ArgVars_18, check_hlds__modecheck_unify__VarTypes_19, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_80_80, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_81_81);
        }
        {
          check_hlds__mode_info__mode_info_unset_call_context_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_81_81, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_71);
        }
      }
    else
      {
        MR_Word check_hlds__modecheck_unify__CanFail_60;
        MR_Word check_hlds__modecheck_unify__InitialInst0_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfX_13, (MR_Integer) 0)));
        MR_Word check_hlds__modecheck_unify__FinalInst0_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfX_13, (MR_Integer) 1)));
        MR_Word check_hlds__modecheck_unify__InitialInst_52;
        MR_Word check_hlds__modecheck_unify__FinalInst_53;
        MR_Word check_hlds__modecheck_unify__V_83_83;
        MR_Word check_hlds__modecheck_unify__V_84_84;
        MR_Word check_hlds__modecheck_unify__V_85_85;
        MR_Word check_hlds__modecheck_unify__V_86_86;
        MR_Word check_hlds__modecheck_unify__V_54_54;
        MR_Word check_hlds__modecheck_unify__V_55_55;
        MR_Word check_hlds__modecheck_unify__V_56_56;
        MR_Word check_hlds__modecheck_unify__V_57_57;
        MR_Word check_hlds__modecheck_unify__V_58_58;
        MR_Word check_hlds__modecheck_unify__V_59_59;

        {
          check_hlds__inst_util__inst_expand_3_p_0(check_hlds__modecheck_unify__ModuleInfo_49, check_hlds__modecheck_unify__InitialInst0_50, &check_hlds__modecheck_unify__InitialInst_52);
        }
        {
          check_hlds__inst_util__inst_expand_3_p_0(check_hlds__modecheck_unify__ModuleInfo_49, check_hlds__modecheck_unify__FinalInst0_51, &check_hlds__modecheck_unify__FinalInst_53);
        }
        check_hlds__modecheck_unify__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_unify__InitialInst_52)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__InitialInst_52, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (check_hlds__modecheck_unify__succeeded)
          {
            check_hlds__modecheck_unify__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__InitialInst_52, (MR_Integer) 1)));
            check_hlds__modecheck_unify__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__InitialInst_52, (MR_Integer) 2)));
            check_hlds__modecheck_unify__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__InitialInst_52, (MR_Integer) 3)));
            check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__V_83_83)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__modecheck_unify__succeeded)
              {
                check_hlds__modecheck_unify__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_83_83, (MR_Integer) 0)));
                check_hlds__modecheck_unify__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_83_83, (MR_Integer) 1)));
                check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__V_84_84 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (check_hlds__modecheck_unify__succeeded)
                  {
                    check_hlds__modecheck_unify__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_unify__FinalInst_53)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__FinalInst_53, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (check_hlds__modecheck_unify__succeeded)
                      {
                        check_hlds__modecheck_unify__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__FinalInst_53, (MR_Integer) 1)));
                        check_hlds__modecheck_unify__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__FinalInst_53, (MR_Integer) 2)));
                        check_hlds__modecheck_unify__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__FinalInst_53, (MR_Integer) 3)));
                        check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__V_85_85)) == (MR_mktag((MR_Integer) 1)));
                        if (check_hlds__modecheck_unify__succeeded)
                          {
                            check_hlds__modecheck_unify__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_85_85, (MR_Integer) 0)));
                            check_hlds__modecheck_unify__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_85_85, (MR_Integer) 1)));
                            check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__V_86_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                  }
              }
          }
        if (check_hlds__modecheck_unify__succeeded)
          {
            check_hlds__modecheck_unify__CanFail_60 = (MR_Integer) 1;
            *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_71 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_70;
          }
        else
          {
            MR_Word check_hlds__modecheck_unify__Constructors_61;
            MR_Word check_hlds__modecheck_unify__V_87_87;
            MR_Word check_hlds__modecheck_unify__V_62_62;

            {
              check_hlds__modecheck_unify__succeeded = check_hlds__type_util__type_constructors_3_p_0(check_hlds__modecheck_unify__ModuleInfo_49, check_hlds__modecheck_unify__TypeOfX_24, &check_hlds__modecheck_unify__Constructors_61);
            }
            if (check_hlds__modecheck_unify__succeeded)
              {
                check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__Constructors_61)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__modecheck_unify__succeeded)
                  {
                    check_hlds__modecheck_unify__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Constructors_61, (MR_Integer) 0)));
                    check_hlds__modecheck_unify__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Constructors_61, (MR_Integer) 1)));
                    check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__V_87_87 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
              }
            if (check_hlds__modecheck_unify__succeeded)
              {
                check_hlds__modecheck_unify__CanFail_60 = (MR_Integer) 1;
                *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_71 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_70;
              }
            else
              {
                MR_Word check_hlds__modecheck_unify__InstMap0_63;
                MR_Word check_hlds__modecheck_unify__PredOrFunc_65;
                MR_Word check_hlds__modecheck_unify__V_64_64;
                MR_Word check_hlds__modecheck_unify__V_67_67;

                check_hlds__modecheck_unify__CanFail_60 = (MR_Integer) 0;
                {
                  check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_70, &check_hlds__modecheck_unify__InstMap0_63);
                }
                {
                  check_hlds__modecheck_unify__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__modecheck_unify__TypeOfX_24, &check_hlds__modecheck_unify__V_64_64, &check_hlds__modecheck_unify__PredOrFunc_65, &check_hlds__modecheck_unify__V_67_67);
                }
                if (check_hlds__modecheck_unify__succeeded)
                  {
                    check_hlds__modecheck_unify__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modecheck_unify__InstMap0_63);
                  }
                if (check_hlds__modecheck_unify__succeeded)
                  {
                    MR_Word check_hlds__modecheck_unify__WaitingVars_68;
                    MR_Word check_hlds__modecheck_unify__ModeError_69;
                    MR_Word check_hlds__modecheck_unify__V_88_88;

                    {
                      parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__modecheck_unify__WaitingVars_68);
                    }
                    {
                      check_hlds__modecheck_unify__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_88_88, 0) = ((MR_Box) (check_hlds__modecheck_unify__ConsId_35));
                      MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_88_88, 1) = ((MR_Box) (check_hlds__modecheck_unify__ArgVars_18));
                    }
                    {
                      check_hlds__modecheck_unify__ModeError_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_69, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_16));
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_69, 2) = ((MR_Box) (check_hlds__modecheck_unify__V_88_88));
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_69, 3) = ((MR_Box) (check_hlds__modecheck_unify__TypeOfX_24));
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_69, 4) = ((MR_Box) (check_hlds__modecheck_unify__PredOrFunc_65));
                    }
                    {
                      check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_68, check_hlds__modecheck_unify__ModeError_69, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_70, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_71);
                    }
                  }
                else
                  *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_71 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_70;
              }
          }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__modecheck_unify__Unification_22 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__ConsId_35));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__modecheck_unify__ArgVars_18));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__modecheck_unify__ArgModes_48));
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__modecheck_unify__CanFail_60));
          MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) ((MR_Integer) 1));
        }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_lambda_11_p_0_1(
  MR_Box check_hlds__modecheck_unify__closure_arg)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded;
    MR_Box check_hlds__modecheck_unify__closure = check_hlds__modecheck_unify__closure_arg;

    {
      check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__IntroducedFrom__pred__categorize_unify_var_lambda__1269__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 4))));
    }
    return check_hlds__modecheck_unify__succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_lambda_11_p_0(
  MR_Word check_hlds__modecheck_unify__FromToInstsOfX_12,
  MR_Word check_hlds__modecheck_unify__ArgFromToInsts_13,
  MR_Word check_hlds__modecheck_unify__X_14,
  MR_Word check_hlds__modecheck_unify__ArgVars_15,
  MR_Word check_hlds__modecheck_unify__PredOrFunc_16,
  MR_Word check_hlds__modecheck_unify__RHS0_17,
  MR_Word * check_hlds__modecheck_unify__RHS_18,
  MR_Word check_hlds__modecheck_unify__Unification0_19,
  MR_Word * check_hlds__modecheck_unify__Unification_20,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_80,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_81)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded;
    MR_Integer check_hlds__modecheck_unify__Arity_22;
    MR_Word check_hlds__modecheck_unify__ConsId_24;
    MR_Word check_hlds__modecheck_unify__SubInfo_29;
    MR_Word check_hlds__modecheck_unify__ArgModes_45;
    MR_Word check_hlds__modecheck_unify__InstMap_46;
    MR_Word check_hlds__modecheck_unify__ModuleInfo_47;

    {
      mercury__list__length_2_p_0((MR_Word) &check_hlds__modecheck_unify_scalar_common_1[0], check_hlds__modecheck_unify__ArgVars_15, &check_hlds__modecheck_unify__Arity_22);
    }
    switch (MR_tag((MR_Word) check_hlds__modecheck_unify__Unification0_19)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__modecheck_unify__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 0)));
          MR_Word check_hlds__modecheck_unify__V_25_25;
          MR_Word check_hlds__modecheck_unify__V_26_26;
          MR_Word check_hlds__modecheck_unify__V_27_27;
          MR_Word check_hlds__modecheck_unify__V_28_28;

          check_hlds__modecheck_unify__ConsId_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 1)));
          check_hlds__modecheck_unify__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 2)));
          check_hlds__modecheck_unify__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 3)));
          check_hlds__modecheck_unify__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 4)));
          check_hlds__modecheck_unify__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 5)));
          check_hlds__modecheck_unify__SubInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 6)));
          if ((check_hlds__modecheck_unify__SubInfo_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
            }
          else
            {
              MR_Word check_hlds__modecheck_unify__MaybeTakeAddr_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__SubInfo_29, (MR_Integer) 0)));
              MR_Word check_hlds__modecheck_unify__V_87_87;
              MR_Word check_hlds__modecheck_unify___MaybeSize_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__SubInfo_29, (MR_Integer) 1)));

              {
                check_hlds__modecheck_unify__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_87_87, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_5[3]));
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_87_87, 1) = ((MR_Box) (check_hlds__modecheck_unify__categorize_unify_var_lambda_11_p_0_1));
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_87_87, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_87_87, 3) = ((MR_Box) (check_hlds__modecheck_unify__MaybeTakeAddr_30));
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_87_87, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                mercury__require__expect_4_p_0(check_hlds__modecheck_unify__V_87_87, (MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.categorize_unify_var_lambda\'/11", (MR_String) "take_addr");
              }
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__modecheck_unify__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 0)));
          MR_Word check_hlds__modecheck_unify__V_33_33;
          MR_Word check_hlds__modecheck_unify__V_34_34;
          MR_Word check_hlds__modecheck_unify__V_35_35;
          MR_Word check_hlds__modecheck_unify__V_36_36;

          check_hlds__modecheck_unify__ConsId_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 1)));
          check_hlds__modecheck_unify__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 2)));
          check_hlds__modecheck_unify__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 3)));
          check_hlds__modecheck_unify__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 4)));
          check_hlds__modecheck_unify__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 5)));
          check_hlds__modecheck_unify__SubInfo_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 2:
        {
          check_hlds__modecheck_unify__SubInfo_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            check_hlds__modecheck_unify__ConsId_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ConsId_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ConsId_24, 1) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_6[1]));
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ConsId_24, 2) = ((MR_Box) (check_hlds__modecheck_unify__Arity_22));
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ConsId_24, 3) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_1[9]));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          check_hlds__modecheck_unify__SubInfo_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            check_hlds__modecheck_unify__ConsId_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ConsId_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ConsId_24, 1) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_6[1]));
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ConsId_24, 2) = ((MR_Box) (check_hlds__modecheck_unify__Arity_22));
            MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ConsId_24, 3) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_1[9]));
          }
        }
        break;
    }
    {
      check_hlds__mode_util__from_to_insts_to_unify_modes_3_p_0(check_hlds__modecheck_unify__ArgFromToInsts_13, check_hlds__modecheck_unify__ArgFromToInsts_13, &check_hlds__modecheck_unify__ArgModes_45);
    }
    {
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_80, &check_hlds__modecheck_unify__InstMap_46);
    }
    {
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_80, &check_hlds__modecheck_unify__ModuleInfo_47);
    }
    {
      check_hlds__modecheck_unify__succeeded = check_hlds__mode_util__from_to_insts_is_output_2_p_0(check_hlds__modecheck_unify__ModuleInfo_47, check_hlds__modecheck_unify__FromToInstsOfX_12);
    }
    if (check_hlds__modecheck_unify__succeeded)
      {
        MR_Word check_hlds__modecheck_unify__ShroudedPredProcId_48;

        check_hlds__modecheck_unify__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_unify__ConsId_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ConsId_24, (MR_Integer) 0)))) == (MR_Integer) 4)));
        if (check_hlds__modecheck_unify__succeeded)
          {
            check_hlds__modecheck_unify__ShroudedPredProcId_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ConsId_24, (MR_Integer) 1)));
            {
              check_hlds__modecheck_unify__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modecheck_unify__InstMap_46);
            }
          }
        if (check_hlds__modecheck_unify__succeeded)
          {
            MR_Word check_hlds__modecheck_unify__PredId_50;
            MR_Integer check_hlds__modecheck_unify__ProcId_51;
            MR_Word check_hlds__modecheck_unify__V_93_93;
            MR_Word check_hlds__modecheck_unify__Goal_59;
            MR_Word check_hlds__modecheck_unify__V_94_94;
            MR_Word check_hlds__modecheck_unify__V_119_119;
            MR_Integer check_hlds__modecheck_unify__V_120_120;
            MR_Word check_hlds__modecheck_unify__V_52_52;
            MR_Word check_hlds__modecheck_unify__V_53_53;
            MR_Word check_hlds__modecheck_unify__V_54_54;
            MR_Word check_hlds__modecheck_unify__V_55_55;
            MR_Word check_hlds__modecheck_unify__V_56_56;
            MR_Word check_hlds__modecheck_unify__V_57_57;
            MR_Word check_hlds__modecheck_unify__V_58_58;
            MR_Word check_hlds__modecheck_unify__V_64_64;
            MR_Word check_hlds__modecheck_unify__V_60_60;
            MR_Word check_hlds__modecheck_unify__V_61_61;
            MR_Word check_hlds__modecheck_unify__V_62_62;
            MR_Word check_hlds__modecheck_unify__V_63_63;

            {
              check_hlds__modecheck_unify__V_93_93 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(check_hlds__modecheck_unify__ShroudedPredProcId_48);
            }
            check_hlds__modecheck_unify__PredId_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_93_93, (MR_Integer) 0)));
            check_hlds__modecheck_unify__ProcId_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_93_93, (MR_Integer) 1)));
            check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__RHS0_17)) == (MR_mktag((MR_Integer) 2)));
            if (check_hlds__modecheck_unify__succeeded)
              {
                check_hlds__modecheck_unify__V_52_52 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_17, (MR_Integer) 0)))) & (MR_Integer) 3);
                check_hlds__modecheck_unify__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_17, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                check_hlds__modecheck_unify__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_17, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                check_hlds__modecheck_unify__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_17, (MR_Integer) 2)));
                check_hlds__modecheck_unify__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_17, (MR_Integer) 3)));
                check_hlds__modecheck_unify__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_17, (MR_Integer) 4)));
                check_hlds__modecheck_unify__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_17, (MR_Integer) 5)));
                check_hlds__modecheck_unify__Goal_59 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_17, (MR_Integer) 6)));
                check_hlds__modecheck_unify__succeeded = (mercury__private_builtin__dummy_var == mercury__private_builtin__dummy_var);
                if (check_hlds__modecheck_unify__succeeded)
                  {
                    check_hlds__modecheck_unify__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Goal_59, (MR_Integer) 0)));
                    check_hlds__modecheck_unify__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Goal_59, (MR_Integer) 1)));
                    check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__V_94_94)) == (MR_mktag((MR_Integer) 2)));
                    if (check_hlds__modecheck_unify__succeeded)
                      {
                        check_hlds__modecheck_unify__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__V_94_94, (MR_Integer) 0)));
                        check_hlds__modecheck_unify__V_120_120 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__V_94_94, (MR_Integer) 1)));
                        check_hlds__modecheck_unify__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__V_94_94, (MR_Integer) 2)));
                        check_hlds__modecheck_unify__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__V_94_94, (MR_Integer) 3)));
                        check_hlds__modecheck_unify__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__V_94_94, (MR_Integer) 4)));
                        check_hlds__modecheck_unify__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__V_94_94, (MR_Integer) 5)));
                        {
                          check_hlds__modecheck_unify__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__modecheck_unify__PredId_50, check_hlds__modecheck_unify__V_119_119);
                        }
                        if (check_hlds__modecheck_unify__succeeded)
                          check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__ProcId_51 == check_hlds__modecheck_unify__V_120_120);
                      }
                  }
              }
            if (check_hlds__modecheck_unify__succeeded)
              {
                MR_Word check_hlds__modecheck_unify__PredInfo_65;
                MR_Word check_hlds__modecheck_unify__PredModule_66;
                MR_String check_hlds__modecheck_unify__PredName_67;
                MR_Word check_hlds__modecheck_unify__VarTypes_68;
                MR_Word check_hlds__modecheck_unify__Type_69;
                MR_Word check_hlds__modecheck_unify__RHSTypeCtor_75;
                MR_Word check_hlds__modecheck_unify__RHSConsId_76;
                MR_Word check_hlds__modecheck_unify__V_104_104;
                MR_Word check_hlds__modecheck_unify__PorF_70;
                MR_Word check_hlds__modecheck_unify__V_71_71;
                MR_Word check_hlds__modecheck_unify__V_72_72;
                MR_Word check_hlds__modecheck_unify__V_73_73;

                {
                  hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__modecheck_unify__ModuleInfo_47, check_hlds__modecheck_unify__PredId_50, &check_hlds__modecheck_unify__PredInfo_65);
                }
                {
                  check_hlds__modecheck_unify__PredModule_66 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__modecheck_unify__PredInfo_65);
                }
                {
                  check_hlds__modecheck_unify__PredName_67 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__modecheck_unify__PredInfo_65);
                }
                {
                  check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_80, &check_hlds__modecheck_unify__VarTypes_68);
                }
                {
                  hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_unify__VarTypes_68, check_hlds__modecheck_unify__X_14, &check_hlds__modecheck_unify__Type_69);
                }
                check_hlds__modecheck_unify__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_unify__Type_69)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Type_69, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (check_hlds__modecheck_unify__succeeded)
                  {
                    check_hlds__modecheck_unify__PorF_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Type_69, (MR_Integer) 1)));
                    check_hlds__modecheck_unify__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Type_69, (MR_Integer) 2)));
                    check_hlds__modecheck_unify__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Type_69, (MR_Integer) 3)));
                    check_hlds__modecheck_unify__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Type_69, (MR_Integer) 4)));
                    switch (check_hlds__modecheck_unify__PorF_70) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          check_hlds__modecheck_unify__RHSTypeCtor_75 = (MR_Word) &check_hlds__modecheck_unify_scalar_common_1[10];
                        }
                        break;
                      case (MR_Integer) 0:
                        {
                          check_hlds__modecheck_unify__RHSTypeCtor_75 = (MR_Word) &check_hlds__modecheck_unify_scalar_common_1[11];
                        }
                        break;
                    }
                  }
                else
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.categorize_unify_var_lambda\'/11", (MR_String) "bad HO type");
                      return;
                    }
                  }
                {
                  check_hlds__modecheck_unify__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_104_104, 0) = ((MR_Box) (check_hlds__modecheck_unify__PredModule_66));
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_104_104, 1) = ((MR_Box) (check_hlds__modecheck_unify__PredName_67));
                }
                {
                  check_hlds__modecheck_unify__RHSConsId_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__RHSConsId_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__RHSConsId_76, 1) = ((MR_Box) (check_hlds__modecheck_unify__V_104_104));
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__RHSConsId_76, 2) = ((MR_Box) (check_hlds__modecheck_unify__Arity_22));
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__RHSConsId_76, 3) = ((MR_Box) (check_hlds__modecheck_unify__RHSTypeCtor_75));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__modecheck_unify__RHS_18 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__RHSConsId_76));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__modecheck_unify__ArgVars_15));
                }
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.categorize_unify_var_lambda\'/11", (MR_String) "reintroduced lambda goal");
                  return;
                }
              }
          }
        else
          *check_hlds__modecheck_unify__RHS_18 = check_hlds__modecheck_unify__RHS0_17;
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__modecheck_unify__Unification_20 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_14));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__ConsId_24));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__modecheck_unify__ArgVars_15));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__modecheck_unify__ArgModes_45));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__modecheck_unify__SubInfo_29));
        }
        *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_81 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_80;
      }
    else
      {
        {
          check_hlds__modecheck_unify__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modecheck_unify__InstMap_46);
        }
        if (check_hlds__modecheck_unify__succeeded)
          {
            MR_Word check_hlds__modecheck_unify__WaitingVars_77;
            MR_Word check_hlds__modecheck_unify__VarTypes0_78;
            MR_Word check_hlds__modecheck_unify__ModeError_79;
            MR_Word check_hlds__modecheck_unify__V_111_111;
            MR_Word check_hlds__modecheck_unify__Type_113;

            {
              parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__modecheck_unify__WaitingVars_77);
            }
            {
              check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_80, &check_hlds__modecheck_unify__VarTypes0_78);
            }
            {
              hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_unify__VarTypes0_78, check_hlds__modecheck_unify__X_14, &check_hlds__modecheck_unify__Type_113);
            }
            {
              check_hlds__modecheck_unify__V_111_111 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__V_111_111, 0) = ((MR_Box) (check_hlds__modecheck_unify__ArgVars_15));
              MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__V_111_111, 1) = ((MR_Box) (check_hlds__modecheck_unify__ArgFromToInsts_13));
            }
            {
              check_hlds__modecheck_unify__ModeError_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_79, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_14));
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_79, 2) = ((MR_Box) (check_hlds__modecheck_unify__V_111_111));
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_79, 3) = ((MR_Box) (check_hlds__modecheck_unify__Type_113));
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_79, 4) = ((MR_Box) (check_hlds__modecheck_unify__PredOrFunc_16));
            }
            {
              check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_77, check_hlds__modecheck_unify__ModeError_79, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_80, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_81);
            }
            *check_hlds__modecheck_unify__Unification_20 = check_hlds__modecheck_unify__Unification0_19;
            *check_hlds__modecheck_unify__RHS_18 = check_hlds__modecheck_unify__RHS0_17;
          }
        else
          {
            *check_hlds__modecheck_unify__Unification_20 = check_hlds__modecheck_unify__Unification0_19;
            *check_hlds__modecheck_unify__RHS_18 = check_hlds__modecheck_unify__RHS0_17;
            *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_81 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_80;
          }
      }
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_complicated_unify_11_p_0(
  MR_Word check_hlds__modecheck_unify__X_12,
  MR_Word check_hlds__modecheck_unify__Y_13,
  MR_Word check_hlds__modecheck_unify__Type_14,
  MR_Word check_hlds__modecheck_unify__FromToInstsOfX_15,
  MR_Word check_hlds__modecheck_unify__FromToInstsOfY_16,
  MR_Word check_hlds__modecheck_unify__Detism_17,
  MR_Word check_hlds__modecheck_unify__UnifyContext_18,
  MR_Word check_hlds__modecheck_unify__Unification0_19,
  MR_Word * check_hlds__modecheck_unify__Unification_20,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_61,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_62)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded;
    MR_Word check_hlds__modecheck_unify__InitialInstX_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfX_15, (MR_Integer) 0)));
    MR_Word check_hlds__modecheck_unify__InitialInstY_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfY_16, (MR_Integer) 0)));
    MR_Word check_hlds__modecheck_unify__UnifyMode_26;
    MR_Word check_hlds__modecheck_unify__CanFail_27;
    MR_Word check_hlds__modecheck_unify__UnifyTypeInfoVars_32;
    MR_Word check_hlds__modecheck_unify__ModuleInfo0_39;
    MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_72_72;
    MR_Word check_hlds__modecheck_unify___FinalInstX_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfX_15, (MR_Integer) 1)));
    MR_Word check_hlds__modecheck_unify___FinalInstY_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfY_16, (MR_Integer) 1)));
    MR_Word check_hlds__modecheck_unify__V_28_28;
    MR_Word check_hlds__modecheck_unify__UnifyTypeInfoVars0_31;
    MR_Word check_hlds__modecheck_unify__V_29_29;
    MR_Word check_hlds__modecheck_unify__V_30_30;
    MR_Word check_hlds__modecheck_unify__Errors_40;
    MR_Word check_hlds__modecheck_unify__V_41_41;
    MR_Word check_hlds__modecheck_unify__V_42_42;

    {
      check_hlds__modecheck_unify__UnifyMode_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__UnifyMode_26, 0) = ((MR_Box) (check_hlds__modecheck_unify__FromToInstsOfX_15));
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__UnifyMode_26, 1) = ((MR_Box) (check_hlds__modecheck_unify__FromToInstsOfY_16));
    }
    {
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__modecheck_unify__Detism_17, &check_hlds__modecheck_unify__CanFail_27, &check_hlds__modecheck_unify__V_28_28);
    }
    check_hlds__modecheck_unify__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_unify__Unification0_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (check_hlds__modecheck_unify__succeeded)
      {
        check_hlds__modecheck_unify__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 1)));
        check_hlds__modecheck_unify__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 2)));
        check_hlds__modecheck_unify__UnifyTypeInfoVars0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification0_19, (MR_Integer) 3)));
        check_hlds__modecheck_unify__UnifyTypeInfoVars_32 = check_hlds__modecheck_unify__UnifyTypeInfoVars0_31;
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_complicated_unify\'/11", (MR_String) "non-complicated unify");
          return;
        }
      }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      *check_hlds__modecheck_unify__Unification_20 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__UnifyMode_26));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_unify__CanFail_27));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__modecheck_unify__UnifyTypeInfoVars_32));
    }
    if ((check_hlds__modecheck_unify__UnifyTypeInfoVars_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_72_72 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_61;
    else
      {
        MR_Integer check_hlds__modecheck_unify__NumTypeInfoVars_35;
        MR_Word check_hlds__modecheck_unify__ExpectedInsts_36;
        MR_Word check_hlds__modecheck_unify__V_69_69;
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_70_70;
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_71_71;
        MR_Word check_hlds__modecheck_unify___InstVarSub_38;

        {
          mercury__list__length_2_p_0((MR_Word) &check_hlds__modecheck_unify_scalar_common_1[0], check_hlds__modecheck_unify__UnifyTypeInfoVars_32, &check_hlds__modecheck_unify__NumTypeInfoVars_35);
        }
        {
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__modecheck_unify__NumTypeInfoVars_35, ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__modecheck_unify_scalar_common_4[2]))), &check_hlds__modecheck_unify__ExpectedInsts_36);
        }
        {
          check_hlds__modecheck_unify__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_69_69, 0) = ((MR_Box) (check_hlds__modecheck_unify__UnifyContext_18));
        }
        {
          check_hlds__mode_info__mode_info_set_call_context_3_p_0(check_hlds__modecheck_unify__V_69_69, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_61, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_70_70);
        }
        {
          check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(check_hlds__modecheck_unify__UnifyTypeInfoVars_32, check_hlds__modecheck_unify__ExpectedInsts_36, (MR_Integer) 0, &check_hlds__modecheck_unify___InstVarSub_38, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_70_70, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_71_71);
        }
        {
          check_hlds__mode_info__mode_info_unset_call_context_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_71_71, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_72_72);
        }
      }
    {
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_72_72, &check_hlds__modecheck_unify__ModuleInfo0_39);
    }
    {
      check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_72_72, &check_hlds__modecheck_unify__Errors_40);
    }
    check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__Errors_40)) == (MR_mktag((MR_Integer) 1)));
    if (check_hlds__modecheck_unify__succeeded)
      {
        check_hlds__modecheck_unify__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Errors_40, (MR_Integer) 0)));
        check_hlds__modecheck_unify__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Errors_40, (MR_Integer) 1)));
        *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_62 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_72_72;
      }
    else
      {
        MR_Word check_hlds__modecheck_unify__V_43_43;
        MR_Word check_hlds__modecheck_unify__V_44_44;

        check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__Type_14)) == (MR_mktag((MR_Integer) 0)));
        if (check_hlds__modecheck_unify__succeeded)
          {
            check_hlds__modecheck_unify__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Type_14, (MR_Integer) 0)));
            check_hlds__modecheck_unify__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Type_14, (MR_Integer) 1)));
            {
              check_hlds__modecheck_unify__succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_p_0(check_hlds__modecheck_unify__ModuleInfo0_39, check_hlds__modecheck_unify__InitialInstX_22);
            }
            check_hlds__modecheck_unify__succeeded = !(check_hlds__modecheck_unify__succeeded);
          }
        if (check_hlds__modecheck_unify__succeeded)
          {
            MR_Word check_hlds__modecheck_unify__WaitingVars_45;
            MR_Word check_hlds__modecheck_unify__ModeError_46;

            {
              check_hlds__modecheck_unify__WaitingVars_45 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_unify__X_12);
            }
            {
              check_hlds__modecheck_unify__ModeError_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_46, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_12));
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_46, 2) = ((MR_Box) (check_hlds__modecheck_unify__InitialInstX_22));
            }
            {
              check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_45, check_hlds__modecheck_unify__ModeError_46, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_72_72, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_62);
            }
          }
        else
          {
            MR_Word check_hlds__modecheck_unify__V_47_47;
            MR_Word check_hlds__modecheck_unify__V_48_48;

            check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__Type_14)) == (MR_mktag((MR_Integer) 0)));
            if (check_hlds__modecheck_unify__succeeded)
              {
                check_hlds__modecheck_unify__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Type_14, (MR_Integer) 0)));
                check_hlds__modecheck_unify__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Type_14, (MR_Integer) 1)));
                {
                  check_hlds__modecheck_unify__succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_p_0(check_hlds__modecheck_unify__ModuleInfo0_39, check_hlds__modecheck_unify__InitialInstY_24);
                }
                check_hlds__modecheck_unify__succeeded = !(check_hlds__modecheck_unify__succeeded);
              }
            if (check_hlds__modecheck_unify__succeeded)
              {
                MR_Word check_hlds__modecheck_unify__WaitingVars_78;
                MR_Word check_hlds__modecheck_unify__ModeError_79;

                {
                  check_hlds__modecheck_unify__WaitingVars_78 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_unify__Y_13);
                }
                {
                  check_hlds__modecheck_unify__ModeError_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_79, 1) = ((MR_Box) (check_hlds__modecheck_unify__Y_13));
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_79, 2) = ((MR_Box) (check_hlds__modecheck_unify__InitialInstY_24));
                }
                {
                  check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_78, check_hlds__modecheck_unify__ModeError_79, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_72_72, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_62);
                }
              }
            else
              {
                MR_Word check_hlds__modecheck_unify__PredOrFunc_50;
                MR_Word check_hlds__modecheck_unify__V_49_49;
                MR_Word check_hlds__modecheck_unify__V_52_52;

                {
                  check_hlds__modecheck_unify__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__modecheck_unify__Type_14, &check_hlds__modecheck_unify__V_49_49, &check_hlds__modecheck_unify__PredOrFunc_50, &check_hlds__modecheck_unify__V_52_52);
                }
                if (check_hlds__modecheck_unify__succeeded)
                  {
                    MR_Word check_hlds__modecheck_unify__PredId_53;
                    MR_Word check_hlds__modecheck_unify__PredInfo_54;
                    MR_Word check_hlds__modecheck_unify__InstMap0_55;

                    {
                      check_hlds__mode_info__mode_info_get_pred_id_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_72_72, &check_hlds__modecheck_unify__PredId_53);
                    }
                    {
                      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__modecheck_unify__ModuleInfo0_39, check_hlds__modecheck_unify__PredId_53, &check_hlds__modecheck_unify__PredInfo_54);
                    }
                    {
                      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_72_72, &check_hlds__modecheck_unify__InstMap0_55);
                    }
                    {
                      check_hlds__modecheck_unify__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__modecheck_unify__PredInfo_54);
                    }
                    if (!(check_hlds__modecheck_unify__succeeded))
                      {
                        check_hlds__modecheck_unify__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(check_hlds__modecheck_unify__InstMap0_55);
                      }
                    if (check_hlds__modecheck_unify__succeeded)
                      *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_62 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_72_72;
                    else
                      {
                        MR_Word check_hlds__modecheck_unify__V_75_75;
                        MR_Word check_hlds__modecheck_unify__WaitingVars_80;
                        MR_Word check_hlds__modecheck_unify__ModeError_81;

                        {
                          parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__modecheck_unify__WaitingVars_80);
                        }
                        {
                          check_hlds__modecheck_unify__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_75_75, 0) = ((MR_Box) (check_hlds__modecheck_unify__Y_13));
                        }
                        {
                          check_hlds__modecheck_unify__ModeError_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_81, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_12));
                          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_81, 2) = ((MR_Box) (check_hlds__modecheck_unify__V_75_75));
                          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_81, 3) = ((MR_Box) (check_hlds__modecheck_unify__Type_14));
                          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_81, 4) = ((MR_Box) (check_hlds__modecheck_unify__PredOrFunc_50));
                        }
                        {
                          check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_80, check_hlds__modecheck_unify__ModeError_81, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_72_72, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_62);
                        }
                      }
                  }
                else
                  {
                    MR_Word check_hlds__modecheck_unify__TypeCtor_56;

                    {
                      check_hlds__modecheck_unify__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__modecheck_unify__Type_14, &check_hlds__modecheck_unify__TypeCtor_56);
                    }
                    if (check_hlds__modecheck_unify__succeeded)
                      {
                        MR_Word check_hlds__modecheck_unify__Context_57;
                        MR_Word check_hlds__modecheck_unify__InstVarSet_58;
                        MR_Word check_hlds__modecheck_unify__UnifyProcId_59;
                        MR_Word check_hlds__modecheck_unify__ModuleInfo_60;

                        {
                          check_hlds__mode_info__mode_info_get_context_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_72_72, &check_hlds__modecheck_unify__Context_57);
                        }
                        {
                          check_hlds__mode_info__mode_info_get_instvarset_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_72_72, &check_hlds__modecheck_unify__InstVarSet_58);
                        }
                        {
                          check_hlds__modecheck_unify__UnifyProcId_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__UnifyProcId_59, 0) = ((MR_Box) (check_hlds__modecheck_unify__TypeCtor_56));
                          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__UnifyProcId_59, 1) = ((MR_Box) (check_hlds__modecheck_unify__UnifyMode_26));
                        }
                        {
                          check_hlds__unify_proc__request_unify_6_p_0(check_hlds__modecheck_unify__UnifyProcId_59, check_hlds__modecheck_unify__InstVarSet_58, check_hlds__modecheck_unify__Detism_17, check_hlds__modecheck_unify__Context_57, check_hlds__modecheck_unify__ModuleInfo0_39, &check_hlds__modecheck_unify__ModuleInfo_60);
                        }
                        {
                          check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__modecheck_unify__ModuleInfo_60, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_72_72, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_62);
                        }
                      }
                    else
                      *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_62 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_72_72;
                  }
              }
          }
      }
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__categorize_unify_var_var_14_p_0(
  MR_Word check_hlds__modecheck_unify__FromToInstsOfX_15,
  MR_Word check_hlds__modecheck_unify__FromToInstsOfY_16,
  MR_Word check_hlds__modecheck_unify__LiveX_17,
  MR_Word check_hlds__modecheck_unify__LiveY_18,
  MR_Word check_hlds__modecheck_unify__X_19,
  MR_Word check_hlds__modecheck_unify__Y_20,
  MR_Word check_hlds__modecheck_unify__Detism_21,
  MR_Word check_hlds__modecheck_unify__UnifyContext_22,
  MR_Word check_hlds__modecheck_unify__GoalInfo_23,
  MR_Word check_hlds__modecheck_unify__VarTypes_24,
  MR_Word check_hlds__modecheck_unify__Unification0_25,
  MR_Word * check_hlds__modecheck_unify__Unify_26,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_51,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_52)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded;
    MR_Word check_hlds__modecheck_unify__ModuleInfo0_28;
    MR_Word check_hlds__modecheck_unify__Unification_29;
    MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_59_59;
    MR_Word check_hlds__modecheck_unify__AssignTarget_34;
    MR_Word check_hlds__modecheck_unify__AssignSource_35;
    MR_Word check_hlds__modecheck_unify__V_60_60;
    MR_Word check_hlds__modecheck_unify__V_72_72;

    {
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_51, &check_hlds__modecheck_unify__ModuleInfo0_28);
    }
    {
      check_hlds__modecheck_unify__succeeded = check_hlds__mode_util__from_to_insts_is_output_2_p_0(check_hlds__modecheck_unify__ModuleInfo0_28, check_hlds__modecheck_unify__FromToInstsOfX_15);
    }
    if (check_hlds__modecheck_unify__succeeded)
      {
        {
          check_hlds__modecheck_unify__Unification_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Unification_29, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_19));
          MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Unification_29, 1) = ((MR_Box) (check_hlds__modecheck_unify__Y_20));
        }
        check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_59_59 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_51;
      }
    else
      {
        {
          check_hlds__modecheck_unify__succeeded = check_hlds__mode_util__from_to_insts_is_output_2_p_0(check_hlds__modecheck_unify__ModuleInfo0_28, check_hlds__modecheck_unify__FromToInstsOfY_16);
        }
        if (check_hlds__modecheck_unify__succeeded)
          {
            {
              check_hlds__modecheck_unify__Unification_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Unification_29, 0) = ((MR_Box) (check_hlds__modecheck_unify__Y_20));
              MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Unification_29, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_19));
            }
            check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_59_59 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_51;
          }
        else
          {
            {
              check_hlds__modecheck_unify__succeeded = check_hlds__mode_util__from_to_insts_is_unused_2_p_0(check_hlds__modecheck_unify__ModuleInfo0_28, check_hlds__modecheck_unify__FromToInstsOfX_15);
            }
            if (check_hlds__modecheck_unify__succeeded)
              {
                check_hlds__modecheck_unify__succeeded = check_hlds__mode_util__from_to_insts_is_unused_2_p_0(check_hlds__modecheck_unify__ModuleInfo0_28, check_hlds__modecheck_unify__FromToInstsOfY_16);
              }
            if (check_hlds__modecheck_unify__succeeded)
              {
                switch (check_hlds__modecheck_unify__LiveX_17) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      check_hlds__modecheck_unify__Unification_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Unification_29, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_19));
                      MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Unification_29, 1) = ((MR_Box) (check_hlds__modecheck_unify__Y_20));
                    }
                    break;
                  case (MR_Integer) 0:
                    switch (check_hlds__modecheck_unify__LiveY_18) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          check_hlds__modecheck_unify__Unification_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Unification_29, 0) = ((MR_Box) (check_hlds__modecheck_unify__Y_20));
                          MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Unification_29, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_19));
                        }
                        break;
                      case (MR_Integer) 0:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.categorize_unify_var_var\'/14", (MR_String) "free-free unify!");
                            return;
                          }
                        }
                        break;
                    }
                    break;
                }
                check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_59_59 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_51;
              }
            else
              {
                {
                  MR_Word check_hlds__modecheck_unify__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfX_15, (MR_Integer) 0)));
                  MR_Word check_hlds__modecheck_unify__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfX_15, (MR_Integer) 1)));

                  check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                }
                if (!(check_hlds__modecheck_unify__succeeded))
                  {
                    MR_Word check_hlds__modecheck_unify__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfY_16, (MR_Integer) 0)));
                    MR_Word check_hlds__modecheck_unify__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfY_16, (MR_Integer) 1)));

                    check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                  }
                if (check_hlds__modecheck_unify__succeeded)
                  {
                    {
                      check_hlds__modecheck_unify__Unification_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification_29, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_19));
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification_29, 2) = ((MR_Box) (check_hlds__modecheck_unify__Y_20));
                    }
                    check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_59_59 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_51;
                  }
                else
                  {
                    MR_Word check_hlds__modecheck_unify__Type_32;
                    MR_Word check_hlds__modecheck_unify__V_33_33;

                    {
                      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_unify__VarTypes_24, check_hlds__modecheck_unify__X_19, &check_hlds__modecheck_unify__Type_32);
                    }
                    {
                      check_hlds__modecheck_unify__succeeded = check_hlds__type_util__type_is_atomic_2_p_0(check_hlds__modecheck_unify__ModuleInfo0_28, check_hlds__modecheck_unify__Type_32);
                    }
                    if (check_hlds__modecheck_unify__succeeded)
                      {
                        {
                          check_hlds__modecheck_unify__succeeded = check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(check_hlds__modecheck_unify__ModuleInfo0_28, check_hlds__modecheck_unify__Type_32, &check_hlds__modecheck_unify__V_33_33);
                        }
                        check_hlds__modecheck_unify__succeeded = !(check_hlds__modecheck_unify__succeeded);
                      }
                    if (check_hlds__modecheck_unify__succeeded)
                      {
                        {
                          check_hlds__modecheck_unify__Unification_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification_29, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_19));
                          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification_29, 2) = ((MR_Box) (check_hlds__modecheck_unify__Y_20));
                        }
                        check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_59_59 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_51;
                      }
                    else
                      {
                        MR_Word check_hlds__modecheck_unify__V_58_58;
                        MR_Word check_hlds__modecheck_unify__V_71_71;

                        {
                          check_hlds__modecheck_unify__V_71_71 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
                        }
                        {
                          check_hlds__modecheck_unify__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__modecheck_unify__Type_32, check_hlds__modecheck_unify__V_71_71);
                        }
                        if (check_hlds__modecheck_unify__succeeded)
                          {
                            check_hlds__modecheck_unify__V_58_58 = (MR_Integer) 19;
                            {
                              check_hlds__modecheck_unify__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__modecheck_unify__GoalInfo_23, check_hlds__modecheck_unify__V_58_58);
                            }
                          }
                        if (check_hlds__modecheck_unify__succeeded)
                          {
                            {
                              check_hlds__modecheck_unify__Unification_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification_29, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_19));
                              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification_29, 2) = ((MR_Box) (check_hlds__modecheck_unify__Y_20));
                            }
                            check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_59_59 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_51;
                          }
                        else
                          {
                            check_hlds__modecheck_unify__modecheck_complicated_unify_11_p_0(check_hlds__modecheck_unify__X_19, check_hlds__modecheck_unify__Y_20, check_hlds__modecheck_unify__Type_32, check_hlds__modecheck_unify__FromToInstsOfX_15, check_hlds__modecheck_unify__FromToInstsOfY_16, check_hlds__modecheck_unify__Detism_21, check_hlds__modecheck_unify__UnifyContext_22, check_hlds__modecheck_unify__Unification0_25, &check_hlds__modecheck_unify__Unification_29, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_51, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_59_59);
                          }
                      }
                  }
              }
          }
      }
    check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__Unification_29)) == (MR_mktag((MR_Integer) 2)));
    if (check_hlds__modecheck_unify__succeeded)
      {
        check_hlds__modecheck_unify__AssignTarget_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Unification_29, (MR_Integer) 0)));
        check_hlds__modecheck_unify__AssignSource_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Unification_29, (MR_Integer) 1)));
        check_hlds__modecheck_unify__V_60_60 = (MR_Integer) 1;
        {
          check_hlds__mode_info__mode_info_var_is_live_3_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_59_59, check_hlds__modecheck_unify__AssignTarget_34, &check_hlds__modecheck_unify__V_72_72);
        }
        check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__V_60_60 == check_hlds__modecheck_unify__V_72_72);
      }
    if (check_hlds__modecheck_unify__succeeded)
      {
        MR_Word check_hlds__modecheck_unify__NonLocals_80;
        MR_Word check_hlds__modecheck_unify__TypeCtorInfo_14_82;

        *check_hlds__modecheck_unify__Unify_26 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_unify_scalar_common_4[0]);
        {
          check_hlds__modecheck_unify__NonLocals_80 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modecheck_unify__GoalInfo_23);
        }
        check_hlds__modecheck_unify__TypeCtorInfo_14_82 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
        {
          check_hlds__modecheck_unify__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__modecheck_unify__TypeCtorInfo_14_82, check_hlds__modecheck_unify__NonLocals_80, check_hlds__modecheck_unify__AssignTarget_34);
        }
        if (check_hlds__modecheck_unify__succeeded)
          {
            check_hlds__modecheck_unify__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__modecheck_unify__TypeCtorInfo_14_82, check_hlds__modecheck_unify__NonLocals_80, check_hlds__modecheck_unify__AssignSource_35);
          }
        if (check_hlds__modecheck_unify__succeeded)
          *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_52 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_59_59;
        else
          {
            check_hlds__mode_info__mode_info_need_to_requantify_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_59_59, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_52);
          }
      }
    else
      {
        MR_Word check_hlds__modecheck_unify__TestVar1_36;
        MR_Word check_hlds__modecheck_unify__TestVar2_37;

        check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__Detism_21 == (MR_Integer) 0);
        if (check_hlds__modecheck_unify__succeeded)
          {
            check_hlds__modecheck_unify__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_unify__Unification_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification_29, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (check_hlds__modecheck_unify__succeeded)
              {
                check_hlds__modecheck_unify__TestVar1_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification_29, (MR_Integer) 1)));
                check_hlds__modecheck_unify__TestVar2_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__Unification_29, (MR_Integer) 2)));
              }
          }
        if (check_hlds__modecheck_unify__succeeded)
          {
            MR_Word check_hlds__modecheck_unify__NonLocals_89;
            MR_Word check_hlds__modecheck_unify__TypeCtorInfo_14_91;

            *check_hlds__modecheck_unify__Unify_26 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_unify_scalar_common_4[0]);
            {
              check_hlds__modecheck_unify__NonLocals_89 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modecheck_unify__GoalInfo_23);
            }
            check_hlds__modecheck_unify__TypeCtorInfo_14_91 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            {
              check_hlds__modecheck_unify__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__modecheck_unify__TypeCtorInfo_14_91, check_hlds__modecheck_unify__NonLocals_89, check_hlds__modecheck_unify__TestVar1_36);
            }
            if (check_hlds__modecheck_unify__succeeded)
              {
                check_hlds__modecheck_unify__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__modecheck_unify__TypeCtorInfo_14_91, check_hlds__modecheck_unify__NonLocals_89, check_hlds__modecheck_unify__TestVar2_37);
              }
            if (check_hlds__modecheck_unify__succeeded)
              *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_52 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_59_59;
            else
              {
                check_hlds__mode_info__mode_info_need_to_requantify_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_59_59, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_52);
              }
          }
        else
          {
            check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__Detism_21 == (MR_Integer) 7);
            if (check_hlds__modecheck_unify__succeeded)
              {
                MR_Word check_hlds__modecheck_unify__ModuleInfo_38;
                MR_Word check_hlds__modecheck_unify__Globals_39;
                MR_Word check_hlds__modecheck_unify__WarnCannotSucceed_40;

                *check_hlds__modecheck_unify__Unify_26 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_unify_scalar_common_1[8]);
                {
                  check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_59_59, &check_hlds__modecheck_unify__ModuleInfo_38);
                }
                {
                  hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modecheck_unify__ModuleInfo_38, &check_hlds__modecheck_unify__Globals_39);
                }
                {
                  libs__globals__lookup_bool_option_3_p_0(check_hlds__modecheck_unify__Globals_39, (MR_Integer) 23, &check_hlds__modecheck_unify__WarnCannotSucceed_40);
                }
                switch (check_hlds__modecheck_unify__WarnCannotSucceed_40) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_52 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_59_59;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word check_hlds__modecheck_unify__InitInstOfX_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfX_15, (MR_Integer) 0)));
                      MR_Word check_hlds__modecheck_unify__InitInstOfY_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfY_16, (MR_Integer) 0)));
                      MR_Word check_hlds__modecheck_unify__PredId_45;
                      MR_Word check_hlds__modecheck_unify__PredInfo_46;
                      MR_Word check_hlds__modecheck_unify__Origin_47;
                      MR_Word check_hlds__modecheck_unify__ReportWarning_48;
                      MR_Word check_hlds__modecheck_unify__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfX_15, (MR_Integer) 1)));
                      MR_Word check_hlds__modecheck_unify__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfY_16, (MR_Integer) 1)));

                      {
                        check_hlds__mode_info__mode_info_get_pred_id_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_59_59, &check_hlds__modecheck_unify__PredId_45);
                      }
                      {
                        hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__modecheck_unify__ModuleInfo_38, check_hlds__modecheck_unify__PredId_45, &check_hlds__modecheck_unify__PredInfo_46);
                      }
                      {
                        hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__modecheck_unify__PredInfo_46, &check_hlds__modecheck_unify__Origin_47);
                      }
                      {
                        check_hlds__modecheck_unify__ReportWarning_48 = check_hlds__mode_errors__should_report_mode_warning_for_pred_origin_1_f_0(check_hlds__modecheck_unify__Origin_47);
                      }
                      switch (check_hlds__modecheck_unify__ReportWarning_48) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_52 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_59_59;
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word check_hlds__modecheck_unify__Warning_49;

                            {
                              check_hlds__modecheck_unify__Warning_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Warning_49, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_19));
                              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Warning_49, 1) = ((MR_Box) (check_hlds__modecheck_unify__Y_20));
                              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Warning_49, 2) = ((MR_Box) (check_hlds__modecheck_unify__InitInstOfX_41));
                              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Warning_49, 3) = ((MR_Box) (check_hlds__modecheck_unify__InitInstOfY_43));
                            }
                            {
                              check_hlds__mode_info__mode_info_warning_3_p_0(check_hlds__modecheck_unify__Warning_49, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_59_59, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_52);
                            }
                          }
                          break;
                      }
                    }
                    break;
                }
              }
            else
              {
                MR_Word check_hlds__modecheck_unify__UnifyModes_50;
                MR_Word check_hlds__modecheck_unify__V_70_70;

                {
                  check_hlds__modecheck_unify__UnifyModes_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__UnifyModes_50, 0) = ((MR_Box) (check_hlds__modecheck_unify__FromToInstsOfX_15));
                  MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__UnifyModes_50, 1) = ((MR_Box) (check_hlds__modecheck_unify__FromToInstsOfY_16));
                }
                {
                  check_hlds__modecheck_unify__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_70_70, 0) = ((MR_Box) (check_hlds__modecheck_unify__Y_20));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__modecheck_unify__Unify_26 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_19));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__V_70_70));
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__modecheck_unify__UnifyModes_50));
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__modecheck_unify__Unification_29));
                  MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__modecheck_unify__UnifyContext_22));
                }
                *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_52 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_59_59;
              }
          }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__split_complicated_subunifies_2_6_p_0(
  MR_Word check_hlds__modecheck_unify__HeadVar__1_1,
  MR_Word check_hlds__modecheck_unify__HeadVar__2_2,
  MR_Word * check_hlds__modecheck_unify__HeadVar__3_3,
  MR_Word * check_hlds__modecheck_unify__HeadVar__4_4,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_5,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_6)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded;

    if ((check_hlds__modecheck_unify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (check_hlds__modecheck_unify__succeeded)
          {
            *check_hlds__modecheck_unify__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *check_hlds__modecheck_unify__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_6 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_5;
            check_hlds__modecheck_unify__succeeded = MR_TRUE;
          }
      }
    else
      {
        MR_Word check_hlds__modecheck_unify__Var0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__modecheck_unify__Vars0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__modecheck_unify__ArgMode0_12;
        MR_Word check_hlds__modecheck_unify__ArgModes0_13;
        MR_Word check_hlds__modecheck_unify__ModuleInfo_17;
        MR_Word check_hlds__modecheck_unify__FromToInstsX_18;
        MR_Word check_hlds__modecheck_unify__FromToInstsY_19;
        MR_Word check_hlds__modecheck_unify__VarTypes0_20;
        MR_Word check_hlds__modecheck_unify__VarType_21;
        MR_Word check_hlds__modecheck_unify__V_28_28;
        MR_Word check_hlds__modecheck_unify__V_29_29;
        MR_Word check_hlds__modecheck_unify__V_34_34;
        MR_Word check_hlds__modecheck_unify__V_35_35;

        check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__modecheck_unify__succeeded)
          {
            check_hlds__modecheck_unify__ArgMode0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__2_2, (MR_Integer) 0)));
            check_hlds__modecheck_unify__ArgModes0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__HeadVar__2_2, (MR_Integer) 1)));
            {
              check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_5, &check_hlds__modecheck_unify__ModuleInfo_17);
            }
            check_hlds__modecheck_unify__FromToInstsX_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ArgMode0_12, (MR_Integer) 0)));
            check_hlds__modecheck_unify__FromToInstsY_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ArgMode0_12, (MR_Integer) 1)));
            {
              check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_5, &check_hlds__modecheck_unify__VarTypes0_20);
            }
            {
              hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_unify__VarTypes0_20, check_hlds__modecheck_unify__Var0_10, &check_hlds__modecheck_unify__VarType_21);
            }
            check_hlds__modecheck_unify__V_28_28 = (MR_Integer) 0;
            {
              check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(check_hlds__modecheck_unify__ModuleInfo_17, check_hlds__modecheck_unify__FromToInstsX_18, check_hlds__modecheck_unify__VarType_21, &check_hlds__modecheck_unify__V_34_34);
            }
            check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__V_28_28 == check_hlds__modecheck_unify__V_34_34);
            if (check_hlds__modecheck_unify__succeeded)
              {
                check_hlds__modecheck_unify__V_29_29 = (MR_Integer) 0;
                {
                  check_hlds__mode_util__from_to_insts_to_top_functor_mode_4_p_0(check_hlds__modecheck_unify__ModuleInfo_17, check_hlds__modecheck_unify__FromToInstsY_19, check_hlds__modecheck_unify__VarType_21, &check_hlds__modecheck_unify__V_35_35);
                }
                check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__V_29_29 == check_hlds__modecheck_unify__V_35_35);
              }
            if (check_hlds__modecheck_unify__succeeded)
              {
                MR_Word check_hlds__modecheck_unify__Var_22;
                MR_Word check_hlds__modecheck_unify__ExtraGoals0_23;
                MR_Word check_hlds__modecheck_unify__Vars1_24;
                MR_Word check_hlds__modecheck_unify__ExtraGoals1_25;
                MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_30_30;
                MR_Word check_hlds__modecheck_unify__VarSet0_42;
                MR_Word check_hlds__modecheck_unify__VarTypes0_43;
                MR_Word check_hlds__modecheck_unify__VarSet_44;
                MR_Word check_hlds__modecheck_unify__VarType_45;
                MR_Word check_hlds__modecheck_unify__VarTypes_46;
                MR_Word check_hlds__modecheck_unify__ExtraGoal_47;
                MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_18_48;
                MR_Word check_hlds__modecheck_unify__V_51_51;

                {
                  check_hlds__mode_info__mode_info_get_varset_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_5, &check_hlds__modecheck_unify__VarSet0_42);
                }
                {
                  check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_5, &check_hlds__modecheck_unify__VarTypes0_43);
                }
                {
                  mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__modecheck_unify__Var_22, check_hlds__modecheck_unify__VarSet0_42, &check_hlds__modecheck_unify__VarSet_44);
                }
                {
                  hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_unify__VarTypes0_43, check_hlds__modecheck_unify__Var0_10, &check_hlds__modecheck_unify__VarType_45);
                }
                {
                  hlds__vartypes__add_var_type_4_p_0(check_hlds__modecheck_unify__Var_22, check_hlds__modecheck_unify__VarType_45, check_hlds__modecheck_unify__VarTypes0_43, &check_hlds__modecheck_unify__VarTypes_46);
                }
                {
                  check_hlds__mode_info__mode_info_set_varset_3_p_0(check_hlds__modecheck_unify__VarSet_44, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_5, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_18_48);
                }
                {
                  check_hlds__mode_info__mode_info_set_var_types_3_p_0(check_hlds__modecheck_unify__VarTypes_46, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_18_48, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_30_30);
                }
                {
                  check_hlds__modecheck_unify__create_var_var_unification_5_p_0(check_hlds__modecheck_unify__Var0_10, check_hlds__modecheck_unify__Var_22, check_hlds__modecheck_unify__VarType_45, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_30_30, &check_hlds__modecheck_unify__ExtraGoal_47);
                }
                {
                  check_hlds__modecheck_unify__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_51_51, 0) = ((MR_Box) (check_hlds__modecheck_unify__ExtraGoal_47));
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  check_hlds__modecheck_unify__ExtraGoals0_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__ExtraGoals0_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__ExtraGoals0_23, 1) = ((MR_Box) (check_hlds__modecheck_unify__V_51_51));
                }
                {
                  check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__split_complicated_subunifies_2_6_p_0(check_hlds__modecheck_unify__Vars0_11, check_hlds__modecheck_unify__ArgModes0_13, &check_hlds__modecheck_unify__Vars1_24, &check_hlds__modecheck_unify__ExtraGoals1_25, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_30_30, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_6);
                }
                if (check_hlds__modecheck_unify__succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *check_hlds__modecheck_unify__HeadVar__3_3 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__Var_22));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__Vars1_24));
                    }
                    {
                      check_hlds__modecheck_util__append_extra_goals_3_p_0(check_hlds__modecheck_unify__ExtraGoals0_23, check_hlds__modecheck_unify__ExtraGoals1_25, check_hlds__modecheck_unify__HeadVar__4_4);
                    }
                    check_hlds__modecheck_unify__succeeded = MR_TRUE;
                  }
              }
            else
              {
                MR_Word check_hlds__modecheck_unify__Vars1_33;

                {
                  check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__split_complicated_subunifies_2_6_p_0(check_hlds__modecheck_unify__Vars0_11, check_hlds__modecheck_unify__ArgModes0_13, &check_hlds__modecheck_unify__Vars1_33, check_hlds__modecheck_unify__HeadVar__4_4, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_5, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_6);
                }
                if (check_hlds__modecheck_unify__succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *check_hlds__modecheck_unify__HeadVar__3_3 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__Var0_10));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__Vars1_33));
                    }
                    check_hlds__modecheck_unify__succeeded = MR_TRUE;
                  }
              }
          }
      }
    return check_hlds__modecheck_unify__succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__split_complicated_subunifies_7_p_0(
  MR_Word check_hlds__modecheck_unify__Unification0_8,
  MR_Word * check_hlds__modecheck_unify__Unification_9,
  MR_Word check_hlds__modecheck_unify__ArgVars0_10,
  MR_Word * check_hlds__modecheck_unify__ArgVars_11,
  MR_Word * check_hlds__modecheck_unify__ExtraGoals_12,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_21,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_22)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__Unification0_8)) == (MR_mktag((MR_Integer) 1)));
    MR_Word check_hlds__modecheck_unify__X_14;
    MR_Word check_hlds__modecheck_unify__ConsId_15;
    MR_Word check_hlds__modecheck_unify__ArgModes0_16;
    MR_Word check_hlds__modecheck_unify__Det_17;
    MR_Word check_hlds__modecheck_unify__CanCGC_18;
    MR_Word check_hlds__modecheck_unify__TypeInfo_29_29;
    MR_Word check_hlds__modecheck_unify__V_28_28;

    if (check_hlds__modecheck_unify__succeeded)
      {
        check_hlds__modecheck_unify__X_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_8, (MR_Integer) 0)));
        check_hlds__modecheck_unify__ConsId_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_8, (MR_Integer) 1)));
        check_hlds__modecheck_unify__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_8, (MR_Integer) 2)));
        check_hlds__modecheck_unify__ArgModes0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_8, (MR_Integer) 3)));
        check_hlds__modecheck_unify__Det_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_8, (MR_Integer) 4)));
        check_hlds__modecheck_unify__CanCGC_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Unification0_8, (MR_Integer) 5)));
        check_hlds__modecheck_unify__TypeInfo_29_29 = (MR_Word) &check_hlds__modecheck_unify_scalar_common_1[1];
        {
          check_hlds__modecheck_unify__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_unify__TypeInfo_29_29, ((MR_Box) (check_hlds__modecheck_unify__ArgVars0_10)), ((MR_Box) (check_hlds__modecheck_unify__V_28_28)));
        }
      }
    if (check_hlds__modecheck_unify__succeeded)
      {
        MR_Word check_hlds__modecheck_unify__ArgVars1_19;
        MR_Word check_hlds__modecheck_unify__ExtraGoals1_20;
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_23_23;

        {
          check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__split_complicated_subunifies_2_6_p_0(check_hlds__modecheck_unify__ArgVars0_10, check_hlds__modecheck_unify__ArgModes0_16, &check_hlds__modecheck_unify__ArgVars1_19, &check_hlds__modecheck_unify__ExtraGoals1_20, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_21, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_23_23);
        }
        if (check_hlds__modecheck_unify__succeeded)
          {
            *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_22 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_23_23;
            *check_hlds__modecheck_unify__ExtraGoals_12 = check_hlds__modecheck_unify__ExtraGoals1_20;
            *check_hlds__modecheck_unify__ArgVars_11 = check_hlds__modecheck_unify__ArgVars1_19;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__modecheck_unify__Unification_9 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_14));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__ConsId_15));
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (*check_hlds__modecheck_unify__ArgVars_11));
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__modecheck_unify__ArgModes0_16));
              MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__modecheck_unify__Det_17));
              MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (check_hlds__modecheck_unify__CanCGC_18));
            }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.split_complicated_subunifies\'/7", (MR_String) "split_complicated_subunifies_2 failed");
              return;
            }
          }
      }
    else
      {
        *check_hlds__modecheck_unify__Unification_9 = check_hlds__modecheck_unify__Unification0_8;
        *check_hlds__modecheck_unify__ArgVars_11 = check_hlds__modecheck_unify__ArgVars0_10;
        *check_hlds__modecheck_unify__ExtraGoals_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_22 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_21;
      }
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__maybe_generate_cannot_succeed_warning_5_p_0(
  MR_Word check_hlds__modecheck_unify__X_6,
  MR_Word check_hlds__modecheck_unify__InstOfX_7,
  MR_Word check_hlds__modecheck_unify__ConsId_8,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded;
    MR_Word check_hlds__modecheck_unify__ModuleInfo_10;
    MR_Word check_hlds__modecheck_unify__Globals_11;
    MR_Word check_hlds__modecheck_unify__WarnCannotSucceed_12;

    {
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19, &check_hlds__modecheck_unify__ModuleInfo_10);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__modecheck_unify__ModuleInfo_10, &check_hlds__modecheck_unify__Globals_11);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(check_hlds__modecheck_unify__Globals_11, (MR_Integer) 23, &check_hlds__modecheck_unify__WarnCannotSucceed_12);
    }
    switch (check_hlds__modecheck_unify__WarnCannotSucceed_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19;
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__modecheck_unify__InDuplForSwitch_13;

          {
            check_hlds__mode_info__mode_info_get_in_dupl_for_switch_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19, &check_hlds__modecheck_unify__InDuplForSwitch_13);
          }
          switch (check_hlds__modecheck_unify__InDuplForSwitch_13) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19;
              break;
            case (MR_Integer) 1:
              {
                MR_Word check_hlds__modecheck_unify__PredId_14;
                MR_Word check_hlds__modecheck_unify__PredInfo_15;
                MR_Word check_hlds__modecheck_unify__Origin_16;
                MR_Word check_hlds__modecheck_unify__ReportWarning_17;

                {
                  check_hlds__mode_info__mode_info_get_pred_id_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19, &check_hlds__modecheck_unify__PredId_14);
                }
                {
                  hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__modecheck_unify__ModuleInfo_10, check_hlds__modecheck_unify__PredId_14, &check_hlds__modecheck_unify__PredInfo_15);
                }
                {
                  hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__modecheck_unify__PredInfo_15, &check_hlds__modecheck_unify__Origin_16);
                }
                {
                  check_hlds__modecheck_unify__ReportWarning_17 = check_hlds__mode_errors__should_report_mode_warning_for_pred_origin_1_f_0(check_hlds__modecheck_unify__Origin_16);
                }
                switch (check_hlds__modecheck_unify__ReportWarning_17) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word check_hlds__modecheck_unify__Warning_18;

                      {
                        check_hlds__modecheck_unify__Warning_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Warning_18, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_6));
                        MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Warning_18, 1) = ((MR_Box) (check_hlds__modecheck_unify__InstOfX_7));
                        MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Warning_18, 2) = ((MR_Box) (check_hlds__modecheck_unify__ConsId_8));
                      }
                      {
                        check_hlds__mode_info__mode_info_warning_3_p_0(check_hlds__modecheck_unify__Warning_18, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20);
                      }
                    }
                    break;
                }
              }
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__handle_var_functor_mode_error_9_p_0(
  MR_Word check_hlds__modecheck_unify__X_10,
  MR_Word check_hlds__modecheck_unify__InstConsId_11,
  MR_Word check_hlds__modecheck_unify__ArgVars0_12,
  MR_Word check_hlds__modecheck_unify__InstOfX_13,
  MR_Word check_hlds__modecheck_unify__InstArgs_14,
  MR_Word check_hlds__modecheck_unify__WaitingVarsList_15,
  MR_Word * check_hlds__modecheck_unify__GoalExpr_16,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_22,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_23)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded;
    MR_Word check_hlds__modecheck_unify__WaitingVars_18;
    MR_Word check_hlds__modecheck_unify__ModeError_19;
    MR_Word check_hlds__modecheck_unify__Inst_20;
    MR_Word check_hlds__modecheck_unify__NoArgInsts_21;
    MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_24_24;
    MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_26_26;
    MR_Integer check_hlds__modecheck_unify__V_27_27;
    MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_12_40;

    {
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_unify__WaitingVarsList_15, &check_hlds__modecheck_unify__WaitingVars_18);
    }
    {
      check_hlds__modecheck_unify__ModeError_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_19, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_10));
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_19, 2) = ((MR_Box) (check_hlds__modecheck_unify__InstConsId_11));
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_19, 3) = ((MR_Box) (check_hlds__modecheck_unify__ArgVars0_12));
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_19, 4) = ((MR_Box) (check_hlds__modecheck_unify__InstOfX_13));
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_19, 5) = ((MR_Box) (check_hlds__modecheck_unify__InstArgs_14));
    }
    {
      check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_18, check_hlds__modecheck_unify__ModeError_19, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_22, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_24_24);
    }
    check_hlds__modecheck_unify__Inst_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
    {
      check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_unify__X_10, check_hlds__modecheck_unify__Inst_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_24_24, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_26_26);
    }
    {
      check_hlds__modecheck_unify__V_27_27 = mercury__list__length_1_f_0((MR_Word) &check_hlds__modecheck_unify_scalar_common_1[0], check_hlds__modecheck_unify__ArgVars0_12);
    }
    {
      check_hlds__modecheck_unify__NoArgInsts_21 = mercury__list__duplicate_2_f_0((MR_Word) &check_hlds__modecheck_unify_scalar_common_1[2], check_hlds__modecheck_unify__V_27_27, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
    }
    {
      check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__try_bind_args_5_p_0(check_hlds__modecheck_unify__Inst_20, check_hlds__modecheck_unify__ArgVars0_12, check_hlds__modecheck_unify__NoArgInsts_21, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_26_26, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_12_40);
    }
    if (check_hlds__modecheck_unify__succeeded)
      *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_23 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_12_40;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.bind_args\'/5", (MR_String) "try_bind_args failed");
          return;
        }
      }
    *check_hlds__modecheck_unify__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_unify_scalar_common_1[8]);
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__ensure_exist_constr_is_construction_8_p_0(
  MR_Word check_hlds__modecheck_unify__IsExistConstruction_9,
  MR_Word check_hlds__modecheck_unify__X0_10,
  MR_Word * check_hlds__modecheck_unify__X_11,
  MR_Word * check_hlds__modecheck_unify__InstOfX_12,
  MR_Word * check_hlds__modecheck_unify__LiveX_13,
  MR_Word * check_hlds__modecheck_unify__ExtraGoals_14,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded;
    MR_Word check_hlds__modecheck_unify__InstMap0_16;
    MR_Word check_hlds__modecheck_unify__InstOfX0_17;
    MR_Word check_hlds__modecheck_unify__ModuleInfo0_18;

    {
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19, &check_hlds__modecheck_unify__InstMap0_16);
    }
    {
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_unify__InstMap0_16, check_hlds__modecheck_unify__X0_10, &check_hlds__modecheck_unify__InstOfX0_17);
    }
    check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__IsExistConstruction_9 == (MR_Integer) 1);
    if (check_hlds__modecheck_unify__succeeded)
      {
        {
          check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19, &check_hlds__modecheck_unify__ModuleInfo0_18);
        }
        {
          check_hlds__modecheck_unify__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(check_hlds__modecheck_unify__ModuleInfo0_18, check_hlds__modecheck_unify__InstOfX0_17);
        }
        check_hlds__modecheck_unify__succeeded = !(check_hlds__modecheck_unify__succeeded);
      }
    if (check_hlds__modecheck_unify__succeeded)
      {
        MR_Word check_hlds__modecheck_unify__VarSet0_28;
        MR_Word check_hlds__modecheck_unify__VarTypes0_29;
        MR_Word check_hlds__modecheck_unify__VarSet_30;
        MR_Word check_hlds__modecheck_unify__VarType_31;
        MR_Word check_hlds__modecheck_unify__VarTypes_32;
        MR_Word check_hlds__modecheck_unify__ExtraGoal_33;
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_18_34;
        MR_Word check_hlds__modecheck_unify__V_37_37;

        {
          check_hlds__mode_info__mode_info_get_varset_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19, &check_hlds__modecheck_unify__VarSet0_28);
        }
        {
          check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19, &check_hlds__modecheck_unify__VarTypes0_29);
        }
        {
          mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_unify__X_11, check_hlds__modecheck_unify__VarSet0_28, &check_hlds__modecheck_unify__VarSet_30);
        }
        {
          hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_unify__VarTypes0_29, check_hlds__modecheck_unify__X0_10, &check_hlds__modecheck_unify__VarType_31);
        }
        {
          hlds__vartypes__add_var_type_4_p_0(*check_hlds__modecheck_unify__X_11, check_hlds__modecheck_unify__VarType_31, check_hlds__modecheck_unify__VarTypes0_29, &check_hlds__modecheck_unify__VarTypes_32);
        }
        {
          check_hlds__mode_info__mode_info_set_varset_3_p_0(check_hlds__modecheck_unify__VarSet_30, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_18_34);
        }
        {
          check_hlds__mode_info__mode_info_set_var_types_3_p_0(check_hlds__modecheck_unify__VarTypes_32, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_18_34, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20);
        }
        {
          check_hlds__modecheck_unify__create_var_var_unification_5_p_0(check_hlds__modecheck_unify__X0_10, *check_hlds__modecheck_unify__X_11, check_hlds__modecheck_unify__VarType_31, *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20, &check_hlds__modecheck_unify__ExtraGoal_33);
        }
        {
          check_hlds__modecheck_unify__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_37_37, 0) = ((MR_Box) (check_hlds__modecheck_unify__ExtraGoal_33));
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__modecheck_unify__ExtraGoals_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__V_37_37));
        }
        *check_hlds__modecheck_unify__InstOfX_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__modecheck_unify__LiveX_13 = (MR_Integer) 0;
      }
    else
      {
        *check_hlds__modecheck_unify__X_11 = check_hlds__modecheck_unify__X0_10;
        *check_hlds__modecheck_unify__InstOfX_12 = check_hlds__modecheck_unify__InstOfX0_17;
        {
          check_hlds__mode_info__mode_info_var_is_live_3_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19, *check_hlds__modecheck_unify__X_11, check_hlds__modecheck_unify__LiveX_13);
        }
        *check_hlds__modecheck_unify__ExtraGoals_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_20 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_19;
      }
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_1(
  void * check_hlds__modecheck_unify__env_ptr_arg)
{
  {
    struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s * check_hlds__modecheck_unify__env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s *) check_hlds__modecheck_unify__env_ptr_arg;

    MR_builtin_longjmp((check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_3(
  void * check_hlds__modecheck_unify__env_ptr_arg)
{
  {
    struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s * check_hlds__modecheck_unify__env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s *) check_hlds__modecheck_unify__env_ptr_arg;

    (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstArg_37 = ((MR_Word) (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__conv0_InstArg_37);
    {
      check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_2(check_hlds__modecheck_unify__env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_5(
  void * check_hlds__modecheck_unify__env_ptr_arg)
{
  {
    struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s * check_hlds__modecheck_unify__env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s *) check_hlds__modecheck_unify__env_ptr_arg;

    (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVar_38 = ((MR_Word) (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__conv1_ArgVar_38);
    {
      check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_4(check_hlds__modecheck_unify__env_ptr);
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_4(
  void * check_hlds__modecheck_unify__env_ptr_arg)
{
  {
    struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s * check_hlds__modecheck_unify__env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s *) check_hlds__modecheck_unify__env_ptr_arg;

    {
      hlds__vartypes__lookup_var_type_3_p_0((check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__VarTypes_30, (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVar_38, &(check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgType_39);
    }
    {
      (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = check_hlds__type_util__type_is_or_may_contain_solver_type_2_p_0((check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ModuleInfo0_29, (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgType_39);
    }
    if ((check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
      {
        check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_1(check_hlds__modecheck_unify__env_ptr);
      }
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_2(
  void * check_hlds__modecheck_unify__env_ptr_arg)
{
  {
    struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s * check_hlds__modecheck_unify__env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s *) check_hlds__modecheck_unify__env_ptr_arg;

    {
      (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = check_hlds__inst_test__inst_is_free_2_p_0((check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ModuleInfo0_29, (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstArg_37);
    }
    if ((check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
      {
        (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__TypeInfo_106_106 = (MR_Word) &check_hlds__modecheck_unify_scalar_common_1[0];
        {
          mercury__list__member_2_p_1((check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__TypeInfo_106_106, &(check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__conv1_ArgVar_38, (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_5, check_hlds__modecheck_unify__env_ptr);
        }
      }
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_6(
  void * check_hlds__modecheck_unify__env_ptr_arg)
{
  {
    struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s * check_hlds__modecheck_unify__env_ptr = (struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s *) check_hlds__modecheck_unify__env_ptr_arg;

    if (MR_builtin_setjmp((check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word check_hlds__modecheck_unify__TypeCtorInfo_105_105;

          {
            (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = check_hlds__inst_test__inst_is_free_2_p_0((check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ModuleInfo0_29, (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_24);
          }
          if ((check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
            {
              check_hlds__modecheck_unify__TypeCtorInfo_105_105 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
              {
                mercury__list__member_2_p_1(check_hlds__modecheck_unify__TypeCtorInfo_105_105, &(check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__conv0_InstArg_37, (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstsOfArgVars_31, check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_3, check_hlds__modecheck_unify__env_ptr);
              }
            }
        }
        (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (check_hlds__modecheck_unify__env_ptr)->check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0(
  MR_Word check_hlds__modecheck_unify__X0_12,
  MR_Word check_hlds__modecheck_unify__TypeOfX_13,
  MR_Word check_hlds__modecheck_unify__ConsId0_14,
  MR_Word check_hlds__modecheck_unify__IsExistConstruction_15,
  MR_Word check_hlds__modecheck_unify__ArgVars0_16,
  MR_Word check_hlds__modecheck_unify__Unification0_17,
  MR_Word check_hlds__modecheck_unify__UnifyContext_18,
  MR_Word check_hlds__modecheck_unify__GoalInfo0_19,
  MR_Word * check_hlds__modecheck_unify__GoalExpr_20,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_67,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_68)
{
  {
    struct check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0_s check_hlds__modecheck_unify__env;

    (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16 = check_hlds__modecheck_unify__ArgVars0_16;
    {
      MR_Word check_hlds__modecheck_unify__InstMap0_22;
      MR_Word check_hlds__modecheck_unify__X_23;
      MR_Word check_hlds__modecheck_unify__LiveX_25;
      MR_Word check_hlds__modecheck_unify__ExtraGoalsExistConstruct_26;
      MR_Word check_hlds__modecheck_unify__InstMap1_27;
      MR_Word check_hlds__modecheck_unify__HowToCheckGoal_28;
      MR_Word check_hlds__modecheck_unify__LiveArgs_32;
      MR_Word check_hlds__modecheck_unify__ConsId_33;
      MR_Word check_hlds__modecheck_unify__InstConsId_34;
      MR_Word check_hlds__modecheck_unify__InstOfY_35;
      MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_69_69;
      MR_Word check_hlds__modecheck_unify__V_72_72;
      MR_Word check_hlds__modecheck_unify__V_73_73;

      {
        check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_67, &check_hlds__modecheck_unify__InstMap0_22);
      }
      {
        check_hlds__modecheck_unify__ensure_exist_constr_is_construction_8_p_0(check_hlds__modecheck_unify__IsExistConstruction_15, check_hlds__modecheck_unify__X0_12, &check_hlds__modecheck_unify__X_23, &(check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_24, &check_hlds__modecheck_unify__LiveX_25, &check_hlds__modecheck_unify__ExtraGoalsExistConstruct_26, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_67, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_69_69);
      }
      {
        check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_69_69, &check_hlds__modecheck_unify__InstMap1_27);
      }
      {
        check_hlds__mode_info__mode_info_get_how_to_check_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_69_69, &check_hlds__modecheck_unify__HowToCheckGoal_28);
      }
      {
        check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_69_69, &(check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ModuleInfo0_29);
      }
      {
        check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_69_69, &(check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__VarTypes_30);
      }
      {
        hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__modecheck_unify__InstMap1_27, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, &(check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstsOfArgVars_31);
      }
      {
        check_hlds__mode_info__mode_info_var_list_is_live_3_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_69_69, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, &check_hlds__modecheck_unify__LiveArgs_32);
      }
      {
        parse_tree__prog_type__qualify_cons_id_4_p_0((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, check_hlds__modecheck_unify__ConsId0_14, &check_hlds__modecheck_unify__ConsId_33, &check_hlds__modecheck_unify__InstConsId_34);
      }
      {
        check_hlds__modecheck_unify__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_73_73, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstConsId_34));
        MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_73_73, 1) = ((MR_Box) ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstsOfArgVars_31));
      }
      {
        check_hlds__modecheck_unify__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_72_72, 0) = ((MR_Box) (check_hlds__modecheck_unify__V_73_73));
        MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        check_hlds__modecheck_unify__InstOfY_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__InstOfY_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__InstOfY_35, 1) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__InstOfY_35, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__InstOfY_35, 3) = ((MR_Box) (check_hlds__modecheck_unify__V_72_72));
      }
      {
        (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__modecheck_unify_scalar_common_1[0], ((MR_Box) (check_hlds__modecheck_unify__X_23)), (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16);
      }
      if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
        {
          {
            (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ModuleInfo0_29, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_24);
          }
          if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
            {
              MR_Word check_hlds__modecheck_unify__Warning_36;
              MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_75_75;

              {
                check_hlds__modecheck_unify__Warning_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Warning_36, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_23));
                MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Warning_36, 1) = ((MR_Box) (check_hlds__modecheck_unify__ConsId_33));
              }
              {
                check_hlds__mode_info__mode_info_warning_3_p_0(check_hlds__modecheck_unify__Warning_36, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_69_69, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_75_75);
              }
              {
                check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_unify__X_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_75_75, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_68);
              }
              *check_hlds__modecheck_unify__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_unify_scalar_common_1[8]);
            }
          else
            {
              MR_Word check_hlds__modecheck_unify__V_80_80;

              {
                check_hlds__modecheck_unify__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_80_80, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_23));
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__modecheck_unify__handle_var_functor_mode_error_9_p_0(check_hlds__modecheck_unify__X_23, check_hlds__modecheck_unify__InstConsId_34, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_24, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstsOfArgVars_31, check_hlds__modecheck_unify__V_80_80, check_hlds__modecheck_unify__GoalExpr_20, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_69_69, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_68);
              }
            }
        }
      else
        {
          MR_Word check_hlds__modecheck_unify__UnifiedInst_40;
          MR_Word check_hlds__modecheck_unify__Detism_41;
          MR_Word check_hlds__modecheck_unify__ModuleInfo1_42;
          MR_Word check_hlds__modecheck_unify__V_83_83;

          {
            check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_6(&check_hlds__modecheck_unify__env);
          }
          (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = !((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded);
          if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
            {
              check_hlds__modecheck_unify__V_83_83 = (MR_Integer) 0;
              {
                (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = check_hlds__inst_util__abstractly_unify_inst_functor_11_p_0(check_hlds__modecheck_unify__LiveX_25, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_24, check_hlds__modecheck_unify__InstConsId_34, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstsOfArgVars_31, check_hlds__modecheck_unify__LiveArgs_32, check_hlds__modecheck_unify__V_83_83, check_hlds__modecheck_unify__TypeOfX_13, &check_hlds__modecheck_unify__UnifiedInst_40, &check_hlds__modecheck_unify__Detism_41, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ModuleInfo0_29, &check_hlds__modecheck_unify__ModuleInfo1_42);
              }
            }
          if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
            {
              MR_Word check_hlds__modecheck_unify__FromToInstsOfX_43;
              MR_Word check_hlds__modecheck_unify__FromToInstsOfY_44;
              MR_Word check_hlds__modecheck_unify__UnifyMode_45;
              MR_Word check_hlds__modecheck_unify__ArgFromToInsts_46;
              MR_Word check_hlds__modecheck_unify__InstOfX1_47;
              MR_Integer check_hlds__modecheck_unify__Arity_48;
              MR_Word check_hlds__modecheck_unify__InstOfXArgs_49;
              MR_Word check_hlds__modecheck_unify__ModeOfXArgs_50;
              MR_Word check_hlds__modecheck_unify__Unification1_51;
              MR_Word check_hlds__modecheck_unify__Unification_52;
              MR_Word check_hlds__modecheck_unify__ArgVars_53;
              MR_Word check_hlds__modecheck_unify__ExtraGoalsSplitSubUnifies_54;
              MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_84_84;
              MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_85_85;
              MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_86_86;
              MR_Word check_hlds__modecheck_unify__V_87_87;
              MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_88_88;
              MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_89_89;
              MR_Word check_hlds__modecheck_unify__V_55_55;
              MR_Word check_hlds__modecheck_unify__V_56_56;
              MR_Word check_hlds__modecheck_unify__V_57_57;
              MR_Word check_hlds__modecheck_unify__V_58_58;
              MR_Word check_hlds__modecheck_unify__V_59_59;
              MR_Word check_hlds__modecheck_unify__V_60_60;
              MR_Word check_hlds__modecheck_unify__V_61_61;

              {
                check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__modecheck_unify__ModuleInfo1_42, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_69_69, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_84_84);
              }
              {
                check_hlds__modecheck_unify__FromToInstsOfX_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfX_43, 0) = ((MR_Box) ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_24));
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfX_43, 1) = ((MR_Box) (check_hlds__modecheck_unify__UnifiedInst_40));
              }
              {
                check_hlds__modecheck_unify__FromToInstsOfY_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfY_44, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_35));
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfY_44, 1) = ((MR_Box) (check_hlds__modecheck_unify__UnifiedInst_40));
              }
              {
                check_hlds__modecheck_unify__UnifyMode_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__UnifyMode_45, 0) = ((MR_Box) (check_hlds__modecheck_unify__FromToInstsOfX_43));
                MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__UnifyMode_45, 1) = ((MR_Box) (check_hlds__modecheck_unify__FromToInstsOfY_44));
              }
              {
                check_hlds__modecheck_unify__get_mode_of_args_3_p_0((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstsOfArgVars_31, check_hlds__modecheck_unify__UnifiedInst_40, &check_hlds__modecheck_unify__ArgFromToInsts_46);
              }
              {
                check_hlds__inst_util__inst_expand_and_remove_constrained_inst_vars_3_p_0(check_hlds__modecheck_unify__ModuleInfo1_42, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_24, &check_hlds__modecheck_unify__InstOfX1_47);
              }
              {
                mercury__list__length_2_p_0((MR_Word) &check_hlds__modecheck_unify_scalar_common_1[0], (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, &check_hlds__modecheck_unify__Arity_48);
              }
              {
                parse_tree__prog_mode__get_arg_insts_det_4_p_0(check_hlds__modecheck_unify__InstOfX1_47, check_hlds__modecheck_unify__InstConsId_34, check_hlds__modecheck_unify__Arity_48, &check_hlds__modecheck_unify__InstOfXArgs_49);
              }
              {
                check_hlds__modecheck_unify__get_mode_of_args_3_p_0(check_hlds__modecheck_unify__InstOfXArgs_49, check_hlds__modecheck_unify__UnifiedInst_40, &check_hlds__modecheck_unify__ModeOfXArgs_50);
              }
              {
                check_hlds__modecheck_unify__categorize_unify_var_functor_12_p_0(check_hlds__modecheck_unify__FromToInstsOfX_43, check_hlds__modecheck_unify__ModeOfXArgs_50, check_hlds__modecheck_unify__ArgFromToInsts_46, check_hlds__modecheck_unify__X_23, check_hlds__modecheck_unify__ConsId_33, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__VarTypes_30, check_hlds__modecheck_unify__UnifyContext_18, check_hlds__modecheck_unify__Unification0_17, &check_hlds__modecheck_unify__Unification1_51, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_84_84, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_85_85);
              }
              {
                check_hlds__modecheck_unify__split_complicated_subunifies_7_p_0(check_hlds__modecheck_unify__Unification1_51, &check_hlds__modecheck_unify__Unification_52, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, &check_hlds__modecheck_unify__ArgVars_53, &check_hlds__modecheck_unify__ExtraGoalsSplitSubUnifies_54, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_85_85, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_86_86);
              }
              {
                check_hlds__modecheck_unify__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_87_87, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_35));
              }
              {
                check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_unify__X_23, check_hlds__modecheck_unify__UnifiedInst_40, check_hlds__modecheck_unify__V_87_87, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_86_86, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_88_88);
              }
              {
                check_hlds__modecheck_unify__bind_args_if_needed_6_p_0((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_24, check_hlds__modecheck_unify__UnifiedInst_40, check_hlds__modecheck_unify__ArgVars_53, check_hlds__modecheck_unify__InstOfXArgs_49, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_88_88, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_89_89);
              }
              (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__Unification_52)) == (MR_mktag((MR_Integer) 0)));
              if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
                {
                  check_hlds__modecheck_unify__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_52, (MR_Integer) 0)));
                  check_hlds__modecheck_unify__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_52, (MR_Integer) 1)));
                  check_hlds__modecheck_unify__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_52, (MR_Integer) 2)));
                  check_hlds__modecheck_unify__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_52, (MR_Integer) 3)));
                  check_hlds__modecheck_unify__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_52, (MR_Integer) 4)));
                  check_hlds__modecheck_unify__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_52, (MR_Integer) 5)));
                  check_hlds__modecheck_unify__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_52, (MR_Integer) 6)));
                  (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = (check_hlds__modecheck_unify__LiveX_25 == (MR_Integer) 1);
                }
              if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
                {
                  *check_hlds__modecheck_unify__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_unify_scalar_common_4[0]);
                  *check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_68 = check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_89_89;
                }
              else
                {
                  (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = (check_hlds__modecheck_unify__Detism_41 == (MR_Integer) 7);
                  if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
                    {
                      *check_hlds__modecheck_unify__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_unify_scalar_common_1[8]);
                      {
                        check_hlds__modecheck_unify__maybe_generate_cannot_succeed_warning_5_p_0(check_hlds__modecheck_unify__X_23, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_24, check_hlds__modecheck_unify__ConsId_33, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_89_89, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_68);
                      }
                    }
                  else
                    {
                      MR_Word check_hlds__modecheck_unify__Functor_62;
                      MR_Word check_hlds__modecheck_unify__UnifyExpr_63;
                      MR_Word check_hlds__modecheck_unify__ExtraGoals_64;
                      MR_Word check_hlds__modecheck_unify__V_99_99;
                      MR_Word check_hlds__modecheck_unify__V_100_100;
                      MR_Word check_hlds__modecheck_unify__V_65_65;
                      MR_Word check_hlds__modecheck_unify__V_66_66;

                      {
                        check_hlds__modecheck_unify__Functor_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Functor_62, 0) = ((MR_Box) (check_hlds__modecheck_unify__ConsId_33));
                        MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Functor_62, 1) = ((MR_Box) (check_hlds__modecheck_unify__IsExistConstruction_15));
                        MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__Functor_62, 2) = ((MR_Box) (check_hlds__modecheck_unify__ArgVars_53));
                      }
                      {
                        check_hlds__modecheck_unify__UnifyExpr_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__UnifyExpr_63, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_23));
                        MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__UnifyExpr_63, 1) = ((MR_Box) (check_hlds__modecheck_unify__Functor_62));
                        MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__UnifyExpr_63, 2) = ((MR_Box) (check_hlds__modecheck_unify__UnifyMode_45));
                        MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__UnifyExpr_63, 3) = ((MR_Box) (check_hlds__modecheck_unify__Unification_52));
                        MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__UnifyExpr_63, 4) = ((MR_Box) (check_hlds__modecheck_unify__UnifyContext_18));
                      }
                      {
                        check_hlds__modecheck_util__append_extra_goals_3_p_0(check_hlds__modecheck_unify__ExtraGoalsExistConstruct_26, check_hlds__modecheck_unify__ExtraGoalsSplitSubUnifies_54, &check_hlds__modecheck_unify__ExtraGoals_64);
                      }
                      (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = (check_hlds__modecheck_unify__HowToCheckGoal_28 == (MR_Integer) 1);
                      if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
                        {
                          (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__ExtraGoals_64)) == (MR_mktag((MR_Integer) 1)));
                          if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
                            {
                              check_hlds__modecheck_unify__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__ExtraGoals_64, (MR_Integer) 0)));
                              check_hlds__modecheck_unify__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__ExtraGoals_64, (MR_Integer) 1)));
                              {
                                (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modecheck_unify__InstMap1_27);
                              }
                            }
                        }
                      if ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__succeeded)
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unify_functor\'/11", (MR_String) "re-modecheck of unification encountered complicated sub-unifies");
                            return;
                          }
                        }
                      else
                        {
                        }
                      {
                        check_hlds__modecheck_unify__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_99_99, 0) = ((MR_Box) (check_hlds__modecheck_unify__X0_12));
                        MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_99_99, 1) = ((MR_Box) ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16));
                      }
                      {
                        check_hlds__modecheck_unify__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_100_100, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_23));
                        MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_100_100, 1) = ((MR_Box) (check_hlds__modecheck_unify__ArgVars_53));
                      }
                      {
                        check_hlds__modecheck_util__handle_extra_goals_9_p_0(check_hlds__modecheck_unify__UnifyExpr_63, check_hlds__modecheck_unify__ExtraGoals_64, check_hlds__modecheck_unify__GoalInfo0_19, check_hlds__modecheck_unify__V_99_99, check_hlds__modecheck_unify__V_100_100, check_hlds__modecheck_unify__InstMap0_22, check_hlds__modecheck_unify__GoalExpr_20, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_89_89, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_68);
                      }
                    }
                }
            }
          else
            {
              MR_Word check_hlds__modecheck_unify__V_102_102;

              {
                check_hlds__modecheck_unify__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_102_102, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_23));
                MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_102_102, 1) = ((MR_Box) ((check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16));
              }
              {
                check_hlds__modecheck_unify__handle_var_functor_mode_error_9_p_0(check_hlds__modecheck_unify__X_23, check_hlds__modecheck_unify__InstConsId_34, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__ArgVars0_16, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstOfX_24, (check_hlds__modecheck_unify__env).check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0_env_0__InstsOfArgVars_31, check_hlds__modecheck_unify__V_102_102, check_hlds__modecheck_unify__GoalExpr_20, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_69_69, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_68);
              }
            }
        }
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_const_struct_7_p_0(
  MR_Word check_hlds__modecheck_unify__X_8,
  MR_Word check_hlds__modecheck_unify__ConsId_9,
  MR_Integer check_hlds__modecheck_unify__ConstNum_10,
  MR_Word check_hlds__modecheck_unify__UnifyContext_11,
  MR_Word * check_hlds__modecheck_unify__UnifyGoalExpr_12,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_30,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_31)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded;
    MR_Word check_hlds__modecheck_unify__InstMap_14;
    MR_Word check_hlds__modecheck_unify__InstOfX_15;
    MR_Word check_hlds__modecheck_unify__ModuleInfo0_16;
    MR_Word check_hlds__modecheck_unify__ConstStructDb_17;
    MR_Word check_hlds__modecheck_unify__ConstStruct_18;
    MR_Word check_hlds__modecheck_unify__InstOfY_22;
    MR_Word check_hlds__modecheck_unify__V_19_19;
    MR_Word check_hlds__modecheck_unify__V_20_20;
    MR_Word check_hlds__modecheck_unify__V_21_21;

    {
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_30, &check_hlds__modecheck_unify__InstMap_14);
    }
    {
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_unify__InstMap_14, check_hlds__modecheck_unify__X_8, &check_hlds__modecheck_unify__InstOfX_15);
    }
    {
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_30, &check_hlds__modecheck_unify__ModuleInfo0_16);
    }
    {
      hlds__hlds_module__module_info_get_const_struct_db_2_p_0(check_hlds__modecheck_unify__ModuleInfo0_16, &check_hlds__modecheck_unify__ConstStructDb_17);
    }
    {
      hlds__const_struct__lookup_const_struct_num_3_p_0(check_hlds__modecheck_unify__ConstStructDb_17, check_hlds__modecheck_unify__ConstNum_10, &check_hlds__modecheck_unify__ConstStruct_18);
    }
    check_hlds__modecheck_unify__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ConstStruct_18, (MR_Integer) 0)));
    check_hlds__modecheck_unify__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ConstStruct_18, (MR_Integer) 1)));
    check_hlds__modecheck_unify__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ConstStruct_18, (MR_Integer) 2)));
    check_hlds__modecheck_unify__InstOfY_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__ConstStruct_18, (MR_Integer) 3)));
    {
      check_hlds__modecheck_unify__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(check_hlds__modecheck_unify__ModuleInfo0_16, check_hlds__modecheck_unify__InstOfX_15);
    }
    if (check_hlds__modecheck_unify__succeeded)
      {
        MR_Word check_hlds__modecheck_unify__Unification_24;
        MR_Word check_hlds__modecheck_unify__FromToInstsOfX_25;
        MR_Word check_hlds__modecheck_unify__FromToInstsOfY_26;
        MR_Word check_hlds__modecheck_unify__UnifyMode_27;
        MR_Word check_hlds__modecheck_unify__V_32_32;
        MR_Word check_hlds__modecheck_unify__V_39_39;

        {
          check_hlds__modecheck_unify__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_32_32, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_22));
        }
        {
          check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_unify__X_8, check_hlds__modecheck_unify__InstOfY_22, check_hlds__modecheck_unify__V_32_32, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_30, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_31);
        }
        {
          check_hlds__modecheck_unify__Unification_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_24, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_8));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_24, 1) = ((MR_Box) (check_hlds__modecheck_unify__ConsId_9));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_24, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_24, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_24, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_24, 5) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_24, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__modecheck_unify__FromToInstsOfX_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfX_25, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfX_15));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfX_25, 1) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_22));
        }
        {
          check_hlds__modecheck_unify__FromToInstsOfY_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfY_26, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_22));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfY_26, 1) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_22));
        }
        {
          check_hlds__modecheck_unify__UnifyMode_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__UnifyMode_27, 0) = ((MR_Box) (check_hlds__modecheck_unify__FromToInstsOfX_25));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__UnifyMode_27, 1) = ((MR_Box) (check_hlds__modecheck_unify__FromToInstsOfY_26));
        }
        {
          check_hlds__modecheck_unify__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_39_39, 0) = ((MR_Box) (check_hlds__modecheck_unify__ConsId_9));
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_39_39, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_39_39, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__modecheck_unify__UnifyGoalExpr_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__V_39_39));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__modecheck_unify__UnifyMode_27));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__modecheck_unify__Unification_24));
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__modecheck_unify__UnifyContext_11));
        }
      }
    else
      {
        MR_Word check_hlds__modecheck_unify__WaitingVars_28;
        MR_Word check_hlds__modecheck_unify__ModeError_29;
        MR_Word check_hlds__modecheck_unify__V_42_42;
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_46_46;
        MR_Word check_hlds__modecheck_unify__V_54_54;
        MR_Word check_hlds__modecheck_unify__Inst_57;
        MR_Word check_hlds__modecheck_unify__Unification_58;
        MR_Word check_hlds__modecheck_unify__FromToInstsOfX_59;
        MR_Word check_hlds__modecheck_unify__FromToInstsOfY_60;
        MR_Word check_hlds__modecheck_unify__UnifyMode_61;

        {
          check_hlds__modecheck_unify__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_42_42, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_8));
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_unify__V_42_42, &check_hlds__modecheck_unify__WaitingVars_28);
        }
        {
          check_hlds__modecheck_unify__ModeError_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_29, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_8));
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_29, 2) = ((MR_Box) (check_hlds__modecheck_unify__ConsId_9));
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_29, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_29, 4) = ((MR_Box) (check_hlds__modecheck_unify__InstOfX_15));
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_29, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_28, check_hlds__modecheck_unify__ModeError_29, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_30, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_46_46);
        }
        check_hlds__modecheck_unify__Inst_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        {
          check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_unify__X_8, check_hlds__modecheck_unify__Inst_57, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_46_46, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_31);
        }
        {
          check_hlds__modecheck_unify__Unification_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_58, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_8));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_58, 1) = ((MR_Box) (check_hlds__modecheck_unify__ConsId_9));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_58, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_58, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_58, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_58, 5) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__Unification_58, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__modecheck_unify__FromToInstsOfX_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfX_59, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfX_15));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfX_59, 1) = ((MR_Box) (check_hlds__modecheck_unify__Inst_57));
        }
        {
          check_hlds__modecheck_unify__FromToInstsOfY_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfY_60, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_22));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfY_60, 1) = ((MR_Box) (check_hlds__modecheck_unify__Inst_57));
        }
        {
          check_hlds__modecheck_unify__UnifyMode_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__UnifyMode_61, 0) = ((MR_Box) (check_hlds__modecheck_unify__FromToInstsOfX_59));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__UnifyMode_61, 1) = ((MR_Box) (check_hlds__modecheck_unify__FromToInstsOfY_60));
        }
        {
          check_hlds__modecheck_unify__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_54_54, 0) = ((MR_Box) (check_hlds__modecheck_unify__ConsId_9));
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_54_54, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_54_54, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__modecheck_unify__UnifyGoalExpr_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__V_54_54));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__modecheck_unify__UnifyMode_61));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__modecheck_unify__Unification_58));
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__modecheck_unify__UnifyContext_11));
        }
      }
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_rhs_undetermined_mode_lambda_8_p_0(
  MR_Word check_hlds__modecheck_unify__X_9,
  MR_Word check_hlds__modecheck_unify__RHS0_10,
  MR_Word check_hlds__modecheck_unify__Unification_11,
  MR_Word check_hlds__modecheck_unify__UnifyContext_12,
  MR_Word check_hlds__modecheck_unify__GoalInfo0_13,
  MR_Word * check_hlds__modecheck_unify__Goal_14,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_42,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_43)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded;
    MR_Word check_hlds__modecheck_unify__Goal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_10, (MR_Integer) 6)));
    MR_Word check_hlds__modecheck_unify__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_10, (MR_Integer) 0)))) & (MR_Integer) 3);
    MR_Word check_hlds__modecheck_unify__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_10, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__modecheck_unify__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_10, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word check_hlds__modecheck_unify__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_10, (MR_Integer) 2)));
    MR_Word check_hlds__modecheck_unify__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_10, (MR_Integer) 3)));
    MR_Word check_hlds__modecheck_unify__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_10, (MR_Integer) 4)));
    MR_Word check_hlds__modecheck_unify__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS0_10, (MR_Integer) 5)));
    MR_Word check_hlds__modecheck_unify__PredId_25;
    MR_Word check_hlds__modecheck_unify__ArgVars_26;
    MR_Word check_hlds__modecheck_unify__TypeInfo_78_78;
    MR_Word check_hlds__modecheck_unify__V_44_44;
    MR_Tuple check_hlds__modecheck_unify__V_45_45;
    MR_Word check_hlds__modecheck_unify__V_68_68;

    {
      hlds__goal_util__predids_with_args_from_goal_2_p_0(check_hlds__modecheck_unify__Goal0_24, &check_hlds__modecheck_unify__V_44_44);
    }
    check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__V_44_44)) == (MR_mktag((MR_Integer) 1)));
    if (check_hlds__modecheck_unify__succeeded)
      {
        check_hlds__modecheck_unify__V_45_45 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_44_44, (MR_Integer) 0)));
        check_hlds__modecheck_unify__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_44_44, (MR_Integer) 1)));
        check_hlds__modecheck_unify__TypeInfo_78_78 = (MR_Word) &check_hlds__modecheck_unify_scalar_common_1[7];
        {
          check_hlds__modecheck_unify__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_unify__TypeInfo_78_78, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (check_hlds__modecheck_unify__V_68_68)));
        }
        if (check_hlds__modecheck_unify__succeeded)
          {
            check_hlds__modecheck_unify__PredId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_45_45, (MR_Integer) 0)));
            check_hlds__modecheck_unify__ArgVars_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_45_45, (MR_Integer) 1)));
            check_hlds__modecheck_unify__succeeded = MR_TRUE;
          }
      }
    if (check_hlds__modecheck_unify__succeeded)
      {
        MR_Word check_hlds__modecheck_unify__ModuleInfo_27;
        MR_Word check_hlds__modecheck_unify__InstMap_28;
        MR_Word check_hlds__modecheck_unify__VarTypes_29;
        MR_Word check_hlds__modecheck_unify__PredInfo_30;
        MR_Word check_hlds__modecheck_unify__MatchResult_31;
        MR_Word check_hlds__modecheck_unify__CalleeProcIds_85;

        {
          check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_42, &check_hlds__modecheck_unify__ModuleInfo_27);
        }
        {
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_42, &check_hlds__modecheck_unify__InstMap_28);
        }
        {
          check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_42, &check_hlds__modecheck_unify__VarTypes_29);
        }
        {
          hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__modecheck_unify__ModuleInfo_27, check_hlds__modecheck_unify__PredId_25, &check_hlds__modecheck_unify__PredInfo_30);
        }
        {
          check_hlds__modecheck_unify__CalleeProcIds_85 = hlds__hlds_pred__pred_info_procids_1_f_0(check_hlds__modecheck_unify__PredInfo_30);
        }
        {
          check_hlds__modecheck_unify__match_modes_by_higher_order_insts_2_8_p_0(check_hlds__modecheck_unify__ModuleInfo_27, check_hlds__modecheck_unify__InstMap_28, check_hlds__modecheck_unify__VarTypes_29, check_hlds__modecheck_unify__ArgVars_26, check_hlds__modecheck_unify__PredInfo_30, check_hlds__modecheck_unify__CalleeProcIds_85, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__modecheck_unify__MatchResult_31);
        }
        if ((check_hlds__modecheck_unify__MatchResult_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word check_hlds__modecheck_unify__WaitingVars_32;
            MR_Word check_hlds__modecheck_unify__ModeError_33;

            {
              check_hlds__modecheck_unify__WaitingVars_32 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_unify__X_9);
            }
            {
              check_hlds__modecheck_unify__ModeError_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_33, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_9));
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_33, 2) = ((MR_Box) (check_hlds__modecheck_unify__PredId_25));
            }
            {
              check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_32, check_hlds__modecheck_unify__ModeError_33, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_42, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_43);
            }
            {
              *check_hlds__modecheck_unify__Goal_14 = hlds__make_goal__true_goal_expr_0_f_0();
            }
          }
        else
          {
            MR_Word check_hlds__modecheck_unify__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__MatchResult_31, (MR_Integer) 0)));

            if ((check_hlds__modecheck_unify__V_75_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word check_hlds__modecheck_unify__WaitingVars_69;
                MR_Word check_hlds__modecheck_unify__ModeError_70;

                {
                  check_hlds__modecheck_unify__WaitingVars_69 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_unify__X_9);
                }
                {
                  check_hlds__modecheck_unify__ModeError_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_70, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_9));
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_70, 2) = ((MR_Box) (check_hlds__modecheck_unify__PredId_25));
                }
                {
                  check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_69, check_hlds__modecheck_unify__ModeError_70, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_42, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_43);
                }
                {
                  *check_hlds__modecheck_unify__Goal_14 = hlds__make_goal__true_goal_expr_0_f_0();
                }
              }
            else
              {
                MR_Word check_hlds__modecheck_unify__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_75_75, (MR_Integer) 1)));
                MR_Integer check_hlds__modecheck_unify__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_75_75, (MR_Integer) 0)));

                if ((check_hlds__modecheck_unify__V_76_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word check_hlds__modecheck_unify__MaybeRHS_35;

                    {
                      check_hlds__polymorphism__fix_undetermined_mode_lambda_goal_4_p_0(check_hlds__modecheck_unify__ModuleInfo_27, check_hlds__modecheck_unify__V_77_77, check_hlds__modecheck_unify__RHS0_10, &check_hlds__modecheck_unify__MaybeRHS_35);
                    }
                    if (((MR_tag((MR_Word) check_hlds__modecheck_unify__MaybeRHS_35)) == (MR_mktag((MR_Integer) 0))))
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unification_rhs_undetermined_mode_lambda\'/8", (MR_String) "could not fix up lambda goal; polymorphism.m should have stopped us getting here");
                          return;
                        }
                      }
                    else
                      {
                        MR_Word check_hlds__modecheck_unify__RHS_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__MaybeRHS_35, (MR_Integer) 0)));
                        MR_Word check_hlds__modecheck_unify__GoalInfo_37;

                        {
                          hlds__hlds_goal__goal_info_remove_feature_3_p_0((MR_Integer) 20, check_hlds__modecheck_unify__GoalInfo0_13, &check_hlds__modecheck_unify__GoalInfo_37);
                        }
                        {
                          check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0(check_hlds__modecheck_unify__X_9, check_hlds__modecheck_unify__RHS_36, check_hlds__modecheck_unify__Unification_11, check_hlds__modecheck_unify__UnifyContext_12, check_hlds__modecheck_unify__Goal_14, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_42, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_43);
                        }
                      }
                  }
                else
                  {
                    MR_Word check_hlds__modecheck_unify__WaitingVars_64;
                    MR_Word check_hlds__modecheck_unify__ModeError_65;

                    {
                      check_hlds__modecheck_unify__WaitingVars_64 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_unify__X_9);
                    }
                    {
                      check_hlds__modecheck_unify__ModeError_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_65, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_9));
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_65, 2) = ((MR_Box) (check_hlds__modecheck_unify__PredId_25));
                    }
                    {
                      check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_64, check_hlds__modecheck_unify__ModeError_65, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_42, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_43);
                    }
                    {
                      *check_hlds__modecheck_unify__Goal_14 = hlds__make_goal__true_goal_expr_0_f_0();
                    }
                  }
              }
          }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unification_rhs_undetermined_mode_lambda\'/8", (MR_String) "expecting single call");
          return;
        }
      }
  }
}

static MR_Box MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_lambda_12_p_0_1(
  MR_Box check_hlds__modecheck_unify__closure_arg,
  MR_Box check_hlds__modecheck_unify__wrapper_arg_1)
{
  {
    MR_Box check_hlds__modecheck_unify__wrapper_arg_2;
    MR_Box check_hlds__modecheck_unify__closure = check_hlds__modecheck_unify__closure_arg;
    MR_Word check_hlds__modecheck_unify__conv0_LambdaHeadVar__2_50;

    {
      check_hlds__modecheck_unify__conv0_LambdaHeadVar__2_50 = check_hlds__modecheck_unify__IntroducedFrom__func__modecheck_unify_lambda__508__1_1_f_0(((MR_Word) check_hlds__modecheck_unify__wrapper_arg_1));
    }
    check_hlds__modecheck_unify__wrapper_arg_2 = ((MR_Box) (check_hlds__modecheck_unify__conv0_LambdaHeadVar__2_50));
    return check_hlds__modecheck_unify__wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unify_lambda_12_p_0(
  MR_Word check_hlds__modecheck_unify__X_13,
  MR_Word check_hlds__modecheck_unify__PredOrFunc_14,
  MR_Word check_hlds__modecheck_unify__ArgVars_15,
  MR_Word check_hlds__modecheck_unify__LambdaModes_16,
  MR_Word check_hlds__modecheck_unify__LambdaDetism_17,
  MR_Word check_hlds__modecheck_unify__RHS0_18,
  MR_Word * check_hlds__modecheck_unify__RHS_19,
  MR_Word check_hlds__modecheck_unify__Unification0_20,
  MR_Word * check_hlds__modecheck_unify__Unification_21,
  MR_Word * check_hlds__modecheck_unify__UnifyMode_22,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_40,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_41)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded;
    MR_Word check_hlds__modecheck_unify__ModuleInfo0_24;
    MR_Word check_hlds__modecheck_unify__InstMap0_25;
    MR_Word check_hlds__modecheck_unify__InstOfX_26;
    MR_Word check_hlds__modecheck_unify__InstOfY_27;
    MR_Word check_hlds__modecheck_unify__LambdaPredInfo_28;
    MR_Word check_hlds__modecheck_unify__V_43_43;
    MR_Word check_hlds__modecheck_unify__UnifyInst_29;
    MR_Word check_hlds__modecheck_unify__ModuleInfo1_31;
    MR_Word check_hlds__modecheck_unify___Detism_30;

    {
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_40, &check_hlds__modecheck_unify__ModuleInfo0_24);
    }
    {
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_40, &check_hlds__modecheck_unify__InstMap0_25);
    }
    {
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_unify__InstMap0_25, check_hlds__modecheck_unify__X_13, &check_hlds__modecheck_unify__InstOfX_26);
    }
    {
      check_hlds__modecheck_unify__LambdaPredInfo_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__LambdaPredInfo_28, 0) = ((MR_Box) (check_hlds__modecheck_unify__PredOrFunc_14));
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__LambdaPredInfo_28, 1) = ((MR_Box) (check_hlds__modecheck_unify__LambdaModes_16));
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__LambdaPredInfo_28, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__LambdaPredInfo_28, 3) = ((MR_Box) (check_hlds__modecheck_unify__LambdaDetism_17));
    }
    check_hlds__modecheck_unify__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__modecheck_unify__LambdaPredInfo_28);
    {
      check_hlds__modecheck_unify__InstOfY_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__InstOfY_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__InstOfY_27, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__InstOfY_27, 2) = ((MR_Box) (check_hlds__modecheck_unify__V_43_43));
    }
    {
      check_hlds__modecheck_unify__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 1, check_hlds__modecheck_unify__InstOfX_26, check_hlds__modecheck_unify__InstOfY_27, (MR_Integer) 0, &check_hlds__modecheck_unify__UnifyInst_29, &check_hlds__modecheck_unify___Detism_30, check_hlds__modecheck_unify__ModuleInfo0_24, &check_hlds__modecheck_unify__ModuleInfo1_31);
    }
    if (check_hlds__modecheck_unify__succeeded)
      {
        MR_Word check_hlds__modecheck_unify__FromToInstsOfX_33;
        MR_Word check_hlds__modecheck_unify__FromToInstsOfY_34;
        MR_Word check_hlds__modecheck_unify__ArgInsts_35;
        MR_Word check_hlds__modecheck_unify__ArgFromToInsts_36;
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_47_47;
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_52_52;

        {
          check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__modecheck_unify__ModuleInfo1_31, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_40, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_47_47);
        }
        {
          check_hlds__modecheck_unify__FromToInstsOfX_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfX_33, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfX_26));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfX_33, 1) = ((MR_Box) (check_hlds__modecheck_unify__UnifyInst_29));
        }
        {
          check_hlds__modecheck_unify__FromToInstsOfY_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfY_34, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_27));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfY_34, 1) = ((MR_Box) (check_hlds__modecheck_unify__UnifyInst_29));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__modecheck_unify__UnifyMode_22 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__FromToInstsOfX_33));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__FromToInstsOfY_34));
        }
        {
          hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__modecheck_unify__InstMap0_25, check_hlds__modecheck_unify__ArgVars_15, &check_hlds__modecheck_unify__ArgInsts_35);
        }
        {
          check_hlds__modecheck_unify__ArgFromToInsts_36 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_from_to_insts_0, (MR_Word) &check_hlds__modecheck_unify_scalar_common_4[1], check_hlds__modecheck_unify__ArgInsts_35);
        }
        {
          check_hlds__modecheck_unify__categorize_unify_var_lambda_11_p_0(check_hlds__modecheck_unify__FromToInstsOfX_33, check_hlds__modecheck_unify__ArgFromToInsts_36, check_hlds__modecheck_unify__X_13, check_hlds__modecheck_unify__ArgVars_15, check_hlds__modecheck_unify__PredOrFunc_14, check_hlds__modecheck_unify__RHS0_18, check_hlds__modecheck_unify__RHS_19, check_hlds__modecheck_unify__Unification0_20, check_hlds__modecheck_unify__Unification_21, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_47_47, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_52_52);
        }
        {
          check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_unify__X_13, check_hlds__modecheck_unify__UnifyInst_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_52_52, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_41);
        }
      }
    else
      {
        MR_Word check_hlds__modecheck_unify__WaitingVars_38;
        MR_Word check_hlds__modecheck_unify__ModeError_39;
        MR_Word check_hlds__modecheck_unify__V_55_55;
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_57_57;
        MR_Word check_hlds__modecheck_unify__Inst_61;
        MR_Word check_hlds__modecheck_unify__FromToInstsOfX_62;
        MR_Word check_hlds__modecheck_unify__FromToInstsOfY_63;

        {
          check_hlds__modecheck_unify__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_55_55, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_13));
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_unify__V_55_55, &check_hlds__modecheck_unify__WaitingVars_38);
        }
        {
          check_hlds__modecheck_unify__ModeError_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_39, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_13));
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_39, 2) = ((MR_Box) (check_hlds__modecheck_unify__InstOfX_26));
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_39, 3) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_27));
        }
        {
          check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_38, check_hlds__modecheck_unify__ModeError_39, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_40, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_57_57);
        }
        check_hlds__modecheck_unify__Inst_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        {
          check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_unify__X_13, check_hlds__modecheck_unify__Inst_61, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_57_57, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_41);
        }
        {
          check_hlds__modecheck_unify__FromToInstsOfX_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfX_62, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfX_26));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfX_62, 1) = ((MR_Box) (check_hlds__modecheck_unify__Inst_61));
        }
        {
          check_hlds__modecheck_unify__FromToInstsOfY_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfY_63, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_27));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfY_63, 1) = ((MR_Box) (check_hlds__modecheck_unify__Inst_61));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__modecheck_unify__UnifyMode_22 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__FromToInstsOfX_62));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__FromToInstsOfY_63));
        }
        *check_hlds__modecheck_unify__Unification_21 = check_hlds__modecheck_unify__Unification0_20;
        *check_hlds__modecheck_unify__RHS_19 = check_hlds__modecheck_unify__RHS0_18;
      }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_functor_10_p_0_2(
  MR_Box check_hlds__modecheck_unify__closure_arg)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded;
    MR_Box check_hlds__modecheck_unify__closure = check_hlds__modecheck_unify__closure_arg;

    {
      check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_functor__276__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 4))));
    }
    return check_hlds__modecheck_unify__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_functor_10_p_0_1(
  MR_Box check_hlds__modecheck_unify__closure_arg)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded;
    MR_Box check_hlds__modecheck_unify__closure = check_hlds__modecheck_unify__closure_arg;

    {
      check_hlds__modecheck_unify__succeeded = check_hlds__modecheck_unify__IntroducedFrom__pred__modecheck_unification_functor__274__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 4))));
    }
    return check_hlds__modecheck_unify__succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_functor_10_p_0(
  MR_Word check_hlds__modecheck_unify__X_11,
  MR_Word check_hlds__modecheck_unify__ConsId_12,
  MR_Word check_hlds__modecheck_unify__IsExistConstruction_13,
  MR_Word check_hlds__modecheck_unify__ArgVars0_14,
  MR_Word check_hlds__modecheck_unify__Unification0_15,
  MR_Word check_hlds__modecheck_unify__UnifyContext_16,
  MR_Word check_hlds__modecheck_unify__GoalInfo0_17,
  MR_Word * check_hlds__modecheck_unify__GoalExpr_18,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_39,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_40)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded;
    MR_Word check_hlds__modecheck_unify__VarTypes0_20;
    MR_Word check_hlds__modecheck_unify__TypeOfX_21;
    MR_Word check_hlds__modecheck_unify__Purity_22;
    MR_Word check_hlds__modecheck_unify__PredArgTypes_25;
    MR_Word check_hlds__modecheck_unify__ShroudedPredProcId_26;
    MR_Word check_hlds__modecheck_unify__V_23_23;

    {
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_39, &check_hlds__modecheck_unify__VarTypes0_20);
    }
    {
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_unify__VarTypes0_20, check_hlds__modecheck_unify__X_11, &check_hlds__modecheck_unify__TypeOfX_21);
    }
    {
      check_hlds__modecheck_unify__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__modecheck_unify__TypeOfX_21, &check_hlds__modecheck_unify__Purity_22, &check_hlds__modecheck_unify__V_23_23, &check_hlds__modecheck_unify__PredArgTypes_25);
    }
    if (check_hlds__modecheck_unify__succeeded)
      {
        check_hlds__modecheck_unify__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_unify__ConsId_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ConsId_12, (MR_Integer) 0)))) == (MR_Integer) 4)));
        if (check_hlds__modecheck_unify__succeeded)
          check_hlds__modecheck_unify__ShroudedPredProcId_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ConsId_12, (MR_Integer) 1)));
      }
    if (check_hlds__modecheck_unify__succeeded)
      {
        MR_Word check_hlds__modecheck_unify__ModuleInfo0_28;
        MR_Word check_hlds__modecheck_unify__VarSet0_29;
        MR_Word check_hlds__modecheck_unify__Context_30;
        MR_Word check_hlds__modecheck_unify__PredId_31;
        MR_Integer check_hlds__modecheck_unify__ProcId_32;
        MR_Word check_hlds__modecheck_unify__MaybeRHS0_33;
        MR_Word check_hlds__modecheck_unify__VarSet_34;
        MR_Word check_hlds__modecheck_unify__VarTypes_35;
        MR_Word check_hlds__modecheck_unify__V_41_41;
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_42_42;
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_43_43;

        {
          check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_39, &check_hlds__modecheck_unify__ModuleInfo0_28);
        }
        {
          check_hlds__mode_info__mode_info_get_varset_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_39, &check_hlds__modecheck_unify__VarSet0_29);
        }
        {
          check_hlds__mode_info__mode_info_get_context_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_39, &check_hlds__modecheck_unify__Context_30);
        }
        {
          check_hlds__modecheck_unify__V_41_41 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(check_hlds__modecheck_unify__ShroudedPredProcId_26);
        }
        check_hlds__modecheck_unify__PredId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_41_41, (MR_Integer) 0)));
        check_hlds__modecheck_unify__ProcId_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_41_41, (MR_Integer) 1)));
        {
          check_hlds__polymorphism__convert_pred_to_lambda_goal_16_p_0(check_hlds__modecheck_unify__Purity_22, check_hlds__modecheck_unify__X_11, check_hlds__modecheck_unify__PredId_31, check_hlds__modecheck_unify__ProcId_32, check_hlds__modecheck_unify__ArgVars0_14, check_hlds__modecheck_unify__PredArgTypes_25, check_hlds__modecheck_unify__UnifyContext_16, check_hlds__modecheck_unify__GoalInfo0_17, check_hlds__modecheck_unify__Context_30, check_hlds__modecheck_unify__ModuleInfo0_28, &check_hlds__modecheck_unify__MaybeRHS0_33, check_hlds__modecheck_unify__VarSet0_29, &check_hlds__modecheck_unify__VarSet_34, check_hlds__modecheck_unify__VarTypes0_20, &check_hlds__modecheck_unify__VarTypes_35);
        }
        {
          check_hlds__mode_info__mode_info_set_varset_3_p_0(check_hlds__modecheck_unify__VarSet_34, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_39, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_42_42);
        }
        {
          check_hlds__mode_info__mode_info_set_var_types_3_p_0(check_hlds__modecheck_unify__VarTypes_35, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_42_42, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_43_43);
        }
        if (((MR_tag((MR_Word) check_hlds__modecheck_unify__MaybeRHS0_33)) == (MR_mktag((MR_Integer) 0))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unification_functor\'/10", (MR_String) "could not convert pred to lambda goal; polymorphism.m should have stopped us getting here");
              return;
            }
          }
        else
          {
            MR_Word check_hlds__modecheck_unify__RHS0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__MaybeRHS0_33, (MR_Integer) 0)));

            {
              check_hlds__modecheck_unify__modecheck_unification_8_p_0(check_hlds__modecheck_unify__X_11, check_hlds__modecheck_unify__RHS0_36, check_hlds__modecheck_unify__Unification0_15, check_hlds__modecheck_unify__UnifyContext_16, check_hlds__modecheck_unify__GoalInfo0_17, check_hlds__modecheck_unify__GoalExpr_18, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_43_43, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_40);
            }
          }
      }
    else
      {
        MR_Integer check_hlds__modecheck_unify__ConstNum_38;

        {
          check_hlds__modecheck_unify__succeeded = parse_tree__prog_data__cons_id_is_const_struct_2_p_0(check_hlds__modecheck_unify__ConsId_12, &check_hlds__modecheck_unify__ConstNum_38);
        }
        if (check_hlds__modecheck_unify__succeeded)
          {
            MR_Word check_hlds__modecheck_unify__V_50_50;
            MR_Word check_hlds__modecheck_unify__V_55_55;

            {
              check_hlds__modecheck_unify__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_50_50, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_5[0]));
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_50_50, 1) = ((MR_Box) (check_hlds__modecheck_unify__modecheck_unification_functor_10_p_0_1));
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_50_50, 3) = ((MR_Box) (check_hlds__modecheck_unify__IsExistConstruction_13));
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_50_50, 4) = ((MR_Box) ((MR_Integer) 0));
            }
            {
              mercury__require__expect_4_p_0(check_hlds__modecheck_unify__V_50_50, (MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unification_functor\'/10", (MR_String) "const struct construction is existential");
            }
            {
              check_hlds__modecheck_unify__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_55_55, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_5[1]));
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_55_55, 1) = ((MR_Box) (check_hlds__modecheck_unify__modecheck_unification_functor_10_p_0_2));
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_55_55, 3) = ((MR_Box) (check_hlds__modecheck_unify__ArgVars0_14));
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_55_55, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              mercury__require__expect_4_p_0(check_hlds__modecheck_unify__V_55_55, (MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.modecheck_unification_functor\'/10", (MR_String) "const struct construction has args");
            }
            {
              check_hlds__modecheck_unify__modecheck_unify_const_struct_7_p_0(check_hlds__modecheck_unify__X_11, check_hlds__modecheck_unify__ConsId_12, check_hlds__modecheck_unify__ConstNum_38, check_hlds__modecheck_unify__UnifyContext_16, check_hlds__modecheck_unify__GoalExpr_18, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_39, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_40);
            }
          }
        else
          {
            check_hlds__modecheck_unify__modecheck_unify_functor_11_p_0(check_hlds__modecheck_unify__X_11, check_hlds__modecheck_unify__TypeOfX_21, check_hlds__modecheck_unify__ConsId_12, check_hlds__modecheck_unify__IsExistConstruction_13, check_hlds__modecheck_unify__ArgVars0_14, check_hlds__modecheck_unify__Unification0_15, check_hlds__modecheck_unify__UnifyContext_16, check_hlds__modecheck_unify__GoalInfo0_17, check_hlds__modecheck_unify__GoalExpr_18, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_39, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_40);
          }
      }
  }
}

static void MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_var_8_p_0(
  MR_Word check_hlds__modecheck_unify__X_9,
  MR_Word check_hlds__modecheck_unify__Y_10,
  MR_Word check_hlds__modecheck_unify__Unification0_11,
  MR_Word check_hlds__modecheck_unify__UnifyContext_12,
  MR_Word check_hlds__modecheck_unify__UnifyGoalInfo0_13,
  MR_Word * check_hlds__modecheck_unify__UnifyGoalExpr_14,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_36,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_37)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded;
    MR_Word check_hlds__modecheck_unify__ModuleInfo0_16;
    MR_Word check_hlds__modecheck_unify__VarTypes_17;
    MR_Word check_hlds__modecheck_unify__InstMap_18;
    MR_Word check_hlds__modecheck_unify__InstOfX_19;
    MR_Word check_hlds__modecheck_unify__InstOfY_20;
    MR_Word check_hlds__modecheck_unify__LiveX_21;
    MR_Word check_hlds__modecheck_unify__LiveY_22;
    MR_Word check_hlds__modecheck_unify__UnifiedInst_24;
    MR_Word check_hlds__modecheck_unify__Detism1_25;
    MR_Word check_hlds__modecheck_unify__ModuleInfo1_26;
    MR_Word check_hlds__modecheck_unify__BothLive_23;
    MR_Word check_hlds__modecheck_unify___XLockedReason_27;
    MR_Word check_hlds__modecheck_unify___YLockedReason_28;
    MR_Word check_hlds__modecheck_unify__TypeInfo_58_58;

    {
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_36, &check_hlds__modecheck_unify__ModuleInfo0_16);
    }
    {
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_36, &check_hlds__modecheck_unify__VarTypes_17);
    }
    {
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_36, &check_hlds__modecheck_unify__InstMap_18);
    }
    {
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_unify__InstMap_18, check_hlds__modecheck_unify__X_9, &check_hlds__modecheck_unify__InstOfX_19);
    }
    {
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_unify__InstMap_18, check_hlds__modecheck_unify__Y_10, &check_hlds__modecheck_unify__InstOfY_20);
    }
    {
      check_hlds__mode_info__mode_info_var_is_live_3_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_36, check_hlds__modecheck_unify__X_9, &check_hlds__modecheck_unify__LiveX_21);
    }
    {
      check_hlds__mode_info__mode_info_var_is_live_3_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_36, check_hlds__modecheck_unify__Y_10, &check_hlds__modecheck_unify__LiveY_22);
    }
    check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__LiveX_21 == (MR_Integer) 0);
    if (check_hlds__modecheck_unify__succeeded)
      check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__LiveY_22 == (MR_Integer) 0);
    if (check_hlds__modecheck_unify__succeeded)
      check_hlds__modecheck_unify__BothLive_23 = (MR_Integer) 0;
    else
      check_hlds__modecheck_unify__BothLive_23 = (MR_Integer) 1;
    {
      check_hlds__modecheck_unify__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0(check_hlds__modecheck_unify__BothLive_23, check_hlds__modecheck_unify__InstOfX_19, check_hlds__modecheck_unify__InstOfY_20, (MR_Integer) 0, &check_hlds__modecheck_unify__UnifiedInst_24, &check_hlds__modecheck_unify__Detism1_25, check_hlds__modecheck_unify__ModuleInfo0_16, &check_hlds__modecheck_unify__ModuleInfo1_26);
    }
    if (check_hlds__modecheck_unify__succeeded)
      {
        check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__UnifiedInst_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (check_hlds__modecheck_unify__succeeded)
          {
            {
              check_hlds__modecheck_unify__succeeded = check_hlds__mode_info__mode_info_var_is_locked_3_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_36, check_hlds__modecheck_unify__X_9, &check_hlds__modecheck_unify___XLockedReason_27);
            }
            if (check_hlds__modecheck_unify__succeeded)
              {
                {
                  check_hlds__modecheck_unify__succeeded = check_hlds__mode_info__mode_info_var_is_locked_3_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_36, check_hlds__modecheck_unify__Y_10, &check_hlds__modecheck_unify___YLockedReason_28);
                }
                if (check_hlds__modecheck_unify__succeeded)
                  {
                    check_hlds__modecheck_unify__TypeInfo_58_58 = (MR_Word) &check_hlds__modecheck_unify_scalar_common_1[0];
                    {
                      check_hlds__modecheck_unify__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_unify__TypeInfo_58_58, ((MR_Box) (check_hlds__modecheck_unify__X_9)), ((MR_Box) (check_hlds__modecheck_unify__Y_10)));
                    }
                    check_hlds__modecheck_unify__succeeded = !(check_hlds__modecheck_unify__succeeded);
                  }
              }
          }
        check_hlds__modecheck_unify__succeeded = !(check_hlds__modecheck_unify__succeeded);
      }
    if (check_hlds__modecheck_unify__succeeded)
      {
        MR_Word check_hlds__modecheck_unify__FromToInstsOfX_30;
        MR_Word check_hlds__modecheck_unify__FromToInstsOfY_31;
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_39_39;
        MR_Word check_hlds__modecheck_unify__V_40_40;
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_41_41;
        MR_Word check_hlds__modecheck_unify__V_42_42;
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_43_43;

        {
          check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__modecheck_unify__ModuleInfo1_26, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_36, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_39_39);
        }
        {
          check_hlds__modecheck_unify__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_40_40, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_20));
        }
        {
          check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_unify__X_9, check_hlds__modecheck_unify__UnifiedInst_24, check_hlds__modecheck_unify__V_40_40, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_39_39, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_41_41);
        }
        {
          check_hlds__modecheck_unify__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_42_42, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfX_19));
        }
        {
          check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_unify__Y_10, check_hlds__modecheck_unify__UnifiedInst_24, check_hlds__modecheck_unify__V_42_42, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_41_41, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_43_43);
        }
        {
          check_hlds__modecheck_unify__FromToInstsOfX_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfX_30, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfX_19));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfX_30, 1) = ((MR_Box) (check_hlds__modecheck_unify__UnifiedInst_24));
        }
        {
          check_hlds__modecheck_unify__FromToInstsOfY_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfY_31, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_20));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfY_31, 1) = ((MR_Box) (check_hlds__modecheck_unify__UnifiedInst_24));
        }
        {
          check_hlds__modecheck_unify__categorize_unify_var_var_14_p_0(check_hlds__modecheck_unify__FromToInstsOfX_30, check_hlds__modecheck_unify__FromToInstsOfY_31, check_hlds__modecheck_unify__LiveX_21, check_hlds__modecheck_unify__LiveY_22, check_hlds__modecheck_unify__X_9, check_hlds__modecheck_unify__Y_10, check_hlds__modecheck_unify__Detism1_25, check_hlds__modecheck_unify__UnifyContext_12, check_hlds__modecheck_unify__UnifyGoalInfo0_13, check_hlds__modecheck_unify__VarTypes_17, check_hlds__modecheck_unify__Unification0_11, check_hlds__modecheck_unify__UnifyGoalExpr_14, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_43_43, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_37);
        }
      }
    else
      {
        MR_Word check_hlds__modecheck_unify__WaitingVars_32;
        MR_Word check_hlds__modecheck_unify__ModeError_33;
        MR_Word check_hlds__modecheck_unify__Unification_34;
        MR_Word check_hlds__modecheck_unify__UnifyMode_35;
        MR_Word check_hlds__modecheck_unify__V_45_45;
        MR_Word check_hlds__modecheck_unify__V_46_46;
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_48_48;
        MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_50_50;
        MR_Word check_hlds__modecheck_unify__V_53_53;
        MR_Word check_hlds__modecheck_unify__UnifiedInst_54;
        MR_Word check_hlds__modecheck_unify__FromToInstsOfX_55;
        MR_Word check_hlds__modecheck_unify__FromToInstsOfY_56;

        {
          check_hlds__modecheck_unify__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_46_46, 0) = ((MR_Box) (check_hlds__modecheck_unify__Y_10));
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__modecheck_unify__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_45_45, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_9));
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_45_45, 1) = ((MR_Box) (check_hlds__modecheck_unify__V_46_46));
        }
        {
          parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_unify__V_45_45, &check_hlds__modecheck_unify__WaitingVars_32);
        }
        {
          check_hlds__modecheck_unify__ModeError_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_33, 1) = ((MR_Box) (check_hlds__modecheck_unify__X_9));
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_33, 2) = ((MR_Box) (check_hlds__modecheck_unify__Y_10));
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_33, 3) = ((MR_Box) (check_hlds__modecheck_unify__InstOfX_19));
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__ModeError_33, 4) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_20));
        }
        {
          check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_32, check_hlds__modecheck_unify__ModeError_33, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_36, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_48_48);
        }
        check_hlds__modecheck_unify__UnifiedInst_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        {
          check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_unify__X_9, check_hlds__modecheck_unify__UnifiedInst_54, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_48_48, &check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_50_50);
        }
        {
          check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_unify__Y_10, check_hlds__modecheck_unify__UnifiedInst_54, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_50_50, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_37);
        }
        {
          check_hlds__modecheck_unify__Unification_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Unification_34, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_9));
          MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__Unification_34, 1) = ((MR_Box) (check_hlds__modecheck_unify__Y_10));
        }
        {
          check_hlds__modecheck_unify__FromToInstsOfX_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfX_55, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfX_19));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfX_55, 1) = ((MR_Box) (check_hlds__modecheck_unify__UnifiedInst_54));
        }
        {
          check_hlds__modecheck_unify__FromToInstsOfY_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfY_56, 0) = ((MR_Box) (check_hlds__modecheck_unify__InstOfY_20));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__FromToInstsOfY_56, 1) = ((MR_Box) (check_hlds__modecheck_unify__UnifiedInst_54));
        }
        {
          check_hlds__modecheck_unify__UnifyMode_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__UnifyMode_35, 0) = ((MR_Box) (check_hlds__modecheck_unify__FromToInstsOfX_55));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__UnifyMode_35, 1) = ((MR_Box) (check_hlds__modecheck_unify__FromToInstsOfY_56));
        }
        {
          check_hlds__modecheck_unify__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_53_53, 0) = ((MR_Box) (check_hlds__modecheck_unify__Y_10));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__modecheck_unify__UnifyGoalExpr_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_9));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__V_53_53));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__modecheck_unify__UnifyMode_35));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__modecheck_unify__Unification_34));
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__modecheck_unify__UnifyContext_12));
        }
      }
  }
}

void MR_CALL 
check_hlds__modecheck_unify__create_var_var_unification_5_p_0(
  MR_Word check_hlds__modecheck_unify__Var0_6,
  MR_Word check_hlds__modecheck_unify__Var_7,
  MR_Word check_hlds__modecheck_unify__Type_8,
  MR_Word check_hlds__modecheck_unify__ModeInfo_9,
  MR_Word * check_hlds__modecheck_unify__Goal_10)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded;
    MR_Word check_hlds__modecheck_unify__GoalExpr_11;
    MR_Word check_hlds__modecheck_unify__GoalInfo_12;
    MR_Word check_hlds__modecheck_unify__Context_13;
    MR_Word check_hlds__modecheck_unify__ModeContext_14;
    MR_Word check_hlds__modecheck_unify__UnifyContext_15;
    MR_Word check_hlds__modecheck_unify__MainContext_16;
    MR_Word check_hlds__modecheck_unify__SubContexts_17;
    MR_Word check_hlds__modecheck_unify__GoalExpr0_18;
    MR_Word check_hlds__modecheck_unify__GoalInfo0_19;
    MR_Word check_hlds__modecheck_unify__NonLocals_20;
    MR_Word check_hlds__modecheck_unify__GoalInfo1_21;
    MR_Word check_hlds__modecheck_unify__GoalInfo2_22;
    MR_Word check_hlds__modecheck_unify__ModuleInfo_23;
    MR_Word check_hlds__modecheck_unify__PredId_24;
    MR_Integer check_hlds__modecheck_unify__ProcId_25;
    MR_Word check_hlds__modecheck_unify__ProcInfo_27;
    MR_Word check_hlds__modecheck_unify__RttiVarMaps_28;
    MR_Word check_hlds__modecheck_unify__V_35_35;
    MR_Word check_hlds__modecheck_unify__V_36_36;
    MR_Word check_hlds__modecheck_unify__V_37_37;
    MR_Word check_hlds__modecheck_unify__V_38_38;
    MR_Word check_hlds__modecheck_unify___PredInfo_26;
    MR_Word check_hlds__modecheck_unify__X_29;
    MR_Word check_hlds__modecheck_unify__Y_30;
    MR_Word check_hlds__modecheck_unify__Mode_31;
    MR_Word check_hlds__modecheck_unify__Unification0_32;
    MR_Word check_hlds__modecheck_unify__FinalUnifyContext_33;

    {
      check_hlds__mode_info__mode_info_get_context_2_p_0(check_hlds__modecheck_unify__ModeInfo_9, &check_hlds__modecheck_unify__Context_13);
    }
    {
      check_hlds__mode_info__mode_info_get_mode_context_2_p_0(check_hlds__modecheck_unify__ModeInfo_9, &check_hlds__modecheck_unify__ModeContext_14);
    }
    {
      check_hlds__modecheck_util__mode_context_to_unify_context_3_p_0(check_hlds__modecheck_unify__ModeInfo_9, check_hlds__modecheck_unify__ModeContext_14, &check_hlds__modecheck_unify__UnifyContext_15);
    }
    check_hlds__modecheck_unify__MainContext_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__UnifyContext_15, (MR_Integer) 0)));
    check_hlds__modecheck_unify__SubContexts_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__UnifyContext_15, (MR_Integer) 1)));
    {
      check_hlds__modecheck_unify__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_35_35, 0) = ((MR_Box) (check_hlds__modecheck_unify__Var_7));
    }
    {
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__modecheck_unify__Var0_6, check_hlds__modecheck_unify__V_35_35, check_hlds__modecheck_unify__Context_13, check_hlds__modecheck_unify__MainContext_16, check_hlds__modecheck_unify__SubContexts_17, &check_hlds__modecheck_unify__V_36_36);
    }
    check_hlds__modecheck_unify__GoalExpr0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_36_36, (MR_Integer) 0)));
    check_hlds__modecheck_unify__GoalInfo0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_36_36, (MR_Integer) 1)));
    {
      check_hlds__modecheck_unify__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_38_38, 0) = ((MR_Box) (check_hlds__modecheck_unify__Var_7));
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__modecheck_unify__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_37_37, 0) = ((MR_Box) (check_hlds__modecheck_unify__Var0_6));
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__V_37_37, 1) = ((MR_Box) (check_hlds__modecheck_unify__V_38_38));
    }
    {
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_unify__V_37_37, &check_hlds__modecheck_unify__NonLocals_20);
    }
    {
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__modecheck_unify__NonLocals_20, check_hlds__modecheck_unify__GoalInfo0_19, &check_hlds__modecheck_unify__GoalInfo1_21);
    }
    {
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__modecheck_unify__Context_13, check_hlds__modecheck_unify__GoalInfo1_21, &check_hlds__modecheck_unify__GoalInfo2_22);
    }
    {
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__ModeInfo_9, &check_hlds__modecheck_unify__ModuleInfo_23);
    }
    {
      check_hlds__mode_info__mode_info_get_pred_id_2_p_0(check_hlds__modecheck_unify__ModeInfo_9, &check_hlds__modecheck_unify__PredId_24);
    }
    {
      check_hlds__mode_info__mode_info_get_proc_id_2_p_0(check_hlds__modecheck_unify__ModeInfo_9, &check_hlds__modecheck_unify__ProcId_25);
    }
    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__modecheck_unify__ModuleInfo_23, check_hlds__modecheck_unify__PredId_24, check_hlds__modecheck_unify__ProcId_25, &check_hlds__modecheck_unify___PredInfo_26, &check_hlds__modecheck_unify__ProcInfo_27);
    }
    {
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(check_hlds__modecheck_unify__ProcInfo_27, &check_hlds__modecheck_unify__RttiVarMaps_28);
    }
    check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__GoalExpr0_18)) == (MR_mktag((MR_Integer) 1)));
    if (check_hlds__modecheck_unify__succeeded)
      {
        check_hlds__modecheck_unify__X_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__GoalExpr0_18, (MR_Integer) 0)));
        check_hlds__modecheck_unify__Y_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__GoalExpr0_18, (MR_Integer) 1)));
        check_hlds__modecheck_unify__Mode_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__GoalExpr0_18, (MR_Integer) 2)));
        check_hlds__modecheck_unify__Unification0_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__GoalExpr0_18, (MR_Integer) 3)));
        check_hlds__modecheck_unify__FinalUnifyContext_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__GoalExpr0_18, (MR_Integer) 4)));
        {
          MR_Word check_hlds__modecheck_unify__Unification_34;

          {
            check_hlds__polymorphism__unification_typeinfos_rtti_varmaps_6_p_0(check_hlds__modecheck_unify__Type_8, check_hlds__modecheck_unify__RttiVarMaps_28, check_hlds__modecheck_unify__Unification0_32, &check_hlds__modecheck_unify__Unification_34, check_hlds__modecheck_unify__GoalInfo2_22, &check_hlds__modecheck_unify__GoalInfo_12);
          }
          {
            check_hlds__modecheck_unify__GoalExpr_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__GoalExpr_11, 0) = ((MR_Box) (check_hlds__modecheck_unify__X_29));
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__GoalExpr_11, 1) = ((MR_Box) (check_hlds__modecheck_unify__Y_30));
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__GoalExpr_11, 2) = ((MR_Box) (check_hlds__modecheck_unify__Mode_31));
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__GoalExpr_11, 3) = ((MR_Box) (check_hlds__modecheck_unify__Unification_34));
            MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__GoalExpr_11, 4) = ((MR_Box) (check_hlds__modecheck_unify__FinalUnifyContext_33));
          }
        }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_unify", (MR_String) "predicate \140check_hlds.modecheck_unify.create_var_var_unification\'/5", (MR_String) "unexpected GoalExpr0");
          return;
        }
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__modecheck_unify__Goal_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modecheck_unify__GoalExpr_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__modecheck_unify__GoalInfo_12));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_8_p_0_1(
  MR_Box check_hlds__modecheck_unify__closure_arg,
  MR_Box check_hlds__modecheck_unify__wrapper_arg_1)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded;
    MR_Box check_hlds__modecheck_unify__closure = check_hlds__modecheck_unify__closure_arg;

    {
      check_hlds__modecheck_unify__succeeded = check_hlds__inst_util__var_inst_contains_any_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__modecheck_unify__wrapper_arg_1));
    }
    return check_hlds__modecheck_unify__succeeded;
  }
}

void MR_CALL 
check_hlds__modecheck_unify__modecheck_unification_8_p_0(
  MR_Word check_hlds__modecheck_unify__LHSVar_9,
  MR_Word check_hlds__modecheck_unify__RHS_10,
  MR_Word check_hlds__modecheck_unify__Unification0_11,
  MR_Word check_hlds__modecheck_unify__UnifyContext_12,
  MR_Word check_hlds__modecheck_unify__UnifyGoalInfo0_13,
  MR_Word * check_hlds__modecheck_unify__Goal_14,
  MR_Word check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_35,
  MR_Word * check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_36)
{
  {
    MR_bool check_hlds__modecheck_unify__succeeded;

    switch (MR_tag((MR_Word) check_hlds__modecheck_unify__RHS_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__modecheck_unify__RHSVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__RHS_10, (MR_Integer) 0)));

          {
            check_hlds__modecheck_unify__modecheck_unification_var_8_p_0(check_hlds__modecheck_unify__LHSVar_9, check_hlds__modecheck_unify__RHSVar_16, check_hlds__modecheck_unify__Unification0_11, check_hlds__modecheck_unify__UnifyContext_12, check_hlds__modecheck_unify__UnifyGoalInfo0_13, check_hlds__modecheck_unify__Goal_14, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_35, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_36);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__modecheck_unify__ConsId_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__RHS_10, (MR_Integer) 0)));
          MR_Word check_hlds__modecheck_unify__IsExistConstr_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__RHS_10, (MR_Integer) 1)));
          MR_Word check_hlds__modecheck_unify__RHSVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__RHS_10, (MR_Integer) 2)));

          {
            check_hlds__modecheck_unify__modecheck_unification_functor_10_p_0(check_hlds__modecheck_unify__LHSVar_9, check_hlds__modecheck_unify__ConsId_17, check_hlds__modecheck_unify__IsExistConstr_18, check_hlds__modecheck_unify__RHSVars_19, check_hlds__modecheck_unify__Unification0_11, check_hlds__modecheck_unify__UnifyContext_12, check_hlds__modecheck_unify__UnifyGoalInfo0_13, check_hlds__modecheck_unify__Goal_14, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_35, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_36);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__modecheck_unify__Purity_20 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS_10, (MR_Integer) 0)))) & (MR_Integer) 3);
          MR_Word check_hlds__modecheck_unify__HOGroundness_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS_10, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Word check_hlds__modecheck_unify__LambdaNonLocals_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS_10, (MR_Integer) 2)));
          MR_Word check_hlds__modecheck_unify___PredOrFunc_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS_10, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
          MR_Word check_hlds__modecheck_unify___LambdaQuantVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS_10, (MR_Integer) 3)));
          MR_Word check_hlds__modecheck_unify___ArgModes_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS_10, (MR_Integer) 4)));
          MR_Word check_hlds__modecheck_unify___Detism_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS_10, (MR_Integer) 5)));
          MR_Word check_hlds__modecheck_unify___LambdaGoal_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_unify__RHS_10, (MR_Integer) 6)));
          MR_Word check_hlds__modecheck_unify__AnyVars_31;
          MR_Word check_hlds__modecheck_unify__TypeInfo_47_47;
          MR_Word check_hlds__modecheck_unify__ModuleInfo_29;
          MR_Word check_hlds__modecheck_unify__InstMap_30;
          MR_Word check_hlds__modecheck_unify__V_37_37;
          MR_Word check_hlds__modecheck_unify__V_32_32;
          MR_Word check_hlds__modecheck_unify__V_33_33;

          check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__Purity_20 == (MR_Integer) 2);
          check_hlds__modecheck_unify__succeeded = !(check_hlds__modecheck_unify__succeeded);
          if (check_hlds__modecheck_unify__succeeded)
            {
              check_hlds__modecheck_unify__succeeded = (check_hlds__modecheck_unify__HOGroundness_21 == (MR_Integer) 0);
              if (check_hlds__modecheck_unify__succeeded)
                {
                  {
                    check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_35, &check_hlds__modecheck_unify__ModuleInfo_29);
                  }
                  {
                    check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_35, &check_hlds__modecheck_unify__InstMap_30);
                  }
                  check_hlds__modecheck_unify__TypeInfo_47_47 = (MR_Word) &check_hlds__modecheck_unify_scalar_common_1[0];
                  {
                    check_hlds__modecheck_unify__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_37_37, 0) = ((MR_Box) (&check_hlds__modecheck_unify_scalar_common_3[0]));
                    MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_37_37, 1) = ((MR_Box) (check_hlds__modecheck_unify__modecheck_unification_8_p_0_1));
                    MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_37_37, 3) = ((MR_Box) (check_hlds__modecheck_unify__ModuleInfo_29));
                    MR_hl_field(MR_mktag(0), check_hlds__modecheck_unify__V_37_37, 4) = ((MR_Box) (check_hlds__modecheck_unify__InstMap_30));
                  }
                  {
                    check_hlds__modecheck_unify__AnyVars_31 = mercury__list__filter_2_f_0(check_hlds__modecheck_unify__TypeInfo_47_47, check_hlds__modecheck_unify__V_37_37, check_hlds__modecheck_unify__LambdaNonLocals_24);
                  }
                  check_hlds__modecheck_unify__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_unify__AnyVars_31)) == (MR_mktag((MR_Integer) 1)));
                  if (check_hlds__modecheck_unify__succeeded)
                    {
                      check_hlds__modecheck_unify__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__AnyVars_31, (MR_Integer) 0)));
                      check_hlds__modecheck_unify__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_unify__AnyVars_31, (MR_Integer) 1)));
                    }
                }
            }
          if (check_hlds__modecheck_unify__succeeded)
            {
              MR_Word check_hlds__modecheck_unify__WaitingVars_34;
              MR_Word check_hlds__modecheck_unify__V_38_38;

              {
                parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__modecheck_unify__WaitingVars_34);
              }
              {
                check_hlds__modecheck_unify__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                MR_hl_field(MR_mktag(3), check_hlds__modecheck_unify__V_38_38, 1) = ((MR_Box) (check_hlds__modecheck_unify__AnyVars_31));
              }
              {
                check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_unify__WaitingVars_34, check_hlds__modecheck_unify__V_38_38, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_35, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_36);
              }
              *check_hlds__modecheck_unify__Goal_14 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__modecheck_unify_scalar_common_4[0]);
            }
          else
            {
              {
                check_hlds__modecheck_unify__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__modecheck_unify__UnifyGoalInfo0_13, (MR_Integer) 20);
              }
              if (check_hlds__modecheck_unify__succeeded)
                {
                  check_hlds__modecheck_unify__modecheck_unification_rhs_undetermined_mode_lambda_8_p_0(check_hlds__modecheck_unify__LHSVar_9, check_hlds__modecheck_unify__RHS_10, check_hlds__modecheck_unify__Unification0_11, check_hlds__modecheck_unify__UnifyContext_12, check_hlds__modecheck_unify__UnifyGoalInfo0_13, check_hlds__modecheck_unify__Goal_14, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_35, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_36);
                }
              else
                {
                  check_hlds__modecheck_unify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_117_110_105_102_105_99_97_116_105_111_110_95_114_104_115_95_108_97_109_98_100_97_95_95_91_53_93_95_48_8_p_0(check_hlds__modecheck_unify__LHSVar_9, check_hlds__modecheck_unify__RHS_10, check_hlds__modecheck_unify__Unification0_11, check_hlds__modecheck_unify__UnifyContext_12, check_hlds__modecheck_unify__Goal_14, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_0_35, check_hlds__modecheck_unify__STATE_VARIABLE_ModeInfo_36);
                }
            }
        }
        break;
    }
  }
}

void mercury__check_hlds__modecheck_unify__init(void)
{
}

void mercury__check_hlds__modecheck_unify__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__modecheck_unify__check_hlds__modecheck_unify__type_ctor_info_match_mode_result_0);
	MR_register_type_ctor_info(&check_hlds__modecheck_unify__check_hlds__modecheck_unify__type_ctor_info_match_modes_result_0);
}

void mercury__check_hlds__modecheck_unify__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__modecheck_unify__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module check_hlds.modecheck_unify. */
