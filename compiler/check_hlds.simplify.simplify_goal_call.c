/*
** Automatically generated from `simplify_goal_call.m'
** by the Mercury compiler,
** version rotd-2020-07-13
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
#include "getopt_io.mih"
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
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"
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
check_hlds__simplify__simplify_goal_call__IntroducedFrom__pred__maybe_generate_warning_for_implicit_stream_predicate__356__1_2_p_0(
  MR_Word IOStateType_16,
  MR_Word HeadVar__2_112);

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
check_hlds__simplify__simplify_goal_call__wrap_sym_name_arity_1_f_0(
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
check_hlds__simplify__simplify_goal_call__simplify_improve_library_call_11_p_0(
  MR_Word InstMap0_12,
  MR_String ModuleName_13,
  MR_String PredName_14,
  MR_Integer ModeNum_15,
  MR_Word Args_16,
  MR_Word GoalExpr0_17,
  MR_Word * ImprovedGoalExpr_18,
  MR_Word GoalInfo0_19,
  MR_Word * ImprovedGoalInfo_20,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_12_p_0(
  MR_Word IntType_13,
  MR_Word InstMap0_14,
  MR_String ModuleName_15,
  MR_String PredName_16,
  MR_Word Args_18,
  MR_Word GoalExpr0_19,
  MR_Word * ImprovedGoalExpr_20,
  MR_Word STATE_VARIABLE_GoalInfo_0_66,
  MR_Word * STATE_VARIABLE_GoalInfo_67,
  MR_Word STATE_VARIABLE_Info_0_68,
  MR_Word * STATE_VARIABLE_Info_69);

static MR_Integer MR_CALL 
check_hlds__simplify__simplify_goal_call__int_type_target_bits_2_f_0(
  MR_Word Globals_4,
  MR_Word IntType_5);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__is_int_const_2_p_0(
  MR_Word IntType_3,
  MR_Word ConsId_4);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__is_zero_const_2_p_0(
  MR_Word IntType_3,
  MR_Word ConsId_4);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_make_var_4_p_0(
  MR_Word Type_5,
  MR_Word * Var_6,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_make_string_const_5_p_0(
  MR_String StringConst_6,
  MR_Word * ConstVar_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12);

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
check_hlds__simplify__simplify_goal_call__simplify_make_int_const_5_p_0(
  MR_Integer IntConst_6,
  MR_Word * ConstVar_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12);

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
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26);

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
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34);

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


static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_1[87][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_2[4][5];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_3[1][8];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_4[2][1];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_6[6][3];


/* sealed */ struct check_hlds__simplify__simplify_goal_call__vector_common_type_5_0_s {
  const MR_String check_hlds__simplify__simplify_goal_call__vector_common_type_5_0__vct_5_f_0;
  const MR_String check_hlds__simplify__simplify_goal_call__vector_common_type_5_0__vct_5_f_1;
};

static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_5_0_s check_hlds__simplify__simplify_goal_call_vector_common_5[38];

/* sealed */ struct check_hlds__simplify__simplify_goal_call__vector_common_type_7_0_s {
  const MR_String check_hlds__simplify__simplify_goal_call__vector_common_type_7_0__vct_7_f_0;
  const MR_Integer check_hlds__simplify__simplify_goal_call__vector_common_type_7_0__vct_7_f_1;
};

static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_7_0_s check_hlds__simplify__simplify_goal_call_vector_common_7[50];

/* sealed */ struct check_hlds__simplify__simplify_goal_call__vector_common_type_8_0_s {
  const MR_String check_hlds__simplify__simplify_goal_call__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_8_0_s check_hlds__simplify__simplify_goal_call_vector_common_8[64];



static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_1[87][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with a zero divisor."))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[1])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(exclusive)."))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[1])))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The call to"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[51]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 53 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "could be made redundant by explicitly passing"))
  },
  /* row 54 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the"))
  },
  /* row 55 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: call to obsolete"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[55]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 57 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The suggested replacement is"))
  },
  /* row 58 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The possible suggested replacements are"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[58]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 60 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[46])))
  },
  /* row 61 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: recursive call to"))
  },
  /* row 62 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[22])))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_1[62]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 64 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "cannot fail."))
  },
  /* row 65 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "All"))
  },
  /* row 66 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "values are"))
  },
  /* row 67 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ">="))
  },
  /* row 68 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[68]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 70 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "cannot succeed."))
  },
  /* row 71 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "> no"))
  },
  /* row 72 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "values."))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[72]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 74 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "=<"))
  },
  /* row 75 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "all"))
  },
  /* row 76 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "There are no"))
  },
  /* row 77 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "values <"))
  },
  /* row 78 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: call to"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[78]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_4[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 81 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 82 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: call to"))
  },
  /* row 83 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with a shift amount that is outside"))
  },
  /* row 84 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of the range 0 (inclusive) to"))
  },
  /* row 85 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with a shift amount that is equal to"))
  },
  /* row 86 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or greater than"))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_2[4][5] = {
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)),
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

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_3[1][8] = {
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

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_4[2][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "simplify_inline_builtin_inequality"))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_6[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_2[1])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_call_to_obsolete_predicate_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_2[2])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_2[3])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_2[3])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_2[2])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
};


static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_5_0_s check_hlds__simplify__simplify_goal_call_vector_common_5[38] = {
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

static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_7_0_s check_hlds__simplify__simplify_goal_call_vector_common_7[50] = {
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
    NULL,
    (MR_Integer) -2
  },
  /* row 14 */
  {
    (MR_String) "times_bits_per_int",
    (MR_Integer) -1
  },
  /* row 15 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 16 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 17 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 18 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 19 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 20 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 21 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 22 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 23 */
  {
    (MR_String) "<<",
    (MR_Integer) -1
  },
  /* row 24 */
  {
    (MR_String) "rem",
    (MR_Integer) -1
  },
  /* row 25 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 26 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 27 */
  {
    (MR_String) "/",
    (MR_Integer) -1
  },
  /* row 28 */
  {
    (MR_String) "=<",
    (MR_Integer) -1
  },
  /* row 29 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 30 */
  {
    (MR_String) ">=",
    (MR_Integer) -1
  },
  /* row 31 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 32 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 33 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 34 */
  {
    (MR_String) "rem_bits_per_int",
    (MR_Integer) -1
  },
  /* row 35 */
  {
    (MR_String) ">>",
    (MR_Integer) -1
  },
  /* row 36 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 37 */
  {
    (MR_String) "//",
    (MR_Integer) -1
  },
  /* row 38 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 39 */
  {
    (MR_String) ">>u",
    (MR_Integer) -1
  },
  /* row 40 */
  {
    (MR_String) "quot_bits_per_int",
    (MR_Integer) -1
  },
  /* row 41 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 42 */
  {
    (MR_String) "<",
    (MR_Integer) 1
  },
  /* row 43 */
  {
    (MR_String) "<<u",
    (MR_Integer) -1
  },
  /* row 44 */
  {
    (MR_String) ">",
    (MR_Integer) -1
  },
  /* row 45 */
  {
    (MR_String) "\100<",
    (MR_Integer) 0
  },
  /* row 46 */
  {
    (MR_String) "\100=<",
    (MR_Integer) 1
  },
  /* row 47 */
  {
    (MR_String) "\100>",
    (MR_Integer) 2
  },
  /* row 48 */
  {
    (MR_String) "\100>=",
    (MR_Integer) 3
  },
  /* row 49 */
  {
    (MR_String) "compare",
    (MR_Integer) 4
  },
};

static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_8_0_s check_hlds__simplify__simplify_goal_call_vector_common_8[64] = {
  /* row 0 */   {     NULL },
  /* row 1 */   {     NULL },
  /* row 2 */   {     NULL },
  /* row 3 */   {     (MR_String) "uint32" },
  /* row 4 */   {     NULL },
  /* row 5 */   {     NULL },
  /* row 6 */   {     NULL },
  /* row 7 */   {     (MR_String) "int16" },
  /* row 8 */   {     (MR_String) "int" },
  /* row 9 */   {     NULL },
  /* row 10 */   {     NULL },
  /* row 11 */   {     NULL },
  /* row 12 */   {     NULL },
  /* row 13 */   {     (MR_String) "uint8" },
  /* row 14 */   {     (MR_String) "private_builtin" },
  /* row 15 */   {     NULL },
  /* row 16 */   {     (MR_String) "builtin" },
  /* row 17 */   {     NULL },
  /* row 18 */   {     NULL },
  /* row 19 */   {     NULL },
  /* row 20 */   {     (MR_String) "uint" },
  /* row 21 */   {     NULL },
  /* row 22 */   {     NULL },
  /* row 23 */   {     (MR_String) "int8" },
  /* row 24 */   {     NULL },
  /* row 25 */   {     NULL },
  /* row 26 */   {     NULL },
  /* row 27 */   {     NULL },
  /* row 28 */   {     (MR_String) "uint64" },
  /* row 29 */   {     NULL },
  /* row 30 */   {     NULL },
  /* row 31 */   {     NULL },
  /* row 32 */   {     NULL },
  /* row 33 */   {     (MR_String) "uint16" },
  /* row 34 */   {     NULL },
  /* row 35 */   {     NULL },
  /* row 36 */   {     NULL },
  /* row 37 */   {     (MR_String) "int32" },
  /* row 38 */   {     NULL },
  /* row 39 */   {     NULL },
  /* row 40 */   {     NULL },
  /* row 41 */   {     NULL },
  /* row 42 */   {     NULL },
  /* row 43 */   {     NULL },
  /* row 44 */   {     NULL },
  /* row 45 */   {     NULL },
  /* row 46 */   {     NULL },
  /* row 47 */   {     NULL },
  /* row 48 */   {     (MR_String) "int64" },
  /* row 49 */   {     NULL },
  /* row 50 */   {     NULL },
  /* row 51 */   {     NULL },
  /* row 52 */   {     NULL },
  /* row 53 */   {     NULL },
  /* row 54 */   {     NULL },
  /* row 55 */   {     NULL },
  /* row 56 */   {     NULL },
  /* row 57 */   {     NULL },
  /* row 58 */   {     NULL },
  /* row 59 */   {     NULL },
  /* row 60 */   {     NULL },
  /* row 61 */   {     NULL },
  /* row 62 */   {     NULL },
  /* row 63 */   {     NULL },
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
check_hlds__simplify__simplify_goal_call__IntroducedFrom__pred__maybe_generate_warning_for_implicit_stream_predicate__356__1_2_p_0(
  MR_Word IOStateType_16,
  MR_Word HeadVar__2_112)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data____Unify____mer_type_0_0(IOStateType_16, HeadVar__2_112);
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
check_hlds__simplify__simplify_goal_call__wrap_sym_name_arity_1_f_0(
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
  MR_Word STATE_VARIABLE_GoalInfo_0_41,
  MR_Word * STATE_VARIABLE_GoalInfo_42,
  MR_Word _NestedContext_14,
  MR_Word InstMap0_15,
  MR_Word STATE_VARIABLE_Common_0_43,
  MR_Word * STATE_VARIABLE_Common_44,
  MR_Word STATE_VARIABLE_Info_0_45,
  MR_Word * STATE_VARIABLE_Info_46)
{
  check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0(GoalExpr0_11, GoalExpr_12, STATE_VARIABLE_GoalInfo_0_41, STATE_VARIABLE_GoalInfo_42, InstMap0_15, STATE_VARIABLE_Common_0_43, STATE_VARIABLE_Common_44, STATE_VARIABLE_Info_0_45, STATE_VARIABLE_Info_46);
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
  MR_Word STATE_VARIABLE_GoalInfo_0_41,
  MR_Word * STATE_VARIABLE_GoalInfo_42,
  MR_Word InstMap0_15,
  MR_Word STATE_VARIABLE_Common_0_43,
  MR_Word * STATE_VARIABLE_Common_44,
  MR_Word STATE_VARIABLE_Info_0_45,
  MR_Word * STATE_VARIABLE_Info_46)
{
  {
    MR_bool succeeded;
    MR_Word Attributes_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1))));
    MR_Word PredId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 2))));
    MR_Integer ProcId_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 3))));
    MR_Word Args0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 4))));
    MR_Word ExtraArgs0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 5))));
    MR_Word MaybeTraceRuntimeCond_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 6))));
    MR_Word Impl_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 7))));
    MR_Word ImprovedGoalExpr_32;
    MR_Word STATE_VARIABLE_GoalInfo_48_48;
    MR_Word STATE_VARIABLE_Info_49_49;
    MR_Word TypeCtorInfo_59_59;
    MR_Word TypeInfo_60_60;
    MR_Word ModuleInfo_25;
    MR_Word PredInfo_26;
    MR_Word ModuleSymName_27;
    MR_String ModuleName_28;
    MR_String PredName_29;
    MR_Integer ModeNum_30;
    MR_Word ArgVars_31;
    MR_Word Var_47;

    succeeded = check_hlds__simplify__simplify_info__simplify_do_const_prop_1_p_0(STATE_VARIABLE_Info_0_45);
    if (succeeded)
    {
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_45, &ModuleInfo_25);
      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_25, PredId_19, &PredInfo_26);
      ModuleSymName_27 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_26);
      succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(ModuleSymName_27, &ModuleName_28);
      if (succeeded)
      {
        succeeded = (ExtraArgs0_22 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          PredName_29 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_26);
          hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_20, &ModeNum_30);
          TypeCtorInfo_59_59 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0);
          TypeInfo_60_60 = (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[0]);
          Var_47 = (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_6[2]);
          ArgVars_31 = mercury__list__map_2_f_0(TypeCtorInfo_59_59, TypeInfo_60_60, Var_47, Args0_21);
          succeeded = check_hlds__simplify__simplify_goal_call__simplify_improve_library_call_11_p_0(InstMap0_15, ModuleName_28, PredName_29, ModeNum_30, ArgVars_31, GoalExpr0_11, &ImprovedGoalExpr_32, STATE_VARIABLE_GoalInfo_0_41, &STATE_VARIABLE_GoalInfo_48_48, STATE_VARIABLE_Info_0_45, &STATE_VARIABLE_Info_49_49);
        }
      }
    }
    if (succeeded)
    {
      *STATE_VARIABLE_Info_46 = STATE_VARIABLE_Info_49_49;
      *STATE_VARIABLE_GoalInfo_42 = STATE_VARIABLE_GoalInfo_48_48;
      *GoalExpr_12 = ImprovedGoalExpr_32;
      *STATE_VARIABLE_Common_44 = STATE_VARIABLE_Common_0_43;
    }
    else
    {
      MR_Word BoxPolicy_33;
      MR_Word Args_34;
      MR_Word ExtraArgs_35;
      MR_Word GoalExpr1_36;
      MR_Word OptDuplicateCalls_37;

      BoxPolicy_33 = parse_tree__prog_data_foreign__get_box_policy_1_f_0(Attributes_18);
      switch (BoxPolicy_33) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_6[3]), Args0_21, &Args_34);
            mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_6[4]), ExtraArgs0_22, &ExtraArgs_35);
            {
              GoalExpr1_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr1_36, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), GoalExpr1_36, 1) = ((MR_Box) (Attributes_18));
              MR_hl_field(MR_mktag(3), GoalExpr1_36, 2) = ((MR_Box) (PredId_19));
              MR_hl_field(MR_mktag(3), GoalExpr1_36, 3) = ((MR_Box) (ProcId_20));
              MR_hl_field(MR_mktag(3), GoalExpr1_36, 4) = ((MR_Box) (Args_34));
              MR_hl_field(MR_mktag(3), GoalExpr1_36, 5) = ((MR_Box) (ExtraArgs_35));
              MR_hl_field(MR_mktag(3), GoalExpr1_36, 6) = ((MR_Box) (MaybeTraceRuntimeCond_23));
              MR_hl_field(MR_mktag(3), GoalExpr1_36, 7) = ((MR_Box) (Impl_24));
            }
          }
          break;
        case (MR_Integer) 0:
          {
            Args_34 = Args0_21;
            ExtraArgs_35 = ExtraArgs0_22;
            GoalExpr1_36 = GoalExpr0_11;
          }
          break;
      }
      succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(STATE_VARIABLE_Info_0_45, &OptDuplicateCalls_37);
      if (succeeded)
        succeeded = (ExtraArgs_35 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        MR_Word Purity_38;
        MR_Word MaybeAssignsGoalExpr_39;
        MR_Word ArgVars_56;
        MR_Word AssignsGoalExpr_40;

        ArgVars_56 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[0]), (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_6[5]), Args_34);
        Purity_38 = hlds__hlds_goal__goal_info_get_purity_1_f_0(STATE_VARIABLE_GoalInfo_0_41);
        check_hlds__simplify__common__common_optimise_call_11_p_0(PredId_19, ProcId_20, ArgVars_56, Purity_38, STATE_VARIABLE_GoalInfo_0_41, GoalExpr1_36, &MaybeAssignsGoalExpr_39, STATE_VARIABLE_Common_0_43, STATE_VARIABLE_Common_44, STATE_VARIABLE_Info_0_45, STATE_VARIABLE_Info_46);
        succeeded = (OptDuplicateCalls_37 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = (MaybeAssignsGoalExpr_39 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            AssignsGoalExpr_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAssignsGoalExpr_39, (MR_Integer) 0))));
        }
        if (succeeded)
          *GoalExpr_12 = AssignsGoalExpr_40;
        else
          *GoalExpr_12 = GoalExpr1_36;
      }
      else
      {
        *GoalExpr_12 = GoalExpr1_36;
        *STATE_VARIABLE_Info_46 = STATE_VARIABLE_Info_0_45;
        *STATE_VARIABLE_Common_44 = STATE_VARIABLE_Common_0_43;
      }
      *STATE_VARIABLE_GoalInfo_42 = STATE_VARIABLE_GoalInfo_0_41;
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
  MR_Word STATE_VARIABLE_Common_0_41,
  MR_Word * STATE_VARIABLE_Common_42,
  MR_Word STATE_VARIABLE_Info_0_43,
  MR_Word * STATE_VARIABLE_Info_44)
{
  {
    MR_bool succeeded;
    MR_Word PredId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_11, (MR_Integer) 0))));
    MR_Integer ProcId_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr0_11, (MR_Integer) 1))));
    MR_Word Args_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_11, (MR_Integer) 2))));
    MR_Word IsBuiltin_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr0_11, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word ModuleInfo_25;
    MR_Word PredInfo_26;
    MR_Word ProcInfo_27;
    MR_Word ModuleSymName_30;
    MR_Word Globals_31;
    MR_Word STATE_VARIABLE_Info_45_45;
    MR_Word STATE_VARIABLE_Info_46_46;
    MR_Word STATE_VARIABLE_Info_47_47;
    MR_Word STATE_VARIABLE_Info_48_48;
    MR_String ModuleName_32;

    check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_43, &ModuleInfo_25);
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_25, PredId_19, ProcId_20, &PredInfo_26, &ProcInfo_27);
    succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_implicit_stream_calls_1_p_0(STATE_VARIABLE_Info_0_43);
    if (succeeded)
    {
      MR_Word MaybeImplicitStreamSpec_28;

      check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0(ModuleInfo_25, PredId_19, PredInfo_26, GoalInfo0_13, &MaybeImplicitStreamSpec_28);
      if ((MaybeImplicitStreamSpec_28 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_Info_45_45 = STATE_VARIABLE_Info_0_43;
      else
      {
        MR_Word ImplicitStreamSpec_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeImplicitStreamSpec_28, (MR_Integer) 0))));

        check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(ImplicitStreamSpec_29, STATE_VARIABLE_Info_0_43, &STATE_VARIABLE_Info_45_45);
      }
    }
    else
      STATE_VARIABLE_Info_45_45 = STATE_VARIABLE_Info_0_43;
    check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_call_to_obsolete_predicate_7_p_0(PredId_19, ProcId_20, PredInfo_26, ProcInfo_27, GoalInfo0_13, STATE_VARIABLE_Info_45_45, &STATE_VARIABLE_Info_46_46);
    check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0(PredId_19, ProcId_20, Args_21, IsBuiltin_22, PredInfo_26, ProcInfo_27, GoalInfo0_13, NestedContext_15, STATE_VARIABLE_Common_0_41, STATE_VARIABLE_Info_46_46, &STATE_VARIABLE_Info_47_47);
    check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_useless_comparison_6_p_0(PredInfo_26, InstMap0_16, Args_21, GoalInfo0_13, STATE_VARIABLE_Info_47_47, &STATE_VARIABLE_Info_48_48);
    ModuleSymName_30 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_26);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_25, &Globals_31);
    succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(ModuleSymName_30, &ModuleName_32);
    if (succeeded)
    {
      MR_String PredName_33;
      MR_Integer ModeNum_34;
      MR_Word VarTypes_35;
      MR_Word EvaluatedGoalExpr_36;
      MR_Word EvaluatedGoalInfo_37;

      PredName_33 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_26);
      hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_20, &ModeNum_34);
      check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(STATE_VARIABLE_Info_48_48, &VarTypes_35);
      succeeded = check_hlds__simplify__simplify_info__simplify_do_const_prop_1_p_0(STATE_VARIABLE_Info_48_48);
      if (succeeded)
        succeeded = transform_hlds__const_prop__evaluate_call_10_p_0(Globals_31, VarTypes_35, InstMap0_16, ModuleName_32, PredName_33, ModeNum_34, Args_21, &EvaluatedGoalExpr_36, GoalInfo0_13, &EvaluatedGoalInfo_37);
      if (succeeded)
      {
        *GoalExpr_12 = EvaluatedGoalExpr_36;
        *GoalInfo_14 = EvaluatedGoalInfo_37;
        check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(STATE_VARIABLE_Info_48_48, STATE_VARIABLE_Info_44);
        *STATE_VARIABLE_Common_42 = STATE_VARIABLE_Common_0_41;
      }
      else
      {
        MR_Word OptDupCalls_68;

        succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(STATE_VARIABLE_Info_48_48, &OptDupCalls_68);
        if (succeeded)
        {
          MR_Word STATE_VARIABLE_Info_51_51;
          MR_Word Purity_69;
          MR_Word MaybeAssignsGoalExpr0_70;
          MR_Word _AssignsGoalExpr0_71;

          Purity_69 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo0_13);
          check_hlds__simplify__common__common_optimise_call_11_p_0(PredId_19, ProcId_20, Args_21, Purity_69, GoalInfo0_13, GoalExpr0_11, &MaybeAssignsGoalExpr0_70, STATE_VARIABLE_Common_0_41, STATE_VARIABLE_Common_42, STATE_VARIABLE_Info_48_48, &STATE_VARIABLE_Info_51_51);
          succeeded = (MaybeAssignsGoalExpr0_70 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            _AssignsGoalExpr0_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAssignsGoalExpr0_70, (MR_Integer) 0))));
            succeeded = (OptDupCalls_68 == (MR_Integer) 1);
          }
          if (succeeded)
          {
            *GoalExpr_12 = _AssignsGoalExpr0_71;
            *GoalInfo_14 = GoalInfo0_13;
            *STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_51_51;
          }
          else
          {
            MR_Word ImprovedGoalExpr_39;
            MR_Word ImprovedGoalInfo_40;
            MR_Word STATE_VARIABLE_Info_52_52;

            succeeded = check_hlds__simplify__simplify_goal_call__simplify_improve_library_call_11_p_0(InstMap0_16, ModuleName_32, PredName_33, ModeNum_34, Args_21, GoalExpr0_11, &ImprovedGoalExpr_39, GoalInfo0_13, &ImprovedGoalInfo_40, STATE_VARIABLE_Info_51_51, &STATE_VARIABLE_Info_52_52);
            if (succeeded)
            {
              *STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_52_52;
              *GoalExpr_12 = ImprovedGoalExpr_39;
              *GoalInfo_14 = ImprovedGoalInfo_40;
            }
            else
            {
              *GoalExpr_12 = GoalExpr0_11;
              *GoalInfo_14 = GoalInfo0_13;
              *STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_51_51;
            }
          }
        }
        else
        {
          MR_Word ImprovedGoalExpr_90;
          MR_Word ImprovedGoalInfo_91;
          MR_Word STATE_VARIABLE_Info_52_92;

          *STATE_VARIABLE_Common_42 = STATE_VARIABLE_Common_0_41;
          succeeded = check_hlds__simplify__simplify_goal_call__simplify_improve_library_call_11_p_0(InstMap0_16, ModuleName_32, PredName_33, ModeNum_34, Args_21, GoalExpr0_11, &ImprovedGoalExpr_90, GoalInfo0_13, &ImprovedGoalInfo_91, STATE_VARIABLE_Info_48_48, &STATE_VARIABLE_Info_52_92);
          if (succeeded)
          {
            *STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_52_92;
            *GoalExpr_12 = ImprovedGoalExpr_90;
            *GoalInfo_14 = ImprovedGoalInfo_91;
          }
          else
          {
            *GoalExpr_12 = GoalExpr0_11;
            *GoalInfo_14 = GoalInfo0_13;
            *STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_48_48;
          }
        }
      }
    }
    else
    {
      MR_Word OptDupCalls_84;

      succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(STATE_VARIABLE_Info_48_48, &OptDupCalls_84);
      if (succeeded)
      {
        MR_Word Purity_85;
        MR_Word MaybeAssignsGoalExpr0_86;
        MR_Word _AssignsGoalExpr0_87;

        Purity_85 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo0_13);
        check_hlds__simplify__common__common_optimise_call_11_p_0(PredId_19, ProcId_20, Args_21, Purity_85, GoalInfo0_13, GoalExpr0_11, &MaybeAssignsGoalExpr0_86, STATE_VARIABLE_Common_0_41, STATE_VARIABLE_Common_42, STATE_VARIABLE_Info_48_48, STATE_VARIABLE_Info_44);
        succeeded = (MaybeAssignsGoalExpr0_86 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          _AssignsGoalExpr0_87 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAssignsGoalExpr0_86, (MR_Integer) 0))));
          succeeded = (OptDupCalls_84 == (MR_Integer) 1);
        }
        if (succeeded)
        {
          *GoalExpr_12 = _AssignsGoalExpr0_87;
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
        *STATE_VARIABLE_Common_42 = STATE_VARIABLE_Common_0_41;
        *STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_48_48;
        *GoalExpr_12 = GoalExpr0_11;
        *GoalInfo_14 = GoalInfo0_13;
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_improve_library_call_11_p_0(
  MR_Word InstMap0_12,
  MR_String ModuleName_13,
  MR_String PredName_14,
  MR_Integer ModeNum_15,
  MR_Word Args_16,
  MR_Word GoalExpr0_17,
  MR_Word * ImprovedGoalExpr_18,
  MR_Word GoalInfo0_19,
  MR_Word * ImprovedGoalInfo_20,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_Info_45_45;
    MR_Integer slot_6 = ((MR_hash_string6(ModuleName_13)) & (MR_Integer) 63);
    MR_String str_7 = ((&check_hlds__simplify__simplify_goal_call_vector_common_8[0 + slot_6]))->check_hlds__simplify__simplify_goal_call__vector_common_type_8_0__vct_8_f_0;

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
    if ((((str_7 != NULL)) && ((strcmp(str_7, ModuleName_13) == 0))))
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
              MR_Word ModuleInfo_105;
              MR_Word Globals_106;
              MR_Word Pregen_107;

              check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_34, &ModuleInfo_105);
              hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_105, &Globals_106);
              libs__globals__lookup_bool_option_3_p_0(Globals_106, (MR_Integer) 251, &Pregen_107);
              switch (Pregen_107) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_12_p_0((MR_Integer) 7, InstMap0_12, ModuleName_13, PredName_14, Args_16, GoalExpr0_17, ImprovedGoalExpr_18, GoalInfo0_19, ImprovedGoalInfo_20, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_45_45);
                  break;
                case (MR_Integer) 1:
                  {
                    succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_14, Args_16, ImprovedGoalExpr_18);
                    if (succeeded)
                    {
                      *ImprovedGoalInfo_20 = GoalInfo0_19;
                      STATE_VARIABLE_Info_45_45 = STATE_VARIABLE_Info_0_34;
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
              MR_Word ModuleInfo_75;
              MR_Word Globals_76;
              MR_Word Pregen_77;

              check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_34, &ModuleInfo_75);
              hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_75, &Globals_76);
              libs__globals__lookup_bool_option_3_p_0(Globals_76, (MR_Integer) 251, &Pregen_77);
              switch (Pregen_77) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_12_p_0((MR_Integer) 4, InstMap0_12, ModuleName_13, PredName_14, Args_16, GoalExpr0_17, ImprovedGoalExpr_18, GoalInfo0_19, ImprovedGoalInfo_20, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_45_45);
                  break;
                case (MR_Integer) 1:
                  {
                    succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_14, Args_16, ImprovedGoalExpr_18);
                    if (succeeded)
                    {
                      *ImprovedGoalInfo_20 = GoalInfo0_19;
                      STATE_VARIABLE_Info_45_45 = STATE_VARIABLE_Info_0_34;
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
              MR_Word ModuleInfo_31;
              MR_Word Globals_32;
              MR_Word Pregen_33;

              check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_34, &ModuleInfo_31);
              hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_31, &Globals_32);
              libs__globals__lookup_bool_option_3_p_0(Globals_32, (MR_Integer) 251, &Pregen_33);
              switch (Pregen_33) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_12_p_0((MR_Integer) 0, InstMap0_12, ModuleName_13, PredName_14, Args_16, GoalExpr0_17, ImprovedGoalExpr_18, GoalInfo0_19, ImprovedGoalInfo_20, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_45_45);
                  break;
                case (MR_Integer) 1:
                  {
                    succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_14, Args_16, ImprovedGoalExpr_18);
                    if (succeeded)
                    {
                      *ImprovedGoalInfo_20 = GoalInfo0_19;
                      STATE_VARIABLE_Info_45_45 = STATE_VARIABLE_Info_0_34;
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
              MR_Word ModuleInfo_115;
              MR_Word Globals_116;
              MR_Word Pregen_117;

              check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_34, &ModuleInfo_115);
              hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_115, &Globals_116);
              libs__globals__lookup_bool_option_3_p_0(Globals_116, (MR_Integer) 251, &Pregen_117);
              switch (Pregen_117) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_12_p_0((MR_Integer) 3, InstMap0_12, ModuleName_13, PredName_14, Args_16, GoalExpr0_17, ImprovedGoalExpr_18, GoalInfo0_19, ImprovedGoalInfo_20, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_45_45);
                  break;
                case (MR_Integer) 1:
                  {
                    succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_14, Args_16, ImprovedGoalExpr_18);
                    if (succeeded)
                    {
                      *ImprovedGoalInfo_20 = GoalInfo0_19;
                      STATE_VARIABLE_Info_45_45 = STATE_VARIABLE_Info_0_34;
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
              MR_String TypeName_28;
              MR_Word R_29;
              MR_Word Var_38;
              MR_Word Var_39;
              MR_Word Var_40;
              MR_Word X_47;
              MR_Word Y_48;
              MR_Word Context_49;
              MR_Integer slot_4;
              MR_String str_5;

              succeeded = (ModeNum_15 == (MR_Integer) 0);
              if (succeeded)
              {
                // hashed string simple lookup switch
                ;
                // compute the hash value of the input string
                ;
                slot_4 = ((MR_hash_string6(PredName_14)) & (MR_Integer) 31);
                // no collisions; no hash chain loop
                ;
                // lookup the string for this hash slot
                ;
                str_5 = ((&check_hlds__simplify__simplify_goal_call_vector_common_5[6 + slot_4]))->check_hlds__simplify__simplify_goal_call__vector_common_type_5_0__vct_5_f_0;
                // did we find a match?
                ;
                if ((((str_5 != NULL)) && ((strcmp(str_5, PredName_14) == 0))))
                {
                  // we found a match; look up the results
                  ;
                  TypeName_28 = ((&check_hlds__simplify__simplify_goal_call_vector_common_5[6 + slot_4]))->check_hlds__simplify__simplify_goal_call__vector_common_type_5_0__vct_5_f_1;
                  succeeded = MR_TRUE;
                  // jump out of search loop
                  ;
                  goto label_1;
                }
                succeeded = MR_FALSE;
              label_1:;
                if (succeeded)
                {
                  succeeded = (Args_16 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    R_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0))));
                    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1))));
                    succeeded = (Var_38 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      X_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_38, (MR_Integer) 0))));
                      Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_38, (MR_Integer) 1))));
                      succeeded = (Var_39 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Y_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_39, (MR_Integer) 0))));
                        Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_39, (MR_Integer) 1))));
                        succeeded = (Var_40 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Context_49 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_19);
                          check_hlds__simplify__simplify_goal_call__simplify_improve_builtin_compare_int_uint_8_p_0(STATE_VARIABLE_Info_0_34, TypeName_28, R_29, X_47, Y_48, Context_49, ImprovedGoalExpr_18, ImprovedGoalInfo_20);
                          STATE_VARIABLE_Info_45_45 = STATE_VARIABLE_Info_0_34;
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
                result_3 = MR_strcmp(PredName_14, ((&check_hlds__simplify__simplify_goal_call_vector_common_7[45 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_7_0__vct_7_f_0);
                if ((result_3 == (MR_Integer) 0))
                {
                  switch (((&check_hlds__simplify__simplify_goal_call_vector_common_7[45 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_7_0__vct_7_f_1) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        // case "@<"
                        ;
                        {
                          MR_Word TI_24;
                          MR_Word X_25;
                          MR_Word Y_26;
                          MR_Word Var_42;
                          MR_Word Var_43;
                          MR_Word Var_44;

                          succeeded = (Args_16 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            TI_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0))));
                            Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1))));
                            succeeded = (Var_42 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              X_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 0))));
                              Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 1))));
                              succeeded = (Var_43 != (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                Y_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_43, (MR_Integer) 0))));
                                Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_43, (MR_Integer) 1))));
                                succeeded = (Var_44 == (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(TI_24, X_25, Y_26, (MR_String) "<", (MR_Integer) 0, GoalInfo0_19, ImprovedGoalExpr_18, InstMap0_12, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_45_45);
                                  *ImprovedGoalInfo_20 = GoalInfo0_19;
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
                          MR_Word TI_52;
                          MR_Word X_53;
                          MR_Word Y_54;
                          MR_Word Var_55;
                          MR_Word Var_56;
                          MR_Word Var_57;

                          succeeded = (Args_16 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            TI_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0))));
                            Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1))));
                            succeeded = (Var_55 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              X_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_55, (MR_Integer) 0))));
                              Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_55, (MR_Integer) 1))));
                              succeeded = (Var_56 != (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                Y_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_56, (MR_Integer) 0))));
                                Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_56, (MR_Integer) 1))));
                                succeeded = (Var_57 == (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(TI_52, X_53, Y_54, (MR_String) ">", (MR_Integer) 1, GoalInfo0_19, ImprovedGoalExpr_18, InstMap0_12, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_45_45);
                                  *ImprovedGoalInfo_20 = GoalInfo0_19;
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
                          MR_Word TI_60;
                          MR_Word X_61;
                          MR_Word Y_62;
                          MR_Word Var_63;
                          MR_Word Var_64;
                          MR_Word Var_65;

                          succeeded = (Args_16 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            TI_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0))));
                            Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1))));
                            succeeded = (Var_63 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              X_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_63, (MR_Integer) 0))));
                              Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_63, (MR_Integer) 1))));
                              succeeded = (Var_64 != (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                Y_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 0))));
                                Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 1))));
                                succeeded = (Var_65 == (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(TI_60, X_61, Y_62, (MR_String) ">", (MR_Integer) 0, GoalInfo0_19, ImprovedGoalExpr_18, InstMap0_12, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_45_45);
                                  *ImprovedGoalInfo_20 = GoalInfo0_19;
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
                          MR_Word TI_68;
                          MR_Word X_69;
                          MR_Word Y_70;
                          MR_Word Var_71;
                          MR_Word Var_72;
                          MR_Word Var_73;

                          succeeded = (Args_16 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            TI_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0))));
                            Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1))));
                            succeeded = (Var_71 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              X_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_71, (MR_Integer) 0))));
                              Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_71, (MR_Integer) 1))));
                              succeeded = (Var_72 != (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                Y_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_72, (MR_Integer) 0))));
                                Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_72, (MR_Integer) 1))));
                                succeeded = (Var_73 == (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(TI_68, X_69, Y_70, (MR_String) "<", (MR_Integer) 1, GoalInfo0_19, ImprovedGoalExpr_18, InstMap0_12, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_45_45);
                                  *ImprovedGoalInfo_20 = GoalInfo0_19;
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
                          MR_Word Context_27;

                          Context_27 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_19);
                          succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_95_91_49_93_95_48_7_p_0(Args_16, Context_27, ImprovedGoalExpr_18, ImprovedGoalInfo_20, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_45_45);
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
              MR_Word ModuleInfo_95;
              MR_Word Globals_96;
              MR_Word Pregen_97;

              check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_34, &ModuleInfo_95);
              hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_95, &Globals_96);
              libs__globals__lookup_bool_option_3_p_0(Globals_96, (MR_Integer) 251, &Pregen_97);
              switch (Pregen_97) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_12_p_0((MR_Integer) 1, InstMap0_12, ModuleName_13, PredName_14, Args_16, GoalExpr0_17, ImprovedGoalExpr_18, GoalInfo0_19, ImprovedGoalInfo_20, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_45_45);
                  break;
                case (MR_Integer) 1:
                  {
                    succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_14, Args_16, ImprovedGoalExpr_18);
                    if (succeeded)
                    {
                      *ImprovedGoalInfo_20 = GoalInfo0_19;
                      STATE_VARIABLE_Info_45_45 = STATE_VARIABLE_Info_0_34;
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
              MR_Word ModuleInfo_90;
              MR_Word Globals_91;
              MR_Word Pregen_92;

              check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_34, &ModuleInfo_90);
              hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_90, &Globals_91);
              libs__globals__lookup_bool_option_3_p_0(Globals_91, (MR_Integer) 251, &Pregen_92);
              switch (Pregen_92) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_12_p_0((MR_Integer) 2, InstMap0_12, ModuleName_13, PredName_14, Args_16, GoalExpr0_17, ImprovedGoalExpr_18, GoalInfo0_19, ImprovedGoalInfo_20, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_45_45);
                  break;
                case (MR_Integer) 1:
                  {
                    succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_14, Args_16, ImprovedGoalExpr_18);
                    if (succeeded)
                    {
                      *ImprovedGoalInfo_20 = GoalInfo0_19;
                      STATE_VARIABLE_Info_45_45 = STATE_VARIABLE_Info_0_34;
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
              MR_Word ModuleInfo_110;
              MR_Word Globals_111;
              MR_Word Pregen_112;

              check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_34, &ModuleInfo_110);
              hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_110, &Globals_111);
              libs__globals__lookup_bool_option_3_p_0(Globals_111, (MR_Integer) 251, &Pregen_112);
              switch (Pregen_112) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_12_p_0((MR_Integer) 9, InstMap0_12, ModuleName_13, PredName_14, Args_16, GoalExpr0_17, ImprovedGoalExpr_18, GoalInfo0_19, ImprovedGoalInfo_20, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_45_45);
                  break;
                case (MR_Integer) 1:
                  {
                    succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_14, Args_16, ImprovedGoalExpr_18);
                    if (succeeded)
                    {
                      *ImprovedGoalInfo_20 = GoalInfo0_19;
                      STATE_VARIABLE_Info_45_45 = STATE_VARIABLE_Info_0_34;
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
              MR_Word ModuleInfo_100;
              MR_Word Globals_101;
              MR_Word Pregen_102;

              check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_34, &ModuleInfo_100);
              hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_100, &Globals_101);
              libs__globals__lookup_bool_option_3_p_0(Globals_101, (MR_Integer) 251, &Pregen_102);
              switch (Pregen_102) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_12_p_0((MR_Integer) 5, InstMap0_12, ModuleName_13, PredName_14, Args_16, GoalExpr0_17, ImprovedGoalExpr_18, GoalInfo0_19, ImprovedGoalInfo_20, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_45_45);
                  break;
                case (MR_Integer) 1:
                  {
                    succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_14, Args_16, ImprovedGoalExpr_18);
                    if (succeeded)
                    {
                      *ImprovedGoalInfo_20 = GoalInfo0_19;
                      STATE_VARIABLE_Info_45_45 = STATE_VARIABLE_Info_0_34;
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
              MR_Word ModuleInfo_80;
              MR_Word Globals_81;
              MR_Word Pregen_82;

              check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_34, &ModuleInfo_80);
              hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_80, &Globals_81);
              libs__globals__lookup_bool_option_3_p_0(Globals_81, (MR_Integer) 251, &Pregen_82);
              switch (Pregen_82) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_12_p_0((MR_Integer) 6, InstMap0_12, ModuleName_13, PredName_14, Args_16, GoalExpr0_17, ImprovedGoalExpr_18, GoalInfo0_19, ImprovedGoalInfo_20, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_45_45);
                  break;
                case (MR_Integer) 1:
                  {
                    succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_14, Args_16, ImprovedGoalExpr_18);
                    if (succeeded)
                    {
                      *ImprovedGoalInfo_20 = GoalInfo0_19;
                      STATE_VARIABLE_Info_45_45 = STATE_VARIABLE_Info_0_34;
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
              MR_Word ModuleInfo_85;
              MR_Word Globals_86;
              MR_Word Pregen_87;

              check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_34, &ModuleInfo_85);
              hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_85, &Globals_86);
              libs__globals__lookup_bool_option_3_p_0(Globals_86, (MR_Integer) 251, &Pregen_87);
              switch (Pregen_87) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_12_p_0((MR_Integer) 8, InstMap0_12, ModuleName_13, PredName_14, Args_16, GoalExpr0_17, ImprovedGoalExpr_18, GoalInfo0_19, ImprovedGoalInfo_20, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_45_45);
                  break;
                case (MR_Integer) 1:
                  {
                    succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_14, Args_16, ImprovedGoalExpr_18);
                    if (succeeded)
                    {
                      *ImprovedGoalInfo_20 = GoalInfo0_19;
                      STATE_VARIABLE_Info_45_45 = STATE_VARIABLE_Info_0_34;
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
      check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(STATE_VARIABLE_Info_45_45, STATE_VARIABLE_Info_35);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_12_p_0(
  MR_Word IntType_13,
  MR_Word InstMap0_14,
  MR_String ModuleName_15,
  MR_String PredName_16,
  MR_Word Args_18,
  MR_Word GoalExpr0_19,
  MR_Word * ImprovedGoalExpr_20,
  MR_Word STATE_VARIABLE_GoalInfo_0_66,
  MR_Word * STATE_VARIABLE_GoalInfo_67,
  MR_Word STATE_VARIABLE_Info_0_68,
  MR_Word * STATE_VARIABLE_Info_69)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_23;
    MR_Word Globals_24;
    MR_Integer slot_0;
    MR_String str_1;

    check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_68, &ModuleInfo_23);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_23, &Globals_24);
    // hashed string jump switch
    ;
    // compute the hash value of the input string
    ;
    slot_0 = ((MR_hash_string5(PredName_16)) & (MR_Integer) 31);
    // hash chain loop
    ;
    do
    {
      // lookup the string for this hash slot
      ;
      str_1 = ((&check_hlds__simplify__simplify_goal_call_vector_common_7[13 + slot_0]))->check_hlds__simplify__simplify_goal_call__vector_common_type_7_0__vct_7_f_0;
      // did we find a match?
      ;
      if ((((str_1 != NULL)) && ((strcmp(str_1, PredName_16) == 0))))
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
                MR_Word Var_196;
                MR_Word Var_197;
                MR_Word Var_198;
                MR_String Op_204;
                MR_Word X_205;
                MR_Word Y_206;
                MR_Integer TargetBitsPerInt_207;

                succeeded = (IntType_13 == (MR_Integer) 0);
                if (succeeded)
                {
                  succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    X_205 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 0))));
                    Var_196 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 1))));
                    succeeded = (Var_196 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Y_206 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_196, (MR_Integer) 0))));
                      Var_197 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_196, (MR_Integer) 1))));
                      succeeded = (Var_197 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Op_204 = (MR_String) "*";
                        libs__int_emu__target_bits_per_int_2_p_0(Globals_24, &Var_198);
                        TargetBitsPerInt_207 = (MR_Integer) (Var_198);
                        check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_9_p_0(ModuleName_15, Op_204, X_205, TargetBitsPerInt_207, Y_206, ImprovedGoalExpr_20, STATE_VARIABLE_GoalInfo_0_66, STATE_VARIABLE_Info_0_68, STATE_VARIABLE_Info_69);
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 10:
            {
              // case "<<"
              ;
              {
                MR_Integer NumTargetBits_38;
                MR_Word Var_70;
                MR_Word Var_71;
                MR_Word Var_72;
                MR_Word X_245;
                MR_Word Y_246;
                MR_Word Z_247;
                MR_Word InstY_248;
                MR_Word YConst_41;
                MR_Word Var_73;
                MR_Word Var_74;
                MR_Word Var_75;
                MR_Word Var_76;

                succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  X_245 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 0))));
                  Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 1))));
                  succeeded = (Var_70 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Y_246 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_70, (MR_Integer) 0))));
                    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_70, (MR_Integer) 1))));
                    succeeded = (Var_71 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Z_247 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_71, (MR_Integer) 0))));
                      Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_71, (MR_Integer) 1))));
                      succeeded = (Var_72 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        NumTargetBits_38 = check_hlds__simplify__simplify_goal_call__int_type_target_bits_2_f_0(Globals_24, IntType_13);
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_14, Y_246, &InstY_248);
                        succeeded = ((((MR_tag((MR_Word) InstY_248)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstY_248, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstY_248, (MR_Integer) 3))));
                          succeeded = (Var_73 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_73, (MR_Integer) 0))));
                            Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_73, (MR_Integer) 1))));
                            succeeded = (Var_76 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              YConst_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_74, (MR_Integer) 0))));
                              Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_74, (MR_Integer) 1))));
                              succeeded = (Var_75 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                if (((((MR_tag((MR_Word) YConst_41)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), YConst_41, (MR_Integer) 0)))) == (MR_Integer) 5))))
                                  succeeded = MR_TRUE;
                                else
                                if (((((MR_tag((MR_Word) YConst_41)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), YConst_41, (MR_Integer) 0)))) == (MR_Integer) 6))))
                                  succeeded = MR_TRUE;
                                else
                                  succeeded = MR_FALSE;
                              }
                            }
                          }
                        }
                        if (succeeded)
                        {
                          if (((((MR_tag((MR_Word) YConst_41)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), YConst_41, (MR_Integer) 0)))) == (MR_Integer) 5))))
                          {
                            MR_Integer YIntVal_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), YConst_41, (MR_Integer) 1))));

                            succeeded = ((MR_Integer) 0 <= YIntVal_44);
                            if (succeeded)
                              succeeded = (YIntVal_44 < NumTargetBits_38);
                            if (succeeded)
                            {
                              check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_68, ModuleName_15, (MR_String) "unchecked_left_shift", (MR_Integer) 0, X_245, Y_246, Z_247, ImprovedGoalExpr_20);
                              *STATE_VARIABLE_Info_69 = STATE_VARIABLE_Info_0_68;
                            }
                            else
                            {
                              MR_Word Var_105;
                              MR_Word Var_108;
                              MR_Word Var_109;
                              MR_Word Var_110;
                              MR_Word Var_113;
                              MR_Word Var_116;
                              MR_Word Var_117;
                              MR_Word Context_211;
                              MR_Word SymName_212;
                              MR_Word Pieces_213;
                              MR_Word Spec_214;

                              *ImprovedGoalExpr_20 = GoalExpr0_19;
                              Context_211 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_66);
                              {
                                Var_105 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), Var_105, 0) = ((MR_Box) (ModuleName_15));
                              }
                              {
                                SymName_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), SymName_212, 0) = ((MR_Box) (Var_105));
                                MR_hl_field(MR_mktag(1), SymName_212, 1) = ((MR_Box) (PredName_16));
                              }
                              {
                                Var_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), Var_109, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                                MR_hl_field(MR_mktag(3), Var_109, 1) = ((MR_Box) (SymName_212));
                              }
                              {
                                Var_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), Var_117, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                                MR_hl_field(MR_mktag(3), Var_117, 1) = ((MR_Box) (NumTargetBits_38));
                              }
                              {
                                Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (Var_117));
                                MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[50])));
                              }
                              {
                                Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[84])));
                                MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (Var_116));
                              }
                              {
                                Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[83])));
                                MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (Var_113));
                              }
                              {
                                Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (Var_109));
                                MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (Var_110));
                              }
                              {
                                Pieces_213 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Pieces_213, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[82])));
                                MR_hl_field(MR_mktag(1), Pieces_213, 1) = ((MR_Box) (Var_108));
                              }
                              {
                                Spec_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Spec_214, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_improve_arith_shift_cmp_ops\'/12"));
                                MR_hl_field(MR_mktag(1), Spec_214, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                MR_hl_field(MR_mktag(1), Spec_214, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_4[0])));
                                MR_hl_field(MR_mktag(1), Spec_214, 3) = ((MR_Box) (Context_211));
                                MR_hl_field(MR_mktag(1), Spec_214, 4) = ((MR_Box) (Pieces_213));
                              }
                              check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_214, STATE_VARIABLE_Info_0_68, STATE_VARIABLE_Info_69);
                            }
                          }
                          else
                          {
                            MR_Unsigned YUintVal_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), YConst_41, (MR_Integer) 1))));
                            MR_Unsigned Var_77;

                            Var_77 = mercury__uint__det_from_int_1_f_0(NumTargetBits_38);
                            succeeded = (YUintVal_45 < Var_77);
                            if (succeeded)
                            {
                              check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_68, ModuleName_15, (MR_String) "unchecked_left_shift", (MR_Integer) 0, X_245, Y_246, Z_247, ImprovedGoalExpr_20);
                              *STATE_VARIABLE_Info_69 = STATE_VARIABLE_Info_0_68;
                            }
                            else
                            {
                              MR_Word Var_79;
                              MR_Word Var_82;
                              MR_Word Var_83;
                              MR_Word Var_84;
                              MR_Word Var_87;
                              MR_Word Var_90;
                              MR_Word Var_91;
                              MR_Word Context_223;
                              MR_Word SymName_224;
                              MR_Word Pieces_225;
                              MR_Word Spec_226;

                              *ImprovedGoalExpr_20 = GoalExpr0_19;
                              Context_223 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_66);
                              {
                                Var_79 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (ModuleName_15));
                              }
                              {
                                SymName_224 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), SymName_224, 0) = ((MR_Box) (Var_79));
                                MR_hl_field(MR_mktag(1), SymName_224, 1) = ((MR_Box) (PredName_16));
                              }
                              {
                                Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                                MR_hl_field(MR_mktag(3), Var_83, 1) = ((MR_Box) (SymName_224));
                              }
                              {
                                Var_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), Var_91, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                                MR_hl_field(MR_mktag(3), Var_91, 1) = ((MR_Box) (NumTargetBits_38));
                              }
                              {
                                Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (Var_91));
                                MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[12])));
                              }
                              {
                                Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[86])));
                                MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (Var_90));
                              }
                              {
                                Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[85])));
                                MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Var_87));
                              }
                              {
                                Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
                                MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (Var_84));
                              }
                              {
                                Pieces_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Pieces_225, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[82])));
                                MR_hl_field(MR_mktag(1), Pieces_225, 1) = ((MR_Box) (Var_82));
                              }
                              {
                                Spec_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Spec_226, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_improve_arith_shift_cmp_ops\'/12"));
                                MR_hl_field(MR_mktag(1), Spec_226, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                MR_hl_field(MR_mktag(1), Spec_226, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_4[0])));
                                MR_hl_field(MR_mktag(1), Spec_226, 3) = ((MR_Box) (Context_223));
                                MR_hl_field(MR_mktag(1), Spec_226, 4) = ((MR_Box) (Pieces_225));
                              }
                              check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_226, STATE_VARIABLE_Info_0_68, STATE_VARIABLE_Info_69);
                            }
                          }
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          MR_Word TypeCtorInfo_253_253;
                          MR_Word NumTargetBitsConstVar_46;
                          MR_Word NumTargetBitsConstGoal_47;
                          MR_Word PrivateBuiltin_48;
                          MR_Word InRangeTestGoal_49;
                          MR_Word TestConjGoalInfo_50;
                          MR_Word TestConjGoal_51;
                          MR_Word UncheckedShiftGoalExpr_52;
                          MR_Word UncheckedShiftGoal_53;
                          MR_String NotInRangeStr_54;
                          MR_Word ErrorMsgStrVar_55;
                          MR_Word ErrorMsgStrGoal_56;
                          MR_Word ExceptionType_57;
                          MR_Word ExceptionVar_58;
                          MR_Word ExceptionTypeCtor_59;
                          MR_Word ExceptionWrapperCtorSymName_60;
                          MR_Word ExceptionWrapperCtorConsId_61;
                          MR_Word WrapErrorMsgGoal_62;
                          MR_Word ThrowGoal_63;
                          MR_Word ThrowConjGoalInfo_64;
                          MR_Word ThrowConjGoal_65;
                          MR_Word STATE_VARIABLE_Info_129_129;
                          MR_String Var_130;
                          MR_Word Var_131;
                          MR_Word Var_132;
                          MR_Word Var_133;
                          MR_Word Var_134;
                          MR_Word Var_135;
                          MR_Word Var_136;
                          MR_Word Var_137;
                          MR_Word Var_138;
                          MR_Word Var_139;
                          MR_Word STATE_VARIABLE_Info_146_146;
                          MR_String Var_148;
                          MR_Integer Var_149;
                          MR_Word Var_150;
                          MR_Word Var_151;
                          MR_Word Var_152;
                          MR_String Var_153;
                          MR_Word Var_154;
                          MR_Word Var_155;
                          MR_Word Var_156;
                          MR_Word Var_157;
                          MR_Word Var_158;
                          MR_Word Var_159;
                          MR_Word Var_160;
                          MR_Word Var_161;
                          MR_Word Var_162;
                          MR_Word Var_163;
                          MR_Word Var_164;
                          MR_Word Var_165;
                          MR_Word Var_166;
                          MR_Word Var_167;
                          MR_Word Var_168;
                          MR_Word Var_169;
                          MR_Word Var_170;
                          MR_Word Var_171;
                          MR_Word Context_239;
                          MR_String Var_2047;

                          succeeded = mercury__builtin__semidet_fail_0_p_0();
                          if (succeeded)
                          {
                            Context_239 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_66);
                            check_hlds__simplify__simplify_goal_call__simplify_make_int_const_5_p_0(NumTargetBits_38, &NumTargetBitsConstVar_46, &NumTargetBitsConstGoal_47, STATE_VARIABLE_Info_0_68, &STATE_VARIABLE_Info_129_129);
                            PrivateBuiltin_48 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                            Var_130 = (MR_String) "unsigned_lt";
                            Var_131 = (MR_Integer) 0;
                            check_hlds__simplify__simplify_goal_call__simplify_make_cmp_goal_expr_8_p_0(STATE_VARIABLE_Info_129_129, PrivateBuiltin_48, Var_130, Var_131, Y_246, NumTargetBitsConstVar_46, Context_239, &InRangeTestGoal_49);
                            TypeCtorInfo_253_253 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                            Var_132 = parse_tree__set_of_var__make_singleton_1_f_0(TypeCtorInfo_253_253, Y_246);
                            Var_133 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                            Var_134 = (MR_Integer) 1;
                            Var_135 = (MR_Integer) 0;
                            hlds__hlds_goal__goal_info_init_6_p_0(Var_132, Var_133, Var_134, Var_135, Context_239, &TestConjGoalInfo_50);
                            Var_138 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) (InRangeTestGoal_49));
                              MR_hl_field(MR_mktag(1), Var_137, 1) = ((MR_Box) (Var_138));
                            }
                            {
                              Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (NumTargetBitsConstGoal_47));
                              MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) (Var_137));
                            }
                            hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_136, TestConjGoalInfo_50, &TestConjGoal_51);
                            Var_139 = (MR_Integer) 0;
                            check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_129_129, ModuleName_15, (MR_String) "unchecked_left_shift", Var_139, X_245, Y_246, Z_247, &UncheckedShiftGoalExpr_52);
                            Var_2047 = (MR_String) ".(<<): second operand is out of range";
                            {
                              UncheckedShiftGoal_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), UncheckedShiftGoal_53, 0) = ((MR_Box) (UncheckedShiftGoalExpr_52));
                              MR_hl_field(MR_mktag(0), UncheckedShiftGoal_53, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_0_66));
                            }
                            NotInRangeStr_54 = mercury__string__f_43_43_2_f_0(ModuleName_15, Var_2047);
                            check_hlds__simplify__simplify_goal_call__simplify_make_string_const_5_p_0(NotInRangeStr_54, &ErrorMsgStrVar_55, &ErrorMsgStrGoal_56, STATE_VARIABLE_Info_129_129, &STATE_VARIABLE_Info_146_146);
                            ExceptionType_57 = parse_tree__builtin_lib_types__void_type_0_f_0();
                            check_hlds__simplify__simplify_goal_call__simplify_make_var_4_p_0(ExceptionType_57, &ExceptionVar_58, STATE_VARIABLE_Info_146_146, STATE_VARIABLE_Info_69);
                            parse_tree__prog_type__type_to_ctor_det_2_p_0(ExceptionType_57, &ExceptionTypeCtor_59);
                            Var_148 = (MR_String) "math_domain_error";
                            Var_149 = (MR_Integer) 1;
                            Var_151 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              ExceptionWrapperCtorSymName_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), ExceptionWrapperCtorSymName_60, 0) = ((MR_Box) (PrivateBuiltin_48));
                              MR_hl_field(MR_mktag(1), ExceptionWrapperCtorSymName_60, 1) = ((MR_Box) (Var_148));
                            }
                            {
                              ExceptionWrapperCtorConsId_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), ExceptionWrapperCtorConsId_61, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                              MR_hl_field(MR_mktag(3), ExceptionWrapperCtorConsId_61, 1) = ((MR_Box) (ExceptionWrapperCtorSymName_60));
                              MR_hl_field(MR_mktag(3), ExceptionWrapperCtorConsId_61, 2) = ((MR_Box) (Var_149));
                              MR_hl_field(MR_mktag(3), ExceptionWrapperCtorConsId_61, 3) = ((MR_Box) (ExceptionTypeCtor_59));
                            }
                            {
                              Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_150, 0) = ((MR_Box) (ErrorMsgStrVar_55));
                              MR_hl_field(MR_mktag(1), Var_150, 1) = ((MR_Box) (Var_151));
                            }
                            hlds__make_goal__construct_functor_4_p_0(ExceptionVar_58, ExceptionWrapperCtorConsId_61, Var_150, &WrapErrorMsgGoal_62);
                            Var_152 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
                            Var_153 = (MR_String) "throw";
                            Var_154 = (MR_Integer) 0;
                            Var_155 = (MR_Word) ((MR_Unsigned) 0U);
                            Var_156 = (MR_Integer) 6;
                            Var_157 = (MR_Integer) 0;
                            Var_162 = (MR_Word) ((MR_Unsigned) 0U);
                            Var_159 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              Var_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_158, 0) = ((MR_Box) (ExceptionVar_58));
                              MR_hl_field(MR_mktag(1), Var_158, 1) = ((MR_Box) (Var_162));
                            }
                            Var_160 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                            Var_161 = mercury__term__dummy_context_init_0_f_0();
                            hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_23, Var_152, Var_153, Var_154, Var_155, Var_156, Var_157, Var_158, Var_159, Var_160, Var_161, &ThrowGoal_63);
                            Var_163 = parse_tree__set_of_var__init_0_f_0(TypeCtorInfo_253_253);
                            Var_164 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                            Var_165 = (MR_Integer) 6;
                            Var_166 = (MR_Integer) 0;
                            hlds__hlds_goal__goal_info_init_6_p_0(Var_163, Var_164, Var_165, Var_166, Context_239, &ThrowConjGoalInfo_64);
                            Var_170 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              Var_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_169, 0) = ((MR_Box) (ThrowGoal_63));
                              MR_hl_field(MR_mktag(1), Var_169, 1) = ((MR_Box) (Var_170));
                            }
                            {
                              Var_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_168, 0) = ((MR_Box) (WrapErrorMsgGoal_62));
                              MR_hl_field(MR_mktag(1), Var_168, 1) = ((MR_Box) (Var_169));
                            }
                            {
                              Var_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_167, 0) = ((MR_Box) (ErrorMsgStrGoal_56));
                              MR_hl_field(MR_mktag(1), Var_167, 1) = ((MR_Box) (Var_168));
                            }
                            hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_167, ThrowConjGoalInfo_64, &ThrowConjGoal_65);
                            Var_171 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                              *ImprovedGoalExpr_20 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_171));
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (TestConjGoal_51));
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (UncheckedShiftGoal_53));
                              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ThrowConjGoal_65));
                            }
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
          case (MR_Integer) 11:
            {
              // case "rem"
              ;
              {
                MR_Word Var_1937;
                MR_Word Var_1938;
                MR_Word Var_1939;
                MR_Word Var_1940;
                MR_Word ConsY_1975;
                MR_Word Z_1995;
                MR_Word InstY_1996;
                MR_Word Var_2004;
                MR_Word Var_2005;
                MR_Word Var_2006;
                MR_Word X_2023;
                MR_Word Y_2024;

                succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  X_2023 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 0))));
                  Var_2004 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 1))));
                  succeeded = (Var_2004 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Y_2024 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2004, (MR_Integer) 0))));
                    Var_2005 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2004, (MR_Integer) 1))));
                    succeeded = (Var_2005 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Z_1995 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2005, (MR_Integer) 0))));
                      Var_2006 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2005, (MR_Integer) 1))));
                      succeeded = (Var_2006 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_14, Y_2024, &InstY_1996);
                        succeeded = ((((MR_tag((MR_Word) InstY_1996)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstY_1996, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_1937 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstY_1996, (MR_Integer) 3))));
                          succeeded = (Var_1937 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_1938 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1937, (MR_Integer) 0))));
                            Var_1940 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1937, (MR_Integer) 1))));
                            succeeded = (Var_1940 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              ConsY_1975 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_1938, (MR_Integer) 0))));
                              Var_1939 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_1938, (MR_Integer) 1))));
                              succeeded = (Var_1939 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                succeeded = check_hlds__simplify__simplify_goal_call__is_zero_const_2_p_0(IntType_13, ConsY_1975);
                                if (succeeded)
                                {
                                  MR_Word Context_1941;
                                  MR_Word SymName_1942;
                                  MR_Word Pieces_1943;
                                  MR_Word Spec_1944;
                                  MR_Word Var_1945;
                                  MR_Word Var_1948;
                                  MR_Word Var_1949;

                                  *ImprovedGoalExpr_20 = GoalExpr0_19;
                                  Context_1941 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_66);
                                  {
                                    Var_1945 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(MR_mktag(0), Var_1945, 0) = ((MR_Box) (ModuleName_15));
                                  }
                                  {
                                    SymName_1942 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), SymName_1942, 0) = ((MR_Box) (Var_1945));
                                    MR_hl_field(MR_mktag(1), SymName_1942, 1) = ((MR_Box) (PredName_16));
                                  }
                                  {
                                    Var_1949 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(3), Var_1949, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                                    MR_hl_field(MR_mktag(3), Var_1949, 1) = ((MR_Box) (SymName_1942));
                                  }
                                  {
                                    Var_1948 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), Var_1948, 0) = ((MR_Box) (Var_1949));
                                    MR_hl_field(MR_mktag(1), Var_1948, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[48])));
                                  }
                                  {
                                    Pieces_1943 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), Pieces_1943, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[82])));
                                    MR_hl_field(MR_mktag(1), Pieces_1943, 1) = ((MR_Box) (Var_1948));
                                  }
                                  {
                                    Spec_1944 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), Spec_1944, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_improve_arith_shift_cmp_ops\'/12"));
                                    MR_hl_field(MR_mktag(1), Spec_1944, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                    MR_hl_field(MR_mktag(1), Spec_1944, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_4[0])));
                                    MR_hl_field(MR_mktag(1), Spec_1944, 3) = ((MR_Box) (Context_1941));
                                    MR_hl_field(MR_mktag(1), Spec_1944, 4) = ((MR_Box) (Pieces_1943));
                                  }
                                  check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_1944, STATE_VARIABLE_Info_0_68, STATE_VARIABLE_Info_69);
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  MR_Word Var_1955;

                                  succeeded = check_hlds__simplify__simplify_goal_call__is_int_const_2_p_0(IntType_13, ConsY_1975);
                                  if (succeeded)
                                  {
                                    Var_1955 = (MR_Integer) 0;
                                    check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_68, ModuleName_15, (MR_String) "unchecked_rem", Var_1955, X_2023, Y_2024, Z_1995, ImprovedGoalExpr_20);
                                    *STATE_VARIABLE_Info_69 = STATE_VARIABLE_Info_0_68;
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
            break;
          case (MR_Integer) 14:
            {
              // case "/"
              ;
              {
                MR_Word Z_29;
                MR_Word InstY_30;
                MR_Word ConsY_33;
                MR_Word Var_172;
                MR_Word Var_173;
                MR_Word Var_174;
                MR_Word Var_175;
                MR_Word Var_176;
                MR_Word Var_177;
                MR_Word Var_178;
                MR_Word X_209;
                MR_Word Y_210;

                succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  X_209 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 0))));
                  Var_172 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 1))));
                  succeeded = (Var_172 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Y_210 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_172, (MR_Integer) 0))));
                    Var_173 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_172, (MR_Integer) 1))));
                    succeeded = (Var_173 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Z_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_173, (MR_Integer) 0))));
                      Var_174 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_173, (MR_Integer) 1))));
                      succeeded = (Var_174 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_14, Y_210, &InstY_30);
                        succeeded = ((((MR_tag((MR_Word) InstY_30)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstY_30, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_175 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstY_30, (MR_Integer) 3))));
                          succeeded = (Var_175 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_176 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_175, (MR_Integer) 0))));
                            Var_178 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_175, (MR_Integer) 1))));
                            succeeded = (Var_178 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              ConsY_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_176, (MR_Integer) 0))));
                              Var_177 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_176, (MR_Integer) 1))));
                              succeeded = (Var_177 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                succeeded = check_hlds__simplify__simplify_goal_call__is_zero_const_2_p_0(IntType_13, ConsY_33);
                                if (succeeded)
                                {
                                  MR_Word Context_34;
                                  MR_Word SymName_35;
                                  MR_Word Pieces_36;
                                  MR_Word Spec_37;
                                  MR_Word Var_179;
                                  MR_Word Var_182;
                                  MR_Word Var_183;

                                  *ImprovedGoalExpr_20 = GoalExpr0_19;
                                  Context_34 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_66);
                                  {
                                    Var_179 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(MR_mktag(0), Var_179, 0) = ((MR_Box) (ModuleName_15));
                                  }
                                  {
                                    SymName_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), SymName_35, 0) = ((MR_Box) (Var_179));
                                    MR_hl_field(MR_mktag(1), SymName_35, 1) = ((MR_Box) (PredName_16));
                                  }
                                  {
                                    Var_183 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(3), Var_183, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                                    MR_hl_field(MR_mktag(3), Var_183, 1) = ((MR_Box) (SymName_35));
                                  }
                                  {
                                    Var_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), Var_182, 0) = ((MR_Box) (Var_183));
                                    MR_hl_field(MR_mktag(1), Var_182, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[48])));
                                  }
                                  {
                                    Pieces_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), Pieces_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[82])));
                                    MR_hl_field(MR_mktag(1), Pieces_36, 1) = ((MR_Box) (Var_182));
                                  }
                                  {
                                    Spec_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), Spec_37, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_improve_arith_shift_cmp_ops\'/12"));
                                    MR_hl_field(MR_mktag(1), Spec_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                    MR_hl_field(MR_mktag(1), Spec_37, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_4[0])));
                                    MR_hl_field(MR_mktag(1), Spec_37, 3) = ((MR_Box) (Context_34));
                                    MR_hl_field(MR_mktag(1), Spec_37, 4) = ((MR_Box) (Pieces_36));
                                  }
                                  check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_37, STATE_VARIABLE_Info_0_68, STATE_VARIABLE_Info_69);
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  MR_Word Var_195;

                                  succeeded = check_hlds__simplify__simplify_goal_call__is_int_const_2_p_0(IntType_13, ConsY_33);
                                  if (succeeded)
                                  {
                                    Var_195 = (MR_Integer) 0;
                                    check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_68, ModuleName_15, (MR_String) "unchecked_quotient", Var_195, X_209, Y_210, Z_29, ImprovedGoalExpr_20);
                                    *STATE_VARIABLE_Info_69 = STATE_VARIABLE_Info_0_68;
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
            break;
          case (MR_Integer) 15:
          case (MR_Integer) 17:
          case (MR_Integer) 29:
          case (MR_Integer) 31:
            {
              // case "<", "=<", ">", ">="
              ;
              succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_16, Args_18, ImprovedGoalExpr_20);
              if (succeeded)
              {
                *STATE_VARIABLE_Info_69 = STATE_VARIABLE_Info_0_68;
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 21:
            {
              // case "rem_bits_per_int"
              ;
              {
                MR_String Op_2025;
                MR_Word X_2026;
                MR_Word Y_2027;
                MR_Integer TargetBitsPerInt_2028;
                MR_Word Var_2029;
                MR_Word Var_2030;
                MR_Word Var_2031;

                succeeded = (IntType_13 == (MR_Integer) 0);
                if (succeeded)
                {
                  Op_2025 = (MR_String) "unchecked_rem";
                  succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    X_2026 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 0))));
                    Var_2029 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 1))));
                    succeeded = (Var_2029 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Y_2027 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2029, (MR_Integer) 0))));
                      Var_2030 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2029, (MR_Integer) 1))));
                      succeeded = (Var_2030 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        libs__int_emu__target_bits_per_int_2_p_0(Globals_24, &Var_2031);
                        TargetBitsPerInt_2028 = (MR_Integer) (Var_2031);
                        check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_9_p_0(ModuleName_15, Op_2025, X_2026, TargetBitsPerInt_2028, Y_2027, ImprovedGoalExpr_20, STATE_VARIABLE_GoalInfo_0_66, STATE_VARIABLE_Info_0_68, STATE_VARIABLE_Info_69);
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 22:
            {
              // case ">>"
              ;
              {
                MR_Integer NumTargetBits_1272;
                MR_Word Var_1300;
                MR_Word Var_1301;
                MR_Word Var_1302;
                MR_Word X_1399;
                MR_Word Y_1400;
                MR_Word Z_1401;
                MR_Word InstY_1402;
                MR_Word YConst_1151;
                MR_Word Var_885;
                MR_Word Var_886;
                MR_Word Var_887;
                MR_Word Var_888;

                succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  X_1399 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 0))));
                  Var_1300 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 1))));
                  succeeded = (Var_1300 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Y_1400 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1300, (MR_Integer) 0))));
                    Var_1301 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1300, (MR_Integer) 1))));
                    succeeded = (Var_1301 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Z_1401 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1301, (MR_Integer) 0))));
                      Var_1302 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1301, (MR_Integer) 1))));
                      succeeded = (Var_1302 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        NumTargetBits_1272 = check_hlds__simplify__simplify_goal_call__int_type_target_bits_2_f_0(Globals_24, IntType_13);
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_14, Y_1400, &InstY_1402);
                        succeeded = ((((MR_tag((MR_Word) InstY_1402)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstY_1402, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_885 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstY_1402, (MR_Integer) 3))));
                          succeeded = (Var_885 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_886 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_885, (MR_Integer) 0))));
                            Var_888 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_885, (MR_Integer) 1))));
                            succeeded = (Var_888 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              YConst_1151 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_886, (MR_Integer) 0))));
                              Var_887 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_886, (MR_Integer) 1))));
                              succeeded = (Var_887 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                if (((((MR_tag((MR_Word) YConst_1151)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), YConst_1151, (MR_Integer) 0)))) == (MR_Integer) 5))))
                                  succeeded = MR_TRUE;
                                else
                                if (((((MR_tag((MR_Word) YConst_1151)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), YConst_1151, (MR_Integer) 0)))) == (MR_Integer) 6))))
                                  succeeded = MR_TRUE;
                                else
                                  succeeded = MR_FALSE;
                              }
                            }
                          }
                        }
                        if (succeeded)
                        {
                          if (((((MR_tag((MR_Word) YConst_1151)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), YConst_1151, (MR_Integer) 0)))) == (MR_Integer) 5))))
                          {
                            MR_Integer YIntVal_937 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), YConst_1151, (MR_Integer) 1))));

                            succeeded = ((MR_Integer) 0 <= YIntVal_937);
                            if (succeeded)
                              succeeded = (YIntVal_937 < NumTargetBits_1272);
                            if (succeeded)
                            {
                              check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_68, ModuleName_15, (MR_String) "unchecked_right_shift", (MR_Integer) 0, X_1399, Y_1400, Z_1401, ImprovedGoalExpr_20);
                              *STATE_VARIABLE_Info_69 = STATE_VARIABLE_Info_0_68;
                            }
                            else
                            {
                              MR_Word Var_891;
                              MR_Word Var_894;
                              MR_Word Var_895;
                              MR_Word Var_896;
                              MR_Word Var_899;
                              MR_Word Var_902;
                              MR_Word Var_903;
                              MR_Word Context_909;
                              MR_Word SymName_910;
                              MR_Word Pieces_911;
                              MR_Word Spec_912;

                              *ImprovedGoalExpr_20 = GoalExpr0_19;
                              Context_909 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_66);
                              {
                                Var_891 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), Var_891, 0) = ((MR_Box) (ModuleName_15));
                              }
                              {
                                SymName_910 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), SymName_910, 0) = ((MR_Box) (Var_891));
                                MR_hl_field(MR_mktag(1), SymName_910, 1) = ((MR_Box) (PredName_16));
                              }
                              {
                                Var_895 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), Var_895, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                                MR_hl_field(MR_mktag(3), Var_895, 1) = ((MR_Box) (SymName_910));
                              }
                              {
                                Var_903 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), Var_903, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                                MR_hl_field(MR_mktag(3), Var_903, 1) = ((MR_Box) (NumTargetBits_1272));
                              }
                              {
                                Var_902 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_902, 0) = ((MR_Box) (Var_903));
                                MR_hl_field(MR_mktag(1), Var_902, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[50])));
                              }
                              {
                                Var_899 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_899, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[84])));
                                MR_hl_field(MR_mktag(1), Var_899, 1) = ((MR_Box) (Var_902));
                              }
                              {
                                Var_896 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_896, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[83])));
                                MR_hl_field(MR_mktag(1), Var_896, 1) = ((MR_Box) (Var_899));
                              }
                              {
                                Var_894 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_894, 0) = ((MR_Box) (Var_895));
                                MR_hl_field(MR_mktag(1), Var_894, 1) = ((MR_Box) (Var_896));
                              }
                              {
                                Pieces_911 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Pieces_911, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[82])));
                                MR_hl_field(MR_mktag(1), Pieces_911, 1) = ((MR_Box) (Var_894));
                              }
                              {
                                Spec_912 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Spec_912, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_improve_arith_shift_cmp_ops\'/12"));
                                MR_hl_field(MR_mktag(1), Spec_912, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                MR_hl_field(MR_mktag(1), Spec_912, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_4[0])));
                                MR_hl_field(MR_mktag(1), Spec_912, 3) = ((MR_Box) (Context_909));
                                MR_hl_field(MR_mktag(1), Spec_912, 4) = ((MR_Box) (Pieces_911));
                              }
                              check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_912, STATE_VARIABLE_Info_0_68, STATE_VARIABLE_Info_69);
                            }
                          }
                          else
                          {
                            MR_Unsigned YUintVal_1010 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), YConst_1151, (MR_Integer) 1))));
                            MR_Unsigned Var_962;

                            Var_962 = mercury__uint__det_from_int_1_f_0(NumTargetBits_1272);
                            succeeded = (YUintVal_1010 < Var_962);
                            if (succeeded)
                            {
                              check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_68, ModuleName_15, (MR_String) "unchecked_right_shift", (MR_Integer) 0, X_1399, Y_1400, Z_1401, ImprovedGoalExpr_20);
                              *STATE_VARIABLE_Info_69 = STATE_VARIABLE_Info_0_68;
                            }
                            else
                            {
                              MR_Word Var_964;
                              MR_Word Var_967;
                              MR_Word Var_968;
                              MR_Word Var_969;
                              MR_Word Var_972;
                              MR_Word Var_975;
                              MR_Word Var_976;
                              MR_Word Context_982;
                              MR_Word SymName_983;
                              MR_Word Pieces_984;
                              MR_Word Spec_985;

                              *ImprovedGoalExpr_20 = GoalExpr0_19;
                              Context_982 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_66);
                              {
                                Var_964 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), Var_964, 0) = ((MR_Box) (ModuleName_15));
                              }
                              {
                                SymName_983 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), SymName_983, 0) = ((MR_Box) (Var_964));
                                MR_hl_field(MR_mktag(1), SymName_983, 1) = ((MR_Box) (PredName_16));
                              }
                              {
                                Var_968 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), Var_968, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                                MR_hl_field(MR_mktag(3), Var_968, 1) = ((MR_Box) (SymName_983));
                              }
                              {
                                Var_976 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), Var_976, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                                MR_hl_field(MR_mktag(3), Var_976, 1) = ((MR_Box) (NumTargetBits_1272));
                              }
                              {
                                Var_975 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_975, 0) = ((MR_Box) (Var_976));
                                MR_hl_field(MR_mktag(1), Var_975, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[12])));
                              }
                              {
                                Var_972 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_972, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[86])));
                                MR_hl_field(MR_mktag(1), Var_972, 1) = ((MR_Box) (Var_975));
                              }
                              {
                                Var_969 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_969, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[85])));
                                MR_hl_field(MR_mktag(1), Var_969, 1) = ((MR_Box) (Var_972));
                              }
                              {
                                Var_967 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_967, 0) = ((MR_Box) (Var_968));
                                MR_hl_field(MR_mktag(1), Var_967, 1) = ((MR_Box) (Var_969));
                              }
                              {
                                Pieces_984 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Pieces_984, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[82])));
                                MR_hl_field(MR_mktag(1), Pieces_984, 1) = ((MR_Box) (Var_967));
                              }
                              {
                                Spec_985 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Spec_985, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_improve_arith_shift_cmp_ops\'/12"));
                                MR_hl_field(MR_mktag(1), Spec_985, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                MR_hl_field(MR_mktag(1), Spec_985, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_4[0])));
                                MR_hl_field(MR_mktag(1), Spec_985, 3) = ((MR_Box) (Context_982));
                                MR_hl_field(MR_mktag(1), Spec_985, 4) = ((MR_Box) (Pieces_984));
                              }
                              check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_985, STATE_VARIABLE_Info_0_68, STATE_VARIABLE_Info_69);
                            }
                          }
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          MR_Word TypeCtorInfo_253_1148;
                          MR_Word NumTargetBitsConstVar_1085;
                          MR_Word NumTargetBitsConstGoal_1086;
                          MR_Word PrivateBuiltin_1087;
                          MR_Word InRangeTestGoal_1088;
                          MR_Word TestConjGoalInfo_1089;
                          MR_Word TestConjGoal_1090;
                          MR_Word UncheckedShiftGoalExpr_1091;
                          MR_Word UncheckedShiftGoal_1092;
                          MR_String NotInRangeStr_1093;
                          MR_Word ErrorMsgStrVar_1094;
                          MR_Word ErrorMsgStrGoal_1095;
                          MR_Word ExceptionType_1096;
                          MR_Word ExceptionVar_1097;
                          MR_Word ExceptionTypeCtor_1098;
                          MR_Word ExceptionWrapperCtorSymName_1099;
                          MR_Word ExceptionWrapperCtorConsId_1100;
                          MR_Word WrapErrorMsgGoal_1101;
                          MR_Word ThrowGoal_1102;
                          MR_Word ThrowConjGoalInfo_1103;
                          MR_Word ThrowConjGoal_1104;
                          MR_Word STATE_VARIABLE_Info_129_1105;
                          MR_String Var_1106;
                          MR_Word Var_1107;
                          MR_Word Var_1108;
                          MR_Word Var_1109;
                          MR_Word Var_1110;
                          MR_Word Var_1111;
                          MR_Word Var_1112;
                          MR_Word Var_1113;
                          MR_Word Var_1114;
                          MR_Word Var_1115;
                          MR_Word STATE_VARIABLE_Info_146_1122;
                          MR_String Var_1123;
                          MR_Integer Var_1124;
                          MR_Word Var_1125;
                          MR_Word Var_1126;
                          MR_Word Var_1127;
                          MR_String Var_1128;
                          MR_Word Var_1129;
                          MR_Word Var_1130;
                          MR_Word Var_1131;
                          MR_Word Var_1132;
                          MR_Word Var_1133;
                          MR_Word Var_1134;
                          MR_Word Var_1135;
                          MR_Word Var_1136;
                          MR_Word Var_1137;
                          MR_Word Var_1138;
                          MR_Word Var_1139;
                          MR_Word Var_1140;
                          MR_Word Var_1141;
                          MR_Word Var_1142;
                          MR_Word Var_1143;
                          MR_Word Var_1144;
                          MR_Word Var_1145;
                          MR_Word Var_1146;
                          MR_Word Context_1147;
                          MR_String Var_2039;

                          succeeded = mercury__builtin__semidet_fail_0_p_0();
                          if (succeeded)
                          {
                            Context_1147 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_66);
                            check_hlds__simplify__simplify_goal_call__simplify_make_int_const_5_p_0(NumTargetBits_1272, &NumTargetBitsConstVar_1085, &NumTargetBitsConstGoal_1086, STATE_VARIABLE_Info_0_68, &STATE_VARIABLE_Info_129_1105);
                            PrivateBuiltin_1087 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                            Var_1106 = (MR_String) "unsigned_lt";
                            Var_1107 = (MR_Integer) 0;
                            check_hlds__simplify__simplify_goal_call__simplify_make_cmp_goal_expr_8_p_0(STATE_VARIABLE_Info_129_1105, PrivateBuiltin_1087, Var_1106, Var_1107, Y_1400, NumTargetBitsConstVar_1085, Context_1147, &InRangeTestGoal_1088);
                            TypeCtorInfo_253_1148 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                            Var_1108 = parse_tree__set_of_var__make_singleton_1_f_0(TypeCtorInfo_253_1148, Y_1400);
                            Var_1109 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                            Var_1110 = (MR_Integer) 1;
                            Var_1111 = (MR_Integer) 0;
                            hlds__hlds_goal__goal_info_init_6_p_0(Var_1108, Var_1109, Var_1110, Var_1111, Context_1147, &TestConjGoalInfo_1089);
                            Var_1114 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              Var_1113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_1113, 0) = ((MR_Box) (InRangeTestGoal_1088));
                              MR_hl_field(MR_mktag(1), Var_1113, 1) = ((MR_Box) (Var_1114));
                            }
                            {
                              Var_1112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_1112, 0) = ((MR_Box) (NumTargetBitsConstGoal_1086));
                              MR_hl_field(MR_mktag(1), Var_1112, 1) = ((MR_Box) (Var_1113));
                            }
                            hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_1112, TestConjGoalInfo_1089, &TestConjGoal_1090);
                            Var_1115 = (MR_Integer) 0;
                            check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_129_1105, ModuleName_15, (MR_String) "unchecked_right_shift", Var_1115, X_1399, Y_1400, Z_1401, &UncheckedShiftGoalExpr_1091);
                            Var_2039 = (MR_String) ".(>>): second operand is out of range";
                            {
                              UncheckedShiftGoal_1092 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), UncheckedShiftGoal_1092, 0) = ((MR_Box) (UncheckedShiftGoalExpr_1091));
                              MR_hl_field(MR_mktag(0), UncheckedShiftGoal_1092, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_0_66));
                            }
                            NotInRangeStr_1093 = mercury__string__f_43_43_2_f_0(ModuleName_15, Var_2039);
                            check_hlds__simplify__simplify_goal_call__simplify_make_string_const_5_p_0(NotInRangeStr_1093, &ErrorMsgStrVar_1094, &ErrorMsgStrGoal_1095, STATE_VARIABLE_Info_129_1105, &STATE_VARIABLE_Info_146_1122);
                            ExceptionType_1096 = parse_tree__builtin_lib_types__void_type_0_f_0();
                            check_hlds__simplify__simplify_goal_call__simplify_make_var_4_p_0(ExceptionType_1096, &ExceptionVar_1097, STATE_VARIABLE_Info_146_1122, STATE_VARIABLE_Info_69);
                            parse_tree__prog_type__type_to_ctor_det_2_p_0(ExceptionType_1096, &ExceptionTypeCtor_1098);
                            Var_1123 = (MR_String) "math_domain_error";
                            Var_1124 = (MR_Integer) 1;
                            Var_1126 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              ExceptionWrapperCtorSymName_1099 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), ExceptionWrapperCtorSymName_1099, 0) = ((MR_Box) (PrivateBuiltin_1087));
                              MR_hl_field(MR_mktag(1), ExceptionWrapperCtorSymName_1099, 1) = ((MR_Box) (Var_1123));
                            }
                            {
                              ExceptionWrapperCtorConsId_1100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), ExceptionWrapperCtorConsId_1100, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                              MR_hl_field(MR_mktag(3), ExceptionWrapperCtorConsId_1100, 1) = ((MR_Box) (ExceptionWrapperCtorSymName_1099));
                              MR_hl_field(MR_mktag(3), ExceptionWrapperCtorConsId_1100, 2) = ((MR_Box) (Var_1124));
                              MR_hl_field(MR_mktag(3), ExceptionWrapperCtorConsId_1100, 3) = ((MR_Box) (ExceptionTypeCtor_1098));
                            }
                            {
                              Var_1125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_1125, 0) = ((MR_Box) (ErrorMsgStrVar_1094));
                              MR_hl_field(MR_mktag(1), Var_1125, 1) = ((MR_Box) (Var_1126));
                            }
                            hlds__make_goal__construct_functor_4_p_0(ExceptionVar_1097, ExceptionWrapperCtorConsId_1100, Var_1125, &WrapErrorMsgGoal_1101);
                            Var_1127 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
                            Var_1128 = (MR_String) "throw";
                            Var_1129 = (MR_Integer) 0;
                            Var_1130 = (MR_Word) ((MR_Unsigned) 0U);
                            Var_1131 = (MR_Integer) 6;
                            Var_1132 = (MR_Integer) 0;
                            Var_1137 = (MR_Word) ((MR_Unsigned) 0U);
                            Var_1134 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              Var_1133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_1133, 0) = ((MR_Box) (ExceptionVar_1097));
                              MR_hl_field(MR_mktag(1), Var_1133, 1) = ((MR_Box) (Var_1137));
                            }
                            Var_1135 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                            Var_1136 = mercury__term__dummy_context_init_0_f_0();
                            hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_23, Var_1127, Var_1128, Var_1129, Var_1130, Var_1131, Var_1132, Var_1133, Var_1134, Var_1135, Var_1136, &ThrowGoal_1102);
                            Var_1138 = parse_tree__set_of_var__init_0_f_0(TypeCtorInfo_253_1148);
                            Var_1139 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                            Var_1140 = (MR_Integer) 6;
                            Var_1141 = (MR_Integer) 0;
                            hlds__hlds_goal__goal_info_init_6_p_0(Var_1138, Var_1139, Var_1140, Var_1141, Context_1147, &ThrowConjGoalInfo_1103);
                            Var_1145 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              Var_1144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_1144, 0) = ((MR_Box) (ThrowGoal_1102));
                              MR_hl_field(MR_mktag(1), Var_1144, 1) = ((MR_Box) (Var_1145));
                            }
                            {
                              Var_1143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_1143, 0) = ((MR_Box) (WrapErrorMsgGoal_1101));
                              MR_hl_field(MR_mktag(1), Var_1143, 1) = ((MR_Box) (Var_1144));
                            }
                            {
                              Var_1142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_1142, 0) = ((MR_Box) (ErrorMsgStrGoal_1095));
                              MR_hl_field(MR_mktag(1), Var_1142, 1) = ((MR_Box) (Var_1143));
                            }
                            hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_1142, ThrowConjGoalInfo_1103, &ThrowConjGoal_1104);
                            Var_1146 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                              *ImprovedGoalExpr_20 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_1146));
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (TestConjGoal_1090));
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (UncheckedShiftGoal_1092));
                              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ThrowConjGoal_1104));
                            }
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
          case (MR_Integer) 24:
            {
              // case "//"
              ;
              {
                MR_Word Var_258;
                MR_Word Var_259;
                MR_Word Var_260;
                MR_Word Var_261;
                MR_Word ConsY_296;
                MR_Word Z_316;
                MR_Word InstY_317;
                MR_Word Var_325;
                MR_Word Var_326;
                MR_Word Var_327;
                MR_Word X_344;
                MR_Word Y_345;

                succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  X_344 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 0))));
                  Var_325 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 1))));
                  succeeded = (Var_325 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Y_345 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_325, (MR_Integer) 0))));
                    Var_326 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_325, (MR_Integer) 1))));
                    succeeded = (Var_326 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Z_316 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_326, (MR_Integer) 0))));
                      Var_327 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_326, (MR_Integer) 1))));
                      succeeded = (Var_327 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_14, Y_345, &InstY_317);
                        succeeded = ((((MR_tag((MR_Word) InstY_317)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstY_317, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_258 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstY_317, (MR_Integer) 3))));
                          succeeded = (Var_258 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_259 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_258, (MR_Integer) 0))));
                            Var_261 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_258, (MR_Integer) 1))));
                            succeeded = (Var_261 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              ConsY_296 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_259, (MR_Integer) 0))));
                              Var_260 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_259, (MR_Integer) 1))));
                              succeeded = (Var_260 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                succeeded = check_hlds__simplify__simplify_goal_call__is_zero_const_2_p_0(IntType_13, ConsY_296);
                                if (succeeded)
                                {
                                  MR_Word Context_262;
                                  MR_Word SymName_263;
                                  MR_Word Pieces_264;
                                  MR_Word Spec_265;
                                  MR_Word Var_266;
                                  MR_Word Var_269;
                                  MR_Word Var_270;

                                  *ImprovedGoalExpr_20 = GoalExpr0_19;
                                  Context_262 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_66);
                                  {
                                    Var_266 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(MR_mktag(0), Var_266, 0) = ((MR_Box) (ModuleName_15));
                                  }
                                  {
                                    SymName_263 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), SymName_263, 0) = ((MR_Box) (Var_266));
                                    MR_hl_field(MR_mktag(1), SymName_263, 1) = ((MR_Box) (PredName_16));
                                  }
                                  {
                                    Var_270 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(3), Var_270, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                                    MR_hl_field(MR_mktag(3), Var_270, 1) = ((MR_Box) (SymName_263));
                                  }
                                  {
                                    Var_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), Var_269, 0) = ((MR_Box) (Var_270));
                                    MR_hl_field(MR_mktag(1), Var_269, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[48])));
                                  }
                                  {
                                    Pieces_264 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), Pieces_264, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[82])));
                                    MR_hl_field(MR_mktag(1), Pieces_264, 1) = ((MR_Box) (Var_269));
                                  }
                                  {
                                    Spec_265 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), Spec_265, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_improve_arith_shift_cmp_ops\'/12"));
                                    MR_hl_field(MR_mktag(1), Spec_265, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                    MR_hl_field(MR_mktag(1), Spec_265, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_4[0])));
                                    MR_hl_field(MR_mktag(1), Spec_265, 3) = ((MR_Box) (Context_262));
                                    MR_hl_field(MR_mktag(1), Spec_265, 4) = ((MR_Box) (Pieces_264));
                                  }
                                  check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_265, STATE_VARIABLE_Info_0_68, STATE_VARIABLE_Info_69);
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  MR_Word Var_276;

                                  succeeded = check_hlds__simplify__simplify_goal_call__is_int_const_2_p_0(IntType_13, ConsY_296);
                                  if (succeeded)
                                  {
                                    Var_276 = (MR_Integer) 0;
                                    check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_68, ModuleName_15, (MR_String) "unchecked_quotient", Var_276, X_344, Y_345, Z_316, ImprovedGoalExpr_20);
                                    *STATE_VARIABLE_Info_69 = STATE_VARIABLE_Info_0_68;
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
            break;
          case (MR_Integer) 26:
            {
              // case ">>u"
              ;
              {
                MR_Integer NumTargetBits_1801;
                MR_Word Var_1829;
                MR_Word Var_1830;
                MR_Word Var_1831;
                MR_Word X_1928;
                MR_Word Y_1929;
                MR_Word Z_1930;
                MR_Word InstY_1931;
                MR_Word YConst_1680;
                MR_Word Var_1414;
                MR_Word Var_1415;
                MR_Word Var_1416;
                MR_Word Var_1417;

                succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  X_1928 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 0))));
                  Var_1829 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 1))));
                  succeeded = (Var_1829 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Y_1929 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1829, (MR_Integer) 0))));
                    Var_1830 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1829, (MR_Integer) 1))));
                    succeeded = (Var_1830 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Z_1930 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1830, (MR_Integer) 0))));
                      Var_1831 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1830, (MR_Integer) 1))));
                      succeeded = (Var_1831 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        NumTargetBits_1801 = check_hlds__simplify__simplify_goal_call__int_type_target_bits_2_f_0(Globals_24, IntType_13);
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_14, Y_1929, &InstY_1931);
                        succeeded = ((((MR_tag((MR_Word) InstY_1931)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstY_1931, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_1414 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstY_1931, (MR_Integer) 3))));
                          succeeded = (Var_1414 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_1415 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1414, (MR_Integer) 0))));
                            Var_1417 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1414, (MR_Integer) 1))));
                            succeeded = (Var_1417 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              YConst_1680 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_1415, (MR_Integer) 0))));
                              Var_1416 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_1415, (MR_Integer) 1))));
                              succeeded = (Var_1416 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                if (((((MR_tag((MR_Word) YConst_1680)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), YConst_1680, (MR_Integer) 0)))) == (MR_Integer) 5))))
                                  succeeded = MR_TRUE;
                                else
                                if (((((MR_tag((MR_Word) YConst_1680)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), YConst_1680, (MR_Integer) 0)))) == (MR_Integer) 6))))
                                  succeeded = MR_TRUE;
                                else
                                  succeeded = MR_FALSE;
                              }
                            }
                          }
                        }
                        if (succeeded)
                        {
                          if (((((MR_tag((MR_Word) YConst_1680)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), YConst_1680, (MR_Integer) 0)))) == (MR_Integer) 5))))
                          {
                            MR_Integer YIntVal_1466 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), YConst_1680, (MR_Integer) 1))));

                            succeeded = ((MR_Integer) 0 <= YIntVal_1466);
                            if (succeeded)
                              succeeded = (YIntVal_1466 < NumTargetBits_1801);
                            if (succeeded)
                            {
                              check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_68, ModuleName_15, (MR_String) "unchecked_right_ushift", (MR_Integer) 0, X_1928, Y_1929, Z_1930, ImprovedGoalExpr_20);
                              *STATE_VARIABLE_Info_69 = STATE_VARIABLE_Info_0_68;
                            }
                            else
                            {
                              MR_Word Var_1420;
                              MR_Word Var_1423;
                              MR_Word Var_1424;
                              MR_Word Var_1425;
                              MR_Word Var_1428;
                              MR_Word Var_1431;
                              MR_Word Var_1432;
                              MR_Word Context_1438;
                              MR_Word SymName_1439;
                              MR_Word Pieces_1440;
                              MR_Word Spec_1441;

                              *ImprovedGoalExpr_20 = GoalExpr0_19;
                              Context_1438 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_66);
                              {
                                Var_1420 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), Var_1420, 0) = ((MR_Box) (ModuleName_15));
                              }
                              {
                                SymName_1439 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), SymName_1439, 0) = ((MR_Box) (Var_1420));
                                MR_hl_field(MR_mktag(1), SymName_1439, 1) = ((MR_Box) (PredName_16));
                              }
                              {
                                Var_1424 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), Var_1424, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                                MR_hl_field(MR_mktag(3), Var_1424, 1) = ((MR_Box) (SymName_1439));
                              }
                              {
                                Var_1432 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), Var_1432, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                                MR_hl_field(MR_mktag(3), Var_1432, 1) = ((MR_Box) (NumTargetBits_1801));
                              }
                              {
                                Var_1431 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_1431, 0) = ((MR_Box) (Var_1432));
                                MR_hl_field(MR_mktag(1), Var_1431, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[50])));
                              }
                              {
                                Var_1428 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_1428, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[84])));
                                MR_hl_field(MR_mktag(1), Var_1428, 1) = ((MR_Box) (Var_1431));
                              }
                              {
                                Var_1425 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_1425, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[83])));
                                MR_hl_field(MR_mktag(1), Var_1425, 1) = ((MR_Box) (Var_1428));
                              }
                              {
                                Var_1423 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_1423, 0) = ((MR_Box) (Var_1424));
                                MR_hl_field(MR_mktag(1), Var_1423, 1) = ((MR_Box) (Var_1425));
                              }
                              {
                                Pieces_1440 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Pieces_1440, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[82])));
                                MR_hl_field(MR_mktag(1), Pieces_1440, 1) = ((MR_Box) (Var_1423));
                              }
                              {
                                Spec_1441 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Spec_1441, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_improve_arith_shift_cmp_ops\'/12"));
                                MR_hl_field(MR_mktag(1), Spec_1441, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                MR_hl_field(MR_mktag(1), Spec_1441, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_4[0])));
                                MR_hl_field(MR_mktag(1), Spec_1441, 3) = ((MR_Box) (Context_1438));
                                MR_hl_field(MR_mktag(1), Spec_1441, 4) = ((MR_Box) (Pieces_1440));
                              }
                              check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_1441, STATE_VARIABLE_Info_0_68, STATE_VARIABLE_Info_69);
                            }
                          }
                          else
                          {
                            MR_Unsigned YUintVal_1539 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), YConst_1680, (MR_Integer) 1))));
                            MR_Unsigned Var_1491;

                            Var_1491 = mercury__uint__det_from_int_1_f_0(NumTargetBits_1801);
                            succeeded = (YUintVal_1539 < Var_1491);
                            if (succeeded)
                            {
                              check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_68, ModuleName_15, (MR_String) "unchecked_right_ushift", (MR_Integer) 0, X_1928, Y_1929, Z_1930, ImprovedGoalExpr_20);
                              *STATE_VARIABLE_Info_69 = STATE_VARIABLE_Info_0_68;
                            }
                            else
                            {
                              MR_Word Var_1493;
                              MR_Word Var_1496;
                              MR_Word Var_1497;
                              MR_Word Var_1498;
                              MR_Word Var_1501;
                              MR_Word Var_1504;
                              MR_Word Var_1505;
                              MR_Word Context_1511;
                              MR_Word SymName_1512;
                              MR_Word Pieces_1513;
                              MR_Word Spec_1514;

                              *ImprovedGoalExpr_20 = GoalExpr0_19;
                              Context_1511 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_66);
                              {
                                Var_1493 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), Var_1493, 0) = ((MR_Box) (ModuleName_15));
                              }
                              {
                                SymName_1512 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), SymName_1512, 0) = ((MR_Box) (Var_1493));
                                MR_hl_field(MR_mktag(1), SymName_1512, 1) = ((MR_Box) (PredName_16));
                              }
                              {
                                Var_1497 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), Var_1497, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                                MR_hl_field(MR_mktag(3), Var_1497, 1) = ((MR_Box) (SymName_1512));
                              }
                              {
                                Var_1505 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), Var_1505, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                                MR_hl_field(MR_mktag(3), Var_1505, 1) = ((MR_Box) (NumTargetBits_1801));
                              }
                              {
                                Var_1504 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_1504, 0) = ((MR_Box) (Var_1505));
                                MR_hl_field(MR_mktag(1), Var_1504, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[12])));
                              }
                              {
                                Var_1501 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_1501, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[86])));
                                MR_hl_field(MR_mktag(1), Var_1501, 1) = ((MR_Box) (Var_1504));
                              }
                              {
                                Var_1498 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_1498, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[85])));
                                MR_hl_field(MR_mktag(1), Var_1498, 1) = ((MR_Box) (Var_1501));
                              }
                              {
                                Var_1496 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_1496, 0) = ((MR_Box) (Var_1497));
                                MR_hl_field(MR_mktag(1), Var_1496, 1) = ((MR_Box) (Var_1498));
                              }
                              {
                                Pieces_1513 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Pieces_1513, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[82])));
                                MR_hl_field(MR_mktag(1), Pieces_1513, 1) = ((MR_Box) (Var_1496));
                              }
                              {
                                Spec_1514 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Spec_1514, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_improve_arith_shift_cmp_ops\'/12"));
                                MR_hl_field(MR_mktag(1), Spec_1514, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                MR_hl_field(MR_mktag(1), Spec_1514, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_4[0])));
                                MR_hl_field(MR_mktag(1), Spec_1514, 3) = ((MR_Box) (Context_1511));
                                MR_hl_field(MR_mktag(1), Spec_1514, 4) = ((MR_Box) (Pieces_1513));
                              }
                              check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_1514, STATE_VARIABLE_Info_0_68, STATE_VARIABLE_Info_69);
                            }
                          }
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          MR_Word TypeCtorInfo_253_1677;
                          MR_Word NumTargetBitsConstVar_1614;
                          MR_Word NumTargetBitsConstGoal_1615;
                          MR_Word PrivateBuiltin_1616;
                          MR_Word InRangeTestGoal_1617;
                          MR_Word TestConjGoalInfo_1618;
                          MR_Word TestConjGoal_1619;
                          MR_Word UncheckedShiftGoalExpr_1620;
                          MR_Word UncheckedShiftGoal_1621;
                          MR_String NotInRangeStr_1622;
                          MR_Word ErrorMsgStrVar_1623;
                          MR_Word ErrorMsgStrGoal_1624;
                          MR_Word ExceptionType_1625;
                          MR_Word ExceptionVar_1626;
                          MR_Word ExceptionTypeCtor_1627;
                          MR_Word ExceptionWrapperCtorSymName_1628;
                          MR_Word ExceptionWrapperCtorConsId_1629;
                          MR_Word WrapErrorMsgGoal_1630;
                          MR_Word ThrowGoal_1631;
                          MR_Word ThrowConjGoalInfo_1632;
                          MR_Word ThrowConjGoal_1633;
                          MR_Word STATE_VARIABLE_Info_129_1634;
                          MR_String Var_1635;
                          MR_Word Var_1636;
                          MR_Word Var_1637;
                          MR_Word Var_1638;
                          MR_Word Var_1639;
                          MR_Word Var_1640;
                          MR_Word Var_1641;
                          MR_Word Var_1642;
                          MR_Word Var_1643;
                          MR_Word Var_1644;
                          MR_Word STATE_VARIABLE_Info_146_1651;
                          MR_String Var_1652;
                          MR_Integer Var_1653;
                          MR_Word Var_1654;
                          MR_Word Var_1655;
                          MR_Word Var_1656;
                          MR_String Var_1657;
                          MR_Word Var_1658;
                          MR_Word Var_1659;
                          MR_Word Var_1660;
                          MR_Word Var_1661;
                          MR_Word Var_1662;
                          MR_Word Var_1663;
                          MR_Word Var_1664;
                          MR_Word Var_1665;
                          MR_Word Var_1666;
                          MR_Word Var_1667;
                          MR_Word Var_1668;
                          MR_Word Var_1669;
                          MR_Word Var_1670;
                          MR_Word Var_1671;
                          MR_Word Var_1672;
                          MR_Word Var_1673;
                          MR_Word Var_1674;
                          MR_Word Var_1675;
                          MR_Word Context_1676;
                          MR_String Var_2035;

                          succeeded = mercury__builtin__semidet_fail_0_p_0();
                          if (succeeded)
                          {
                            Context_1676 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_66);
                            check_hlds__simplify__simplify_goal_call__simplify_make_int_const_5_p_0(NumTargetBits_1801, &NumTargetBitsConstVar_1614, &NumTargetBitsConstGoal_1615, STATE_VARIABLE_Info_0_68, &STATE_VARIABLE_Info_129_1634);
                            PrivateBuiltin_1616 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                            Var_1635 = (MR_String) "unsigned_lt";
                            Var_1636 = (MR_Integer) 0;
                            check_hlds__simplify__simplify_goal_call__simplify_make_cmp_goal_expr_8_p_0(STATE_VARIABLE_Info_129_1634, PrivateBuiltin_1616, Var_1635, Var_1636, Y_1929, NumTargetBitsConstVar_1614, Context_1676, &InRangeTestGoal_1617);
                            TypeCtorInfo_253_1677 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                            Var_1637 = parse_tree__set_of_var__make_singleton_1_f_0(TypeCtorInfo_253_1677, Y_1929);
                            Var_1638 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                            Var_1639 = (MR_Integer) 1;
                            Var_1640 = (MR_Integer) 0;
                            hlds__hlds_goal__goal_info_init_6_p_0(Var_1637, Var_1638, Var_1639, Var_1640, Context_1676, &TestConjGoalInfo_1618);
                            Var_1643 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              Var_1642 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_1642, 0) = ((MR_Box) (InRangeTestGoal_1617));
                              MR_hl_field(MR_mktag(1), Var_1642, 1) = ((MR_Box) (Var_1643));
                            }
                            {
                              Var_1641 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_1641, 0) = ((MR_Box) (NumTargetBitsConstGoal_1615));
                              MR_hl_field(MR_mktag(1), Var_1641, 1) = ((MR_Box) (Var_1642));
                            }
                            hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_1641, TestConjGoalInfo_1618, &TestConjGoal_1619);
                            Var_1644 = (MR_Integer) 0;
                            check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_129_1634, ModuleName_15, (MR_String) "unchecked_right_ushift", Var_1644, X_1928, Y_1929, Z_1930, &UncheckedShiftGoalExpr_1620);
                            Var_2035 = (MR_String) ".(>>u): second operand is out of range";
                            {
                              UncheckedShiftGoal_1621 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), UncheckedShiftGoal_1621, 0) = ((MR_Box) (UncheckedShiftGoalExpr_1620));
                              MR_hl_field(MR_mktag(0), UncheckedShiftGoal_1621, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_0_66));
                            }
                            NotInRangeStr_1622 = mercury__string__f_43_43_2_f_0(ModuleName_15, Var_2035);
                            check_hlds__simplify__simplify_goal_call__simplify_make_string_const_5_p_0(NotInRangeStr_1622, &ErrorMsgStrVar_1623, &ErrorMsgStrGoal_1624, STATE_VARIABLE_Info_129_1634, &STATE_VARIABLE_Info_146_1651);
                            ExceptionType_1625 = parse_tree__builtin_lib_types__void_type_0_f_0();
                            check_hlds__simplify__simplify_goal_call__simplify_make_var_4_p_0(ExceptionType_1625, &ExceptionVar_1626, STATE_VARIABLE_Info_146_1651, STATE_VARIABLE_Info_69);
                            parse_tree__prog_type__type_to_ctor_det_2_p_0(ExceptionType_1625, &ExceptionTypeCtor_1627);
                            Var_1652 = (MR_String) "math_domain_error";
                            Var_1653 = (MR_Integer) 1;
                            Var_1655 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              ExceptionWrapperCtorSymName_1628 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), ExceptionWrapperCtorSymName_1628, 0) = ((MR_Box) (PrivateBuiltin_1616));
                              MR_hl_field(MR_mktag(1), ExceptionWrapperCtorSymName_1628, 1) = ((MR_Box) (Var_1652));
                            }
                            {
                              ExceptionWrapperCtorConsId_1629 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), ExceptionWrapperCtorConsId_1629, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                              MR_hl_field(MR_mktag(3), ExceptionWrapperCtorConsId_1629, 1) = ((MR_Box) (ExceptionWrapperCtorSymName_1628));
                              MR_hl_field(MR_mktag(3), ExceptionWrapperCtorConsId_1629, 2) = ((MR_Box) (Var_1653));
                              MR_hl_field(MR_mktag(3), ExceptionWrapperCtorConsId_1629, 3) = ((MR_Box) (ExceptionTypeCtor_1627));
                            }
                            {
                              Var_1654 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_1654, 0) = ((MR_Box) (ErrorMsgStrVar_1623));
                              MR_hl_field(MR_mktag(1), Var_1654, 1) = ((MR_Box) (Var_1655));
                            }
                            hlds__make_goal__construct_functor_4_p_0(ExceptionVar_1626, ExceptionWrapperCtorConsId_1629, Var_1654, &WrapErrorMsgGoal_1630);
                            Var_1656 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
                            Var_1657 = (MR_String) "throw";
                            Var_1658 = (MR_Integer) 0;
                            Var_1659 = (MR_Word) ((MR_Unsigned) 0U);
                            Var_1660 = (MR_Integer) 6;
                            Var_1661 = (MR_Integer) 0;
                            Var_1666 = (MR_Word) ((MR_Unsigned) 0U);
                            Var_1663 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              Var_1662 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_1662, 0) = ((MR_Box) (ExceptionVar_1626));
                              MR_hl_field(MR_mktag(1), Var_1662, 1) = ((MR_Box) (Var_1666));
                            }
                            Var_1664 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                            Var_1665 = mercury__term__dummy_context_init_0_f_0();
                            hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_23, Var_1656, Var_1657, Var_1658, Var_1659, Var_1660, Var_1661, Var_1662, Var_1663, Var_1664, Var_1665, &ThrowGoal_1631);
                            Var_1667 = parse_tree__set_of_var__init_0_f_0(TypeCtorInfo_253_1677);
                            Var_1668 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                            Var_1669 = (MR_Integer) 6;
                            Var_1670 = (MR_Integer) 0;
                            hlds__hlds_goal__goal_info_init_6_p_0(Var_1667, Var_1668, Var_1669, Var_1670, Context_1676, &ThrowConjGoalInfo_1632);
                            Var_1674 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              Var_1673 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_1673, 0) = ((MR_Box) (ThrowGoal_1631));
                              MR_hl_field(MR_mktag(1), Var_1673, 1) = ((MR_Box) (Var_1674));
                            }
                            {
                              Var_1672 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_1672, 0) = ((MR_Box) (WrapErrorMsgGoal_1630));
                              MR_hl_field(MR_mktag(1), Var_1672, 1) = ((MR_Box) (Var_1673));
                            }
                            {
                              Var_1671 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_1671, 0) = ((MR_Box) (ErrorMsgStrGoal_1624));
                              MR_hl_field(MR_mktag(1), Var_1671, 1) = ((MR_Box) (Var_1672));
                            }
                            hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_1671, ThrowConjGoalInfo_1632, &ThrowConjGoal_1633);
                            Var_1675 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                              *ImprovedGoalExpr_20 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_1675));
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (TestConjGoal_1619));
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (UncheckedShiftGoal_1621));
                              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ThrowConjGoal_1633));
                            }
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
          case (MR_Integer) 27:
            {
              // case "quot_bits_per_int"
              ;
              {
                MR_String Op_25;
                MR_Word X_26;
                MR_Word Y_27;
                MR_Integer TargetBitsPerInt_28;
                MR_Word Var_200;
                MR_Word Var_201;
                MR_Word Var_202;

                succeeded = (IntType_13 == (MR_Integer) 0);
                if (succeeded)
                {
                  Op_25 = (MR_String) "unchecked_quotient";
                  succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    X_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 0))));
                    Var_200 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 1))));
                    succeeded = (Var_200 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Y_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_200, (MR_Integer) 0))));
                      Var_201 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_200, (MR_Integer) 1))));
                      succeeded = (Var_201 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        libs__int_emu__target_bits_per_int_2_p_0(Globals_24, &Var_202);
                        TargetBitsPerInt_28 = (MR_Integer) (Var_202);
                        check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_9_p_0(ModuleName_15, Op_25, X_26, TargetBitsPerInt_28, Y_27, ImprovedGoalExpr_20, STATE_VARIABLE_GoalInfo_0_66, STATE_VARIABLE_Info_0_68, STATE_VARIABLE_Info_69);
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
              // case "<<u"
              ;
              {
                MR_Integer NumTargetBits_743;
                MR_Word Var_771;
                MR_Word Var_772;
                MR_Word Var_773;
                MR_Word X_870;
                MR_Word Y_871;
                MR_Word Z_872;
                MR_Word InstY_873;
                MR_Word YConst_622;
                MR_Word Var_356;
                MR_Word Var_357;
                MR_Word Var_358;
                MR_Word Var_359;

                succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  X_870 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 0))));
                  Var_771 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 1))));
                  succeeded = (Var_771 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Y_871 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_771, (MR_Integer) 0))));
                    Var_772 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_771, (MR_Integer) 1))));
                    succeeded = (Var_772 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Z_872 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_772, (MR_Integer) 0))));
                      Var_773 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_772, (MR_Integer) 1))));
                      succeeded = (Var_773 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        NumTargetBits_743 = check_hlds__simplify__simplify_goal_call__int_type_target_bits_2_f_0(Globals_24, IntType_13);
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_14, Y_871, &InstY_873);
                        succeeded = ((((MR_tag((MR_Word) InstY_873)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstY_873, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_356 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstY_873, (MR_Integer) 3))));
                          succeeded = (Var_356 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_357 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_356, (MR_Integer) 0))));
                            Var_359 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_356, (MR_Integer) 1))));
                            succeeded = (Var_359 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              YConst_622 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_357, (MR_Integer) 0))));
                              Var_358 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_357, (MR_Integer) 1))));
                              succeeded = (Var_358 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                if (((((MR_tag((MR_Word) YConst_622)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), YConst_622, (MR_Integer) 0)))) == (MR_Integer) 5))))
                                  succeeded = MR_TRUE;
                                else
                                if (((((MR_tag((MR_Word) YConst_622)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), YConst_622, (MR_Integer) 0)))) == (MR_Integer) 6))))
                                  succeeded = MR_TRUE;
                                else
                                  succeeded = MR_FALSE;
                              }
                            }
                          }
                        }
                        if (succeeded)
                        {
                          if (((((MR_tag((MR_Word) YConst_622)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), YConst_622, (MR_Integer) 0)))) == (MR_Integer) 5))))
                          {
                            MR_Integer YIntVal_408 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), YConst_622, (MR_Integer) 1))));

                            succeeded = ((MR_Integer) 0 <= YIntVal_408);
                            if (succeeded)
                              succeeded = (YIntVal_408 < NumTargetBits_743);
                            if (succeeded)
                            {
                              check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_68, ModuleName_15, (MR_String) "unchecked_left_ushift", (MR_Integer) 0, X_870, Y_871, Z_872, ImprovedGoalExpr_20);
                              *STATE_VARIABLE_Info_69 = STATE_VARIABLE_Info_0_68;
                            }
                            else
                            {
                              MR_Word Var_362;
                              MR_Word Var_365;
                              MR_Word Var_366;
                              MR_Word Var_367;
                              MR_Word Var_370;
                              MR_Word Var_373;
                              MR_Word Var_374;
                              MR_Word Context_380;
                              MR_Word SymName_381;
                              MR_Word Pieces_382;
                              MR_Word Spec_383;

                              *ImprovedGoalExpr_20 = GoalExpr0_19;
                              Context_380 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_66);
                              {
                                Var_362 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), Var_362, 0) = ((MR_Box) (ModuleName_15));
                              }
                              {
                                SymName_381 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), SymName_381, 0) = ((MR_Box) (Var_362));
                                MR_hl_field(MR_mktag(1), SymName_381, 1) = ((MR_Box) (PredName_16));
                              }
                              {
                                Var_366 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), Var_366, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                                MR_hl_field(MR_mktag(3), Var_366, 1) = ((MR_Box) (SymName_381));
                              }
                              {
                                Var_374 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), Var_374, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                                MR_hl_field(MR_mktag(3), Var_374, 1) = ((MR_Box) (NumTargetBits_743));
                              }
                              {
                                Var_373 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_373, 0) = ((MR_Box) (Var_374));
                                MR_hl_field(MR_mktag(1), Var_373, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[50])));
                              }
                              {
                                Var_370 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_370, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[84])));
                                MR_hl_field(MR_mktag(1), Var_370, 1) = ((MR_Box) (Var_373));
                              }
                              {
                                Var_367 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_367, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[83])));
                                MR_hl_field(MR_mktag(1), Var_367, 1) = ((MR_Box) (Var_370));
                              }
                              {
                                Var_365 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_365, 0) = ((MR_Box) (Var_366));
                                MR_hl_field(MR_mktag(1), Var_365, 1) = ((MR_Box) (Var_367));
                              }
                              {
                                Pieces_382 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Pieces_382, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[82])));
                                MR_hl_field(MR_mktag(1), Pieces_382, 1) = ((MR_Box) (Var_365));
                              }
                              {
                                Spec_383 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Spec_383, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_improve_arith_shift_cmp_ops\'/12"));
                                MR_hl_field(MR_mktag(1), Spec_383, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                MR_hl_field(MR_mktag(1), Spec_383, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_4[0])));
                                MR_hl_field(MR_mktag(1), Spec_383, 3) = ((MR_Box) (Context_380));
                                MR_hl_field(MR_mktag(1), Spec_383, 4) = ((MR_Box) (Pieces_382));
                              }
                              check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_383, STATE_VARIABLE_Info_0_68, STATE_VARIABLE_Info_69);
                            }
                          }
                          else
                          {
                            MR_Unsigned YUintVal_481 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), YConst_622, (MR_Integer) 1))));
                            MR_Unsigned Var_433;

                            Var_433 = mercury__uint__det_from_int_1_f_0(NumTargetBits_743);
                            succeeded = (YUintVal_481 < Var_433);
                            if (succeeded)
                            {
                              check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_68, ModuleName_15, (MR_String) "unchecked_left_ushift", (MR_Integer) 0, X_870, Y_871, Z_872, ImprovedGoalExpr_20);
                              *STATE_VARIABLE_Info_69 = STATE_VARIABLE_Info_0_68;
                            }
                            else
                            {
                              MR_Word Var_435;
                              MR_Word Var_438;
                              MR_Word Var_439;
                              MR_Word Var_440;
                              MR_Word Var_443;
                              MR_Word Var_446;
                              MR_Word Var_447;
                              MR_Word Context_453;
                              MR_Word SymName_454;
                              MR_Word Pieces_455;
                              MR_Word Spec_456;

                              *ImprovedGoalExpr_20 = GoalExpr0_19;
                              Context_453 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_66);
                              {
                                Var_435 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), Var_435, 0) = ((MR_Box) (ModuleName_15));
                              }
                              {
                                SymName_454 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), SymName_454, 0) = ((MR_Box) (Var_435));
                                MR_hl_field(MR_mktag(1), SymName_454, 1) = ((MR_Box) (PredName_16));
                              }
                              {
                                Var_439 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), Var_439, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                                MR_hl_field(MR_mktag(3), Var_439, 1) = ((MR_Box) (SymName_454));
                              }
                              {
                                Var_447 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), Var_447, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                                MR_hl_field(MR_mktag(3), Var_447, 1) = ((MR_Box) (NumTargetBits_743));
                              }
                              {
                                Var_446 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_446, 0) = ((MR_Box) (Var_447));
                                MR_hl_field(MR_mktag(1), Var_446, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[12])));
                              }
                              {
                                Var_443 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_443, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[86])));
                                MR_hl_field(MR_mktag(1), Var_443, 1) = ((MR_Box) (Var_446));
                              }
                              {
                                Var_440 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_440, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[85])));
                                MR_hl_field(MR_mktag(1), Var_440, 1) = ((MR_Box) (Var_443));
                              }
                              {
                                Var_438 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_438, 0) = ((MR_Box) (Var_439));
                                MR_hl_field(MR_mktag(1), Var_438, 1) = ((MR_Box) (Var_440));
                              }
                              {
                                Pieces_455 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Pieces_455, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[82])));
                                MR_hl_field(MR_mktag(1), Pieces_455, 1) = ((MR_Box) (Var_438));
                              }
                              {
                                Spec_456 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Spec_456, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_improve_arith_shift_cmp_ops\'/12"));
                                MR_hl_field(MR_mktag(1), Spec_456, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                MR_hl_field(MR_mktag(1), Spec_456, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_4[0])));
                                MR_hl_field(MR_mktag(1), Spec_456, 3) = ((MR_Box) (Context_453));
                                MR_hl_field(MR_mktag(1), Spec_456, 4) = ((MR_Box) (Pieces_455));
                              }
                              check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_456, STATE_VARIABLE_Info_0_68, STATE_VARIABLE_Info_69);
                            }
                          }
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          MR_Word TypeCtorInfo_253_619;
                          MR_Word NumTargetBitsConstVar_556;
                          MR_Word NumTargetBitsConstGoal_557;
                          MR_Word PrivateBuiltin_558;
                          MR_Word InRangeTestGoal_559;
                          MR_Word TestConjGoalInfo_560;
                          MR_Word TestConjGoal_561;
                          MR_Word UncheckedShiftGoalExpr_562;
                          MR_Word UncheckedShiftGoal_563;
                          MR_String NotInRangeStr_564;
                          MR_Word ErrorMsgStrVar_565;
                          MR_Word ErrorMsgStrGoal_566;
                          MR_Word ExceptionType_567;
                          MR_Word ExceptionVar_568;
                          MR_Word ExceptionTypeCtor_569;
                          MR_Word ExceptionWrapperCtorSymName_570;
                          MR_Word ExceptionWrapperCtorConsId_571;
                          MR_Word WrapErrorMsgGoal_572;
                          MR_Word ThrowGoal_573;
                          MR_Word ThrowConjGoalInfo_574;
                          MR_Word ThrowConjGoal_575;
                          MR_Word STATE_VARIABLE_Info_129_576;
                          MR_String Var_577;
                          MR_Word Var_578;
                          MR_Word Var_579;
                          MR_Word Var_580;
                          MR_Word Var_581;
                          MR_Word Var_582;
                          MR_Word Var_583;
                          MR_Word Var_584;
                          MR_Word Var_585;
                          MR_Word Var_586;
                          MR_Word STATE_VARIABLE_Info_146_593;
                          MR_String Var_594;
                          MR_Integer Var_595;
                          MR_Word Var_596;
                          MR_Word Var_597;
                          MR_Word Var_598;
                          MR_String Var_599;
                          MR_Word Var_600;
                          MR_Word Var_601;
                          MR_Word Var_602;
                          MR_Word Var_603;
                          MR_Word Var_604;
                          MR_Word Var_605;
                          MR_Word Var_606;
                          MR_Word Var_607;
                          MR_Word Var_608;
                          MR_Word Var_609;
                          MR_Word Var_610;
                          MR_Word Var_611;
                          MR_Word Var_612;
                          MR_Word Var_613;
                          MR_Word Var_614;
                          MR_Word Var_615;
                          MR_Word Var_616;
                          MR_Word Var_617;
                          MR_Word Context_618;
                          MR_String Var_2043;

                          succeeded = mercury__builtin__semidet_fail_0_p_0();
                          if (succeeded)
                          {
                            Context_618 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_66);
                            check_hlds__simplify__simplify_goal_call__simplify_make_int_const_5_p_0(NumTargetBits_743, &NumTargetBitsConstVar_556, &NumTargetBitsConstGoal_557, STATE_VARIABLE_Info_0_68, &STATE_VARIABLE_Info_129_576);
                            PrivateBuiltin_558 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                            Var_577 = (MR_String) "unsigned_lt";
                            Var_578 = (MR_Integer) 0;
                            check_hlds__simplify__simplify_goal_call__simplify_make_cmp_goal_expr_8_p_0(STATE_VARIABLE_Info_129_576, PrivateBuiltin_558, Var_577, Var_578, Y_871, NumTargetBitsConstVar_556, Context_618, &InRangeTestGoal_559);
                            TypeCtorInfo_253_619 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                            Var_579 = parse_tree__set_of_var__make_singleton_1_f_0(TypeCtorInfo_253_619, Y_871);
                            Var_580 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                            Var_581 = (MR_Integer) 1;
                            Var_582 = (MR_Integer) 0;
                            hlds__hlds_goal__goal_info_init_6_p_0(Var_579, Var_580, Var_581, Var_582, Context_618, &TestConjGoalInfo_560);
                            Var_585 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              Var_584 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_584, 0) = ((MR_Box) (InRangeTestGoal_559));
                              MR_hl_field(MR_mktag(1), Var_584, 1) = ((MR_Box) (Var_585));
                            }
                            {
                              Var_583 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_583, 0) = ((MR_Box) (NumTargetBitsConstGoal_557));
                              MR_hl_field(MR_mktag(1), Var_583, 1) = ((MR_Box) (Var_584));
                            }
                            hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_583, TestConjGoalInfo_560, &TestConjGoal_561);
                            Var_586 = (MR_Integer) 0;
                            check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_129_576, ModuleName_15, (MR_String) "unchecked_left_ushift", Var_586, X_870, Y_871, Z_872, &UncheckedShiftGoalExpr_562);
                            Var_2043 = (MR_String) ".(<<u): second operand is out of range";
                            {
                              UncheckedShiftGoal_563 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), UncheckedShiftGoal_563, 0) = ((MR_Box) (UncheckedShiftGoalExpr_562));
                              MR_hl_field(MR_mktag(0), UncheckedShiftGoal_563, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_0_66));
                            }
                            NotInRangeStr_564 = mercury__string__f_43_43_2_f_0(ModuleName_15, Var_2043);
                            check_hlds__simplify__simplify_goal_call__simplify_make_string_const_5_p_0(NotInRangeStr_564, &ErrorMsgStrVar_565, &ErrorMsgStrGoal_566, STATE_VARIABLE_Info_129_576, &STATE_VARIABLE_Info_146_593);
                            ExceptionType_567 = parse_tree__builtin_lib_types__void_type_0_f_0();
                            check_hlds__simplify__simplify_goal_call__simplify_make_var_4_p_0(ExceptionType_567, &ExceptionVar_568, STATE_VARIABLE_Info_146_593, STATE_VARIABLE_Info_69);
                            parse_tree__prog_type__type_to_ctor_det_2_p_0(ExceptionType_567, &ExceptionTypeCtor_569);
                            Var_594 = (MR_String) "math_domain_error";
                            Var_595 = (MR_Integer) 1;
                            Var_597 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              ExceptionWrapperCtorSymName_570 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), ExceptionWrapperCtorSymName_570, 0) = ((MR_Box) (PrivateBuiltin_558));
                              MR_hl_field(MR_mktag(1), ExceptionWrapperCtorSymName_570, 1) = ((MR_Box) (Var_594));
                            }
                            {
                              ExceptionWrapperCtorConsId_571 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), ExceptionWrapperCtorConsId_571, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                              MR_hl_field(MR_mktag(3), ExceptionWrapperCtorConsId_571, 1) = ((MR_Box) (ExceptionWrapperCtorSymName_570));
                              MR_hl_field(MR_mktag(3), ExceptionWrapperCtorConsId_571, 2) = ((MR_Box) (Var_595));
                              MR_hl_field(MR_mktag(3), ExceptionWrapperCtorConsId_571, 3) = ((MR_Box) (ExceptionTypeCtor_569));
                            }
                            {
                              Var_596 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_596, 0) = ((MR_Box) (ErrorMsgStrVar_565));
                              MR_hl_field(MR_mktag(1), Var_596, 1) = ((MR_Box) (Var_597));
                            }
                            hlds__make_goal__construct_functor_4_p_0(ExceptionVar_568, ExceptionWrapperCtorConsId_571, Var_596, &WrapErrorMsgGoal_572);
                            Var_598 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
                            Var_599 = (MR_String) "throw";
                            Var_600 = (MR_Integer) 0;
                            Var_601 = (MR_Word) ((MR_Unsigned) 0U);
                            Var_602 = (MR_Integer) 6;
                            Var_603 = (MR_Integer) 0;
                            Var_608 = (MR_Word) ((MR_Unsigned) 0U);
                            Var_605 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              Var_604 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_604, 0) = ((MR_Box) (ExceptionVar_568));
                              MR_hl_field(MR_mktag(1), Var_604, 1) = ((MR_Box) (Var_608));
                            }
                            Var_606 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                            Var_607 = mercury__term__dummy_context_init_0_f_0();
                            hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_23, Var_598, Var_599, Var_600, Var_601, Var_602, Var_603, Var_604, Var_605, Var_606, Var_607, &ThrowGoal_573);
                            Var_609 = parse_tree__set_of_var__init_0_f_0(TypeCtorInfo_253_619);
                            Var_610 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                            Var_611 = (MR_Integer) 6;
                            Var_612 = (MR_Integer) 0;
                            hlds__hlds_goal__goal_info_init_6_p_0(Var_609, Var_610, Var_611, Var_612, Context_618, &ThrowConjGoalInfo_574);
                            Var_616 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              Var_615 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_615, 0) = ((MR_Box) (ThrowGoal_573));
                              MR_hl_field(MR_mktag(1), Var_615, 1) = ((MR_Box) (Var_616));
                            }
                            {
                              Var_614 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_614, 0) = ((MR_Box) (WrapErrorMsgGoal_572));
                              MR_hl_field(MR_mktag(1), Var_614, 1) = ((MR_Box) (Var_615));
                            }
                            {
                              Var_613 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_613, 0) = ((MR_Box) (ErrorMsgStrGoal_566));
                              MR_hl_field(MR_mktag(1), Var_613, 1) = ((MR_Box) (Var_614));
                            }
                            hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_613, ThrowConjGoalInfo_574, &ThrowConjGoal_575);
                            Var_617 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                              *ImprovedGoalExpr_20 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_617));
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (TestConjGoal_561));
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (UncheckedShiftGoal_563));
                              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ThrowConjGoal_575));
                            }
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
        }
        // jump out of search loop
        ;
        goto label_0;
      }
      else
      {
        // no match yet, so get next slot in hash chain
        ;
        slot_0 = ((&check_hlds__simplify__simplify_goal_call_vector_common_7[13 + slot_0]))->check_hlds__simplify__simplify_goal_call__vector_common_type_7_0__vct_7_f_1;
      }
    }
    while ((slot_0 >= (MR_Integer) 0));
    succeeded = MR_FALSE;
  label_0:;
    if (succeeded)
    {
      *STATE_VARIABLE_GoalInfo_67 = STATE_VARIABLE_GoalInfo_0_66;
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
check_hlds__simplify__simplify_goal_call__is_int_const_2_p_0(
  MR_Word IntType_3,
  MR_Word ConsId_4)
{
  {
    MR_bool succeeded;

    switch (IntType_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          succeeded = ((((MR_tag((MR_Word) ConsId_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 5)));
          if (succeeded)
          {
          }
        }
        break;
      case (MR_Integer) 4:
        {
          succeeded = ((((MR_tag((MR_Word) ConsId_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 9)));
          if (succeeded)
          {
          }
        }
        break;
      case (MR_Integer) 6:
        {
          succeeded = ((((MR_tag((MR_Word) ConsId_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 11)));
          if (succeeded)
          {
          }
        }
        break;
      case (MR_Integer) 8:
        {
          succeeded = ((((MR_tag((MR_Word) ConsId_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 13)));
          if (succeeded)
          {
          }
        }
        break;
      case (MR_Integer) 2:
        {
          succeeded = ((((MR_tag((MR_Word) ConsId_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 7)));
          if (succeeded)
          {
          }
        }
        break;
      case (MR_Integer) 1:
        {
          succeeded = ((((MR_tag((MR_Word) ConsId_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 6)));
          if (succeeded)
          {
          }
        }
        break;
      case (MR_Integer) 5:
        {
          succeeded = ((((MR_tag((MR_Word) ConsId_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 10)));
          if (succeeded)
          {
          }
        }
        break;
      case (MR_Integer) 7:
        {
          succeeded = ((((MR_tag((MR_Word) ConsId_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 12)));
          if (succeeded)
          {
          }
        }
        break;
      case (MR_Integer) 9:
        {
          succeeded = ((((MR_tag((MR_Word) ConsId_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 14)));
          if (succeeded)
          {
          }
        }
        break;
      case (MR_Integer) 3:
        {
          succeeded = ((((MR_tag((MR_Word) ConsId_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 8)));
          if (succeeded)
          {
          }
        }
        break;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__is_zero_const_2_p_0(
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
            succeeded = (Val_5 == (MR_Integer) 0);
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
            succeeded = (Val_9 == INT16_C(0));
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
            succeeded = (Val_11 == INT32_C(0));
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
            succeeded = (Val_13 == INT64_C(0));
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
            succeeded = (Val_7 == INT8_C(0));
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
            succeeded = (Val_6 == (MR_Unsigned) 0U);
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
            succeeded = (Val_10 == UINT16_C(0));
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
            succeeded = (Val_12 == UINT32_C(0));
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
            succeeded = (Val_14 == UINT64_C(0));
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
            succeeded = (Val_8 == UINT8_C(0));
          }
        }
        break;
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_make_var_4_p_0(
  MR_Word Type_5,
  MR_Word * Var_6,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13)
{
  {
    MR_Word VarSet0_8;
    MR_Word VarTypes0_9;
    MR_Word VarSet_10;
    MR_Word VarTypes_11;
    MR_Word STATE_VARIABLE_Info_14_14;

    check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(STATE_VARIABLE_Info_0_12, &VarSet0_8);
    check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_12, &VarTypes0_9);
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_6, VarSet0_8, &VarSet_10);
    hlds__vartypes__add_var_type_4_p_0(*Var_6, Type_5, VarTypes0_9, &VarTypes_11);
    check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(VarSet_10, STATE_VARIABLE_Info_0_12, &STATE_VARIABLE_Info_14_14);
    check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(VarTypes_11, STATE_VARIABLE_Info_14_14, STATE_VARIABLE_Info_13);
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_make_string_const_5_p_0(
  MR_String StringConst_6,
  MR_Word * ConstVar_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  {
    MR_Word ConstConsId_10;
    MR_Word Var_13;
    MR_Word Unification_22;
    MR_Word RHS_23;
    MR_Word Ground_25;
    MR_Word UnifyMode_26;
    MR_Word GoalExpr_27;
    MR_Word NonLocals_28;
    MR_Word InstMapDelta_29;
    MR_Word GoalInfo_30;
    MR_Word VarSet0_52;
    MR_Word VarTypes0_53;
    MR_Word VarSet_54;
    MR_Word VarTypes_55;
    MR_Word STATE_VARIABLE_Info_14_56;

    {
      ConstConsId_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConstConsId_10, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(MR_mktag(3), ConstConsId_10, 1) = ((MR_Box) (StringConst_6));
    }
    Var_13 = parse_tree__builtin_lib_types__string_type_0_f_0();
    check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(STATE_VARIABLE_Info_0_11, &VarSet0_52);
    check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_11, &VarTypes0_53);
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConstVar_7, VarSet0_52, &VarSet_54);
    hlds__vartypes__add_var_type_4_p_0(*ConstVar_7, Var_13, VarTypes0_53, &VarTypes_55);
    check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(VarSet_54, STATE_VARIABLE_Info_0_11, &STATE_VARIABLE_Info_14_56);
    check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(VarTypes_55, STATE_VARIABLE_Info_14_56, STATE_VARIABLE_Info_12);
    {
      Unification_22 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Unification_22, 0) = ((MR_Box) (*ConstVar_7));
      MR_hl_field(MR_mktag(0), Unification_22, 1) = ((MR_Box) (ConstConsId_10));
      MR_hl_field(MR_mktag(0), Unification_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Unification_22, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Unification_22, 4) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Unification_22, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Unification_22, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      RHS_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RHS_23, 0) = ((MR_Box) (ConstConsId_10));
      MR_hl_field(MR_mktag(1), RHS_23, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), RHS_23, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Ground_25 = parse_tree__prog_mode__ground_inst_0_f_0();
    {
      UnifyMode_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnifyMode_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), UnifyMode_26, 1) = ((MR_Box) (Ground_25));
      MR_hl_field(MR_mktag(0), UnifyMode_26, 2) = ((MR_Box) (Ground_25));
      MR_hl_field(MR_mktag(0), UnifyMode_26, 3) = ((MR_Box) (Ground_25));
    }
    {
      GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), GoalExpr_27, 0) = ((MR_Box) (*ConstVar_7));
      MR_hl_field(MR_mktag(1), GoalExpr_27, 1) = ((MR_Box) (RHS_23));
      MR_hl_field(MR_mktag(1), GoalExpr_27, 2) = ((MR_Box) (UnifyMode_26));
      MR_hl_field(MR_mktag(1), GoalExpr_27, 3) = ((MR_Box) (Unification_22));
      MR_hl_field(MR_mktag(1), GoalExpr_27, 4) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[81]));
    }
    NonLocals_28 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *ConstVar_7);
    InstMapDelta_29 = hlds__instmap__instmap_delta_bind_var_1_f_0(*ConstVar_7);
    hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_28, InstMapDelta_29, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_30);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_27));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_30));
    }
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

    check_hlds__simplify__simplify_goal_call__simplify_make_int_const_5_p_0(IntConst_13, &ConstVar_18, &ConstGoal_19, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
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
check_hlds__simplify__simplify_goal_call__simplify_make_int_const_5_p_0(
  MR_Integer IntConst_6,
  MR_Word * ConstVar_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  {
    MR_Word ConstConsId_10;
    MR_Word Var_13;
    MR_Word Unification_22;
    MR_Word RHS_23;
    MR_Word Ground_25;
    MR_Word UnifyMode_26;
    MR_Word GoalExpr_27;
    MR_Word NonLocals_28;
    MR_Word InstMapDelta_29;
    MR_Word GoalInfo_30;
    MR_Word VarSet0_52;
    MR_Word VarTypes0_53;
    MR_Word VarSet_54;
    MR_Word VarTypes_55;
    MR_Word STATE_VARIABLE_Info_14_56;

    {
      ConstConsId_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConstConsId_10, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), ConstConsId_10, 1) = ((MR_Box) (IntConst_6));
    }
    Var_13 = parse_tree__builtin_lib_types__int_type_0_f_0();
    check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(STATE_VARIABLE_Info_0_11, &VarSet0_52);
    check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_11, &VarTypes0_53);
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConstVar_7, VarSet0_52, &VarSet_54);
    hlds__vartypes__add_var_type_4_p_0(*ConstVar_7, Var_13, VarTypes0_53, &VarTypes_55);
    check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(VarSet_54, STATE_VARIABLE_Info_0_11, &STATE_VARIABLE_Info_14_56);
    check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(VarTypes_55, STATE_VARIABLE_Info_14_56, STATE_VARIABLE_Info_12);
    {
      Unification_22 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Unification_22, 0) = ((MR_Box) (*ConstVar_7));
      MR_hl_field(MR_mktag(0), Unification_22, 1) = ((MR_Box) (ConstConsId_10));
      MR_hl_field(MR_mktag(0), Unification_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Unification_22, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Unification_22, 4) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Unification_22, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Unification_22, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      RHS_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RHS_23, 0) = ((MR_Box) (ConstConsId_10));
      MR_hl_field(MR_mktag(1), RHS_23, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), RHS_23, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Ground_25 = parse_tree__prog_mode__ground_inst_0_f_0();
    {
      UnifyMode_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnifyMode_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), UnifyMode_26, 1) = ((MR_Box) (Ground_25));
      MR_hl_field(MR_mktag(0), UnifyMode_26, 2) = ((MR_Box) (Ground_25));
      MR_hl_field(MR_mktag(0), UnifyMode_26, 3) = ((MR_Box) (Ground_25));
    }
    {
      GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), GoalExpr_27, 0) = ((MR_Box) (*ConstVar_7));
      MR_hl_field(MR_mktag(1), GoalExpr_27, 1) = ((MR_Box) (RHS_23));
      MR_hl_field(MR_mktag(1), GoalExpr_27, 2) = ((MR_Box) (UnifyMode_26));
      MR_hl_field(MR_mktag(1), GoalExpr_27, 3) = ((MR_Box) (Unification_22));
      MR_hl_field(MR_mktag(1), GoalExpr_27, 4) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[81]));
    }
    NonLocals_28 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *ConstVar_7);
    InstMapDelta_29 = hlds__instmap__instmap_delta_bind_var_1_f_0(*ConstVar_7);
    hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_28, InstMapDelta_29, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_30);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_27));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_30));
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
    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_15, (MR_Integer) 302, (MR_Integer) 1);
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
    MR_Word Builtin_38;
    MR_Word CmpRes_39;
    MR_Word CmpResTypeCtor_40;
    MR_Word FunctorResultLt_41;
    MR_Word FunctorResultEq_42;
    MR_Word FunctorResultGt_43;
    MR_Word ReturnLtGoal_44;
    MR_Word ReturnEqGoal_45;
    MR_Word ReturnGtGoal_46;
    MR_Word Var_50;
    MR_Word Var_53;
    MR_Word Var_56;
    MR_Word Var_59;

    ModuleSymName_17 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    Var_23 = mercury__string__f_43_43_2_f_0(TypeName_10, (MR_String) "_lt");
    PredNameLt_18 = mercury__string__f_43_43_2_f_0((MR_String) "builtin_", Var_23);
    Var_26 = mercury__string__f_43_43_2_f_0(TypeName_10, (MR_String) "_gt");
    PredNameGt_19 = mercury__string__f_43_43_2_f_0((MR_String) "builtin_", Var_26);
    check_hlds__simplify__simplify_goal_call__simplify_make_cmp_goal_expr_8_p_0(Info_9, ModuleSymName_17, PredNameLt_18, (MR_Integer) 0, X_12, Y_13, Context_14, &CmpLtGoal_20);
    check_hlds__simplify__simplify_goal_call__simplify_make_cmp_goal_expr_8_p_0(Info_9, ModuleSymName_17, PredNameGt_19, (MR_Integer) 0, X_12, Y_13, Context_14, &CmpGtGoal_21);
    Builtin_38 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    Var_50 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      CmpRes_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CmpRes_39, 0) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(1), CmpRes_39, 1) = ((MR_Box) ((MR_String) "comparison_result"));
    }
    {
      CmpResTypeCtor_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CmpResTypeCtor_40, 0) = ((MR_Box) (CmpRes_39));
      MR_hl_field(MR_mktag(0), CmpResTypeCtor_40, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Builtin_38));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_String) "<"));
    }
    {
      FunctorResultLt_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), FunctorResultLt_41, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), FunctorResultLt_41, 1) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(3), FunctorResultLt_41, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), FunctorResultLt_41, 3) = ((MR_Box) (CmpResTypeCtor_40));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Builtin_38));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_String) "="));
    }
    {
      FunctorResultEq_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), FunctorResultEq_42, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), FunctorResultEq_42, 1) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(3), FunctorResultEq_42, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), FunctorResultEq_42, 3) = ((MR_Box) (CmpResTypeCtor_40));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Builtin_38));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_String) ">"));
    }
    {
      FunctorResultGt_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), FunctorResultGt_43, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), FunctorResultGt_43, 1) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(3), FunctorResultGt_43, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), FunctorResultGt_43, 3) = ((MR_Box) (CmpResTypeCtor_40));
    }
    hlds__make_goal__make_const_construction_4_p_0(Context_14, R_11, FunctorResultLt_41, &ReturnLtGoal_44);
    hlds__make_goal__make_const_construction_4_p_0(Context_14, R_11, FunctorResultEq_42, &ReturnEqGoal_45);
    hlds__make_goal__make_const_construction_4_p_0(Context_14, R_11, FunctorResultGt_43, &ReturnGtGoal_46);
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[0]), ((MR_Box) (X_12)), ((MR_Box) (Y_13)));
    if (succeeded)
    {
      *GoalExpr_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReturnEqGoal_45, (MR_Integer) 0))));
      *GoalInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReturnEqGoal_45, (MR_Integer) 1))));
    }
    else
    {
      MR_Word NonLocals_47;
      MR_Word ReturnGtEqGoalExpr_48;
      MR_Word ReturnGtEqGoal_49;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_66;

      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Y_13));
        MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (X_12));
        MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_64));
      }
      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (R_11));
        MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_63));
      }
      NonLocals_47 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_62);
      Var_66 = hlds__instmap__instmap_delta_bind_var_1_f_0(R_11);
      hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_47, Var_66, (MR_Integer) 0, (MR_Integer) 0, Context_14, GoalInfo_16);
      {
        ReturnGtEqGoalExpr_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ReturnGtEqGoalExpr_48, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(MR_mktag(3), ReturnGtEqGoalExpr_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), ReturnGtEqGoalExpr_48, 2) = ((MR_Box) (CmpGtGoal_21));
        MR_hl_field(MR_mktag(3), ReturnGtEqGoalExpr_48, 3) = ((MR_Box) (ReturnGtGoal_46));
        MR_hl_field(MR_mktag(3), ReturnGtEqGoalExpr_48, 4) = ((MR_Box) (ReturnEqGoal_45));
      }
      {
        ReturnGtEqGoal_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ReturnGtEqGoal_49, 0) = ((MR_Box) (ReturnGtEqGoalExpr_48));
        MR_hl_field(MR_mktag(0), ReturnGtEqGoal_49, 1) = ((MR_Box) (*GoalInfo_16));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        *GoalExpr_15 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (CmpLtGoal_20));
        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ReturnLtGoal_44));
        MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ReturnGtEqGoal_49));
      }
    }
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
    Unique_31 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_6[1]));
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
      MR_hl_field(MR_mktag(1), UnifyExpr_48, 4) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[80]));
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
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26)
{
  {
    MR_bool succeeded;
    MR_Word PredOrFunc_12;
    MR_Word ModuleSymName_13;
    MR_String ModuleName_14;
    MR_Word ArgA_15;
    MR_Word ArgB_16;
    MR_Word Var_27;
    MR_Word Var_28;

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
          Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
          succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ArgB_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 0))));
            Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 1))));
            succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_simple_code_1_p_0(STATE_VARIABLE_Info_0_25);
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
        MR_Word Spec_24;
        MR_Word Var_34;
        MR_Word Var_41;
        MR_Word Var_42;

        GoalContext_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_10);
        PredPieces_22 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 0, PredInfo_7);
        Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredPieces_22, WarnPieces_20);
        Pieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[79])), Var_34);
        {
          Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (GoalContext_21));
          MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (Pieces_23));
        }
        {
          Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
          MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.maybe_generate_warning_for_useless_comparison\'/6"));
          MR_hl_field(MR_mktag(2), Spec_24, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 26) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
          MR_hl_field(MR_mktag(2), Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(2), Spec_24, 3) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_4[0])));
          MR_hl_field(MR_mktag(2), Spec_24, 4) = ((MR_Box) (Var_41));
        }
        check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_24, STATE_VARIABLE_Info_0_25, STATE_VARIABLE_Info_26);
      }
      else
        *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_0_25;
    }
    else
      *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_0_25;
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
                  Var_27 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[70]));
                  Var_32 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[76]));
                  {
                    Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (ModuleName_6));
                  }
                  Var_37 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[77]));
                  {
                    Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_40, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), Var_40, 1) = ((MR_Box) (ZeroStr_85));
                  }
                  Var_41 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[69]));
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
                  Var_45 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[64]));
                  {
                    Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), Var_50, 1) = ((MR_Box) (ZeroStr_84));
                  }
                  Var_52 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[74]));
                  Var_55 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[75]));
                  {
                    Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (ModuleName_6));
                  }
                  Var_59 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[73]));
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
                  Var_12 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[70]));
                  {
                    Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), Var_17, 1) = ((MR_Box) (ZeroStr_86));
                  }
                  Var_19 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[71]));
                  {
                    Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (ModuleName_6));
                  }
                  Var_23 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[73]));
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
                  Var_63 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[64]));
                  Var_68 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[65]));
                  {
                    Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), Var_71, 1) = ((MR_Box) (ModuleName_6));
                  }
                  Var_73 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[66]));
                  Var_76 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[67]));
                  {
                    Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_79, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), Var_79, 1) = ((MR_Box) (ZeroStr_11));
                  }
                  Var_80 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[69]));
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
                MR_Word Var_124;
                MR_Word Var_147;
                MR_Word Var_148;
                MR_Word Var_149;
                MR_Word Var_150;

                {
                  Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[61])));
                  MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) (NamePieces_34));
                }
                MainPieces_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_124, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[14])));
                Var_148 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_18);
                {
                  Var_150 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_150, 0) = ((MR_Box) (MainPieces_35));
                }
                {
                  Var_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_149, 0) = ((MR_Box) (Var_150));
                  MR_hl_field(MR_mktag(1), Var_149, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[63])));
                }
                {
                  Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (Var_148));
                  MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) (Var_149));
                }
                {
                  Msgs_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Msgs_37, 0) = ((MR_Box) (Var_147));
                  MR_hl_field(MR_mktag(1), Msgs_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_38, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.maybe_generate_warning_for_infinite_loop_call\'/11"));
                  MR_hl_field(MR_mktag(0), Spec_38, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(0), Spec_38, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_4[0])));
                  MR_hl_field(MR_mktag(0), Spec_38, 3) = ((MR_Box) (Msgs_37));
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
                  MR_Word Var_93;
                  MR_Word Var_111;
                  MR_Word Var_112;
                  MR_Word Var_113;
                  MR_Word Var_114;
                  MR_Word Var_115;
                  MR_Word Var_116;
                  MR_Word Msgs_161;
                  MR_Word Spec_162;

                  {
                    Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[61])));
                    MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (NamePieces_34));
                  }
                  Pieces_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_93, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[30])));
                  Var_112 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_18);
                  {
                    Var_114 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (Pieces_39));
                  }
                  Var_116 = check_hlds__simplify__simplify_goal_call__shut_up_suspicious_recursion_msg_0_f_0();
                  {
                    Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (Var_116));
                    MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (Var_114));
                    MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (Var_115));
                  }
                  {
                    Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Var_112));
                    MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) (Var_113));
                  }
                  {
                    Msgs_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Msgs_161, 0) = ((MR_Box) (Var_111));
                    MR_hl_field(MR_mktag(1), Msgs_161, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Spec_162 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Spec_162, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.maybe_generate_warning_for_infinite_loop_call\'/11"));
                    MR_hl_field(MR_mktag(0), Spec_162, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(MR_mktag(0), Spec_162, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_4[0])));
                    MR_hl_field(MR_mktag(0), Spec_162, 3) = ((MR_Box) (Msgs_161));
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
              MR_Word Var_81;
              MR_Word Var_82;
              MR_Word Var_90;
              MR_Word Spec_167;
              MR_Word Pieces_168;

              {
                Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[61])));
                MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (NamePieces_34));
              }
              Var_68 = parse_tree__error_util__list_to_pieces_1_f_0(SuspiciousArgNames_41);
              Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_68, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[38])));
              Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[34])), Var_67);
              Pieces_168 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_56, Var_59);
              Var_78 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_18);
              {
                Var_80 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (Pieces_168));
              }
              Var_82 = check_hlds__simplify__simplify_goal_call__shut_up_suspicious_recursion_msg_0_f_0();
              {
                Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Var_82));
                MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_80));
                MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_81));
              }
              {
                Msg_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Msg_45, 0) = ((MR_Box) (Var_78));
                MR_hl_field(MR_mktag(1), Msg_45, 1) = ((MR_Box) (Var_79));
              }
              {
                Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (Msg_45));
                MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_167 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Spec_167, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.maybe_generate_warning_for_infinite_loop_call\'/11"));
                MR_hl_field(MR_mktag(2), Spec_167, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 33) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
                MR_hl_field(MR_mktag(2), Spec_167, 2) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(2), Spec_167, 3) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_4[0])));
                MR_hl_field(MR_mktag(2), Spec_167, 4) = ((MR_Box) (Var_90));
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
  return (MR_Word) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_1[60]));
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

    conv0_HeadVar__2_2 = check_hlds__simplify__simplify_goal_call__wrap_sym_name_arity_1_f_0(((MR_Word) (wrapper_arg_1)));
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
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34)
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

    succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_obsolete_1_p_0(STATE_VARIABLE_Info_0_33);
    if (succeeded)
    {
      check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_0_33, &ThisPredProcId_19);
      ThisPredId_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThisPredProcId_19, (MR_Integer) 0))));
      succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_8, ThisPredId_20);
      succeeded = !(succeeded);
      if (succeeded)
      {
        check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_33, &ModuleInfo_18);
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
          MR_Word Var_36;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word MaybeObsolete_88;

          hlds__hlds_pred__proc_info_get_obsolete_in_favour_of_2_p_0(ProcInfo_11, &MaybeObsolete_88);
          succeeded = (MaybeObsolete_88 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            InFavourOf_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeObsolete_88, (MR_Integer) 0))));
            Var_36 = (MR_Integer) 0;
            Var_37 = (MR_Integer) 0;
            {
              Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (PredId_8));
              MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (ProcId_9));
            }
            PredOrProcPieces_17 = hlds__hlds_error_util__describe_one_proc_name_mode_4_f_0(ModuleInfo_18, Var_36, Var_37, Var_38);
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
      MR_Word Spec_32;
      MR_Word Var_43;
      MR_Word Var_84;
      MR_Word Var_85;

      GoalContext_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_12);
      Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredOrProcPieces_17, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[12])));
      MainPieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[56])), Var_43);
      if ((InFavourOf_16 == (MR_Word) ((MR_Unsigned) 0U)))
        Pieces_26 = MainPieces_25;
      else
      {
        MR_Word Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InFavourOf_16, (MR_Integer) 1))));
        MR_Word Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InFavourOf_16, (MR_Integer) 0))));

        if ((Var_95 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_67;
          MR_Word Var_70;
          MR_Word Var_71;

          {
            Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(MR_mktag(3), Var_71, 1) = ((MR_Box) (Var_96));
          }
          {
            Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
            MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[12])));
          }
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[57])));
            MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_70));
          }
          Pieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), MainPieces_25, Var_67);
        }
        else
        {
          MR_Word InFavourOfPieces_31;
          MR_Word Var_52;
          MR_Word Var_54;
          MR_Word Var_59;

          Var_52 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_6[0]), InFavourOf_16);
          InFavourOfPieces_31 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", Var_52);
          Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InFavourOfPieces_31, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[12])));
          Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[59])), Var_59);
          Pieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), MainPieces_25, Var_54);
        }
      }
      {
        Var_85 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (GoalContext_24));
        MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (Pieces_26));
      }
      {
        Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
        MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Spec_32, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.maybe_generate_warning_for_call_to_obsolete_predicate\'/7"));
        MR_hl_field(MR_mktag(2), Spec_32, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 48) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
        MR_hl_field(MR_mktag(2), Spec_32, 2) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(2), Spec_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_4[0])));
        MR_hl_field(MR_mktag(2), Spec_32, 4) = ((MR_Box) (Var_84));
      }
      check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_32, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34);
    }
    else
      *STATE_VARIABLE_Info_34 = STATE_VARIABLE_Info_0_33;
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

    succeeded = check_hlds__simplify__simplify_goal_call__IntroducedFrom__pred__maybe_generate_warning_for_implicit_stream_predicate__356__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
      MR_Word TypeCtorInfo_114_114;
      MR_Word TypeCtorInfo_116_116;
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
      MR_Word Var_37;
      MR_String Var_38;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Integer Var_45;
      MR_Integer Var_46;
      MR_Word Var_47;

      succeeded = (PredOrFunc_13 == (MR_Integer) 0);
      if (succeeded)
      {
        hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_8, &ArgTypes_14);
        Var_37 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
        Var_38 = (MR_String) "state";
        Var_39 = (MR_Word) ((MR_Unsigned) 0U);
        Var_40 = (MR_Word) ((MR_Unsigned) 0U);
        TypeCtorInfo_114_114 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
        {
          IOStateTypeSymName_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), IOStateTypeSymName_15, 0) = ((MR_Box) (Var_37));
          MR_hl_field(MR_mktag(1), IOStateTypeSymName_15, 1) = ((MR_Box) (Var_38));
        }
        {
          IOStateType_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), IOStateType_16, 0) = ((MR_Box) (IOStateTypeSymName_15));
          MR_hl_field(MR_mktag(1), IOStateType_16, 1) = ((MR_Box) (Var_39));
          MR_hl_field(MR_mktag(1), IOStateType_16, 2) = ((MR_Box) (Var_40));
        }
        {
          Var_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_2[0]));
          MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0_1));
          MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (IOStateType_16));
        }
        mercury__list__filter_3_p_0(TypeCtorInfo_114_114, Var_41, ArgTypes_14, &IOStateArgTypes_17);
        succeeded = (IOStateArgTypes_17 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IOStateArgTypes_17, (MR_Integer) 1))));
          succeeded = (Var_42 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 1))));
            succeeded = (Var_43 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_8, &OrigArity_20);
              mercury__list__length_2_p_0(TypeCtorInfo_114_114, ArgTypes_14, &FullArity_21);
              NumExtraArgs_22 = (MR_Integer) ((MR_Unsigned) FullArity_21 - (MR_Unsigned) OrigArity_20);
              mercury__list__det_split_list_4_p_0(TypeCtorInfo_114_114, NumExtraArgs_22, ArgTypes_14, &ExtraArgTypes_23, &UserArgTypes_24);
              hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_6, &PredTable_25);
              Var_44 = (MR_Integer) 0;
              Var_46 = (MR_Integer) 1;
              Var_45 = (MR_Integer) ((MR_Unsigned) OrigArity_20 + (MR_Unsigned) Var_46);
              {
                PredSymName_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), PredSymName_26, 0) = ((MR_Box) (ModuleName_11));
                MR_hl_field(MR_mktag(1), PredSymName_26, 1) = ((MR_Box) (PredName_12));
              }
              hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredTable_25, Var_44, PredOrFunc_13, PredSymName_26, Var_45, &PredIds_27);
              TypeCtorInfo_116_116 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0);
              {
                Var_47 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_3[0]));
                MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0_2));
                MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (ModuleInfo_6));
                MR_hl_field(MR_mktag(0), Var_47, 4) = ((MR_Box) (NumExtraArgs_22));
                MR_hl_field(MR_mktag(0), Var_47, 5) = ((MR_Box) (ExtraArgTypes_23));
                MR_hl_field(MR_mktag(0), Var_47, 6) = ((MR_Box) (UserArgTypes_24));
              }
              mercury__list__filter_3_p_0(TypeCtorInfo_116_116, Var_47, PredIds_27, &OneExtraStreamArgPredIds_28);
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
        MR_Word Spec_34;
        MR_Word Var_53;
        MR_Word Var_69;
        MR_Word Var_70;

        GoalContext_31 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_9);
        PredPieces_32 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_6, (MR_Integer) 0, PredId_7);
        Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredPieces_32, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[5])));
        Pieces_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[52])), Var_53);
        {
          Var_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (GoalContext_31));
          MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (Pieces_33));
        }
        {
          Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
          MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Spec_34, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.maybe_generate_warning_for_implicit_stream_predicate\'/5"));
          MR_hl_field(MR_mktag(2), Spec_34, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 28) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
          MR_hl_field(MR_mktag(2), Spec_34, 2) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(MR_mktag(2), Spec_34, 3) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_4[0])));
          MR_hl_field(MR_mktag(2), Spec_34, 4) = ((MR_Box) (Var_69));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeSpec_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_34));
        }
      }
      else
      {
        MR_String Dir_35;
        MR_Word Var_119;
        MR_Integer lo_0;
        MR_Integer hi_1;
        MR_Integer mid_2;
        MR_Integer result_3;

        Var_119 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_11, Var_119);
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
              result_3 = MR_strcmp(PredName_12, ((&check_hlds__simplify__simplify_goal_call_vector_common_5[0 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_5_0__vct_5_f_0);
              if ((result_3 == (MR_Integer) 0))
              {
                Dir_35 = ((&check_hlds__simplify__simplify_goal_call_vector_common_5[0 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_5_0__vct_5_f_1;
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
          MR_Word Var_77;
          MR_Word Var_78;
          MR_Word Var_81;
          MR_Word Var_84;
          MR_Word Var_85;
          MR_Word Var_101;
          MR_Word Var_102;
          MR_Word GoalContext_104;
          MR_Word PredPieces_105;
          MR_Word Pieces_106;
          MR_Word Spec_107;

          GoalContext_104 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_9);
          PredPieces_105 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_6, (MR_Integer) 0, PredId_7);
          {
            Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_85, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_85, 1) = ((MR_Box) (Dir_35));
          }
          {
            Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
            MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[9])));
          }
          {
            Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[54])));
            MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_84));
          }
          {
            Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[53])));
            MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_81));
          }
          Var_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredPieces_105, Var_78);
          Pieces_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[52])), Var_77);
          {
            Var_102 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_102, 0) = ((MR_Box) (GoalContext_104));
            MR_hl_field(MR_mktag(0), Var_102, 1) = ((MR_Box) (Pieces_106));
          }
          {
            Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (Var_102));
            MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_107 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Spec_107, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.maybe_generate_warning_for_implicit_stream_predicate\'/5"));
            MR_hl_field(MR_mktag(2), Spec_107, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 28) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
            MR_hl_field(MR_mktag(2), Spec_107, 2) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(MR_mktag(2), Spec_107, 3) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_4[0])));
            MR_hl_field(MR_mktag(2), Spec_107, 4) = ((MR_Box) (Var_101));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeSpec_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_107));
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
