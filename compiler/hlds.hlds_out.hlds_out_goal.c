/*
** Automatically generated from `hlds_out_goal.m'
** by the Mercury compiler,
** version rotd-2023-07-31
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


// :- module hlds.hlds_out.hlds_out_goal.
// :- implementation.

/*
INIT mercury__hlds__hlds_out__hlds_out_goal__init
ENDINIT
*/

#include "hlds.hlds_out.hlds_out_goal.mih"


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
#include "term_int.mih"
#include "term_subst.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_clause.mih"
#include "parse_tree.parse_tree_out_cons_id.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_inst.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_out_type.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_mode.mih"
#include "hlds.hlds_out.hlds_out_util.mih"




static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_goal__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__527__1_4_p_0(
  MR_String HeadVar__1_395,
  MR_Word HeadVar__2_396);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_7_p_0(
  MR_Word Stream_8,
  MR_String IndentStr_9,
  MR_Word MutableVar_10,
  MR_Word STATE_VARIABLE_AddCommaNewline_0_15,
  MR_Word * STATE_VARIABLE_AddCommaNewline_16);

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_goal__ho_arg_reg_to_string_1_f_0(
  MR_Word ArgReg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__limit_size_of_mode_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__limit_size_of_mode_3_p_0(
  MR_Integer Levels_4,
  MR_Word Mode0_5,
  MR_Word * Mode_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__limit_size_of_unify_mode_2_p_0(
  MR_Word UnifyMode0_3,
  MR_Word * UnifyMode_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__limit_size_of_inst_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__limit_size_of_inst_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__limit_size_of_inst_3_p_0(
  MR_Integer Levels_4,
  MR_Word Inst0_5,
  MR_Word * Inst_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__limit_size_of_bound_insts_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__limit_size_of_bound_insts_3_p_0(
  MR_Integer Levels_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_goal__new_var_inst_to_string_4_f_0(
  MR_Word VarNameSrc_6,
  MR_Word VarNamePrint_7,
  MR_String IndentStr_8,
  MR_Word HeadVar__4_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_expr_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Word ModuleInfo_14,
  MR_Word VarNameSrc_15,
  MR_Word TypeQual_16,
  MR_Word VarNamePrint_17,
  MR_Integer Indent_18,
  MR_String Follow_19,
  MR_Word GoalExpr_20);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_conj_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Word ModuleInfo_14,
  MR_Word VarNameSrc_15,
  MR_Word TypeQual_16,
  MR_Word VarNamePrint_17,
  MR_Integer Indent_18,
  MR_String Follow_19,
  MR_Word GoalExpr_20);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_conj_13_p_0(
  MR_Word Info_14,
  MR_Word Stream_15,
  MR_Word ModuleInfo_16,
  MR_Word VarNameSrc_17,
  MR_Word TypeQual_18,
  MR_Word VarNamePrint_19,
  MR_Integer Indent_20,
  MR_String Follow_21,
  MR_String Separator_22,
  MR_Word Goal1_23,
  MR_Word Goals1_24);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_goal__write_cases_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_cases_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Word ModuleInfo_14,
  MR_Word VarNameSrc_15,
  MR_Word TypeQual_16,
  MR_Word VarNamePrint_17,
  MR_Integer Indent_18,
  MR_Word Var_19,
  MR_Word CasesList_20);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_shorthand_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Word ModuleInfo_14,
  MR_Word VarNameSrc_15,
  MR_Word TypeQual_16,
  MR_Word VarNamePrint_17,
  MR_Integer Indent_18,
  MR_String Follow_19,
  MR_Word GoalExpr_20);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_11_p_0(
  MR_Word STATE_VARIABLE_Info_0_60,
  MR_Word Stream_13,
  MR_Word ModuleInfo_14,
  MR_Word VarNameSrc_15,
  MR_Word TypeQual_16,
  MR_Word VarNamePrint_17,
  MR_Integer Indent_18,
  MR_String Follow_19,
  MR_Word GoalExpr_20);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Word ModuleInfo_14,
  MR_Word VarNameSrc_15,
  MR_Word TypeQual_16,
  MR_Word VarNamePrint_17,
  MR_Integer Indent_18,
  MR_String Follow_19,
  MR_Word GoalExpr_20);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_negation_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Word ModuleInfo_14,
  MR_Word VarNameSrc_15,
  MR_Word TypeQual_16,
  MR_Word VarNamePrint_17,
  MR_Integer Indent_18,
  MR_String Follow_19,
  MR_Word GoalExpr_20);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_switch_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_switch_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Word ModuleInfo_14,
  MR_Word VarNameSrc_15,
  MR_Word TypeQual_16,
  MR_Word VarNamePrint_17,
  MR_Integer Indent_18,
  MR_String Follow_19,
  MR_Word GoalExpr_20);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_plain_call_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Word ModuleInfo_14,
  MR_Word VarNameSrc_15,
  MR_Word TypeQual_16,
  MR_Word VarNamePrint_17,
  MR_Integer Indent_18,
  MR_String Follow_19,
  MR_Word GoalExpr_20);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_12_p_0(
  MR_Word Info_13,
  MR_Word Stream_14,
  MR_Word ModuleInfo_15,
  MR_Word VarNameSrc_16,
  MR_Word InstVarSet_17,
  MR_Word TypeQual_18,
  MR_Word VarNamePrint_19,
  MR_Integer Indent_20,
  MR_Word MaybeType_21,
  MR_Word RHS_22);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_unify_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Word ModuleInfo_14,
  MR_Word VarNameSrc_15,
  MR_Word TypeQual_16,
  MR_Word VarNamePrint_17,
  MR_Integer Indent_18,
  MR_String Follow_19,
  MR_Word GoalExpr_20);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_53_93_95_48_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_53_93_95_48_11_p_0(
  MR_Word Stream_13,
  MR_Word ModuleInfo_14,
  MR_Word VarNameSrc_15,
  MR_Word VarNamePrint_17,
  MR_Integer Indent_18,
  MR_String Follow_19,
  MR_Word GoalExpr_20);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_goal__foreign_args_to_string_lag_9_f_0(
  MR_Word VarNameSrc_11,
  MR_Word VarNamePrint_12,
  MR_Word TypeVarSet_13,
  MR_Word InstVarSet_14,
  MR_String IndentStr_15,
  MR_String MaybeLParen0_16,
  MR_String RParen_17,
  MR_Word Arg_18,
  MR_Word Args_19);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_53_93_95_48_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Word VarNameSrc_15,
  MR_Word VarNamePrint_17,
  MR_Integer Indent_18,
  MR_String Follow_19,
  MR_Word GoalExpr_20);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_goal__write_cast_as_pred_or_func_1_f_0(
  MR_Word CastType_3);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_Word MaybeArgRegs_8);

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_goal__atomic_interface_vars_to_string_4_f_0(
  MR_Word VarNameSrc_6,
  MR_Word VarNamePrint_7,
  MR_String CompName_8,
  MR_Word CompState_9);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__maybe_add_comma_newline_4_p_0(
  MR_Word Stream_5,
  MR_Word AddCommaNewline_6);

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_goal__sym_name_and_args_to_string_4_f_0(
  MR_Word VarNameSrc_6,
  MR_Word VarNamePrint_7,
  MR_Word PredName_8,
  MR_Word ArgVars_9);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_10_p_0(
  MR_Word Info_11,
  MR_Word Stream_12,
  MR_Word VarNameSrc_14,
  MR_Word InstVarSet_15,
  MR_Word VarNamePrint_16,
  MR_Integer Indent_17,
  MR_Word Unification_18);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_51_93_95_48_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_51_93_95_48_12_p_0(
  MR_Word Info_13,
  MR_Word Stream_14,
  MR_Word VarNameSrc_16,
  MR_Word InstVarSet_17,
  MR_Word VarNamePrint_18,
  MR_Integer Indent_19,
  MR_Word ConsId_20,
  MR_Word ArgVars_21,
  MR_Word ArgUnifyModes0_22);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_arg_modes_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_String HeadVar__3_3,
  MR_Integer HeadVar__4_4,
  MR_Word HeadVar__5_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_short_reuse_description_6_p_0(
  MR_Word Stream_7,
  MR_Word ShortDescription_8,
  MR_Word VarNameSrc_9,
  MR_Word VarNamePrint_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word GoalInfo_11,
  MR_Word VarNameSrc_12,
  MR_Word VarNamePrint_13,
  MR_Integer Indent_14);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_vars_6_p_0(
  MR_Word Stream_1,
  MR_Word VarNameSrc_2,
  MR_Word VarNamePrint_3,
  MR_Word HeadVar__4_4);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_1[5][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_2[11][3];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_3[2][4];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_4[4][5];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_5[5][1];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_8[5][7];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_9[1][8];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_10[1][10];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_11[2][6];


struct hlds__hlds_out__hlds_out_goal__vector_common_type_6_0_s {
  const MR_String hlds__hlds_out__hlds_out_goal__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct hlds__hlds_out__hlds_out_goal__vector_common_type_6_0_s hlds__hlds_out__hlds_out_goal_vector_common_6[24];

struct hlds__hlds_out__hlds_out_goal__vector_common_type_7_0_s {
  const MR_Word hlds__hlds_out__hlds_out_goal__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct hlds__hlds_out__hlds_out_goal__vector_common_type_7_0_s hlds__hlds_out__hlds_out_goal_vector_common_7[5];



static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[1])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[3]))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_2[11][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_4[1])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_51_93_95_48_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_4[2])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_8[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_53_93_95_48_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_8[3])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_4[3])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__write_goal_switch_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_8[4])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__write_goal_scope_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_8[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__write_goal_scope_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_4[3])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__write_cases_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_3[2][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[1])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__pt_output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_4[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_4[4][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_5[5][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "...")) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "class_method_call")) },
  /* row   3 */
  { ((MR_Box) ((MR_String) "apply")) },
  /* row   4 */
  { ((MR_Box) ((MR_String) "call")) },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_8[5][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__var_db__parse_tree__var_db__type_ctor_info_var_name_source_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_compiletime_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_9[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__var_db__parse_tree__var_db__type_ctor_info_var_name_source_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_10[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_11[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};


static /* final */ const struct hlds__hlds_out__hlds_out_goal__vector_common_type_6_0_s hlds__hlds_out__hlds_out_goal_vector_common_6[24] = {
  /* row   0 */   { (MR_String) "orig only" },
  /* row   1 */   { (MR_String) "stack only" },
  /* row   2 */   { (MR_String) "orig then stack" },
  /* row   3 */   { (MR_String) "stack then orig" },
  /* row   4 */   { (MR_String) "initial" },
  /* row   5 */   { (MR_String) "construct" },
  /* row   6 */   { (MR_String) "deconstruct" },
  /* row   7 */   { (MR_String) "other" },
  /* row   8 */   { (MR_String) "require_det" },
  /* row   9 */   { (MR_String) "require_semidet" },
  /* row  10 */   { (MR_String) "require_multi" },
  /* row  11 */   { (MR_String) "require_nondet" },
  /* row  12 */   { (MR_String) "require_cc_multi" },
  /* row  13 */   { (MR_String) "require_cc_nondet" },
  /* row  14 */   { (MR_String) "require_erroneous" },
  /* row  15 */   { (MR_String) "require_failure" },
  /* row  16 */   { (MR_String) "require_switch_arms_det" },
  /* row  17 */   { (MR_String) "require_switch_arms_semidet" },
  /* row  18 */   { (MR_String) "require_switch_arms_multi" },
  /* row  19 */   { (MR_String) "require_switch_arms_nondet" },
  /* row  20 */   { (MR_String) "require_switch_arms_cc_multi" },
  /* row  21 */   { (MR_String) "require_switch_arms_cc_nondet" },
  /* row  22 */   { (MR_String) "require_switch_arms_erroneous" },
  /* row  23 */   { (MR_String) "require_switch_arms_failure" },
};

static /* final */ const struct hlds__hlds_out__hlds_out_goal__vector_common_type_7_0_s hlds__hlds_out__hlds_out_goal_vector_common_7[5] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 0 },
  /* row   2 */   { (MR_Integer) 0 },
  /* row   3 */   { (MR_Integer) 0 },
  /* row   4 */   { (MR_Integer) 1 },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_goal__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_out__hlds_out_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__527__1_4_p_0(
  MR_String HeadVar__1_395,
  MR_Word HeadVar__2_396)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  MR_Box conv1_HeadVar__4_398;

  func_0(((MR_Box) ((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[1]))), ((MR_Box) (HeadVar__1_395)), ((MR_Box) (HeadVar__2_396)), ((MR_Box) ((MR_Integer) 0)), &conv1_HeadVar__4_398);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_7_p_0(
  MR_Word Stream_8,
  MR_String IndentStr_9,
  MR_Word MutableVar_10,
  MR_Word STATE_VARIABLE_AddCommaNewline_0_15,
  MR_Word * STATE_VARIABLE_AddCommaNewline_16)
{
  MR_String MutableName_13 = ((MR_String) ((MR_hl_field(0, MutableVar_10, (MR_Integer) 0))));
  MR_String StateVarName_14 = ((MR_String) ((MR_hl_field(0, MutableVar_10, (MR_Integer) 1))));

  switch (STATE_VARIABLE_AddCommaNewline_0_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",\n");
      break;
  }
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_9);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "state(");
  mercury__io__write_string_4_p_0(Stream_8, MutableName_13);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", !");
  mercury__io__write_string_4_p_0(Stream_8, StateVarName_14);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
  *STATE_VARIABLE_AddCommaNewline_16 = (MR_Integer) 1;
}

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_goal__ho_arg_reg_to_string_1_f_0(
  MR_Word ArgReg_3)
{
  MR_String Str_4;

  switch (ArgReg_3) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      Str_4 = (MR_String) "reg_f";
      break;
    case (MR_Integer) 0:
      Str_4 = (MR_String) "reg_r";
      break;
  }
  return Str_4;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__limit_size_of_mode_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Inst_6;

  hlds__hlds_out__hlds_out_goal__limit_size_of_inst_3_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Inst_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Inst_6));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__limit_size_of_mode_3_p_0(
  MR_Integer Levels_4,
  MR_Word Mode0_5,
  MR_Word * Mode_6)
{
  if (((MR_tag((MR_Word) Mode0_5)) == (MR_Integer) 0))
  {
    MR_Word InitInst0_7 = ((MR_Word) ((MR_hl_field(0, Mode0_5, (MR_Integer) 0))));
    MR_Word FinalInst0_8 = ((MR_Word) ((MR_hl_field(0, Mode0_5, (MR_Integer) 1))));
    MR_Word InitInst_9;
    MR_Word FinalInst_10;

    hlds__hlds_out__hlds_out_goal__limit_size_of_inst_3_p_0(Levels_4, InitInst0_7, &InitInst_9);
    hlds__hlds_out__hlds_out_goal__limit_size_of_inst_3_p_0(Levels_4, FinalInst0_8, &FinalInst_10);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Mode_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (InitInst_9));
      MR_hl_field(0, base, 1) = ((MR_Box) (FinalInst_10));
    }
  }
  else
  {
    MR_Word Name_11 = ((MR_Word) ((MR_hl_field(1, Mode0_5, (MR_Integer) 0))));
    MR_Word ArgInsts0_12 = ((MR_Word) ((MR_hl_field(1, Mode0_5, (MR_Integer) 1))));
    MR_Word ArgInsts_13;
    MR_Word Var_14;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_14, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_11[0]));
      MR_hl_field(0, Var_14, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__limit_size_of_mode_3_p_0_1));
      MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_14, 3) = ((MR_Box) (Levels_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_14, ArgInsts0_12, &ArgInsts_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Mode_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Name_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (ArgInsts_13));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__limit_size_of_unify_mode_2_p_0(
  MR_Word UnifyMode0_3,
  MR_Word * UnifyMode_4)
{
  MR_Word LI0_5 = ((MR_Word) ((MR_hl_field(0, UnifyMode0_3, (MR_Integer) 0))));
  MR_Word LF0_6 = ((MR_Word) ((MR_hl_field(0, UnifyMode0_3, (MR_Integer) 1))));
  MR_Word RI0_7 = ((MR_Word) ((MR_hl_field(0, UnifyMode0_3, (MR_Integer) 2))));
  MR_Word RF0_8 = ((MR_Word) ((MR_hl_field(0, UnifyMode0_3, (MR_Integer) 3))));
  MR_Word LI_10;
  MR_Word LF_11;
  MR_Word RI_12;
  MR_Word RF_13;

  hlds__hlds_out__hlds_out_goal__limit_size_of_inst_3_p_0((MR_Integer) 3, LI0_5, &LI_10);
  hlds__hlds_out__hlds_out_goal__limit_size_of_inst_3_p_0((MR_Integer) 3, LF0_6, &LF_11);
  hlds__hlds_out__hlds_out_goal__limit_size_of_inst_3_p_0((MR_Integer) 3, RI0_7, &RI_12);
  hlds__hlds_out__hlds_out_goal__limit_size_of_inst_3_p_0((MR_Integer) 3, RF0_8, &RF_13);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *UnifyMode_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (LI_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (LF_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (RI_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (RF_13));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__limit_size_of_inst_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Mode_6;

  hlds__hlds_out__hlds_out_goal__limit_size_of_mode_3_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Mode_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_Mode_6));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__limit_size_of_inst_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Mode_6;

  hlds__hlds_out__hlds_out_goal__limit_size_of_mode_3_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Mode_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Mode_6));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__limit_size_of_inst_3_p_0(
  MR_Integer Levels_4,
  MR_Word Inst0_5,
  MR_Word * Inst_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Inst0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Inst_6 = Inst0_5;
      break;
    case (MR_Integer) 1:
      {
        succeeded = (Levels_4 < (MR_Integer) 1);
        if (succeeded)
          *Inst_6 = (MR_Word) (MR_mkword(3, &hlds__hlds_out__hlds_out_goal_scalar_common_1[4]));
        else
        {
          MR_Word Uniq_36 = ((MR_Unsigned) ((MR_hl_field(1, Inst0_5, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word HOInstInfo0_37 = ((MR_Word) ((MR_hl_field(1, Inst0_5, (MR_Integer) 1))));
          MR_Word HOInstInfo_38;

          if ((HOInstInfo0_37 == (MR_Word) ((MR_Unsigned) 0U)))
            HOInstInfo_38 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_Word PredInstInfo0_57 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_37), (MR_Integer) 1));
            MR_Word PredOrFunc_58 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_57, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word ArgModes0_59 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_57, (MR_Integer) 1))));
            MR_Word RegInfo_60 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_57, (MR_Integer) 2))));
            MR_Word Detism_61 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_57, (MR_Integer) 3))) & (MR_Integer) 7);
            MR_Word ArgModes_62;
            MR_Word PredInstInfo_63;
            MR_Word Var_64;
            MR_Integer Var_65 = (MR_Integer) ((MR_Unsigned) Levels_4 - (MR_Unsigned) 1);

            {
              Var_64 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_64, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_11[1]));
              MR_hl_field(0, Var_64, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__limit_size_of_inst_3_p_0_2));
              MR_hl_field(0, Var_64, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_64, 3) = ((MR_Box) (Var_65));
            }
            mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_64, ArgModes0_59, &ArgModes_62);
            {
              PredInstInfo_63 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, PredInstInfo_63, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_58));
              MR_hl_field(0, PredInstInfo_63, 1) = ((MR_Box) (ArgModes_62));
              MR_hl_field(0, PredInstInfo_63, 2) = ((MR_Box) (RegInfo_60));
              MR_hl_field(0, PredInstInfo_63, 3) = (MR_Box) ((MR_Unsigned) (Detism_61));
            }
            HOInstInfo_38 = (MR_Word) (MR_mkword(1, (MR_Word) (PredInstInfo_63)));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Inst_6 = base;
            MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_36));
            MR_hl_field(1, base, 1) = ((MR_Box) (HOInstInfo_38));
          }
        }
      }
      break;
    case (MR_Integer) 2:
      {
        succeeded = (Levels_4 < (MR_Integer) 1);
        if (succeeded)
          *Inst_6 = (MR_Word) (MR_mkword(3, &hlds__hlds_out__hlds_out_goal_scalar_common_1[4]));
        else
        {
          MR_Word TestResults_19 = ((MR_Word) ((MR_hl_field(2, Inst0_5, (MR_Integer) 1))));
          MR_Word BoundInsts0_20 = ((MR_Word) ((MR_hl_field(2, Inst0_5, (MR_Integer) 2))));
          MR_Word BoundInsts_21;
          MR_Integer Var_32 = (MR_Integer) ((MR_Unsigned) Levels_4 - (MR_Unsigned) 1);
          MR_Word Uniq_39 = ((MR_Unsigned) ((MR_hl_field(2, Inst0_5, (MR_Integer) 0))) & (MR_Integer) 7);

          hlds__hlds_out__hlds_out_goal__limit_size_of_bound_insts_3_p_0(Var_32, BoundInsts0_20, &BoundInsts_21);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *Inst_6 = base;
            MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_39));
            MR_hl_field(2, base, 1) = ((MR_Box) (TestResults_19));
            MR_hl_field(2, base, 2) = ((MR_Box) (BoundInsts_21));
          }
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Inst0_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 3:
          *Inst_6 = Inst0_5;
          break;
        case (MR_Integer) 1:
          {
            succeeded = (Levels_4 < (MR_Integer) 1);
            if (succeeded)
              *Inst_6 = (MR_Word) (MR_mkword(3, &hlds__hlds_out__hlds_out_goal_scalar_common_1[4]));
            else
            {
              MR_Word Vars_22 = ((MR_Word) ((MR_hl_field(3, Inst0_5, (MR_Integer) 1))));
              MR_Word SubInst0_23 = ((MR_Word) ((MR_hl_field(3, Inst0_5, (MR_Integer) 2))));
              MR_Word SubInst_24;
              MR_Integer Var_34 = (MR_Integer) ((MR_Unsigned) Levels_4 - (MR_Unsigned) 1);

              hlds__hlds_out__hlds_out_goal__limit_size_of_inst_3_p_0(Var_34, SubInst0_23, &SubInst_24);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_6 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Vars_22));
                MR_hl_field(3, base, 2) = ((MR_Box) (SubInst_24));
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            succeeded = (Levels_4 < (MR_Integer) 1);
            if (succeeded)
              *Inst_6 = (MR_Word) (MR_mkword(3, &hlds__hlds_out__hlds_out_goal_scalar_common_1[4]));
            else
            {
              MR_Word Uniq_16 = ((MR_Unsigned) ((MR_hl_field(3, Inst0_5, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo0_17 = ((MR_Word) ((MR_hl_field(3, Inst0_5, (MR_Integer) 2))));
              MR_Word HOInstInfo_18;

              if ((HOInstInfo0_17 == (MR_Word) ((MR_Unsigned) 0U)))
                HOInstInfo_18 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word PredInstInfo0_46 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_17), (MR_Integer) 1));
                MR_Word PredOrFunc_47 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_46, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_Word ArgModes0_48 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_46, (MR_Integer) 1))));
                MR_Word RegInfo_49 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_46, (MR_Integer) 2))));
                MR_Word Detism_50 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_46, (MR_Integer) 3))) & (MR_Integer) 7);
                MR_Word ArgModes_51;
                MR_Word PredInstInfo_52;
                MR_Word Var_53;
                MR_Integer Var_54 = (MR_Integer) ((MR_Unsigned) Levels_4 - (MR_Unsigned) 1);

                {
                  Var_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_53, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_11[1]));
                  MR_hl_field(0, Var_53, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__limit_size_of_inst_3_p_0_1));
                  MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(0, Var_53, 3) = ((MR_Box) (Var_54));
                }
                mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_53, ArgModes0_48, &ArgModes_51);
                {
                  PredInstInfo_52 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, PredInstInfo_52, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_47));
                  MR_hl_field(0, PredInstInfo_52, 1) = ((MR_Box) (ArgModes_51));
                  MR_hl_field(0, PredInstInfo_52, 2) = ((MR_Box) (RegInfo_49));
                  MR_hl_field(0, PredInstInfo_52, 3) = (MR_Box) ((MR_Unsigned) (Detism_50));
                }
                HOInstInfo_18 = (MR_Word) (MR_mkword(1, (MR_Word) (PredInstInfo_52)));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_6 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_16));
                MR_hl_field(3, base, 2) = ((MR_Box) (HOInstInfo_18));
              }
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__limit_size_of_bound_insts_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Inst_6;

  hlds__hlds_out__hlds_out_goal__limit_size_of_inst_3_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Inst_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Inst_6));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__limit_size_of_bound_insts_3_p_0(
  MR_Integer Levels_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word BoundInst0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word BoundInsts0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word BoundInst_8;
    MR_Word BoundInsts_9;
    MR_Word ConsId_10 = ((MR_Word) ((MR_hl_field(0, BoundInst0_6, (MR_Integer) 0))));
    MR_Word ArgInsts0_11 = ((MR_Word) ((MR_hl_field(0, BoundInst0_6, (MR_Integer) 1))));
    MR_Word ArgInsts_12;
    MR_Word Var_13;

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_13, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_11[0]));
      MR_hl_field(0, Var_13, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__limit_size_of_bound_insts_3_p_0_1));
      MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_13, 3) = ((MR_Box) (Levels_1));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_13, ArgInsts0_11, &ArgInsts_12);
    {
      BoundInst_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, BoundInst_8, 0) = ((MR_Box) (ConsId_10));
      MR_hl_field(0, BoundInst_8, 1) = ((MR_Box) (ArgInsts_12));
    }
    hlds__hlds_out__hlds_out_goal__limit_size_of_bound_insts_3_p_0(Levels_1, BoundInsts0_7, &BoundInsts_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (BoundInst_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (BoundInsts_9));
    }
  }
}

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_goal__new_var_inst_to_string_4_f_0(
  MR_Word VarNameSrc_6,
  MR_Word VarNamePrint_7,
  MR_String IndentStr_8,
  MR_Word HeadVar__4_4)
{
  MR_String Str_11;
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 0))));
  MR_Word Inst_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 1))));
  MR_String VarStr_12;
  MR_Word InstVarSet_13;
  MR_String InstStr_14;
  MR_String Var_26;
  MR_String Var_28;
  MR_String Var_29;
  MR_String Var_31;

  VarStr_12 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_6, VarNamePrint_7, Var_9);
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_13);
  InstStr_14 = parse_tree__parse_tree_out_inst__mercury_inst_to_string_3_f_0((MR_Integer) 1, InstVarSet_13, Inst_10);
  Var_26 = mercury__string__f_43_43_2_f_0(InstStr_14, (MR_String) "\n");
  Var_28 = mercury__string__f_43_43_2_f_0((MR_String) " -> ", Var_26);
  Var_29 = mercury__string__f_43_43_2_f_0(VarStr_12, Var_28);
  Var_31 = mercury__string__f_43_43_2_f_0((MR_String) "%   ", Var_29);
  Str_11 = mercury__string__f_43_43_2_f_0(IndentStr_8, Var_31);
  return Str_11;
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_goal__case_comment_3_f_0(
  MR_String VarName_5,
  MR_String MainConsName_6,
  MR_Word OtherConsNames_7)
{
  MR_String Comment_8;

  if ((OtherConsNames_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String Var_11;

    Var_11 = mercury__string__f_43_43_2_f_0((MR_String) " has the functor ", MainConsName_6);
    Comment_8 = mercury__string__f_43_43_2_f_0(VarName_5, Var_11);
  }
  else
  {
    MR_String Var_13;
    MR_String Var_15;
    MR_Word Var_17;

    {
      Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_17, 0) = ((MR_Box) (MainConsName_6));
      MR_hl_field(1, Var_17, 1) = ((MR_Box) (OtherConsNames_7));
    }
    Var_15 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_17);
    Var_13 = mercury__string__f_43_43_2_f_0((MR_String) " has one of the functors ", Var_15);
    Comment_8 = mercury__string__f_43_43_2_f_0(VarName_5, Var_13);
  }
  return Comment_8;
}

void MR_CALL 
hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(
  MR_Word TaggedConsId_4,
  MR_String * ConsName_5,
  MR_Word * ConsTag_6)
{
  MR_Word ConsId_7 = ((MR_Word) ((MR_hl_field(0, TaggedConsId_4, (MR_Integer) 0))));

  *ConsTag_6 = ((MR_Word) ((MR_hl_field(0, TaggedConsId_4, (MR_Integer) 1))));
  *ConsName_5 = parse_tree__parse_tree_out_cons_id__cons_id_and_arity_to_string_1_f_0(ConsId_7);
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_goal__unify_rhs_to_string_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTable_7,
  MR_Word VarNamePrint_8,
  MR_Word RHS_9)
{
  MR_bool succeeded;
  MR_String Str_10;

  switch (MR_tag((MR_Word) RHS_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, RHS_9, (MR_Integer) 0))));

        Str_10 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(VarTable_7, VarNamePrint_8, Var_11);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ConsId0_12 = ((MR_Word) ((MR_hl_field(1, RHS_9, (MR_Integer) 0))));
        MR_Word IsExistConstruct_13 = ((MR_Unsigned) ((MR_hl_field(1, RHS_9, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_Word ArgVars_14 = ((MR_Word) ((MR_hl_field(1, RHS_9, (MR_Integer) 2))));
        MR_Word ConsId_19;
        MR_Word Var_28;
        MR_Word SymName0_15;
        MR_Integer Arity_16;
        MR_Word TypeCtor_17;

        succeeded = (IsExistConstruct_13 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = ((((MR_tag((MR_Word) ConsId0_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId0_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            SymName0_15 = ((MR_Word) ((MR_hl_field(3, ConsId0_12, (MR_Integer) 1))));
            Arity_16 = ((MR_Integer) ((MR_hl_field(3, ConsId0_12, (MR_Integer) 2))));
            TypeCtor_17 = ((MR_Word) ((MR_hl_field(3, ConsId0_12, (MR_Integer) 3))));
          }
        }
        if (succeeded)
        {
          MR_Word SymName_18;

          parse_tree__prog_type__add_new_prefix_2_p_0(SymName0_15, &SymName_18);
          {
            ConsId_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, ConsId_19, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, ConsId_19, 1) = ((MR_Box) (SymName_18));
            MR_hl_field(3, ConsId_19, 2) = ((MR_Box) (Arity_16));
            MR_hl_field(3, ConsId_19, 3) = ((MR_Box) (TypeCtor_17));
          }
        }
        else
          ConsId_19 = ConsId0_12;
        {
          Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_28, 0) = ((MR_Box) (VarTable_7));
        }
        Str_10 = hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(ModuleInfo_6, Var_28, VarNamePrint_8, ConsId_19, ArgVars_14);
      }
      break;
    case (MR_Integer) 2:
      Str_10 = (MR_String) "lambda goal";
      break;
  }
  return Str_10;
}

void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_unify_rhs_10_p_0(
  MR_Word Info_11,
  MR_Word Stream_12,
  MR_Word ModuleInfo_13,
  MR_Word VarNameSrc_14,
  MR_Word InstVarSet_15,
  MR_Word VarNamePrint_16,
  MR_Integer Indent_17,
  MR_Word RHS_18)
{
  hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_12_p_0(Info_11, Stream_12, ModuleInfo_13, VarNameSrc_14, InstVarSet_15, (MR_Word) ((MR_Unsigned) 0U), VarNamePrint_16, Indent_17, (MR_Word) ((MR_Unsigned) 0U), RHS_18);
}

void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_nl_10_p_0(
  MR_Word Info_11,
  MR_Word Stream_12,
  MR_Word ModuleInfo_13,
  MR_Word VarNameSrc_14,
  MR_Word VarNamePrint_15,
  MR_Integer Indent_16,
  MR_String Follow_17,
  MR_Word Goal_18)
{
  hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_11, Stream_12, ModuleInfo_13, VarNameSrc_14, (MR_Word) ((MR_Unsigned) 0U), VarNamePrint_15, Indent_16, Follow_17, Goal_18);
  mercury__io__nl_3_p_0(Stream_12);
}

void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_10_p_0(
  MR_Word Info_11,
  MR_Word Stream_12,
  MR_Word ModuleInfo_13,
  MR_Word VarNameSrc_14,
  MR_Word VarNamePrint_15,
  MR_Integer Indent_16,
  MR_String Follow_17,
  MR_Word Goal_18)
{
  hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_11, Stream_12, ModuleInfo_13, VarNameSrc_14, (MR_Word) ((MR_Unsigned) 0U), VarNamePrint_15, Indent_16, Follow_17, Goal_18);
}

void MR_CALL 
hlds__hlds_out__hlds_out_goal__dump_goal_nl_6_p_0(
  MR_Word Stream_7,
  MR_Word ModuleInfo_8,
  MR_Word VarNameSrc_9,
  MR_Word Goal_10)
{
  hlds__hlds_out__hlds_out_goal__dump_goal_6_p_0(Stream_7, ModuleInfo_8, VarNameSrc_9, Goal_10);
  mercury__io__nl_3_p_0(Stream_7);
}

void MR_CALL 
hlds__hlds_out__hlds_out_goal__dump_goal_6_p_0(
  MR_Word Stream_7,
  MR_Word ModuleInfo_8,
  MR_Word VarNameSrc_9,
  MR_Word Goal_10)
{
  MR_Word Globals_12;
  MR_Word Info_13;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_8, &Globals_12);
  Info_13 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(Globals_12, (MR_Integer) 1);
  hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_13, Stream_7, ModuleInfo_8, VarNameSrc_9, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Integer) 0, (MR_String) "", Goal_10);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_expr_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Word ModuleInfo_14,
  MR_Word VarNameSrc_15,
  MR_Word TypeQual_16,
  MR_Word VarNamePrint_17,
  MR_Integer Indent_18,
  MR_String Follow_19,
  MR_Word GoalExpr_20)
{
  switch (MR_tag((MR_Word) GoalExpr_20)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      hlds__hlds_out__hlds_out_goal__write_goal_negation_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Indent_18, Follow_19, GoalExpr_20);
      break;
    case (MR_Integer) 1:
      hlds__hlds_out__hlds_out_goal__write_goal_unify_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Indent_18, Follow_19, GoalExpr_20);
      break;
    case (MR_Integer) 2:
      hlds__hlds_out__hlds_out_goal__write_goal_plain_call_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Indent_18, Follow_19, GoalExpr_20);
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_53_93_95_48_11_p_0(Info_12, Stream_13, VarNameSrc_15, VarNamePrint_17, Indent_18, Follow_19, GoalExpr_20);
          break;
        case (MR_Integer) 1:
          hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_53_93_95_48_11_p_0(Stream_13, ModuleInfo_14, VarNameSrc_15, VarNamePrint_17, Indent_18, Follow_19, GoalExpr_20);
          break;
        case (MR_Integer) 2:
          hlds__hlds_out__hlds_out_goal__write_goal_conj_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Indent_18, Follow_19, GoalExpr_20);
          break;
        case (MR_Integer) 3:
          {
            MR_Word Disjuncts_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 1))));
            MR_String IndentStr_62;

            IndentStr_62 = libs__indent__indent2_string_1_f_0(Indent_18);
            if ((Disjuncts_61 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__io__write_string_4_p_0(Stream_13, IndentStr_62);
              mercury__io__write_string_4_p_0(Stream_13, (MR_String) "fail");
              mercury__io__write_string_4_p_0(Stream_13, Follow_19);
            }
            else
            {
              MR_Word Goal_63 = ((MR_Word) ((MR_hl_field(1, Disjuncts_61, (MR_Integer) 0))));
              MR_Word Goals_64 = ((MR_Word) ((MR_hl_field(1, Disjuncts_61, (MR_Integer) 1))));
              MR_Integer Var_70;

              mercury__io__write_string_4_p_0(Stream_13, IndentStr_62);
              mercury__io__write_string_4_p_0(Stream_13, (MR_String) "( % disjunction\n");
              Var_70 = (MR_Integer) ((MR_Unsigned) Indent_18 + (MR_Unsigned) 1);
              hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Var_70, (MR_String) "\n", Goal_63);
              hlds__hlds_out__hlds_out_goal__write_goal_list_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Indent_18, (MR_String) ";\n", Goals_64);
              mercury__io__write_string_4_p_0(Stream_13, IndentStr_62);
              mercury__io__write_string_4_p_0(Stream_13, (MR_String) ")");
              mercury__io__write_string_4_p_0(Stream_13, Follow_19);
            }
          }
          break;
        case (MR_Integer) 4:
          hlds__hlds_out__hlds_out_goal__write_goal_switch_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Indent_18, Follow_19, GoalExpr_20);
          break;
        case (MR_Integer) 5:
          hlds__hlds_out__hlds_out_goal__write_goal_scope_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Indent_18, Follow_19, GoalExpr_20);
          break;
        case (MR_Integer) 6:
          hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Indent_18, Follow_19, GoalExpr_20);
          break;
        case (MR_Integer) 7:
          hlds__hlds_out__hlds_out_goal__write_goal_shorthand_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Indent_18, Follow_19, GoalExpr_20);
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_conj_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Word ModuleInfo_14,
  MR_Word VarNameSrc_15,
  MR_Word TypeQual_16,
  MR_Word VarNamePrint_17,
  MR_Integer Indent_18,
  MR_String Follow_19,
  MR_Word GoalExpr_20)
{
  MR_bool succeeded;
  MR_Word ConjType_22 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word List_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 2))));

  if ((List_23 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String ParStr_28;
    MR_String IndentStr_78;

    IndentStr_78 = libs__indent__indent2_string_1_f_0(Indent_18);
    switch (ConjType_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ParStr_28 = (MR_String) "/* parallel */";
        break;
      case (MR_Integer) 0:
        ParStr_28 = (MR_String) "";
        break;
    }
    mercury__io__write_string_4_p_0(Stream_13, IndentStr_78);
    mercury__io__write_string_4_p_0(Stream_13, ParStr_28);
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) "true");
    mercury__io__write_string_4_p_0(Stream_13, Follow_19);
  }
  else
  {
    MR_Word Goal_24 = ((MR_Word) ((MR_hl_field(1, List_23, (MR_Integer) 0))));
    MR_Word Goals_25 = ((MR_Word) ((MR_hl_field(1, List_23, (MR_Integer) 1))));

    switch (ConjType_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer Var_55;
          MR_String IndentStr_77;

          IndentStr_77 = libs__indent__indent2_string_1_f_0(Indent_18);
          mercury__io__write_string_4_p_0(Stream_13, IndentStr_77);
          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "( % parallel conjunction\n");
          Var_55 = (MR_Integer) ((MR_Unsigned) Indent_18 + (MR_Unsigned) 1);
          hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Var_55, (MR_String) "\n", Goal_24);
          hlds__hlds_out__hlds_out_goal__write_goal_list_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Indent_18, (MR_String) "&\n", Goals_25);
          mercury__io__write_string_4_p_0(Stream_13, IndentStr_77);
          mercury__io__write_string_4_p_0(Stream_13, (MR_String) ")");
          mercury__io__write_string_4_p_0(Stream_13, Follow_19);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_String DumpOptions_26 = ((MR_String) ((MR_hl_field(0, Info_12, (MR_Integer) 0))));

          succeeded = (strcmp(DumpOptions_26, (MR_String) "") == 0);
          if (succeeded)
            hlds__hlds_out__hlds_out_goal__write_conj_13_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Indent_18, Follow_19, (MR_String) ",\n", Goal_24, Goals_25);
          else
          {
            MR_String IndentStr_27;
            MR_Integer Var_38;

            IndentStr_27 = libs__indent__indent2_string_1_f_0(Indent_18);
            mercury__io__write_string_4_p_0(Stream_13, IndentStr_27);
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) "( % conjunction\n");
            Var_38 = (MR_Integer) ((MR_Unsigned) Indent_18 + (MR_Unsigned) 1);
            hlds__hlds_out__hlds_out_goal__write_conj_13_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Var_38, (MR_String) "\n", (MR_String) ",\n", Goal_24, Goals_25);
            mercury__io__write_string_4_p_0(Stream_13, IndentStr_27);
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) ")");
            mercury__io__write_string_4_p_0(Stream_13, Follow_19);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_conj_13_p_0(
  MR_Word Info_14,
  MR_Word Stream_15,
  MR_Word ModuleInfo_16,
  MR_Word VarNameSrc_17,
  MR_Word TypeQual_18,
  MR_Word VarNamePrint_19,
  MR_Integer Indent_20,
  MR_String Follow_21,
  MR_String Separator_22,
  MR_Word Goal1_23,
  MR_Word Goals1_24)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Goals1_24 == (MR_Word) ((MR_Unsigned) 0U)))
      hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_14, Stream_15, ModuleInfo_16, VarNameSrc_17, TypeQual_18, VarNamePrint_19, Indent_20, Follow_21, Goal1_23);
    else
    {
      MR_Word Goal2_26 = ((MR_Word) ((MR_hl_field(1, Goals1_24, (MR_Integer) 0))));
      MR_Word Goals2_27 = ((MR_Word) ((MR_hl_field(1, Goals1_24, (MR_Integer) 1))));
      MR_String DumpOptions_28 = ((MR_String) ((MR_hl_field(0, Info_14, (MR_Integer) 0))));
      MR_Word next_value_of_Goal1_23;
      MR_Word next_value_of_Goals1_24;

      succeeded = (strcmp(DumpOptions_28, (MR_String) "") == 0);
      if (succeeded)
        hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_14, Stream_15, ModuleInfo_16, VarNameSrc_17, TypeQual_18, VarNamePrint_19, Indent_20, Separator_22, Goal1_23);
      else
      {
        MR_String IndentStr_29;

        hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_14, Stream_15, ModuleInfo_16, VarNameSrc_17, TypeQual_18, VarNamePrint_19, Indent_20, (MR_String) "\n", Goal1_23);
        IndentStr_29 = libs__indent__indent2_string_1_f_0(Indent_20);
        mercury__io__write_string_4_p_0(Stream_15, IndentStr_29);
        mercury__io__write_string_4_p_0(Stream_15, Separator_22);
      }
      // direct tailcall eliminated
      ;
      next_value_of_Goal1_23 = Goal2_26;
      next_value_of_Goals1_24 = Goals2_27;
      Goal1_23 = next_value_of_Goal1_23;
      Goals1_24 = next_value_of_Goals1_24;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_goal__write_cases_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__parse_tree_out_cons_id__unqual_cons_id_and_arity_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_cases_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Word ModuleInfo_14,
  MR_Word VarNameSrc_15,
  MR_Word TypeQual_16,
  MR_Word VarNamePrint_17,
  MR_Integer Indent_18,
  MR_Word Var_19,
  MR_Word CasesList_20)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((CasesList_20 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Case_22 = ((MR_Word) ((MR_hl_field(1, CasesList_20, (MR_Integer) 0))));
      MR_Word Cases_23 = ((MR_Word) ((MR_hl_field(1, CasesList_20, (MR_Integer) 1))));
      MR_String IndentStr_24;
      MR_Integer Var_32;
      MR_Word MainConsId_37;
      MR_Word OtherConsIds_38;
      MR_Word Goal_39;
      MR_String IndentStr_40;
      MR_String VarStr_41;
      MR_Word ConsIdStrs_42;
      MR_String ConsIdsStr_43;
      MR_Word Var_45;
      MR_Word next_value_of_CasesList_20;

      IndentStr_24 = libs__indent__indent2_string_1_f_0(Indent_18);
      mercury__io__write_string_4_p_0(Stream_13, IndentStr_24);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) ";\n");
      Var_32 = (MR_Integer) ((MR_Unsigned) Indent_18 + (MR_Unsigned) 1);
      MainConsId_37 = ((MR_Word) ((MR_hl_field(0, Case_22, (MR_Integer) 0))));
      OtherConsIds_38 = ((MR_Word) ((MR_hl_field(0, Case_22, (MR_Integer) 1))));
      Goal_39 = ((MR_Word) ((MR_hl_field(0, Case_22, (MR_Integer) 2))));
      IndentStr_40 = libs__indent__indent2_string_1_f_0(Var_32);
      VarStr_41 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, Var_19);
      {
        Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_45, 0) = ((MR_Box) (MainConsId_37));
        MR_hl_field(1, Var_45, 1) = ((MR_Box) (OtherConsIds_38));
      }
      ConsIdStrs_42 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[10]), Var_45);
      ConsIdsStr_43 = mercury__string__join_list_2_f_0((MR_String) " or ", ConsIdStrs_42);
      mercury__io__write_string_4_p_0(Stream_13, IndentStr_40);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% ");
      mercury__io__write_string_4_p_0(Stream_13, VarStr_41);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) " has functor ");
      mercury__io__write_string_4_p_0(Stream_13, ConsIdsStr_43);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
      hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Var_32, (MR_String) "\n", Goal_39);
      // direct tailcall eliminated
      ;
      next_value_of_CasesList_20 = Cases_23;
      CasesList_20 = next_value_of_CasesList_20;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_list_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Word ModuleInfo_14,
  MR_Word VarNameSrc_15,
  MR_Word TypeQual_16,
  MR_Word VarNamePrint_17,
  MR_Integer Indent_18,
  MR_String Separator_19,
  MR_Word Goals_20)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((Goals_20 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word HeadGoal_22 = ((MR_Word) ((MR_hl_field(1, Goals_20, (MR_Integer) 0))));
      MR_Word TailGoals_23 = ((MR_Word) ((MR_hl_field(1, Goals_20, (MR_Integer) 1))));
      MR_Integer Var_28;
      MR_Word next_value_of_Goals_20;

      libs__indent__write_indent2_4_p_0(Stream_13, Indent_18);
      mercury__io__write_string_4_p_0(Stream_13, Separator_19);
      Var_28 = (MR_Integer) ((MR_Unsigned) Indent_18 + (MR_Unsigned) 1);
      hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Var_28, (MR_String) "\n", HeadGoal_22);
      // direct tailcall eliminated
      ;
      next_value_of_Goals_20 = TailGoals_23;
      Goals_20 = next_value_of_Goals_20;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_shorthand_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Word ModuleInfo_14,
  MR_Word VarNameSrc_15,
  MR_Word TypeQual_16,
  MR_Word VarNamePrint_17,
  MR_Integer Indent_18,
  MR_String Follow_19,
  MR_Word GoalExpr_20)
{
  MR_Word ShortHand_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 1))));
  MR_String IndentStr_23;
  MR_Integer Indent1_24;

  IndentStr_23 = libs__indent__indent2_string_1_f_0(Indent_18);
  Indent1_24 = (MR_Integer) ((MR_Unsigned) Indent_18 + (MR_Unsigned) 1);
  switch (MR_tag((MR_Word) ShortHand_22)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word GoalA_44 = ((MR_Word) ((MR_hl_field(0, ShortHand_22, (MR_Integer) 0))));
        MR_Word GoalB_45 = ((MR_Word) ((MR_hl_field(0, ShortHand_22, (MR_Integer) 1))));

        mercury__io__write_string_4_p_0(Stream_13, IndentStr_23);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) "( % bi-implication\n");
        hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Indent1_24, (MR_String) "\n", GoalA_44);
        mercury__io__write_string_4_p_0(Stream_13, IndentStr_23);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) "<=>\n");
        hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Indent1_24, (MR_String) "\n", GoalB_45);
        mercury__io__write_string_4_p_0(Stream_13, IndentStr_23);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) ")");
        mercury__io__write_string_4_p_0(Stream_13, Follow_19);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Outer_26 = ((MR_Word) ((MR_hl_field(1, ShortHand_22, (MR_Integer) 1))));
        MR_Word Inner_27 = ((MR_Word) ((MR_hl_field(1, ShortHand_22, (MR_Integer) 2))));
        MR_Word MaybeOutputVars_28 = ((MR_Word) ((MR_hl_field(1, ShortHand_22, (MR_Integer) 3))));
        MR_Word MainGoal_29 = ((MR_Word) ((MR_hl_field(1, ShortHand_22, (MR_Integer) 4))));
        MR_Word OrElseGoals_30 = ((MR_Word) ((MR_hl_field(1, ShortHand_22, (MR_Integer) 5))));
        MR_String OuterStr_32;
        MR_String InnerStr_33;
        MR_String MaybeOutputVarsStr_34;

        OuterStr_32 = hlds__hlds_out__hlds_out_goal__atomic_interface_vars_to_string_4_f_0(VarNameSrc_15, VarNamePrint_17, (MR_String) "outer", Outer_26);
        InnerStr_33 = hlds__hlds_out__hlds_out_goal__atomic_interface_vars_to_string_4_f_0(VarNameSrc_15, VarNamePrint_17, (MR_String) "inner", Inner_27);
        if ((MaybeOutputVars_28 == (MR_Word) ((MR_Unsigned) 0U)))
          MaybeOutputVarsStr_34 = (MR_String) "no_vars";
        else
        {
          MR_Word OutputVars_35 = ((MR_Word) ((MR_hl_field(1, MaybeOutputVars_28, (MR_Integer) 0))));
          MR_String OutputVarsStr_36;
          MR_String Var_141;

          OutputVarsStr_36 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, OutputVars_35);
          Var_141 = mercury__string__f_43_43_2_f_0(OutputVarsStr_36, (MR_String) "])");
          MaybeOutputVarsStr_34 = mercury__string__f_43_43_2_f_0((MR_String) "vars([", Var_141);
        }
        mercury__io__write_string_4_p_0(Stream_13, IndentStr_23);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) "atomic [");
        mercury__io__write_string_4_p_0(Stream_13, OuterStr_32);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) " ");
        mercury__io__write_string_4_p_0(Stream_13, InnerStr_33);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) " ");
        mercury__io__write_string_4_p_0(Stream_13, MaybeOutputVarsStr_34);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) "] (\n");
        hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Indent1_24, (MR_String) "\n", MainGoal_29);
        hlds__hlds_out__hlds_out_goal__write_goal_list_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Indent_18, (MR_String) "or_else\n", OrElseGoals_30);
        mercury__io__write_string_4_p_0(Stream_13, IndentStr_23);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) ")");
        mercury__io__write_string_4_p_0(Stream_13, Follow_19);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word MaybeIO_37 = ((MR_Word) ((MR_hl_field(2, ShortHand_22, (MR_Integer) 0))));
        MR_Word SubGoal_39 = ((MR_Word) ((MR_hl_field(2, ShortHand_22, (MR_Integer) 2))));

        mercury__io__write_string_4_p_0(Stream_13, IndentStr_23);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) "( % try\n");
        if (!((MaybeIO_37 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word IOVarA_40;
          MR_Word IOVarB_41;
          MR_String Indent1Str_42;
          MR_String IOVarsStr_43;
          MR_Word Var_82 = ((MR_Word) ((MR_hl_field(1, MaybeIO_37, (MR_Integer) 0))));
          MR_Word Var_83;
          MR_Word Var_84;

          IOVarA_40 = ((MR_Word) ((MR_hl_field(0, Var_82, (MR_Integer) 0))));
          IOVarB_41 = ((MR_Word) ((MR_hl_field(0, Var_82, (MR_Integer) 1))));
          Indent1Str_42 = libs__indent__indent2_string_1_f_0(Indent1_24);
          {
            Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_84, 0) = ((MR_Box) (IOVarB_41));
            MR_hl_field(1, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_83, 0) = ((MR_Box) (IOVarA_40));
            MR_hl_field(1, Var_83, 1) = ((MR_Box) (Var_84));
          }
          IOVarsStr_43 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, Var_83);
          mercury__io__write_string_4_p_0(Stream_13, Indent1Str_42);
          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% io(");
          mercury__io__write_string_4_p_0(Stream_13, IOVarsStr_43);
          mercury__io__write_string_4_p_0(Stream_13, (MR_String) ")\n");
        }
        hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Indent1_24, (MR_String) "\n", SubGoal_39);
        mercury__io__write_string_4_p_0(Stream_13, IndentStr_23);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) ")");
        mercury__io__write_string_4_p_0(Stream_13, Follow_19);
      }
      break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_AddCommaNewline_16;

  hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_AddCommaNewline_16);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_AddCommaNewline_16));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_clause__mercury_output_trace_runtime_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_clause__mercury_output_trace_compiletime_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_11_p_0(
  MR_Word STATE_VARIABLE_Info_0_60,
  MR_Word Stream_13,
  MR_Word ModuleInfo_14,
  MR_Word VarNameSrc_15,
  MR_Word TypeQual_16,
  MR_Word VarNamePrint_17,
  MR_Integer Indent_18,
  MR_String Follow_19,
  MR_Word GoalExpr_20)
{
  MR_Word Reason_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 1))));
  MR_Word Goal_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 2))));
  MR_String IndentStr_24;
  MR_Word STATE_VARIABLE_Info_140_140;
  MR_Integer Var_203;

  IndentStr_24 = libs__indent__indent2_string_1_f_0(Indent_18);
  mercury__io__write_string_4_p_0(Stream_13, IndentStr_24);
  switch (MR_tag((MR_Word) Reason_22)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Vars_25 = ((MR_Word) ((MR_hl_field(0, Reason_22, (MR_Integer) 0))));
        MR_Word Creator_26 = ((MR_Unsigned) ((MR_hl_field(0, Reason_22, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_String VarsStr_27;
        MR_String CreatorStr_28;

        VarsStr_27 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, Vars_25);
        switch (Creator_26) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            CreatorStr_28 = (MR_String) "compiler";
            break;
          case (MR_Integer) 0:
            CreatorStr_28 = (MR_String) "user";
            break;
        }
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) "some [");
        mercury__io__write_string_4_p_0(Stream_13, VarsStr_27);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) "] ( % ");
        mercury__io__write_string_4_p_0(Stream_13, CreatorStr_28);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
        STATE_VARIABLE_Info_140_140 = STATE_VARIABLE_Info_0_60;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word HeadWarning_29 = ((MR_Unsigned) ((MR_hl_field(1, Reason_22, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Word TailWarnings_30 = ((MR_Word) ((MR_hl_field(1, Reason_22, (MR_Integer) 1))));

        mercury__io__write_string_4_p_0(Stream_13, (MR_String) "disable_warnings [");
        parse_tree__parse_tree_out_clause__write_goal_warnings_5_p_0(Stream_13, HeadWarning_29, TailWarnings_30);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) "] (\n");
        STATE_VARIABLE_Info_140_140 = STATE_VARIABLE_Info_0_60;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Kind_33 = ((MR_Unsigned) ((MR_hl_field(2, Reason_22, (MR_Integer) 1))) & (MR_Integer) 3);
        MR_String PromiseKindStr_34;
        MR_Word Vars_214 = ((MR_Word) ((MR_hl_field(2, Reason_22, (MR_Integer) 0))));
        MR_String VarsStr_215;

        VarsStr_215 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, Vars_214);
        switch (Kind_33) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            PromiseKindStr_34 = (MR_String) "promise_equivalent_solution_sets";
            break;
          case (MR_Integer) 2:
            PromiseKindStr_34 = (MR_String) "arbitrary";
            break;
          case (MR_Integer) 0:
            PromiseKindStr_34 = (MR_String) "promise_equivalent_solutions";
            break;
        }
        mercury__io__write_string_4_p_0(Stream_13, PromiseKindStr_34);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) " [");
        mercury__io__write_string_4_p_0(Stream_13, VarsStr_215);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) "] (\n");
        STATE_VARIABLE_Info_140_140 = STATE_VARIABLE_Info_0_60;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Reason_22, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Purity_31 = ((MR_Unsigned) ((MR_hl_field(3, Reason_22, (MR_Integer) 1))) & (MR_Integer) 3);
            MR_String PromiseStr_32;

            switch (Purity_31) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                PromiseStr_32 = (MR_String) "promise_impure";
                break;
              case (MR_Integer) 0:
                PromiseStr_32 = (MR_String) "promise_pure";
                break;
              case (MR_Integer) 1:
                PromiseStr_32 = (MR_String) "promise_semipure";
                break;
            }
            mercury__io__write_string_4_p_0(Stream_13, PromiseStr_32);
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) " (\n");
            STATE_VARIABLE_Info_140_140 = STATE_VARIABLE_Info_0_60;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Detism_35 = ((MR_Unsigned) ((MR_hl_field(3, Reason_22, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_String ReqStr_36 = ((&hlds__hlds_out__hlds_out_goal_vector_common_6[8 + Detism_35]))->hlds__hlds_out__hlds_out_goal__vector_common_type_6_0__vct_6_f_0;

            mercury__io__write_string_4_p_0(Stream_13, ReqStr_36);
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) " (\n");
            STATE_VARIABLE_Info_140_140 = STATE_VARIABLE_Info_0_60;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_37 = ((MR_Word) ((MR_hl_field(3, Reason_22, (MR_Integer) 1))));
            MR_String VarStr_38;

            VarStr_38 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, Var_37);
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) "require_complete_switch [");
            mercury__io__write_string_4_p_0(Stream_13, VarStr_38);
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) "] (\n");
            STATE_VARIABLE_Info_140_140 = STATE_VARIABLE_Info_0_60;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Detism_216 = ((MR_Unsigned) ((MR_hl_field(3, Reason_22, (MR_Integer) 2))) & (MR_Integer) 7);
            MR_String ReqStr_217 = ((&hlds__hlds_out__hlds_out_goal_vector_common_6[16 + Detism_216]))->hlds__hlds_out__hlds_out_goal__vector_common_type_6_0__vct_6_f_0;
            MR_Word Var_218 = ((MR_Word) ((MR_hl_field(3, Reason_22, (MR_Integer) 1))));
            MR_String VarStr_219;

            VarStr_219 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, Var_218);
            mercury__io__write_string_4_p_0(Stream_13, ReqStr_217);
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) " [");
            mercury__io__write_string_4_p_0(Stream_13, VarStr_219);
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) "] (\n");
            STATE_VARIABLE_Info_140_140 = STATE_VARIABLE_Info_0_60;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_255 = ((MR_Unsigned) ((MR_hl_field(3, Reason_22, (MR_Integer) 1))) & (MR_Integer) 1);

            switch (Var_255) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "(\n");
                  libs__indent__write_indent2_4_p_0(Stream_13, Indent_18);
                  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% commit(dont_force_pruning)\n");
                  STATE_VARIABLE_Info_140_140 = STATE_VARIABLE_Info_0_60;
                }
                break;
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "(\n");
                  libs__indent__write_indent2_4_p_0(Stream_13, Indent_18);
                  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% commit(force_pruning)\n");
                  STATE_VARIABLE_Info_140_140 = STATE_VARIABLE_Info_0_60;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Var_254 = ((MR_Unsigned) ((MR_hl_field(3, Reason_22, (MR_Integer) 1))) & (MR_Integer) 1);

            switch (Var_254) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "(\n");
                  libs__indent__write_indent2_4_p_0(Stream_13, Indent_18);
                  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% barrier(not_removable)\n");
                  STATE_VARIABLE_Info_140_140 = STATE_VARIABLE_Info_0_60;
                }
                break;
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "(\n");
                  libs__indent__write_indent2_4_p_0(Stream_13, Indent_18);
                  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% barrier(removable)\n");
                  STATE_VARIABLE_Info_140_140 = STATE_VARIABLE_Info_0_60;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_String KindStr_39;
            MR_String DumpOptionsBackup_40;
            MR_Word Kind_220 = ((MR_Unsigned) ((MR_hl_field(3, Reason_22, (MR_Integer) 2))) & (MR_Integer) 3);
            MR_Word Var_221 = ((MR_Word) ((MR_hl_field(3, Reason_22, (MR_Integer) 1))));
            MR_String VarStr_222;
            MR_Word Var_224;
            MR_Word Var_225;
            MR_Word Var_226;

            VarStr_222 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, Var_221);
            KindStr_39 = ((&hlds__hlds_out__hlds_out_goal_vector_common_6[4 + Kind_220]))->hlds__hlds_out__hlds_out_goal__vector_common_type_6_0__vct_6_f_0;
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) "(\n");
            mercury__io__write_string_4_p_0(Stream_13, IndentStr_24);
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% from_ground_term [");
            mercury__io__write_string_4_p_0(Stream_13, VarStr_222);
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) ", ");
            mercury__io__write_string_4_p_0(Stream_13, KindStr_39);
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) "]\n");
            DumpOptionsBackup_40 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Info_0_60, (MR_Integer) 1))));
            Var_224 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_60, (MR_Integer) 2))));
            Var_225 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_60, (MR_Integer) 3))));
            Var_226 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_60, (MR_Integer) 4))));
            {
              STATE_VARIABLE_Info_140_140 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_Info_140_140, 0) = ((MR_Box) (DumpOptionsBackup_40));
              MR_hl_field(0, STATE_VARIABLE_Info_140_140, 1) = ((MR_Box) (DumpOptionsBackup_40));
              MR_hl_field(0, STATE_VARIABLE_Info_140_140, 2) = ((MR_Box) (Var_224));
              MR_hl_field(0, STATE_VARIABLE_Info_140_140, 3) = ((MR_Box) (Var_225));
              MR_hl_field(0, STATE_VARIABLE_Info_140_140, 4) = ((MR_Box) (Var_226));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word MaybeCompileTime_41 = ((MR_Word) ((MR_hl_field(3, Reason_22, (MR_Integer) 1))));
            MR_Word MaybeRunTime_42 = ((MR_Word) ((MR_hl_field(3, Reason_22, (MR_Integer) 2))));
            MR_Word MaybeIO0_43 = ((MR_Word) ((MR_hl_field(3, Reason_22, (MR_Integer) 3))));
            MR_Word MutableVars0_44 = ((MR_Word) ((MR_hl_field(3, Reason_22, (MR_Integer) 4))));
            MR_Word QuantVars_45 = ((MR_Word) ((MR_hl_field(3, Reason_22, (MR_Integer) 5))));
            MR_String Indent1Str_47;
            MR_Word Lang_50;
            MR_Word MutableVars_52;
            MR_Integer Var_144;
            MR_Word STATE_VARIABLE_AddCommaNewline_155_155;
            MR_Word STATE_VARIABLE_AddCommaNewline_166_166;
            MR_Word Var_167;
            MR_Word STATE_VARIABLE_AddCommaNewline_176_176;
            MR_Word Var_177;
            MR_Word STATE_VARIABLE_AddCommaNewline_178_178;
            MR_Box conv2_STATE_VARIABLE_AddCommaNewline_178_178;
            MR_Box conv1_STATE_VARIABLE_IO_179_179;

            mercury__io__write_string_4_p_0(Stream_13, (MR_String) "trace [\n");
            Var_144 = (MR_Integer) ((MR_Unsigned) Indent_18 + (MR_Unsigned) 1);
            Indent1Str_47 = libs__indent__indent2_string_1_f_0(Var_144);
            if ((MaybeCompileTime_41 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_AddCommaNewline_155_155 = (MR_Integer) 0;
            else
            {
              MR_Word CompileTime_48 = ((MR_Word) ((MR_hl_field(1, MaybeCompileTime_41, (MR_Integer) 0))));

              mercury__io__write_string_4_p_0(Stream_13, Indent1Str_47);
              mercury__io__write_string_4_p_0(Stream_13, (MR_String) "compile_time(");
              parse_tree__parse_tree_out_clause__mercury_output_trace_expr_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_compiletime_0), Stream_13, (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[8]), CompileTime_48);
              mercury__io__write_string_4_p_0(Stream_13, (MR_String) ")");
              STATE_VARIABLE_AddCommaNewline_155_155 = (MR_Integer) 1;
            }
            if ((MaybeRunTime_42 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_AddCommaNewline_166_166 = STATE_VARIABLE_AddCommaNewline_155_155;
            else
            {
              MR_Word RunTime_49 = ((MR_Word) ((MR_hl_field(1, MaybeRunTime_42, (MR_Integer) 0))));

              hlds__hlds_out__hlds_out_goal__maybe_add_comma_newline_4_p_0(Stream_13, STATE_VARIABLE_AddCommaNewline_155_155);
              mercury__io__write_string_4_p_0(Stream_13, Indent1Str_47);
              mercury__io__write_string_4_p_0(Stream_13, (MR_String) "runtime(");
              parse_tree__parse_tree_out_clause__mercury_output_trace_expr_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0), Stream_13, (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[9]), RunTime_49);
              mercury__io__write_string_4_p_0(Stream_13, (MR_String) ")");
              STATE_VARIABLE_AddCommaNewline_166_166 = (MR_Integer) 1;
            }
            Var_167 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_60, (MR_Integer) 4))));
            Lang_50 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Var_167);
            switch (Lang_50) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MutableVars_52 = MutableVars0_44;
                  if ((MaybeIO0_43 == (MR_Word) ((MR_Unsigned) 0U)))
                    STATE_VARIABLE_AddCommaNewline_176_176 = STATE_VARIABLE_AddCommaNewline_166_166;
                  else
                  {
                    MR_String IOStateVarName_53 = ((MR_String) ((MR_hl_field(1, MaybeIO0_43, (MR_Integer) 0))));

                    hlds__hlds_out__hlds_out_goal__maybe_add_comma_newline_4_p_0(Stream_13, STATE_VARIABLE_AddCommaNewline_166_166);
                    mercury__io__write_string_4_p_0(Stream_13, Indent1Str_47);
                    mercury__io__write_string_4_p_0(Stream_13, (MR_String) "io(!");
                    mercury__io__write_string_4_p_0(Stream_13, IOStateVarName_53);
                    mercury__io__write_string_4_p_0(Stream_13, (MR_String) ")");
                    STATE_VARIABLE_AddCommaNewline_176_176 = (MR_Integer) 1;
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  MutableVars_52 = (MR_Word) ((MR_Unsigned) 0U);
                  STATE_VARIABLE_AddCommaNewline_176_176 = STATE_VARIABLE_AddCommaNewline_166_166;
                }
                break;
            }
            {
              Var_177 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_177, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_10[0]));
              MR_hl_field(0, Var_177, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__write_goal_scope_11_p_0_3));
              MR_hl_field(0, Var_177, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_177, 3) = ((MR_Box) (Stream_13));
              MR_hl_field(0, Var_177, 4) = ((MR_Box) (Indent1Str_47));
            }
            mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_177, MutableVars_52, ((MR_Box) (STATE_VARIABLE_AddCommaNewline_176_176)), &conv2_STATE_VARIABLE_AddCommaNewline_178_178, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_179_179);
            STATE_VARIABLE_AddCommaNewline_178_178 = ((MR_Word) (conv2_STATE_VARIABLE_AddCommaNewline_178_178));
            switch (STATE_VARIABLE_AddCommaNewline_178_178) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                mercury__io__nl_3_p_0(Stream_13);
                break;
            }
            switch (Lang_50) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_String QuantVarsStr_54;

                  QuantVarsStr_54 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, QuantVars_45);
                  mercury__io__write_string_4_p_0(Stream_13, Indent1Str_47);
                  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% quantified vars [");
                  mercury__io__write_string_4_p_0(Stream_13, QuantVarsStr_54);
                  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "]\n");
                }
                break;
              case (MR_Integer) 0:
                {
                }
                break;
            }
            libs__indent__write_indent2_4_p_0(Stream_13, Indent_18);
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) "] (\n");
            STATE_VARIABLE_Info_140_140 = STATE_VARIABLE_Info_0_60;
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word LCVar_55 = ((MR_Word) ((MR_hl_field(3, Reason_22, (MR_Integer) 1))));
            MR_Word LCSVar_56 = ((MR_Word) ((MR_hl_field(3, Reason_22, (MR_Integer) 2))));
            MR_Word UseParentStack_57 = ((MR_Unsigned) ((MR_hl_field(3, Reason_22, (MR_Integer) 3))) & (MR_Integer) 1);
            MR_String UseParentStackStr_58;
            MR_String LCVarsStr_59;
            MR_Word Var_191;
            MR_Word Var_192;

            switch (UseParentStack_57) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                UseParentStackStr_58 = (MR_String) "using_child_stack";
                break;
              case (MR_Integer) 0:
                UseParentStackStr_58 = (MR_String) "using_parent_stack_frame";
                break;
            }
            {
              Var_192 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_192, 0) = ((MR_Box) (LCSVar_56));
              MR_hl_field(1, Var_192, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_191 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_191, 0) = ((MR_Box) (LCVar_55));
              MR_hl_field(1, Var_191, 1) = ((MR_Box) (Var_192));
            }
            LCVarsStr_59 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, Var_191);
            mercury__io__write_string_4_p_0(Stream_13, IndentStr_24);
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% loop_control_spawn_off_");
            mercury__io__write_string_4_p_0(Stream_13, UseParentStackStr_58);
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) "(");
            mercury__io__write_string_4_p_0(Stream_13, LCVarsStr_59);
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) ") (\n");
            STATE_VARIABLE_Info_140_140 = STATE_VARIABLE_Info_0_60;
          }
          break;
      }
      break;
  }
  Var_203 = (MR_Integer) ((MR_Unsigned) Indent_18 + (MR_Unsigned) 1);
  hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(STATE_VARIABLE_Info_140_140, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Var_203, (MR_String) "\n", Goal_23);
  mercury__io__write_string_4_p_0(Stream_13, IndentStr_24);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) ")");
  mercury__io__write_string_4_p_0(Stream_13, Follow_19);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Word ModuleInfo_14,
  MR_Word VarNameSrc_15,
  MR_Word TypeQual_16,
  MR_Word VarNamePrint_17,
  MR_Integer Indent_18,
  MR_String Follow_19,
  MR_Word GoalExpr_20)
{
  MR_bool succeeded;
  MR_Word Vars_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 1))));
  MR_Word Cond_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 2))));
  MR_Word Then_24 = ((MR_Word) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 3))));
  MR_Word Else_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 4))));
  MR_String IndentStr_26;
  MR_String SomeVarsStr_27;
  MR_Integer Indent1_31;
  MR_String DumpOptions_32;
  MR_Integer ElseIndent_38;
  MR_Word Var_68;

  IndentStr_26 = libs__indent__indent2_string_1_f_0(Indent_18);
  if ((Vars_22 == (MR_Word) ((MR_Unsigned) 0U)))
    SomeVarsStr_27 = (MR_String) "";
  else
  {
    MR_String VarsStr_30;
    MR_String Var_83;

    VarsStr_30 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_15, (MR_Integer) 1, Vars_22);
    Var_83 = mercury__string__f_43_43_2_f_0(VarsStr_30, (MR_String) "]");
    SomeVarsStr_27 = mercury__string__f_43_43_2_f_0((MR_String) " some [", Var_83);
  }
  mercury__io__write_string_4_p_0(Stream_13, IndentStr_26);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "( if");
  mercury__io__write_string_4_p_0(Stream_13, SomeVarsStr_27);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
  Indent1_31 = (MR_Integer) ((MR_Unsigned) Indent_18 + (MR_Unsigned) 1);
  hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Indent1_31, (MR_String) "\n", Cond_23);
  mercury__io__write_string_4_p_0(Stream_13, IndentStr_26);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "then\n");
  hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Indent1_31, (MR_String) "\n", Then_24);
  mercury__io__write_string_4_p_0(Stream_13, IndentStr_26);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "else\n");
  DumpOptions_32 = ((MR_String) ((MR_hl_field(0, Info_12, (MR_Integer) 0))));
  succeeded = (strcmp(DumpOptions_32, (MR_String) "") == 0);
  succeeded = !(succeeded);
  if (succeeded)
  {
    Var_68 = ((MR_Word) ((MR_hl_field(0, Else_25, (MR_Integer) 0))));
    succeeded = ((((MR_tag((MR_Word) Var_68)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_68, (MR_Integer) 0)))) == (MR_Integer) 6)));
    if (succeeded)
    {
    }
  }
  if (succeeded)
    ElseIndent_38 = Indent_18;
  else
    ElseIndent_38 = Indent1_31;
  hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, ElseIndent_38, (MR_String) "\n", Else_25);
  mercury__io__write_string_4_p_0(Stream_13, IndentStr_26);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) ")");
  mercury__io__write_string_4_p_0(Stream_13, Follow_19);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_negation_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Word ModuleInfo_14,
  MR_Word VarNameSrc_15,
  MR_Word TypeQual_16,
  MR_Word VarNamePrint_17,
  MR_Integer Indent_18,
  MR_String Follow_19,
  MR_Word GoalExpr_20)
{
  MR_Word Goal_22 = (MR_Word) ((MR_Word) (GoalExpr_20));
  MR_String IndentStr_23;
  MR_Integer Var_31;

  IndentStr_23 = libs__indent__indent2_string_1_f_0(Indent_18);
  mercury__io__write_string_4_p_0(Stream_13, IndentStr_23);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "not (\n");
  Var_31 = (MR_Integer) ((MR_Unsigned) Indent_18 + (MR_Unsigned) 1);
  hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Var_31, (MR_String) "\n", Goal_22);
  mercury__io__write_string_4_p_0(Stream_13, IndentStr_23);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) ")");
  mercury__io__write_string_4_p_0(Stream_13, Follow_19);
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_switch_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__parse_tree_out_cons_id__unqual_cons_id_and_arity_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_switch_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Word ModuleInfo_14,
  MR_Word VarNameSrc_15,
  MR_Word TypeQual_16,
  MR_Word VarNamePrint_17,
  MR_Integer Indent_18,
  MR_String Follow_19,
  MR_Word GoalExpr_20)
{
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 1))));
  MR_Word CanFail_23 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word CasesList_24 = ((MR_Word) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 3))));
  MR_String IndentStr_25;
  MR_String CanFailStr_26;
  MR_String VarStr_27;
  MR_Integer Indent1_28;

  IndentStr_25 = libs__indent__indent2_string_1_f_0(Indent_18);
  CanFailStr_26 = parse_tree__parse_tree_out_misc__can_fail_to_string_1_f_0(CanFail_23);
  VarStr_27 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, Var_22);
  mercury__io__write_string_4_p_0(Stream_13, IndentStr_25);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "( % ");
  mercury__io__write_string_4_p_0(Stream_13, CanFailStr_26);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) " switch on \140");
  mercury__io__write_string_4_p_0(Stream_13, VarStr_27);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\'\n");
  Indent1_28 = (MR_Integer) ((MR_Unsigned) Indent_18 + (MR_Unsigned) 1);
  if ((CasesList_24 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mercury__io__write_string_4_p_0(Stream_13, IndentStr_25);
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) "fail\n");
  }
  else
  {
    MR_Word Case_29 = ((MR_Word) ((MR_hl_field(1, CasesList_24, (MR_Integer) 0))));
    MR_Word Cases_30 = ((MR_Word) ((MR_hl_field(1, CasesList_24, (MR_Integer) 1))));
    MR_Word MainConsId_70 = ((MR_Word) ((MR_hl_field(0, Case_29, (MR_Integer) 0))));
    MR_Word OtherConsIds_71 = ((MR_Word) ((MR_hl_field(0, Case_29, (MR_Integer) 1))));
    MR_Word Goal_72 = ((MR_Word) ((MR_hl_field(0, Case_29, (MR_Integer) 2))));
    MR_String IndentStr_73;
    MR_String VarStr_74;
    MR_Word ConsIdStrs_75;
    MR_String ConsIdsStr_76;
    MR_Word Var_78;

    IndentStr_73 = libs__indent__indent2_string_1_f_0(Indent1_28);
    VarStr_74 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, Var_22);
    {
      Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_78, 0) = ((MR_Box) (MainConsId_70));
      MR_hl_field(1, Var_78, 1) = ((MR_Box) (OtherConsIds_71));
    }
    ConsIdStrs_75 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[7]), Var_78);
    ConsIdsStr_76 = mercury__string__join_list_2_f_0((MR_String) " or ", ConsIdStrs_75);
    mercury__io__write_string_4_p_0(Stream_13, IndentStr_73);
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% ");
    mercury__io__write_string_4_p_0(Stream_13, VarStr_74);
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) " has functor ");
    mercury__io__write_string_4_p_0(Stream_13, ConsIdsStr_76);
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
    hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Indent1_28, (MR_String) "\n", Goal_72);
    hlds__hlds_out__hlds_out_goal__write_cases_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Indent_18, Var_22, Cases_30);
  }
  mercury__io__write_string_4_p_0(Stream_13, IndentStr_25);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) ")");
  mercury__io__write_string_4_p_0(Stream_13, Follow_19);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_plain_call_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Word ModuleInfo_14,
  MR_Word VarNameSrc_15,
  MR_Word TypeQual_16,
  MR_Word VarNamePrint_17,
  MR_Integer Indent_18,
  MR_String Follow_19,
  MR_Word GoalExpr_20)
{
  MR_bool succeeded;
  MR_Word PredId_22 = ((MR_Word) ((MR_hl_field(2, GoalExpr_20, (MR_Integer) 0))));
  MR_Integer ProcId_23 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_20, (MR_Integer) 1))));
  MR_Word ArgVars_24 = ((MR_Word) ((MR_hl_field(2, GoalExpr_20, (MR_Integer) 2))));
  MR_Word Builtin_25 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr_20, (MR_Integer) 3))) & (MR_Integer) 1);
  MR_Word MaybeUnifyContext_26 = ((MR_Word) ((MR_hl_field(2, GoalExpr_20, (MR_Integer) 4))));
  MR_Word PredName_27 = ((MR_Word) ((MR_hl_field(2, GoalExpr_20, (MR_Integer) 5))));
  MR_String DumpOptions_28 = ((MR_String) ((MR_hl_field(0, Info_12, (MR_Integer) 0))));
  MR_String IndentStr_29;
  MR_Word InParenArgVars_35;
  MR_String InParenArgVarsStr_37;
  MR_Word Var_103;

  IndentStr_29 = libs__indent__indent2_string_1_f_0(Indent_18);
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_28, (MR_Char) 98);
  if (succeeded)
    switch (Builtin_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__io__write_string_4_p_0(Stream_13, IndentStr_29);
          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% inline builtin\n");
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
  mercury__io__write_string_4_p_0(Stream_13, IndentStr_29);
  Var_103 = hlds__hlds_pred__invalid_pred_id_0_f_0();
  succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_22, Var_103);
  if (succeeded)
  {
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) "");
    InParenArgVars_35 = ArgVars_24;
  }
  else
  {
    MR_Word PredInfo_33;
    MR_Word PredIdTable_32;
    MR_Box conv0_PredInfo_33;

    hlds__hlds_module__module_info_get_pred_id_table_2_p_0(ModuleInfo_14, &PredIdTable_32);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable_32, ((MR_Box) (PredId_22)), &conv0_PredInfo_33);
    if (succeeded)
    {
      PredInfo_33 = ((MR_Word) (conv0_PredInfo_33));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Purity_34;
      MR_Word PredOrFunc_135;
      MR_String PrefixStr_136;

      PredOrFunc_135 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_33);
      hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_33, &Purity_34);
      PrefixStr_136 = parse_tree__parse_tree_out_misc__purity_prefix_to_string_1_f_0(Purity_34);
      mercury__io__write_string_4_p_0(Stream_13, PrefixStr_136);
      switch (PredOrFunc_135) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word LHSVar_36;
            MR_Box conv1_LHSVar_36;

            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), ArgVars_24, &InParenArgVars_35, &conv1_LHSVar_36);
            LHSVar_36 = ((MR_Word) (conv1_LHSVar_36));
            parse_tree__parse_tree_out_term__mercury_output_var_src_6_p_0(VarNameSrc_15, VarNamePrint_17, LHSVar_36, Stream_13);
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
          }
          break;
        case (MR_Integer) 0:
          InParenArgVars_35 = ArgVars_24;
          break;
      }
    }
    else
    {
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "CALL TO DELETED ");
      InParenArgVars_35 = ArgVars_24;
    }
  }
  InParenArgVarsStr_37 = hlds__hlds_out__hlds_out_goal__sym_name_and_args_to_string_4_f_0(VarNameSrc_15, VarNamePrint_17, PredName_27, InParenArgVars_35);
  mercury__io__write_string_4_p_0(Stream_13, InParenArgVarsStr_37);
  mercury__io__write_string_4_p_0(Stream_13, Follow_19);
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_28, (MR_Char) 108);
  if (succeeded)
  {
    MR_Integer PredNum_38;
    MR_Integer ProcNum_39;
    MR_String Var_112;
    MR_String Var_122;

    hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_22, &PredNum_38);
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_23, &ProcNum_39);
    mercury__io__write_string_4_p_0(Stream_13, IndentStr_29);
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% pred id: ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[0]), PredNum_38, &Var_112);
    mercury__io__write_string_4_p_0(Stream_13, Var_112);
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) ", proc id: ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[0]), ProcNum_39, &Var_122);
    mercury__io__write_string_4_p_0(Stream_13, Var_122);
    mercury__io__write_string_4_p_0(Stream_13, Follow_19);
    if (!((MaybeUnifyContext_26 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word CallUnifyContext_40 = ((MR_Word) ((MR_hl_field(1, MaybeUnifyContext_26, (MR_Integer) 0))));
      MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, CallUnifyContext_40, (MR_Integer) 0))));
      MR_Word VarType_45;
      MR_Word RHS_46 = ((MR_Word) ((MR_hl_field(0, CallUnifyContext_40, (MR_Integer) 1))));
      MR_String VarStr_48;
      MR_Word InstVarSet_49;

      if ((TypeQual_16 == (MR_Word) ((MR_Unsigned) 0U)))
        VarType_45 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word VarTable_42 = ((MR_Word) ((MR_hl_field(1, TypeQual_16, (MR_Integer) 1))));
        MR_Word UniType_44;

        parse_tree__var_table__lookup_var_type_3_p_0(VarTable_42, Var_43, &UniType_44);
        {
          VarType_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, VarType_45, 0) = ((MR_Box) (UniType_44));
        }
      }
      VarStr_48 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, Var_43);
      mercury__io__write_string_4_p_0(Stream_13, IndentStr_29);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% unify context: ");
      mercury__io__write_string_4_p_0(Stream_13, VarStr_48);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_49);
      hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_12_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, InstVarSet_49, TypeQual_16, VarNamePrint_17, Indent_18, VarType_45, RHS_46);
      mercury__io__write_string_4_p_0(Stream_13, Follow_19);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_12_p_0(
  MR_Word Info_13,
  MR_Word Stream_14,
  MR_Word ModuleInfo_15,
  MR_Word VarNameSrc_16,
  MR_Word InstVarSet_17,
  MR_Word TypeQual_18,
  MR_Word VarNamePrint_19,
  MR_Integer Indent_20,
  MR_Word MaybeType_21,
  MR_Word RHS_22)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) RHS_22)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, RHS_22, (MR_Integer) 0))));

        parse_tree__parse_tree_out_term__mercury_output_var_src_6_p_0(VarNameSrc_16, VarNamePrint_19, Var_24, Stream_14);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ConsId0_25 = ((MR_Word) ((MR_hl_field(1, RHS_22, (MR_Integer) 0))));
        MR_Word IsExistConstruct_26 = ((MR_Unsigned) ((MR_hl_field(1, RHS_22, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_Word ArgVars_27 = ((MR_Word) ((MR_hl_field(1, RHS_22, (MR_Integer) 2))));
        MR_Word ConsId_32;
        MR_String RHSStr_33;
        MR_Word SymName0_28;
        MR_Integer Arity_29;
        MR_Word TypeCtor_30;
        MR_Word Type_34;
        MR_Word TVarSet_35;

        succeeded = (IsExistConstruct_26 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = ((((MR_tag((MR_Word) ConsId0_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId0_25, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            SymName0_28 = ((MR_Word) ((MR_hl_field(3, ConsId0_25, (MR_Integer) 1))));
            Arity_29 = ((MR_Integer) ((MR_hl_field(3, ConsId0_25, (MR_Integer) 2))));
            TypeCtor_30 = ((MR_Word) ((MR_hl_field(3, ConsId0_25, (MR_Integer) 3))));
          }
        }
        if (succeeded)
        {
          MR_Word SymName_31;

          parse_tree__prog_type__add_new_prefix_2_p_0(SymName0_28, &SymName_31);
          {
            ConsId_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, ConsId_32, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, ConsId_32, 1) = ((MR_Box) (SymName_31));
            MR_hl_field(3, ConsId_32, 2) = ((MR_Box) (Arity_29));
            MR_hl_field(3, ConsId_32, 3) = ((MR_Box) (TypeCtor_30));
          }
        }
        else
          ConsId_32 = ConsId0_25;
        RHSStr_33 = hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(ModuleInfo_15, VarNameSrc_16, VarNamePrint_19, ConsId_32, ArgVars_27);
        mercury__io__write_string_4_p_0(Stream_14, RHSStr_33);
        succeeded = (MaybeType_21 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Type_34 = ((MR_Word) ((MR_hl_field(1, MaybeType_21, (MR_Integer) 0))));
          succeeded = (TypeQual_18 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            TVarSet_35 = ((MR_Word) ((MR_hl_field(1, TypeQual_18, (MR_Integer) 0))));
        }
        if (succeeded)
        {
          mercury__io__write_string_4_p_0(Stream_14, (MR_String) " : ");
          parse_tree__parse_tree_out_type__mercury_output_type_6_p_0(TVarSet_35, VarNamePrint_19, Type_34, Stream_14);
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Purity_37 = ((((MR_Unsigned) ((MR_hl_field(2, RHS_22, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
        MR_Word Groundness_38 = ((((MR_Unsigned) ((MR_hl_field(2, RHS_22, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
        MR_Word PredOrFunc_39 = ((MR_Unsigned) ((MR_hl_field(2, RHS_22, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word NonLocals_41 = ((MR_Word) ((MR_hl_field(2, RHS_22, (MR_Integer) 2))));
        MR_Word VarsModes_42 = ((MR_Word) ((MR_hl_field(2, RHS_22, (MR_Integer) 3))));
        MR_Word Det_43 = ((MR_Unsigned) ((MR_hl_field(2, RHS_22, (MR_Integer) 4))) & (MR_Integer) 7);
        MR_Word Goal_44 = ((MR_Word) ((MR_hl_field(2, RHS_22, (MR_Integer) 5))));
        MR_String IndentStr_45;
        MR_Integer Indent1_46;
        MR_Word Lang_47;
        MR_String DumpOptions_60;
        MR_String Var_72;
        MR_Word Var_74;
        MR_Word Type_142;
        MR_Word TVarSet_143;

        IndentStr_45 = libs__indent__indent2_string_1_f_0(Indent_20);
        Indent1_46 = (MR_Integer) ((MR_Unsigned) Indent_20 + (MR_Unsigned) 1);
        Var_72 = parse_tree__parse_tree_out_misc__purity_prefix_to_string_1_f_0(Purity_37);
        mercury__io__write_string_4_p_0(Stream_14, Var_72);
        Var_74 = ((MR_Word) ((MR_hl_field(0, Info_13, (MR_Integer) 4))));
        Lang_47 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Var_74);
        switch (Groundness_38) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            switch (PredOrFunc_39) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word ArgVarsModes_53;
                  MR_Word RetVarMode_54;
                  MR_String RetModeStr_58;
                  MR_String DetStr_141;
                  MR_Box conv0_RetVarMode_54;

                  parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[2]), VarsModes_42, &ArgVarsModes_53, &conv0_RetVarMode_54);
                  RetVarMode_54 = ((MR_Word) (conv0_RetVarMode_54));
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) "(");
                  if ((ArgVarsModes_53 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) "(");
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) "any_func");
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) ")");
                  }
                  else
                  {
                    MR_String ArgModesStr_57;

                    ArgModesStr_57 = hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0(Lang_47, VarNameSrc_16, InstVarSet_17, VarNamePrint_19, ArgVarsModes_53);
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) "any_func");
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) "(");
                    mercury__io__write_string_4_p_0(Stream_14, ArgModesStr_57);
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) ")");
                  }
                  RetModeStr_58 = hlds__hlds_out__hlds_out_util__var_mode_to_string_5_f_0(Lang_47, VarNameSrc_16, InstVarSet_17, VarNamePrint_19, RetVarMode_54);
                  DetStr_141 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_43);
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) " = (");
                  mercury__io__write_string_4_p_0(Stream_14, RetModeStr_58);
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) ") is ");
                  mercury__io__write_string_4_p_0(Stream_14, DetStr_141);
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) " :-\n");
                  hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_13, Stream_14, ModuleInfo_15, VarNameSrc_16, TypeQual_18, VarNamePrint_19, Indent1_46, (MR_String) "\n", Goal_44);
                  mercury__io__write_string_4_p_0(Stream_14, IndentStr_45);
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) ")");
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_String DetStr_52;

                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) "(");
                  if ((VarsModes_42 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) "(");
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) "any_pred");
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) ")");
                  }
                  else
                  {
                    MR_String ModesStr_51;

                    ModesStr_51 = hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0(Lang_47, VarNameSrc_16, InstVarSet_17, VarNamePrint_19, VarsModes_42);
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) "any_pred");
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) "(");
                    mercury__io__write_string_4_p_0(Stream_14, ModesStr_51);
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) ")");
                  }
                  DetStr_52 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_43);
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) " is ");
                  mercury__io__write_string_4_p_0(Stream_14, DetStr_52);
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) " :-\n");
                  hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_13, Stream_14, ModuleInfo_15, VarNameSrc_16, TypeQual_18, VarNamePrint_19, Indent1_46, (MR_String) "\n", Goal_44);
                  mercury__io__write_string_4_p_0(Stream_14, IndentStr_45);
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) ")");
                }
                break;
            }
            break;
          case (MR_Integer) 0:
            switch (PredOrFunc_39) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word ArgVarsModes_181;
                  MR_Word RetVarMode_182;
                  MR_String RetModeStr_186;
                  MR_String DetStr_214;
                  MR_Box conv1_RetVarMode_182;

                  parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[2]), VarsModes_42, &ArgVarsModes_181, &conv1_RetVarMode_182);
                  RetVarMode_182 = ((MR_Word) (conv1_RetVarMode_182));
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) "(");
                  if ((ArgVarsModes_181 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) "(");
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) "func");
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) ")");
                  }
                  else
                  {
                    MR_String ArgModesStr_161;

                    ArgModesStr_161 = hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0(Lang_47, VarNameSrc_16, InstVarSet_17, VarNamePrint_19, ArgVarsModes_181);
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) "func");
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) "(");
                    mercury__io__write_string_4_p_0(Stream_14, ArgModesStr_161);
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) ")");
                  }
                  RetModeStr_186 = hlds__hlds_out__hlds_out_util__var_mode_to_string_5_f_0(Lang_47, VarNameSrc_16, InstVarSet_17, VarNamePrint_19, RetVarMode_182);
                  DetStr_214 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_43);
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) " = (");
                  mercury__io__write_string_4_p_0(Stream_14, RetModeStr_186);
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) ") is ");
                  mercury__io__write_string_4_p_0(Stream_14, DetStr_214);
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) " :-\n");
                  hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_13, Stream_14, ModuleInfo_15, VarNameSrc_16, TypeQual_18, VarNamePrint_19, Indent1_46, (MR_String) "\n", Goal_44);
                  mercury__io__write_string_4_p_0(Stream_14, IndentStr_45);
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) ")");
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_String DetStr_248;

                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) "(");
                  if ((VarsModes_42 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) "(");
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) "pred");
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) ")");
                  }
                  else
                  {
                    MR_String ModesStr_224;

                    ModesStr_224 = hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0(Lang_47, VarNameSrc_16, InstVarSet_17, VarNamePrint_19, VarsModes_42);
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) "pred");
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) "(");
                    mercury__io__write_string_4_p_0(Stream_14, ModesStr_224);
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) ")");
                  }
                  DetStr_248 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_43);
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) " is ");
                  mercury__io__write_string_4_p_0(Stream_14, DetStr_248);
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) " :-\n");
                  hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_13, Stream_14, ModuleInfo_15, VarNameSrc_16, TypeQual_18, VarNamePrint_19, Indent1_46, (MR_String) "\n", Goal_44);
                  mercury__io__write_string_4_p_0(Stream_14, IndentStr_45);
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) ")");
                }
                break;
            }
            break;
        }
        succeeded = (MaybeType_21 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Type_142 = ((MR_Word) ((MR_hl_field(1, MaybeType_21, (MR_Integer) 0))));
          succeeded = (TypeQual_18 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            TVarSet_143 = ((MR_Word) ((MR_hl_field(1, TypeQual_18, (MR_Integer) 0))));
        }
        if (succeeded)
        {
          mercury__io__write_string_4_p_0(Stream_14, (MR_String) " : ");
          parse_tree__parse_tree_out_type__mercury_output_type_6_p_0(TVarSet_143, VarNamePrint_19, Type_142, Stream_14);
        }
        DumpOptions_60 = ((MR_String) ((MR_hl_field(0, Info_13, (MR_Integer) 0))));
        succeeded = mercury__string__contains_char_2_p_0(DumpOptions_60, (MR_Char) 110);
        if (succeeded)
          if (!((NonLocals_41 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            MR_String NonLocalsStr_63;

            NonLocalsStr_63 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_16, VarNamePrint_19, NonLocals_41);
            mercury__io__write_string_4_p_0(Stream_14, (MR_String) "\n");
            mercury__io__write_string_4_p_0(Stream_14, IndentStr_45);
            mercury__io__write_string_4_p_0(Stream_14, (MR_String) "% lambda nonlocals: ");
            mercury__io__write_string_4_p_0(Stream_14, NonLocalsStr_63);
          }
      }
      break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_unify_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Word ModuleInfo_14,
  MR_Word VarNameSrc_15,
  MR_Word TypeQual_16,
  MR_Word VarNamePrint_17,
  MR_Integer Indent_18,
  MR_String Follow_19,
  MR_Word GoalExpr_20)
{
  MR_bool succeeded;
  MR_Word LHS_22 = ((MR_Word) ((MR_hl_field(1, GoalExpr_20, (MR_Integer) 0))));
  MR_Word RHS_23 = ((MR_Word) ((MR_hl_field(1, GoalExpr_20, (MR_Integer) 1))));
  MR_Word Unification_25 = ((MR_Word) ((MR_hl_field(1, GoalExpr_20, (MR_Integer) 3))));
  MR_String DumpOptions_27 = ((MR_String) ((MR_hl_field(0, Info_12, (MR_Integer) 0))));
  MR_String IndentStr_28;
  MR_String LHSStr_29;
  MR_Word VarType_33;
  MR_Word InstVarSet_34;

  IndentStr_28 = libs__indent__indent2_string_1_f_0(Indent_18);
  LHSStr_29 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, LHS_22);
  mercury__io__write_string_4_p_0(Stream_13, IndentStr_28);
  mercury__io__write_string_4_p_0(Stream_13, LHSStr_29);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
  if ((TypeQual_16 == (MR_Word) ((MR_Unsigned) 0U)))
    VarType_33 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word VarTable_31 = ((MR_Word) ((MR_hl_field(1, TypeQual_16, (MR_Integer) 1))));
    MR_Word UniType_32;

    parse_tree__var_table__lookup_var_type_3_p_0(VarTable_31, LHS_22, &UniType_32);
    {
      VarType_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, VarType_33, 0) = ((MR_Box) (UniType_32));
    }
  }
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_34);
  hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_12_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, InstVarSet_34, TypeQual_16, VarNamePrint_17, Indent_18, VarType_33, RHS_23);
  mercury__io__write_string_4_p_0(Stream_13, Follow_19);
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_27, (MR_Char) 117);
  if (!(succeeded))
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_27, (MR_Char) 112);
  if (succeeded)
  {
    MR_Word ComplMode_35;
    MR_Word CanFail_36;
    MR_Word TypeInfoVars_37;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;

    succeeded = ((((MR_tag((MR_Word) Unification_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Unification_25, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      ComplMode_35 = ((MR_Word) ((MR_hl_field(3, Unification_25, (MR_Integer) 1))));
      CanFail_36 = ((MR_Unsigned) ((MR_hl_field(3, Unification_25, (MR_Integer) 2))) & (MR_Integer) 1);
      TypeInfoVars_37 = ((MR_Word) ((MR_hl_field(3, Unification_25, (MR_Integer) 3))));
      succeeded = (CanFail_36 == (MR_Integer) 0);
      if (succeeded)
      {
        Var_51 = ((MR_Word) ((MR_hl_field(0, ComplMode_35, (MR_Integer) 0))));
        Var_52 = ((MR_Word) ((MR_hl_field(0, ComplMode_35, (MR_Integer) 1))));
        Var_53 = ((MR_Word) ((MR_hl_field(0, ComplMode_35, (MR_Integer) 2))));
        Var_54 = ((MR_Word) ((MR_hl_field(0, ComplMode_35, (MR_Integer) 3))));
        succeeded = (Var_51 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (Var_52 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = (Var_53 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              succeeded = (Var_54 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
        if (succeeded)
          succeeded = (TypeInfoVars_37 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (!(succeeded))
    {
      succeeded = mercury__string__contains_char_2_p_0(Follow_19, (MR_Char) 10);
      if (!(succeeded))
        mercury__io__nl_3_p_0(Stream_13);
      hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_10_p_0(Info_12, Stream_13, VarNameSrc_15, InstVarSet_34, VarNamePrint_17, Indent_18, Unification_25);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__527__1_4_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv2_HeadVar__4_4;

  conv2_HeadVar__4_4 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__4_4));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mercury__io__write_string_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_Str_11;

  conv0_Str_11 = hlds__hlds_out__hlds_out_goal__new_var_inst_to_string_4_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Str_11));
  return wrapper_arg_2;
}

void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Word ModuleInfo_14,
  MR_Word VarNameSrc_15,
  MR_Word TypeQual_16,
  MR_Word VarNamePrint_17,
  MR_Integer Indent_18,
  MR_String Follow_19,
  MR_Word Goal_20)
{
  MR_bool succeeded;
  MR_String IndentStr_22;
  MR_Word GoalExpr_23;
  MR_Word GoalInfo_24;
  MR_String DumpOptions_25;
  MR_Word CodeGenInfo_107;

  IndentStr_22 = libs__indent__indent2_string_1_f_0(Indent_18);
  GoalExpr_23 = ((MR_Word) ((MR_hl_field(0, Goal_20, (MR_Integer) 0))));
  GoalInfo_24 = ((MR_Word) ((MR_hl_field(0, Goal_20, (MR_Integer) 1))));
  DumpOptions_25 = ((MR_String) ((MR_hl_field(0, Info_12, (MR_Integer) 0))));
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_25, (MR_Char) 99);
  if (succeeded)
  {
    MR_Word Context_26;

    Context_26 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_24);
    hlds__hlds_out__hlds_out_util__maybe_output_context_comment_6_p_0(Stream_13, Indent_18, (MR_String) "", Context_26);
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_25, (MR_Char) 80);
  if (succeeded)
  {
    MR_Word GoalId_27;
    MR_Integer GoalIdNum_28;

    GoalId_27 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_24);
    GoalIdNum_28 = (MR_Integer) (GoalId_27);
    succeeded = (GoalIdNum_28 < (MR_Integer) 0);
    if (!(succeeded))
    {
      MR_String Var_407;

      mercury__io__write_string_4_p_0(Stream_13, IndentStr_22);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% goal id: ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[0]), GoalIdNum_28, &Var_407);
      mercury__io__write_string_4_p_0(Stream_13, Var_407);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
    }
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_25, (MR_Char) 110);
  if (succeeded)
  {
    MR_Word NonLocalsSet_29;
    MR_Word NonLocalsList_30;

    NonLocalsSet_29 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_24);
    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsSet_29, &NonLocalsList_30);
    if (!((NonLocalsList_30 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String NonLocalsStr_33;

      NonLocalsStr_33 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, NonLocalsList_30);
      mercury__io__write_string_4_p_0(Stream_13, IndentStr_22);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% nonlocals: ");
      mercury__io__write_string_4_p_0(Stream_13, NonLocalsStr_33);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
    }
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_25, (MR_Char) 112);
  if (succeeded)
  {
    MR_Word PreDeathList_35;
    MR_Word TypeCtorInfo_367_367;
    MR_Word PreDeaths_34;
    MR_Word PreBirthList_40;
    MR_Word TypeCtorInfo_368_368;
    MR_Word PreBirths_39;

    succeeded = hlds__hlds_llds__goal_info_maybe_get_pre_deaths_2_p_0(GoalInfo_24, &PreDeaths_34);
    if (succeeded)
    {
      TypeCtorInfo_367_367 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
      PreDeathList_35 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_367_367, PreDeaths_34);
      succeeded = (PreDeathList_35 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_String PreDeathStr_38;

      PreDeathStr_38 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, PreDeathList_35);
      mercury__io__write_string_4_p_0(Stream_13, IndentStr_22);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% pre-deaths: ");
      mercury__io__write_string_4_p_0(Stream_13, PreDeathStr_38);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
    }
    succeeded = hlds__hlds_llds__goal_info_maybe_get_pre_births_2_p_0(GoalInfo_24, &PreBirths_39);
    if (succeeded)
    {
      TypeCtorInfo_368_368 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
      PreBirthList_40 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_368_368, PreBirths_39);
      succeeded = (PreBirthList_40 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_String PreBirthStr_43;

      PreBirthStr_43 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, PreBirthList_40);
      mercury__io__write_string_4_p_0(Stream_13, IndentStr_22);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% pre-births: ");
      mercury__io__write_string_4_p_0(Stream_13, PreBirthStr_43);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
    }
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_25, (MR_Char) 66);
  if (succeeded)
  {
    MR_Word ProducingVars_44;
    MR_Word ConsumingVars_47;
    MR_Word MakeVisibleVars_50;
    MR_Word NeedVisibleVars_53;

    ProducingVars_44 = hlds__hlds_goal__producing_vars_1_f_0(GoalInfo_24);
    succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProducingVars_44);
    if (succeeded)
    {
      MR_Word ProducingVarsList_45;
      MR_String ProducingVarsStr_46;

      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProducingVars_44, &ProducingVarsList_45);
      ProducingVarsStr_46 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, ProducingVarsList_45);
      mercury__io__write_string_4_p_0(Stream_13, IndentStr_22);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% producing vars: ");
      mercury__io__write_string_4_p_0(Stream_13, ProducingVarsStr_46);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
    }
    ConsumingVars_47 = hlds__hlds_goal__consuming_vars_1_f_0(GoalInfo_24);
    succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsumingVars_47);
    if (succeeded)
    {
      MR_Word ConsumingVarsList_48;
      MR_String ConsumingVarsStr_49;

      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsumingVars_47, &ConsumingVarsList_48);
      ConsumingVarsStr_49 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, ConsumingVarsList_48);
      mercury__io__write_string_4_p_0(Stream_13, IndentStr_22);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% consuming vars: ");
      mercury__io__write_string_4_p_0(Stream_13, ConsumingVarsStr_49);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
    }
    MakeVisibleVars_50 = hlds__hlds_goal__make_visible_vars_1_f_0(GoalInfo_24);
    succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MakeVisibleVars_50);
    if (succeeded)
    {
      MR_Word MakeVisibleVarsList_51;
      MR_String MakeVisibleVarsStr_52;

      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MakeVisibleVars_50, &MakeVisibleVarsList_51);
      MakeVisibleVarsStr_52 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, MakeVisibleVarsList_51);
      mercury__io__write_string_4_p_0(Stream_13, IndentStr_22);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% make_visible vars: ");
      mercury__io__write_string_4_p_0(Stream_13, MakeVisibleVarsStr_52);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
    }
    NeedVisibleVars_53 = hlds__hlds_goal__need_visible_vars_1_f_0(GoalInfo_24);
    succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NeedVisibleVars_53);
    if (succeeded)
    {
      MR_Word NeedVisibleVarsList_54;
      MR_String NeedVisibleVarsStr_55;

      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NeedVisibleVars_53, &NeedVisibleVarsList_54);
      NeedVisibleVarsStr_55 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, NeedVisibleVarsList_54);
      mercury__io__write_string_4_p_0(Stream_13, IndentStr_22);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% need_visible vars: ");
      mercury__io__write_string_4_p_0(Stream_13, NeedVisibleVarsStr_55);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
    }
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_25, (MR_Char) 100);
  if (succeeded)
  {
    MR_Word Determinism_56;
    MR_String Var_186;

    Determinism_56 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_24);
    Var_186 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(Determinism_56);
    mercury__io__write_string_4_p_0(Stream_13, IndentStr_22);
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% determinism: ");
    mercury__io__write_string_4_p_0(Stream_13, Var_186);
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_25, (MR_Char) 101);
  if (succeeded)
  {
    MR_Word MaybeRbmmInfo_57;

    MaybeRbmmInfo_57 = hlds__hlds_goal__goal_info_get_maybe_rbmm_1_f_0(GoalInfo_24);
    if (!((MaybeRbmmInfo_57 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word RbmmInfo_58 = ((MR_Word) ((MR_hl_field(1, MaybeRbmmInfo_57, (MR_Integer) 0))));
      MR_Word Created_59 = ((MR_Word) ((MR_hl_field(0, RbmmInfo_58, (MR_Integer) 0))));
      MR_Word Removed_60 = ((MR_Word) ((MR_hl_field(0, RbmmInfo_58, (MR_Integer) 1))));
      MR_Word Carried_61 = ((MR_Word) ((MR_hl_field(0, RbmmInfo_58, (MR_Integer) 2))));
      MR_Word Alloc_62 = ((MR_Word) ((MR_hl_field(0, RbmmInfo_58, (MR_Integer) 3))));
      MR_Word Used_63 = ((MR_Word) ((MR_hl_field(0, RbmmInfo_58, (MR_Integer) 4))));
      MR_Word CreatedList_64;
      MR_Word RemovedList_65;
      MR_Word CarriedList_66;
      MR_Word AllocList_67;
      MR_Word UsedList_68;
      MR_String CreatedStr_69;
      MR_String RemovedStr_70;
      MR_String CarriedStr_71;
      MR_String AllocStr_72;
      MR_String UsedStr_73;

      CreatedList_64 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), Created_59);
      RemovedList_65 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), Removed_60);
      CarriedList_66 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), Carried_61);
      AllocList_67 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), Alloc_62);
      UsedList_68 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), Used_63);
      CreatedStr_69 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, CreatedList_64);
      RemovedStr_70 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, RemovedList_65);
      CarriedStr_71 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, CarriedList_66);
      AllocStr_72 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, AllocList_67);
      UsedStr_73 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, UsedList_68);
      mercury__io__write_string_4_p_0(Stream_13, IndentStr_22);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% Created regions: ");
      mercury__io__write_string_4_p_0(Stream_13, CreatedStr_69);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
      mercury__io__write_string_4_p_0(Stream_13, IndentStr_22);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% Removed regions: ");
      mercury__io__write_string_4_p_0(Stream_13, RemovedStr_70);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
      mercury__io__write_string_4_p_0(Stream_13, IndentStr_22);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% Carried regions: ");
      mercury__io__write_string_4_p_0(Stream_13, CarriedStr_71);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
      mercury__io__write_string_4_p_0(Stream_13, IndentStr_22);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% Allocated into regions: ");
      mercury__io__write_string_4_p_0(Stream_13, AllocStr_72);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
      mercury__io__write_string_4_p_0(Stream_13, IndentStr_22);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% Used regions: ");
      mercury__io__write_string_4_p_0(Stream_13, UsedStr_73);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
    }
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_25, (MR_Char) 122);
  if (succeeded)
  {
    MR_Word Purity_74;

    Purity_74 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo_24);
    switch (Purity_74) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          mercury__io__write_string_4_p_0(Stream_13, IndentStr_22);
          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% impure\n");
        }
        break;
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_4_p_0(Stream_13, IndentStr_22);
          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% semipure\n");
        }
        break;
    }
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_25, (MR_Char) 69);
  if (succeeded)
  {
    MR_Word MaybeDPInfo_75;

    MaybeDPInfo_75 = hlds__hlds_goal__goal_info_get_maybe_dp_info_1_f_0(GoalInfo_24);
    if (!((MaybeDPInfo_75 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word MdprofInst_76;
      MR_Word MaybeDPCoverageInfo_77;
      MR_Word Var_236 = ((MR_Word) ((MR_hl_field(1, MaybeDPInfo_75, (MR_Integer) 0))));

      MdprofInst_76 = ((MR_Unsigned) ((MR_hl_field(0, Var_236, (MR_Integer) 0))) & (MR_Integer) 1);
      MaybeDPCoverageInfo_77 = ((MR_Word) ((MR_hl_field(0, Var_236, (MR_Integer) 1))));
      switch (MdprofInst_76) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__io__write_string_4_p_0(Stream_13, IndentStr_22);
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% mdprof instrumentation\n");
          }
          break;
        case (MR_Integer) 1:
          {
          }
          break;
      }
      if (!((MaybeDPCoverageInfo_77 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word CoverageInfo_78 = ((MR_Word) ((MR_hl_field(1, MaybeDPCoverageInfo_77, (MR_Integer) 0))));
        MR_Word IsTrivial_79 = ((((MR_Unsigned) ((MR_hl_field(0, CoverageInfo_78, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
        MR_Word PortCountsGiveCoverageAfter_80 = ((MR_Unsigned) ((MR_hl_field(0, CoverageInfo_78, (MR_Integer) 0))) & (MR_Integer) 1);

        switch (IsTrivial_79) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              mercury__io__write_string_4_p_0(Stream_13, IndentStr_22);
              mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% nontrivial goal\n");
            }
            break;
          case (MR_Integer) 0:
            {
              mercury__io__write_string_4_p_0(Stream_13, IndentStr_22);
              mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% trivial goal\n");
            }
            break;
        }
        switch (PortCountsGiveCoverageAfter_80) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              mercury__io__write_string_4_p_0(Stream_13, IndentStr_22);
              mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% no port counts give coverage after\n");
            }
            break;
          case (MR_Integer) 0:
            {
              mercury__io__write_string_4_p_0(Stream_13, IndentStr_22);
              mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% port counts give coverage after\n");
            }
            break;
        }
      }
    }
  }
  hlds__hlds_out__hlds_out_goal__write_goal_expr_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Indent_18, Follow_19, GoalExpr_23);
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_25, (MR_Char) 105);
  if (succeeded)
  {
    MR_Word InstMapDelta_81;
    MR_Word TypeCtorInfo_378_378;
    MR_Word Vars_82;

    InstMapDelta_81 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_24);
    succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstMapDelta_81);
    if (succeeded)
    {
      hlds__instmap__instmap_delta_changed_vars_2_p_0(InstMapDelta_81, &Vars_82);
      TypeCtorInfo_378_378 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
      succeeded = parse_tree__set_of_var__is_empty_1_p_0(TypeCtorInfo_378_378, Vars_82);
    }
    if (!(succeeded))
    {
      succeeded = mercury__string__contains_char_2_p_0(DumpOptions_25, (MR_Char) 68);
      if (succeeded)
      {
        succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(InstMapDelta_81);
        if (succeeded)
        {
          mercury__io__write_string_4_p_0(Stream_13, IndentStr_22);
          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% new insts: unreachable\n");
        }
        else
        {
          MR_Word NewVarInsts_83;
          MR_Word NewVarInstStrs_84;
          MR_Word Var_270;
          MR_Word Var_276;
          MR_Box conv1_STATE_VARIABLE_IO_267_267;

          hlds__instmap__instmap_delta_to_assoc_list_2_p_0(InstMapDelta_81, &NewVarInsts_83);
          {
            Var_270 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_270, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_9[0]));
            MR_hl_field(0, Var_270, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0_1));
            MR_hl_field(0, Var_270, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, Var_270, 3) = ((MR_Box) (VarNameSrc_15));
            MR_hl_field(0, Var_270, 4) = ((MR_Box) (VarNamePrint_17));
            MR_hl_field(0, Var_270, 5) = ((MR_Box) (IndentStr_22));
          }
          NewVarInstStrs_84 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_270, NewVarInsts_83);
          mercury__io__write_string_4_p_0(Stream_13, IndentStr_22);
          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% new insts:\n");
          {
            Var_276 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_276, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_8[1]));
            MR_hl_field(0, Var_276, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0_2));
            MR_hl_field(0, Var_276, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_276, 3) = ((MR_Box) (Stream_13));
          }
          mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_276, NewVarInstStrs_84, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_267_267);
        }
      }
      else
      {
        MR_String NewVarsStr_85;

        succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(InstMapDelta_81);
        if (succeeded)
          NewVarsStr_85 = (MR_String) "unreachable";
        else
        {
          MR_Word NewVars_86;
          MR_Word NewVarStrs_87;
          MR_Word Var_278;
          MR_Word NewVarInsts_358;

          hlds__instmap__instmap_delta_to_assoc_list_2_p_0(InstMapDelta_81, &NewVarInsts_358);
          mercury__assoc_list__keys_2_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), NewVarInsts_358, &NewVars_86);
          {
            Var_278 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_278, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_8[2]));
            MR_hl_field(0, Var_278, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0_3));
            MR_hl_field(0, Var_278, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_278, 3) = ((MR_Box) (VarNameSrc_15));
            MR_hl_field(0, Var_278, 4) = ((MR_Box) (VarNamePrint_17));
          }
          NewVarStrs_87 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_278, NewVars_86);
          NewVarsStr_85 = mercury__string__join_list_2_f_0((MR_String) ", ", NewVarStrs_87);
        }
        mercury__io__write_string_4_p_0(Stream_13, IndentStr_22);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% vars with new insts: ");
        mercury__io__write_string_4_p_0(Stream_13, NewVarsStr_85);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
      }
    }
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_25, (MR_Char) 112);
  if (succeeded)
  {
    MR_Word PostDeathList_89;
    MR_Word TypeCtorInfo_392_392;
    MR_Word PostDeaths_88;
    MR_Word PostBirthList_94;
    MR_Word TypeCtorInfo_393_393;
    MR_Word PostBirths_93;

    succeeded = hlds__hlds_llds__goal_info_maybe_get_post_deaths_2_p_0(GoalInfo_24, &PostDeaths_88);
    if (succeeded)
    {
      TypeCtorInfo_392_392 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
      PostDeathList_89 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_392_392, PostDeaths_88);
      succeeded = (PostDeathList_89 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_String PostDeathStr_92;

      PostDeathStr_92 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, PostDeathList_89);
      mercury__io__write_string_4_p_0(Stream_13, IndentStr_22);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% post-deaths: ");
      mercury__io__write_string_4_p_0(Stream_13, PostDeathStr_92);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
    }
    succeeded = hlds__hlds_llds__goal_info_maybe_get_post_births_2_p_0(GoalInfo_24, &PostBirths_93);
    if (succeeded)
    {
      TypeCtorInfo_393_393 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
      PostBirthList_94 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_393_393, PostBirths_93);
      succeeded = (PostBirthList_94 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_String PostBirthStr_97;

      PostBirthStr_97 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, PostBirthList_94);
      mercury__io__write_string_4_p_0(Stream_13, IndentStr_22);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% post-births: ");
      mercury__io__write_string_4_p_0(Stream_13, PostBirthStr_97);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
    }
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_25, (MR_Char) 82);
  if (succeeded)
  {
    MR_Word LFU_98;
    MR_Word LBU_99;
    MR_Word ReuseDescription_100;
    MR_Word Var_303;
    MR_Word Var_304;
    MR_Word Var_305;

    Var_303 = hlds__hlds_goal__goal_info_get_maybe_lfu_1_f_0(GoalInfo_24);
    succeeded = (Var_303 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      LFU_98 = ((MR_Word) ((MR_hl_field(1, Var_303, (MR_Integer) 0))));
      Var_304 = hlds__hlds_goal__goal_info_get_maybe_lbu_1_f_0(GoalInfo_24);
      succeeded = (Var_304 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        LBU_99 = ((MR_Word) ((MR_hl_field(1, Var_304, (MR_Integer) 0))));
        Var_305 = hlds__hlds_goal__goal_info_get_maybe_reuse_1_f_0(GoalInfo_24);
        succeeded = (Var_305 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          ReuseDescription_100 = ((MR_Word) ((MR_hl_field(1, Var_305, (MR_Integer) 0))));
      }
    }
    if (succeeded)
    {
      MR_Word ListLFU_101;
      MR_Word ListLBU_102;
      MR_String StrLFU_103;
      MR_String StrLBU_104;

      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LFU_98, &ListLFU_101);
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LBU_99, &ListLBU_102);
      StrLFU_103 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, ListLFU_101);
      StrLBU_104 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, ListLBU_102);
      mercury__io__write_string_4_p_0(Stream_13, IndentStr_22);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% LFU: ");
      mercury__io__write_string_4_p_0(Stream_13, StrLFU_103);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
      mercury__io__write_string_4_p_0(Stream_13, IndentStr_22);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% LBU: ");
      mercury__io__write_string_4_p_0(Stream_13, StrLBU_104);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
      mercury__io__write_string_4_p_0(Stream_13, IndentStr_22);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% Reuse: ");
      switch (MR_tag((MR_Word) ReuseDescription_100)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ReuseDescription_100)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              mercury__io__write_string_4_p_0(Stream_13, (MR_String) "no reuse info");
              break;
            case (MR_Integer) 1:
              mercury__io__write_string_4_p_0(Stream_13, (MR_String) "no possible reuse");
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Messages_105 = ((MR_Word) ((MR_hl_field(1, ReuseDescription_100, (MR_Integer) 0))));

            mercury__io__write_string_4_p_0(Stream_13, (MR_String) "missed (");
            parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[6]), (MR_String) ", ", Messages_105, Stream_13);
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) ")");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ShortReuseDescr_106 = ((MR_Word) ((MR_hl_field(2, ReuseDescription_100, (MR_Integer) 0))));

            mercury__io__write_string_4_p_0(Stream_13, (MR_String) "potential reuse (");
            hlds__hlds_out__hlds_out_goal__write_short_reuse_description_6_p_0(Stream_13, ShortReuseDescr_106, VarNameSrc_15, VarNamePrint_17);
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) ")");
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ShortReuseDescr_361 = ((MR_Word) ((MR_hl_field(3, ReuseDescription_100, (MR_Integer) 0))));

            mercury__io__write_string_4_p_0(Stream_13, (MR_String) "reuse (");
            hlds__hlds_out__hlds_out_goal__write_short_reuse_description_6_p_0(Stream_13, ShortReuseDescr_361, VarNameSrc_15, VarNamePrint_17);
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) ")");
          }
          break;
      }
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
    }
  }
  CodeGenInfo_107 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(GoalInfo_24);
  if (!((CodeGenInfo_107 == (MR_Word) ((MR_Unsigned) 0U))))
    hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_8_p_0(Info_12, Stream_13, GoalInfo_24, VarNameSrc_15, VarNamePrint_17, Indent_18);
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_25, (MR_Char) 103);
  if (succeeded)
  {
    MR_Word Features_109;
    MR_Word FeatureList_110;

    Features_109 = hlds__hlds_goal__goal_info_get_features_1_f_0(GoalInfo_24);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0), Features_109, &FeatureList_110);
    if (!((FeatureList_110 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String Var_356;

      Var_356 = mercury__string__string_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[1]), ((MR_Box) (FeatureList_110)));
      mercury__io__write_string_4_p_0(Stream_13, IndentStr_22);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% Goal features: ");
      mercury__io__write_string_4_p_0(Stream_13, Var_356);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_53_93_95_48_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__parse_tree_out_clause__mercury_output_trace_runtime_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_53_93_95_48_11_p_0(
  MR_Word Stream_13,
  MR_Word ModuleInfo_14,
  MR_Word VarNameSrc_15,
  MR_Word VarNamePrint_17,
  MR_Integer Indent_18,
  MR_String Follow_19,
  MR_Word GoalExpr_20)
{
  MR_Word Attributes_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 1))));
  MR_Word PredId_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 2))));
  MR_Integer ProcId_24 = ((MR_Integer) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 3))));
  MR_Word Args_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 4))));
  MR_Word ExtraArgs_26 = ((MR_Word) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 5))));
  MR_Word MaybeTraceRuntimeCond_27 = ((MR_Word) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 6))));
  MR_Word PragmaCode_28 = ((MR_Word) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 7))));
  MR_Word ForeignLang_29;
  MR_String ForeignLangStr_30;
  MR_String PredStr_31;
  MR_Integer PredIdInt_32;
  MR_Integer ProcIdInt_33;
  MR_String IndentStr_34;
  MR_Word TypeVarSet_36;
  MR_Word InstVarSet_37;
  MR_String ArgsStr_38;
  MR_String Code_42;
  MR_String Var_98;
  MR_String Var_108;

  ForeignLang_29 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attributes_22);
  ForeignLangStr_30 = libs__globals__foreign_language_string_1_f_0(ForeignLang_29);
  PredStr_31 = hlds__hlds_out__hlds_out_util__pred_id_to_dev_string_2_f_0(ModuleInfo_14, PredId_23);
  hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_23, &PredIdInt_32);
  hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_24, &ProcIdInt_33);
  IndentStr_34 = libs__indent__indent2_string_1_f_0(Indent_18);
  mercury__io__write_string_4_p_0(Stream_13, IndentStr_34);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\044pragma_foreign_proc(/* ");
  mercury__io__write_string_4_p_0(Stream_13, ForeignLangStr_30);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) " */, ");
  mercury__io__write_string_4_p_0(Stream_13, PredStr_31);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) " pred ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[0]), PredIdInt_32, &Var_98);
  mercury__io__write_string_4_p_0(Stream_13, Var_98);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) " proc ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[0]), ProcIdInt_33, &Var_108);
  mercury__io__write_string_4_p_0(Stream_13, Var_108);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) ",\n");
  if (!((MaybeTraceRuntimeCond_27 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word TraceRuntimeCond_35 = ((MR_Word) ((MR_hl_field(1, MaybeTraceRuntimeCond_27, (MR_Integer) 0))));

    mercury__io__write_string_4_p_0(Stream_13, IndentStr_34);
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% trace_runtime_cond(");
    parse_tree__parse_tree_out_clause__mercury_output_trace_expr_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0), Stream_13, (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[5]), TraceRuntimeCond_35);
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) ")\n");
  }
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_36);
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_37);
  if ((Args_25 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String Var_135;
    MR_String Var_136;

    Var_135 = mercury__string__f_43_43_2_f_0((MR_String) "],", (MR_String) "\n");
    Var_136 = mercury__string__f_43_43_2_f_0((MR_String) "[", Var_135);
    ArgsStr_38 = mercury__string__f_43_43_2_f_0(IndentStr_34, Var_136);
  }
  else
  {
    MR_Word HeadArg_123 = ((MR_Word) ((MR_hl_field(1, Args_25, (MR_Integer) 0))));
    MR_Word TailArgs_124 = ((MR_Word) ((MR_hl_field(1, Args_25, (MR_Integer) 1))));
    MR_Word LineStrs_125;

    LineStrs_125 = hlds__hlds_out__hlds_out_goal__foreign_args_to_string_lag_9_f_0(VarNameSrc_15, VarNamePrint_17, TypeVarSet_36, InstVarSet_37, IndentStr_34, (MR_String) "[", (MR_String) "],", HeadArg_123, TailArgs_124);
    mercury__string__append_list_2_p_0(LineStrs_125, &ArgsStr_38);
  }
  mercury__io__write_string_4_p_0(Stream_13, ArgsStr_38);
  if (!((ExtraArgs_26 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_String ExtraArgsStr_41;
    MR_Word HeadArg_137 = ((MR_Word) ((MR_hl_field(1, ExtraArgs_26, (MR_Integer) 0))));
    MR_Word TailArgs_138 = ((MR_Word) ((MR_hl_field(1, ExtraArgs_26, (MR_Integer) 1))));
    MR_Word LineStrs_139;

    LineStrs_139 = hlds__hlds_out__hlds_out_goal__foreign_args_to_string_lag_9_f_0(VarNameSrc_15, VarNamePrint_17, TypeVarSet_36, InstVarSet_37, IndentStr_34, (MR_String) "{", (MR_String) "},", HeadArg_137, TailArgs_138);
    mercury__string__append_list_2_p_0(LineStrs_139, &ExtraArgsStr_41);
    mercury__io__write_string_4_p_0(Stream_13, ExtraArgsStr_41);
  }
  Code_42 = ((MR_String) ((MR_hl_field(0, PragmaCode_28, (MR_Integer) 0))));
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\"");
  mercury__io__write_string_4_p_0(Stream_13, Code_42);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\")");
  mercury__io__write_string_4_p_0(Stream_13, Follow_19);
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_goal__foreign_args_to_string_lag_9_f_0(
  MR_Word VarNameSrc_11,
  MR_Word VarNamePrint_12,
  MR_Word TypeVarSet_13,
  MR_Word InstVarSet_14,
  MR_String IndentStr_15,
  MR_String MaybeLParen0_16,
  MR_String RParen_17,
  MR_Word Arg_18,
  MR_Word Args_19)
{
  MR_Word LineStrs_20;
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Arg_18, (MR_Integer) 0))));
  MR_Word MaybeNameMode_22 = ((MR_Word) ((MR_hl_field(0, Arg_18, (MR_Integer) 1))));
  MR_Word Type_23 = ((MR_Word) ((MR_hl_field(0, Arg_18, (MR_Integer) 2))));
  MR_Word BoxPolicy_24 = ((MR_Unsigned) ((MR_hl_field(0, Arg_18, (MR_Integer) 3))) & (MR_Integer) 1);
  MR_String VarStr_25;
  MR_String NameModeStr_29;
  MR_String BoxPolicyStr_30;
  MR_String TypeStr_31;

  VarStr_25 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_11, VarNamePrint_12, Var_21);
  if ((MaybeNameMode_22 == (MR_Word) ((MR_Unsigned) 0U)))
    NameModeStr_29 = (MR_String) "";
  else
  {
    MR_String Name_26;
    MR_Word Mode_27;
    MR_String ModeStr_28;
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(1, MaybeNameMode_22, (MR_Integer) 0))));
    MR_String Var_78;
    MR_String Var_80;
    MR_String Var_81;

    Name_26 = ((MR_String) ((MR_hl_field(0, Var_37, (MR_Integer) 0))));
    Mode_27 = ((MR_Word) ((MR_hl_field(0, Var_37, (MR_Integer) 1))));
    ModeStr_28 = parse_tree__parse_tree_out_inst__mercury_mode_to_string_3_f_0((MR_Integer) 1, InstVarSet_14, Mode_27);
    Var_78 = mercury__string__f_43_43_2_f_0(ModeStr_28, (MR_String) ")");
    Var_80 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_78);
    Var_81 = mercury__string__f_43_43_2_f_0(Name_26, Var_80);
    NameModeStr_29 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_81);
  }
  switch (BoxPolicy_24) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      BoxPolicyStr_30 = (MR_String) "\044alwaysboxed";
      break;
    case (MR_Integer) 0:
      BoxPolicyStr_30 = (MR_String) "";
      break;
  }
  TypeStr_31 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TypeVarSet_13, VarNamePrint_12, Type_23);
  if ((Args_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String ArgLineStr_32;
    MR_String Var_92;
    MR_String Var_93;
    MR_String Var_95;
    MR_String Var_96;
    MR_String Var_97;
    MR_String Var_98;
    MR_String Var_99;

    Var_92 = mercury__string__f_43_43_2_f_0(RParen_17, (MR_String) "\n");
    Var_93 = mercury__string__f_43_43_2_f_0(TypeStr_31, Var_92);
    Var_95 = mercury__string__f_43_43_2_f_0((MR_String) "\100", Var_93);
    Var_96 = mercury__string__f_43_43_2_f_0(BoxPolicyStr_30, Var_95);
    Var_97 = mercury__string__f_43_43_2_f_0(NameModeStr_29, Var_96);
    Var_98 = mercury__string__f_43_43_2_f_0(VarStr_25, Var_97);
    Var_99 = mercury__string__f_43_43_2_f_0(MaybeLParen0_16, Var_98);
    ArgLineStr_32 = mercury__string__f_43_43_2_f_0(IndentStr_15, Var_99);
    {
      LineStrs_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, LineStrs_20, 0) = ((MR_Box) (ArgLineStr_32));
      MR_hl_field(1, LineStrs_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
  {
    MR_Word HeadArg_33 = ((MR_Word) ((MR_hl_field(1, Args_19, (MR_Integer) 0))));
    MR_Word TailArgs_34 = ((MR_Word) ((MR_hl_field(1, Args_19, (MR_Integer) 1))));
    MR_Word ArgsLineStrs_36;
    MR_String ArgLineStr_76;
    MR_String Var_84;
    MR_String Var_86;
    MR_String Var_87;
    MR_String Var_88;
    MR_String Var_89;
    MR_String Var_90;

    Var_84 = mercury__string__f_43_43_2_f_0(TypeStr_31, (MR_String) ",\n");
    Var_86 = mercury__string__f_43_43_2_f_0((MR_String) "\100", Var_84);
    Var_87 = mercury__string__f_43_43_2_f_0(BoxPolicyStr_30, Var_86);
    Var_88 = mercury__string__f_43_43_2_f_0(NameModeStr_29, Var_87);
    Var_89 = mercury__string__f_43_43_2_f_0(VarStr_25, Var_88);
    Var_90 = mercury__string__f_43_43_2_f_0(MaybeLParen0_16, Var_89);
    ArgLineStr_76 = mercury__string__f_43_43_2_f_0(IndentStr_15, Var_90);
    ArgsLineStrs_36 = hlds__hlds_out__hlds_out_goal__foreign_args_to_string_lag_9_f_0(VarNameSrc_11, VarNamePrint_12, TypeVarSet_13, InstVarSet_14, IndentStr_15, (MR_String) "", RParen_17, HeadArg_33, TailArgs_34);
    {
      LineStrs_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, LineStrs_20, 0) = ((MR_Box) (ArgLineStr_76));
      MR_hl_field(1, LineStrs_20, 1) = ((MR_Box) (ArgsLineStrs_36));
    }
  }
  return LineStrs_20;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_51_44_32_53_93_95_48_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Word VarNameSrc_15,
  MR_Word VarNamePrint_17,
  MR_Integer Indent_18,
  MR_String Follow_19,
  MR_Word GoalExpr_20)
{
  MR_bool succeeded;
  MR_Word GenericCall_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 1))));
  MR_Word ArgVars_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 2))));
  MR_Word Modes_24 = ((MR_Word) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 3))));
  MR_Word MaybeArgRegs_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 4))));
  MR_String DumpOptions_27 = ((MR_String) ((MR_hl_field(0, Info_12, (MR_Integer) 0))));
  MR_String IndentStr_28;

  IndentStr_28 = libs__indent__indent2_string_1_f_0(Indent_18);
  switch (MR_tag((MR_Word) GenericCall_22)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word PredVar_29 = ((MR_Word) ((MR_hl_field(0, GenericCall_22, (MR_Integer) 0))));
        MR_Word Purity_30 = ((((MR_Unsigned) ((MR_hl_field(0, GenericCall_22, (MR_Integer) 1))) >> 1)) & (MR_Integer) 3);
        MR_Word PredOrFunc_31 = ((MR_Unsigned) ((MR_hl_field(0, GenericCall_22, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_String PurityPrefix_33;

        PurityPrefix_33 = parse_tree__parse_tree_out_misc__purity_prefix_to_string_1_f_0(Purity_30);
        switch (PredOrFunc_31) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word FuncArgVars_35;
              MR_Word FuncRetVar_36;
              MR_String FuncRetVarStr_37;
              MR_String ApplyStr_38;
              MR_Word Var_82;
              MR_Box conv1_FuncRetVar_36;

              succeeded = mercury__string__contains_char_2_p_0(DumpOptions_27, (MR_Char) 108);
              if (succeeded)
              {
                mercury__io__write_string_4_p_0(Stream_13, IndentStr_28);
                mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% higher-order function application\n");
                hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_5_p_0(Stream_13, Indent_18, MaybeArgRegs_25);
              }
              {
                Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_82, 0) = ((MR_Box) (PredVar_29));
                MR_hl_field(1, Var_82, 1) = ((MR_Box) (ArgVars_23));
              }
              parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), Var_82, &FuncArgVars_35, &conv1_FuncRetVar_36);
              FuncRetVar_36 = ((MR_Word) (conv1_FuncRetVar_36));
              FuncRetVarStr_37 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, FuncRetVar_36);
              ApplyStr_38 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(VarNameSrc_15, VarNamePrint_17, (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[3]), FuncArgVars_35);
              mercury__io__write_string_4_p_0(Stream_13, IndentStr_28);
              mercury__io__write_string_4_p_0(Stream_13, PurityPrefix_33);
              mercury__io__write_string_4_p_0(Stream_13, FuncRetVarStr_37);
              mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
              mercury__io__write_string_4_p_0(Stream_13, ApplyStr_38);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_String CallStr_34;
              MR_Word Var_65;

              succeeded = mercury__string__contains_char_2_p_0(DumpOptions_27, (MR_Char) 108);
              if (succeeded)
              {
                mercury__io__write_string_4_p_0(Stream_13, IndentStr_28);
                mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% higher-order predicate call\n");
                hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_5_p_0(Stream_13, Indent_18, MaybeArgRegs_25);
              }
              {
                Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_65, 0) = ((MR_Box) (PredVar_29));
                MR_hl_field(1, Var_65, 1) = ((MR_Box) (ArgVars_23));
              }
              CallStr_34 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(VarNameSrc_15, VarNamePrint_17, (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[4]), Var_65);
              mercury__io__write_string_4_p_0(Stream_13, IndentStr_28);
              mercury__io__write_string_4_p_0(Stream_13, PurityPrefix_33);
              mercury__io__write_string_4_p_0(Stream_13, CallStr_34);
            }
            break;
        }
        mercury__io__write_string_4_p_0(Stream_13, Follow_19);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TCInfoVar_39 = ((MR_Word) ((MR_hl_field(1, GenericCall_22, (MR_Integer) 0))));
        MR_Integer MethodNum_40;
        MR_Word Context_43;
        MR_Word TCInfoTerm_45;
        MR_Word MethodNumTerm_46;
        MR_Word ArgTerms_47;
        MR_Word Term_48;
        MR_Word Var_97 = ((MR_Word) ((MR_hl_field(1, GenericCall_22, (MR_Integer) 1))));
        MR_Word Var_106;
        MR_Word Var_107;

        MethodNum_40 = (MR_Integer) (Var_97);
        succeeded = mercury__string__contains_char_2_p_0(DumpOptions_27, (MR_Char) 108);
        if (succeeded)
        {
          mercury__io__write_string_4_p_0(Stream_13, IndentStr_28);
          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% class method call\n");
          hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_5_p_0(Stream_13, Indent_18, MaybeArgRegs_25);
        }
        Context_43 = mercury__term_context__dummy_context_0_f_0();
        {
          TCInfoTerm_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, TCInfoTerm_45, 0) = ((MR_Box) (TCInfoVar_39));
          MR_hl_field(1, TCInfoTerm_45, 1) = ((MR_Box) (Context_43));
        }
        MethodNumTerm_46 = mercury__term_int__int_to_decimal_term_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MethodNum_40, Context_43);
        mercury__term_subst__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_23, &ArgTerms_47);
        {
          Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_107, 0) = ((MR_Box) (MethodNumTerm_46));
          MR_hl_field(1, Var_107, 1) = ((MR_Box) (ArgTerms_47));
        }
        {
          Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_106, 0) = ((MR_Box) (TCInfoTerm_45));
          MR_hl_field(1, Var_106, 1) = ((MR_Box) (Var_107));
        }
        {
          Term_48 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Term_48, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[2]));
          MR_hl_field(0, Term_48, 1) = ((MR_Box) (Var_106));
          MR_hl_field(0, Term_48, 2) = ((MR_Box) (Context_43));
        }
        mercury__io__write_string_4_p_0(Stream_13, IndentStr_28);
        parse_tree__parse_tree_out_term__mercury_output_term_src_6_p_0(VarNameSrc_15, VarNamePrint_17, Term_48, Stream_13);
        mercury__io__write_string_4_p_0(Stream_13, Follow_19);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String EventName_49 = ((MR_String) ((MR_hl_field(2, GenericCall_22, (MR_Integer) 0))));
        MR_Word Var_118;
        MR_Word Functor_163;
        MR_Word ArgTerms_164;
        MR_Word Term_165;

        succeeded = mercury__string__contains_char_2_p_0(DumpOptions_27, (MR_Char) 108);
        if (succeeded)
        {
          mercury__io__write_string_4_p_0(Stream_13, IndentStr_28);
          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% event call\n");
          hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_5_p_0(Stream_13, Indent_18, MaybeArgRegs_25);
        }
        {
          Functor_163 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Functor_163, 0) = ((MR_Box) (EventName_49));
        }
        mercury__term_subst__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_23, &ArgTerms_164);
        Var_118 = mercury__term_context__dummy_context_0_f_0();
        {
          Term_165 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Term_165, 0) = ((MR_Box) (Functor_163));
          MR_hl_field(0, Term_165, 1) = ((MR_Box) (ArgTerms_164));
          MR_hl_field(0, Term_165, 2) = ((MR_Box) (Var_118));
        }
        mercury__io__write_string_4_p_0(Stream_13, IndentStr_28);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) "event ");
        parse_tree__parse_tree_out_term__mercury_output_term_src_6_p_0(VarNameSrc_15, VarNamePrint_17, Term_165, Stream_13);
        mercury__io__write_string_4_p_0(Stream_13, Follow_19);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word CastType_50 = ((MR_Unsigned) ((MR_hl_field(3, GenericCall_22, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_String CastTypeString_51;
        MR_Word PredOrFunc_175;

        switch (CastType_50) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              CastTypeString_51 = hlds__hlds_out__hlds_out_util__cast_type_to_string_1_f_0(CastType_50);
              PredOrFunc_175 = hlds__hlds_out__hlds_out_goal__write_cast_as_pred_or_func_1_f_0(CastType_50);
            }
            break;
          case (MR_Integer) 4:
            {
              CastTypeString_51 = (MR_String) "coerce";
              PredOrFunc_175 = (MR_Integer) 1;
            }
            break;
        }
        succeeded = mercury__string__contains_char_2_p_0(DumpOptions_27, (MR_Char) 108);
        if (succeeded)
        {
          mercury__io__write_string_4_p_0(Stream_13, IndentStr_28);
          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% ");
          mercury__io__write_string_4_p_0(Stream_13, CastTypeString_51);
          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
          hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_5_p_0(Stream_13, Indent_18, MaybeArgRegs_25);
        }
        succeeded = mercury__string__contains_char_2_p_0(DumpOptions_27, (MR_Char) 68);
        if (succeeded)
        {
          MR_Word InstVarSet_52;
          MR_String ModesStr_53;

          mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_52);
          ModesStr_53 = parse_tree__parse_tree_out_inst__mercury_mode_list_to_string_3_f_0((MR_Integer) 1, InstVarSet_52, Modes_24);
          mercury__io__write_string_4_p_0(Stream_13, IndentStr_28);
          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% modes: ");
          mercury__io__write_string_4_p_0(Stream_13, ModesStr_53);
          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
        }
        switch (PredOrFunc_175) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word Var_152;
              MR_String CallStr_167;
              MR_Word FuncArgVars_168;
              MR_Word FuncRetVar_169;
              MR_String FuncRetVarStr_170;
              MR_Box conv0_FuncRetVar_169;

              parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), ArgVars_23, &FuncArgVars_168, &conv0_FuncRetVar_169);
              FuncRetVar_169 = ((MR_Word) (conv0_FuncRetVar_169));
              FuncRetVarStr_170 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, FuncRetVar_169);
              {
                Var_152 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_152, 0) = ((MR_Box) (CastTypeString_51));
              }
              CallStr_167 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(VarNameSrc_15, VarNamePrint_17, Var_152, FuncArgVars_168);
              mercury__io__write_string_4_p_0(Stream_13, IndentStr_28);
              mercury__io__write_string_4_p_0(Stream_13, FuncRetVarStr_170);
              mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
              mercury__io__write_string_4_p_0(Stream_13, CallStr_167);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word Var_144;
              MR_String CallStr_166;

              {
                Var_144 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_144, 0) = ((MR_Box) (CastTypeString_51));
              }
              CallStr_166 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(VarNameSrc_15, VarNamePrint_17, Var_144, ArgVars_23);
              mercury__io__write_string_4_p_0(Stream_13, IndentStr_28);
              mercury__io__write_string_4_p_0(Stream_13, CallStr_166);
            }
            break;
        }
        mercury__io__write_string_4_p_0(Stream_13, Follow_19);
      }
      break;
  }
}

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_goal__write_cast_as_pred_or_func_1_f_0(
  MR_Word CastType_3)
{
  MR_Word PredOrFunc_4 = ((&hlds__hlds_out__hlds_out_goal_vector_common_7[0 + CastType_3]))->hlds__hlds_out__hlds_out_goal__vector_common_type_7_0__vct_7_f_0;

  return PredOrFunc_4;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_Str_4;

  conv0_Str_4 = hlds__hlds_out__hlds_out_goal__ho_arg_reg_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Str_4));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_Word MaybeArgRegs_8)
{
  if (!((MaybeArgRegs_8 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word ArgRegs_10 = ((MR_Word) ((MR_hl_field(1, MaybeArgRegs_8, (MR_Integer) 0))));
    MR_String IndentStr_11;
    MR_Word ArgRegStrs_12;
    MR_String ArgRegsStr_13;

    IndentStr_11 = libs__indent__indent2_string_1_f_0(Indent_7);
    ArgRegStrs_12 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[4]), ArgRegs_10);
    ArgRegsStr_13 = mercury__string__join_list_2_f_0((MR_String) ", ", ArgRegStrs_12);
    mercury__io__write_string_4_p_0(Stream_6, IndentStr_11);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% arg regs: ");
    mercury__io__write_string_4_p_0(Stream_6, ArgRegsStr_13);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
  }
}

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_goal__atomic_interface_vars_to_string_4_f_0(
  MR_Word VarNameSrc_6,
  MR_Word VarNamePrint_7,
  MR_String CompName_8,
  MR_Word CompState_9)
{
  MR_String Str_10;
  MR_Word Var1_11 = ((MR_Word) ((MR_hl_field(0, CompState_9, (MR_Integer) 0))));
  MR_Word Var2_12 = ((MR_Word) ((MR_hl_field(0, CompState_9, (MR_Integer) 1))));
  MR_String Var1Str_13;
  MR_String Var2Str_14;
  MR_String Var_24;
  MR_String Var_26;
  MR_String Var_27;
  MR_String Var_29;

  Var1Str_13 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_6, VarNamePrint_7, Var1_11);
  Var2Str_14 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_6, VarNamePrint_7, Var2_12);
  Var_24 = mercury__string__f_43_43_2_f_0(Var2Str_14, (MR_String) ")");
  Var_26 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_24);
  Var_27 = mercury__string__f_43_43_2_f_0(Var1Str_13, Var_26);
  Var_29 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_27);
  Str_10 = mercury__string__f_43_43_2_f_0(CompName_8, Var_29);
  return Str_10;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__maybe_add_comma_newline_4_p_0(
  MR_Word Stream_5,
  MR_Word AddCommaNewline_6)
{
  switch (AddCommaNewline_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_5, (MR_String) ",\n");
      break;
  }
}

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_goal__sym_name_and_args_to_string_4_f_0(
  MR_Word VarNameSrc_6,
  MR_Word VarNamePrint_7,
  MR_Word PredName_8,
  MR_Word ArgVars_9)
{
  MR_String Str_10;

  if (((MR_tag((MR_Word) PredName_8)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_11 = ((MR_Word) ((MR_hl_field(1, PredName_8, (MR_Integer) 0))));
    MR_String Name_12 = ((MR_String) ((MR_hl_field(1, PredName_8, (MR_Integer) 1))));
    MR_Word Var_13;

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_13, 0) = ((MR_Box) (Name_12));
    }
    Str_10 = hlds__hlds_out__hlds_out_util__qualified_functor_to_string_5_f_0(VarNameSrc_6, VarNamePrint_7, ModuleName_11, Var_13, ArgVars_9);
  }
  else
  {
    MR_Word Var_15;
    MR_String Name_16 = ((MR_String) ((MR_hl_field(0, PredName_8, (MR_Integer) 0))));

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_15, 0) = ((MR_Box) (Name_16));
    }
    Str_10 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(VarNameSrc_6, VarNamePrint_7, (MR_Integer) 0, Var_15, ArgVars_9);
  }
  return Str_10;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_10_p_0(
  MR_Word Info_11,
  MR_Word Stream_12,
  MR_Word VarNameSrc_14,
  MR_Word InstVarSet_15,
  MR_Word VarNamePrint_16,
  MR_Integer Indent_17,
  MR_Word Unification_18)
{
  MR_bool succeeded;
  MR_String IndentStr_20;

  IndentStr_20 = libs__indent__indent2_string_1_f_0(Indent_17);
  switch (MR_tag((MR_Word) Unification_18)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Unification_18, (MR_Integer) 0))));
        MR_Word ConsId_26 = ((MR_Word) ((MR_hl_field(0, Unification_18, (MR_Integer) 1))));
        MR_Word ArgVars_27 = ((MR_Word) ((MR_hl_field(0, Unification_18, (MR_Integer) 2))));
        MR_Word ArgModes_28 = ((MR_Word) ((MR_hl_field(0, Unification_18, (MR_Integer) 3))));
        MR_Word ConstructHow_29 = ((MR_Word) ((MR_hl_field(0, Unification_18, (MR_Integer) 4))));
        MR_Word Uniqueness_30 = ((MR_Unsigned) ((MR_hl_field(0, Unification_18, (MR_Integer) 5))) & (MR_Integer) 1);
        MR_Word SubInfo_31 = ((MR_Word) ((MR_hl_field(0, Unification_18, (MR_Integer) 6))));
        MR_String VarStr_32;
        MR_String DumpOptions_33;

        VarStr_32 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_14, VarNamePrint_16, Var_25);
        mercury__io__write_string_4_p_0(Stream_12, IndentStr_20);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% ");
        mercury__io__write_string_4_p_0(Stream_12, VarStr_32);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) " <= ");
        hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_51_93_95_48_12_p_0(Info_11, Stream_12, VarNameSrc_14, InstVarSet_15, VarNamePrint_16, Indent_17, ConsId_26, ArgVars_27, ArgModes_28);
        DumpOptions_33 = ((MR_String) ((MR_hl_field(0, Info_11, (MR_Integer) 0))));
        succeeded = mercury__string__contains_char_2_p_0(DumpOptions_33, (MR_Char) 117);
        if (succeeded)
        {
          MR_Word TypeCtor_36;

          succeeded = ((((MR_tag((MR_Word) ConsId_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_26, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            TypeCtor_36 = ((MR_Word) ((MR_hl_field(3, ConsId_26, (MR_Integer) 3))));
            {
              MR_Word TypeCtorSymName_37 = ((MR_Word) ((MR_hl_field(0, TypeCtor_36, (MR_Integer) 0))));
              MR_Integer TypeCtorArity_38 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_36, (MR_Integer) 1))));
              MR_String TypeCtorSymNameStr_39;
              MR_String Var_244;

              TypeCtorSymNameStr_39 = mdbcomp__sym_name__sym_name_to_string_1_f_0(TypeCtorSymName_37);
              mercury__io__write_string_4_p_0(Stream_12, IndentStr_20);
              mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% cons_id type_ctor: ");
              mercury__io__write_string_4_p_0(Stream_12, TypeCtorSymNameStr_39);
              mercury__io__write_string_4_p_0(Stream_12, (MR_String) "/");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[0]), TypeCtorArity_38, &Var_244);
              mercury__io__write_string_4_p_0(Stream_12, Var_244);
              mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
            }
          }
          switch (Uniqueness_30) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
              }
              break;
            case (MR_Integer) 0:
              {
                mercury__io__write_string_4_p_0(Stream_12, IndentStr_20);
                mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% cell_is_unique\n");
              }
              break;
          }
          if (!((SubInfo_31 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            MR_Word MaybeTakeAddr_40 = ((MR_Word) ((MR_hl_field(1, SubInfo_31, (MR_Integer) 0))));
            MR_Word MaybeSize_41 = ((MR_Word) ((MR_hl_field(1, SubInfo_31, (MR_Integer) 1))));

            if (!((MaybeTakeAddr_40 == (MR_Word) ((MR_Unsigned) 0U))))
            {
              MR_Word TakeAddressFields_42 = ((MR_Word) ((MR_hl_field(1, MaybeTakeAddr_40, (MR_Integer) 0))));
              MR_String Var_111;

              Var_111 = mercury__string__string_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[2]), ((MR_Box) (TakeAddressFields_42)));
              mercury__io__write_string_4_p_0(Stream_12, IndentStr_20);
              mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% take address fields: ");
              mercury__io__write_string_4_p_0(Stream_12, Var_111);
              mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
            }
            if (!((MaybeSize_41 == (MR_Word) ((MR_Unsigned) 0U))))
            {
              MR_Word SizeSource_43 = ((MR_Word) ((MR_hl_field(1, MaybeSize_41, (MR_Integer) 0))));

              mercury__io__write_string_4_p_0(Stream_12, IndentStr_20);
              mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% term size ");
              if (((MR_tag((MR_Word) SizeSource_43)) == (MR_Integer) 1))
              {
                MR_Word SizeVar_45 = ((MR_Word) ((MR_hl_field(1, SizeSource_43, (MR_Integer) 0))));
                MR_String SizeVarStr_46;

                SizeVarStr_46 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_14, VarNamePrint_16, SizeVar_45);
                mercury__io__write_string_4_p_0(Stream_12, (MR_String) "var ");
                mercury__io__write_string_4_p_0(Stream_12, SizeVarStr_46);
                mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
              }
              else
              {
                MR_Integer KnownSize_44 = ((MR_Integer) ((MR_hl_field(0, SizeSource_43, (MR_Integer) 0))));
                MR_String Var_264;

                mercury__io__write_string_4_p_0(Stream_12, (MR_String) "const ");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[0]), KnownSize_44, &Var_264);
                mercury__io__write_string_4_p_0(Stream_12, Var_264);
                mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
              }
            }
          }
          switch (MR_tag((MR_Word) ConstructHow_29)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word CellToReuse_47 = (MR_Word) (MR_body((MR_Word) (ConstructHow_29), (MR_Integer) 1));
                MR_Word ReuseVar_48 = ((MR_Word) ((MR_hl_field(0, CellToReuse_47, (MR_Integer) 0))));
                MR_String ReuseVarStr_51;

                ReuseVarStr_51 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_14, VarNamePrint_16, ReuseVar_48);
                mercury__io__write_string_4_p_0(Stream_12, IndentStr_20);
                mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% reuse cell: ");
                mercury__io__write_string_4_p_0(Stream_12, ReuseVarStr_51);
                mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_210 = ((MR_Unsigned) ((MR_hl_field(2, ConstructHow_29, (MR_Integer) 0))) & (MR_Integer) 1);

                switch (Var_210) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      mercury__io__write_string_4_p_0(Stream_12, IndentStr_20);
                      mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% construct statically (born static)\n");
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__io__write_string_4_p_0(Stream_12, IndentStr_20);
                      mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% construct statically (marked static)\n");
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word RegVar_52 = ((MR_Word) ((MR_hl_field(3, ConstructHow_29, (MR_Integer) 0))));
                MR_String RegVarStr_53;

                RegVarStr_53 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_14, VarNamePrint_16, RegVar_52);
                mercury__io__write_string_4_p_0(Stream_12, IndentStr_20);
                mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% construct in region: ");
                mercury__io__write_string_4_p_0(Stream_12, RegVarStr_53);
                mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
              }
              break;
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word CanFail_54 = ((((MR_Unsigned) ((MR_hl_field(1, Unification_18, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
        MR_Word CanCGC_55 = ((MR_Unsigned) ((MR_hl_field(1, Unification_18, (MR_Integer) 4))) & (MR_Integer) 1);
        MR_String OpStr_56;
        MR_Word Var_193 = ((MR_Word) ((MR_hl_field(1, Unification_18, (MR_Integer) 0))));
        MR_Word ConsId_194 = ((MR_Word) ((MR_hl_field(1, Unification_18, (MR_Integer) 1))));
        MR_Word ArgVars_195 = ((MR_Word) ((MR_hl_field(1, Unification_18, (MR_Integer) 2))));
        MR_Word ArgModes_196 = ((MR_Word) ((MR_hl_field(1, Unification_18, (MR_Integer) 3))));
        MR_String VarStr_197;
        MR_String DumpOptions_198 = ((MR_String) ((MR_hl_field(0, Info_11, (MR_Integer) 0))));

        succeeded = mercury__string__contains_char_2_p_0(DumpOptions_198, (MR_Char) 71);
        if (succeeded)
        {
          MR_String Var_161;

          Var_161 = mercury__string__string_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_can_cgc_0), ((MR_Box) (CanCGC_55)));
          mercury__io__write_string_4_p_0(Stream_12, IndentStr_20);
          mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% Compile time garbage collect: ");
          mercury__io__write_string_4_p_0(Stream_12, Var_161);
          mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
        }
        VarStr_197 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_14, VarNamePrint_16, Var_193);
        switch (CanFail_54) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            OpStr_56 = (MR_String) "\?=";
            break;
          case (MR_Integer) 1:
            OpStr_56 = (MR_String) "=>";
            break;
        }
        mercury__io__write_string_4_p_0(Stream_12, IndentStr_20);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% ");
        mercury__io__write_string_4_p_0(Stream_12, VarStr_197);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) " ");
        mercury__io__write_string_4_p_0(Stream_12, OpStr_56);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) " ");
        hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_51_93_95_48_12_p_0(Info_11, Stream_12, VarNameSrc_14, InstVarSet_15, VarNamePrint_16, Indent_17, ConsId_194, ArgVars_195, ArgModes_196);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word X_21 = ((MR_Word) ((MR_hl_field(2, Unification_18, (MR_Integer) 0))));
        MR_Word Y_22 = ((MR_Word) ((MR_hl_field(2, Unification_18, (MR_Integer) 1))));
        MR_String XStr_23;
        MR_String YStr_24;

        XStr_23 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_14, VarNamePrint_16, X_21);
        YStr_24 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_14, VarNamePrint_16, Y_22);
        mercury__io__write_string_4_p_0(Stream_12, IndentStr_20);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% ");
        mercury__io__write_string_4_p_0(Stream_12, XStr_23);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) " := ");
        mercury__io__write_string_4_p_0(Stream_12, YStr_24);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Unification_18, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word X_189 = ((MR_Word) ((MR_hl_field(3, Unification_18, (MR_Integer) 1))));
            MR_Word Y_190 = ((MR_Word) ((MR_hl_field(3, Unification_18, (MR_Integer) 2))));
            MR_String XStr_191;
            MR_String YStr_192;

            XStr_191 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_14, VarNamePrint_16, X_189);
            YStr_192 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_14, VarNamePrint_16, Y_190);
            mercury__io__write_string_4_p_0(Stream_12, IndentStr_20);
            mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% ");
            mercury__io__write_string_4_p_0(Stream_12, XStr_191);
            mercury__io__write_string_4_p_0(Stream_12, (MR_String) " == ");
            mercury__io__write_string_4_p_0(Stream_12, YStr_192);
            mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Mode_57 = ((MR_Word) ((MR_hl_field(3, Unification_18, (MR_Integer) 1))));
            MR_Word TypeInfoVars_58 = ((MR_Word) ((MR_hl_field(3, Unification_18, (MR_Integer) 3))));
            MR_String CanFailStr_59;
            MR_String ModeStr_60;
            MR_String TypeInfoVarsStr_61;
            MR_Word CanFail_199 = ((MR_Unsigned) ((MR_hl_field(3, Unification_18, (MR_Integer) 2))) & (MR_Integer) 1);

            switch (CanFail_199) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                CanFailStr_59 = (MR_String) "can_fail";
                break;
              case (MR_Integer) 1:
                CanFailStr_59 = (MR_String) "cannot_fail";
                break;
            }
            ModeStr_60 = hlds__hlds_out__hlds_out_mode__mercury_unify_mode_to_string_2_f_0(InstVarSet_15, Mode_57);
            mercury__io__write_string_4_p_0(Stream_12, IndentStr_20);
            mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% ");
            mercury__io__write_string_4_p_0(Stream_12, CanFailStr_59);
            mercury__io__write_string_4_p_0(Stream_12, (MR_String) ", mode: ");
            mercury__io__write_string_4_p_0(Stream_12, ModeStr_60);
            mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
            TypeInfoVarsStr_61 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_14, VarNamePrint_16, TypeInfoVars_58);
            mercury__io__write_string_4_p_0(Stream_12, IndentStr_20);
            mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% type-info vars: ");
            mercury__io__write_string_4_p_0(Stream_12, TypeInfoVarsStr_61);
            mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_51_93_95_48_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_UnifyMode_4;

  hlds__hlds_out__hlds_out_goal__limit_size_of_unify_mode_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_UnifyMode_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_UnifyMode_4));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_51_93_95_48_12_p_0(
  MR_Word Info_13,
  MR_Word Stream_14,
  MR_Word VarNameSrc_16,
  MR_Word InstVarSet_17,
  MR_Word VarNamePrint_18,
  MR_Integer Indent_19,
  MR_Word ConsId_20,
  MR_Word ArgVars_21,
  MR_Word ArgUnifyModes0_22)
{
  MR_bool succeeded;
  MR_String ConsIdStr_24;

  ConsIdStr_24 = parse_tree__parse_tree_out_cons_id__cons_id_and_arity_to_string_1_f_0(ConsId_20);
  if ((ArgVars_21 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mercury__io__write_string_4_p_0(Stream_14, ConsIdStr_24);
    mercury__io__write_string_4_p_0(Stream_14, (MR_String) "\n");
  }
  else
  {
    MR_String ArgVarsStr_27;
    MR_String DumpOptions_28;

    ArgVarsStr_27 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_16, VarNamePrint_18, ArgVars_21);
    mercury__io__write_string_4_p_0(Stream_14, ConsIdStr_24);
    mercury__io__write_string_4_p_0(Stream_14, (MR_String) "(");
    mercury__io__write_string_4_p_0(Stream_14, ArgVarsStr_27);
    mercury__io__write_string_4_p_0(Stream_14, (MR_String) ")\n");
    DumpOptions_28 = ((MR_String) ((MR_hl_field(0, Info_13, (MR_Integer) 0))));
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_28, (MR_Char) 97);
    if (succeeded)
    {
      MR_String IndentStr_29;
      MR_Word ArgUnifyModes_30;

      IndentStr_29 = libs__indent__indent2_string_1_f_0(Indent_19);
      mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[3]), ArgUnifyModes0_22, &ArgUnifyModes_30);
      succeeded = mercury__string__contains_char_2_p_0(DumpOptions_28, (MR_Char) 121);
      if (succeeded)
      {
        mercury__io__write_string_4_p_0(Stream_14, IndentStr_29);
        mercury__io__write_string_4_p_0(Stream_14, (MR_String) "% arg-modes\n");
        hlds__hlds_out__hlds_out_mode__mercury_output_structured_unify_mode_list_8_p_0(Stream_14, (MR_Integer) 1, InstVarSet_17, (MR_Integer) 1, Indent_19, ArgUnifyModes_30);
      }
      else
        hlds__hlds_out__hlds_out_goal__write_arg_modes_7_p_0(Stream_14, InstVarSet_17, IndentStr_29, (MR_Integer) 1, ArgUnifyModes_30);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_arg_modes_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_String HeadVar__3_3,
  MR_Integer HeadVar__4_4,
  MR_Word HeadVar__5_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word UnifyMode_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word UnifyModes_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_String UnifyModeStr_22;
      MR_Integer Var_34;
      MR_String Var_41;
      MR_Integer next_value_of_HeadVar__4_4;
      MR_Word next_value_of_HeadVar__5_5;

      UnifyModeStr_22 = hlds__hlds_out__hlds_out_mode__mercury_unify_mode_to_string_2_f_0(HeadVar__2_2, UnifyMode_19);
      mercury__io__write_string_4_p_0(HeadVar__1_1, HeadVar__3_3);
      mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "% arg-mode ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[0]), HeadVar__4_4, &Var_41);
      mercury__io__write_string_4_p_0(HeadVar__1_1, Var_41);
      mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) " ");
      mercury__io__write_string_4_p_0(HeadVar__1_1, UnifyModeStr_22);
      mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "\n");
      Var_34 = (MR_Integer) ((MR_Unsigned) HeadVar__4_4 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Var_34;
      next_value_of_HeadVar__5_5 = UnifyModes_20;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_short_reuse_description_6_p_0(
  MR_Word Stream_7,
  MR_Word ShortDescription_8,
  MR_Word VarNameSrc_9,
  MR_Word VarNamePrint_10)
{
  switch (MR_tag((MR_Word) ShortDescription_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "cell died");
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_12 = ((MR_Word) ((MR_hl_field(1, ShortDescription_8, (MR_Integer) 0))));
        MR_Word IsConditional_13 = ((MR_Unsigned) ((MR_hl_field(1, ShortDescription_8, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_String VarStr_16;
        MR_String Var_28;

        VarStr_16 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_9, VarNamePrint_10, Var_12);
        switch (IsConditional_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Var_28 = (MR_String) "with condition";
            break;
          case (MR_Integer) 1:
            Var_28 = (MR_String) "always safe";
            break;
        }
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "cell reuse - ");
        mercury__io__write_string_4_p_0(Stream_7, VarStr_16);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) " - ");
        mercury__io__write_string_4_p_0(Stream_7, Var_28);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word NoClobbers_17 = ((MR_Word) ((MR_hl_field(2, ShortDescription_8, (MR_Integer) 1))));
        MR_String Var_34;
        MR_String Var_37;
        MR_Word IsConditional_39 = ((MR_Unsigned) ((MR_hl_field(2, ShortDescription_8, (MR_Integer) 0))) & (MR_Integer) 1);

        switch (IsConditional_39) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Var_34 = (MR_String) "with condition";
            break;
          case (MR_Integer) 1:
            Var_34 = (MR_String) "always safe";
            break;
        }
        Var_37 = mercury__string__string_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[2]), ((MR_Box) (NoClobbers_17)));
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "reuse call - ");
        mercury__io__write_string_4_p_0(Stream_7, Var_34);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", no clobbers = ");
        mercury__io__write_string_4_p_0(Stream_7, Var_37);
      }
      break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word GoalInfo_11,
  MR_Word VarNameSrc_12,
  MR_Word VarNamePrint_13,
  MR_Integer Indent_14)
{
  MR_bool succeeded;
  MR_String DumpOptions_16 = ((MR_String) ((MR_hl_field(0, Info_9, (MR_Integer) 0))));
  MR_String IndentStr_17;
  MR_Word StoreMapList_31;
  MR_Word TypeInfo_170_170;
  MR_Word TypeCtorInfo_171_171;
  MR_Word StoreMap_30;
  MR_Word NeedAcrossCall_35;
  MR_Word MaybeNeedAcrossCall_34;
  MR_Word NeedInResume_49;
  MR_Word MaybeNeedInResume_48;
  MR_Word NeedInParConj_60;
  MR_Word MaybeNeedInParConj_59;

  IndentStr_17 = libs__indent__indent2_string_1_f_0(Indent_14);
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_16, (MR_Char) 102);
  if (succeeded)
  {
    MR_Word MaybeFollowVars_18;

    hlds__hlds_llds__goal_info_get_follow_vars_2_p_0(GoalInfo_11, &MaybeFollowVars_18);
    if (!((MaybeFollowVars_18 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word FollowVars_19 = ((MR_Word) ((MR_hl_field(1, MaybeFollowVars_18, (MR_Integer) 0))));
      MR_Word FollowVarsMap_20 = ((MR_Word) ((MR_hl_field(0, FollowVars_19, (MR_Integer) 0))));
      MR_Integer NextRegR_21 = ((MR_Integer) ((MR_hl_field(0, FollowVars_19, (MR_Integer) 1))));
      MR_Integer NextRegF_22 = ((MR_Integer) ((MR_hl_field(0, FollowVars_19, (MR_Integer) 2))));
      MR_Word FVlist_23;
      MR_String Var_179;
      MR_String Var_189;

      mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0), FollowVarsMap_20, &FVlist_23);
      mercury__io__write_string_4_p_0(Stream_10, IndentStr_17);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% follow vars: r");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[0]), NextRegR_21, &Var_179);
      mercury__io__write_string_4_p_0(Stream_10, Var_179);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) ", f");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[0]), NextRegF_22, &Var_189);
      mercury__io__write_string_4_p_0(Stream_10, Var_189);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
      hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_7_p_0(Stream_10, VarNameSrc_12, VarNamePrint_13, Indent_14, FVlist_23);
    }
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_16, (MR_Char) 114);
  if (succeeded)
  {
    MR_Word Resume_24;

    hlds__hlds_llds__goal_info_get_resume_point_2_p_0(GoalInfo_11, &Resume_24);
    if (!((Resume_24 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word ResumeVars_25 = ((MR_Word) ((MR_hl_field(1, Resume_24, (MR_Integer) 0))));
      MR_Word Locs_26 = ((MR_Unsigned) ((MR_hl_field(1, Resume_24, (MR_Integer) 1))) & (MR_Integer) 3);
      MR_Word ResumeVarList_27;
      MR_String ResumeVarsStr_28;
      MR_String LocsStr_29;

      ResumeVarList_27 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResumeVars_25);
      ResumeVarsStr_28 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_12, VarNamePrint_13, ResumeVarList_27);
      LocsStr_29 = ((&hlds__hlds_out__hlds_out_goal_vector_common_6[0 + Locs_26]))->hlds__hlds_out__hlds_out_goal__vector_common_type_6_0__vct_6_f_0;
      mercury__io__write_string_4_p_0(Stream_10, IndentStr_17);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% resume point ");
      mercury__io__write_string_4_p_0(Stream_10, LocsStr_29);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) " ");
      mercury__io__write_string_4_p_0(Stream_10, ResumeVarsStr_28);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
    }
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_16, (MR_Char) 115);
  if (succeeded)
  {
    hlds__hlds_llds__goal_info_get_store_map_2_p_0(GoalInfo_11, &StoreMap_30);
    TypeInfo_170_170 = (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]);
    TypeCtorInfo_171_171 = (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0);
    mercury__map__to_assoc_list_2_p_0(TypeInfo_170_170, TypeCtorInfo_171_171, StoreMap_30, &StoreMapList_31);
    succeeded = (StoreMapList_31 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
  }
  if (succeeded)
  {
    mercury__io__write_string_4_p_0(Stream_10, IndentStr_17);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% store map:\n");
    hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_7_p_0(Stream_10, VarNameSrc_12, VarNamePrint_13, Indent_14, StoreMapList_31);
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_16, (MR_Char) 115);
  if (succeeded)
  {
    hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(GoalInfo_11, &MaybeNeedAcrossCall_34);
    succeeded = (MaybeNeedAcrossCall_34 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      NeedAcrossCall_35 = ((MR_Word) ((MR_hl_field(1, MaybeNeedAcrossCall_34, (MR_Integer) 0))));
  }
  if (succeeded)
  {
    MR_Word CallForwardSet_36 = ((MR_Word) ((MR_hl_field(0, NeedAcrossCall_35, (MR_Integer) 0))));
    MR_Word CallResumeSet_37 = ((MR_Word) ((MR_hl_field(0, NeedAcrossCall_35, (MR_Integer) 1))));
    MR_Word CallNondetSet_38 = ((MR_Word) ((MR_hl_field(0, NeedAcrossCall_35, (MR_Integer) 2))));
    MR_Word CallForwardList_39;
    MR_Word CallResumeList_40;
    MR_Word CallNondetList_41;

    CallForwardList_39 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CallForwardSet_36);
    CallResumeList_40 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CallResumeSet_37);
    CallNondetList_41 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CallNondetSet_38);
    mercury__io__write_string_4_p_0(Stream_10, IndentStr_17);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% need across call forward vars: ");
    if ((CallForwardList_39 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "none\n");
    else
    {
      hlds__hlds_out__hlds_out_goal__write_vars_6_p_0(Stream_10, VarNameSrc_12, VarNamePrint_13, CallForwardList_39);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
    }
    mercury__io__write_string_4_p_0(Stream_10, IndentStr_17);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% need across call resume vars: ");
    if ((CallResumeList_40 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "none\n");
    else
    {
      hlds__hlds_out__hlds_out_goal__write_vars_6_p_0(Stream_10, VarNameSrc_12, VarNamePrint_13, CallResumeList_40);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
    }
    mercury__io__write_string_4_p_0(Stream_10, IndentStr_17);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% need across call nondet vars: ");
    if ((CallNondetList_41 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "none\n");
    else
    {
      hlds__hlds_out__hlds_out_goal__write_vars_6_p_0(Stream_10, VarNameSrc_12, VarNamePrint_13, CallNondetList_41);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
    }
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_16, (MR_Char) 115);
  if (succeeded)
  {
    hlds__hlds_llds__goal_info_get_maybe_need_in_resume_2_p_0(GoalInfo_11, &MaybeNeedInResume_48);
    succeeded = (MaybeNeedInResume_48 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      NeedInResume_49 = ((MR_Word) ((MR_hl_field(1, MaybeNeedInResume_48, (MR_Integer) 0))));
  }
  if (succeeded)
  {
    MR_Word ResumeOnStack_50 = ((MR_Unsigned) ((MR_hl_field(0, NeedInResume_49, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ResumeResumeSet_51 = ((MR_Word) ((MR_hl_field(0, NeedInResume_49, (MR_Integer) 1))));
    MR_Word ResumeNondetSet_52 = ((MR_Word) ((MR_hl_field(0, NeedInResume_49, (MR_Integer) 2))));
    MR_Word ResumeResumeList_53;
    MR_Word ResumeNondetList_54;

    ResumeResumeList_53 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResumeResumeSet_51);
    ResumeNondetList_54 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResumeNondetSet_52);
    switch (ResumeOnStack_50) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__io__write_string_4_p_0(Stream_10, IndentStr_17);
          mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% resume point has no stack label\n");
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_4_p_0(Stream_10, IndentStr_17);
          mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% resume point has stack label\n");
        }
        break;
    }
    mercury__io__write_string_4_p_0(Stream_10, IndentStr_17);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% need in resume resume vars: ");
    if ((ResumeResumeList_53 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "none\n");
    else
    {
      hlds__hlds_out__hlds_out_goal__write_vars_6_p_0(Stream_10, VarNameSrc_12, VarNamePrint_13, ResumeResumeList_53);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
    }
    mercury__io__write_string_4_p_0(Stream_10, IndentStr_17);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% need in resume nondet vars: ");
    if ((ResumeNondetList_54 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "none\n");
    else
    {
      hlds__hlds_out__hlds_out_goal__write_vars_6_p_0(Stream_10, VarNameSrc_12, VarNamePrint_13, ResumeNondetList_54);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
    }
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_16, (MR_Char) 115);
  if (succeeded)
  {
    hlds__hlds_llds__goal_info_get_maybe_need_in_par_conj_2_p_0(GoalInfo_11, &MaybeNeedInParConj_59);
    succeeded = (MaybeNeedInParConj_59 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      NeedInParConj_60 = ((MR_Word) ((MR_hl_field(1, MaybeNeedInParConj_59, (MR_Integer) 0))));
  }
  if (succeeded)
  {
    MR_Word ParConjSet_61 = (MR_Word) (NeedInParConj_60);
    MR_Word ParConjList_62;

    ParConjList_62 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ParConjSet_61);
    mercury__io__write_string_4_p_0(Stream_10, IndentStr_17);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% need in par_conj vars: ");
    hlds__hlds_out__hlds_out_goal__write_vars_6_p_0(Stream_10, VarNameSrc_12, VarNamePrint_13, ParConjList_62);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_vars_6_p_0(
  MR_Word Stream_1,
  MR_Word VarNameSrc_2,
  MR_Word VarNamePrint_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Var_36 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word Var_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));

      if ((Var_36 == (MR_Word) ((MR_Unsigned) 0U)))
        parse_tree__parse_tree_out_term__mercury_output_var_src_6_p_0(VarNameSrc_2, VarNamePrint_3, Var_37, Stream_1);
      else
      {
        MR_Word Var_63;
        MR_Word Var_64;

        parse_tree__parse_tree_out_term__mercury_output_var_src_6_p_0(VarNameSrc_2, VarNamePrint_3, Var_37, Stream_1);
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) ", ");
        Var_64 = ((MR_Word) ((MR_hl_field(1, Var_36, (MR_Integer) 0))));
        Var_63 = ((MR_Word) ((MR_hl_field(1, Var_36, (MR_Integer) 1))));
        if ((Var_63 == (MR_Word) ((MR_Unsigned) 0U)))
          parse_tree__parse_tree_out_term__mercury_output_var_src_6_p_0(VarNameSrc_2, VarNamePrint_3, Var_64, Stream_1);
        else
        {
          MR_Word next_value_of_HeadVar__4_4;

          parse_tree__parse_tree_out_term__mercury_output_var_src_6_p_0(VarNameSrc_2, VarNamePrint_3, Var_64, Stream_1);
          mercury__io__write_string_4_p_0(Stream_1, (MR_String) ", ");
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__4_4 = Var_63;
          HeadVar__4_4 = next_value_of_HeadVar__4_4;
          continue;
        }
      }
    }
    break;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_7_p_0(
  MR_Word Stream_1,
  MR_Word VarNameSrc_2,
  MR_Word VarNamePrint_3,
  MR_Integer Indent_4,
  MR_Word HeadVar__5_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Var_19;
      MR_Word Loc_20;
      MR_Word VarLocs_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_String IndentStr_23;
      MR_String VarStr_24;
      MR_String LocnStr_25;
      MR_Word MaybeWidth_26;
      MR_String WidthStr_27;
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__5_5;

      Var_19 = ((MR_Word) ((MR_hl_field(0, Var_31, (MR_Integer) 0))));
      Loc_20 = ((MR_Word) ((MR_hl_field(0, Var_31, (MR_Integer) 1))));
      IndentStr_23 = libs__indent__indent2_string_1_f_0(Indent_4);
      VarStr_24 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_2, VarNamePrint_3, Var_19);
      hlds__hlds_llds__abs_locn_to_string_3_p_0(Loc_20, &LocnStr_25, &MaybeWidth_26);
      if ((MaybeWidth_26 == (MR_Word) ((MR_Unsigned) 0U)))
        WidthStr_27 = (MR_String) "";
      else
      {
        MR_String Width_28 = ((MR_String) ((MR_hl_field(1, MaybeWidth_26, (MR_Integer) 0))));

        WidthStr_27 = mercury__string__f_43_43_2_f_0((MR_String) " ", Width_28);
      }
      mercury__io__write_string_4_p_0(Stream_1, IndentStr_23);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "%\t");
      mercury__io__write_string_4_p_0(Stream_1, VarStr_24);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\t-> ");
      mercury__io__write_string_4_p_0(Stream_1, LocnStr_25);
      mercury__io__write_string_4_p_0(Stream_1, WidthStr_27);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = VarLocs_21;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      continue;
    }
    break;
  }
}

void mercury__hlds__hlds_out__hlds_out_goal__init(void)
{
}

void mercury__hlds__hlds_out__hlds_out_goal__init_type_tables(void)
{
}

void mercury__hlds__hlds_out__hlds_out_goal__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_out__hlds_out_goal__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.hlds_out.hlds_out_goal.
