/*
** Automatically generated from `simplify_goal_call.m'
** by the Mercury compiler,
** version rotd-2022-12-04
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
#include "parse_tree.error_spec.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
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
check_hlds__simplify__simplify_goal_call__IntroducedFrom__pred__maybe_generate_warning_for_implicit_stream_predicate__355__1_2_p_0(
  MR_Word IOStateType_16,
  MR_Word HeadVar__2_111);

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

static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_goal_plain_call_10_p_0_1(
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
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_95_91_49_93_95_48_7_p_0(
  MR_Word Args_9,
  MR_Word Context_10,
  MR_Word * GoalExpr_11,
  MR_Word * GoalInfo_12,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36);

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
  MR_Word STATE_VARIABLE_Info_0_52,
  MR_Word * STATE_VARIABLE_Info_53);

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_look_for_duplicate_call_10_p_0(
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word Args_13,
  MR_Word GoalExpr0_14,
  MR_Word GoalInfo0_15,
  MR_Word * MaybeAssignsGoalExpr_16,
  MR_Word Common0_17,
  MR_Word * Common_18,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

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


struct check_hlds__simplify__simplify_goal_call__vector_common_type_6_0_s {
  const MR_String check_hlds__simplify__simplify_goal_call__vector_common_type_6_0__vct_6_f_0;
  const MR_String check_hlds__simplify__simplify_goal_call__vector_common_type_6_0__vct_6_f_1;
};

static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_6_0_s check_hlds__simplify__simplify_goal_call_vector_common_6[96];

struct check_hlds__simplify__simplify_goal_call__vector_common_type_7_0_s {
  const MR_String check_hlds__simplify__simplify_goal_call__vector_common_type_7_0__vct_7_f_0;
  const MR_Integer check_hlds__simplify__simplify_goal_call__vector_common_type_7_0__vct_7_f_1;
};

static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_7_0_s check_hlds__simplify__simplify_goal_call_vector_common_7[55];

struct check_hlds__simplify__simplify_goal_call__vector_common_type_8_0_s {
  const MR_String check_hlds__simplify__simplify_goal_call__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_8_0_s check_hlds__simplify__simplify_goal_call_vector_common_8[64];



static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_1[85][2] = {
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
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "explicitly specifying a stream."))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[3])))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "could have an additional argument"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[5])))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "could be made redundant by explicitly passing"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "to later I/O operations."))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[3])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "stream it specifies"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[11])))
  },
  /* row  14 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning: call to obsolete"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[15]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[3])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The suggested replacement is"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The possible suggested replacements are"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning: recursive call to"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "will lead to infinite recursion."))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[3])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "leading to infinite recursion."))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[3])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "with exactly the same input arguments,"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[26])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the procedure will call itself"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[28])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "If this recursive call is executed,"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[30])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "use state variable notation."))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[3])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "between the clause head and the call"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[34])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "all input argument positions that differ"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[36])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is suspicious, because"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[38])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "whose names start with"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[41]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is suspicious, because variables"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[42])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the call than in the clause head."))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[3])))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "occupy different argument positions"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[46])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "scope."))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[3])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "disable_warning [suspicious_recursion] (...)"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[50])))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "wrapping the recursive call inside a"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[52])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "This warning can be disabled by"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[54])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning: call to"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[57]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "cannot succeed."))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "There are no"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "values <"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[17]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "cannot fail."))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "=<"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "all"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "values."))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[66]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "> no"))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "All"))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "values are"))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) ">="))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_2[2]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  73 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: call to"))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "with a zero divisor."))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[3])))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "with a shift amount that is"))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "outside of the range"))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "to"))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "with a shift amount that is equal to"))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or greater than"))
  },
  /* row  82 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[56])))
  },
  /* row  83 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[32])))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(2, &check_hlds__simplify__simplify_goal_call_scalar_common_1[83]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_2[5][1] = {
  /* row   0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "prolog"))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) "simplify_inline_builtin_inequality"))
  },
  /* row   3 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "0 (inclusive)"))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_3[6][3] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_4[1])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_call__simplify_goal_plain_call_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_4[2])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_4[3])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_4[3])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_4[2])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_53_93_95_48_10_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_4[4][5] = {
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

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_call_scalar_common_5[1][8] = {
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


static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_6_0_s check_hlds__simplify__simplify_goal_call_vector_common_6[96] = {
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

static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_7_0_s check_hlds__simplify__simplify_goal_call_vector_common_7[55] = {
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
    (MR_String) "uint",
    (MR_Integer) 0
  },
  /* row   6 */
  {
    (MR_String) "uint16",
    (MR_Integer) 1
  },
  /* row   7 */
  {
    (MR_String) "uint32",
    (MR_Integer) 2
  },
  /* row   8 */
  {
    (MR_String) "uint64",
    (MR_Integer) 3
  },
  /* row   9 */
  {
    (MR_String) "uint8",
    (MR_Integer) 4
  },
  /* row  10 */
  {
    (MR_String) "<",
    (MR_Integer) 0
  },
  /* row  11 */
  {
    (MR_String) "=<",
    (MR_Integer) 1
  },
  /* row  12 */
  {
    (MR_String) ">",
    (MR_Integer) 2
  },
  /* row  13 */
  {
    (MR_String) ">=",
    (MR_Integer) 3
  },
  /* row  14 */
  {
    (MR_String) "<",
    (MR_Integer) 0
  },
  /* row  15 */
  {
    (MR_String) "=<",
    (MR_Integer) 1
  },
  /* row  16 */
  {
    (MR_String) ">",
    (MR_Integer) 0
  },
  /* row  17 */
  {
    (MR_String) ">=",
    (MR_Integer) 1
  },
  /* row  18 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  19 */
  {
    (MR_String) "times_bits_per_int",
    (MR_Integer) -1
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
    NULL,
    (MR_Integer) -2
  },
  /* row  24 */
  {
    NULL,
    (MR_Integer) -2
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
    NULL,
    (MR_Integer) -2
  },
  /* row  28 */
  {
    (MR_String) "<<",
    (MR_Integer) -1
  },
  /* row  29 */
  {
    (MR_String) "rem",
    (MR_Integer) -1
  },
  /* row  30 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  31 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  32 */
  {
    (MR_String) "/",
    (MR_Integer) -1
  },
  /* row  33 */
  {
    (MR_String) "=<",
    (MR_Integer) -1
  },
  /* row  34 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  35 */
  {
    (MR_String) ">=",
    (MR_Integer) -1
  },
  /* row  36 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  37 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  38 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  39 */
  {
    (MR_String) "rem_bits_per_int",
    (MR_Integer) -1
  },
  /* row  40 */
  {
    (MR_String) ">>",
    (MR_Integer) -1
  },
  /* row  41 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  42 */
  {
    (MR_String) "//",
    (MR_Integer) -1
  },
  /* row  43 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  44 */
  {
    (MR_String) ">>u",
    (MR_Integer) -1
  },
  /* row  45 */
  {
    (MR_String) "quot_bits_per_int",
    (MR_Integer) -1
  },
  /* row  46 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  47 */
  {
    (MR_String) "<",
    (MR_Integer) 1
  },
  /* row  48 */
  {
    (MR_String) "<<u",
    (MR_Integer) -1
  },
  /* row  49 */
  {
    (MR_String) ">",
    (MR_Integer) -1
  },
  /* row  50 */
  {
    (MR_String) "\100<",
    (MR_Integer) 0
  },
  /* row  51 */
  {
    (MR_String) "\100=<",
    (MR_Integer) 1
  },
  /* row  52 */
  {
    (MR_String) "\100>",
    (MR_Integer) 2
  },
  /* row  53 */
  {
    (MR_String) "\100>=",
    (MR_Integer) 3
  },
  /* row  54 */
  {
    (MR_String) "compare",
    (MR_Integer) 4
  },
};

static /* final */ const struct check_hlds__simplify__simplify_goal_call__vector_common_type_8_0_s check_hlds__simplify__simplify_goal_call_vector_common_8[64] = {
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
  MR_Word HeadVar__2_111)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(IOStateType_16, HeadVar__2_111);
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
    TypeInfo_25_25 = (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[14]);
    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ExtraArgTypes_13)), ((MR_Box) (BaseExtraArgTypes_8)));
    if (succeeded)
    {
      succeeded = (UserArgTypes_14 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        HeadUserArgType_15 = ((MR_Word) ((MR_hl_field(1, UserArgTypes_14, (MR_Integer) 0))));
        TailUserArgTypes_16 = ((MR_Word) ((MR_hl_field(1, UserArgTypes_14, (MR_Integer) 1))));
        TypeInfo_26_26 = (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[14]);
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
        Var_47 = (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_3[2]);
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
          mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_3[3]), Args0_21, &Args_34);
          mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_3[4]), ExtraArgs0_22, &ExtraArgs_35);
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

      ArgVars_56 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[0]), (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_3[5]), Args_34);
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
              AssignsGoalExpr_30 = ((MR_Word) ((MR_hl_field(1, MaybeAssignsGoalExpr_29, (MR_Integer) 0))));
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

static MR_Box MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_goal_plain_call_10_p_0_1(
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
  MR_Word InFavourOf_59;
  MR_Word PredOrProcPieces_60;
  MR_Word ModuleInfo_61;
  MR_Word ThisPredProcId_62;
  MR_Word ThisPredId_63;
  MR_Word ThisPredInfo_65;
  MR_Word ThisMaybeObsolete_66;
  MR_Word InFavourOfPrime_58;
  MR_Word MaybeObsolete_57;
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
  succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_obsolete_1_p_0(STATE_VARIABLE_Info_45_45);
  if (succeeded)
  {
    check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_45_45, &ThisPredProcId_62);
    ThisPredId_63 = ((MR_Word) ((MR_hl_field(0, ThisPredProcId_62, (MR_Integer) 0))));
    succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_19, ThisPredId_63);
    succeeded = !(succeeded);
    if (succeeded)
    {
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_45_45, &ModuleInfo_61);
      hlds__hlds_pred__pred_info_get_obsolete_in_favour_of_2_p_0(PredInfo_26, &MaybeObsolete_57);
      succeeded = (MaybeObsolete_57 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        InFavourOfPrime_58 = ((MR_Word) ((MR_hl_field(1, MaybeObsolete_57, (MR_Integer) 0))));
        InFavourOf_59 = InFavourOfPrime_58;
        PredOrProcPieces_60 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_61, (MR_Integer) 0, PredId_19);
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Var_73;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word MaybeObsolete_99;

        hlds__hlds_pred__proc_info_get_obsolete_in_favour_of_2_p_0(ProcInfo_27, &MaybeObsolete_99);
        succeeded = (MaybeObsolete_99 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          InFavourOf_59 = ((MR_Word) ((MR_hl_field(1, MaybeObsolete_99, (MR_Integer) 0))));
          Var_73 = (MR_Integer) 0;
          Var_74 = (MR_Integer) 0;
          {
            Var_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_75, 0) = ((MR_Box) (PredId_19));
            MR_hl_field(0, Var_75, 1) = ((MR_Box) (ProcId_20));
          }
          PredOrProcPieces_60 = hlds__hlds_error_util__describe_one_proc_name_mode_4_f_0(ModuleInfo_61, Var_73, Var_74, Var_75);
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
      {
        hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_61, ThisPredId_63, &ThisPredInfo_65);
        hlds__hlds_pred__pred_info_get_obsolete_in_favour_of_2_p_0(ThisPredInfo_65, &ThisMaybeObsolete_66);
        succeeded = (ThisMaybeObsolete_66 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
  }
  if (succeeded)
  {
    MR_Word GoalContext_67;
    MR_Word MainPieces_68;
    MR_Word Pieces_69;
    MR_Word Spec_71;
    MR_Word Var_77;
    MR_Word Var_96;
    MR_Word Var_97;

    GoalContext_67 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_13);
    Var_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredOrProcPieces_60, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[18])));
    MainPieces_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[16])), Var_77);
    if ((InFavourOf_59 == (MR_Word) ((MR_Unsigned) 0U)))
      Pieces_69 = MainPieces_68;
    else
    {
      MR_Word Var_102 = ((MR_Word) ((MR_hl_field(1, InFavourOf_59, (MR_Integer) 1))));
      MR_Word Var_103 = ((MR_Word) ((MR_hl_field(1, InFavourOf_59, (MR_Integer) 0))));

      if ((Var_102 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_79;
        MR_Word Var_81;
        MR_Word Var_82;

        {
          Var_82 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_82, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(3, Var_82, 1) = ((MR_Box) (Var_103));
        }
        {
          Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_82));
          MR_hl_field(1, Var_81, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[18])));
        }
        {
          Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_79, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[19])));
          MR_hl_field(1, Var_79, 1) = ((MR_Box) (Var_81));
        }
        Pieces_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MainPieces_68, Var_79);
      }
      else
      {
        MR_Word InFavourOfPieces_70;
        MR_Word Var_85;
        MR_Word Var_87;
        MR_Word Var_89;

        Var_85 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_3[1]), InFavourOf_59);
        InFavourOfPieces_70 = parse_tree__error_spec__component_list_to_pieces_2_f_0((MR_String) "and", Var_85);
        Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InFavourOfPieces_70, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[18])));
        Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[21])), Var_89);
        Pieces_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MainPieces_68, Var_87);
      }
    }
    {
      Var_97 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_97, 0) = ((MR_Box) (GoalContext_67));
      MR_hl_field(0, Var_97, 1) = ((MR_Box) (Pieces_69));
    }
    {
      Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_96, 0) = ((MR_Box) (Var_97));
      MR_hl_field(1, Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Spec_71, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.maybe_generate_warning_for_call_to_obsolete_predicate\'/7"));
      MR_hl_field(3, Spec_71, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 49) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(3, Spec_71, 2) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Spec_71, 3) = ((MR_Box) (MR_mkword(2, &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
      MR_hl_field(3, Spec_71, 4) = ((MR_Box) (Var_96));
    }
    check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_71, STATE_VARIABLE_Info_45_45, &STATE_VARIABLE_Info_46_46);
  }
  else
    STATE_VARIABLE_Info_46_46 = STATE_VARIABLE_Info_45_45;
  check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_infinite_loop_call_11_p_0(PredId_19, ProcId_20, Args_21, IsBuiltin_22, PredInfo_26, ProcInfo_27, GoalInfo0_13, NestedContext_15, STATE_VARIABLE_Common_0_41, STATE_VARIABLE_Info_46_46, &STATE_VARIABLE_Info_47_47);
  check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_useless_comparison_6_p_0(PredInfo_26, InstMap0_16, Args_21, GoalInfo0_13, STATE_VARIABLE_Info_47_47, &STATE_VARIABLE_Info_48_48);
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
      MR_Word MaybeAssignsGoalExpr_38;
      MR_Word STATE_VARIABLE_Info_51_51;

      check_hlds__simplify__simplify_goal_call__simplify_look_for_duplicate_call_10_p_0(PredId_19, ProcId_20, Args_21, GoalExpr0_11, GoalInfo0_13, &MaybeAssignsGoalExpr_38, STATE_VARIABLE_Common_0_41, STATE_VARIABLE_Common_42, STATE_VARIABLE_Info_48_48, &STATE_VARIABLE_Info_51_51);
      if ((MaybeAssignsGoalExpr_38 == (MR_Word) ((MR_Unsigned) 0U)))
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
      else
      {
        *GoalExpr_12 = ((MR_Word) ((MR_hl_field(1, MaybeAssignsGoalExpr_38, (MR_Integer) 0))));
        *GoalInfo_14 = GoalInfo0_13;
        *STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_51_51;
      }
    }
  }
  else
  {
    MR_Word MaybeAssignsGoalExpr_56;

    check_hlds__simplify__simplify_goal_call__simplify_look_for_duplicate_call_10_p_0(PredId_19, ProcId_20, Args_21, GoalExpr0_11, GoalInfo0_13, &MaybeAssignsGoalExpr_56, STATE_VARIABLE_Common_0_41, STATE_VARIABLE_Common_42, STATE_VARIABLE_Info_48_48, STATE_VARIABLE_Info_44);
    if ((MaybeAssignsGoalExpr_56 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *GoalExpr_12 = GoalExpr0_11;
      *GoalInfo_14 = GoalInfo0_13;
    }
    else
    {
      *GoalExpr_12 = ((MR_Word) ((MR_hl_field(1, MaybeAssignsGoalExpr_56, (MR_Integer) 0))));
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
            libs__globals__lookup_bool_option_3_p_0(Globals_106, (MR_Integer) 270, &Pregen_107);
            switch (Pregen_107) {
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
            MR_Word ModuleInfo_75;
            MR_Word Globals_76;
            MR_Word Pregen_77;

            check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_34, &ModuleInfo_75);
            hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_75, &Globals_76);
            libs__globals__lookup_bool_option_3_p_0(Globals_76, (MR_Integer) 270, &Pregen_77);
            switch (Pregen_77) {
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
            libs__globals__lookup_bool_option_3_p_0(Globals_32, (MR_Integer) 270, &Pregen_33);
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
            MR_Word ModuleInfo_115;
            MR_Word Globals_116;
            MR_Word Pregen_117;

            check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_34, &ModuleInfo_115);
            hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_115, &Globals_116);
            libs__globals__lookup_bool_option_3_p_0(Globals_116, (MR_Integer) 270, &Pregen_117);
            switch (Pregen_117) {
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
            MR_String TypeName_28;
            MR_Word R_29;
            MR_Word Var_41;
            MR_Word Var_42;
            MR_Word Var_43;
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
                  R_29 = ((MR_Word) ((MR_hl_field(1, Args_16, (MR_Integer) 0))));
                  Var_41 = ((MR_Word) ((MR_hl_field(1, Args_16, (MR_Integer) 1))));
                  succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    X_47 = ((MR_Word) ((MR_hl_field(1, Var_41, (MR_Integer) 0))));
                    Var_42 = ((MR_Word) ((MR_hl_field(1, Var_41, (MR_Integer) 1))));
                    succeeded = (Var_42 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Y_48 = ((MR_Word) ((MR_hl_field(1, Var_42, (MR_Integer) 0))));
                      Var_43 = ((MR_Word) ((MR_hl_field(1, Var_42, (MR_Integer) 1))));
                      succeeded = (Var_43 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Context_49 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_19);
                        check_hlds__simplify__simplify_goal_call__simplify_improve_builtin_compare_int_uint_8_p_0(STATE_VARIABLE_Info_0_34, TypeName_28, R_29, X_47, Y_48, Context_49, ImprovedGoalExpr_18, ImprovedGoalInfo_20);
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
            MR_Integer lo_0 = (MR_Integer) 0;
            MR_Integer hi_1 = (MR_Integer) 4;
            MR_Integer mid_2;
            MR_Integer result_3;

            // binary string jump switch
            ;
            do
            {
              mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
              result_3 = MR_strcmp(PredName_14, ((&check_hlds__simplify__simplify_goal_call_vector_common_7[50 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_7_0__vct_7_f_0);
              if ((result_3 == (MR_Integer) 0))
              {
                switch (((&check_hlds__simplify__simplify_goal_call_vector_common_7[50 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_7_0__vct_7_f_1) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      // case "@<"
                      ;
                      {
                        MR_Word TI_24;
                        MR_Word X_25;
                        MR_Word Y_26;
                        MR_Word Var_36;
                        MR_Word Var_37;
                        MR_Word Var_38;

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
                                check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(TI_24, X_25, Y_26, (MR_String) "<", (MR_Integer) 0, GoalInfo0_19, ImprovedGoalExpr_18, InstMap0_12, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_39_39);
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
                          TI_52 = ((MR_Word) ((MR_hl_field(1, Args_16, (MR_Integer) 0))));
                          Var_55 = ((MR_Word) ((MR_hl_field(1, Args_16, (MR_Integer) 1))));
                          succeeded = (Var_55 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            X_53 = ((MR_Word) ((MR_hl_field(1, Var_55, (MR_Integer) 0))));
                            Var_56 = ((MR_Word) ((MR_hl_field(1, Var_55, (MR_Integer) 1))));
                            succeeded = (Var_56 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              Y_54 = ((MR_Word) ((MR_hl_field(1, Var_56, (MR_Integer) 0))));
                              Var_57 = ((MR_Word) ((MR_hl_field(1, Var_56, (MR_Integer) 1))));
                              succeeded = (Var_57 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(TI_52, X_53, Y_54, (MR_String) ">", (MR_Integer) 1, GoalInfo0_19, ImprovedGoalExpr_18, InstMap0_12, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_39_39);
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
                          TI_60 = ((MR_Word) ((MR_hl_field(1, Args_16, (MR_Integer) 0))));
                          Var_63 = ((MR_Word) ((MR_hl_field(1, Args_16, (MR_Integer) 1))));
                          succeeded = (Var_63 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            X_61 = ((MR_Word) ((MR_hl_field(1, Var_63, (MR_Integer) 0))));
                            Var_64 = ((MR_Word) ((MR_hl_field(1, Var_63, (MR_Integer) 1))));
                            succeeded = (Var_64 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              Y_62 = ((MR_Word) ((MR_hl_field(1, Var_64, (MR_Integer) 0))));
                              Var_65 = ((MR_Word) ((MR_hl_field(1, Var_64, (MR_Integer) 1))));
                              succeeded = (Var_65 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(TI_60, X_61, Y_62, (MR_String) ">", (MR_Integer) 0, GoalInfo0_19, ImprovedGoalExpr_18, InstMap0_12, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_39_39);
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
                          TI_68 = ((MR_Word) ((MR_hl_field(1, Args_16, (MR_Integer) 0))));
                          Var_71 = ((MR_Word) ((MR_hl_field(1, Args_16, (MR_Integer) 1))));
                          succeeded = (Var_71 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            X_69 = ((MR_Word) ((MR_hl_field(1, Var_71, (MR_Integer) 0))));
                            Var_72 = ((MR_Word) ((MR_hl_field(1, Var_71, (MR_Integer) 1))));
                            succeeded = (Var_72 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              Y_70 = ((MR_Word) ((MR_hl_field(1, Var_72, (MR_Integer) 0))));
                              Var_73 = ((MR_Word) ((MR_hl_field(1, Var_72, (MR_Integer) 1))));
                              succeeded = (Var_73 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                check_hlds__simplify__simplify_goal_call__simplify_inline_builtin_inequality_10_p_0(TI_68, X_69, Y_70, (MR_String) "<", (MR_Integer) 1, GoalInfo0_19, ImprovedGoalExpr_18, InstMap0_12, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_39_39);
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
                        succeeded = check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_95_91_49_93_95_48_7_p_0(Args_16, Context_27, ImprovedGoalExpr_18, ImprovedGoalInfo_20, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_39_39);
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
            libs__globals__lookup_bool_option_3_p_0(Globals_96, (MR_Integer) 270, &Pregen_97);
            switch (Pregen_97) {
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
            MR_Word ModuleInfo_90;
            MR_Word Globals_91;
            MR_Word Pregen_92;

            check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_34, &ModuleInfo_90);
            hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_90, &Globals_91);
            libs__globals__lookup_bool_option_3_p_0(Globals_91, (MR_Integer) 270, &Pregen_92);
            switch (Pregen_92) {
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
            MR_Word ModuleInfo_110;
            MR_Word Globals_111;
            MR_Word Pregen_112;

            check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_34, &ModuleInfo_110);
            hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_110, &Globals_111);
            libs__globals__lookup_bool_option_3_p_0(Globals_111, (MR_Integer) 270, &Pregen_112);
            switch (Pregen_112) {
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
            MR_Word ModuleInfo_100;
            MR_Word Globals_101;
            MR_Word Pregen_102;

            check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_34, &ModuleInfo_100);
            hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_100, &Globals_101);
            libs__globals__lookup_bool_option_3_p_0(Globals_101, (MR_Integer) 270, &Pregen_102);
            switch (Pregen_102) {
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
            MR_Word ModuleInfo_80;
            MR_Word Globals_81;
            MR_Word Pregen_82;

            check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_34, &ModuleInfo_80);
            hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_80, &Globals_81);
            libs__globals__lookup_bool_option_3_p_0(Globals_81, (MR_Integer) 270, &Pregen_82);
            switch (Pregen_82) {
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
            MR_Word ModuleInfo_85;
            MR_Word Globals_86;
            MR_Word Pregen_87;

            check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_34, &ModuleInfo_85);
            hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_85, &Globals_86);
            libs__globals__lookup_bool_option_3_p_0(Globals_86, (MR_Integer) 270, &Pregen_87);
            switch (Pregen_87) {
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
    str_1 = ((&check_hlds__simplify__simplify_goal_call_vector_common_7[18 + slot_0]))->check_hlds__simplify__simplify_goal_call__vector_common_type_7_0__vct_7_f_0;
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
              MR_Word Var_75;
              MR_Word Var_76;
              MR_Word Var_77;
              MR_String Op_214;
              MR_Word X_215;
              MR_Word Y_216;
              MR_Integer TargetBitsPerInt_217;

              succeeded = (IntType_13 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  X_215 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 0))));
                  Var_75 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 1))));
                  succeeded = (Var_75 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Y_216 = ((MR_Word) ((MR_hl_field(1, Var_75, (MR_Integer) 0))));
                    Var_76 = ((MR_Word) ((MR_hl_field(1, Var_75, (MR_Integer) 1))));
                    succeeded = (Var_76 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Op_214 = (MR_String) "*";
                      libs__int_emu__target_bits_per_int_2_p_0(Globals_24, &Var_77);
                      TargetBitsPerInt_217 = (MR_Integer) (Var_77);
                      check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_9_p_0(ModuleName_15, Op_214, X_215, TargetBitsPerInt_217, Y_216, ImprovedGoalExpr_20, STATE_VARIABLE_GoalInfo_0_67, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
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
              MR_Word Var_103;
              MR_Word Var_104;
              MR_Word Var_105;
              MR_Word X_255;
              MR_Word Y_256;
              MR_Word Z_257;
              MR_Word InstY_258;
              MR_Word YConst_41;
              MR_Word Var_106;
              MR_Word Var_107;
              MR_Word Var_108;
              MR_Word Var_109;
              MR_Word Var_110;

              succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_255 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 0))));
                Var_103 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 1))));
                succeeded = (Var_103 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_256 = ((MR_Word) ((MR_hl_field(1, Var_103, (MR_Integer) 0))));
                  Var_104 = ((MR_Word) ((MR_hl_field(1, Var_103, (MR_Integer) 1))));
                  succeeded = (Var_104 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_257 = ((MR_Word) ((MR_hl_field(1, Var_104, (MR_Integer) 0))));
                    Var_105 = ((MR_Word) ((MR_hl_field(1, Var_104, (MR_Integer) 1))));
                    succeeded = (Var_105 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      NumTargetBits_38 = check_hlds__simplify__simplify_goal_call__int_type_target_bits_2_f_0(Globals_24, IntType_13);
                      hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_14, Y_256, &InstY_258);
                      succeeded = ((((MR_tag((MR_Word) InstY_258)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, InstY_258, (MR_Integer) 0)))) == (MR_Integer) 0)));
                      if (succeeded)
                      {
                        Var_106 = ((MR_Word) ((MR_hl_field(3, InstY_258, (MR_Integer) 3))));
                        succeeded = (Var_106 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_107 = ((MR_Word) ((MR_hl_field(1, Var_106, (MR_Integer) 0))));
                          Var_110 = ((MR_Word) ((MR_hl_field(1, Var_106, (MR_Integer) 1))));
                          succeeded = (Var_110 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_108 = ((MR_Word) ((MR_hl_field(0, Var_107, (MR_Integer) 0))));
                            Var_109 = ((MR_Word) ((MR_hl_field(0, Var_107, (MR_Integer) 1))));
                            succeeded = (Var_109 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = ((((MR_tag((MR_Word) Var_108)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_108, (MR_Integer) 0)))) == (MR_Integer) 5)));
                              if (succeeded)
                              {
                                YConst_41 = ((MR_Word) ((MR_hl_field(3, Var_108, (MR_Integer) 1))));
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
                            check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_69, ModuleName_15, (MR_String) "unchecked_left_shift", (MR_Integer) 0, X_255, Y_256, Z_257, ImprovedGoalExpr_20);
                            *STATE_VARIABLE_Info_70 = STATE_VARIABLE_Info_0_69;
                          }
                          else
                          {
                            MR_String Exclusive_45;
                            MR_Word Var_113;
                            MR_Word Var_120;
                            MR_Word Var_121;
                            MR_Word Var_122;
                            MR_Word Var_125;
                            MR_Word Var_128;
                            MR_Word Var_131;
                            MR_Word Var_134;
                            MR_Word Var_135;
                            MR_Word Context_221;
                            MR_Word SymName_222;
                            MR_Word Pieces_223;
                            MR_Word Spec_224;
                            MR_String Var_2327;

                            *ImprovedGoalExpr_20 = GoalExpr0_19;
                            Context_221 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_67);
                            {
                              Var_113 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(0, Var_113, 0) = ((MR_Box) (ModuleName_15));
                            }
                            {
                              SymName_222 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, SymName_222, 0) = ((MR_Box) (Var_113));
                              MR_hl_field(1, SymName_222, 1) = ((MR_Box) (PredName_16));
                            }
                            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_2[3]), NumTargetBits_38, &Var_2327);
                            Exclusive_45 = mercury__string__f_43_43_2_f_0(Var_2327, (MR_String) " (exclusive).");
                            {
                              Var_121 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(3, Var_121, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                              MR_hl_field(3, Var_121, 1) = ((MR_Box) (SymName_222));
                            }
                            {
                              Var_135 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(2, Var_135, 0) = ((MR_Box) (Exclusive_45));
                            }
                            {
                              Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_134, 0) = ((MR_Box) (Var_135));
                              MR_hl_field(1, Var_134, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[3])));
                            }
                            {
                              Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_131, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[79])));
                              MR_hl_field(1, Var_131, 1) = ((MR_Box) (Var_134));
                            }
                            {
                              Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_128, 0) = ((MR_Box) (MR_mkword(2, &check_hlds__simplify__simplify_goal_call_scalar_common_2[4])));
                              MR_hl_field(1, Var_128, 1) = ((MR_Box) (Var_131));
                            }
                            {
                              Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_125, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[78])));
                              MR_hl_field(1, Var_125, 1) = ((MR_Box) (Var_128));
                            }
                            {
                              Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_122, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[77])));
                              MR_hl_field(1, Var_122, 1) = ((MR_Box) (Var_125));
                            }
                            {
                              Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_120, 0) = ((MR_Box) (Var_121));
                              MR_hl_field(1, Var_120, 1) = ((MR_Box) (Var_122));
                            }
                            {
                              Pieces_223 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Pieces_223, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[74])));
                              MR_hl_field(1, Pieces_223, 1) = ((MR_Box) (Var_120));
                            }
                            {
                              Spec_224 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Spec_224, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_improve_arith_shift_cmp_ops\'/12"));
                              MR_hl_field(1, Spec_224, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                              MR_hl_field(1, Spec_224, 2) = ((MR_Box) (MR_mkword(2, &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
                              MR_hl_field(1, Spec_224, 3) = ((MR_Box) (Context_221));
                              MR_hl_field(1, Spec_224, 4) = ((MR_Box) (Pieces_223));
                            }
                            check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_224, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
                          }
                        }
                        else
                        {
                          MR_Unsigned YUintVal_46 = ((MR_Unsigned) ((MR_hl_field(1, YConst_41, (MR_Integer) 0))));
                          MR_Unsigned Var_144;

                          Var_144 = mercury__uint__det_from_int_1_f_0(NumTargetBits_38);
                          succeeded = (YUintVal_46 < Var_144);
                          if (succeeded)
                          {
                            check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_69, ModuleName_15, (MR_String) "unchecked_left_shift", (MR_Integer) 0, X_255, Y_256, Z_257, ImprovedGoalExpr_20);
                            *STATE_VARIABLE_Info_70 = STATE_VARIABLE_Info_0_69;
                          }
                          else
                          {
                            MR_Word Var_146;
                            MR_Word Var_149;
                            MR_Word Var_150;
                            MR_Word Var_151;
                            MR_Word Var_154;
                            MR_Word Var_157;
                            MR_Word Var_158;
                            MR_Word Context_233;
                            MR_Word SymName_234;
                            MR_Word Pieces_235;
                            MR_Word Spec_236;

                            *ImprovedGoalExpr_20 = GoalExpr0_19;
                            Context_233 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_67);
                            {
                              Var_146 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(0, Var_146, 0) = ((MR_Box) (ModuleName_15));
                            }
                            {
                              SymName_234 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, SymName_234, 0) = ((MR_Box) (Var_146));
                              MR_hl_field(1, SymName_234, 1) = ((MR_Box) (PredName_16));
                            }
                            {
                              Var_150 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(3, Var_150, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                              MR_hl_field(3, Var_150, 1) = ((MR_Box) (SymName_234));
                            }
                            {
                              Var_158 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(3, Var_158, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                              MR_hl_field(3, Var_158, 1) = ((MR_Box) (NumTargetBits_38));
                            }
                            {
                              Var_157 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_157, 0) = ((MR_Box) (Var_158));
                              MR_hl_field(1, Var_157, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[18])));
                            }
                            {
                              Var_154 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_154, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[81])));
                              MR_hl_field(1, Var_154, 1) = ((MR_Box) (Var_157));
                            }
                            {
                              Var_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_151, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[80])));
                              MR_hl_field(1, Var_151, 1) = ((MR_Box) (Var_154));
                            }
                            {
                              Var_149 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_149, 0) = ((MR_Box) (Var_150));
                              MR_hl_field(1, Var_149, 1) = ((MR_Box) (Var_151));
                            }
                            {
                              Pieces_235 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Pieces_235, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[74])));
                              MR_hl_field(1, Pieces_235, 1) = ((MR_Box) (Var_149));
                            }
                            {
                              Spec_236 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Spec_236, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_improve_arith_shift_cmp_ops\'/12"));
                              MR_hl_field(1, Spec_236, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                              MR_hl_field(1, Spec_236, 2) = ((MR_Box) (MR_mkword(2, &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
                              MR_hl_field(1, Spec_236, 3) = ((MR_Box) (Context_233));
                              MR_hl_field(1, Spec_236, 4) = ((MR_Box) (Pieces_235));
                            }
                            check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_236, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
                          }
                        }
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        MR_Word TypeCtorInfo_259_259;
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
                        MR_Word STATE_VARIABLE_Info_170_170;
                        MR_String Var_171;
                        MR_Word Var_172;
                        MR_Word Var_173;
                        MR_Word Var_174;
                        MR_Word Var_175;
                        MR_Word Var_176;
                        MR_Word Var_177;
                        MR_Word Var_178;
                        MR_Word Var_179;
                        MR_Word Var_180;
                        MR_Word STATE_VARIABLE_Info_187_187;
                        MR_String Var_189;
                        MR_Integer Var_190;
                        MR_Word Var_191;
                        MR_Word Var_192;
                        MR_Word Var_193;
                        MR_Word Var_194;
                        MR_String Var_195;
                        MR_Word Var_196;
                        MR_Word Var_197;
                        MR_Word Var_198;
                        MR_Word Var_199;
                        MR_Word Var_200;
                        MR_Word Var_201;
                        MR_Word Var_202;
                        MR_Word Var_203;
                        MR_Word Var_205;
                        MR_Word Var_206;
                        MR_Word Var_207;
                        MR_Word Var_208;
                        MR_Word Var_209;
                        MR_Word Var_210;
                        MR_Word Var_211;
                        MR_Word Var_212;
                        MR_Word Var_213;
                        MR_Word Context_249;
                        MR_String Var_2334;
                        MR_String Var_2335;
                        MR_String Var_2336;
                        MR_String Var_2337;

                        succeeded = mercury__builtin__semidet_fail_0_p_0();
                        if (succeeded)
                        {
                          Context_249 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_67);
                          check_hlds__simplify__simplify_goal_call__simplify_make_int_const_5_p_0(NumTargetBits_38, &NumTargetBitsConstVar_47, &NumTargetBitsConstGoal_48, STATE_VARIABLE_Info_0_69, &STATE_VARIABLE_Info_170_170);
                          PrivateBuiltin_49 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                          Var_171 = (MR_String) "unsigned_lt";
                          Var_172 = (MR_Integer) 0;
                          check_hlds__simplify__simplify_goal_call__simplify_make_cmp_goal_expr_8_p_0(STATE_VARIABLE_Info_170_170, PrivateBuiltin_49, Var_171, Var_172, Y_256, NumTargetBitsConstVar_47, Context_249, &InRangeTestGoal_50);
                          TypeCtorInfo_259_259 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                          Var_173 = parse_tree__set_of_var__make_singleton_1_f_0(TypeCtorInfo_259_259, Y_256);
                          Var_174 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                          Var_175 = (MR_Integer) 1;
                          Var_176 = (MR_Integer) 0;
                          hlds__hlds_goal__goal_info_init_6_p_0(Var_173, Var_174, Var_175, Var_176, Context_249, &TestConjGoalInfo_51);
                          Var_179 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            Var_178 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_178, 0) = ((MR_Box) (InRangeTestGoal_50));
                            MR_hl_field(1, Var_178, 1) = ((MR_Box) (Var_179));
                          }
                          {
                            Var_177 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_177, 0) = ((MR_Box) (NumTargetBitsConstGoal_48));
                            MR_hl_field(1, Var_177, 1) = ((MR_Box) (Var_178));
                          }
                          hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_177, TestConjGoalInfo_51, &TestConjGoal_52);
                          Var_180 = (MR_Integer) 0;
                          check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_170_170, ModuleName_15, (MR_String) "unchecked_left_shift", Var_180, X_255, Y_256, Z_257, &UncheckedShiftGoalExpr_53);
                          Var_2334 = (MR_String) "): second operand is out of range";
                          {
                            UncheckedShiftGoal_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, UncheckedShiftGoal_54, 0) = ((MR_Box) (UncheckedShiftGoalExpr_53));
                            MR_hl_field(0, UncheckedShiftGoal_54, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_0_67));
                          }
                          Var_2335 = mercury__string__f_43_43_2_f_0(PredName_16, Var_2334);
                          Var_2336 = (MR_String) ".(";
                          Var_2337 = mercury__string__f_43_43_2_f_0(Var_2336, Var_2335);
                          NotInRangeStr_55 = mercury__string__f_43_43_2_f_0(ModuleName_15, Var_2337);
                          check_hlds__simplify__simplify_goal_call__simplify_make_string_const_5_p_0(NotInRangeStr_55, &ErrorMsgStrVar_56, &ErrorMsgStrGoal_57, STATE_VARIABLE_Info_170_170, &STATE_VARIABLE_Info_187_187);
                          ExceptionType_58 = parse_tree__builtin_lib_types__void_type_0_f_0();
                          check_hlds__simplify__simplify_goal_call__simplify_make_var_4_p_0(ExceptionType_58, &ExceptionVar_59, STATE_VARIABLE_Info_187_187, STATE_VARIABLE_Info_70);
                          parse_tree__prog_type__type_to_ctor_det_2_p_0(ExceptionType_58, &ExceptionTypeCtor_60);
                          Var_189 = (MR_String) "math_domain_error";
                          Var_190 = (MR_Integer) 1;
                          Var_192 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            ExceptionWrapperCtorSymName_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, ExceptionWrapperCtorSymName_61, 0) = ((MR_Box) (PrivateBuiltin_49));
                            MR_hl_field(1, ExceptionWrapperCtorSymName_61, 1) = ((MR_Box) (Var_189));
                          }
                          {
                            ExceptionWrapperCtorConsId_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, ExceptionWrapperCtorConsId_62, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                            MR_hl_field(3, ExceptionWrapperCtorConsId_62, 1) = ((MR_Box) (ExceptionWrapperCtorSymName_61));
                            MR_hl_field(3, ExceptionWrapperCtorConsId_62, 2) = ((MR_Box) (Var_190));
                            MR_hl_field(3, ExceptionWrapperCtorConsId_62, 3) = ((MR_Box) (ExceptionTypeCtor_60));
                          }
                          {
                            Var_191 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_191, 0) = ((MR_Box) (ErrorMsgStrVar_56));
                            MR_hl_field(1, Var_191, 1) = ((MR_Box) (Var_192));
                          }
                          hlds__make_goal__construct_functor_4_p_0(ExceptionVar_59, ExceptionWrapperCtorConsId_62, Var_191, &WrapErrorMsgGoal_63);
                          Var_193 = (MR_Integer) 0;
                          Var_194 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
                          Var_195 = (MR_String) "throw";
                          Var_196 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            Var_197 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_197, 0) = ((MR_Box) (ExceptionVar_59));
                            MR_hl_field(1, Var_197, 1) = ((MR_Box) (Var_196));
                          }
                          Var_198 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                          Var_199 = (MR_Word) ((MR_Unsigned) 0U);
                          Var_200 = (MR_Integer) 6;
                          Var_201 = (MR_Integer) 0;
                          Var_202 = (MR_Word) ((MR_Unsigned) 0U);
                          Var_203 = mercury__term_context__dummy_context_0_f_0();
                          hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_23, Var_193, Var_194, Var_195, Var_196, Var_197, Var_198, Var_199, Var_200, Var_201, Var_202, Var_203, &ThrowGoal_64);
                          Var_205 = parse_tree__set_of_var__init_0_f_0(TypeCtorInfo_259_259);
                          Var_206 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                          Var_207 = (MR_Integer) 6;
                          Var_208 = (MR_Integer) 0;
                          hlds__hlds_goal__goal_info_init_6_p_0(Var_205, Var_206, Var_207, Var_208, Context_249, &ThrowConjGoalInfo_65);
                          Var_212 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            Var_211 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_211, 0) = ((MR_Box) (ThrowGoal_64));
                            MR_hl_field(1, Var_211, 1) = ((MR_Box) (Var_212));
                          }
                          {
                            Var_210 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_210, 0) = ((MR_Box) (WrapErrorMsgGoal_63));
                            MR_hl_field(1, Var_210, 1) = ((MR_Box) (Var_211));
                          }
                          {
                            Var_209 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_209, 0) = ((MR_Box) (ErrorMsgStrGoal_57));
                            MR_hl_field(1, Var_209, 1) = ((MR_Box) (Var_210));
                          }
                          hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_209, ThrowConjGoalInfo_65, &ThrowConjGoal_66);
                          Var_213 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                            *ImprovedGoalExpr_20 = base;
                            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                            MR_hl_field(3, base, 1) = ((MR_Box) (Var_213));
                            MR_hl_field(3, base, 2) = ((MR_Box) (TestConjGoal_52));
                            MR_hl_field(3, base, 3) = ((MR_Box) (UncheckedShiftGoal_54));
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
              MR_Word Var_2195;
              MR_Word Var_2196;
              MR_Word Var_2197;
              MR_Word Var_2198;
              MR_Word ConsY_2233;
              MR_Word Z_2253;
              MR_Word InstY_2254;
              MR_Word Var_2262;
              MR_Word Var_2263;
              MR_Word Var_2264;
              MR_Word X_2281;
              MR_Word Y_2282;

              succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_2281 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 0))));
                Var_2262 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 1))));
                succeeded = (Var_2262 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_2282 = ((MR_Word) ((MR_hl_field(1, Var_2262, (MR_Integer) 0))));
                  Var_2263 = ((MR_Word) ((MR_hl_field(1, Var_2262, (MR_Integer) 1))));
                  succeeded = (Var_2263 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_2253 = ((MR_Word) ((MR_hl_field(1, Var_2263, (MR_Integer) 0))));
                    Var_2264 = ((MR_Word) ((MR_hl_field(1, Var_2263, (MR_Integer) 1))));
                    succeeded = (Var_2264 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_14, Y_2282, &InstY_2254);
                      succeeded = ((((MR_tag((MR_Word) InstY_2254)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, InstY_2254, (MR_Integer) 0)))) == (MR_Integer) 0)));
                      if (succeeded)
                      {
                        Var_2195 = ((MR_Word) ((MR_hl_field(3, InstY_2254, (MR_Integer) 3))));
                        succeeded = (Var_2195 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_2196 = ((MR_Word) ((MR_hl_field(1, Var_2195, (MR_Integer) 0))));
                          Var_2198 = ((MR_Word) ((MR_hl_field(1, Var_2195, (MR_Integer) 1))));
                          succeeded = (Var_2198 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            ConsY_2233 = ((MR_Word) ((MR_hl_field(0, Var_2196, (MR_Integer) 0))));
                            Var_2197 = ((MR_Word) ((MR_hl_field(0, Var_2196, (MR_Integer) 1))));
                            succeeded = (Var_2197 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = check_hlds__simplify__simplify_goal_call__is_zero_const_2_p_0(IntType_13, ConsY_2233);
                              if (succeeded)
                              {
                                MR_Word Context_2199;
                                MR_Word SymName_2200;
                                MR_Word Pieces_2201;
                                MR_Word Spec_2202;
                                MR_Word Var_2203;
                                MR_Word Var_2206;
                                MR_Word Var_2207;

                                *ImprovedGoalExpr_20 = GoalExpr0_19;
                                Context_2199 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_67);
                                {
                                  Var_2203 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(0, Var_2203, 0) = ((MR_Box) (ModuleName_15));
                                }
                                {
                                  SymName_2200 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(1, SymName_2200, 0) = ((MR_Box) (Var_2203));
                                  MR_hl_field(1, SymName_2200, 1) = ((MR_Box) (PredName_16));
                                }
                                {
                                  Var_2207 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(3, Var_2207, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                                  MR_hl_field(3, Var_2207, 1) = ((MR_Box) (SymName_2200));
                                }
                                {
                                  Var_2206 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(1, Var_2206, 0) = ((MR_Box) (Var_2207));
                                  MR_hl_field(1, Var_2206, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[76])));
                                }
                                {
                                  Pieces_2201 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(1, Pieces_2201, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[74])));
                                  MR_hl_field(1, Pieces_2201, 1) = ((MR_Box) (Var_2206));
                                }
                                {
                                  Spec_2202 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(1, Spec_2202, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_improve_arith_shift_cmp_ops\'/12"));
                                  MR_hl_field(1, Spec_2202, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                  MR_hl_field(1, Spec_2202, 2) = ((MR_Box) (MR_mkword(2, &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
                                  MR_hl_field(1, Spec_2202, 3) = ((MR_Box) (Context_2199));
                                  MR_hl_field(1, Spec_2202, 4) = ((MR_Box) (Pieces_2201));
                                }
                                check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_2202, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                MR_Word Var_2213;

                                succeeded = check_hlds__simplify__simplify_goal_call__is_int_const_2_p_0(IntType_13, ConsY_2233);
                                if (succeeded)
                                {
                                  Var_2213 = (MR_Integer) 0;
                                  check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_69, ModuleName_15, (MR_String) "unchecked_rem", Var_2213, X_2281, Y_2282, Z_2253, ImprovedGoalExpr_20);
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
              MR_Word Var_79;
              MR_Word Var_80;
              MR_Word Var_81;
              MR_Word Var_82;
              MR_Word Var_83;
              MR_Word Var_84;
              MR_Word Var_85;
              MR_Word X_219;
              MR_Word Y_220;

              succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_219 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 0))));
                Var_79 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 1))));
                succeeded = (Var_79 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_220 = ((MR_Word) ((MR_hl_field(1, Var_79, (MR_Integer) 0))));
                  Var_80 = ((MR_Word) ((MR_hl_field(1, Var_79, (MR_Integer) 1))));
                  succeeded = (Var_80 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_29 = ((MR_Word) ((MR_hl_field(1, Var_80, (MR_Integer) 0))));
                    Var_81 = ((MR_Word) ((MR_hl_field(1, Var_80, (MR_Integer) 1))));
                    succeeded = (Var_81 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_14, Y_220, &InstY_30);
                      succeeded = ((((MR_tag((MR_Word) InstY_30)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, InstY_30, (MR_Integer) 0)))) == (MR_Integer) 0)));
                      if (succeeded)
                      {
                        Var_82 = ((MR_Word) ((MR_hl_field(3, InstY_30, (MR_Integer) 3))));
                        succeeded = (Var_82 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_83 = ((MR_Word) ((MR_hl_field(1, Var_82, (MR_Integer) 0))));
                          Var_85 = ((MR_Word) ((MR_hl_field(1, Var_82, (MR_Integer) 1))));
                          succeeded = (Var_85 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            ConsY_33 = ((MR_Word) ((MR_hl_field(0, Var_83, (MR_Integer) 0))));
                            Var_84 = ((MR_Word) ((MR_hl_field(0, Var_83, (MR_Integer) 1))));
                            succeeded = (Var_84 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = check_hlds__simplify__simplify_goal_call__is_zero_const_2_p_0(IntType_13, ConsY_33);
                              if (succeeded)
                              {
                                MR_Word Context_34;
                                MR_Word SymName_35;
                                MR_Word Pieces_36;
                                MR_Word Spec_37;
                                MR_Word Var_86;
                                MR_Word Var_89;
                                MR_Word Var_90;

                                *ImprovedGoalExpr_20 = GoalExpr0_19;
                                Context_34 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_67);
                                {
                                  Var_86 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(0, Var_86, 0) = ((MR_Box) (ModuleName_15));
                                }
                                {
                                  SymName_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(1, SymName_35, 0) = ((MR_Box) (Var_86));
                                  MR_hl_field(1, SymName_35, 1) = ((MR_Box) (PredName_16));
                                }
                                {
                                  Var_90 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(3, Var_90, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                                  MR_hl_field(3, Var_90, 1) = ((MR_Box) (SymName_35));
                                }
                                {
                                  Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(1, Var_89, 0) = ((MR_Box) (Var_90));
                                  MR_hl_field(1, Var_89, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[76])));
                                }
                                {
                                  Pieces_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(1, Pieces_36, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[74])));
                                  MR_hl_field(1, Pieces_36, 1) = ((MR_Box) (Var_89));
                                }
                                {
                                  Spec_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(1, Spec_37, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_improve_arith_shift_cmp_ops\'/12"));
                                  MR_hl_field(1, Spec_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                  MR_hl_field(1, Spec_37, 2) = ((MR_Box) (MR_mkword(2, &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
                                  MR_hl_field(1, Spec_37, 3) = ((MR_Box) (Context_34));
                                  MR_hl_field(1, Spec_37, 4) = ((MR_Box) (Pieces_36));
                                }
                                check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_37, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                MR_Word Var_102;

                                succeeded = check_hlds__simplify__simplify_goal_call__is_int_const_2_p_0(IntType_13, ConsY_33);
                                if (succeeded)
                                {
                                  Var_102 = (MR_Integer) 0;
                                  check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_69, ModuleName_15, (MR_String) "unchecked_quotient", Var_102, X_219, Y_220, Z_29, ImprovedGoalExpr_20);
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
              MR_String Op_2283;
              MR_Word X_2284;
              MR_Word Y_2285;
              MR_Integer TargetBitsPerInt_2286;
              MR_Word Var_2287;
              MR_Word Var_2288;
              MR_Word Var_2289;

              succeeded = (IntType_13 == (MR_Integer) 0);
              if (succeeded)
              {
                Op_2283 = (MR_String) "unchecked_rem";
                succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  X_2284 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 0))));
                  Var_2287 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 1))));
                  succeeded = (Var_2287 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Y_2285 = ((MR_Word) ((MR_hl_field(1, Var_2287, (MR_Integer) 0))));
                    Var_2288 = ((MR_Word) ((MR_hl_field(1, Var_2287, (MR_Integer) 1))));
                    succeeded = (Var_2288 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      libs__int_emu__target_bits_per_int_2_p_0(Globals_24, &Var_2289);
                      TargetBitsPerInt_2286 = (MR_Integer) (Var_2289);
                      check_hlds__simplify__simplify_goal_call__simplify_make_int_ico_op_9_p_0(ModuleName_15, Op_2283, X_2284, TargetBitsPerInt_2286, Y_2285, ImprovedGoalExpr_20, STATE_VARIABLE_GoalInfo_0_67, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
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
              MR_Integer NumTargetBits_1431;
              MR_Word Var_1460;
              MR_Word Var_1461;
              MR_Word Var_1462;
              MR_Word X_1573;
              MR_Word Y_1574;
              MR_Word Z_1575;
              MR_Word InstY_1576;
              MR_Word YConst_1295;
              MR_Word Var_975;
              MR_Word Var_976;
              MR_Word Var_977;
              MR_Word Var_978;
              MR_Word Var_979;

              succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_1573 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 0))));
                Var_1460 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 1))));
                succeeded = (Var_1460 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_1574 = ((MR_Word) ((MR_hl_field(1, Var_1460, (MR_Integer) 0))));
                  Var_1461 = ((MR_Word) ((MR_hl_field(1, Var_1460, (MR_Integer) 1))));
                  succeeded = (Var_1461 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_1575 = ((MR_Word) ((MR_hl_field(1, Var_1461, (MR_Integer) 0))));
                    Var_1462 = ((MR_Word) ((MR_hl_field(1, Var_1461, (MR_Integer) 1))));
                    succeeded = (Var_1462 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      NumTargetBits_1431 = check_hlds__simplify__simplify_goal_call__int_type_target_bits_2_f_0(Globals_24, IntType_13);
                      hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_14, Y_1574, &InstY_1576);
                      succeeded = ((((MR_tag((MR_Word) InstY_1576)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, InstY_1576, (MR_Integer) 0)))) == (MR_Integer) 0)));
                      if (succeeded)
                      {
                        Var_975 = ((MR_Word) ((MR_hl_field(3, InstY_1576, (MR_Integer) 3))));
                        succeeded = (Var_975 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_976 = ((MR_Word) ((MR_hl_field(1, Var_975, (MR_Integer) 0))));
                          Var_979 = ((MR_Word) ((MR_hl_field(1, Var_975, (MR_Integer) 1))));
                          succeeded = (Var_979 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_977 = ((MR_Word) ((MR_hl_field(0, Var_976, (MR_Integer) 0))));
                            Var_978 = ((MR_Word) ((MR_hl_field(0, Var_976, (MR_Integer) 1))));
                            succeeded = (Var_978 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = ((((MR_tag((MR_Word) Var_977)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_977, (MR_Integer) 0)))) == (MR_Integer) 5)));
                              if (succeeded)
                              {
                                YConst_1295 = ((MR_Word) ((MR_hl_field(3, Var_977, (MR_Integer) 1))));
                                if (((MR_tag((MR_Word) YConst_1295)) == (MR_Integer) 0))
                                  succeeded = MR_TRUE;
                                else
                                if (((MR_tag((MR_Word) YConst_1295)) == (MR_Integer) 1))
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
                        if (((MR_tag((MR_Word) YConst_1295)) == (MR_Integer) 0))
                        {
                          MR_Integer YIntVal_1054 = ((MR_Integer) ((MR_hl_field(0, YConst_1295, (MR_Integer) 0))));

                          succeeded = ((MR_Integer) 0 <= YIntVal_1054);
                          if (succeeded)
                            succeeded = (YIntVal_1054 < NumTargetBits_1431);
                          if (succeeded)
                          {
                            check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_69, ModuleName_15, (MR_String) "unchecked_right_shift", (MR_Integer) 0, X_1573, Y_1574, Z_1575, ImprovedGoalExpr_20);
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
                            MR_String Var_2303;

                            *ImprovedGoalExpr_20 = GoalExpr0_19;
                            Context_1013 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_67);
                            {
                              Var_983 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(0, Var_983, 0) = ((MR_Box) (ModuleName_15));
                            }
                            {
                              SymName_1014 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, SymName_1014, 0) = ((MR_Box) (Var_983));
                              MR_hl_field(1, SymName_1014, 1) = ((MR_Box) (PredName_16));
                            }
                            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_2[3]), NumTargetBits_1431, &Var_2303);
                            Exclusive_982 = mercury__string__f_43_43_2_f_0(Var_2303, (MR_String) " (exclusive).");
                            {
                              Var_991 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(3, Var_991, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                              MR_hl_field(3, Var_991, 1) = ((MR_Box) (SymName_1014));
                            }
                            {
                              Var_1005 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(2, Var_1005, 0) = ((MR_Box) (Exclusive_982));
                            }
                            {
                              Var_1004 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_1004, 0) = ((MR_Box) (Var_1005));
                              MR_hl_field(1, Var_1004, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[3])));
                            }
                            {
                              Var_1001 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_1001, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[79])));
                              MR_hl_field(1, Var_1001, 1) = ((MR_Box) (Var_1004));
                            }
                            {
                              Var_998 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_998, 0) = ((MR_Box) (MR_mkword(2, &check_hlds__simplify__simplify_goal_call_scalar_common_2[4])));
                              MR_hl_field(1, Var_998, 1) = ((MR_Box) (Var_1001));
                            }
                            {
                              Var_995 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_995, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[78])));
                              MR_hl_field(1, Var_995, 1) = ((MR_Box) (Var_998));
                            }
                            {
                              Var_992 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_992, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[77])));
                              MR_hl_field(1, Var_992, 1) = ((MR_Box) (Var_995));
                            }
                            {
                              Var_990 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_990, 0) = ((MR_Box) (Var_991));
                              MR_hl_field(1, Var_990, 1) = ((MR_Box) (Var_992));
                            }
                            {
                              Pieces_1015 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Pieces_1015, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[74])));
                              MR_hl_field(1, Pieces_1015, 1) = ((MR_Box) (Var_990));
                            }
                            {
                              Spec_1016 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Spec_1016, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_improve_arith_shift_cmp_ops\'/12"));
                              MR_hl_field(1, Spec_1016, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                              MR_hl_field(1, Spec_1016, 2) = ((MR_Box) (MR_mkword(2, &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
                              MR_hl_field(1, Spec_1016, 3) = ((MR_Box) (Context_1013));
                              MR_hl_field(1, Spec_1016, 4) = ((MR_Box) (Pieces_1015));
                            }
                            check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_1016, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
                          }
                        }
                        else
                        {
                          MR_Unsigned YUintVal_1140 = ((MR_Unsigned) ((MR_hl_field(1, YConst_1295, (MR_Integer) 0))));
                          MR_Unsigned Var_1092;

                          Var_1092 = mercury__uint__det_from_int_1_f_0(NumTargetBits_1431);
                          succeeded = (YUintVal_1140 < Var_1092);
                          if (succeeded)
                          {
                            check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_69, ModuleName_15, (MR_String) "unchecked_right_shift", (MR_Integer) 0, X_1573, Y_1574, Z_1575, ImprovedGoalExpr_20);
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
                              MR_hl_field(0, Var_1094, 0) = ((MR_Box) (ModuleName_15));
                            }
                            {
                              SymName_1113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, SymName_1113, 0) = ((MR_Box) (Var_1094));
                              MR_hl_field(1, SymName_1113, 1) = ((MR_Box) (PredName_16));
                            }
                            {
                              Var_1098 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(3, Var_1098, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                              MR_hl_field(3, Var_1098, 1) = ((MR_Box) (SymName_1113));
                            }
                            {
                              Var_1106 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(3, Var_1106, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                              MR_hl_field(3, Var_1106, 1) = ((MR_Box) (NumTargetBits_1431));
                            }
                            {
                              Var_1105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_1105, 0) = ((MR_Box) (Var_1106));
                              MR_hl_field(1, Var_1105, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[18])));
                            }
                            {
                              Var_1102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_1102, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[81])));
                              MR_hl_field(1, Var_1102, 1) = ((MR_Box) (Var_1105));
                            }
                            {
                              Var_1099 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_1099, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[80])));
                              MR_hl_field(1, Var_1099, 1) = ((MR_Box) (Var_1102));
                            }
                            {
                              Var_1097 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_1097, 0) = ((MR_Box) (Var_1098));
                              MR_hl_field(1, Var_1097, 1) = ((MR_Box) (Var_1099));
                            }
                            {
                              Pieces_1114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Pieces_1114, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[74])));
                              MR_hl_field(1, Pieces_1114, 1) = ((MR_Box) (Var_1097));
                            }
                            {
                              Spec_1115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Spec_1115, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_improve_arith_shift_cmp_ops\'/12"));
                              MR_hl_field(1, Spec_1115, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                              MR_hl_field(1, Spec_1115, 2) = ((MR_Box) (MR_mkword(2, &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
                              MR_hl_field(1, Spec_1115, 3) = ((MR_Box) (Context_1112));
                              MR_hl_field(1, Spec_1115, 4) = ((MR_Box) (Pieces_1114));
                            }
                            check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_1115, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
                          }
                        }
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        MR_Word TypeCtorInfo_259_1292;
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
                        MR_Word STATE_VARIABLE_Info_170_1248;
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
                        MR_Word STATE_VARIABLE_Info_187_1265;
                        MR_String Var_1266;
                        MR_Integer Var_1267;
                        MR_Word Var_1268;
                        MR_Word Var_1269;
                        MR_Word Var_1270;
                        MR_Word Var_1271;
                        MR_String Var_1272;
                        MR_Word Var_1273;
                        MR_Word Var_1274;
                        MR_Word Var_1275;
                        MR_Word Var_1276;
                        MR_Word Var_1277;
                        MR_Word Var_1278;
                        MR_Word Var_1279;
                        MR_Word Var_1280;
                        MR_Word Var_1282;
                        MR_Word Var_1283;
                        MR_Word Var_1284;
                        MR_Word Var_1285;
                        MR_Word Var_1286;
                        MR_Word Var_1287;
                        MR_Word Var_1288;
                        MR_Word Var_1289;
                        MR_Word Var_1290;
                        MR_Word Context_1291;
                        MR_String Var_2310;
                        MR_String Var_2311;
                        MR_String Var_2312;
                        MR_String Var_2313;

                        succeeded = mercury__builtin__semidet_fail_0_p_0();
                        if (succeeded)
                        {
                          Context_1291 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_67);
                          check_hlds__simplify__simplify_goal_call__simplify_make_int_const_5_p_0(NumTargetBits_1431, &NumTargetBitsConstVar_1228, &NumTargetBitsConstGoal_1229, STATE_VARIABLE_Info_0_69, &STATE_VARIABLE_Info_170_1248);
                          PrivateBuiltin_1230 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                          Var_1249 = (MR_String) "unsigned_lt";
                          Var_1250 = (MR_Integer) 0;
                          check_hlds__simplify__simplify_goal_call__simplify_make_cmp_goal_expr_8_p_0(STATE_VARIABLE_Info_170_1248, PrivateBuiltin_1230, Var_1249, Var_1250, Y_1574, NumTargetBitsConstVar_1228, Context_1291, &InRangeTestGoal_1231);
                          TypeCtorInfo_259_1292 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                          Var_1251 = parse_tree__set_of_var__make_singleton_1_f_0(TypeCtorInfo_259_1292, Y_1574);
                          Var_1252 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                          Var_1253 = (MR_Integer) 1;
                          Var_1254 = (MR_Integer) 0;
                          hlds__hlds_goal__goal_info_init_6_p_0(Var_1251, Var_1252, Var_1253, Var_1254, Context_1291, &TestConjGoalInfo_1232);
                          Var_1257 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            Var_1256 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_1256, 0) = ((MR_Box) (InRangeTestGoal_1231));
                            MR_hl_field(1, Var_1256, 1) = ((MR_Box) (Var_1257));
                          }
                          {
                            Var_1255 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_1255, 0) = ((MR_Box) (NumTargetBitsConstGoal_1229));
                            MR_hl_field(1, Var_1255, 1) = ((MR_Box) (Var_1256));
                          }
                          hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_1255, TestConjGoalInfo_1232, &TestConjGoal_1233);
                          Var_1258 = (MR_Integer) 0;
                          check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_170_1248, ModuleName_15, (MR_String) "unchecked_right_shift", Var_1258, X_1573, Y_1574, Z_1575, &UncheckedShiftGoalExpr_1234);
                          Var_2310 = (MR_String) "): second operand is out of range";
                          {
                            UncheckedShiftGoal_1235 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, UncheckedShiftGoal_1235, 0) = ((MR_Box) (UncheckedShiftGoalExpr_1234));
                            MR_hl_field(0, UncheckedShiftGoal_1235, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_0_67));
                          }
                          Var_2311 = mercury__string__f_43_43_2_f_0(PredName_16, Var_2310);
                          Var_2312 = (MR_String) ".(";
                          Var_2313 = mercury__string__f_43_43_2_f_0(Var_2312, Var_2311);
                          NotInRangeStr_1236 = mercury__string__f_43_43_2_f_0(ModuleName_15, Var_2313);
                          check_hlds__simplify__simplify_goal_call__simplify_make_string_const_5_p_0(NotInRangeStr_1236, &ErrorMsgStrVar_1237, &ErrorMsgStrGoal_1238, STATE_VARIABLE_Info_170_1248, &STATE_VARIABLE_Info_187_1265);
                          ExceptionType_1239 = parse_tree__builtin_lib_types__void_type_0_f_0();
                          check_hlds__simplify__simplify_goal_call__simplify_make_var_4_p_0(ExceptionType_1239, &ExceptionVar_1240, STATE_VARIABLE_Info_187_1265, STATE_VARIABLE_Info_70);
                          parse_tree__prog_type__type_to_ctor_det_2_p_0(ExceptionType_1239, &ExceptionTypeCtor_1241);
                          Var_1266 = (MR_String) "math_domain_error";
                          Var_1267 = (MR_Integer) 1;
                          Var_1269 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            ExceptionWrapperCtorSymName_1242 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, ExceptionWrapperCtorSymName_1242, 0) = ((MR_Box) (PrivateBuiltin_1230));
                            MR_hl_field(1, ExceptionWrapperCtorSymName_1242, 1) = ((MR_Box) (Var_1266));
                          }
                          {
                            ExceptionWrapperCtorConsId_1243 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, ExceptionWrapperCtorConsId_1243, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                            MR_hl_field(3, ExceptionWrapperCtorConsId_1243, 1) = ((MR_Box) (ExceptionWrapperCtorSymName_1242));
                            MR_hl_field(3, ExceptionWrapperCtorConsId_1243, 2) = ((MR_Box) (Var_1267));
                            MR_hl_field(3, ExceptionWrapperCtorConsId_1243, 3) = ((MR_Box) (ExceptionTypeCtor_1241));
                          }
                          {
                            Var_1268 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_1268, 0) = ((MR_Box) (ErrorMsgStrVar_1237));
                            MR_hl_field(1, Var_1268, 1) = ((MR_Box) (Var_1269));
                          }
                          hlds__make_goal__construct_functor_4_p_0(ExceptionVar_1240, ExceptionWrapperCtorConsId_1243, Var_1268, &WrapErrorMsgGoal_1244);
                          Var_1270 = (MR_Integer) 0;
                          Var_1271 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
                          Var_1272 = (MR_String) "throw";
                          Var_1273 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            Var_1274 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_1274, 0) = ((MR_Box) (ExceptionVar_1240));
                            MR_hl_field(1, Var_1274, 1) = ((MR_Box) (Var_1273));
                          }
                          Var_1275 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                          Var_1276 = (MR_Word) ((MR_Unsigned) 0U);
                          Var_1277 = (MR_Integer) 6;
                          Var_1278 = (MR_Integer) 0;
                          Var_1279 = (MR_Word) ((MR_Unsigned) 0U);
                          Var_1280 = mercury__term_context__dummy_context_0_f_0();
                          hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_23, Var_1270, Var_1271, Var_1272, Var_1273, Var_1274, Var_1275, Var_1276, Var_1277, Var_1278, Var_1279, Var_1280, &ThrowGoal_1245);
                          Var_1282 = parse_tree__set_of_var__init_0_f_0(TypeCtorInfo_259_1292);
                          Var_1283 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                          Var_1284 = (MR_Integer) 6;
                          Var_1285 = (MR_Integer) 0;
                          hlds__hlds_goal__goal_info_init_6_p_0(Var_1282, Var_1283, Var_1284, Var_1285, Context_1291, &ThrowConjGoalInfo_1246);
                          Var_1289 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            Var_1288 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_1288, 0) = ((MR_Box) (ThrowGoal_1245));
                            MR_hl_field(1, Var_1288, 1) = ((MR_Box) (Var_1289));
                          }
                          {
                            Var_1287 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_1287, 0) = ((MR_Box) (WrapErrorMsgGoal_1244));
                            MR_hl_field(1, Var_1287, 1) = ((MR_Box) (Var_1288));
                          }
                          {
                            Var_1286 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_1286, 0) = ((MR_Box) (ErrorMsgStrGoal_1238));
                            MR_hl_field(1, Var_1286, 1) = ((MR_Box) (Var_1287));
                          }
                          hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_1286, ThrowConjGoalInfo_1246, &ThrowConjGoal_1247);
                          Var_1290 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                            *ImprovedGoalExpr_20 = base;
                            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                            MR_hl_field(3, base, 1) = ((MR_Box) (Var_1290));
                            MR_hl_field(3, base, 2) = ((MR_Box) (TestConjGoal_1233));
                            MR_hl_field(3, base, 3) = ((MR_Box) (UncheckedShiftGoal_1235));
                            MR_hl_field(3, base, 4) = ((MR_Box) (ThrowConjGoal_1247));
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
              MR_Word Var_264;
              MR_Word Var_265;
              MR_Word Var_266;
              MR_Word Var_267;
              MR_Word ConsY_302;
              MR_Word Z_322;
              MR_Word InstY_323;
              MR_Word Var_331;
              MR_Word Var_332;
              MR_Word Var_333;
              MR_Word X_350;
              MR_Word Y_351;

              succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_350 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 0))));
                Var_331 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 1))));
                succeeded = (Var_331 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_351 = ((MR_Word) ((MR_hl_field(1, Var_331, (MR_Integer) 0))));
                  Var_332 = ((MR_Word) ((MR_hl_field(1, Var_331, (MR_Integer) 1))));
                  succeeded = (Var_332 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_322 = ((MR_Word) ((MR_hl_field(1, Var_332, (MR_Integer) 0))));
                    Var_333 = ((MR_Word) ((MR_hl_field(1, Var_332, (MR_Integer) 1))));
                    succeeded = (Var_333 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_14, Y_351, &InstY_323);
                      succeeded = ((((MR_tag((MR_Word) InstY_323)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, InstY_323, (MR_Integer) 0)))) == (MR_Integer) 0)));
                      if (succeeded)
                      {
                        Var_264 = ((MR_Word) ((MR_hl_field(3, InstY_323, (MR_Integer) 3))));
                        succeeded = (Var_264 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_265 = ((MR_Word) ((MR_hl_field(1, Var_264, (MR_Integer) 0))));
                          Var_267 = ((MR_Word) ((MR_hl_field(1, Var_264, (MR_Integer) 1))));
                          succeeded = (Var_267 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            ConsY_302 = ((MR_Word) ((MR_hl_field(0, Var_265, (MR_Integer) 0))));
                            Var_266 = ((MR_Word) ((MR_hl_field(0, Var_265, (MR_Integer) 1))));
                            succeeded = (Var_266 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = check_hlds__simplify__simplify_goal_call__is_zero_const_2_p_0(IntType_13, ConsY_302);
                              if (succeeded)
                              {
                                MR_Word Context_268;
                                MR_Word SymName_269;
                                MR_Word Pieces_270;
                                MR_Word Spec_271;
                                MR_Word Var_272;
                                MR_Word Var_275;
                                MR_Word Var_276;

                                *ImprovedGoalExpr_20 = GoalExpr0_19;
                                Context_268 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_67);
                                {
                                  Var_272 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(0, Var_272, 0) = ((MR_Box) (ModuleName_15));
                                }
                                {
                                  SymName_269 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(1, SymName_269, 0) = ((MR_Box) (Var_272));
                                  MR_hl_field(1, SymName_269, 1) = ((MR_Box) (PredName_16));
                                }
                                {
                                  Var_276 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(3, Var_276, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                                  MR_hl_field(3, Var_276, 1) = ((MR_Box) (SymName_269));
                                }
                                {
                                  Var_275 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(1, Var_275, 0) = ((MR_Box) (Var_276));
                                  MR_hl_field(1, Var_275, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[76])));
                                }
                                {
                                  Pieces_270 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(1, Pieces_270, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[74])));
                                  MR_hl_field(1, Pieces_270, 1) = ((MR_Box) (Var_275));
                                }
                                {
                                  Spec_271 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(1, Spec_271, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_improve_arith_shift_cmp_ops\'/12"));
                                  MR_hl_field(1, Spec_271, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                  MR_hl_field(1, Spec_271, 2) = ((MR_Box) (MR_mkword(2, &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
                                  MR_hl_field(1, Spec_271, 3) = ((MR_Box) (Context_268));
                                  MR_hl_field(1, Spec_271, 4) = ((MR_Box) (Pieces_270));
                                }
                                check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_271, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                MR_Word Var_282;

                                succeeded = check_hlds__simplify__simplify_goal_call__is_int_const_2_p_0(IntType_13, ConsY_302);
                                if (succeeded)
                                {
                                  Var_282 = (MR_Integer) 0;
                                  check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_69, ModuleName_15, (MR_String) "unchecked_quotient", Var_282, X_350, Y_351, Z_322, ImprovedGoalExpr_20);
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
              MR_Integer NumTargetBits_2044;
              MR_Word Var_2073;
              MR_Word Var_2074;
              MR_Word Var_2075;
              MR_Word X_2186;
              MR_Word Y_2187;
              MR_Word Z_2188;
              MR_Word InstY_2189;
              MR_Word YConst_1908;
              MR_Word Var_1588;
              MR_Word Var_1589;
              MR_Word Var_1590;
              MR_Word Var_1591;
              MR_Word Var_1592;

              succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_2186 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 0))));
                Var_2073 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 1))));
                succeeded = (Var_2073 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_2187 = ((MR_Word) ((MR_hl_field(1, Var_2073, (MR_Integer) 0))));
                  Var_2074 = ((MR_Word) ((MR_hl_field(1, Var_2073, (MR_Integer) 1))));
                  succeeded = (Var_2074 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_2188 = ((MR_Word) ((MR_hl_field(1, Var_2074, (MR_Integer) 0))));
                    Var_2075 = ((MR_Word) ((MR_hl_field(1, Var_2074, (MR_Integer) 1))));
                    succeeded = (Var_2075 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      NumTargetBits_2044 = check_hlds__simplify__simplify_goal_call__int_type_target_bits_2_f_0(Globals_24, IntType_13);
                      hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_14, Y_2187, &InstY_2189);
                      succeeded = ((((MR_tag((MR_Word) InstY_2189)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, InstY_2189, (MR_Integer) 0)))) == (MR_Integer) 0)));
                      if (succeeded)
                      {
                        Var_1588 = ((MR_Word) ((MR_hl_field(3, InstY_2189, (MR_Integer) 3))));
                        succeeded = (Var_1588 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_1589 = ((MR_Word) ((MR_hl_field(1, Var_1588, (MR_Integer) 0))));
                          Var_1592 = ((MR_Word) ((MR_hl_field(1, Var_1588, (MR_Integer) 1))));
                          succeeded = (Var_1592 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_1590 = ((MR_Word) ((MR_hl_field(0, Var_1589, (MR_Integer) 0))));
                            Var_1591 = ((MR_Word) ((MR_hl_field(0, Var_1589, (MR_Integer) 1))));
                            succeeded = (Var_1591 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = ((((MR_tag((MR_Word) Var_1590)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_1590, (MR_Integer) 0)))) == (MR_Integer) 5)));
                              if (succeeded)
                              {
                                YConst_1908 = ((MR_Word) ((MR_hl_field(3, Var_1590, (MR_Integer) 1))));
                                if (((MR_tag((MR_Word) YConst_1908)) == (MR_Integer) 0))
                                  succeeded = MR_TRUE;
                                else
                                if (((MR_tag((MR_Word) YConst_1908)) == (MR_Integer) 1))
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
                        if (((MR_tag((MR_Word) YConst_1908)) == (MR_Integer) 0))
                        {
                          MR_Integer YIntVal_1667 = ((MR_Integer) ((MR_hl_field(0, YConst_1908, (MR_Integer) 0))));

                          succeeded = ((MR_Integer) 0 <= YIntVal_1667);
                          if (succeeded)
                            succeeded = (YIntVal_1667 < NumTargetBits_2044);
                          if (succeeded)
                          {
                            check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_69, ModuleName_15, (MR_String) "unchecked_right_ushift", (MR_Integer) 0, X_2186, Y_2187, Z_2188, ImprovedGoalExpr_20);
                            *STATE_VARIABLE_Info_70 = STATE_VARIABLE_Info_0_69;
                          }
                          else
                          {
                            MR_String Exclusive_1595;
                            MR_Word Var_1596;
                            MR_Word Var_1603;
                            MR_Word Var_1604;
                            MR_Word Var_1605;
                            MR_Word Var_1608;
                            MR_Word Var_1611;
                            MR_Word Var_1614;
                            MR_Word Var_1617;
                            MR_Word Var_1618;
                            MR_Word Context_1626;
                            MR_Word SymName_1627;
                            MR_Word Pieces_1628;
                            MR_Word Spec_1629;
                            MR_String Var_2291;

                            *ImprovedGoalExpr_20 = GoalExpr0_19;
                            Context_1626 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_67);
                            {
                              Var_1596 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(0, Var_1596, 0) = ((MR_Box) (ModuleName_15));
                            }
                            {
                              SymName_1627 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, SymName_1627, 0) = ((MR_Box) (Var_1596));
                              MR_hl_field(1, SymName_1627, 1) = ((MR_Box) (PredName_16));
                            }
                            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_2[3]), NumTargetBits_2044, &Var_2291);
                            Exclusive_1595 = mercury__string__f_43_43_2_f_0(Var_2291, (MR_String) " (exclusive).");
                            {
                              Var_1604 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(3, Var_1604, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                              MR_hl_field(3, Var_1604, 1) = ((MR_Box) (SymName_1627));
                            }
                            {
                              Var_1618 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(2, Var_1618, 0) = ((MR_Box) (Exclusive_1595));
                            }
                            {
                              Var_1617 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_1617, 0) = ((MR_Box) (Var_1618));
                              MR_hl_field(1, Var_1617, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[3])));
                            }
                            {
                              Var_1614 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_1614, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[79])));
                              MR_hl_field(1, Var_1614, 1) = ((MR_Box) (Var_1617));
                            }
                            {
                              Var_1611 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_1611, 0) = ((MR_Box) (MR_mkword(2, &check_hlds__simplify__simplify_goal_call_scalar_common_2[4])));
                              MR_hl_field(1, Var_1611, 1) = ((MR_Box) (Var_1614));
                            }
                            {
                              Var_1608 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_1608, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[78])));
                              MR_hl_field(1, Var_1608, 1) = ((MR_Box) (Var_1611));
                            }
                            {
                              Var_1605 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_1605, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[77])));
                              MR_hl_field(1, Var_1605, 1) = ((MR_Box) (Var_1608));
                            }
                            {
                              Var_1603 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_1603, 0) = ((MR_Box) (Var_1604));
                              MR_hl_field(1, Var_1603, 1) = ((MR_Box) (Var_1605));
                            }
                            {
                              Pieces_1628 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Pieces_1628, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[74])));
                              MR_hl_field(1, Pieces_1628, 1) = ((MR_Box) (Var_1603));
                            }
                            {
                              Spec_1629 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Spec_1629, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_improve_arith_shift_cmp_ops\'/12"));
                              MR_hl_field(1, Spec_1629, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                              MR_hl_field(1, Spec_1629, 2) = ((MR_Box) (MR_mkword(2, &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
                              MR_hl_field(1, Spec_1629, 3) = ((MR_Box) (Context_1626));
                              MR_hl_field(1, Spec_1629, 4) = ((MR_Box) (Pieces_1628));
                            }
                            check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_1629, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
                          }
                        }
                        else
                        {
                          MR_Unsigned YUintVal_1753 = ((MR_Unsigned) ((MR_hl_field(1, YConst_1908, (MR_Integer) 0))));
                          MR_Unsigned Var_1705;

                          Var_1705 = mercury__uint__det_from_int_1_f_0(NumTargetBits_2044);
                          succeeded = (YUintVal_1753 < Var_1705);
                          if (succeeded)
                          {
                            check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_69, ModuleName_15, (MR_String) "unchecked_right_ushift", (MR_Integer) 0, X_2186, Y_2187, Z_2188, ImprovedGoalExpr_20);
                            *STATE_VARIABLE_Info_70 = STATE_VARIABLE_Info_0_69;
                          }
                          else
                          {
                            MR_Word Var_1707;
                            MR_Word Var_1710;
                            MR_Word Var_1711;
                            MR_Word Var_1712;
                            MR_Word Var_1715;
                            MR_Word Var_1718;
                            MR_Word Var_1719;
                            MR_Word Context_1725;
                            MR_Word SymName_1726;
                            MR_Word Pieces_1727;
                            MR_Word Spec_1728;

                            *ImprovedGoalExpr_20 = GoalExpr0_19;
                            Context_1725 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_67);
                            {
                              Var_1707 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(0, Var_1707, 0) = ((MR_Box) (ModuleName_15));
                            }
                            {
                              SymName_1726 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, SymName_1726, 0) = ((MR_Box) (Var_1707));
                              MR_hl_field(1, SymName_1726, 1) = ((MR_Box) (PredName_16));
                            }
                            {
                              Var_1711 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(3, Var_1711, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                              MR_hl_field(3, Var_1711, 1) = ((MR_Box) (SymName_1726));
                            }
                            {
                              Var_1719 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(3, Var_1719, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                              MR_hl_field(3, Var_1719, 1) = ((MR_Box) (NumTargetBits_2044));
                            }
                            {
                              Var_1718 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_1718, 0) = ((MR_Box) (Var_1719));
                              MR_hl_field(1, Var_1718, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[18])));
                            }
                            {
                              Var_1715 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_1715, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[81])));
                              MR_hl_field(1, Var_1715, 1) = ((MR_Box) (Var_1718));
                            }
                            {
                              Var_1712 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_1712, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[80])));
                              MR_hl_field(1, Var_1712, 1) = ((MR_Box) (Var_1715));
                            }
                            {
                              Var_1710 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_1710, 0) = ((MR_Box) (Var_1711));
                              MR_hl_field(1, Var_1710, 1) = ((MR_Box) (Var_1712));
                            }
                            {
                              Pieces_1727 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Pieces_1727, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[74])));
                              MR_hl_field(1, Pieces_1727, 1) = ((MR_Box) (Var_1710));
                            }
                            {
                              Spec_1728 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Spec_1728, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_improve_arith_shift_cmp_ops\'/12"));
                              MR_hl_field(1, Spec_1728, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                              MR_hl_field(1, Spec_1728, 2) = ((MR_Box) (MR_mkword(2, &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
                              MR_hl_field(1, Spec_1728, 3) = ((MR_Box) (Context_1725));
                              MR_hl_field(1, Spec_1728, 4) = ((MR_Box) (Pieces_1727));
                            }
                            check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_1728, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
                          }
                        }
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        MR_Word TypeCtorInfo_259_1905;
                        MR_Word NumTargetBitsConstVar_1841;
                        MR_Word NumTargetBitsConstGoal_1842;
                        MR_Word PrivateBuiltin_1843;
                        MR_Word InRangeTestGoal_1844;
                        MR_Word TestConjGoalInfo_1845;
                        MR_Word TestConjGoal_1846;
                        MR_Word UncheckedShiftGoalExpr_1847;
                        MR_Word UncheckedShiftGoal_1848;
                        MR_String NotInRangeStr_1849;
                        MR_Word ErrorMsgStrVar_1850;
                        MR_Word ErrorMsgStrGoal_1851;
                        MR_Word ExceptionType_1852;
                        MR_Word ExceptionVar_1853;
                        MR_Word ExceptionTypeCtor_1854;
                        MR_Word ExceptionWrapperCtorSymName_1855;
                        MR_Word ExceptionWrapperCtorConsId_1856;
                        MR_Word WrapErrorMsgGoal_1857;
                        MR_Word ThrowGoal_1858;
                        MR_Word ThrowConjGoalInfo_1859;
                        MR_Word ThrowConjGoal_1860;
                        MR_Word STATE_VARIABLE_Info_170_1861;
                        MR_String Var_1862;
                        MR_Word Var_1863;
                        MR_Word Var_1864;
                        MR_Word Var_1865;
                        MR_Word Var_1866;
                        MR_Word Var_1867;
                        MR_Word Var_1868;
                        MR_Word Var_1869;
                        MR_Word Var_1870;
                        MR_Word Var_1871;
                        MR_Word STATE_VARIABLE_Info_187_1878;
                        MR_String Var_1879;
                        MR_Integer Var_1880;
                        MR_Word Var_1881;
                        MR_Word Var_1882;
                        MR_Word Var_1883;
                        MR_Word Var_1884;
                        MR_String Var_1885;
                        MR_Word Var_1886;
                        MR_Word Var_1887;
                        MR_Word Var_1888;
                        MR_Word Var_1889;
                        MR_Word Var_1890;
                        MR_Word Var_1891;
                        MR_Word Var_1892;
                        MR_Word Var_1893;
                        MR_Word Var_1895;
                        MR_Word Var_1896;
                        MR_Word Var_1897;
                        MR_Word Var_1898;
                        MR_Word Var_1899;
                        MR_Word Var_1900;
                        MR_Word Var_1901;
                        MR_Word Var_1902;
                        MR_Word Var_1903;
                        MR_Word Context_1904;
                        MR_String Var_2298;
                        MR_String Var_2299;
                        MR_String Var_2300;
                        MR_String Var_2301;

                        succeeded = mercury__builtin__semidet_fail_0_p_0();
                        if (succeeded)
                        {
                          Context_1904 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_67);
                          check_hlds__simplify__simplify_goal_call__simplify_make_int_const_5_p_0(NumTargetBits_2044, &NumTargetBitsConstVar_1841, &NumTargetBitsConstGoal_1842, STATE_VARIABLE_Info_0_69, &STATE_VARIABLE_Info_170_1861);
                          PrivateBuiltin_1843 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                          Var_1862 = (MR_String) "unsigned_lt";
                          Var_1863 = (MR_Integer) 0;
                          check_hlds__simplify__simplify_goal_call__simplify_make_cmp_goal_expr_8_p_0(STATE_VARIABLE_Info_170_1861, PrivateBuiltin_1843, Var_1862, Var_1863, Y_2187, NumTargetBitsConstVar_1841, Context_1904, &InRangeTestGoal_1844);
                          TypeCtorInfo_259_1905 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                          Var_1864 = parse_tree__set_of_var__make_singleton_1_f_0(TypeCtorInfo_259_1905, Y_2187);
                          Var_1865 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                          Var_1866 = (MR_Integer) 1;
                          Var_1867 = (MR_Integer) 0;
                          hlds__hlds_goal__goal_info_init_6_p_0(Var_1864, Var_1865, Var_1866, Var_1867, Context_1904, &TestConjGoalInfo_1845);
                          Var_1870 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            Var_1869 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_1869, 0) = ((MR_Box) (InRangeTestGoal_1844));
                            MR_hl_field(1, Var_1869, 1) = ((MR_Box) (Var_1870));
                          }
                          {
                            Var_1868 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_1868, 0) = ((MR_Box) (NumTargetBitsConstGoal_1842));
                            MR_hl_field(1, Var_1868, 1) = ((MR_Box) (Var_1869));
                          }
                          hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_1868, TestConjGoalInfo_1845, &TestConjGoal_1846);
                          Var_1871 = (MR_Integer) 0;
                          check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_170_1861, ModuleName_15, (MR_String) "unchecked_right_ushift", Var_1871, X_2186, Y_2187, Z_2188, &UncheckedShiftGoalExpr_1847);
                          Var_2298 = (MR_String) "): second operand is out of range";
                          {
                            UncheckedShiftGoal_1848 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, UncheckedShiftGoal_1848, 0) = ((MR_Box) (UncheckedShiftGoalExpr_1847));
                            MR_hl_field(0, UncheckedShiftGoal_1848, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_0_67));
                          }
                          Var_2299 = mercury__string__f_43_43_2_f_0(PredName_16, Var_2298);
                          Var_2300 = (MR_String) ".(";
                          Var_2301 = mercury__string__f_43_43_2_f_0(Var_2300, Var_2299);
                          NotInRangeStr_1849 = mercury__string__f_43_43_2_f_0(ModuleName_15, Var_2301);
                          check_hlds__simplify__simplify_goal_call__simplify_make_string_const_5_p_0(NotInRangeStr_1849, &ErrorMsgStrVar_1850, &ErrorMsgStrGoal_1851, STATE_VARIABLE_Info_170_1861, &STATE_VARIABLE_Info_187_1878);
                          ExceptionType_1852 = parse_tree__builtin_lib_types__void_type_0_f_0();
                          check_hlds__simplify__simplify_goal_call__simplify_make_var_4_p_0(ExceptionType_1852, &ExceptionVar_1853, STATE_VARIABLE_Info_187_1878, STATE_VARIABLE_Info_70);
                          parse_tree__prog_type__type_to_ctor_det_2_p_0(ExceptionType_1852, &ExceptionTypeCtor_1854);
                          Var_1879 = (MR_String) "math_domain_error";
                          Var_1880 = (MR_Integer) 1;
                          Var_1882 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            ExceptionWrapperCtorSymName_1855 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, ExceptionWrapperCtorSymName_1855, 0) = ((MR_Box) (PrivateBuiltin_1843));
                            MR_hl_field(1, ExceptionWrapperCtorSymName_1855, 1) = ((MR_Box) (Var_1879));
                          }
                          {
                            ExceptionWrapperCtorConsId_1856 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, ExceptionWrapperCtorConsId_1856, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                            MR_hl_field(3, ExceptionWrapperCtorConsId_1856, 1) = ((MR_Box) (ExceptionWrapperCtorSymName_1855));
                            MR_hl_field(3, ExceptionWrapperCtorConsId_1856, 2) = ((MR_Box) (Var_1880));
                            MR_hl_field(3, ExceptionWrapperCtorConsId_1856, 3) = ((MR_Box) (ExceptionTypeCtor_1854));
                          }
                          {
                            Var_1881 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_1881, 0) = ((MR_Box) (ErrorMsgStrVar_1850));
                            MR_hl_field(1, Var_1881, 1) = ((MR_Box) (Var_1882));
                          }
                          hlds__make_goal__construct_functor_4_p_0(ExceptionVar_1853, ExceptionWrapperCtorConsId_1856, Var_1881, &WrapErrorMsgGoal_1857);
                          Var_1883 = (MR_Integer) 0;
                          Var_1884 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
                          Var_1885 = (MR_String) "throw";
                          Var_1886 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            Var_1887 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_1887, 0) = ((MR_Box) (ExceptionVar_1853));
                            MR_hl_field(1, Var_1887, 1) = ((MR_Box) (Var_1886));
                          }
                          Var_1888 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                          Var_1889 = (MR_Word) ((MR_Unsigned) 0U);
                          Var_1890 = (MR_Integer) 6;
                          Var_1891 = (MR_Integer) 0;
                          Var_1892 = (MR_Word) ((MR_Unsigned) 0U);
                          Var_1893 = mercury__term_context__dummy_context_0_f_0();
                          hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_23, Var_1883, Var_1884, Var_1885, Var_1886, Var_1887, Var_1888, Var_1889, Var_1890, Var_1891, Var_1892, Var_1893, &ThrowGoal_1858);
                          Var_1895 = parse_tree__set_of_var__init_0_f_0(TypeCtorInfo_259_1905);
                          Var_1896 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                          Var_1897 = (MR_Integer) 6;
                          Var_1898 = (MR_Integer) 0;
                          hlds__hlds_goal__goal_info_init_6_p_0(Var_1895, Var_1896, Var_1897, Var_1898, Context_1904, &ThrowConjGoalInfo_1859);
                          Var_1902 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            Var_1901 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_1901, 0) = ((MR_Box) (ThrowGoal_1858));
                            MR_hl_field(1, Var_1901, 1) = ((MR_Box) (Var_1902));
                          }
                          {
                            Var_1900 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_1900, 0) = ((MR_Box) (WrapErrorMsgGoal_1857));
                            MR_hl_field(1, Var_1900, 1) = ((MR_Box) (Var_1901));
                          }
                          {
                            Var_1899 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_1899, 0) = ((MR_Box) (ErrorMsgStrGoal_1851));
                            MR_hl_field(1, Var_1899, 1) = ((MR_Box) (Var_1900));
                          }
                          hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_1899, ThrowConjGoalInfo_1859, &ThrowConjGoal_1860);
                          Var_1903 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                            *ImprovedGoalExpr_20 = base;
                            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                            MR_hl_field(3, base, 1) = ((MR_Box) (Var_1903));
                            MR_hl_field(3, base, 2) = ((MR_Box) (TestConjGoal_1846));
                            MR_hl_field(3, base, 3) = ((MR_Box) (UncheckedShiftGoal_1848));
                            MR_hl_field(3, base, 4) = ((MR_Box) (ThrowConjGoal_1860));
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
              MR_Word Var_71;
              MR_Word Var_72;
              MR_Word Var_73;

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
                      libs__int_emu__target_bits_per_int_2_p_0(Globals_24, &Var_73);
                      TargetBitsPerInt_28 = (MR_Integer) (Var_73);
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
              MR_Integer NumTargetBits_818;
              MR_Word Var_847;
              MR_Word Var_848;
              MR_Word Var_849;
              MR_Word X_960;
              MR_Word Y_961;
              MR_Word Z_962;
              MR_Word InstY_963;
              MR_Word YConst_682;
              MR_Word Var_362;
              MR_Word Var_363;
              MR_Word Var_364;
              MR_Word Var_365;
              MR_Word Var_366;

              succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                X_960 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 0))));
                Var_847 = ((MR_Word) ((MR_hl_field(1, Args_18, (MR_Integer) 1))));
                succeeded = (Var_847 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Y_961 = ((MR_Word) ((MR_hl_field(1, Var_847, (MR_Integer) 0))));
                  Var_848 = ((MR_Word) ((MR_hl_field(1, Var_847, (MR_Integer) 1))));
                  succeeded = (Var_848 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Z_962 = ((MR_Word) ((MR_hl_field(1, Var_848, (MR_Integer) 0))));
                    Var_849 = ((MR_Word) ((MR_hl_field(1, Var_848, (MR_Integer) 1))));
                    succeeded = (Var_849 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      NumTargetBits_818 = check_hlds__simplify__simplify_goal_call__int_type_target_bits_2_f_0(Globals_24, IntType_13);
                      hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_14, Y_961, &InstY_963);
                      succeeded = ((((MR_tag((MR_Word) InstY_963)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, InstY_963, (MR_Integer) 0)))) == (MR_Integer) 0)));
                      if (succeeded)
                      {
                        Var_362 = ((MR_Word) ((MR_hl_field(3, InstY_963, (MR_Integer) 3))));
                        succeeded = (Var_362 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_363 = ((MR_Word) ((MR_hl_field(1, Var_362, (MR_Integer) 0))));
                          Var_366 = ((MR_Word) ((MR_hl_field(1, Var_362, (MR_Integer) 1))));
                          succeeded = (Var_366 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_364 = ((MR_Word) ((MR_hl_field(0, Var_363, (MR_Integer) 0))));
                            Var_365 = ((MR_Word) ((MR_hl_field(0, Var_363, (MR_Integer) 1))));
                            succeeded = (Var_365 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = ((((MR_tag((MR_Word) Var_364)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_364, (MR_Integer) 0)))) == (MR_Integer) 5)));
                              if (succeeded)
                              {
                                YConst_682 = ((MR_Word) ((MR_hl_field(3, Var_364, (MR_Integer) 1))));
                                if (((MR_tag((MR_Word) YConst_682)) == (MR_Integer) 0))
                                  succeeded = MR_TRUE;
                                else
                                if (((MR_tag((MR_Word) YConst_682)) == (MR_Integer) 1))
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
                        if (((MR_tag((MR_Word) YConst_682)) == (MR_Integer) 0))
                        {
                          MR_Integer YIntVal_441 = ((MR_Integer) ((MR_hl_field(0, YConst_682, (MR_Integer) 0))));

                          succeeded = ((MR_Integer) 0 <= YIntVal_441);
                          if (succeeded)
                            succeeded = (YIntVal_441 < NumTargetBits_818);
                          if (succeeded)
                          {
                            check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_69, ModuleName_15, (MR_String) "unchecked_left_ushift", (MR_Integer) 0, X_960, Y_961, Z_962, ImprovedGoalExpr_20);
                            *STATE_VARIABLE_Info_70 = STATE_VARIABLE_Info_0_69;
                          }
                          else
                          {
                            MR_String Exclusive_369;
                            MR_Word Var_370;
                            MR_Word Var_377;
                            MR_Word Var_378;
                            MR_Word Var_379;
                            MR_Word Var_382;
                            MR_Word Var_385;
                            MR_Word Var_388;
                            MR_Word Var_391;
                            MR_Word Var_392;
                            MR_Word Context_400;
                            MR_Word SymName_401;
                            MR_Word Pieces_402;
                            MR_Word Spec_403;
                            MR_String Var_2315;

                            *ImprovedGoalExpr_20 = GoalExpr0_19;
                            Context_400 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_67);
                            {
                              Var_370 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(0, Var_370, 0) = ((MR_Box) (ModuleName_15));
                            }
                            {
                              SymName_401 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, SymName_401, 0) = ((MR_Box) (Var_370));
                              MR_hl_field(1, SymName_401, 1) = ((MR_Box) (PredName_16));
                            }
                            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_2[3]), NumTargetBits_818, &Var_2315);
                            Exclusive_369 = mercury__string__f_43_43_2_f_0(Var_2315, (MR_String) " (exclusive).");
                            {
                              Var_378 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(3, Var_378, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                              MR_hl_field(3, Var_378, 1) = ((MR_Box) (SymName_401));
                            }
                            {
                              Var_392 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(2, Var_392, 0) = ((MR_Box) (Exclusive_369));
                            }
                            {
                              Var_391 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_391, 0) = ((MR_Box) (Var_392));
                              MR_hl_field(1, Var_391, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[3])));
                            }
                            {
                              Var_388 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_388, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[79])));
                              MR_hl_field(1, Var_388, 1) = ((MR_Box) (Var_391));
                            }
                            {
                              Var_385 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_385, 0) = ((MR_Box) (MR_mkword(2, &check_hlds__simplify__simplify_goal_call_scalar_common_2[4])));
                              MR_hl_field(1, Var_385, 1) = ((MR_Box) (Var_388));
                            }
                            {
                              Var_382 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_382, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[78])));
                              MR_hl_field(1, Var_382, 1) = ((MR_Box) (Var_385));
                            }
                            {
                              Var_379 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_379, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[77])));
                              MR_hl_field(1, Var_379, 1) = ((MR_Box) (Var_382));
                            }
                            {
                              Var_377 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_377, 0) = ((MR_Box) (Var_378));
                              MR_hl_field(1, Var_377, 1) = ((MR_Box) (Var_379));
                            }
                            {
                              Pieces_402 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Pieces_402, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[74])));
                              MR_hl_field(1, Pieces_402, 1) = ((MR_Box) (Var_377));
                            }
                            {
                              Spec_403 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Spec_403, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_improve_arith_shift_cmp_ops\'/12"));
                              MR_hl_field(1, Spec_403, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                              MR_hl_field(1, Spec_403, 2) = ((MR_Box) (MR_mkword(2, &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
                              MR_hl_field(1, Spec_403, 3) = ((MR_Box) (Context_400));
                              MR_hl_field(1, Spec_403, 4) = ((MR_Box) (Pieces_402));
                            }
                            check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_403, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
                          }
                        }
                        else
                        {
                          MR_Unsigned YUintVal_527 = ((MR_Unsigned) ((MR_hl_field(1, YConst_682, (MR_Integer) 0))));
                          MR_Unsigned Var_479;

                          Var_479 = mercury__uint__det_from_int_1_f_0(NumTargetBits_818);
                          succeeded = (YUintVal_527 < Var_479);
                          if (succeeded)
                          {
                            check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_0_69, ModuleName_15, (MR_String) "unchecked_left_ushift", (MR_Integer) 0, X_960, Y_961, Z_962, ImprovedGoalExpr_20);
                            *STATE_VARIABLE_Info_70 = STATE_VARIABLE_Info_0_69;
                          }
                          else
                          {
                            MR_Word Var_481;
                            MR_Word Var_484;
                            MR_Word Var_485;
                            MR_Word Var_486;
                            MR_Word Var_489;
                            MR_Word Var_492;
                            MR_Word Var_493;
                            MR_Word Context_499;
                            MR_Word SymName_500;
                            MR_Word Pieces_501;
                            MR_Word Spec_502;

                            *ImprovedGoalExpr_20 = GoalExpr0_19;
                            Context_499 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_67);
                            {
                              Var_481 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(0, Var_481, 0) = ((MR_Box) (ModuleName_15));
                            }
                            {
                              SymName_500 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, SymName_500, 0) = ((MR_Box) (Var_481));
                              MR_hl_field(1, SymName_500, 1) = ((MR_Box) (PredName_16));
                            }
                            {
                              Var_485 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(3, Var_485, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                              MR_hl_field(3, Var_485, 1) = ((MR_Box) (SymName_500));
                            }
                            {
                              Var_493 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(3, Var_493, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                              MR_hl_field(3, Var_493, 1) = ((MR_Box) (NumTargetBits_818));
                            }
                            {
                              Var_492 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_492, 0) = ((MR_Box) (Var_493));
                              MR_hl_field(1, Var_492, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[18])));
                            }
                            {
                              Var_489 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_489, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[81])));
                              MR_hl_field(1, Var_489, 1) = ((MR_Box) (Var_492));
                            }
                            {
                              Var_486 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_486, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[80])));
                              MR_hl_field(1, Var_486, 1) = ((MR_Box) (Var_489));
                            }
                            {
                              Var_484 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_484, 0) = ((MR_Box) (Var_485));
                              MR_hl_field(1, Var_484, 1) = ((MR_Box) (Var_486));
                            }
                            {
                              Pieces_501 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Pieces_501, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[74])));
                              MR_hl_field(1, Pieces_501, 1) = ((MR_Box) (Var_484));
                            }
                            {
                              Spec_502 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Spec_502, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.simplify_improve_arith_shift_cmp_ops\'/12"));
                              MR_hl_field(1, Spec_502, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                              MR_hl_field(1, Spec_502, 2) = ((MR_Box) (MR_mkword(2, &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
                              MR_hl_field(1, Spec_502, 3) = ((MR_Box) (Context_499));
                              MR_hl_field(1, Spec_502, 4) = ((MR_Box) (Pieces_501));
                            }
                            check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_502, STATE_VARIABLE_Info_0_69, STATE_VARIABLE_Info_70);
                          }
                        }
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        MR_Word TypeCtorInfo_259_679;
                        MR_Word NumTargetBitsConstVar_615;
                        MR_Word NumTargetBitsConstGoal_616;
                        MR_Word PrivateBuiltin_617;
                        MR_Word InRangeTestGoal_618;
                        MR_Word TestConjGoalInfo_619;
                        MR_Word TestConjGoal_620;
                        MR_Word UncheckedShiftGoalExpr_621;
                        MR_Word UncheckedShiftGoal_622;
                        MR_String NotInRangeStr_623;
                        MR_Word ErrorMsgStrVar_624;
                        MR_Word ErrorMsgStrGoal_625;
                        MR_Word ExceptionType_626;
                        MR_Word ExceptionVar_627;
                        MR_Word ExceptionTypeCtor_628;
                        MR_Word ExceptionWrapperCtorSymName_629;
                        MR_Word ExceptionWrapperCtorConsId_630;
                        MR_Word WrapErrorMsgGoal_631;
                        MR_Word ThrowGoal_632;
                        MR_Word ThrowConjGoalInfo_633;
                        MR_Word ThrowConjGoal_634;
                        MR_Word STATE_VARIABLE_Info_170_635;
                        MR_String Var_636;
                        MR_Word Var_637;
                        MR_Word Var_638;
                        MR_Word Var_639;
                        MR_Word Var_640;
                        MR_Word Var_641;
                        MR_Word Var_642;
                        MR_Word Var_643;
                        MR_Word Var_644;
                        MR_Word Var_645;
                        MR_Word STATE_VARIABLE_Info_187_652;
                        MR_String Var_653;
                        MR_Integer Var_654;
                        MR_Word Var_655;
                        MR_Word Var_656;
                        MR_Word Var_657;
                        MR_Word Var_658;
                        MR_String Var_659;
                        MR_Word Var_660;
                        MR_Word Var_661;
                        MR_Word Var_662;
                        MR_Word Var_663;
                        MR_Word Var_664;
                        MR_Word Var_665;
                        MR_Word Var_666;
                        MR_Word Var_667;
                        MR_Word Var_669;
                        MR_Word Var_670;
                        MR_Word Var_671;
                        MR_Word Var_672;
                        MR_Word Var_673;
                        MR_Word Var_674;
                        MR_Word Var_675;
                        MR_Word Var_676;
                        MR_Word Var_677;
                        MR_Word Context_678;
                        MR_String Var_2322;
                        MR_String Var_2323;
                        MR_String Var_2324;
                        MR_String Var_2325;

                        succeeded = mercury__builtin__semidet_fail_0_p_0();
                        if (succeeded)
                        {
                          Context_678 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_67);
                          check_hlds__simplify__simplify_goal_call__simplify_make_int_const_5_p_0(NumTargetBits_818, &NumTargetBitsConstVar_615, &NumTargetBitsConstGoal_616, STATE_VARIABLE_Info_0_69, &STATE_VARIABLE_Info_170_635);
                          PrivateBuiltin_617 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                          Var_636 = (MR_String) "unsigned_lt";
                          Var_637 = (MR_Integer) 0;
                          check_hlds__simplify__simplify_goal_call__simplify_make_cmp_goal_expr_8_p_0(STATE_VARIABLE_Info_170_635, PrivateBuiltin_617, Var_636, Var_637, Y_961, NumTargetBitsConstVar_615, Context_678, &InRangeTestGoal_618);
                          TypeCtorInfo_259_679 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                          Var_638 = parse_tree__set_of_var__make_singleton_1_f_0(TypeCtorInfo_259_679, Y_961);
                          Var_639 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                          Var_640 = (MR_Integer) 1;
                          Var_641 = (MR_Integer) 0;
                          hlds__hlds_goal__goal_info_init_6_p_0(Var_638, Var_639, Var_640, Var_641, Context_678, &TestConjGoalInfo_619);
                          Var_644 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            Var_643 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_643, 0) = ((MR_Box) (InRangeTestGoal_618));
                            MR_hl_field(1, Var_643, 1) = ((MR_Box) (Var_644));
                          }
                          {
                            Var_642 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_642, 0) = ((MR_Box) (NumTargetBitsConstGoal_616));
                            MR_hl_field(1, Var_642, 1) = ((MR_Box) (Var_643));
                          }
                          hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_642, TestConjGoalInfo_619, &TestConjGoal_620);
                          Var_645 = (MR_Integer) 0;
                          check_hlds__simplify__simplify_goal_call__simplify_make_binary_op_goal_expr_8_p_0(STATE_VARIABLE_Info_170_635, ModuleName_15, (MR_String) "unchecked_left_ushift", Var_645, X_960, Y_961, Z_962, &UncheckedShiftGoalExpr_621);
                          Var_2322 = (MR_String) "): second operand is out of range";
                          {
                            UncheckedShiftGoal_622 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, UncheckedShiftGoal_622, 0) = ((MR_Box) (UncheckedShiftGoalExpr_621));
                            MR_hl_field(0, UncheckedShiftGoal_622, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_0_67));
                          }
                          Var_2323 = mercury__string__f_43_43_2_f_0(PredName_16, Var_2322);
                          Var_2324 = (MR_String) ".(";
                          Var_2325 = mercury__string__f_43_43_2_f_0(Var_2324, Var_2323);
                          NotInRangeStr_623 = mercury__string__f_43_43_2_f_0(ModuleName_15, Var_2325);
                          check_hlds__simplify__simplify_goal_call__simplify_make_string_const_5_p_0(NotInRangeStr_623, &ErrorMsgStrVar_624, &ErrorMsgStrGoal_625, STATE_VARIABLE_Info_170_635, &STATE_VARIABLE_Info_187_652);
                          ExceptionType_626 = parse_tree__builtin_lib_types__void_type_0_f_0();
                          check_hlds__simplify__simplify_goal_call__simplify_make_var_4_p_0(ExceptionType_626, &ExceptionVar_627, STATE_VARIABLE_Info_187_652, STATE_VARIABLE_Info_70);
                          parse_tree__prog_type__type_to_ctor_det_2_p_0(ExceptionType_626, &ExceptionTypeCtor_628);
                          Var_653 = (MR_String) "math_domain_error";
                          Var_654 = (MR_Integer) 1;
                          Var_656 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            ExceptionWrapperCtorSymName_629 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, ExceptionWrapperCtorSymName_629, 0) = ((MR_Box) (PrivateBuiltin_617));
                            MR_hl_field(1, ExceptionWrapperCtorSymName_629, 1) = ((MR_Box) (Var_653));
                          }
                          {
                            ExceptionWrapperCtorConsId_630 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, ExceptionWrapperCtorConsId_630, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                            MR_hl_field(3, ExceptionWrapperCtorConsId_630, 1) = ((MR_Box) (ExceptionWrapperCtorSymName_629));
                            MR_hl_field(3, ExceptionWrapperCtorConsId_630, 2) = ((MR_Box) (Var_654));
                            MR_hl_field(3, ExceptionWrapperCtorConsId_630, 3) = ((MR_Box) (ExceptionTypeCtor_628));
                          }
                          {
                            Var_655 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_655, 0) = ((MR_Box) (ErrorMsgStrVar_624));
                            MR_hl_field(1, Var_655, 1) = ((MR_Box) (Var_656));
                          }
                          hlds__make_goal__construct_functor_4_p_0(ExceptionVar_627, ExceptionWrapperCtorConsId_630, Var_655, &WrapErrorMsgGoal_631);
                          Var_657 = (MR_Integer) 0;
                          Var_658 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
                          Var_659 = (MR_String) "throw";
                          Var_660 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            Var_661 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_661, 0) = ((MR_Box) (ExceptionVar_627));
                            MR_hl_field(1, Var_661, 1) = ((MR_Box) (Var_660));
                          }
                          Var_662 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                          Var_663 = (MR_Word) ((MR_Unsigned) 0U);
                          Var_664 = (MR_Integer) 6;
                          Var_665 = (MR_Integer) 0;
                          Var_666 = (MR_Word) ((MR_Unsigned) 0U);
                          Var_667 = mercury__term_context__dummy_context_0_f_0();
                          hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_23, Var_657, Var_658, Var_659, Var_660, Var_661, Var_662, Var_663, Var_664, Var_665, Var_666, Var_667, &ThrowGoal_632);
                          Var_669 = parse_tree__set_of_var__init_0_f_0(TypeCtorInfo_259_679);
                          Var_670 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
                          Var_671 = (MR_Integer) 6;
                          Var_672 = (MR_Integer) 0;
                          hlds__hlds_goal__goal_info_init_6_p_0(Var_669, Var_670, Var_671, Var_672, Context_678, &ThrowConjGoalInfo_633);
                          Var_676 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            Var_675 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_675, 0) = ((MR_Box) (ThrowGoal_632));
                            MR_hl_field(1, Var_675, 1) = ((MR_Box) (Var_676));
                          }
                          {
                            Var_674 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_674, 0) = ((MR_Box) (WrapErrorMsgGoal_631));
                            MR_hl_field(1, Var_674, 1) = ((MR_Box) (Var_675));
                          }
                          {
                            Var_673 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_673, 0) = ((MR_Box) (ErrorMsgStrGoal_625));
                            MR_hl_field(1, Var_673, 1) = ((MR_Box) (Var_674));
                          }
                          hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_673, ThrowConjGoalInfo_633, &ThrowConjGoal_634);
                          Var_677 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                            *ImprovedGoalExpr_20 = base;
                            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                            MR_hl_field(3, base, 1) = ((MR_Box) (Var_677));
                            MR_hl_field(3, base, 2) = ((MR_Box) (TestConjGoal_620));
                            MR_hl_field(3, base, 3) = ((MR_Box) (UncheckedShiftGoal_622));
                            MR_hl_field(3, base, 4) = ((MR_Box) (ThrowConjGoal_634));
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
      slot_0 = ((&check_hlds__simplify__simplify_goal_call_vector_common_7[18 + slot_0]))->check_hlds__simplify__simplify_goal_call__vector_common_type_7_0__vct_7_f_1;
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
    MR_hl_field(1, GoalExpr_19, 4) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[73]));
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
    MR_hl_field(1, GoalExpr_20, 4) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[73]));
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
  ModuleSymName_17 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0(Var_25);
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
check_hlds__simplify__simplify_goal_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_109_112_108_105_102_121_95_105_109_112_114_111_118_101_95_98_117_105_108_116_105_110_95_99_111_109_112_97_114_101_95_95_91_49_93_95_48_7_p_0(
  MR_Word Args_9,
  MR_Word Context_10,
  MR_Word * GoalExpr_11,
  MR_Word * GoalInfo_12,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36)
{
  MR_bool succeeded;
  MR_Word TypeInfo_85_85;
  MR_Word TypeCtorInfo_86_86;
  MR_Word ModuleInfo_14;
  MR_Word Y_15;
  MR_Word X_16;
  MR_Word R_17;
  MR_Word VarTable_19;
  MR_Word Type_20;
  MR_Word CmpEqGoal_21;
  MR_Word CmpLtGoal_22;
  MR_Word Builtin_23;
  MR_Word CmpRes_24;
  MR_Word CmpResTypeCtor_25;
  MR_Word FunctorResultLt_26;
  MR_Word FunctorResultEq_27;
  MR_Word FunctorResultGt_28;
  MR_Word ReturnLtGoal_29;
  MR_Word ReturnEqGoal_30;
  MR_Word ReturnGtGoal_31;
  MR_Word NonLocals_32;
  MR_Word ReturnLtGtGoalExpr_33;
  MR_Word ReturnLtGtGoal_34;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_String Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_String Var_54;
  MR_Word Var_55;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_64;
  MR_String Var_65;
  MR_Integer Var_66;
  MR_Word Var_67;
  MR_String Var_68;
  MR_Word Var_70;
  MR_String Var_71;
  MR_Word Var_73;
  MR_String Var_74;
  MR_Word Var_76;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word Var_83;

  succeeded = mercury__builtin__semidet_fail_0_p_0();
  if (succeeded)
  {
    check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_35, &ModuleInfo_14);
    TypeInfo_85_85 = (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[0]);
    mercury__list__reverse_2_p_0(TypeInfo_85_85, Args_9, &Var_37);
    succeeded = (Var_37 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Y_15 = ((MR_Word) ((MR_hl_field(1, Var_37, (MR_Integer) 0))));
      Var_38 = ((MR_Word) ((MR_hl_field(1, Var_37, (MR_Integer) 1))));
      succeeded = (Var_38 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        X_16 = ((MR_Word) ((MR_hl_field(1, Var_38, (MR_Integer) 0))));
        Var_39 = ((MR_Word) ((MR_hl_field(1, Var_38, (MR_Integer) 1))));
        succeeded = (Var_39 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          R_17 = ((MR_Word) ((MR_hl_field(1, Var_39, (MR_Integer) 0))));
          check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_35, &VarTable_19);
          parse_tree__var_table__lookup_var_type_3_p_0(VarTable_19, Y_15, &Type_20);
          succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_equality_pred_2_p_0(ModuleInfo_14, Type_20);
          if (succeeded)
          {
            Var_40 = (MR_Integer) 0;
            Var_41 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
            Var_42 = (MR_String) "builtin_compound_eq";
            Var_43 = (MR_Word) ((MR_Unsigned) 0U);
            {
              Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_50, 0) = ((MR_Box) (Y_15));
              MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_43));
            }
            {
              Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_44, 0) = ((MR_Box) (X_16));
              MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_50));
            }
            Var_45 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
            Var_46 = (MR_Word) ((MR_Unsigned) 0U);
            Var_47 = (MR_Integer) 1;
            Var_48 = (MR_Integer) 0;
            Var_49 = (MR_Word) ((MR_Unsigned) 0U);
            hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_14, Var_40, Var_41, Var_42, Var_43, Var_44, Var_45, Var_46, Var_47, Var_48, Var_49, Context_10, &CmpEqGoal_21);
            Var_52 = (MR_Integer) 0;
            Var_53 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
            Var_54 = (MR_String) "builtin_compound_lt";
            Var_55 = (MR_Word) ((MR_Unsigned) 0U);
            Var_57 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
            Var_58 = (MR_Word) ((MR_Unsigned) 0U);
            Var_59 = (MR_Integer) 1;
            Var_60 = (MR_Integer) 0;
            Var_61 = (MR_Word) ((MR_Unsigned) 0U);
            hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_14, Var_52, Var_53, Var_54, Var_55, Var_44, Var_57, Var_58, Var_59, Var_60, Var_61, Context_10, &CmpLtGoal_22);
            Builtin_23 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            Var_64 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            Var_65 = (MR_String) "comparison_result";
            Var_66 = (MR_Integer) 0;
            Var_68 = (MR_String) "<";
            Var_71 = (MR_String) "=";
            Var_74 = (MR_String) ">";
            {
              CmpRes_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, CmpRes_24, 0) = ((MR_Box) (Var_64));
              MR_hl_field(1, CmpRes_24, 1) = ((MR_Box) (Var_65));
            }
            {
              CmpResTypeCtor_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, CmpResTypeCtor_25, 0) = ((MR_Box) (CmpRes_24));
              MR_hl_field(0, CmpResTypeCtor_25, 1) = ((MR_Box) (Var_66));
            }
            {
              Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_67, 0) = ((MR_Box) (Builtin_23));
              MR_hl_field(1, Var_67, 1) = ((MR_Box) (Var_68));
            }
            {
              FunctorResultLt_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, FunctorResultLt_26, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, FunctorResultLt_26, 1) = ((MR_Box) (Var_67));
              MR_hl_field(3, FunctorResultLt_26, 2) = ((MR_Box) (Var_66));
              MR_hl_field(3, FunctorResultLt_26, 3) = ((MR_Box) (CmpResTypeCtor_25));
            }
            {
              Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_70, 0) = ((MR_Box) (Builtin_23));
              MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_71));
            }
            {
              FunctorResultEq_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, FunctorResultEq_27, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, FunctorResultEq_27, 1) = ((MR_Box) (Var_70));
              MR_hl_field(3, FunctorResultEq_27, 2) = ((MR_Box) (Var_66));
              MR_hl_field(3, FunctorResultEq_27, 3) = ((MR_Box) (CmpResTypeCtor_25));
            }
            {
              Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_73, 0) = ((MR_Box) (Builtin_23));
              MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_74));
            }
            {
              FunctorResultGt_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, FunctorResultGt_28, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, FunctorResultGt_28, 1) = ((MR_Box) (Var_73));
              MR_hl_field(3, FunctorResultGt_28, 2) = ((MR_Box) (Var_66));
              MR_hl_field(3, FunctorResultGt_28, 3) = ((MR_Box) (CmpResTypeCtor_25));
            }
            hlds__make_goal__make_const_construction_4_p_0(Context_10, R_17, FunctorResultLt_26, &ReturnLtGoal_29);
            hlds__make_goal__make_const_construction_4_p_0(Context_10, R_17, FunctorResultEq_27, &ReturnEqGoal_30);
            hlds__make_goal__make_const_construction_4_p_0(Context_10, R_17, FunctorResultGt_28, &ReturnGtGoal_31);
            TypeCtorInfo_86_86 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            {
              Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_76, 0) = ((MR_Box) (R_17));
              MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_44));
            }
            NonLocals_32 = parse_tree__set_of_var__list_to_set_1_f_0(TypeCtorInfo_86_86, Var_76);
            Var_80 = hlds__instmap__instmap_delta_bind_var_1_f_0(R_17);
            Var_81 = (MR_Integer) 0;
            Var_82 = (MR_Integer) 0;
            hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_32, Var_80, Var_81, Var_82, Context_10, GoalInfo_12);
            Var_83 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_Info_36 = STATE_VARIABLE_Info_0_35;
            {
              ReturnLtGtGoalExpr_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ReturnLtGtGoalExpr_33, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, ReturnLtGtGoalExpr_33, 1) = ((MR_Box) (Var_83));
              MR_hl_field(3, ReturnLtGtGoalExpr_33, 2) = ((MR_Box) (CmpLtGoal_22));
              MR_hl_field(3, ReturnLtGtGoalExpr_33, 3) = ((MR_Box) (ReturnLtGoal_29));
              MR_hl_field(3, ReturnLtGtGoalExpr_33, 4) = ((MR_Box) (ReturnGtGoal_31));
            }
            {
              ReturnLtGtGoal_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ReturnLtGtGoal_34, 0) = ((MR_Box) (ReturnLtGtGoalExpr_33));
              MR_hl_field(0, ReturnLtGtGoal_34, 1) = ((MR_Box) (*GoalInfo_12));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_11 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Var_83));
              MR_hl_field(3, base, 2) = ((MR_Box) (CmpEqGoal_21));
              MR_hl_field(3, base, 3) = ((MR_Box) (ReturnEqGoal_30));
              MR_hl_field(3, base, 4) = ((MR_Box) (ReturnLtGtGoal_34));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
  }
  return succeeded;
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
          result_3 = MR_strcmp(PredName_4, ((&check_hlds__simplify__simplify_goal_call_vector_common_7[14 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_7_0__vct_7_f_0);
          if ((result_3 == (MR_Integer) 0))
          {
            switch (((&check_hlds__simplify__simplify_goal_call_vector_common_7[14 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_7_0__vct_7_f_1) {
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
  MR_Word FunctorResultLt_33;
  MR_Word FunctorResultEq_34;
  MR_Word FunctorResultGt_35;
  MR_Word ReturnLtGoal_36;
  MR_Word ReturnEqGoal_37;
  MR_Word ReturnGtGoal_38;
  MR_Word Var_42;
  MR_Word Var_45;
  MR_Word Var_48;
  MR_Word Var_51;

  ModuleSymName_17 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  Var_23 = mercury__string__f_43_43_2_f_0(TypeName_10, (MR_String) "_lt");
  PredNameLt_18 = mercury__string__f_43_43_2_f_0((MR_String) "builtin_", Var_23);
  Var_26 = mercury__string__f_43_43_2_f_0(TypeName_10, (MR_String) "_gt");
  PredNameGt_19 = mercury__string__f_43_43_2_f_0((MR_String) "builtin_", Var_26);
  check_hlds__simplify__simplify_goal_call__simplify_make_cmp_goal_expr_8_p_0(Info_9, ModuleSymName_17, PredNameLt_18, (MR_Integer) 0, X_12, Y_13, Context_14, &CmpLtGoal_20);
  check_hlds__simplify__simplify_goal_call__simplify_make_cmp_goal_expr_8_p_0(Info_9, ModuleSymName_17, PredNameGt_19, (MR_Integer) 0, X_12, Y_13, Context_14, &CmpGtGoal_21);
  Builtin_30 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  Var_42 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    CmpRes_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, CmpRes_31, 0) = ((MR_Box) (Var_42));
    MR_hl_field(1, CmpRes_31, 1) = ((MR_Box) ((MR_String) "comparison_result"));
  }
  {
    CmpResTypeCtor_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CmpResTypeCtor_32, 0) = ((MR_Box) (CmpRes_31));
    MR_hl_field(0, CmpResTypeCtor_32, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) (Builtin_30));
    MR_hl_field(1, Var_45, 1) = ((MR_Box) ((MR_String) "<"));
  }
  {
    FunctorResultLt_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, FunctorResultLt_33, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, FunctorResultLt_33, 1) = ((MR_Box) (Var_45));
    MR_hl_field(3, FunctorResultLt_33, 2) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(3, FunctorResultLt_33, 3) = ((MR_Box) (CmpResTypeCtor_32));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (Builtin_30));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_String) "="));
  }
  {
    FunctorResultEq_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, FunctorResultEq_34, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, FunctorResultEq_34, 1) = ((MR_Box) (Var_48));
    MR_hl_field(3, FunctorResultEq_34, 2) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(3, FunctorResultEq_34, 3) = ((MR_Box) (CmpResTypeCtor_32));
  }
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (Builtin_30));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_String) ">"));
  }
  {
    FunctorResultGt_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, FunctorResultGt_35, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, FunctorResultGt_35, 1) = ((MR_Box) (Var_51));
    MR_hl_field(3, FunctorResultGt_35, 2) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(3, FunctorResultGt_35, 3) = ((MR_Box) (CmpResTypeCtor_32));
  }
  hlds__make_goal__make_const_construction_4_p_0(Context_14, R_11, FunctorResultLt_33, &ReturnLtGoal_36);
  hlds__make_goal__make_const_construction_4_p_0(Context_14, R_11, FunctorResultEq_34, &ReturnEqGoal_37);
  hlds__make_goal__make_const_construction_4_p_0(Context_14, R_11, FunctorResultGt_35, &ReturnGtGoal_38);
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[0]), ((MR_Box) (X_12)), ((MR_Box) (Y_13)));
  if (succeeded)
  {
    *GoalExpr_15 = ((MR_Word) ((MR_hl_field(0, ReturnEqGoal_37, (MR_Integer) 0))));
    *GoalInfo_16 = ((MR_Word) ((MR_hl_field(0, ReturnEqGoal_37, (MR_Integer) 1))));
  }
  else
  {
    MR_Word NonLocals_39;
    MR_Word ReturnGtEqGoalExpr_40;
    MR_Word ReturnGtEqGoal_41;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_58;

    {
      Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_56, 0) = ((MR_Box) (Y_13));
      MR_hl_field(1, Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_55, 0) = ((MR_Box) (X_12));
      MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_56));
    }
    {
      Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_54, 0) = ((MR_Box) (R_11));
      MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_55));
    }
    NonLocals_39 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_54);
    Var_58 = hlds__instmap__instmap_delta_bind_var_1_f_0(R_11);
    hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_39, Var_58, (MR_Integer) 0, (MR_Integer) 0, Context_14, GoalInfo_16);
    {
      ReturnGtEqGoalExpr_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ReturnGtEqGoalExpr_40, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, ReturnGtEqGoalExpr_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, ReturnGtEqGoalExpr_40, 2) = ((MR_Box) (CmpGtGoal_21));
      MR_hl_field(3, ReturnGtEqGoalExpr_40, 3) = ((MR_Box) (ReturnGtGoal_38));
      MR_hl_field(3, ReturnGtEqGoalExpr_40, 4) = ((MR_Box) (ReturnEqGoal_37));
    }
    {
      ReturnGtEqGoal_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ReturnGtEqGoal_41, 0) = ((MR_Box) (ReturnGtEqGoalExpr_40));
      MR_hl_field(0, ReturnGtEqGoal_41, 1) = ((MR_Box) (*GoalInfo_16));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      *GoalExpr_15 = base;
      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, base, 2) = ((MR_Box) (CmpLtGoal_20));
      MR_hl_field(3, base, 3) = ((MR_Box) (ReturnLtGoal_36));
      MR_hl_field(3, base, 4) = ((MR_Box) (ReturnGtEqGoal_41));
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
  MR_Word STATE_VARIABLE_Info_0_52,
  MR_Word * STATE_VARIABLE_Info_53)
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
  MR_Word ConsId_41;
  MR_Word Bound_42;
  MR_Word UnifyMode_43;
  MR_Word RHS_44;
  MR_Word UKind_45;
  MR_Word UnifyExpr_47;
  MR_Word UnifyNonLocals0_48;
  MR_Word UnifyNonLocals_49;
  MR_Word UnifyInfo_50;
  MR_Word UnifyGoal_51;
  MR_Word Var_55;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_63;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_78;
  MR_Word Var_82;
  MR_Word Var_83;

  check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_52, &VarTable0_20);
  Var_55 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
  {
    CmpResEntry_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CmpResEntry_21, 0) = ((MR_Box) ((MR_String) ""));
    MR_hl_field(0, CmpResEntry_21, 1) = ((MR_Box) (Var_55));
    MR_hl_field(0, CmpResEntry_21, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  parse_tree__var_table__add_var_entry_4_p_0(CmpResEntry_21, &CmpRes_22, VarTable0_20, &VarTable_23);
  check_hlds__simplify__simplify_info__simplify_info_set_var_table_3_p_0(VarTable_23, STATE_VARIABLE_Info_0_52, STATE_VARIABLE_Info_53);
  Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_16);
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
    ArgVars_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArgVars_25, 0) = ((MR_Box) (CmpRes_22));
    MR_hl_field(1, ArgVars_25, 1) = ((MR_Box) (Var_58));
  }
  hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_18, X_12, &XInst_26);
  hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_18, Y_13, &YInst_27);
  check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(*STATE_VARIABLE_Info_53, &ModuleInfo_28);
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
  Unique_30 = (MR_Word) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_3[0]));
  {
    Var_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_63, 0) = ((MR_Box) (CmpRes_22));
    MR_hl_field(0, Var_63, 1) = ((MR_Box) (Unique_30));
  }
  {
    ArgInsts_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArgInsts_31, 0) = ((MR_Box) (Var_63));
    MR_hl_field(1, ArgInsts_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  BuiltinModule_32 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_67, 0) = ((MR_Box) (TI_11));
    MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_68 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(ArgInsts_31);
  {
    Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_69, 0) = ((MR_Box) (ModeNo_29));
  }
  hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_28, (MR_Integer) 0, BuiltinModule_32, (MR_String) "compare", Var_67, ArgVars_25, Var_68, Var_69, (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Context_24, &CmpGoal0_33);
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
  Var_75 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_74, 0) = ((MR_Box) (Var_75));
    MR_hl_field(1, Var_74, 1) = ((MR_Box) ((MR_String) "comparison_result"));
  }
  {
    TypeCtor_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_40, 0) = ((MR_Box) (Var_74));
    MR_hl_field(0, TypeCtor_40, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_78, 0) = ((MR_Box) (BuiltinModule_32));
    MR_hl_field(1, Var_78, 1) = ((MR_Box) (Inequality_14));
  }
  {
    ConsId_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ConsId_41, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, ConsId_41, 1) = ((MR_Box) (Var_78));
    MR_hl_field(3, ConsId_41, 2) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(3, ConsId_41, 3) = ((MR_Box) (TypeCtor_40));
  }
  {
    Var_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_83, 0) = ((MR_Box) (ConsId_41));
    MR_hl_field(0, Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_82, 0) = ((MR_Box) (Var_83));
    MR_hl_field(1, Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Bound_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Bound_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Bound_42, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Bound_42, 2) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Bound_42, 3) = ((MR_Box) (Var_82));
  }
  {
    UnifyMode_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UnifyMode_43, 0) = ((MR_Box) (Unique_30));
    MR_hl_field(0, UnifyMode_43, 1) = ((MR_Box) (Bound_42));
    MR_hl_field(0, UnifyMode_43, 2) = ((MR_Box) (Bound_42));
    MR_hl_field(0, UnifyMode_43, 3) = ((MR_Box) (Bound_42));
  }
  {
    RHS_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RHS_44, 0) = ((MR_Box) (ConsId_41));
    MR_hl_field(1, RHS_44, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(1, RHS_44, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    UKind_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, UKind_45, 0) = ((MR_Box) (CmpRes_22));
    MR_hl_field(1, UKind_45, 1) = ((MR_Box) (ConsId_41));
    MR_hl_field(1, UKind_45, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, UKind_45, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, UKind_45, 4) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
  }
  {
    UnifyExpr_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, UnifyExpr_47, 0) = ((MR_Box) (CmpRes_22));
    MR_hl_field(1, UnifyExpr_47, 1) = ((MR_Box) (RHS_44));
    MR_hl_field(1, UnifyExpr_47, 2) = ((MR_Box) (UnifyMode_43));
    MR_hl_field(1, UnifyExpr_47, 3) = ((MR_Box) (UKind_45));
    MR_hl_field(1, UnifyExpr_47, 4) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[72]));
  }
  UnifyNonLocals0_48 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_16);
  parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CmpRes_22, UnifyNonLocals0_48, &UnifyNonLocals_49);
  hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(UnifyNonLocals_49, GoalInfo_16, &UnifyInfo_50);
  {
    UnifyGoal_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UnifyGoal_51, 0) = ((MR_Box) (UnifyExpr_47));
    MR_hl_field(0, UnifyGoal_51, 1) = ((MR_Box) (UnifyInfo_50));
  }
  switch (Invert_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_98;
        MR_Word Var_99;

        {
          Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_99, 0) = ((MR_Box) (UnifyGoal_51));
          MR_hl_field(1, Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_98, 0) = ((MR_Box) (CmpGoal_39));
          MR_hl_field(1, Var_98, 1) = ((MR_Box) (Var_99));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *ImprovedGoalExpr_17 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, base, 2) = ((MR_Box) (Var_98));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_102;
        MR_Word Var_103;
        MR_Word Var_104;
        MR_Word Var_105 = (MR_Word) ((MR_Word) (UnifyGoal_51));

        {
          Var_104 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_104, 0) = ((MR_Box) (Var_105));
          MR_hl_field(0, Var_104, 1) = ((MR_Box) (UnifyInfo_50));
        }
        {
          Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_103, 0) = ((MR_Box) (Var_104));
          MR_hl_field(1, Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_102, 0) = ((MR_Box) (CmpGoal_39));
          MR_hl_field(1, Var_102, 1) = ((MR_Box) (Var_103));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *ImprovedGoalExpr_17 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, base, 2) = ((MR_Box) (Var_102));
        }
      }
      break;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_call__simplify_look_for_duplicate_call_10_p_0(
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word Args_13,
  MR_Word GoalExpr0_14,
  MR_Word GoalInfo0_15,
  MR_Word * MaybeAssignsGoalExpr_16,
  MR_Word Common0_17,
  MR_Word * Common_18,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  MR_bool succeeded;
  MR_Word OptDupCalls_20;

  succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(STATE_VARIABLE_Info_0_24, &OptDupCalls_20);
  if (succeeded)
  {
    MR_Word Purity_21;
    MR_Word MaybeAssignsGoalExpr0_22;

    Purity_21 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo0_15);
    check_hlds__simplify__common__common_optimise_call_11_p_0(PredId_11, ProcId_12, Args_13, Purity_21, GoalInfo0_15, GoalExpr0_14, &MaybeAssignsGoalExpr0_22, Common0_17, Common_18, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25);
    succeeded = (MaybeAssignsGoalExpr0_22 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (OptDupCalls_20 == (MR_Integer) 0);
    if (succeeded)
      *MaybeAssignsGoalExpr_16 = MaybeAssignsGoalExpr0_22;
    else
      *MaybeAssignsGoalExpr_16 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    *Common_18 = Common0_17;
    *MaybeAssignsGoalExpr_16 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_25 = STATE_VARIABLE_Info_0_24;
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
        ArgA_15 = ((MR_Word) ((MR_hl_field(1, Args_9, (MR_Integer) 0))));
        Var_27 = ((MR_Word) ((MR_hl_field(1, Args_9, (MR_Integer) 1))));
        succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ArgB_16 = ((MR_Word) ((MR_hl_field(1, Var_27, (MR_Integer) 0))));
          Var_28 = ((MR_Word) ((MR_hl_field(1, Var_27, (MR_Integer) 1))));
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
      Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredPieces_22, WarnPieces_20);
      Pieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[58])), Var_34);
      {
        Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_42, 0) = ((MR_Box) (GoalContext_21));
        MR_hl_field(0, Var_42, 1) = ((MR_Box) (Pieces_23));
      }
      {
        Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
        MR_hl_field(1, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.maybe_generate_warning_for_useless_comparison\'/6"));
        MR_hl_field(3, Spec_24, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 27) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
        MR_hl_field(3, Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, Spec_24, 3) = ((MR_Box) (MR_mkword(2, &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
        MR_hl_field(3, Spec_24, 4) = ((MR_Box) (Var_41));
      }
      check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_24, STATE_VARIABLE_Info_0_25, STATE_VARIABLE_Info_26);
    }
    else
      *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_0_25;
  }
  else
    *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_0_25;
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__is_useless_unsigned_comparison_5_p_0(
  MR_String ModuleName_6,
  MR_String PredName_7,
  MR_Word ArgA_8,
  MR_Word ArgB_9,
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
    result_3 = MR_strcmp(PredName_7, ((&check_hlds__simplify__simplify_goal_call_vector_common_7[10 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_7_0__vct_7_f_0);
    if ((result_3 == (MR_Integer) 0))
    {
      switch (((&check_hlds__simplify__simplify_goal_call_vector_common_7[10 + mid_2]))->check_hlds__simplify__simplify_goal_call__vector_common_type_7_0__vct_7_f_1) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            // case "<"
            ;
            {
              MR_Word Var_51;
              MR_Word Var_53;
              MR_Word Var_54;
              MR_Word Var_55;
              MR_Word Var_56;
              MR_Word Var_58;
              MR_Word Var_59;
              MR_Word Var_60;
              MR_Word Var_61;
              MR_Word Var_63;
              MR_Word Var_64;
              MR_Word Var_65;
              MR_String ZeroStr_85;
              MR_Word IntConst_89;
              MR_Word Var_90;
              MR_Word Var_91;
              MR_Word Var_92;
              MR_Word Var_93;
              MR_Word Var_94;
              MR_Integer lo_4;
              MR_Integer hi_5;
              MR_Integer mid_6;
              MR_Integer result_7;

              succeeded = ((((MR_tag((MR_Word) ArgB_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ArgB_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                Var_90 = ((MR_Word) ((MR_hl_field(3, ArgB_9, (MR_Integer) 3))));
                succeeded = (Var_90 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_91 = ((MR_Word) ((MR_hl_field(1, Var_90, (MR_Integer) 0))));
                  Var_94 = ((MR_Word) ((MR_hl_field(1, Var_90, (MR_Integer) 1))));
                  succeeded = (Var_94 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_92 = ((MR_Word) ((MR_hl_field(0, Var_91, (MR_Integer) 0))));
                    Var_93 = ((MR_Word) ((MR_hl_field(0, Var_91, (MR_Integer) 1))));
                    succeeded = (Var_93 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((((MR_tag((MR_Word) Var_92)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_92, (MR_Integer) 0)))) == (MR_Integer) 5)));
                      if (succeeded)
                      {
                        IntConst_89 = ((MR_Word) ((MR_hl_field(3, Var_92, (MR_Integer) 1))));
                        // binary string jump switch
                        ;
                        lo_4 = (MR_Integer) 0;
                        hi_5 = (MR_Integer) 4;
                        do
                        {
                          mid_6 = (((MR_Integer) ((MR_Unsigned) lo_4 + (MR_Unsigned) hi_5)) / (MR_Integer) 2);
                          result_7 = MR_strcmp(ModuleName_6, ((&check_hlds__simplify__simplify_goal_call_vector_common_7[5 + mid_6]))->check_hlds__simplify__simplify_goal_call__vector_common_type_7_0__vct_7_f_0);
                          if ((result_7 == (MR_Integer) 0))
                          {
                            switch (((&check_hlds__simplify__simplify_goal_call_vector_common_7[5 + mid_6]))->check_hlds__simplify__simplify_goal_call__vector_common_type_7_0__vct_7_f_1) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  // case "uint"
                                  ;
                                  {
                                    MR_Unsigned Var_95;

                                    succeeded = ((MR_tag((MR_Word) IntConst_89)) == (MR_Integer) 1);
                                    if (succeeded)
                                    {
                                      Var_95 = ((MR_Unsigned) ((MR_hl_field(1, IntConst_89, (MR_Integer) 0))));
                                      succeeded = (Var_95 == (MR_Unsigned) 0U);
                                      if (succeeded)
                                      {
                                        ZeroStr_85 = (MR_String) "0u";
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
                                    uint16_t Var_97;

                                    succeeded = ((((MR_tag((MR_Word) IntConst_89)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_89, (MR_Integer) 0)))) == (MR_Integer) 2)));
                                    if (succeeded)
                                    {
                                      Var_97 = ((uint16_t) (MR_Word) (MR_hl_field(3, IntConst_89, (MR_Integer) 1)));
                                      succeeded = (Var_97 == UINT16_C(0));
                                      if (succeeded)
                                      {
                                        ZeroStr_85 = (MR_String) "0u16";
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
                                    uint32_t Var_98;

                                    succeeded = ((((MR_tag((MR_Word) IntConst_89)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_89, (MR_Integer) 0)))) == (MR_Integer) 4)));
                                    if (succeeded)
                                    {
                                      Var_98 = ((uint32_t) (MR_Word) (MR_hl_field(3, IntConst_89, (MR_Integer) 1)));
                                      succeeded = (Var_98 == UINT32_C(0));
                                      if (succeeded)
                                      {
                                        ZeroStr_85 = (MR_String) "0u32";
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
                                    uint64_t Var_99;

                                    succeeded = ((((MR_tag((MR_Word) IntConst_89)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_89, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                    if (succeeded)
                                    {
                                      Var_99 = MR_unbox_uint64((MR_hl_field(3, IntConst_89, (MR_Integer) 1)));
                                      succeeded = (Var_99 == UINT64_C(0));
                                      if (succeeded)
                                      {
                                        ZeroStr_85 = (MR_String) "0u64";
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
                                    uint8_t Var_96;

                                    succeeded = ((((MR_tag((MR_Word) IntConst_89)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, IntConst_89, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                    if (succeeded)
                                    {
                                      Var_96 = ((uint8_t) (MR_Word) (MR_hl_field(3, IntConst_89, (MR_Integer) 1)));
                                      succeeded = (Var_96 == UINT8_C(0));
                                      if (succeeded)
                                      {
                                        ZeroStr_85 = (MR_String) "0u8";
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
                          if ((result_7 < (MR_Integer) 0))
                            hi_5 = (MR_Integer) ((MR_Unsigned) mid_6 - (MR_Unsigned) 1);
                          else
                            lo_4 = (MR_Integer) ((MR_Unsigned) mid_6 + (MR_Unsigned) 1);
                        }
                        while ((lo_4 <= hi_5));
                        succeeded = MR_FALSE;
                      label_0:;
                        if (succeeded)
                        {
                          Var_51 = (MR_Word) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[59]));
                          Var_54 = (MR_Word) ((MR_Unsigned) 8U);
                          Var_56 = (MR_Word) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[60]));
                          Var_61 = (MR_Word) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[61]));
                          Var_65 = (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[62]));
                          {
                            Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                            MR_hl_field(3, Var_59, 1) = ((MR_Box) (ModuleName_6));
                          }
                          {
                            Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                            MR_hl_field(3, Var_64, 1) = ((MR_Box) (ZeroStr_85));
                          }
                          {
                            Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
                            MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_65));
                          }
                          {
                            Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_60, 0) = ((MR_Box) (Var_61));
                            MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_63));
                          }
                          {
                            Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
                            MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_60));
                          }
                          {
                            Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
                            MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_58));
                          }
                          {
                            Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
                            MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_55));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            *Pieces_10 = base;
                            MR_hl_field(1, base, 0) = ((MR_Box) (Var_51));
                            MR_hl_field(1, base, 1) = ((MR_Box) (Var_53));
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
        case (MR_Integer) 1:
          {
            // case "=<"
            ;
            {
              MR_Word Var_33;
              MR_Word Var_35;
              MR_Word Var_36;
              MR_Word Var_37;
              MR_Word Var_38;
              MR_Word Var_39;
              MR_Word Var_40;
              MR_Word Var_42;
              MR_Word Var_43;
              MR_Word Var_45;
              MR_Word Var_46;
              MR_Word Var_47;
              MR_String ZeroStr_84;

              succeeded = check_hlds__simplify__simplify_goal_call__arg_is_unsigned_zero_3_p_0(ModuleName_6, ArgA_8, &ZeroStr_84);
              if (succeeded)
              {
                Var_33 = (MR_Word) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[63]));
                Var_36 = (MR_Word) ((MR_Unsigned) 8U);
                Var_40 = (MR_Word) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[64]));
                Var_43 = (MR_Word) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[65]));
                Var_47 = (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[67]));
                {
                  Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(3, Var_38, 1) = ((MR_Box) (ZeroStr_84));
                }
                {
                  Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(3, Var_46, 1) = ((MR_Box) (ModuleName_6));
                }
                {
                  Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
                  MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_47));
                }
                {
                  Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_42, 0) = ((MR_Box) (Var_43));
                  MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_45));
                }
                {
                  Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
                  MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_42));
                }
                {
                  Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
                  MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_39));
                }
                {
                  Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
                  MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_37));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Pieces_10 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_33));
                  MR_hl_field(1, base, 1) = ((MR_Box) (Var_35));
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
              MR_Word Var_69;
              MR_Word Var_71;
              MR_Word Var_72;
              MR_Word Var_73;
              MR_Word Var_74;
              MR_Word Var_75;
              MR_Word Var_76;
              MR_Word Var_78;
              MR_Word Var_79;
              MR_Word Var_80;
              MR_String ZeroStr_86;

              succeeded = check_hlds__simplify__simplify_goal_call__arg_is_unsigned_zero_3_p_0(ModuleName_6, ArgA_8, &ZeroStr_86);
              if (succeeded)
              {
                Var_69 = (MR_Word) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[59]));
                Var_72 = (MR_Word) ((MR_Unsigned) 8U);
                Var_76 = (MR_Word) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[68]));
                Var_80 = (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[67]));
                {
                  Var_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_74, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(3, Var_74, 1) = ((MR_Box) (ZeroStr_86));
                }
                {
                  Var_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_79, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(3, Var_79, 1) = ((MR_Box) (ModuleName_6));
                }
                {
                  Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_78, 0) = ((MR_Box) (Var_79));
                  MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_80));
                }
                {
                  Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_75, 0) = ((MR_Box) (Var_76));
                  MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_78));
                }
                {
                  Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_73, 0) = ((MR_Box) (Var_74));
                  MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_75));
                }
                {
                  Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_72));
                  MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_73));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Pieces_10 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_69));
                  MR_hl_field(1, base, 1) = ((MR_Box) (Var_71));
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
              MR_Word Var_12;
              MR_Word Var_14;
              MR_Word Var_15;
              MR_Word Var_16;
              MR_Word Var_17;
              MR_Word Var_19;
              MR_Word Var_20;
              MR_Word Var_21;
              MR_Word Var_22;
              MR_Word Var_24;
              MR_Word Var_25;
              MR_Word Var_27;
              MR_Word Var_28;
              MR_Word Var_29;

              succeeded = check_hlds__simplify__simplify_goal_call__arg_is_unsigned_zero_3_p_0(ModuleName_6, ArgB_9, &ZeroStr_11);
              if (succeeded)
              {
                Var_12 = (MR_Word) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[63]));
                Var_15 = (MR_Word) ((MR_Unsigned) 8U);
                Var_17 = (MR_Word) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[69]));
                Var_22 = (MR_Word) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[70]));
                Var_25 = (MR_Word) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[71]));
                Var_29 = (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[62]));
                {
                  Var_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_20, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(3, Var_20, 1) = ((MR_Box) (ModuleName_6));
                }
                {
                  Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(3, Var_28, 1) = ((MR_Box) (ZeroStr_11));
                }
                {
                  Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
                  MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_29));
                }
                {
                  Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_24, 0) = ((MR_Box) (Var_25));
                  MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_27));
                }
                {
                  Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_21, 0) = ((MR_Box) (Var_22));
                  MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_24));
                }
                {
                  Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_20));
                  MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_21));
                }
                {
                  Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_16, 0) = ((MR_Box) (Var_17));
                  MR_hl_field(1, Var_16, 1) = ((MR_Box) (Var_19));
                }
                {
                  Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_14, 0) = ((MR_Box) (Var_15));
                  MR_hl_field(1, Var_14, 1) = ((MR_Box) (Var_16));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Pieces_10 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_12));
                  MR_hl_field(1, base, 1) = ((MR_Box) (Var_14));
                }
                succeeded = MR_TRUE;
              }
            }
          }
          break;
      }
      // jump out of search loop
      ;
      goto label_1;
    }
    else
    if ((result_3 < (MR_Integer) 0))
      hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
    else
      lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
  }
  while ((lo_0 <= hi_1));
  succeeded = MR_FALSE;
label_1:;
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_call__arg_is_unsigned_zero_3_p_0(
  MR_String ModuleName_4,
  MR_Word Arg_5,
  MR_String * ZeroStr_6)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) Arg_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Arg_5, (MR_Integer) 0)))) == (MR_Integer) 0)));
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
    Var_10 = ((MR_Word) ((MR_hl_field(3, Arg_5, (MR_Integer) 3))));
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
  MR_Word TypeCtorInfo_172_172;
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
  MR_Word Var_177;
  MR_Integer Var_178;
  MR_Word Var_54;

  succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_simple_code_1_p_0(STATE_VARIABLE_Info_0_47);
  if (succeeded)
  {
    check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_0_47, &CurPredProcId_22);
    Var_177 = ((MR_Word) ((MR_hl_field(0, CurPredProcId_22, (MR_Integer) 0))));
    Var_178 = ((MR_Integer) ((MR_hl_field(0, CurPredProcId_22, (MR_Integer) 1))));
    succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_12, Var_177);
    if (succeeded)
    {
      succeeded = (ProcId_13 == Var_178);
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
            TypeCtorInfo_172_172 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
            Var_52 = mercury__set__init_0_f_0(TypeCtorInfo_172_172);
            Var_53 = mercury__set__init_0_f_0(TypeCtorInfo_172_172);
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
              MR_Word Var_56;
              MR_Word Var_79;
              MR_Word Var_80;
              MR_Word Var_81;
              MR_Word Var_82;

              {
                Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_56, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[22])));
                MR_hl_field(1, Var_56, 1) = ((MR_Box) (NamePieces_35));
              }
              MainPieces_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_56, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[24])));
              Var_80 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_18);
              {
                Var_82 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_82, 0) = ((MR_Box) (MainPieces_36));
              }
              {
                Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_82));
                MR_hl_field(1, Var_81, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[84])));
              }
              {
                Var_79 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_79, 0) = ((MR_Box) (Var_80));
                MR_hl_field(2, Var_79, 1) = ((MR_Box) (Var_81));
              }
              {
                Msgs_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Msgs_38, 0) = ((MR_Box) (Var_79));
                MR_hl_field(1, Msgs_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_39, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.maybe_generate_warning_for_infinite_loop_call\'/11"));
                MR_hl_field(0, Spec_39, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(0, Spec_39, 2) = ((MR_Box) (MR_mkword(2, &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
                MR_hl_field(0, Spec_39, 3) = ((MR_Box) (Msgs_38));
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
                MR_Word Var_93;
                MR_Word Var_111;
                MR_Word Var_112;
                MR_Word Var_113;
                MR_Word Var_114;
                MR_Word Var_115;
                MR_Word Var_116;
                MR_Word Msgs_162;
                MR_Word Spec_163;

                {
                  Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_93, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[22])));
                  MR_hl_field(1, Var_93, 1) = ((MR_Box) (NamePieces_35));
                }
                Pieces_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_93, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[40])));
                Var_112 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_18);
                {
                  Var_114 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_114, 0) = ((MR_Box) (Pieces_40));
                }
                Var_116 = check_hlds__simplify__simplify_goal_call__shut_up_suspicious_recursion_msg_0_f_0();
                {
                  Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_115, 0) = ((MR_Box) (Var_116));
                  MR_hl_field(1, Var_115, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_113, 0) = ((MR_Box) (Var_114));
                  MR_hl_field(1, Var_113, 1) = ((MR_Box) (Var_115));
                }
                {
                  Var_111 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Var_111, 0) = ((MR_Box) (Var_112));
                  MR_hl_field(2, Var_111, 1) = ((MR_Box) (Var_113));
                }
                {
                  Msgs_162 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Msgs_162, 0) = ((MR_Box) (Var_111));
                  MR_hl_field(1, Msgs_162, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Spec_163 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Spec_163, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.maybe_generate_warning_for_infinite_loop_call\'/11"));
                  MR_hl_field(0, Spec_163, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(0, Spec_163, 2) = ((MR_Box) (MR_mkword(2, &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
                  MR_hl_field(0, Spec_163, 3) = ((MR_Box) (Msgs_162));
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
          MR_Word Var_124;

          mercury__set__intersect_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HeadBaseNames_30, ArgBaseNames_31, &HeadArgBaseNames_41);
          SuspiciousArgNames_42 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HeadArgBaseNames_41);
          succeeded = (SuspiciousArgNames_42 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_124 = ((MR_Word) ((MR_hl_field(1, SuspiciousArgNames_42, (MR_Integer) 1))));
            succeeded = (Var_124 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_suspicious_recursion_1_p_0(STATE_VARIABLE_Info_0_47);
          }
          if (succeeded)
          {
            MR_Word Msg_46;
            MR_Word Var_125;
            MR_Word Var_128;
            MR_Word Var_136;
            MR_Word Var_137;
            MR_Word Var_147;
            MR_Word Var_148;
            MR_Word Var_149;
            MR_Word Var_150;
            MR_Word Var_151;
            MR_Word Var_159;
            MR_Word Spec_168;
            MR_Word Pieces_169;

            {
              Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_125, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[22])));
              MR_hl_field(1, Var_125, 1) = ((MR_Box) (NamePieces_35));
            }
            Var_137 = parse_tree__error_spec__list_to_pieces_1_f_0(SuspiciousArgNames_42);
            Var_136 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_137, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[48])));
            Var_128 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[44])), Var_136);
            Pieces_169 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_125, Var_128);
            Var_147 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_18);
            {
              Var_149 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_149, 0) = ((MR_Box) (Pieces_169));
            }
            Var_151 = check_hlds__simplify__simplify_goal_call__shut_up_suspicious_recursion_msg_0_f_0();
            {
              Var_150 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_150, 0) = ((MR_Box) (Var_151));
              MR_hl_field(1, Var_150, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_148 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_148, 0) = ((MR_Box) (Var_149));
              MR_hl_field(1, Var_148, 1) = ((MR_Box) (Var_150));
            }
            {
              Msg_46 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Msg_46, 0) = ((MR_Box) (Var_147));
              MR_hl_field(2, Msg_46, 1) = ((MR_Box) (Var_148));
            }
            {
              Var_159 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_159, 0) = ((MR_Box) (Msg_46));
              MR_hl_field(1, Var_159, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_168 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Spec_168, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.maybe_generate_warning_for_infinite_loop_call\'/11"));
              MR_hl_field(3, Spec_168, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 34) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
              MR_hl_field(3, Spec_168, 2) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, Spec_168, 3) = ((MR_Box) (MR_mkword(2, &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
              MR_hl_field(3, Spec_168, 4) = ((MR_Box) (Var_159));
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
      MR_Word STATE_VARIABLE_AllInputsEqv_61_61;
      MR_Word STATE_VARIABLE_AllInputsEqvOrSvar_63_63;
      MR_Word STATE_VARIABLE_HeadBaseNames_65_65;
      MR_Word STATE_VARIABLE_ArgBaseNames_66_66;
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
            succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo_1, InitialInst_47);
            if (succeeded)
            {
              succeeded = check_hlds__simplify__common__common_vars_are_equivalent_3_p_0(CommonInfo_2, ArgVar_39, HeadVar_37);
              if (succeeded)
              {
                STATE_VARIABLE_ArgBaseNames_66_66 = STATE_VARIABLE_ArgBaseNames_0_14;
                STATE_VARIABLE_HeadBaseNames_65_65 = STATE_VARIABLE_HeadBaseNames_0_12;
                STATE_VARIABLE_AllInputsEqvOrSvar_63_63 = STATE_VARIABLE_AllInputsEqvOrSvar_0_10;
                STATE_VARIABLE_AllInputsEqv_61_61 = STATE_VARIABLE_AllInputsEqv_0_8;
                succeeded = MR_TRUE;
              }
              else
              {
                MR_String HeadName_48;
                MR_Word ArgVarEntry_49;
                MR_String ArgName_50;
                MR_String HeadBaseName_51;
                MR_String ArgBaseName_52;
                MR_String HeadName_70;
                MR_Word TypeInfo_13_74;
                MR_Word TypeCtorInfo_14_75;
                MR_Box conv0_HeadName_70;
                MR_String StrNoSuffixPrime_76;
                MR_Integer End0_77;
                MR_Integer End1_78;
                MR_Integer End_80;
                MR_Integer Var_82;
                MR_Integer End2_79;
                MR_Char Var_81;
                MR_Char Var_83;
                MR_String StrNoSuffixPrime_84;
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
                  STATE_VARIABLE_AllInputsEqv_61_61 = (MR_Integer) 0;
                  TypeInfo_13_74 = (MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_1[0]);
                  TypeCtorInfo_14_75 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
                  succeeded = mercury__map__search_3_p_0(TypeInfo_13_74, TypeCtorInfo_14_75, VarNameRemap_4, ((MR_Box) (HeadVar_37)), &conv0_HeadName_70);
                  if (succeeded)
                  {
                    HeadName_70 = ((MR_String) (conv0_HeadName_70));
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    HeadName_48 = HeadName_70;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_Word Entry_71;

                    parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_3, HeadVar_37, &Entry_71);
                    HeadName_48 = ((MR_String) ((MR_hl_field(0, Entry_71, (MR_Integer) 0))));
                    succeeded = (strcmp(HeadName_48, (MR_String) "") == 0);
                    succeeded = !(succeeded);
                  }
                  if (succeeded)
                  {
                    parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_3, ArgVar_39, &ArgVarEntry_49);
                    ArgName_50 = ((MR_String) ((MR_hl_field(0, ArgVarEntry_49, (MR_Integer) 0))));
                    succeeded = (strcmp(ArgName_50, (MR_String) "") == 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      End0_77 = mercury__string__count_code_units_1_f_0(HeadName_48);
                      check_hlds__simplify__simplify_goal_call__skip_trailing_digits_3_p_0(HeadName_48, End0_77, &End1_78);
                      succeeded = (End1_78 < End0_77);
                      if (succeeded)
                      {
                        Var_81 = (MR_Char) 95;
                        succeeded = mercury__string__unsafe_prev_index_4_p_0(HeadName_48, End1_78, &End2_79, &Var_83);
                        if (succeeded)
                          succeeded = (Var_81 == Var_83);
                        if (succeeded)
                          End_80 = End2_79;
                        else
                          End_80 = End1_78;
                        Var_82 = (MR_Integer) 0;
                        mercury__string__unsafe_between_4_p_0(HeadName_48, Var_82, End_80, &StrNoSuffixPrime_76);
                        succeeded = MR_TRUE;
                      }
                      if (succeeded)
                        HeadBaseName_51 = StrNoSuffixPrime_76;
                      else
                        HeadBaseName_51 = HeadName_48;
                      End0_85 = mercury__string__count_code_units_1_f_0(ArgName_50);
                      check_hlds__simplify__simplify_goal_call__skip_trailing_digits_3_p_0(ArgName_50, End0_85, &End1_86);
                      succeeded = (End1_86 < End0_85);
                      if (succeeded)
                      {
                        Var_89 = (MR_Char) 95;
                        succeeded = mercury__string__unsafe_prev_index_4_p_0(ArgName_50, End1_86, &End2_87, &Var_91);
                        if (succeeded)
                          succeeded = (Var_89 == Var_91);
                        if (succeeded)
                          End_88 = End2_87;
                        else
                          End_88 = End1_86;
                        Var_90 = (MR_Integer) 0;
                        mercury__string__unsafe_between_4_p_0(ArgName_50, Var_90, End_88, &StrNoSuffixPrime_84);
                        succeeded = MR_TRUE;
                      }
                      if (succeeded)
                        ArgBaseName_52 = StrNoSuffixPrime_84;
                      else
                        ArgBaseName_52 = ArgName_50;
                      succeeded = (strcmp(HeadBaseName_51, ArgBaseName_52) == 0);
                      if (succeeded)
                      {
                        succeeded = mercury__string__prefix_2_p_0(HeadBaseName_51, (MR_String) "STATE_VARIABLE");
                        if (succeeded)
                          STATE_VARIABLE_AllInputsEqvOrSvar_63_63 = STATE_VARIABLE_AllInputsEqvOrSvar_0_10;
                        else
                          STATE_VARIABLE_AllInputsEqvOrSvar_63_63 = (MR_Integer) 0;
                        STATE_VARIABLE_ArgBaseNames_66_66 = STATE_VARIABLE_ArgBaseNames_0_14;
                        STATE_VARIABLE_HeadBaseNames_65_65 = STATE_VARIABLE_HeadBaseNames_0_12;
                      }
                      else
                      {
                        STATE_VARIABLE_AllInputsEqvOrSvar_63_63 = (MR_Integer) 0;
                        mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (HeadBaseName_51)), STATE_VARIABLE_HeadBaseNames_0_12, &STATE_VARIABLE_HeadBaseNames_65_65);
                        mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ArgBaseName_52)), STATE_VARIABLE_ArgBaseNames_0_14, &STATE_VARIABLE_ArgBaseNames_66_66);
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
            STATE_VARIABLE_ArgBaseNames_66_66 = STATE_VARIABLE_ArgBaseNames_0_14;
            STATE_VARIABLE_HeadBaseNames_65_65 = STATE_VARIABLE_HeadBaseNames_0_12;
            STATE_VARIABLE_AllInputsEqvOrSvar_63_63 = STATE_VARIABLE_AllInputsEqvOrSvar_0_10;
            STATE_VARIABLE_AllInputsEqv_61_61 = STATE_VARIABLE_AllInputsEqv_0_8;
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__5_5 = HeadVars_38;
            next_value_of_HeadVar__6_6 = ArgVars_40;
            next_value_of_HeadVar__7_7 = Modes_42;
            next_value_of_STATE_VARIABLE_AllInputsEqv_0_8 = STATE_VARIABLE_AllInputsEqv_61_61;
            next_value_of_STATE_VARIABLE_AllInputsEqvOrSvar_0_10 = STATE_VARIABLE_AllInputsEqvOrSvar_63_63;
            next_value_of_STATE_VARIABLE_HeadBaseNames_0_12 = STATE_VARIABLE_HeadBaseNames_65_65;
            next_value_of_STATE_VARIABLE_ArgBaseNames_0_14 = STATE_VARIABLE_ArgBaseNames_66_66;
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
  return (MR_Word) (MR_mkword(2, &check_hlds__simplify__simplify_goal_call_scalar_common_1[82]));
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
    MR_Word TypeCtorInfo_113_113;
    MR_Word TypeCtorInfo_115_115;
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
    MR_Word Var_45;
    MR_Integer Var_46;
    MR_Integer Var_47;
    MR_Word Var_48;

    succeeded = (PredOrFunc_13 == (MR_Integer) 0);
    if (succeeded)
    {
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_8, &ArgTypes_14);
      Var_37 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
      Var_38 = (MR_String) "state";
      Var_39 = (MR_Word) ((MR_Unsigned) 0U);
      Var_40 = (MR_Word) ((MR_Unsigned) 0U);
      TypeCtorInfo_113_113 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
      {
        IOStateTypeSymName_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, IOStateTypeSymName_15, 0) = ((MR_Box) (Var_37));
        MR_hl_field(1, IOStateTypeSymName_15, 1) = ((MR_Box) (Var_38));
      }
      {
        IOStateType_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, IOStateType_16, 0) = ((MR_Box) (IOStateTypeSymName_15));
        MR_hl_field(1, IOStateType_16, 1) = ((MR_Box) (Var_39));
        MR_hl_field(1, IOStateType_16, 2) = ((MR_Box) (Var_40));
      }
      {
        Var_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_41, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_4[0]));
        MR_hl_field(0, Var_41, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0_1));
        MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_41, 3) = ((MR_Box) (IOStateType_16));
      }
      mercury__list__filter_3_p_0(TypeCtorInfo_113_113, Var_41, ArgTypes_14, &IOStateArgTypes_17);
      succeeded = (IOStateArgTypes_17 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_42 = ((MR_Word) ((MR_hl_field(1, IOStateArgTypes_17, (MR_Integer) 1))));
        succeeded = (Var_42 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_43 = ((MR_Word) ((MR_hl_field(1, Var_42, (MR_Integer) 1))));
          succeeded = (Var_43 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_8, &OrigArity_20);
            mercury__list__length_2_p_0(TypeCtorInfo_113_113, ArgTypes_14, &FullArity_21);
            NumExtraArgs_22 = (MR_Integer) ((MR_Unsigned) FullArity_21 - (MR_Unsigned) OrigArity_20);
            mercury__list__det_split_list_4_p_0(TypeCtorInfo_113_113, NumExtraArgs_22, ArgTypes_14, &ExtraArgTypes_23, &UserArgTypes_24);
            hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_6, &PredTable_25);
            Var_44 = (MR_Integer) 0;
            Var_47 = (MR_Integer) 1;
            Var_46 = (MR_Integer) ((MR_Unsigned) OrigArity_20 + (MR_Unsigned) Var_47);
            {
              PredSymName_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, PredSymName_26, 0) = ((MR_Box) (ModuleName_11));
              MR_hl_field(1, PredSymName_26, 1) = ((MR_Box) (PredName_12));
            }
            Var_45 = (MR_Word) (Var_46);
            hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredTable_25, Var_44, PredOrFunc_13, PredSymName_26, Var_45, &PredIds_27);
            TypeCtorInfo_115_115 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0);
            {
              Var_48 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_48, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_call_scalar_common_5[0]));
              MR_hl_field(0, Var_48, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0_2));
              MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 4));
              MR_hl_field(0, Var_48, 3) = ((MR_Box) (ModuleInfo_6));
              MR_hl_field(0, Var_48, 4) = ((MR_Box) (NumExtraArgs_22));
              MR_hl_field(0, Var_48, 5) = ((MR_Box) (ExtraArgTypes_23));
              MR_hl_field(0, Var_48, 6) = ((MR_Box) (UserArgTypes_24));
            }
            mercury__list__filter_3_p_0(TypeCtorInfo_115_115, Var_48, PredIds_27, &OneExtraStreamArgPredIds_28);
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
      MR_Word Var_54;
      MR_Word Var_70;
      MR_Word Var_71;

      GoalContext_31 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_9);
      PredPieces_32 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_6, (MR_Integer) 0, PredId_7);
      Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredPieces_32, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[7])));
      Pieces_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[2])), Var_54);
      {
        Var_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_71, 0) = ((MR_Box) (GoalContext_31));
        MR_hl_field(0, Var_71, 1) = ((MR_Box) (Pieces_33));
      }
      {
        Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_71));
        MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Spec_34, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.maybe_generate_warning_for_implicit_stream_predicate\'/5"));
        MR_hl_field(3, Spec_34, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 29) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
        MR_hl_field(3, Spec_34, 2) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, Spec_34, 3) = ((MR_Box) (MR_mkword(2, &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
        MR_hl_field(3, Spec_34, 4) = ((MR_Box) (Var_70));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeSpec_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_34));
      }
    }
    else
    {
      MR_String Dir_35;
      MR_Integer slot_0;
      MR_String str_1;

      {
        MR_Word Var_118;

        Var_118 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_11, Var_118);
      }
      if (!(succeeded))
      {
        MR_Word Var_120;

        Var_120 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0((MR_Word) (&check_hlds__simplify__simplify_goal_call_scalar_common_2[1]));
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_11, Var_120);
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
        MR_Word Var_80;
        MR_Word Var_81;
        MR_Word Var_84;
        MR_Word Var_87;
        MR_Word Var_88;
        MR_Word Var_104;
        MR_Word Var_105;
        MR_Word GoalContext_107;
        MR_Word PredPieces_108;
        MR_Word Pieces_109;
        MR_Word Spec_110;

        GoalContext_107 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_9);
        PredPieces_108 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_6, (MR_Integer) 0, PredId_7);
        {
          Var_88 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_88, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_88, 1) = ((MR_Box) (Dir_35));
        }
        {
          Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_87, 0) = ((MR_Box) (Var_88));
          MR_hl_field(1, Var_87, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[13])));
        }
        {
          Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_84, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[9])));
          MR_hl_field(1, Var_84, 1) = ((MR_Box) (Var_87));
        }
        {
          Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_81, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_call_scalar_common_1[8])));
          MR_hl_field(1, Var_81, 1) = ((MR_Box) (Var_84));
        }
        Var_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredPieces_108, Var_81);
        Pieces_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_call_scalar_common_1[2])), Var_80);
        {
          Var_105 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_105, 0) = ((MR_Box) (GoalContext_107));
          MR_hl_field(0, Var_105, 1) = ((MR_Box) (Pieces_109));
        }
        {
          Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_104, 0) = ((MR_Box) (Var_105));
          MR_hl_field(1, Var_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_110 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Spec_110, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal_call.maybe_generate_warning_for_implicit_stream_predicate\'/5"));
          MR_hl_field(3, Spec_110, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 29) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
          MR_hl_field(3, Spec_110, 2) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, Spec_110, 3) = ((MR_Box) (MR_mkword(2, &check_hlds__simplify__simplify_goal_call_scalar_common_2[0])));
          MR_hl_field(3, Spec_110, 4) = ((MR_Box) (Var_104));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeSpec_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_110));
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
