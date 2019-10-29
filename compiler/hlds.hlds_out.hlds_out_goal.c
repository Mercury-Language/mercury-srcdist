/*
** Automatically generated from `hlds_out_goal.m'
** by the Mercury compiler,
** version rotd-2019-10-29
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_clause.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_inst.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_mode.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__333__1_3_p_0(
  MR_Word HeadVar__1_335);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__329__1_3_p_0(
  MR_Word HeadVar__1_331);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__325__1_3_p_0(
  MR_Word HeadVar__1_327);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__321__1_3_p_0(
  MR_Word HeadVar__1_323);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__317__1_3_p_0(
  MR_Word HeadVar__1_319);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_6_p_0(
  MR_Integer Indent_7,
  MR_Word MutableVar_8,
  MR_Word STATE_VARIABLE_AddCommaNewlineIndent_0_13,
  MR_Word * STATE_VARIABLE_AddCommaNewlineIndent_14);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_alternative_cons_id_3_p_0(
  MR_Word ConsId_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_ho_arg_reg_3_p_0(
  MR_Word ArgReg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_expr_10_p_0(
  MR_Word Info_11,
  MR_Word ModuleInfo_12,
  MR_Word VarSet_13,
  MR_Word TypeQual_14,
  MR_Word VarNamePrint_15,
  MR_Integer Indent_16,
  MR_String Follow_17,
  MR_Word GoalExpr_18);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_conj_10_p_0(
  MR_Word Info_11,
  MR_Word ModuleInfo_12,
  MR_Word VarSet_13,
  MR_Word TypeQual_14,
  MR_Word VarNamePrint_15,
  MR_Integer Indent_16,
  MR_String Follow_17,
  MR_Word GoalExpr_18);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_conj_12_p_0(
  MR_Word Info_13,
  MR_Word ModuleInfo_14,
  MR_Word VarSet_15,
  MR_Word TypeQual_16,
  MR_Word VarNamePrint_17,
  MR_Integer Indent_18,
  MR_String Follow_19,
  MR_String Separator_20,
  MR_Word Goal1_21,
  MR_Word Goals1_22);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_cases_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_cases_10_p_0(
  MR_Word Info_11,
  MR_Word ModuleInfo_12,
  MR_Word VarSet_13,
  MR_Word TypeQual_14,
  MR_Word VarNamePrint_15,
  MR_Integer Indent_16,
  MR_Word Var_17,
  MR_Word CasesList_18);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_p_0(
  MR_Word Info_11,
  MR_Word ModuleInfo_12,
  MR_Word VarSet_13,
  MR_Word TypeQual_14,
  MR_Word VarNamePrint_15,
  MR_Integer Indent_16,
  MR_String Follow_17,
  MR_Word GoalExpr_18);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0(
  MR_Word STATE_VARIABLE_Info_0_44,
  MR_Word ModuleInfo_12,
  MR_Word VarSet_13,
  MR_Word TypeQual_14,
  MR_Word VarNamePrint_15,
  MR_Integer Indent_16,
  MR_String Follow_17,
  MR_Word GoalExpr_18);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_p_0(
  MR_Word Info_11,
  MR_Word ModuleInfo_12,
  MR_Word VarSet_13,
  MR_Word TypeQual_14,
  MR_Word VarNamePrint_15,
  MR_Integer Indent_16,
  MR_String Follow_17,
  MR_Word GoalExpr_18);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_negation_10_p_0(
  MR_Word Info_11,
  MR_Word ModuleInfo_12,
  MR_Word VarSet_13,
  MR_Word TypeQual_14,
  MR_Word VarNamePrint_15,
  MR_Integer Indent_16,
  MR_String Follow_17,
  MR_Word GoalExpr_18);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_switch_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_switch_10_p_0(
  MR_Word Info_11,
  MR_Word ModuleInfo_12,
  MR_Word VarSet_13,
  MR_Word TypeQual_14,
  MR_Word VarNamePrint_15,
  MR_Integer Indent_16,
  MR_String Follow_17,
  MR_Word GoalExpr_18);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_disj_10_p_0(
  MR_Word Info_11,
  MR_Word ModuleInfo_12,
  MR_Word VarSet_13,
  MR_Word TypeQual_14,
  MR_Word VarNamePrint_15,
  MR_Integer Indent_16,
  MR_String Follow_17,
  MR_Word GoalExpr_18);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_p_0(
  MR_Word Info_11,
  MR_Word ModuleInfo_12,
  MR_Word VarSet_13,
  MR_Word TypeQual_14,
  MR_Word VarNamePrint_15,
  MR_Integer Indent_16,
  MR_String Follow_17,
  MR_Word GoalExpr_18);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_11_p_0(
  MR_Word Info_12,
  MR_Word ModuleInfo_13,
  MR_Word VarSet_14,
  MR_Word InstVarSet_15,
  MR_Word TypeQual_16,
  MR_Word VarNamePrint_17,
  MR_Integer Indent_18,
  MR_Word MaybeType_19,
  MR_Word RHS_20);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_unify_10_p_0(
  MR_Word Info_11,
  MR_Word ModuleInfo_12,
  MR_Word VarSet_13,
  MR_Word TypeQual_14,
  MR_Word VarNamePrint_15,
  MR_Integer Indent_16,
  MR_String Follow_17,
  MR_Word GoalExpr_18);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_52_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_52_93_95_48_10_p_0(
  MR_Word ModuleInfo_12,
  MR_Word VarSet_13,
  MR_Word VarNamePrint_15,
  MR_Integer Indent_16,
  MR_String Follow_17,
  MR_Word GoalExpr_18);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_foreign_args_6_p_0(
  MR_Word VarSet_1,
  MR_Word TVarSet_2,
  MR_Word VarNamePrint_3,
  MR_Word HeadVar__4_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_50_44_32_52_93_95_48_10_p_0(
  MR_Word Info_11,
  MR_Word VarSet_13,
  MR_Word VarNamePrint_15,
  MR_Integer Indent_16,
  MR_String Follow_17,
  MR_Word GoalExpr_18);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0(
  MR_Integer Indent_5,
  MR_Word MaybeArgRegs_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_6_p_0(
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_String CompName_9,
  MR_Word CompState_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__maybe_add_comma_newline_3_p_0(
  MR_Word AddCommaNewline_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_sym_name_and_args_6_p_0(
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word PredName_9,
  MR_Word ArgVars_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_9_p_0(
  MR_Word Info_10,
  MR_Word ProgVarSet_12,
  MR_Word InstVarSet_13,
  MR_Word VarNamePrint_14,
  MR_Integer Indent_15,
  MR_Word Unification_16);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_50_93_95_48_11_p_0(
  MR_Word Info_12,
  MR_Word ProgVarSet_14,
  MR_Word InstVarSet_15,
  MR_Word VarNamePrint_16,
  MR_Integer Indent_17,
  MR_Word ConsId_18,
  MR_Word ArgVars_19,
  MR_Word ArgModes_20);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_p_0(
  MR_Word ShortDescription_6,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_instmap_delta_vars_5_p_0(
  MR_Word VarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word InstMapDelta_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_p_0(
  MR_Word Info_8,
  MR_Word GoalInfo_9,
  MR_Word VarSet_10,
  MR_Word VarNamePrint_11,
  MR_Integer Indent_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(
  MR_Word VarSet_1,
  MR_Word VarNamePrint_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_new_var_inst_list_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word HeadVar__4_4);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_1[18][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_2[4][1];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_3[6][6];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_4[12][3];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_5[1][9];




static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_1[18][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) ")")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "any_func")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "(")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "(")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "any_func")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "any_pred")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[4])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "(")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[9])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "any_pred")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[7])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "func")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[4])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "(")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[12])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "func")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[7])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "pred")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[4])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "(")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[15])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "pred")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[7])))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_2[4][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "class_method_call"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "apply"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "call"))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_3[6][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_compiletime_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_4[12][3] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[1])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_52_93_95_48_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[2])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[2])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[2])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[2])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[2])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[3])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[4])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__write_goal_switch_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[5])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[1])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[4])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__write_cases_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_5[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__333__1_3_p_0(
  MR_Word HeadVar__1_335)
{
  mercury__io__write_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), ((MR_Box) (HeadVar__1_335)));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__329__1_3_p_0(
  MR_Word HeadVar__1_331)
{
  mercury__io__write_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), ((MR_Box) (HeadVar__1_331)));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__325__1_3_p_0(
  MR_Word HeadVar__1_327)
{
  mercury__io__write_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), ((MR_Box) (HeadVar__1_327)));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__321__1_3_p_0(
  MR_Word HeadVar__1_323)
{
  mercury__io__write_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), ((MR_Box) (HeadVar__1_323)));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__317__1_3_p_0(
  MR_Word HeadVar__1_319)
{
  mercury__io__write_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), ((MR_Box) (HeadVar__1_319)));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_6_p_0(
  MR_Integer Indent_7,
  MR_Word MutableVar_8,
  MR_Word STATE_VARIABLE_AddCommaNewlineIndent_0_13,
  MR_Word * STATE_VARIABLE_AddCommaNewlineIndent_14)
{
  {
    MR_String MutableName_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), MutableVar_8, (MR_Integer) 0))));
    MR_String StateVarName_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), MutableVar_8, (MR_Integer) 1))));
    MR_String Var_18;
    MR_String Var_21;
    MR_String Var_23;
    MR_String Var_26;

    switch (STATE_VARIABLE_AddCommaNewlineIndent_0_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_7);
        }
        break;
    }
    Var_21 = mercury__string__f_43_43_2_f_0(MutableName_11, (MR_String) ", ");
    Var_18 = mercury__string__f_43_43_2_f_0((MR_String) "% state(", Var_21);
    mercury__io__write_string_3_p_0(Var_18);
    Var_26 = mercury__string__f_43_43_2_f_0(StateVarName_12, (MR_String) ")");
    Var_23 = mercury__string__f_43_43_2_f_0((MR_String) "!", Var_26);
    mercury__io__write_string_3_p_0(Var_23);
    *STATE_VARIABLE_AddCommaNewlineIndent_14 = (MR_Integer) 1;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_alternative_cons_id_3_p_0(
  MR_Word ConsId_4)
{
  {
    MR_String Var_10;

    mercury__io__write_string_3_p_0((MR_String) " or ");
    Var_10 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ConsId_4);
    mercury__io__write_string_3_p_0(Var_10);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_ho_arg_reg_3_p_0(
  MR_Word ArgReg_4)
{
  switch (ArgReg_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__io__write_string_3_p_0((MR_String) "reg_f");
      break;
    case (MR_Integer) 0:
      mercury__io__write_string_3_p_0((MR_String) "reg_r");
      break;
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_goal__case_comment_3_f_0(
  MR_String VarName_5,
  MR_String MainConsName_6,
  MR_Word OtherConsNames_7)
{
  {
    MR_String Comment_8;

    if ((OtherConsNames_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Var_16;

      Var_16 = mercury__string__f_43_43_2_f_0((MR_String) " has the functor ", MainConsName_6);
      Comment_8 = mercury__string__f_43_43_2_f_0(VarName_5, Var_16);
    }
    else
    {
      MR_String Var_11;
      MR_String Var_13;
      MR_Word Var_15;

      {
        Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (MainConsName_6));
        MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (OtherConsNames_7));
      }
      Var_13 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_15);
      Var_11 = mercury__string__f_43_43_2_f_0((MR_String) " has one of the functors ", Var_13);
      Comment_8 = mercury__string__f_43_43_2_f_0(VarName_5, Var_11);
    }
    return Comment_8;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(
  MR_Word TaggedConsId_4,
  MR_String * ConsName_5,
  MR_Word * ConsTag_6)
{
  {
    MR_Word ConsId_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedConsId_4, (MR_Integer) 0))));

    *ConsTag_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TaggedConsId_4, (MR_Integer) 1))));
    *ConsName_5 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ConsId_7);
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_goal__unify_rhs_to_string_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word RHS_9)
{
  {
    MR_bool succeeded;
    MR_String Str_10;

    switch (MR_tag((MR_Word) RHS_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHS_9, (MR_Integer) 0))));

          Str_10 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_7, VarNamePrint_8, Var_11);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ConsId0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_9, (MR_Integer) 0))));
          MR_Word IsExistConstruct_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), RHS_9, (MR_Integer) 1))) & (MR_Integer) 1);
          MR_Word ArgVars_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_9, (MR_Integer) 2))));
          MR_Word ConsId_19;
          MR_Word SymName0_15;
          MR_Integer Arity_16;
          MR_Word TypeCtor_17;

          succeeded = (IsExistConstruct_13 == (MR_Integer) 1);
          if (succeeded)
          {
            succeeded = ((((MR_tag((MR_Word) ConsId0_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId0_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              SymName0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId0_12, (MR_Integer) 1))));
              Arity_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId0_12, (MR_Integer) 2))));
              TypeCtor_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId0_12, (MR_Integer) 3))));
            }
          }
          if (succeeded)
          {
            MR_Word SymName_18;

            parse_tree__prog_type__add_new_prefix_2_p_0(SymName0_15, &SymName_18);
            {
              ConsId_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ConsId_19, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), ConsId_19, 1) = ((MR_Box) (SymName_18));
              MR_hl_field(MR_mktag(3), ConsId_19, 2) = ((MR_Box) (Arity_16));
              MR_hl_field(MR_mktag(3), ConsId_19, 3) = ((MR_Box) (TypeCtor_17));
            }
          }
          else
            ConsId_19 = ConsId0_12;
          Str_10 = hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(ModuleInfo_6, VarSet_7, VarNamePrint_8, ConsId_19, ArgVars_14);
        }
        break;
      case (MR_Integer) 2:
        Str_10 = (MR_String) "lambda goal";
        break;
    }
    return Str_10;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_unify_rhs_9_p_0(
  MR_Word Info_10,
  MR_Word ModuleInfo_11,
  MR_Word VarSet_12,
  MR_Word InstVarSet_13,
  MR_Word VarNamePrint_14,
  MR_Integer Indent_15,
  MR_Word RHS_16)
{
  hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_11_p_0(Info_10, ModuleInfo_11, VarSet_12, InstVarSet_13, (MR_Word) ((MR_Unsigned) 0U), VarNamePrint_14, Indent_15, (MR_Word) ((MR_Unsigned) 0U), RHS_16);
}

void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_9_p_0(
  MR_Word Info_10,
  MR_Word ModuleInfo_11,
  MR_Word VarSet_12,
  MR_Word VarNamePrint_13,
  MR_Integer Indent_14,
  MR_String Follow_15,
  MR_Word Goal_16)
{
  hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(Info_10, ModuleInfo_11, VarSet_12, (MR_Word) ((MR_Unsigned) 0U), VarNamePrint_13, Indent_14, Follow_15, Goal_16);
}

void MR_CALL 
hlds__hlds_out__hlds_out_goal__dump_goal_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word VarSet_7,
  MR_Word Goal_8)
{
  {
    MR_Word Globals_10;
    MR_Word Info_11;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_10);
    Info_11 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(Globals_10, (MR_Integer) 1);
    hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(Info_11, ModuleInfo_6, VarSet_7, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Integer) 0, (MR_String) "", Goal_8);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_expr_10_p_0(
  MR_Word Info_11,
  MR_Word ModuleInfo_12,
  MR_Word VarSet_13,
  MR_Word TypeQual_14,
  MR_Word VarNamePrint_15,
  MR_Integer Indent_16,
  MR_String Follow_17,
  MR_Word GoalExpr_18)
{
  switch (MR_tag((MR_Word) GoalExpr_18)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      hlds__hlds_out__hlds_out_goal__write_goal_negation_10_p_0(Info_11, ModuleInfo_12, VarSet_13, TypeQual_14, VarNamePrint_15, Indent_16, Follow_17, GoalExpr_18);
      break;
    case (MR_Integer) 1:
      hlds__hlds_out__hlds_out_goal__write_goal_unify_10_p_0(Info_11, ModuleInfo_12, VarSet_13, TypeQual_14, VarNamePrint_15, Indent_16, Follow_17, GoalExpr_18);
      break;
    case (MR_Integer) 2:
      hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_p_0(Info_11, ModuleInfo_12, VarSet_13, TypeQual_14, VarNamePrint_15, Indent_16, Follow_17, GoalExpr_18);
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_50_44_32_52_93_95_48_10_p_0(Info_11, VarSet_13, VarNamePrint_15, Indent_16, Follow_17, GoalExpr_18);
          break;
        case (MR_Integer) 1:
          hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_52_93_95_48_10_p_0(ModuleInfo_12, VarSet_13, VarNamePrint_15, Indent_16, Follow_17, GoalExpr_18);
          break;
        case (MR_Integer) 2:
          hlds__hlds_out__hlds_out_goal__write_goal_conj_10_p_0(Info_11, ModuleInfo_12, VarSet_13, TypeQual_14, VarNamePrint_15, Indent_16, Follow_17, GoalExpr_18);
          break;
        case (MR_Integer) 3:
          hlds__hlds_out__hlds_out_goal__write_goal_disj_10_p_0(Info_11, ModuleInfo_12, VarSet_13, TypeQual_14, VarNamePrint_15, Indent_16, Follow_17, GoalExpr_18);
          break;
        case (MR_Integer) 4:
          hlds__hlds_out__hlds_out_goal__write_goal_switch_10_p_0(Info_11, ModuleInfo_12, VarSet_13, TypeQual_14, VarNamePrint_15, Indent_16, Follow_17, GoalExpr_18);
          break;
        case (MR_Integer) 5:
          hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0(Info_11, ModuleInfo_12, VarSet_13, TypeQual_14, VarNamePrint_15, Indent_16, Follow_17, GoalExpr_18);
          break;
        case (MR_Integer) 6:
          hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_p_0(Info_11, ModuleInfo_12, VarSet_13, TypeQual_14, VarNamePrint_15, Indent_16, Follow_17, GoalExpr_18);
          break;
        case (MR_Integer) 7:
          hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_p_0(Info_11, ModuleInfo_12, VarSet_13, TypeQual_14, VarNamePrint_15, Indent_16, Follow_17, GoalExpr_18);
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_conj_10_p_0(
  MR_Word Info_11,
  MR_Word ModuleInfo_12,
  MR_Word VarSet_13,
  MR_Word TypeQual_14,
  MR_Word VarNamePrint_15,
  MR_Integer Indent_16,
  MR_String Follow_17,
  MR_Word GoalExpr_18)
{
  {
    MR_bool succeeded;
    MR_Word ConjType_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word List_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 2))));

    if ((List_21 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
      switch (ConjType_20) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          mercury__io__write_string_3_p_0((MR_String) "/* parallel */ true");
          break;
        case (MR_Integer) 0:
          mercury__io__write_string_3_p_0((MR_String) "true");
          break;
      }
      mercury__io__write_string_3_p_0(Follow_17);
    }
    else
    {
      MR_Word Goal_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), List_21, (MR_Integer) 0))));
      MR_Word Goals_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), List_21, (MR_Integer) 1))));

      switch (ConjType_20) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Integer Var_36;

            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
            mercury__io__write_string_3_p_0((MR_String) "( % parallel conjunction\n");
            Var_36 = (MR_Integer) ((MR_Unsigned) Indent_16 + (MR_Unsigned) 1);
            hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(Info_11, ModuleInfo_12, VarSet_13, TypeQual_14, VarNamePrint_15, Var_36, (MR_String) "\n", Goal_22);
            hlds__hlds_out__hlds_out_goal__write_goal_list_10_p_0(Info_11, ModuleInfo_12, VarSet_13, TypeQual_14, VarNamePrint_15, Indent_16, (MR_String) "&\n", Goals_23);
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
            mercury__io__write_string_3_p_0((MR_String) ")");
            mercury__io__write_string_3_p_0(Follow_17);
          }
          break;
        case (MR_Integer) 0:
          {
            MR_String DumpOptions_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 0))));

            succeeded = (strcmp(DumpOptions_24, (MR_String) "") == 0);
            if (succeeded)
              hlds__hlds_out__hlds_out_goal__write_conj_12_p_0(Info_11, ModuleInfo_12, VarSet_13, TypeQual_14, VarNamePrint_15, Indent_16, Follow_17, (MR_String) ",\n", Goal_22, Goals_23);
            else
            {
              MR_Integer Var_51;

              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
              mercury__io__write_string_3_p_0((MR_String) "( % conjunction\n");
              Var_51 = (MR_Integer) ((MR_Unsigned) Indent_16 + (MR_Unsigned) 1);
              hlds__hlds_out__hlds_out_goal__write_conj_12_p_0(Info_11, ModuleInfo_12, VarSet_13, TypeQual_14, VarNamePrint_15, Var_51, (MR_String) "\n", (MR_String) ",\n", Goal_22, Goals_23);
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
              mercury__io__write_string_3_p_0((MR_String) ")");
              mercury__io__write_string_3_p_0(Follow_17);
            }
          }
          break;
      }
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_conj_12_p_0(
  MR_Word Info_13,
  MR_Word ModuleInfo_14,
  MR_Word VarSet_15,
  MR_Word TypeQual_16,
  MR_Word VarNamePrint_17,
  MR_Integer Indent_18,
  MR_String Follow_19,
  MR_String Separator_20,
  MR_Word Goal1_21,
  MR_Word Goals1_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Goals1_22 == (MR_Word) ((MR_Unsigned) 0U)))
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(Info_13, ModuleInfo_14, VarSet_15, TypeQual_16, VarNamePrint_17, Indent_18, Follow_19, Goal1_21);
    else
    {
      MR_Word Goal2_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals1_22, (MR_Integer) 0))));
      MR_Word Goals2_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals1_22, (MR_Integer) 1))));
      MR_String DumpOptions_26 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_13, (MR_Integer) 0))));
      MR_Word next_value_of_Goal1_21;
      MR_Word next_value_of_Goals1_22;

      succeeded = (strcmp(DumpOptions_26, (MR_String) "") == 0);
      if (succeeded)
        hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(Info_13, ModuleInfo_14, VarSet_15, TypeQual_16, VarNamePrint_17, Indent_18, Separator_20, Goal1_21);
      else
      {
        hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(Info_13, ModuleInfo_14, VarSet_15, TypeQual_16, VarNamePrint_17, Indent_18, (MR_String) "\n", Goal1_21);
        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_18);
        mercury__io__write_string_3_p_0(Separator_20);
      }
      // direct tailcall eliminated
      ;
      next_value_of_Goal1_21 = Goal2_24;
      next_value_of_Goals1_22 = Goals2_25;
      Goal1_21 = next_value_of_Goal1_21;
      Goals1_22 = next_value_of_Goals1_22;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_cases_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_goal__write_alternative_cons_id_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_cases_10_p_0(
  MR_Word Info_11,
  MR_Word ModuleInfo_12,
  MR_Word VarSet_13,
  MR_Word TypeQual_14,
  MR_Word VarNamePrint_15,
  MR_Integer Indent_16,
  MR_Word Var_17,
  MR_Word CasesList_18)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((CasesList_18 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Case_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CasesList_18, (MR_Integer) 0))));
      MR_Word Cases_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CasesList_18, (MR_Integer) 1))));
      MR_Integer Var_27;
      MR_Word MainConsId_42;
      MR_Word OtherConsIds_43;
      MR_Word Goal_44;
      MR_String Var_51;
      MR_Box conv0_STATE_VARIABLE_IO_34_54;
      MR_Word next_value_of_CasesList_18;

      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
      mercury__io__write_string_3_p_0((MR_String) ";\n");
      Var_27 = (MR_Integer) ((MR_Unsigned) Indent_16 + (MR_Unsigned) 1);
      MainConsId_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_20, (MR_Integer) 0))));
      OtherConsIds_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_20, (MR_Integer) 1))));
      Goal_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_20, (MR_Integer) 2))));
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Var_27);
      mercury__io__write_string_3_p_0((MR_String) "% ");
      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, VarNamePrint_15, Var_17);
      mercury__io__write_string_3_p_0((MR_String) " has functor ");
      Var_51 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(MainConsId_42);
      mercury__io__write_string_3_p_0(Var_51);
      mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_4[11]), OtherConsIds_43, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_34_54);
      mercury__io__write_string_3_p_0((MR_String) "\n");
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(Info_11, ModuleInfo_12, VarSet_13, TypeQual_14, VarNamePrint_15, Var_27, (MR_String) "\n", Goal_44);
      // direct tailcall eliminated
      ;
      next_value_of_CasesList_18 = Cases_21;
      CasesList_18 = next_value_of_CasesList_18;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_list_10_p_0(
  MR_Word Info_11,
  MR_Word ModuleInfo_12,
  MR_Word VarSet_13,
  MR_Word TypeQual_14,
  MR_Word VarNamePrint_15,
  MR_Integer Indent_16,
  MR_String Separator_17,
  MR_Word Goals_18)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((Goals_18 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word HeadGoal_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_18, (MR_Integer) 0))));
      MR_Word TailGoals_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_18, (MR_Integer) 1))));
      MR_Integer Var_26;
      MR_Word next_value_of_Goals_18;

      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
      mercury__io__write_string_3_p_0(Separator_17);
      Var_26 = (MR_Integer) ((MR_Unsigned) Indent_16 + (MR_Unsigned) 1);
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(Info_11, ModuleInfo_12, VarSet_13, TypeQual_14, VarNamePrint_15, Var_26, (MR_String) "\n", HeadGoal_20);
      // direct tailcall eliminated
      ;
      next_value_of_Goals_18 = TailGoals_21;
      Goals_18 = next_value_of_Goals_18;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_p_0(
  MR_Word Info_11,
  MR_Word ModuleInfo_12,
  MR_Word VarSet_13,
  MR_Word TypeQual_14,
  MR_Word VarNamePrint_15,
  MR_Integer Indent_16,
  MR_String Follow_17,
  MR_Word GoalExpr_18)
{
  {
    MR_Word ShortHand_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) ShortHand_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word GoalA_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_20, (MR_Integer) 0))));
          MR_Word GoalB_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_20, (MR_Integer) 1))));
          MR_Integer Indent1_36;

          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
          mercury__io__write_string_3_p_0((MR_String) "( % bi-implication\n");
          Indent1_36 = (MR_Integer) ((MR_Unsigned) Indent_16 + (MR_Unsigned) 1);
          hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(Info_11, ModuleInfo_12, VarSet_13, TypeQual_14, VarNamePrint_15, Indent1_36, (MR_String) "\n", GoalA_34);
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
          mercury__io__write_string_3_p_0((MR_String) "<=>\n");
          hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(Info_11, ModuleInfo_12, VarSet_13, TypeQual_14, VarNamePrint_15, Indent1_36, (MR_String) "\n", GoalB_35);
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
          mercury__io__write_string_3_p_0((MR_String) ")");
          mercury__io__write_string_3_p_0(Follow_17);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Outer_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_20, (MR_Integer) 1))));
          MR_Word Inner_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_20, (MR_Integer) 2))));
          MR_Word MaybeOutputVars_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_20, (MR_Integer) 3))));
          MR_Word MainGoal_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_20, (MR_Integer) 4))));
          MR_Word OrElseGoals_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_20, (MR_Integer) 5))));
          MR_Integer Var_95;

          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
          mercury__io__write_string_3_p_0((MR_String) "atomic [");
          hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_6_p_0(VarSet_13, VarNamePrint_15, (MR_String) "outer", Outer_22);
          mercury__io__write_string_3_p_0((MR_String) " ");
          hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_6_p_0(VarSet_13, VarNamePrint_15, (MR_String) "inner", Inner_23);
          mercury__io__write_string_3_p_0((MR_String) " ");
          if (!((MaybeOutputVars_24 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            MR_Word OutputVars_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOutputVars_24, (MR_Integer) 0))));

            mercury__io__write_string_3_p_0((MR_String) "vars([");
            parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, VarNamePrint_15, OutputVars_28);
            mercury__io__write_string_3_p_0((MR_String) "])");
          }
          mercury__io__write_string_3_p_0((MR_String) "] (\n");
          Var_95 = (MR_Integer) ((MR_Unsigned) Indent_16 + (MR_Unsigned) 1);
          hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(Info_11, ModuleInfo_12, VarSet_13, TypeQual_14, VarNamePrint_15, Var_95, (MR_String) "\n", MainGoal_25);
          hlds__hlds_out__hlds_out_goal__write_goal_list_10_p_0(Info_11, ModuleInfo_12, VarSet_13, TypeQual_14, VarNamePrint_15, Indent_16, (MR_String) "or_else\n", OrElseGoals_26);
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
          mercury__io__write_string_3_p_0((MR_String) ")");
          mercury__io__write_string_3_p_0(Follow_17);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word MaybeIO_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_20, (MR_Integer) 0))));
          MR_Word SubGoal_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_20, (MR_Integer) 2))));
          MR_Integer Var_69;

          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
          mercury__io__write_string_3_p_0((MR_String) "( % try\n");
          if (!((MaybeIO_29 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            MR_Word IOVarA_32;
            MR_Word IOVarB_33;
            MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIO_29, (MR_Integer) 0))));
            MR_Integer Var_58;
            MR_Word Var_63;
            MR_Word Var_65;

            IOVarA_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_57, (MR_Integer) 0))));
            IOVarB_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_57, (MR_Integer) 1))));
            Var_58 = (MR_Integer) ((MR_Unsigned) Indent_16 + (MR_Unsigned) 1);
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Var_58);
            mercury__io__write_string_3_p_0((MR_String) "% io(");
            {
              Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (IOVarB_33));
              MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (IOVarA_32));
              MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_65));
            }
            parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, VarNamePrint_15, Var_63);
            mercury__io__write_string_3_p_0((MR_String) ")\n");
          }
          Var_69 = (MR_Integer) ((MR_Unsigned) Indent_16 + (MR_Unsigned) 1);
          hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(Info_11, ModuleInfo_12, VarSet_13, TypeQual_14, VarNamePrint_15, Var_69, (MR_String) "\n", SubGoal_31);
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
          mercury__io__write_string_3_p_0((MR_String) ")");
          mercury__io__write_string_3_p_0(Follow_17);
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_AddCommaNewlineIndent_14;

    hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_6_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_AddCommaNewlineIndent_14);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_AddCommaNewlineIndent_14));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_clause__mercury_output_trace_runtime_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_clause__mercury_output_trace_compiletime_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0(
  MR_Word STATE_VARIABLE_Info_0_44,
  MR_Word ModuleInfo_12,
  MR_Word VarSet_13,
  MR_Word TypeQual_14,
  MR_Word VarNamePrint_15,
  MR_Integer Indent_16,
  MR_String Follow_17,
  MR_Word GoalExpr_18)
{
  {
    MR_Word Reason_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 1))));
    MR_Word Goal_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 2))));
    MR_Word STATE_VARIABLE_Info_130_130;
    MR_Integer Var_228;

    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
    switch (MR_tag((MR_Word) Reason_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Vars_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Reason_20, (MR_Integer) 0))));

          mercury__io__write_string_3_p_0((MR_String) "some [");
          parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, VarNamePrint_15, Vars_22);
          mercury__io__write_string_3_p_0((MR_String) "] (\n");
          STATE_VARIABLE_Info_130_130 = STATE_VARIABLE_Info_0_44;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word HeadWarning_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Reason_20, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word TailWarnings_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Reason_20, (MR_Integer) 1))));

          mercury__io__write_string_3_p_0((MR_String) "disable_warnings [");
          parse_tree__parse_tree_out_clause__write_goal_warnings_4_p_0(HeadWarning_23, TailWarnings_24);
          mercury__io__write_string_3_p_0((MR_String) "] (\n");
          STATE_VARIABLE_Info_130_130 = STATE_VARIABLE_Info_0_44;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Kind_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Reason_20, (MR_Integer) 1))) & (MR_Integer) 3);
          MR_Word Vars_236 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Reason_20, (MR_Integer) 0))));

          switch (Kind_26) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              mercury__io__write_string_3_p_0((MR_String) "promise_equivalent_solution_sets");
              break;
            case (MR_Integer) 2:
              mercury__io__write_string_3_p_0((MR_String) "arbitrary");
              break;
            case (MR_Integer) 0:
              mercury__io__write_string_3_p_0((MR_String) "promise_equivalent_solutions");
              break;
          }
          mercury__io__write_string_3_p_0((MR_String) " [");
          parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, VarNamePrint_15, Vars_236);
          mercury__io__write_string_3_p_0((MR_String) "] (\n");
          STATE_VARIABLE_Info_130_130 = STATE_VARIABLE_Info_0_44;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_20, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Purity_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_20, (MR_Integer) 1))) & (MR_Integer) 3);

              switch (Purity_25) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  mercury__io__write_string_3_p_0((MR_String) "promise_impure (");
                  break;
                case (MR_Integer) 0:
                  mercury__io__write_string_3_p_0((MR_String) "promise_pure (");
                  break;
                case (MR_Integer) 1:
                  mercury__io__write_string_3_p_0((MR_String) "promise_semipure (");
                  break;
              }
              mercury__io__write_string_3_p_0((MR_String) "\n");
              STATE_VARIABLE_Info_130_130 = STATE_VARIABLE_Info_0_44;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Detism_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_20, (MR_Integer) 1))) & (MR_Integer) 7);

              switch (Detism_27) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 4:
                  mercury__io__write_string_3_p_0((MR_String) "require_cc_multi");
                  break;
                case (MR_Integer) 5:
                  mercury__io__write_string_3_p_0((MR_String) "require_cc_nondet");
                  break;
                case (MR_Integer) 0:
                  mercury__io__write_string_3_p_0((MR_String) "require_det");
                  break;
                case (MR_Integer) 6:
                  mercury__io__write_string_3_p_0((MR_String) "require_erroneous");
                  break;
                case (MR_Integer) 7:
                  mercury__io__write_string_3_p_0((MR_String) "require_failure");
                  break;
                case (MR_Integer) 2:
                  mercury__io__write_string_3_p_0((MR_String) "require_multi");
                  break;
                case (MR_Integer) 3:
                  mercury__io__write_string_3_p_0((MR_String) "require_nondet");
                  break;
                case (MR_Integer) 1:
                  mercury__io__write_string_3_p_0((MR_String) "require_semidet");
                  break;
              }
              mercury__io__write_string_3_p_0((MR_String) " (\n");
              STATE_VARIABLE_Info_130_130 = STATE_VARIABLE_Info_0_44;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_20, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "require_complete_switch [");
              parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, VarNamePrint_15, Var_28);
              mercury__io__write_string_3_p_0((MR_String) "] (\n");
              STATE_VARIABLE_Info_130_130 = STATE_VARIABLE_Info_0_44;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Detism_237 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_20, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_Word Var_238 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_20, (MR_Integer) 1))));

              switch (Detism_237) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 4:
                  mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_cc_multi");
                  break;
                case (MR_Integer) 5:
                  mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_cc_nondet");
                  break;
                case (MR_Integer) 0:
                  mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_det");
                  break;
                case (MR_Integer) 6:
                  mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_erroneous");
                  break;
                case (MR_Integer) 7:
                  mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_failure");
                  break;
                case (MR_Integer) 2:
                  mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_multi");
                  break;
                case (MR_Integer) 3:
                  mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_nondet");
                  break;
                case (MR_Integer) 1:
                  mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_semidet");
                  break;
              }
              mercury__io__write_string_3_p_0((MR_String) " [");
              parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, VarNamePrint_15, Var_238);
              mercury__io__write_string_3_p_0((MR_String) "] (\n");
              STATE_VARIABLE_Info_130_130 = STATE_VARIABLE_Info_0_44;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_274 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_20, (MR_Integer) 1))) & (MR_Integer) 1);

              switch (Var_274) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(\n");
                    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
                    mercury__io__write_string_3_p_0((MR_String) "% commit(dont_force_pruning)\n");
                    STATE_VARIABLE_Info_130_130 = STATE_VARIABLE_Info_0_44;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(\n");
                    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
                    mercury__io__write_string_3_p_0((MR_String) "% commit(force_pruning)\n");
                    STATE_VARIABLE_Info_130_130 = STATE_VARIABLE_Info_0_44;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Var_273 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_20, (MR_Integer) 1))) & (MR_Integer) 1);

              switch (Var_273) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(\n");
                    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
                    mercury__io__write_string_3_p_0((MR_String) "% barrier(not_removable)\n");
                    STATE_VARIABLE_Info_130_130 = STATE_VARIABLE_Info_0_44;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(\n");
                    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
                    mercury__io__write_string_3_p_0((MR_String) "% barrier(removable)\n");
                    STATE_VARIABLE_Info_130_130 = STATE_VARIABLE_Info_0_44;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_String DumpOptionsBackup_29;
              MR_Word Kind_239 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_20, (MR_Integer) 2))) & (MR_Integer) 3);
              MR_Word Var_240 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_20, (MR_Integer) 1))));
              MR_Word Var_242;
              MR_Word Var_243;
              MR_Word Var_244;

              mercury__io__write_string_3_p_0((MR_String) "(\n");
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
              mercury__io__write_string_3_p_0((MR_String) "% from_ground_term [");
              parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, VarNamePrint_15, Var_240);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              switch (Kind_239) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  mercury__io__write_string_3_p_0((MR_String) "construct");
                  break;
                case (MR_Integer) 2:
                  mercury__io__write_string_3_p_0((MR_String) "deconstruct");
                  break;
                case (MR_Integer) 0:
                  mercury__io__write_string_3_p_0((MR_String) "initial");
                  break;
                case (MR_Integer) 3:
                  mercury__io__write_string_3_p_0((MR_String) "other");
                  break;
              }
              mercury__io__write_string_3_p_0((MR_String) "]\n");
              DumpOptionsBackup_29 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_44, (MR_Integer) 1))));
              Var_242 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_44, (MR_Integer) 2))));
              Var_243 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_44, (MR_Integer) 3))));
              Var_244 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_44, (MR_Integer) 4))));
              {
                STATE_VARIABLE_Info_130_130 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_130_130, 0) = ((MR_Box) (DumpOptionsBackup_29));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_130_130, 1) = ((MR_Box) (DumpOptionsBackup_29));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_130_130, 2) = ((MR_Box) (Var_242));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_130_130, 3) = ((MR_Box) (Var_243));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_130_130, 4) = ((MR_Box) (Var_244));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word MaybeCompileTime_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_20, (MR_Integer) 1))));
              MR_Word MaybeRunTime_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_20, (MR_Integer) 2))));
              MR_Word MaybeIO_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_20, (MR_Integer) 3))));
              MR_Word MutableVars_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_20, (MR_Integer) 4))));
              MR_Word QuantVars_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_20, (MR_Integer) 5))));
              MR_Word STATE_VARIABLE_AddCommaNewline_71_71;
              MR_Word STATE_VARIABLE_AddCommaNewline_82_82;
              MR_Word STATE_VARIABLE_AddCommaNewline_95_95;
              MR_Word Var_96;
              MR_Integer Var_98;
              MR_Integer Var_101;
              MR_Box conv2_Var_39;
              MR_Box conv1_STATE_VARIABLE_IO_97_97;

              mercury__io__write_string_3_p_0((MR_String) "trace [\n");
              if ((MaybeCompileTime_30 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_AddCommaNewline_71_71 = (MR_Integer) 0;
              else
              {
                MR_Word CompileTime_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCompileTime_30, (MR_Integer) 0))));
                MR_Integer Var_62 = (MR_Integer) ((MR_Unsigned) Indent_16 + (MR_Unsigned) 1);

                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Var_62);
                mercury__io__write_string_3_p_0((MR_String) "compile_time(");
                parse_tree__parse_tree_out_clause__mercury_output_trace_expr_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_compiletime_0), (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_4[9]), CompileTime_36);
                mercury__io__write_string_3_p_0((MR_String) ")");
                STATE_VARIABLE_AddCommaNewline_71_71 = (MR_Integer) 1;
              }
              if ((MaybeRunTime_31 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_AddCommaNewline_82_82 = STATE_VARIABLE_AddCommaNewline_71_71;
              else
              {
                MR_Word RunTime_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRunTime_31, (MR_Integer) 0))));
                MR_Integer Var_73;

                hlds__hlds_out__hlds_out_goal__maybe_add_comma_newline_3_p_0(STATE_VARIABLE_AddCommaNewline_71_71);
                Var_73 = (MR_Integer) ((MR_Unsigned) Indent_16 + (MR_Unsigned) 1);
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Var_73);
                mercury__io__write_string_3_p_0((MR_String) "runtime(");
                parse_tree__parse_tree_out_clause__mercury_output_trace_expr_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0), (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_4[10]), RunTime_37);
                mercury__io__write_string_3_p_0((MR_String) ")");
                STATE_VARIABLE_AddCommaNewline_82_82 = (MR_Integer) 1;
              }
              if ((MaybeIO_32 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_AddCommaNewline_95_95 = STATE_VARIABLE_AddCommaNewline_82_82;
              else
              {
                MR_String IOStateVarName_38 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeIO_32, (MR_Integer) 0))));
                MR_Integer Var_83 = (MR_Integer) ((MR_Unsigned) Indent_16 + (MR_Unsigned) 1);
                MR_Integer Var_87;
                MR_String Var_90;
                MR_String Var_93;

                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Var_83);
                hlds__hlds_out__hlds_out_goal__maybe_add_comma_newline_3_p_0(STATE_VARIABLE_AddCommaNewline_82_82);
                Var_87 = (MR_Integer) ((MR_Unsigned) Indent_16 + (MR_Unsigned) 1);
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Var_87);
                Var_93 = mercury__string__f_43_43_2_f_0(IOStateVarName_38, (MR_String) ")");
                Var_90 = mercury__string__f_43_43_2_f_0((MR_String) "% io(!", Var_93);
                mercury__io__write_string_3_p_0(Var_90);
                STATE_VARIABLE_AddCommaNewline_95_95 = (MR_Integer) 1;
              }
              Var_98 = (MR_Integer) ((MR_Unsigned) Indent_16 + (MR_Unsigned) 1);
              {
                Var_96 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_96, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[0]));
                MR_hl_field(MR_mktag(0), Var_96, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0_3));
                MR_hl_field(MR_mktag(0), Var_96, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_96, 3) = ((MR_Box) (Var_98));
              }
              mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_96, MutableVars_33, ((MR_Box) (STATE_VARIABLE_AddCommaNewline_95_95)), &conv2_Var_39, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_97_97);
              mercury__io__nl_2_p_0();
              Var_101 = (MR_Integer) ((MR_Unsigned) Indent_16 + (MR_Unsigned) 1);
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Var_101);
              mercury__io__write_string_3_p_0((MR_String) "% quantified vars [");
              parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, VarNamePrint_15, QuantVars_34);
              mercury__io__write_string_3_p_0((MR_String) "]\n");
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
              mercury__io__write_string_3_p_0((MR_String) "] (\n");
              STATE_VARIABLE_Info_130_130 = STATE_VARIABLE_Info_0_44;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word LCVar_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_20, (MR_Integer) 1))));
              MR_Word LCSVar_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_20, (MR_Integer) 2))));
              MR_Word UseParentStack_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_20, (MR_Integer) 3))) & (MR_Integer) 1);
              MR_String UseParentStackStr_43;
              MR_Word Var_53;
              MR_Word Var_55;

              switch (UseParentStack_42) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  UseParentStackStr_43 = (MR_String) "using_child_stack";
                  break;
                case (MR_Integer) 0:
                  UseParentStackStr_43 = (MR_String) "using_parent_stack_frame";
                  break;
              }
              mercury__io__write_string_3_p_0((MR_String) "loop_control_spawn_off_");
              mercury__io__write_string_3_p_0(UseParentStackStr_43);
              mercury__io__write_string_3_p_0((MR_String) "(");
              {
                Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (LCSVar_41));
                MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (LCVar_40));
                MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_55));
              }
              parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, VarNamePrint_15, Var_53);
              mercury__io__write_string_3_p_0((MR_String) ") (\n");
              STATE_VARIABLE_Info_130_130 = STATE_VARIABLE_Info_0_44;
            }
            break;
        }
        break;
    }
    Var_228 = (MR_Integer) ((MR_Unsigned) Indent_16 + (MR_Unsigned) 1);
    hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(STATE_VARIABLE_Info_130_130, ModuleInfo_12, VarSet_13, TypeQual_14, VarNamePrint_15, Var_228, (MR_String) "\n", Goal_21);
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
    mercury__io__write_string_3_p_0((MR_String) ")");
    mercury__io__write_string_3_p_0(Follow_17);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_p_0(
  MR_Word Info_11,
  MR_Word ModuleInfo_12,
  MR_Word VarSet_13,
  MR_Word TypeQual_14,
  MR_Word VarNamePrint_15,
  MR_Integer Indent_16,
  MR_String Follow_17,
  MR_Word GoalExpr_18)
{
  {
    MR_bool succeeded;
    MR_Word Vars_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 1))));
    MR_Word Cond_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 2))));
    MR_Word Then_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 3))));
    MR_Word Else_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 4))));
    MR_Integer Indent1_24;
    MR_String DumpOptions_25;
    MR_Integer ElseIndent_31;
    MR_Word Var_51;

    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
    mercury__io__write_string_3_p_0((MR_String) "( if");
    if (!((Vars_20 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      mercury__io__write_string_3_p_0((MR_String) " some [");
      parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, (MR_Integer) 1, Vars_20);
      mercury__io__write_string_3_p_0((MR_String) "]");
    }
    mercury__io__write_string_3_p_0((MR_String) "\n");
    Indent1_24 = (MR_Integer) ((MR_Unsigned) Indent_16 + (MR_Unsigned) 1);
    hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(Info_11, ModuleInfo_12, VarSet_13, TypeQual_14, VarNamePrint_15, Indent1_24, (MR_String) "\n", Cond_21);
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
    mercury__io__write_string_3_p_0((MR_String) "then\n");
    hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(Info_11, ModuleInfo_12, VarSet_13, TypeQual_14, VarNamePrint_15, Indent1_24, (MR_String) "\n", Then_22);
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
    mercury__io__write_string_3_p_0((MR_String) "else\n");
    DumpOptions_25 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 0))));
    succeeded = (strcmp(DumpOptions_25, (MR_String) "") == 0);
    succeeded = !(succeeded);
    if (succeeded)
    {
      Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Else_23, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Var_51)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_51, (MR_Integer) 0)))) == (MR_Integer) 6)));
      if (succeeded)
      {
      }
    }
    if (succeeded)
      ElseIndent_31 = Indent_16;
    else
      ElseIndent_31 = Indent1_24;
    hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(Info_11, ModuleInfo_12, VarSet_13, TypeQual_14, VarNamePrint_15, ElseIndent_31, (MR_String) "\n", Else_23);
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
    mercury__io__write_string_3_p_0((MR_String) ")");
    mercury__io__write_string_3_p_0(Follow_17);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_negation_10_p_0(
  MR_Word Info_11,
  MR_Word ModuleInfo_12,
  MR_Word VarSet_13,
  MR_Word TypeQual_14,
  MR_Word VarNamePrint_15,
  MR_Integer Indent_16,
  MR_String Follow_17,
  MR_Word GoalExpr_18)
{
  {
    MR_Word Goal_20 = (MR_Word) ((MR_Word) (GoalExpr_18));
    MR_Integer Var_26;

    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
    mercury__io__write_string_3_p_0((MR_String) "not (\n");
    Var_26 = (MR_Integer) ((MR_Unsigned) Indent_16 + (MR_Unsigned) 1);
    hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(Info_11, ModuleInfo_12, VarSet_13, TypeQual_14, VarNamePrint_15, Var_26, (MR_String) "\n", Goal_20);
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
    mercury__io__write_string_3_p_0((MR_String) ")");
    mercury__io__write_string_3_p_0(Follow_17);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_switch_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_goal__write_alternative_cons_id_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_switch_10_p_0(
  MR_Word Info_11,
  MR_Word ModuleInfo_12,
  MR_Word VarSet_13,
  MR_Word TypeQual_14,
  MR_Word VarNamePrint_15,
  MR_Integer Indent_16,
  MR_String Follow_17,
  MR_Word GoalExpr_18)
{
  {
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 1))));
    MR_Word CanFail_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word CasesList_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 3))));
    MR_Integer Indent1_23;
    MR_String Var_31;

    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
    mercury__io__write_string_3_p_0((MR_String) "( % ");
    Var_31 = parse_tree__prog_out__can_fail_to_string_1_f_0(CanFail_21);
    mercury__io__write_string_3_p_0(Var_31);
    mercury__io__write_string_3_p_0((MR_String) " switch on \140");
    parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, VarNamePrint_15, Var_20);
    mercury__io__write_string_3_p_0((MR_String) "\'\n");
    Indent1_23 = (MR_Integer) ((MR_Unsigned) Indent_16 + (MR_Unsigned) 1);
    if ((CasesList_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent1_23);
      mercury__io__write_string_3_p_0((MR_String) "fail\n");
    }
    else
    {
      MR_Word Case_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CasesList_22, (MR_Integer) 0))));
      MR_Word Cases_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CasesList_22, (MR_Integer) 1))));
      MR_Word MainConsId_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_24, (MR_Integer) 0))));
      MR_Word OtherConsIds_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_24, (MR_Integer) 1))));
      MR_Word Goal_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_24, (MR_Integer) 2))));
      MR_String Var_69;
      MR_Box conv0_STATE_VARIABLE_IO_34_72;

      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent1_23);
      mercury__io__write_string_3_p_0((MR_String) "% ");
      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, VarNamePrint_15, Var_20);
      mercury__io__write_string_3_p_0((MR_String) " has functor ");
      Var_69 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(MainConsId_60);
      mercury__io__write_string_3_p_0(Var_69);
      mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_4[8]), OtherConsIds_61, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_34_72);
      mercury__io__write_string_3_p_0((MR_String) "\n");
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(Info_11, ModuleInfo_12, VarSet_13, TypeQual_14, VarNamePrint_15, Indent1_23, (MR_String) "\n", Goal_62);
      hlds__hlds_out__hlds_out_goal__write_cases_10_p_0(Info_11, ModuleInfo_12, VarSet_13, TypeQual_14, VarNamePrint_15, Indent_16, Var_20, Cases_25);
    }
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
    mercury__io__write_string_3_p_0((MR_String) ")");
    mercury__io__write_string_3_p_0(Follow_17);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_disj_10_p_0(
  MR_Word Info_11,
  MR_Word ModuleInfo_12,
  MR_Word VarSet_13,
  MR_Word TypeQual_14,
  MR_Word VarNamePrint_15,
  MR_Integer Indent_16,
  MR_String Follow_17,
  MR_Word GoalExpr_18)
{
  {
    MR_Word Disjuncts_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 1))));

    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
    if ((Disjuncts_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_3_p_0((MR_String) "fail");
      mercury__io__write_string_3_p_0(Follow_17);
    }
    else
    {
      MR_Word Goal_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Disjuncts_20, (MR_Integer) 0))));
      MR_Word Goals_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Disjuncts_20, (MR_Integer) 1))));
      MR_Integer Var_31;

      mercury__io__write_string_3_p_0((MR_String) "( % disjunction\n");
      Var_31 = (MR_Integer) ((MR_Unsigned) Indent_16 + (MR_Unsigned) 1);
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(Info_11, ModuleInfo_12, VarSet_13, TypeQual_14, VarNamePrint_15, Var_31, (MR_String) "\n", Goal_21);
      hlds__hlds_out__hlds_out_goal__write_goal_list_10_p_0(Info_11, ModuleInfo_12, VarSet_13, TypeQual_14, VarNamePrint_15, Indent_16, (MR_String) ";\n", Goals_22);
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
      mercury__io__write_string_3_p_0((MR_String) ")");
      mercury__io__write_string_3_p_0(Follow_17);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_p_0(
  MR_Word Info_11,
  MR_Word ModuleInfo_12,
  MR_Word VarSet_13,
  MR_Word TypeQual_14,
  MR_Word VarNamePrint_15,
  MR_Integer Indent_16,
  MR_String Follow_17,
  MR_Word GoalExpr_18)
{
  {
    MR_bool succeeded;
    MR_Word PredId_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_18, (MR_Integer) 0))));
    MR_Integer ProcId_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_18, (MR_Integer) 1))));
    MR_Word ArgVars_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_18, (MR_Integer) 2))));
    MR_Word Builtin_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr_18, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word MaybeUnifyContext_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_18, (MR_Integer) 4))));
    MR_Word PredName_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_18, (MR_Integer) 5))));
    MR_String DumpOptions_26 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 0))));
    MR_Word NewArgVars_30;
    MR_Word Var_81;

    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_26, (MR_Char) 98);
    if (succeeded)
      switch (Builtin_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
            mercury__io__write_string_3_p_0((MR_String) "% inline builtin\n");
          }
          break;
        case (MR_Integer) 1:
          {
          }
          break;
      }
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
    Var_81 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_20, Var_81);
    if (succeeded)
      NewArgVars_30 = ArgVars_22;
    else
    {
      MR_Word PredInfo_28;
      MR_Word Purity_29;
      MR_Word PredOrFunc_83;

      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_12, PredId_20, &PredInfo_28);
      hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_28, &Purity_29);
      PredOrFunc_83 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_28);
      parse_tree__prog_out__write_purity_prefix_3_p_0(Purity_29);
      switch (PredOrFunc_83) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word LHSVar_31;
            MR_Box conv0_LHSVar_31;

            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), ArgVars_22, &NewArgVars_30, &conv0_LHSVar_31);
            LHSVar_31 = ((MR_Word) (conv0_LHSVar_31));
            parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, VarNamePrint_15, LHSVar_31);
            mercury__io__write_string_3_p_0((MR_String) " = ");
          }
          break;
        case (MR_Integer) 0:
          NewArgVars_30 = ArgVars_22;
          break;
      }
    }
    hlds__hlds_out__hlds_out_goal__write_sym_name_and_args_6_p_0(VarSet_13, VarNamePrint_15, PredName_25, NewArgVars_30);
    mercury__io__write_string_3_p_0(Follow_17);
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_26, (MR_Char) 108);
    if (succeeded)
    {
      MR_Integer PredNum_32;
      MR_Integer ProcNum_33;

      hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_20, &PredNum_32);
      hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_21, &ProcNum_33);
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
      mercury__io__write_string_3_p_0((MR_String) "% pred id: ");
      mercury__io__write_int_3_p_0(PredNum_32);
      mercury__io__write_string_3_p_0((MR_String) ", proc id: ");
      mercury__io__write_int_3_p_0(ProcNum_33);
      mercury__io__write_string_3_p_0(Follow_17);
      if (!((MaybeUnifyContext_24 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word CallUnifyContext_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeUnifyContext_24, (MR_Integer) 0))));
        MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallUnifyContext_34, (MR_Integer) 0))));
        MR_Word VarType_39;
        MR_Word RHS_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallUnifyContext_34, (MR_Integer) 1))));
        MR_Word InstVarSet_42;

        if ((TypeQual_14 == (MR_Word) ((MR_Unsigned) 0U)))
          VarType_39 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word VarTypes_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeQual_14, (MR_Integer) 1))));
          MR_Word UniType_38;

          hlds__vartypes__lookup_var_type_3_p_0(VarTypes_36, Var_37, &UniType_38);
          {
            VarType_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), VarType_39, 0) = ((MR_Box) (UniType_38));
          }
        }
        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
        mercury__io__write_string_3_p_0((MR_String) "% unify context: ");
        parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, VarNamePrint_15, Var_37);
        mercury__io__write_string_3_p_0((MR_String) " = ");
        mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_42);
        hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_11_p_0(Info_11, ModuleInfo_12, VarSet_13, InstVarSet_42, TypeQual_14, VarNamePrint_15, Indent_16, VarType_39, RHS_40);
        mercury__io__write_string_3_p_0(Follow_17);
      }
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_11_p_0(
  MR_Word Info_12,
  MR_Word ModuleInfo_13,
  MR_Word VarSet_14,
  MR_Word InstVarSet_15,
  MR_Word TypeQual_16,
  MR_Word VarNamePrint_17,
  MR_Integer Indent_18,
  MR_Word MaybeType_19,
  MR_Word RHS_20)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) RHS_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHS_20, (MR_Integer) 0))));

          parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_14, VarNamePrint_17, Var_22);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ConsId0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_20, (MR_Integer) 0))));
          MR_Word IsExistConstruct_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), RHS_20, (MR_Integer) 1))) & (MR_Integer) 1);
          MR_Word ArgVars_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_20, (MR_Integer) 2))));
          MR_Word ConsId_30;
          MR_Word SymName0_26;
          MR_Integer Arity_27;
          MR_Word TypeCtor_28;
          MR_Word Type_31;
          MR_Word TVarSet_32;

          succeeded = (IsExistConstruct_24 == (MR_Integer) 1);
          if (succeeded)
          {
            succeeded = ((((MR_tag((MR_Word) ConsId0_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId0_23, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              SymName0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId0_23, (MR_Integer) 1))));
              Arity_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId0_23, (MR_Integer) 2))));
              TypeCtor_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId0_23, (MR_Integer) 3))));
            }
          }
          if (succeeded)
          {
            MR_Word SymName_29;

            parse_tree__prog_type__add_new_prefix_2_p_0(SymName0_26, &SymName_29);
            {
              ConsId_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ConsId_30, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), ConsId_30, 1) = ((MR_Box) (SymName_29));
              MR_hl_field(MR_mktag(3), ConsId_30, 2) = ((MR_Box) (Arity_27));
              MR_hl_field(MR_mktag(3), ConsId_30, 3) = ((MR_Box) (TypeCtor_28));
            }
          }
          else
            ConsId_30 = ConsId0_23;
          hlds__hlds_out__hlds_out_util__write_functor_cons_id_7_p_0(ModuleInfo_13, VarSet_14, VarNamePrint_17, ConsId_30, ArgVars_25);
          succeeded = (MaybeType_19 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Type_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeType_19, (MR_Integer) 0))));
            succeeded = (TypeQual_16 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              TVarSet_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeQual_16, (MR_Integer) 0))));
          }
          if (succeeded)
          {
            mercury__io__write_string_3_p_0((MR_String) " : ");
            parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(TVarSet_32, VarNamePrint_17, Type_31);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Purity_34 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS_20, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
          MR_Word Groundness_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS_20, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
          MR_Word PredOrFunc_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS_20, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word NonLocals_38 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_20, (MR_Integer) 2))));
          MR_Word Vars_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_20, (MR_Integer) 3))));
          MR_Word Modes_40 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_20, (MR_Integer) 4))));
          MR_Word Det_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS_20, (MR_Integer) 5))) & (MR_Integer) 7);
          MR_Word Goal_42 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_20, (MR_Integer) 6))));
          MR_Integer Indent1_43 = (MR_Integer) ((MR_Unsigned) Indent_18 + (MR_Unsigned) 1);
          MR_String DumpOptions_53;
          MR_Word Type_134;
          MR_Word TVarSet_135;

          parse_tree__prog_out__write_purity_prefix_3_p_0(Purity_34);
          switch (Groundness_35) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              switch (PredOrFunc_36) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word ArgModes_47;
                    MR_Word RetMode_48;
                    MR_Word RetVar_49;
                    MR_Word Var_79;
                    MR_Word ArgVars_131;
                    MR_Box conv0_RetMode_48;
                    MR_Box conv1_RetVar_49;

                    parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_40, &ArgModes_47, &conv0_RetMode_48);
                    RetMode_48 = ((MR_Word) (conv0_RetMode_48));
                    parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), Vars_39, &ArgVars_131, &conv1_RetVar_49);
                    RetVar_49 = ((MR_Word) (conv1_RetVar_49));
                    mercury__io__write_string_3_p_0((MR_String) "(");
                    if ((ArgVars_131 == (MR_Word) ((MR_Unsigned) 0U)))
                      mercury__io__write_strings_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[6])));
                    else
                    {
                      mercury__io__write_strings_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[8])));
                      hlds__hlds_out__hlds_out_util__write_var_modes_7_p_0(VarSet_14, InstVarSet_15, VarNamePrint_17, ArgVars_131, ArgModes_47);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                    mercury__io__write_string_3_p_0((MR_String) " = (");
                    {
                      Var_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (RetVar_49));
                      MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (RetMode_48));
                    }
                    hlds__hlds_out__hlds_out_util__write_var_mode_6_p_0(VarSet_14, InstVarSet_15, VarNamePrint_17, Var_79);
                    mercury__io__write_string_3_p_0((MR_String) ") is ");
                    parse_tree__mercury_to_mercury__mercury_output_det_3_p_0(Det_41);
                    mercury__io__write_string_3_p_0((MR_String) " :-\n");
                    hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(Info_12, ModuleInfo_13, VarSet_14, TypeQual_16, VarNamePrint_17, Indent1_43, (MR_String) "\n", Goal_42);
                    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_18);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                    if ((Vars_39 == (MR_Word) ((MR_Unsigned) 0U)))
                      mercury__io__write_strings_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[10])));
                    else
                    {
                      mercury__io__write_strings_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[11])));
                      hlds__hlds_out__hlds_out_util__write_var_modes_7_p_0(VarSet_14, InstVarSet_15, VarNamePrint_17, Vars_39, Modes_40);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                    mercury__io__write_string_3_p_0((MR_String) " is ");
                    parse_tree__mercury_to_mercury__mercury_output_det_3_p_0(Det_41);
                    mercury__io__write_string_3_p_0((MR_String) " :-\n");
                    hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(Info_12, ModuleInfo_13, VarSet_14, TypeQual_16, VarNamePrint_17, Indent1_43, (MR_String) "\n", Goal_42);
                    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_18);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
              }
              break;
            case (MR_Integer) 0:
              switch (PredOrFunc_36) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word ArgModes_179;
                    MR_Word RetMode_180;
                    MR_Word RetVar_181;
                    MR_Word Var_202;
                    MR_Word ArgVars_213;
                    MR_Box conv2_RetMode_180;
                    MR_Box conv3_RetVar_181;

                    parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_40, &ArgModes_179, &conv2_RetMode_180);
                    RetMode_180 = ((MR_Word) (conv2_RetMode_180));
                    parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), Vars_39, &ArgVars_213, &conv3_RetVar_181);
                    RetVar_181 = ((MR_Word) (conv3_RetVar_181));
                    mercury__io__write_string_3_p_0((MR_String) "(");
                    if ((ArgVars_213 == (MR_Word) ((MR_Unsigned) 0U)))
                      mercury__io__write_strings_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[13])));
                    else
                    {
                      mercury__io__write_strings_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[14])));
                      hlds__hlds_out__hlds_out_util__write_var_modes_7_p_0(VarSet_14, InstVarSet_15, VarNamePrint_17, ArgVars_213, ArgModes_179);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                    mercury__io__write_string_3_p_0((MR_String) " = (");
                    {
                      Var_202 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_202, 0) = ((MR_Box) (RetVar_181));
                      MR_hl_field(MR_mktag(0), Var_202, 1) = ((MR_Box) (RetMode_180));
                    }
                    hlds__hlds_out__hlds_out_util__write_var_mode_6_p_0(VarSet_14, InstVarSet_15, VarNamePrint_17, Var_202);
                    mercury__io__write_string_3_p_0((MR_String) ") is ");
                    parse_tree__mercury_to_mercury__mercury_output_det_3_p_0(Det_41);
                    mercury__io__write_string_3_p_0((MR_String) " :-\n");
                    hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(Info_12, ModuleInfo_13, VarSet_14, TypeQual_16, VarNamePrint_17, Indent1_43, (MR_String) "\n", Goal_42);
                    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_18);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                    if ((Vars_39 == (MR_Word) ((MR_Unsigned) 0U)))
                      mercury__io__write_strings_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[16])));
                    else
                    {
                      mercury__io__write_strings_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[17])));
                      hlds__hlds_out__hlds_out_util__write_var_modes_7_p_0(VarSet_14, InstVarSet_15, VarNamePrint_17, Vars_39, Modes_40);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                    mercury__io__write_string_3_p_0((MR_String) " is ");
                    parse_tree__mercury_to_mercury__mercury_output_det_3_p_0(Det_41);
                    mercury__io__write_string_3_p_0((MR_String) " :-\n");
                    hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(Info_12, ModuleInfo_13, VarSet_14, TypeQual_16, VarNamePrint_17, Indent1_43, (MR_String) "\n", Goal_42);
                    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_18);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
              }
              break;
          }
          succeeded = (MaybeType_19 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Type_134 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeType_19, (MR_Integer) 0))));
            succeeded = (TypeQual_16 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              TVarSet_135 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeQual_16, (MR_Integer) 0))));
          }
          if (succeeded)
          {
            mercury__io__write_string_3_p_0((MR_String) " : ");
            parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(TVarSet_135, VarNamePrint_17, Type_134);
          }
          DumpOptions_53 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 0))));
          succeeded = mercury__string__contains_char_2_p_0(DumpOptions_53, (MR_Char) 110);
          if (succeeded)
            if (!((NonLocals_38 == (MR_Word) ((MR_Unsigned) 0U))))
            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent1_43);
              mercury__io__write_string_3_p_0((MR_String) "% lambda nonlocals: ");
              parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_14, VarNamePrint_17, NonLocals_38);
            }
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_unify_10_p_0(
  MR_Word Info_11,
  MR_Word ModuleInfo_12,
  MR_Word VarSet_13,
  MR_Word TypeQual_14,
  MR_Word VarNamePrint_15,
  MR_Integer Indent_16,
  MR_String Follow_17,
  MR_Word GoalExpr_18)
{
  {
    MR_bool succeeded;
    MR_Word LHS_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_18, (MR_Integer) 0))));
    MR_Word RHS_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_18, (MR_Integer) 1))));
    MR_Word Unification_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_18, (MR_Integer) 3))));
    MR_String DumpOptions_25 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 0))));
    MR_Word VarType_29;
    MR_Word InstVarSet_30;

    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
    parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, VarNamePrint_15, LHS_20);
    mercury__io__write_string_3_p_0((MR_String) " = ");
    if ((TypeQual_14 == (MR_Word) ((MR_Unsigned) 0U)))
      VarType_29 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word VarTypes_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeQual_14, (MR_Integer) 1))));
      MR_Word UniType_28;

      hlds__vartypes__lookup_var_type_3_p_0(VarTypes_27, LHS_20, &UniType_28);
      {
        VarType_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), VarType_29, 0) = ((MR_Box) (UniType_28));
      }
    }
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_30);
    hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_11_p_0(Info_11, ModuleInfo_12, VarSet_13, InstVarSet_30, TypeQual_14, VarNamePrint_15, Indent_16, VarType_29, RHS_21);
    mercury__io__write_string_3_p_0(Follow_17);
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_25, (MR_Char) 117);
    if (!(succeeded))
      succeeded = mercury__string__contains_char_2_p_0(DumpOptions_25, (MR_Char) 112);
    if (succeeded)
    {
      MR_Word ComplMode_31;
      MR_Word CanFail_32;
      MR_Word TypeInfoVars_33;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_47;

      succeeded = ((((MR_tag((MR_Word) Unification_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Unification_23, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        ComplMode_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_23, (MR_Integer) 1))));
        CanFail_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Unification_23, (MR_Integer) 2))) & (MR_Integer) 1);
        TypeInfoVars_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_23, (MR_Integer) 3))));
        succeeded = (CanFail_32 == (MR_Integer) 0);
        if (succeeded)
        {
          Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ComplMode_31, (MR_Integer) 0))));
          Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ComplMode_31, (MR_Integer) 1))));
          Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ComplMode_31, (MR_Integer) 2))));
          Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ComplMode_31, (MR_Integer) 3))));
          succeeded = (Var_44 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = (Var_45 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = (Var_46 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
                succeeded = (Var_47 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
          if (succeeded)
            succeeded = (TypeInfoVars_33 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
      if (!(succeeded))
        hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_9_p_0(Info_11, VarSet_13, InstVarSet_30, VarNamePrint_15, Indent_16, Unification_23);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mercury__io__write_string_3_p_0(((MR_String) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__333__1_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__329__1_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__325__1_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__321__1_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__317__1_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(
  MR_Word Info_11,
  MR_Word ModuleInfo_12,
  MR_Word VarSet_13,
  MR_Word TypeQual_14,
  MR_Word VarNamePrint_15,
  MR_Integer Indent_16,
  MR_String Follow_17,
  MR_Word Goal_18)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_18, (MR_Integer) 0))));
    MR_Word GoalInfo_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_18, (MR_Integer) 1))));
    MR_String DumpOptions_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 0))));
    MR_Word CodeGenInfo_81;

    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_22, (MR_Char) 99);
    if (succeeded)
    {
      MR_Word Context_23;
      MR_String FileName_24;
      MR_Integer LineNumber_25;

      Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_21);
      mercury__term__context_file_2_p_0(Context_23, &FileName_24);
      mercury__term__context_line_2_p_0(Context_23, &LineNumber_25);
      succeeded = (strcmp(FileName_24, (MR_String) "") == 0);
      if (!(succeeded))
      {
        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
        mercury__io__write_string_3_p_0((MR_String) "% context: file \140");
        mercury__io__write_string_3_p_0(FileName_24);
        mercury__io__write_string_3_p_0((MR_String) "\', line ");
        mercury__io__write_int_3_p_0(LineNumber_25);
        mercury__io__write_string_3_p_0((MR_String) "\n");
      }
    }
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_22, (MR_Char) 80);
    if (succeeded)
    {
      MR_Word GoalId_26;
      MR_Integer GoalIdNum_27;

      GoalId_26 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_21);
      GoalIdNum_27 = (MR_Integer) (GoalId_26);
      succeeded = (GoalIdNum_27 < (MR_Integer) 0);
      if (!(succeeded))
      {
        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
        mercury__io__write_string_3_p_0((MR_String) "% goal id: ");
        mercury__io__write_int_3_p_0(GoalIdNum_27);
        mercury__io__write_string_3_p_0((MR_String) "\n");
      }
    }
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_22, (MR_Char) 110);
    if (succeeded)
    {
      MR_Word NonLocalsSet_28;
      MR_Word NonLocalsList_29;

      NonLocalsSet_28 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_21);
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsSet_28, &NonLocalsList_29);
      if (!((NonLocalsList_29 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
        mercury__io__write_string_3_p_0((MR_String) "% nonlocals: ");
        parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, VarNamePrint_15, NonLocalsList_29);
        mercury__io__write_string_3_p_0((MR_String) "\n");
      }
    }
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_22, (MR_Char) 112);
    if (succeeded)
    {
      MR_Word PreDeathList_33;
      MR_Word TypeCtorInfo_306_306;
      MR_Word PreDeaths_32;
      MR_Word PreBirthList_37;
      MR_Word TypeCtorInfo_308_308;
      MR_Word PreBirths_36;

      succeeded = hlds__hlds_llds__goal_info_maybe_get_pre_deaths_2_p_0(GoalInfo_21, &PreDeaths_32);
      if (succeeded)
      {
        TypeCtorInfo_306_306 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        PreDeathList_33 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_306_306, PreDeaths_32);
        succeeded = (PreDeathList_33 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
        mercury__io__write_string_3_p_0((MR_String) "% pre-deaths: ");
        parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, VarNamePrint_15, PreDeathList_33);
        mercury__io__write_string_3_p_0((MR_String) "\n");
      }
      succeeded = hlds__hlds_llds__goal_info_maybe_get_pre_births_2_p_0(GoalInfo_21, &PreBirths_36);
      if (succeeded)
      {
        TypeCtorInfo_308_308 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        PreBirthList_37 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_308_308, PreBirths_36);
        succeeded = (PreBirthList_37 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
        mercury__io__write_string_3_p_0((MR_String) "% pre-births: ");
        parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, VarNamePrint_15, PreBirthList_37);
        mercury__io__write_string_3_p_0((MR_String) "\n");
      }
    }
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_22, (MR_Char) 66);
    if (succeeded)
    {
      MR_Word ProducingVars_40;
      MR_Word ConsumingVars_42;
      MR_Word MakeVisibleVars_44;
      MR_Word NeedVisibleVars_46;

      ProducingVars_40 = hlds__hlds_goal__producing_vars_1_f_0(GoalInfo_21);
      succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProducingVars_40);
      if (succeeded)
      {
        MR_Word ProducingVarsList_41;

        parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProducingVars_40, &ProducingVarsList_41);
        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
        mercury__io__write_string_3_p_0((MR_String) "% producing vars: ");
        parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, VarNamePrint_15, ProducingVarsList_41);
        mercury__io__write_string_3_p_0((MR_String) "\n");
      }
      ConsumingVars_42 = hlds__hlds_goal__consuming_vars_1_f_0(GoalInfo_21);
      succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsumingVars_42);
      if (succeeded)
      {
        MR_Word ConsumingVarsList_43;

        parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsumingVars_42, &ConsumingVarsList_43);
        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
        mercury__io__write_string_3_p_0((MR_String) "% consuming vars: ");
        parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, VarNamePrint_15, ConsumingVarsList_43);
        mercury__io__write_string_3_p_0((MR_String) "\n");
      }
      MakeVisibleVars_44 = hlds__hlds_goal__make_visible_vars_1_f_0(GoalInfo_21);
      succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MakeVisibleVars_44);
      if (succeeded)
      {
        MR_Word MakeVisibleVarsList_45;

        parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MakeVisibleVars_44, &MakeVisibleVarsList_45);
        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
        mercury__io__write_string_3_p_0((MR_String) "% make_visible vars: ");
        parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, VarNamePrint_15, MakeVisibleVarsList_45);
        mercury__io__write_string_3_p_0((MR_String) "\n");
      }
      NeedVisibleVars_46 = hlds__hlds_goal__need_visible_vars_1_f_0(GoalInfo_21);
      succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NeedVisibleVars_46);
      if (succeeded)
      {
        MR_Word NeedVisibleVarsList_47;

        parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NeedVisibleVars_46, &NeedVisibleVarsList_47);
        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
        mercury__io__write_string_3_p_0((MR_String) "% need_visible vars: ");
        parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, VarNamePrint_15, NeedVisibleVarsList_47);
        mercury__io__write_string_3_p_0((MR_String) "\n");
      }
    }
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_22, (MR_Char) 100);
    if (succeeded)
    {
      MR_Word Determinism_48;
      MR_String Var_156;

      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
      mercury__io__write_string_3_p_0((MR_String) "% determinism: ");
      Determinism_48 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_21);
      Var_156 = parse_tree__prog_out__determinism_to_string_1_f_0(Determinism_48);
      mercury__io__write_string_3_p_0(Var_156);
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_22, (MR_Char) 101);
    if (succeeded)
    {
      MR_Word MaybeRbmmInfo_49;

      MaybeRbmmInfo_49 = hlds__hlds_goal__goal_info_get_maybe_rbmm_1_f_0(GoalInfo_21);
      if (!((MaybeRbmmInfo_49 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word RbmmInfo_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRbmmInfo_49, (MR_Integer) 0))));
        MR_Word Created_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RbmmInfo_50, (MR_Integer) 0))));
        MR_Word Removed_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RbmmInfo_50, (MR_Integer) 1))));
        MR_Word Carried_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RbmmInfo_50, (MR_Integer) 2))));
        MR_Word Alloc_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RbmmInfo_50, (MR_Integer) 3))));
        MR_Word Used_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RbmmInfo_50, (MR_Integer) 4))));
        MR_Word Var_164;
        MR_Word Var_172;
        MR_Word Var_180;
        MR_Word Var_188;
        MR_Word Var_196;

        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
        mercury__io__write_string_3_p_0((MR_String) "% Created regions: ");
        Var_164 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), Created_51);
        mercury__io__write_list_5_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), Var_164, (MR_String) ", ", (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_4[2]));
        mercury__io__nl_2_p_0();
        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
        mercury__io__write_string_3_p_0((MR_String) "% Removed regions: ");
        Var_172 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), Removed_52);
        mercury__io__write_list_5_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), Var_172, (MR_String) ", ", (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_4[3]));
        mercury__io__nl_2_p_0();
        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
        mercury__io__write_string_3_p_0((MR_String) "% Carried regions: ");
        Var_180 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), Carried_53);
        mercury__io__write_list_5_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), Var_180, (MR_String) ", ", (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_4[4]));
        mercury__io__nl_2_p_0();
        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
        mercury__io__write_string_3_p_0((MR_String) "% Allocated into regions: ");
        Var_188 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), Alloc_54);
        mercury__io__write_list_5_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), Var_188, (MR_String) ", ", (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_4[5]));
        mercury__io__nl_2_p_0();
        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
        mercury__io__write_string_3_p_0((MR_String) "% Used regions: ");
        Var_196 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), Used_55);
        mercury__io__write_list_5_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), Var_196, (MR_String) ", ", (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_4[6]));
        mercury__io__nl_2_p_0();
      }
    }
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_22, (MR_Char) 122);
    if (succeeded)
    {
      MR_Word Purity_56;

      Purity_56 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo_21);
      switch (Purity_56) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          {
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
            mercury__io__write_string_3_p_0((MR_String) "% impure\n");
          }
          break;
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
            mercury__io__write_string_3_p_0((MR_String) "% semipure\n");
          }
          break;
      }
    }
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_22, (MR_Char) 69);
    if (succeeded)
    {
      MR_Word MaybeDPInfo_57;

      MaybeDPInfo_57 = hlds__hlds_goal__goal_info_get_maybe_dp_info_1_f_0(GoalInfo_21);
      if (!((MaybeDPInfo_57 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word MdprofInst_58;
        MR_Word MaybeDPCoverageInfo_59;
        MR_Word Var_209 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDPInfo_57, (MR_Integer) 0))));

        MdprofInst_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_209, (MR_Integer) 0))) & (MR_Integer) 1);
        MaybeDPCoverageInfo_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_209, (MR_Integer) 1))));
        switch (MdprofInst_58) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
              mercury__io__write_string_3_p_0((MR_String) "% mdprof instrumentation\n");
            }
            break;
          case (MR_Integer) 1:
            {
            }
            break;
        }
        if (!((MaybeDPCoverageInfo_59 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word CoverageInfo_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDPCoverageInfo_59, (MR_Integer) 0))));
          MR_Word IsTrivial_61 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), CoverageInfo_60, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
          MR_Word PortCountsGiveCoverageAfter_62 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), CoverageInfo_60, (MR_Integer) 0))) & (MR_Integer) 1);

          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
          switch (IsTrivial_61) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              mercury__io__write_string_3_p_0((MR_String) "% nontrivial goal\n");
              break;
            case (MR_Integer) 0:
              mercury__io__write_string_3_p_0((MR_String) "% trivial goal\n");
              break;
          }
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
          switch (PortCountsGiveCoverageAfter_62) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              mercury__io__write_string_3_p_0((MR_String) "% no port counts give coverage after\n");
              break;
            case (MR_Integer) 0:
              mercury__io__write_string_3_p_0((MR_String) "% port counts give coverage after\n");
              break;
          }
        }
      }
    }
    hlds__hlds_out__hlds_out_goal__write_goal_expr_10_p_0(Info_11, ModuleInfo_12, VarSet_13, TypeQual_14, VarNamePrint_15, Indent_16, Follow_17, GoalExpr_20);
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_22, (MR_Char) 105);
    if (succeeded)
    {
      MR_Word InstMapDelta_63;
      MR_Word TypeCtorInfo_339_339;
      MR_Word Vars_64;

      InstMapDelta_63 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_21);
      succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstMapDelta_63);
      if (succeeded)
      {
        hlds__instmap__instmap_delta_changed_vars_2_p_0(InstMapDelta_63, &Vars_64);
        TypeCtorInfo_339_339 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        succeeded = parse_tree__set_of_var__is_empty_1_p_0(TypeCtorInfo_339_339, Vars_64);
      }
      if (!(succeeded))
      {
        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
        succeeded = mercury__string__contains_char_2_p_0(DumpOptions_22, (MR_Char) 68);
        if (succeeded)
        {
          succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(InstMapDelta_63);
          if (succeeded)
            mercury__io__write_string_3_p_0((MR_String) "% new insts: unreachable\n");
          else
          {
            MR_Word NewVarInsts_65;

            mercury__io__write_string_3_p_0((MR_String) "% new insts:\n");
            hlds__instmap__instmap_delta_to_assoc_list_2_p_0(InstMapDelta_63, &NewVarInsts_65);
            hlds__hlds_out__hlds_out_goal__write_new_var_inst_list_6_p_0(VarSet_13, VarNamePrint_15, Indent_16, NewVarInsts_65);
          }
        }
        else
        {
          mercury__io__write_string_3_p_0((MR_String) "% vars with new insts: ");
          hlds__hlds_out__hlds_out_goal__write_instmap_delta_vars_5_p_0(VarSet_13, VarNamePrint_15, InstMapDelta_63);
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
    }
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_22, (MR_Char) 112);
    if (succeeded)
    {
      MR_Word PostDeathList_67;
      MR_Word TypeCtorInfo_340_340;
      MR_Word PostDeaths_66;
      MR_Word PostBirthList_71;
      MR_Word TypeCtorInfo_342_342;
      MR_Word PostBirths_70;

      succeeded = hlds__hlds_llds__goal_info_maybe_get_post_deaths_2_p_0(GoalInfo_21, &PostDeaths_66);
      if (succeeded)
      {
        TypeCtorInfo_340_340 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        PostDeathList_67 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_340_340, PostDeaths_66);
        succeeded = (PostDeathList_67 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
        mercury__io__write_string_3_p_0((MR_String) "% post-deaths: ");
        parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, VarNamePrint_15, PostDeathList_67);
        mercury__io__write_string_3_p_0((MR_String) "\n");
      }
      succeeded = hlds__hlds_llds__goal_info_maybe_get_post_births_2_p_0(GoalInfo_21, &PostBirths_70);
      if (succeeded)
      {
        TypeCtorInfo_342_342 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        PostBirthList_71 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_342_342, PostBirths_70);
        succeeded = (PostBirthList_71 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
        mercury__io__write_string_3_p_0((MR_String) "% post-births: ");
        parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, VarNamePrint_15, PostBirthList_71);
        mercury__io__write_string_3_p_0((MR_String) "\n");
      }
    }
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_22, (MR_Char) 82);
    if (succeeded)
    {
      MR_Word ReuseDescription_76;
      MR_Word ListLFU_77;
      MR_Word ListLBU_78;
      MR_Word TypeCtorInfo_344_344;
      MR_Word LFU_74;
      MR_Word LBU_75;
      MR_Word Var_251;
      MR_Word Var_252;
      MR_Word Var_253;

      Var_251 = hlds__hlds_goal__goal_info_get_maybe_lfu_1_f_0(GoalInfo_21);
      succeeded = (Var_251 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        LFU_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_251, (MR_Integer) 0))));
        Var_252 = hlds__hlds_goal__goal_info_get_maybe_lbu_1_f_0(GoalInfo_21);
        succeeded = (Var_252 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          LBU_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_252, (MR_Integer) 0))));
          Var_253 = hlds__hlds_goal__goal_info_get_maybe_reuse_1_f_0(GoalInfo_21);
          succeeded = (Var_253 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ReuseDescription_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_253, (MR_Integer) 0))));
            TypeCtorInfo_344_344 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            parse_tree__set_of_var__to_sorted_list_2_p_0(TypeCtorInfo_344_344, LFU_74, &ListLFU_77);
            parse_tree__set_of_var__to_sorted_list_2_p_0(TypeCtorInfo_344_344, LBU_75, &ListLBU_78);
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
      {
        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
        mercury__io__write_string_3_p_0((MR_String) "% LFU: ");
        parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, VarNamePrint_15, ListLFU_77);
        mercury__io__write_string_3_p_0((MR_String) "\n");
        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
        mercury__io__write_string_3_p_0((MR_String) "% LBU: ");
        parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, VarNamePrint_15, ListLBU_78);
        mercury__io__write_string_3_p_0((MR_String) "\n");
        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
        mercury__io__write_string_3_p_0((MR_String) "% Reuse: ");
        switch (MR_tag((MR_Word) ReuseDescription_76)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ReuseDescription_76)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                mercury__io__write_string_3_p_0((MR_String) "no reuse info");
                break;
              case (MR_Integer) 1:
                mercury__io__write_string_3_p_0((MR_String) "no possible reuse");
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Messages_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReuseDescription_76, (MR_Integer) 0))));

              mercury__io__write_string_3_p_0((MR_String) "missed (");
              mercury__io__write_list_5_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Messages_79, (MR_String) ", ", (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_4[7]));
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ShortReuseDescr_80 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReuseDescription_76, (MR_Integer) 0))));

              mercury__io__write_string_3_p_0((MR_String) "potential reuse (");
              hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_p_0(ShortReuseDescr_80, VarSet_13, VarNamePrint_15);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ShortReuseDescr_300 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReuseDescription_76, (MR_Integer) 0))));

              mercury__io__write_string_3_p_0((MR_String) "reuse (");
              hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_p_0(ShortReuseDescr_300, VarSet_13, VarNamePrint_15);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
        }
        mercury__io__write_string_3_p_0((MR_String) "\n");
      }
    }
    CodeGenInfo_81 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(GoalInfo_21);
    if (!((CodeGenInfo_81 == (MR_Word) ((MR_Unsigned) 0U))))
      hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_p_0(Info_11, GoalInfo_21, VarSet_13, VarNamePrint_15, Indent_16);
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_22, (MR_Char) 103);
    if (succeeded)
    {
      MR_Word Features_83;
      MR_Word FeatureList_84;

      Features_83 = hlds__hlds_goal__goal_info_get_features_1_f_0(GoalInfo_21);
      mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0), Features_83, &FeatureList_84);
      if (!((FeatureList_84 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
        mercury__io__write_string_3_p_0((MR_String) "% Goal features:  ");
        mercury__io__write_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[1]), ((MR_Box) (FeatureList_84)));
        mercury__io__write_string_3_p_0((MR_String) "\n");
      }
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_52_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__parse_tree_out_clause__mercury_output_trace_runtime_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_52_93_95_48_10_p_0(
  MR_Word ModuleInfo_12,
  MR_Word VarSet_13,
  MR_Word VarNamePrint_15,
  MR_Integer Indent_16,
  MR_String Follow_17,
  MR_Word GoalExpr_18)
{
  {
    MR_Word Attributes_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 1))));
    MR_Word PredId_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 2))));
    MR_Integer ProcId_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 3))));
    MR_Word Args_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 4))));
    MR_Word ExtraArgs_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 5))));
    MR_Word MaybeTraceRuntimeCond_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 6))));
    MR_Word PragmaCode_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 7))));
    MR_Word ForeignLang_27;
    MR_Integer PredIdInt_28;
    MR_Integer ProcIdInt_29;
    MR_Word TypeVarSet_31;
    MR_String Code_34;
    MR_String Var_41;

    ForeignLang_27 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attributes_20);
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
    mercury__io__write_string_3_p_0((MR_String) "\044pragma_foreign_proc(/* ");
    Var_41 = libs__globals__foreign_language_string_1_f_0(ForeignLang_27);
    mercury__io__write_string_3_p_0(Var_41);
    mercury__io__write_string_3_p_0((MR_String) " */, ");
    hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(ModuleInfo_12, PredId_21);
    mercury__io__write_string_3_p_0((MR_String) " pred ");
    hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_21, &PredIdInt_28);
    mercury__io__write_int_3_p_0(PredIdInt_28);
    mercury__io__write_string_3_p_0((MR_String) " proc ");
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_22, &ProcIdInt_29);
    mercury__io__write_int_3_p_0(ProcIdInt_29);
    mercury__io__write_string_3_p_0((MR_String) ",\n");
    if (!((MaybeTraceRuntimeCond_25 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word TraceRuntimeCond_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTraceRuntimeCond_25, (MR_Integer) 0))));

      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
      mercury__io__write_string_3_p_0((MR_String) "% trace_runtime_cond(");
      parse_tree__parse_tree_out_clause__mercury_output_trace_expr_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0), (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_4[1]), TraceRuntimeCond_30);
      mercury__io__write_string_3_p_0((MR_String) ")\n");
    }
    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_31);
    mercury__io__write_string_3_p_0((MR_String) "[");
    hlds__hlds_out__hlds_out_goal__write_foreign_args_6_p_0(VarSet_13, TypeVarSet_31, VarNamePrint_15, Args_23);
    mercury__io__write_string_3_p_0((MR_String) "],\n");
    if (!((ExtraArgs_24 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
      mercury__io__write_string_3_p_0((MR_String) "{");
      hlds__hlds_out__hlds_out_goal__write_foreign_args_6_p_0(VarSet_13, TypeVarSet_31, VarNamePrint_15, ExtraArgs_24);
      mercury__io__write_string_3_p_0((MR_String) "},\n");
    }
    Code_34 = ((MR_String) ((MR_hl_field(MR_mktag(0), PragmaCode_26, (MR_Integer) 0))));
    mercury__io__write_string_3_p_0((MR_String) "\"");
    mercury__io__write_string_3_p_0(Code_34);
    mercury__io__write_string_3_p_0((MR_String) "\"");
    mercury__io__write_string_3_p_0((MR_String) ")");
    mercury__io__write_string_3_p_0(Follow_17);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_foreign_args_6_p_0(
  MR_Word VarSet_1,
  MR_Word TVarSet_2,
  MR_Word VarNamePrint_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Arg_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Args_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_16, (MR_Integer) 0))));
      MR_Word MaybeNameMode_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_16, (MR_Integer) 1))));
      MR_Word Type_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_16, (MR_Integer) 2))));
      MR_Word BoxPolicy_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Arg_16, (MR_Integer) 3))) & (MR_Integer) 1);

      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_1, VarNamePrint_3, Var_19);
      if (!((MaybeNameMode_20 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_String Name_23;
        MR_Word Mode_24;
        MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameMode_20, (MR_Integer) 0))));
        MR_String Var_31;
        MR_String Var_34;
        MR_Word Var_53;

        Name_23 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 0))));
        Mode_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 1))));
        Var_34 = mercury__string__f_43_43_2_f_0(Name_23, (MR_String) "(");
        Var_31 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_34);
        mercury__io__write_string_3_p_0(Var_31);
        Var_53 = parse_tree__prog_mode__in_mode_0_f_0();
        succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(Mode_24, Var_53);
        if (succeeded)
          mercury__io__write_string_3_p_0((MR_String) "in");
        else
        {
          MR_Word Var_54;

          Var_54 = parse_tree__prog_mode__out_mode_0_f_0();
          succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(Mode_24, Var_54);
          if (succeeded)
            mercury__io__write_string_3_p_0((MR_String) "out");
          else
            mercury__io__write_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ((MR_Box) (Mode_24)));
        }
        mercury__io__write_string_3_p_0((MR_String) ")");
      }
      switch (BoxPolicy_22) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          mercury__io__write_string_3_p_0((MR_String) "\044alwaysboxed");
          break;
        case (MR_Integer) 0:
          {
          }
          break;
      }
      mercury__io__write_string_3_p_0((MR_String) "\100");
      parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(TVarSet_2, VarNamePrint_3, Type_21);
      if (!((Args_17 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word next_value_of_HeadVar__4_4;

        mercury__io__write_string_3_p_0((MR_String) ", ");
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__4_4 = Args_17;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_50_44_32_52_93_95_48_10_p_0(
  MR_Word Info_11,
  MR_Word VarSet_13,
  MR_Word VarNamePrint_15,
  MR_Integer Indent_16,
  MR_String Follow_17,
  MR_Word GoalExpr_18)
{
  {
    MR_bool succeeded;
    MR_Word GenericCall_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 1))));
    MR_Word ArgVars_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 2))));
    MR_Word Modes_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 3))));
    MR_Word MaybeArgRegs_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 4))));
    MR_String DumpOptions_25 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) GenericCall_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word PredVar_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GenericCall_20, (MR_Integer) 0))));
          MR_Word Purity_27 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), GenericCall_20, (MR_Integer) 1))) >> 1)) & (MR_Integer) 3);
          MR_Word PredOrFunc_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), GenericCall_20, (MR_Integer) 1))) & (MR_Integer) 1);

          switch (PredOrFunc_28) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word FuncArgVars_30;
                MR_Word FuncRetVar_31;
                MR_Word Var_94;
                MR_Box conv0_FuncRetVar_31;

                succeeded = mercury__string__contains_char_2_p_0(DumpOptions_25, (MR_Char) 108);
                if (succeeded)
                {
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
                  mercury__io__write_string_3_p_0((MR_String) "% higher-order function application\n");
                  hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0(Indent_16, MaybeArgRegs_23);
                }
                {
                  Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (PredVar_26));
                  MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (ArgVars_21));
                }
                parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), Var_94, &FuncArgVars_30, &conv0_FuncRetVar_31);
                FuncRetVar_31 = ((MR_Word) (conv0_FuncRetVar_31));
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
                parse_tree__prog_out__write_purity_prefix_3_p_0(Purity_27);
                parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, VarNamePrint_15, FuncRetVar_31);
                mercury__io__write_string_3_p_0((MR_String) " = ");
                hlds__hlds_out__hlds_out_util__write_functor_6_p_0(VarSet_13, VarNamePrint_15, (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[2]), FuncArgVars_30);
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word Var_111;

                succeeded = mercury__string__contains_char_2_p_0(DumpOptions_25, (MR_Char) 108);
                if (succeeded)
                {
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
                  mercury__io__write_string_3_p_0((MR_String) "% higher-order predicate call\n");
                  hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0(Indent_16, MaybeArgRegs_23);
                }
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
                parse_tree__prog_out__write_purity_prefix_3_p_0(Purity_27);
                {
                  Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (PredVar_26));
                  MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) (ArgVars_21));
                }
                hlds__hlds_out__hlds_out_util__write_functor_6_p_0(VarSet_13, VarNamePrint_15, (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[3]), Var_111);
              }
              break;
          }
          mercury__io__write_string_3_p_0(Follow_17);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TCInfoVar_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GenericCall_20, (MR_Integer) 0))));
          MR_Integer MethodNum_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), GenericCall_20, (MR_Integer) 1))));
          MR_Word Context_36;
          MR_Word TCInfoTerm_38;
          MR_Word MethodNumTerm_39;
          MR_Word ArgTerms_40;
          MR_Word Term_41;
          MR_Word Var_84;
          MR_Word Var_85;

          succeeded = mercury__string__contains_char_2_p_0(DumpOptions_25, (MR_Char) 108);
          if (succeeded)
          {
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
            mercury__io__write_string_3_p_0((MR_String) "% class method call\n");
            hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0(Indent_16, MaybeArgRegs_23);
          }
          mercury__term__context_init_1_p_0(&Context_36);
          {
            TCInfoTerm_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), TCInfoTerm_38, 0) = ((MR_Box) (TCInfoVar_32));
            MR_hl_field(MR_mktag(1), TCInfoTerm_38, 1) = ((MR_Box) (Context_36));
          }
          MethodNumTerm_39 = mercury__term__int_to_decimal_term_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MethodNum_33, Context_36);
          mercury__term__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_21, &ArgTerms_40);
          {
            Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (MethodNumTerm_39));
            MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (ArgTerms_40));
          }
          {
            Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (TCInfoTerm_38));
            MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Var_85));
          }
          {
            Term_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Term_41, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[1]));
            MR_hl_field(MR_mktag(0), Term_41, 1) = ((MR_Box) (Var_84));
            MR_hl_field(MR_mktag(0), Term_41, 2) = ((MR_Box) (Context_36));
          }
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
          parse_tree__parse_tree_out_term__mercury_output_term_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, VarNamePrint_15, Term_41);
          mercury__io__write_string_3_p_0(Follow_17);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String EventName_42 = ((MR_String) ((MR_hl_field(MR_mktag(2), GenericCall_20, (MR_Integer) 0))));
          MR_Word Context_115;
          MR_Word Functor_116;
          MR_Word ArgTerms_117;
          MR_Word Term_118;

          succeeded = mercury__string__contains_char_2_p_0(DumpOptions_25, (MR_Char) 108);
          if (succeeded)
          {
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
            mercury__io__write_string_3_p_0((MR_String) "% event call\n");
            hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0(Indent_16, MaybeArgRegs_23);
          }
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
          mercury__io__write_string_3_p_0((MR_String) "event ");
          mercury__term__context_init_1_p_0(&Context_115);
          {
            Functor_116 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Functor_116, 0) = ((MR_Box) (EventName_42));
          }
          mercury__term__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_21, &ArgTerms_117);
          {
            Term_118 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Term_118, 0) = ((MR_Box) (Functor_116));
            MR_hl_field(MR_mktag(0), Term_118, 1) = ((MR_Box) (ArgTerms_117));
            MR_hl_field(MR_mktag(0), Term_118, 2) = ((MR_Box) (Context_115));
          }
          parse_tree__parse_tree_out_term__mercury_output_term_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, VarNamePrint_15, Term_118);
          mercury__io__write_string_3_p_0(Follow_17);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word CastType_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GenericCall_20, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_String CastTypeString_44;
          MR_Word Context_119;
          MR_Word Functor_120;
          MR_Word ArgTerms_121;
          MR_Word Term_122;

          CastTypeString_44 = hlds__hlds_out__hlds_out_util__cast_type_to_string_1_f_0(CastType_43);
          succeeded = mercury__string__contains_char_2_p_0(DumpOptions_25, (MR_Char) 108);
          if (succeeded)
          {
            MR_Word Var_50;
            MR_Word Var_53;

            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
            {
              Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (CastTypeString_44));
              MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[3])));
            }
            {
              Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) ((MR_String) "% "));
              MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_53));
            }
            mercury__io__write_strings_3_p_0(Var_50);
            hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0(Indent_16, MaybeArgRegs_23);
          }
          succeeded = mercury__string__contains_char_2_p_0(DumpOptions_25, (MR_Char) 68);
          if (succeeded)
          {
            MR_Word InstVarSet_45;

            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
            mercury__io__write_string_3_p_0((MR_String) "% modes: ");
            mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_45);
            parse_tree__parse_tree_out_inst__mercury_output_mode_list_5_p_0((MR_Integer) 1, InstVarSet_45, Modes_22);
            mercury__io__nl_2_p_0();
          }
          {
            Functor_120 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Functor_120, 0) = ((MR_Box) (CastTypeString_44));
          }
          mercury__term__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_21, &ArgTerms_121);
          mercury__term__context_init_1_p_0(&Context_119);
          {
            Term_122 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Term_122, 0) = ((MR_Box) (Functor_120));
            MR_hl_field(MR_mktag(0), Term_122, 1) = ((MR_Box) (ArgTerms_121));
            MR_hl_field(MR_mktag(0), Term_122, 2) = ((MR_Box) (Context_119));
          }
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_16);
          parse_tree__parse_tree_out_term__mercury_output_term_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_13, VarNamePrint_15, Term_122);
          mercury__io__write_string_3_p_0(Follow_17);
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__hlds_out__hlds_out_goal__write_ho_arg_reg_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0(
  MR_Integer Indent_5,
  MR_Word MaybeArgRegs_6)
{
  if (!((MaybeArgRegs_6 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word ArgRegs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgRegs_6, (MR_Integer) 0))));

    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "% arg regs: ");
    mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0), ArgRegs_8, (MR_String) ", ", (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_4[0]));
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_6_p_0(
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_String CompName_9,
  MR_Word CompState_10)
{
  {
    MR_Word Var1_12;
    MR_Word Var2_13;

    mercury__io__write_string_3_p_0(CompName_9);
    mercury__io__write_string_3_p_0((MR_String) "(");
    Var1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CompState_10, (MR_Integer) 0))));
    Var2_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CompState_10, (MR_Integer) 1))));
    parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_7, VarNamePrint_8, Var1_12);
    mercury__io__write_string_3_p_0((MR_String) ", ");
    parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_7, VarNamePrint_8, Var2_13);
    mercury__io__write_string_3_p_0((MR_String) ")");
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__maybe_add_comma_newline_3_p_0(
  MR_Word AddCommaNewline_4)
{
  switch (AddCommaNewline_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      mercury__io__write_string_3_p_0((MR_String) ",\n");
      break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_sym_name_and_args_6_p_0(
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8,
  MR_Word PredName_9,
  MR_Word ArgVars_10)
{
  if (((MR_tag((MR_Word) PredName_9)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredName_9, (MR_Integer) 0))));
    MR_String Name_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), PredName_9, (MR_Integer) 1))));
    MR_Word Var_19;

    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (Name_13));
    }
    hlds__hlds_out__hlds_out_util__write_qualified_functor_7_p_0(VarSet_7, VarNamePrint_8, ModuleName_12, Var_19, ArgVars_10);
  }
  else
  {
    MR_Word Var_17;
    MR_String Name_21 = ((MR_String) ((MR_hl_field(MR_mktag(0), PredName_9, (MR_Integer) 0))));

    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (Name_21));
    }
    hlds__hlds_out__hlds_out_util__write_functor_maybe_needs_quotes_7_p_0(VarSet_7, VarNamePrint_8, (MR_Integer) 0, Var_17, ArgVars_10);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_9_p_0(
  MR_Word Info_10,
  MR_Word ProgVarSet_12,
  MR_Word InstVarSet_13,
  MR_Word VarNamePrint_14,
  MR_Integer Indent_15,
  MR_Word Unification_16)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Unification_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_16, (MR_Integer) 0))));
          MR_Word ConsId_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_16, (MR_Integer) 1))));
          MR_Word ArgVars_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_16, (MR_Integer) 2))));
          MR_Word ArgModes_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_16, (MR_Integer) 3))));
          MR_Word ConstructHow_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_16, (MR_Integer) 4))));
          MR_Word Uniqueness_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Unification_16, (MR_Integer) 5))) & (MR_Integer) 1);
          MR_Word SubInfo_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_16, (MR_Integer) 6))));
          MR_String DumpOptions_27;

          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_15);
          mercury__io__write_string_3_p_0((MR_String) "% ");
          parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarSet_12, VarNamePrint_14, Var_20);
          mercury__io__write_string_3_p_0((MR_String) " <= ");
          hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_50_93_95_48_11_p_0(Info_10, ProgVarSet_12, InstVarSet_13, VarNamePrint_14, Indent_15, ConsId_21, ArgVars_22, ArgModes_23);
          DumpOptions_27 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 0))));
          succeeded = mercury__string__contains_char_2_p_0(DumpOptions_27, (MR_Char) 117);
          if (succeeded)
          {
            MR_Word TypeCtor_30;

            succeeded = ((((MR_tag((MR_Word) ConsId_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_21, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              TypeCtor_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_21, (MR_Integer) 3))));
              {
                MR_Word TypeCtorSymName_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_30, (MR_Integer) 0))));
                MR_Integer TypeCtorArity_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_30, (MR_Integer) 1))));
                MR_String TypeCtorSymNameStr_33;
                MR_String Var_183;

                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_15);
                TypeCtorSymNameStr_33 = mdbcomp__sym_name__sym_name_to_string_1_f_0(TypeCtorSymName_31);
                mercury__io__write_string_3_p_0((MR_String) "% cons_id type_ctor: ");
                mercury__io__write_string_3_p_0(TypeCtorSymNameStr_33);
                mercury__io__write_string_3_p_0((MR_String) "/");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[0]), TypeCtorArity_32, &Var_183);
                mercury__io__write_string_3_p_0(Var_183);
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
            }
            switch (Uniqueness_25) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                }
                break;
              case (MR_Integer) 0:
                {
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_15);
                  mercury__io__write_string_3_p_0((MR_String) "% cell_is_unique\n");
                }
                break;
            }
            if (!((SubInfo_26 == (MR_Word) ((MR_Unsigned) 0U))))
            {
              MR_Word MaybeTakeAddr_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_26, (MR_Integer) 0))));
              MR_Word MaybeSize_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_26, (MR_Integer) 1))));

              if (!((MaybeTakeAddr_34 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word TakeAddressFields_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTakeAddr_34, (MR_Integer) 0))));

                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_15);
                mercury__io__write_string_3_p_0((MR_String) "% take address fields: ");
                hlds__hlds_out__hlds_out_util__write_intlist_3_p_0(TakeAddressFields_36);
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
              if (!((MaybeSize_35 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word SizeSource_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSize_35, (MR_Integer) 0))));

                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_15);
                mercury__io__write_string_3_p_0((MR_String) "% term size ");
                if (((MR_tag((MR_Word) SizeSource_37)) == (MR_Integer) 1))
                {
                  MR_Word SizeVar_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SizeSource_37, (MR_Integer) 0))));

                  mercury__io__write_string_3_p_0((MR_String) "var ");
                  parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarSet_12, VarNamePrint_14, SizeVar_39);
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
                else
                {
                  MR_Integer KnownSize_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SizeSource_37, (MR_Integer) 0))));

                  mercury__io__write_string_3_p_0((MR_String) "const ");
                  mercury__io__write_int_3_p_0(KnownSize_38);
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
              }
            }
            switch (MR_tag((MR_Word) ConstructHow_24)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(ConstructHow_24)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_15);
                      mercury__io__write_string_3_p_0((MR_String) "% construct statically\n");
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word CellToReuse_40 = (MR_Word) (MR_body((MR_Word) (ConstructHow_24), (MR_Integer) 1));
                  MR_Word ReuseVar_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellToReuse_40, (MR_Integer) 0))));

                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_15);
                  mercury__io__write_string_3_p_0((MR_String) "% reuse cell: ");
                  parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarSet_12, VarNamePrint_14, ReuseVar_41);
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word RegVar_44 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ConstructHow_24, (MR_Integer) 0))));

                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_15);
                  mercury__io__write_string_3_p_0((MR_String) "% construct in region: ");
                  parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarSet_12, VarNamePrint_14, RegVar_44);
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
                break;
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CanFail_45 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Unification_16, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
          MR_Word CanCGC_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Unification_16, (MR_Integer) 4))) & (MR_Integer) 1);
          MR_Word Var_157 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_16, (MR_Integer) 0))));
          MR_Word ConsId_158 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_16, (MR_Integer) 1))));
          MR_Word ArgVars_159 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_16, (MR_Integer) 2))));
          MR_Word ArgModes_160 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_16, (MR_Integer) 3))));
          MR_String DumpOptions_161 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 0))));

          succeeded = mercury__string__contains_char_2_p_0(DumpOptions_161, (MR_Char) 71);
          if (succeeded)
          {
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_15);
            mercury__io__write_string_3_p_0((MR_String) "% Compile time garbage collect: ");
            mercury__io__write_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_can_cgc_0), ((MR_Box) (CanCGC_46)));
            mercury__io__nl_2_p_0();
          }
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_15);
          mercury__io__write_string_3_p_0((MR_String) "% ");
          parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarSet_12, VarNamePrint_14, Var_157);
          switch (CanFail_45) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              mercury__io__write_string_3_p_0((MR_String) " \?= ");
              break;
            case (MR_Integer) 1:
              mercury__io__write_string_3_p_0((MR_String) " => ");
              break;
          }
          hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_50_93_95_48_11_p_0(Info_10, ProgVarSet_12, InstVarSet_13, VarNamePrint_14, Indent_15, ConsId_158, ArgVars_159, ArgModes_160);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word X_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_16, (MR_Integer) 0))));
          MR_Word Y_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_16, (MR_Integer) 1))));

          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_15);
          mercury__io__write_string_3_p_0((MR_String) "% ");
          parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarSet_12, VarNamePrint_14, X_18);
          mercury__io__write_string_3_p_0((MR_String) " := ");
          parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarSet_12, VarNamePrint_14, Y_19);
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Unification_16, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word X_155 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_16, (MR_Integer) 1))));
              MR_Word Y_156 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_16, (MR_Integer) 2))));

              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_15);
              mercury__io__write_string_3_p_0((MR_String) "% ");
              parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarSet_12, VarNamePrint_14, X_155);
              mercury__io__write_string_3_p_0((MR_String) " == ");
              parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarSet_12, VarNamePrint_14, Y_156);
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Mode_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_16, (MR_Integer) 1))));
              MR_Word TypeInfoVars_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Unification_16, (MR_Integer) 3))));
              MR_Word CanFail_162 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Unification_16, (MR_Integer) 2))) & (MR_Integer) 1);

              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_15);
              mercury__io__write_string_3_p_0((MR_String) "% ");
              switch (CanFail_162) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  mercury__io__write_string_3_p_0((MR_String) "can_fail, ");
                  break;
                case (MR_Integer) 1:
                  mercury__io__write_string_3_p_0((MR_String) "cannot_fail, ");
                  break;
              }
              mercury__io__write_string_3_p_0((MR_String) "mode: ");
              hlds__hlds_out__hlds_out_mode__mercury_output_unify_mode_4_p_0(Mode_47, InstVarSet_13);
              mercury__io__write_string_3_p_0((MR_String) "\n");
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_15);
              mercury__io__write_string_3_p_0((MR_String) "% type-info vars: ");
              parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarSet_12, VarNamePrint_14, TypeInfoVars_48);
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_50_93_95_48_11_p_0(
  MR_Word Info_12,
  MR_Word ProgVarSet_14,
  MR_Word InstVarSet_15,
  MR_Word VarNamePrint_16,
  MR_Integer Indent_17,
  MR_Word ConsId_18,
  MR_Word ArgVars_19,
  MR_Word ArgModes_20)
{
  {
    MR_bool succeeded;
    MR_String Var_27;

    Var_27 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ConsId_18);
    mercury__io__write_string_3_p_0(Var_27);
    if ((ArgVars_19 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_3_p_0((MR_String) "\n");
    else
    {
      MR_String DumpOptions_24;

      mercury__io__write_string_3_p_0((MR_String) " (");
      parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarSet_14, VarNamePrint_16, ArgVars_19);
      mercury__io__write_string_3_p_0((MR_String) ")\n");
      DumpOptions_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_12, (MR_Integer) 0))));
      succeeded = mercury__string__contains_char_2_p_0(DumpOptions_24, (MR_Char) 97);
      if (succeeded)
      {
        succeeded = mercury__string__contains_char_2_p_0(DumpOptions_24, (MR_Char) 121);
        if (succeeded)
        {
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_17);
          mercury__io__write_string_3_p_0((MR_String) "% arg-modes\n");
          hlds__hlds_out__hlds_out_mode__mercury_output_structured_unify_mode_list_7_p_0(ArgModes_20, Indent_17, (MR_Integer) 1, (MR_Integer) 1, InstVarSet_15);
        }
        else
        {
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_17);
          mercury__io__write_string_3_p_0((MR_String) "% arg-modes ");
          hlds__hlds_out__hlds_out_mode__mercury_output_unify_mode_list_4_p_0(ArgModes_20, InstVarSet_15);
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_p_0(
  MR_Word ShortDescription_6,
  MR_Word VarSet_7,
  MR_Word VarNamePrint_8)
{
  switch (MR_tag((MR_Word) ShortDescription_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__write_string_3_p_0((MR_String) "cell died");
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortDescription_6, (MR_Integer) 0))));
        MR_Word IsConditional_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ShortDescription_6, (MR_Integer) 1))) & (MR_Integer) 1);

        mercury__io__write_string_3_p_0((MR_String) "cell reuse - ");
        parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_7, VarNamePrint_8, Var_10);
        mercury__io__write_string_3_p_0((MR_String) " - ");
        switch (IsConditional_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__io__write_string_3_p_0((MR_String) "with condition");
            break;
          case (MR_Integer) 1:
            mercury__io__write_string_3_p_0((MR_String) "always safe");
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word NoClobbers_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortDescription_6, (MR_Integer) 1))));
        MR_Word IsConditional_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), ShortDescription_6, (MR_Integer) 0))) & (MR_Integer) 1);

        mercury__io__write_string_3_p_0((MR_String) "reuse call - ");
        switch (IsConditional_31) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__io__write_string_3_p_0((MR_String) "with condition");
            break;
          case (MR_Integer) 1:
            mercury__io__write_string_3_p_0((MR_String) "always safe");
            break;
        }
        mercury__io__write_string_3_p_0((MR_String) ", no clobbers = ");
        mercury__io__write_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[2]), ((MR_Box) (NoClobbers_14)));
      }
      break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_instmap_delta_vars_5_p_0(
  MR_Word VarSet_6,
  MR_Word VarNamePrint_7,
  MR_Word InstMapDelta_8)
{
  {
    MR_bool succeeded;

    succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(InstMapDelta_8);
    if (succeeded)
      mercury__io__write_string_3_p_0((MR_String) "unreachable");
    else
    {
      MR_Word AssocList_10;
      MR_Word Vars_11;

      hlds__instmap__instmap_delta_to_assoc_list_2_p_0(InstMapDelta_8, &AssocList_10);
      mercury__assoc_list__keys_2_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), AssocList_10, &Vars_11);
      hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(VarSet_6, VarNamePrint_7, Vars_11);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_p_0(
  MR_Word Info_8,
  MR_Word GoalInfo_9,
  MR_Word VarSet_10,
  MR_Word VarNamePrint_11,
  MR_Integer Indent_12)
{
  {
    MR_bool succeeded;
    MR_String DumpOptions_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0))));
    MR_Word StoreMapList_26;
    MR_Word TypeInfo_152_152;
    MR_Word TypeCtorInfo_153_153;
    MR_Word StoreMap_25;
    MR_Word NeedAcrossCall_30;
    MR_Word MaybeNeedAcrossCall_29;
    MR_Word NeedInResume_44;
    MR_Word MaybeNeedInResume_43;
    MR_Word NeedInParConj_55;
    MR_Word MaybeNeedInParConj_54;

    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_14, (MR_Char) 102);
    if (succeeded)
    {
      MR_Word MaybeFollowVars_15;

      hlds__hlds_llds__goal_info_get_follow_vars_2_p_0(GoalInfo_9, &MaybeFollowVars_15);
      if (!((MaybeFollowVars_15 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word FollowVars_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFollowVars_15, (MR_Integer) 0))));
        MR_Word FollowVarsMap_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FollowVars_16, (MR_Integer) 0))));
        MR_Integer NextRegR_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), FollowVars_16, (MR_Integer) 1))));
        MR_Integer NextRegF_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), FollowVars_16, (MR_Integer) 2))));
        MR_Word FVlist_20;

        mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0), FollowVarsMap_17, &FVlist_20);
        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_12);
        mercury__io__write_string_3_p_0((MR_String) "% follow vars: r");
        mercury__io__write_int_3_p_0(NextRegR_18);
        mercury__io__write_string_3_p_0((MR_String) ", f");
        mercury__io__write_int_3_p_0(NextRegF_19);
        mercury__io__write_string_3_p_0((MR_String) "\n");
        hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_p_0(VarSet_10, VarNamePrint_11, Indent_12, FVlist_20);
      }
    }
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_14, (MR_Char) 114);
    if (succeeded)
    {
      MR_Word Resume_21;

      hlds__hlds_llds__goal_info_get_resume_point_2_p_0(GoalInfo_9, &Resume_21);
      if (!((Resume_21 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word ResumeVars_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Resume_21, (MR_Integer) 0))));
        MR_Word Locs_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Resume_21, (MR_Integer) 1))) & (MR_Integer) 3);
        MR_Word ResumeVarList_24;

        ResumeVarList_24 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResumeVars_22);
        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_12);
        mercury__io__write_string_3_p_0((MR_String) "% resume point ");
        switch (Locs_23) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            mercury__io__write_string_3_p_0((MR_String) "orig and stack ");
            break;
          case (MR_Integer) 0:
            mercury__io__write_string_3_p_0((MR_String) "orig only ");
            break;
          case (MR_Integer) 3:
            mercury__io__write_string_3_p_0((MR_String) "stack and orig ");
            break;
          case (MR_Integer) 1:
            mercury__io__write_string_3_p_0((MR_String) "stack only ");
            break;
        }
        parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_10, VarNamePrint_11, ResumeVarList_24);
        mercury__io__write_string_3_p_0((MR_String) "\n");
      }
    }
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_14, (MR_Char) 115);
    if (succeeded)
    {
      hlds__hlds_llds__goal_info_get_store_map_2_p_0(GoalInfo_9, &StoreMap_25);
      TypeInfo_152_152 = (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]);
      TypeCtorInfo_153_153 = (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0);
      mercury__map__to_assoc_list_2_p_0(TypeInfo_152_152, TypeCtorInfo_153_153, StoreMap_25, &StoreMapList_26);
      succeeded = (StoreMapList_26 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_12);
      mercury__io__write_string_3_p_0((MR_String) "% store map:\n");
      hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_p_0(VarSet_10, VarNamePrint_11, Indent_12, StoreMapList_26);
    }
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_14, (MR_Char) 115);
    if (succeeded)
    {
      hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(GoalInfo_9, &MaybeNeedAcrossCall_29);
      succeeded = (MaybeNeedAcrossCall_29 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        NeedAcrossCall_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNeedAcrossCall_29, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word CallForwardSet_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NeedAcrossCall_30, (MR_Integer) 0))));
      MR_Word CallResumeSet_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NeedAcrossCall_30, (MR_Integer) 1))));
      MR_Word CallNondetSet_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NeedAcrossCall_30, (MR_Integer) 2))));
      MR_Word CallForwardList_34;
      MR_Word CallResumeList_35;
      MR_Word CallNondetList_36;

      CallForwardList_34 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CallForwardSet_31);
      CallResumeList_35 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CallResumeSet_32);
      CallNondetList_36 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CallNondetSet_33);
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_12);
      mercury__io__write_string_3_p_0((MR_String) "% need across call forward vars: ");
      if ((CallForwardList_34 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__io__write_string_3_p_0((MR_String) "none\n");
      else
      {
        hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(VarSet_10, VarNamePrint_11, CallForwardList_34);
        mercury__io__write_string_3_p_0((MR_String) "\n");
      }
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_12);
      mercury__io__write_string_3_p_0((MR_String) "% need across call resume vars: ");
      if ((CallResumeList_35 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__io__write_string_3_p_0((MR_String) "none\n");
      else
      {
        hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(VarSet_10, VarNamePrint_11, CallResumeList_35);
        mercury__io__write_string_3_p_0((MR_String) "\n");
      }
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_12);
      mercury__io__write_string_3_p_0((MR_String) "% need across call nondet vars: ");
      if ((CallNondetList_36 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__io__write_string_3_p_0((MR_String) "none\n");
      else
      {
        hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(VarSet_10, VarNamePrint_11, CallNondetList_36);
        mercury__io__write_string_3_p_0((MR_String) "\n");
      }
    }
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_14, (MR_Char) 115);
    if (succeeded)
    {
      hlds__hlds_llds__goal_info_get_maybe_need_in_resume_2_p_0(GoalInfo_9, &MaybeNeedInResume_43);
      succeeded = (MaybeNeedInResume_43 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        NeedInResume_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNeedInResume_43, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word ResumeOnStack_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), NeedInResume_44, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ResumeResumeSet_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NeedInResume_44, (MR_Integer) 1))));
      MR_Word ResumeNondetSet_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NeedInResume_44, (MR_Integer) 2))));
      MR_Word ResumeResumeList_48;
      MR_Word ResumeNondetList_49;

      ResumeResumeList_48 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResumeResumeSet_46);
      ResumeNondetList_49 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResumeNondetSet_47);
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_12);
      switch (ResumeOnStack_45) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__io__write_string_3_p_0((MR_String) "% resume point has no stack label\n");
          break;
        case (MR_Integer) 1:
          mercury__io__write_string_3_p_0((MR_String) "% resume point has stack label\n");
          break;
      }
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_12);
      mercury__io__write_string_3_p_0((MR_String) "% need in resume resume vars: ");
      if ((ResumeResumeList_48 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__io__write_string_3_p_0((MR_String) "none\n");
      else
      {
        hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(VarSet_10, VarNamePrint_11, ResumeResumeList_48);
        mercury__io__write_string_3_p_0((MR_String) "\n");
      }
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_12);
      mercury__io__write_string_3_p_0((MR_String) "% need in resume nondet vars: ");
      if ((ResumeNondetList_49 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__io__write_string_3_p_0((MR_String) "none\n");
      else
      {
        hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(VarSet_10, VarNamePrint_11, ResumeNondetList_49);
        mercury__io__write_string_3_p_0((MR_String) "\n");
      }
    }
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_14, (MR_Char) 115);
    if (succeeded)
    {
      hlds__hlds_llds__goal_info_get_maybe_need_in_par_conj_2_p_0(GoalInfo_9, &MaybeNeedInParConj_54);
      succeeded = (MaybeNeedInParConj_54 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        NeedInParConj_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNeedInParConj_54, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word ParConjSet_56 = (MR_Word) (NeedInParConj_55);
      MR_Word ParConjList_57;

      ParConjList_57 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ParConjSet_56);
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_12);
      mercury__io__write_string_3_p_0((MR_String) "% need in par_conj vars: ");
      hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(VarSet_10, VarNamePrint_11, ParConjList_57);
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(
  MR_Word VarSet_1,
  MR_Word VarNamePrint_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

      if ((Var_35 == (MR_Word) ((MR_Unsigned) 0U)))
        parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_1, VarNamePrint_2, Var_36);
      else
      {
        MR_Word Var_66;
        MR_Word Var_67;

        parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_1, VarNamePrint_2, Var_36);
        mercury__io__write_string_3_p_0((MR_String) ", ");
        Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_35, (MR_Integer) 0))));
        Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_35, (MR_Integer) 1))));
        if ((Var_66 == (MR_Word) ((MR_Unsigned) 0U)))
          parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_1, VarNamePrint_2, Var_67);
        else
        {
          MR_Word next_value_of_HeadVar__3_3;

          parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_1, VarNamePrint_2, Var_67);
          mercury__io__write_string_3_p_0((MR_String) ", ");
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__3_3 = Var_66;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
      }
    }
    break;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_p_0(
  MR_Word VarSet_1,
  MR_Word VarNamePrint_2,
  MR_Integer Indent_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Var_16;
      MR_Word Loc_17;
      MR_Word VarLocs_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_String LocnStr_20;
      MR_Word MaybeWidth_21;
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__4_4;

      Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))));
      Loc_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1))));
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(Indent_3);
      mercury__io__write_string_3_p_0((MR_String) "%\t");
      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_1, VarNamePrint_2, Var_16);
      mercury__io__write_string_3_p_0((MR_String) "\t-> ");
      hlds__hlds_llds__abs_locn_to_string_3_p_0(Loc_17, &LocnStr_20, &MaybeWidth_21);
      mercury__io__write_string_3_p_0(LocnStr_20);
      if (!((MaybeWidth_21 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_String Width_22 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeWidth_21, (MR_Integer) 0))));

        mercury__io__write_string_3_p_0((MR_String) " ");
        mercury__io__write_string_3_p_0(Width_22);
      }
      mercury__io__write_string_3_p_0((MR_String) "\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = VarLocs_18;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_new_var_inst_list_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Var_16;
      MR_Word Inst_17;
      MR_Word VarInsts_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word InstVarSet_20;
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__4_4;

      Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0))));
      Inst_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 1))));
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(HeadVar__3_3);
      mercury__io__write_string_3_p_0((MR_String) "%   ");
      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1, HeadVar__2_2, Var_16);
      mercury__io__write_string_3_p_0((MR_String) " -> ");
      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_20);
      parse_tree__parse_tree_out_inst__mercury_output_inst_5_p_0((MR_Integer) 1, InstVarSet_20, Inst_17);
      mercury__io__nl_2_p_0();
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = VarInsts_18;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
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
