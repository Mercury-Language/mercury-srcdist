/*
** Automatically generated from `simplify_goal_call.m'
** by the Mercury compiler,
** version rotd-2020-01-13
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


// :- module check_hlds.simplify.simplify_goal_call.
// :- implementation.

/*
INIT mercury__check_hlds__simplify__simplify_goal_call__init
ENDINIT
*/

#include "check_hlds.simplify.simplify_goal_call.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.simplify.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.int_emu.mih"
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
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
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
#include "transform_hlds.const_prop.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.common.mih"
#include "check_hlds.simplify.simplify_info.mih"
#include "check_hlds.simplify.simplify_tasks.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_call__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_call__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_functor_desc_maybe_all_inputs_eqv_0_0;

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_functor_desc_maybe_all_inputs_eqv_0_1;

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_value_ordered_maybe_all_inputs_eqv_0[2];

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_name_ordered_maybe_all_inputs_eqv_0[2];

static const MR_Integer check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__functor_number_map_maybe_all_inputs_eqv_0[2];

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_functor_desc_maybe_all_inputs_eqv_or_svar_0_0;

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_functor_desc_maybe_all_inputs_eqv_or_svar_0_1;

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_value_ordered_maybe_all_inputs_eqv_or_svar_0[2];

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_name_ordered_maybe_all_inputs_eqv_or_svar_0[2];

static const MR_Integer check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__functor_number_map_maybe_all_inputs_eqv_or_svar_0[2];

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__IntroducedFrom__pred__maybe_generate_warning_for_implicit_stream_predicate__355__1_2_p_0(
  MR_Word IOStateType_16,
  MR_Word HeadVar__2_132);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call____Compare____maybe_all_inputs_eqv_or_svar_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call____Unify____maybe_all_inputs_eqv_or_svar_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call____Compare____maybe_all_inputs_eqv_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call____Unify____maybe_all_inputs_eqv_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
check_hlds__simplify__simplify_goal_call__wrap_sym_name_and_arity_1_f_0(
  MR_Word SymNameAndArity_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__one_extra_stream_arg_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Integer NumExtraArgs_7,
  MR_Word BaseExtraArgTypes_8,
  MR_Word BaseUserArgTypes_9,
  MR_Word PredId_10);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__make_arg_always_boxed_2_p_0(
  MR_Word STATE_VARIABLE_Arg_0_4,
  MR_Word * STATE_VARIABLE_Arg_5);

static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_improve_library_call_10_p_0(
  MR_Word InstMap0_11,
  MR_String ModuleName_12,
  MR_String PredName_13,
  MR_Integer ModeNum_14,
  MR_Word Args_15,
  MR_Word * ImprovedGoalExpr_16,
  MR_Word GoalInfo0_17,
  MR_Word * ImprovedGoalInfo_18,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_11_p_0(
  MR_Word IntType_12,
  MR_Word InstMap0_13,
  MR_String ModuleName_14,
  MR_String PredName_15,
  MR_Word Args_17,
  MR_Word * ImprovedGoalExpr_18,
  MR_Word STATE_VARIABLE_GoalInfo_0_35,
  MR_Word * STATE_VARIABLE_GoalInfo_36,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38);

static MR_Integer MR_CALL 
check_hlds__simplify__simplify_goal_call__int_type_target_bits_2_f_0(
  MR_Word Globals_4,
  MR_Word IntType_5);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__is_non_zero_const_2_p_0(
  MR_Word IntType_3,
  MR_Word ConsId_4);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_9_p_0(
  MR_String ModuleName_10,
  MR_String Op_11,
  MR_Word X_12,
  MR_Integer IntConst_13,
  MR_Word Y_14,
  MR_Word * GoalExpr_15,
  MR_Word OrigGoalInfo_16,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(
  MR_Word Info_9,
  MR_String ModuleName_10,
  MR_String Op_11,
  MR_Word IsBuiltin_12,
  MR_Word X_13,
  MR_Word Y_14,
  MR_Word Z_15,
  MR_Word * GoalExpr_16);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_95_91_49_93_95_48_7_p_0(
  MR_Word Args_9,
  MR_Word Context_10,
  MR_Word * GoalExpr_11,
  MR_Word * GoalInfo_12,
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(
  MR_String PredName_4,
  MR_Word Args_5,
  MR_Word * ImprovedGoalExpr_6);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_improve_builtin_compare_int_uint_8_p_0(
  MR_Word Info_9,
  MR_String TypeName_10,
  MR_Word R_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_Word Context_14,
  MR_Word * GoalExpr_15,
  MR_Word * GoalInfo_16);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_make_cmp_goal_expr_8_p_0(
  MR_Word Info_9,
  MR_Word ModuleSymName_10,
  MR_String Op_11,
  MR_Word IsBuiltin_12,
  MR_Word X_13,
  MR_Word Y_14,
  MR_Word Context_15,
  MR_Word * Goal_16);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_build_compare_ite_8_p_0(
  MR_Word CmpLtGoal_9,
  MR_Word CmpGtGoal_10,
  MR_Word R_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_Word Context_14,
  MR_Word * GoalExpr_15,
  MR_Word * GoalInfo_16);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(
  MR_Word TI_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_String Inequality_14,
  MR_Word Invert_15,
  MR_Word GoalInfo_16,
  MR_Word * ImprovedGoalExpr_17,
  MR_Word InstMap0_18,
  MR_Word STATE_VARIABLE_Info_0_53,
  MR_Word * STATE_VARIABLE_Info_54);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_useless_comparison_6_p_0(
  MR_Word PredInfo_7,
  MR_Word InstMap_8,
  MR_Word Args_9,
  MR_Word GoalInfo_10,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__is_useless_unsigned_comparison_5_p_0(
  MR_String ModuleName_6,
  MR_String PredName_7,
  MR_Word ArgA_8,
  MR_Word ArgB_9,
  MR_Word * Pieces_10);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__arg_is_unsigned_zero_3_p_0(
  MR_String ModuleName_4,
  MR_Word Arg_5,
  MR_String * ZeroStr_6);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0(
  MR_Word PredId_12,
  MR_Integer ProcId_13,
  MR_Word ArgVars_14,
  MR_Word IsBuiltin_15,
  MR_Word PredInfo_16,
  MR_Word ProcInfo_17,
  MR_Word GoalInfo_18,
  MR_Word NestedContext_19,
  MR_Word Common_20,
  MR_Word STATE_VARIABLE_Info_0_46,
  MR_Word * STATE_VARIABLE_Info_47);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call____Unify____parse_tree__prog_data_pragma__eval_method_0_1(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__input_args_are_suspicious_15_p_0(
  MR_Word ModuleInfo_1,
  MR_Word CommonInfo_2,
  MR_Word VarSet_3,
  MR_Word VarNameRemap_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_AllInputsEqv_0_8,
  MR_Word * STATE_VARIABLE_AllInputsEqv_9,
  MR_Word STATE_VARIABLE_AllInputsEqvOrSvar_0_10,
  MR_Word * STATE_VARIABLE_AllInputsEqvOrSvar_11,
  MR_Word STATE_VARIABLE_HeadBaseNames_0_12,
  MR_Word * STATE_VARIABLE_HeadBaseNames_13,
  MR_Word STATE_VARIABLE_ArgBaseNames_0_14,
  MR_Word * STATE_VARIABLE_ArgBaseNames_15);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__delete_any_numeric_suffix_2_p_0(
  MR_String Str_3,
  MR_String * StrNoSuffix_4);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__skip_trailing_digits_3_p_0(
  MR_String Str_4,
  MR_Integer Index0_5,
  MR_Integer * Index_6);

static MR_Word MR_CALL 
check_hlds__simplify__simplify_goal_call__shut_up_suspicious_recursion_msg_0_f_0(void);

static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_call_to_obsolete_predicate_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_call_to_obsolete_predicate_7_p_0(
  MR_Word PredId_8,
  MR_Integer ProcId_9,
  MR_Word PredInfo_10,
  MR_Word ProcInfo_11,
  MR_Word GoalInfo_12,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call____Unify____maybe_all_inputs_eqv_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call____Compare____maybe_all_inputs_eqv_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call____Unify____maybe_all_inputs_eqv_or_svar_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call____Compare____maybe_all_inputs_eqv_or_svar_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_1[78][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_2[8][3];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_3[4][5];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_4[1][8];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_5[2][1];


/* sealed */ struct check_hlds__simplify__simplify_goal_call__vector_common_type_6_0_s {
  const MR_String check_hlds__simplify__simplify_goal_call__vector_common_type_6_0__vct_6_f_0;
  const MR_String check_hlds__simplify__simplify_goal_call__vector_common_type_6_0__vct_6_f_1;
};

static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_6_0_s check_hlds__simplify__simplify_goal_call_vector_common_6[38];

/* sealed */ struct check_hlds__simplify__simplify_goal_call__vector_common_type_7_0_s {
  const MR_String check_hlds__simplify__simplify_goal_call__vector_common_type_7_0__vct_7_f_0;
  const MR_Integer check_hlds__simplify__simplify_goal_call__vector_common_type_7_0__vct_7_f_1;
};

static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_7_0_s check_hlds__simplify__simplify_goal_call_vector_common_7[18];

/* sealed */ struct check_hlds__simplify__simplify_goal_call__vector_common_type_8_0_s {
  const MR_String check_hlds__simplify__simplify_goal_call__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_8_0_s check_hlds__simplify__simplify_goal_call_vector_common_8[96];



static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_1[78][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "explicitly specifying a stream."))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[1])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "could have an additional argument"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "to later I/O operations."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[1])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "stream it specifies"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[1])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "will lead to infinite recursion."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[1])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "leading to infinite recursion."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[1])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with exactly the same input arguments,"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the procedure will call itself"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "If this recursive call is executed,"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "use state variable notation."))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[1])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "between the clause head and the call"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "all input argument positions that differ"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is suspicious, because"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "whose names start with"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[31]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is suspicious, because variables"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[32])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the call than in the clause head."))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[1])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "occupy different argument positions"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[36])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "scope."))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[1])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "disable_warning [suspicious_recursion] (...)"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[40])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "wrapping the recursive call inside a"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[42])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "This warning can be disabled by"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[44])))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The call to"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[47]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "could be made redundant by explicitly passing"))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the"))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: call to obsolete"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[51]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 53 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The suggested replacement is"))
  },
  /* row 54 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The possible suggested replacements are"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[54]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 56 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[46])))
  },
  /* row 57 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: recursive call to"))
  },
  /* row 58 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[22])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_1[58]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 60 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "cannot fail."))
  },
  /* row 61 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "All"))
  },
  /* row 62 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "values are"))
  },
  /* row 63 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ">="))
  },
  /* row 64 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[64]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 66 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "cannot succeed."))
  },
  /* row 67 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "> no"))
  },
  /* row 68 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "values."))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[68]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 70 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "=<"))
  },
  /* row 71 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "all"))
  },
  /* row 72 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "There are no"))
  },
  /* row 73 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "values <"))
  },
  /* row 74 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: call to"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[74]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_5[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 77 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_2[8][3] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 27U << 1)) | (MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    (MR_Box) (((((MR_Unsigned) 47U << 1)) | (MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_3[1])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_call_to_obsolete_predicate_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_3[2])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_3[3])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_3[3])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_3[2])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_3[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_4[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_5[2][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "simplify_inline_builtin_inequality"))
  },
};


static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_6_0_s check_hlds__simplify__simplify_goal_call_vector_common_6[38] = {
  /* row 0 */
  {
    (MR_String) "see",
    (MR_String) "input"
  },
  /* row 1 */
  {
    (MR_String) "seen",
    (MR_String) "input"
  },
  /* row 2 */
  {
    (MR_String) "set_input_stream",
    (MR_String) "input"
  },
  /* row 3 */
  {
    (MR_String) "set_output_stream",
    (MR_String) "output"
  },
  /* row 4 */
  {
    (MR_String) "tell",
    (MR_String) "output"
  },
  /* row 5 */
  {
    (MR_String) "told",
    (MR_String) "output"
  },
  /* row 6 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 7 */
  {
    (MR_String) "builtin_compare_uint8",
    (MR_String) "uint8"
  },
  /* row 8 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 9 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 10 */
  {
    (MR_String) "builtin_compare_int",
    (MR_String) "int"
  },
  /* row 11 */
  {
    (MR_String) "builtin_compare_uint16",
    (MR_String) "uint16"
  },
  /* row 12 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 13 */
  {
    (MR_String) "builtin_compare_uint32",
    (MR_String) "uint32"
  },
  /* row 14 */
  {
    (MR_String) "builtin_compare_uint",
    (MR_String) "uint"
  },
  /* row 15 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 16 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 17 */
  {
    (MR_String) "builtin_compare_int8",
    (MR_String) "int8"
  },
  /* row 18 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 19 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 20 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 21 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 22 */
  {
    (MR_String) "builtin_compare_uint64",
    (MR_String) "uint64"
  },
  /* row 23 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 24 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 25 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 26 */
  {
    (MR_String) "builtin_compare_int64",
    (MR_String) "int64"
  },
  /* row 27 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 28 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 29 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 30 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 31 */
  {
    (MR_String) "builtin_compare_int32",
    (MR_String) "int32"
  },
  /* row 32 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 33 */
  {
    (MR_String) "builtin_compare_int16",
    (MR_String) "int16"
  },
  /* row 34 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 35 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 36 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 37 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
};

static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_7_0_s check_hlds__simplify__simplify_goal_call_vector_common_7[18] = {
  /* row 0 */
  {
    (MR_String) "uint",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "uint16",
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_String) "uint32",
    (MR_Integer) 2
  },
  /* row 3 */
  {
    (MR_String) "uint64",
    (MR_Integer) 3
  },
  /* row 4 */
  {
    (MR_String) "uint8",
    (MR_Integer) 4
  },
  /* row 5 */
  {
    (MR_String) "<",
    (MR_Integer) 0
  },
  /* row 6 */
  {
    (MR_String) "=<",
    (MR_Integer) 1
  },
  /* row 7 */
  {
    (MR_String) ">",
    (MR_Integer) 2
  },
  /* row 8 */
  {
    (MR_String) ">=",
    (MR_Integer) 3
  },
  /* row 9 */
  {
    (MR_String) "<",
    (MR_Integer) 0
  },
  /* row 10 */
  {
    (MR_String) "=<",
    (MR_Integer) 1
  },
  /* row 11 */
  {
    (MR_String) ">",
    (MR_Integer) 0
  },
  /* row 12 */
  {
    (MR_String) ">=",
    (MR_Integer) 1
  },
  /* row 13 */
  {
    (MR_String) "\100<",
    (MR_Integer) 0
  },
  /* row 14 */
  {
    (MR_String) "\100=<",
    (MR_Integer) 1
  },
  /* row 15 */
  {
    (MR_String) "\100>",
    (MR_Integer) 2
  },
  /* row 16 */
  {
    (MR_String) "\100>=",
    (MR_Integer) 3
  },
  /* row 17 */
  {
    (MR_String) "compare",
    (MR_Integer) 4
  },
};

static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_8_0_s check_hlds__simplify__simplify_goal_call_vector_common_8[96] = {
  /* row 0 */   {     NULL },
  /* row 1 */   {     (MR_String) "times_bits_per_int" },
  /* row 2 */   {     NULL },
  /* row 3 */   {     NULL },
  /* row 4 */   {     NULL },
  /* row 5 */   {     NULL },
  /* row 6 */   {     NULL },
  /* row 7 */   {     NULL },
  /* row 8 */   {     NULL },
  /* row 9 */   {     NULL },
  /* row 10 */   {     NULL },
  /* row 11 */   {     (MR_String) "=<" },
  /* row 12 */   {     (MR_String) "//" },
  /* row 13 */   {     NULL },
  /* row 14 */   {     (MR_String) "/" },
  /* row 15 */   {     NULL },
  /* row 16 */   {     NULL },
  /* row 17 */   {     NULL },
  /* row 18 */   {     NULL },
  /* row 19 */   {     NULL },
  /* row 20 */   {     NULL },
  /* row 21 */   {     (MR_String) "rem_bits_per_int" },
  /* row 22 */   {     NULL },
  /* row 23 */   {     (MR_String) "rem" },
  /* row 24 */   {     NULL },
  /* row 25 */   {     (MR_String) ">=" },
  /* row 26 */   {     (MR_String) "<<" },
  /* row 27 */   {     (MR_String) "quot_bits_per_int" },
  /* row 28 */   {     NULL },
  /* row 29 */   {     (MR_String) "<" },
  /* row 30 */   {     (MR_String) ">>" },
  /* row 31 */   {     (MR_String) ">" },
  /* row 32 */   {     NULL },
  /* row 33 */   {     NULL },
  /* row 34 */   {     NULL },
  /* row 35 */   {     (MR_String) "uint32" },
  /* row 36 */   {     NULL },
  /* row 37 */   {     NULL },
  /* row 38 */   {     NULL },
  /* row 39 */   {     (MR_String) "int16" },
  /* row 40 */   {     (MR_String) "int" },
  /* row 41 */   {     NULL },
  /* row 42 */   {     NULL },
  /* row 43 */   {     NULL },
  /* row 44 */   {     NULL },
  /* row 45 */   {     (MR_String) "uint8" },
  /* row 46 */   {     (MR_String) "private_builtin" },
  /* row 47 */   {     NULL },
  /* row 48 */   {     (MR_String) "builtin" },
  /* row 49 */   {     NULL },
  /* row 50 */   {     NULL },
  /* row 51 */   {     NULL },
  /* row 52 */   {     (MR_String) "uint" },
  /* row 53 */   {     NULL },
  /* row 54 */   {     NULL },
  /* row 55 */   {     (MR_String) "int8" },
  /* row 56 */   {     NULL },
  /* row 57 */   {     NULL },
  /* row 58 */   {     NULL },
  /* row 59 */   {     NULL },
  /* row 60 */   {     (MR_String) "uint64" },
  /* row 61 */   {     NULL },
  /* row 62 */   {     NULL },
  /* row 63 */   {     NULL },
  /* row 64 */   {     NULL },
  /* row 65 */   {     (MR_String) "uint16" },
  /* row 66 */   {     NULL },
  /* row 67 */   {     NULL },
  /* row 68 */   {     NULL },
  /* row 69 */   {     (MR_String) "int32" },
  /* row 70 */   {     NULL },
  /* row 71 */   {     NULL },
  /* row 72 */   {     NULL },
  /* row 73 */   {     NULL },
  /* row 74 */   {     NULL },
  /* row 75 */   {     NULL },
  /* row 76 */   {     NULL },
  /* row 77 */   {     NULL },
  /* row 78 */   {     NULL },
  /* row 79 */   {     NULL },
  /* row 80 */   {     (MR_String) "int64" },
  /* row 81 */   {     NULL },
  /* row 82 */   {     NULL },
  /* row 83 */   {     NULL },
  /* row 84 */   {     NULL },
  /* row 85 */   {     NULL },
  /* row 86 */   {     NULL },
  /* row 87 */   {     NULL },
  /* row 88 */   {     NULL },
  /* row 89 */   {     NULL },
  /* row 90 */   {     NULL },
  /* row 91 */   {     NULL },
  /* row 92 */   {     NULL },
  /* row 93 */   {     NULL },
  /* row 94 */   {     NULL },
  /* row 95 */   {     NULL },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_call__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_call__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_functor_desc_maybe_all_inputs_eqv_0_0 = {
  (MR_String) "not_all_inputs_eqv",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_functor_desc_maybe_all_inputs_eqv_0_1 = {
  (MR_String) "all_inputs_eqv",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_value_ordered_maybe_all_inputs_eqv_0[2] = {
  &check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_functor_desc_maybe_all_inputs_eqv_0_0,
  &check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_functor_desc_maybe_all_inputs_eqv_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_name_ordered_maybe_all_inputs_eqv_0[2] = {
  &check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_functor_desc_maybe_all_inputs_eqv_0_1,
  &check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_functor_desc_maybe_all_inputs_eqv_0_0
};

static const MR_Integer check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__functor_number_map_maybe_all_inputs_eqv_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__type_ctor_info_maybe_all_inputs_eqv_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__simplify__simplify_goal_call____Unify____maybe_all_inputs_eqv_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_goal_call____Compare____maybe_all_inputs_eqv_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_goal_call",
  (MR_String) "maybe_all_inputs_eqv",
  {     check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_name_ordered_maybe_all_inputs_eqv_0 },
  {     check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_value_ordered_maybe_all_inputs_eqv_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__functor_number_map_maybe_all_inputs_eqv_0
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_functor_desc_maybe_all_inputs_eqv_or_svar_0_0 = {
  (MR_String) "not_all_inputs_eqv_or_svar",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_functor_desc_maybe_all_inputs_eqv_or_svar_0_1 = {
  (MR_String) "all_inputs_eqv_or_svar",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_value_ordered_maybe_all_inputs_eqv_or_svar_0[2] = {
  &check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_functor_desc_maybe_all_inputs_eqv_or_svar_0_0,
  &check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_functor_desc_maybe_all_inputs_eqv_or_svar_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_name_ordered_maybe_all_inputs_eqv_or_svar_0[2] = {
  &check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_functor_desc_maybe_all_inputs_eqv_or_svar_0_1,
  &check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_functor_desc_maybe_all_inputs_eqv_or_svar_0_0
};

static const MR_Integer check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__functor_number_map_maybe_all_inputs_eqv_or_svar_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__type_ctor_info_maybe_all_inputs_eqv_or_svar_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__simplify__simplify_goal_call____Unify____maybe_all_inputs_eqv_or_svar_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_goal_call____Compare____maybe_all_inputs_eqv_or_svar_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_goal_call",
  (MR_String) "maybe_all_inputs_eqv_or_svar",
  {     check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_name_ordered_maybe_all_inputs_eqv_or_svar_0 },
  {     check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_value_ordered_maybe_all_inputs_eqv_or_svar_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__functor_number_map_maybe_all_inputs_eqv_or_svar_0
};

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__IntroducedFrom__pred__maybe_generate_warning_for_implicit_stream_predicate__355__1_2_p_0(
  MR_Word IOStateType_16,
  MR_Word HeadVar__2_132)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data____Unify____mer_type_0_0(IOStateType_16, HeadVar__2_132);
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call____Compare____maybe_all_inputs_eqv_or_svar_0_0(
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
check_hlds__simplify__simplify_goal_call____Unify____maybe_all_inputs_eqv_or_svar_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call____Compare____maybe_all_inputs_eqv_0_0(
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
check_hlds__simplify__simplify_goal_call____Unify____maybe_all_inputs_eqv_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static MR_Word MR_CALL 
check_hlds__simplify__simplify_goal_call__wrap_sym_name_and_arity_1_f_0(
  MR_Word SymNameAndArity_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (SymNameAndArity_3));
    }
    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__one_extra_stream_arg_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Integer NumExtraArgs_7,
  MR_Word BaseExtraArgTypes_8,
  MR_Word BaseUserArgTypes_9,
  MR_Word PredId_10)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_25_25;
    MR_Word TypeInfo_26_26;
    MR_Word PredInfo_11;
    MR_Word ArgTypes_12;
    MR_Word ExtraArgTypes_13;
    MR_Word UserArgTypes_14;
    MR_Word HeadUserArgType_15;
    MR_Word TailUserArgTypes_16;
    MR_Word HeadUserArgTypeSymName_17;
    MR_String HeadUserArgTypeName_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_String Var_22;
    MR_Word Var_24;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_6, PredId_10, &PredInfo_11);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_11, &ArgTypes_12);
    succeeded = mercury__list__split_list_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), NumExtraArgs_7, ArgTypes_12, &ExtraArgTypes_13, &UserArgTypes_14);
    if (succeeded)
    {
      TypeInfo_25_25 = (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[10]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ExtraArgTypes_13)), ((MR_Box) (BaseExtraArgTypes_8)));
      if (succeeded)
      {
        succeeded = (UserArgTypes_14 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          HeadUserArgType_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UserArgTypes_14, (MR_Integer) 0))));
          TailUserArgTypes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UserArgTypes_14, (MR_Integer) 1))));
          TypeInfo_26_26 = (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[10]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (TailUserArgTypes_16)), ((MR_Box) (BaseUserArgTypes_9)));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) HeadUserArgType_15)) == (MR_Integer) 1);
            if (succeeded)
            {
              HeadUserArgTypeSymName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadUserArgType_15, (MR_Integer) 0))));
              Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadUserArgType_15, (MR_Integer) 1))));
              Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadUserArgType_15, (MR_Integer) 2))));
              succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) HeadUserArgTypeSymName_17)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadUserArgTypeSymName_17, (MR_Integer) 0))));
                    HeadUserArgTypeName_18 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadUserArgTypeSymName_17, (MR_Integer) 1))));
                    Var_24 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
                    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_21, Var_24);
                    if (succeeded)
                    {
                      Var_22 = (MR_String) "stream";
                      succeeded = mercury__string__suffix_2_p_0(HeadUserArgTypeName_18, Var_22);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__make_arg_always_boxed_2_p_0(
  MR_Word STATE_VARIABLE_Arg_0_4,
  MR_Word * STATE_VARIABLE_Arg_5)
{
  {
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Arg_0_4, (MR_Integer) 0))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Arg_0_4, (MR_Integer) 1))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Arg_0_4, (MR_Integer) 2))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Arg_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_goal_foreign_proc_10_p_0(
  MR_Word GoalExpr0_11,
  MR_Word * GoalExpr_12,
  MR_Word STATE_VARIABLE_GoalInfo_0_42,
  MR_Word * STATE_VARIABLE_GoalInfo_43,
  MR_Word _NestedContext0_14,
  MR_Word InstMap0_15,
  MR_Word Common0_16,
  MR_Word * Common_17,
  MR_Word STATE_VARIABLE_Info_0_44,
  MR_Word * STATE_VARIABLE_Info_45)
{
  check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0(GoalExpr0_11, GoalExpr_12, STATE_VARIABLE_GoalInfo_0_42, STATE_VARIABLE_GoalInfo_43, InstMap0_15, Common0_16, Common_17, STATE_VARIABLE_Info_0_44, STATE_VARIABLE_Info_45);
}

static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_2;

    conv3_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Arg_5;

    check_hlds__simplify__simplify_goal_call__make_arg_always_boxed_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_STATE_VARIABLE_Arg_5);
    *wrapper_arg_2 = ((MR_Box) (conv2_STATE_VARIABLE_Arg_5));
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Arg_5;

    check_hlds__simplify__simplify_goal_call__make_arg_always_boxed_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_STATE_VARIABLE_Arg_5);
    *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_Arg_5));
  }
}

static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

void MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0(
  MR_Word GoalExpr0_11,
  MR_Word * GoalExpr_12,
  MR_Word STATE_VARIABLE_GoalInfo_0_42,
  MR_Word * STATE_VARIABLE_GoalInfo_43,
  MR_Word InstMap0_15,
  MR_Word Common0_16,
  MR_Word * Common_17,
  MR_Word STATE_VARIABLE_Info_0_44,
  MR_Word * STATE_VARIABLE_Info_45)
{
  {
    MR_bool succeeded;
    MR_Word Attributes_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1))));
    MR_Word PredId_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 2))));
    MR_Integer ProcId_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 3))));
    MR_Word Args0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 4))));
    MR_Word ExtraArgs0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 5))));
    MR_Word MaybeTraceRuntimeCond_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 6))));
    MR_Word Impl_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 7))));
    MR_Word ImprovedGoalExpr_33;
    MR_Word STATE_VARIABLE_GoalInfo_47_47;
    MR_Word STATE_VARIABLE_Info_48_48;
    MR_Word TypeCtorInfo_57_57;
    MR_Word TypeInfo_58_58;
    MR_Word ModuleInfo_26;
    MR_Word PredInfo_27;
    MR_Word ModuleSymName_28;
    MR_String ModuleName_29;
    MR_String PredName_30;
    MR_Integer ModeNum_31;
    MR_Word ArgVars_32;
    MR_Word Var_46;

    succeeded = check_hlds__simplify__simplify_info__simplify_do_const_prop_1_p_0(STATE_VARIABLE_Info_0_44);
    if (succeeded)
    {
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_44, &ModuleInfo_26);
      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_26, PredId_20, &PredInfo_27);
      ModuleSymName_28 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_27);
      succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(ModuleSymName_28, &ModuleName_29);
      if (succeeded)
      {
        succeeded = (ExtraArgs0_23 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          PredName_30 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_27);
          hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_21, &ModeNum_31);
          TypeCtorInfo_57_57 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0);
          TypeInfo_58_58 = (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[0]);
          Var_46 = (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_2[4]);
          ArgVars_32 = mercury__list__map_2_f_0(TypeCtorInfo_57_57, TypeInfo_58_58, Var_46, Args0_22);
          succeeded = check_hlds__simplify__simplify_goal_call__simplify_improve_library_call_10_p_0(InstMap0_15, ModuleName_29, PredName_30, ModeNum_31, ArgVars_32, &ImprovedGoalExpr_33, STATE_VARIABLE_GoalInfo_0_42, &STATE_VARIABLE_GoalInfo_47_47, STATE_VARIABLE_Info_0_44, &STATE_VARIABLE_Info_48_48);
        }
      }
    }
    if (succeeded)
    {
      *STATE_VARIABLE_Info_45 = STATE_VARIABLE_Info_48_48;
      *STATE_VARIABLE_GoalInfo_43 = STATE_VARIABLE_GoalInfo_47_47;
      *GoalExpr_12 = ImprovedGoalExpr_33;
      *Common_17 = Common0_16;
    }
    else
    {
      MR_Word BoxPolicy_34;
      MR_Word Args_35;
      MR_Word ExtraArgs_36;
      MR_Word GoalExpr1_37;
      MR_Word OptDuplicateCalls_38;

      BoxPolicy_34 = parse_tree__prog_data_foreign__get_box_policy_1_f_0(Attributes_19);
      switch (BoxPolicy_34) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_2[5]), Args0_22, &Args_35);
            mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_2[6]), ExtraArgs0_23, &ExtraArgs_36);
            {
              GoalExpr1_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr1_37, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), GoalExpr1_37, 1) = ((MR_Box) (Attributes_19));
              MR_hl_field(MR_mktag(3), GoalExpr1_37, 2) = ((MR_Box) (PredId_20));
              MR_hl_field(MR_mktag(3), GoalExpr1_37, 3) = ((MR_Box) (ProcId_21));
              MR_hl_field(MR_mktag(3), GoalExpr1_37, 4) = ((MR_Box) (Args_35));
              MR_hl_field(MR_mktag(3), GoalExpr1_37, 5) = ((MR_Box) (ExtraArgs_36));
              MR_hl_field(MR_mktag(3), GoalExpr1_37, 6) = ((MR_Box) (MaybeTraceRuntimeCond_24));
              MR_hl_field(MR_mktag(3), GoalExpr1_37, 7) = ((MR_Box) (Impl_25));
            }
          }
          break;
        case (MR_Integer) 0:
          {
            Args_35 = Args0_22;
            ExtraArgs_36 = ExtraArgs0_23;
            GoalExpr1_37 = GoalExpr0_11;
          }
          break;
      }
      succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(STATE_VARIABLE_Info_0_44, &OptDuplicateCalls_38);
      if (succeeded)
        succeeded = (ExtraArgs_36 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        MR_Word Purity_39;
        MR_Word MaybeAssignsGoalExpr_40;
        MR_Word ArgVars_54;
        MR_Word AssignsGoalExpr_41;

        ArgVars_54 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[0]), (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_2[7]), Args_35);
        Purity_39 = hlds__hlds_goal__goal_info_get_purity_1_f_0(STATE_VARIABLE_GoalInfo_0_42);
        check_hlds__simplify__common__common_optimise_call_11_p_0(PredId_20, ProcId_21, ArgVars_54, Purity_39, STATE_VARIABLE_GoalInfo_0_42, GoalExpr1_37, &MaybeAssignsGoalExpr_40, Common0_16, Common_17, STATE_VARIABLE_Info_0_44, STATE_VARIABLE_Info_45);
        succeeded = (OptDuplicateCalls_38 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = (MaybeAssignsGoalExpr_40 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            AssignsGoalExpr_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAssignsGoalExpr_40, (MR_Integer) 0))));
        }
        if (succeeded)
          *GoalExpr_12 = AssignsGoalExpr_41;
        else
          *GoalExpr_12 = GoalExpr1_37;
      }
      else
      {
        *GoalExpr_12 = GoalExpr1_37;
        *Common_17 = Common0_16;
        *STATE_VARIABLE_Info_45 = STATE_VARIABLE_Info_0_44;
      }
      *STATE_VARIABLE_GoalInfo_43 = STATE_VARIABLE_GoalInfo_0_42;
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_goal_generic_call_10_p_0(
  MR_Word GoalExpr0_11,
  MR_Word * GoalExpr_12,
  MR_Word GoalInfo_13,
  MR_Word * GoalInfo_4,
  MR_Word _NestedContext0_14,
  MR_Word _InstMap0_15,
  MR_Word Common0_16,
  MR_Word * Common_17,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38)
{
  check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_53_44_32_54_93_95_48_10_p_0(GoalExpr0_11, GoalExpr_12, GoalInfo_13, GoalInfo_4, Common0_16, Common_17, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38);
}

void MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_53_44_32_54_93_95_48_10_p_0(
  MR_Word GoalExpr0_11,
  MR_Word * GoalExpr_12,
  MR_Word GoalInfo_13,
  MR_Word * GoalInfo_4,
  MR_Word Common0_16,
  MR_Word * Common_17,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38)
{
  {
    MR_bool succeeded;
    MR_Word GenericCall_19;
    MR_Word Args_20;
    MR_Word Modes_21;
    MR_Word Det_23;

    *GoalInfo_4 = GoalInfo_13;
    GenericCall_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1))));
    Args_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 2))));
    Modes_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 3))));
    Det_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 5))) & (MR_Integer) 7);
    switch (MR_tag((MR_Word) GenericCall_19)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Closure_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GenericCall_19, (MR_Integer) 0))));
          MR_Word Purity_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), GenericCall_19, (MR_Integer) 1))) >> 1)) & (MR_Integer) 3);
          MR_Word OptDuplicateCalls_28;

          succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(STATE_VARIABLE_Info_0_37, &OptDuplicateCalls_28);
          if (succeeded)
          {
            MR_Word MaybeAssignsGoalExpr_29;
            MR_Word AssignsGoalExpr_30;

            check_hlds__simplify__common__common_optimise_higher_order_call_12_p_0(Closure_24, Args_20, Modes_21, Det_23, Purity_25, GoalInfo_13, GoalExpr0_11, &MaybeAssignsGoalExpr_29, Common0_16, Common_17, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38);
            succeeded = (OptDuplicateCalls_28 == (MR_Integer) 1);
            if (succeeded)
            {
              succeeded = (MaybeAssignsGoalExpr_29 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
                AssignsGoalExpr_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAssignsGoalExpr_29, (MR_Integer) 0))));
            }
            if (succeeded)
              *GoalExpr_12 = AssignsGoalExpr_30;
            else
              *GoalExpr_12 = GoalExpr0_11;
          }
          else
          {
            *GoalExpr_12 = GoalExpr0_11;
            *Common_17 = Common0_16;
            *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
        {
          *GoalExpr_12 = GoalExpr0_11;
          *Common_17 = Common0_16;
          *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
        }
        break;
      case (MR_Integer) 2:
        {
          check_hlds__simplify__simplify_info__simplify_info_set_has_user_event_3_p_0((MR_Integer) 0, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38);
          *GoalExpr_12 = GoalExpr0_11;
          *Common_17 = Common0_16;
        }
        break;
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_goal_plain_call_10_p_0(
  MR_Word GoalExpr0_11,
  MR_Word * GoalExpr_12,
  MR_Word GoalInfo0_13,
  MR_Word * GoalInfo_14,
  MR_Word NestedContext_15,
  MR_Word InstMap0_16,
  MR_Word Common0_17,
  MR_Word * Common_18,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43)
{
  {
    MR_bool succeeded;
    MR_Word PredId_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_11, (MR_Integer) 0))));
    MR_Integer ProcId_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr0_11, (MR_Integer) 1))));
    MR_Word Args_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_11, (MR_Integer) 2))));
    MR_Word IsBuiltin_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr0_11, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word ModuleInfo_26;
    MR_Word PredInfo_27;
    MR_Word ProcInfo_28;
    MR_Word ModuleSymName_31;
    MR_Word Globals_32;
    MR_Word STATE_VARIABLE_Info_44_44;
    MR_Word STATE_VARIABLE_Info_45_45;
    MR_Word STATE_VARIABLE_Info_46_46;
    MR_Word STATE_VARIABLE_Info_47_47;
    MR_String ModuleName_33;

    check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_42, &ModuleInfo_26);
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_26, PredId_20, ProcId_21, &PredInfo_27, &ProcInfo_28);
    succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_implicit_stream_calls_1_p_0(STATE_VARIABLE_Info_0_42);
    if (succeeded)
    {
      MR_Word MaybeImplicitStreamSpec_29;

      check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0(ModuleInfo_26, PredId_20, PredInfo_27, GoalInfo0_13, &MaybeImplicitStreamSpec_29);
      if ((MaybeImplicitStreamSpec_29 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_Info_44_44 = STATE_VARIABLE_Info_0_42;
      else
      {
        MR_Word ImplicitStreamSpec_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeImplicitStreamSpec_29, (MR_Integer) 0))));

        check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(ImplicitStreamSpec_30, STATE_VARIABLE_Info_0_42, &STATE_VARIABLE_Info_44_44);
      }
    }
    else
      STATE_VARIABLE_Info_44_44 = STATE_VARIABLE_Info_0_42;
    check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_call_to_obsolete_predicate_7_p_0(PredId_20, ProcId_21, PredInfo_27, ProcInfo_28, GoalInfo0_13, STATE_VARIABLE_Info_44_44, &STATE_VARIABLE_Info_45_45);
    check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0(PredId_20, ProcId_21, Args_22, IsBuiltin_23, PredInfo_27, ProcInfo_28, GoalInfo0_13, NestedContext_15, Common0_17, STATE_VARIABLE_Info_45_45, &STATE_VARIABLE_Info_46_46);
    check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_useless_comparison_6_p_0(PredInfo_27, InstMap0_16, Args_22, GoalInfo0_13, STATE_VARIABLE_Info_46_46, &STATE_VARIABLE_Info_47_47);
    ModuleSymName_31 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_27);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_26, &Globals_32);
    succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(ModuleSymName_31, &ModuleName_33);
    if (succeeded)
    {
      MR_String PredName_34;
      MR_Integer ModeNum_35;
      MR_Word VarTypes_36;
      MR_Word EvaluatedGoalExpr_37;
      MR_Word EvaluatedGoalInfo_38;

      PredName_34 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_27);
      hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_21, &ModeNum_35);
      check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(STATE_VARIABLE_Info_47_47, &VarTypes_36);
      succeeded = check_hlds__simplify__simplify_info__simplify_do_const_prop_1_p_0(STATE_VARIABLE_Info_47_47);
      if (succeeded)
        succeeded = transform_hlds__const_prop__evaluate_call_10_p_0(Globals_32, VarTypes_36, InstMap0_16, ModuleName_33, PredName_34, ModeNum_35, Args_22, &EvaluatedGoalExpr_37, GoalInfo0_13, &EvaluatedGoalInfo_38);
      if (succeeded)
      {
        *GoalExpr_12 = EvaluatedGoalExpr_37;
        *GoalInfo_14 = EvaluatedGoalInfo_38;
        *Common_18 = Common0_17;
        check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(STATE_VARIABLE_Info_47_47, STATE_VARIABLE_Info_43);
      }
      else
      {
        MR_Word OptDupCalls_65;

        succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(STATE_VARIABLE_Info_47_47, &OptDupCalls_65);
        if (succeeded)
        {
          MR_Word STATE_VARIABLE_Info_49_49;
          MR_Word Purity_66;
          MR_Word MaybeAssignsGoalExpr0_67;
          MR_Word _AssignsGoalExpr0_68;

          Purity_66 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo0_13);
          check_hlds__simplify__common__common_optimise_call_11_p_0(PredId_20, ProcId_21, Args_22, Purity_66, GoalInfo0_13, GoalExpr0_11, &MaybeAssignsGoalExpr0_67, Common0_17, Common_18, STATE_VARIABLE_Info_47_47, &STATE_VARIABLE_Info_49_49);
          succeeded = (MaybeAssignsGoalExpr0_67 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            _AssignsGoalExpr0_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAssignsGoalExpr0_67, (MR_Integer) 0))));
            succeeded = (OptDupCalls_65 == (MR_Integer) 1);
          }
          if (succeeded)
          {
            *GoalExpr_12 = _AssignsGoalExpr0_68;
            *GoalInfo_14 = GoalInfo0_13;
            *STATE_VARIABLE_Info_43 = STATE_VARIABLE_Info_49_49;
          }
          else
          {
            MR_Word ImprovedGoalExpr_40;
            MR_Word ImprovedGoalInfo_41;
            MR_Word STATE_VARIABLE_Info_50_50;

            succeeded = check_hlds__simplify__simplify_goal_call__simplify_improve_library_call_10_p_0(InstMap0_16, ModuleName_33, PredName_34, ModeNum_35, Args_22, &ImprovedGoalExpr_40, GoalInfo0_13, &ImprovedGoalInfo_41, STATE_VARIABLE_Info_49_49, &STATE_VARIABLE_Info_50_50);
            if (succeeded)
            {
              *STATE_VARIABLE_Info_43 = STATE_VARIABLE_Info_50_50;
              *GoalExpr_12 = ImprovedGoalExpr_40;
              *GoalInfo_14 = ImprovedGoalInfo_41;
            }
            else
            {
              *GoalExpr_12 = GoalExpr0_11;
              *GoalInfo_14 = GoalInfo0_13;
              *STATE_VARIABLE_Info_43 = STATE_VARIABLE_Info_49_49;
            }
          }
        }
        else
        {
          MR_Word ImprovedGoalExpr_87;
          MR_Word ImprovedGoalInfo_88;
          MR_Word STATE_VARIABLE_Info_50_89;

          *Common_18 = Common0_17;
          succeeded = check_hlds__simplify__simplify_goal_call__simplify_improve_library_call_10_p_0(InstMap0_16, ModuleName_33, PredName_34, ModeNum_35, Args_22, &ImprovedGoalExpr_87, GoalInfo0_13, &ImprovedGoalInfo_88, STATE_VARIABLE_Info_47_47, &STATE_VARIABLE_Info_50_89);
          if (succeeded)
          {
            *STATE_VARIABLE_Info_43 = STATE_VARIABLE_Info_50_89;
            *GoalExpr_12 = ImprovedGoalExpr_87;
            *GoalInfo_14 = ImprovedGoalInfo_88;
          }
          else
          {
            *GoalExpr_12 = GoalExpr0_11;
            *GoalInfo_14 = GoalInfo0_13;
            *STATE_VARIABLE_Info_43 = STATE_VARIABLE_Info_47_47;
          }
        }
      }
    }
    else
    {
      MR_Word OptDupCalls_81;

      succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(STATE_VARIABLE_Info_47_47, &OptDupCalls_81);
      if (succeeded)
      {
        MR_Word Purity_82;
        MR_Word MaybeAssignsGoalExpr0_83;
        MR_Word _AssignsGoalExpr0_84;

        Purity_82 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo0_13);
        check_hlds__simplify__common__common_optimise_call_11_p_0(PredId_20, ProcId_21, Args_22, Purity_82, GoalInfo0_13, GoalExpr0_11, &MaybeAssignsGoalExpr0_83, Common0_17, Common_18, STATE_VARIABLE_Info_47_47, STATE_VARIABLE_Info_43);
        succeeded = (MaybeAssignsGoalExpr0_83 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          _AssignsGoalExpr0_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAssignsGoalExpr0_83, (MR_Integer) 0))));
          succeeded = (OptDupCalls_81 == (MR_Integer) 1);
        }
        if (succeeded)
        {
          *GoalExpr_12 = _AssignsGoalExpr0_84;
          *GoalInfo_14 = GoalInfo0_13;
        }
        else
        {
          *GoalExpr_12 = GoalExpr0_11;
          *GoalInfo_14 = GoalInfo0_13;
        }
      }
      else
      {
        *Common_18 = Common0_17;
        *STATE_VARIABLE_Info_43 = STATE_VARIABLE_Info_47_47;
        *GoalExpr_12 = GoalExpr0_11;
        *GoalInfo_14 = GoalInfo0_13;
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_improve_library_call_10_p_0(
  MR_Word InstMap0_11,
  MR_String ModuleName_12,
  MR_String PredName_13,
  MR_Integer ModeNum_14,
  MR_Word Args_15,
  MR_Word * ImprovedGoalExpr_16,
  MR_Word GoalInfo0_17,
  MR_Word * ImprovedGoalInfo_18,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_Info_43_43;
    MR_Integer slot_6 = ((MR_hash_string6(ModuleName_12)) & (MR_Integer) 63);
    MR_String str_7 = ((&check_hlds__simplify__simplify_goal_call_vector_common_8[32 + slot_6]))->check_hlds__simplify__simplify_goal_call__vector_common_type_8_0__vct_8_f_0;

    // hashed string jump switch
    ;
    // compute the hash value of the input string
    ;
    // no collisions; no hash chain loop
    ;
    // lookup the string for this hash slot
    ;
    // did we find a match?
    ;
    if ((((str_7 != NULL)) && ((strcmp(str_7, ModuleName_12) == 0))))
    {
      // we found a match; dispatch to the corresponding code
      ;
      switch (slot_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 3:
          {
            // case "uint32"
            ;
            {
              MR_Word ModuleInfo_103;
              MR_Word Globals_104;
              MR_Word Pregen_105;

              check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_32, &ModuleInfo_103);
              hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_103, &Globals_104);
              libs__globals__lookup_bool_option_3_p_0(Globals_104, (MR_Integer) 247, &Pregen_105);
              switch (Pregen_105) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_11_p_0((MR_Integer) 7, InstMap0_11, ModuleName_12, PredName_13, Args_15, ImprovedGoalExpr_16, GoalInfo0_17, ImprovedGoalInfo_18, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_43_43);
                  break;
                case (MR_Integer) 1:
                  {
                    succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_13, Args_15, ImprovedGoalExpr_16);
                    if (succeeded)
                    {
                      *ImprovedGoalInfo_18 = GoalInfo0_17;
                      STATE_VARIABLE_Info_43_43 = STATE_VARIABLE_Info_0_32;
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
              }
            }
          }
          break;
        case (MR_Integer) 7:
          {
            // case "int16"
            ;
            {
              MR_Word ModuleInfo_73;
              MR_Word Globals_74;
              MR_Word Pregen_75;

              check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_32, &ModuleInfo_73);
              hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_73, &Globals_74);
              libs__globals__lookup_bool_option_3_p_0(Globals_74, (MR_Integer) 247, &Pregen_75);
              switch (Pregen_75) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_11_p_0((MR_Integer) 4, InstMap0_11, ModuleName_12, PredName_13, Args_15, ImprovedGoalExpr_16, GoalInfo0_17, ImprovedGoalInfo_18, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_43_43);
                  break;
                case (MR_Integer) 1:
                  {
                    succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_13, Args_15, ImprovedGoalExpr_16);
                    if (succeeded)
                    {
                      *ImprovedGoalInfo_18 = GoalInfo0_17;
                      STATE_VARIABLE_Info_43_43 = STATE_VARIABLE_Info_0_32;
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
              }
            }
          }
          break;
        case (MR_Integer) 8:
          {
            // case "int"
            ;
            {
              MR_Word ModuleInfo_29;
              MR_Word Globals_30;
              MR_Word Pregen_31;

              check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_32, &ModuleInfo_29);
              hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_29, &Globals_30);
              libs__globals__lookup_bool_option_3_p_0(Globals_30, (MR_Integer) 247, &Pregen_31);
              switch (Pregen_31) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_11_p_0((MR_Integer) 0, InstMap0_11, ModuleName_12, PredName_13, Args_15, ImprovedGoalExpr_16, GoalInfo0_17, ImprovedGoalInfo_18, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_43_43);
                  break;
                case (MR_Integer) 1:
                  {
                    succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_13, Args_15, ImprovedGoalExpr_16);
                    if (succeeded)
                    {
                      *ImprovedGoalInfo_18 = GoalInfo0_17;
                      STATE_VARIABLE_Info_43_43 = STATE_VARIABLE_Info_0_32;
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
              }
            }
          }
          break;
        case (MR_Integer) 13:
          {
            // case "uint8"
            ;
            {
              MR_Word ModuleInfo_113;
              MR_Word Globals_114;
              MR_Word Pregen_115;

              check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_32, &ModuleInfo_113);
              hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_113, &Globals_114);
              libs__globals__lookup_bool_option_3_p_0(Globals_114, (MR_Integer) 247, &Pregen_115);
              switch (Pregen_115) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_11_p_0((MR_Integer) 3, InstMap0_11, ModuleName_12, PredName_13, Args_15, ImprovedGoalExpr_16, GoalInfo0_17, ImprovedGoalInfo_18, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_43_43);
                  break;
                case (MR_Integer) 1:
                  {
                    succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_13, Args_15, ImprovedGoalExpr_16);
                    if (succeeded)
                    {
                      *ImprovedGoalInfo_18 = GoalInfo0_17;
                      STATE_VARIABLE_Info_43_43 = STATE_VARIABLE_Info_0_32;
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
              }
            }
          }
          break;
        case (MR_Integer) 14:
          {
            // case "private_builtin"
            ;
            {
              MR_String TypeName_26;
              MR_Word R_27;
              MR_Word Var_36;
              MR_Word Var_37;
              MR_Word Var_38;
              MR_Word X_45;
              MR_Word Y_46;
              MR_Word Context_47;
              MR_Integer slot_4;
              MR_String str_5;

              succeeded = (ModeNum_14 == (MR_Integer) 0);
              if (succeeded)
              {
                // hashed string simple lookup switch
                ;
                // compute the hash value of the input string
                ;
                slot_4 = ((MR_hash_string6(PredName_13)) & (MR_Integer) 31);
                // no collisions; no hash chain loop
                ;
                // lookup the string for this hash slot
                ;
                str_5 = ((&check_hlds__simplify__simplify_goal_call_vector_common_6[6 + slot_4]))->check_hlds__simplify__simplify_goal_call__vector_common_type_6_0__vct_6_f_0;
                // did we find a match?
                ;
                if ((((str_5 != NULL)) && ((strcmp(str_5, PredName_13) == 0))))
                {
                  // we found a match; look up the results
                  ;
                  TypeName_26 = ((&check_hlds__simplify__simplify_goal_call_vector_common_6[6 + slot_4]))->check_hlds__simplify__simplify_goal_call__vector_common_type_6_0__vct_6_f_1;
                  succeeded = MR_TRUE;
                  // jump out of search loop
                  ;
                  goto label_1;
                }
                succeeded = MR_FALSE;
              label_1:;
                if (succeeded)
                {
                  succeeded = (Args_15 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    R_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0))));
                    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1))));
                    succeeded = (Var_36 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      X_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_36, (MR_Integer) 0))));
                      Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_36, (MR_Integer) 1))));
                      succeeded = (Var_37 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Y_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_37, (MR_Integer) 0))));
                        Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_37, (MR_Integer) 1))));
                        succeeded = (Var_38 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Context_47 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_17);
                          check_hlds__simplify__simplify_goal_call__simplify_improve_builtin_compare_int_uint_8_p_0(STATE_VARIABLE_Info_0_32, TypeName_26, R_27, X_45, Y_46, Context_47, ImprovedGoalExpr_16, ImprovedGoalInfo_18);
                          STATE_VARIABLE_Info_43_43 = STATE_VARIABLE_Info_0_32;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 16:
          {
            // case "builtin"
            ;
            {
              MR_Integer lo_0 = (MR_Integer) 0;
              MR_Integer hi_1 = (MR_Integer) 4;
              MR_Integer mid_2;
              MR_Integer result_3;

              // binary string jump switch
              ;
              do
              {
                mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
                result_3 = MR_strcmp(PredName_13, ((&check_hlds__simplify__simplify_goal_call_vector_common_7[13 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_7_0__vct_7_f_0);
                if ((result_3 == (MR_Integer) 0))
                {
                  switch (((&check_hlds__simplify__simplify_goal_call_vector_common_7[13 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_7_0__vct_7_f_1) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        // case "@<"
                        ;
                        {
                          MR_Word TI_22;
                          MR_Word X_23;
                          MR_Word Y_24;
                          MR_Word Var_40;
                          MR_Word Var_41;
                          MR_Word Var_42;

                          succeeded = (Args_15 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            TI_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0))));
                            Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1))));
                            succeeded = (Var_40 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              X_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 0))));
                              Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 1))));
                              succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                Y_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 0))));
                                Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 1))));
                                succeeded = (Var_42 == (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(TI_22, X_23, Y_24, (MR_String) "<", (MR_Integer) 0, GoalInfo0_17, ImprovedGoalExpr_16, InstMap0_11, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_43_43);
                                  *ImprovedGoalInfo_18 = GoalInfo0_17;
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        // case "@=<"
                        ;
                        {
                          MR_Word TI_50;
                          MR_Word X_51;
                          MR_Word Y_52;
                          MR_Word Var_53;
                          MR_Word Var_54;
                          MR_Word Var_55;

                          succeeded = (Args_15 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            TI_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0))));
                            Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1))));
                            succeeded = (Var_53 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              X_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_53, (MR_Integer) 0))));
                              Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_53, (MR_Integer) 1))));
                              succeeded = (Var_54 != (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                Y_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_54, (MR_Integer) 0))));
                                Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_54, (MR_Integer) 1))));
                                succeeded = (Var_55 == (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(TI_50, X_51, Y_52, (MR_String) ">", (MR_Integer) 1, GoalInfo0_17, ImprovedGoalExpr_16, InstMap0_11, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_43_43);
                                  *ImprovedGoalInfo_18 = GoalInfo0_17;
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        // case "@>"
                        ;
                        {
                          MR_Word TI_58;
                          MR_Word X_59;
                          MR_Word Y_60;
                          MR_Word Var_61;
                          MR_Word Var_62;
                          MR_Word Var_63;

                          succeeded = (Args_15 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            TI_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0))));
                            Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1))));
                            succeeded = (Var_61 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              X_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_61, (MR_Integer) 0))));
                              Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_61, (MR_Integer) 1))));
                              succeeded = (Var_62 != (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                Y_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_62, (MR_Integer) 0))));
                                Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_62, (MR_Integer) 1))));
                                succeeded = (Var_63 == (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(TI_58, X_59, Y_60, (MR_String) ">", (MR_Integer) 0, GoalInfo0_17, ImprovedGoalExpr_16, InstMap0_11, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_43_43);
                                  *ImprovedGoalInfo_18 = GoalInfo0_17;
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        // case "@>="
                        ;
                        {
                          MR_Word TI_66;
                          MR_Word X_67;
                          MR_Word Y_68;
                          MR_Word Var_69;
                          MR_Word Var_70;
                          MR_Word Var_71;

                          succeeded = (Args_15 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            TI_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 0))));
                            Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_15, (MR_Integer) 1))));
                            succeeded = (Var_69 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              X_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_69, (MR_Integer) 0))));
                              Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_69, (MR_Integer) 1))));
                              succeeded = (Var_70 != (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                Y_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_70, (MR_Integer) 0))));
                                Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_70, (MR_Integer) 1))));
                                succeeded = (Var_71 == (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(TI_66, X_67, Y_68, (MR_String) "<", (MR_Integer) 1, GoalInfo0_17, ImprovedGoalExpr_16, InstMap0_11, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_43_43);
                                  *ImprovedGoalInfo_18 = GoalInfo0_17;
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        // case "compare"
                        ;
                        {
                          MR_Word Context_25;

                          Context_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_17);
                          succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_95_91_49_93_95_48_7_p_0(Args_15, Context_25, ImprovedGoalExpr_16, ImprovedGoalInfo_18, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_43_43);
                        }
                      }
                      break;
                  }
                  // jump out of search loop
                  ;
                  goto label_0;
                }
                else
                if ((result_3 < (MR_Integer) 0))
                  hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
                else
                  lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
              }
              while ((lo_0 <= hi_1));
              succeeded = MR_FALSE;
            label_0:;
            }
          }
          break;
        case (MR_Integer) 20:
          {
            // case "uint"
            ;
            {
              MR_Word ModuleInfo_93;
              MR_Word Globals_94;
              MR_Word Pregen_95;

              check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_32, &ModuleInfo_93);
              hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_93, &Globals_94);
              libs__globals__lookup_bool_option_3_p_0(Globals_94, (MR_Integer) 247, &Pregen_95);
              switch (Pregen_95) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_11_p_0((MR_Integer) 1, InstMap0_11, ModuleName_12, PredName_13, Args_15, ImprovedGoalExpr_16, GoalInfo0_17, ImprovedGoalInfo_18, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_43_43);
                  break;
                case (MR_Integer) 1:
                  {
                    succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_13, Args_15, ImprovedGoalExpr_16);
                    if (succeeded)
                    {
                      *ImprovedGoalInfo_18 = GoalInfo0_17;
                      STATE_VARIABLE_Info_43_43 = STATE_VARIABLE_Info_0_32;
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
              }
            }
          }
          break;
        case (MR_Integer) 23:
          {
            // case "int8"
            ;
            {
              MR_Word ModuleInfo_88;
              MR_Word Globals_89;
              MR_Word Pregen_90;

              check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_32, &ModuleInfo_88);
              hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_88, &Globals_89);
              libs__globals__lookup_bool_option_3_p_0(Globals_89, (MR_Integer) 247, &Pregen_90);
              switch (Pregen_90) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_11_p_0((MR_Integer) 2, InstMap0_11, ModuleName_12, PredName_13, Args_15, ImprovedGoalExpr_16, GoalInfo0_17, ImprovedGoalInfo_18, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_43_43);
                  break;
                case (MR_Integer) 1:
                  {
                    succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_13, Args_15, ImprovedGoalExpr_16);
                    if (succeeded)
                    {
                      *ImprovedGoalInfo_18 = GoalInfo0_17;
                      STATE_VARIABLE_Info_43_43 = STATE_VARIABLE_Info_0_32;
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
              }
            }
          }
          break;
        case (MR_Integer) 28:
          {
            // case "uint64"
            ;
            {
              MR_Word ModuleInfo_108;
              MR_Word Globals_109;
              MR_Word Pregen_110;

              check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_32, &ModuleInfo_108);
              hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_108, &Globals_109);
              libs__globals__lookup_bool_option_3_p_0(Globals_109, (MR_Integer) 247, &Pregen_110);
              switch (Pregen_110) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_11_p_0((MR_Integer) 9, InstMap0_11, ModuleName_12, PredName_13, Args_15, ImprovedGoalExpr_16, GoalInfo0_17, ImprovedGoalInfo_18, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_43_43);
                  break;
                case (MR_Integer) 1:
                  {
                    succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_13, Args_15, ImprovedGoalExpr_16);
                    if (succeeded)
                    {
                      *ImprovedGoalInfo_18 = GoalInfo0_17;
                      STATE_VARIABLE_Info_43_43 = STATE_VARIABLE_Info_0_32;
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
              }
            }
          }
          break;
        case (MR_Integer) 33:
          {
            // case "uint16"
            ;
            {
              MR_Word ModuleInfo_98;
              MR_Word Globals_99;
              MR_Word Pregen_100;

              check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_32, &ModuleInfo_98);
              hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_98, &Globals_99);
              libs__globals__lookup_bool_option_3_p_0(Globals_99, (MR_Integer) 247, &Pregen_100);
              switch (Pregen_100) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_11_p_0((MR_Integer) 5, InstMap0_11, ModuleName_12, PredName_13, Args_15, ImprovedGoalExpr_16, GoalInfo0_17, ImprovedGoalInfo_18, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_43_43);
                  break;
                case (MR_Integer) 1:
                  {
                    succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_13, Args_15, ImprovedGoalExpr_16);
                    if (succeeded)
                    {
                      *ImprovedGoalInfo_18 = GoalInfo0_17;
                      STATE_VARIABLE_Info_43_43 = STATE_VARIABLE_Info_0_32;
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
              }
            }
          }
          break;
        case (MR_Integer) 37:
          {
            // case "int32"
            ;
            {
              MR_Word ModuleInfo_78;
              MR_Word Globals_79;
              MR_Word Pregen_80;

              check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_32, &ModuleInfo_78);
              hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_78, &Globals_79);
              libs__globals__lookup_bool_option_3_p_0(Globals_79, (MR_Integer) 247, &Pregen_80);
              switch (Pregen_80) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_11_p_0((MR_Integer) 6, InstMap0_11, ModuleName_12, PredName_13, Args_15, ImprovedGoalExpr_16, GoalInfo0_17, ImprovedGoalInfo_18, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_43_43);
                  break;
                case (MR_Integer) 1:
                  {
                    succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_13, Args_15, ImprovedGoalExpr_16);
                    if (succeeded)
                    {
                      *ImprovedGoalInfo_18 = GoalInfo0_17;
                      STATE_VARIABLE_Info_43_43 = STATE_VARIABLE_Info_0_32;
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
              }
            }
          }
          break;
        case (MR_Integer) 48:
          {
            // case "int64"
            ;
            {
              MR_Word ModuleInfo_83;
              MR_Word Globals_84;
              MR_Word Pregen_85;

              check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_32, &ModuleInfo_83);
              hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_83, &Globals_84);
              libs__globals__lookup_bool_option_3_p_0(Globals_84, (MR_Integer) 247, &Pregen_85);
              switch (Pregen_85) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_11_p_0((MR_Integer) 8, InstMap0_11, ModuleName_12, PredName_13, Args_15, ImprovedGoalExpr_16, GoalInfo0_17, ImprovedGoalInfo_18, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_43_43);
                  break;
                case (MR_Integer) 1:
                  {
                    succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_13, Args_15, ImprovedGoalExpr_16);
                    if (succeeded)
                    {
                      *ImprovedGoalInfo_18 = GoalInfo0_17;
                      STATE_VARIABLE_Info_43_43 = STATE_VARIABLE_Info_0_32;
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
              }
            }
          }
          break;
      }
      // jump out of search loop
      ;
      goto label_2;
    }
    succeeded = MR_FALSE;
  label_2:;
    if (succeeded)
    {
      check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(STATE_VARIABLE_Info_43_43, STATE_VARIABLE_Info_33);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_11_p_0(
  MR_Word IntType_12,
  MR_Word InstMap0_13,
  MR_String ModuleName_14,
  MR_String PredName_15,
  MR_Word Args_17,
  MR_Word * ImprovedGoalExpr_18,
  MR_Word STATE_VARIABLE_GoalInfo_0_35,
  MR_Word * STATE_VARIABLE_GoalInfo_36,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_21;
    MR_Word Globals_22;
    MR_Integer slot_0;
    MR_String str_1;

    check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_37, &ModuleInfo_21);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_21, &Globals_22);
    // hashed string jump switch
    ;
    // compute the hash value of the input string
    ;
    slot_0 = ((MR_hash_string6(PredName_15)) & (MR_Integer) 31);
    // no collisions; no hash chain loop
    ;
    // lookup the string for this hash slot
    ;
    str_1 = ((&check_hlds__simplify__simplify_goal_call_vector_common_8[0 + slot_0]))->check_hlds__simplify__simplify_goal_call__vector_common_type_8_0__vct_8_f_0;
    // did we find a match?
    ;
    if ((((str_1 != NULL)) && ((strcmp(str_1, PredName_15) == 0))))
    {
      // we found a match; dispatch to the corresponding code
      ;
      switch (slot_0) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            // case "times_bits_per_int"
            ;
            {
              MR_Word Var_58;
              MR_Word Var_59;
              MR_Word Var_60;
              MR_String Op_66;
              MR_Word X_67;
              MR_Word Y_68;
              MR_Integer TargetBitsPerInt_69;

              succeeded = (IntType_12 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  X_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 0))));
                  Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 1))));
                  succeeded = (Var_58 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Y_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_58, (MR_Integer) 0))));
                    Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_58, (MR_Integer) 1))));
                    succeeded = (Var_59 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Op_66 = (MR_String) "*";
                      libs__int_emu__target_bits_per_int_2_p_0(Globals_22, &Var_60);
                      TargetBitsPerInt_69 = (MR_Integer) (Var_60);
                      check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_9_p_0(ModuleName_14, Op_66, X_67, TargetBitsPerInt_69, Y_68, ImprovedGoalExpr_18, STATE_VARIABLE_GoalInfo_0_35, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38);
                      succeeded = MR_TRUE;
                    }
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 11:
        case (MR_Integer) 25:
        case (MR_Integer) 29:
        case (MR_Integer) 31:
          {
            // case "<", "=<", ">", ">="
            ;
            succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_15, Args_17, ImprovedGoalExpr_18);
            if (succeeded)
            {
              *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 12:
          {
            // case "//"
            ;
            {
              MR_Word Z_80;
              MR_Word InstY_81;
              MR_Word ConsY_84;
              MR_Word Var_85;
              MR_Word Var_86;
              MR_Word Var_87;
              MR_Word Var_88;
              MR_Word Var_89;
              MR_Word Var_90;
              MR_Word Var_91;
              MR_Word Var_92;
              MR_Word X_94;
              MR_Word Y_95;

              succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 0))));
                Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 1))));
                succeeded = (Var_85 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_95 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_85, (MR_Integer) 0))));
                  Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_85, (MR_Integer) 1))));
                  succeeded = (Var_86 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_86, (MR_Integer) 0))));
                    Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_86, (MR_Integer) 1))));
                    succeeded = (Var_87 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_13, Y_95, &InstY_81);
                      succeeded = ((((MR_tag((MR_Word) InstY_81)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstY_81, (MR_Integer) 0)))) == (MR_Integer) 0)));
                      if (succeeded)
                      {
                        Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstY_81, (MR_Integer) 3))));
                        succeeded = (Var_88 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_88, (MR_Integer) 0))));
                          Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_88, (MR_Integer) 1))));
                          succeeded = (Var_91 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            ConsY_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_89, (MR_Integer) 0))));
                            Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_89, (MR_Integer) 1))));
                            succeeded = (Var_90 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = check_hlds__simplify__simplify_goal_call__is_non_zero_const_2_p_0(IntType_12, ConsY_84);
                              if (succeeded)
                              {
                                Var_92 = (MR_Integer) 0;
                                check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_37, ModuleName_14, (MR_String) "unchecked_quotient", Var_92, X_94, Y_95, Z_80, ImprovedGoalExpr_18);
                                *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
                                succeeded = MR_TRUE;
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
          }
          break;
        case (MR_Integer) 14:
          {
            // case "/"
            ;
            {
              MR_Word Z_27;
              MR_Word InstY_28;
              MR_Word ConsY_31;
              MR_Word Var_50;
              MR_Word Var_51;
              MR_Word Var_52;
              MR_Word Var_53;
              MR_Word Var_54;
              MR_Word Var_55;
              MR_Word Var_56;
              MR_Word Var_57;
              MR_Word X_71;
              MR_Word Y_72;

              succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 0))));
                Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 1))));
                succeeded = (Var_50 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 0))));
                  Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_50, (MR_Integer) 1))));
                  succeeded = (Var_51 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_51, (MR_Integer) 0))));
                    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_51, (MR_Integer) 1))));
                    succeeded = (Var_52 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_13, Y_72, &InstY_28);
                      succeeded = ((((MR_tag((MR_Word) InstY_28)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstY_28, (MR_Integer) 0)))) == (MR_Integer) 0)));
                      if (succeeded)
                      {
                        Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstY_28, (MR_Integer) 3))));
                        succeeded = (Var_53 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_53, (MR_Integer) 0))));
                          Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_53, (MR_Integer) 1))));
                          succeeded = (Var_56 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            ConsY_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_54, (MR_Integer) 0))));
                            Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_54, (MR_Integer) 1))));
                            succeeded = (Var_55 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = check_hlds__simplify__simplify_goal_call__is_non_zero_const_2_p_0(IntType_12, ConsY_31);
                              if (succeeded)
                              {
                                Var_57 = (MR_Integer) 0;
                                check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_37, ModuleName_14, (MR_String) "unchecked_quotient", Var_57, X_71, Y_72, Z_27, ImprovedGoalExpr_18);
                                *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
                                succeeded = MR_TRUE;
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
          }
          break;
        case (MR_Integer) 21:
          {
            // case "rem_bits_per_int"
            ;
            {
              MR_String Op_135;
              MR_Word X_136;
              MR_Word Y_137;
              MR_Integer TargetBitsPerInt_138;
              MR_Word Var_139;
              MR_Word Var_140;
              MR_Word Var_141;

              succeeded = (IntType_12 == (MR_Integer) 0);
              if (succeeded)
              {
                Op_135 = (MR_String) "unchecked_rem";
                succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  X_136 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 0))));
                  Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 1))));
                  succeeded = (Var_139 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Y_137 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_139, (MR_Integer) 0))));
                    Var_140 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_139, (MR_Integer) 1))));
                    succeeded = (Var_140 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      libs__int_emu__target_bits_per_int_2_p_0(Globals_22, &Var_141);
                      TargetBitsPerInt_138 = (MR_Integer) (Var_141);
                      check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_9_p_0(ModuleName_14, Op_135, X_136, TargetBitsPerInt_138, Y_137, ImprovedGoalExpr_18, STATE_VARIABLE_GoalInfo_0_35, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38);
                      succeeded = MR_TRUE;
                    }
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 23:
          {
            // case "rem"
            ;
            {
              MR_Word Z_119;
              MR_Word InstY_120;
              MR_Word ConsY_123;
              MR_Word Var_124;
              MR_Word Var_125;
              MR_Word Var_126;
              MR_Word Var_127;
              MR_Word Var_128;
              MR_Word Var_129;
              MR_Word Var_130;
              MR_Word Var_131;
              MR_Word X_133;
              MR_Word Y_134;

              succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_133 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 0))));
                Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 1))));
                succeeded = (Var_124 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_134 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_124, (MR_Integer) 0))));
                  Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_124, (MR_Integer) 1))));
                  succeeded = (Var_125 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_119 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_125, (MR_Integer) 0))));
                    Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_125, (MR_Integer) 1))));
                    succeeded = (Var_126 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_13, Y_134, &InstY_120);
                      succeeded = ((((MR_tag((MR_Word) InstY_120)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstY_120, (MR_Integer) 0)))) == (MR_Integer) 0)));
                      if (succeeded)
                      {
                        Var_127 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstY_120, (MR_Integer) 3))));
                        succeeded = (Var_127 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_128 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_127, (MR_Integer) 0))));
                          Var_130 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_127, (MR_Integer) 1))));
                          succeeded = (Var_130 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            ConsY_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_128, (MR_Integer) 0))));
                            Var_129 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_128, (MR_Integer) 1))));
                            succeeded = (Var_129 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = check_hlds__simplify__simplify_goal_call__is_non_zero_const_2_p_0(IntType_12, ConsY_123);
                              if (succeeded)
                              {
                                Var_131 = (MR_Integer) 0;
                                check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_37, ModuleName_14, (MR_String) "unchecked_rem", Var_131, X_133, Y_134, Z_119, ImprovedGoalExpr_18);
                                *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
                                succeeded = MR_TRUE;
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
          }
          break;
        case (MR_Integer) 26:
          {
            // case "<<"
            ;
            {
              MR_Integer YVal_34;
              MR_Word Var_39;
              MR_Word Var_40;
              MR_Word Var_41;
              MR_Word Var_42;
              MR_Word Var_43;
              MR_Word Var_44;
              MR_Word Var_45;
              MR_Word Var_46;
              MR_Integer Var_47;
              MR_Integer Var_48;
              MR_Word Var_49;
              MR_Word X_74;
              MR_Word Y_75;
              MR_Word Z_76;
              MR_Word InstY_77;

              succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 0))));
                Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 1))));
                succeeded = (Var_39 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_39, (MR_Integer) 0))));
                  Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_39, (MR_Integer) 1))));
                  succeeded = (Var_40 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 0))));
                    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 1))));
                    succeeded = (Var_41 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_13, Y_75, &InstY_77);
                      succeeded = ((((MR_tag((MR_Word) InstY_77)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstY_77, (MR_Integer) 0)))) == (MR_Integer) 0)));
                      if (succeeded)
                      {
                        Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstY_77, (MR_Integer) 3))));
                        succeeded = (Var_42 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 0))));
                          Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 1))));
                          succeeded = (Var_46 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_43, (MR_Integer) 0))));
                            Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_43, (MR_Integer) 1))));
                            succeeded = (Var_45 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = ((((MR_tag((MR_Word) Var_44)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_44, (MR_Integer) 0)))) == (MR_Integer) 5)));
                              if (succeeded)
                              {
                                YVal_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_44, (MR_Integer) 1))));
                                Var_47 = (MR_Integer) 0;
                                succeeded = (YVal_34 >= Var_47);
                                if (succeeded)
                                {
                                  Var_48 = check_hlds__simplify__simplify_goal_call__int_type_target_bits_2_f_0(Globals_22, IntType_12);
                                  succeeded = (YVal_34 < Var_48);
                                  if (succeeded)
                                  {
                                    Var_49 = (MR_Integer) 0;
                                    check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_37, ModuleName_14, (MR_String) "unchecked_left_shift", Var_49, X_74, Y_75, Z_76, ImprovedGoalExpr_18);
                                    *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
                                    succeeded = MR_TRUE;
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
              }
            }
          }
          break;
        case (MR_Integer) 27:
          {
            // case "quot_bits_per_int"
            ;
            {
              MR_String Op_23;
              MR_Word X_24;
              MR_Word Y_25;
              MR_Integer TargetBitsPerInt_26;
              MR_Word Var_62;
              MR_Word Var_63;
              MR_Word Var_64;

              succeeded = (IntType_12 == (MR_Integer) 0);
              if (succeeded)
              {
                Op_23 = (MR_String) "unchecked_quotient";
                succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  X_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 0))));
                  Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 1))));
                  succeeded = (Var_62 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Y_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_62, (MR_Integer) 0))));
                    Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_62, (MR_Integer) 1))));
                    succeeded = (Var_63 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      libs__int_emu__target_bits_per_int_2_p_0(Globals_22, &Var_64);
                      TargetBitsPerInt_26 = (MR_Integer) (Var_64);
                      check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_9_p_0(ModuleName_14, Op_23, X_24, TargetBitsPerInt_26, Y_25, ImprovedGoalExpr_18, STATE_VARIABLE_GoalInfo_0_35, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38);
                      succeeded = MR_TRUE;
                    }
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 30:
          {
            // case ">>"
            ;
            {
              MR_Integer YVal_100;
              MR_Word Var_101;
              MR_Word Var_102;
              MR_Word Var_103;
              MR_Word Var_104;
              MR_Word Var_105;
              MR_Word Var_106;
              MR_Word Var_107;
              MR_Word Var_108;
              MR_Integer Var_109;
              MR_Integer Var_110;
              MR_Word Var_111;
              MR_Word X_113;
              MR_Word Y_114;
              MR_Word Z_115;
              MR_Word InstY_116;

              succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_113 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 0))));
                Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_17, (MR_Integer) 1))));
                succeeded = (Var_101 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_114 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_101, (MR_Integer) 0))));
                  Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_101, (MR_Integer) 1))));
                  succeeded = (Var_102 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_115 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_102, (MR_Integer) 0))));
                    Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_102, (MR_Integer) 1))));
                    succeeded = (Var_103 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_13, Y_114, &InstY_116);
                      succeeded = ((((MR_tag((MR_Word) InstY_116)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstY_116, (MR_Integer) 0)))) == (MR_Integer) 0)));
                      if (succeeded)
                      {
                        Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstY_116, (MR_Integer) 3))));
                        succeeded = (Var_104 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_104, (MR_Integer) 0))));
                          Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_104, (MR_Integer) 1))));
                          succeeded = (Var_108 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_105, (MR_Integer) 0))));
                            Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_105, (MR_Integer) 1))));
                            succeeded = (Var_107 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = ((((MR_tag((MR_Word) Var_106)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_106, (MR_Integer) 0)))) == (MR_Integer) 5)));
                              if (succeeded)
                              {
                                YVal_100 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_106, (MR_Integer) 1))));
                                Var_109 = (MR_Integer) 0;
                                succeeded = (YVal_100 >= Var_109);
                                if (succeeded)
                                {
                                  Var_110 = check_hlds__simplify__simplify_goal_call__int_type_target_bits_2_f_0(Globals_22, IntType_12);
                                  succeeded = (YVal_100 < Var_110);
                                  if (succeeded)
                                  {
                                    Var_111 = (MR_Integer) 0;
                                    check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_37, ModuleName_14, (MR_String) "unchecked_right_shift", Var_111, X_113, Y_114, Z_115, ImprovedGoalExpr_18);
                                    *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
                                    succeeded = MR_TRUE;
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
              }
            }
          }
          break;
      }
      // jump out of search loop
      ;
      goto label_0;
    }
    succeeded = MR_FALSE;
  label_0:;
    if (succeeded)
    {
      *STATE_VARIABLE_GoalInfo_36 = STATE_VARIABLE_GoalInfo_0_35;
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_Integer MR_CALL 
check_hlds__simplify__simplify_goal_call__int_type_target_bits_2_f_0(
  MR_Word Globals_4,
  MR_Word IntType_5)
{
  {
    MR_Integer IntTypeBits_6;

    switch (IntType_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Word Var_8;

          libs__int_emu__target_bits_per_int_2_p_0(Globals_4, &Var_8);
          IntTypeBits_6 = (MR_Integer) (Var_8);
        }
        break;
      case (MR_Integer) 4:
      case (MR_Integer) 5:
        IntTypeBits_6 = (MR_Integer) 16;
        break;
      case (MR_Integer) 6:
      case (MR_Integer) 7:
        IntTypeBits_6 = (MR_Integer) 32;
        break;
      case (MR_Integer) 8:
      case (MR_Integer) 9:
        IntTypeBits_6 = (MR_Integer) 64;
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        IntTypeBits_6 = (MR_Integer) 8;
        break;
    }
    return IntTypeBits_6;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__is_non_zero_const_2_p_0(
  MR_Word IntType_3,
  MR_Word ConsId_4)
{
  {
    MR_bool succeeded;

    switch (IntType_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer Val_5;

          succeeded = ((((MR_tag((MR_Word) ConsId_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 5)));
          if (succeeded)
          {
            Val_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1))));
            succeeded = (Val_5 != (MR_Integer) 0);
          }
        }
        break;
      case (MR_Integer) 4:
        {
          int16_t Val_9;

          succeeded = ((((MR_tag((MR_Word) ConsId_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 9)));
          if (succeeded)
          {
            Val_9 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1)));
            succeeded = (Val_9 != INT16_C(0));
          }
        }
        break;
      case (MR_Integer) 6:
        {
          int32_t Val_11;

          succeeded = ((((MR_tag((MR_Word) ConsId_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 11)));
          if (succeeded)
          {
            Val_11 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1)));
            succeeded = (Val_11 != INT32_C(0));
          }
        }
        break;
      case (MR_Integer) 8:
        {
          int64_t Val_13;

          succeeded = ((((MR_tag((MR_Word) ConsId_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 13)));
          if (succeeded)
          {
            Val_13 = MR_unbox_int64((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1)));
            succeeded = (Val_13 != INT64_C(0));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          int8_t Val_7;

          succeeded = ((((MR_tag((MR_Word) ConsId_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 7)));
          if (succeeded)
          {
            Val_7 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1)));
            succeeded = (Val_7 != INT8_C(0));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Unsigned Val_6;

          succeeded = ((((MR_tag((MR_Word) ConsId_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 6)));
          if (succeeded)
          {
            Val_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1))));
            succeeded = (Val_6 != (MR_Unsigned) 0U);
          }
        }
        break;
      case (MR_Integer) 5:
        {
          uint16_t Val_10;

          succeeded = ((((MR_tag((MR_Word) ConsId_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 10)));
          if (succeeded)
          {
            Val_10 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1)));
            succeeded = (Val_10 != UINT16_C(0));
          }
        }
        break;
      case (MR_Integer) 7:
        {
          uint32_t Val_12;

          succeeded = ((((MR_tag((MR_Word) ConsId_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 12)));
          if (succeeded)
          {
            Val_12 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1)));
            succeeded = (Val_12 != UINT32_C(0));
          }
        }
        break;
      case (MR_Integer) 9:
        {
          uint64_t Val_14;

          succeeded = ((((MR_tag((MR_Word) ConsId_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 14)));
          if (succeeded)
          {
            Val_14 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1)));
            succeeded = (Val_14 != UINT64_C(0));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          uint8_t Val_8;

          succeeded = ((((MR_tag((MR_Word) ConsId_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 8)));
          if (succeeded)
          {
            Val_8 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1)));
            succeeded = (Val_8 != UINT8_C(0));
          }
        }
        break;
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_9_p_0(
  MR_String ModuleName_10,
  MR_String Op_11,
  MR_Word X_12,
  MR_Integer IntConst_13,
  MR_Word Y_14,
  MR_Word * GoalExpr_15,
  MR_Word OrigGoalInfo_16,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_Word ConstVar_18;
    MR_Word ConstGoal_19;
    MR_Word OpGoalExpr_20;
    MR_Word OpGoal_21;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word VarSet0_36;
    MR_Word VarTypes0_37;
    MR_Word VarSet_38;
    MR_Word VarTypes_39;
    MR_Word ConstConsId_40;
    MR_Word Unification_41;
    MR_Word RHS_42;
    MR_Word Ground_44;
    MR_Word UnifyMode_45;
    MR_Word GoalExpr_46;
    MR_Word NonLocals_47;
    MR_Word InstMapDelta_48;
    MR_Word GoalInfo_49;
    MR_Word Var_50;
    MR_Word STATE_VARIABLE_Info_27_51;

    check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(STATE_VARIABLE_Info_0_22, &VarSet0_36);
    check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_22, &VarTypes0_37);
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &ConstVar_18, VarSet0_36, &VarSet_38);
    Var_50 = parse_tree__builtin_lib_types__int_type_0_f_0();
    hlds__vartypes__add_var_type_4_p_0(ConstVar_18, Var_50, VarTypes0_37, &VarTypes_39);
    check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(VarSet_38, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_27_51);
    check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(VarTypes_39, STATE_VARIABLE_Info_27_51, STATE_VARIABLE_Info_23);
    {
      ConstConsId_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConstConsId_40, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), ConstConsId_40, 1) = ((MR_Box) (IntConst_13));
    }
    {
      Unification_41 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Unification_41, 0) = ((MR_Box) (ConstVar_18));
      MR_hl_field(MR_mktag(0), Unification_41, 1) = ((MR_Box) (ConstConsId_40));
      MR_hl_field(MR_mktag(0), Unification_41, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Unification_41, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Unification_41, 4) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Unification_41, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Unification_41, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      RHS_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RHS_42, 0) = ((MR_Box) (ConstConsId_40));
      MR_hl_field(MR_mktag(1), RHS_42, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), RHS_42, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Ground_44 = parse_tree__prog_mode__ground_inst_0_f_0();
    {
      UnifyMode_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnifyMode_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), UnifyMode_45, 1) = ((MR_Box) (Ground_44));
      MR_hl_field(MR_mktag(0), UnifyMode_45, 2) = ((MR_Box) (Ground_44));
      MR_hl_field(MR_mktag(0), UnifyMode_45, 3) = ((MR_Box) (Ground_44));
    }
    {
      GoalExpr_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), GoalExpr_46, 0) = ((MR_Box) (ConstVar_18));
      MR_hl_field(MR_mktag(1), GoalExpr_46, 1) = ((MR_Box) (RHS_42));
      MR_hl_field(MR_mktag(1), GoalExpr_46, 2) = ((MR_Box) (UnifyMode_45));
      MR_hl_field(MR_mktag(1), GoalExpr_46, 3) = ((MR_Box) (Unification_41));
      MR_hl_field(MR_mktag(1), GoalExpr_46, 4) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[77]));
    }
    NonLocals_47 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConstVar_18);
    InstMapDelta_48 = hlds__instmap__instmap_delta_bind_var_1_f_0(ConstVar_18);
    hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_47, InstMapDelta_48, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_49);
    {
      ConstGoal_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ConstGoal_19, 0) = ((MR_Box) (GoalExpr_46));
      MR_hl_field(MR_mktag(0), ConstGoal_19, 1) = ((MR_Box) (GoalInfo_49));
    }
    check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(*STATE_VARIABLE_Info_23, ModuleName_10, Op_11, (MR_Integer) 0, X_12, ConstVar_18, Y_14, &OpGoalExpr_20);
    {
      OpGoal_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), OpGoal_21, 0) = ((MR_Box) (OpGoalExpr_20));
      MR_hl_field(MR_mktag(0), OpGoal_21, 1) = ((MR_Box) (OrigGoalInfo_16));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (OpGoal_21));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (ConstGoal_19));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_28));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *GoalExpr_15 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_27));
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(
  MR_Word Info_9,
  MR_String ModuleName_10,
  MR_String Op_11,
  MR_Word IsBuiltin_12,
  MR_Word X_13,
  MR_Word Y_14,
  MR_Word Z_15,
  MR_Word * GoalExpr_16)
{
  {
    MR_bool succeeded;
    MR_Word ModuleSymName_17;
    MR_Word OpSymName_18;
    MR_Word ModuleInfo_19;
    MR_Word PredTable_20;
    MR_Word OpPredIds_21;
    MR_Word OpPredId_23;
    MR_Integer OpProcId_25;
    MR_Word OpArgs_26;
    MR_Word Var_28;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word OpPredIdPrime_22;
    MR_Word Var_31;

    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (ModuleName_10));
    }
    ModuleSymName_17 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0(Var_28);
    {
      OpSymName_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), OpSymName_18, 0) = ((MR_Box) (ModuleSymName_17));
      MR_hl_field(MR_mktag(1), OpSymName_18, 1) = ((MR_Box) (Op_11));
    }
    check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(Info_9, &ModuleInfo_19);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_19, &PredTable_20);
    hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(PredTable_20, (MR_Integer) 0, OpSymName_18, (MR_Integer) 2, &OpPredIds_21);
    succeeded = (OpPredIds_21 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      OpPredIdPrime_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OpPredIds_21, (MR_Integer) 0))));
      Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OpPredIds_21, (MR_Integer) 1))));
      succeeded = (Var_31 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
      OpPredId_23 = OpPredIdPrime_22;
    else
    {
      MR_String Var_33;

      Var_33 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find ", Op_11);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_make_binary_op_goal_expr\'/8", Var_33);
        return;
      }
    }
    hlds__hlds_pred__proc_id_to_int_2_p_1(&OpProcId_25, (MR_Integer) 0);
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Z_15));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Y_14));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_36));
    }
    {
      OpArgs_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), OpArgs_26, 0) = ((MR_Box) (X_13));
      MR_hl_field(MR_mktag(1), OpArgs_26, 1) = ((MR_Box) (Var_35));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      *GoalExpr_16 = base;
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (OpPredId_23));
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (OpProcId_25));
      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (OpArgs_26));
      MR_hl_field(MR_mktag(2), base, 3) = (MR_Box) ((MR_Unsigned) (IsBuiltin_12));
      MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (OpSymName_18));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_95_91_49_93_95_48_7_p_0(
  MR_Word Args_9,
  MR_Word Context_10,
  MR_Word * GoalExpr_11,
  MR_Word * GoalInfo_12,
  MR_Word STATE_VARIABLE_Info_0_36,
  MR_Word * STATE_VARIABLE_Info_37)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_86_86;
    MR_Word TypeCtorInfo_87_87;
    MR_Word ModuleInfo_14;
    MR_Word Globals_15;
    MR_Word Y_16;
    MR_Word X_17;
    MR_Word R_18;
    MR_Word VarTypes_20;
    MR_Word Type_21;
    MR_Word CmpEqGoal_22;
    MR_Word CmpLtGoal_23;
    MR_Word Builtin_24;
    MR_Word CmpRes_25;
    MR_Word CmpResTypeCtor_26;
    MR_Word FunctorResultLt_27;
    MR_Word FunctorResultEq_28;
    MR_Word FunctorResultGt_29;
    MR_Word ReturnLtGoal_30;
    MR_Word ReturnEqGoal_31;
    MR_Word ReturnGtGoal_32;
    MR_Word NonLocals_33;
    MR_Word ReturnLtGtGoalExpr_34;
    MR_Word ReturnLtGtGoal_35;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_String Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_String Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_65;
    MR_String Var_66;
    MR_Integer Var_67;
    MR_Word Var_68;
    MR_String Var_69;
    MR_Integer Var_70;
    MR_Word Var_71;
    MR_String Var_72;
    MR_Integer Var_73;
    MR_Word Var_74;
    MR_String Var_75;
    MR_Integer Var_76;
    MR_Word Var_77;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;

    check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_36, &ModuleInfo_14);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_14, &Globals_15);
    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_15, (MR_Integer) 299, (MR_Integer) 1);
    if (succeeded)
    {
      TypeInfo_86_86 = (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[0]);
      mercury__list__reverse_2_p_0(TypeInfo_86_86, Args_9, &Var_40);
      succeeded = (Var_40 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Y_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 0))));
        Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 1))));
        succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          X_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 0))));
          Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 1))));
          succeeded = (Var_42 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            R_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 0))));
            check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_36, &VarTypes_20);
            hlds__vartypes__lookup_var_type_3_p_0(VarTypes_20, Y_16, &Type_21);
            succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_equality_pred_2_p_0(ModuleInfo_14, Type_21);
            if (succeeded)
            {
              Var_43 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
              Var_44 = (MR_String) "builtin_compound_eq";
              Var_45 = (MR_Integer) 0;
              Var_46 = (MR_Word) ((MR_Unsigned) 0U);
              Var_47 = (MR_Integer) 1;
              Var_48 = (MR_Integer) 0;
              Var_53 = (MR_Word) ((MR_Unsigned) 0U);
              Var_50 = (MR_Word) ((MR_Unsigned) 0U);
              {
                Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Y_16));
                MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_53));
              }
              {
                Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (X_17));
                MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_52));
              }
              Var_51 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
              hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_14, Var_43, Var_44, Var_45, Var_46, Var_47, Var_48, Var_49, Var_50, Var_51, Context_10, &CmpEqGoal_22);
              Var_54 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
              Var_55 = (MR_String) "builtin_compound_lt";
              Var_56 = (MR_Integer) 0;
              Var_57 = (MR_Word) ((MR_Unsigned) 0U);
              Var_58 = (MR_Integer) 1;
              Var_59 = (MR_Integer) 0;
              Var_61 = (MR_Word) ((MR_Unsigned) 0U);
              Var_62 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
              hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_14, Var_54, Var_55, Var_56, Var_57, Var_58, Var_59, Var_49, Var_61, Var_62, Context_10, &CmpLtGoal_23);
              Builtin_24 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              Var_65 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              Var_66 = (MR_String) "comparison_result";
              Var_67 = (MR_Integer) 0;
              Var_69 = (MR_String) "<";
              Var_70 = (MR_Integer) 0;
              Var_72 = (MR_String) "=";
              Var_73 = (MR_Integer) 0;
              Var_75 = (MR_String) ">";
              Var_76 = (MR_Integer) 0;
              {
                CmpRes_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), CmpRes_25, 0) = ((MR_Box) (Var_65));
                MR_hl_field(MR_mktag(1), CmpRes_25, 1) = ((MR_Box) (Var_66));
              }
              {
                CmpResTypeCtor_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), CmpResTypeCtor_26, 0) = ((MR_Box) (CmpRes_25));
                MR_hl_field(MR_mktag(0), CmpResTypeCtor_26, 1) = ((MR_Box) (Var_67));
              }
              {
                Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Builtin_24));
                MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_69));
              }
              {
                FunctorResultLt_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), FunctorResultLt_27, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), FunctorResultLt_27, 1) = ((MR_Box) (Var_68));
                MR_hl_field(MR_mktag(3), FunctorResultLt_27, 2) = ((MR_Box) (Var_70));
                MR_hl_field(MR_mktag(3), FunctorResultLt_27, 3) = ((MR_Box) (CmpResTypeCtor_26));
              }
              {
                Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Builtin_24));
                MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_72));
              }
              {
                FunctorResultEq_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), FunctorResultEq_28, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), FunctorResultEq_28, 1) = ((MR_Box) (Var_71));
                MR_hl_field(MR_mktag(3), FunctorResultEq_28, 2) = ((MR_Box) (Var_73));
                MR_hl_field(MR_mktag(3), FunctorResultEq_28, 3) = ((MR_Box) (CmpResTypeCtor_26));
              }
              {
                Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Builtin_24));
                MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_75));
              }
              {
                FunctorResultGt_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), FunctorResultGt_29, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), FunctorResultGt_29, 1) = ((MR_Box) (Var_74));
                MR_hl_field(MR_mktag(3), FunctorResultGt_29, 2) = ((MR_Box) (Var_76));
                MR_hl_field(MR_mktag(3), FunctorResultGt_29, 3) = ((MR_Box) (CmpResTypeCtor_26));
              }
              hlds__make_goal__make_const_construction_4_p_0(Context_10, R_18, FunctorResultLt_27, &ReturnLtGoal_30);
              hlds__make_goal__make_const_construction_4_p_0(Context_10, R_18, FunctorResultEq_28, &ReturnEqGoal_31);
              hlds__make_goal__make_const_construction_4_p_0(Context_10, R_18, FunctorResultGt_29, &ReturnGtGoal_32);
              TypeCtorInfo_87_87 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              {
                Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (R_18));
                MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_49));
              }
              NonLocals_33 = parse_tree__set_of_var__list_to_set_1_f_0(TypeCtorInfo_87_87, Var_77);
              Var_81 = hlds__instmap__instmap_delta_bind_var_1_f_0(R_18);
              Var_82 = (MR_Integer) 0;
              Var_83 = (MR_Integer) 0;
              hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_33, Var_81, Var_82, Var_83, Context_10, GoalInfo_12);
              Var_84 = (MR_Word) ((MR_Unsigned) 0U);
              Var_85 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Info_37 = STATE_VARIABLE_Info_0_36;
              {
                ReturnLtGtGoalExpr_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ReturnLtGtGoalExpr_34, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), ReturnLtGtGoalExpr_34, 1) = ((MR_Box) (Var_84));
                MR_hl_field(MR_mktag(3), ReturnLtGtGoalExpr_34, 2) = ((MR_Box) (CmpLtGoal_23));
                MR_hl_field(MR_mktag(3), ReturnLtGtGoalExpr_34, 3) = ((MR_Box) (ReturnLtGoal_30));
                MR_hl_field(MR_mktag(3), ReturnLtGtGoalExpr_34, 4) = ((MR_Box) (ReturnGtGoal_32));
              }
              {
                ReturnLtGtGoal_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ReturnLtGtGoal_35, 0) = ((MR_Box) (ReturnLtGtGoalExpr_34));
                MR_hl_field(MR_mktag(0), ReturnLtGtGoal_35, 1) = ((MR_Box) (*GoalInfo_12));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_11 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_85));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (CmpEqGoal_22));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ReturnEqGoal_31));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ReturnLtGtGoal_35));
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
check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(
  MR_String PredName_4,
  MR_Word Args_5,
  MR_Word * ImprovedGoalExpr_6)
{
  {
    MR_bool succeeded = (Args_5 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    if (succeeded)
    {
      Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_5, (MR_Integer) 0))));
      Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_5, (MR_Integer) 1))));
      succeeded = (Var_15 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 0))));
        Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 1))));
        succeeded = (Var_17 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          // binary string jump switch
          ;
          lo_0 = (MR_Integer) 0;
          hi_1 = (MR_Integer) 3;
          do
          {
            mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
            result_3 = MR_strcmp(PredName_4, ((&check_hlds__simplify__simplify_goal_call_vector_common_7[9 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_7_0__vct_7_f_0);
            if ((result_3 == (MR_Integer) 0))
            {
              switch (((&check_hlds__simplify__simplify_goal_call_vector_common_7[9 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_7_0__vct_7_f_1) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    // case "<", ">"
                    ;
                    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[0]), ((MR_Box) (Var_16)), ((MR_Box) (Var_18)));
                    if (succeeded)
                    {
                      *ImprovedGoalExpr_6 = hlds__make_goal__fail_goal_expr_0_f_0();
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    // case "=<", ">="
                    ;
                    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[0]), ((MR_Box) (Var_16)), ((MR_Box) (Var_18)));
                    if (succeeded)
                    {
                      *ImprovedGoalExpr_6 = hlds__make_goal__true_goal_expr_0_f_0();
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
              }
              // jump out of search loop
              ;
              goto label_0;
            }
            else
            if ((result_3 < (MR_Integer) 0))
              hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
            else
              lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
          }
          while ((lo_0 <= hi_1));
          succeeded = MR_FALSE;
        label_0:;
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_improve_builtin_compare_int_uint_8_p_0(
  MR_Word Info_9,
  MR_String TypeName_10,
  MR_Word R_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_Word Context_14,
  MR_Word * GoalExpr_15,
  MR_Word * GoalInfo_16)
{
  {
    MR_bool succeeded;
    MR_Word ModuleSymName_17;
    MR_String PredNameLt_18;
    MR_String PredNameGt_19;
    MR_Word CmpLtGoal_20;
    MR_Word CmpGtGoal_21;
    MR_String Var_23;
    MR_String Var_26;
    MR_Word OpSymName_38;
    MR_Word ModuleInfo_39;
    MR_Word PredTable_40;
    MR_Word OpPredIds_41;
    MR_Word OpPredId_43;
    MR_Integer OpProcId_45;
    MR_Word OpArgs_46;
    MR_Word GoalExpr_48;
    MR_Word GoalInfo_49;
    MR_Word Var_56;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word OpPredIdPrime_42;
    MR_Word Var_52;

    ModuleSymName_17 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    Var_23 = mercury__string__f_43_43_2_f_0(TypeName_10, (MR_String) "_lt");
    PredNameLt_18 = mercury__string__f_43_43_2_f_0((MR_String) "builtin_", Var_23);
    Var_26 = mercury__string__f_43_43_2_f_0(TypeName_10, (MR_String) "_gt");
    PredNameGt_19 = mercury__string__f_43_43_2_f_0((MR_String) "builtin_", Var_26);
    {
      OpSymName_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), OpSymName_38, 0) = ((MR_Box) (ModuleSymName_17));
      MR_hl_field(MR_mktag(1), OpSymName_38, 1) = ((MR_Box) (PredNameLt_18));
    }
    check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(Info_9, &ModuleInfo_39);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_39, &PredTable_40);
    hlds__pred_table__predicate_table_lookup_pred_sym_arity_5_p_0(PredTable_40, (MR_Integer) 0, OpSymName_38, (MR_Integer) 2, &OpPredIds_41);
    succeeded = (OpPredIds_41 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      OpPredIdPrime_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OpPredIds_41, (MR_Integer) 0))));
      Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OpPredIds_41, (MR_Integer) 1))));
      succeeded = (Var_52 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
      OpPredId_43 = OpPredIdPrime_42;
    else
    {
      MR_String Var_54;

      Var_54 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find ", PredNameLt_18);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_make_cmp_goal_expr\'/8", Var_54);
        return;
      }
    }
    hlds__hlds_pred__proc_id_to_int_2_p_1(&OpProcId_45, (MR_Integer) 0);
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Y_13));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      OpArgs_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), OpArgs_46, 0) = ((MR_Box) (X_12));
      MR_hl_field(MR_mktag(1), OpArgs_46, 1) = ((MR_Box) (Var_56));
    }
    {
      GoalExpr_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), GoalExpr_48, 0) = ((MR_Box) (OpPredId_43));
      MR_hl_field(MR_mktag(2), GoalExpr_48, 1) = ((MR_Box) (OpProcId_45));
      MR_hl_field(MR_mktag(2), GoalExpr_48, 2) = ((MR_Box) (OpArgs_46));
      MR_hl_field(MR_mktag(2), GoalExpr_48, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), GoalExpr_48, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(2), GoalExpr_48, 5) = ((MR_Box) (OpSymName_38));
    }
    Var_58 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OpArgs_46);
    Var_59 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    hlds__hlds_goal__goal_info_init_6_p_0(Var_58, Var_59, (MR_Integer) 1, (MR_Integer) 0, Context_14, &GoalInfo_49);
    {
      CmpLtGoal_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CmpLtGoal_20, 0) = ((MR_Box) (GoalExpr_48));
      MR_hl_field(MR_mktag(0), CmpLtGoal_20, 1) = ((MR_Box) (GoalInfo_49));
    }
    check_hlds__simplify__simplify_goal_call__simplify_make_cmp_goal_expr_8_p_0(Info_9, ModuleSymName_17, PredNameGt_19, (MR_Integer) 0, X_12, Y_13, Context_14, &CmpGtGoal_21);
    check_hlds__simplify__simplify_goal_call__simplify_build_compare_ite_8_p_0(CmpLtGoal_20, CmpGtGoal_21, R_11, X_12, Y_13, Context_14, GoalExpr_15, GoalInfo_16);
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_make_cmp_goal_expr_8_p_0(
  MR_Word Info_9,
  MR_Word ModuleSymName_10,
  MR_String Op_11,
  MR_Word IsBuiltin_12,
  MR_Word X_13,
  MR_Word Y_14,
  MR_Word Context_15,
  MR_Word * Goal_16)
{
  {
    MR_bool succeeded;
    MR_Word OpSymName_17;
    MR_Word ModuleInfo_18;
    MR_Word PredTable_19;
    MR_Word OpPredIds_20;
    MR_Word OpPredId_22;
    MR_Integer OpProcId_24;
    MR_Word OpArgs_25;
    MR_Word GoalExpr_27;
    MR_Word GoalInfo_28;
    MR_Word Var_35;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word OpPredIdPrime_21;
    MR_Word Var_31;

    {
      OpSymName_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), OpSymName_17, 0) = ((MR_Box) (ModuleSymName_10));
      MR_hl_field(MR_mktag(1), OpSymName_17, 1) = ((MR_Box) (Op_11));
    }
    check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(Info_9, &ModuleInfo_18);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_18, &PredTable_19);
    hlds__pred_table__predicate_table_lookup_pred_sym_arity_5_p_0(PredTable_19, (MR_Integer) 0, OpSymName_17, (MR_Integer) 2, &OpPredIds_20);
    succeeded = (OpPredIds_20 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      OpPredIdPrime_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OpPredIds_20, (MR_Integer) 0))));
      Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OpPredIds_20, (MR_Integer) 1))));
      succeeded = (Var_31 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
      OpPredId_22 = OpPredIdPrime_21;
    else
    {
      MR_String Var_33;

      Var_33 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find ", Op_11);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_make_cmp_goal_expr\'/8", Var_33);
        return;
      }
    }
    hlds__hlds_pred__proc_id_to_int_2_p_1(&OpProcId_24, (MR_Integer) 0);
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Y_14));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      OpArgs_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), OpArgs_25, 0) = ((MR_Box) (X_13));
      MR_hl_field(MR_mktag(1), OpArgs_25, 1) = ((MR_Box) (Var_35));
    }
    {
      GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), GoalExpr_27, 0) = ((MR_Box) (OpPredId_22));
      MR_hl_field(MR_mktag(2), GoalExpr_27, 1) = ((MR_Box) (OpProcId_24));
      MR_hl_field(MR_mktag(2), GoalExpr_27, 2) = ((MR_Box) (OpArgs_25));
      MR_hl_field(MR_mktag(2), GoalExpr_27, 3) = (MR_Box) ((MR_Unsigned) (IsBuiltin_12));
      MR_hl_field(MR_mktag(2), GoalExpr_27, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(2), GoalExpr_27, 5) = ((MR_Box) (OpSymName_17));
    }
    Var_37 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OpArgs_25);
    Var_38 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    hlds__hlds_goal__goal_info_init_6_p_0(Var_37, Var_38, (MR_Integer) 1, (MR_Integer) 0, Context_15, &GoalInfo_28);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_27));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_28));
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_build_compare_ite_8_p_0(
  MR_Word CmpLtGoal_9,
  MR_Word CmpGtGoal_10,
  MR_Word R_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_Word Context_14,
  MR_Word * GoalExpr_15,
  MR_Word * GoalInfo_16)
{
  {
    MR_bool succeeded;
    MR_Word Builtin_17;
    MR_Word CmpRes_18;
    MR_Word CmpResTypeCtor_19;
    MR_Word FunctorResultLt_20;
    MR_Word FunctorResultEq_21;
    MR_Word FunctorResultGt_22;
    MR_Word ReturnLtGoal_23;
    MR_Word ReturnEqGoal_24;
    MR_Word ReturnGtGoal_25;
    MR_Word Var_29;
    MR_Word Var_32;
    MR_Word Var_35;
    MR_Word Var_38;

    Builtin_17 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    Var_29 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      CmpRes_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CmpRes_18, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(1), CmpRes_18, 1) = ((MR_Box) ((MR_String) "comparison_result"));
    }
    {
      CmpResTypeCtor_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CmpResTypeCtor_19, 0) = ((MR_Box) (CmpRes_18));
      MR_hl_field(MR_mktag(0), CmpResTypeCtor_19, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Builtin_17));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) ((MR_String) "<"));
    }
    {
      FunctorResultLt_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), FunctorResultLt_20, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), FunctorResultLt_20, 1) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(3), FunctorResultLt_20, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), FunctorResultLt_20, 3) = ((MR_Box) (CmpResTypeCtor_19));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Builtin_17));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_String) "="));
    }
    {
      FunctorResultEq_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), FunctorResultEq_21, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), FunctorResultEq_21, 1) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(3), FunctorResultEq_21, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), FunctorResultEq_21, 3) = ((MR_Box) (CmpResTypeCtor_19));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Builtin_17));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_String) ">"));
    }
    {
      FunctorResultGt_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), FunctorResultGt_22, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), FunctorResultGt_22, 1) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(3), FunctorResultGt_22, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), FunctorResultGt_22, 3) = ((MR_Box) (CmpResTypeCtor_19));
    }
    hlds__make_goal__make_const_construction_4_p_0(Context_14, R_11, FunctorResultLt_20, &ReturnLtGoal_23);
    hlds__make_goal__make_const_construction_4_p_0(Context_14, R_11, FunctorResultEq_21, &ReturnEqGoal_24);
    hlds__make_goal__make_const_construction_4_p_0(Context_14, R_11, FunctorResultGt_22, &ReturnGtGoal_25);
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[0]), ((MR_Box) (X_12)), ((MR_Box) (Y_13)));
    if (succeeded)
    {
      *GoalExpr_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReturnEqGoal_24, (MR_Integer) 0))));
      *GoalInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReturnEqGoal_24, (MR_Integer) 1))));
    }
    else
    {
      MR_Word NonLocals_26;
      MR_Word ReturnGtEqGoalExpr_27;
      MR_Word ReturnGtEqGoal_28;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_45;

      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Y_13));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (X_12));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_43));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (R_11));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_42));
      }
      NonLocals_26 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_41);
      Var_45 = hlds__instmap__instmap_delta_bind_var_1_f_0(R_11);
      hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_26, Var_45, (MR_Integer) 0, (MR_Integer) 0, Context_14, GoalInfo_16);
      {
        ReturnGtEqGoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ReturnGtEqGoalExpr_27, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(MR_mktag(3), ReturnGtEqGoalExpr_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), ReturnGtEqGoalExpr_27, 2) = ((MR_Box) (CmpGtGoal_10));
        MR_hl_field(MR_mktag(3), ReturnGtEqGoalExpr_27, 3) = ((MR_Box) (ReturnGtGoal_25));
        MR_hl_field(MR_mktag(3), ReturnGtEqGoalExpr_27, 4) = ((MR_Box) (ReturnEqGoal_24));
      }
      {
        ReturnGtEqGoal_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ReturnGtEqGoal_28, 0) = ((MR_Box) (ReturnGtEqGoalExpr_27));
        MR_hl_field(MR_mktag(0), ReturnGtEqGoal_28, 1) = ((MR_Box) (*GoalInfo_16));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        *GoalExpr_15 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (CmpLtGoal_9));
        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ReturnLtGoal_23));
        MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ReturnGtEqGoal_28));
      }
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(
  MR_Word TI_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_String Inequality_14,
  MR_Word Invert_15,
  MR_Word GoalInfo_16,
  MR_Word * ImprovedGoalExpr_17,
  MR_Word InstMap0_18,
  MR_Word STATE_VARIABLE_Info_0_53,
  MR_Word * STATE_VARIABLE_Info_54)
{
  {
    MR_bool succeeded;
    MR_Word VarSet0_20;
    MR_Word CmpRes_21;
    MR_Word VarSet_22;
    MR_Word VarTypes0_23;
    MR_Word VarTypes_24;
    MR_Word Context_25;
    MR_Word Args_26;
    MR_Word XInst_27;
    MR_Word YInst_28;
    MR_Word ModuleInfo_29;
    MR_Integer ModeNo_30;
    MR_Word Unique_31;
    MR_Word ArgInsts_32;
    MR_Word BuiltinModule_33;
    MR_Word CmpGoal0_34;
    MR_Word CmpExpr_35;
    MR_Word CmpInfo0_36;
    MR_Word CmpNonLocals0_37;
    MR_Word CmpNonLocals_38;
    MR_Word CmpInfo_39;
    MR_Word CmpGoal_40;
    MR_Word TypeCtor_41;
    MR_Word ConsId_42;
    MR_Word Bound_43;
    MR_Word UnifyMode_44;
    MR_Word RHS_45;
    MR_Word UKind_46;
    MR_Word UnifyExpr_48;
    MR_Word UnifyNonLocals0_49;
    MR_Word UnifyNonLocals_50;
    MR_Word UnifyInfo_51;
    MR_Word UnifyGoal_52;
    MR_Word STATE_VARIABLE_Info_55_55;
    MR_Word Var_56;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_64;
    MR_Word Var_68;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_77;
    MR_Word Var_81;
    MR_Word Var_82;

    check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(STATE_VARIABLE_Info_0_53, &VarSet0_20);
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &CmpRes_21, VarSet0_20, &VarSet_22);
    check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(VarSet_22, STATE_VARIABLE_Info_0_53, &STATE_VARIABLE_Info_55_55);
    check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(STATE_VARIABLE_Info_55_55, &VarTypes0_23);
    Var_56 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
    hlds__vartypes__add_var_type_4_p_0(CmpRes_21, Var_56, VarTypes0_23, &VarTypes_24);
    check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(VarTypes_24, STATE_VARIABLE_Info_55_55, STATE_VARIABLE_Info_54);
    Context_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_16);
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Y_13));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (X_12));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_60));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (CmpRes_21));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_59));
    }
    {
      Args_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Args_26, 0) = ((MR_Box) (TI_11));
      MR_hl_field(MR_mktag(1), Args_26, 1) = ((MR_Box) (Var_58));
    }
    hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_18, X_12, &XInst_27);
    hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_18, Y_13, &YInst_28);
    check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(*STATE_VARIABLE_Info_54, &ModuleInfo_29);
    succeeded = check_hlds__inst_test__inst_is_unique_2_p_0(ModuleInfo_29, XInst_27);
    if (succeeded)
    {
      succeeded = check_hlds__inst_test__inst_is_unique_2_p_0(ModuleInfo_29, YInst_28);
      if (succeeded)
        ModeNo_30 = (MR_Integer) 1;
      else
        ModeNo_30 = (MR_Integer) 2;
    }
    else
    {
      succeeded = check_hlds__inst_test__inst_is_unique_2_p_0(ModuleInfo_29, YInst_28);
      if (succeeded)
        ModeNo_30 = (MR_Integer) 3;
      else
        ModeNo_30 = (MR_Integer) 0;
    }
    Unique_31 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_2[3]));
    {
      Var_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (CmpRes_21));
      MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (Unique_31));
    }
    {
      ArgInsts_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ArgInsts_32, 0) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(1), ArgInsts_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    BuiltinModule_33 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (ModeNo_30));
    }
    Var_72 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(ArgInsts_32);
    hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_29, BuiltinModule_33, (MR_String) "compare", (MR_Integer) 0, Var_68, (MR_Integer) 0, (MR_Integer) 0, Args_26, (MR_Word) ((MR_Unsigned) 0U), Var_72, Context_25, &CmpGoal0_34);
    CmpExpr_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CmpGoal0_34, (MR_Integer) 0))));
    CmpInfo0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CmpGoal0_34, (MR_Integer) 1))));
    CmpNonLocals0_37 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(CmpInfo0_36);
    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CmpRes_21, CmpNonLocals0_37, &CmpNonLocals_38);
    hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(CmpNonLocals_38, CmpInfo0_36, &CmpInfo_39);
    {
      CmpGoal_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CmpGoal_40, 0) = ((MR_Box) (CmpExpr_35));
      MR_hl_field(MR_mktag(0), CmpGoal_40, 1) = ((MR_Box) (CmpInfo_39));
    }
    Var_74 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_String) "comparison_result"));
    }
    {
      TypeCtor_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_41, 0) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(0), TypeCtor_41, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (BuiltinModule_33));
      MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Inequality_14));
    }
    {
      ConsId_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsId_42, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), ConsId_42, 1) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(3), ConsId_42, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ConsId_42, 3) = ((MR_Box) (TypeCtor_41));
    }
    {
      Var_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (ConsId_42));
      MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Bound_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Bound_43, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Bound_43, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Bound_43, 2) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), Bound_43, 3) = ((MR_Box) (Var_81));
    }
    {
      UnifyMode_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnifyMode_44, 0) = ((MR_Box) (Unique_31));
      MR_hl_field(MR_mktag(0), UnifyMode_44, 1) = ((MR_Box) (Bound_43));
      MR_hl_field(MR_mktag(0), UnifyMode_44, 2) = ((MR_Box) (Bound_43));
      MR_hl_field(MR_mktag(0), UnifyMode_44, 3) = ((MR_Box) (Bound_43));
    }
    {
      RHS_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RHS_45, 0) = ((MR_Box) (ConsId_42));
      MR_hl_field(MR_mktag(1), RHS_45, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), RHS_45, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      UKind_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), UKind_46, 0) = ((MR_Box) (CmpRes_21));
      MR_hl_field(MR_mktag(1), UKind_46, 1) = ((MR_Box) (ConsId_42));
      MR_hl_field(MR_mktag(1), UKind_46, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), UKind_46, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), UKind_46, 4) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
    }
    {
      UnifyExpr_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), UnifyExpr_48, 0) = ((MR_Box) (CmpRes_21));
      MR_hl_field(MR_mktag(1), UnifyExpr_48, 1) = ((MR_Box) (RHS_45));
      MR_hl_field(MR_mktag(1), UnifyExpr_48, 2) = ((MR_Box) (UnifyMode_44));
      MR_hl_field(MR_mktag(1), UnifyExpr_48, 3) = ((MR_Box) (UKind_46));
      MR_hl_field(MR_mktag(1), UnifyExpr_48, 4) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[76]));
    }
    UnifyNonLocals0_49 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_16);
    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CmpRes_21, UnifyNonLocals0_49, &UnifyNonLocals_50);
    hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(UnifyNonLocals_50, GoalInfo_16, &UnifyInfo_51);
    {
      UnifyGoal_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnifyGoal_52, 0) = ((MR_Box) (UnifyExpr_48));
      MR_hl_field(MR_mktag(0), UnifyGoal_52, 1) = ((MR_Box) (UnifyInfo_51));
    }
    switch (Invert_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_103;
          MR_Word Var_104;

          {
            Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (UnifyGoal_52));
            MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (CmpGoal_40));
            MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) (Var_104));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *ImprovedGoalExpr_17 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_103));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_97;
          MR_Word Var_98;
          MR_Word Var_99;
          MR_Word Var_100 = (MR_Word) ((MR_Word) (UnifyGoal_52));

          {
            Var_99 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_99, 0) = ((MR_Box) (Var_100));
            MR_hl_field(MR_mktag(0), Var_99, 1) = ((MR_Box) (UnifyInfo_51));
          }
          {
            Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (Var_99));
            MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (CmpGoal_40));
            MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) (Var_98));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *ImprovedGoalExpr_17 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_97));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_useless_comparison_6_p_0(
  MR_Word PredInfo_7,
  MR_Word InstMap_8,
  MR_Word Args_9,
  MR_Word GoalInfo_10,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27)
{
  {
    MR_bool succeeded;
    MR_Word PredOrFunc_12;
    MR_Word ModuleSymName_13;
    MR_String ModuleName_14;
    MR_Word ArgA_15;
    MR_Word ArgB_16;
    MR_Word Var_28;
    MR_Word Var_29;

    PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_7);
    ModuleSymName_13 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_7);
    succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(ModuleSymName_13, &ModuleName_14);
    if (succeeded)
    {
      succeeded = (PredOrFunc_12 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ArgA_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
          Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
          succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ArgB_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 0))));
            Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_28, (MR_Integer) 1))));
            succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_simple_code_1_p_0(STATE_VARIABLE_Info_0_26);
          }
        }
      }
    }
    if (succeeded)
    {
      MR_String PredName_17;
      MR_Word InstA_18;
      MR_Word InstB_19;
      MR_Word WarnPieces_20;

      hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfo_7, &PredName_17);
      hlds__instmap__instmap_lookup_var_3_p_0(InstMap_8, ArgA_15, &InstA_18);
      hlds__instmap__instmap_lookup_var_3_p_0(InstMap_8, ArgB_16, &InstB_19);
      succeeded = check_hlds__simplify__simplify_goal_call__is_useless_unsigned_comparison_5_p_0(ModuleName_14, PredName_17, InstA_18, InstB_19, &WarnPieces_20);
      if (succeeded)
      {
        MR_Word GoalContext_21;
        MR_Word PredPieces_22;
        MR_Word Pieces_23;
        MR_Word Msg_24;
        MR_Word Spec_25;
        MR_Word Var_35;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_40;
        MR_Word Var_41;
        MR_Word Var_47;

        GoalContext_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_10);
        PredPieces_22 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 0, PredInfo_7);
        Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredPieces_22, WarnPieces_20);
        Pieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[75])), Var_35);
        {
          Var_41 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (Pieces_23));
        }
        {
          Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
          MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_37, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 25) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
          MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_40));
        }
        {
          Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
          MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Msg_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Msg_24, 0) = ((MR_Box) (GoalContext_21));
          MR_hl_field(MR_mktag(1), Msg_24, 1) = ((MR_Box) (Var_36));
        }
        {
          Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Msg_24));
          MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_25, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(0), Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_5[0])));
          MR_hl_field(MR_mktag(0), Spec_25, 2) = ((MR_Box) (Var_47));
        }
        check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_25, STATE_VARIABLE_Info_0_26, STATE_VARIABLE_Info_27);
      }
      else
        *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_0_26;
    }
    else
      *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_0_26;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__is_useless_unsigned_comparison_5_p_0(
  MR_String ModuleName_6,
  MR_String PredName_7,
  MR_Word ArgA_8,
  MR_Word ArgB_9,
  MR_Word * Pieces_10)
{
  {
    MR_bool succeeded;
    MR_Integer lo_0 = (MR_Integer) 0;
    MR_Integer hi_1 = (MR_Integer) 3;
    MR_Integer mid_2;
    MR_Integer result_3;

    // binary string jump switch
    ;
    do
    {
      mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
      result_3 = MR_strcmp(PredName_7, ((&check_hlds__simplify__simplify_goal_call_vector_common_7[5 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_7_0__vct_7_f_0);
      if ((result_3 == (MR_Integer) 0))
      {
        switch (((&check_hlds__simplify__simplify_goal_call_vector_common_7[5 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_7_0__vct_7_f_1) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              // case "<"
              ;
              {
                MR_Word Var_27;
                MR_Word Var_29;
                MR_Word Var_30;
                MR_Word Var_31;
                MR_Word Var_32;
                MR_Word Var_34;
                MR_Word Var_35;
                MR_Word Var_36;
                MR_Word Var_37;
                MR_Word Var_39;
                MR_Word Var_40;
                MR_Word Var_41;
                MR_String ZeroStr_85;

                succeeded = check_hlds__simplify__simplify_goal_call__arg_is_unsigned_zero_3_p_0(ModuleName_6, ArgB_9, &ZeroStr_85);
                if (succeeded)
                {
                  Var_30 = (MR_Word) ((MR_Unsigned) 4U);
                  Var_27 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[66]));
                  Var_32 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[72]));
                  {
                    Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (ModuleName_6));
                  }
                  Var_37 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[73]));
                  {
                    Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_40, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), Var_40, 1) = ((MR_Box) (ZeroStr_85));
                  }
                  Var_41 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[65]));
                  {
                    Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
                    MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_41));
                  }
                  {
                    Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
                    MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_39));
                  }
                  {
                    Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
                    MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_36));
                  }
                  {
                    Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
                    MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_34));
                  }
                  {
                    Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
                    MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Pieces_10 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_27));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_29));
                  }
                  succeeded = MR_TRUE;
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              // case "=<"
              ;
              {
                MR_Word Var_45;
                MR_Word Var_47;
                MR_Word Var_48;
                MR_Word Var_49;
                MR_Word Var_50;
                MR_Word Var_51;
                MR_Word Var_52;
                MR_Word Var_54;
                MR_Word Var_55;
                MR_Word Var_57;
                MR_Word Var_58;
                MR_Word Var_59;
                MR_String ZeroStr_84;

                succeeded = check_hlds__simplify__simplify_goal_call__arg_is_unsigned_zero_3_p_0(ModuleName_6, ArgA_8, &ZeroStr_84);
                if (succeeded)
                {
                  Var_48 = (MR_Word) ((MR_Unsigned) 4U);
                  Var_45 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[60]));
                  {
                    Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), Var_50, 1) = ((MR_Box) (ZeroStr_84));
                  }
                  Var_52 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[70]));
                  Var_55 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[71]));
                  {
                    Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (ModuleName_6));
                  }
                  Var_59 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[69]));
                  {
                    Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
                    MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_59));
                  }
                  {
                    Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
                    MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_57));
                  }
                  {
                    Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
                    MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_54));
                  }
                  {
                    Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
                    MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_51));
                  }
                  {
                    Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
                    MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_49));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Pieces_10 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_45));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_47));
                  }
                  succeeded = MR_TRUE;
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              // case ">"
              ;
              {
                MR_Word Var_12;
                MR_Word Var_14;
                MR_Word Var_15;
                MR_Word Var_16;
                MR_Word Var_17;
                MR_Word Var_18;
                MR_Word Var_19;
                MR_Word Var_21;
                MR_Word Var_22;
                MR_Word Var_23;
                MR_String ZeroStr_86;

                succeeded = check_hlds__simplify__simplify_goal_call__arg_is_unsigned_zero_3_p_0(ModuleName_6, ArgA_8, &ZeroStr_86);
                if (succeeded)
                {
                  Var_15 = (MR_Word) ((MR_Unsigned) 4U);
                  Var_12 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[66]));
                  {
                    Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), Var_17, 1) = ((MR_Box) (ZeroStr_86));
                  }
                  Var_19 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[67]));
                  {
                    Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (ModuleName_6));
                  }
                  Var_23 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[69]));
                  {
                    Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
                    MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_23));
                  }
                  {
                    Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Var_19));
                    MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_21));
                  }
                  {
                    Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Var_17));
                    MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_18));
                  }
                  {
                    Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (Var_15));
                    MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_16));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Pieces_10 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_12));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_14));
                  }
                  succeeded = MR_TRUE;
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              // case ">="
              ;
              {
                MR_String ZeroStr_11;
                MR_Word Var_63;
                MR_Word Var_65;
                MR_Word Var_66;
                MR_Word Var_67;
                MR_Word Var_68;
                MR_Word Var_70;
                MR_Word Var_71;
                MR_Word Var_72;
                MR_Word Var_73;
                MR_Word Var_75;
                MR_Word Var_76;
                MR_Word Var_78;
                MR_Word Var_79;
                MR_Word Var_80;

                succeeded = check_hlds__simplify__simplify_goal_call__arg_is_unsigned_zero_3_p_0(ModuleName_6, ArgB_9, &ZeroStr_11);
                if (succeeded)
                {
                  Var_66 = (MR_Word) ((MR_Unsigned) 4U);
                  Var_63 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[60]));
                  Var_68 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[61]));
                  {
                    Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), Var_71, 1) = ((MR_Box) (ModuleName_6));
                  }
                  Var_73 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[62]));
                  Var_76 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[63]));
                  {
                    Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_79, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), Var_79, 1) = ((MR_Box) (ZeroStr_11));
                  }
                  Var_80 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[65]));
                  {
                    Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Var_79));
                    MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_80));
                  }
                  {
                    Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_76));
                    MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_78));
                  }
                  {
                    Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
                    MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_75));
                  }
                  {
                    Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
                    MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_72));
                  }
                  {
                    Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
                    MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_70));
                  }
                  {
                    Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
                    MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_67));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Pieces_10 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_63));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_65));
                  }
                  succeeded = MR_TRUE;
                }
              }
            }
            break;
        }
        // jump out of search loop
        ;
        goto label_0;
      }
      else
      if ((result_3 < (MR_Integer) 0))
        hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
      else
        lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
    }
    while ((lo_0 <= hi_1));
    succeeded = MR_FALSE;
  label_0:;
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__arg_is_unsigned_zero_3_p_0(
  MR_String ModuleName_4,
  MR_Word Arg_5,
  MR_String * ZeroStr_6)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Arg_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Arg_5, (MR_Integer) 0)))) == (MR_Integer) 0)));
    MR_Word Var_47;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    if (succeeded)
    {
      Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Arg_5, (MR_Integer) 3))));
      succeeded = (Var_47 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_47, (MR_Integer) 0))));
        Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_47, (MR_Integer) 1))));
        succeeded = (Var_50 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 0))));
          Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 1))));
          succeeded = (Var_52 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            // binary string jump switch
            ;
            lo_0 = (MR_Integer) 0;
            hi_1 = (MR_Integer) 4;
            do
            {
              mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
              result_3 = MR_strcmp(ModuleName_4, ((&check_hlds__simplify__simplify_goal_call_vector_common_7[0 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_7_0__vct_7_f_0);
              if ((result_3 == (MR_Integer) 0))
              {
                switch (((&check_hlds__simplify__simplify_goal_call_vector_common_7[0 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_7_0__vct_7_f_1) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      // case "uint"
                      ;
                      {
                        MR_Unsigned Var_44;

                        succeeded = ((((MR_tag((MR_Word) Var_53)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_53, (MR_Integer) 0)))) == (MR_Integer) 6)));
                        if (succeeded)
                        {
                          Var_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_53, (MR_Integer) 1))));
                          succeeded = (Var_44 == (MR_Unsigned) 0U);
                          if (succeeded)
                          {
                            *ZeroStr_6 = (MR_String) "0u";
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      // case "uint16"
                      ;
                      {
                        uint16_t Var_32;

                        succeeded = ((((MR_tag((MR_Word) Var_53)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_53, (MR_Integer) 0)))) == (MR_Integer) 10)));
                        if (succeeded)
                        {
                          Var_32 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_53, (MR_Integer) 1)));
                          succeeded = (Var_32 == UINT16_C(0));
                          if (succeeded)
                          {
                            *ZeroStr_6 = (MR_String) "0u16";
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      // case "uint32"
                      ;
                      {
                        uint32_t Var_26;

                        succeeded = ((((MR_tag((MR_Word) Var_53)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_53, (MR_Integer) 0)))) == (MR_Integer) 12)));
                        if (succeeded)
                        {
                          Var_26 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_53, (MR_Integer) 1)));
                          succeeded = (Var_26 == UINT32_C(0));
                          if (succeeded)
                          {
                            *ZeroStr_6 = (MR_String) "0u32";
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      // case "uint64"
                      ;
                      {
                        uint64_t Var_20;

                        succeeded = ((((MR_tag((MR_Word) Var_53)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_53, (MR_Integer) 0)))) == (MR_Integer) 14)));
                        if (succeeded)
                        {
                          Var_20 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), Var_53, (MR_Integer) 1)));
                          succeeded = (Var_20 == UINT64_C(0));
                          if (succeeded)
                          {
                            *ZeroStr_6 = (MR_String) "0u64";
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      // case "uint8"
                      ;
                      {
                        uint8_t Var_38;

                        succeeded = ((((MR_tag((MR_Word) Var_53)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_53, (MR_Integer) 0)))) == (MR_Integer) 8)));
                        if (succeeded)
                        {
                          Var_38 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Var_53, (MR_Integer) 1)));
                          succeeded = (Var_38 == UINT8_C(0));
                          if (succeeded)
                          {
                            *ZeroStr_6 = (MR_String) "0u8";
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                    }
                    break;
                }
                // jump out of search loop
                ;
                goto label_0;
              }
              else
              if ((result_3 < (MR_Integer) 0))
                hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
              else
                lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
            }
            while ((lo_0 <= hi_1));
            succeeded = MR_FALSE;
          label_0:;
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0(
  MR_Word PredId_12,
  MR_Integer ProcId_13,
  MR_Word ArgVars_14,
  MR_Word IsBuiltin_15,
  MR_Word PredInfo_16,
  MR_Word ProcInfo_17,
  MR_Word GoalInfo_18,
  MR_Word NestedContext_19,
  MR_Word Common_20,
  MR_Word STATE_VARIABLE_Info_0_46,
  MR_Word * STATE_VARIABLE_Info_47)
{
  {
    MR_bool succeeded;
    MR_Word AllInputsEqv_28;
    MR_Word AllInputsEqvOrSvar_29;
    MR_Word HeadBaseNames_30;
    MR_Word ArgBaseNames_31;
    MR_Word TypeCtorInfo_175_175;
    MR_Word CurPredProcId_22;
    MR_Word ModuleInfo_23;
    MR_Word VarSet_24;
    MR_Word VarNameRemap_25;
    MR_Word HeadVars_26;
    MR_Word ArgModes_27;
    MR_Word Purity_33;
    MR_Unsigned Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_180;
    MR_Integer Var_181;
    MR_Word Var_53;
    MR_Word Var_182;

    succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_simple_code_1_p_0(STATE_VARIABLE_Info_0_46);
    if (succeeded)
    {
      check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_0_46, &CurPredProcId_22);
      Var_180 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CurPredProcId_22, (MR_Integer) 0))));
      Var_181 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CurPredProcId_22, (MR_Integer) 1))));
      succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_12, Var_180);
      if (succeeded)
      {
        succeeded = (ProcId_13 == Var_181);
        if (succeeded)
        {
          succeeded = (IsBuiltin_15 != (MR_Integer) 0);
          if (succeeded)
          {
            Var_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), NestedContext_19, (MR_Integer) 2))));
            succeeded = (Var_48 == (MR_Unsigned) 0U);
            if (succeeded)
            {
              check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_46, &ModuleInfo_23);
              check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(STATE_VARIABLE_Info_0_46, &VarSet_24);
              hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(PredInfo_16, &VarNameRemap_25);
              hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_17, &HeadVars_26);
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_17, &ArgModes_27);
              Var_49 = (MR_Integer) 1;
              Var_50 = (MR_Integer) 1;
              TypeCtorInfo_175_175 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
              Var_51 = mercury__set__init_0_f_0(TypeCtorInfo_175_175);
              Var_52 = mercury__set__init_0_f_0(TypeCtorInfo_175_175);
              succeeded = check_hlds__simplify__simplify_goal_call__input_args_are_suspicious_15_p_0(ModuleInfo_23, Common_20, VarSet_24, VarNameRemap_25, HeadVars_26, ArgVars_14, ArgModes_27, Var_49, &AllInputsEqv_28, Var_50, &AllInputsEqvOrSvar_29, Var_51, &HeadBaseNames_30, Var_52, &ArgBaseNames_31);
              if (succeeded)
              {
                {
                  Var_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_53, 0) = (MR_Box) ((MR_Integer) 0);
                }
                hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ProcInfo_17, &Var_182);
                succeeded = check_hlds__simplify__simplify_goal_call____Unify____parse_tree__prog_data_pragma__eval_method_0_1(Var_53, Var_182);
                succeeded = !(succeeded);
                if (succeeded)
                {
                  hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_16, &Purity_33);
                  succeeded = (Purity_33 != (MR_Integer) 2);
                }
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word NamePieces_34;

      NamePieces_34 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, PredInfo_16);
      switch (AllInputsEqvOrSvar_29) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          switch (AllInputsEqv_28) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word MainPieces_35;
                MR_Word Msgs_37;
                MR_Word Spec_38;
                MR_Word Var_125;
                MR_Word Var_148;
                MR_Word Var_149;
                MR_Word Var_150;
                MR_Word Var_151;

                {
                  Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[57])));
                  MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (NamePieces_34));
                }
                MainPieces_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_125, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[14])));
                Var_149 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_18);
                {
                  Var_151 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_151, 0) = ((MR_Box) (MainPieces_35));
                }
                {
                  Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_150, 0) = ((MR_Box) (Var_151));
                  MR_hl_field(MR_mktag(1), Var_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[59])));
                }
                {
                  Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) (Var_149));
                  MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) (Var_150));
                }
                {
                  Msgs_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Msgs_37, 0) = ((MR_Box) (Var_148));
                  MR_hl_field(MR_mktag(1), Msgs_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_38, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(0), Spec_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_5[0])));
                  MR_hl_field(MR_mktag(0), Spec_38, 2) = ((MR_Box) (Msgs_37));
                }
                check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_38, STATE_VARIABLE_Info_0_46, STATE_VARIABLE_Info_47);
              }
              break;
            case (MR_Integer) 0:
              {
                succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_suspicious_recursion_1_p_0(STATE_VARIABLE_Info_0_46);
                if (succeeded)
                {
                  MR_Word Pieces_39;
                  MR_Word Var_95;
                  MR_Word Var_113;
                  MR_Word Var_114;
                  MR_Word Var_115;
                  MR_Word Var_116;
                  MR_Word Var_117;
                  MR_Word Var_118;
                  MR_Word Msgs_161;
                  MR_Word Spec_162;

                  {
                    Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[57])));
                    MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (NamePieces_34));
                  }
                  Pieces_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_95, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[30])));
                  Var_114 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_18);
                  {
                    Var_116 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_116, 0) = ((MR_Box) (Pieces_39));
                  }
                  Var_118 = check_hlds__simplify__simplify_goal_call__shut_up_suspicious_recursion_msg_0_f_0();
                  {
                    Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (Var_118));
                    MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (Var_116));
                    MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (Var_117));
                  }
                  {
                    Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (Var_114));
                    MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (Var_115));
                  }
                  {
                    Msgs_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Msgs_161, 0) = ((MR_Box) (Var_113));
                    MR_hl_field(MR_mktag(1), Msgs_161, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Spec_162 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Spec_162, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(MR_mktag(0), Spec_162, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_5[0])));
                    MR_hl_field(MR_mktag(0), Spec_162, 2) = ((MR_Box) (Msgs_161));
                  }
                  check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_162, STATE_VARIABLE_Info_0_46, STATE_VARIABLE_Info_47);
                }
                else
                  *STATE_VARIABLE_Info_47 = STATE_VARIABLE_Info_0_46;
              }
              break;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word HeadArgBaseNames_40;
            MR_Word SuspiciousArgNames_41;
            MR_Word Var_55;

            mercury__set__intersect_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HeadBaseNames_30, ArgBaseNames_31, &HeadArgBaseNames_40);
            SuspiciousArgNames_41 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HeadArgBaseNames_40);
            succeeded = (SuspiciousArgNames_41 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SuspiciousArgNames_41, (MR_Integer) 1))));
              succeeded = (Var_55 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
                succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_suspicious_recursion_1_p_0(STATE_VARIABLE_Info_0_46);
            }
            if (succeeded)
            {
              MR_Word Msg_45;
              MR_Word Var_56;
              MR_Word Var_59;
              MR_Word Var_67;
              MR_Word Var_68;
              MR_Word Var_78;
              MR_Word Var_79;
              MR_Word Var_80;
              MR_Word Var_83;
              MR_Word Var_84;
              MR_Word Var_85;
              MR_Word Var_86;
              MR_Word Var_92;
              MR_Word Spec_167;
              MR_Word Pieces_168;

              {
                Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[57])));
                MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (NamePieces_34));
              }
              Var_68 = parse_tree__error_util__list_to_pieces_1_f_0(SuspiciousArgNames_41);
              Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_68, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[38])));
              Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[34])), Var_67);
              Pieces_168 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_56, Var_59);
              Var_78 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_18);
              {
                Var_84 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (Pieces_168));
              }
              Var_86 = check_hlds__simplify__simplify_goal_call__shut_up_suspicious_recursion_msg_0_f_0();
              {
                Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Var_86));
                MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Var_84));
                MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_85));
              }
              {
                Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_80, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 32) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
                MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_83));
              }
              {
                Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_80));
                MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Msg_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Msg_45, 0) = ((MR_Box) (Var_78));
                MR_hl_field(MR_mktag(1), Msg_45, 1) = ((MR_Box) (Var_79));
              }
              {
                Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (Msg_45));
                MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_167 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_167, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(0), Spec_167, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_5[0])));
                MR_hl_field(MR_mktag(0), Spec_167, 2) = ((MR_Box) (Var_92));
              }
              check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_167, STATE_VARIABLE_Info_0_46, STATE_VARIABLE_Info_47);
            }
            else
              *STATE_VARIABLE_Info_47 = STATE_VARIABLE_Info_0_46;
          }
          break;
      }
    }
    else
      *STATE_VARIABLE_Info_47 = STATE_VARIABLE_Info_0_46;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call____Unify____parse_tree__prog_data_pragma__eval_method_0_1(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
    MR_Word ArgX1_13;

    if (succeeded)
    {
      ArgX1_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
      (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)) = (MR_Box) ((((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) -4)) | (MR_Unsigned) (ArgX1_13)));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__input_args_are_suspicious_15_p_0(
  MR_Word ModuleInfo_1,
  MR_Word CommonInfo_2,
  MR_Word VarSet_3,
  MR_Word VarNameRemap_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_AllInputsEqv_0_8,
  MR_Word * STATE_VARIABLE_AllInputsEqv_9,
  MR_Word STATE_VARIABLE_AllInputsEqvOrSvar_0_10,
  MR_Word * STATE_VARIABLE_AllInputsEqvOrSvar_11,
  MR_Word STATE_VARIABLE_HeadBaseNames_0_12,
  MR_Word * STATE_VARIABLE_HeadBaseNames_13,
  MR_Word STATE_VARIABLE_ArgBaseNames_0_14,
  MR_Word * STATE_VARIABLE_ArgBaseNames_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *STATE_VARIABLE_ArgBaseNames_15 = STATE_VARIABLE_ArgBaseNames_0_14;
        *STATE_VARIABLE_HeadBaseNames_13 = STATE_VARIABLE_HeadBaseNames_0_12;
        *STATE_VARIABLE_AllInputsEqvOrSvar_11 = STATE_VARIABLE_AllInputsEqvOrSvar_0_10;
        *STATE_VARIABLE_AllInputsEqv_9 = STATE_VARIABLE_AllInputsEqv_0_8;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word HeadVar_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word HeadVars_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word ArgVar_39;
      MR_Word ArgVars_40;
      MR_Word Mode_41;
      MR_Word Modes_42;
      MR_Word InitialInst_47;
      MR_Word STATE_VARIABLE_AllInputsEqv_60_60;
      MR_Word STATE_VARIABLE_AllInputsEqvOrSvar_62_62;
      MR_Word STATE_VARIABLE_HeadBaseNames_64_64;
      MR_Word STATE_VARIABLE_ArgBaseNames_65_65;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_HeadVar__7_7;
      MR_Word next_value_of_STATE_VARIABLE_AllInputsEqv_0_8;
      MR_Word next_value_of_STATE_VARIABLE_AllInputsEqvOrSvar_0_10;
      MR_Word next_value_of_STATE_VARIABLE_HeadBaseNames_0_12;
      MR_Word next_value_of_STATE_VARIABLE_ArgBaseNames_0_14;

      succeeded = (HeadVar__6_6 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgVar_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
        ArgVars_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
        succeeded = (HeadVar__7_7 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Mode_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__7_7, (MR_Integer) 0))));
          Modes_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__7_7, (MR_Integer) 1))));
          InitialInst_47 = check_hlds__mode_util__mode_get_initial_inst_2_f_0(ModuleInfo_1, Mode_41);
          succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_1, InitialInst_47);
          if (succeeded)
          {
            succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo_1, InitialInst_47);
            if (succeeded)
            {
              succeeded = check_hlds__simplify__common__common_vars_are_equivalent_3_p_0(CommonInfo_2, ArgVar_39, HeadVar_37);
              if (succeeded)
              {
                STATE_VARIABLE_ArgBaseNames_65_65 = STATE_VARIABLE_ArgBaseNames_0_14;
                STATE_VARIABLE_HeadBaseNames_64_64 = STATE_VARIABLE_HeadBaseNames_0_12;
                STATE_VARIABLE_AllInputsEqvOrSvar_62_62 = STATE_VARIABLE_AllInputsEqvOrSvar_0_10;
                STATE_VARIABLE_AllInputsEqv_60_60 = STATE_VARIABLE_AllInputsEqv_0_8;
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Word TypeCtorInfo_70_70;
                MR_String HeadName_48;
                MR_String ArgName_49;
                MR_String HeadBaseName_50;
                MR_String ArgBaseName_51;
                MR_String HeadName_76;
                MR_Word TypeInfo_10_77;
                MR_Word TypeCtorInfo_11_78;
                MR_Box conv0_HeadName_76;
                MR_String StrNoSuffixPrime_82;
                MR_Integer End0_85;
                MR_Integer End1_86;
                MR_Integer End_88;
                MR_Integer Var_90;
                MR_Integer End2_87;
                MR_Char Var_89;
                MR_Char Var_91;

                succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_p_0(ModuleInfo_1, InitialInst_47);
                if (succeeded)
                {
                  STATE_VARIABLE_AllInputsEqv_60_60 = (MR_Integer) 0;
                  TypeInfo_10_77 = (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[0]);
                  TypeCtorInfo_11_78 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
                  succeeded = mercury__map__search_3_p_0(TypeInfo_10_77, TypeCtorInfo_11_78, VarNameRemap_4, ((MR_Box) (HeadVar_37)), &conv0_HeadName_76);
                  if (succeeded)
                  {
                    HeadName_76 = ((MR_String) (conv0_HeadName_76));
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    HeadName_48 = HeadName_76;
                    succeeded = MR_TRUE;
                  }
                  else
                    succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_3, HeadVar_37, &HeadName_48);
                  if (succeeded)
                  {
                    TypeCtorInfo_70_70 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                    succeeded = mercury__varset__search_name_3_p_0(TypeCtorInfo_70_70, VarSet_3, ArgVar_39, &ArgName_49);
                    if (succeeded)
                    {
                      End0_85 = mercury__string__count_code_units_1_f_0(HeadName_48);
                      check_hlds__simplify__simplify_goal_call__skip_trailing_digits_3_p_0(HeadName_48, End0_85, &End1_86);
                      succeeded = (End1_86 < End0_85);
                      if (succeeded)
                      {
                        Var_89 = (MR_Char) 95;
                        succeeded = mercury__string__unsafe_prev_index_4_p_0(HeadName_48, End1_86, &End2_87, &Var_91);
                        if (succeeded)
                          succeeded = (Var_89 == Var_91);
                        if (succeeded)
                          End_88 = End2_87;
                        else
                          End_88 = End1_86;
                        Var_90 = (MR_Integer) 0;
                        mercury__string__unsafe_between_4_p_0(HeadName_48, Var_90, End_88, &StrNoSuffixPrime_82);
                        succeeded = MR_TRUE;
                      }
                      if (succeeded)
                        HeadBaseName_50 = StrNoSuffixPrime_82;
                      else
                        HeadBaseName_50 = HeadName_48;
                      check_hlds__simplify__simplify_goal_call__delete_any_numeric_suffix_2_p_0(ArgName_49, &ArgBaseName_51);
                      succeeded = (strcmp(HeadBaseName_50, ArgBaseName_51) == 0);
                      if (succeeded)
                      {
                        succeeded = mercury__string__prefix_2_p_0(HeadBaseName_50, (MR_String) "STATE_VARIABLE");
                        if (succeeded)
                          STATE_VARIABLE_AllInputsEqvOrSvar_62_62 = STATE_VARIABLE_AllInputsEqvOrSvar_0_10;
                        else
                          STATE_VARIABLE_AllInputsEqvOrSvar_62_62 = (MR_Integer) 0;
                        STATE_VARIABLE_ArgBaseNames_65_65 = STATE_VARIABLE_ArgBaseNames_0_14;
                        STATE_VARIABLE_HeadBaseNames_64_64 = STATE_VARIABLE_HeadBaseNames_0_12;
                      }
                      else
                      {
                        STATE_VARIABLE_AllInputsEqvOrSvar_62_62 = (MR_Integer) 0;
                        mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (HeadBaseName_50)), STATE_VARIABLE_HeadBaseNames_0_12, &STATE_VARIABLE_HeadBaseNames_64_64);
                        mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ArgBaseName_51)), STATE_VARIABLE_ArgBaseNames_0_14, &STATE_VARIABLE_ArgBaseNames_65_65);
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
              }
            }
          }
          else
          {
            STATE_VARIABLE_ArgBaseNames_65_65 = STATE_VARIABLE_ArgBaseNames_0_14;
            STATE_VARIABLE_HeadBaseNames_64_64 = STATE_VARIABLE_HeadBaseNames_0_12;
            STATE_VARIABLE_AllInputsEqvOrSvar_62_62 = STATE_VARIABLE_AllInputsEqvOrSvar_0_10;
            STATE_VARIABLE_AllInputsEqv_60_60 = STATE_VARIABLE_AllInputsEqv_0_8;
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__5_5 = HeadVars_38;
            next_value_of_HeadVar__6_6 = ArgVars_40;
            next_value_of_HeadVar__7_7 = Modes_42;
            next_value_of_STATE_VARIABLE_AllInputsEqv_0_8 = STATE_VARIABLE_AllInputsEqv_60_60;
            next_value_of_STATE_VARIABLE_AllInputsEqvOrSvar_0_10 = STATE_VARIABLE_AllInputsEqvOrSvar_62_62;
            next_value_of_STATE_VARIABLE_HeadBaseNames_0_12 = STATE_VARIABLE_HeadBaseNames_64_64;
            next_value_of_STATE_VARIABLE_ArgBaseNames_0_14 = STATE_VARIABLE_ArgBaseNames_65_65;
            HeadVar__5_5 = next_value_of_HeadVar__5_5;
            HeadVar__6_6 = next_value_of_HeadVar__6_6;
            HeadVar__7_7 = next_value_of_HeadVar__7_7;
            STATE_VARIABLE_AllInputsEqv_0_8 = next_value_of_STATE_VARIABLE_AllInputsEqv_0_8;
            STATE_VARIABLE_AllInputsEqvOrSvar_0_10 = next_value_of_STATE_VARIABLE_AllInputsEqvOrSvar_0_10;
            STATE_VARIABLE_HeadBaseNames_0_12 = next_value_of_STATE_VARIABLE_HeadBaseNames_0_12;
            STATE_VARIABLE_ArgBaseNames_0_14 = next_value_of_STATE_VARIABLE_ArgBaseNames_0_14;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__delete_any_numeric_suffix_2_p_0(
  MR_String Str_3,
  MR_String * StrNoSuffix_4)
{
  {
    MR_bool succeeded;
    MR_String StrNoSuffixPrime_5;
    MR_Integer End0_8;
    MR_Integer End1_9;
    MR_Integer End_11;
    MR_Integer Var_13;
    MR_Integer End2_10;
    MR_Char Var_12;
    MR_Char Var_14;

    End0_8 = mercury__string__count_code_units_1_f_0(Str_3);
    check_hlds__simplify__simplify_goal_call__skip_trailing_digits_3_p_0(Str_3, End0_8, &End1_9);
    succeeded = (End1_9 < End0_8);
    if (succeeded)
    {
      Var_12 = (MR_Char) 95;
      succeeded = mercury__string__unsafe_prev_index_4_p_0(Str_3, End1_9, &End2_10, &Var_14);
      if (succeeded)
        succeeded = (Var_12 == Var_14);
      if (succeeded)
        End_11 = End2_10;
      else
        End_11 = End1_9;
      Var_13 = (MR_Integer) 0;
      mercury__string__unsafe_between_4_p_0(Str_3, Var_13, End_11, &StrNoSuffixPrime_5);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      *StrNoSuffix_4 = StrNoSuffixPrime_5;
    else
      *StrNoSuffix_4 = Str_3;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__skip_trailing_digits_3_p_0(
  MR_String Str_4,
  MR_Integer Index0_5,
  MR_Integer * Index_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Index1_7;
    MR_Char C_8;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__string__unsafe_prev_index_4_p_0(Str_4, Index0_5, &Index1_7, &C_8);
    if (succeeded)
      succeeded = mercury__char__is_digit_1_p_0(C_8);
    if (succeeded)
    {
      MR_Integer next_value_of_Index0_5 = Index1_7;

      // direct tailcall eliminated
      ;
      Index0_5 = next_value_of_Index0_5;
      continue;
    }
    else
      *Index_6 = Index0_5;
    break;
  }
}

static MR_Word MR_CALL 
check_hlds__simplify__simplify_goal_call__shut_up_suspicious_recursion_msg_0_f_0(void)
{
  return (MR_Word) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_1[56]));
}

static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_call_to_obsolete_predicate_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = check_hlds__simplify__simplify_goal_call__wrap_sym_name_and_arity_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_call_to_obsolete_predicate_7_p_0(
  MR_Word PredId_8,
  MR_Integer ProcId_9,
  MR_Word PredInfo_10,
  MR_Word ProcInfo_11,
  MR_Word GoalInfo_12,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36)
{
  {
    MR_bool succeeded;
    MR_Word InFavourOf_16;
    MR_Word PredOrProcPieces_17;
    MR_Word ModuleInfo_18;
    MR_Word ThisPredProcId_19;
    MR_Word ThisPredId_20;
    MR_Word ThisPredInfo_22;
    MR_Word ThisMaybeObsolete_23;
    MR_Word InFavourOfPrime_15;
    MR_Word MaybeObsolete_14;

    succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_obsolete_1_p_0(STATE_VARIABLE_Info_0_35);
    if (succeeded)
    {
      check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_0_35, &ThisPredProcId_19);
      ThisPredId_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThisPredProcId_19, (MR_Integer) 0))));
      succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_8, ThisPredId_20);
      succeeded = !(succeeded);
      if (succeeded)
      {
        check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_35, &ModuleInfo_18);
        hlds__hlds_pred__pred_info_get_obsolete_in_favour_of_2_p_0(PredInfo_10, &MaybeObsolete_14);
        succeeded = (MaybeObsolete_14 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          InFavourOfPrime_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeObsolete_14, (MR_Integer) 0))));
          InFavourOf_16 = InFavourOfPrime_15;
          PredOrProcPieces_17 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_18, (MR_Integer) 0, PredId_8);
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Var_38;
          MR_Word Var_39;
          MR_Word Var_40;
          MR_Word MaybeObsolete_97;

          hlds__hlds_pred__proc_info_get_obsolete_in_favour_of_2_p_0(ProcInfo_11, &MaybeObsolete_97);
          succeeded = (MaybeObsolete_97 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            InFavourOf_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeObsolete_97, (MR_Integer) 0))));
            Var_38 = (MR_Integer) 0;
            Var_39 = (MR_Integer) 0;
            {
              Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (PredId_8));
              MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (ProcId_9));
            }
            PredOrProcPieces_17 = hlds__hlds_error_util__describe_one_proc_name_mode_4_f_0(ModuleInfo_18, Var_38, Var_39, Var_40);
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_18, ThisPredId_20, &ThisPredInfo_22);
          hlds__hlds_pred__pred_info_get_obsolete_in_favour_of_2_p_0(ThisPredInfo_22, &ThisMaybeObsolete_23);
          succeeded = (ThisMaybeObsolete_23 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MR_Word GoalContext_24;
      MR_Word MainPieces_25;
      MR_Word Pieces_26;
      MR_Word Msg_32;
      MR_Word Spec_34;
      MR_Word Var_45;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Var_94;

      GoalContext_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_12);
      Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredOrProcPieces_17, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[12])));
      MainPieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[52])), Var_45);
      if ((InFavourOf_16 == (MR_Word) ((MR_Unsigned) 0U)))
        Pieces_26 = MainPieces_25;
      else
      {
        MR_Word Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InFavourOf_16, (MR_Integer) 1))));
        MR_Word Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InFavourOf_16, (MR_Integer) 0))));

        if ((Var_104 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_69;
          MR_Word Var_72;
          MR_Word Var_73;

          {
            Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (Var_105));
          }
          {
            Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
            MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[12])));
          }
          {
            Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[53])));
            MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_72));
          }
          Pieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), MainPieces_25, Var_69);
        }
        else
        {
          MR_Word InFavourOfPieces_31;
          MR_Word Var_54;
          MR_Word Var_56;
          MR_Word Var_61;

          Var_54 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_2[2]), InFavourOf_16);
          InFavourOfPieces_31 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", Var_54);
          Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InFavourOfPieces_31, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[12])));
          Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[55])), Var_61);
          Pieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), MainPieces_25, Var_56);
        }
      }
      {
        Var_85 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (Pieces_26));
      }
      {
        Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
        MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_81, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 47) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
        MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_84));
      }
      {
        Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
        MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msg_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Msg_32, 0) = ((MR_Box) (GoalContext_24));
        MR_hl_field(MR_mktag(1), Msg_32, 1) = ((MR_Box) (Var_80));
      }
      {
        Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Msg_32));
        MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_2[1])));
        MR_hl_field(MR_mktag(0), Spec_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_5[0])));
        MR_hl_field(MR_mktag(0), Spec_34, 2) = ((MR_Box) (Var_94));
      }
      check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_34, STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36);
    }
    else
      *STATE_VARIABLE_Info_36 = STATE_VARIABLE_Info_0_35;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__simplify__simplify_goal_call__one_extra_stream_arg_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__simplify__simplify_goal_call__IntroducedFrom__pred__maybe_generate_warning_for_implicit_stream_predicate__355__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Word PredInfo_8,
  MR_Word GoalInfo_9,
  MR_Word * MaybeSpec_10)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_11;
    MR_String PredName_12;
    MR_Word PredOrFunc_13;

    hlds__hlds_pred__pred_info_get_module_name_2_p_0(PredInfo_8, &ModuleName_11);
    hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfo_8, &PredName_12);
    PredOrFunc_13 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_8);
    succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_9, (MR_Integer) 26);
    if (succeeded)
      *MaybeSpec_10 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word TypeCtorInfo_134_134;
      MR_Word TypeCtorInfo_136_136;
      MR_Word ArgTypes_14;
      MR_Word IOStateTypeSymName_15;
      MR_Word IOStateType_16;
      MR_Word IOStateArgTypes_17;
      MR_Integer OrigArity_20;
      MR_Integer FullArity_21;
      MR_Integer NumExtraArgs_22;
      MR_Word ExtraArgTypes_23;
      MR_Word UserArgTypes_24;
      MR_Word PredTable_25;
      MR_Word PredSymName_26;
      MR_Word PredIds_27;
      MR_Word OneExtraStreamArgPredIds_28;
      MR_Word Var_39;
      MR_String Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Integer Var_47;
      MR_Integer Var_48;
      MR_Word Var_49;

      succeeded = (PredOrFunc_13 == (MR_Integer) 0);
      if (succeeded)
      {
        hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_8, &ArgTypes_14);
        Var_39 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
        Var_40 = (MR_String) "state";
        Var_41 = (MR_Word) ((MR_Unsigned) 0U);
        Var_42 = (MR_Word) ((MR_Unsigned) 0U);
        TypeCtorInfo_134_134 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
        {
          IOStateTypeSymName_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), IOStateTypeSymName_15, 0) = ((MR_Box) (Var_39));
          MR_hl_field(MR_mktag(1), IOStateTypeSymName_15, 1) = ((MR_Box) (Var_40));
        }
        {
          IOStateType_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), IOStateType_16, 0) = ((MR_Box) (IOStateTypeSymName_15));
          MR_hl_field(MR_mktag(1), IOStateType_16, 1) = ((MR_Box) (Var_41));
          MR_hl_field(MR_mktag(1), IOStateType_16, 2) = ((MR_Box) (Var_42));
        }
        {
          Var_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_3[0]));
          MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0_1));
          MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (IOStateType_16));
        }
        mercury__list__filter_3_p_0(TypeCtorInfo_134_134, Var_43, ArgTypes_14, &IOStateArgTypes_17);
        succeeded = (IOStateArgTypes_17 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IOStateArgTypes_17, (MR_Integer) 1))));
          succeeded = (Var_44 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_44, (MR_Integer) 1))));
            succeeded = (Var_45 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_8, &OrigArity_20);
              mercury__list__length_2_p_0(TypeCtorInfo_134_134, ArgTypes_14, &FullArity_21);
              NumExtraArgs_22 = (MR_Integer) ((MR_Unsigned) FullArity_21 - (MR_Unsigned) OrigArity_20);
              mercury__list__det_split_list_4_p_0(TypeCtorInfo_134_134, NumExtraArgs_22, ArgTypes_14, &ExtraArgTypes_23, &UserArgTypes_24);
              hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_6, &PredTable_25);
              Var_46 = (MR_Integer) 0;
              Var_48 = (MR_Integer) 1;
              Var_47 = (MR_Integer) ((MR_Unsigned) OrigArity_20 + (MR_Unsigned) Var_48);
              {
                PredSymName_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), PredSymName_26, 0) = ((MR_Box) (ModuleName_11));
                MR_hl_field(MR_mktag(1), PredSymName_26, 1) = ((MR_Box) (PredName_12));
              }
              hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredTable_25, Var_46, PredOrFunc_13, PredSymName_26, Var_47, &PredIds_27);
              TypeCtorInfo_136_136 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0);
              {
                Var_49 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0_2));
                MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (ModuleInfo_6));
                MR_hl_field(MR_mktag(0), Var_49, 4) = ((MR_Box) (NumExtraArgs_22));
                MR_hl_field(MR_mktag(0), Var_49, 5) = ((MR_Box) (ExtraArgTypes_23));
                MR_hl_field(MR_mktag(0), Var_49, 6) = ((MR_Box) (UserArgTypes_24));
              }
              mercury__list__filter_3_p_0(TypeCtorInfo_136_136, Var_49, PredIds_27, &OneExtraStreamArgPredIds_28);
              succeeded = (OneExtraStreamArgPredIds_28 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word GoalContext_31;
        MR_Word PredPieces_32;
        MR_Word Pieces_33;
        MR_Word Msg_34;
        MR_Word Spec_36;
        MR_Word Var_55;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_79;

        GoalContext_31 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_9);
        PredPieces_32 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_6, (MR_Integer) 0, PredId_7);
        Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredPieces_32, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[5])));
        Pieces_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[48])), Var_55);
        {
          Var_70 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (Pieces_33));
        }
        {
          Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
          MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_66, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 27) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
          MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_69));
        }
        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
          MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Msg_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Msg_34, 0) = ((MR_Box) (GoalContext_31));
          MR_hl_field(MR_mktag(1), Msg_34, 1) = ((MR_Box) (Var_65));
        }
        {
          Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Msg_34));
          MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
          MR_hl_field(MR_mktag(0), Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_5[0])));
          MR_hl_field(MR_mktag(0), Spec_36, 2) = ((MR_Box) (Var_79));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeSpec_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_36));
        }
      }
      else
      {
        MR_String Dir_37;
        MR_Word Var_139;
        MR_Integer lo_0;
        MR_Integer hi_1;
        MR_Integer mid_2;
        MR_Integer result_3;

        Var_139 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_11, Var_139);
        if (succeeded)
        {
          succeeded = (PredOrFunc_13 == (MR_Integer) 0);
          if (succeeded)
          {
            // binary string simple lookup switch
            ;
            lo_0 = (MR_Integer) 0;
            hi_1 = (MR_Integer) 5;
            do
            {
              mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
              result_3 = MR_strcmp(PredName_12, ((&check_hlds__simplify__simplify_goal_call_vector_common_6[0 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_6_0__vct_6_f_0);
              if ((result_3 == (MR_Integer) 0))
              {
                Dir_37 = ((&check_hlds__simplify__simplify_goal_call_vector_common_6[0 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_6_0__vct_6_f_1;
                succeeded = MR_TRUE;
                // jump out of search loop
                ;
                goto label_0;
              }
              else
              if ((result_3 < (MR_Integer) 0))
                hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
              else
                lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
            }
            while ((lo_0 <= hi_1));
            succeeded = MR_FALSE;
          label_0:;
          }
        }
        if (succeeded)
        {
          MR_Word Var_86;
          MR_Word Var_87;
          MR_Word Var_90;
          MR_Word Var_93;
          MR_Word Var_94;
          MR_Word Var_104;
          MR_Word Var_105;
          MR_Word Var_108;
          MR_Word Var_109;
          MR_Word Var_118;
          MR_Word GoalContext_120;
          MR_Word PredPieces_121;
          MR_Word Pieces_122;
          MR_Word Msg_123;
          MR_Word Spec_125;

          GoalContext_120 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_9);
          PredPieces_121 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_6, (MR_Integer) 0, PredId_7);
          {
            Var_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_94, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_94, 1) = ((MR_Box) (Dir_37));
          }
          {
            Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Var_94));
            MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[9])));
          }
          {
            Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[50])));
            MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (Var_93));
          }
          {
            Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[49])));
            MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (Var_90));
          }
          Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredPieces_121, Var_87);
          Pieces_122 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[48])), Var_86);
          {
            Var_109 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_109, 0) = ((MR_Box) (Pieces_122));
          }
          {
            Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (Var_109));
            MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_105, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 27) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
            MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (Var_108));
          }
          {
            Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (Var_105));
            MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Msg_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Msg_123, 0) = ((MR_Box) (GoalContext_120));
            MR_hl_field(MR_mktag(1), Msg_123, 1) = ((MR_Box) (Var_104));
          }
          {
            Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (Msg_123));
            MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_125 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_125, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
            MR_hl_field(MR_mktag(0), Spec_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_5[0])));
            MR_hl_field(MR_mktag(0), Spec_125, 2) = ((MR_Box) (Var_118));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeSpec_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_125));
          }
        }
        else
          *MaybeSpec_10 = (MR_Word) ((MR_Unsigned) 0U);
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call____Unify____maybe_all_inputs_eqv_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__simplify_goal_call____Unify____maybe_all_inputs_eqv_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call____Compare____maybe_all_inputs_eqv_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__simplify_goal_call____Compare____maybe_all_inputs_eqv_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call____Unify____maybe_all_inputs_eqv_or_svar_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__simplify_goal_call____Unify____maybe_all_inputs_eqv_or_svar_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call____Compare____maybe_all_inputs_eqv_or_svar_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__simplify_goal_call____Compare____maybe_all_inputs_eqv_or_svar_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__check_hlds__simplify__simplify_goal_call__init(void)
{
}

void mercury__check_hlds__simplify__simplify_goal_call__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__type_ctor_info_maybe_all_inputs_eqv_0);
	MR_register_type_ctor_info(&check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__type_ctor_info_maybe_all_inputs_eqv_or_svar_0);
}

void mercury__check_hlds__simplify__simplify_goal_call__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__simplify__simplify_goal_call__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.simplify.simplify_goal_call.
