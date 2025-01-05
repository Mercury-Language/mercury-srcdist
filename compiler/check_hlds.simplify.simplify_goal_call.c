/*
** Automatically generated from `simplify_goal_call.m'
** by the Mercury compiler,
** version rotd-2025-01-05
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
#include "counter.mih"
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
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.int_emu.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
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
#include "parse_tree.module_qual.mq_info.mih"




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
check_hlds__simplify__simplify_goal_call__IntroducedFrom__pred__maybe_generate_warning_for_implicit_stream_predicate__355__1_2_p_0(
  MR_Word IOStateType_16,
  MR_Word HeadVar__2_123);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call____Compare____maybe_all_inputs_eqv_or_svar_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call____Unify____maybe_all_inputs_eqv_or_svar_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call____Compare____maybe_all_inputs_eqv_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call____Unify____maybe_all_inputs_eqv_0_0(
  MR_Word HeadVar__1_1,
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
check_hlds__simplify__simplify_goal_call__report_bad_shift_amount_6_p_0(
  MR_String ModuleName_7,
  MR_String PredName_8,
  MR_Word GoalInfo_9,
  MR_Integer NumTargetBits_10,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_make_var_4_p_0(
  MR_Word Type_5,
  MR_Word * Var_6,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

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

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__is_useless_unsigned_comparison_5_p_0(
  MR_String ModuleName_6,
  MR_String PredName_7,
  MR_Word InstA_8,
  MR_Word InstB_9,
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
  MR_Word VarTable_3,
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


static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_1[93][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_2[5][1];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_3[4][5];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_4[1][8];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_6[5][3];


struct check_hlds__simplify__simplify_goal_call__vector_common_type_5_0_s {
  const MR_String check_hlds__simplify__simplify_goal_call__vector_common_type_5_0__vct_5_f_0;
  const MR_String check_hlds__simplify__simplify_goal_call__vector_common_type_5_0__vct_5_f_1;
};

static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_5_0_s check_hlds__simplify__simplify_goal_call_vector_common_5[96];

struct check_hlds__simplify__simplify_goal_call__vector_common_type_7_0_s {
  const MR_String check_hlds__simplify__simplify_goal_call__vector_common_type_7_0__vct_7_f_0;
  const MR_Integer check_hlds__simplify__simplify_goal_call__vector_common_type_7_0__vct_7_f_1;
};

static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_7_0_s check_hlds__simplify__simplify_goal_call_vector_common_7[45];

struct check_hlds__simplify__simplify_goal_call__vector_common_type_8_0_s {
  const MR_String check_hlds__simplify__simplify_goal_call__vector_common_type_8_0__vct_8_f_0;
  const MR_String check_hlds__simplify__simplify_goal_call__vector_common_type_8_0__vct_8_f_1;
  const MR_Word check_hlds__simplify__simplify_goal_call__vector_common_type_8_0__vct_8_f_2;
};

static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_8_0_s check_hlds__simplify__simplify_goal_call_vector_common_8[4];

struct check_hlds__simplify__simplify_goal_call__vector_common_type_9_0_s {
  const MR_String check_hlds__simplify__simplify_goal_call__vector_common_type_9_0__vct_9_f_0;
};

static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_9_0_s check_hlds__simplify__simplify_goal_call_vector_common_9[64];



static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_1[93][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The call to"))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "could have an additional argument"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "explicitly specifying a stream."))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "could be made redundant"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "by explicitly passing the"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "stream it specifies to later I/O operations."))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[7])))
  },
  /* row  13 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "procedure"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning: call to"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "obsolete"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The suggested replacement is"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The possible suggested replacements are"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning: recursive call to"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "will lead to infinite recursion."))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[27]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "leading to infinite recursion."))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[7])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "with exactly the same input arguments,"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[30])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the procedure will call itself"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[32])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "If this recursive call is executed,"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[34])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is suspicious,"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[37]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the call use state variable notation."))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[7])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "that differ between the clause head and"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[40])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "because all input argument positions"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[42])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "because variables whose names start with"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[45]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the call than in the clause head."))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[7])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "occupy different argument positions"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[48])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "scope."))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[7])))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "disable_warning [suspicious_recursion] (...)"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[52])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "wrapping the recursive call inside a"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[54])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "This warning can be disabled by"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[56])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "cannot succeed."))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[59]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "There are no"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "values <"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[7])))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "cannot fail."))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[64]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "=<"))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "all"))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "values."))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[7])))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not"))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) ">"))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "any"))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "value."))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[7])))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "All"))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "values are"))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) ">="))
  },
  /* row  79 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_2[2]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  81 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: call to"))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[82]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "with a zero divisor."))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[84]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "with a shift amount that is"))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[86]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "outside of the range"))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "to"))
  },
  /* row  90 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[58])))
  },
  /* row  91 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[36])))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_mkword(2, &check_hlds__simplify__simplify_goal_call_scalar_common_1[91]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_2[5][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "simplify_inline_builtin_inequality")) },
  /* row   3 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   4 */
  { ((MR_Box) ((MR_String) "0 (inclusive)")) },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_3[4][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_4[1][8] = {
  /* row   0 */
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

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_6[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_3[1])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_call_to_obsolete_predicate_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_3[2])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_3[3])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_3[3])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_3[2])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
};


static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_5_0_s check_hlds__simplify__simplify_goal_call_vector_common_5[96] = {
  /* row   0 */
  {
    (MR_String) "seen_binary",
    (MR_String) "input"
  },
  /* row   1 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row   2 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row   3 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row   4 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row   5 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row   6 */
  {
    (MR_String) "set_input_stream",
    (MR_String) "input"
  },
  /* row   7 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row   8 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row   9 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  10 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  11 */
  {
    (MR_String) "see_binary",
    (MR_String) "input"
  },
  /* row  12 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  13 */
  {
    (MR_String) "tell",
    (MR_String) "output"
  },
  /* row  14 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  15 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  16 */
  {
    (MR_String) "told_binary",
    (MR_String) "output"
  },
  /* row  17 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  18 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  19 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  20 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  21 */
  {
    (MR_String) "set_binary_input_stream",
    (MR_String) "input"
  },
  /* row  22 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  23 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  24 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  25 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  26 */
  {
    (MR_String) "tell_binary",
    (MR_String) "output"
  },
  /* row  27 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  28 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  29 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  30 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  31 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  32 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  33 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  34 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  35 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  36 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  37 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  38 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  39 */
  {
    (MR_String) "set_binary_output_stream",
    (MR_String) "output"
  },
  /* row  40 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  41 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  42 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  43 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  44 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  45 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  46 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  47 */
  {
    (MR_String) "seen",
    (MR_String) "input"
  },
  /* row  48 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  49 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  50 */
  {
    (MR_String) "set_output_stream",
    (MR_String) "output"
  },
  /* row  51 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  52 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  53 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  54 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  55 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  56 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  57 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  58 */
  {
    (MR_String) "see",
    (MR_String) "input"
  },
  /* row  59 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  60 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  61 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  62 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  63 */
  {
    (MR_String) "told",
    (MR_String) "output"
  },
  /* row  64 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  65 */
  {
    (MR_String) "builtin_compare_uint8",
    (MR_String) "uint8"
  },
  /* row  66 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  67 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  68 */
  {
    (MR_String) "builtin_compare_int",
    (MR_String) "int"
  },
  /* row  69 */
  {
    (MR_String) "builtin_compare_uint16",
    (MR_String) "uint16"
  },
  /* row  70 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  71 */
  {
    (MR_String) "builtin_compare_uint32",
    (MR_String) "uint32"
  },
  /* row  72 */
  {
    (MR_String) "builtin_compare_uint",
    (MR_String) "uint"
  },
  /* row  73 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  74 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  75 */
  {
    (MR_String) "builtin_compare_int8",
    (MR_String) "int8"
  },
  /* row  76 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  77 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  78 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  79 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  80 */
  {
    (MR_String) "builtin_compare_uint64",
    (MR_String) "uint64"
  },
  /* row  81 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  82 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  83 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  84 */
  {
    (MR_String) "builtin_compare_int64",
    (MR_String) "int64"
  },
  /* row  85 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  86 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  87 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  88 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  89 */
  {
    (MR_String) "builtin_compare_int32",
    (MR_String) "int32"
  },
  /* row  90 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  91 */
  {
    (MR_String) "builtin_compare_int16",
    (MR_String) "int16"
  },
  /* row  92 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  93 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  94 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  95 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
};

static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_7_0_s check_hlds__simplify__simplify_goal_call_vector_common_7[45] = {
  /* row   0 */
  {
    (MR_String) "uint",
    (MR_Integer) 0
  },
  /* row   1 */
  {
    (MR_String) "uint16",
    (MR_Integer) 1
  },
  /* row   2 */
  {
    (MR_String) "uint32",
    (MR_Integer) 2
  },
  /* row   3 */
  {
    (MR_String) "uint64",
    (MR_Integer) 3
  },
  /* row   4 */
  {
    (MR_String) "uint8",
    (MR_Integer) 4
  },
  /* row   5 */
  {
    (MR_String) "<",
    (MR_Integer) 0
  },
  /* row   6 */
  {
    (MR_String) "=<",
    (MR_Integer) 1
  },
  /* row   7 */
  {
    (MR_String) ">",
    (MR_Integer) 2
  },
  /* row   8 */
  {
    (MR_String) ">=",
    (MR_Integer) 3
  },
  /* row   9 */
  {
    (MR_String) "<",
    (MR_Integer) 0
  },
  /* row  10 */
  {
    (MR_String) "=<",
    (MR_Integer) 1
  },
  /* row  11 */
  {
    (MR_String) ">",
    (MR_Integer) 0
  },
  /* row  12 */
  {
    (MR_String) ">=",
    (MR_Integer) 1
  },
  /* row  13 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  14 */
  {
    (MR_String) "times_bits_per_int",
    (MR_Integer) -1
  },
  /* row  15 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  16 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  17 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  18 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  19 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  20 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  21 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  22 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  23 */
  {
    (MR_String) "<<",
    (MR_Integer) -1
  },
  /* row  24 */
  {
    (MR_String) "rem",
    (MR_Integer) -1
  },
  /* row  25 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  26 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  27 */
  {
    (MR_String) "/",
    (MR_Integer) -1
  },
  /* row  28 */
  {
    (MR_String) "=<",
    (MR_Integer) -1
  },
  /* row  29 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  30 */
  {
    (MR_String) ">=",
    (MR_Integer) -1
  },
  /* row  31 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  32 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  33 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  34 */
  {
    (MR_String) "rem_bits_per_int",
    (MR_Integer) -1
  },
  /* row  35 */
  {
    (MR_String) ">>",
    (MR_Integer) -1
  },
  /* row  36 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  37 */
  {
    (MR_String) "//",
    (MR_Integer) -1
  },
  /* row  38 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  39 */
  {
    (MR_String) ">>u",
    (MR_Integer) -1
  },
  /* row  40 */
  {
    (MR_String) "quot_bits_per_int",
    (MR_Integer) -1
  },
  /* row  41 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  42 */
  {
    (MR_String) "<",
    (MR_Integer) 1
  },
  /* row  43 */
  {
    (MR_String) "<<u",
    (MR_Integer) -1
  },
  /* row  44 */
  {
    (MR_String) ">",
    (MR_Integer) -1
  },
};

static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_8_0_s check_hlds__simplify__simplify_goal_call_vector_common_8[4] = {
  /* row   0 */
  {
    (MR_String) "\100<",
    (MR_String) "<",
    (MR_Integer) 0
  },
  /* row   1 */
  {
    (MR_String) "\100=<",
    (MR_String) ">",
    (MR_Integer) 1
  },
  /* row   2 */
  {
    (MR_String) "\100>",
    (MR_String) ">",
    (MR_Integer) 0
  },
  /* row   3 */
  {
    (MR_String) "\100>=",
    (MR_String) "<",
    (MR_Integer) 1
  },
};

static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_9_0_s check_hlds__simplify__simplify_goal_call_vector_common_9[64] = {
  /* row   0 */   { NULL },
  /* row   1 */   { NULL },
  /* row   2 */   { NULL },
  /* row   3 */   { (MR_String) "uint32" },
  /* row   4 */   { NULL },
  /* row   5 */   { NULL },
  /* row   6 */   { NULL },
  /* row   7 */   { (MR_String) "int16" },
  /* row   8 */   { (MR_String) "int" },
  /* row   9 */   { NULL },
  /* row  10 */   { NULL },
  /* row  11 */   { NULL },
  /* row  12 */   { NULL },
  /* row  13 */   { (MR_String) "uint8" },
  /* row  14 */   { (MR_String) "private_builtin" },
  /* row  15 */   { NULL },
  /* row  16 */   { (MR_String) "builtin" },
  /* row  17 */   { NULL },
  /* row  18 */   { NULL },
  /* row  19 */   { NULL },
  /* row  20 */   { (MR_String) "uint" },
  /* row  21 */   { NULL },
  /* row  22 */   { NULL },
  /* row  23 */   { (MR_String) "int8" },
  /* row  24 */   { NULL },
  /* row  25 */   { NULL },
  /* row  26 */   { NULL },
  /* row  27 */   { NULL },
  /* row  28 */   { (MR_String) "uint64" },
  /* row  29 */   { NULL },
  /* row  30 */   { NULL },
  /* row  31 */   { NULL },
  /* row  32 */   { NULL },
  /* row  33 */   { (MR_String) "uint16" },
  /* row  34 */   { NULL },
  /* row  35 */   { NULL },
  /* row  36 */   { NULL },
  /* row  37 */   { (MR_String) "int32" },
  /* row  38 */   { NULL },
  /* row  39 */   { NULL },
  /* row  40 */   { NULL },
  /* row  41 */   { NULL },
  /* row  42 */   { NULL },
  /* row  43 */   { NULL },
  /* row  44 */   { NULL },
  /* row  45 */   { NULL },
  /* row  46 */   { NULL },
  /* row  47 */   { NULL },
  /* row  48 */   { (MR_String) "int64" },
  /* row  49 */   { NULL },
  /* row  50 */   { NULL },
  /* row  51 */   { NULL },
  /* row  52 */   { NULL },
  /* row  53 */   { NULL },
  /* row  54 */   { NULL },
  /* row  55 */   { NULL },
  /* row  56 */   { NULL },
  /* row  57 */   { NULL },
  /* row  58 */   { NULL },
  /* row  59 */   { NULL },
  /* row  60 */   { NULL },
  /* row  61 */   { NULL },
  /* row  62 */   { NULL },
  /* row  63 */   { NULL },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_call__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_call__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
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
  { check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_name_ordered_maybe_all_inputs_eqv_0 },
  { check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_ordinal_ordered_maybe_all_inputs_eqv_0 },
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
  { check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_name_ordered_maybe_all_inputs_eqv_or_svar_0 },
  { check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__enum_ordinal_ordered_maybe_all_inputs_eqv_or_svar_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__simplify__simplify_goal_call__check_hlds__simplify__simplify_goal_call__functor_number_map_maybe_all_inputs_eqv_or_svar_0,

};

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__IntroducedFrom__pred__maybe_generate_warning_for_implicit_stream_predicate__355__1_2_p_0(
  MR_Word IOStateType_16,
  MR_Word HeadVar__2_123)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(IOStateType_16, HeadVar__2_123);
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call____Compare____maybe_all_inputs_eqv_or_svar_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call____Unify____maybe_all_inputs_eqv_or_svar_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call____Compare____maybe_all_inputs_eqv_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call____Unify____maybe_all_inputs_eqv_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_Word MR_CALL 
check_hlds__simplify__simplify_goal_call__wrap_sym_name_arity_1_f_0(
  MR_Word SymNameAndArity_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 11U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (SymNameAndArity_3));
  }
  return HeadVar__2_2;
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__one_extra_stream_arg_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Integer NumExtraArgs_7,
  MR_Word BaseExtraArgTypes_8,
  MR_Word BaseUserArgTypes_9,
  MR_Word PredId_10)
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
    TypeInfo_25_25 = (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[13]);
    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ExtraArgTypes_13)), ((MR_Box) (BaseExtraArgTypes_8)));
    if (succeeded)
    {
      succeeded = (UserArgTypes_14 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        HeadUserArgType_15 = ((MR_Word) ((MR_hl_field(1, UserArgTypes_14, (MR_Integer) 0))));
        TailUserArgTypes_16 = ((MR_Word) ((MR_hl_field(1, UserArgTypes_14, (MR_Integer) 1))));
        TypeInfo_26_26 = (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[13]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (TailUserArgTypes_16)), ((MR_Box) (BaseUserArgTypes_9)));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) HeadUserArgType_15)) == (MR_Integer) 1);
          if (succeeded)
          {
            HeadUserArgTypeSymName_17 = ((MR_Word) ((MR_hl_field(1, HeadUserArgType_15, (MR_Integer) 0))));
            Var_19 = ((MR_Word) ((MR_hl_field(1, HeadUserArgType_15, (MR_Integer) 1))));
            Var_20 = ((MR_Word) ((MR_hl_field(1, HeadUserArgType_15, (MR_Integer) 2))));
            succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) HeadUserArgTypeSymName_17)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_21 = ((MR_Word) ((MR_hl_field(1, HeadUserArgTypeSymName_17, (MR_Integer) 0))));
                  HeadUserArgTypeName_18 = ((MR_String) ((MR_hl_field(1, HeadUserArgTypeSymName_17, (MR_Integer) 1))));
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

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__make_arg_always_boxed_2_p_0(
  MR_Word STATE_VARIABLE_Arg_0_4,
  MR_Word * STATE_VARIABLE_Arg_5)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Arg_0_4, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Arg_0_4, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Arg_0_4, (MR_Integer) 2))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Arg_5 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
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
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__2_2;

  conv3_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Arg_5;

  check_hlds__simplify__simplify_goal_call__make_arg_always_boxed_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_STATE_VARIABLE_Arg_5);
  *wrapper_arg_2 = ((MR_Box) (conv2_STATE_VARIABLE_Arg_5));
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Arg_5;

  check_hlds__simplify__simplify_goal_call__make_arg_always_boxed_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_STATE_VARIABLE_Arg_5);
  *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_Arg_5));
}

static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
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
  MR_bool succeeded;
  MR_Word Attributes_18 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 1))));
  MR_Word PredId_19 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 2))));
  MR_Integer ProcId_20 = ((MR_Integer) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 3))));
  MR_Word Args0_21 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 4))));
  MR_Word ExtraArgs0_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 5))));
  MR_Word MaybeTraceRuntimeCond_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 6))));
  MR_Word Impl_24 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 7))));
  MR_Word ImprovedGoalExpr_32;
  MR_Word STATE_VARIABLE_GoalInfo_48_48;
  MR_Word STATE_VARIABLE_Info_49_49;
  MR_Word TypeCtorInfo_57_57;
  MR_Word TypeInfo_58_58;
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
        TypeCtorInfo_57_57 = (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0);
        TypeInfo_58_58 = (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[0]);
        Var_47 = (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_6[1]);
        ArgVars_31 = mercury__list__map_2_f_0(TypeCtorInfo_57_57, TypeInfo_58_58, Var_47, Args0_21);
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
          mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_6[2]), Args0_21, &Args_34);
          mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_6[3]), ExtraArgs0_22, &ExtraArgs_35);
          {
            GoalExpr1_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, GoalExpr1_36, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, GoalExpr1_36, 1) = ((MR_Box) (Attributes_18));
            MR_hl_field(3, GoalExpr1_36, 2) = ((MR_Box) (PredId_19));
            MR_hl_field(3, GoalExpr1_36, 3) = ((MR_Box) (ProcId_20));
            MR_hl_field(3, GoalExpr1_36, 4) = ((MR_Box) (Args_34));
            MR_hl_field(3, GoalExpr1_36, 5) = ((MR_Box) (ExtraArgs_35));
            MR_hl_field(3, GoalExpr1_36, 6) = ((MR_Box) (MaybeTraceRuntimeCond_23));
            MR_hl_field(3, GoalExpr1_36, 7) = ((MR_Box) (Impl_24));
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

      ArgVars_56 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[0]), (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_6[4]), Args_34);
      Purity_38 = hlds__hlds_goal__goal_info_get_purity_1_f_0(STATE_VARIABLE_GoalInfo_0_41);
      check_hlds__simplify__common__common_optimise_call_11_p_0(PredId_19, ProcId_20, ArgVars_56, Purity_38, STATE_VARIABLE_GoalInfo_0_41, GoalExpr1_36, &MaybeAssignsGoalExpr_39, STATE_VARIABLE_Common_0_43, STATE_VARIABLE_Common_44, STATE_VARIABLE_Info_0_45, STATE_VARIABLE_Info_46);
      succeeded = (OptDuplicateCalls_37 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (MaybeAssignsGoalExpr_39 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          AssignsGoalExpr_40 = ((MR_Word) ((MR_hl_field(1, MaybeAssignsGoalExpr_39, (MR_Integer) 0))));
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
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39)
{
  check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_53_44_32_54_93_95_48_10_p_0(GoalExpr0_11, GoalExpr_12, GoalInfo_13, GoalInfo_4, Common0_16, Common_17, STATE_VARIABLE_Info_0_38, STATE_VARIABLE_Info_39);
}

void MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_53_44_32_54_93_95_48_10_p_0(
  MR_Word GoalExpr0_11,
  MR_Word * GoalExpr_12,
  MR_Word GoalInfo_13,
  MR_Word * GoalInfo_4,
  MR_Word Common0_16,
  MR_Word * Common_17,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39)
{
  MR_bool succeeded;
  MR_Word GenericCall_19;
  MR_Word Args_20;
  MR_Word Modes_21;
  MR_Word Det_23;

  *GoalInfo_4 = GoalInfo_13;
  GenericCall_19 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 1))));
  Args_20 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 2))));
  Modes_21 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 3))));
  Det_23 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 5))) & (MR_Integer) 7);
  switch (MR_tag((MR_Word) GenericCall_19)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Closure_24 = ((MR_Word) ((MR_hl_field(0, GenericCall_19, (MR_Integer) 0))));
        MR_Word Purity_25 = ((((MR_Unsigned) ((MR_hl_field(0, GenericCall_19, (MR_Integer) 1))) >> 1)) & (MR_Integer) 3);
        MR_Word OptDuplicateCalls_29;

        succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(STATE_VARIABLE_Info_0_38, &OptDuplicateCalls_29);
        if (succeeded)
        {
          MR_Word MaybeAssignsGoalExpr_30;
          MR_Word AssignsGoalExpr_31;

          check_hlds__simplify__common__common_optimise_higher_order_call_12_p_0(Closure_24, Args_20, Modes_21, Det_23, Purity_25, GoalInfo_13, GoalExpr0_11, &MaybeAssignsGoalExpr_30, Common0_16, Common_17, STATE_VARIABLE_Info_0_38, STATE_VARIABLE_Info_39);
          succeeded = (OptDuplicateCalls_29 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (MaybeAssignsGoalExpr_30 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              AssignsGoalExpr_31 = ((MR_Word) ((MR_hl_field(1, MaybeAssignsGoalExpr_30, (MR_Integer) 0))));
          }
          if (succeeded)
            *GoalExpr_12 = AssignsGoalExpr_31;
          else
            *GoalExpr_12 = GoalExpr0_11;
        }
        else
        {
          *GoalExpr_12 = GoalExpr0_11;
          *Common_17 = Common0_16;
          *STATE_VARIABLE_Info_39 = STATE_VARIABLE_Info_0_38;
        }
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 3:
      {
        *GoalExpr_12 = GoalExpr0_11;
        *Common_17 = Common0_16;
        *STATE_VARIABLE_Info_39 = STATE_VARIABLE_Info_0_38;
      }
      break;
    case (MR_Integer) 2:
      {
        check_hlds__simplify__simplify_info__simplify_info_set_has_user_event_3_p_0((MR_Integer) 0, STATE_VARIABLE_Info_0_38, STATE_VARIABLE_Info_39);
        *GoalExpr_12 = GoalExpr0_11;
        *Common_17 = Common0_16;
      }
      break;
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
  MR_bool succeeded;
  MR_Word PredId_19 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_11, (MR_Integer) 0))));
  MR_Integer ProcId_20 = ((MR_Integer) ((MR_hl_field(2, GoalExpr0_11, (MR_Integer) 1))));
  MR_Word Args_21 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_11, (MR_Integer) 2))));
  MR_Word IsBuiltin_22 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr0_11, (MR_Integer) 3))) & (MR_Integer) 1);
  MR_Word ModuleInfo_25;
  MR_Word PredInfo_26;
  MR_Word ProcInfo_27;
  MR_Word ModuleSymName_30;
  MR_Word Globals_31;
  MR_Word STATE_VARIABLE_Info_45_45;
  MR_Word STATE_VARIABLE_Info_46_46;
  MR_Word STATE_VARIABLE_Info_47_47;
  MR_Word STATE_VARIABLE_Info_48_48;
  MR_Word ModuleSymName_57;
  MR_String ModuleName_58;
  MR_Word ArgA_59;
  MR_Word ArgB_60;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_71;
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
      MR_Word ImplicitStreamSpec_29 = ((MR_Word) ((MR_hl_field(1, MaybeImplicitStreamSpec_28, (MR_Integer) 0))));

      check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(ImplicitStreamSpec_29, STATE_VARIABLE_Info_0_43, &STATE_VARIABLE_Info_45_45);
    }
  }
  else
    STATE_VARIABLE_Info_45_45 = STATE_VARIABLE_Info_0_43;
  check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_call_to_obsolete_predicate_7_p_0(PredId_19, ProcId_20, PredInfo_26, ProcInfo_27, GoalInfo0_13, STATE_VARIABLE_Info_45_45, &STATE_VARIABLE_Info_46_46);
  check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0(PredId_19, ProcId_20, Args_21, IsBuiltin_22, PredInfo_26, ProcInfo_27, GoalInfo0_13, NestedContext_15, STATE_VARIABLE_Common_0_41, STATE_VARIABLE_Info_46_46, &STATE_VARIABLE_Info_47_47);
  ModuleSymName_57 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_26);
  succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(ModuleSymName_57, &ModuleName_58);
  if (succeeded)
  {
    succeeded = (Args_21 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgA_59 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 0))));
      Var_69 = ((MR_Word) ((MR_hl_field(1, Args_21, (MR_Integer) 1))));
      succeeded = (Var_69 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgB_60 = ((MR_Word) ((MR_hl_field(1, Var_69, (MR_Integer) 0))));
        Var_70 = ((MR_Word) ((MR_hl_field(1, Var_69, (MR_Integer) 1))));
        succeeded = (Var_70 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_71 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_26);
          succeeded = (Var_71 == (MR_Integer) 0);
          if (succeeded)
            succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_simple_code_1_p_0(STATE_VARIABLE_Info_47_47);
        }
      }
    }
  }
  if (succeeded)
  {
    MR_String PredName_61;
    MR_Word InstA_62;
    MR_Word InstB_63;
    MR_Word WarnPieces_64;

    hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfo_26, &PredName_61);
    hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_16, ArgA_59, &InstA_62);
    hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_16, ArgB_60, &InstB_63);
    succeeded = check_hlds__simplify__simplify_goal_call__is_useless_unsigned_comparison_5_p_0(ModuleName_58, PredName_61, InstA_62, InstB_63, &WarnPieces_64);
    if (succeeded)
    {
      MR_Word GoalContext_65;
      MR_Word PredPieces_66;
      MR_Word Pieces_67;
      MR_Word Spec_68;
      MR_Word Var_80;

      GoalContext_65 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_13);
      PredPieces_66 = hlds__hlds_error_util__describe_one_pred_info_name_4_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])), (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), PredInfo_26);
      Var_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredPieces_66, WarnPieces_64);
      Pieces_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[19])), Var_80);
      {
        Spec_68 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_68, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.maybe_generate_warning_for_useless_comparison\'/6"));
        MR_hl_field(0, Spec_68, 1) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(0, Spec_68, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_2[1])));
        MR_hl_field(0, Spec_68, 3) = ((MR_Box) (GoalContext_65));
        MR_hl_field(0, Spec_68, 4) = ((MR_Box) (Pieces_67));
      }
      check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_68, STATE_VARIABLE_Info_47_47, &STATE_VARIABLE_Info_48_48);
    }
    else
      STATE_VARIABLE_Info_48_48 = STATE_VARIABLE_Info_47_47;
  }
  else
    STATE_VARIABLE_Info_48_48 = STATE_VARIABLE_Info_47_47;
  ModuleSymName_30 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_26);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_25, &Globals_31);
  succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(ModuleSymName_30, &ModuleName_32);
  if (succeeded)
  {
    MR_String PredName_33;
    MR_Integer ModeNum_34;
    MR_Word VarTable_35;
    MR_Word EvaluatedGoalExpr_36;
    MR_Word EvaluatedGoalInfo_37;

    PredName_33 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_26);
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_20, &ModeNum_34);
    check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(STATE_VARIABLE_Info_48_48, &VarTable_35);
    succeeded = check_hlds__simplify__simplify_info__simplify_do_const_prop_1_p_0(STATE_VARIABLE_Info_48_48);
    if (succeeded)
      succeeded = transform_hlds__const_prop__evaluate_call_10_p_0(Globals_31, VarTable_35, InstMap0_16, ModuleName_32, PredName_33, ModeNum_34, Args_21, &EvaluatedGoalExpr_36, GoalInfo0_13, &EvaluatedGoalInfo_37);
    if (succeeded)
    {
      *GoalExpr_12 = EvaluatedGoalExpr_36;
      *GoalInfo_14 = EvaluatedGoalInfo_37;
      check_hlds__simplify__simplify_info__simplify_info_set_rerun_quant_instmap_delta_2_p_0(STATE_VARIABLE_Info_48_48, STATE_VARIABLE_Info_44);
      *STATE_VARIABLE_Common_42 = STATE_VARIABLE_Common_0_41;
    }
    else
    {
      MR_Word OptDupCalls_86;

      succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(STATE_VARIABLE_Info_48_48, &OptDupCalls_86);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Info_51_51;
        MR_Word Purity_87;
        MR_Word MaybeAssignsGoalExpr0_88;
        MR_Word _AssignsGoalExpr0_89;

        Purity_87 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo0_13);
        check_hlds__simplify__common__common_optimise_call_11_p_0(PredId_19, ProcId_20, Args_21, Purity_87, GoalInfo0_13, GoalExpr0_11, &MaybeAssignsGoalExpr0_88, STATE_VARIABLE_Common_0_41, STATE_VARIABLE_Common_42, STATE_VARIABLE_Info_48_48, &STATE_VARIABLE_Info_51_51);
        succeeded = (MaybeAssignsGoalExpr0_88 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          _AssignsGoalExpr0_89 = ((MR_Word) ((MR_hl_field(1, MaybeAssignsGoalExpr0_88, (MR_Integer) 0))));
          succeeded = (OptDupCalls_86 == (MR_Integer) 0);
        }
        if (succeeded)
        {
          *GoalExpr_12 = _AssignsGoalExpr0_89;
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
        MR_Word ImprovedGoalExpr_95;
        MR_Word ImprovedGoalInfo_96;
        MR_Word STATE_VARIABLE_Info_52_97;

        *STATE_VARIABLE_Common_42 = STATE_VARIABLE_Common_0_41;
        succeeded = check_hlds__simplify__simplify_goal_call__simplify_improve_library_call_11_p_0(InstMap0_16, ModuleName_32, PredName_33, ModeNum_34, Args_21, GoalExpr0_11, &ImprovedGoalExpr_95, GoalInfo0_13, &ImprovedGoalInfo_96, STATE_VARIABLE_Info_48_48, &STATE_VARIABLE_Info_52_97);
        if (succeeded)
        {
          *STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_52_97;
          *GoalExpr_12 = ImprovedGoalExpr_95;
          *GoalInfo_14 = ImprovedGoalInfo_96;
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
    MR_Word OptDupCalls_90;

    succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(STATE_VARIABLE_Info_48_48, &OptDupCalls_90);
    if (succeeded)
    {
      MR_Word Purity_91;
      MR_Word MaybeAssignsGoalExpr0_92;
      MR_Word _AssignsGoalExpr0_93;

      Purity_91 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo0_13);
      check_hlds__simplify__common__common_optimise_call_11_p_0(PredId_19, ProcId_20, Args_21, Purity_91, GoalInfo0_13, GoalExpr0_11, &MaybeAssignsGoalExpr0_92, STATE_VARIABLE_Common_0_41, STATE_VARIABLE_Common_42, STATE_VARIABLE_Info_48_48, STATE_VARIABLE_Info_44);
      succeeded = (MaybeAssignsGoalExpr0_92 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        _AssignsGoalExpr0_93 = ((MR_Word) ((MR_hl_field(1, MaybeAssignsGoalExpr0_92, (MR_Integer) 0))));
        succeeded = (OptDupCalls_90 == (MR_Integer) 0);
      }
      if (succeeded)
      {
        *GoalExpr_12 = _AssignsGoalExpr0_93;
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
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_Info_39_39;
  MR_Integer slot_6 = ((MR_hash_string6(ModuleName_13)) & (MR_Integer) 63);
  MR_String str_7 = ((&check_hlds__simplify__simplify_goal_call_vector_common_9[0 + slot_6]))->check_hlds__simplify__simplify_goal_call__vector_common_type_9_0__vct_9_f_0;

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
            MR_Word ModuleInfo_79;
            MR_Word Globals_80;
            MR_Word Pregen_81;

            check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_34, &ModuleInfo_79);
            hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_79, &Globals_80);
            libs__globals__lookup_bool_option_3_p_0(Globals_80, (MR_Integer) 294, &Pregen_81);
            switch (Pregen_81) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_12_p_0((MR_Integer) 7, InstMap0_12, ModuleName_13, PredName_14, Args_16, GoalExpr0_17, ImprovedGoalExpr_18, GoalInfo0_19, ImprovedGoalInfo_20, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_39_39);
                break;
              case (MR_Integer) 1:
                {
                  succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_14, Args_16, ImprovedGoalExpr_18);
                  if (succeeded)
                  {
                    *ImprovedGoalInfo_20 = GoalInfo0_19;
                    STATE_VARIABLE_Info_39_39 = STATE_VARIABLE_Info_0_34;
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
            MR_Word ModuleInfo_49;
            MR_Word Globals_50;
            MR_Word Pregen_51;

            check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_34, &ModuleInfo_49);
            hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_49, &Globals_50);
            libs__globals__lookup_bool_option_3_p_0(Globals_50, (MR_Integer) 294, &Pregen_51);
            switch (Pregen_51) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_12_p_0((MR_Integer) 4, InstMap0_12, ModuleName_13, PredName_14, Args_16, GoalExpr0_17, ImprovedGoalExpr_18, GoalInfo0_19, ImprovedGoalInfo_20, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_39_39);
                break;
              case (MR_Integer) 1:
                {
                  succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_14, Args_16, ImprovedGoalExpr_18);
                  if (succeeded)
                  {
                    *ImprovedGoalInfo_20 = GoalInfo0_19;
                    STATE_VARIABLE_Info_39_39 = STATE_VARIABLE_Info_0_34;
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
            libs__globals__lookup_bool_option_3_p_0(Globals_32, (MR_Integer) 294, &Pregen_33);
            switch (Pregen_33) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_12_p_0((MR_Integer) 0, InstMap0_12, ModuleName_13, PredName_14, Args_16, GoalExpr0_17, ImprovedGoalExpr_18, GoalInfo0_19, ImprovedGoalInfo_20, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_39_39);
                break;
              case (MR_Integer) 1:
                {
                  succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_14, Args_16, ImprovedGoalExpr_18);
                  if (succeeded)
                  {
                    *ImprovedGoalInfo_20 = GoalInfo0_19;
                    STATE_VARIABLE_Info_39_39 = STATE_VARIABLE_Info_0_34;
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
            MR_Word ModuleInfo_89;
            MR_Word Globals_90;
            MR_Word Pregen_91;

            check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_34, &ModuleInfo_89);
            hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_89, &Globals_90);
            libs__globals__lookup_bool_option_3_p_0(Globals_90, (MR_Integer) 294, &Pregen_91);
            switch (Pregen_91) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_12_p_0((MR_Integer) 3, InstMap0_12, ModuleName_13, PredName_14, Args_16, GoalExpr0_17, ImprovedGoalExpr_18, GoalInfo0_19, ImprovedGoalInfo_20, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_39_39);
                break;
              case (MR_Integer) 1:
                {
                  succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_14, Args_16, ImprovedGoalExpr_18);
                  if (succeeded)
                  {
                    *ImprovedGoalInfo_20 = GoalInfo0_19;
                    STATE_VARIABLE_Info_39_39 = STATE_VARIABLE_Info_0_34;
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
            MR_String TypeName_27;
            MR_Word R_28;
            MR_Word Context_29;
            MR_Word Var_40;
            MR_Word Var_41;
            MR_Word Var_42;
            MR_Word X_46;
            MR_Word Y_47;
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
              str_5 = ((&check_hlds__simplify__simplify_goal_call_vector_common_5[64 + slot_4]))->check_hlds__simplify__simplify_goal_call__vector_common_type_5_0__vct_5_f_0;
              // did we find a match?
              ;
              if ((((str_5 != NULL)) && ((strcmp(str_5, PredName_14) == 0))))
              {
                // we found a match; look up the results
                ;
                TypeName_27 = ((&check_hlds__simplify__simplify_goal_call_vector_common_5[64 + slot_4]))->check_hlds__simplify__simplify_goal_call__vector_common_type_5_0__vct_5_f_1;
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
                  R_28 = ((MR_Word) ((MR_hl_field(1, Args_16, (MR_Integer) 0))));
                  Var_40 = ((MR_Word) ((MR_hl_field(1, Args_16, (MR_Integer) 1))));
                  succeeded = (Var_40 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    X_46 = ((MR_Word) ((MR_hl_field(1, Var_40, (MR_Integer) 0))));
                    Var_41 = ((MR_Word) ((MR_hl_field(1, Var_40, (MR_Integer) 1))));
                    succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Y_47 = ((MR_Word) ((MR_hl_field(1, Var_41, (MR_Integer) 0))));
                      Var_42 = ((MR_Word) ((MR_hl_field(1, Var_41, (MR_Integer) 1))));
                      succeeded = (Var_42 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Context_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_19);
                        check_hlds__simplify__simplify_goal_call__simplify_improve_builtin_compare_int_uint_8_p_0(STATE_VARIABLE_Info_0_34, TypeName_27, R_28, X_46, Y_47, Context_29, ImprovedGoalExpr_18, ImprovedGoalInfo_20);
                        STATE_VARIABLE_Info_39_39 = STATE_VARIABLE_Info_0_34;
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
            MR_String Inequality_22;
            MR_Word Invert_23;
            MR_Word TI_24;
            MR_Word X_25;
            MR_Word Y_26;
            MR_Word Var_36;
            MR_Word Var_37;
            MR_Word Var_38;
            MR_Integer lo_0 = (MR_Integer) 0;
            MR_Integer hi_1 = (MR_Integer) 3;
            MR_Integer mid_2;
            MR_Integer result_3;

            // binary string simple lookup switch
            ;
            do
            {
              mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
              result_3 = MR_strcmp(PredName_14, ((&check_hlds__simplify__simplify_goal_call_vector_common_8[0 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_8_0__vct_8_f_0);
              if ((result_3 == (MR_Integer) 0))
              {
                Inequality_22 = ((&check_hlds__simplify__simplify_goal_call_vector_common_8[0 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_8_0__vct_8_f_1;
                Invert_23 = ((&check_hlds__simplify__simplify_goal_call_vector_common_8[0 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_8_0__vct_8_f_2;
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
            if (succeeded)
            {
              succeeded = (Args_16 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TI_24 = ((MR_Word) ((MR_hl_field(1, Args_16, (MR_Integer) 0))));
                Var_36 = ((MR_Word) ((MR_hl_field(1, Args_16, (MR_Integer) 1))));
                succeeded = (Var_36 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  X_25 = ((MR_Word) ((MR_hl_field(1, Var_36, (MR_Integer) 0))));
                  Var_37 = ((MR_Word) ((MR_hl_field(1, Var_36, (MR_Integer) 1))));
                  succeeded = (Var_37 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Y_26 = ((MR_Word) ((MR_hl_field(1, Var_37, (MR_Integer) 0))));
                    Var_38 = ((MR_Word) ((MR_hl_field(1, Var_37, (MR_Integer) 1))));
                    succeeded = (Var_38 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(TI_24, X_25, Y_26, Inequality_22, Invert_23, GoalInfo0_19, ImprovedGoalExpr_18, InstMap0_12, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_39_39);
                      *ImprovedGoalInfo_20 = GoalInfo0_19;
                      succeeded = MR_TRUE;
                    }
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 20:
        {
          // case "uint"
          ;
          {
            MR_Word ModuleInfo_69;
            MR_Word Globals_70;
            MR_Word Pregen_71;

            check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_34, &ModuleInfo_69);
            hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_69, &Globals_70);
            libs__globals__lookup_bool_option_3_p_0(Globals_70, (MR_Integer) 294, &Pregen_71);
            switch (Pregen_71) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_12_p_0((MR_Integer) 1, InstMap0_12, ModuleName_13, PredName_14, Args_16, GoalExpr0_17, ImprovedGoalExpr_18, GoalInfo0_19, ImprovedGoalInfo_20, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_39_39);
                break;
              case (MR_Integer) 1:
                {
                  succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_14, Args_16, ImprovedGoalExpr_18);
                  if (succeeded)
                  {
                    *ImprovedGoalInfo_20 = GoalInfo0_19;
                    STATE_VARIABLE_Info_39_39 = STATE_VARIABLE_Info_0_34;
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
            MR_Word ModuleInfo_64;
            MR_Word Globals_65;
            MR_Word Pregen_66;

            check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_34, &ModuleInfo_64);
            hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_64, &Globals_65);
            libs__globals__lookup_bool_option_3_p_0(Globals_65, (MR_Integer) 294, &Pregen_66);
            switch (Pregen_66) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_12_p_0((MR_Integer) 2, InstMap0_12, ModuleName_13, PredName_14, Args_16, GoalExpr0_17, ImprovedGoalExpr_18, GoalInfo0_19, ImprovedGoalInfo_20, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_39_39);
                break;
              case (MR_Integer) 1:
                {
                  succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_14, Args_16, ImprovedGoalExpr_18);
                  if (succeeded)
                  {
                    *ImprovedGoalInfo_20 = GoalInfo0_19;
                    STATE_VARIABLE_Info_39_39 = STATE_VARIABLE_Info_0_34;
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
            MR_Word ModuleInfo_84;
            MR_Word Globals_85;
            MR_Word Pregen_86;

            check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_34, &ModuleInfo_84);
            hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_84, &Globals_85);
            libs__globals__lookup_bool_option_3_p_0(Globals_85, (MR_Integer) 294, &Pregen_86);
            switch (Pregen_86) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_12_p_0((MR_Integer) 9, InstMap0_12, ModuleName_13, PredName_14, Args_16, GoalExpr0_17, ImprovedGoalExpr_18, GoalInfo0_19, ImprovedGoalInfo_20, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_39_39);
                break;
              case (MR_Integer) 1:
                {
                  succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_14, Args_16, ImprovedGoalExpr_18);
                  if (succeeded)
                  {
                    *ImprovedGoalInfo_20 = GoalInfo0_19;
                    STATE_VARIABLE_Info_39_39 = STATE_VARIABLE_Info_0_34;
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
            MR_Word ModuleInfo_74;
            MR_Word Globals_75;
            MR_Word Pregen_76;

            check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_34, &ModuleInfo_74);
            hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_74, &Globals_75);
            libs__globals__lookup_bool_option_3_p_0(Globals_75, (MR_Integer) 294, &Pregen_76);
            switch (Pregen_76) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_12_p_0((MR_Integer) 5, InstMap0_12, ModuleName_13, PredName_14, Args_16, GoalExpr0_17, ImprovedGoalExpr_18, GoalInfo0_19, ImprovedGoalInfo_20, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_39_39);
                break;
              case (MR_Integer) 1:
                {
                  succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_14, Args_16, ImprovedGoalExpr_18);
                  if (succeeded)
                  {
                    *ImprovedGoalInfo_20 = GoalInfo0_19;
                    STATE_VARIABLE_Info_39_39 = STATE_VARIABLE_Info_0_34;
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
            MR_Word ModuleInfo_54;
            MR_Word Globals_55;
            MR_Word Pregen_56;

            check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_34, &ModuleInfo_54);
            hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_54, &Globals_55);
            libs__globals__lookup_bool_option_3_p_0(Globals_55, (MR_Integer) 294, &Pregen_56);
            switch (Pregen_56) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_12_p_0((MR_Integer) 6, InstMap0_12, ModuleName_13, PredName_14, Args_16, GoalExpr0_17, ImprovedGoalExpr_18, GoalInfo0_19, ImprovedGoalInfo_20, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_39_39);
                break;
              case (MR_Integer) 1:
                {
                  succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_14, Args_16, ImprovedGoalExpr_18);
                  if (succeeded)
                  {
                    *ImprovedGoalInfo_20 = GoalInfo0_19;
                    STATE_VARIABLE_Info_39_39 = STATE_VARIABLE_Info_0_34;
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
            MR_Word ModuleInfo_59;
            MR_Word Globals_60;
            MR_Word Pregen_61;

            check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_34, &ModuleInfo_59);
            hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_59, &Globals_60);
            libs__globals__lookup_bool_option_3_p_0(Globals_60, (MR_Integer) 294, &Pregen_61);
            switch (Pregen_61) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_12_p_0((MR_Integer) 8, InstMap0_12, ModuleName_13, PredName_14, Args_16, GoalExpr0_17, ImprovedGoalExpr_18, GoalInfo0_19, ImprovedGoalInfo_20, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_39_39);
                break;
              case (MR_Integer) 1:
                {
                  succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_14, Args_16, ImprovedGoalExpr_18);
                  if (succeeded)
                  {
                    *ImprovedGoalInfo_20 = GoalInfo0_19;
                    STATE_VARIABLE_Info_39_39 = STATE_VARIABLE_Info_0_34;
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
    check_hlds__simplify__simplify_info__simplify_info_set_rerun_quant_instmap_delta_2_p_0(STATE_VARIABLE_Info_39_39, STATE_VARIABLE_Info_35);
    succeeded = MR_TRUE;
  }
  return succeeded;
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
              MR_Word Var_74;
              MR_Word Var_75;
              MR_String Op_167;
              MR_Word X_168;
              MR_Word Y_169;
              MR_Integer WordBits_170;

              succeeded = (IntType_13 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  X_168 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 0))));
                  Var_74 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 1))));
                  succeeded = (Var_74 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Y_169 = ((MR_Word) ((MR_hl_field(1, Var_74, (MR_Integer) 0))));
                    Var_75 = ((MR_Word) ((MR_hl_field(1, Var_74, (MR_Integer) 1))));
                    succeeded = (Var_75 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Op_167 = (MR_String) "*";
                      WordBits_170 = parse_tree__int_emu__target_word_bits_1_f_0(Globals_24);
                      check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_9_p_0(ModuleName_15, Op_167, X_168, WordBits_170, Y_169, ImprovedGoalExpr_20, STATE_VARIABLE_GoalInfo_0_67, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
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
              MR_Word Var_109;
              MR_Word Var_110;
              MR_Word Var_111;
              MR_Word X_177;
              MR_Word Y_178;
              MR_Word Z_179;
              MR_Word InstY_180;
              MR_Word YConst_41;
              MR_Word Var_112;
              MR_Word Var_113;
              MR_Word Var_114;
              MR_Word Var_115;
              MR_Word Var_116;

              succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_177 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 0))));
                Var_109 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 1))));
                succeeded = (Var_109 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_178 = ((MR_Word) ((MR_hl_field(1, Var_109, (MR_Integer) 0))));
                  Var_110 = ((MR_Word) ((MR_hl_field(1, Var_109, (MR_Integer) 1))));
                  succeeded = (Var_110 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_179 = ((MR_Word) ((MR_hl_field(1, Var_110, (MR_Integer) 0))));
                    Var_111 = ((MR_Word) ((MR_hl_field(1, Var_110, (MR_Integer) 1))));
                    succeeded = (Var_111 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      NumTargetBits_38 = check_hlds__simplify__simplify_goal_call__int_type_target_bits_2_f_0(Globals_24, IntType_13);
                      hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_14, Y_178, &InstY_180);
                      succeeded = ((MR_tag((MR_Word) InstY_180)) == (MR_Integer) 2);
                      if (succeeded)
                      {
                        Var_112 = ((MR_Word) ((MR_hl_field(2, InstY_180, (MR_Integer) 2))));
                        succeeded = (Var_112 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_113 = ((MR_Word) ((MR_hl_field(1, Var_112, (MR_Integer) 0))));
                          Var_116 = ((MR_Word) ((MR_hl_field(1, Var_112, (MR_Integer) 1))));
                          succeeded = (Var_116 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_114 = ((MR_Word) ((MR_hl_field(0, Var_113, (MR_Integer) 0))));
                            Var_115 = ((MR_Word) ((MR_hl_field(0, Var_113, (MR_Integer) 1))));
                            succeeded = (Var_115 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = ((((MR_tag((MR_Word) Var_114)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_114, (MR_Integer) 0)))) == (MR_Integer) 5)));
                              if (succeeded)
                              {
                                YConst_41 = ((MR_Word) ((MR_hl_field(3, Var_114, (MR_Integer) 1))));
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
                          MR_Integer YIntVal_44 = ((MR_Integer) ((MR_hl_field(0, YConst_41, (MR_Integer) 0))));

                          succeeded = ((MR_Integer) 0 <= YIntVal_44);
                          if (succeeded)
                            succeeded = (YIntVal_44 < NumTargetBits_38);
                          if (succeeded)
                          {
                            check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_69, ModuleName_15, (MR_String) "unchecked_left_shift", (MR_Integer) 0, X_177, Y_178, Z_179, ImprovedGoalExpr_20);
                            *STATE_VARIABLE_Info_70 = STATE_VARIABLE_Info_0_69;
                          }
                          else
                          {
                            *ImprovedGoalExpr_20 = GoalExpr0_19;
                            check_hlds__simplify__simplify_goal_call__report_bad_shift_amount_6_p_0(ModuleName_15, PredName_16, STATE_VARIABLE_GoalInfo_0_67, NumTargetBits_38, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
                          }
                        }
                        else
                        {
                          MR_Unsigned YUintVal_45 = ((MR_Unsigned) ((MR_hl_field(1, YConst_41, (MR_Integer) 0))));
                          MR_Unsigned Var_120;

                          Var_120 = mercury__uint__det_from_int_1_f_0(NumTargetBits_38);
                          succeeded = (YUintVal_45 < Var_120);
                          if (succeeded)
                          {
                            check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_69, ModuleName_15, (MR_String) "unchecked_left_shift", (MR_Integer) 0, X_177, Y_178, Z_179, ImprovedGoalExpr_20);
                            *STATE_VARIABLE_Info_70 = STATE_VARIABLE_Info_0_69;
                          }
                          else
                          {
                            *ImprovedGoalExpr_20 = GoalExpr0_19;
                            check_hlds__simplify__simplify_goal_call__report_bad_shift_amount_6_p_0(ModuleName_15, PredName_16, STATE_VARIABLE_GoalInfo_0_67, NumTargetBits_38, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
                          }
                        }
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        MR_Word TypeCtorInfo_182_182;
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
                        MR_Word ExceptionWrapperCtorUDC_61;
                        MR_Word ExceptionWrapperCtorConsId_62;
                        MR_Word WrapErrorMsgGoal_63;
                        MR_Word ThrowGoal_64;
                        MR_Word ThrowConjGoalInfo_65;
                        MR_Word ThrowConjGoal_66;
                        MR_Word STATE_VARIABLE_Info_123_123;
                        MR_String Var_124;
                        MR_Word Var_125;
                        MR_Word Var_126;
                        MR_Word Var_127;
                        MR_Word Var_128;
                        MR_Word Var_129;
                        MR_Word Var_130;
                        MR_Word Var_131;
                        MR_Word Var_132;
                        MR_Word Var_133;
                        MR_Word STATE_VARIABLE_Info_140_140;
                        MR_String Var_142;
                        MR_Integer Var_143;
                        MR_Word Var_144;
                        MR_Word Var_145;
                        MR_Word Var_146;
                        MR_Word Var_147;
                        MR_String Var_148;
                        MR_Word Var_149;
                        MR_Word Var_150;
                        MR_Word Var_151;
                        MR_Word Var_152;
                        MR_Word Var_153;
                        MR_Word Var_154;
                        MR_Word Var_155;
                        MR_Word Var_156;
                        MR_Word Var_158;
                        MR_Word Var_159;
                        MR_Word Var_160;
                        MR_Word Var_161;
                        MR_Word Var_162;
                        MR_Word Var_163;
                        MR_Word Var_164;
                        MR_Word Var_165;
                        MR_Word Var_166;
                        MR_Word Context_174;
                        MR_String Var_1322;

                        succeeded = mercury__builtin__semidet_fail_0_p_0();
                        if (succeeded)
                        {
                          Context_174 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_67);
                          check_hlds__simplify__simplify_goal_call__simplify_make_int_const_5_p_0(NumTargetBits_38, &NumTargetBitsConstVar_46, &NumTargetBitsConstGoal_47, STATE_VARIABLE_Info_0_69, &STATE_VARIABLE_Info_123_123);
                          PrivateBuiltin_48 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                          Var_124 = (MR_String) "unsigned_lt";
                          Var_125 = (MR_Integer) 0;
                          check_hlds__simplify__simplify_goal_call__simplify_make_cmp_goal_expr_8_p_0(STATE_VARIABLE_Info_123_123, PrivateBuiltin_48, Var_124, Var_125, Y_178, NumTargetBitsConstVar_46, Context_174, &InRangeTestGoal_49);
                          TypeCtorInfo_182_182 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                          Var_126 = parse_tree__set_of_var__make_singleton_1_f_0(TypeCtorInfo_182_182, Y_178);
                          Var_127 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                          Var_128 = (MR_Integer) 1;
                          Var_129 = (MR_Integer) 0;
                          hlds__hlds_goal__goal_info_init_6_p_0(Var_126, Var_127, Var_128, Var_129, Context_174, &TestConjGoalInfo_50);
                          Var_132 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_131, 0) = ((MR_Box) (InRangeTestGoal_49));
                            MR_hl_field(1, Var_131, 1) = ((MR_Box) (Var_132));
                          }
                          {
                            Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_130, 0) = ((MR_Box) (NumTargetBitsConstGoal_47));
                            MR_hl_field(1, Var_130, 1) = ((MR_Box) (Var_131));
                          }
                          hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_130, TestConjGoalInfo_50, &TestConjGoal_51);
                          Var_133 = (MR_Integer) 0;
                          check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_123_123, ModuleName_15, (MR_String) "unchecked_left_shift", Var_133, X_177, Y_178, Z_179, &UncheckedShiftGoalExpr_52);
                          Var_1322 = (MR_String) ".(<<): second operand is out of range";
                          {
                            UncheckedShiftGoal_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, UncheckedShiftGoal_53, 0) = ((MR_Box) (UncheckedShiftGoalExpr_52));
                            MR_hl_field(0, UncheckedShiftGoal_53, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_0_67));
                          }
                          NotInRangeStr_54 = mercury__string__f_43_43_2_f_0(ModuleName_15, Var_1322);
                          check_hlds__simplify__simplify_goal_call__simplify_make_string_const_5_p_0(NotInRangeStr_54, &ErrorMsgStrVar_55, &ErrorMsgStrGoal_56, STATE_VARIABLE_Info_123_123, &STATE_VARIABLE_Info_140_140);
                          ExceptionType_57 = parse_tree__builtin_lib_types__void_type_0_f_0();
                          check_hlds__simplify__simplify_goal_call__simplify_make_var_4_p_0(ExceptionType_57, &ExceptionVar_58, STATE_VARIABLE_Info_140_140, STATE_VARIABLE_Info_70);
                          parse_tree__prog_type__type_to_ctor_det_2_p_0(ExceptionType_57, &ExceptionTypeCtor_59);
                          Var_142 = (MR_String) "math_domain_error";
                          Var_143 = (MR_Integer) 1;
                          Var_145 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            ExceptionWrapperCtorSymName_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, ExceptionWrapperCtorSymName_60, 0) = ((MR_Box) (PrivateBuiltin_48));
                            MR_hl_field(1, ExceptionWrapperCtorSymName_60, 1) = ((MR_Box) (Var_142));
                          }
                          {
                            ExceptionWrapperCtorUDC_61 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, ExceptionWrapperCtorUDC_61, 0) = ((MR_Box) (ExceptionWrapperCtorSymName_60));
                            MR_hl_field(0, ExceptionWrapperCtorUDC_61, 1) = ((MR_Box) (Var_143));
                            MR_hl_field(0, ExceptionWrapperCtorUDC_61, 2) = ((MR_Box) (ExceptionTypeCtor_59));
                          }
                          ExceptionWrapperCtorConsId_62 = (MR_Word) (MR_mkword(1, (MR_Word) (ExceptionWrapperCtorUDC_61)));
                          {
                            Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_144, 0) = ((MR_Box) (ErrorMsgStrVar_55));
                            MR_hl_field(1, Var_144, 1) = ((MR_Box) (Var_145));
                          }
                          hlds__make_goal__construct_functor_4_p_0(ExceptionVar_58, ExceptionWrapperCtorConsId_62, Var_144, &WrapErrorMsgGoal_63);
                          Var_146 = (MR_Integer) 0;
                          Var_147 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
                          Var_148 = (MR_String) "throw";
                          Var_149 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            Var_150 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_150, 0) = ((MR_Box) (ExceptionVar_58));
                            MR_hl_field(1, Var_150, 1) = ((MR_Box) (Var_149));
                          }
                          Var_151 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                          Var_152 = (MR_Word) ((MR_Unsigned) 0U);
                          Var_153 = (MR_Integer) 6;
                          Var_154 = (MR_Integer) 0;
                          Var_155 = (MR_Word) ((MR_Unsigned) 0U);
                          Var_156 = mercury__term_context__dummy_context_0_f_0();
                          hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_23, Var_146, Var_147, Var_148, Var_149, Var_150, Var_151, Var_152, Var_153, Var_154, Var_155, Var_156, &ThrowGoal_64);
                          Var_158 = parse_tree__set_of_var__init_0_f_0(TypeCtorInfo_182_182);
                          Var_159 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                          Var_160 = (MR_Integer) 6;
                          Var_161 = (MR_Integer) 0;
                          hlds__hlds_goal__goal_info_init_6_p_0(Var_158, Var_159, Var_160, Var_161, Context_174, &ThrowConjGoalInfo_65);
                          Var_165 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            Var_164 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_164, 0) = ((MR_Box) (ThrowGoal_64));
                            MR_hl_field(1, Var_164, 1) = ((MR_Box) (Var_165));
                          }
                          {
                            Var_163 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_163, 0) = ((MR_Box) (WrapErrorMsgGoal_63));
                            MR_hl_field(1, Var_163, 1) = ((MR_Box) (Var_164));
                          }
                          {
                            Var_162 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_162, 0) = ((MR_Box) (ErrorMsgStrGoal_56));
                            MR_hl_field(1, Var_162, 1) = ((MR_Box) (Var_163));
                          }
                          hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_162, ThrowConjGoalInfo_65, &ThrowConjGoal_66);
                          Var_166 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                            *ImprovedGoalExpr_20 = base;
                            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                            MR_hl_field(3, base, 1) = ((MR_Box) (Var_166));
                            MR_hl_field(3, base, 2) = ((MR_Box) (TestConjGoal_51));
                            MR_hl_field(3, base, 3) = ((MR_Box) (UncheckedShiftGoal_53));
                            MR_hl_field(3, base, 4) = ((MR_Box) (ThrowConjGoal_66));
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
              MR_Word Var_1157;
              MR_Word Var_1158;
              MR_Word Var_1159;
              MR_Word Var_1160;
              MR_Word ConsY_1223;
              MR_Word Z_1257;
              MR_Word InstY_1258;
              MR_Word Var_1266;
              MR_Word Var_1267;
              MR_Word Var_1268;
              MR_Word X_1298;
              MR_Word Y_1299;

              succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_1298 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 0))));
                Var_1266 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 1))));
                succeeded = (Var_1266 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_1299 = ((MR_Word) ((MR_hl_field(1, Var_1266, (MR_Integer) 0))));
                  Var_1267 = ((MR_Word) ((MR_hl_field(1, Var_1266, (MR_Integer) 1))));
                  succeeded = (Var_1267 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_1257 = ((MR_Word) ((MR_hl_field(1, Var_1267, (MR_Integer) 0))));
                    Var_1268 = ((MR_Word) ((MR_hl_field(1, Var_1267, (MR_Integer) 1))));
                    succeeded = (Var_1268 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_14, Y_1299, &InstY_1258);
                      succeeded = ((MR_tag((MR_Word) InstY_1258)) == (MR_Integer) 2);
                      if (succeeded)
                      {
                        Var_1157 = ((MR_Word) ((MR_hl_field(2, InstY_1258, (MR_Integer) 2))));
                        succeeded = (Var_1157 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_1158 = ((MR_Word) ((MR_hl_field(1, Var_1157, (MR_Integer) 0))));
                          Var_1160 = ((MR_Word) ((MR_hl_field(1, Var_1157, (MR_Integer) 1))));
                          succeeded = (Var_1160 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            ConsY_1223 = ((MR_Word) ((MR_hl_field(0, Var_1158, (MR_Integer) 0))));
                            Var_1159 = ((MR_Word) ((MR_hl_field(0, Var_1158, (MR_Integer) 1))));
                            succeeded = (Var_1159 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = check_hlds__simplify__simplify_goal_call__is_zero_const_2_p_0(IntType_13, ConsY_1223);
                              if (succeeded)
                              {
                                MR_Word Context_1161;
                                MR_Word SymName_1162;
                                MR_Word Pieces_1163;
                                MR_Word Spec_1164;
                                MR_Word Var_1165;
                                MR_Word Var_1170;
                                MR_Word Var_1171;
                                MR_Word Var_1172;
                                MR_Word Var_1173;
                                MR_Word Var_1175;
                                MR_Word Var_1176;

                                *ImprovedGoalExpr_20 = GoalExpr0_19;
                                Context_1161 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_67);
                                {
                                  Var_1165 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(0, Var_1165, 0) = ((MR_Box) (ModuleName_15));
                                }
                                {
                                  SymName_1162 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(1, SymName_1162, 0) = ((MR_Box) (Var_1165));
                                  MR_hl_field(1, SymName_1162, 1) = ((MR_Box) (PredName_16));
                                }
                                {
                                  Var_1173 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(3, Var_1173, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                                  MR_hl_field(3, Var_1173, 1) = ((MR_Box) (SymName_1162));
                                }
                                {
                                  Var_1172 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(1, Var_1172, 0) = ((MR_Box) (Var_1173));
                                  MR_hl_field(1, Var_1172, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                }
                                Var_1171 = parse_tree__error_spec__color_as_subject_1_f_0(Var_1172);
                                Var_1176 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[85])));
                                Var_1175 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_1176, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[7])));
                                Var_1170 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_1171, Var_1175);
                                Pieces_1163 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[83])), Var_1170);
                                {
                                  Spec_1164 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(0, Spec_1164, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_improve_arith_shift_cmp_ops\'/12"));
                                  MR_hl_field(0, Spec_1164, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                  MR_hl_field(0, Spec_1164, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_2[1])));
                                  MR_hl_field(0, Spec_1164, 3) = ((MR_Box) (Context_1161));
                                  MR_hl_field(0, Spec_1164, 4) = ((MR_Box) (Pieces_1163));
                                }
                                check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_1164, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                MR_Word Var_1189;

                                succeeded = check_hlds__simplify__simplify_goal_call__is_int_const_2_p_0(IntType_13, ConsY_1223);
                                if (succeeded)
                                {
                                  Var_1189 = (MR_Integer) 0;
                                  check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_69, ModuleName_15, (MR_String) "unchecked_rem", Var_1189, X_1298, Y_1299, Z_1257, ImprovedGoalExpr_20);
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
              MR_Word Var_77;
              MR_Word Var_78;
              MR_Word Var_79;
              MR_Word Var_80;
              MR_Word Var_81;
              MR_Word Var_82;
              MR_Word Var_83;
              MR_Word X_172;
              MR_Word Y_173;

              succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_172 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 0))));
                Var_77 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 1))));
                succeeded = (Var_77 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_173 = ((MR_Word) ((MR_hl_field(1, Var_77, (MR_Integer) 0))));
                  Var_78 = ((MR_Word) ((MR_hl_field(1, Var_77, (MR_Integer) 1))));
                  succeeded = (Var_78 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_29 = ((MR_Word) ((MR_hl_field(1, Var_78, (MR_Integer) 0))));
                    Var_79 = ((MR_Word) ((MR_hl_field(1, Var_78, (MR_Integer) 1))));
                    succeeded = (Var_79 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_14, Y_173, &InstY_30);
                      succeeded = ((MR_tag((MR_Word) InstY_30)) == (MR_Integer) 2);
                      if (succeeded)
                      {
                        Var_80 = ((MR_Word) ((MR_hl_field(2, InstY_30, (MR_Integer) 2))));
                        succeeded = (Var_80 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_81 = ((MR_Word) ((MR_hl_field(1, Var_80, (MR_Integer) 0))));
                          Var_83 = ((MR_Word) ((MR_hl_field(1, Var_80, (MR_Integer) 1))));
                          succeeded = (Var_83 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            ConsY_33 = ((MR_Word) ((MR_hl_field(0, Var_81, (MR_Integer) 0))));
                            Var_82 = ((MR_Word) ((MR_hl_field(0, Var_81, (MR_Integer) 1))));
                            succeeded = (Var_82 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = check_hlds__simplify__simplify_goal_call__is_zero_const_2_p_0(IntType_13, ConsY_33);
                              if (succeeded)
                              {
                                MR_Word Context_34;
                                MR_Word SymName_35;
                                MR_Word Pieces_36;
                                MR_Word Spec_37;
                                MR_Word Var_84;
                                MR_Word Var_89;
                                MR_Word Var_90;
                                MR_Word Var_91;
                                MR_Word Var_92;
                                MR_Word Var_94;
                                MR_Word Var_95;

                                *ImprovedGoalExpr_20 = GoalExpr0_19;
                                Context_34 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_67);
                                {
                                  Var_84 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(0, Var_84, 0) = ((MR_Box) (ModuleName_15));
                                }
                                {
                                  SymName_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(1, SymName_35, 0) = ((MR_Box) (Var_84));
                                  MR_hl_field(1, SymName_35, 1) = ((MR_Box) (PredName_16));
                                }
                                {
                                  Var_92 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(3, Var_92, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                                  MR_hl_field(3, Var_92, 1) = ((MR_Box) (SymName_35));
                                }
                                {
                                  Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_92));
                                  MR_hl_field(1, Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                }
                                Var_90 = parse_tree__error_spec__color_as_subject_1_f_0(Var_91);
                                Var_95 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[85])));
                                Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_95, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[7])));
                                Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_90, Var_94);
                                Pieces_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[83])), Var_89);
                                {
                                  Spec_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(0, Spec_37, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_improve_arith_shift_cmp_ops\'/12"));
                                  MR_hl_field(0, Spec_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                  MR_hl_field(0, Spec_37, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_2[1])));
                                  MR_hl_field(0, Spec_37, 3) = ((MR_Box) (Context_34));
                                  MR_hl_field(0, Spec_37, 4) = ((MR_Box) (Pieces_36));
                                }
                                check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_37, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                MR_Word Var_108;

                                succeeded = check_hlds__simplify__simplify_goal_call__is_int_const_2_p_0(IntType_13, ConsY_33);
                                if (succeeded)
                                {
                                  Var_108 = (MR_Integer) 0;
                                  check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_69, ModuleName_15, (MR_String) "unchecked_quotient", Var_108, X_172, Y_173, Z_29, ImprovedGoalExpr_20);
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
              MR_String Op_1301;
              MR_Word X_1302;
              MR_Word Y_1303;
              MR_Integer WordBits_1304;
              MR_Word Var_1305;
              MR_Word Var_1306;

              succeeded = (IntType_13 == (MR_Integer) 0);
              if (succeeded)
              {
                Op_1301 = (MR_String) "unchecked_rem";
                succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  X_1302 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 0))));
                  Var_1305 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 1))));
                  succeeded = (Var_1305 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Y_1303 = ((MR_Word) ((MR_hl_field(1, Var_1305, (MR_Integer) 0))));
                    Var_1306 = ((MR_Word) ((MR_hl_field(1, Var_1305, (MR_Integer) 1))));
                    succeeded = (Var_1306 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      WordBits_1304 = parse_tree__int_emu__target_word_bits_1_f_0(Globals_24);
                      check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_9_p_0(ModuleName_15, Op_1301, X_1302, WordBits_1304, Y_1303, ImprovedGoalExpr_20, STATE_VARIABLE_GoalInfo_0_67, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
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
              MR_Integer NumTargetBits_788;
              MR_Word Var_817;
              MR_Word Var_818;
              MR_Word Var_819;
              MR_Word X_874;
              MR_Word Y_875;
              MR_Word Z_876;
              MR_Word InstY_877;
              MR_Word YConst_708;
              MR_Word Var_615;
              MR_Word Var_616;
              MR_Word Var_617;
              MR_Word Var_618;
              MR_Word Var_619;

              succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_874 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 0))));
                Var_817 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 1))));
                succeeded = (Var_817 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_875 = ((MR_Word) ((MR_hl_field(1, Var_817, (MR_Integer) 0))));
                  Var_818 = ((MR_Word) ((MR_hl_field(1, Var_817, (MR_Integer) 1))));
                  succeeded = (Var_818 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_876 = ((MR_Word) ((MR_hl_field(1, Var_818, (MR_Integer) 0))));
                    Var_819 = ((MR_Word) ((MR_hl_field(1, Var_818, (MR_Integer) 1))));
                    succeeded = (Var_819 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      NumTargetBits_788 = check_hlds__simplify__simplify_goal_call__int_type_target_bits_2_f_0(Globals_24, IntType_13);
                      hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_14, Y_875, &InstY_877);
                      succeeded = ((MR_tag((MR_Word) InstY_877)) == (MR_Integer) 2);
                      if (succeeded)
                      {
                        Var_615 = ((MR_Word) ((MR_hl_field(2, InstY_877, (MR_Integer) 2))));
                        succeeded = (Var_615 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_616 = ((MR_Word) ((MR_hl_field(1, Var_615, (MR_Integer) 0))));
                          Var_619 = ((MR_Word) ((MR_hl_field(1, Var_615, (MR_Integer) 1))));
                          succeeded = (Var_619 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_617 = ((MR_Word) ((MR_hl_field(0, Var_616, (MR_Integer) 0))));
                            Var_618 = ((MR_Word) ((MR_hl_field(0, Var_616, (MR_Integer) 1))));
                            succeeded = (Var_618 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = ((((MR_tag((MR_Word) Var_617)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_617, (MR_Integer) 0)))) == (MR_Integer) 5)));
                              if (succeeded)
                              {
                                YConst_708 = ((MR_Word) ((MR_hl_field(3, Var_617, (MR_Integer) 1))));
                                if (((MR_tag((MR_Word) YConst_708)) == (MR_Integer) 0))
                                  succeeded = MR_TRUE;
                                else
                                if (((MR_tag((MR_Word) YConst_708)) == (MR_Integer) 1))
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
                        if (((MR_tag((MR_Word) YConst_708)) == (MR_Integer) 0))
                        {
                          MR_Integer YIntVal_624 = ((MR_Integer) ((MR_hl_field(0, YConst_708, (MR_Integer) 0))));

                          succeeded = ((MR_Integer) 0 <= YIntVal_624);
                          if (succeeded)
                            succeeded = (YIntVal_624 < NumTargetBits_788);
                          if (succeeded)
                          {
                            check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_69, ModuleName_15, (MR_String) "unchecked_right_shift", (MR_Integer) 0, X_874, Y_875, Z_876, ImprovedGoalExpr_20);
                            *STATE_VARIABLE_Info_70 = STATE_VARIABLE_Info_0_69;
                          }
                          else
                          {
                            *ImprovedGoalExpr_20 = GoalExpr0_19;
                            check_hlds__simplify__simplify_goal_call__report_bad_shift_amount_6_p_0(ModuleName_15, PredName_16, STATE_VARIABLE_GoalInfo_0_67, NumTargetBits_788, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
                          }
                        }
                        else
                        {
                          MR_Unsigned YUintVal_631 = ((MR_Unsigned) ((MR_hl_field(1, YConst_708, (MR_Integer) 0))));
                          MR_Unsigned Var_627;

                          Var_627 = mercury__uint__det_from_int_1_f_0(NumTargetBits_788);
                          succeeded = (YUintVal_631 < Var_627);
                          if (succeeded)
                          {
                            check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_69, ModuleName_15, (MR_String) "unchecked_right_shift", (MR_Integer) 0, X_874, Y_875, Z_876, ImprovedGoalExpr_20);
                            *STATE_VARIABLE_Info_70 = STATE_VARIABLE_Info_0_69;
                          }
                          else
                          {
                            *ImprovedGoalExpr_20 = GoalExpr0_19;
                            check_hlds__simplify__simplify_goal_call__report_bad_shift_amount_6_p_0(ModuleName_15, PredName_16, STATE_VARIABLE_GoalInfo_0_67, NumTargetBits_788, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
                          }
                        }
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        MR_Word TypeCtorInfo_182_705;
                        MR_Word NumTargetBitsConstVar_640;
                        MR_Word NumTargetBitsConstGoal_641;
                        MR_Word PrivateBuiltin_642;
                        MR_Word InRangeTestGoal_643;
                        MR_Word TestConjGoalInfo_644;
                        MR_Word TestConjGoal_645;
                        MR_Word UncheckedShiftGoalExpr_646;
                        MR_Word UncheckedShiftGoal_647;
                        MR_String NotInRangeStr_648;
                        MR_Word ErrorMsgStrVar_649;
                        MR_Word ErrorMsgStrGoal_650;
                        MR_Word ExceptionType_651;
                        MR_Word ExceptionVar_652;
                        MR_Word ExceptionTypeCtor_653;
                        MR_Word ExceptionWrapperCtorSymName_654;
                        MR_Word ExceptionWrapperCtorUDC_655;
                        MR_Word ExceptionWrapperCtorConsId_656;
                        MR_Word WrapErrorMsgGoal_657;
                        MR_Word ThrowGoal_658;
                        MR_Word ThrowConjGoalInfo_659;
                        MR_Word ThrowConjGoal_660;
                        MR_Word STATE_VARIABLE_Info_123_661;
                        MR_String Var_662;
                        MR_Word Var_663;
                        MR_Word Var_664;
                        MR_Word Var_665;
                        MR_Word Var_666;
                        MR_Word Var_667;
                        MR_Word Var_668;
                        MR_Word Var_669;
                        MR_Word Var_670;
                        MR_Word Var_671;
                        MR_Word STATE_VARIABLE_Info_140_678;
                        MR_String Var_679;
                        MR_Integer Var_680;
                        MR_Word Var_681;
                        MR_Word Var_682;
                        MR_Word Var_683;
                        MR_Word Var_684;
                        MR_String Var_685;
                        MR_Word Var_686;
                        MR_Word Var_687;
                        MR_Word Var_688;
                        MR_Word Var_689;
                        MR_Word Var_690;
                        MR_Word Var_691;
                        MR_Word Var_692;
                        MR_Word Var_693;
                        MR_Word Var_695;
                        MR_Word Var_696;
                        MR_Word Var_697;
                        MR_Word Var_698;
                        MR_Word Var_699;
                        MR_Word Var_700;
                        MR_Word Var_701;
                        MR_Word Var_702;
                        MR_Word Var_703;
                        MR_Word Context_704;
                        MR_String Var_1314;

                        succeeded = mercury__builtin__semidet_fail_0_p_0();
                        if (succeeded)
                        {
                          Context_704 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_67);
                          check_hlds__simplify__simplify_goal_call__simplify_make_int_const_5_p_0(NumTargetBits_788, &NumTargetBitsConstVar_640, &NumTargetBitsConstGoal_641, STATE_VARIABLE_Info_0_69, &STATE_VARIABLE_Info_123_661);
                          PrivateBuiltin_642 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                          Var_662 = (MR_String) "unsigned_lt";
                          Var_663 = (MR_Integer) 0;
                          check_hlds__simplify__simplify_goal_call__simplify_make_cmp_goal_expr_8_p_0(STATE_VARIABLE_Info_123_661, PrivateBuiltin_642, Var_662, Var_663, Y_875, NumTargetBitsConstVar_640, Context_704, &InRangeTestGoal_643);
                          TypeCtorInfo_182_705 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                          Var_664 = parse_tree__set_of_var__make_singleton_1_f_0(TypeCtorInfo_182_705, Y_875);
                          Var_665 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                          Var_666 = (MR_Integer) 1;
                          Var_667 = (MR_Integer) 0;
                          hlds__hlds_goal__goal_info_init_6_p_0(Var_664, Var_665, Var_666, Var_667, Context_704, &TestConjGoalInfo_644);
                          Var_670 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            Var_669 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_669, 0) = ((MR_Box) (InRangeTestGoal_643));
                            MR_hl_field(1, Var_669, 1) = ((MR_Box) (Var_670));
                          }
                          {
                            Var_668 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_668, 0) = ((MR_Box) (NumTargetBitsConstGoal_641));
                            MR_hl_field(1, Var_668, 1) = ((MR_Box) (Var_669));
                          }
                          hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_668, TestConjGoalInfo_644, &TestConjGoal_645);
                          Var_671 = (MR_Integer) 0;
                          check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_123_661, ModuleName_15, (MR_String) "unchecked_right_shift", Var_671, X_874, Y_875, Z_876, &UncheckedShiftGoalExpr_646);
                          Var_1314 = (MR_String) ".(>>): second operand is out of range";
                          {
                            UncheckedShiftGoal_647 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, UncheckedShiftGoal_647, 0) = ((MR_Box) (UncheckedShiftGoalExpr_646));
                            MR_hl_field(0, UncheckedShiftGoal_647, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_0_67));
                          }
                          NotInRangeStr_648 = mercury__string__f_43_43_2_f_0(ModuleName_15, Var_1314);
                          check_hlds__simplify__simplify_goal_call__simplify_make_string_const_5_p_0(NotInRangeStr_648, &ErrorMsgStrVar_649, &ErrorMsgStrGoal_650, STATE_VARIABLE_Info_123_661, &STATE_VARIABLE_Info_140_678);
                          ExceptionType_651 = parse_tree__builtin_lib_types__void_type_0_f_0();
                          check_hlds__simplify__simplify_goal_call__simplify_make_var_4_p_0(ExceptionType_651, &ExceptionVar_652, STATE_VARIABLE_Info_140_678, STATE_VARIABLE_Info_70);
                          parse_tree__prog_type__type_to_ctor_det_2_p_0(ExceptionType_651, &ExceptionTypeCtor_653);
                          Var_679 = (MR_String) "math_domain_error";
                          Var_680 = (MR_Integer) 1;
                          Var_682 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            ExceptionWrapperCtorSymName_654 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, ExceptionWrapperCtorSymName_654, 0) = ((MR_Box) (PrivateBuiltin_642));
                            MR_hl_field(1, ExceptionWrapperCtorSymName_654, 1) = ((MR_Box) (Var_679));
                          }
                          {
                            ExceptionWrapperCtorUDC_655 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, ExceptionWrapperCtorUDC_655, 0) = ((MR_Box) (ExceptionWrapperCtorSymName_654));
                            MR_hl_field(0, ExceptionWrapperCtorUDC_655, 1) = ((MR_Box) (Var_680));
                            MR_hl_field(0, ExceptionWrapperCtorUDC_655, 2) = ((MR_Box) (ExceptionTypeCtor_653));
                          }
                          ExceptionWrapperCtorConsId_656 = (MR_Word) (MR_mkword(1, (MR_Word) (ExceptionWrapperCtorUDC_655)));
                          {
                            Var_681 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_681, 0) = ((MR_Box) (ErrorMsgStrVar_649));
                            MR_hl_field(1, Var_681, 1) = ((MR_Box) (Var_682));
                          }
                          hlds__make_goal__construct_functor_4_p_0(ExceptionVar_652, ExceptionWrapperCtorConsId_656, Var_681, &WrapErrorMsgGoal_657);
                          Var_683 = (MR_Integer) 0;
                          Var_684 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
                          Var_685 = (MR_String) "throw";
                          Var_686 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            Var_687 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_687, 0) = ((MR_Box) (ExceptionVar_652));
                            MR_hl_field(1, Var_687, 1) = ((MR_Box) (Var_686));
                          }
                          Var_688 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                          Var_689 = (MR_Word) ((MR_Unsigned) 0U);
                          Var_690 = (MR_Integer) 6;
                          Var_691 = (MR_Integer) 0;
                          Var_692 = (MR_Word) ((MR_Unsigned) 0U);
                          Var_693 = mercury__term_context__dummy_context_0_f_0();
                          hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_23, Var_683, Var_684, Var_685, Var_686, Var_687, Var_688, Var_689, Var_690, Var_691, Var_692, Var_693, &ThrowGoal_658);
                          Var_695 = parse_tree__set_of_var__init_0_f_0(TypeCtorInfo_182_705);
                          Var_696 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                          Var_697 = (MR_Integer) 6;
                          Var_698 = (MR_Integer) 0;
                          hlds__hlds_goal__goal_info_init_6_p_0(Var_695, Var_696, Var_697, Var_698, Context_704, &ThrowConjGoalInfo_659);
                          Var_702 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            Var_701 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_701, 0) = ((MR_Box) (ThrowGoal_658));
                            MR_hl_field(1, Var_701, 1) = ((MR_Box) (Var_702));
                          }
                          {
                            Var_700 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_700, 0) = ((MR_Box) (WrapErrorMsgGoal_657));
                            MR_hl_field(1, Var_700, 1) = ((MR_Box) (Var_701));
                          }
                          {
                            Var_699 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_699, 0) = ((MR_Box) (ErrorMsgStrGoal_650));
                            MR_hl_field(1, Var_699, 1) = ((MR_Box) (Var_700));
                          }
                          hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_699, ThrowConjGoalInfo_659, &ThrowConjGoal_660);
                          Var_703 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                            *ImprovedGoalExpr_20 = base;
                            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                            MR_hl_field(3, base, 1) = ((MR_Box) (Var_703));
                            MR_hl_field(3, base, 2) = ((MR_Box) (TestConjGoal_645));
                            MR_hl_field(3, base, 3) = ((MR_Box) (UncheckedShiftGoal_647));
                            MR_hl_field(3, base, 4) = ((MR_Box) (ThrowConjGoal_660));
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
              MR_Word Var_187;
              MR_Word Var_188;
              MR_Word Var_189;
              MR_Word Var_190;
              MR_Word ConsY_253;
              MR_Word Z_287;
              MR_Word InstY_288;
              MR_Word Var_296;
              MR_Word Var_297;
              MR_Word Var_298;
              MR_Word X_328;
              MR_Word Y_329;

              succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_328 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 0))));
                Var_296 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 1))));
                succeeded = (Var_296 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_329 = ((MR_Word) ((MR_hl_field(1, Var_296, (MR_Integer) 0))));
                  Var_297 = ((MR_Word) ((MR_hl_field(1, Var_296, (MR_Integer) 1))));
                  succeeded = (Var_297 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_287 = ((MR_Word) ((MR_hl_field(1, Var_297, (MR_Integer) 0))));
                    Var_298 = ((MR_Word) ((MR_hl_field(1, Var_297, (MR_Integer) 1))));
                    succeeded = (Var_298 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_14, Y_329, &InstY_288);
                      succeeded = ((MR_tag((MR_Word) InstY_288)) == (MR_Integer) 2);
                      if (succeeded)
                      {
                        Var_187 = ((MR_Word) ((MR_hl_field(2, InstY_288, (MR_Integer) 2))));
                        succeeded = (Var_187 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_188 = ((MR_Word) ((MR_hl_field(1, Var_187, (MR_Integer) 0))));
                          Var_190 = ((MR_Word) ((MR_hl_field(1, Var_187, (MR_Integer) 1))));
                          succeeded = (Var_190 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            ConsY_253 = ((MR_Word) ((MR_hl_field(0, Var_188, (MR_Integer) 0))));
                            Var_189 = ((MR_Word) ((MR_hl_field(0, Var_188, (MR_Integer) 1))));
                            succeeded = (Var_189 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = check_hlds__simplify__simplify_goal_call__is_zero_const_2_p_0(IntType_13, ConsY_253);
                              if (succeeded)
                              {
                                MR_Word Context_191;
                                MR_Word SymName_192;
                                MR_Word Pieces_193;
                                MR_Word Spec_194;
                                MR_Word Var_195;
                                MR_Word Var_200;
                                MR_Word Var_201;
                                MR_Word Var_202;
                                MR_Word Var_203;
                                MR_Word Var_205;
                                MR_Word Var_206;

                                *ImprovedGoalExpr_20 = GoalExpr0_19;
                                Context_191 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_67);
                                {
                                  Var_195 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(0, Var_195, 0) = ((MR_Box) (ModuleName_15));
                                }
                                {
                                  SymName_192 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(1, SymName_192, 0) = ((MR_Box) (Var_195));
                                  MR_hl_field(1, SymName_192, 1) = ((MR_Box) (PredName_16));
                                }
                                {
                                  Var_203 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(3, Var_203, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                                  MR_hl_field(3, Var_203, 1) = ((MR_Box) (SymName_192));
                                }
                                {
                                  Var_202 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(1, Var_202, 0) = ((MR_Box) (Var_203));
                                  MR_hl_field(1, Var_202, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                }
                                Var_201 = parse_tree__error_spec__color_as_subject_1_f_0(Var_202);
                                Var_206 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[85])));
                                Var_205 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_206, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[7])));
                                Var_200 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_201, Var_205);
                                Pieces_193 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[83])), Var_200);
                                {
                                  Spec_194 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(0, Spec_194, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_improve_arith_shift_cmp_ops\'/12"));
                                  MR_hl_field(0, Spec_194, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                  MR_hl_field(0, Spec_194, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_2[1])));
                                  MR_hl_field(0, Spec_194, 3) = ((MR_Box) (Context_191));
                                  MR_hl_field(0, Spec_194, 4) = ((MR_Box) (Pieces_193));
                                }
                                check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_194, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                MR_Word Var_219;

                                succeeded = check_hlds__simplify__simplify_goal_call__is_int_const_2_p_0(IntType_13, ConsY_253);
                                if (succeeded)
                                {
                                  Var_219 = (MR_Integer) 0;
                                  check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_69, ModuleName_15, (MR_String) "unchecked_quotient", Var_219, X_328, Y_329, Z_287, ImprovedGoalExpr_20);
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
              MR_Integer NumTargetBits_1062;
              MR_Word Var_1091;
              MR_Word Var_1092;
              MR_Word Var_1093;
              MR_Word X_1148;
              MR_Word Y_1149;
              MR_Word Z_1150;
              MR_Word InstY_1151;
              MR_Word YConst_982;
              MR_Word Var_889;
              MR_Word Var_890;
              MR_Word Var_891;
              MR_Word Var_892;
              MR_Word Var_893;

              succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_1148 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 0))));
                Var_1091 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 1))));
                succeeded = (Var_1091 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_1149 = ((MR_Word) ((MR_hl_field(1, Var_1091, (MR_Integer) 0))));
                  Var_1092 = ((MR_Word) ((MR_hl_field(1, Var_1091, (MR_Integer) 1))));
                  succeeded = (Var_1092 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_1150 = ((MR_Word) ((MR_hl_field(1, Var_1092, (MR_Integer) 0))));
                    Var_1093 = ((MR_Word) ((MR_hl_field(1, Var_1092, (MR_Integer) 1))));
                    succeeded = (Var_1093 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      NumTargetBits_1062 = check_hlds__simplify__simplify_goal_call__int_type_target_bits_2_f_0(Globals_24, IntType_13);
                      hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_14, Y_1149, &InstY_1151);
                      succeeded = ((MR_tag((MR_Word) InstY_1151)) == (MR_Integer) 2);
                      if (succeeded)
                      {
                        Var_889 = ((MR_Word) ((MR_hl_field(2, InstY_1151, (MR_Integer) 2))));
                        succeeded = (Var_889 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_890 = ((MR_Word) ((MR_hl_field(1, Var_889, (MR_Integer) 0))));
                          Var_893 = ((MR_Word) ((MR_hl_field(1, Var_889, (MR_Integer) 1))));
                          succeeded = (Var_893 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_891 = ((MR_Word) ((MR_hl_field(0, Var_890, (MR_Integer) 0))));
                            Var_892 = ((MR_Word) ((MR_hl_field(0, Var_890, (MR_Integer) 1))));
                            succeeded = (Var_892 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = ((((MR_tag((MR_Word) Var_891)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_891, (MR_Integer) 0)))) == (MR_Integer) 5)));
                              if (succeeded)
                              {
                                YConst_982 = ((MR_Word) ((MR_hl_field(3, Var_891, (MR_Integer) 1))));
                                if (((MR_tag((MR_Word) YConst_982)) == (MR_Integer) 0))
                                  succeeded = MR_TRUE;
                                else
                                if (((MR_tag((MR_Word) YConst_982)) == (MR_Integer) 1))
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
                        if (((MR_tag((MR_Word) YConst_982)) == (MR_Integer) 0))
                        {
                          MR_Integer YIntVal_898 = ((MR_Integer) ((MR_hl_field(0, YConst_982, (MR_Integer) 0))));

                          succeeded = ((MR_Integer) 0 <= YIntVal_898);
                          if (succeeded)
                            succeeded = (YIntVal_898 < NumTargetBits_1062);
                          if (succeeded)
                          {
                            check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_69, ModuleName_15, (MR_String) "unchecked_right_ushift", (MR_Integer) 0, X_1148, Y_1149, Z_1150, ImprovedGoalExpr_20);
                            *STATE_VARIABLE_Info_70 = STATE_VARIABLE_Info_0_69;
                          }
                          else
                          {
                            *ImprovedGoalExpr_20 = GoalExpr0_19;
                            check_hlds__simplify__simplify_goal_call__report_bad_shift_amount_6_p_0(ModuleName_15, PredName_16, STATE_VARIABLE_GoalInfo_0_67, NumTargetBits_1062, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
                          }
                        }
                        else
                        {
                          MR_Unsigned YUintVal_905 = ((MR_Unsigned) ((MR_hl_field(1, YConst_982, (MR_Integer) 0))));
                          MR_Unsigned Var_901;

                          Var_901 = mercury__uint__det_from_int_1_f_0(NumTargetBits_1062);
                          succeeded = (YUintVal_905 < Var_901);
                          if (succeeded)
                          {
                            check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_69, ModuleName_15, (MR_String) "unchecked_right_ushift", (MR_Integer) 0, X_1148, Y_1149, Z_1150, ImprovedGoalExpr_20);
                            *STATE_VARIABLE_Info_70 = STATE_VARIABLE_Info_0_69;
                          }
                          else
                          {
                            *ImprovedGoalExpr_20 = GoalExpr0_19;
                            check_hlds__simplify__simplify_goal_call__report_bad_shift_amount_6_p_0(ModuleName_15, PredName_16, STATE_VARIABLE_GoalInfo_0_67, NumTargetBits_1062, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
                          }
                        }
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        MR_Word TypeCtorInfo_182_979;
                        MR_Word NumTargetBitsConstVar_914;
                        MR_Word NumTargetBitsConstGoal_915;
                        MR_Word PrivateBuiltin_916;
                        MR_Word InRangeTestGoal_917;
                        MR_Word TestConjGoalInfo_918;
                        MR_Word TestConjGoal_919;
                        MR_Word UncheckedShiftGoalExpr_920;
                        MR_Word UncheckedShiftGoal_921;
                        MR_String NotInRangeStr_922;
                        MR_Word ErrorMsgStrVar_923;
                        MR_Word ErrorMsgStrGoal_924;
                        MR_Word ExceptionType_925;
                        MR_Word ExceptionVar_926;
                        MR_Word ExceptionTypeCtor_927;
                        MR_Word ExceptionWrapperCtorSymName_928;
                        MR_Word ExceptionWrapperCtorUDC_929;
                        MR_Word ExceptionWrapperCtorConsId_930;
                        MR_Word WrapErrorMsgGoal_931;
                        MR_Word ThrowGoal_932;
                        MR_Word ThrowConjGoalInfo_933;
                        MR_Word ThrowConjGoal_934;
                        MR_Word STATE_VARIABLE_Info_123_935;
                        MR_String Var_936;
                        MR_Word Var_937;
                        MR_Word Var_938;
                        MR_Word Var_939;
                        MR_Word Var_940;
                        MR_Word Var_941;
                        MR_Word Var_942;
                        MR_Word Var_943;
                        MR_Word Var_944;
                        MR_Word Var_945;
                        MR_Word STATE_VARIABLE_Info_140_952;
                        MR_String Var_953;
                        MR_Integer Var_954;
                        MR_Word Var_955;
                        MR_Word Var_956;
                        MR_Word Var_957;
                        MR_Word Var_958;
                        MR_String Var_959;
                        MR_Word Var_960;
                        MR_Word Var_961;
                        MR_Word Var_962;
                        MR_Word Var_963;
                        MR_Word Var_964;
                        MR_Word Var_965;
                        MR_Word Var_966;
                        MR_Word Var_967;
                        MR_Word Var_969;
                        MR_Word Var_970;
                        MR_Word Var_971;
                        MR_Word Var_972;
                        MR_Word Var_973;
                        MR_Word Var_974;
                        MR_Word Var_975;
                        MR_Word Var_976;
                        MR_Word Var_977;
                        MR_Word Context_978;
                        MR_String Var_1310;

                        succeeded = mercury__builtin__semidet_fail_0_p_0();
                        if (succeeded)
                        {
                          Context_978 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_67);
                          check_hlds__simplify__simplify_goal_call__simplify_make_int_const_5_p_0(NumTargetBits_1062, &NumTargetBitsConstVar_914, &NumTargetBitsConstGoal_915, STATE_VARIABLE_Info_0_69, &STATE_VARIABLE_Info_123_935);
                          PrivateBuiltin_916 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                          Var_936 = (MR_String) "unsigned_lt";
                          Var_937 = (MR_Integer) 0;
                          check_hlds__simplify__simplify_goal_call__simplify_make_cmp_goal_expr_8_p_0(STATE_VARIABLE_Info_123_935, PrivateBuiltin_916, Var_936, Var_937, Y_1149, NumTargetBitsConstVar_914, Context_978, &InRangeTestGoal_917);
                          TypeCtorInfo_182_979 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                          Var_938 = parse_tree__set_of_var__make_singleton_1_f_0(TypeCtorInfo_182_979, Y_1149);
                          Var_939 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                          Var_940 = (MR_Integer) 1;
                          Var_941 = (MR_Integer) 0;
                          hlds__hlds_goal__goal_info_init_6_p_0(Var_938, Var_939, Var_940, Var_941, Context_978, &TestConjGoalInfo_918);
                          Var_944 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            Var_943 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_943, 0) = ((MR_Box) (InRangeTestGoal_917));
                            MR_hl_field(1, Var_943, 1) = ((MR_Box) (Var_944));
                          }
                          {
                            Var_942 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_942, 0) = ((MR_Box) (NumTargetBitsConstGoal_915));
                            MR_hl_field(1, Var_942, 1) = ((MR_Box) (Var_943));
                          }
                          hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_942, TestConjGoalInfo_918, &TestConjGoal_919);
                          Var_945 = (MR_Integer) 0;
                          check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_123_935, ModuleName_15, (MR_String) "unchecked_right_ushift", Var_945, X_1148, Y_1149, Z_1150, &UncheckedShiftGoalExpr_920);
                          Var_1310 = (MR_String) ".(>>u): second operand is out of range";
                          {
                            UncheckedShiftGoal_921 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, UncheckedShiftGoal_921, 0) = ((MR_Box) (UncheckedShiftGoalExpr_920));
                            MR_hl_field(0, UncheckedShiftGoal_921, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_0_67));
                          }
                          NotInRangeStr_922 = mercury__string__f_43_43_2_f_0(ModuleName_15, Var_1310);
                          check_hlds__simplify__simplify_goal_call__simplify_make_string_const_5_p_0(NotInRangeStr_922, &ErrorMsgStrVar_923, &ErrorMsgStrGoal_924, STATE_VARIABLE_Info_123_935, &STATE_VARIABLE_Info_140_952);
                          ExceptionType_925 = parse_tree__builtin_lib_types__void_type_0_f_0();
                          check_hlds__simplify__simplify_goal_call__simplify_make_var_4_p_0(ExceptionType_925, &ExceptionVar_926, STATE_VARIABLE_Info_140_952, STATE_VARIABLE_Info_70);
                          parse_tree__prog_type__type_to_ctor_det_2_p_0(ExceptionType_925, &ExceptionTypeCtor_927);
                          Var_953 = (MR_String) "math_domain_error";
                          Var_954 = (MR_Integer) 1;
                          Var_956 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            ExceptionWrapperCtorSymName_928 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, ExceptionWrapperCtorSymName_928, 0) = ((MR_Box) (PrivateBuiltin_916));
                            MR_hl_field(1, ExceptionWrapperCtorSymName_928, 1) = ((MR_Box) (Var_953));
                          }
                          {
                            ExceptionWrapperCtorUDC_929 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, ExceptionWrapperCtorUDC_929, 0) = ((MR_Box) (ExceptionWrapperCtorSymName_928));
                            MR_hl_field(0, ExceptionWrapperCtorUDC_929, 1) = ((MR_Box) (Var_954));
                            MR_hl_field(0, ExceptionWrapperCtorUDC_929, 2) = ((MR_Box) (ExceptionTypeCtor_927));
                          }
                          ExceptionWrapperCtorConsId_930 = (MR_Word) (MR_mkword(1, (MR_Word) (ExceptionWrapperCtorUDC_929)));
                          {
                            Var_955 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_955, 0) = ((MR_Box) (ErrorMsgStrVar_923));
                            MR_hl_field(1, Var_955, 1) = ((MR_Box) (Var_956));
                          }
                          hlds__make_goal__construct_functor_4_p_0(ExceptionVar_926, ExceptionWrapperCtorConsId_930, Var_955, &WrapErrorMsgGoal_931);
                          Var_957 = (MR_Integer) 0;
                          Var_958 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
                          Var_959 = (MR_String) "throw";
                          Var_960 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            Var_961 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_961, 0) = ((MR_Box) (ExceptionVar_926));
                            MR_hl_field(1, Var_961, 1) = ((MR_Box) (Var_960));
                          }
                          Var_962 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                          Var_963 = (MR_Word) ((MR_Unsigned) 0U);
                          Var_964 = (MR_Integer) 6;
                          Var_965 = (MR_Integer) 0;
                          Var_966 = (MR_Word) ((MR_Unsigned) 0U);
                          Var_967 = mercury__term_context__dummy_context_0_f_0();
                          hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_23, Var_957, Var_958, Var_959, Var_960, Var_961, Var_962, Var_963, Var_964, Var_965, Var_966, Var_967, &ThrowGoal_932);
                          Var_969 = parse_tree__set_of_var__init_0_f_0(TypeCtorInfo_182_979);
                          Var_970 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                          Var_971 = (MR_Integer) 6;
                          Var_972 = (MR_Integer) 0;
                          hlds__hlds_goal__goal_info_init_6_p_0(Var_969, Var_970, Var_971, Var_972, Context_978, &ThrowConjGoalInfo_933);
                          Var_976 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            Var_975 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_975, 0) = ((MR_Box) (ThrowGoal_932));
                            MR_hl_field(1, Var_975, 1) = ((MR_Box) (Var_976));
                          }
                          {
                            Var_974 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_974, 0) = ((MR_Box) (WrapErrorMsgGoal_931));
                            MR_hl_field(1, Var_974, 1) = ((MR_Box) (Var_975));
                          }
                          {
                            Var_973 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_973, 0) = ((MR_Box) (ErrorMsgStrGoal_924));
                            MR_hl_field(1, Var_973, 1) = ((MR_Box) (Var_974));
                          }
                          hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_973, ThrowConjGoalInfo_933, &ThrowConjGoal_934);
                          Var_977 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                            *ImprovedGoalExpr_20 = base;
                            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                            MR_hl_field(3, base, 1) = ((MR_Box) (Var_977));
                            MR_hl_field(3, base, 2) = ((MR_Box) (TestConjGoal_919));
                            MR_hl_field(3, base, 3) = ((MR_Box) (UncheckedShiftGoal_921));
                            MR_hl_field(3, base, 4) = ((MR_Box) (ThrowConjGoal_934));
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
              MR_Integer WordBits_28;
              MR_Word Var_71;
              MR_Word Var_72;

              succeeded = (IntType_13 == (MR_Integer) 0);
              if (succeeded)
              {
                Op_25 = (MR_String) "unchecked_quotient";
                succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  X_26 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 0))));
                  Var_71 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 1))));
                  succeeded = (Var_71 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Y_27 = ((MR_Word) ((MR_hl_field(1, Var_71, (MR_Integer) 0))));
                    Var_72 = ((MR_Word) ((MR_hl_field(1, Var_71, (MR_Integer) 1))));
                    succeeded = (Var_72 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      WordBits_28 = parse_tree__int_emu__target_word_bits_1_f_0(Globals_24);
                      check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_9_p_0(ModuleName_15, Op_25, X_26, WordBits_28, Y_27, ImprovedGoalExpr_20, STATE_VARIABLE_GoalInfo_0_67, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
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
              MR_Integer NumTargetBits_514;
              MR_Word Var_543;
              MR_Word Var_544;
              MR_Word Var_545;
              MR_Word X_600;
              MR_Word Y_601;
              MR_Word Z_602;
              MR_Word InstY_603;
              MR_Word YConst_434;
              MR_Word Var_341;
              MR_Word Var_342;
              MR_Word Var_343;
              MR_Word Var_344;
              MR_Word Var_345;

              succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_600 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 0))));
                Var_543 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 1))));
                succeeded = (Var_543 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_601 = ((MR_Word) ((MR_hl_field(1, Var_543, (MR_Integer) 0))));
                  Var_544 = ((MR_Word) ((MR_hl_field(1, Var_543, (MR_Integer) 1))));
                  succeeded = (Var_544 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_602 = ((MR_Word) ((MR_hl_field(1, Var_544, (MR_Integer) 0))));
                    Var_545 = ((MR_Word) ((MR_hl_field(1, Var_544, (MR_Integer) 1))));
                    succeeded = (Var_545 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      NumTargetBits_514 = check_hlds__simplify__simplify_goal_call__int_type_target_bits_2_f_0(Globals_24, IntType_13);
                      hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_14, Y_601, &InstY_603);
                      succeeded = ((MR_tag((MR_Word) InstY_603)) == (MR_Integer) 2);
                      if (succeeded)
                      {
                        Var_341 = ((MR_Word) ((MR_hl_field(2, InstY_603, (MR_Integer) 2))));
                        succeeded = (Var_341 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_342 = ((MR_Word) ((MR_hl_field(1, Var_341, (MR_Integer) 0))));
                          Var_345 = ((MR_Word) ((MR_hl_field(1, Var_341, (MR_Integer) 1))));
                          succeeded = (Var_345 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_343 = ((MR_Word) ((MR_hl_field(0, Var_342, (MR_Integer) 0))));
                            Var_344 = ((MR_Word) ((MR_hl_field(0, Var_342, (MR_Integer) 1))));
                            succeeded = (Var_344 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = ((((MR_tag((MR_Word) Var_343)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_343, (MR_Integer) 0)))) == (MR_Integer) 5)));
                              if (succeeded)
                              {
                                YConst_434 = ((MR_Word) ((MR_hl_field(3, Var_343, (MR_Integer) 1))));
                                if (((MR_tag((MR_Word) YConst_434)) == (MR_Integer) 0))
                                  succeeded = MR_TRUE;
                                else
                                if (((MR_tag((MR_Word) YConst_434)) == (MR_Integer) 1))
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
                        if (((MR_tag((MR_Word) YConst_434)) == (MR_Integer) 0))
                        {
                          MR_Integer YIntVal_350 = ((MR_Integer) ((MR_hl_field(0, YConst_434, (MR_Integer) 0))));

                          succeeded = ((MR_Integer) 0 <= YIntVal_350);
                          if (succeeded)
                            succeeded = (YIntVal_350 < NumTargetBits_514);
                          if (succeeded)
                          {
                            check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_69, ModuleName_15, (MR_String) "unchecked_left_ushift", (MR_Integer) 0, X_600, Y_601, Z_602, ImprovedGoalExpr_20);
                            *STATE_VARIABLE_Info_70 = STATE_VARIABLE_Info_0_69;
                          }
                          else
                          {
                            *ImprovedGoalExpr_20 = GoalExpr0_19;
                            check_hlds__simplify__simplify_goal_call__report_bad_shift_amount_6_p_0(ModuleName_15, PredName_16, STATE_VARIABLE_GoalInfo_0_67, NumTargetBits_514, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
                          }
                        }
                        else
                        {
                          MR_Unsigned YUintVal_357 = ((MR_Unsigned) ((MR_hl_field(1, YConst_434, (MR_Integer) 0))));
                          MR_Unsigned Var_353;

                          Var_353 = mercury__uint__det_from_int_1_f_0(NumTargetBits_514);
                          succeeded = (YUintVal_357 < Var_353);
                          if (succeeded)
                          {
                            check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_69, ModuleName_15, (MR_String) "unchecked_left_ushift", (MR_Integer) 0, X_600, Y_601, Z_602, ImprovedGoalExpr_20);
                            *STATE_VARIABLE_Info_70 = STATE_VARIABLE_Info_0_69;
                          }
                          else
                          {
                            *ImprovedGoalExpr_20 = GoalExpr0_19;
                            check_hlds__simplify__simplify_goal_call__report_bad_shift_amount_6_p_0(ModuleName_15, PredName_16, STATE_VARIABLE_GoalInfo_0_67, NumTargetBits_514, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
                          }
                        }
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        MR_Word TypeCtorInfo_182_431;
                        MR_Word NumTargetBitsConstVar_366;
                        MR_Word NumTargetBitsConstGoal_367;
                        MR_Word PrivateBuiltin_368;
                        MR_Word InRangeTestGoal_369;
                        MR_Word TestConjGoalInfo_370;
                        MR_Word TestConjGoal_371;
                        MR_Word UncheckedShiftGoalExpr_372;
                        MR_Word UncheckedShiftGoal_373;
                        MR_String NotInRangeStr_374;
                        MR_Word ErrorMsgStrVar_375;
                        MR_Word ErrorMsgStrGoal_376;
                        MR_Word ExceptionType_377;
                        MR_Word ExceptionVar_378;
                        MR_Word ExceptionTypeCtor_379;
                        MR_Word ExceptionWrapperCtorSymName_380;
                        MR_Word ExceptionWrapperCtorUDC_381;
                        MR_Word ExceptionWrapperCtorConsId_382;
                        MR_Word WrapErrorMsgGoal_383;
                        MR_Word ThrowGoal_384;
                        MR_Word ThrowConjGoalInfo_385;
                        MR_Word ThrowConjGoal_386;
                        MR_Word STATE_VARIABLE_Info_123_387;
                        MR_String Var_388;
                        MR_Word Var_389;
                        MR_Word Var_390;
                        MR_Word Var_391;
                        MR_Word Var_392;
                        MR_Word Var_393;
                        MR_Word Var_394;
                        MR_Word Var_395;
                        MR_Word Var_396;
                        MR_Word Var_397;
                        MR_Word STATE_VARIABLE_Info_140_404;
                        MR_String Var_405;
                        MR_Integer Var_406;
                        MR_Word Var_407;
                        MR_Word Var_408;
                        MR_Word Var_409;
                        MR_Word Var_410;
                        MR_String Var_411;
                        MR_Word Var_412;
                        MR_Word Var_413;
                        MR_Word Var_414;
                        MR_Word Var_415;
                        MR_Word Var_416;
                        MR_Word Var_417;
                        MR_Word Var_418;
                        MR_Word Var_419;
                        MR_Word Var_421;
                        MR_Word Var_422;
                        MR_Word Var_423;
                        MR_Word Var_424;
                        MR_Word Var_425;
                        MR_Word Var_426;
                        MR_Word Var_427;
                        MR_Word Var_428;
                        MR_Word Var_429;
                        MR_Word Context_430;
                        MR_String Var_1318;

                        succeeded = mercury__builtin__semidet_fail_0_p_0();
                        if (succeeded)
                        {
                          Context_430 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_67);
                          check_hlds__simplify__simplify_goal_call__simplify_make_int_const_5_p_0(NumTargetBits_514, &NumTargetBitsConstVar_366, &NumTargetBitsConstGoal_367, STATE_VARIABLE_Info_0_69, &STATE_VARIABLE_Info_123_387);
                          PrivateBuiltin_368 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                          Var_388 = (MR_String) "unsigned_lt";
                          Var_389 = (MR_Integer) 0;
                          check_hlds__simplify__simplify_goal_call__simplify_make_cmp_goal_expr_8_p_0(STATE_VARIABLE_Info_123_387, PrivateBuiltin_368, Var_388, Var_389, Y_601, NumTargetBitsConstVar_366, Context_430, &InRangeTestGoal_369);
                          TypeCtorInfo_182_431 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                          Var_390 = parse_tree__set_of_var__make_singleton_1_f_0(TypeCtorInfo_182_431, Y_601);
                          Var_391 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                          Var_392 = (MR_Integer) 1;
                          Var_393 = (MR_Integer) 0;
                          hlds__hlds_goal__goal_info_init_6_p_0(Var_390, Var_391, Var_392, Var_393, Context_430, &TestConjGoalInfo_370);
                          Var_396 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            Var_395 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_395, 0) = ((MR_Box) (InRangeTestGoal_369));
                            MR_hl_field(1, Var_395, 1) = ((MR_Box) (Var_396));
                          }
                          {
                            Var_394 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_394, 0) = ((MR_Box) (NumTargetBitsConstGoal_367));
                            MR_hl_field(1, Var_394, 1) = ((MR_Box) (Var_395));
                          }
                          hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_394, TestConjGoalInfo_370, &TestConjGoal_371);
                          Var_397 = (MR_Integer) 0;
                          check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_123_387, ModuleName_15, (MR_String) "unchecked_left_ushift", Var_397, X_600, Y_601, Z_602, &UncheckedShiftGoalExpr_372);
                          Var_1318 = (MR_String) ".(<<u): second operand is out of range";
                          {
                            UncheckedShiftGoal_373 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, UncheckedShiftGoal_373, 0) = ((MR_Box) (UncheckedShiftGoalExpr_372));
                            MR_hl_field(0, UncheckedShiftGoal_373, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_0_67));
                          }
                          NotInRangeStr_374 = mercury__string__f_43_43_2_f_0(ModuleName_15, Var_1318);
                          check_hlds__simplify__simplify_goal_call__simplify_make_string_const_5_p_0(NotInRangeStr_374, &ErrorMsgStrVar_375, &ErrorMsgStrGoal_376, STATE_VARIABLE_Info_123_387, &STATE_VARIABLE_Info_140_404);
                          ExceptionType_377 = parse_tree__builtin_lib_types__void_type_0_f_0();
                          check_hlds__simplify__simplify_goal_call__simplify_make_var_4_p_0(ExceptionType_377, &ExceptionVar_378, STATE_VARIABLE_Info_140_404, STATE_VARIABLE_Info_70);
                          parse_tree__prog_type__type_to_ctor_det_2_p_0(ExceptionType_377, &ExceptionTypeCtor_379);
                          Var_405 = (MR_String) "math_domain_error";
                          Var_406 = (MR_Integer) 1;
                          Var_408 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            ExceptionWrapperCtorSymName_380 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, ExceptionWrapperCtorSymName_380, 0) = ((MR_Box) (PrivateBuiltin_368));
                            MR_hl_field(1, ExceptionWrapperCtorSymName_380, 1) = ((MR_Box) (Var_405));
                          }
                          {
                            ExceptionWrapperCtorUDC_381 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, ExceptionWrapperCtorUDC_381, 0) = ((MR_Box) (ExceptionWrapperCtorSymName_380));
                            MR_hl_field(0, ExceptionWrapperCtorUDC_381, 1) = ((MR_Box) (Var_406));
                            MR_hl_field(0, ExceptionWrapperCtorUDC_381, 2) = ((MR_Box) (ExceptionTypeCtor_379));
                          }
                          ExceptionWrapperCtorConsId_382 = (MR_Word) (MR_mkword(1, (MR_Word) (ExceptionWrapperCtorUDC_381)));
                          {
                            Var_407 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_407, 0) = ((MR_Box) (ErrorMsgStrVar_375));
                            MR_hl_field(1, Var_407, 1) = ((MR_Box) (Var_408));
                          }
                          hlds__make_goal__construct_functor_4_p_0(ExceptionVar_378, ExceptionWrapperCtorConsId_382, Var_407, &WrapErrorMsgGoal_383);
                          Var_409 = (MR_Integer) 0;
                          Var_410 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
                          Var_411 = (MR_String) "throw";
                          Var_412 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            Var_413 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_413, 0) = ((MR_Box) (ExceptionVar_378));
                            MR_hl_field(1, Var_413, 1) = ((MR_Box) (Var_412));
                          }
                          Var_414 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                          Var_415 = (MR_Word) ((MR_Unsigned) 0U);
                          Var_416 = (MR_Integer) 6;
                          Var_417 = (MR_Integer) 0;
                          Var_418 = (MR_Word) ((MR_Unsigned) 0U);
                          Var_419 = mercury__term_context__dummy_context_0_f_0();
                          hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_23, Var_409, Var_410, Var_411, Var_412, Var_413, Var_414, Var_415, Var_416, Var_417, Var_418, Var_419, &ThrowGoal_384);
                          Var_421 = parse_tree__set_of_var__init_0_f_0(TypeCtorInfo_182_431);
                          Var_422 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                          Var_423 = (MR_Integer) 6;
                          Var_424 = (MR_Integer) 0;
                          hlds__hlds_goal__goal_info_init_6_p_0(Var_421, Var_422, Var_423, Var_424, Context_430, &ThrowConjGoalInfo_385);
                          Var_428 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            Var_427 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_427, 0) = ((MR_Box) (ThrowGoal_384));
                            MR_hl_field(1, Var_427, 1) = ((MR_Box) (Var_428));
                          }
                          {
                            Var_426 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_426, 0) = ((MR_Box) (WrapErrorMsgGoal_383));
                            MR_hl_field(1, Var_426, 1) = ((MR_Box) (Var_427));
                          }
                          {
                            Var_425 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_425, 0) = ((MR_Box) (ErrorMsgStrGoal_376));
                            MR_hl_field(1, Var_425, 1) = ((MR_Box) (Var_426));
                          }
                          hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_425, ThrowConjGoalInfo_385, &ThrowConjGoal_386);
                          Var_429 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                            *ImprovedGoalExpr_20 = base;
                            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                            MR_hl_field(3, base, 1) = ((MR_Box) (Var_429));
                            MR_hl_field(3, base, 2) = ((MR_Box) (TestConjGoal_371));
                            MR_hl_field(3, base, 3) = ((MR_Box) (UncheckedShiftGoal_373));
                            MR_hl_field(3, base, 4) = ((MR_Box) (ThrowConjGoal_386));
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

static MR_Integer MR_CALL 
check_hlds__simplify__simplify_goal_call__int_type_target_bits_2_f_0(
  MR_Word Globals_4,
  MR_Word IntType_5)
{
  MR_Integer IntTypeBits_6;

  switch (IntType_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      IntTypeBits_6 = parse_tree__int_emu__target_word_bits_1_f_0(Globals_4);
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

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__is_int_const_2_p_0(
  MR_Word IntType_3,
  MR_Word ConsId_4)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) ConsId_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 5)));
  MR_Word IntConst_5;

  if (succeeded)
  {
    IntConst_5 = ((MR_Word) ((MR_hl_field(3, ConsId_4, (MR_Integer) 1))));
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
          succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
          }
        }
        break;
      case (MR_Integer) 6:
        {
          succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_5, (MR_Integer) 0)))) == (MR_Integer) 3)));
          if (succeeded)
          {
          }
        }
        break;
      case (MR_Integer) 8:
        {
          succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_5, (MR_Integer) 0)))) == (MR_Integer) 5)));
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
          succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
          }
        }
        break;
      case (MR_Integer) 7:
        {
          succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_5, (MR_Integer) 0)))) == (MR_Integer) 4)));
          if (succeeded)
          {
          }
        }
        break;
      case (MR_Integer) 9:
        {
          succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_5, (MR_Integer) 0)))) == (MR_Integer) 6)));
          if (succeeded)
          {
          }
        }
        break;
      case (MR_Integer) 3:
        {
          succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_5, (MR_Integer) 0)))) == (MR_Integer) 0)));
          if (succeeded)
          {
          }
        }
        break;
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__is_zero_const_2_p_0(
  MR_Word IntType_3,
  MR_Word ConsId_4)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) ConsId_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 5)));
  MR_Word IntConst_5;

  if (succeeded)
  {
    IntConst_5 = ((MR_Word) ((MR_hl_field(3, ConsId_4, (MR_Integer) 1))));
    switch (IntType_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer Val_6;

          succeeded = ((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 0);
          if (succeeded)
          {
            Val_6 = ((MR_Integer) ((MR_hl_field(0, IntConst_5, (MR_Integer) 0))));
            succeeded = (Val_6 == (MR_Integer) 0);
          }
        }
        break;
      case (MR_Integer) 4:
        {
          int16_t Val_10;

          succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            Val_10 = ((int16_t) (MR_Word) (MR_hl_field(3, IntConst_5, (MR_Integer) 1)));
            succeeded = (Val_10 == INT16_C(0));
          }
        }
        break;
      case (MR_Integer) 6:
        {
          int32_t Val_12;

          succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_5, (MR_Integer) 0)))) == (MR_Integer) 3)));
          if (succeeded)
          {
            Val_12 = ((int32_t) (MR_Word) (MR_hl_field(3, IntConst_5, (MR_Integer) 1)));
            succeeded = (Val_12 == INT32_C(0));
          }
        }
        break;
      case (MR_Integer) 8:
        {
          int64_t Val_14;

          succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_5, (MR_Integer) 0)))) == (MR_Integer) 5)));
          if (succeeded)
          {
            Val_14 = MR_unbox_int64((MR_hl_field(3, IntConst_5, (MR_Integer) 1)));
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
            Val_8 = ((int8_t) (MR_Word) (MR_hl_field(2, IntConst_5, (MR_Integer) 0)));
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
            Val_7 = ((MR_Unsigned) ((MR_hl_field(1, IntConst_5, (MR_Integer) 0))));
            succeeded = (Val_7 == (MR_Unsigned) 0U);
          }
        }
        break;
      case (MR_Integer) 5:
        {
          uint16_t Val_11;

          succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            Val_11 = ((uint16_t) (MR_Word) (MR_hl_field(3, IntConst_5, (MR_Integer) 1)));
            succeeded = (Val_11 == UINT16_C(0));
          }
        }
        break;
      case (MR_Integer) 7:
        {
          uint32_t Val_13;

          succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_5, (MR_Integer) 0)))) == (MR_Integer) 4)));
          if (succeeded)
          {
            Val_13 = ((uint32_t) (MR_Word) (MR_hl_field(3, IntConst_5, (MR_Integer) 1)));
            succeeded = (Val_13 == UINT32_C(0));
          }
        }
        break;
      case (MR_Integer) 9:
        {
          uint64_t Val_15;

          succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_5, (MR_Integer) 0)))) == (MR_Integer) 6)));
          if (succeeded)
          {
            Val_15 = MR_unbox_uint64((MR_hl_field(3, IntConst_5, (MR_Integer) 1)));
            succeeded = (Val_15 == UINT64_C(0));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          uint8_t Val_9;

          succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_5, (MR_Integer) 0)))) == (MR_Integer) 0)));
          if (succeeded)
          {
            Val_9 = ((uint8_t) (MR_Word) (MR_hl_field(3, IntConst_5, (MR_Integer) 1)));
            succeeded = (Val_9 == UINT8_C(0));
          }
        }
        break;
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__report_bad_shift_amount_6_p_0(
  MR_String ModuleName_7,
  MR_String PredName_8,
  MR_Word GoalInfo_9,
  MR_Integer NumTargetBits_10,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  MR_Word Context_12;
  MR_Word SymName_13;
  MR_String ExclusiveDot_14;
  MR_Word Pieces_15;
  MR_Word Spec_16;
  MR_Word Var_19;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_33;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_43;
  MR_Word Var_46;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_String Var_61;

  Context_12 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_9);
  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (ModuleName_7));
  }
  {
    SymName_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_13, 0) = ((MR_Box) (Var_19));
    MR_hl_field(1, SymName_13, 1) = ((MR_Box) (PredName_8));
  }
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_2[3]), NumTargetBits_10, &Var_61);
  ExclusiveDot_14 = mercury__string__f_43_43_2_f_0(Var_61, (MR_String) " (exclusive).");
  {
    Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_31, 1) = ((MR_Box) (SymName_13));
  }
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_29 = parse_tree__error_spec__color_as_subject_1_f_0(Var_30);
  {
    Var_50 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_50, 0) = ((MR_Box) (ExclusiveDot_14));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[89])));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_49));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (MR_mkword(2, &check_hlds__simplify__simplify_goal_call_scalar_common_2[4])));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_46));
  }
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[88])));
    MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_43));
  }
  Var_39 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_40);
  Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_39, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[7])));
  Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[87])), Var_38);
  Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_29, Var_33);
  Pieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[83])), Var_28);
  {
    Spec_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.report_bad_shift_amount\'/6"));
    MR_hl_field(0, Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_16, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_2[1])));
    MR_hl_field(0, Spec_16, 3) = ((MR_Box) (Context_12));
    MR_hl_field(0, Spec_16, 4) = ((MR_Box) (Pieces_15));
  }
  check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_16, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_make_var_4_p_0(
  MR_Word Type_5,
  MR_Word * Var_6,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  MR_Word ModuleInfo_8;
  MR_Word IsDummy_9;
  MR_Word Entry_10;
  MR_Word VarTable0_11;
  MR_Word VarTable_12;

  check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_13, &ModuleInfo_8);
  IsDummy_9 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_8, Type_5);
  {
    Entry_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Entry_10, 0) = ((MR_Box) ((MR_String) ""));
    MR_hl_field(0, Entry_10, 1) = ((MR_Box) (Type_5));
    MR_hl_field(0, Entry_10, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_9));
  }
  check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_13, &VarTable0_11);
  parse_tree__var_table__add_var_entry_4_p_0(Entry_10, Var_6, VarTable0_11, &VarTable_12);
  check_hlds__simplify__simplify_info__simplify_info_set_var_table_3_p_0(VarTable_12, STATE_VARIABLE_Info_0_13, STATE_VARIABLE_Info_14);
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_make_string_const_5_p_0(
  MR_String StringConst_6,
  MR_Word * ConstVar_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  MR_Word ConstConsId_10;
  MR_Word Var_13;
  MR_Word Unification_14;
  MR_Word RHS_15;
  MR_Word Ground_17;
  MR_Word UnifyMode_18;
  MR_Word GoalExpr_19;
  MR_Word NonLocals_20;
  MR_Word InstMapDelta_21;
  MR_Word GoalInfo_22;
  MR_Word ModuleInfo_38;
  MR_Word IsDummy_39;
  MR_Word Entry_40;
  MR_Word VarTable0_41;
  MR_Word VarTable_42;

  {
    ConstConsId_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ConstConsId_10, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, ConstConsId_10, 1) = ((MR_Box) (StringConst_6));
  }
  Var_13 = parse_tree__builtin_lib_types__string_type_0_f_0();
  check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_11, &ModuleInfo_38);
  IsDummy_39 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_38, Var_13);
  {
    Entry_40 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Entry_40, 0) = ((MR_Box) ((MR_String) ""));
    MR_hl_field(0, Entry_40, 1) = ((MR_Box) (Var_13));
    MR_hl_field(0, Entry_40, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_39));
  }
  check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_11, &VarTable0_41);
  parse_tree__var_table__add_var_entry_4_p_0(Entry_40, ConstVar_7, VarTable0_41, &VarTable_42);
  check_hlds__simplify__simplify_info__simplify_info_set_var_table_3_p_0(VarTable_42, STATE_VARIABLE_Info_0_11, STATE_VARIABLE_Info_12);
  {
    Unification_14 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Unification_14, 0) = ((MR_Box) (*ConstVar_7));
    MR_hl_field(0, Unification_14, 1) = ((MR_Box) (ConstConsId_10));
    MR_hl_field(0, Unification_14, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Unification_14, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Unification_14, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Unification_14, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, Unification_14, 6) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    RHS_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RHS_15, 0) = ((MR_Box) (ConstConsId_10));
    MR_hl_field(1, RHS_15, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(1, RHS_15, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Ground_17 = parse_tree__prog_mode__ground_inst_0_f_0();
  {
    UnifyMode_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UnifyMode_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, UnifyMode_18, 1) = ((MR_Box) (Ground_17));
    MR_hl_field(0, UnifyMode_18, 2) = ((MR_Box) (Ground_17));
    MR_hl_field(0, UnifyMode_18, 3) = ((MR_Box) (Ground_17));
  }
  {
    GoalExpr_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, GoalExpr_19, 0) = ((MR_Box) (*ConstVar_7));
    MR_hl_field(1, GoalExpr_19, 1) = ((MR_Box) (RHS_15));
    MR_hl_field(1, GoalExpr_19, 2) = ((MR_Box) (UnifyMode_18));
    MR_hl_field(1, GoalExpr_19, 3) = ((MR_Box) (Unification_14));
    MR_hl_field(1, GoalExpr_19, 4) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[81]));
  }
  NonLocals_20 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *ConstVar_7);
  InstMapDelta_21 = hlds__instmap__instmap_delta_bind_var_1_f_0(*ConstVar_7);
  hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_20, InstMapDelta_21, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_22);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_19));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_22));
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
    MR_hl_field(0, OpGoal_21, 0) = ((MR_Box) (OpGoalExpr_20));
    MR_hl_field(0, OpGoal_21, 1) = ((MR_Box) (OrigGoalInfo_16));
  }
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (OpGoal_21));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (ConstGoal_19));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_28));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    *GoalExpr_15 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, base, 2) = ((MR_Box) (Var_27));
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
  MR_Word ConstConsId_10;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Unification_15;
  MR_Word RHS_16;
  MR_Word Ground_18;
  MR_Word UnifyMode_19;
  MR_Word GoalExpr_20;
  MR_Word NonLocals_21;
  MR_Word InstMapDelta_22;
  MR_Word GoalInfo_23;
  MR_Word ModuleInfo_39;
  MR_Word IsDummy_40;
  MR_Word Entry_41;
  MR_Word VarTable0_42;
  MR_Word VarTable_43;

  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (IntConst_6));
  }
  {
    ConstConsId_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ConstConsId_10, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, ConstConsId_10, 1) = ((MR_Box) (Var_13));
  }
  Var_14 = parse_tree__builtin_lib_types__int_type_0_f_0();
  check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_11, &ModuleInfo_39);
  IsDummy_40 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_39, Var_14);
  {
    Entry_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Entry_41, 0) = ((MR_Box) ((MR_String) ""));
    MR_hl_field(0, Entry_41, 1) = ((MR_Box) (Var_14));
    MR_hl_field(0, Entry_41, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_40));
  }
  check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_11, &VarTable0_42);
  parse_tree__var_table__add_var_entry_4_p_0(Entry_41, ConstVar_7, VarTable0_42, &VarTable_43);
  check_hlds__simplify__simplify_info__simplify_info_set_var_table_3_p_0(VarTable_43, STATE_VARIABLE_Info_0_11, STATE_VARIABLE_Info_12);
  {
    Unification_15 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Unification_15, 0) = ((MR_Box) (*ConstVar_7));
    MR_hl_field(0, Unification_15, 1) = ((MR_Box) (ConstConsId_10));
    MR_hl_field(0, Unification_15, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Unification_15, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Unification_15, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Unification_15, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, Unification_15, 6) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    RHS_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RHS_16, 0) = ((MR_Box) (ConstConsId_10));
    MR_hl_field(1, RHS_16, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(1, RHS_16, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Ground_18 = parse_tree__prog_mode__ground_inst_0_f_0();
  {
    UnifyMode_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UnifyMode_19, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, UnifyMode_19, 1) = ((MR_Box) (Ground_18));
    MR_hl_field(0, UnifyMode_19, 2) = ((MR_Box) (Ground_18));
    MR_hl_field(0, UnifyMode_19, 3) = ((MR_Box) (Ground_18));
  }
  {
    GoalExpr_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, GoalExpr_20, 0) = ((MR_Box) (*ConstVar_7));
    MR_hl_field(1, GoalExpr_20, 1) = ((MR_Box) (RHS_16));
    MR_hl_field(1, GoalExpr_20, 2) = ((MR_Box) (UnifyMode_19));
    MR_hl_field(1, GoalExpr_20, 3) = ((MR_Box) (Unification_15));
    MR_hl_field(1, GoalExpr_20, 4) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[81]));
  }
  NonLocals_21 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *ConstVar_7);
  InstMapDelta_22 = hlds__instmap__instmap_delta_bind_var_1_f_0(*ConstVar_7);
  hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_21, InstMapDelta_22, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_23);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_20));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_23));
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
  MR_Word ModuleSymName_17;
  MR_Word OpSymName_18;
  MR_Word ModuleInfo_19;
  MR_Word PredTable_20;
  MR_Word OpPredId_21;
  MR_Integer OpProcId_22;
  MR_Word OpArgs_23;
  MR_Word Var_25;
  MR_Word Var_30;
  MR_Word Var_31;

  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (ModuleName_10));
  }
  ModuleSymName_17 = mdbcomp__builtin_modules__maybe_add_stdlib_wrapper_1_f_0(Var_25);
  {
    OpSymName_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, OpSymName_18, 0) = ((MR_Box) (ModuleSymName_17));
    MR_hl_field(1, OpSymName_18, 1) = ((MR_Box) (Op_11));
  }
  check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(Info_9, &ModuleInfo_19);
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_19, &PredTable_20);
  hlds__pred_table__predicate_table_lookup_func_sym_arity_one_5_p_0(PredTable_20, (MR_Integer) 0, OpSymName_18, (MR_Word) (((MR_Box) ((MR_Integer) 2))), &OpPredId_21);
  hlds__hlds_pred__proc_id_to_int_2_p_1(&OpProcId_22, (MR_Integer) 0);
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) (Z_15));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (Y_14));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_31));
  }
  {
    OpArgs_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, OpArgs_23, 0) = ((MR_Box) (X_13));
    MR_hl_field(1, OpArgs_23, 1) = ((MR_Box) (Var_30));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    *GoalExpr_16 = base;
    MR_hl_field(2, base, 0) = ((MR_Box) (OpPredId_21));
    MR_hl_field(2, base, 1) = ((MR_Box) (OpProcId_22));
    MR_hl_field(2, base, 2) = ((MR_Box) (OpArgs_23));
    MR_hl_field(2, base, 3) = (MR_Box) ((MR_Unsigned) (IsBuiltin_12));
    MR_hl_field(2, base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, base, 5) = ((MR_Box) (OpSymName_18));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(
  MR_String PredName_4,
  MR_Word Args_5,
  MR_Word * ImprovedGoalExpr_6)
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
    Var_16 = ((MR_Word) ((MR_hl_field(1, Args_5, (MR_Integer) 0))));
    Var_15 = ((MR_Word) ((MR_hl_field(1, Args_5, (MR_Integer) 1))));
    succeeded = (Var_15 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_18 = ((MR_Word) ((MR_hl_field(1, Var_15, (MR_Integer) 0))));
      Var_17 = ((MR_Word) ((MR_hl_field(1, Var_15, (MR_Integer) 1))));
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
  MR_bool succeeded;
  MR_Word ModuleSymName_17;
  MR_String PredNameLt_18;
  MR_String PredNameGt_19;
  MR_Word CmpLtGoal_20;
  MR_Word CmpGtGoal_21;
  MR_String Var_23;
  MR_String Var_26;
  MR_Word Builtin_30;
  MR_Word CmpRes_31;
  MR_Word CmpResTypeCtor_32;
  MR_Word UDC_Lt_33;
  MR_Word UDC_Eq_34;
  MR_Word UDC_Gt_35;
  MR_Word FunctorResultLt_36;
  MR_Word FunctorResultEq_37;
  MR_Word FunctorResultGt_38;
  MR_Word ReturnLtGoal_39;
  MR_Word ReturnEqGoal_40;
  MR_Word ReturnGtGoal_41;
  MR_Word Var_45;
  MR_Word Var_48;
  MR_Word Var_51;
  MR_Word Var_54;

  ModuleSymName_17 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  Var_23 = mercury__string__f_43_43_2_f_0(TypeName_10, (MR_String) "_lt");
  PredNameLt_18 = mercury__string__f_43_43_2_f_0((MR_String) "builtin_", Var_23);
  Var_26 = mercury__string__f_43_43_2_f_0(TypeName_10, (MR_String) "_gt");
  PredNameGt_19 = mercury__string__f_43_43_2_f_0((MR_String) "builtin_", Var_26);
  check_hlds__simplify__simplify_goal_call__simplify_make_cmp_goal_expr_8_p_0(Info_9, ModuleSymName_17, PredNameLt_18, (MR_Integer) 0, X_12, Y_13, Context_14, &CmpLtGoal_20);
  check_hlds__simplify__simplify_goal_call__simplify_make_cmp_goal_expr_8_p_0(Info_9, ModuleSymName_17, PredNameGt_19, (MR_Integer) 0, X_12, Y_13, Context_14, &CmpGtGoal_21);
  Builtin_30 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  Var_45 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    CmpRes_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, CmpRes_31, 0) = ((MR_Box) (Var_45));
    MR_hl_field(1, CmpRes_31, 1) = ((MR_Box) ((MR_String) "comparison_result"));
  }
  {
    CmpResTypeCtor_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CmpResTypeCtor_32, 0) = ((MR_Box) (CmpRes_31));
    MR_hl_field(0, CmpResTypeCtor_32, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (Builtin_30));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_String) "<"));
  }
  {
    UDC_Lt_33 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UDC_Lt_33, 0) = ((MR_Box) (Var_48));
    MR_hl_field(0, UDC_Lt_33, 1) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, UDC_Lt_33, 2) = ((MR_Box) (CmpResTypeCtor_32));
  }
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (Builtin_30));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_String) "="));
  }
  {
    UDC_Eq_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UDC_Eq_34, 0) = ((MR_Box) (Var_51));
    MR_hl_field(0, UDC_Eq_34, 1) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, UDC_Eq_34, 2) = ((MR_Box) (CmpResTypeCtor_32));
  }
  {
    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_54, 0) = ((MR_Box) (Builtin_30));
    MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_String) ">"));
  }
  {
    UDC_Gt_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UDC_Gt_35, 0) = ((MR_Box) (Var_54));
    MR_hl_field(0, UDC_Gt_35, 1) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, UDC_Gt_35, 2) = ((MR_Box) (CmpResTypeCtor_32));
  }
  FunctorResultLt_36 = (MR_Word) (MR_mkword(1, (MR_Word) (UDC_Lt_33)));
  FunctorResultEq_37 = (MR_Word) (MR_mkword(1, (MR_Word) (UDC_Eq_34)));
  FunctorResultGt_38 = (MR_Word) (MR_mkword(1, (MR_Word) (UDC_Gt_35)));
  hlds__make_goal__make_const_construction_4_p_0(Context_14, R_11, FunctorResultLt_36, &ReturnLtGoal_39);
  hlds__make_goal__make_const_construction_4_p_0(Context_14, R_11, FunctorResultEq_37, &ReturnEqGoal_40);
  hlds__make_goal__make_const_construction_4_p_0(Context_14, R_11, FunctorResultGt_38, &ReturnGtGoal_41);
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[0]), ((MR_Box) (X_12)), ((MR_Box) (Y_13)));
  if (succeeded)
  {
    *GoalExpr_15 = ((MR_Word) ((MR_hl_field(0, ReturnEqGoal_40, (MR_Integer) 0))));
    *GoalInfo_16 = ((MR_Word) ((MR_hl_field(0, ReturnEqGoal_40, (MR_Integer) 1))));
  }
  else
  {
    MR_Word NonLocals_42;
    MR_Word ReturnGtEqGoalExpr_43;
    MR_Word ReturnGtEqGoal_44;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_61;

    {
      Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_59, 0) = ((MR_Box) (Y_13));
      MR_hl_field(1, Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_58, 0) = ((MR_Box) (X_12));
      MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_59));
    }
    {
      Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_57, 0) = ((MR_Box) (R_11));
      MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_58));
    }
    NonLocals_42 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_57);
    Var_61 = hlds__instmap__instmap_delta_bind_var_1_f_0(R_11);
    hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_42, Var_61, (MR_Integer) 0, (MR_Integer) 0, Context_14, GoalInfo_16);
    {
      ReturnGtEqGoalExpr_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ReturnGtEqGoalExpr_43, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, ReturnGtEqGoalExpr_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, ReturnGtEqGoalExpr_43, 2) = ((MR_Box) (CmpGtGoal_21));
      MR_hl_field(3, ReturnGtEqGoalExpr_43, 3) = ((MR_Box) (ReturnGtGoal_41));
      MR_hl_field(3, ReturnGtEqGoalExpr_43, 4) = ((MR_Box) (ReturnEqGoal_40));
    }
    {
      ReturnGtEqGoal_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ReturnGtEqGoal_44, 0) = ((MR_Box) (ReturnGtEqGoalExpr_43));
      MR_hl_field(0, ReturnGtEqGoal_44, 1) = ((MR_Box) (*GoalInfo_16));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      *GoalExpr_15 = base;
      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, base, 2) = ((MR_Box) (CmpLtGoal_20));
      MR_hl_field(3, base, 3) = ((MR_Box) (ReturnLtGoal_39));
      MR_hl_field(3, base, 4) = ((MR_Box) (ReturnGtEqGoal_44));
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
  MR_Word OpSymName_17;
  MR_Word ModuleInfo_18;
  MR_Word PredTable_19;
  MR_Word OpPredId_20;
  MR_Integer OpProcId_21;
  MR_Word OpArgs_22;
  MR_Word GoalExpr_24;
  MR_Word GoalInfo_25;
  MR_Word Var_30;
  MR_Word Var_32;
  MR_Word Var_33;

  {
    OpSymName_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, OpSymName_17, 0) = ((MR_Box) (ModuleSymName_10));
    MR_hl_field(1, OpSymName_17, 1) = ((MR_Box) (Op_11));
  }
  check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(Info_9, &ModuleInfo_18);
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_18, &PredTable_19);
  hlds__pred_table__predicate_table_lookup_pred_sym_arity_one_5_p_0(PredTable_19, (MR_Integer) 0, OpSymName_17, (MR_Word) (((MR_Box) ((MR_Integer) 2))), &OpPredId_20);
  hlds__hlds_pred__proc_id_to_int_2_p_1(&OpProcId_21, (MR_Integer) 0);
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (Y_14));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    OpArgs_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, OpArgs_22, 0) = ((MR_Box) (X_13));
    MR_hl_field(1, OpArgs_22, 1) = ((MR_Box) (Var_30));
  }
  {
    GoalExpr_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, GoalExpr_24, 0) = ((MR_Box) (OpPredId_20));
    MR_hl_field(2, GoalExpr_24, 1) = ((MR_Box) (OpProcId_21));
    MR_hl_field(2, GoalExpr_24, 2) = ((MR_Box) (OpArgs_22));
    MR_hl_field(2, GoalExpr_24, 3) = (MR_Box) ((MR_Unsigned) (IsBuiltin_12));
    MR_hl_field(2, GoalExpr_24, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, GoalExpr_24, 5) = ((MR_Box) (OpSymName_17));
  }
  Var_32 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OpArgs_22);
  Var_33 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
  hlds__hlds_goal__goal_info_init_6_p_0(Var_32, Var_33, (MR_Integer) 1, (MR_Integer) 0, Context_15, &GoalInfo_25);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_24));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_25));
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
  MR_bool succeeded;
  MR_Word VarTable0_20;
  MR_Word CmpResEntry_21;
  MR_Word CmpRes_22;
  MR_Word VarTable_23;
  MR_Word Context_24;
  MR_Word ArgVars_25;
  MR_Word XInst_26;
  MR_Word YInst_27;
  MR_Word ModuleInfo_28;
  MR_Integer ModeNo_29;
  MR_Word Unique_30;
  MR_Word ArgInsts_31;
  MR_Word BuiltinModule_32;
  MR_Word CmpGoal0_33;
  MR_Word CmpExpr_34;
  MR_Word CmpInfo0_35;
  MR_Word CmpNonLocals0_36;
  MR_Word CmpNonLocals_37;
  MR_Word CmpInfo_38;
  MR_Word CmpGoal_39;
  MR_Word TypeCtor_40;
  MR_Word DuCtor_41;
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
  MR_Word Var_56;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_64;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_79;
  MR_Word Var_83;
  MR_Word Var_84;

  check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_53, &VarTable0_20);
  Var_56 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
  {
    CmpResEntry_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CmpResEntry_21, 0) = ((MR_Box) ((MR_String) ""));
    MR_hl_field(0, CmpResEntry_21, 1) = ((MR_Box) (Var_56));
    MR_hl_field(0, CmpResEntry_21, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  parse_tree__var_table__add_var_entry_4_p_0(CmpResEntry_21, &CmpRes_22, VarTable0_20, &VarTable_23);
  check_hlds__simplify__simplify_info__simplify_info_set_var_table_3_p_0(VarTable_23, STATE_VARIABLE_Info_0_53, STATE_VARIABLE_Info_54);
  Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_16);
  {
    Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_60, 0) = ((MR_Box) (Y_13));
    MR_hl_field(1, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_59, 0) = ((MR_Box) (X_12));
    MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_60));
  }
  {
    ArgVars_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArgVars_25, 0) = ((MR_Box) (CmpRes_22));
    MR_hl_field(1, ArgVars_25, 1) = ((MR_Box) (Var_59));
  }
  hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_18, X_12, &XInst_26);
  hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_18, Y_13, &YInst_27);
  check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(*STATE_VARIABLE_Info_54, &ModuleInfo_28);
  succeeded = check_hlds__inst_test__inst_is_unique_2_p_0(ModuleInfo_28, XInst_26);
  if (succeeded)
  {
    succeeded = check_hlds__inst_test__inst_is_unique_2_p_0(ModuleInfo_28, YInst_27);
    if (succeeded)
      ModeNo_29 = (MR_Integer) 1;
    else
      ModeNo_29 = (MR_Integer) 2;
  }
  else
  {
    succeeded = check_hlds__inst_test__inst_is_unique_2_p_0(ModuleInfo_28, YInst_27);
    if (succeeded)
      ModeNo_29 = (MR_Integer) 3;
    else
      ModeNo_29 = (MR_Integer) 0;
  }
  Unique_30 = (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[79]));
  {
    Var_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_64, 0) = ((MR_Box) (CmpRes_22));
    MR_hl_field(0, Var_64, 1) = ((MR_Box) (Unique_30));
  }
  {
    ArgInsts_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArgInsts_31, 0) = ((MR_Box) (Var_64));
    MR_hl_field(1, ArgInsts_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  BuiltinModule_32 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_68, 0) = ((MR_Box) (TI_11));
    MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_69 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(ArgInsts_31);
  {
    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_70, 0) = ((MR_Box) (ModeNo_29));
  }
  hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_28, (MR_Integer) 0, BuiltinModule_32, (MR_String) "compare", Var_68, ArgVars_25, Var_69, Var_70, (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Context_24, &CmpGoal0_33);
  CmpExpr_34 = ((MR_Word) ((MR_hl_field(0, CmpGoal0_33, (MR_Integer) 0))));
  CmpInfo0_35 = ((MR_Word) ((MR_hl_field(0, CmpGoal0_33, (MR_Integer) 1))));
  CmpNonLocals0_36 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(CmpInfo0_35);
  parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CmpRes_22, CmpNonLocals0_36, &CmpNonLocals_37);
  hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(CmpNonLocals_37, CmpInfo0_35, &CmpInfo_38);
  {
    CmpGoal_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CmpGoal_39, 0) = ((MR_Box) (CmpExpr_34));
    MR_hl_field(0, CmpGoal_39, 1) = ((MR_Box) (CmpInfo_38));
  }
  Var_76 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_75, 0) = ((MR_Box) (Var_76));
    MR_hl_field(1, Var_75, 1) = ((MR_Box) ((MR_String) "comparison_result"));
  }
  {
    TypeCtor_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_40, 0) = ((MR_Box) (Var_75));
    MR_hl_field(0, TypeCtor_40, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_79, 0) = ((MR_Box) (BuiltinModule_32));
    MR_hl_field(1, Var_79, 1) = ((MR_Box) (Inequality_14));
  }
  {
    DuCtor_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, DuCtor_41, 0) = ((MR_Box) (Var_79));
    MR_hl_field(0, DuCtor_41, 1) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, DuCtor_41, 2) = ((MR_Box) (TypeCtor_40));
  }
  ConsId_42 = (MR_Word) (MR_mkword(1, (MR_Word) (DuCtor_41)));
  {
    Var_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_84, 0) = ((MR_Box) (ConsId_42));
    MR_hl_field(0, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_83, 0) = ((MR_Box) (Var_84));
    MR_hl_field(1, Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Bound_43 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Bound_43, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(2, Bound_43, 1) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(2, Bound_43, 2) = ((MR_Box) (Var_83));
  }
  {
    UnifyMode_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UnifyMode_44, 0) = ((MR_Box) (Unique_30));
    MR_hl_field(0, UnifyMode_44, 1) = ((MR_Box) (Bound_43));
    MR_hl_field(0, UnifyMode_44, 2) = ((MR_Box) (Bound_43));
    MR_hl_field(0, UnifyMode_44, 3) = ((MR_Box) (Bound_43));
  }
  {
    RHS_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RHS_45, 0) = ((MR_Box) (ConsId_42));
    MR_hl_field(1, RHS_45, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(1, RHS_45, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    UKind_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, UKind_46, 0) = ((MR_Box) (CmpRes_22));
    MR_hl_field(1, UKind_46, 1) = ((MR_Box) (ConsId_42));
    MR_hl_field(1, UKind_46, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, UKind_46, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, UKind_46, 4) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
  }
  {
    UnifyExpr_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, UnifyExpr_48, 0) = ((MR_Box) (CmpRes_22));
    MR_hl_field(1, UnifyExpr_48, 1) = ((MR_Box) (RHS_45));
    MR_hl_field(1, UnifyExpr_48, 2) = ((MR_Box) (UnifyMode_44));
    MR_hl_field(1, UnifyExpr_48, 3) = ((MR_Box) (UKind_46));
    MR_hl_field(1, UnifyExpr_48, 4) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[80]));
  }
  UnifyNonLocals0_49 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_16);
  parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CmpRes_22, UnifyNonLocals0_49, &UnifyNonLocals_50);
  hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(UnifyNonLocals_50, GoalInfo_16, &UnifyInfo_51);
  {
    UnifyGoal_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UnifyGoal_52, 0) = ((MR_Box) (UnifyExpr_48));
    MR_hl_field(0, UnifyGoal_52, 1) = ((MR_Box) (UnifyInfo_51));
  }
  switch (Invert_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_99;
        MR_Word Var_100;

        {
          Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_100, 0) = ((MR_Box) (UnifyGoal_52));
          MR_hl_field(1, Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_99, 0) = ((MR_Box) (CmpGoal_39));
          MR_hl_field(1, Var_99, 1) = ((MR_Box) (Var_100));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *ImprovedGoalExpr_17 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, base, 2) = ((MR_Box) (Var_99));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_103;
        MR_Word Var_104;
        MR_Word Var_105;
        MR_Word Var_106 = (MR_Word) ((MR_Word) (UnifyGoal_52));

        {
          Var_105 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_105, 0) = ((MR_Box) (Var_106));
          MR_hl_field(0, Var_105, 1) = ((MR_Box) (UnifyInfo_51));
        }
        {
          Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_104, 0) = ((MR_Box) (Var_105));
          MR_hl_field(1, Var_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_103, 0) = ((MR_Box) (CmpGoal_39));
          MR_hl_field(1, Var_103, 1) = ((MR_Box) (Var_104));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *ImprovedGoalExpr_17 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, base, 2) = ((MR_Box) (Var_103));
        }
      }
      break;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__is_useless_unsigned_comparison_5_p_0(
  MR_String ModuleName_6,
  MR_String PredName_7,
  MR_Word InstA_8,
  MR_Word InstB_9,
  MR_Word * Pieces_10)
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
              MR_Word TypeCtorInfo_118_118;
              MR_Word Var_64;
              MR_Word Var_65;
              MR_Word Var_69;
              MR_Word Var_70;
              MR_Word Var_71;
              MR_Word Var_72;
              MR_Word Var_74;
              MR_Word Var_75;
              MR_Word Var_76;
              MR_Word Var_77;
              MR_Word Var_79;
              MR_Word Var_80;
              MR_Word Var_81;
              MR_String ZeroStr_114;

              succeeded = check_hlds__simplify__simplify_goal_call__arg_is_unsigned_zero_3_p_0(ModuleName_6, InstB_9, &ZeroStr_114);
              if (succeeded)
              {
                TypeCtorInfo_118_118 = (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0);
                Var_65 = (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[60]));
                Var_64 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_65);
                Var_70 = (MR_Word) ((MR_Unsigned) 12U);
                Var_72 = (MR_Word) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[61]));
                Var_77 = (MR_Word) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[62]));
                Var_81 = (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[63]));
                {
                  Var_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(3, Var_75, 1) = ((MR_Box) (ModuleName_6));
                }
                {
                  Var_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_80, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(3, Var_80, 1) = ((MR_Box) (ZeroStr_114));
                }
                {
                  Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_79, 0) = ((MR_Box) (Var_80));
                  MR_hl_field(1, Var_79, 1) = ((MR_Box) (Var_81));
                }
                {
                  Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
                  MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_79));
                }
                {
                  Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_74, 0) = ((MR_Box) (Var_75));
                  MR_hl_field(1, Var_74, 1) = ((MR_Box) (Var_76));
                }
                {
                  Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_72));
                  MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_74));
                }
                {
                  Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
                  MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_71));
                }
                *Pieces_10 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_118_118, Var_64, Var_69);
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
              MR_Word TypeCtorInfo_117_117;
              MR_Word Var_38;
              MR_Word Var_39;
              MR_Word Var_43;
              MR_Word Var_44;
              MR_Word Var_45;
              MR_Word Var_46;
              MR_Word Var_47;
              MR_Word Var_48;
              MR_Word Var_50;
              MR_Word Var_51;
              MR_Word Var_53;
              MR_Word Var_54;
              MR_Word Var_56;
              MR_Word Var_57;
              MR_Word Var_58;
              MR_String ZeroStr_113;

              succeeded = check_hlds__simplify__simplify_goal_call__arg_is_unsigned_zero_3_p_0(ModuleName_6, InstA_8, &ZeroStr_113);
              if (succeeded)
              {
                TypeCtorInfo_117_117 = (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0);
                Var_39 = (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[65]));
                Var_38 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_39);
                Var_44 = (MR_Word) ((MR_Unsigned) 12U);
                Var_48 = (MR_Word) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[66]));
                Var_51 = (MR_Word) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[67]));
                Var_54 = (MR_Word) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[68]));
                Var_58 = (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[70]));
                {
                  Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(3, Var_46, 1) = ((MR_Box) (ZeroStr_113));
                }
                {
                  Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(3, Var_57, 1) = ((MR_Box) (ModuleName_6));
                }
                {
                  Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
                  MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_58));
                }
                {
                  Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
                  MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_56));
                }
                {
                  Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
                  MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_53));
                }
                {
                  Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
                  MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_50));
                }
                {
                  Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
                  MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_47));
                }
                {
                  Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
                  MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_45));
                }
                *Pieces_10 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_117_117, Var_38, Var_43);
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
              MR_Word TypeCtorInfo_119_119;
              MR_Word Var_87;
              MR_Word Var_88;
              MR_Word Var_92;
              MR_Word Var_93;
              MR_Word Var_94;
              MR_Word Var_95;
              MR_Word Var_96;
              MR_Word Var_97;
              MR_Word Var_99;
              MR_Word Var_100;
              MR_Word Var_102;
              MR_Word Var_103;
              MR_Word Var_105;
              MR_Word Var_106;
              MR_Word Var_107;
              MR_String ZeroStr_115;

              succeeded = check_hlds__simplify__simplify_goal_call__arg_is_unsigned_zero_3_p_0(ModuleName_6, InstA_8, &ZeroStr_115);
              if (succeeded)
              {
                TypeCtorInfo_119_119 = (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0);
                Var_88 = (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[60]));
                Var_87 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_88);
                Var_93 = (MR_Word) ((MR_Unsigned) 12U);
                Var_97 = (MR_Word) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[71]));
                Var_100 = (MR_Word) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[72]));
                Var_103 = (MR_Word) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[73]));
                Var_107 = (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[75]));
                {
                  Var_95 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_95, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(3, Var_95, 1) = ((MR_Box) (ZeroStr_115));
                }
                {
                  Var_106 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_106, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(3, Var_106, 1) = ((MR_Box) (ModuleName_6));
                }
                {
                  Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_105, 0) = ((MR_Box) (Var_106));
                  MR_hl_field(1, Var_105, 1) = ((MR_Box) (Var_107));
                }
                {
                  Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_102, 0) = ((MR_Box) (Var_103));
                  MR_hl_field(1, Var_102, 1) = ((MR_Box) (Var_105));
                }
                {
                  Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_99, 0) = ((MR_Box) (Var_100));
                  MR_hl_field(1, Var_99, 1) = ((MR_Box) (Var_102));
                }
                {
                  Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_96, 0) = ((MR_Box) (Var_97));
                  MR_hl_field(1, Var_96, 1) = ((MR_Box) (Var_99));
                }
                {
                  Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_94, 0) = ((MR_Box) (Var_95));
                  MR_hl_field(1, Var_94, 1) = ((MR_Box) (Var_96));
                }
                {
                  Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_93));
                  MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_94));
                }
                *Pieces_10 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_119_119, Var_87, Var_92);
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
              MR_Word TypeCtorInfo_116_116;
              MR_String ZeroStr_11;
              MR_Word Var_12;
              MR_Word Var_13;
              MR_Word Var_17;
              MR_Word Var_18;
              MR_Word Var_19;
              MR_Word Var_20;
              MR_Word Var_22;
              MR_Word Var_23;
              MR_Word Var_24;
              MR_Word Var_25;
              MR_Word Var_27;
              MR_Word Var_28;
              MR_Word Var_30;
              MR_Word Var_31;
              MR_Word Var_32;

              succeeded = check_hlds__simplify__simplify_goal_call__arg_is_unsigned_zero_3_p_0(ModuleName_6, InstB_9, &ZeroStr_11);
              if (succeeded)
              {
                TypeCtorInfo_116_116 = (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0);
                Var_13 = (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[65]));
                Var_12 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_13);
                Var_18 = (MR_Word) ((MR_Unsigned) 12U);
                Var_20 = (MR_Word) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[76]));
                Var_25 = (MR_Word) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[77]));
                Var_28 = (MR_Word) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[78]));
                Var_32 = (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[63]));
                {
                  Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(3, Var_23, 1) = ((MR_Box) (ModuleName_6));
                }
                {
                  Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(3, Var_31, 1) = ((MR_Box) (ZeroStr_11));
                }
                {
                  Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
                  MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_32));
                }
                {
                  Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
                  MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_30));
                }
                {
                  Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_24, 0) = ((MR_Box) (Var_25));
                  MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_27));
                }
                {
                  Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
                  MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_24));
                }
                {
                  Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_20));
                  MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_22));
                }
                {
                  Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_17, 0) = ((MR_Box) (Var_18));
                  MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_19));
                }
                *Pieces_10 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_116_116, Var_12, Var_17);
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

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__arg_is_unsigned_zero_3_p_0(
  MR_String ModuleName_4,
  MR_Word Arg_5,
  MR_String * ZeroStr_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Arg_5)) == (MR_Integer) 2);
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
    Var_10 = ((MR_Word) ((MR_hl_field(2, Arg_5, (MR_Integer) 2))));
    succeeded = (Var_10 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_11 = ((MR_Word) ((MR_hl_field(1, Var_10, (MR_Integer) 0))));
      Var_14 = ((MR_Word) ((MR_hl_field(1, Var_10, (MR_Integer) 1))));
      succeeded = (Var_14 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_12 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 0))));
        Var_13 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 1))));
        succeeded = (Var_13 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((((MR_tag((MR_Word) Var_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_12, (MR_Integer) 0)))) == (MR_Integer) 5)));
          if (succeeded)
          {
            IntConst_9 = ((MR_Word) ((MR_hl_field(3, Var_12, (MR_Integer) 1))));
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
                        MR_Unsigned Var_15;

                        succeeded = ((MR_tag((MR_Word) IntConst_9)) == (MR_Integer) 1);
                        if (succeeded)
                        {
                          Var_15 = ((MR_Unsigned) ((MR_hl_field(1, IntConst_9, (MR_Integer) 0))));
                          succeeded = (Var_15 == (MR_Unsigned) 0U);
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

                        succeeded = ((((MR_tag((MR_Word) IntConst_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_9, (MR_Integer) 0)))) == (MR_Integer) 2)));
                        if (succeeded)
                        {
                          Var_17 = ((uint16_t) (MR_Word) (MR_hl_field(3, IntConst_9, (MR_Integer) 1)));
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
                        uint32_t Var_18;

                        succeeded = ((((MR_tag((MR_Word) IntConst_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_9, (MR_Integer) 0)))) == (MR_Integer) 4)));
                        if (succeeded)
                        {
                          Var_18 = ((uint32_t) (MR_Word) (MR_hl_field(3, IntConst_9, (MR_Integer) 1)));
                          succeeded = (Var_18 == UINT32_C(0));
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
                        uint64_t Var_19;

                        succeeded = ((((MR_tag((MR_Word) IntConst_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_9, (MR_Integer) 0)))) == (MR_Integer) 6)));
                        if (succeeded)
                        {
                          Var_19 = MR_unbox_uint64((MR_hl_field(3, IntConst_9, (MR_Integer) 1)));
                          succeeded = (Var_19 == UINT64_C(0));
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
                        uint8_t Var_16;

                        succeeded = ((((MR_tag((MR_Word) IntConst_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_16 = ((uint8_t) (MR_Word) (MR_hl_field(3, IntConst_9, (MR_Integer) 1)));
                          succeeded = (Var_16 == UINT8_C(0));
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
  MR_bool succeeded;
  MR_Word AllInputsEqv_28;
  MR_Word AllInputsEqvOrSvar_29;
  MR_Word HeadBaseNames_30;
  MR_Word ArgBaseNames_31;
  MR_Word TypeCtorInfo_186_186;
  MR_Word CurPredProcId_22;
  MR_Word ModuleInfo_23;
  MR_Word VarTable_24;
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
  MR_Word Var_191;
  MR_Integer Var_192;
  MR_Word Var_54;

  succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_simple_code_1_p_0(STATE_VARIABLE_Info_0_47);
  if (succeeded)
  {
    check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_0_47, &CurPredProcId_22);
    Var_191 = ((MR_Word) ((MR_hl_field(0, CurPredProcId_22, (MR_Integer) 0))));
    Var_192 = ((MR_Integer) ((MR_hl_field(0, CurPredProcId_22, (MR_Integer) 1))));
    succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_12, Var_191);
    if (succeeded)
    {
      succeeded = (ProcId_13 == Var_192);
      if (succeeded)
      {
        succeeded = (IsBuiltin_15 != (MR_Integer) 0);
        if (succeeded)
        {
          Var_49 = ((MR_Unsigned) ((MR_hl_field(0, NestedContext_19, (MR_Integer) 2))));
          succeeded = (Var_49 == (MR_Unsigned) 0U);
          if (succeeded)
          {
            check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_47, &ModuleInfo_23);
            check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_47, &VarTable_24);
            hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(PredInfo_16, &VarNameRemap_25);
            hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_17, &HeadVars_26);
            hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_17, &ArgModes_27);
            Var_50 = (MR_Integer) 1;
            Var_51 = (MR_Integer) 1;
            TypeCtorInfo_186_186 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
            Var_52 = mercury__set__init_0_f_0(TypeCtorInfo_186_186);
            Var_53 = mercury__set__init_0_f_0(TypeCtorInfo_186_186);
            succeeded = check_hlds__simplify__simplify_goal_call__input_args_are_suspicious_15_p_0(ModuleInfo_23, Common_20, VarTable_24, VarNameRemap_25, HeadVars_26, ArgVars_14, ArgModes_27, Var_50, &AllInputsEqv_28, Var_51, &AllInputsEqvOrSvar_29, Var_52, &HeadBaseNames_30, Var_53, &ArgBaseNames_31);
            if (succeeded)
            {
              hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ProcInfo_17, &EvalMethod_32);
              succeeded = (EvalMethod_32 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_54 = ((MR_Word) ((MR_hl_field(1, EvalMethod_32, (MR_Integer) 0))));
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

    NamePieces_35 = hlds__hlds_error_util__describe_one_pred_info_name_4_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])), (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), PredInfo_16);
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
              MR_Word Var_59;
              MR_Word Var_62;
              MR_Word Var_63;
              MR_Word Var_85;
              MR_Word Var_86;
              MR_Word Var_87;
              MR_Word Var_88;

              {
                Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_59, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[26])));
                MR_hl_field(1, Var_59, 1) = ((MR_Box) (NamePieces_35));
              }
              Var_63 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[28])));
              Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_63, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[7])));
              MainPieces_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_59, Var_62);
              Var_86 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_18);
              {
                Var_88 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_88, 0) = ((MR_Box) (MainPieces_36));
              }
              {
                Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_87, 0) = ((MR_Box) (Var_88));
                MR_hl_field(1, Var_87, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[92])));
              }
              {
                Var_85 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_85, 0) = ((MR_Box) (Var_86));
                MR_hl_field(2, Var_85, 1) = ((MR_Box) (Var_87));
              }
              {
                Msgs_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Msgs_38, 0) = ((MR_Box) (Var_85));
                MR_hl_field(1, Msgs_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_39 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Spec_39, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.maybe_generate_warning_for_infinite_loop_call\'/11"));
                MR_hl_field(2, Spec_39, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(2, Spec_39, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_2[1])));
                MR_hl_field(2, Spec_39, 3) = ((MR_Box) (Msgs_38));
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
                MR_Word Var_99;
                MR_Word Var_102;
                MR_Word Var_103;
                MR_Word Var_120;
                MR_Word Var_121;
                MR_Word Var_122;
                MR_Word Var_123;
                MR_Word Var_124;
                MR_Word Var_125;
                MR_Word Msgs_175;
                MR_Word Spec_176;

                {
                  Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_99, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[26])));
                  MR_hl_field(1, Var_99, 1) = ((MR_Box) (NamePieces_35));
                }
                Var_103 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[38])));
                Var_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_103, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[44])));
                Pieces_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_99, Var_102);
                Var_121 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_18);
                {
                  Var_123 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_123, 0) = ((MR_Box) (Pieces_40));
                }
                Var_125 = check_hlds__simplify__simplify_goal_call__shut_up_suspicious_recursion_msg_0_f_0();
                {
                  Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_124, 0) = ((MR_Box) (Var_125));
                  MR_hl_field(1, Var_124, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_122, 0) = ((MR_Box) (Var_123));
                  MR_hl_field(1, Var_122, 1) = ((MR_Box) (Var_124));
                }
                {
                  Var_120 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Var_120, 0) = ((MR_Box) (Var_121));
                  MR_hl_field(2, Var_120, 1) = ((MR_Box) (Var_122));
                }
                {
                  Msgs_175 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Msgs_175, 0) = ((MR_Box) (Var_120));
                  MR_hl_field(1, Msgs_175, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_176 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Spec_176, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.maybe_generate_warning_for_infinite_loop_call\'/11"));
                  MR_hl_field(2, Spec_176, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(2, Spec_176, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_2[1])));
                  MR_hl_field(2, Spec_176, 3) = ((MR_Box) (Msgs_175));
                }
                check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_176, STATE_VARIABLE_Info_0_47, STATE_VARIABLE_Info_48);
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
          MR_Word Var_133;

          mercury__set__intersect_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HeadBaseNames_30, ArgBaseNames_31, &HeadArgBaseNames_41);
          SuspiciousArgNames_42 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HeadArgBaseNames_41);
          succeeded = (SuspiciousArgNames_42 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_133 = ((MR_Word) ((MR_hl_field(1, SuspiciousArgNames_42, (MR_Integer) 1))));
            succeeded = (Var_133 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_suspicious_recursion_1_p_0(STATE_VARIABLE_Info_0_47);
          }
          if (succeeded)
          {
            MR_Word Msg_46;
            MR_Word Var_134;
            MR_Word Var_137;
            MR_Word Var_138;
            MR_Word Var_143;
            MR_Word Var_148;
            MR_Word Var_149;
            MR_Word Var_160;
            MR_Word Var_161;
            MR_Word Var_162;
            MR_Word Var_163;
            MR_Word Var_164;
            MR_Word Var_172;
            MR_Word Spec_181;
            MR_Word Pieces_182;

            {
              Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_134, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[26])));
              MR_hl_field(1, Var_134, 1) = ((MR_Box) (NamePieces_35));
            }
            Var_138 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[38])));
            Var_149 = parse_tree__error_spec__fixed_list_to_pieces_2_f_0((MR_String) "and", SuspiciousArgNames_42);
            Var_148 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_149, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[50])));
            Var_143 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[46])), Var_148);
            Var_137 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_138, Var_143);
            Pieces_182 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_134, Var_137);
            Var_160 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_18);
            {
              Var_162 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_162, 0) = ((MR_Box) (Pieces_182));
            }
            Var_164 = check_hlds__simplify__simplify_goal_call__shut_up_suspicious_recursion_msg_0_f_0();
            {
              Var_163 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_163, 0) = ((MR_Box) (Var_164));
              MR_hl_field(1, Var_163, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_161 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_161, 0) = ((MR_Box) (Var_162));
              MR_hl_field(1, Var_161, 1) = ((MR_Box) (Var_163));
            }
            {
              Msg_46 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Msg_46, 0) = ((MR_Box) (Var_160));
              MR_hl_field(2, Msg_46, 1) = ((MR_Box) (Var_161));
            }
            {
              Var_172 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_172, 0) = ((MR_Box) (Msg_46));
              MR_hl_field(1, Var_172, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_181 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Spec_181, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.maybe_generate_warning_for_infinite_loop_call\'/11"));
              MR_hl_field(3, Spec_181, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 35) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
              MR_hl_field(3, Spec_181, 2) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, Spec_181, 3) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_2[1])));
              MR_hl_field(3, Spec_181, 4) = ((MR_Box) (Var_172));
            }
            check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_181, STATE_VARIABLE_Info_0_47, STATE_VARIABLE_Info_48);
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

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__input_args_are_suspicious_15_p_0(
  MR_Word ModuleInfo_1,
  MR_Word CommonInfo_2,
  MR_Word VarTable_3,
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
      MR_Word HeadVar_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word HeadVars_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word ArgVar_39;
      MR_Word ArgVars_40;
      MR_Word Mode_41;
      MR_Word Modes_42;
      MR_Word InitialInst_47;
      MR_Word STATE_VARIABLE_AllInputsEqv_62_62;
      MR_Word STATE_VARIABLE_AllInputsEqvOrSvar_64_64;
      MR_Word STATE_VARIABLE_HeadBaseNames_66_66;
      MR_Word STATE_VARIABLE_ArgBaseNames_67_67;
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
        ArgVar_39 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 0))));
        ArgVars_40 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 1))));
        succeeded = (HeadVar__7_7 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Mode_41 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, (MR_Integer) 0))));
          Modes_42 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, (MR_Integer) 1))));
          InitialInst_47 = check_hlds__mode_util__mode_get_initial_inst_2_f_0(ModuleInfo_1, Mode_41);
          succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_1, InitialInst_47);
          if (succeeded)
          {
            MR_Word ArgVarEntry_48;
            MR_Word ArgVarType_49;

            parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_3, ArgVar_39, &ArgVarEntry_48);
            ArgVarType_49 = ((MR_Word) ((MR_hl_field(0, ArgVarEntry_48, (MR_Integer) 1))));
            succeeded = check_hlds__inst_test__inst_is_ground_3_p_0(ModuleInfo_1, ArgVarType_49, InitialInst_47);
            if (succeeded)
            {
              succeeded = check_hlds__simplify__common__common_vars_are_equivalent_3_p_0(CommonInfo_2, ArgVar_39, HeadVar_37);
              if (succeeded)
              {
                STATE_VARIABLE_ArgBaseNames_67_67 = STATE_VARIABLE_ArgBaseNames_0_14;
                STATE_VARIABLE_HeadBaseNames_66_66 = STATE_VARIABLE_HeadBaseNames_0_12;
                STATE_VARIABLE_AllInputsEqvOrSvar_64_64 = STATE_VARIABLE_AllInputsEqvOrSvar_0_10;
                STATE_VARIABLE_AllInputsEqv_62_62 = STATE_VARIABLE_AllInputsEqv_0_8;
                succeeded = MR_TRUE;
              }
              else
              {
                MR_String HeadName_50;
                MR_String ArgName_51;
                MR_String HeadBaseName_52;
                MR_String ArgBaseName_53;
                MR_String HeadName_73;
                MR_Word TypeInfo_13_77;
                MR_Word TypeCtorInfo_14_78;
                MR_Box conv0_HeadName_73;
                MR_String StrNoSuffixPrime_79;
                MR_Integer End0_80;
                MR_Integer End1_81;
                MR_Integer End_83;
                MR_Integer Var_85;
                MR_Integer End2_82;
                MR_Char Var_84;
                MR_Char Var_86;
                MR_String StrNoSuffixPrime_87;
                MR_Integer End0_88;
                MR_Integer End1_89;
                MR_Integer End_91;
                MR_Integer Var_93;
                MR_Integer End2_90;
                MR_Char Var_92;
                MR_Char Var_94;

                succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_p_0(ModuleInfo_1, InitialInst_47);
                if (succeeded)
                {
                  STATE_VARIABLE_AllInputsEqv_62_62 = (MR_Integer) 0;
                  TypeInfo_13_77 = (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[0]);
                  TypeCtorInfo_14_78 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
                  succeeded = mercury__map__search_3_p_0(TypeInfo_13_77, TypeCtorInfo_14_78, VarNameRemap_4, ((MR_Box) (HeadVar_37)), &conv0_HeadName_73);
                  if (succeeded)
                  {
                    HeadName_73 = ((MR_String) (conv0_HeadName_73));
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    HeadName_50 = HeadName_73;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_Word Entry_74;

                    parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_3, HeadVar_37, &Entry_74);
                    HeadName_50 = ((MR_String) ((MR_hl_field(0, Entry_74, (MR_Integer) 0))));
                    succeeded = (strcmp(HeadName_50, (MR_String) "") == 0);
                    succeeded = !(succeeded);
                  }
                  if (succeeded)
                  {
                    ArgName_51 = ((MR_String) ((MR_hl_field(0, ArgVarEntry_48, (MR_Integer) 0))));
                    succeeded = (strcmp(ArgName_51, (MR_String) "") == 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      End0_80 = mercury__string__count_code_units_1_f_0(HeadName_50);
                      check_hlds__simplify__simplify_goal_call__skip_trailing_digits_3_p_0(HeadName_50, End0_80, &End1_81);
                      succeeded = (End1_81 < End0_80);
                      if (succeeded)
                      {
                        Var_84 = (MR_Char) 95;
                        succeeded = mercury__string__unsafe_prev_index_4_p_0(HeadName_50, End1_81, &End2_82, &Var_86);
                        if (succeeded)
                          succeeded = (Var_84 == Var_86);
                        if (succeeded)
                          End_83 = End2_82;
                        else
                          End_83 = End1_81;
                        Var_85 = (MR_Integer) 0;
                        mercury__string__unsafe_between_4_p_0(HeadName_50, Var_85, End_83, &StrNoSuffixPrime_79);
                        succeeded = MR_TRUE;
                      }
                      if (succeeded)
                        HeadBaseName_52 = StrNoSuffixPrime_79;
                      else
                        HeadBaseName_52 = HeadName_50;
                      End0_88 = mercury__string__count_code_units_1_f_0(ArgName_51);
                      check_hlds__simplify__simplify_goal_call__skip_trailing_digits_3_p_0(ArgName_51, End0_88, &End1_89);
                      succeeded = (End1_89 < End0_88);
                      if (succeeded)
                      {
                        Var_92 = (MR_Char) 95;
                        succeeded = mercury__string__unsafe_prev_index_4_p_0(ArgName_51, End1_89, &End2_90, &Var_94);
                        if (succeeded)
                          succeeded = (Var_92 == Var_94);
                        if (succeeded)
                          End_91 = End2_90;
                        else
                          End_91 = End1_89;
                        Var_93 = (MR_Integer) 0;
                        mercury__string__unsafe_between_4_p_0(ArgName_51, Var_93, End_91, &StrNoSuffixPrime_87);
                        succeeded = MR_TRUE;
                      }
                      if (succeeded)
                        ArgBaseName_53 = StrNoSuffixPrime_87;
                      else
                        ArgBaseName_53 = ArgName_51;
                      succeeded = (strcmp(HeadBaseName_52, ArgBaseName_53) == 0);
                      if (succeeded)
                      {
                        succeeded = mercury__string__prefix_2_p_0(HeadBaseName_52, (MR_String) "STATE_VARIABLE");
                        if (succeeded)
                          STATE_VARIABLE_AllInputsEqvOrSvar_64_64 = STATE_VARIABLE_AllInputsEqvOrSvar_0_10;
                        else
                          STATE_VARIABLE_AllInputsEqvOrSvar_64_64 = (MR_Integer) 0;
                        STATE_VARIABLE_ArgBaseNames_67_67 = STATE_VARIABLE_ArgBaseNames_0_14;
                        STATE_VARIABLE_HeadBaseNames_66_66 = STATE_VARIABLE_HeadBaseNames_0_12;
                      }
                      else
                      {
                        STATE_VARIABLE_AllInputsEqvOrSvar_64_64 = (MR_Integer) 0;
                        mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (HeadBaseName_52)), STATE_VARIABLE_HeadBaseNames_0_12, &STATE_VARIABLE_HeadBaseNames_66_66);
                        mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ArgBaseName_53)), STATE_VARIABLE_ArgBaseNames_0_14, &STATE_VARIABLE_ArgBaseNames_67_67);
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
            STATE_VARIABLE_ArgBaseNames_67_67 = STATE_VARIABLE_ArgBaseNames_0_14;
            STATE_VARIABLE_HeadBaseNames_66_66 = STATE_VARIABLE_HeadBaseNames_0_12;
            STATE_VARIABLE_AllInputsEqvOrSvar_64_64 = STATE_VARIABLE_AllInputsEqvOrSvar_0_10;
            STATE_VARIABLE_AllInputsEqv_62_62 = STATE_VARIABLE_AllInputsEqv_0_8;
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__5_5 = HeadVars_38;
            next_value_of_HeadVar__6_6 = ArgVars_40;
            next_value_of_HeadVar__7_7 = Modes_42;
            next_value_of_STATE_VARIABLE_AllInputsEqv_0_8 = STATE_VARIABLE_AllInputsEqv_62_62;
            next_value_of_STATE_VARIABLE_AllInputsEqvOrSvar_0_10 = STATE_VARIABLE_AllInputsEqvOrSvar_64_64;
            next_value_of_STATE_VARIABLE_HeadBaseNames_0_12 = STATE_VARIABLE_HeadBaseNames_66_66;
            next_value_of_STATE_VARIABLE_ArgBaseNames_0_14 = STATE_VARIABLE_ArgBaseNames_67_67;
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
  return (MR_Word) (MR_mkword(2, &check_hlds__simplify__simplify_goal_call_scalar_common_1[90]));
}

static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_call_to_obsolete_predicate_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = check_hlds__simplify__simplify_goal_call__wrap_sym_name_arity_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
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
  MR_bool succeeded;
  MR_Word InFavourOf_16;
  MR_Word PredOrProcDotPieces_17;
  MR_Word ModuleInfo_18;
  MR_Word ThisPredProcId_19;
  MR_Word ThisPredId_20;
  MR_Word ThisPredInfo_22;
  MR_Word ThisMaybeObsolete_23;
  MR_Word ThisPredOrigin_24;
  MR_Word InFavourOfPrime_15;
  MR_Word MaybeObsolete_14;

  succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_obsolete_1_p_0(STATE_VARIABLE_Info_0_35);
  if (succeeded)
  {
    check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_0_35, &ThisPredProcId_19);
    ThisPredId_20 = ((MR_Word) ((MR_hl_field(0, ThisPredProcId_19, (MR_Integer) 0))));
    succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_8, ThisPredId_20);
    succeeded = !(succeeded);
    if (succeeded)
    {
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_35, &ModuleInfo_18);
      hlds__hlds_pred__pred_info_get_obsolete_in_favour_of_2_p_0(PredInfo_10, &MaybeObsolete_14);
      succeeded = (MaybeObsolete_14 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        InFavourOfPrime_15 = ((MR_Word) ((MR_hl_field(1, MaybeObsolete_14, (MR_Integer) 0))));
        InFavourOf_16 = InFavourOfPrime_15;
        PredOrProcDotPieces_17 = hlds__hlds_error_util__describe_one_pred_name_5_f_0(ModuleInfo_18, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])), (MR_Integer) 0, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[15])), PredId_8);
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word TypeCtorInfo_120_120;
        MR_Word Var_44;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_57;
        MR_Word MaybeObsolete_116;

        hlds__hlds_pred__proc_info_get_obsolete_in_favour_of_2_p_0(ProcInfo_11, &MaybeObsolete_116);
        succeeded = (MaybeObsolete_116 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          InFavourOf_16 = ((MR_Word) ((MR_hl_field(1, MaybeObsolete_116, (MR_Integer) 0))));
          TypeCtorInfo_120_120 = (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0);
          Var_44 = (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[17]));
          Var_49 = (MR_Integer) 0;
          Var_50 = (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_2[0]));
          Var_52 = (MR_Integer) 0;
          Var_53 = (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[15]));
          {
            Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_57, 0) = ((MR_Box) (PredId_8));
            MR_hl_field(0, Var_57, 1) = ((MR_Box) (ProcId_9));
          }
          Var_48 = hlds__hlds_error_util__describe_one_proc_name_mode_6_f_0(ModuleInfo_18, Var_49, Var_50, Var_52, Var_53, Var_57);
          PredOrProcDotPieces_17 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_120_120, Var_44, Var_48);
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
      {
        hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_18, ThisPredId_20, &ThisPredInfo_22);
        hlds__hlds_pred__pred_info_get_obsolete_in_favour_of_2_p_0(ThisPredInfo_22, &ThisMaybeObsolete_23);
        succeeded = (ThisMaybeObsolete_23 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          hlds__hlds_pred__pred_info_get_origin_2_p_0(ThisPredInfo_22, &ThisPredOrigin_24);
          succeeded = ((MR_tag((MR_Word) ThisPredOrigin_24)) == (MR_Integer) 0);
          if (succeeded)
          {
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word GoalContext_25;
    MR_Word MainPieces_26;
    MR_Word Pieces_27;
    MR_Word Spec_34;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_69;
    MR_Word Var_112;
    MR_Word Var_113;

    GoalContext_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_12);
    Var_64 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[21])));
    Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredOrProcDotPieces_17, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[7])));
    Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_64, Var_69);
    MainPieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[19])), Var_63);
    if ((InFavourOf_16 == (MR_Word) ((MR_Unsigned) 0U)))
      Pieces_27 = MainPieces_26;
    else
    {
      MR_Word Var_125 = ((MR_Word) ((MR_hl_field(1, InFavourOf_16, (MR_Integer) 1))));
      MR_Word Var_126 = ((MR_Word) ((MR_hl_field(1, InFavourOf_16, (MR_Integer) 0))));

      if ((Var_125 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word InFavourOfPieces_29;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_80;
        MR_Word Var_85;

        {
          Var_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(3, Var_75, 1) = ((MR_Box) (Var_126));
        }
        {
          Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_74, 0) = ((MR_Box) (Var_75));
          MR_hl_field(1, Var_74, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[15])));
        }
        InFavourOfPieces_29 = parse_tree__error_spec__color_as_correct_1_f_0(Var_74);
        Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InFavourOfPieces_29, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[7])));
        Var_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[23])), Var_85);
        Pieces_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MainPieces_26, Var_80);
      }
      else
      {
        MR_Word InFavourOfSNAs_33;
        MR_Word Var_97;
        MR_Word Var_102;
        MR_Word InFavourOfPieces_119;

        InFavourOfSNAs_33 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_6[0]), InFavourOf_16);
        InFavourOfPieces_119 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 1, (MR_String) "and", (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[15])), InFavourOfSNAs_33);
        Var_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InFavourOfPieces_119, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[7])));
        Var_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[25])), Var_102);
        Pieces_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MainPieces_26, Var_97);
      }
    }
    {
      Var_113 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_113, 0) = ((MR_Box) (GoalContext_25));
      MR_hl_field(0, Var_113, 1) = ((MR_Box) (Pieces_27));
    }
    {
      Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_112, 0) = ((MR_Box) (Var_113));
      MR_hl_field(1, Var_112, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Spec_34, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.maybe_generate_warning_for_call_to_obsolete_predicate\'/7"));
      MR_hl_field(3, Spec_34, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 50) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(3, Spec_34, 2) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Spec_34, 3) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_2[1])));
      MR_hl_field(3, Spec_34, 4) = ((MR_Box) (Var_112));
    }
    check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_34, STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36);
  }
  else
    *STATE_VARIABLE_Info_36 = STATE_VARIABLE_Info_0_35;
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__simplify__simplify_goal_call__one_extra_stream_arg_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__simplify__simplify_goal_call__IntroducedFrom__pred__maybe_generate_warning_for_implicit_stream_predicate__355__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

void MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Word PredInfo_8,
  MR_Word GoalInfo_9,
  MR_Word * MaybeSpec_10)
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
    MR_Word TypeCtorInfo_125_125;
    MR_Word TypeCtorInfo_127_127;
    MR_Word ArgTypes_14;
    MR_Word IOStateTypeSymName_15;
    MR_Word IOStateType_16;
    MR_Word IOStateArgTypes_17;
    MR_Word PredFormArity_20;
    MR_Integer NumExtraArgs_21;
    MR_Word ExtraArgTypes_22;
    MR_Word UserArgTypes_23;
    MR_Word PredTable_24;
    MR_Word PredSymName_25;
    MR_Integer PredFormArityInt_26;
    MR_Word PredFormArityPlus1_27;
    MR_Word PredIds_28;
    MR_Word OneExtraStreamArgPredIds_29;
    MR_Word Var_39;
    MR_String Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Integer Var_46;
    MR_Integer Var_47;
    MR_Word Var_48;
    MR_Word Var_49;

    succeeded = (PredOrFunc_13 == (MR_Integer) 0);
    if (succeeded)
    {
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_8, &ArgTypes_14);
      Var_39 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
      Var_40 = (MR_String) "state";
      Var_41 = (MR_Word) ((MR_Unsigned) 0U);
      Var_42 = (MR_Word) ((MR_Unsigned) 0U);
      TypeCtorInfo_125_125 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
      {
        IOStateTypeSymName_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, IOStateTypeSymName_15, 0) = ((MR_Box) (Var_39));
        MR_hl_field(1, IOStateTypeSymName_15, 1) = ((MR_Box) (Var_40));
      }
      {
        IOStateType_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, IOStateType_16, 0) = ((MR_Box) (IOStateTypeSymName_15));
        MR_hl_field(1, IOStateType_16, 1) = ((MR_Box) (Var_41));
        MR_hl_field(1, IOStateType_16, 2) = ((MR_Box) (Var_42));
      }
      {
        Var_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_43, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_3[0]));
        MR_hl_field(0, Var_43, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0_1));
        MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_43, 3) = ((MR_Box) (IOStateType_16));
      }
      mercury__list__filter_3_p_0(TypeCtorInfo_125_125, Var_43, ArgTypes_14, &IOStateArgTypes_17);
      succeeded = (IOStateArgTypes_17 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_44 = ((MR_Word) ((MR_hl_field(1, IOStateArgTypes_17, (MR_Integer) 1))));
        succeeded = (Var_44 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_45 = ((MR_Word) ((MR_hl_field(1, Var_44, (MR_Integer) 1))));
          succeeded = (Var_45 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_8, &PredFormArity_20);
            NumExtraArgs_21 = parse_tree__prog_data__num_extra_args_2_f_0(TypeCtorInfo_125_125, PredFormArity_20, ArgTypes_14);
            mercury__list__det_split_list_4_p_0(TypeCtorInfo_125_125, NumExtraArgs_21, ArgTypes_14, &ExtraArgTypes_22, &UserArgTypes_23);
            hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_6, &PredTable_24);
            PredFormArityInt_26 = (MR_Integer) (PredFormArity_20);
            Var_47 = (MR_Integer) 1;
            Var_46 = (MR_Integer) ((MR_Unsigned) PredFormArityInt_26 + (MR_Unsigned) Var_47);
            Var_48 = (MR_Integer) 0;
            {
              PredSymName_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, PredSymName_25, 0) = ((MR_Box) (ModuleName_11));
              MR_hl_field(1, PredSymName_25, 1) = ((MR_Box) (PredName_12));
            }
            PredFormArityPlus1_27 = (MR_Word) (Var_46);
            hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredTable_24, Var_48, PredOrFunc_13, PredSymName_25, PredFormArityPlus1_27, &PredIds_28);
            TypeCtorInfo_127_127 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0);
            {
              Var_49 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_49, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_4[0]));
              MR_hl_field(0, Var_49, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0_2));
              MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 4));
              MR_hl_field(0, Var_49, 3) = ((MR_Box) (ModuleInfo_6));
              MR_hl_field(0, Var_49, 4) = ((MR_Box) (NumExtraArgs_21));
              MR_hl_field(0, Var_49, 5) = ((MR_Box) (ExtraArgTypes_22));
              MR_hl_field(0, Var_49, 6) = ((MR_Box) (UserArgTypes_23));
            }
            mercury__list__filter_3_p_0(TypeCtorInfo_127_127, Var_49, PredIds_28, &OneExtraStreamArgPredIds_29);
            succeeded = (OneExtraStreamArgPredIds_29 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word GoalContext_32;
      MR_Word PredPieces_33;
      MR_Word Pieces_34;
      MR_Word Spec_35;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_79;
      MR_Word Var_80;

      GoalContext_32 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_9);
      PredPieces_33 = hlds__hlds_error_util__describe_one_pred_name_5_f_0(ModuleInfo_6, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])), (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), PredId_7);
      Var_65 = parse_tree__error_spec__color_as_hint_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[6])));
      Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_65, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[7])));
      Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[4])), Var_64);
      Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredPieces_33, Var_59);
      Pieces_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[2])), Var_58);
      {
        Var_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_80, 0) = ((MR_Box) (GoalContext_32));
        MR_hl_field(0, Var_80, 1) = ((MR_Box) (Pieces_34));
      }
      {
        Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_79, 0) = ((MR_Box) (Var_80));
        MR_hl_field(1, Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Spec_35, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.maybe_generate_warning_for_implicit_stream_predicate\'/5"));
        MR_hl_field(3, Spec_35, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 30) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
        MR_hl_field(3, Spec_35, 2) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, Spec_35, 3) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_2[1])));
        MR_hl_field(3, Spec_35, 4) = ((MR_Box) (Var_79));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeSpec_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_35));
      }
    }
    else
    {
      MR_String Dir_37;
      MR_Word UnwrappedModuleName_36;
      MR_String Var_130;
      MR_Integer slot_0;
      MR_String str_1;

      mdbcomp__builtin_modules__maybe_remove_stdlib_wrapper_2_p_0(ModuleName_11, &UnwrappedModuleName_36);
      succeeded = (PredOrFunc_13 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) UnwrappedModuleName_36)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_130 = ((MR_String) ((MR_hl_field(0, UnwrappedModuleName_36, (MR_Integer) 0))));
          if ((strcmp(Var_130, (MR_String) "io") == 0))
            succeeded = MR_TRUE;
          else
          if ((strcmp(Var_130, (MR_String) "prolog") == 0))
            succeeded = MR_TRUE;
          else
            succeeded = MR_FALSE;
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
            str_1 = ((&check_hlds__simplify__simplify_goal_call_vector_common_5[0 + slot_0]))->check_hlds__simplify__simplify_goal_call__vector_common_type_5_0__vct_5_f_0;
            // did we find a match?
            ;
            if ((((str_1 != NULL)) && ((strcmp(str_1, PredName_12) == 0))))
            {
              // we found a match; look up the results
              ;
              Dir_37 = ((&check_hlds__simplify__simplify_goal_call_vector_common_5[0 + slot_0]))->check_hlds__simplify__simplify_goal_call__vector_common_type_5_0__vct_5_f_1;
              succeeded = MR_TRUE;
              // jump out of search loop
              ;
              goto label_0;
            }
            succeeded = MR_FALSE;
          label_0:;
          }
        }
      }
      if (succeeded)
      {
        MR_Word Var_92;
        MR_Word Var_93;
        MR_Word Var_94;
        MR_Word Var_99;
        MR_Word Var_102;
        MR_Word Var_103;
        MR_Word Var_116;
        MR_Word Var_117;
        MR_Word GoalContext_119;
        MR_Word PredPieces_120;
        MR_Word Pieces_121;
        MR_Word Spec_122;

        GoalContext_119 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_9);
        PredPieces_120 = hlds__hlds_error_util__describe_one_pred_name_5_f_0(ModuleInfo_6, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])), (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), PredId_7);
        Var_94 = parse_tree__error_spec__color_as_hint_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[9])));
        {
          Var_103 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_103, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_103, 1) = ((MR_Box) (Dir_37));
        }
        {
          Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_102, 0) = ((MR_Box) (Var_103));
          MR_hl_field(1, Var_102, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[12])));
        }
        {
          Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_99, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[10])));
          MR_hl_field(1, Var_99, 1) = ((MR_Box) (Var_102));
        }
        Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_94, Var_99);
        Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredPieces_120, Var_93);
        Pieces_121 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[2])), Var_92);
        {
          Var_117 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_117, 0) = ((MR_Box) (GoalContext_119));
          MR_hl_field(0, Var_117, 1) = ((MR_Box) (Pieces_121));
        }
        {
          Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_116, 0) = ((MR_Box) (Var_117));
          MR_hl_field(1, Var_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_122 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Spec_122, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.maybe_generate_warning_for_implicit_stream_predicate\'/5"));
          MR_hl_field(3, Spec_122, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 30) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
          MR_hl_field(3, Spec_122, 2) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, Spec_122, 3) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_2[1])));
          MR_hl_field(3, Spec_122, 4) = ((MR_Box) (Var_116));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeSpec_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_122));
        }
      }
      else
        *MaybeSpec_10 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call____Unify____maybe_all_inputs_eqv_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__simplify_goal_call____Unify____maybe_all_inputs_eqv_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call____Compare____maybe_all_inputs_eqv_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__simplify_goal_call____Compare____maybe_all_inputs_eqv_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call____Unify____maybe_all_inputs_eqv_or_svar_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__simplify_goal_call____Unify____maybe_all_inputs_eqv_or_svar_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call____Compare____maybe_all_inputs_eqv_or_svar_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__simplify_goal_call____Compare____maybe_all_inputs_eqv_or_svar_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
