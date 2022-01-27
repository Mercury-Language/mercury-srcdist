/*
** Automatically generated from `simplify_goal_call.m'
** by the Mercury compiler,
** version rotd-2021-12-31
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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
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
#include "libs.optimization_options.mih"
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
#include "parse_tree.file_names.mih"
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

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_ordinal_ordered_maybe_all_inputs_eqv_0[2];

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_name_ordered_maybe_all_inputs_eqv_0[2];

static const MR_Integer check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__functor_number_map_maybe_all_inputs_eqv_0[2];

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_functor_desc_maybe_all_inputs_eqv_or_svar_0_0;

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_functor_desc_maybe_all_inputs_eqv_or_svar_0_1;

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_ordinal_ordered_maybe_all_inputs_eqv_or_svar_0[2];

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_name_ordered_maybe_all_inputs_eqv_or_svar_0[2];

static const MR_Integer check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__functor_number_map_maybe_all_inputs_eqv_or_svar_0[2];

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__IntroducedFrom__pred__maybe_generate_warning_for_implicit_stream_predicate__356__1_2_p_0(
  MR_Word IOStateType_16,
  MR_Word HeadVar__2_114);

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
  MR_Word STATE_VARIABLE_GoalInfo_0_67,
  MR_Word * STATE_VARIABLE_GoalInfo_68,
  MR_Word STATE_VARIABLE_Info_0_69,
  MR_Word * STATE_VARIABLE_Info_70);

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
  MR_Word STATE_VARIABLE_Info_0_47,
  MR_Word * STATE_VARIABLE_Info_48);

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


static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_1[85][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_2[5][1];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_3[6][3];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_4[4][5];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_5[1][8];


/* sealed */ struct check_hlds__simplify__simplify_goal_call__vector_common_type_6_0_s {
  const MR_String check_hlds__simplify__simplify_goal_call__vector_common_type_6_0__vct_6_f_0;
  const MR_String check_hlds__simplify__simplify_goal_call__vector_common_type_6_0__vct_6_f_1;
};

static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_6_0_s check_hlds__simplify__simplify_goal_call_vector_common_6[96];

/* sealed */ struct check_hlds__simplify__simplify_goal_call__vector_common_type_7_0_s {
  const MR_String check_hlds__simplify__simplify_goal_call__vector_common_type_7_0__vct_7_f_0;
  const MR_Integer check_hlds__simplify__simplify_goal_call__vector_common_type_7_0__vct_7_f_1;
};

static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_7_0_s check_hlds__simplify__simplify_goal_call_vector_common_7[50];

/* sealed */ struct check_hlds__simplify__simplify_goal_call__vector_common_type_8_0_s {
  const MR_String check_hlds__simplify__simplify_goal_call__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_8_0_s check_hlds__simplify__simplify_goal_call_vector_common_8[64];



static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_1[85][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The call to"))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "explicitly specifying a stream."))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "could have an additional argument"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "could be made redundant by explicitly passing"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "to later I/O operations."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[3])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "stream it specifies"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: call to obsolete"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[15]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[3])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The suggested replacement is"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The possible suggested replacements are"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: recursive call to"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "will lead to infinite recursion."))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[3])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "leading to infinite recursion."))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[3])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with exactly the same input arguments,"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the procedure will call itself"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "If this recursive call is executed,"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[30])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "use state variable notation."))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[3])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "between the clause head and the call"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[34])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "all input argument positions that differ"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[36])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is suspicious, because"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[38])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "whose names start with"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[41]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is suspicious, because variables"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[42])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the call than in the clause head."))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[3])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "occupy different argument positions"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[46])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "scope."))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[3])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "disable_warning [suspicious_recursion] (...)"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[50])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "wrapping the recursive call inside a"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[52])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "This warning can be disabled by"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[54])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: call to"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[57]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "cannot succeed."))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "There are no"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "values <"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[17]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "cannot fail."))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "=<"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "all"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "values."))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[66]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "> no"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "All"))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "values are"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ">="))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_2[2]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 73 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: call to"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with a zero divisor."))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[3])))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with a shift amount that is"))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "outside of the range"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "to"))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with a shift amount that is equal to"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or greater than"))
  },
  /* row 82 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[56])))
  },
  /* row 83 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[32])))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_1[83]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_2[5][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "prolog"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "simplify_inline_builtin_inequality"))
  },
  /* row 3 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "0 (inclusive)"))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_3[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_4[1])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_call_to_obsolete_predicate_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_4[2])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_4[3])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_4[3])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_4[2])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_4[4][5] = {
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

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_5[1][8] = {
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


static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_6_0_s check_hlds__simplify__simplify_goal_call_vector_common_6[96] = {
  /* row 0 */
  {
    (MR_String) "seen_binary",
    (MR_String) "input"
  },
  /* row 1 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 2 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 3 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 4 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 5 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 6 */
  {
    (MR_String) "set_input_stream",
    (MR_String) "input"
  },
  /* row 7 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
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
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 11 */
  {
    (MR_String) "see_binary",
    (MR_String) "input"
  },
  /* row 12 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 13 */
  {
    (MR_String) "tell",
    (MR_String) "output"
  },
  /* row 14 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 15 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 16 */
  {
    (MR_String) "told_binary",
    (MR_String) "output"
  },
  /* row 17 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
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
    (MR_String) "set_binary_input_stream",
    (MR_String) "input"
  },
  /* row 22 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
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
    (MR_String) "tell_binary",
    (MR_String) "output"
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
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 32 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 33 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
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
  /* row 38 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 39 */
  {
    (MR_String) "set_binary_output_stream",
    (MR_String) "output"
  },
  /* row 40 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 41 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 42 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 43 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 44 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 45 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 46 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 47 */
  {
    (MR_String) "seen",
    (MR_String) "input"
  },
  /* row 48 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 49 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 50 */
  {
    (MR_String) "set_output_stream",
    (MR_String) "output"
  },
  /* row 51 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 52 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 53 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 54 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 55 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 56 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 57 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 58 */
  {
    (MR_String) "see",
    (MR_String) "input"
  },
  /* row 59 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 60 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 61 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 62 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 63 */
  {
    (MR_String) "told",
    (MR_String) "output"
  },
  /* row 64 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 65 */
  {
    (MR_String) "builtin_compare_uint8",
    (MR_String) "uint8"
  },
  /* row 66 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 67 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 68 */
  {
    (MR_String) "builtin_compare_int",
    (MR_String) "int"
  },
  /* row 69 */
  {
    (MR_String) "builtin_compare_uint16",
    (MR_String) "uint16"
  },
  /* row 70 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 71 */
  {
    (MR_String) "builtin_compare_uint32",
    (MR_String) "uint32"
  },
  /* row 72 */
  {
    (MR_String) "builtin_compare_uint",
    (MR_String) "uint"
  },
  /* row 73 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 74 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 75 */
  {
    (MR_String) "builtin_compare_int8",
    (MR_String) "int8"
  },
  /* row 76 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 77 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 78 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 79 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 80 */
  {
    (MR_String) "builtin_compare_uint64",
    (MR_String) "uint64"
  },
  /* row 81 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 82 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 83 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 84 */
  {
    (MR_String) "builtin_compare_int64",
    (MR_String) "int64"
  },
  /* row 85 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 86 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 87 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 88 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 89 */
  {
    (MR_String) "builtin_compare_int32",
    (MR_String) "int32"
  },
  /* row 90 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 91 */
  {
    (MR_String) "builtin_compare_int16",
    (MR_String) "int16"
  },
  /* row 92 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 93 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 94 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 95 */
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

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_ordinal_ordered_maybe_all_inputs_eqv_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__simplify__simplify_goal_call____Unify____maybe_all_inputs_eqv_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_goal_call____Compare____maybe_all_inputs_eqv_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_goal_call",
  (MR_String) "maybe_all_inputs_eqv",
  {     check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_name_ordered_maybe_all_inputs_eqv_0 },
  {     check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_ordinal_ordered_maybe_all_inputs_eqv_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__functor_number_map_maybe_all_inputs_eqv_0,

};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_functor_desc_maybe_all_inputs_eqv_or_svar_0_0 = {
  (MR_String) "not_all_inputs_eqv_or_svar",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_functor_desc_maybe_all_inputs_eqv_or_svar_0_1 = {
  (MR_String) "all_inputs_eqv_or_svar",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_ordinal_ordered_maybe_all_inputs_eqv_or_svar_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__simplify__simplify_goal_call____Unify____maybe_all_inputs_eqv_or_svar_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_goal_call____Compare____maybe_all_inputs_eqv_or_svar_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_goal_call",
  (MR_String) "maybe_all_inputs_eqv_or_svar",
  {     check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_name_ordered_maybe_all_inputs_eqv_or_svar_0 },
  {     check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_ordinal_ordered_maybe_all_inputs_eqv_or_svar_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__functor_number_map_maybe_all_inputs_eqv_or_svar_0,

};

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__IntroducedFrom__pred__maybe_generate_warning_for_implicit_stream_predicate__356__1_2_p_0(
  MR_Word IOStateType_16,
  MR_Word HeadVar__2_114)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data____Unify____mer_type_0_0(IOStateType_16, HeadVar__2_114);
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
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 10U));
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
      TypeInfo_25_25 = (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[14]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ExtraArgTypes_13)), ((MR_Box) (BaseExtraArgTypes_8)));
      if (succeeded)
      {
        succeeded = (UserArgTypes_14 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          HeadUserArgType_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UserArgTypes_14, (MR_Integer) 0))));
          TailUserArgTypes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UserArgTypes_14, (MR_Integer) 1))));
          TypeInfo_26_26 = (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[14]);
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
          Var_47 = (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_3[2]);
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
            mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_3[3]), Args0_21, &Args_34);
            mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_3[4]), ExtraArgs0_22, &ExtraArgs_35);
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

        ArgVars_56 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[0]), (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_3[5]), Args_34);
        Purity_38 = hlds__hlds_goal__goal_info_get_purity_1_f_0(STATE_VARIABLE_GoalInfo_0_41);
        check_hlds__simplify__common__common_optimise_call_11_p_0(PredId_19, ProcId_20, ArgVars_56, Purity_38, STATE_VARIABLE_GoalInfo_0_41, GoalExpr1_36, &MaybeAssignsGoalExpr_39, STATE_VARIABLE_Common_0_43, STATE_VARIABLE_Common_44, STATE_VARIABLE_Info_0_45, STATE_VARIABLE_Info_46);
        succeeded = (OptDuplicateCalls_37 == (MR_Integer) 0);
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
            succeeded = (OptDuplicateCalls_28 == (MR_Integer) 0);
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
        check_hlds__simplify__simplify_info__simplify_info_set_rerun_quant_instmap_delta_2_p_0(STATE_VARIABLE_Info_48_48, STATE_VARIABLE_Info_44);
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
            succeeded = (OptDupCalls_68 == (MR_Integer) 0);
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
          succeeded = (OptDupCalls_84 == (MR_Integer) 0);
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
              libs__globals__lookup_bool_option_3_p_0(Globals_106, (MR_Integer) 266, &Pregen_107);
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
              libs__globals__lookup_bool_option_3_p_0(Globals_76, (MR_Integer) 266, &Pregen_77);
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
              libs__globals__lookup_bool_option_3_p_0(Globals_32, (MR_Integer) 266, &Pregen_33);
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
              libs__globals__lookup_bool_option_3_p_0(Globals_116, (MR_Integer) 266, &Pregen_117);
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
                str_5 = ((&check_hlds__simplify__simplify_goal_call_vector_common_6[64 + slot_4]))->check_hlds__simplify__simplify_goal_call__vector_common_type_6_0__vct_6_f_0;
                // did we find a match?
                ;
                if ((((str_5 != NULL)) && ((strcmp(str_5, PredName_14) == 0))))
                {
                  // we found a match; look up the results
                  ;
                  TypeName_28 = ((&check_hlds__simplify__simplify_goal_call_vector_common_6[64 + slot_4]))->check_hlds__simplify__simplify_goal_call__vector_common_type_6_0__vct_6_f_1;
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
              libs__globals__lookup_bool_option_3_p_0(Globals_96, (MR_Integer) 266, &Pregen_97);
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
              libs__globals__lookup_bool_option_3_p_0(Globals_91, (MR_Integer) 266, &Pregen_92);
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
              libs__globals__lookup_bool_option_3_p_0(Globals_111, (MR_Integer) 266, &Pregen_112);
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
              libs__globals__lookup_bool_option_3_p_0(Globals_101, (MR_Integer) 266, &Pregen_102);
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
              libs__globals__lookup_bool_option_3_p_0(Globals_81, (MR_Integer) 266, &Pregen_82);
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
              libs__globals__lookup_bool_option_3_p_0(Globals_86, (MR_Integer) 266, &Pregen_87);
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
      check_hlds__simplify__simplify_info__simplify_info_set_rerun_quant_instmap_delta_2_p_0(STATE_VARIABLE_Info_45_45, STATE_VARIABLE_Info_35);
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
  MR_Word STATE_VARIABLE_GoalInfo_0_67,
  MR_Word * STATE_VARIABLE_GoalInfo_68,
  MR_Word STATE_VARIABLE_Info_0_69,
  MR_Word * STATE_VARIABLE_Info_70)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_23;
    MR_Word Globals_24;
    MR_Integer slot_0;
    MR_String str_1;

    check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_69, &ModuleInfo_23);
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
                MR_Word Var_205;
                MR_Word Var_206;
                MR_Word Var_207;
                MR_String Op_213;
                MR_Word X_214;
                MR_Word Y_215;
                MR_Integer TargetBitsPerInt_216;

                succeeded = (IntType_13 == (MR_Integer) 0);
                if (succeeded)
                {
                  succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    X_214 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 0))));
                    Var_205 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 1))));
                    succeeded = (Var_205 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Y_215 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_205, (MR_Integer) 0))));
                      Var_206 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_205, (MR_Integer) 1))));
                      succeeded = (Var_206 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Op_213 = (MR_String) "*";
                        libs__int_emu__target_bits_per_int_2_p_0(Globals_24, &Var_207);
                        TargetBitsPerInt_216 = (MR_Integer) (Var_207);
                        check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_9_p_0(ModuleName_15, Op_213, X_214, TargetBitsPerInt_216, Y_215, ImprovedGoalExpr_20, STATE_VARIABLE_GoalInfo_0_67, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
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
                MR_Word Var_71;
                MR_Word Var_72;
                MR_Word Var_73;
                MR_Word X_254;
                MR_Word Y_255;
                MR_Word Z_256;
                MR_Word InstY_257;
                MR_Word YConst_41;
                MR_Word Var_74;
                MR_Word Var_75;
                MR_Word Var_76;
                MR_Word Var_77;
                MR_Word Var_78;

                succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  X_254 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 0))));
                  Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 1))));
                  succeeded = (Var_71 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Y_255 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_71, (MR_Integer) 0))));
                    Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_71, (MR_Integer) 1))));
                    succeeded = (Var_72 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Z_256 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_72, (MR_Integer) 0))));
                      Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_72, (MR_Integer) 1))));
                      succeeded = (Var_73 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        NumTargetBits_38 = check_hlds__simplify__simplify_goal_call__int_type_target_bits_2_f_0(Globals_24, IntType_13);
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_14, Y_255, &InstY_257);
                        succeeded = ((((MR_tag((MR_Word) InstY_257)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstY_257, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstY_257, (MR_Integer) 3))));
                          succeeded = (Var_74 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_74, (MR_Integer) 0))));
                            Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_74, (MR_Integer) 1))));
                            succeeded = (Var_78 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_75, (MR_Integer) 0))));
                              Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_75, (MR_Integer) 1))));
                              succeeded = (Var_77 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_76)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_76, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                if (succeeded)
                                {
                                  YConst_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_76, (MR_Integer) 1))));
                                  if (((MR_tag((MR_Word) YConst_41)) == (MR_Integer) 0))
                                    succeeded = MR_TRUE;
                                  else
                                  if (((MR_tag((MR_Word) YConst_41)) == (MR_Integer) 1))
                                    succeeded = MR_TRUE;
                                  else
                                    succeeded = MR_FALSE;
                                }
                              }
                            }
                          }
                        }
                        if (succeeded)
                        {
                          if (((MR_tag((MR_Word) YConst_41)) == (MR_Integer) 0))
                          {
                            MR_Integer YIntVal_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), YConst_41, (MR_Integer) 0))));

                            succeeded = ((MR_Integer) 0 <= YIntVal_44);
                            if (succeeded)
                              succeeded = (YIntVal_44 < NumTargetBits_38);
                            if (succeeded)
                            {
                              check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_69, ModuleName_15, (MR_String) "unchecked_left_shift", (MR_Integer) 0, X_254, Y_255, Z_256, ImprovedGoalExpr_20);
                              *STATE_VARIABLE_Info_70 = STATE_VARIABLE_Info_0_69;
                            }
                            else
                            {
                              MR_String Exclusive_45;
                              MR_Word Var_107;
                              MR_Word Var_114;
                              MR_Word Var_115;
                              MR_Word Var_116;
                              MR_Word Var_119;
                              MR_Word Var_122;
                              MR_Word Var_125;
                              MR_Word Var_128;
                              MR_Word Var_129;
                              MR_Word Context_220;
                              MR_Word SymName_221;
                              MR_Word Pieces_222;
                              MR_Word Spec_223;
                              MR_String Var_2321;

                              *ImprovedGoalExpr_20 = GoalExpr0_19;
                              Context_220 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_67);
                              {
                                Var_107 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), Var_107, 0) = ((MR_Box) (ModuleName_15));
                              }
                              {
                                SymName_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), SymName_221, 0) = ((MR_Box) (Var_107));
                                MR_hl_field(MR_mktag(1), SymName_221, 1) = ((MR_Box) (PredName_16));
                              }
                              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_2[3]), NumTargetBits_38, &Var_2321);
                              Exclusive_45 = mercury__string__f_43_43_2_f_0(Var_2321, (MR_String) " (exclusive).");
                              {
                                Var_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), Var_115, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                                MR_hl_field(MR_mktag(3), Var_115, 1) = ((MR_Box) (SymName_221));
                              }
                              {
                                Var_129 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(2), Var_129, 0) = ((MR_Box) (Exclusive_45));
                              }
                              {
                                Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) (Var_129));
                                MR_hl_field(MR_mktag(1), Var_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[3])));
                              }
                              {
                                Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[79])));
                                MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (Var_128));
                              }
                              {
                                Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_2[4])));
                                MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) (Var_125));
                              }
                              {
                                Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[78])));
                                MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) (Var_122));
                              }
                              {
                                Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[77])));
                                MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (Var_119));
                              }
                              {
                                Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (Var_115));
                                MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (Var_116));
                              }
                              {
                                Pieces_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Pieces_222, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[74])));
                                MR_hl_field(MR_mktag(1), Pieces_222, 1) = ((MR_Box) (Var_114));
                              }
                              {
                                Spec_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Spec_223, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_improve_arith_shift_cmp_ops\'/12"));
                                MR_hl_field(MR_mktag(1), Spec_223, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                MR_hl_field(MR_mktag(1), Spec_223, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
                                MR_hl_field(MR_mktag(1), Spec_223, 3) = ((MR_Box) (Context_220));
                                MR_hl_field(MR_mktag(1), Spec_223, 4) = ((MR_Box) (Pieces_222));
                              }
                              check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_223, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
                            }
                          }
                          else
                          {
                            MR_Unsigned YUintVal_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), YConst_41, (MR_Integer) 0))));
                            MR_Unsigned Var_79;

                            Var_79 = mercury__uint__det_from_int_1_f_0(NumTargetBits_38);
                            succeeded = (YUintVal_46 < Var_79);
                            if (succeeded)
                            {
                              check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_69, ModuleName_15, (MR_String) "unchecked_left_shift", (MR_Integer) 0, X_254, Y_255, Z_256, ImprovedGoalExpr_20);
                              *STATE_VARIABLE_Info_70 = STATE_VARIABLE_Info_0_69;
                            }
                            else
                            {
                              MR_Word Var_81;
                              MR_Word Var_84;
                              MR_Word Var_85;
                              MR_Word Var_86;
                              MR_Word Var_89;
                              MR_Word Var_92;
                              MR_Word Var_93;
                              MR_Word Context_232;
                              MR_Word SymName_233;
                              MR_Word Pieces_234;
                              MR_Word Spec_235;

                              *ImprovedGoalExpr_20 = GoalExpr0_19;
                              Context_232 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_67);
                              {
                                Var_81 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (ModuleName_15));
                              }
                              {
                                SymName_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), SymName_233, 0) = ((MR_Box) (Var_81));
                                MR_hl_field(MR_mktag(1), SymName_233, 1) = ((MR_Box) (PredName_16));
                              }
                              {
                                Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), Var_85, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                                MR_hl_field(MR_mktag(3), Var_85, 1) = ((MR_Box) (SymName_233));
                              }
                              {
                                Var_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), Var_93, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                                MR_hl_field(MR_mktag(3), Var_93, 1) = ((MR_Box) (NumTargetBits_38));
                              }
                              {
                                Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (Var_93));
                                MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[18])));
                              }
                              {
                                Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[81])));
                                MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_92));
                              }
                              {
                                Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[80])));
                                MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_89));
                              }
                              {
                                Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
                                MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Var_86));
                              }
                              {
                                Pieces_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Pieces_234, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[74])));
                                MR_hl_field(MR_mktag(1), Pieces_234, 1) = ((MR_Box) (Var_84));
                              }
                              {
                                Spec_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Spec_235, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_improve_arith_shift_cmp_ops\'/12"));
                                MR_hl_field(MR_mktag(1), Spec_235, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                MR_hl_field(MR_mktag(1), Spec_235, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
                                MR_hl_field(MR_mktag(1), Spec_235, 3) = ((MR_Box) (Context_232));
                                MR_hl_field(MR_mktag(1), Spec_235, 4) = ((MR_Box) (Pieces_234));
                              }
                              check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_235, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
                            }
                          }
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          MR_Word TypeCtorInfo_262_262;
                          MR_Word NumTargetBitsConstVar_47;
                          MR_Word NumTargetBitsConstGoal_48;
                          MR_Word PrivateBuiltin_49;
                          MR_Word InRangeTestGoal_50;
                          MR_Word TestConjGoalInfo_51;
                          MR_Word TestConjGoal_52;
                          MR_Word UncheckedShiftGoalExpr_53;
                          MR_Word UncheckedShiftGoal_54;
                          MR_String NotInRangeStr_55;
                          MR_Word ErrorMsgStrVar_56;
                          MR_Word ErrorMsgStrGoal_57;
                          MR_Word ExceptionType_58;
                          MR_Word ExceptionVar_59;
                          MR_Word ExceptionTypeCtor_60;
                          MR_Word ExceptionWrapperCtorSymName_61;
                          MR_Word ExceptionWrapperCtorConsId_62;
                          MR_Word WrapErrorMsgGoal_63;
                          MR_Word ThrowGoal_64;
                          MR_Word ThrowConjGoalInfo_65;
                          MR_Word ThrowConjGoal_66;
                          MR_Word STATE_VARIABLE_Info_138_138;
                          MR_String Var_139;
                          MR_Word Var_140;
                          MR_Word Var_141;
                          MR_Word Var_142;
                          MR_Word Var_143;
                          MR_Word Var_144;
                          MR_Word Var_145;
                          MR_Word Var_146;
                          MR_Word Var_147;
                          MR_Word Var_148;
                          MR_Word STATE_VARIABLE_Info_155_155;
                          MR_String Var_157;
                          MR_Integer Var_158;
                          MR_Word Var_159;
                          MR_Word Var_160;
                          MR_Word Var_161;
                          MR_String Var_162;
                          MR_Word Var_163;
                          MR_Word Var_164;
                          MR_Word Var_165;
                          MR_Word Var_166;
                          MR_Word Var_167;
                          MR_Word Var_168;
                          MR_Word Var_169;
                          MR_Word Var_170;
                          MR_Word Var_172;
                          MR_Word Var_173;
                          MR_Word Var_174;
                          MR_Word Var_175;
                          MR_Word Var_176;
                          MR_Word Var_177;
                          MR_Word Var_178;
                          MR_Word Var_179;
                          MR_Word Var_180;
                          MR_Word Context_248;
                          MR_String Var_2328;
                          MR_String Var_2329;
                          MR_String Var_2330;
                          MR_String Var_2331;

                          succeeded = mercury__builtin__semidet_fail_0_p_0();
                          if (succeeded)
                          {
                            Context_248 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_67);
                            check_hlds__simplify__simplify_goal_call__simplify_make_int_const_5_p_0(NumTargetBits_38, &NumTargetBitsConstVar_47, &NumTargetBitsConstGoal_48, STATE_VARIABLE_Info_0_69, &STATE_VARIABLE_Info_138_138);
                            PrivateBuiltin_49 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                            Var_139 = (MR_String) "unsigned_lt";
                            Var_140 = (MR_Integer) 0;
                            check_hlds__simplify__simplify_goal_call__simplify_make_cmp_goal_expr_8_p_0(STATE_VARIABLE_Info_138_138, PrivateBuiltin_49, Var_139, Var_140, Y_255, NumTargetBitsConstVar_47, Context_248, &InRangeTestGoal_50);
                            TypeCtorInfo_262_262 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                            Var_141 = parse_tree__set_of_var__make_singleton_1_f_0(TypeCtorInfo_262_262, Y_255);
                            Var_142 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                            Var_143 = (MR_Integer) 1;
                            Var_144 = (MR_Integer) 0;
                            hlds__hlds_goal__goal_info_init_6_p_0(Var_141, Var_142, Var_143, Var_144, Context_248, &TestConjGoalInfo_51);
                            Var_147 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_146, 0) = ((MR_Box) (InRangeTestGoal_50));
                              MR_hl_field(MR_mktag(1), Var_146, 1) = ((MR_Box) (Var_147));
                            }
                            {
                              Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) (NumTargetBitsConstGoal_48));
                              MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) (Var_146));
                            }
                            hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_145, TestConjGoalInfo_51, &TestConjGoal_52);
                            Var_148 = (MR_Integer) 0;
                            check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_138_138, ModuleName_15, (MR_String) "unchecked_left_shift", Var_148, X_254, Y_255, Z_256, &UncheckedShiftGoalExpr_53);
                            Var_2328 = (MR_String) "): second operand is out of range";
                            {
                              UncheckedShiftGoal_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), UncheckedShiftGoal_54, 0) = ((MR_Box) (UncheckedShiftGoalExpr_53));
                              MR_hl_field(MR_mktag(0), UncheckedShiftGoal_54, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_0_67));
                            }
                            Var_2329 = mercury__string__f_43_43_2_f_0(PredName_16, Var_2328);
                            Var_2330 = (MR_String) ".(";
                            Var_2331 = mercury__string__f_43_43_2_f_0(Var_2330, Var_2329);
                            NotInRangeStr_55 = mercury__string__f_43_43_2_f_0(ModuleName_15, Var_2331);
                            check_hlds__simplify__simplify_goal_call__simplify_make_string_const_5_p_0(NotInRangeStr_55, &ErrorMsgStrVar_56, &ErrorMsgStrGoal_57, STATE_VARIABLE_Info_138_138, &STATE_VARIABLE_Info_155_155);
                            ExceptionType_58 = parse_tree__builtin_lib_types__void_type_0_f_0();
                            check_hlds__simplify__simplify_goal_call__simplify_make_var_4_p_0(ExceptionType_58, &ExceptionVar_59, STATE_VARIABLE_Info_155_155, STATE_VARIABLE_Info_70);
                            parse_tree__prog_type__type_to_ctor_det_2_p_0(ExceptionType_58, &ExceptionTypeCtor_60);
                            Var_157 = (MR_String) "math_domain_error";
                            Var_158 = (MR_Integer) 1;
                            Var_160 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              ExceptionWrapperCtorSymName_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), ExceptionWrapperCtorSymName_61, 0) = ((MR_Box) (PrivateBuiltin_49));
                              MR_hl_field(MR_mktag(1), ExceptionWrapperCtorSymName_61, 1) = ((MR_Box) (Var_157));
                            }
                            {
                              ExceptionWrapperCtorConsId_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), ExceptionWrapperCtorConsId_62, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                              MR_hl_field(MR_mktag(3), ExceptionWrapperCtorConsId_62, 1) = ((MR_Box) (ExceptionWrapperCtorSymName_61));
                              MR_hl_field(MR_mktag(3), ExceptionWrapperCtorConsId_62, 2) = ((MR_Box) (Var_158));
                              MR_hl_field(MR_mktag(3), ExceptionWrapperCtorConsId_62, 3) = ((MR_Box) (ExceptionTypeCtor_60));
                            }
                            {
                              Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_159, 0) = ((MR_Box) (ErrorMsgStrVar_56));
                              MR_hl_field(MR_mktag(1), Var_159, 1) = ((MR_Box) (Var_160));
                            }
                            hlds__make_goal__construct_functor_4_p_0(ExceptionVar_59, ExceptionWrapperCtorConsId_62, Var_159, &WrapErrorMsgGoal_63);
                            Var_161 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
                            Var_162 = (MR_String) "throw";
                            Var_163 = (MR_Integer) 0;
                            Var_164 = (MR_Word) ((MR_Unsigned) 0U);
                            Var_165 = (MR_Integer) 6;
                            Var_166 = (MR_Integer) 0;
                            Var_168 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              Var_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_167, 0) = ((MR_Box) (ExceptionVar_59));
                              MR_hl_field(MR_mktag(1), Var_167, 1) = ((MR_Box) (Var_168));
                            }
                            Var_169 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                            Var_170 = mercury__term__dummy_context_init_0_f_0();
                            hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_23, Var_161, Var_162, Var_163, Var_164, Var_165, Var_166, Var_167, Var_168, Var_169, Var_170, &ThrowGoal_64);
                            Var_172 = parse_tree__set_of_var__init_0_f_0(TypeCtorInfo_262_262);
                            Var_173 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                            Var_174 = (MR_Integer) 6;
                            Var_175 = (MR_Integer) 0;
                            hlds__hlds_goal__goal_info_init_6_p_0(Var_172, Var_173, Var_174, Var_175, Context_248, &ThrowConjGoalInfo_65);
                            Var_179 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              Var_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_178, 0) = ((MR_Box) (ThrowGoal_64));
                              MR_hl_field(MR_mktag(1), Var_178, 1) = ((MR_Box) (Var_179));
                            }
                            {
                              Var_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_177, 0) = ((MR_Box) (WrapErrorMsgGoal_63));
                              MR_hl_field(MR_mktag(1), Var_177, 1) = ((MR_Box) (Var_178));
                            }
                            {
                              Var_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_176, 0) = ((MR_Box) (ErrorMsgStrGoal_57));
                              MR_hl_field(MR_mktag(1), Var_176, 1) = ((MR_Box) (Var_177));
                            }
                            hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_176, ThrowConjGoalInfo_65, &ThrowConjGoal_66);
                            Var_180 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                              *ImprovedGoalExpr_20 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_180));
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (TestConjGoal_52));
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (UncheckedShiftGoal_54));
                              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ThrowConjGoal_66));
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
                MR_Word Var_2189;
                MR_Word Var_2190;
                MR_Word Var_2191;
                MR_Word Var_2192;
                MR_Word ConsY_2227;
                MR_Word Z_2247;
                MR_Word InstY_2248;
                MR_Word Var_2256;
                MR_Word Var_2257;
                MR_Word Var_2258;
                MR_Word X_2275;
                MR_Word Y_2276;

                succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  X_2275 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 0))));
                  Var_2256 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 1))));
                  succeeded = (Var_2256 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Y_2276 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2256, (MR_Integer) 0))));
                    Var_2257 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2256, (MR_Integer) 1))));
                    succeeded = (Var_2257 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Z_2247 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2257, (MR_Integer) 0))));
                      Var_2258 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2257, (MR_Integer) 1))));
                      succeeded = (Var_2258 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_14, Y_2276, &InstY_2248);
                        succeeded = ((((MR_tag((MR_Word) InstY_2248)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstY_2248, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_2189 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstY_2248, (MR_Integer) 3))));
                          succeeded = (Var_2189 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_2190 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2189, (MR_Integer) 0))));
                            Var_2192 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2189, (MR_Integer) 1))));
                            succeeded = (Var_2192 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              ConsY_2227 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_2190, (MR_Integer) 0))));
                              Var_2191 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_2190, (MR_Integer) 1))));
                              succeeded = (Var_2191 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                succeeded = check_hlds__simplify__simplify_goal_call__is_zero_const_2_p_0(IntType_13, ConsY_2227);
                                if (succeeded)
                                {
                                  MR_Word Context_2193;
                                  MR_Word SymName_2194;
                                  MR_Word Pieces_2195;
                                  MR_Word Spec_2196;
                                  MR_Word Var_2197;
                                  MR_Word Var_2200;
                                  MR_Word Var_2201;

                                  *ImprovedGoalExpr_20 = GoalExpr0_19;
                                  Context_2193 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_67);
                                  {
                                    Var_2197 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(MR_mktag(0), Var_2197, 0) = ((MR_Box) (ModuleName_15));
                                  }
                                  {
                                    SymName_2194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), SymName_2194, 0) = ((MR_Box) (Var_2197));
                                    MR_hl_field(MR_mktag(1), SymName_2194, 1) = ((MR_Box) (PredName_16));
                                  }
                                  {
                                    Var_2201 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(3), Var_2201, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                                    MR_hl_field(MR_mktag(3), Var_2201, 1) = ((MR_Box) (SymName_2194));
                                  }
                                  {
                                    Var_2200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), Var_2200, 0) = ((MR_Box) (Var_2201));
                                    MR_hl_field(MR_mktag(1), Var_2200, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[76])));
                                  }
                                  {
                                    Pieces_2195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), Pieces_2195, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[74])));
                                    MR_hl_field(MR_mktag(1), Pieces_2195, 1) = ((MR_Box) (Var_2200));
                                  }
                                  {
                                    Spec_2196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), Spec_2196, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_improve_arith_shift_cmp_ops\'/12"));
                                    MR_hl_field(MR_mktag(1), Spec_2196, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                    MR_hl_field(MR_mktag(1), Spec_2196, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
                                    MR_hl_field(MR_mktag(1), Spec_2196, 3) = ((MR_Box) (Context_2193));
                                    MR_hl_field(MR_mktag(1), Spec_2196, 4) = ((MR_Box) (Pieces_2195));
                                  }
                                  check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_2196, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  MR_Word Var_2207;

                                  succeeded = check_hlds__simplify__simplify_goal_call__is_int_const_2_p_0(IntType_13, ConsY_2227);
                                  if (succeeded)
                                  {
                                    Var_2207 = (MR_Integer) 0;
                                    check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_69, ModuleName_15, (MR_String) "unchecked_rem", Var_2207, X_2275, Y_2276, Z_2247, ImprovedGoalExpr_20);
                                    *STATE_VARIABLE_Info_70 = STATE_VARIABLE_Info_0_69;
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
                MR_Word Var_181;
                MR_Word Var_182;
                MR_Word Var_183;
                MR_Word Var_184;
                MR_Word Var_185;
                MR_Word Var_186;
                MR_Word Var_187;
                MR_Word X_218;
                MR_Word Y_219;

                succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  X_218 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 0))));
                  Var_181 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 1))));
                  succeeded = (Var_181 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Y_219 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_181, (MR_Integer) 0))));
                    Var_182 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_181, (MR_Integer) 1))));
                    succeeded = (Var_182 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Z_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_182, (MR_Integer) 0))));
                      Var_183 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_182, (MR_Integer) 1))));
                      succeeded = (Var_183 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_14, Y_219, &InstY_30);
                        succeeded = ((((MR_tag((MR_Word) InstY_30)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstY_30, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_184 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstY_30, (MR_Integer) 3))));
                          succeeded = (Var_184 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_185 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_184, (MR_Integer) 0))));
                            Var_187 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_184, (MR_Integer) 1))));
                            succeeded = (Var_187 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              ConsY_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_185, (MR_Integer) 0))));
                              Var_186 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_185, (MR_Integer) 1))));
                              succeeded = (Var_186 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                succeeded = check_hlds__simplify__simplify_goal_call__is_zero_const_2_p_0(IntType_13, ConsY_33);
                                if (succeeded)
                                {
                                  MR_Word Context_34;
                                  MR_Word SymName_35;
                                  MR_Word Pieces_36;
                                  MR_Word Spec_37;
                                  MR_Word Var_188;
                                  MR_Word Var_191;
                                  MR_Word Var_192;

                                  *ImprovedGoalExpr_20 = GoalExpr0_19;
                                  Context_34 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_67);
                                  {
                                    Var_188 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(MR_mktag(0), Var_188, 0) = ((MR_Box) (ModuleName_15));
                                  }
                                  {
                                    SymName_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), SymName_35, 0) = ((MR_Box) (Var_188));
                                    MR_hl_field(MR_mktag(1), SymName_35, 1) = ((MR_Box) (PredName_16));
                                  }
                                  {
                                    Var_192 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(3), Var_192, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                                    MR_hl_field(MR_mktag(3), Var_192, 1) = ((MR_Box) (SymName_35));
                                  }
                                  {
                                    Var_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), Var_191, 0) = ((MR_Box) (Var_192));
                                    MR_hl_field(MR_mktag(1), Var_191, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[76])));
                                  }
                                  {
                                    Pieces_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), Pieces_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[74])));
                                    MR_hl_field(MR_mktag(1), Pieces_36, 1) = ((MR_Box) (Var_191));
                                  }
                                  {
                                    Spec_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), Spec_37, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_improve_arith_shift_cmp_ops\'/12"));
                                    MR_hl_field(MR_mktag(1), Spec_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                    MR_hl_field(MR_mktag(1), Spec_37, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
                                    MR_hl_field(MR_mktag(1), Spec_37, 3) = ((MR_Box) (Context_34));
                                    MR_hl_field(MR_mktag(1), Spec_37, 4) = ((MR_Box) (Pieces_36));
                                  }
                                  check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_37, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  MR_Word Var_204;

                                  succeeded = check_hlds__simplify__simplify_goal_call__is_int_const_2_p_0(IntType_13, ConsY_33);
                                  if (succeeded)
                                  {
                                    Var_204 = (MR_Integer) 0;
                                    check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_69, ModuleName_15, (MR_String) "unchecked_quotient", Var_204, X_218, Y_219, Z_29, ImprovedGoalExpr_20);
                                    *STATE_VARIABLE_Info_70 = STATE_VARIABLE_Info_0_69;
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
                *STATE_VARIABLE_Info_70 = STATE_VARIABLE_Info_0_69;
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 21:
            {
              // case "rem_bits_per_int"
              ;
              {
                MR_String Op_2277;
                MR_Word X_2278;
                MR_Word Y_2279;
                MR_Integer TargetBitsPerInt_2280;
                MR_Word Var_2281;
                MR_Word Var_2282;
                MR_Word Var_2283;

                succeeded = (IntType_13 == (MR_Integer) 0);
                if (succeeded)
                {
                  Op_2277 = (MR_String) "unchecked_rem";
                  succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    X_2278 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 0))));
                    Var_2281 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 1))));
                    succeeded = (Var_2281 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Y_2279 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2281, (MR_Integer) 0))));
                      Var_2282 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2281, (MR_Integer) 1))));
                      succeeded = (Var_2282 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        libs__int_emu__target_bits_per_int_2_p_0(Globals_24, &Var_2283);
                        TargetBitsPerInt_2280 = (MR_Integer) (Var_2283);
                        check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_9_p_0(ModuleName_15, Op_2277, X_2278, TargetBitsPerInt_2280, Y_2279, ImprovedGoalExpr_20, STATE_VARIABLE_GoalInfo_0_67, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
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
                MR_Integer NumTargetBits_1429;
                MR_Word Var_1458;
                MR_Word Var_1459;
                MR_Word Var_1460;
                MR_Word X_1570;
                MR_Word Y_1571;
                MR_Word Z_1572;
                MR_Word InstY_1573;
                MR_Word YConst_1294;
                MR_Word Var_975;
                MR_Word Var_976;
                MR_Word Var_977;
                MR_Word Var_978;
                MR_Word Var_979;

                succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  X_1570 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 0))));
                  Var_1458 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 1))));
                  succeeded = (Var_1458 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Y_1571 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1458, (MR_Integer) 0))));
                    Var_1459 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1458, (MR_Integer) 1))));
                    succeeded = (Var_1459 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Z_1572 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1459, (MR_Integer) 0))));
                      Var_1460 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1459, (MR_Integer) 1))));
                      succeeded = (Var_1460 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        NumTargetBits_1429 = check_hlds__simplify__simplify_goal_call__int_type_target_bits_2_f_0(Globals_24, IntType_13);
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_14, Y_1571, &InstY_1573);
                        succeeded = ((((MR_tag((MR_Word) InstY_1573)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstY_1573, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_975 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstY_1573, (MR_Integer) 3))));
                          succeeded = (Var_975 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_976 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_975, (MR_Integer) 0))));
                            Var_979 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_975, (MR_Integer) 1))));
                            succeeded = (Var_979 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              Var_977 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_976, (MR_Integer) 0))));
                              Var_978 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_976, (MR_Integer) 1))));
                              succeeded = (Var_978 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_977)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_977, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                if (succeeded)
                                {
                                  YConst_1294 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_977, (MR_Integer) 1))));
                                  if (((MR_tag((MR_Word) YConst_1294)) == (MR_Integer) 0))
                                    succeeded = MR_TRUE;
                                  else
                                  if (((MR_tag((MR_Word) YConst_1294)) == (MR_Integer) 1))
                                    succeeded = MR_TRUE;
                                  else
                                    succeeded = MR_FALSE;
                                }
                              }
                            }
                          }
                        }
                        if (succeeded)
                        {
                          if (((MR_tag((MR_Word) YConst_1294)) == (MR_Integer) 0))
                          {
                            MR_Integer YIntVal_1054 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), YConst_1294, (MR_Integer) 0))));

                            succeeded = ((MR_Integer) 0 <= YIntVal_1054);
                            if (succeeded)
                              succeeded = (YIntVal_1054 < NumTargetBits_1429);
                            if (succeeded)
                            {
                              check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_69, ModuleName_15, (MR_String) "unchecked_right_shift", (MR_Integer) 0, X_1570, Y_1571, Z_1572, ImprovedGoalExpr_20);
                              *STATE_VARIABLE_Info_70 = STATE_VARIABLE_Info_0_69;
                            }
                            else
                            {
                              MR_String Exclusive_982;
                              MR_Word Var_983;
                              MR_Word Var_990;
                              MR_Word Var_991;
                              MR_Word Var_992;
                              MR_Word Var_995;
                              MR_Word Var_998;
                              MR_Word Var_1001;
                              MR_Word Var_1004;
                              MR_Word Var_1005;
                              MR_Word Context_1013;
                              MR_Word SymName_1014;
                              MR_Word Pieces_1015;
                              MR_Word Spec_1016;
                              MR_String Var_2297;

                              *ImprovedGoalExpr_20 = GoalExpr0_19;
                              Context_1013 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_67);
                              {
                                Var_983 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), Var_983, 0) = ((MR_Box) (ModuleName_15));
                              }
                              {
                                SymName_1014 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), SymName_1014, 0) = ((MR_Box) (Var_983));
                                MR_hl_field(MR_mktag(1), SymName_1014, 1) = ((MR_Box) (PredName_16));
                              }
                              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_2[3]), NumTargetBits_1429, &Var_2297);
                              Exclusive_982 = mercury__string__f_43_43_2_f_0(Var_2297, (MR_String) " (exclusive).");
                              {
                                Var_991 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), Var_991, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                                MR_hl_field(MR_mktag(3), Var_991, 1) = ((MR_Box) (SymName_1014));
                              }
                              {
                                Var_1005 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(2), Var_1005, 0) = ((MR_Box) (Exclusive_982));
                              }
                              {
                                Var_1004 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_1004, 0) = ((MR_Box) (Var_1005));
                                MR_hl_field(MR_mktag(1), Var_1004, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[3])));
                              }
                              {
                                Var_1001 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_1001, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[79])));
                                MR_hl_field(MR_mktag(1), Var_1001, 1) = ((MR_Box) (Var_1004));
                              }
                              {
                                Var_998 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_998, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_2[4])));
                                MR_hl_field(MR_mktag(1), Var_998, 1) = ((MR_Box) (Var_1001));
                              }
                              {
                                Var_995 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_995, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[78])));
                                MR_hl_field(MR_mktag(1), Var_995, 1) = ((MR_Box) (Var_998));
                              }
                              {
                                Var_992 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_992, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[77])));
                                MR_hl_field(MR_mktag(1), Var_992, 1) = ((MR_Box) (Var_995));
                              }
                              {
                                Var_990 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_990, 0) = ((MR_Box) (Var_991));
                                MR_hl_field(MR_mktag(1), Var_990, 1) = ((MR_Box) (Var_992));
                              }
                              {
                                Pieces_1015 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Pieces_1015, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[74])));
                                MR_hl_field(MR_mktag(1), Pieces_1015, 1) = ((MR_Box) (Var_990));
                              }
                              {
                                Spec_1016 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Spec_1016, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_improve_arith_shift_cmp_ops\'/12"));
                                MR_hl_field(MR_mktag(1), Spec_1016, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                MR_hl_field(MR_mktag(1), Spec_1016, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
                                MR_hl_field(MR_mktag(1), Spec_1016, 3) = ((MR_Box) (Context_1013));
                                MR_hl_field(MR_mktag(1), Spec_1016, 4) = ((MR_Box) (Pieces_1015));
                              }
                              check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_1016, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
                            }
                          }
                          else
                          {
                            MR_Unsigned YUintVal_1140 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), YConst_1294, (MR_Integer) 0))));
                            MR_Unsigned Var_1092;

                            Var_1092 = mercury__uint__det_from_int_1_f_0(NumTargetBits_1429);
                            succeeded = (YUintVal_1140 < Var_1092);
                            if (succeeded)
                            {
                              check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_69, ModuleName_15, (MR_String) "unchecked_right_shift", (MR_Integer) 0, X_1570, Y_1571, Z_1572, ImprovedGoalExpr_20);
                              *STATE_VARIABLE_Info_70 = STATE_VARIABLE_Info_0_69;
                            }
                            else
                            {
                              MR_Word Var_1094;
                              MR_Word Var_1097;
                              MR_Word Var_1098;
                              MR_Word Var_1099;
                              MR_Word Var_1102;
                              MR_Word Var_1105;
                              MR_Word Var_1106;
                              MR_Word Context_1112;
                              MR_Word SymName_1113;
                              MR_Word Pieces_1114;
                              MR_Word Spec_1115;

                              *ImprovedGoalExpr_20 = GoalExpr0_19;
                              Context_1112 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_67);
                              {
                                Var_1094 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), Var_1094, 0) = ((MR_Box) (ModuleName_15));
                              }
                              {
                                SymName_1113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), SymName_1113, 0) = ((MR_Box) (Var_1094));
                                MR_hl_field(MR_mktag(1), SymName_1113, 1) = ((MR_Box) (PredName_16));
                              }
                              {
                                Var_1098 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), Var_1098, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                                MR_hl_field(MR_mktag(3), Var_1098, 1) = ((MR_Box) (SymName_1113));
                              }
                              {
                                Var_1106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), Var_1106, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                                MR_hl_field(MR_mktag(3), Var_1106, 1) = ((MR_Box) (NumTargetBits_1429));
                              }
                              {
                                Var_1105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_1105, 0) = ((MR_Box) (Var_1106));
                                MR_hl_field(MR_mktag(1), Var_1105, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[18])));
                              }
                              {
                                Var_1102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_1102, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[81])));
                                MR_hl_field(MR_mktag(1), Var_1102, 1) = ((MR_Box) (Var_1105));
                              }
                              {
                                Var_1099 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_1099, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[80])));
                                MR_hl_field(MR_mktag(1), Var_1099, 1) = ((MR_Box) (Var_1102));
                              }
                              {
                                Var_1097 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_1097, 0) = ((MR_Box) (Var_1098));
                                MR_hl_field(MR_mktag(1), Var_1097, 1) = ((MR_Box) (Var_1099));
                              }
                              {
                                Pieces_1114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Pieces_1114, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[74])));
                                MR_hl_field(MR_mktag(1), Pieces_1114, 1) = ((MR_Box) (Var_1097));
                              }
                              {
                                Spec_1115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Spec_1115, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_improve_arith_shift_cmp_ops\'/12"));
                                MR_hl_field(MR_mktag(1), Spec_1115, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                MR_hl_field(MR_mktag(1), Spec_1115, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
                                MR_hl_field(MR_mktag(1), Spec_1115, 3) = ((MR_Box) (Context_1112));
                                MR_hl_field(MR_mktag(1), Spec_1115, 4) = ((MR_Box) (Pieces_1114));
                              }
                              check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_1115, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
                            }
                          }
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          MR_Word TypeCtorInfo_262_1291;
                          MR_Word NumTargetBitsConstVar_1228;
                          MR_Word NumTargetBitsConstGoal_1229;
                          MR_Word PrivateBuiltin_1230;
                          MR_Word InRangeTestGoal_1231;
                          MR_Word TestConjGoalInfo_1232;
                          MR_Word TestConjGoal_1233;
                          MR_Word UncheckedShiftGoalExpr_1234;
                          MR_Word UncheckedShiftGoal_1235;
                          MR_String NotInRangeStr_1236;
                          MR_Word ErrorMsgStrVar_1237;
                          MR_Word ErrorMsgStrGoal_1238;
                          MR_Word ExceptionType_1239;
                          MR_Word ExceptionVar_1240;
                          MR_Word ExceptionTypeCtor_1241;
                          MR_Word ExceptionWrapperCtorSymName_1242;
                          MR_Word ExceptionWrapperCtorConsId_1243;
                          MR_Word WrapErrorMsgGoal_1244;
                          MR_Word ThrowGoal_1245;
                          MR_Word ThrowConjGoalInfo_1246;
                          MR_Word ThrowConjGoal_1247;
                          MR_Word STATE_VARIABLE_Info_138_1248;
                          MR_String Var_1249;
                          MR_Word Var_1250;
                          MR_Word Var_1251;
                          MR_Word Var_1252;
                          MR_Word Var_1253;
                          MR_Word Var_1254;
                          MR_Word Var_1255;
                          MR_Word Var_1256;
                          MR_Word Var_1257;
                          MR_Word Var_1258;
                          MR_Word STATE_VARIABLE_Info_155_1265;
                          MR_String Var_1266;
                          MR_Integer Var_1267;
                          MR_Word Var_1268;
                          MR_Word Var_1269;
                          MR_Word Var_1270;
                          MR_String Var_1271;
                          MR_Word Var_1272;
                          MR_Word Var_1273;
                          MR_Word Var_1274;
                          MR_Word Var_1275;
                          MR_Word Var_1276;
                          MR_Word Var_1277;
                          MR_Word Var_1278;
                          MR_Word Var_1279;
                          MR_Word Var_1281;
                          MR_Word Var_1282;
                          MR_Word Var_1283;
                          MR_Word Var_1284;
                          MR_Word Var_1285;
                          MR_Word Var_1286;
                          MR_Word Var_1287;
                          MR_Word Var_1288;
                          MR_Word Var_1289;
                          MR_Word Context_1290;
                          MR_String Var_2304;
                          MR_String Var_2305;
                          MR_String Var_2306;
                          MR_String Var_2307;

                          succeeded = mercury__builtin__semidet_fail_0_p_0();
                          if (succeeded)
                          {
                            Context_1290 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_67);
                            check_hlds__simplify__simplify_goal_call__simplify_make_int_const_5_p_0(NumTargetBits_1429, &NumTargetBitsConstVar_1228, &NumTargetBitsConstGoal_1229, STATE_VARIABLE_Info_0_69, &STATE_VARIABLE_Info_138_1248);
                            PrivateBuiltin_1230 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                            Var_1249 = (MR_String) "unsigned_lt";
                            Var_1250 = (MR_Integer) 0;
                            check_hlds__simplify__simplify_goal_call__simplify_make_cmp_goal_expr_8_p_0(STATE_VARIABLE_Info_138_1248, PrivateBuiltin_1230, Var_1249, Var_1250, Y_1571, NumTargetBitsConstVar_1228, Context_1290, &InRangeTestGoal_1231);
                            TypeCtorInfo_262_1291 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                            Var_1251 = parse_tree__set_of_var__make_singleton_1_f_0(TypeCtorInfo_262_1291, Y_1571);
                            Var_1252 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                            Var_1253 = (MR_Integer) 1;
                            Var_1254 = (MR_Integer) 0;
                            hlds__hlds_goal__goal_info_init_6_p_0(Var_1251, Var_1252, Var_1253, Var_1254, Context_1290, &TestConjGoalInfo_1232);
                            Var_1257 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              Var_1256 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_1256, 0) = ((MR_Box) (InRangeTestGoal_1231));
                              MR_hl_field(MR_mktag(1), Var_1256, 1) = ((MR_Box) (Var_1257));
                            }
                            {
                              Var_1255 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_1255, 0) = ((MR_Box) (NumTargetBitsConstGoal_1229));
                              MR_hl_field(MR_mktag(1), Var_1255, 1) = ((MR_Box) (Var_1256));
                            }
                            hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_1255, TestConjGoalInfo_1232, &TestConjGoal_1233);
                            Var_1258 = (MR_Integer) 0;
                            check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_138_1248, ModuleName_15, (MR_String) "unchecked_right_shift", Var_1258, X_1570, Y_1571, Z_1572, &UncheckedShiftGoalExpr_1234);
                            Var_2304 = (MR_String) "): second operand is out of range";
                            {
                              UncheckedShiftGoal_1235 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), UncheckedShiftGoal_1235, 0) = ((MR_Box) (UncheckedShiftGoalExpr_1234));
                              MR_hl_field(MR_mktag(0), UncheckedShiftGoal_1235, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_0_67));
                            }
                            Var_2305 = mercury__string__f_43_43_2_f_0(PredName_16, Var_2304);
                            Var_2306 = (MR_String) ".(";
                            Var_2307 = mercury__string__f_43_43_2_f_0(Var_2306, Var_2305);
                            NotInRangeStr_1236 = mercury__string__f_43_43_2_f_0(ModuleName_15, Var_2307);
                            check_hlds__simplify__simplify_goal_call__simplify_make_string_const_5_p_0(NotInRangeStr_1236, &ErrorMsgStrVar_1237, &ErrorMsgStrGoal_1238, STATE_VARIABLE_Info_138_1248, &STATE_VARIABLE_Info_155_1265);
                            ExceptionType_1239 = parse_tree__builtin_lib_types__void_type_0_f_0();
                            check_hlds__simplify__simplify_goal_call__simplify_make_var_4_p_0(ExceptionType_1239, &ExceptionVar_1240, STATE_VARIABLE_Info_155_1265, STATE_VARIABLE_Info_70);
                            parse_tree__prog_type__type_to_ctor_det_2_p_0(ExceptionType_1239, &ExceptionTypeCtor_1241);
                            Var_1266 = (MR_String) "math_domain_error";
                            Var_1267 = (MR_Integer) 1;
                            Var_1269 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              ExceptionWrapperCtorSymName_1242 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), ExceptionWrapperCtorSymName_1242, 0) = ((MR_Box) (PrivateBuiltin_1230));
                              MR_hl_field(MR_mktag(1), ExceptionWrapperCtorSymName_1242, 1) = ((MR_Box) (Var_1266));
                            }
                            {
                              ExceptionWrapperCtorConsId_1243 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), ExceptionWrapperCtorConsId_1243, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                              MR_hl_field(MR_mktag(3), ExceptionWrapperCtorConsId_1243, 1) = ((MR_Box) (ExceptionWrapperCtorSymName_1242));
                              MR_hl_field(MR_mktag(3), ExceptionWrapperCtorConsId_1243, 2) = ((MR_Box) (Var_1267));
                              MR_hl_field(MR_mktag(3), ExceptionWrapperCtorConsId_1243, 3) = ((MR_Box) (ExceptionTypeCtor_1241));
                            }
                            {
                              Var_1268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_1268, 0) = ((MR_Box) (ErrorMsgStrVar_1237));
                              MR_hl_field(MR_mktag(1), Var_1268, 1) = ((MR_Box) (Var_1269));
                            }
                            hlds__make_goal__construct_functor_4_p_0(ExceptionVar_1240, ExceptionWrapperCtorConsId_1243, Var_1268, &WrapErrorMsgGoal_1244);
                            Var_1270 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
                            Var_1271 = (MR_String) "throw";
                            Var_1272 = (MR_Integer) 0;
                            Var_1273 = (MR_Word) ((MR_Unsigned) 0U);
                            Var_1274 = (MR_Integer) 6;
                            Var_1275 = (MR_Integer) 0;
                            Var_1277 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              Var_1276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_1276, 0) = ((MR_Box) (ExceptionVar_1240));
                              MR_hl_field(MR_mktag(1), Var_1276, 1) = ((MR_Box) (Var_1277));
                            }
                            Var_1278 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                            Var_1279 = mercury__term__dummy_context_init_0_f_0();
                            hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_23, Var_1270, Var_1271, Var_1272, Var_1273, Var_1274, Var_1275, Var_1276, Var_1277, Var_1278, Var_1279, &ThrowGoal_1245);
                            Var_1281 = parse_tree__set_of_var__init_0_f_0(TypeCtorInfo_262_1291);
                            Var_1282 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                            Var_1283 = (MR_Integer) 6;
                            Var_1284 = (MR_Integer) 0;
                            hlds__hlds_goal__goal_info_init_6_p_0(Var_1281, Var_1282, Var_1283, Var_1284, Context_1290, &ThrowConjGoalInfo_1246);
                            Var_1288 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              Var_1287 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_1287, 0) = ((MR_Box) (ThrowGoal_1245));
                              MR_hl_field(MR_mktag(1), Var_1287, 1) = ((MR_Box) (Var_1288));
                            }
                            {
                              Var_1286 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_1286, 0) = ((MR_Box) (WrapErrorMsgGoal_1244));
                              MR_hl_field(MR_mktag(1), Var_1286, 1) = ((MR_Box) (Var_1287));
                            }
                            {
                              Var_1285 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_1285, 0) = ((MR_Box) (ErrorMsgStrGoal_1238));
                              MR_hl_field(MR_mktag(1), Var_1285, 1) = ((MR_Box) (Var_1286));
                            }
                            hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_1285, ThrowConjGoalInfo_1246, &ThrowConjGoal_1247);
                            Var_1289 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                              *ImprovedGoalExpr_20 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_1289));
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (TestConjGoal_1233));
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (UncheckedShiftGoal_1235));
                              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ThrowConjGoal_1247));
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
                MR_Word Var_267;
                MR_Word Var_268;
                MR_Word Var_269;
                MR_Word Var_270;
                MR_Word ConsY_305;
                MR_Word Z_325;
                MR_Word InstY_326;
                MR_Word Var_334;
                MR_Word Var_335;
                MR_Word Var_336;
                MR_Word X_353;
                MR_Word Y_354;

                succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  X_353 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 0))));
                  Var_334 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 1))));
                  succeeded = (Var_334 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Y_354 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_334, (MR_Integer) 0))));
                    Var_335 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_334, (MR_Integer) 1))));
                    succeeded = (Var_335 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Z_325 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_335, (MR_Integer) 0))));
                      Var_336 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_335, (MR_Integer) 1))));
                      succeeded = (Var_336 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_14, Y_354, &InstY_326);
                        succeeded = ((((MR_tag((MR_Word) InstY_326)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstY_326, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_267 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstY_326, (MR_Integer) 3))));
                          succeeded = (Var_267 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_268 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_267, (MR_Integer) 0))));
                            Var_270 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_267, (MR_Integer) 1))));
                            succeeded = (Var_270 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              ConsY_305 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_268, (MR_Integer) 0))));
                              Var_269 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_268, (MR_Integer) 1))));
                              succeeded = (Var_269 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                succeeded = check_hlds__simplify__simplify_goal_call__is_zero_const_2_p_0(IntType_13, ConsY_305);
                                if (succeeded)
                                {
                                  MR_Word Context_271;
                                  MR_Word SymName_272;
                                  MR_Word Pieces_273;
                                  MR_Word Spec_274;
                                  MR_Word Var_275;
                                  MR_Word Var_278;
                                  MR_Word Var_279;

                                  *ImprovedGoalExpr_20 = GoalExpr0_19;
                                  Context_271 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_67);
                                  {
                                    Var_275 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(MR_mktag(0), Var_275, 0) = ((MR_Box) (ModuleName_15));
                                  }
                                  {
                                    SymName_272 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), SymName_272, 0) = ((MR_Box) (Var_275));
                                    MR_hl_field(MR_mktag(1), SymName_272, 1) = ((MR_Box) (PredName_16));
                                  }
                                  {
                                    Var_279 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(3), Var_279, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                                    MR_hl_field(MR_mktag(3), Var_279, 1) = ((MR_Box) (SymName_272));
                                  }
                                  {
                                    Var_278 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), Var_278, 0) = ((MR_Box) (Var_279));
                                    MR_hl_field(MR_mktag(1), Var_278, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[76])));
                                  }
                                  {
                                    Pieces_273 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), Pieces_273, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[74])));
                                    MR_hl_field(MR_mktag(1), Pieces_273, 1) = ((MR_Box) (Var_278));
                                  }
                                  {
                                    Spec_274 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), Spec_274, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_improve_arith_shift_cmp_ops\'/12"));
                                    MR_hl_field(MR_mktag(1), Spec_274, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                    MR_hl_field(MR_mktag(1), Spec_274, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
                                    MR_hl_field(MR_mktag(1), Spec_274, 3) = ((MR_Box) (Context_271));
                                    MR_hl_field(MR_mktag(1), Spec_274, 4) = ((MR_Box) (Pieces_273));
                                  }
                                  check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_274, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  MR_Word Var_285;

                                  succeeded = check_hlds__simplify__simplify_goal_call__is_int_const_2_p_0(IntType_13, ConsY_305);
                                  if (succeeded)
                                  {
                                    Var_285 = (MR_Integer) 0;
                                    check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_69, ModuleName_15, (MR_String) "unchecked_quotient", Var_285, X_353, Y_354, Z_325, ImprovedGoalExpr_20);
                                    *STATE_VARIABLE_Info_70 = STATE_VARIABLE_Info_0_69;
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
                MR_Integer NumTargetBits_2039;
                MR_Word Var_2068;
                MR_Word Var_2069;
                MR_Word Var_2070;
                MR_Word X_2180;
                MR_Word Y_2181;
                MR_Word Z_2182;
                MR_Word InstY_2183;
                MR_Word YConst_1904;
                MR_Word Var_1585;
                MR_Word Var_1586;
                MR_Word Var_1587;
                MR_Word Var_1588;
                MR_Word Var_1589;

                succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  X_2180 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 0))));
                  Var_2068 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 1))));
                  succeeded = (Var_2068 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Y_2181 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2068, (MR_Integer) 0))));
                    Var_2069 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2068, (MR_Integer) 1))));
                    succeeded = (Var_2069 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Z_2182 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2069, (MR_Integer) 0))));
                      Var_2070 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_2069, (MR_Integer) 1))));
                      succeeded = (Var_2070 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        NumTargetBits_2039 = check_hlds__simplify__simplify_goal_call__int_type_target_bits_2_f_0(Globals_24, IntType_13);
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_14, Y_2181, &InstY_2183);
                        succeeded = ((((MR_tag((MR_Word) InstY_2183)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstY_2183, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_1585 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstY_2183, (MR_Integer) 3))));
                          succeeded = (Var_1585 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_1586 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1585, (MR_Integer) 0))));
                            Var_1589 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1585, (MR_Integer) 1))));
                            succeeded = (Var_1589 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              Var_1587 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_1586, (MR_Integer) 0))));
                              Var_1588 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_1586, (MR_Integer) 1))));
                              succeeded = (Var_1588 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_1587)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_1587, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                if (succeeded)
                                {
                                  YConst_1904 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_1587, (MR_Integer) 1))));
                                  if (((MR_tag((MR_Word) YConst_1904)) == (MR_Integer) 0))
                                    succeeded = MR_TRUE;
                                  else
                                  if (((MR_tag((MR_Word) YConst_1904)) == (MR_Integer) 1))
                                    succeeded = MR_TRUE;
                                  else
                                    succeeded = MR_FALSE;
                                }
                              }
                            }
                          }
                        }
                        if (succeeded)
                        {
                          if (((MR_tag((MR_Word) YConst_1904)) == (MR_Integer) 0))
                          {
                            MR_Integer YIntVal_1664 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), YConst_1904, (MR_Integer) 0))));

                            succeeded = ((MR_Integer) 0 <= YIntVal_1664);
                            if (succeeded)
                              succeeded = (YIntVal_1664 < NumTargetBits_2039);
                            if (succeeded)
                            {
                              check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_69, ModuleName_15, (MR_String) "unchecked_right_ushift", (MR_Integer) 0, X_2180, Y_2181, Z_2182, ImprovedGoalExpr_20);
                              *STATE_VARIABLE_Info_70 = STATE_VARIABLE_Info_0_69;
                            }
                            else
                            {
                              MR_String Exclusive_1592;
                              MR_Word Var_1593;
                              MR_Word Var_1600;
                              MR_Word Var_1601;
                              MR_Word Var_1602;
                              MR_Word Var_1605;
                              MR_Word Var_1608;
                              MR_Word Var_1611;
                              MR_Word Var_1614;
                              MR_Word Var_1615;
                              MR_Word Context_1623;
                              MR_Word SymName_1624;
                              MR_Word Pieces_1625;
                              MR_Word Spec_1626;
                              MR_String Var_2285;

                              *ImprovedGoalExpr_20 = GoalExpr0_19;
                              Context_1623 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_67);
                              {
                                Var_1593 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), Var_1593, 0) = ((MR_Box) (ModuleName_15));
                              }
                              {
                                SymName_1624 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), SymName_1624, 0) = ((MR_Box) (Var_1593));
                                MR_hl_field(MR_mktag(1), SymName_1624, 1) = ((MR_Box) (PredName_16));
                              }
                              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_2[3]), NumTargetBits_2039, &Var_2285);
                              Exclusive_1592 = mercury__string__f_43_43_2_f_0(Var_2285, (MR_String) " (exclusive).");
                              {
                                Var_1601 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), Var_1601, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                                MR_hl_field(MR_mktag(3), Var_1601, 1) = ((MR_Box) (SymName_1624));
                              }
                              {
                                Var_1615 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(2), Var_1615, 0) = ((MR_Box) (Exclusive_1592));
                              }
                              {
                                Var_1614 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_1614, 0) = ((MR_Box) (Var_1615));
                                MR_hl_field(MR_mktag(1), Var_1614, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[3])));
                              }
                              {
                                Var_1611 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_1611, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[79])));
                                MR_hl_field(MR_mktag(1), Var_1611, 1) = ((MR_Box) (Var_1614));
                              }
                              {
                                Var_1608 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_1608, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_2[4])));
                                MR_hl_field(MR_mktag(1), Var_1608, 1) = ((MR_Box) (Var_1611));
                              }
                              {
                                Var_1605 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_1605, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[78])));
                                MR_hl_field(MR_mktag(1), Var_1605, 1) = ((MR_Box) (Var_1608));
                              }
                              {
                                Var_1602 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_1602, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[77])));
                                MR_hl_field(MR_mktag(1), Var_1602, 1) = ((MR_Box) (Var_1605));
                              }
                              {
                                Var_1600 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_1600, 0) = ((MR_Box) (Var_1601));
                                MR_hl_field(MR_mktag(1), Var_1600, 1) = ((MR_Box) (Var_1602));
                              }
                              {
                                Pieces_1625 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Pieces_1625, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[74])));
                                MR_hl_field(MR_mktag(1), Pieces_1625, 1) = ((MR_Box) (Var_1600));
                              }
                              {
                                Spec_1626 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Spec_1626, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_improve_arith_shift_cmp_ops\'/12"));
                                MR_hl_field(MR_mktag(1), Spec_1626, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                MR_hl_field(MR_mktag(1), Spec_1626, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
                                MR_hl_field(MR_mktag(1), Spec_1626, 3) = ((MR_Box) (Context_1623));
                                MR_hl_field(MR_mktag(1), Spec_1626, 4) = ((MR_Box) (Pieces_1625));
                              }
                              check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_1626, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
                            }
                          }
                          else
                          {
                            MR_Unsigned YUintVal_1750 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), YConst_1904, (MR_Integer) 0))));
                            MR_Unsigned Var_1702;

                            Var_1702 = mercury__uint__det_from_int_1_f_0(NumTargetBits_2039);
                            succeeded = (YUintVal_1750 < Var_1702);
                            if (succeeded)
                            {
                              check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_69, ModuleName_15, (MR_String) "unchecked_right_ushift", (MR_Integer) 0, X_2180, Y_2181, Z_2182, ImprovedGoalExpr_20);
                              *STATE_VARIABLE_Info_70 = STATE_VARIABLE_Info_0_69;
                            }
                            else
                            {
                              MR_Word Var_1704;
                              MR_Word Var_1707;
                              MR_Word Var_1708;
                              MR_Word Var_1709;
                              MR_Word Var_1712;
                              MR_Word Var_1715;
                              MR_Word Var_1716;
                              MR_Word Context_1722;
                              MR_Word SymName_1723;
                              MR_Word Pieces_1724;
                              MR_Word Spec_1725;

                              *ImprovedGoalExpr_20 = GoalExpr0_19;
                              Context_1722 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_67);
                              {
                                Var_1704 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), Var_1704, 0) = ((MR_Box) (ModuleName_15));
                              }
                              {
                                SymName_1723 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), SymName_1723, 0) = ((MR_Box) (Var_1704));
                                MR_hl_field(MR_mktag(1), SymName_1723, 1) = ((MR_Box) (PredName_16));
                              }
                              {
                                Var_1708 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), Var_1708, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                                MR_hl_field(MR_mktag(3), Var_1708, 1) = ((MR_Box) (SymName_1723));
                              }
                              {
                                Var_1716 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), Var_1716, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                                MR_hl_field(MR_mktag(3), Var_1716, 1) = ((MR_Box) (NumTargetBits_2039));
                              }
                              {
                                Var_1715 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_1715, 0) = ((MR_Box) (Var_1716));
                                MR_hl_field(MR_mktag(1), Var_1715, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[18])));
                              }
                              {
                                Var_1712 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_1712, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[81])));
                                MR_hl_field(MR_mktag(1), Var_1712, 1) = ((MR_Box) (Var_1715));
                              }
                              {
                                Var_1709 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_1709, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[80])));
                                MR_hl_field(MR_mktag(1), Var_1709, 1) = ((MR_Box) (Var_1712));
                              }
                              {
                                Var_1707 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_1707, 0) = ((MR_Box) (Var_1708));
                                MR_hl_field(MR_mktag(1), Var_1707, 1) = ((MR_Box) (Var_1709));
                              }
                              {
                                Pieces_1724 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Pieces_1724, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[74])));
                                MR_hl_field(MR_mktag(1), Pieces_1724, 1) = ((MR_Box) (Var_1707));
                              }
                              {
                                Spec_1725 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Spec_1725, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_improve_arith_shift_cmp_ops\'/12"));
                                MR_hl_field(MR_mktag(1), Spec_1725, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                MR_hl_field(MR_mktag(1), Spec_1725, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
                                MR_hl_field(MR_mktag(1), Spec_1725, 3) = ((MR_Box) (Context_1722));
                                MR_hl_field(MR_mktag(1), Spec_1725, 4) = ((MR_Box) (Pieces_1724));
                              }
                              check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_1725, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
                            }
                          }
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          MR_Word TypeCtorInfo_262_1901;
                          MR_Word NumTargetBitsConstVar_1838;
                          MR_Word NumTargetBitsConstGoal_1839;
                          MR_Word PrivateBuiltin_1840;
                          MR_Word InRangeTestGoal_1841;
                          MR_Word TestConjGoalInfo_1842;
                          MR_Word TestConjGoal_1843;
                          MR_Word UncheckedShiftGoalExpr_1844;
                          MR_Word UncheckedShiftGoal_1845;
                          MR_String NotInRangeStr_1846;
                          MR_Word ErrorMsgStrVar_1847;
                          MR_Word ErrorMsgStrGoal_1848;
                          MR_Word ExceptionType_1849;
                          MR_Word ExceptionVar_1850;
                          MR_Word ExceptionTypeCtor_1851;
                          MR_Word ExceptionWrapperCtorSymName_1852;
                          MR_Word ExceptionWrapperCtorConsId_1853;
                          MR_Word WrapErrorMsgGoal_1854;
                          MR_Word ThrowGoal_1855;
                          MR_Word ThrowConjGoalInfo_1856;
                          MR_Word ThrowConjGoal_1857;
                          MR_Word STATE_VARIABLE_Info_138_1858;
                          MR_String Var_1859;
                          MR_Word Var_1860;
                          MR_Word Var_1861;
                          MR_Word Var_1862;
                          MR_Word Var_1863;
                          MR_Word Var_1864;
                          MR_Word Var_1865;
                          MR_Word Var_1866;
                          MR_Word Var_1867;
                          MR_Word Var_1868;
                          MR_Word STATE_VARIABLE_Info_155_1875;
                          MR_String Var_1876;
                          MR_Integer Var_1877;
                          MR_Word Var_1878;
                          MR_Word Var_1879;
                          MR_Word Var_1880;
                          MR_String Var_1881;
                          MR_Word Var_1882;
                          MR_Word Var_1883;
                          MR_Word Var_1884;
                          MR_Word Var_1885;
                          MR_Word Var_1886;
                          MR_Word Var_1887;
                          MR_Word Var_1888;
                          MR_Word Var_1889;
                          MR_Word Var_1891;
                          MR_Word Var_1892;
                          MR_Word Var_1893;
                          MR_Word Var_1894;
                          MR_Word Var_1895;
                          MR_Word Var_1896;
                          MR_Word Var_1897;
                          MR_Word Var_1898;
                          MR_Word Var_1899;
                          MR_Word Context_1900;
                          MR_String Var_2292;
                          MR_String Var_2293;
                          MR_String Var_2294;
                          MR_String Var_2295;

                          succeeded = mercury__builtin__semidet_fail_0_p_0();
                          if (succeeded)
                          {
                            Context_1900 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_67);
                            check_hlds__simplify__simplify_goal_call__simplify_make_int_const_5_p_0(NumTargetBits_2039, &NumTargetBitsConstVar_1838, &NumTargetBitsConstGoal_1839, STATE_VARIABLE_Info_0_69, &STATE_VARIABLE_Info_138_1858);
                            PrivateBuiltin_1840 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                            Var_1859 = (MR_String) "unsigned_lt";
                            Var_1860 = (MR_Integer) 0;
                            check_hlds__simplify__simplify_goal_call__simplify_make_cmp_goal_expr_8_p_0(STATE_VARIABLE_Info_138_1858, PrivateBuiltin_1840, Var_1859, Var_1860, Y_2181, NumTargetBitsConstVar_1838, Context_1900, &InRangeTestGoal_1841);
                            TypeCtorInfo_262_1901 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                            Var_1861 = parse_tree__set_of_var__make_singleton_1_f_0(TypeCtorInfo_262_1901, Y_2181);
                            Var_1862 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                            Var_1863 = (MR_Integer) 1;
                            Var_1864 = (MR_Integer) 0;
                            hlds__hlds_goal__goal_info_init_6_p_0(Var_1861, Var_1862, Var_1863, Var_1864, Context_1900, &TestConjGoalInfo_1842);
                            Var_1867 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              Var_1866 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_1866, 0) = ((MR_Box) (InRangeTestGoal_1841));
                              MR_hl_field(MR_mktag(1), Var_1866, 1) = ((MR_Box) (Var_1867));
                            }
                            {
                              Var_1865 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_1865, 0) = ((MR_Box) (NumTargetBitsConstGoal_1839));
                              MR_hl_field(MR_mktag(1), Var_1865, 1) = ((MR_Box) (Var_1866));
                            }
                            hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_1865, TestConjGoalInfo_1842, &TestConjGoal_1843);
                            Var_1868 = (MR_Integer) 0;
                            check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_138_1858, ModuleName_15, (MR_String) "unchecked_right_ushift", Var_1868, X_2180, Y_2181, Z_2182, &UncheckedShiftGoalExpr_1844);
                            Var_2292 = (MR_String) "): second operand is out of range";
                            {
                              UncheckedShiftGoal_1845 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), UncheckedShiftGoal_1845, 0) = ((MR_Box) (UncheckedShiftGoalExpr_1844));
                              MR_hl_field(MR_mktag(0), UncheckedShiftGoal_1845, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_0_67));
                            }
                            Var_2293 = mercury__string__f_43_43_2_f_0(PredName_16, Var_2292);
                            Var_2294 = (MR_String) ".(";
                            Var_2295 = mercury__string__f_43_43_2_f_0(Var_2294, Var_2293);
                            NotInRangeStr_1846 = mercury__string__f_43_43_2_f_0(ModuleName_15, Var_2295);
                            check_hlds__simplify__simplify_goal_call__simplify_make_string_const_5_p_0(NotInRangeStr_1846, &ErrorMsgStrVar_1847, &ErrorMsgStrGoal_1848, STATE_VARIABLE_Info_138_1858, &STATE_VARIABLE_Info_155_1875);
                            ExceptionType_1849 = parse_tree__builtin_lib_types__void_type_0_f_0();
                            check_hlds__simplify__simplify_goal_call__simplify_make_var_4_p_0(ExceptionType_1849, &ExceptionVar_1850, STATE_VARIABLE_Info_155_1875, STATE_VARIABLE_Info_70);
                            parse_tree__prog_type__type_to_ctor_det_2_p_0(ExceptionType_1849, &ExceptionTypeCtor_1851);
                            Var_1876 = (MR_String) "math_domain_error";
                            Var_1877 = (MR_Integer) 1;
                            Var_1879 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              ExceptionWrapperCtorSymName_1852 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), ExceptionWrapperCtorSymName_1852, 0) = ((MR_Box) (PrivateBuiltin_1840));
                              MR_hl_field(MR_mktag(1), ExceptionWrapperCtorSymName_1852, 1) = ((MR_Box) (Var_1876));
                            }
                            {
                              ExceptionWrapperCtorConsId_1853 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), ExceptionWrapperCtorConsId_1853, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                              MR_hl_field(MR_mktag(3), ExceptionWrapperCtorConsId_1853, 1) = ((MR_Box) (ExceptionWrapperCtorSymName_1852));
                              MR_hl_field(MR_mktag(3), ExceptionWrapperCtorConsId_1853, 2) = ((MR_Box) (Var_1877));
                              MR_hl_field(MR_mktag(3), ExceptionWrapperCtorConsId_1853, 3) = ((MR_Box) (ExceptionTypeCtor_1851));
                            }
                            {
                              Var_1878 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_1878, 0) = ((MR_Box) (ErrorMsgStrVar_1847));
                              MR_hl_field(MR_mktag(1), Var_1878, 1) = ((MR_Box) (Var_1879));
                            }
                            hlds__make_goal__construct_functor_4_p_0(ExceptionVar_1850, ExceptionWrapperCtorConsId_1853, Var_1878, &WrapErrorMsgGoal_1854);
                            Var_1880 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
                            Var_1881 = (MR_String) "throw";
                            Var_1882 = (MR_Integer) 0;
                            Var_1883 = (MR_Word) ((MR_Unsigned) 0U);
                            Var_1884 = (MR_Integer) 6;
                            Var_1885 = (MR_Integer) 0;
                            Var_1887 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              Var_1886 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_1886, 0) = ((MR_Box) (ExceptionVar_1850));
                              MR_hl_field(MR_mktag(1), Var_1886, 1) = ((MR_Box) (Var_1887));
                            }
                            Var_1888 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                            Var_1889 = mercury__term__dummy_context_init_0_f_0();
                            hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_23, Var_1880, Var_1881, Var_1882, Var_1883, Var_1884, Var_1885, Var_1886, Var_1887, Var_1888, Var_1889, &ThrowGoal_1855);
                            Var_1891 = parse_tree__set_of_var__init_0_f_0(TypeCtorInfo_262_1901);
                            Var_1892 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                            Var_1893 = (MR_Integer) 6;
                            Var_1894 = (MR_Integer) 0;
                            hlds__hlds_goal__goal_info_init_6_p_0(Var_1891, Var_1892, Var_1893, Var_1894, Context_1900, &ThrowConjGoalInfo_1856);
                            Var_1898 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              Var_1897 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_1897, 0) = ((MR_Box) (ThrowGoal_1855));
                              MR_hl_field(MR_mktag(1), Var_1897, 1) = ((MR_Box) (Var_1898));
                            }
                            {
                              Var_1896 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_1896, 0) = ((MR_Box) (WrapErrorMsgGoal_1854));
                              MR_hl_field(MR_mktag(1), Var_1896, 1) = ((MR_Box) (Var_1897));
                            }
                            {
                              Var_1895 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_1895, 0) = ((MR_Box) (ErrorMsgStrGoal_1848));
                              MR_hl_field(MR_mktag(1), Var_1895, 1) = ((MR_Box) (Var_1896));
                            }
                            hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_1895, ThrowConjGoalInfo_1856, &ThrowConjGoal_1857);
                            Var_1899 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                              *ImprovedGoalExpr_20 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_1899));
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (TestConjGoal_1843));
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (UncheckedShiftGoal_1845));
                              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ThrowConjGoal_1857));
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
                MR_Word Var_209;
                MR_Word Var_210;
                MR_Word Var_211;

                succeeded = (IntType_13 == (MR_Integer) 0);
                if (succeeded)
                {
                  Op_25 = (MR_String) "unchecked_quotient";
                  succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    X_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 0))));
                    Var_209 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 1))));
                    succeeded = (Var_209 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Y_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_209, (MR_Integer) 0))));
                      Var_210 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_209, (MR_Integer) 1))));
                      succeeded = (Var_210 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        libs__int_emu__target_bits_per_int_2_p_0(Globals_24, &Var_211);
                        TargetBitsPerInt_28 = (MR_Integer) (Var_211);
                        check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_9_p_0(ModuleName_15, Op_25, X_26, TargetBitsPerInt_28, Y_27, ImprovedGoalExpr_20, STATE_VARIABLE_GoalInfo_0_67, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
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
                MR_Integer NumTargetBits_819;
                MR_Word Var_848;
                MR_Word Var_849;
                MR_Word Var_850;
                MR_Word X_960;
                MR_Word Y_961;
                MR_Word Z_962;
                MR_Word InstY_963;
                MR_Word YConst_684;
                MR_Word Var_365;
                MR_Word Var_366;
                MR_Word Var_367;
                MR_Word Var_368;
                MR_Word Var_369;

                succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  X_960 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 0))));
                  Var_848 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_18, (MR_Integer) 1))));
                  succeeded = (Var_848 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Y_961 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_848, (MR_Integer) 0))));
                    Var_849 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_848, (MR_Integer) 1))));
                    succeeded = (Var_849 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Z_962 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_849, (MR_Integer) 0))));
                      Var_850 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_849, (MR_Integer) 1))));
                      succeeded = (Var_850 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        NumTargetBits_819 = check_hlds__simplify__simplify_goal_call__int_type_target_bits_2_f_0(Globals_24, IntType_13);
                        hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_14, Y_961, &InstY_963);
                        succeeded = ((((MR_tag((MR_Word) InstY_963)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InstY_963, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_365 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstY_963, (MR_Integer) 3))));
                          succeeded = (Var_365 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_366 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_365, (MR_Integer) 0))));
                            Var_369 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_365, (MR_Integer) 1))));
                            succeeded = (Var_369 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              Var_367 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_366, (MR_Integer) 0))));
                              Var_368 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_366, (MR_Integer) 1))));
                              succeeded = (Var_368 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) Var_367)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_367, (MR_Integer) 0)))) == (MR_Integer) 5)));
                                if (succeeded)
                                {
                                  YConst_684 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_367, (MR_Integer) 1))));
                                  if (((MR_tag((MR_Word) YConst_684)) == (MR_Integer) 0))
                                    succeeded = MR_TRUE;
                                  else
                                  if (((MR_tag((MR_Word) YConst_684)) == (MR_Integer) 1))
                                    succeeded = MR_TRUE;
                                  else
                                    succeeded = MR_FALSE;
                                }
                              }
                            }
                          }
                        }
                        if (succeeded)
                        {
                          if (((MR_tag((MR_Word) YConst_684)) == (MR_Integer) 0))
                          {
                            MR_Integer YIntVal_444 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), YConst_684, (MR_Integer) 0))));

                            succeeded = ((MR_Integer) 0 <= YIntVal_444);
                            if (succeeded)
                              succeeded = (YIntVal_444 < NumTargetBits_819);
                            if (succeeded)
                            {
                              check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_69, ModuleName_15, (MR_String) "unchecked_left_ushift", (MR_Integer) 0, X_960, Y_961, Z_962, ImprovedGoalExpr_20);
                              *STATE_VARIABLE_Info_70 = STATE_VARIABLE_Info_0_69;
                            }
                            else
                            {
                              MR_String Exclusive_372;
                              MR_Word Var_373;
                              MR_Word Var_380;
                              MR_Word Var_381;
                              MR_Word Var_382;
                              MR_Word Var_385;
                              MR_Word Var_388;
                              MR_Word Var_391;
                              MR_Word Var_394;
                              MR_Word Var_395;
                              MR_Word Context_403;
                              MR_Word SymName_404;
                              MR_Word Pieces_405;
                              MR_Word Spec_406;
                              MR_String Var_2309;

                              *ImprovedGoalExpr_20 = GoalExpr0_19;
                              Context_403 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_67);
                              {
                                Var_373 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), Var_373, 0) = ((MR_Box) (ModuleName_15));
                              }
                              {
                                SymName_404 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), SymName_404, 0) = ((MR_Box) (Var_373));
                                MR_hl_field(MR_mktag(1), SymName_404, 1) = ((MR_Box) (PredName_16));
                              }
                              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_2[3]), NumTargetBits_819, &Var_2309);
                              Exclusive_372 = mercury__string__f_43_43_2_f_0(Var_2309, (MR_String) " (exclusive).");
                              {
                                Var_381 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), Var_381, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                                MR_hl_field(MR_mktag(3), Var_381, 1) = ((MR_Box) (SymName_404));
                              }
                              {
                                Var_395 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(2), Var_395, 0) = ((MR_Box) (Exclusive_372));
                              }
                              {
                                Var_394 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_394, 0) = ((MR_Box) (Var_395));
                                MR_hl_field(MR_mktag(1), Var_394, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[3])));
                              }
                              {
                                Var_391 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_391, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[79])));
                                MR_hl_field(MR_mktag(1), Var_391, 1) = ((MR_Box) (Var_394));
                              }
                              {
                                Var_388 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_388, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_2[4])));
                                MR_hl_field(MR_mktag(1), Var_388, 1) = ((MR_Box) (Var_391));
                              }
                              {
                                Var_385 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_385, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[78])));
                                MR_hl_field(MR_mktag(1), Var_385, 1) = ((MR_Box) (Var_388));
                              }
                              {
                                Var_382 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_382, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[77])));
                                MR_hl_field(MR_mktag(1), Var_382, 1) = ((MR_Box) (Var_385));
                              }
                              {
                                Var_380 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_380, 0) = ((MR_Box) (Var_381));
                                MR_hl_field(MR_mktag(1), Var_380, 1) = ((MR_Box) (Var_382));
                              }
                              {
                                Pieces_405 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Pieces_405, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[74])));
                                MR_hl_field(MR_mktag(1), Pieces_405, 1) = ((MR_Box) (Var_380));
                              }
                              {
                                Spec_406 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Spec_406, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_improve_arith_shift_cmp_ops\'/12"));
                                MR_hl_field(MR_mktag(1), Spec_406, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                MR_hl_field(MR_mktag(1), Spec_406, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
                                MR_hl_field(MR_mktag(1), Spec_406, 3) = ((MR_Box) (Context_403));
                                MR_hl_field(MR_mktag(1), Spec_406, 4) = ((MR_Box) (Pieces_405));
                              }
                              check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_406, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
                            }
                          }
                          else
                          {
                            MR_Unsigned YUintVal_530 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), YConst_684, (MR_Integer) 0))));
                            MR_Unsigned Var_482;

                            Var_482 = mercury__uint__det_from_int_1_f_0(NumTargetBits_819);
                            succeeded = (YUintVal_530 < Var_482);
                            if (succeeded)
                            {
                              check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_69, ModuleName_15, (MR_String) "unchecked_left_ushift", (MR_Integer) 0, X_960, Y_961, Z_962, ImprovedGoalExpr_20);
                              *STATE_VARIABLE_Info_70 = STATE_VARIABLE_Info_0_69;
                            }
                            else
                            {
                              MR_Word Var_484;
                              MR_Word Var_487;
                              MR_Word Var_488;
                              MR_Word Var_489;
                              MR_Word Var_492;
                              MR_Word Var_495;
                              MR_Word Var_496;
                              MR_Word Context_502;
                              MR_Word SymName_503;
                              MR_Word Pieces_504;
                              MR_Word Spec_505;

                              *ImprovedGoalExpr_20 = GoalExpr0_19;
                              Context_502 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_67);
                              {
                                Var_484 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), Var_484, 0) = ((MR_Box) (ModuleName_15));
                              }
                              {
                                SymName_503 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), SymName_503, 0) = ((MR_Box) (Var_484));
                                MR_hl_field(MR_mktag(1), SymName_503, 1) = ((MR_Box) (PredName_16));
                              }
                              {
                                Var_488 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), Var_488, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                                MR_hl_field(MR_mktag(3), Var_488, 1) = ((MR_Box) (SymName_503));
                              }
                              {
                                Var_496 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), Var_496, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                                MR_hl_field(MR_mktag(3), Var_496, 1) = ((MR_Box) (NumTargetBits_819));
                              }
                              {
                                Var_495 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_495, 0) = ((MR_Box) (Var_496));
                                MR_hl_field(MR_mktag(1), Var_495, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[18])));
                              }
                              {
                                Var_492 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_492, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[81])));
                                MR_hl_field(MR_mktag(1), Var_492, 1) = ((MR_Box) (Var_495));
                              }
                              {
                                Var_489 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_489, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[80])));
                                MR_hl_field(MR_mktag(1), Var_489, 1) = ((MR_Box) (Var_492));
                              }
                              {
                                Var_487 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_487, 0) = ((MR_Box) (Var_488));
                                MR_hl_field(MR_mktag(1), Var_487, 1) = ((MR_Box) (Var_489));
                              }
                              {
                                Pieces_504 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Pieces_504, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[74])));
                                MR_hl_field(MR_mktag(1), Pieces_504, 1) = ((MR_Box) (Var_487));
                              }
                              {
                                Spec_505 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Spec_505, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_improve_arith_shift_cmp_ops\'/12"));
                                MR_hl_field(MR_mktag(1), Spec_505, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                MR_hl_field(MR_mktag(1), Spec_505, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
                                MR_hl_field(MR_mktag(1), Spec_505, 3) = ((MR_Box) (Context_502));
                                MR_hl_field(MR_mktag(1), Spec_505, 4) = ((MR_Box) (Pieces_504));
                              }
                              check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_505, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
                            }
                          }
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          MR_Word TypeCtorInfo_262_681;
                          MR_Word NumTargetBitsConstVar_618;
                          MR_Word NumTargetBitsConstGoal_619;
                          MR_Word PrivateBuiltin_620;
                          MR_Word InRangeTestGoal_621;
                          MR_Word TestConjGoalInfo_622;
                          MR_Word TestConjGoal_623;
                          MR_Word UncheckedShiftGoalExpr_624;
                          MR_Word UncheckedShiftGoal_625;
                          MR_String NotInRangeStr_626;
                          MR_Word ErrorMsgStrVar_627;
                          MR_Word ErrorMsgStrGoal_628;
                          MR_Word ExceptionType_629;
                          MR_Word ExceptionVar_630;
                          MR_Word ExceptionTypeCtor_631;
                          MR_Word ExceptionWrapperCtorSymName_632;
                          MR_Word ExceptionWrapperCtorConsId_633;
                          MR_Word WrapErrorMsgGoal_634;
                          MR_Word ThrowGoal_635;
                          MR_Word ThrowConjGoalInfo_636;
                          MR_Word ThrowConjGoal_637;
                          MR_Word STATE_VARIABLE_Info_138_638;
                          MR_String Var_639;
                          MR_Word Var_640;
                          MR_Word Var_641;
                          MR_Word Var_642;
                          MR_Word Var_643;
                          MR_Word Var_644;
                          MR_Word Var_645;
                          MR_Word Var_646;
                          MR_Word Var_647;
                          MR_Word Var_648;
                          MR_Word STATE_VARIABLE_Info_155_655;
                          MR_String Var_656;
                          MR_Integer Var_657;
                          MR_Word Var_658;
                          MR_Word Var_659;
                          MR_Word Var_660;
                          MR_String Var_661;
                          MR_Word Var_662;
                          MR_Word Var_663;
                          MR_Word Var_664;
                          MR_Word Var_665;
                          MR_Word Var_666;
                          MR_Word Var_667;
                          MR_Word Var_668;
                          MR_Word Var_669;
                          MR_Word Var_671;
                          MR_Word Var_672;
                          MR_Word Var_673;
                          MR_Word Var_674;
                          MR_Word Var_675;
                          MR_Word Var_676;
                          MR_Word Var_677;
                          MR_Word Var_678;
                          MR_Word Var_679;
                          MR_Word Context_680;
                          MR_String Var_2316;
                          MR_String Var_2317;
                          MR_String Var_2318;
                          MR_String Var_2319;

                          succeeded = mercury__builtin__semidet_fail_0_p_0();
                          if (succeeded)
                          {
                            Context_680 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_67);
                            check_hlds__simplify__simplify_goal_call__simplify_make_int_const_5_p_0(NumTargetBits_819, &NumTargetBitsConstVar_618, &NumTargetBitsConstGoal_619, STATE_VARIABLE_Info_0_69, &STATE_VARIABLE_Info_138_638);
                            PrivateBuiltin_620 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                            Var_639 = (MR_String) "unsigned_lt";
                            Var_640 = (MR_Integer) 0;
                            check_hlds__simplify__simplify_goal_call__simplify_make_cmp_goal_expr_8_p_0(STATE_VARIABLE_Info_138_638, PrivateBuiltin_620, Var_639, Var_640, Y_961, NumTargetBitsConstVar_618, Context_680, &InRangeTestGoal_621);
                            TypeCtorInfo_262_681 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                            Var_641 = parse_tree__set_of_var__make_singleton_1_f_0(TypeCtorInfo_262_681, Y_961);
                            Var_642 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                            Var_643 = (MR_Integer) 1;
                            Var_644 = (MR_Integer) 0;
                            hlds__hlds_goal__goal_info_init_6_p_0(Var_641, Var_642, Var_643, Var_644, Context_680, &TestConjGoalInfo_622);
                            Var_647 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              Var_646 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_646, 0) = ((MR_Box) (InRangeTestGoal_621));
                              MR_hl_field(MR_mktag(1), Var_646, 1) = ((MR_Box) (Var_647));
                            }
                            {
                              Var_645 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_645, 0) = ((MR_Box) (NumTargetBitsConstGoal_619));
                              MR_hl_field(MR_mktag(1), Var_645, 1) = ((MR_Box) (Var_646));
                            }
                            hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_645, TestConjGoalInfo_622, &TestConjGoal_623);
                            Var_648 = (MR_Integer) 0;
                            check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_138_638, ModuleName_15, (MR_String) "unchecked_left_ushift", Var_648, X_960, Y_961, Z_962, &UncheckedShiftGoalExpr_624);
                            Var_2316 = (MR_String) "): second operand is out of range";
                            {
                              UncheckedShiftGoal_625 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), UncheckedShiftGoal_625, 0) = ((MR_Box) (UncheckedShiftGoalExpr_624));
                              MR_hl_field(MR_mktag(0), UncheckedShiftGoal_625, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_0_67));
                            }
                            Var_2317 = mercury__string__f_43_43_2_f_0(PredName_16, Var_2316);
                            Var_2318 = (MR_String) ".(";
                            Var_2319 = mercury__string__f_43_43_2_f_0(Var_2318, Var_2317);
                            NotInRangeStr_626 = mercury__string__f_43_43_2_f_0(ModuleName_15, Var_2319);
                            check_hlds__simplify__simplify_goal_call__simplify_make_string_const_5_p_0(NotInRangeStr_626, &ErrorMsgStrVar_627, &ErrorMsgStrGoal_628, STATE_VARIABLE_Info_138_638, &STATE_VARIABLE_Info_155_655);
                            ExceptionType_629 = parse_tree__builtin_lib_types__void_type_0_f_0();
                            check_hlds__simplify__simplify_goal_call__simplify_make_var_4_p_0(ExceptionType_629, &ExceptionVar_630, STATE_VARIABLE_Info_155_655, STATE_VARIABLE_Info_70);
                            parse_tree__prog_type__type_to_ctor_det_2_p_0(ExceptionType_629, &ExceptionTypeCtor_631);
                            Var_656 = (MR_String) "math_domain_error";
                            Var_657 = (MR_Integer) 1;
                            Var_659 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              ExceptionWrapperCtorSymName_632 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), ExceptionWrapperCtorSymName_632, 0) = ((MR_Box) (PrivateBuiltin_620));
                              MR_hl_field(MR_mktag(1), ExceptionWrapperCtorSymName_632, 1) = ((MR_Box) (Var_656));
                            }
                            {
                              ExceptionWrapperCtorConsId_633 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), ExceptionWrapperCtorConsId_633, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                              MR_hl_field(MR_mktag(3), ExceptionWrapperCtorConsId_633, 1) = ((MR_Box) (ExceptionWrapperCtorSymName_632));
                              MR_hl_field(MR_mktag(3), ExceptionWrapperCtorConsId_633, 2) = ((MR_Box) (Var_657));
                              MR_hl_field(MR_mktag(3), ExceptionWrapperCtorConsId_633, 3) = ((MR_Box) (ExceptionTypeCtor_631));
                            }
                            {
                              Var_658 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_658, 0) = ((MR_Box) (ErrorMsgStrVar_627));
                              MR_hl_field(MR_mktag(1), Var_658, 1) = ((MR_Box) (Var_659));
                            }
                            hlds__make_goal__construct_functor_4_p_0(ExceptionVar_630, ExceptionWrapperCtorConsId_633, Var_658, &WrapErrorMsgGoal_634);
                            Var_660 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
                            Var_661 = (MR_String) "throw";
                            Var_662 = (MR_Integer) 0;
                            Var_663 = (MR_Word) ((MR_Unsigned) 0U);
                            Var_664 = (MR_Integer) 6;
                            Var_665 = (MR_Integer) 0;
                            Var_667 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              Var_666 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_666, 0) = ((MR_Box) (ExceptionVar_630));
                              MR_hl_field(MR_mktag(1), Var_666, 1) = ((MR_Box) (Var_667));
                            }
                            Var_668 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                            Var_669 = mercury__term__dummy_context_init_0_f_0();
                            hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_23, Var_660, Var_661, Var_662, Var_663, Var_664, Var_665, Var_666, Var_667, Var_668, Var_669, &ThrowGoal_635);
                            Var_671 = parse_tree__set_of_var__init_0_f_0(TypeCtorInfo_262_681);
                            Var_672 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                            Var_673 = (MR_Integer) 6;
                            Var_674 = (MR_Integer) 0;
                            hlds__hlds_goal__goal_info_init_6_p_0(Var_671, Var_672, Var_673, Var_674, Context_680, &ThrowConjGoalInfo_636);
                            Var_678 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              Var_677 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_677, 0) = ((MR_Box) (ThrowGoal_635));
                              MR_hl_field(MR_mktag(1), Var_677, 1) = ((MR_Box) (Var_678));
                            }
                            {
                              Var_676 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_676, 0) = ((MR_Box) (WrapErrorMsgGoal_634));
                              MR_hl_field(MR_mktag(1), Var_676, 1) = ((MR_Box) (Var_677));
                            }
                            {
                              Var_675 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_675, 0) = ((MR_Box) (ErrorMsgStrGoal_628));
                              MR_hl_field(MR_mktag(1), Var_675, 1) = ((MR_Box) (Var_676));
                            }
                            hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_675, ThrowConjGoalInfo_636, &ThrowConjGoal_637);
                            Var_679 = (MR_Word) ((MR_Unsigned) 0U);
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                              *ImprovedGoalExpr_20 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_679));
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (TestConjGoal_623));
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (UncheckedShiftGoal_625));
                              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ThrowConjGoal_637));
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
      *STATE_VARIABLE_GoalInfo_68 = STATE_VARIABLE_GoalInfo_0_67;
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
    MR_bool succeeded = ((((MR_tag((MR_Word) ConsId_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 5)));
    MR_Word IntConst_5;

    if (succeeded)
    {
      IntConst_5 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1))));
      switch (IntType_3) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            succeeded = ((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 0);
            if (succeeded)
            {
            }
          }
          break;
        case (MR_Integer) 4:
          {
            succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), IntConst_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
            }
          }
          break;
        case (MR_Integer) 6:
          {
            succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), IntConst_5, (MR_Integer) 0)))) == (MR_Integer) 3)));
            if (succeeded)
            {
            }
          }
          break;
        case (MR_Integer) 8:
          {
            succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), IntConst_5, (MR_Integer) 0)))) == (MR_Integer) 5)));
            if (succeeded)
            {
            }
          }
          break;
        case (MR_Integer) 2:
          {
            succeeded = ((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 2);
            if (succeeded)
            {
            }
          }
          break;
        case (MR_Integer) 1:
          {
            succeeded = ((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 1);
            if (succeeded)
            {
            }
          }
          break;
        case (MR_Integer) 5:
          {
            succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), IntConst_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
            }
          }
          break;
        case (MR_Integer) 7:
          {
            succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), IntConst_5, (MR_Integer) 0)))) == (MR_Integer) 4)));
            if (succeeded)
            {
            }
          }
          break;
        case (MR_Integer) 9:
          {
            succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), IntConst_5, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
            }
          }
          break;
        case (MR_Integer) 3:
          {
            succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), IntConst_5, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
            }
          }
          break;
      }
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
    MR_bool succeeded = ((((MR_tag((MR_Word) ConsId_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 5)));
    MR_Word IntConst_5;

    if (succeeded)
    {
      IntConst_5 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_4, (MR_Integer) 1))));
      switch (IntType_3) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer Val_6;

            succeeded = ((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 0);
            if (succeeded)
            {
              Val_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), IntConst_5, (MR_Integer) 0))));
              succeeded = (Val_6 == (MR_Integer) 0);
            }
          }
          break;
        case (MR_Integer) 4:
          {
            int16_t Val_10;

            succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), IntConst_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Val_10 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntConst_5, (MR_Integer) 1)));
              succeeded = (Val_10 == INT16_C(0));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            int32_t Val_12;

            succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), IntConst_5, (MR_Integer) 0)))) == (MR_Integer) 3)));
            if (succeeded)
            {
              Val_12 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntConst_5, (MR_Integer) 1)));
              succeeded = (Val_12 == INT32_C(0));
            }
          }
          break;
        case (MR_Integer) 8:
          {
            int64_t Val_14;

            succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), IntConst_5, (MR_Integer) 0)))) == (MR_Integer) 5)));
            if (succeeded)
            {
              Val_14 = MR_unbox_int64((MR_hl_field(MR_mktag(3), IntConst_5, (MR_Integer) 1)));
              succeeded = (Val_14 == INT64_C(0));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            int8_t Val_8;

            succeeded = ((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 2);
            if (succeeded)
            {
              Val_8 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(2), IntConst_5, (MR_Integer) 0)));
              succeeded = (Val_8 == INT8_C(0));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Unsigned Val_7;

            succeeded = ((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 1);
            if (succeeded)
            {
              Val_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), IntConst_5, (MR_Integer) 0))));
              succeeded = (Val_7 == (MR_Unsigned) 0U);
            }
          }
          break;
        case (MR_Integer) 5:
          {
            uint16_t Val_11;

            succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), IntConst_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              Val_11 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntConst_5, (MR_Integer) 1)));
              succeeded = (Val_11 == UINT16_C(0));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            uint32_t Val_13;

            succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), IntConst_5, (MR_Integer) 0)))) == (MR_Integer) 4)));
            if (succeeded)
            {
              Val_13 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntConst_5, (MR_Integer) 1)));
              succeeded = (Val_13 == UINT32_C(0));
            }
          }
          break;
        case (MR_Integer) 9:
          {
            uint64_t Val_15;

            succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), IntConst_5, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              Val_15 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), IntConst_5, (MR_Integer) 1)));
              succeeded = (Val_15 == UINT64_C(0));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            uint8_t Val_9;

            succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), IntConst_5, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              Val_9 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntConst_5, (MR_Integer) 1)));
              succeeded = (Val_9 == UINT8_C(0));
            }
          }
          break;
      }
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
      MR_hl_field(MR_mktag(3), ConstConsId_10, 0) = ((MR_Box) ((MR_Unsigned) 8U));
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
      MR_hl_field(MR_mktag(0), Unification_22, 4) = ((MR_Box) ((MR_Unsigned) 0U));
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
      MR_hl_field(MR_mktag(1), GoalExpr_27, 4) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[73]));
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
    MR_Word Var_14;
    MR_Word Unification_23;
    MR_Word RHS_24;
    MR_Word Ground_26;
    MR_Word UnifyMode_27;
    MR_Word GoalExpr_28;
    MR_Word NonLocals_29;
    MR_Word InstMapDelta_30;
    MR_Word GoalInfo_31;
    MR_Word VarSet0_53;
    MR_Word VarTypes0_54;
    MR_Word VarSet_55;
    MR_Word VarTypes_56;
    MR_Word STATE_VARIABLE_Info_14_57;

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (IntConst_6));
    }
    {
      ConstConsId_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConstConsId_10, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), ConstConsId_10, 1) = ((MR_Box) (Var_13));
    }
    Var_14 = parse_tree__builtin_lib_types__int_type_0_f_0();
    check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(STATE_VARIABLE_Info_0_11, &VarSet0_53);
    check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_11, &VarTypes0_54);
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConstVar_7, VarSet0_53, &VarSet_55);
    hlds__vartypes__add_var_type_4_p_0(*ConstVar_7, Var_14, VarTypes0_54, &VarTypes_56);
    check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(VarSet_55, STATE_VARIABLE_Info_0_11, &STATE_VARIABLE_Info_14_57);
    check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(VarTypes_56, STATE_VARIABLE_Info_14_57, STATE_VARIABLE_Info_12);
    {
      Unification_23 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Unification_23, 0) = ((MR_Box) (*ConstVar_7));
      MR_hl_field(MR_mktag(0), Unification_23, 1) = ((MR_Box) (ConstConsId_10));
      MR_hl_field(MR_mktag(0), Unification_23, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Unification_23, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Unification_23, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Unification_23, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Unification_23, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      RHS_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RHS_24, 0) = ((MR_Box) (ConstConsId_10));
      MR_hl_field(MR_mktag(1), RHS_24, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), RHS_24, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Ground_26 = parse_tree__prog_mode__ground_inst_0_f_0();
    {
      UnifyMode_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnifyMode_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), UnifyMode_27, 1) = ((MR_Box) (Ground_26));
      MR_hl_field(MR_mktag(0), UnifyMode_27, 2) = ((MR_Box) (Ground_26));
      MR_hl_field(MR_mktag(0), UnifyMode_27, 3) = ((MR_Box) (Ground_26));
    }
    {
      GoalExpr_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), GoalExpr_28, 0) = ((MR_Box) (*ConstVar_7));
      MR_hl_field(MR_mktag(1), GoalExpr_28, 1) = ((MR_Box) (RHS_24));
      MR_hl_field(MR_mktag(1), GoalExpr_28, 2) = ((MR_Box) (UnifyMode_27));
      MR_hl_field(MR_mktag(1), GoalExpr_28, 3) = ((MR_Box) (Unification_23));
      MR_hl_field(MR_mktag(1), GoalExpr_28, 4) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[73]));
    }
    NonLocals_29 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *ConstVar_7);
    InstMapDelta_30 = hlds__instmap__instmap_delta_bind_var_1_f_0(*ConstVar_7);
    hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_29, InstMapDelta_30, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_31);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_31));
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
    MR_Word ModuleSymName_17;
    MR_Word OpSymName_18;
    MR_Word ModuleInfo_19;
    MR_Word PredTable_20;
    MR_Word OpPredId_21;
    MR_Integer OpProcId_22;
    MR_Word OpArgs_23;
    MR_Word Var_25;
    MR_Word Var_29;
    MR_Word Var_30;

    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (ModuleName_10));
    }
    ModuleSymName_17 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0(Var_25);
    {
      OpSymName_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), OpSymName_18, 0) = ((MR_Box) (ModuleSymName_17));
      MR_hl_field(MR_mktag(1), OpSymName_18, 1) = ((MR_Box) (Op_11));
    }
    check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(Info_9, &ModuleInfo_19);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_19, &PredTable_20);
    hlds__pred_table__predicate_table_lookup_func_sym_arity_one_5_p_0(PredTable_20, (MR_Integer) 0, OpSymName_18, (MR_Integer) 2, &OpPredId_21);
    hlds__hlds_pred__proc_id_to_int_2_p_1(&OpProcId_22, (MR_Integer) 0);
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Z_15));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Y_14));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_30));
    }
    {
      OpArgs_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), OpArgs_23, 0) = ((MR_Box) (X_13));
      MR_hl_field(MR_mktag(1), OpArgs_23, 1) = ((MR_Box) (Var_29));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      *GoalExpr_16 = base;
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (OpPredId_21));
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (OpProcId_22));
      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (OpArgs_23));
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
    MR_Word Var_71;
    MR_String Var_72;
    MR_Word Var_74;
    MR_String Var_75;
    MR_Word Var_77;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;

    check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_36, &ModuleInfo_14);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_14, &Globals_15);
    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_15, (MR_Integer) 317, (MR_Integer) 1);
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
              Var_50 = (MR_Word) ((MR_Unsigned) 0U);
              {
                Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Y_16));
                MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_50));
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
              Var_72 = (MR_String) "=";
              Var_75 = (MR_String) ">";
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
                MR_hl_field(MR_mktag(3), FunctorResultLt_27, 2) = ((MR_Box) (Var_67));
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
                MR_hl_field(MR_mktag(3), FunctorResultEq_28, 2) = ((MR_Box) (Var_67));
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
                MR_hl_field(MR_mktag(3), FunctorResultGt_29, 2) = ((MR_Box) (Var_67));
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
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_84));
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
    MR_Word OpSymName_17;
    MR_Word ModuleInfo_18;
    MR_Word PredTable_19;
    MR_Word OpPredId_20;
    MR_Integer OpProcId_21;
    MR_Word OpArgs_22;
    MR_Word GoalExpr_24;
    MR_Word GoalInfo_25;
    MR_Word Var_29;
    MR_Word Var_31;
    MR_Word Var_32;

    {
      OpSymName_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), OpSymName_17, 0) = ((MR_Box) (ModuleSymName_10));
      MR_hl_field(MR_mktag(1), OpSymName_17, 1) = ((MR_Box) (Op_11));
    }
    check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(Info_9, &ModuleInfo_18);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_18, &PredTable_19);
    hlds__pred_table__predicate_table_lookup_pred_sym_arity_one_5_p_0(PredTable_19, (MR_Integer) 0, OpSymName_17, (MR_Integer) 2, &OpPredId_20);
    hlds__hlds_pred__proc_id_to_int_2_p_1(&OpProcId_21, (MR_Integer) 0);
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Y_14));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      OpArgs_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), OpArgs_22, 0) = ((MR_Box) (X_13));
      MR_hl_field(MR_mktag(1), OpArgs_22, 1) = ((MR_Box) (Var_29));
    }
    {
      GoalExpr_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), GoalExpr_24, 0) = ((MR_Box) (OpPredId_20));
      MR_hl_field(MR_mktag(2), GoalExpr_24, 1) = ((MR_Box) (OpProcId_21));
      MR_hl_field(MR_mktag(2), GoalExpr_24, 2) = ((MR_Box) (OpArgs_22));
      MR_hl_field(MR_mktag(2), GoalExpr_24, 3) = (MR_Box) ((MR_Unsigned) (IsBuiltin_12));
      MR_hl_field(MR_mktag(2), GoalExpr_24, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(2), GoalExpr_24, 5) = ((MR_Box) (OpSymName_17));
    }
    Var_31 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OpArgs_22);
    Var_32 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    hlds__hlds_goal__goal_info_init_6_p_0(Var_31, Var_32, (MR_Integer) 1, (MR_Integer) 0, Context_15, &GoalInfo_25);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_24));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_25));
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
    Unique_31 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_3[0]));
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
      MR_hl_field(MR_mktag(1), UnifyExpr_48, 4) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[72]));
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
        Pieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[58])), Var_34);
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
          MR_hl_field(MR_mktag(2), Spec_24, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 27) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
          MR_hl_field(MR_mktag(2), Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(2), Spec_24, 3) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
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
                  Var_27 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[59]));
                  Var_30 = (MR_Word) ((MR_Unsigned) 4U);
                  Var_32 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[60]));
                  Var_37 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[61]));
                  Var_41 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[62]));
                  {
                    Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (ModuleName_6));
                  }
                  {
                    Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_40, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), Var_40, 1) = ((MR_Box) (ZeroStr_85));
                  }
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
                  Var_45 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[63]));
                  Var_48 = (MR_Word) ((MR_Unsigned) 4U);
                  Var_52 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[64]));
                  Var_55 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[65]));
                  Var_59 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[67]));
                  {
                    Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), Var_50, 1) = ((MR_Box) (ZeroStr_84));
                  }
                  {
                    Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (ModuleName_6));
                  }
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
                  Var_12 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[59]));
                  Var_15 = (MR_Word) ((MR_Unsigned) 4U);
                  Var_19 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[68]));
                  Var_23 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[67]));
                  {
                    Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), Var_17, 1) = ((MR_Box) (ZeroStr_86));
                  }
                  {
                    Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (ModuleName_6));
                  }
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
                  Var_63 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[63]));
                  Var_66 = (MR_Word) ((MR_Unsigned) 4U);
                  Var_68 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[69]));
                  Var_73 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[70]));
                  Var_76 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[71]));
                  Var_80 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[62]));
                  {
                    Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), Var_71, 1) = ((MR_Box) (ModuleName_6));
                  }
                  {
                    Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_79, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), Var_79, 1) = ((MR_Box) (ZeroStr_11));
                  }
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
    MR_Word IntConst_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    if (succeeded)
    {
      Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Arg_5, (MR_Integer) 3))));
      succeeded = (Var_10 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_10, (MR_Integer) 0))));
        Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_10, (MR_Integer) 1))));
        succeeded = (Var_14 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0))));
          Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1))));
          succeeded = (Var_13 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((((MR_tag((MR_Word) Var_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_12, (MR_Integer) 0)))) == (MR_Integer) 5)));
            if (succeeded)
            {
              IntConst_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_12, (MR_Integer) 1))));
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
                          MR_Unsigned Var_19;

                          succeeded = ((MR_tag((MR_Word) IntConst_9)) == (MR_Integer) 1);
                          if (succeeded)
                          {
                            Var_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), IntConst_9, (MR_Integer) 0))));
                            succeeded = (Var_19 == (MR_Unsigned) 0U);
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
                          uint16_t Var_17;

                          succeeded = ((((MR_tag((MR_Word) IntConst_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), IntConst_9, (MR_Integer) 0)))) == (MR_Integer) 2)));
                          if (succeeded)
                          {
                            Var_17 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntConst_9, (MR_Integer) 1)));
                            succeeded = (Var_17 == UINT16_C(0));
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
                          uint32_t Var_16;

                          succeeded = ((((MR_tag((MR_Word) IntConst_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), IntConst_9, (MR_Integer) 0)))) == (MR_Integer) 4)));
                          if (succeeded)
                          {
                            Var_16 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntConst_9, (MR_Integer) 1)));
                            succeeded = (Var_16 == UINT32_C(0));
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
                          uint64_t Var_15;

                          succeeded = ((((MR_tag((MR_Word) IntConst_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), IntConst_9, (MR_Integer) 0)))) == (MR_Integer) 6)));
                          if (succeeded)
                          {
                            Var_15 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), IntConst_9, (MR_Integer) 1)));
                            succeeded = (Var_15 == UINT64_C(0));
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
                          uint8_t Var_18;

                          succeeded = ((((MR_tag((MR_Word) IntConst_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), IntConst_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (succeeded)
                          {
                            Var_18 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntConst_9, (MR_Integer) 1)));
                            succeeded = (Var_18 == UINT8_C(0));
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
  MR_Word STATE_VARIABLE_Info_0_47,
  MR_Word * STATE_VARIABLE_Info_48)
{
  {
    MR_bool succeeded;
    MR_Word AllInputsEqv_28;
    MR_Word AllInputsEqvOrSvar_29;
    MR_Word HeadBaseNames_30;
    MR_Word ArgBaseNames_31;
    MR_Word TypeCtorInfo_176_176;
    MR_Word CurPredProcId_22;
    MR_Word ModuleInfo_23;
    MR_Word VarSet_24;
    MR_Word VarNameRemap_25;
    MR_Word HeadVars_26;
    MR_Word ArgModes_27;
    MR_Word EvalMethod_32;
    MR_Word Purity_34;
    MR_Unsigned Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_181;
    MR_Integer Var_182;
    MR_Word Var_54;

    succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_simple_code_1_p_0(STATE_VARIABLE_Info_0_47);
    if (succeeded)
    {
      check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_0_47, &CurPredProcId_22);
      Var_181 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CurPredProcId_22, (MR_Integer) 0))));
      Var_182 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CurPredProcId_22, (MR_Integer) 1))));
      succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_12, Var_181);
      if (succeeded)
      {
        succeeded = (ProcId_13 == Var_182);
        if (succeeded)
        {
          succeeded = (IsBuiltin_15 != (MR_Integer) 0);
          if (succeeded)
          {
            Var_49 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), NestedContext_19, (MR_Integer) 2))));
            succeeded = (Var_49 == (MR_Unsigned) 0U);
            if (succeeded)
            {
              check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_47, &ModuleInfo_23);
              check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(STATE_VARIABLE_Info_0_47, &VarSet_24);
              hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(PredInfo_16, &VarNameRemap_25);
              hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_17, &HeadVars_26);
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_17, &ArgModes_27);
              Var_50 = (MR_Integer) 1;
              Var_51 = (MR_Integer) 1;
              TypeCtorInfo_176_176 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
              Var_52 = mercury__set__init_0_f_0(TypeCtorInfo_176_176);
              Var_53 = mercury__set__init_0_f_0(TypeCtorInfo_176_176);
              succeeded = check_hlds__simplify__simplify_goal_call__input_args_are_suspicious_15_p_0(ModuleInfo_23, Common_20, VarSet_24, VarNameRemap_25, HeadVars_26, ArgVars_14, ArgModes_27, Var_50, &AllInputsEqv_28, Var_51, &AllInputsEqvOrSvar_29, Var_52, &HeadBaseNames_30, Var_53, &ArgBaseNames_31);
              if (succeeded)
              {
                hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ProcInfo_17, &EvalMethod_32);
                succeeded = (EvalMethod_32 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), EvalMethod_32, (MR_Integer) 0))));
                  succeeded = ((MR_tag((MR_Word) Var_54)) == (MR_Integer) 3);
                  if (succeeded)
                  {
                  }
                }
                succeeded = !(succeeded);
                if (succeeded)
                {
                  hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_16, &Purity_34);
                  succeeded = (Purity_34 != (MR_Integer) 2);
                }
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word NamePieces_35;

      NamePieces_35 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, PredInfo_16);
      switch (AllInputsEqvOrSvar_29) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          switch (AllInputsEqv_28) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word MainPieces_36;
                MR_Word Msgs_38;
                MR_Word Spec_39;
                MR_Word Var_125;
                MR_Word Var_148;
                MR_Word Var_149;
                MR_Word Var_150;
                MR_Word Var_151;

                {
                  Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[22])));
                  MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (NamePieces_35));
                }
                MainPieces_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_125, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[24])));
                Var_149 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_18);
                {
                  Var_151 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_151, 0) = ((MR_Box) (MainPieces_36));
                }
                {
                  Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_150, 0) = ((MR_Box) (Var_151));
                  MR_hl_field(MR_mktag(1), Var_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[84])));
                }
                {
                  Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) (Var_149));
                  MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) (Var_150));
                }
                {
                  Msgs_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Msgs_38, 0) = ((MR_Box) (Var_148));
                  MR_hl_field(MR_mktag(1), Msgs_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Spec_39, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.maybe_generate_warning_for_infinite_loop_call\'/11"));
                  MR_hl_field(MR_mktag(0), Spec_39, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(0), Spec_39, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
                  MR_hl_field(MR_mktag(0), Spec_39, 3) = ((MR_Box) (Msgs_38));
                }
                check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_39, STATE_VARIABLE_Info_0_47, STATE_VARIABLE_Info_48);
              }
              break;
            case (MR_Integer) 0:
              {
                succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_suspicious_recursion_1_p_0(STATE_VARIABLE_Info_0_47);
                if (succeeded)
                {
                  MR_Word Pieces_40;
                  MR_Word Var_94;
                  MR_Word Var_112;
                  MR_Word Var_113;
                  MR_Word Var_114;
                  MR_Word Var_115;
                  MR_Word Var_116;
                  MR_Word Var_117;
                  MR_Word Msgs_162;
                  MR_Word Spec_163;

                  {
                    Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[22])));
                    MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (NamePieces_35));
                  }
                  Pieces_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_94, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[40])));
                  Var_113 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_18);
                  {
                    Var_115 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_115, 0) = ((MR_Box) (Pieces_40));
                  }
                  Var_117 = check_hlds__simplify__simplify_goal_call__shut_up_suspicious_recursion_msg_0_f_0();
                  {
                    Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (Var_117));
                    MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (Var_115));
                    MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (Var_116));
                  }
                  {
                    Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (Var_113));
                    MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) (Var_114));
                  }
                  {
                    Msgs_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Msgs_162, 0) = ((MR_Box) (Var_112));
                    MR_hl_field(MR_mktag(1), Msgs_162, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Spec_163 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Spec_163, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.maybe_generate_warning_for_infinite_loop_call\'/11"));
                    MR_hl_field(MR_mktag(0), Spec_163, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(MR_mktag(0), Spec_163, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
                    MR_hl_field(MR_mktag(0), Spec_163, 3) = ((MR_Box) (Msgs_162));
                  }
                  check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_163, STATE_VARIABLE_Info_0_47, STATE_VARIABLE_Info_48);
                }
                else
                  *STATE_VARIABLE_Info_48 = STATE_VARIABLE_Info_0_47;
              }
              break;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word HeadArgBaseNames_41;
            MR_Word SuspiciousArgNames_42;
            MR_Word Var_56;

            mercury__set__intersect_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HeadBaseNames_30, ArgBaseNames_31, &HeadArgBaseNames_41);
            SuspiciousArgNames_42 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HeadArgBaseNames_41);
            succeeded = (SuspiciousArgNames_42 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SuspiciousArgNames_42, (MR_Integer) 1))));
              succeeded = (Var_56 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
                succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_suspicious_recursion_1_p_0(STATE_VARIABLE_Info_0_47);
            }
            if (succeeded)
            {
              MR_Word Msg_46;
              MR_Word Var_57;
              MR_Word Var_60;
              MR_Word Var_68;
              MR_Word Var_69;
              MR_Word Var_79;
              MR_Word Var_80;
              MR_Word Var_81;
              MR_Word Var_82;
              MR_Word Var_83;
              MR_Word Var_91;
              MR_Word Spec_168;
              MR_Word Pieces_169;

              {
                Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[22])));
                MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (NamePieces_35));
              }
              Var_69 = parse_tree__error_util__list_to_pieces_1_f_0(SuspiciousArgNames_42);
              Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_69, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[48])));
              Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[44])), Var_68);
              Pieces_169 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_57, Var_60);
              Var_79 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_18);
              {
                Var_81 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (Pieces_169));
              }
              Var_83 = check_hlds__simplify__simplify_goal_call__shut_up_suspicious_recursion_msg_0_f_0();
              {
                Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
                MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
                MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_82));
              }
              {
                Msg_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Msg_46, 0) = ((MR_Box) (Var_79));
                MR_hl_field(MR_mktag(1), Msg_46, 1) = ((MR_Box) (Var_80));
              }
              {
                Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Msg_46));
                MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_168 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Spec_168, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.maybe_generate_warning_for_infinite_loop_call\'/11"));
                MR_hl_field(MR_mktag(2), Spec_168, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 34) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
                MR_hl_field(MR_mktag(2), Spec_168, 2) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(2), Spec_168, 3) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
                MR_hl_field(MR_mktag(2), Spec_168, 4) = ((MR_Box) (Var_91));
              }
              check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_168, STATE_VARIABLE_Info_0_47, STATE_VARIABLE_Info_48);
            }
            else
              *STATE_VARIABLE_Info_48 = STATE_VARIABLE_Info_0_47;
          }
          break;
      }
    }
    else
      *STATE_VARIABLE_Info_48 = STATE_VARIABLE_Info_0_47;
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
  return (MR_Word) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_1[82]));
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
      Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredOrProcPieces_17, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[18])));
      MainPieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[16])), Var_43);
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
            MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) ((MR_Unsigned) 10U));
            MR_hl_field(MR_mktag(3), Var_71, 1) = ((MR_Box) (Var_96));
          }
          {
            Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
            MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[18])));
          }
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[19])));
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

          Var_52 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_3[1]), InFavourOf_16);
          InFavourOfPieces_31 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", Var_52);
          Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InFavourOfPieces_31, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[18])));
          Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[21])), Var_59);
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
        MR_hl_field(MR_mktag(2), Spec_32, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 49) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
        MR_hl_field(MR_mktag(2), Spec_32, 2) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(2), Spec_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
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
      MR_Word TypeCtorInfo_116_116;
      MR_Word TypeCtorInfo_118_118;
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
        TypeCtorInfo_116_116 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
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
          MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0_1));
          MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (IOStateType_16));
        }
        mercury__list__filter_3_p_0(TypeCtorInfo_116_116, Var_41, ArgTypes_14, &IOStateArgTypes_17);
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
              mercury__list__length_2_p_0(TypeCtorInfo_116_116, ArgTypes_14, &FullArity_21);
              NumExtraArgs_22 = (MR_Integer) ((MR_Unsigned) FullArity_21 - (MR_Unsigned) OrigArity_20);
              mercury__list__det_split_list_4_p_0(TypeCtorInfo_116_116, NumExtraArgs_22, ArgTypes_14, &ExtraArgTypes_23, &UserArgTypes_24);
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
              TypeCtorInfo_118_118 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0);
              {
                Var_47 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_5[0]));
                MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0_2));
                MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (ModuleInfo_6));
                MR_hl_field(MR_mktag(0), Var_47, 4) = ((MR_Box) (NumExtraArgs_22));
                MR_hl_field(MR_mktag(0), Var_47, 5) = ((MR_Box) (ExtraArgTypes_23));
                MR_hl_field(MR_mktag(0), Var_47, 6) = ((MR_Box) (UserArgTypes_24));
              }
              mercury__list__filter_3_p_0(TypeCtorInfo_118_118, Var_47, PredIds_27, &OneExtraStreamArgPredIds_28);
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
        Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredPieces_32, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[7])));
        Pieces_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[2])), Var_53);
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
          MR_hl_field(MR_mktag(2), Spec_34, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 29) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
          MR_hl_field(MR_mktag(2), Spec_34, 2) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(2), Spec_34, 3) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
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
        MR_Integer slot_0;
        MR_String str_1;

        {
          MR_Word Var_121;

          Var_121 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_11, Var_121);
        }
        if (!(succeeded))
        {
          MR_Word Var_123;

          Var_123 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0((MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_2[1]));
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_11, Var_123);
        }
        if (succeeded)
        {
          succeeded = (PredOrFunc_13 == (MR_Integer) 0);
          if (succeeded)
          {
            // hashed string simple lookup switch
            ;
            // compute the hash value of the input string
            ;
            slot_0 = ((MR_hash_string5(PredName_12)) & (MR_Integer) 63);
            // no collisions; no hash chain loop
            ;
            // lookup the string for this hash slot
            ;
            str_1 = ((&check_hlds__simplify__simplify_goal_call_vector_common_6[0 + slot_0]))->check_hlds__simplify__simplify_goal_call__vector_common_type_6_0__vct_6_f_0;
            // did we find a match?
            ;
            if ((((str_1 != NULL)) && ((strcmp(str_1, PredName_12) == 0))))
            {
              // we found a match; look up the results
              ;
              Dir_35 = ((&check_hlds__simplify__simplify_goal_call_vector_common_6[0 + slot_0]))->check_hlds__simplify__simplify_goal_call__vector_common_type_6_0__vct_6_f_1;
              succeeded = MR_TRUE;
              // jump out of search loop
              ;
              goto label_0;
            }
            succeeded = MR_FALSE;
          label_0:;
          }
        }
        if (succeeded)
        {
          MR_Word Var_79;
          MR_Word Var_80;
          MR_Word Var_83;
          MR_Word Var_86;
          MR_Word Var_87;
          MR_Word Var_103;
          MR_Word Var_104;
          MR_Word GoalContext_106;
          MR_Word PredPieces_107;
          MR_Word Pieces_108;
          MR_Word Spec_109;

          GoalContext_106 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_9);
          PredPieces_107 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_6, (MR_Integer) 0, PredId_7);
          {
            Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_87, 1) = ((MR_Box) (Dir_35));
          }
          {
            Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Var_87));
            MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[13])));
          }
          {
            Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[9])));
            MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_86));
          }
          {
            Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_call_scalar_common_1[8])));
            MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_83));
          }
          Var_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredPieces_107, Var_80);
          Pieces_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_call_scalar_common_1[2])), Var_79);
          {
            Var_104 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_104, 0) = ((MR_Box) (GoalContext_106));
            MR_hl_field(MR_mktag(0), Var_104, 1) = ((MR_Box) (Pieces_108));
          }
          {
            Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (Var_104));
            MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_109 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Spec_109, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.maybe_generate_warning_for_implicit_stream_predicate\'/5"));
            MR_hl_field(MR_mktag(2), Spec_109, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 29) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
            MR_hl_field(MR_mktag(2), Spec_109, 2) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(2), Spec_109, 3) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
            MR_hl_field(MR_mktag(2), Spec_109, 4) = ((MR_Box) (Var_103));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeSpec_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_109));
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
