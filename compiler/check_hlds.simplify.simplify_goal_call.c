/*
** Automatically generated from `simplify_goal_call.m'
** by the Mercury compiler,
** version rotd-2026-05-03
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.simplify.mih"
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
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.inst_test.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.mode_util.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.var_table_hlds.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
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
#include "parse_tree.d_file_deps.mih"
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
#include "mdbcomp.feedback.feedback_info.mih"
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
check_hlds__simplify__simplify_goal_call__IntroducedFrom__pred__maybe_generate_warning_for_implicit_stream_predicate__356__1_2_p_0(
  MR_Word IOStateType_16,
  MR_Word HeadVar__2_115);

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
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_11_p_0(
  MR_Word IntType_12,
  MR_Word InstMap0_13,
  MR_String ModuleName_14,
  MR_String PredName_15,
  MR_Word Args_17,
  MR_Word GoalExpr0_18,
  MR_Word * ImprovedGoalExpr_19,
  MR_Word GoalInfo_20,
  MR_Word STATE_VARIABLE_Info_0_66,
  MR_Word * STATE_VARIABLE_Info_67);

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
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12);

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
  MR_Word STATE_VARIABLE_Info_0_48,
  MR_Word * STATE_VARIABLE_Info_49);

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

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_2[9][1];

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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The call to"))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "could have an additional argument"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "could be made redundant"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "by explicitly passing the"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "procedure"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: call to"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "obsolete"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The suggested replacement is"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The possible suggested replacements are"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: recursive call to"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "will lead to infinite recursion."))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[27]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "leading to infinite recursion."))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[7])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "with exactly the same input arguments,"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[30])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the procedure will call itself"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[32])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "If this recursive call is executed,"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[34])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is suspicious,"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[37]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the call use state variable notation."))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[7])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "that differ between the clause head and"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[40])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "because all input argument positions"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[42])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "because variables whose names start with"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[45]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the call than in the clause head."))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[7])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "occupy different argument positions"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[48])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "wrapping the recursive call inside a"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[54])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "This warning can be disabled by"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[56])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "cannot succeed."))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[59]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "There are no"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "values <"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[7])))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "cannot fail."))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[64]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "=<"))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "all"))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "values."))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[7])))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is not"))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) ">"))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "any"))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "value."))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[7])))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "All"))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "values are"))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) ">="))
  },
  /* row  79 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_2[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  81 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: call to"))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[82]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "with a zero divisor."))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[84]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "with a shift amount that is"))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[86]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "outside of the range"))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
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
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[91]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_2[9][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 234U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 191U) },
  /* row   4 */
  { (MR_Box) ((MR_Unsigned) 186U) },
  /* row   5 */
  { (MR_Box) ((MR_Unsigned) 194U) },
  /* row   6 */
  { ((MR_Box) ((MR_String) "simplify_inline_builtin_inequality")) },
  /* row   7 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   8 */
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
check_hlds__simplify__simplify_goal_call__IntroducedFrom__pred__maybe_generate_warning_for_implicit_stream_predicate__356__1_2_p_0(
  MR_Word IOStateType_16,
  MR_Word HeadVar__2_115)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(IOStateType_16, HeadVar__2_115);
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
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 14U));
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
        HeadUserArgType_15 = ((MR_Word) ((MR_hl_field(1, UserArgTypes_14, 0))));
        TailUserArgTypes_16 = ((MR_Word) ((MR_hl_field(1, UserArgTypes_14, 1))));
        TypeInfo_26_26 = (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[13]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (TailUserArgTypes_16)), ((MR_Box) (BaseUserArgTypes_9)));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) HeadUserArgType_15)) == (MR_Integer) 1);
          if (succeeded)
          {
            HeadUserArgTypeSymName_17 = ((MR_Word) ((MR_hl_field(1, HeadUserArgType_15, 0))));
            Var_19 = ((MR_Word) ((MR_hl_field(1, HeadUserArgType_15, 1))));
            Var_20 = ((MR_Word) ((MR_hl_field(1, HeadUserArgType_15, 2))));
            succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) HeadUserArgTypeSymName_17)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_21 = ((MR_Word) ((MR_hl_field(1, HeadUserArgTypeSymName_17, 0))));
                  HeadUserArgTypeName_18 = ((MR_String) ((MR_hl_field(1, HeadUserArgTypeSymName_17, 1))));
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
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Arg_0_4, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Arg_0_4, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Arg_0_4, 2))));

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
  MR_Word Attributes_18 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, 1))));
  MR_Word PredId_19 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, 2))));
  MR_Integer ProcId_20 = ((MR_Integer) ((MR_hl_field(3, GoalExpr0_11, 3))));
  MR_Word Args0_21 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, 4))));
  MR_Word ExtraArgs0_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, 5))));
  MR_Word MaybeTraceRuntimeCond_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, 6))));
  MR_Word Impl_24 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, 7))));
  MR_Word ImprovedGoalExpr_32;
  MR_Word STATE_VARIABLE_GoalInfo_1_48;
  MR_Word STATE_VARIABLE_Info_1_49;
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
        succeeded = check_hlds__simplify__simplify_goal_call__simplify_improve_library_call_11_p_0(InstMap0_15, ModuleName_28, PredName_29, ModeNum_30, ArgVars_31, GoalExpr0_11, &ImprovedGoalExpr_32, STATE_VARIABLE_GoalInfo_0_41, &STATE_VARIABLE_GoalInfo_1_48, STATE_VARIABLE_Info_0_45, &STATE_VARIABLE_Info_1_49);
      }
    }
  }
  if (succeeded)
  {
    *STATE_VARIABLE_Info_46 = STATE_VARIABLE_Info_1_49;
    *STATE_VARIABLE_GoalInfo_42 = STATE_VARIABLE_GoalInfo_1_48;
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
          AssignsGoalExpr_40 = ((MR_Word) ((MR_hl_field(1, MaybeAssignsGoalExpr_39, 0))));
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
  GenericCall_19 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, 1))));
  Args_20 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, 2))));
  Modes_21 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, 3))));
  Det_23 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_11, 5))) & (MR_Integer) 7);
  switch (MR_tag((MR_Word) GenericCall_19)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Closure_24 = ((MR_Word) ((MR_hl_field(0, GenericCall_19, 0))));
        MR_Word Purity_25 = ((((MR_Unsigned) ((MR_hl_field(0, GenericCall_19, 1))) >> 1)) & (MR_Integer) 3);
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
              AssignsGoalExpr_31 = ((MR_Word) ((MR_hl_field(1, MaybeAssignsGoalExpr_30, 0))));
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
  MR_Word PredId_19 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_11, 0))));
  MR_Integer ProcId_20 = ((MR_Integer) ((MR_hl_field(2, GoalExpr0_11, 1))));
  MR_Word Args_21 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_11, 2))));
  MR_Word IsBuiltin_22 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr0_11, 3))) & (MR_Integer) 1);
  MR_Word ModuleInfo_25;
  MR_Word PredInfo_26;
  MR_Word ProcInfo_27;
  MR_Word ModuleSymName_30;
  MR_Word Globals_31;
  MR_Word STATE_VARIABLE_Info_1_45;
  MR_Word STATE_VARIABLE_Info_2_46;
  MR_Word STATE_VARIABLE_Info_3_47;
  MR_Word STATE_VARIABLE_Info_4_48;
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
      STATE_VARIABLE_Info_1_45 = STATE_VARIABLE_Info_0_43;
    else
    {
      MR_Word ImplicitStreamSpec_29 = ((MR_Word) ((MR_hl_field(1, MaybeImplicitStreamSpec_28, 0))));

      check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(ImplicitStreamSpec_29, STATE_VARIABLE_Info_0_43, &STATE_VARIABLE_Info_1_45);
    }
  }
  else
    STATE_VARIABLE_Info_1_45 = STATE_VARIABLE_Info_0_43;
  check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_call_to_obsolete_predicate_7_p_0(PredId_19, ProcId_20, PredInfo_26, ProcInfo_27, GoalInfo0_13, STATE_VARIABLE_Info_1_45, &STATE_VARIABLE_Info_2_46);
  check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0(PredId_19, ProcId_20, Args_21, IsBuiltin_22, PredInfo_26, ProcInfo_27, GoalInfo0_13, NestedContext_15, STATE_VARIABLE_Common_0_41, STATE_VARIABLE_Info_2_46, &STATE_VARIABLE_Info_3_47);
  ModuleSymName_57 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_26);
  succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(ModuleSymName_57, &ModuleName_58);
  if (succeeded)
  {
    succeeded = (Args_21 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgA_59 = ((MR_Word) ((MR_hl_field(1, Args_21, 0))));
      Var_69 = ((MR_Word) ((MR_hl_field(1, Args_21, 1))));
      succeeded = (Var_69 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgB_60 = ((MR_Word) ((MR_hl_field(1, Var_69, 0))));
        Var_70 = ((MR_Word) ((MR_hl_field(1, Var_69, 1))));
        succeeded = (Var_70 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_71 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_26);
          succeeded = (Var_71 == (MR_Integer) 0);
          if (succeeded)
            succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_dodgy_simple_code_1_p_0(STATE_VARIABLE_Info_3_47);
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
        MR_hl_field(0, Spec_68, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_2[4])));
        MR_hl_field(0, Spec_68, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_2[2])));
        MR_hl_field(0, Spec_68, 3) = ((MR_Box) (GoalContext_65));
        MR_hl_field(0, Spec_68, 4) = ((MR_Box) (Pieces_67));
      }
      check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_68, STATE_VARIABLE_Info_3_47, &STATE_VARIABLE_Info_4_48);
    }
    else
      STATE_VARIABLE_Info_4_48 = STATE_VARIABLE_Info_3_47;
  }
  else
    STATE_VARIABLE_Info_4_48 = STATE_VARIABLE_Info_3_47;
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
    check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(STATE_VARIABLE_Info_4_48, &VarTable_35);
    succeeded = check_hlds__simplify__simplify_info__simplify_do_const_prop_1_p_0(STATE_VARIABLE_Info_4_48);
    if (succeeded)
      succeeded = transform_hlds__const_prop__evaluate_call_10_p_0(Globals_31, VarTable_35, InstMap0_16, ModuleName_32, PredName_33, ModeNum_34, Args_21, &EvaluatedGoalExpr_36, GoalInfo0_13, &EvaluatedGoalInfo_37);
    if (succeeded)
    {
      *GoalExpr_12 = EvaluatedGoalExpr_36;
      *GoalInfo_14 = EvaluatedGoalInfo_37;
      check_hlds__simplify__simplify_info__simplify_info_set_rerun_quant_instmap_delta_2_p_0(STATE_VARIABLE_Info_4_48, STATE_VARIABLE_Info_44);
      *STATE_VARIABLE_Common_42 = STATE_VARIABLE_Common_0_41;
    }
    else
    {
      MR_Word OptDupCalls_87;

      succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(STATE_VARIABLE_Info_4_48, &OptDupCalls_87);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Info_6_51;
        MR_Word Purity_88;
        MR_Word MaybeAssignsGoalExpr0_89;
        MR_Word _AssignsGoalExpr0_90;

        Purity_88 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo0_13);
        check_hlds__simplify__common__common_optimise_call_11_p_0(PredId_19, ProcId_20, Args_21, Purity_88, GoalInfo0_13, GoalExpr0_11, &MaybeAssignsGoalExpr0_89, STATE_VARIABLE_Common_0_41, STATE_VARIABLE_Common_42, STATE_VARIABLE_Info_4_48, &STATE_VARIABLE_Info_6_51);
        succeeded = (MaybeAssignsGoalExpr0_89 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          _AssignsGoalExpr0_90 = ((MR_Word) ((MR_hl_field(1, MaybeAssignsGoalExpr0_89, 0))));
          succeeded = (OptDupCalls_87 == (MR_Integer) 0);
        }
        if (succeeded)
        {
          *GoalExpr_12 = _AssignsGoalExpr0_90;
          *GoalInfo_14 = GoalInfo0_13;
          *STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_6_51;
        }
        else
        {
          MR_Word ImprovedGoalExpr_39;
          MR_Word ImprovedGoalInfo_40;
          MR_Word STATE_VARIABLE_Info_7_52;

          succeeded = check_hlds__simplify__simplify_goal_call__simplify_improve_library_call_11_p_0(InstMap0_16, ModuleName_32, PredName_33, ModeNum_34, Args_21, GoalExpr0_11, &ImprovedGoalExpr_39, GoalInfo0_13, &ImprovedGoalInfo_40, STATE_VARIABLE_Info_6_51, &STATE_VARIABLE_Info_7_52);
          if (succeeded)
          {
            *STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_7_52;
            *GoalExpr_12 = ImprovedGoalExpr_39;
            *GoalInfo_14 = ImprovedGoalInfo_40;
          }
          else
          {
            *GoalExpr_12 = GoalExpr0_11;
            *GoalInfo_14 = GoalInfo0_13;
            *STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_6_51;
          }
        }
      }
      else
      {
        MR_Word ImprovedGoalExpr_96;
        MR_Word ImprovedGoalInfo_97;
        MR_Word STATE_VARIABLE_Info_7_98;

        *STATE_VARIABLE_Common_42 = STATE_VARIABLE_Common_0_41;
        succeeded = check_hlds__simplify__simplify_goal_call__simplify_improve_library_call_11_p_0(InstMap0_16, ModuleName_32, PredName_33, ModeNum_34, Args_21, GoalExpr0_11, &ImprovedGoalExpr_96, GoalInfo0_13, &ImprovedGoalInfo_97, STATE_VARIABLE_Info_4_48, &STATE_VARIABLE_Info_7_98);
        if (succeeded)
        {
          *STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_7_98;
          *GoalExpr_12 = ImprovedGoalExpr_96;
          *GoalInfo_14 = ImprovedGoalInfo_97;
        }
        else
        {
          *GoalExpr_12 = GoalExpr0_11;
          *GoalInfo_14 = GoalInfo0_13;
          *STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_4_48;
        }
      }
    }
  }
  else
  {
    MR_Word OptDupCalls_91;

    succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(STATE_VARIABLE_Info_4_48, &OptDupCalls_91);
    if (succeeded)
    {
      MR_Word Purity_92;
      MR_Word MaybeAssignsGoalExpr0_93;
      MR_Word _AssignsGoalExpr0_94;

      Purity_92 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo0_13);
      check_hlds__simplify__common__common_optimise_call_11_p_0(PredId_19, ProcId_20, Args_21, Purity_92, GoalInfo0_13, GoalExpr0_11, &MaybeAssignsGoalExpr0_93, STATE_VARIABLE_Common_0_41, STATE_VARIABLE_Common_42, STATE_VARIABLE_Info_4_48, STATE_VARIABLE_Info_44);
      succeeded = (MaybeAssignsGoalExpr0_93 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        _AssignsGoalExpr0_94 = ((MR_Word) ((MR_hl_field(1, MaybeAssignsGoalExpr0_93, 0))));
        succeeded = (OptDupCalls_91 == (MR_Integer) 0);
      }
      if (succeeded)
      {
        *GoalExpr_12 = _AssignsGoalExpr0_94;
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
      *STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_4_48;
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
  MR_Word STATE_VARIABLE_Info_1_39;
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
            libs__globals__lookup_bool_option_3_p_0(Globals_80, (MR_Integer) 86, &Pregen_81);
            switch (Pregen_81) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_11_p_0((MR_Integer) 7, InstMap0_12, ModuleName_13, PredName_14, Args_16, GoalExpr0_17, ImprovedGoalExpr_18, GoalInfo0_19, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_1_39);
                break;
              case (MR_Integer) 1:
                {
                  succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_14, Args_16, ImprovedGoalExpr_18);
                  if (succeeded)
                  {
                    STATE_VARIABLE_Info_1_39 = STATE_VARIABLE_Info_0_34;
                    succeeded = MR_TRUE;
                  }
                }
                break;
            }
            if (succeeded)
            {
              *ImprovedGoalInfo_20 = GoalInfo0_19;
              succeeded = MR_TRUE;
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
            libs__globals__lookup_bool_option_3_p_0(Globals_50, (MR_Integer) 86, &Pregen_51);
            switch (Pregen_51) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_11_p_0((MR_Integer) 4, InstMap0_12, ModuleName_13, PredName_14, Args_16, GoalExpr0_17, ImprovedGoalExpr_18, GoalInfo0_19, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_1_39);
                break;
              case (MR_Integer) 1:
                {
                  succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_14, Args_16, ImprovedGoalExpr_18);
                  if (succeeded)
                  {
                    STATE_VARIABLE_Info_1_39 = STATE_VARIABLE_Info_0_34;
                    succeeded = MR_TRUE;
                  }
                }
                break;
            }
            if (succeeded)
            {
              *ImprovedGoalInfo_20 = GoalInfo0_19;
              succeeded = MR_TRUE;
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
            libs__globals__lookup_bool_option_3_p_0(Globals_32, (MR_Integer) 86, &Pregen_33);
            switch (Pregen_33) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_11_p_0((MR_Integer) 0, InstMap0_12, ModuleName_13, PredName_14, Args_16, GoalExpr0_17, ImprovedGoalExpr_18, GoalInfo0_19, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_1_39);
                break;
              case (MR_Integer) 1:
                {
                  succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_14, Args_16, ImprovedGoalExpr_18);
                  if (succeeded)
                  {
                    STATE_VARIABLE_Info_1_39 = STATE_VARIABLE_Info_0_34;
                    succeeded = MR_TRUE;
                  }
                }
                break;
            }
            if (succeeded)
            {
              *ImprovedGoalInfo_20 = GoalInfo0_19;
              succeeded = MR_TRUE;
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
            libs__globals__lookup_bool_option_3_p_0(Globals_90, (MR_Integer) 86, &Pregen_91);
            switch (Pregen_91) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_11_p_0((MR_Integer) 3, InstMap0_12, ModuleName_13, PredName_14, Args_16, GoalExpr0_17, ImprovedGoalExpr_18, GoalInfo0_19, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_1_39);
                break;
              case (MR_Integer) 1:
                {
                  succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_14, Args_16, ImprovedGoalExpr_18);
                  if (succeeded)
                  {
                    STATE_VARIABLE_Info_1_39 = STATE_VARIABLE_Info_0_34;
                    succeeded = MR_TRUE;
                  }
                }
                break;
            }
            if (succeeded)
            {
              *ImprovedGoalInfo_20 = GoalInfo0_19;
              succeeded = MR_TRUE;
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
                  R_28 = ((MR_Word) ((MR_hl_field(1, Args_16, 0))));
                  Var_40 = ((MR_Word) ((MR_hl_field(1, Args_16, 1))));
                  succeeded = (Var_40 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    X_46 = ((MR_Word) ((MR_hl_field(1, Var_40, 0))));
                    Var_41 = ((MR_Word) ((MR_hl_field(1, Var_40, 1))));
                    succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Y_47 = ((MR_Word) ((MR_hl_field(1, Var_41, 0))));
                      Var_42 = ((MR_Word) ((MR_hl_field(1, Var_41, 1))));
                      succeeded = (Var_42 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Context_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_19);
                        check_hlds__simplify__simplify_goal_call__simplify_improve_builtin_compare_int_uint_8_p_0(STATE_VARIABLE_Info_0_34, TypeName_27, R_28, X_46, Y_47, Context_29, ImprovedGoalExpr_18, ImprovedGoalInfo_20);
                        STATE_VARIABLE_Info_1_39 = STATE_VARIABLE_Info_0_34;
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
                TI_24 = ((MR_Word) ((MR_hl_field(1, Args_16, 0))));
                Var_36 = ((MR_Word) ((MR_hl_field(1, Args_16, 1))));
                succeeded = (Var_36 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  X_25 = ((MR_Word) ((MR_hl_field(1, Var_36, 0))));
                  Var_37 = ((MR_Word) ((MR_hl_field(1, Var_36, 1))));
                  succeeded = (Var_37 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Y_26 = ((MR_Word) ((MR_hl_field(1, Var_37, 0))));
                    Var_38 = ((MR_Word) ((MR_hl_field(1, Var_37, 1))));
                    succeeded = (Var_38 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(TI_24, X_25, Y_26, Inequality_22, Invert_23, GoalInfo0_19, ImprovedGoalExpr_18, InstMap0_12, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_1_39);
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
            libs__globals__lookup_bool_option_3_p_0(Globals_70, (MR_Integer) 86, &Pregen_71);
            switch (Pregen_71) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_11_p_0((MR_Integer) 1, InstMap0_12, ModuleName_13, PredName_14, Args_16, GoalExpr0_17, ImprovedGoalExpr_18, GoalInfo0_19, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_1_39);
                break;
              case (MR_Integer) 1:
                {
                  succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_14, Args_16, ImprovedGoalExpr_18);
                  if (succeeded)
                  {
                    STATE_VARIABLE_Info_1_39 = STATE_VARIABLE_Info_0_34;
                    succeeded = MR_TRUE;
                  }
                }
                break;
            }
            if (succeeded)
            {
              *ImprovedGoalInfo_20 = GoalInfo0_19;
              succeeded = MR_TRUE;
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
            libs__globals__lookup_bool_option_3_p_0(Globals_65, (MR_Integer) 86, &Pregen_66);
            switch (Pregen_66) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_11_p_0((MR_Integer) 2, InstMap0_12, ModuleName_13, PredName_14, Args_16, GoalExpr0_17, ImprovedGoalExpr_18, GoalInfo0_19, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_1_39);
                break;
              case (MR_Integer) 1:
                {
                  succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_14, Args_16, ImprovedGoalExpr_18);
                  if (succeeded)
                  {
                    STATE_VARIABLE_Info_1_39 = STATE_VARIABLE_Info_0_34;
                    succeeded = MR_TRUE;
                  }
                }
                break;
            }
            if (succeeded)
            {
              *ImprovedGoalInfo_20 = GoalInfo0_19;
              succeeded = MR_TRUE;
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
            libs__globals__lookup_bool_option_3_p_0(Globals_85, (MR_Integer) 86, &Pregen_86);
            switch (Pregen_86) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_11_p_0((MR_Integer) 9, InstMap0_12, ModuleName_13, PredName_14, Args_16, GoalExpr0_17, ImprovedGoalExpr_18, GoalInfo0_19, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_1_39);
                break;
              case (MR_Integer) 1:
                {
                  succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_14, Args_16, ImprovedGoalExpr_18);
                  if (succeeded)
                  {
                    STATE_VARIABLE_Info_1_39 = STATE_VARIABLE_Info_0_34;
                    succeeded = MR_TRUE;
                  }
                }
                break;
            }
            if (succeeded)
            {
              *ImprovedGoalInfo_20 = GoalInfo0_19;
              succeeded = MR_TRUE;
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
            libs__globals__lookup_bool_option_3_p_0(Globals_75, (MR_Integer) 86, &Pregen_76);
            switch (Pregen_76) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_11_p_0((MR_Integer) 5, InstMap0_12, ModuleName_13, PredName_14, Args_16, GoalExpr0_17, ImprovedGoalExpr_18, GoalInfo0_19, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_1_39);
                break;
              case (MR_Integer) 1:
                {
                  succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_14, Args_16, ImprovedGoalExpr_18);
                  if (succeeded)
                  {
                    STATE_VARIABLE_Info_1_39 = STATE_VARIABLE_Info_0_34;
                    succeeded = MR_TRUE;
                  }
                }
                break;
            }
            if (succeeded)
            {
              *ImprovedGoalInfo_20 = GoalInfo0_19;
              succeeded = MR_TRUE;
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
            libs__globals__lookup_bool_option_3_p_0(Globals_55, (MR_Integer) 86, &Pregen_56);
            switch (Pregen_56) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_11_p_0((MR_Integer) 6, InstMap0_12, ModuleName_13, PredName_14, Args_16, GoalExpr0_17, ImprovedGoalExpr_18, GoalInfo0_19, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_1_39);
                break;
              case (MR_Integer) 1:
                {
                  succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_14, Args_16, ImprovedGoalExpr_18);
                  if (succeeded)
                  {
                    STATE_VARIABLE_Info_1_39 = STATE_VARIABLE_Info_0_34;
                    succeeded = MR_TRUE;
                  }
                }
                break;
            }
            if (succeeded)
            {
              *ImprovedGoalInfo_20 = GoalInfo0_19;
              succeeded = MR_TRUE;
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
            libs__globals__lookup_bool_option_3_p_0(Globals_60, (MR_Integer) 86, &Pregen_61);
            switch (Pregen_61) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_11_p_0((MR_Integer) 8, InstMap0_12, ModuleName_13, PredName_14, Args_16, GoalExpr0_17, ImprovedGoalExpr_18, GoalInfo0_19, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_1_39);
                break;
              case (MR_Integer) 1:
                {
                  succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_14, Args_16, ImprovedGoalExpr_18);
                  if (succeeded)
                  {
                    STATE_VARIABLE_Info_1_39 = STATE_VARIABLE_Info_0_34;
                    succeeded = MR_TRUE;
                  }
                }
                break;
            }
            if (succeeded)
            {
              *ImprovedGoalInfo_20 = GoalInfo0_19;
              succeeded = MR_TRUE;
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
    check_hlds__simplify__simplify_info__simplify_info_set_rerun_quant_instmap_delta_2_p_0(STATE_VARIABLE_Info_1_39, STATE_VARIABLE_Info_35);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_97_114_105_116_104_95_115_104_105_102_116_95_99_109_112_95_111_112_115_95_95_91_53_93_95_48_11_p_0(
  MR_Word IntType_12,
  MR_Word InstMap0_13,
  MR_String ModuleName_14,
  MR_String PredName_15,
  MR_Word Args_17,
  MR_Word GoalExpr0_18,
  MR_Word * ImprovedGoalExpr_19,
  MR_Word GoalInfo_20,
  MR_Word STATE_VARIABLE_Info_0_66,
  MR_Word * STATE_VARIABLE_Info_67)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_22;
  MR_Word Globals_23;
  MR_Integer slot_0;
  MR_String str_1;

  check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_66, &ModuleInfo_22);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_22, &Globals_23);
  // hashed string jump switch
  ;
  // compute the hash value of the input string
  ;
  slot_0 = ((MR_hash_string5(PredName_15)) & (MR_Integer) 31);
  // hash chain loop
  ;
  do
  {
    // lookup the string for this hash slot
    ;
    str_1 = ((&check_hlds__simplify__simplify_goal_call_vector_common_7[13 + slot_0]))->check_hlds__simplify__simplify_goal_call__vector_common_type_7_0__vct_7_f_0;
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
              MR_Word Var_71;
              MR_Word Var_72;
              MR_String Op_164;
              MR_Word X_165;
              MR_Word Y_166;
              MR_Integer WordBits_167;

              succeeded = (IntType_12 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  X_165 = ((MR_Word) ((MR_hl_field(1, Args_17, 0))));
                  Var_71 = ((MR_Word) ((MR_hl_field(1, Args_17, 1))));
                  succeeded = (Var_71 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Y_166 = ((MR_Word) ((MR_hl_field(1, Var_71, 0))));
                    Var_72 = ((MR_Word) ((MR_hl_field(1, Var_71, 1))));
                    succeeded = (Var_72 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Op_164 = (MR_String) "*";
                      WordBits_167 = parse_tree__int_emu__target_word_bits_1_f_0(Globals_23);
                      check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_9_p_0(ModuleName_14, Op_164, X_165, WordBits_167, Y_166, ImprovedGoalExpr_19, GoalInfo_20, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
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
              MR_Integer NumTargetBits_37;
              MR_Word Var_106;
              MR_Word Var_107;
              MR_Word Var_108;
              MR_Word X_174;
              MR_Word Y_175;
              MR_Word Z_176;
              MR_Word InstY_177;
              MR_Word YConst_40;
              MR_Word Var_109;
              MR_Word Var_110;
              MR_Word Var_111;
              MR_Word Var_112;
              MR_Word Var_113;

              succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_174 = ((MR_Word) ((MR_hl_field(1, Args_17, 0))));
                Var_106 = ((MR_Word) ((MR_hl_field(1, Args_17, 1))));
                succeeded = (Var_106 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_175 = ((MR_Word) ((MR_hl_field(1, Var_106, 0))));
                  Var_107 = ((MR_Word) ((MR_hl_field(1, Var_106, 1))));
                  succeeded = (Var_107 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_176 = ((MR_Word) ((MR_hl_field(1, Var_107, 0))));
                    Var_108 = ((MR_Word) ((MR_hl_field(1, Var_107, 1))));
                    succeeded = (Var_108 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      NumTargetBits_37 = check_hlds__simplify__simplify_goal_call__int_type_target_bits_2_f_0(Globals_23, IntType_12);
                      hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_13, Y_175, &InstY_177);
                      succeeded = ((MR_tag((MR_Word) InstY_177)) == (MR_Integer) 2);
                      if (succeeded)
                      {
                        Var_109 = ((MR_Word) ((MR_hl_field(2, InstY_177, 2))));
                        succeeded = (Var_109 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_110 = ((MR_Word) ((MR_hl_field(1, Var_109, 0))));
                          Var_113 = ((MR_Word) ((MR_hl_field(1, Var_109, 1))));
                          succeeded = (Var_113 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_111 = ((MR_Word) ((MR_hl_field(0, Var_110, 0))));
                            Var_112 = ((MR_Word) ((MR_hl_field(0, Var_110, 1))));
                            succeeded = (Var_112 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = ((((MR_tag((MR_Word) Var_111)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_111, 0)))) == (MR_Integer) 5)));
                              if (succeeded)
                              {
                                YConst_40 = ((MR_Word) ((MR_hl_field(3, Var_111, 1))));
                                if (((MR_tag((MR_Word) YConst_40)) == (MR_Integer) 0))
                                  succeeded = MR_TRUE;
                                else
                                if (((MR_tag((MR_Word) YConst_40)) == (MR_Integer) 1))
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
                        if (((MR_tag((MR_Word) YConst_40)) == (MR_Integer) 0))
                        {
                          MR_Integer YIntVal_43 = ((MR_Integer) ((MR_hl_field(0, YConst_40, 0))));

                          succeeded = ((MR_Integer) 0 <= YIntVal_43);
                          if (succeeded)
                            succeeded = (YIntVal_43 < NumTargetBits_37);
                          if (succeeded)
                          {
                            check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_66, ModuleName_14, (MR_String) "unchecked_left_shift", (MR_Integer) 0, X_174, Y_175, Z_176, ImprovedGoalExpr_19);
                            *STATE_VARIABLE_Info_67 = STATE_VARIABLE_Info_0_66;
                          }
                          else
                          {
                            *ImprovedGoalExpr_19 = GoalExpr0_18;
                            check_hlds__simplify__simplify_goal_call__report_bad_shift_amount_6_p_0(ModuleName_14, PredName_15, GoalInfo_20, NumTargetBits_37, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
                          }
                        }
                        else
                        {
                          MR_Unsigned YUintVal_44 = ((MR_Unsigned) ((MR_hl_field(1, YConst_40, 0))));
                          MR_Unsigned Var_117;

                          Var_117 = mercury__uint__det_from_int_1_f_0(NumTargetBits_37);
                          succeeded = (YUintVal_44 < Var_117);
                          if (succeeded)
                          {
                            check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_66, ModuleName_14, (MR_String) "unchecked_left_shift", (MR_Integer) 0, X_174, Y_175, Z_176, ImprovedGoalExpr_19);
                            *STATE_VARIABLE_Info_67 = STATE_VARIABLE_Info_0_66;
                          }
                          else
                          {
                            *ImprovedGoalExpr_19 = GoalExpr0_18;
                            check_hlds__simplify__simplify_goal_call__report_bad_shift_amount_6_p_0(ModuleName_14, PredName_15, GoalInfo_20, NumTargetBits_37, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
                          }
                        }
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        MR_Word TypeCtorInfo_179_179;
                        MR_Word NumTargetBitsConstVar_45;
                        MR_Word NumTargetBitsConstGoal_46;
                        MR_Word PrivateBuiltin_47;
                        MR_Word InRangeTestGoal_48;
                        MR_Word TestConjGoalInfo_49;
                        MR_Word TestConjGoal_50;
                        MR_Word UncheckedShiftGoalExpr_51;
                        MR_Word UncheckedShiftGoal_52;
                        MR_String NotInRangeStr_53;
                        MR_Word ErrorMsgStrVar_54;
                        MR_Word ErrorMsgStrGoal_55;
                        MR_Word ExceptionType_56;
                        MR_Word ExceptionVar_57;
                        MR_Word ExceptionTypeCtor_58;
                        MR_Word ExceptionWrapperCtorSymName_59;
                        MR_Word ExceptionWrapperCtorUDC_60;
                        MR_Word ExceptionWrapperCtorConsId_61;
                        MR_Word WrapErrorMsgGoal_62;
                        MR_Word ThrowGoal_63;
                        MR_Word ThrowConjGoalInfo_64;
                        MR_Word ThrowConjGoal_65;
                        MR_Word STATE_VARIABLE_Info_6_120;
                        MR_String Var_121;
                        MR_Word Var_122;
                        MR_Word Var_123;
                        MR_Word Var_124;
                        MR_Word Var_125;
                        MR_Word Var_126;
                        MR_Word Var_127;
                        MR_Word Var_128;
                        MR_Word Var_129;
                        MR_Word Var_130;
                        MR_Word STATE_VARIABLE_Info_7_137;
                        MR_String Var_139;
                        MR_Integer Var_140;
                        MR_Word Var_141;
                        MR_Word Var_142;
                        MR_Word Var_143;
                        MR_Word Var_144;
                        MR_String Var_145;
                        MR_Word Var_146;
                        MR_Word Var_147;
                        MR_Word Var_148;
                        MR_Word Var_149;
                        MR_Word Var_150;
                        MR_Word Var_151;
                        MR_Word Var_152;
                        MR_Word Var_153;
                        MR_Word Var_155;
                        MR_Word Var_156;
                        MR_Word Var_157;
                        MR_Word Var_158;
                        MR_Word Var_159;
                        MR_Word Var_160;
                        MR_Word Var_161;
                        MR_Word Var_162;
                        MR_Word Var_163;
                        MR_Word Context_171;
                        MR_String Var_183;

                        succeeded = mercury__builtin__semidet_fail_0_p_0();
                        if (succeeded)
                        {
                          Context_171 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_20);
                          check_hlds__simplify__simplify_goal_call__simplify_make_int_const_5_p_0(NumTargetBits_37, &NumTargetBitsConstVar_45, &NumTargetBitsConstGoal_46, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_6_120);
                          PrivateBuiltin_47 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                          Var_121 = (MR_String) "unsigned_lt";
                          Var_122 = (MR_Integer) 0;
                          check_hlds__simplify__simplify_goal_call__simplify_make_cmp_goal_expr_8_p_0(STATE_VARIABLE_Info_6_120, PrivateBuiltin_47, Var_121, Var_122, Y_175, NumTargetBitsConstVar_45, Context_171, &InRangeTestGoal_48);
                          TypeCtorInfo_179_179 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                          Var_123 = parse_tree__set_of_var__make_singleton_1_f_0(TypeCtorInfo_179_179, Y_175);
                          Var_124 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                          Var_125 = (MR_Integer) 1;
                          Var_126 = (MR_Integer) 0;
                          hlds__hlds_goal__goal_info_init_6_p_0(Var_123, Var_124, Var_125, Var_126, Context_171, &TestConjGoalInfo_49);
                          Var_129 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_128, 0) = ((MR_Box) (InRangeTestGoal_48));
                            MR_hl_field(1, Var_128, 1) = ((MR_Box) (Var_129));
                          }
                          {
                            Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_127, 0) = ((MR_Box) (NumTargetBitsConstGoal_46));
                            MR_hl_field(1, Var_127, 1) = ((MR_Box) (Var_128));
                          }
                          hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_127, TestConjGoalInfo_49, &TestConjGoal_50);
                          Var_130 = (MR_Integer) 0;
                          check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_6_120, ModuleName_14, (MR_String) "unchecked_left_shift", Var_130, X_174, Y_175, Z_176, &UncheckedShiftGoalExpr_51);
                          Var_183 = (MR_String) ".(<<): second operand is out of range";
                          {
                            UncheckedShiftGoal_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, UncheckedShiftGoal_52, 0) = ((MR_Box) (UncheckedShiftGoalExpr_51));
                            MR_hl_field(0, UncheckedShiftGoal_52, 1) = ((MR_Box) (GoalInfo_20));
                          }
                          NotInRangeStr_53 = mercury__string__f_43_43_2_f_0(ModuleName_14, Var_183);
                          check_hlds__simplify__simplify_goal_call__simplify_make_string_const_5_p_0(NotInRangeStr_53, &ErrorMsgStrVar_54, &ErrorMsgStrGoal_55, STATE_VARIABLE_Info_6_120, &STATE_VARIABLE_Info_7_137);
                          ExceptionType_56 = parse_tree__builtin_lib_types__void_type_0_f_0();
                          check_hlds__simplify__simplify_goal_call__simplify_make_var_4_p_0(ExceptionType_56, &ExceptionVar_57, STATE_VARIABLE_Info_7_137, STATE_VARIABLE_Info_67);
                          parse_tree__prog_type__type_to_ctor_det_2_p_0(ExceptionType_56, &ExceptionTypeCtor_58);
                          Var_139 = (MR_String) "math_domain_error";
                          Var_140 = (MR_Integer) 1;
                          Var_142 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            ExceptionWrapperCtorSymName_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, ExceptionWrapperCtorSymName_59, 0) = ((MR_Box) (PrivateBuiltin_47));
                            MR_hl_field(1, ExceptionWrapperCtorSymName_59, 1) = ((MR_Box) (Var_139));
                          }
                          {
                            ExceptionWrapperCtorUDC_60 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, ExceptionWrapperCtorUDC_60, 0) = ((MR_Box) (ExceptionWrapperCtorSymName_59));
                            MR_hl_field(0, ExceptionWrapperCtorUDC_60, 1) = ((MR_Box) (Var_140));
                            MR_hl_field(0, ExceptionWrapperCtorUDC_60, 2) = ((MR_Box) (ExceptionTypeCtor_58));
                          }
                          ExceptionWrapperCtorConsId_61 = (MR_Word) (MR_mkword(1, (MR_Word) (ExceptionWrapperCtorUDC_60)));
                          {
                            Var_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_141, 0) = ((MR_Box) (ErrorMsgStrVar_54));
                            MR_hl_field(1, Var_141, 1) = ((MR_Box) (Var_142));
                          }
                          hlds__make_goal__construct_functor_4_p_0(ExceptionVar_57, ExceptionWrapperCtorConsId_61, Var_141, &WrapErrorMsgGoal_62);
                          Var_143 = (MR_Integer) 0;
                          Var_144 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
                          Var_145 = (MR_String) "throw";
                          Var_146 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            Var_147 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_147, 0) = ((MR_Box) (ExceptionVar_57));
                            MR_hl_field(1, Var_147, 1) = ((MR_Box) (Var_146));
                          }
                          Var_148 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                          Var_149 = (MR_Word) ((MR_Unsigned) 0U);
                          Var_150 = (MR_Integer) 6;
                          Var_151 = (MR_Integer) 0;
                          Var_152 = (MR_Word) ((MR_Unsigned) 0U);
                          Var_153 = mercury__term_context__dummy_context_0_f_0();
                          hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_22, Var_143, Var_144, Var_145, Var_146, Var_147, Var_148, Var_149, Var_150, Var_151, Var_152, Var_153, &ThrowGoal_63);
                          Var_155 = parse_tree__set_of_var__init_0_f_0(TypeCtorInfo_179_179);
                          Var_156 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                          Var_157 = (MR_Integer) 6;
                          Var_158 = (MR_Integer) 0;
                          hlds__hlds_goal__goal_info_init_6_p_0(Var_155, Var_156, Var_157, Var_158, Context_171, &ThrowConjGoalInfo_64);
                          Var_162 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            Var_161 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_161, 0) = ((MR_Box) (ThrowGoal_63));
                            MR_hl_field(1, Var_161, 1) = ((MR_Box) (Var_162));
                          }
                          {
                            Var_160 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_160, 0) = ((MR_Box) (WrapErrorMsgGoal_62));
                            MR_hl_field(1, Var_160, 1) = ((MR_Box) (Var_161));
                          }
                          {
                            Var_159 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_159, 0) = ((MR_Box) (ErrorMsgStrGoal_55));
                            MR_hl_field(1, Var_159, 1) = ((MR_Box) (Var_160));
                          }
                          hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_159, ThrowConjGoalInfo_64, &ThrowConjGoal_65);
                          Var_163 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                            *ImprovedGoalExpr_19 = base;
                            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                            MR_hl_field(3, base, 1) = ((MR_Box) (Var_163));
                            MR_hl_field(3, base, 2) = ((MR_Box) (TestConjGoal_50));
                            MR_hl_field(3, base, 3) = ((MR_Box) (UncheckedShiftGoal_52));
                            MR_hl_field(3, base, 4) = ((MR_Box) (ThrowConjGoal_65));
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
              MR_Word Z_303;
              MR_Word InstY_304;
              MR_Word ConsY_307;
              MR_Word Var_312;
              MR_Word Var_313;
              MR_Word Var_314;
              MR_Word Var_315;
              MR_Word Var_316;
              MR_Word Var_317;
              MR_Word Var_318;
              MR_Word X_335;
              MR_Word Y_336;

              succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_335 = ((MR_Word) ((MR_hl_field(1, Args_17, 0))));
                Var_312 = ((MR_Word) ((MR_hl_field(1, Args_17, 1))));
                succeeded = (Var_312 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_336 = ((MR_Word) ((MR_hl_field(1, Var_312, 0))));
                  Var_313 = ((MR_Word) ((MR_hl_field(1, Var_312, 1))));
                  succeeded = (Var_313 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_303 = ((MR_Word) ((MR_hl_field(1, Var_313, 0))));
                    Var_314 = ((MR_Word) ((MR_hl_field(1, Var_313, 1))));
                    succeeded = (Var_314 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_13, Y_336, &InstY_304);
                      succeeded = ((MR_tag((MR_Word) InstY_304)) == (MR_Integer) 2);
                      if (succeeded)
                      {
                        Var_315 = ((MR_Word) ((MR_hl_field(2, InstY_304, 2))));
                        succeeded = (Var_315 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_316 = ((MR_Word) ((MR_hl_field(1, Var_315, 0))));
                          Var_318 = ((MR_Word) ((MR_hl_field(1, Var_315, 1))));
                          succeeded = (Var_318 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            ConsY_307 = ((MR_Word) ((MR_hl_field(0, Var_316, 0))));
                            Var_317 = ((MR_Word) ((MR_hl_field(0, Var_316, 1))));
                            succeeded = (Var_317 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = check_hlds__simplify__simplify_goal_call__is_zero_const_2_p_0(IntType_12, ConsY_307);
                              if (succeeded)
                              {
                                MR_Word Context_263;
                                MR_Word SymName_264;
                                MR_Word Pieces_265;
                                MR_Word Spec_266;
                                MR_Word Var_267;
                                MR_Word Var_270;
                                MR_Word Var_271;
                                MR_Word Var_272;
                                MR_Word Var_273;
                                MR_Word Var_274;
                                MR_Word Var_275;

                                *ImprovedGoalExpr_19 = GoalExpr0_18;
                                Context_263 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_20);
                                {
                                  Var_267 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(0, Var_267, 0) = ((MR_Box) (ModuleName_14));
                                }
                                {
                                  SymName_264 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(1, SymName_264, 0) = ((MR_Box) (Var_267));
                                  MR_hl_field(1, SymName_264, 1) = ((MR_Box) (PredName_15));
                                }
                                {
                                  Var_273 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(3, Var_273, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                                  MR_hl_field(3, Var_273, 1) = ((MR_Box) (SymName_264));
                                }
                                {
                                  Var_272 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(1, Var_272, 0) = ((MR_Box) (Var_273));
                                  MR_hl_field(1, Var_272, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                }
                                Var_271 = parse_tree__error_spec__color_as_subject_1_f_0(Var_272);
                                Var_275 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[85])));
                                Var_274 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_275, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[7])));
                                Var_270 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_271, Var_274);
                                Pieces_265 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[83])), Var_270);
                                {
                                  Spec_266 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(0, Spec_266, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_improve_arith_shift_cmp_ops\'/11"));
                                  MR_hl_field(0, Spec_266, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                  MR_hl_field(0, Spec_266, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_2[2])));
                                  MR_hl_field(0, Spec_266, 3) = ((MR_Box) (Context_263));
                                  MR_hl_field(0, Spec_266, 4) = ((MR_Box) (Pieces_265));
                                }
                                check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_266, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                MR_Word Var_282;

                                succeeded = check_hlds__simplify__simplify_goal_call__is_int_const_2_p_0(IntType_12, ConsY_307);
                                if (succeeded)
                                {
                                  Var_282 = (MR_Integer) 0;
                                  check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_66, ModuleName_14, (MR_String) "unchecked_rem", Var_282, X_335, Y_336, Z_303, ImprovedGoalExpr_19);
                                  *STATE_VARIABLE_Info_67 = STATE_VARIABLE_Info_0_66;
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
              MR_Word Z_28;
              MR_Word InstY_29;
              MR_Word ConsY_32;
              MR_Word Var_74;
              MR_Word Var_75;
              MR_Word Var_76;
              MR_Word Var_77;
              MR_Word Var_78;
              MR_Word Var_79;
              MR_Word Var_80;
              MR_Word X_169;
              MR_Word Y_170;

              succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_169 = ((MR_Word) ((MR_hl_field(1, Args_17, 0))));
                Var_74 = ((MR_Word) ((MR_hl_field(1, Args_17, 1))));
                succeeded = (Var_74 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_170 = ((MR_Word) ((MR_hl_field(1, Var_74, 0))));
                  Var_75 = ((MR_Word) ((MR_hl_field(1, Var_74, 1))));
                  succeeded = (Var_75 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_28 = ((MR_Word) ((MR_hl_field(1, Var_75, 0))));
                    Var_76 = ((MR_Word) ((MR_hl_field(1, Var_75, 1))));
                    succeeded = (Var_76 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_13, Y_170, &InstY_29);
                      succeeded = ((MR_tag((MR_Word) InstY_29)) == (MR_Integer) 2);
                      if (succeeded)
                      {
                        Var_77 = ((MR_Word) ((MR_hl_field(2, InstY_29, 2))));
                        succeeded = (Var_77 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_78 = ((MR_Word) ((MR_hl_field(1, Var_77, 0))));
                          Var_80 = ((MR_Word) ((MR_hl_field(1, Var_77, 1))));
                          succeeded = (Var_80 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            ConsY_32 = ((MR_Word) ((MR_hl_field(0, Var_78, 0))));
                            Var_79 = ((MR_Word) ((MR_hl_field(0, Var_78, 1))));
                            succeeded = (Var_79 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = check_hlds__simplify__simplify_goal_call__is_zero_const_2_p_0(IntType_12, ConsY_32);
                              if (succeeded)
                              {
                                MR_Word Context_33;
                                MR_Word SymName_34;
                                MR_Word Pieces_35;
                                MR_Word Spec_36;
                                MR_Word Var_81;
                                MR_Word Var_86;
                                MR_Word Var_87;
                                MR_Word Var_88;
                                MR_Word Var_89;
                                MR_Word Var_91;
                                MR_Word Var_92;

                                *ImprovedGoalExpr_19 = GoalExpr0_18;
                                Context_33 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_20);
                                {
                                  Var_81 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(0, Var_81, 0) = ((MR_Box) (ModuleName_14));
                                }
                                {
                                  SymName_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(1, SymName_34, 0) = ((MR_Box) (Var_81));
                                  MR_hl_field(1, SymName_34, 1) = ((MR_Box) (PredName_15));
                                }
                                {
                                  Var_89 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(3, Var_89, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                                  MR_hl_field(3, Var_89, 1) = ((MR_Box) (SymName_34));
                                }
                                {
                                  Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(1, Var_88, 0) = ((MR_Box) (Var_89));
                                  MR_hl_field(1, Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                }
                                Var_87 = parse_tree__error_spec__color_as_subject_1_f_0(Var_88);
                                Var_92 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[85])));
                                Var_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_92, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[7])));
                                Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_87, Var_91);
                                Pieces_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[83])), Var_86);
                                {
                                  Spec_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(0, Spec_36, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_improve_arith_shift_cmp_ops\'/11"));
                                  MR_hl_field(0, Spec_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                  MR_hl_field(0, Spec_36, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_2[2])));
                                  MR_hl_field(0, Spec_36, 3) = ((MR_Box) (Context_33));
                                  MR_hl_field(0, Spec_36, 4) = ((MR_Box) (Pieces_35));
                                }
                                check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_36, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                MR_Word Var_105;

                                succeeded = check_hlds__simplify__simplify_goal_call__is_int_const_2_p_0(IntType_12, ConsY_32);
                                if (succeeded)
                                {
                                  Var_105 = (MR_Integer) 0;
                                  check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_66, ModuleName_14, (MR_String) "unchecked_quotient", Var_105, X_169, Y_170, Z_28, ImprovedGoalExpr_19);
                                  *STATE_VARIABLE_Info_67 = STATE_VARIABLE_Info_0_66;
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
            succeeded = check_hlds__simplify__simplify_goal_call__replace_tautological_comparisons_3_p_0(PredName_15, Args_17, ImprovedGoalExpr_19);
            if (succeeded)
            {
              *STATE_VARIABLE_Info_67 = STATE_VARIABLE_Info_0_66;
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 21:
          {
            // case "rem_bits_per_int"
            ;
            {
              MR_String Op_1103;
              MR_Word X_1104;
              MR_Word Y_1105;
              MR_Integer WordBits_1106;
              MR_Word Var_1107;
              MR_Word Var_1108;

              succeeded = (IntType_12 == (MR_Integer) 0);
              if (succeeded)
              {
                Op_1103 = (MR_String) "unchecked_rem";
                succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  X_1104 = ((MR_Word) ((MR_hl_field(1, Args_17, 0))));
                  Var_1107 = ((MR_Word) ((MR_hl_field(1, Args_17, 1))));
                  succeeded = (Var_1107 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Y_1105 = ((MR_Word) ((MR_hl_field(1, Var_1107, 0))));
                    Var_1108 = ((MR_Word) ((MR_hl_field(1, Var_1107, 1))));
                    succeeded = (Var_1108 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      WordBits_1106 = parse_tree__int_emu__target_word_bits_1_f_0(Globals_23);
                      check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_9_p_0(ModuleName_14, Op_1103, X_1104, WordBits_1106, Y_1105, ImprovedGoalExpr_19, GoalInfo_20, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
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
              MR_Integer NumTargetBits_762;
              MR_Word Var_789;
              MR_Word Var_790;
              MR_Word Var_791;
              MR_Word X_839;
              MR_Word Y_840;
              MR_Word Z_841;
              MR_Word InstY_842;
              MR_Word YConst_687;
              MR_Word Var_597;
              MR_Word Var_598;
              MR_Word Var_599;
              MR_Word Var_600;
              MR_Word Var_601;

              succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_839 = ((MR_Word) ((MR_hl_field(1, Args_17, 0))));
                Var_789 = ((MR_Word) ((MR_hl_field(1, Args_17, 1))));
                succeeded = (Var_789 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_840 = ((MR_Word) ((MR_hl_field(1, Var_789, 0))));
                  Var_790 = ((MR_Word) ((MR_hl_field(1, Var_789, 1))));
                  succeeded = (Var_790 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_841 = ((MR_Word) ((MR_hl_field(1, Var_790, 0))));
                    Var_791 = ((MR_Word) ((MR_hl_field(1, Var_790, 1))));
                    succeeded = (Var_791 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      NumTargetBits_762 = check_hlds__simplify__simplify_goal_call__int_type_target_bits_2_f_0(Globals_23, IntType_12);
                      hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_13, Y_840, &InstY_842);
                      succeeded = ((MR_tag((MR_Word) InstY_842)) == (MR_Integer) 2);
                      if (succeeded)
                      {
                        Var_597 = ((MR_Word) ((MR_hl_field(2, InstY_842, 2))));
                        succeeded = (Var_597 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_598 = ((MR_Word) ((MR_hl_field(1, Var_597, 0))));
                          Var_601 = ((MR_Word) ((MR_hl_field(1, Var_597, 1))));
                          succeeded = (Var_601 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_599 = ((MR_Word) ((MR_hl_field(0, Var_598, 0))));
                            Var_600 = ((MR_Word) ((MR_hl_field(0, Var_598, 1))));
                            succeeded = (Var_600 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = ((((MR_tag((MR_Word) Var_599)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_599, 0)))) == (MR_Integer) 5)));
                              if (succeeded)
                              {
                                YConst_687 = ((MR_Word) ((MR_hl_field(3, Var_599, 1))));
                                if (((MR_tag((MR_Word) YConst_687)) == (MR_Integer) 0))
                                  succeeded = MR_TRUE;
                                else
                                if (((MR_tag((MR_Word) YConst_687)) == (MR_Integer) 1))
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
                        if (((MR_tag((MR_Word) YConst_687)) == (MR_Integer) 0))
                        {
                          MR_Integer YIntVal_606 = ((MR_Integer) ((MR_hl_field(0, YConst_687, 0))));

                          succeeded = ((MR_Integer) 0 <= YIntVal_606);
                          if (succeeded)
                            succeeded = (YIntVal_606 < NumTargetBits_762);
                          if (succeeded)
                          {
                            check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_66, ModuleName_14, (MR_String) "unchecked_right_shift", (MR_Integer) 0, X_839, Y_840, Z_841, ImprovedGoalExpr_19);
                            *STATE_VARIABLE_Info_67 = STATE_VARIABLE_Info_0_66;
                          }
                          else
                          {
                            *ImprovedGoalExpr_19 = GoalExpr0_18;
                            check_hlds__simplify__simplify_goal_call__report_bad_shift_amount_6_p_0(ModuleName_14, PredName_15, GoalInfo_20, NumTargetBits_762, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
                          }
                        }
                        else
                        {
                          MR_Unsigned YUintVal_613 = ((MR_Unsigned) ((MR_hl_field(1, YConst_687, 0))));
                          MR_Unsigned Var_609;

                          Var_609 = mercury__uint__det_from_int_1_f_0(NumTargetBits_762);
                          succeeded = (YUintVal_613 < Var_609);
                          if (succeeded)
                          {
                            check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_66, ModuleName_14, (MR_String) "unchecked_right_shift", (MR_Integer) 0, X_839, Y_840, Z_841, ImprovedGoalExpr_19);
                            *STATE_VARIABLE_Info_67 = STATE_VARIABLE_Info_0_66;
                          }
                          else
                          {
                            *ImprovedGoalExpr_19 = GoalExpr0_18;
                            check_hlds__simplify__simplify_goal_call__report_bad_shift_amount_6_p_0(ModuleName_14, PredName_15, GoalInfo_20, NumTargetBits_762, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
                          }
                        }
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        MR_Word TypeCtorInfo_179_680;
                        MR_Word NumTargetBitsConstVar_622;
                        MR_Word NumTargetBitsConstGoal_623;
                        MR_Word PrivateBuiltin_624;
                        MR_Word InRangeTestGoal_625;
                        MR_Word TestConjGoalInfo_626;
                        MR_Word TestConjGoal_627;
                        MR_Word UncheckedShiftGoalExpr_628;
                        MR_Word UncheckedShiftGoal_629;
                        MR_String NotInRangeStr_630;
                        MR_Word ErrorMsgStrVar_631;
                        MR_Word ErrorMsgStrGoal_632;
                        MR_Word ExceptionType_633;
                        MR_Word ExceptionVar_634;
                        MR_Word ExceptionTypeCtor_635;
                        MR_Word ExceptionWrapperCtorSymName_636;
                        MR_Word ExceptionWrapperCtorUDC_637;
                        MR_Word ExceptionWrapperCtorConsId_638;
                        MR_Word WrapErrorMsgGoal_639;
                        MR_Word ThrowGoal_640;
                        MR_Word ThrowConjGoalInfo_641;
                        MR_Word ThrowConjGoal_642;
                        MR_Word STATE_VARIABLE_Info_6_643;
                        MR_String Var_644;
                        MR_Word Var_645;
                        MR_Word Var_646;
                        MR_Word Var_647;
                        MR_Word Var_648;
                        MR_Word Var_649;
                        MR_Word Var_650;
                        MR_Word Var_651;
                        MR_Word Var_652;
                        MR_Word Var_653;
                        MR_Word STATE_VARIABLE_Info_7_654;
                        MR_String Var_655;
                        MR_Integer Var_656;
                        MR_Word Var_657;
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
                        MR_Word Var_670;
                        MR_Word Var_671;
                        MR_Word Var_672;
                        MR_Word Var_673;
                        MR_Word Var_674;
                        MR_Word Var_675;
                        MR_Word Var_676;
                        MR_Word Var_677;
                        MR_Word Var_678;
                        MR_Word Context_679;
                        MR_String Var_684;

                        succeeded = mercury__builtin__semidet_fail_0_p_0();
                        if (succeeded)
                        {
                          Context_679 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_20);
                          check_hlds__simplify__simplify_goal_call__simplify_make_int_const_5_p_0(NumTargetBits_762, &NumTargetBitsConstVar_622, &NumTargetBitsConstGoal_623, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_6_643);
                          PrivateBuiltin_624 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                          Var_644 = (MR_String) "unsigned_lt";
                          Var_645 = (MR_Integer) 0;
                          check_hlds__simplify__simplify_goal_call__simplify_make_cmp_goal_expr_8_p_0(STATE_VARIABLE_Info_6_643, PrivateBuiltin_624, Var_644, Var_645, Y_840, NumTargetBitsConstVar_622, Context_679, &InRangeTestGoal_625);
                          TypeCtorInfo_179_680 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                          Var_646 = parse_tree__set_of_var__make_singleton_1_f_0(TypeCtorInfo_179_680, Y_840);
                          Var_647 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                          Var_648 = (MR_Integer) 1;
                          Var_649 = (MR_Integer) 0;
                          hlds__hlds_goal__goal_info_init_6_p_0(Var_646, Var_647, Var_648, Var_649, Context_679, &TestConjGoalInfo_626);
                          Var_652 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            Var_651 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_651, 0) = ((MR_Box) (InRangeTestGoal_625));
                            MR_hl_field(1, Var_651, 1) = ((MR_Box) (Var_652));
                          }
                          {
                            Var_650 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_650, 0) = ((MR_Box) (NumTargetBitsConstGoal_623));
                            MR_hl_field(1, Var_650, 1) = ((MR_Box) (Var_651));
                          }
                          hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_650, TestConjGoalInfo_626, &TestConjGoal_627);
                          Var_653 = (MR_Integer) 0;
                          check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_6_643, ModuleName_14, (MR_String) "unchecked_right_shift", Var_653, X_839, Y_840, Z_841, &UncheckedShiftGoalExpr_628);
                          Var_684 = (MR_String) ".(>>): second operand is out of range";
                          {
                            UncheckedShiftGoal_629 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, UncheckedShiftGoal_629, 0) = ((MR_Box) (UncheckedShiftGoalExpr_628));
                            MR_hl_field(0, UncheckedShiftGoal_629, 1) = ((MR_Box) (GoalInfo_20));
                          }
                          NotInRangeStr_630 = mercury__string__f_43_43_2_f_0(ModuleName_14, Var_684);
                          check_hlds__simplify__simplify_goal_call__simplify_make_string_const_5_p_0(NotInRangeStr_630, &ErrorMsgStrVar_631, &ErrorMsgStrGoal_632, STATE_VARIABLE_Info_6_643, &STATE_VARIABLE_Info_7_654);
                          ExceptionType_633 = parse_tree__builtin_lib_types__void_type_0_f_0();
                          check_hlds__simplify__simplify_goal_call__simplify_make_var_4_p_0(ExceptionType_633, &ExceptionVar_634, STATE_VARIABLE_Info_7_654, STATE_VARIABLE_Info_67);
                          parse_tree__prog_type__type_to_ctor_det_2_p_0(ExceptionType_633, &ExceptionTypeCtor_635);
                          Var_655 = (MR_String) "math_domain_error";
                          Var_656 = (MR_Integer) 1;
                          Var_658 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            ExceptionWrapperCtorSymName_636 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, ExceptionWrapperCtorSymName_636, 0) = ((MR_Box) (PrivateBuiltin_624));
                            MR_hl_field(1, ExceptionWrapperCtorSymName_636, 1) = ((MR_Box) (Var_655));
                          }
                          {
                            ExceptionWrapperCtorUDC_637 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, ExceptionWrapperCtorUDC_637, 0) = ((MR_Box) (ExceptionWrapperCtorSymName_636));
                            MR_hl_field(0, ExceptionWrapperCtorUDC_637, 1) = ((MR_Box) (Var_656));
                            MR_hl_field(0, ExceptionWrapperCtorUDC_637, 2) = ((MR_Box) (ExceptionTypeCtor_635));
                          }
                          ExceptionWrapperCtorConsId_638 = (MR_Word) (MR_mkword(1, (MR_Word) (ExceptionWrapperCtorUDC_637)));
                          {
                            Var_657 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_657, 0) = ((MR_Box) (ErrorMsgStrVar_631));
                            MR_hl_field(1, Var_657, 1) = ((MR_Box) (Var_658));
                          }
                          hlds__make_goal__construct_functor_4_p_0(ExceptionVar_634, ExceptionWrapperCtorConsId_638, Var_657, &WrapErrorMsgGoal_639);
                          Var_659 = (MR_Integer) 0;
                          Var_660 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
                          Var_661 = (MR_String) "throw";
                          Var_662 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            Var_663 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_663, 0) = ((MR_Box) (ExceptionVar_634));
                            MR_hl_field(1, Var_663, 1) = ((MR_Box) (Var_662));
                          }
                          Var_664 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                          Var_665 = (MR_Word) ((MR_Unsigned) 0U);
                          Var_666 = (MR_Integer) 6;
                          Var_667 = (MR_Integer) 0;
                          Var_668 = (MR_Word) ((MR_Unsigned) 0U);
                          Var_669 = mercury__term_context__dummy_context_0_f_0();
                          hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_22, Var_659, Var_660, Var_661, Var_662, Var_663, Var_664, Var_665, Var_666, Var_667, Var_668, Var_669, &ThrowGoal_640);
                          Var_670 = parse_tree__set_of_var__init_0_f_0(TypeCtorInfo_179_680);
                          Var_671 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                          Var_672 = (MR_Integer) 6;
                          Var_673 = (MR_Integer) 0;
                          hlds__hlds_goal__goal_info_init_6_p_0(Var_670, Var_671, Var_672, Var_673, Context_679, &ThrowConjGoalInfo_641);
                          Var_677 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            Var_676 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_676, 0) = ((MR_Box) (ThrowGoal_640));
                            MR_hl_field(1, Var_676, 1) = ((MR_Box) (Var_677));
                          }
                          {
                            Var_675 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_675, 0) = ((MR_Box) (WrapErrorMsgGoal_639));
                            MR_hl_field(1, Var_675, 1) = ((MR_Box) (Var_676));
                          }
                          {
                            Var_674 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_674, 0) = ((MR_Box) (ErrorMsgStrGoal_632));
                            MR_hl_field(1, Var_674, 1) = ((MR_Box) (Var_675));
                          }
                          hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_674, ThrowConjGoalInfo_641, &ThrowConjGoal_642);
                          Var_678 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                            *ImprovedGoalExpr_19 = base;
                            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                            MR_hl_field(3, base, 1) = ((MR_Box) (Var_678));
                            MR_hl_field(3, base, 2) = ((MR_Box) (TestConjGoal_627));
                            MR_hl_field(3, base, 3) = ((MR_Box) (UncheckedShiftGoal_629));
                            MR_hl_field(3, base, 4) = ((MR_Box) (ThrowConjGoal_642));
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
              MR_Word Z_226;
              MR_Word InstY_227;
              MR_Word ConsY_230;
              MR_Word Var_235;
              MR_Word Var_236;
              MR_Word Var_237;
              MR_Word Var_238;
              MR_Word Var_239;
              MR_Word Var_240;
              MR_Word Var_241;
              MR_Word X_258;
              MR_Word Y_259;

              succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_258 = ((MR_Word) ((MR_hl_field(1, Args_17, 0))));
                Var_235 = ((MR_Word) ((MR_hl_field(1, Args_17, 1))));
                succeeded = (Var_235 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_259 = ((MR_Word) ((MR_hl_field(1, Var_235, 0))));
                  Var_236 = ((MR_Word) ((MR_hl_field(1, Var_235, 1))));
                  succeeded = (Var_236 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_226 = ((MR_Word) ((MR_hl_field(1, Var_236, 0))));
                    Var_237 = ((MR_Word) ((MR_hl_field(1, Var_236, 1))));
                    succeeded = (Var_237 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_13, Y_259, &InstY_227);
                      succeeded = ((MR_tag((MR_Word) InstY_227)) == (MR_Integer) 2);
                      if (succeeded)
                      {
                        Var_238 = ((MR_Word) ((MR_hl_field(2, InstY_227, 2))));
                        succeeded = (Var_238 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_239 = ((MR_Word) ((MR_hl_field(1, Var_238, 0))));
                          Var_241 = ((MR_Word) ((MR_hl_field(1, Var_238, 1))));
                          succeeded = (Var_241 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            ConsY_230 = ((MR_Word) ((MR_hl_field(0, Var_239, 0))));
                            Var_240 = ((MR_Word) ((MR_hl_field(0, Var_239, 1))));
                            succeeded = (Var_240 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = check_hlds__simplify__simplify_goal_call__is_zero_const_2_p_0(IntType_12, ConsY_230);
                              if (succeeded)
                              {
                                MR_Word Context_186;
                                MR_Word SymName_187;
                                MR_Word Pieces_188;
                                MR_Word Spec_189;
                                MR_Word Var_190;
                                MR_Word Var_193;
                                MR_Word Var_194;
                                MR_Word Var_195;
                                MR_Word Var_196;
                                MR_Word Var_197;
                                MR_Word Var_198;

                                *ImprovedGoalExpr_19 = GoalExpr0_18;
                                Context_186 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_20);
                                {
                                  Var_190 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(0, Var_190, 0) = ((MR_Box) (ModuleName_14));
                                }
                                {
                                  SymName_187 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(1, SymName_187, 0) = ((MR_Box) (Var_190));
                                  MR_hl_field(1, SymName_187, 1) = ((MR_Box) (PredName_15));
                                }
                                {
                                  Var_196 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(3, Var_196, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                                  MR_hl_field(3, Var_196, 1) = ((MR_Box) (SymName_187));
                                }
                                {
                                  Var_195 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(1, Var_195, 0) = ((MR_Box) (Var_196));
                                  MR_hl_field(1, Var_195, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                }
                                Var_194 = parse_tree__error_spec__color_as_subject_1_f_0(Var_195);
                                Var_198 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[85])));
                                Var_197 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_198, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[7])));
                                Var_193 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_194, Var_197);
                                Pieces_188 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[83])), Var_193);
                                {
                                  Spec_189 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(0, Spec_189, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_improve_arith_shift_cmp_ops\'/11"));
                                  MR_hl_field(0, Spec_189, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                  MR_hl_field(0, Spec_189, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_2[2])));
                                  MR_hl_field(0, Spec_189, 3) = ((MR_Box) (Context_186));
                                  MR_hl_field(0, Spec_189, 4) = ((MR_Box) (Pieces_188));
                                }
                                check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_189, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                MR_Word Var_205;

                                succeeded = check_hlds__simplify__simplify_goal_call__is_int_const_2_p_0(IntType_12, ConsY_230);
                                if (succeeded)
                                {
                                  Var_205 = (MR_Integer) 0;
                                  check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_66, ModuleName_14, (MR_String) "unchecked_quotient", Var_205, X_258, Y_259, Z_226, ImprovedGoalExpr_19);
                                  *STATE_VARIABLE_Info_67 = STATE_VARIABLE_Info_0_66;
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
              MR_Integer NumTargetBits_1017;
              MR_Word Var_1044;
              MR_Word Var_1045;
              MR_Word Var_1046;
              MR_Word X_1094;
              MR_Word Y_1095;
              MR_Word Z_1096;
              MR_Word InstY_1097;
              MR_Word YConst_942;
              MR_Word Var_852;
              MR_Word Var_853;
              MR_Word Var_854;
              MR_Word Var_855;
              MR_Word Var_856;

              succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_1094 = ((MR_Word) ((MR_hl_field(1, Args_17, 0))));
                Var_1044 = ((MR_Word) ((MR_hl_field(1, Args_17, 1))));
                succeeded = (Var_1044 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_1095 = ((MR_Word) ((MR_hl_field(1, Var_1044, 0))));
                  Var_1045 = ((MR_Word) ((MR_hl_field(1, Var_1044, 1))));
                  succeeded = (Var_1045 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_1096 = ((MR_Word) ((MR_hl_field(1, Var_1045, 0))));
                    Var_1046 = ((MR_Word) ((MR_hl_field(1, Var_1045, 1))));
                    succeeded = (Var_1046 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      NumTargetBits_1017 = check_hlds__simplify__simplify_goal_call__int_type_target_bits_2_f_0(Globals_23, IntType_12);
                      hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_13, Y_1095, &InstY_1097);
                      succeeded = ((MR_tag((MR_Word) InstY_1097)) == (MR_Integer) 2);
                      if (succeeded)
                      {
                        Var_852 = ((MR_Word) ((MR_hl_field(2, InstY_1097, 2))));
                        succeeded = (Var_852 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_853 = ((MR_Word) ((MR_hl_field(1, Var_852, 0))));
                          Var_856 = ((MR_Word) ((MR_hl_field(1, Var_852, 1))));
                          succeeded = (Var_856 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_854 = ((MR_Word) ((MR_hl_field(0, Var_853, 0))));
                            Var_855 = ((MR_Word) ((MR_hl_field(0, Var_853, 1))));
                            succeeded = (Var_855 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = ((((MR_tag((MR_Word) Var_854)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_854, 0)))) == (MR_Integer) 5)));
                              if (succeeded)
                              {
                                YConst_942 = ((MR_Word) ((MR_hl_field(3, Var_854, 1))));
                                if (((MR_tag((MR_Word) YConst_942)) == (MR_Integer) 0))
                                  succeeded = MR_TRUE;
                                else
                                if (((MR_tag((MR_Word) YConst_942)) == (MR_Integer) 1))
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
                        if (((MR_tag((MR_Word) YConst_942)) == (MR_Integer) 0))
                        {
                          MR_Integer YIntVal_861 = ((MR_Integer) ((MR_hl_field(0, YConst_942, 0))));

                          succeeded = ((MR_Integer) 0 <= YIntVal_861);
                          if (succeeded)
                            succeeded = (YIntVal_861 < NumTargetBits_1017);
                          if (succeeded)
                          {
                            check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_66, ModuleName_14, (MR_String) "unchecked_right_ushift", (MR_Integer) 0, X_1094, Y_1095, Z_1096, ImprovedGoalExpr_19);
                            *STATE_VARIABLE_Info_67 = STATE_VARIABLE_Info_0_66;
                          }
                          else
                          {
                            *ImprovedGoalExpr_19 = GoalExpr0_18;
                            check_hlds__simplify__simplify_goal_call__report_bad_shift_amount_6_p_0(ModuleName_14, PredName_15, GoalInfo_20, NumTargetBits_1017, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
                          }
                        }
                        else
                        {
                          MR_Unsigned YUintVal_868 = ((MR_Unsigned) ((MR_hl_field(1, YConst_942, 0))));
                          MR_Unsigned Var_864;

                          Var_864 = mercury__uint__det_from_int_1_f_0(NumTargetBits_1017);
                          succeeded = (YUintVal_868 < Var_864);
                          if (succeeded)
                          {
                            check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_66, ModuleName_14, (MR_String) "unchecked_right_ushift", (MR_Integer) 0, X_1094, Y_1095, Z_1096, ImprovedGoalExpr_19);
                            *STATE_VARIABLE_Info_67 = STATE_VARIABLE_Info_0_66;
                          }
                          else
                          {
                            *ImprovedGoalExpr_19 = GoalExpr0_18;
                            check_hlds__simplify__simplify_goal_call__report_bad_shift_amount_6_p_0(ModuleName_14, PredName_15, GoalInfo_20, NumTargetBits_1017, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
                          }
                        }
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        MR_Word TypeCtorInfo_179_935;
                        MR_Word NumTargetBitsConstVar_877;
                        MR_Word NumTargetBitsConstGoal_878;
                        MR_Word PrivateBuiltin_879;
                        MR_Word InRangeTestGoal_880;
                        MR_Word TestConjGoalInfo_881;
                        MR_Word TestConjGoal_882;
                        MR_Word UncheckedShiftGoalExpr_883;
                        MR_Word UncheckedShiftGoal_884;
                        MR_String NotInRangeStr_885;
                        MR_Word ErrorMsgStrVar_886;
                        MR_Word ErrorMsgStrGoal_887;
                        MR_Word ExceptionType_888;
                        MR_Word ExceptionVar_889;
                        MR_Word ExceptionTypeCtor_890;
                        MR_Word ExceptionWrapperCtorSymName_891;
                        MR_Word ExceptionWrapperCtorUDC_892;
                        MR_Word ExceptionWrapperCtorConsId_893;
                        MR_Word WrapErrorMsgGoal_894;
                        MR_Word ThrowGoal_895;
                        MR_Word ThrowConjGoalInfo_896;
                        MR_Word ThrowConjGoal_897;
                        MR_Word STATE_VARIABLE_Info_6_898;
                        MR_String Var_899;
                        MR_Word Var_900;
                        MR_Word Var_901;
                        MR_Word Var_902;
                        MR_Word Var_903;
                        MR_Word Var_904;
                        MR_Word Var_905;
                        MR_Word Var_906;
                        MR_Word Var_907;
                        MR_Word Var_908;
                        MR_Word STATE_VARIABLE_Info_7_909;
                        MR_String Var_910;
                        MR_Integer Var_911;
                        MR_Word Var_912;
                        MR_Word Var_913;
                        MR_Word Var_914;
                        MR_Word Var_915;
                        MR_String Var_916;
                        MR_Word Var_917;
                        MR_Word Var_918;
                        MR_Word Var_919;
                        MR_Word Var_920;
                        MR_Word Var_921;
                        MR_Word Var_922;
                        MR_Word Var_923;
                        MR_Word Var_924;
                        MR_Word Var_925;
                        MR_Word Var_926;
                        MR_Word Var_927;
                        MR_Word Var_928;
                        MR_Word Var_929;
                        MR_Word Var_930;
                        MR_Word Var_931;
                        MR_Word Var_932;
                        MR_Word Var_933;
                        MR_Word Context_934;
                        MR_String Var_939;

                        succeeded = mercury__builtin__semidet_fail_0_p_0();
                        if (succeeded)
                        {
                          Context_934 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_20);
                          check_hlds__simplify__simplify_goal_call__simplify_make_int_const_5_p_0(NumTargetBits_1017, &NumTargetBitsConstVar_877, &NumTargetBitsConstGoal_878, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_6_898);
                          PrivateBuiltin_879 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                          Var_899 = (MR_String) "unsigned_lt";
                          Var_900 = (MR_Integer) 0;
                          check_hlds__simplify__simplify_goal_call__simplify_make_cmp_goal_expr_8_p_0(STATE_VARIABLE_Info_6_898, PrivateBuiltin_879, Var_899, Var_900, Y_1095, NumTargetBitsConstVar_877, Context_934, &InRangeTestGoal_880);
                          TypeCtorInfo_179_935 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                          Var_901 = parse_tree__set_of_var__make_singleton_1_f_0(TypeCtorInfo_179_935, Y_1095);
                          Var_902 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                          Var_903 = (MR_Integer) 1;
                          Var_904 = (MR_Integer) 0;
                          hlds__hlds_goal__goal_info_init_6_p_0(Var_901, Var_902, Var_903, Var_904, Context_934, &TestConjGoalInfo_881);
                          Var_907 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            Var_906 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_906, 0) = ((MR_Box) (InRangeTestGoal_880));
                            MR_hl_field(1, Var_906, 1) = ((MR_Box) (Var_907));
                          }
                          {
                            Var_905 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_905, 0) = ((MR_Box) (NumTargetBitsConstGoal_878));
                            MR_hl_field(1, Var_905, 1) = ((MR_Box) (Var_906));
                          }
                          hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_905, TestConjGoalInfo_881, &TestConjGoal_882);
                          Var_908 = (MR_Integer) 0;
                          check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_6_898, ModuleName_14, (MR_String) "unchecked_right_ushift", Var_908, X_1094, Y_1095, Z_1096, &UncheckedShiftGoalExpr_883);
                          Var_939 = (MR_String) ".(>>u): second operand is out of range";
                          {
                            UncheckedShiftGoal_884 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, UncheckedShiftGoal_884, 0) = ((MR_Box) (UncheckedShiftGoalExpr_883));
                            MR_hl_field(0, UncheckedShiftGoal_884, 1) = ((MR_Box) (GoalInfo_20));
                          }
                          NotInRangeStr_885 = mercury__string__f_43_43_2_f_0(ModuleName_14, Var_939);
                          check_hlds__simplify__simplify_goal_call__simplify_make_string_const_5_p_0(NotInRangeStr_885, &ErrorMsgStrVar_886, &ErrorMsgStrGoal_887, STATE_VARIABLE_Info_6_898, &STATE_VARIABLE_Info_7_909);
                          ExceptionType_888 = parse_tree__builtin_lib_types__void_type_0_f_0();
                          check_hlds__simplify__simplify_goal_call__simplify_make_var_4_p_0(ExceptionType_888, &ExceptionVar_889, STATE_VARIABLE_Info_7_909, STATE_VARIABLE_Info_67);
                          parse_tree__prog_type__type_to_ctor_det_2_p_0(ExceptionType_888, &ExceptionTypeCtor_890);
                          Var_910 = (MR_String) "math_domain_error";
                          Var_911 = (MR_Integer) 1;
                          Var_913 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            ExceptionWrapperCtorSymName_891 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, ExceptionWrapperCtorSymName_891, 0) = ((MR_Box) (PrivateBuiltin_879));
                            MR_hl_field(1, ExceptionWrapperCtorSymName_891, 1) = ((MR_Box) (Var_910));
                          }
                          {
                            ExceptionWrapperCtorUDC_892 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, ExceptionWrapperCtorUDC_892, 0) = ((MR_Box) (ExceptionWrapperCtorSymName_891));
                            MR_hl_field(0, ExceptionWrapperCtorUDC_892, 1) = ((MR_Box) (Var_911));
                            MR_hl_field(0, ExceptionWrapperCtorUDC_892, 2) = ((MR_Box) (ExceptionTypeCtor_890));
                          }
                          ExceptionWrapperCtorConsId_893 = (MR_Word) (MR_mkword(1, (MR_Word) (ExceptionWrapperCtorUDC_892)));
                          {
                            Var_912 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_912, 0) = ((MR_Box) (ErrorMsgStrVar_886));
                            MR_hl_field(1, Var_912, 1) = ((MR_Box) (Var_913));
                          }
                          hlds__make_goal__construct_functor_4_p_0(ExceptionVar_889, ExceptionWrapperCtorConsId_893, Var_912, &WrapErrorMsgGoal_894);
                          Var_914 = (MR_Integer) 0;
                          Var_915 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
                          Var_916 = (MR_String) "throw";
                          Var_917 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            Var_918 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_918, 0) = ((MR_Box) (ExceptionVar_889));
                            MR_hl_field(1, Var_918, 1) = ((MR_Box) (Var_917));
                          }
                          Var_919 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                          Var_920 = (MR_Word) ((MR_Unsigned) 0U);
                          Var_921 = (MR_Integer) 6;
                          Var_922 = (MR_Integer) 0;
                          Var_923 = (MR_Word) ((MR_Unsigned) 0U);
                          Var_924 = mercury__term_context__dummy_context_0_f_0();
                          hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_22, Var_914, Var_915, Var_916, Var_917, Var_918, Var_919, Var_920, Var_921, Var_922, Var_923, Var_924, &ThrowGoal_895);
                          Var_925 = parse_tree__set_of_var__init_0_f_0(TypeCtorInfo_179_935);
                          Var_926 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                          Var_927 = (MR_Integer) 6;
                          Var_928 = (MR_Integer) 0;
                          hlds__hlds_goal__goal_info_init_6_p_0(Var_925, Var_926, Var_927, Var_928, Context_934, &ThrowConjGoalInfo_896);
                          Var_932 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            Var_931 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_931, 0) = ((MR_Box) (ThrowGoal_895));
                            MR_hl_field(1, Var_931, 1) = ((MR_Box) (Var_932));
                          }
                          {
                            Var_930 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_930, 0) = ((MR_Box) (WrapErrorMsgGoal_894));
                            MR_hl_field(1, Var_930, 1) = ((MR_Box) (Var_931));
                          }
                          {
                            Var_929 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_929, 0) = ((MR_Box) (ErrorMsgStrGoal_887));
                            MR_hl_field(1, Var_929, 1) = ((MR_Box) (Var_930));
                          }
                          hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_929, ThrowConjGoalInfo_896, &ThrowConjGoal_897);
                          Var_933 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                            *ImprovedGoalExpr_19 = base;
                            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                            MR_hl_field(3, base, 1) = ((MR_Box) (Var_933));
                            MR_hl_field(3, base, 2) = ((MR_Box) (TestConjGoal_882));
                            MR_hl_field(3, base, 3) = ((MR_Box) (UncheckedShiftGoal_884));
                            MR_hl_field(3, base, 4) = ((MR_Box) (ThrowConjGoal_897));
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
              MR_String Op_24;
              MR_Word X_25;
              MR_Word Y_26;
              MR_Integer WordBits_27;
              MR_Word Var_68;
              MR_Word Var_69;

              succeeded = (IntType_12 == (MR_Integer) 0);
              if (succeeded)
              {
                Op_24 = (MR_String) "unchecked_quotient";
                succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  X_25 = ((MR_Word) ((MR_hl_field(1, Args_17, 0))));
                  Var_68 = ((MR_Word) ((MR_hl_field(1, Args_17, 1))));
                  succeeded = (Var_68 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Y_26 = ((MR_Word) ((MR_hl_field(1, Var_68, 0))));
                    Var_69 = ((MR_Word) ((MR_hl_field(1, Var_68, 1))));
                    succeeded = (Var_69 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      WordBits_27 = parse_tree__int_emu__target_word_bits_1_f_0(Globals_23);
                      check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_9_p_0(ModuleName_14, Op_24, X_25, WordBits_27, Y_26, ImprovedGoalExpr_19, GoalInfo_20, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
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
              MR_Integer NumTargetBits_507;
              MR_Word Var_534;
              MR_Word Var_535;
              MR_Word Var_536;
              MR_Word X_584;
              MR_Word Y_585;
              MR_Word Z_586;
              MR_Word InstY_587;
              MR_Word YConst_432;
              MR_Word Var_342;
              MR_Word Var_343;
              MR_Word Var_344;
              MR_Word Var_345;
              MR_Word Var_346;

              succeeded = (Args_17 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_584 = ((MR_Word) ((MR_hl_field(1, Args_17, 0))));
                Var_534 = ((MR_Word) ((MR_hl_field(1, Args_17, 1))));
                succeeded = (Var_534 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_585 = ((MR_Word) ((MR_hl_field(1, Var_534, 0))));
                  Var_535 = ((MR_Word) ((MR_hl_field(1, Var_534, 1))));
                  succeeded = (Var_535 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_586 = ((MR_Word) ((MR_hl_field(1, Var_535, 0))));
                    Var_536 = ((MR_Word) ((MR_hl_field(1, Var_535, 1))));
                    succeeded = (Var_536 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      NumTargetBits_507 = check_hlds__simplify__simplify_goal_call__int_type_target_bits_2_f_0(Globals_23, IntType_12);
                      hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_13, Y_585, &InstY_587);
                      succeeded = ((MR_tag((MR_Word) InstY_587)) == (MR_Integer) 2);
                      if (succeeded)
                      {
                        Var_342 = ((MR_Word) ((MR_hl_field(2, InstY_587, 2))));
                        succeeded = (Var_342 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_343 = ((MR_Word) ((MR_hl_field(1, Var_342, 0))));
                          Var_346 = ((MR_Word) ((MR_hl_field(1, Var_342, 1))));
                          succeeded = (Var_346 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_344 = ((MR_Word) ((MR_hl_field(0, Var_343, 0))));
                            Var_345 = ((MR_Word) ((MR_hl_field(0, Var_343, 1))));
                            succeeded = (Var_345 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = ((((MR_tag((MR_Word) Var_344)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_344, 0)))) == (MR_Integer) 5)));
                              if (succeeded)
                              {
                                YConst_432 = ((MR_Word) ((MR_hl_field(3, Var_344, 1))));
                                if (((MR_tag((MR_Word) YConst_432)) == (MR_Integer) 0))
                                  succeeded = MR_TRUE;
                                else
                                if (((MR_tag((MR_Word) YConst_432)) == (MR_Integer) 1))
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
                        if (((MR_tag((MR_Word) YConst_432)) == (MR_Integer) 0))
                        {
                          MR_Integer YIntVal_351 = ((MR_Integer) ((MR_hl_field(0, YConst_432, 0))));

                          succeeded = ((MR_Integer) 0 <= YIntVal_351);
                          if (succeeded)
                            succeeded = (YIntVal_351 < NumTargetBits_507);
                          if (succeeded)
                          {
                            check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_66, ModuleName_14, (MR_String) "unchecked_left_ushift", (MR_Integer) 0, X_584, Y_585, Z_586, ImprovedGoalExpr_19);
                            *STATE_VARIABLE_Info_67 = STATE_VARIABLE_Info_0_66;
                          }
                          else
                          {
                            *ImprovedGoalExpr_19 = GoalExpr0_18;
                            check_hlds__simplify__simplify_goal_call__report_bad_shift_amount_6_p_0(ModuleName_14, PredName_15, GoalInfo_20, NumTargetBits_507, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
                          }
                        }
                        else
                        {
                          MR_Unsigned YUintVal_358 = ((MR_Unsigned) ((MR_hl_field(1, YConst_432, 0))));
                          MR_Unsigned Var_354;

                          Var_354 = mercury__uint__det_from_int_1_f_0(NumTargetBits_507);
                          succeeded = (YUintVal_358 < Var_354);
                          if (succeeded)
                          {
                            check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_66, ModuleName_14, (MR_String) "unchecked_left_ushift", (MR_Integer) 0, X_584, Y_585, Z_586, ImprovedGoalExpr_19);
                            *STATE_VARIABLE_Info_67 = STATE_VARIABLE_Info_0_66;
                          }
                          else
                          {
                            *ImprovedGoalExpr_19 = GoalExpr0_18;
                            check_hlds__simplify__simplify_goal_call__report_bad_shift_amount_6_p_0(ModuleName_14, PredName_15, GoalInfo_20, NumTargetBits_507, STATE_VARIABLE_Info_0_66, STATE_VARIABLE_Info_67);
                          }
                        }
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        MR_Word TypeCtorInfo_179_425;
                        MR_Word NumTargetBitsConstVar_367;
                        MR_Word NumTargetBitsConstGoal_368;
                        MR_Word PrivateBuiltin_369;
                        MR_Word InRangeTestGoal_370;
                        MR_Word TestConjGoalInfo_371;
                        MR_Word TestConjGoal_372;
                        MR_Word UncheckedShiftGoalExpr_373;
                        MR_Word UncheckedShiftGoal_374;
                        MR_String NotInRangeStr_375;
                        MR_Word ErrorMsgStrVar_376;
                        MR_Word ErrorMsgStrGoal_377;
                        MR_Word ExceptionType_378;
                        MR_Word ExceptionVar_379;
                        MR_Word ExceptionTypeCtor_380;
                        MR_Word ExceptionWrapperCtorSymName_381;
                        MR_Word ExceptionWrapperCtorUDC_382;
                        MR_Word ExceptionWrapperCtorConsId_383;
                        MR_Word WrapErrorMsgGoal_384;
                        MR_Word ThrowGoal_385;
                        MR_Word ThrowConjGoalInfo_386;
                        MR_Word ThrowConjGoal_387;
                        MR_Word STATE_VARIABLE_Info_6_388;
                        MR_String Var_389;
                        MR_Word Var_390;
                        MR_Word Var_391;
                        MR_Word Var_392;
                        MR_Word Var_393;
                        MR_Word Var_394;
                        MR_Word Var_395;
                        MR_Word Var_396;
                        MR_Word Var_397;
                        MR_Word Var_398;
                        MR_Word STATE_VARIABLE_Info_7_399;
                        MR_String Var_400;
                        MR_Integer Var_401;
                        MR_Word Var_402;
                        MR_Word Var_403;
                        MR_Word Var_404;
                        MR_Word Var_405;
                        MR_String Var_406;
                        MR_Word Var_407;
                        MR_Word Var_408;
                        MR_Word Var_409;
                        MR_Word Var_410;
                        MR_Word Var_411;
                        MR_Word Var_412;
                        MR_Word Var_413;
                        MR_Word Var_414;
                        MR_Word Var_415;
                        MR_Word Var_416;
                        MR_Word Var_417;
                        MR_Word Var_418;
                        MR_Word Var_419;
                        MR_Word Var_420;
                        MR_Word Var_421;
                        MR_Word Var_422;
                        MR_Word Var_423;
                        MR_Word Context_424;
                        MR_String Var_429;

                        succeeded = mercury__builtin__semidet_fail_0_p_0();
                        if (succeeded)
                        {
                          Context_424 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_20);
                          check_hlds__simplify__simplify_goal_call__simplify_make_int_const_5_p_0(NumTargetBits_507, &NumTargetBitsConstVar_367, &NumTargetBitsConstGoal_368, STATE_VARIABLE_Info_0_66, &STATE_VARIABLE_Info_6_388);
                          PrivateBuiltin_369 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                          Var_389 = (MR_String) "unsigned_lt";
                          Var_390 = (MR_Integer) 0;
                          check_hlds__simplify__simplify_goal_call__simplify_make_cmp_goal_expr_8_p_0(STATE_VARIABLE_Info_6_388, PrivateBuiltin_369, Var_389, Var_390, Y_585, NumTargetBitsConstVar_367, Context_424, &InRangeTestGoal_370);
                          TypeCtorInfo_179_425 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                          Var_391 = parse_tree__set_of_var__make_singleton_1_f_0(TypeCtorInfo_179_425, Y_585);
                          Var_392 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                          Var_393 = (MR_Integer) 1;
                          Var_394 = (MR_Integer) 0;
                          hlds__hlds_goal__goal_info_init_6_p_0(Var_391, Var_392, Var_393, Var_394, Context_424, &TestConjGoalInfo_371);
                          Var_397 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            Var_396 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_396, 0) = ((MR_Box) (InRangeTestGoal_370));
                            MR_hl_field(1, Var_396, 1) = ((MR_Box) (Var_397));
                          }
                          {
                            Var_395 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_395, 0) = ((MR_Box) (NumTargetBitsConstGoal_368));
                            MR_hl_field(1, Var_395, 1) = ((MR_Box) (Var_396));
                          }
                          hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_395, TestConjGoalInfo_371, &TestConjGoal_372);
                          Var_398 = (MR_Integer) 0;
                          check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_6_388, ModuleName_14, (MR_String) "unchecked_left_ushift", Var_398, X_584, Y_585, Z_586, &UncheckedShiftGoalExpr_373);
                          Var_429 = (MR_String) ".(<<u): second operand is out of range";
                          {
                            UncheckedShiftGoal_374 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, UncheckedShiftGoal_374, 0) = ((MR_Box) (UncheckedShiftGoalExpr_373));
                            MR_hl_field(0, UncheckedShiftGoal_374, 1) = ((MR_Box) (GoalInfo_20));
                          }
                          NotInRangeStr_375 = mercury__string__f_43_43_2_f_0(ModuleName_14, Var_429);
                          check_hlds__simplify__simplify_goal_call__simplify_make_string_const_5_p_0(NotInRangeStr_375, &ErrorMsgStrVar_376, &ErrorMsgStrGoal_377, STATE_VARIABLE_Info_6_388, &STATE_VARIABLE_Info_7_399);
                          ExceptionType_378 = parse_tree__builtin_lib_types__void_type_0_f_0();
                          check_hlds__simplify__simplify_goal_call__simplify_make_var_4_p_0(ExceptionType_378, &ExceptionVar_379, STATE_VARIABLE_Info_7_399, STATE_VARIABLE_Info_67);
                          parse_tree__prog_type__type_to_ctor_det_2_p_0(ExceptionType_378, &ExceptionTypeCtor_380);
                          Var_400 = (MR_String) "math_domain_error";
                          Var_401 = (MR_Integer) 1;
                          Var_403 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            ExceptionWrapperCtorSymName_381 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, ExceptionWrapperCtorSymName_381, 0) = ((MR_Box) (PrivateBuiltin_369));
                            MR_hl_field(1, ExceptionWrapperCtorSymName_381, 1) = ((MR_Box) (Var_400));
                          }
                          {
                            ExceptionWrapperCtorUDC_382 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, ExceptionWrapperCtorUDC_382, 0) = ((MR_Box) (ExceptionWrapperCtorSymName_381));
                            MR_hl_field(0, ExceptionWrapperCtorUDC_382, 1) = ((MR_Box) (Var_401));
                            MR_hl_field(0, ExceptionWrapperCtorUDC_382, 2) = ((MR_Box) (ExceptionTypeCtor_380));
                          }
                          ExceptionWrapperCtorConsId_383 = (MR_Word) (MR_mkword(1, (MR_Word) (ExceptionWrapperCtorUDC_382)));
                          {
                            Var_402 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_402, 0) = ((MR_Box) (ErrorMsgStrVar_376));
                            MR_hl_field(1, Var_402, 1) = ((MR_Box) (Var_403));
                          }
                          hlds__make_goal__construct_functor_4_p_0(ExceptionVar_379, ExceptionWrapperCtorConsId_383, Var_402, &WrapErrorMsgGoal_384);
                          Var_404 = (MR_Integer) 0;
                          Var_405 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
                          Var_406 = (MR_String) "throw";
                          Var_407 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            Var_408 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_408, 0) = ((MR_Box) (ExceptionVar_379));
                            MR_hl_field(1, Var_408, 1) = ((MR_Box) (Var_407));
                          }
                          Var_409 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                          Var_410 = (MR_Word) ((MR_Unsigned) 0U);
                          Var_411 = (MR_Integer) 6;
                          Var_412 = (MR_Integer) 0;
                          Var_413 = (MR_Word) ((MR_Unsigned) 0U);
                          Var_414 = mercury__term_context__dummy_context_0_f_0();
                          hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_22, Var_404, Var_405, Var_406, Var_407, Var_408, Var_409, Var_410, Var_411, Var_412, Var_413, Var_414, &ThrowGoal_385);
                          Var_415 = parse_tree__set_of_var__init_0_f_0(TypeCtorInfo_179_425);
                          Var_416 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                          Var_417 = (MR_Integer) 6;
                          Var_418 = (MR_Integer) 0;
                          hlds__hlds_goal__goal_info_init_6_p_0(Var_415, Var_416, Var_417, Var_418, Context_424, &ThrowConjGoalInfo_386);
                          Var_422 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            Var_421 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_421, 0) = ((MR_Box) (ThrowGoal_385));
                            MR_hl_field(1, Var_421, 1) = ((MR_Box) (Var_422));
                          }
                          {
                            Var_420 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_420, 0) = ((MR_Box) (WrapErrorMsgGoal_384));
                            MR_hl_field(1, Var_420, 1) = ((MR_Box) (Var_421));
                          }
                          {
                            Var_419 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_419, 0) = ((MR_Box) (ErrorMsgStrGoal_377));
                            MR_hl_field(1, Var_419, 1) = ((MR_Box) (Var_420));
                          }
                          hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_419, ThrowConjGoalInfo_386, &ThrowConjGoal_387);
                          Var_423 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                            *ImprovedGoalExpr_19 = base;
                            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                            MR_hl_field(3, base, 1) = ((MR_Box) (Var_423));
                            MR_hl_field(3, base, 2) = ((MR_Box) (TestConjGoal_372));
                            MR_hl_field(3, base, 3) = ((MR_Box) (UncheckedShiftGoal_374));
                            MR_hl_field(3, base, 4) = ((MR_Box) (ThrowConjGoal_387));
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
  MR_bool succeeded = ((((MR_tag((MR_Word) ConsId_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_4, 0)))) == (MR_Integer) 5)));
  MR_Word IntConst_5;

  if (succeeded)
  {
    IntConst_5 = ((MR_Word) ((MR_hl_field(3, ConsId_4, 1))));
    switch (IntType_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        succeeded = ((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 0);
        break;
      case (MR_Integer) 4:
        succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_5, 0)))) == (MR_Integer) 1)));
        break;
      case (MR_Integer) 6:
        succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_5, 0)))) == (MR_Integer) 3)));
        break;
      case (MR_Integer) 8:
        succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_5, 0)))) == (MR_Integer) 5)));
        break;
      case (MR_Integer) 2:
        succeeded = ((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 2);
        break;
      case (MR_Integer) 1:
        succeeded = ((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 1);
        break;
      case (MR_Integer) 5:
        succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_5, 0)))) == (MR_Integer) 2)));
        break;
      case (MR_Integer) 7:
        succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_5, 0)))) == (MR_Integer) 4)));
        break;
      case (MR_Integer) 9:
        succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_5, 0)))) == (MR_Integer) 6)));
        break;
      case (MR_Integer) 3:
        succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_5, 0)))) == (MR_Integer) 0)));
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
  MR_bool succeeded = ((((MR_tag((MR_Word) ConsId_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_4, 0)))) == (MR_Integer) 5)));
  MR_Word IntConst_5;

  if (succeeded)
  {
    IntConst_5 = ((MR_Word) ((MR_hl_field(3, ConsId_4, 1))));
    switch (IntType_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer Val_6;

          succeeded = ((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 0);
          if (succeeded)
          {
            Val_6 = ((MR_Integer) ((MR_hl_field(0, IntConst_5, 0))));
            succeeded = (Val_6 == (MR_Integer) 0);
          }
        }
        break;
      case (MR_Integer) 4:
        {
          int16_t Val_10;

          succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_5, 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            Val_10 = ((int16_t) (MR_Word) (MR_hl_field(3, IntConst_5, 1)));
            succeeded = (Val_10 == INT16_C(0));
          }
        }
        break;
      case (MR_Integer) 6:
        {
          int32_t Val_12;

          succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_5, 0)))) == (MR_Integer) 3)));
          if (succeeded)
          {
            Val_12 = ((int32_t) (MR_Word) (MR_hl_field(3, IntConst_5, 1)));
            succeeded = (Val_12 == INT32_C(0));
          }
        }
        break;
      case (MR_Integer) 8:
        {
          int64_t Val_14;

          succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_5, 0)))) == (MR_Integer) 5)));
          if (succeeded)
          {
            Val_14 = MR_unbox_int64((MR_hl_field(3, IntConst_5, 1)));
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
            Val_8 = ((int8_t) (MR_Word) (MR_hl_field(2, IntConst_5, 0)));
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
            Val_7 = ((MR_Unsigned) ((MR_hl_field(1, IntConst_5, 0))));
            succeeded = (Val_7 == (MR_Unsigned) 0U);
          }
        }
        break;
      case (MR_Integer) 5:
        {
          uint16_t Val_11;

          succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_5, 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            Val_11 = ((uint16_t) (MR_Word) (MR_hl_field(3, IntConst_5, 1)));
            succeeded = (Val_11 == UINT16_C(0));
          }
        }
        break;
      case (MR_Integer) 7:
        {
          uint32_t Val_13;

          succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_5, 0)))) == (MR_Integer) 4)));
          if (succeeded)
          {
            Val_13 = ((uint32_t) (MR_Word) (MR_hl_field(3, IntConst_5, 1)));
            succeeded = (Val_13 == UINT32_C(0));
          }
        }
        break;
      case (MR_Integer) 9:
        {
          uint64_t Val_15;

          succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_5, 0)))) == (MR_Integer) 6)));
          if (succeeded)
          {
            Val_15 = MR_unbox_uint64((MR_hl_field(3, IntConst_5, 1)));
            succeeded = (Val_15 == UINT64_C(0));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          uint8_t Val_9;

          succeeded = ((((MR_tag((MR_Word) IntConst_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_5, 0)))) == (MR_Integer) 0)));
          if (succeeded)
          {
            Val_9 = ((uint8_t) (MR_Word) (MR_hl_field(3, IntConst_5, 1)));
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
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_2[7]), NumTargetBits_10, &Var_61);
  ExclusiveDot_14 = mercury__string__f_43_43_2_f_0(Var_61, (MR_String) " (exclusive).");
  {
    Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 11U));
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
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (MR_mkword(2, &check_hlds__simplify__simplify_goal_call_scalar_common_2[8])));
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
    MR_hl_field(0, Spec_16, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_2[2])));
    MR_hl_field(0, Spec_16, 3) = ((MR_Box) (Context_12));
    MR_hl_field(0, Spec_16, 4) = ((MR_Box) (Pieces_15));
  }
  check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_16, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_make_var_4_p_0(
  MR_Word Type_5,
  MR_Word * Var_6,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  MR_Word ModuleInfo_8;
  MR_Word VarTable0_9;
  MR_Word VarTable_10;

  check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_11, &ModuleInfo_8);
  check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_11, &VarTable0_9);
  hlds__var_table_hlds__create_fresh_var_5_p_0(ModuleInfo_8, Type_5, Var_6, VarTable0_9, &VarTable_10);
  check_hlds__simplify__simplify_info__simplify_info_set_var_table_3_p_0(VarTable_10, STATE_VARIABLE_Info_0_11, STATE_VARIABLE_Info_12);
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
  MR_Word VarTable0_39;
  MR_Word VarTable_40;

  {
    ConstConsId_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ConstConsId_10, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, ConstConsId_10, 1) = ((MR_Box) (StringConst_6));
  }
  Var_13 = parse_tree__builtin_lib_types__string_type_0_f_0();
  check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_11, &ModuleInfo_38);
  check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_11, &VarTable0_39);
  hlds__var_table_hlds__create_fresh_var_5_p_0(ModuleInfo_38, Var_13, ConstVar_7, VarTable0_39, &VarTable_40);
  check_hlds__simplify__simplify_info__simplify_info_set_var_table_3_p_0(VarTable_40, STATE_VARIABLE_Info_0_11, STATE_VARIABLE_Info_12);
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
  MR_Word VarTable0_40;
  MR_Word VarTable_41;

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
  check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_11, &VarTable0_40);
  hlds__var_table_hlds__create_fresh_var_5_p_0(ModuleInfo_39, Var_14, ConstVar_7, VarTable0_40, &VarTable_41);
  check_hlds__simplify__simplify_info__simplify_info_set_var_table_3_p_0(VarTable_41, STATE_VARIABLE_Info_0_11, STATE_VARIABLE_Info_12);
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
    Var_16 = ((MR_Word) ((MR_hl_field(1, Args_5, 0))));
    Var_15 = ((MR_Word) ((MR_hl_field(1, Args_5, 1))));
    succeeded = (Var_15 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_18 = ((MR_Word) ((MR_hl_field(1, Var_15, 0))));
      Var_17 = ((MR_Word) ((MR_hl_field(1, Var_15, 1))));
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
    *GoalExpr_15 = ((MR_Word) ((MR_hl_field(0, ReturnEqGoal_40, 0))));
    *GoalInfo_16 = ((MR_Word) ((MR_hl_field(0, ReturnEqGoal_40, 1))));
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
  succeeded = hlds__inst_test__inst_is_unique_2_p_0(ModuleInfo_28, XInst_26);
  if (succeeded)
  {
    succeeded = hlds__inst_test__inst_is_unique_2_p_0(ModuleInfo_28, YInst_27);
    if (succeeded)
      ModeNo_29 = (MR_Integer) 1;
    else
      ModeNo_29 = (MR_Integer) 2;
  }
  else
  {
    succeeded = hlds__inst_test__inst_is_unique_2_p_0(ModuleInfo_28, YInst_27);
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
  CmpExpr_34 = ((MR_Word) ((MR_hl_field(0, CmpGoal0_33, 0))));
  CmpInfo0_35 = ((MR_Word) ((MR_hl_field(0, CmpGoal0_33, 1))));
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
                  MR_hl_field(3, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                  MR_hl_field(3, Var_75, 1) = ((MR_Box) (ModuleName_6));
                }
                {
                  Var_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_80, 0) = ((MR_Box) ((MR_Unsigned) 9U));
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
                  MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                  MR_hl_field(3, Var_46, 1) = ((MR_Box) (ZeroStr_113));
                }
                {
                  Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 9U));
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
                  MR_hl_field(3, Var_95, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                  MR_hl_field(3, Var_95, 1) = ((MR_Box) (ZeroStr_115));
                }
                {
                  Var_106 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_106, 0) = ((MR_Box) ((MR_Unsigned) 9U));
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
                  MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                  MR_hl_field(3, Var_23, 1) = ((MR_Box) (ModuleName_6));
                }
                {
                  Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 9U));
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
    Var_10 = ((MR_Word) ((MR_hl_field(2, Arg_5, 2))));
    succeeded = (Var_10 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_11 = ((MR_Word) ((MR_hl_field(1, Var_10, 0))));
      Var_14 = ((MR_Word) ((MR_hl_field(1, Var_10, 1))));
      succeeded = (Var_14 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_12 = ((MR_Word) ((MR_hl_field(0, Var_11, 0))));
        Var_13 = ((MR_Word) ((MR_hl_field(0, Var_11, 1))));
        succeeded = (Var_13 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((((MR_tag((MR_Word) Var_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_12, 0)))) == (MR_Integer) 5)));
          if (succeeded)
          {
            IntConst_9 = ((MR_Word) ((MR_hl_field(3, Var_12, 1))));
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
                          Var_15 = ((MR_Unsigned) ((MR_hl_field(1, IntConst_9, 0))));
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

                        succeeded = ((((MR_tag((MR_Word) IntConst_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_9, 0)))) == (MR_Integer) 2)));
                        if (succeeded)
                        {
                          Var_17 = ((uint16_t) (MR_Word) (MR_hl_field(3, IntConst_9, 1)));
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

                        succeeded = ((((MR_tag((MR_Word) IntConst_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_9, 0)))) == (MR_Integer) 4)));
                        if (succeeded)
                        {
                          Var_18 = ((uint32_t) (MR_Word) (MR_hl_field(3, IntConst_9, 1)));
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

                        succeeded = ((((MR_tag((MR_Word) IntConst_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_9, 0)))) == (MR_Integer) 6)));
                        if (succeeded)
                        {
                          Var_19 = MR_unbox_uint64((MR_hl_field(3, IntConst_9, 1)));
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

                        succeeded = ((((MR_tag((MR_Word) IntConst_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_9, 0)))) == (MR_Integer) 0)));
                        if (succeeded)
                        {
                          Var_16 = ((uint8_t) (MR_Word) (MR_hl_field(3, IntConst_9, 1)));
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
  MR_Word STATE_VARIABLE_Info_0_48,
  MR_Word * STATE_VARIABLE_Info_49)
{
  MR_bool succeeded;
  MR_Word AllInputsEqv_28;
  MR_Word AllInputsEqvOrSvar_29;
  MR_Word HeadBaseNames_30;
  MR_Word ArgBaseNames_31;
  MR_Word TypeCtorInfo_187_187;
  MR_Word CurPredProcId_22;
  MR_Word ModuleInfo_23;
  MR_Word VarTable_24;
  MR_Word VarNameRemap_25;
  MR_Word HeadVars_26;
  MR_Word ArgModes_27;
  MR_Word EvalMethod_32;
  MR_Word Purity_34;
  MR_Unsigned Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_192;
  MR_Integer Var_193;
  MR_Word Var_55;

  succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_dodgy_simple_code_1_p_0(STATE_VARIABLE_Info_0_48);
  if (!(succeeded))
    succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_suspicious_recursion_1_p_0(STATE_VARIABLE_Info_0_48);
  if (succeeded)
  {
    check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_0_48, &CurPredProcId_22);
    Var_192 = ((MR_Word) ((MR_hl_field(0, CurPredProcId_22, 0))));
    Var_193 = ((MR_Integer) ((MR_hl_field(0, CurPredProcId_22, 1))));
    succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_12, Var_192);
    if (succeeded)
    {
      succeeded = (ProcId_13 == Var_193);
      if (succeeded)
      {
        succeeded = (IsBuiltin_15 != (MR_Integer) 0);
        if (succeeded)
        {
          Var_50 = ((MR_Unsigned) ((MR_hl_field(0, NestedContext_19, 2))));
          succeeded = (Var_50 == (MR_Unsigned) 0U);
          if (succeeded)
          {
            check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_48, &ModuleInfo_23);
            check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_48, &VarTable_24);
            hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(PredInfo_16, &VarNameRemap_25);
            hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_17, &HeadVars_26);
            hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_17, &ArgModes_27);
            Var_51 = (MR_Integer) 1;
            Var_52 = (MR_Integer) 1;
            TypeCtorInfo_187_187 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
            Var_53 = mercury__set__init_0_f_0(TypeCtorInfo_187_187);
            Var_54 = mercury__set__init_0_f_0(TypeCtorInfo_187_187);
            succeeded = check_hlds__simplify__simplify_goal_call__input_args_are_suspicious_15_p_0(ModuleInfo_23, Common_20, VarTable_24, VarNameRemap_25, HeadVars_26, ArgVars_14, ArgModes_27, Var_51, &AllInputsEqv_28, Var_52, &AllInputsEqvOrSvar_29, Var_53, &HeadBaseNames_30, Var_54, &ArgBaseNames_31);
            if (succeeded)
            {
              hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ProcInfo_17, &EvalMethod_32);
              succeeded = (EvalMethod_32 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_55 = ((MR_Word) ((MR_hl_field(1, EvalMethod_32, 0))));
                succeeded = ((MR_tag((MR_Word) Var_55)) == (MR_Integer) 3);
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
              MR_Word Var_60;
              MR_Word Var_63;
              MR_Word Var_64;
              MR_Word Var_86;
              MR_Word Var_87;
              MR_Word Var_88;
              MR_Word Var_89;

              {
                Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_60, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[26])));
                MR_hl_field(1, Var_60, 1) = ((MR_Box) (NamePieces_35));
              }
              Var_64 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[28])));
              Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_64, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[7])));
              MainPieces_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_60, Var_63);
              Var_87 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_18);
              {
                Var_89 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_89, 0) = ((MR_Box) (MainPieces_36));
              }
              {
                Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_88, 0) = ((MR_Box) (Var_89));
                MR_hl_field(1, Var_88, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[92])));
              }
              {
                Var_86 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_86, 0) = ((MR_Box) (Var_87));
                MR_hl_field(2, Var_86, 1) = ((MR_Box) (Var_88));
              }
              {
                Msgs_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Msgs_38, 0) = ((MR_Box) (Var_86));
                MR_hl_field(1, Msgs_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_39 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Spec_39, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.maybe_generate_warning_for_infinite_loop_call\'/11"));
                MR_hl_field(2, Spec_39, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_2[4])));
                MR_hl_field(2, Spec_39, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_2[2])));
                MR_hl_field(2, Spec_39, 3) = ((MR_Box) (Msgs_38));
              }
              check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_39, STATE_VARIABLE_Info_0_48, STATE_VARIABLE_Info_49);
            }
            break;
          case (MR_Integer) 0:
            {
              succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_suspicious_recursion_1_p_0(STATE_VARIABLE_Info_0_48);
              if (succeeded)
              {
                MR_Word Pieces_40;
                MR_Word Var_101;
                MR_Word Var_104;
                MR_Word Var_105;
                MR_Word Var_122;
                MR_Word Var_123;
                MR_Word Var_124;
                MR_Word Var_125;
                MR_Word Var_126;
                MR_Word Var_127;
                MR_Word Msgs_176;
                MR_Word Spec_177;

                {
                  Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_101, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[26])));
                  MR_hl_field(1, Var_101, 1) = ((MR_Box) (NamePieces_35));
                }
                Var_105 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[38])));
                Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_105, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[44])));
                Pieces_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_101, Var_104);
                Var_123 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_18);
                {
                  Var_125 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_125, 0) = ((MR_Box) (Pieces_40));
                }
                Var_127 = check_hlds__simplify__simplify_goal_call__shut_up_suspicious_recursion_msg_0_f_0();
                {
                  Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_126, 0) = ((MR_Box) (Var_127));
                  MR_hl_field(1, Var_126, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_124, 0) = ((MR_Box) (Var_125));
                  MR_hl_field(1, Var_124, 1) = ((MR_Box) (Var_126));
                }
                {
                  Var_122 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Var_122, 0) = ((MR_Box) (Var_123));
                  MR_hl_field(2, Var_122, 1) = ((MR_Box) (Var_124));
                }
                {
                  Msgs_176 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Msgs_176, 0) = ((MR_Box) (Var_122));
                  MR_hl_field(1, Msgs_176, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_177 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Spec_177, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.maybe_generate_warning_for_infinite_loop_call\'/11"));
                  MR_hl_field(2, Spec_177, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_2[4])));
                  MR_hl_field(2, Spec_177, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_2[2])));
                  MR_hl_field(2, Spec_177, 3) = ((MR_Box) (Msgs_176));
                }
                check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_177, STATE_VARIABLE_Info_0_48, STATE_VARIABLE_Info_49);
              }
              else
                *STATE_VARIABLE_Info_49 = STATE_VARIABLE_Info_0_48;
            }
            break;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word HeadArgBaseNames_41;
          MR_Word SuspiciousArgNames_42;
          MR_Word Var_136;

          mercury__set__intersect_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HeadBaseNames_30, ArgBaseNames_31, &HeadArgBaseNames_41);
          SuspiciousArgNames_42 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HeadArgBaseNames_41);
          succeeded = (SuspiciousArgNames_42 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_136 = ((MR_Word) ((MR_hl_field(1, SuspiciousArgNames_42, 1))));
            succeeded = (Var_136 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_suspicious_recursion_1_p_0(STATE_VARIABLE_Info_0_48);
          }
          if (succeeded)
          {
            MR_Word Msg_46;
            MR_Word Var_137;
            MR_Word Var_140;
            MR_Word Var_141;
            MR_Word Var_146;
            MR_Word Var_151;
            MR_Word Var_152;
            MR_Word Var_163;
            MR_Word Var_164;
            MR_Word Var_165;
            MR_Word Var_166;
            MR_Word Var_167;
            MR_Word Var_173;
            MR_Word Spec_182;
            MR_Word Pieces_183;

            {
              Var_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_137, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[26])));
              MR_hl_field(1, Var_137, 1) = ((MR_Box) (NamePieces_35));
            }
            Var_141 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[38])));
            Var_152 = parse_tree__error_spec__fixed_list_to_pieces_2_f_0((MR_String) "and", SuspiciousArgNames_42);
            Var_151 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_152, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[50])));
            Var_146 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[46])), Var_151);
            Var_140 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_141, Var_146);
            Pieces_183 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_137, Var_140);
            Var_163 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_18);
            {
              Var_165 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_165, 0) = ((MR_Box) (Pieces_183));
            }
            Var_167 = check_hlds__simplify__simplify_goal_call__shut_up_suspicious_recursion_msg_0_f_0();
            {
              Var_166 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_166, 0) = ((MR_Box) (Var_167));
              MR_hl_field(1, Var_166, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_164 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_164, 0) = ((MR_Box) (Var_165));
              MR_hl_field(1, Var_164, 1) = ((MR_Box) (Var_166));
            }
            {
              Msg_46 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Msg_46, 0) = ((MR_Box) (Var_163));
              MR_hl_field(2, Msg_46, 1) = ((MR_Box) (Var_164));
            }
            {
              Var_173 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_173, 0) = ((MR_Box) (Msg_46));
              MR_hl_field(1, Var_173, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_182 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Spec_182, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.maybe_generate_warning_for_infinite_loop_call\'/11"));
              MR_hl_field(2, Spec_182, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_2[5])));
              MR_hl_field(2, Spec_182, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_2[2])));
              MR_hl_field(2, Spec_182, 3) = ((MR_Box) (Var_173));
            }
            check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_182, STATE_VARIABLE_Info_0_48, STATE_VARIABLE_Info_49);
          }
          else
            *STATE_VARIABLE_Info_49 = STATE_VARIABLE_Info_0_48;
        }
        break;
    }
  }
  else
    *STATE_VARIABLE_Info_49 = STATE_VARIABLE_Info_0_48;
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
      MR_Word HeadVar_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word HeadVars_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word ArgVar_39;
      MR_Word ArgVars_40;
      MR_Word Mode_41;
      MR_Word Modes_42;
      MR_Word InitialInst_47;
      MR_Word STATE_VARIABLE_AllInputsEqv_1_62;
      MR_Word STATE_VARIABLE_AllInputsEqvOrSvar_1_64;
      MR_Word STATE_VARIABLE_HeadBaseNames_1_66;
      MR_Word STATE_VARIABLE_ArgBaseNames_1_67;
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
        ArgVar_39 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
        ArgVars_40 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
        succeeded = (HeadVar__7_7 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Mode_41 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, 0))));
          Modes_42 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, 1))));
          InitialInst_47 = hlds__mode_util__mode_get_initial_inst_2_f_0(ModuleInfo_1, Mode_41);
          succeeded = hlds__inst_test__inst_is_bound_2_p_0(ModuleInfo_1, InitialInst_47);
          if (succeeded)
          {
            MR_Word ArgVarEntry_48;
            MR_Word ArgVarType_49;

            parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_3, ArgVar_39, &ArgVarEntry_48);
            ArgVarType_49 = ((MR_Word) ((MR_hl_field(0, ArgVarEntry_48, 1))));
            succeeded = hlds__inst_test__inst_is_ground_3_p_0(ModuleInfo_1, ArgVarType_49, InitialInst_47);
            if (succeeded)
            {
              succeeded = check_hlds__simplify__common__common_vars_are_equivalent_3_p_0(CommonInfo_2, ArgVar_39, HeadVar_37);
              if (succeeded)
              {
                STATE_VARIABLE_ArgBaseNames_1_67 = STATE_VARIABLE_ArgBaseNames_0_14;
                STATE_VARIABLE_HeadBaseNames_1_66 = STATE_VARIABLE_HeadBaseNames_0_12;
                STATE_VARIABLE_AllInputsEqvOrSvar_1_64 = STATE_VARIABLE_AllInputsEqvOrSvar_0_10;
                STATE_VARIABLE_AllInputsEqv_1_62 = STATE_VARIABLE_AllInputsEqv_0_8;
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

                succeeded = hlds__inst_test__inst_is_not_partly_unique_2_p_0(ModuleInfo_1, InitialInst_47);
                if (succeeded)
                {
                  STATE_VARIABLE_AllInputsEqv_1_62 = (MR_Integer) 0;
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
                    HeadName_50 = ((MR_String) ((MR_hl_field(0, Entry_74, 0))));
                    succeeded = (strcmp(HeadName_50, (MR_String) "") == 0);
                    succeeded = !(succeeded);
                  }
                  if (succeeded)
                  {
                    ArgName_51 = ((MR_String) ((MR_hl_field(0, ArgVarEntry_48, 0))));
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
                          STATE_VARIABLE_AllInputsEqvOrSvar_1_64 = STATE_VARIABLE_AllInputsEqvOrSvar_0_10;
                        else
                          STATE_VARIABLE_AllInputsEqvOrSvar_1_64 = (MR_Integer) 0;
                        STATE_VARIABLE_ArgBaseNames_1_67 = STATE_VARIABLE_ArgBaseNames_0_14;
                        STATE_VARIABLE_HeadBaseNames_1_66 = STATE_VARIABLE_HeadBaseNames_0_12;
                      }
                      else
                      {
                        STATE_VARIABLE_AllInputsEqvOrSvar_1_64 = (MR_Integer) 0;
                        mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (HeadBaseName_52)), STATE_VARIABLE_HeadBaseNames_0_12, &STATE_VARIABLE_HeadBaseNames_1_66);
                        mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ArgBaseName_53)), STATE_VARIABLE_ArgBaseNames_0_14, &STATE_VARIABLE_ArgBaseNames_1_67);
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
            STATE_VARIABLE_ArgBaseNames_1_67 = STATE_VARIABLE_ArgBaseNames_0_14;
            STATE_VARIABLE_HeadBaseNames_1_66 = STATE_VARIABLE_HeadBaseNames_0_12;
            STATE_VARIABLE_AllInputsEqvOrSvar_1_64 = STATE_VARIABLE_AllInputsEqvOrSvar_0_10;
            STATE_VARIABLE_AllInputsEqv_1_62 = STATE_VARIABLE_AllInputsEqv_0_8;
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__5_5 = HeadVars_38;
            next_value_of_HeadVar__6_6 = ArgVars_40;
            next_value_of_HeadVar__7_7 = Modes_42;
            next_value_of_STATE_VARIABLE_AllInputsEqv_0_8 = STATE_VARIABLE_AllInputsEqv_1_62;
            next_value_of_STATE_VARIABLE_AllInputsEqvOrSvar_0_10 = STATE_VARIABLE_AllInputsEqvOrSvar_1_64;
            next_value_of_STATE_VARIABLE_HeadBaseNames_0_12 = STATE_VARIABLE_HeadBaseNames_1_66;
            next_value_of_STATE_VARIABLE_ArgBaseNames_0_14 = STATE_VARIABLE_ArgBaseNames_1_67;
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
  return (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[90]));
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
    ThisPredId_20 = ((MR_Word) ((MR_hl_field(0, ThisPredProcId_19, 0))));
    succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_8, ThisPredId_20);
    succeeded = !(succeeded);
    if (succeeded)
    {
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_35, &ModuleInfo_18);
      hlds__hlds_pred__pred_info_get_obsolete_in_favour_of_2_p_0(PredInfo_10, &MaybeObsolete_14);
      succeeded = (MaybeObsolete_14 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        InFavourOfPrime_15 = ((MR_Word) ((MR_hl_field(1, MaybeObsolete_14, 0))));
        InFavourOf_16 = InFavourOfPrime_15;
        PredOrProcDotPieces_17 = hlds__hlds_error_util__describe_one_pred_name_5_f_0(ModuleInfo_18, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])), (MR_Integer) 0, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[15])), PredId_8);
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word TypeCtorInfo_116_116;
        MR_Word Var_44;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_57;
        MR_Word MaybeObsolete_112;

        hlds__hlds_pred__proc_info_get_obsolete_in_favour_of_2_p_0(ProcInfo_11, &MaybeObsolete_112);
        succeeded = (MaybeObsolete_112 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          InFavourOf_16 = ((MR_Word) ((MR_hl_field(1, MaybeObsolete_112, 0))));
          TypeCtorInfo_116_116 = (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0);
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
          Var_48 = hlds__hlds_error_util__describe_one_proc_name_maybe_argmodes_6_f_0(ModuleInfo_18, Var_49, Var_50, Var_52, Var_53, Var_57);
          PredOrProcDotPieces_17 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_116_116, Var_44, Var_48);
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

    GoalContext_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_12);
    Var_64 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[21])));
    Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredOrProcDotPieces_17, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[7])));
    Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_64, Var_69);
    MainPieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[19])), Var_63);
    if ((InFavourOf_16 == (MR_Word) ((MR_Unsigned) 0U)))
      Pieces_27 = MainPieces_26;
    else
    {
      MR_Word Var_121 = ((MR_Word) ((MR_hl_field(1, InFavourOf_16, 1))));
      MR_Word Var_122 = ((MR_Word) ((MR_hl_field(1, InFavourOf_16, 0))));

      if ((Var_121 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word InFavourOfPieces_29;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_80;
        MR_Word Var_85;

        {
          Var_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 14U));
          MR_hl_field(3, Var_75, 1) = ((MR_Box) (Var_122));
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
        MR_Word InFavourOfPieces_115;

        InFavourOfSNAs_33 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_6[0]), InFavourOf_16);
        InFavourOfPieces_115 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 1, (MR_String) "and", (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[15])), InFavourOfSNAs_33);
        Var_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InFavourOfPieces_115, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[7])));
        Var_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[25])), Var_102);
        Pieces_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MainPieces_26, Var_97);
      }
    }
    {
      Spec_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_34, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.maybe_generate_warning_for_call_to_obsolete_predicate\'/7"));
      MR_hl_field(0, Spec_34, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_2[3])));
      MR_hl_field(0, Spec_34, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_2[2])));
      MR_hl_field(0, Spec_34, 3) = ((MR_Box) (GoalContext_25));
      MR_hl_field(0, Spec_34, 4) = ((MR_Box) (Pieces_27));
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

  succeeded = check_hlds__simplify__simplify_goal_call__one_extra_stream_arg_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__simplify__simplify_goal_call__IntroducedFrom__pred__maybe_generate_warning_for_implicit_stream_predicate__356__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
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
  succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_9, (MR_Integer) 27);
  if (succeeded)
    *MaybeSpec_10 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word TypeCtorInfo_117_117;
    MR_Word TypeCtorInfo_119_119;
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
      TypeCtorInfo_117_117 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
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
      mercury__list__filter_3_p_0(TypeCtorInfo_117_117, Var_43, ArgTypes_14, &IOStateArgTypes_17);
      succeeded = (IOStateArgTypes_17 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_44 = ((MR_Word) ((MR_hl_field(1, IOStateArgTypes_17, 1))));
        succeeded = (Var_44 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_45 = ((MR_Word) ((MR_hl_field(1, Var_44, 1))));
          succeeded = (Var_45 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_8, &PredFormArity_20);
            NumExtraArgs_21 = parse_tree__prog_data__num_extra_args_2_f_0(TypeCtorInfo_117_117, PredFormArity_20, ArgTypes_14);
            mercury__list__det_split_list_4_p_0(TypeCtorInfo_117_117, NumExtraArgs_21, ArgTypes_14, &ExtraArgTypes_22, &UserArgTypes_23);
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
            TypeCtorInfo_119_119 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0);
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
            mercury__list__filter_3_p_0(TypeCtorInfo_119_119, Var_49, PredIds_28, &OneExtraStreamArgPredIds_29);
            succeeded = (OneExtraStreamArgPredIds_29 != (MR_Word) ((MR_Unsigned) 0U));
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

      GoalContext_32 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_9);
      PredPieces_33 = hlds__hlds_error_util__describe_one_pred_name_5_f_0(ModuleInfo_6, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])), (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), PredId_7);
      Var_65 = parse_tree__error_spec__color_as_hint_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[6])));
      Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_65, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[7])));
      Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[4])), Var_64);
      Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredPieces_33, Var_59);
      Pieces_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[2])), Var_58);
      {
        Spec_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_35, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.maybe_generate_warning_for_implicit_stream_predicate\'/5"));
        MR_hl_field(0, Spec_35, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_2[1])));
        MR_hl_field(0, Spec_35, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_2[2])));
        MR_hl_field(0, Spec_35, 3) = ((MR_Box) (GoalContext_32));
        MR_hl_field(0, Spec_35, 4) = ((MR_Box) (Pieces_34));
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
      MR_String Var_122;
      MR_Integer slot_0;
      MR_String str_1;

      mdbcomp__builtin_modules__maybe_remove_stdlib_wrapper_2_p_0(ModuleName_11, &UnwrappedModuleName_36);
      succeeded = (PredOrFunc_13 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) UnwrappedModuleName_36)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_122 = ((MR_String) ((MR_hl_field(0, UnwrappedModuleName_36, 0))));
          if ((strcmp(Var_122, (MR_String) "io") == 0))
            succeeded = MR_TRUE;
          else
          if ((strcmp(Var_122, (MR_String) "prolog") == 0))
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
        MR_Word Var_88;
        MR_Word Var_89;
        MR_Word Var_90;
        MR_Word Var_95;
        MR_Word Var_98;
        MR_Word Var_99;
        MR_Word GoalContext_111;
        MR_Word PredPieces_112;
        MR_Word Pieces_113;
        MR_Word Spec_114;

        GoalContext_111 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_9);
        PredPieces_112 = hlds__hlds_error_util__describe_one_pred_name_5_f_0(ModuleInfo_6, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])), (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), PredId_7);
        Var_90 = parse_tree__error_spec__color_as_hint_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[9])));
        {
          Var_99 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_99, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_99, 1) = ((MR_Box) (Dir_37));
        }
        {
          Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_98, 0) = ((MR_Box) (Var_99));
          MR_hl_field(1, Var_98, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[12])));
        }
        {
          Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_95, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[10])));
          MR_hl_field(1, Var_95, 1) = ((MR_Box) (Var_98));
        }
        Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_90, Var_95);
        Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredPieces_112, Var_89);
        Pieces_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[2])), Var_88);
        {
          Spec_114 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_114, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.maybe_generate_warning_for_implicit_stream_predicate\'/5"));
          MR_hl_field(0, Spec_114, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_2[1])));
          MR_hl_field(0, Spec_114, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_2[2])));
          MR_hl_field(0, Spec_114, 3) = ((MR_Box) (GoalContext_111));
          MR_hl_field(0, Spec_114, 4) = ((MR_Box) (Pieces_113));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeSpec_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_114));
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
