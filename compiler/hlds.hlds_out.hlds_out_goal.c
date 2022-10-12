/*
** Automatically generated from `hlds_out_goal.m'
** by the Mercury compiler,
** version rotd-2022-10-12
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
#include "parse_tree.file_names.mih"
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
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_mode.mih"
#include "hlds.hlds_out.hlds_out_util.mih"




static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__529__1_4_p_0(
  MR_String HeadVar__1_304,
  MR_Word HeadVar__2_305);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_7_p_0(
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word MutableVar_10,
  MR_Word STATE_VARIABLE_AddCommaNewline_0_15,
  MR_Word * STATE_VARIABLE_AddCommaNewline_16);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_alternative_cons_id_4_p_0(
  MR_Word Stream_5,
  MR_Word ConsId_6);

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_goal__ho_arg_reg_to_string_1_f_0(
  MR_Word ArgReg_3);

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

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_cases_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
  MR_Word STATE_VARIABLE_Info_0_55,
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

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_switch_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
hlds__hlds_out__hlds_out_goal__write_goal_disj_11_p_0(
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
hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

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

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_foreign_args_9_p_0(
  MR_Word Stream_1,
  MR_Word VarNameSrc_2,
  MR_Word TVarSet_3,
  MR_Word InstVarSet_4,
  MR_Word VarNamePrint_5,
  MR_Integer Indent_6,
  MR_Word HeadVar__7_7);

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

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_7_p_0(
  MR_Word Stream_8,
  MR_Word VarNameSrc_9,
  MR_Word VarNamePrint_10,
  MR_String CompName_11,
  MR_Word CompState_12);

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
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_51_93_95_48_12_p_0(
  MR_Word Info_13,
  MR_Word Stream_14,
  MR_Word VarNameSrc_16,
  MR_Word InstVarSet_17,
  MR_Word VarNamePrint_18,
  MR_Integer Indent_19,
  MR_Word ConsId_20,
  MR_Word ArgVars_21,
  MR_Word ArgModes_22);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_arg_modes_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer HeadVar__4_4,
  MR_Word HeadVar__5_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_short_reuse_description_6_p_0(
  MR_Word Stream_7,
  MR_Word ShortDescription_8,
  MR_Word VarNameSrc_9,
  MR_Word VarNamePrint_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_instmap_delta_vars_6_p_0(
  MR_Word Stream_7,
  MR_Word VarNameSrc_8,
  MR_Word VarNamePrint_9,
  MR_Word InstMapDelta_10);

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

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_new_var_inst_list_7_p_0(
  MR_Word Stream_1,
  MR_Word VarNameSrc_2,
  MR_Word HeadVar__3_3,
  MR_Integer HeadVar__4_4,
  MR_Word HeadVar__5_5);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_1[4][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_2[7][3];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_3[4][1];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_4[1][5];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_6[4][7];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_8[1][10];


struct hlds__hlds_out__hlds_out_goal__vector_common_type_5_0_s {
  const MR_Word hlds__hlds_out__hlds_out_goal__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct hlds__hlds_out__hlds_out_goal__vector_common_type_5_0_s hlds__hlds_out__hlds_out_goal_vector_common_5[5];

struct hlds__hlds_out__hlds_out_goal__vector_common_type_7_0_s {
  const MR_String hlds__hlds_out__hlds_out_goal__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct hlds__hlds_out__hlds_out_goal__vector_common_type_7_0_s hlds__hlds_out__hlds_out_goal_vector_common_7[20];



static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_1[4][2] = {
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
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_2[7][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_out_info__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_4[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_6[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_53_93_95_48_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_6[1])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_6[3])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__write_goal_scope_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_6[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__write_goal_scope_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_3[4][1] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "class_method_call"))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) "apply"))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) "call"))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_4[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_6[4][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_compiletime_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_8[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct hlds__hlds_out__hlds_out_goal__vector_common_type_5_0_s hlds__hlds_out__hlds_out_goal_vector_common_5[5] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 0 },
  /* row   2 */   { (MR_Integer) 0 },
  /* row   3 */   { (MR_Integer) 0 },
  /* row   4 */   { (MR_Integer) 1 },
};

static /* final */ const struct hlds__hlds_out__hlds_out_goal__vector_common_type_7_0_s hlds__hlds_out__hlds_out_goal_vector_common_7[20] = {
  /* row   0 */   { (MR_String) "initial" },
  /* row   1 */   { (MR_String) "construct" },
  /* row   2 */   { (MR_String) "deconstruct" },
  /* row   3 */   { (MR_String) "other" },
  /* row   4 */   { (MR_String) "require_det" },
  /* row   5 */   { (MR_String) "require_semidet" },
  /* row   6 */   { (MR_String) "require_multi" },
  /* row   7 */   { (MR_String) "require_nondet" },
  /* row   8 */   { (MR_String) "require_cc_multi" },
  /* row   9 */   { (MR_String) "require_cc_nondet" },
  /* row  10 */   { (MR_String) "require_erroneous" },
  /* row  11 */   { (MR_String) "require_failure" },
  /* row  12 */   { (MR_String) "require_switch_arms_det" },
  /* row  13 */   { (MR_String) "require_switch_arms_semidet" },
  /* row  14 */   { (MR_String) "require_switch_arms_multi" },
  /* row  15 */   { (MR_String) "require_switch_arms_nondet" },
  /* row  16 */   { (MR_String) "require_switch_arms_cc_multi" },
  /* row  17 */   { (MR_String) "require_switch_arms_cc_nondet" },
  /* row  18 */   { (MR_String) "require_switch_arms_erroneous" },
  /* row  19 */   { (MR_String) "require_switch_arms_failure" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__529__1_4_p_0(
  MR_String HeadVar__1_304,
  MR_Word HeadVar__2_305)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[0]), (MR_Integer) 0)), (MR_Integer) 5))));
  MR_Box conv1_HeadVar__4_307;

  func_0(((MR_Box) ((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[0]))), ((MR_Box) (HeadVar__1_304)), ((MR_Box) (HeadVar__2_305)), ((MR_Box) ((MR_Integer) 0)), &conv1_HeadVar__4_307);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_7_p_0(
  MR_Word Stream_8,
  MR_Integer Indent_9,
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
  parse_tree__prog_out__write_indent_4_p_0(Stream_8, Indent_9);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "state(");
  mercury__io__write_string_4_p_0(Stream_8, MutableName_13);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", !");
  mercury__io__write_string_4_p_0(Stream_8, StateVarName_14);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
  *STATE_VARIABLE_AddCommaNewline_16 = (MR_Integer) 1;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_alternative_cons_id_4_p_0(
  MR_Word Stream_5,
  MR_Word ConsId_6)
{
  MR_String Var_12;

  mercury__io__write_string_4_p_0(Stream_5, (MR_String) " or ");
  Var_12 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ConsId_6);
  mercury__io__write_string_4_p_0(Stream_5, Var_12);
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
  *ConsName_5 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ConsId_7);
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
  MR_bool succeeded;

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
          {
            MR_Word ConjType_61 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word List_62 = ((MR_Word) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 2))));

            if ((List_62 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
              switch (ConjType_61) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "/* parallel */ true");
                  break;
                case (MR_Integer) 0:
                  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "true");
                  break;
              }
              mercury__io__write_string_4_p_0(Stream_13, Follow_19);
            }
            else
            {
              MR_Word Goal_63 = ((MR_Word) ((MR_hl_field(1, List_62, (MR_Integer) 0))));
              MR_Word Goals_64 = ((MR_Word) ((MR_hl_field(1, List_62, (MR_Integer) 1))));

              switch (ConjType_61) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Integer Var_81;

                    parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
                    mercury__io__write_string_4_p_0(Stream_13, (MR_String) "( % parallel conjunction\n");
                    Var_81 = (MR_Integer) ((MR_Unsigned) Indent_18 + (MR_Unsigned) 1);
                    hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Var_81, (MR_String) "\n", Goal_63);
                    hlds__hlds_out__hlds_out_goal__write_goal_list_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Indent_18, (MR_String) "&\n", Goals_64);
                    parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
                    mercury__io__write_string_4_p_0(Stream_13, (MR_String) ")");
                    mercury__io__write_string_4_p_0(Stream_13, Follow_19);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_String DumpOptions_65 = ((MR_String) ((MR_hl_field(0, Info_12, (MR_Integer) 0))));

                    succeeded = (strcmp(DumpOptions_65, (MR_String) "") == 0);
                    if (succeeded)
                      hlds__hlds_out__hlds_out_goal__write_conj_13_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Indent_18, Follow_19, (MR_String) ",\n", Goal_63, Goals_64);
                    else
                    {
                      MR_Integer Var_70;

                      parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
                      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "( % conjunction\n");
                      Var_70 = (MR_Integer) ((MR_Unsigned) Indent_18 + (MR_Unsigned) 1);
                      hlds__hlds_out__hlds_out_goal__write_conj_13_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Var_70, (MR_String) "\n", (MR_String) ",\n", Goal_63, Goals_64);
                      parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
                      mercury__io__write_string_4_p_0(Stream_13, (MR_String) ")");
                      mercury__io__write_string_4_p_0(Stream_13, Follow_19);
                    }
                  }
                  break;
              }
            }
          }
          break;
        case (MR_Integer) 3:
          hlds__hlds_out__hlds_out_goal__write_goal_disj_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Indent_18, Follow_19, GoalExpr_20);
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
        hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_14, Stream_15, ModuleInfo_16, VarNameSrc_17, TypeQual_18, VarNamePrint_19, Indent_20, (MR_String) "\n", Goal1_23);
        parse_tree__prog_out__write_indent_4_p_0(Stream_15, Indent_20);
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

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_cases_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_goal__write_alternative_cons_id_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
      MR_Integer Var_29;
      MR_Word MainConsId_32;
      MR_Word OtherConsIds_33;
      MR_Word Goal_34;
      MR_String Var_41;
      MR_Word Var_43;
      MR_Box conv0_STATE_VARIABLE_IO_36_44;
      MR_Word next_value_of_CasesList_20;

      parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) ";\n");
      Var_29 = (MR_Integer) ((MR_Unsigned) Indent_18 + (MR_Unsigned) 1);
      MainConsId_32 = ((MR_Word) ((MR_hl_field(0, Case_22, (MR_Integer) 0))));
      OtherConsIds_33 = ((MR_Word) ((MR_hl_field(0, Case_22, (MR_Integer) 1))));
      Goal_34 = ((MR_Word) ((MR_hl_field(0, Case_22, (MR_Integer) 2))));
      parse_tree__prog_out__write_indent_4_p_0(Stream_13, Var_29);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% ");
      parse_tree__parse_tree_out_term__mercury_output_var_src_6_p_0(VarNameSrc_15, VarNamePrint_17, Var_19, Stream_13);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) " has functor ");
      Var_41 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(MainConsId_32);
      mercury__io__write_string_4_p_0(Stream_13, Var_41);
      {
        Var_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_43, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_6[2]));
        MR_hl_field(0, Var_43, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__write_cases_11_p_0_1));
        MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_43, 3) = ((MR_Box) (Stream_13));
      }
      mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_43, OtherConsIds_33, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_36_44);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
      hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Var_29, (MR_String) "\n", Goal_34);
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

      parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
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

  switch (MR_tag((MR_Word) ShortHand_22)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word GoalA_36 = ((MR_Word) ((MR_hl_field(0, ShortHand_22, (MR_Integer) 0))));
        MR_Word GoalB_37 = ((MR_Word) ((MR_hl_field(0, ShortHand_22, (MR_Integer) 1))));
        MR_Integer Indent1_38;

        parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) "( % bi-implication\n");
        Indent1_38 = (MR_Integer) ((MR_Unsigned) Indent_18 + (MR_Unsigned) 1);
        hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Indent1_38, (MR_String) "\n", GoalA_36);
        parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) "<=>\n");
        hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Indent1_38, (MR_String) "\n", GoalB_37);
        parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) ")");
        mercury__io__write_string_4_p_0(Stream_13, Follow_19);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Outer_24 = ((MR_Word) ((MR_hl_field(1, ShortHand_22, (MR_Integer) 1))));
        MR_Word Inner_25 = ((MR_Word) ((MR_hl_field(1, ShortHand_22, (MR_Integer) 2))));
        MR_Word MaybeOutputVars_26 = ((MR_Word) ((MR_hl_field(1, ShortHand_22, (MR_Integer) 3))));
        MR_Word MainGoal_27 = ((MR_Word) ((MR_hl_field(1, ShortHand_22, (MR_Integer) 4))));
        MR_Word OrElseGoals_28 = ((MR_Word) ((MR_hl_field(1, ShortHand_22, (MR_Integer) 5))));
        MR_Integer Var_59;

        parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) "atomic [");
        hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_7_p_0(Stream_13, VarNameSrc_15, VarNamePrint_17, (MR_String) "outer", Outer_24);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) " ");
        hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_7_p_0(Stream_13, VarNameSrc_15, VarNamePrint_17, (MR_String) "inner", Inner_25);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) " ");
        if (!((MaybeOutputVars_26 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word OutputVars_30 = ((MR_Word) ((MR_hl_field(1, MaybeOutputVars_26, (MR_Integer) 0))));

          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "vars([");
          parse_tree__parse_tree_out_term__mercury_output_vars_src_6_p_0(VarNameSrc_15, VarNamePrint_17, OutputVars_30, Stream_13);
          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "])");
        }
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) "] (\n");
        Var_59 = (MR_Integer) ((MR_Unsigned) Indent_18 + (MR_Unsigned) 1);
        hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Var_59, (MR_String) "\n", MainGoal_27);
        hlds__hlds_out__hlds_out_goal__write_goal_list_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Indent_18, (MR_String) "or_else\n", OrElseGoals_28);
        parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) ")");
        mercury__io__write_string_4_p_0(Stream_13, Follow_19);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word MaybeIO_31 = ((MR_Word) ((MR_hl_field(2, ShortHand_22, (MR_Integer) 0))));
        MR_Word SubGoal_33 = ((MR_Word) ((MR_hl_field(2, ShortHand_22, (MR_Integer) 2))));
        MR_Integer Var_84;

        parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) "( % try\n");
        if (!((MaybeIO_31 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word IOVarA_34;
          MR_Word IOVarB_35;
          MR_Word Var_72 = ((MR_Word) ((MR_hl_field(1, MaybeIO_31, (MR_Integer) 0))));
          MR_Integer Var_73;
          MR_Word Var_78;
          MR_Word Var_80;

          IOVarA_34 = ((MR_Word) ((MR_hl_field(0, Var_72, (MR_Integer) 0))));
          IOVarB_35 = ((MR_Word) ((MR_hl_field(0, Var_72, (MR_Integer) 1))));
          Var_73 = (MR_Integer) ((MR_Unsigned) Indent_18 + (MR_Unsigned) 1);
          parse_tree__prog_out__write_indent_4_p_0(Stream_13, Var_73);
          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% io(");
          {
            Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_80, 0) = ((MR_Box) (IOVarB_35));
            MR_hl_field(1, Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_78, 0) = ((MR_Box) (IOVarA_34));
            MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_80));
          }
          parse_tree__parse_tree_out_term__mercury_output_vars_src_6_p_0(VarNameSrc_15, VarNamePrint_17, Var_78, Stream_13);
          mercury__io__write_string_4_p_0(Stream_13, (MR_String) ")\n");
        }
        Var_84 = (MR_Integer) ((MR_Unsigned) Indent_18 + (MR_Unsigned) 1);
        hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Var_84, (MR_String) "\n", SubGoal_33);
        parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
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

  hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_AddCommaNewline_16);
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
  MR_Word STATE_VARIABLE_Info_0_55,
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
  MR_Word STATE_VARIABLE_Info_132_132;
  MR_Integer Var_196;

  parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
  switch (MR_tag((MR_Word) Reason_22)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Vars_24 = ((MR_Word) ((MR_hl_field(0, Reason_22, (MR_Integer) 0))));
        MR_String VarsStr_25;

        VarsStr_25 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, Vars_24);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) "some [");
        mercury__io__write_string_4_p_0(Stream_13, VarsStr_25);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) "] (\n");
        STATE_VARIABLE_Info_132_132 = STATE_VARIABLE_Info_0_55;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word HeadWarning_26 = ((MR_Unsigned) ((MR_hl_field(1, Reason_22, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Word TailWarnings_27 = ((MR_Word) ((MR_hl_field(1, Reason_22, (MR_Integer) 1))));

        mercury__io__write_string_4_p_0(Stream_13, (MR_String) "disable_warnings [");
        parse_tree__parse_tree_out_clause__write_goal_warnings_5_p_0(Stream_13, HeadWarning_26, TailWarnings_27);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) "] (\n");
        STATE_VARIABLE_Info_132_132 = STATE_VARIABLE_Info_0_55;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Kind_30 = ((MR_Unsigned) ((MR_hl_field(2, Reason_22, (MR_Integer) 1))) & (MR_Integer) 3);
        MR_String PromiseKindStr_31;
        MR_Word Vars_204 = ((MR_Word) ((MR_hl_field(2, Reason_22, (MR_Integer) 0))));
        MR_String VarsStr_205;

        VarsStr_205 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, Vars_204);
        switch (Kind_30) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            PromiseKindStr_31 = (MR_String) "promise_equivalent_solution_sets";
            break;
          case (MR_Integer) 2:
            PromiseKindStr_31 = (MR_String) "arbitrary";
            break;
          case (MR_Integer) 0:
            PromiseKindStr_31 = (MR_String) "promise_equivalent_solutions";
            break;
        }
        mercury__io__write_string_4_p_0(Stream_13, PromiseKindStr_31);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) " [");
        mercury__io__write_string_4_p_0(Stream_13, VarsStr_205);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) "] (\n");
        STATE_VARIABLE_Info_132_132 = STATE_VARIABLE_Info_0_55;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Reason_22, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Purity_28 = ((MR_Unsigned) ((MR_hl_field(3, Reason_22, (MR_Integer) 1))) & (MR_Integer) 3);
            MR_String PromiseStr_29;

            switch (Purity_28) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                PromiseStr_29 = (MR_String) "promise_impure";
                break;
              case (MR_Integer) 0:
                PromiseStr_29 = (MR_String) "promise_pure";
                break;
              case (MR_Integer) 1:
                PromiseStr_29 = (MR_String) "promise_semipure";
                break;
            }
            mercury__io__write_string_4_p_0(Stream_13, PromiseStr_29);
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) " (\n");
            STATE_VARIABLE_Info_132_132 = STATE_VARIABLE_Info_0_55;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Detism_32 = ((MR_Unsigned) ((MR_hl_field(3, Reason_22, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_String ReqStr_33 = ((&hlds__hlds_out__hlds_out_goal_vector_common_7[4 + Detism_32]))->hlds__hlds_out__hlds_out_goal__vector_common_type_7_0__vct_7_f_0;

            mercury__io__write_string_4_p_0(Stream_13, ReqStr_33);
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) " (\n");
            STATE_VARIABLE_Info_132_132 = STATE_VARIABLE_Info_0_55;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_34 = ((MR_Word) ((MR_hl_field(3, Reason_22, (MR_Integer) 1))));
            MR_String VarStr_35;

            VarStr_35 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, Var_34);
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) "require_complete_switch [");
            mercury__io__write_string_4_p_0(Stream_13, VarStr_35);
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) "] (\n");
            STATE_VARIABLE_Info_132_132 = STATE_VARIABLE_Info_0_55;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Detism_206 = ((MR_Unsigned) ((MR_hl_field(3, Reason_22, (MR_Integer) 2))) & (MR_Integer) 7);
            MR_String ReqStr_207 = ((&hlds__hlds_out__hlds_out_goal_vector_common_7[12 + Detism_206]))->hlds__hlds_out__hlds_out_goal__vector_common_type_7_0__vct_7_f_0;
            MR_Word Var_208 = ((MR_Word) ((MR_hl_field(3, Reason_22, (MR_Integer) 1))));
            MR_String VarStr_209;

            VarStr_209 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, Var_208);
            mercury__io__write_string_4_p_0(Stream_13, ReqStr_207);
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) " [");
            mercury__io__write_string_4_p_0(Stream_13, VarStr_209);
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) "] (\n");
            STATE_VARIABLE_Info_132_132 = STATE_VARIABLE_Info_0_55;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_245 = ((MR_Unsigned) ((MR_hl_field(3, Reason_22, (MR_Integer) 1))) & (MR_Integer) 1);

            switch (Var_245) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "(\n");
                  parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
                  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% commit(dont_force_pruning)\n");
                  STATE_VARIABLE_Info_132_132 = STATE_VARIABLE_Info_0_55;
                }
                break;
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "(\n");
                  parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
                  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% commit(force_pruning)\n");
                  STATE_VARIABLE_Info_132_132 = STATE_VARIABLE_Info_0_55;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Var_244 = ((MR_Unsigned) ((MR_hl_field(3, Reason_22, (MR_Integer) 1))) & (MR_Integer) 1);

            switch (Var_244) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "(\n");
                  parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
                  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% barrier(not_removable)\n");
                  STATE_VARIABLE_Info_132_132 = STATE_VARIABLE_Info_0_55;
                }
                break;
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "(\n");
                  parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
                  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% barrier(removable)\n");
                  STATE_VARIABLE_Info_132_132 = STATE_VARIABLE_Info_0_55;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_String KindStr_36;
            MR_String DumpOptionsBackup_37;
            MR_Word Kind_210 = ((MR_Unsigned) ((MR_hl_field(3, Reason_22, (MR_Integer) 2))) & (MR_Integer) 3);
            MR_Word Var_211 = ((MR_Word) ((MR_hl_field(3, Reason_22, (MR_Integer) 1))));
            MR_String VarStr_212;
            MR_Word Var_214;
            MR_Word Var_215;
            MR_Word Var_216;

            VarStr_212 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, Var_211);
            KindStr_36 = ((&hlds__hlds_out__hlds_out_goal_vector_common_7[0 + Kind_210]))->hlds__hlds_out__hlds_out_goal__vector_common_type_7_0__vct_7_f_0;
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) "(\n");
            parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% from_ground_term [");
            mercury__io__write_string_4_p_0(Stream_13, VarStr_212);
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) ", ");
            mercury__io__write_string_4_p_0(Stream_13, KindStr_36);
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) "]\n");
            DumpOptionsBackup_37 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Info_0_55, (MR_Integer) 1))));
            Var_214 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_55, (MR_Integer) 2))));
            Var_215 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_55, (MR_Integer) 3))));
            Var_216 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_55, (MR_Integer) 4))));
            {
              STATE_VARIABLE_Info_132_132 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_Info_132_132, 0) = ((MR_Box) (DumpOptionsBackup_37));
              MR_hl_field(0, STATE_VARIABLE_Info_132_132, 1) = ((MR_Box) (DumpOptionsBackup_37));
              MR_hl_field(0, STATE_VARIABLE_Info_132_132, 2) = ((MR_Box) (Var_214));
              MR_hl_field(0, STATE_VARIABLE_Info_132_132, 3) = ((MR_Box) (Var_215));
              MR_hl_field(0, STATE_VARIABLE_Info_132_132, 4) = ((MR_Box) (Var_216));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word MaybeCompileTime_38 = ((MR_Word) ((MR_hl_field(3, Reason_22, (MR_Integer) 1))));
            MR_Word MaybeRunTime_39 = ((MR_Word) ((MR_hl_field(3, Reason_22, (MR_Integer) 2))));
            MR_Word MaybeIO0_40 = ((MR_Word) ((MR_hl_field(3, Reason_22, (MR_Integer) 3))));
            MR_Word MutableVars0_41 = ((MR_Word) ((MR_hl_field(3, Reason_22, (MR_Integer) 4))));
            MR_Word QuantVars_42 = ((MR_Word) ((MR_hl_field(3, Reason_22, (MR_Integer) 5))));
            MR_Word Lang_46;
            MR_Word MutableVars_48;
            MR_Word STATE_VARIABLE_AddCommaNewline_145_145;
            MR_Word STATE_VARIABLE_AddCommaNewline_156_156;
            MR_Word Var_157;
            MR_Word STATE_VARIABLE_AddCommaNewline_167_167;
            MR_Word Var_168;
            MR_Word STATE_VARIABLE_AddCommaNewline_169_169;
            MR_Integer Var_171;
            MR_Box conv2_STATE_VARIABLE_AddCommaNewline_169_169;
            MR_Box conv1_STATE_VARIABLE_IO_170_170;

            mercury__io__write_string_4_p_0(Stream_13, (MR_String) "trace [\n");
            if ((MaybeCompileTime_38 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_AddCommaNewline_145_145 = (MR_Integer) 0;
            else
            {
              MR_Word CompileTime_44 = ((MR_Word) ((MR_hl_field(1, MaybeCompileTime_38, (MR_Integer) 0))));
              MR_Integer Var_136 = (MR_Integer) ((MR_Unsigned) Indent_18 + (MR_Unsigned) 1);

              parse_tree__prog_out__write_indent_4_p_0(Stream_13, Var_136);
              mercury__io__write_string_4_p_0(Stream_13, (MR_String) "compile_time(");
              parse_tree__parse_tree_out_clause__mercury_output_trace_expr_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_compiletime_0), Stream_13, (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[5]), CompileTime_44);
              mercury__io__write_string_4_p_0(Stream_13, (MR_String) ")");
              STATE_VARIABLE_AddCommaNewline_145_145 = (MR_Integer) 1;
            }
            if ((MaybeRunTime_39 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_AddCommaNewline_156_156 = STATE_VARIABLE_AddCommaNewline_145_145;
            else
            {
              MR_Word RunTime_45 = ((MR_Word) ((MR_hl_field(1, MaybeRunTime_39, (MR_Integer) 0))));
              MR_Integer Var_147;

              hlds__hlds_out__hlds_out_goal__maybe_add_comma_newline_4_p_0(Stream_13, STATE_VARIABLE_AddCommaNewline_145_145);
              Var_147 = (MR_Integer) ((MR_Unsigned) Indent_18 + (MR_Unsigned) 1);
              parse_tree__prog_out__write_indent_4_p_0(Stream_13, Var_147);
              mercury__io__write_string_4_p_0(Stream_13, (MR_String) "runtime(");
              parse_tree__parse_tree_out_clause__mercury_output_trace_expr_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0), Stream_13, (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[6]), RunTime_45);
              mercury__io__write_string_4_p_0(Stream_13, (MR_String) ")");
              STATE_VARIABLE_AddCommaNewline_156_156 = (MR_Integer) 1;
            }
            Var_157 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_55, (MR_Integer) 4))));
            Lang_46 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Var_157);
            switch (Lang_46) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MutableVars_48 = MutableVars0_41;
                  if ((MaybeIO0_40 == (MR_Word) ((MR_Unsigned) 0U)))
                    STATE_VARIABLE_AddCommaNewline_167_167 = STATE_VARIABLE_AddCommaNewline_156_156;
                  else
                  {
                    MR_String IOStateVarName_49 = ((MR_String) ((MR_hl_field(1, MaybeIO0_40, (MR_Integer) 0))));
                    MR_Integer Var_159;

                    hlds__hlds_out__hlds_out_goal__maybe_add_comma_newline_4_p_0(Stream_13, STATE_VARIABLE_AddCommaNewline_156_156);
                    Var_159 = (MR_Integer) ((MR_Unsigned) Indent_18 + (MR_Unsigned) 1);
                    parse_tree__prog_out__write_indent_4_p_0(Stream_13, Var_159);
                    mercury__io__write_string_4_p_0(Stream_13, (MR_String) "io(!");
                    mercury__io__write_string_4_p_0(Stream_13, IOStateVarName_49);
                    mercury__io__write_string_4_p_0(Stream_13, (MR_String) ")");
                    STATE_VARIABLE_AddCommaNewline_167_167 = (MR_Integer) 1;
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  MutableVars_48 = (MR_Word) ((MR_Unsigned) 0U);
                  STATE_VARIABLE_AddCommaNewline_167_167 = STATE_VARIABLE_AddCommaNewline_156_156;
                }
                break;
            }
            Var_171 = (MR_Integer) ((MR_Unsigned) Indent_18 + (MR_Unsigned) 1);
            {
              Var_168 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_168, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_8[0]));
              MR_hl_field(0, Var_168, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__write_goal_scope_11_p_0_3));
              MR_hl_field(0, Var_168, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_168, 3) = ((MR_Box) (Stream_13));
              MR_hl_field(0, Var_168, 4) = ((MR_Box) (Var_171));
            }
            mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_168, MutableVars_48, ((MR_Box) (STATE_VARIABLE_AddCommaNewline_167_167)), &conv2_STATE_VARIABLE_AddCommaNewline_169_169, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_170_170);
            STATE_VARIABLE_AddCommaNewline_169_169 = ((MR_Word) (conv2_STATE_VARIABLE_AddCommaNewline_169_169));
            switch (STATE_VARIABLE_AddCommaNewline_169_169) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                mercury__io__nl_3_p_0(Stream_13);
                break;
            }
            switch (Lang_46) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_String QuantVarsStr_50;
                  MR_Integer Var_174;

                  QuantVarsStr_50 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, QuantVars_42);
                  Var_174 = (MR_Integer) ((MR_Unsigned) Indent_18 + (MR_Unsigned) 1);
                  parse_tree__prog_out__write_indent_4_p_0(Stream_13, Var_174);
                  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% quantified vars [");
                  mercury__io__write_string_4_p_0(Stream_13, QuantVarsStr_50);
                  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "]\n");
                }
                break;
              case (MR_Integer) 0:
                {
                }
                break;
            }
            parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) "] (\n");
            STATE_VARIABLE_Info_132_132 = STATE_VARIABLE_Info_0_55;
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word LCVar_51 = ((MR_Word) ((MR_hl_field(3, Reason_22, (MR_Integer) 1))));
            MR_Word LCSVar_52 = ((MR_Word) ((MR_hl_field(3, Reason_22, (MR_Integer) 2))));
            MR_Word UseParentStack_53 = ((MR_Unsigned) ((MR_hl_field(3, Reason_22, (MR_Integer) 3))) & (MR_Integer) 1);
            MR_String UseParentStackStr_54;
            MR_String Var_191;
            MR_Word Var_192;
            MR_Word Var_193;

            switch (UseParentStack_53) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                UseParentStackStr_54 = (MR_String) "using_child_stack";
                break;
              case (MR_Integer) 0:
                UseParentStackStr_54 = (MR_String) "using_parent_stack_frame";
                break;
            }
            {
              Var_193 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_193, 0) = ((MR_Box) (LCSVar_52));
              MR_hl_field(1, Var_193, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_192 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_192, 0) = ((MR_Box) (LCVar_51));
              MR_hl_field(1, Var_192, 1) = ((MR_Box) (Var_193));
            }
            Var_191 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, Var_192);
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) "loop_control_spawn_off_");
            mercury__io__write_string_4_p_0(Stream_13, UseParentStackStr_54);
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) "(");
            mercury__io__write_string_4_p_0(Stream_13, Var_191);
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) ") (\n");
            STATE_VARIABLE_Info_132_132 = STATE_VARIABLE_Info_0_55;
          }
          break;
      }
      break;
  }
  Var_196 = (MR_Integer) ((MR_Unsigned) Indent_18 + (MR_Unsigned) 1);
  hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(STATE_VARIABLE_Info_132_132, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Var_196, (MR_String) "\n", Goal_23);
  parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
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
  MR_Integer Indent1_26;
  MR_String DumpOptions_27;
  MR_Integer ElseIndent_33;
  MR_Word Var_53;

  parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "( if");
  if (!((Vars_22 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_String VarsStr_65;

    VarsStr_65 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_15, (MR_Integer) 1, Vars_22);
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) " some [");
    mercury__io__write_string_4_p_0(Stream_13, VarsStr_65);
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) "]");
  }
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
  Indent1_26 = (MR_Integer) ((MR_Unsigned) Indent_18 + (MR_Unsigned) 1);
  hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Indent1_26, (MR_String) "\n", Cond_23);
  parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "then\n");
  hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Indent1_26, (MR_String) "\n", Then_24);
  parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "else\n");
  DumpOptions_27 = ((MR_String) ((MR_hl_field(0, Info_12, (MR_Integer) 0))));
  succeeded = (strcmp(DumpOptions_27, (MR_String) "") == 0);
  succeeded = !(succeeded);
  if (succeeded)
  {
    Var_53 = ((MR_Word) ((MR_hl_field(0, Else_25, (MR_Integer) 0))));
    succeeded = ((((MR_tag((MR_Word) Var_53)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_53, (MR_Integer) 0)))) == (MR_Integer) 6)));
    if (succeeded)
    {
    }
  }
  if (succeeded)
    ElseIndent_33 = Indent_18;
  else
    ElseIndent_33 = Indent1_26;
  hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, ElseIndent_33, (MR_String) "\n", Else_25);
  parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
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
  MR_Integer Var_28;

  parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "not (\n");
  Var_28 = (MR_Integer) ((MR_Unsigned) Indent_18 + (MR_Unsigned) 1);
  hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Var_28, (MR_String) "\n", Goal_22);
  parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) ")");
  mercury__io__write_string_4_p_0(Stream_13, Follow_19);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_switch_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_goal__write_alternative_cons_id_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
  MR_String CanFailStr_25;
  MR_String VarStr_26;
  MR_Integer Indent1_27;

  CanFailStr_25 = parse_tree__prog_out__can_fail_to_string_1_f_0(CanFail_23);
  VarStr_26 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_15, VarNamePrint_17, Var_22);
  parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "( % ");
  mercury__io__write_string_4_p_0(Stream_13, CanFailStr_25);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) " switch on \140");
  mercury__io__write_string_4_p_0(Stream_13, VarStr_26);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\'\n");
  Indent1_27 = (MR_Integer) ((MR_Unsigned) Indent_18 + (MR_Unsigned) 1);
  if ((CasesList_24 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent1_27);
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) "fail\n");
  }
  else
  {
    MR_Word Case_28 = ((MR_Word) ((MR_hl_field(1, CasesList_24, (MR_Integer) 0))));
    MR_Word Cases_29 = ((MR_Word) ((MR_hl_field(1, CasesList_24, (MR_Integer) 1))));
    MR_Word MainConsId_56 = ((MR_Word) ((MR_hl_field(0, Case_28, (MR_Integer) 0))));
    MR_Word OtherConsIds_57 = ((MR_Word) ((MR_hl_field(0, Case_28, (MR_Integer) 1))));
    MR_Word Goal_58 = ((MR_Word) ((MR_hl_field(0, Case_28, (MR_Integer) 2))));
    MR_String Var_65;
    MR_Word Var_67;
    MR_Box conv0_STATE_VARIABLE_IO_36_68;

    parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent1_27);
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% ");
    parse_tree__parse_tree_out_term__mercury_output_var_src_6_p_0(VarNameSrc_15, VarNamePrint_17, Var_22, Stream_13);
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) " has functor ");
    Var_65 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(MainConsId_56);
    mercury__io__write_string_4_p_0(Stream_13, Var_65);
    {
      Var_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_67, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_6[2]));
      MR_hl_field(0, Var_67, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__write_goal_switch_11_p_0_1));
      MR_hl_field(0, Var_67, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_67, 3) = ((MR_Box) (Stream_13));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_67, OtherConsIds_57, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_36_68);
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
    hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Indent1_27, (MR_String) "\n", Goal_58);
    hlds__hlds_out__hlds_out_goal__write_cases_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Indent_18, Var_22, Cases_29);
  }
  parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) ")");
  mercury__io__write_string_4_p_0(Stream_13, Follow_19);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_disj_11_p_0(
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
  MR_Word Disjuncts_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 1))));

  parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
  if ((Disjuncts_22 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) "fail");
    mercury__io__write_string_4_p_0(Stream_13, Follow_19);
  }
  else
  {
    MR_Word Goal_23 = ((MR_Word) ((MR_hl_field(1, Disjuncts_22, (MR_Integer) 0))));
    MR_Word Goals_24 = ((MR_Word) ((MR_hl_field(1, Disjuncts_22, (MR_Integer) 1))));
    MR_Integer Var_30;

    mercury__io__write_string_4_p_0(Stream_13, (MR_String) "( % disjunction\n");
    Var_30 = (MR_Integer) ((MR_Unsigned) Indent_18 + (MR_Unsigned) 1);
    hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Var_30, (MR_String) "\n", Goal_23);
    hlds__hlds_out__hlds_out_goal__write_goal_list_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Indent_18, (MR_String) ";\n", Goals_24);
    parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) ")");
    mercury__io__write_string_4_p_0(Stream_13, Follow_19);
  }
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
  MR_Word NewArgVars_33;
  MR_String Var_60;
  MR_Word Var_89;

  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_28, (MR_Char) 98);
  if (succeeded)
    switch (Builtin_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% inline builtin\n");
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
  parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
  Var_89 = hlds__hlds_pred__invalid_pred_id_0_f_0();
  succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_22, Var_89);
  if (succeeded)
    NewArgVars_33 = ArgVars_24;
  else
  {
    MR_Word PredInfo_31;
    MR_Word PredIdTable_30;
    MR_Box conv0_PredInfo_31;

    hlds__hlds_module__module_info_get_pred_id_table_2_p_0(ModuleInfo_14, &PredIdTable_30);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable_30, ((MR_Box) (PredId_22)), &conv0_PredInfo_31);
    if (succeeded)
    {
      PredInfo_31 = ((MR_Word) (conv0_PredInfo_31));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Purity_32;
      MR_String Var_53;
      MR_Word PredOrFunc_111;

      PredOrFunc_111 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_31);
      hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_31, &Purity_32);
      Var_53 = parse_tree__prog_out__purity_prefix_to_string_1_f_0(Purity_32);
      mercury__io__write_string_4_p_0(Stream_13, Var_53);
      switch (PredOrFunc_111) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word LHSVar_34;
            MR_Box conv1_LHSVar_34;

            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), ArgVars_24, &NewArgVars_33, &conv1_LHSVar_34);
            LHSVar_34 = ((MR_Word) (conv1_LHSVar_34));
            parse_tree__parse_tree_out_term__mercury_output_var_src_6_p_0(VarNameSrc_15, VarNamePrint_17, LHSVar_34, Stream_13);
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
          }
          break;
        case (MR_Integer) 0:
          NewArgVars_33 = ArgVars_24;
          break;
      }
    }
    else
    {
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "CALL TO DELETED ");
      NewArgVars_33 = ArgVars_24;
    }
  }
  Var_60 = hlds__hlds_out__hlds_out_goal__sym_name_and_args_to_string_4_f_0(VarNameSrc_15, VarNamePrint_17, PredName_27, NewArgVars_33);
  mercury__io__write_string_4_p_0(Stream_13, Var_60);
  mercury__io__write_string_4_p_0(Stream_13, Follow_19);
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_28, (MR_Char) 108);
  if (succeeded)
  {
    MR_Integer PredNum_35;
    MR_Integer ProcNum_36;
    MR_String Var_93;
    MR_String Var_103;

    hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_22, &PredNum_35);
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_23, &ProcNum_36);
    parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% pred id: ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[0]), PredNum_35, &Var_93);
    mercury__io__write_string_4_p_0(Stream_13, Var_93);
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) ", proc id: ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[0]), ProcNum_36, &Var_103);
    mercury__io__write_string_4_p_0(Stream_13, Var_103);
    mercury__io__write_string_4_p_0(Stream_13, Follow_19);
    if (!((MaybeUnifyContext_26 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word CallUnifyContext_37 = ((MR_Word) ((MR_hl_field(1, MaybeUnifyContext_26, (MR_Integer) 0))));
      MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, CallUnifyContext_37, (MR_Integer) 0))));
      MR_Word VarType_42;
      MR_Word RHS_43 = ((MR_Word) ((MR_hl_field(0, CallUnifyContext_37, (MR_Integer) 1))));
      MR_Word InstVarSet_45;

      if ((TypeQual_16 == (MR_Word) ((MR_Unsigned) 0U)))
        VarType_42 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word VarTable_39 = ((MR_Word) ((MR_hl_field(1, TypeQual_16, (MR_Integer) 1))));
        MR_Word UniType_41;

        parse_tree__var_table__lookup_var_type_3_p_0(VarTable_39, Var_40, &UniType_41);
        {
          VarType_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, VarType_42, 0) = ((MR_Box) (UniType_41));
        }
      }
      parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% unify context: ");
      parse_tree__parse_tree_out_term__mercury_output_var_src_6_p_0(VarNameSrc_15, VarNamePrint_17, Var_40, Stream_13);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_45);
      hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_12_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, InstVarSet_45, TypeQual_16, VarNamePrint_17, Indent_18, VarType_42, RHS_43);
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
        MR_String Var_64;
        MR_Word SymName0_28;
        MR_Integer Arity_29;
        MR_Word TypeCtor_30;
        MR_Word Type_33;
        MR_Word TVarSet_34;

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
        Var_64 = hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(ModuleInfo_15, VarNameSrc_16, VarNamePrint_19, ConsId_32, ArgVars_27);
        mercury__io__write_string_4_p_0(Stream_14, Var_64);
        succeeded = (MaybeType_21 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Type_33 = ((MR_Word) ((MR_hl_field(1, MaybeType_21, (MR_Integer) 0))));
          succeeded = (TypeQual_18 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            TVarSet_34 = ((MR_Word) ((MR_hl_field(1, TypeQual_18, (MR_Integer) 0))));
        }
        if (succeeded)
        {
          mercury__io__write_string_4_p_0(Stream_14, (MR_String) " : ");
          parse_tree__mercury_to_mercury__mercury_output_type_6_p_0(TVarSet_34, VarNamePrint_19, Type_33, Stream_14);
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Purity_36 = ((((MR_Unsigned) ((MR_hl_field(2, RHS_22, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
        MR_Word Groundness_37 = ((((MR_Unsigned) ((MR_hl_field(2, RHS_22, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
        MR_Word PredOrFunc_38 = ((MR_Unsigned) ((MR_hl_field(2, RHS_22, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word NonLocals_40 = ((MR_Word) ((MR_hl_field(2, RHS_22, (MR_Integer) 2))));
        MR_Word VarsModes_41 = ((MR_Word) ((MR_hl_field(2, RHS_22, (MR_Integer) 3))));
        MR_Word Det_42 = ((MR_Unsigned) ((MR_hl_field(2, RHS_22, (MR_Integer) 4))) & (MR_Integer) 7);
        MR_Word Goal_43 = ((MR_Word) ((MR_hl_field(2, RHS_22, (MR_Integer) 5))));
        MR_Integer Indent1_44 = (MR_Integer) ((MR_Unsigned) Indent_20 + (MR_Unsigned) 1);
        MR_Word Lang_45;
        MR_String DumpOptions_58;
        MR_String Var_70;
        MR_Word Var_72;
        MR_Word Type_134;
        MR_Word TVarSet_135;

        Var_70 = parse_tree__prog_out__purity_prefix_to_string_1_f_0(Purity_36);
        mercury__io__write_string_4_p_0(Stream_14, Var_70);
        Var_72 = ((MR_Word) ((MR_hl_field(0, Info_13, (MR_Integer) 4))));
        Lang_45 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Var_72);
        switch (Groundness_37) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            switch (PredOrFunc_38) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word ArgVarsModes_51;
                  MR_Word RetVarMode_52;
                  MR_String RetModeStr_56;
                  MR_String DetStr_133;
                  MR_Box conv0_RetVarMode_52;

                  parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[1]), VarsModes_41, &ArgVarsModes_51, &conv0_RetVarMode_52);
                  RetVarMode_52 = ((MR_Word) (conv0_RetVarMode_52));
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) "(");
                  if ((ArgVarsModes_51 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) "(");
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) "any_func");
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) ")");
                  }
                  else
                  {
                    MR_String ArgModesStr_55;

                    ArgModesStr_55 = hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0(Lang_45, VarNameSrc_16, InstVarSet_17, VarNamePrint_19, ArgVarsModes_51);
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) "any_func");
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) "(");
                    mercury__io__write_string_4_p_0(Stream_14, ArgModesStr_55);
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) ")");
                  }
                  RetModeStr_56 = hlds__hlds_out__hlds_out_util__var_mode_to_string_5_f_0(Lang_45, VarNameSrc_16, InstVarSet_17, VarNamePrint_19, RetVarMode_52);
                  DetStr_133 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Det_42);
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) " = (");
                  mercury__io__write_string_4_p_0(Stream_14, RetModeStr_56);
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) ") is ");
                  mercury__io__write_string_4_p_0(Stream_14, DetStr_133);
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) " :-\n");
                  hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_13, Stream_14, ModuleInfo_15, VarNameSrc_16, TypeQual_18, VarNamePrint_19, Indent1_44, (MR_String) "\n", Goal_43);
                  parse_tree__prog_out__write_indent_4_p_0(Stream_14, Indent_20);
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) ")");
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_String DetStr_50;

                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) "(");
                  if ((VarsModes_41 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) "(");
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) "any_pred");
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) ")");
                  }
                  else
                  {
                    MR_String ModesStr_49;

                    ModesStr_49 = hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0(Lang_45, VarNameSrc_16, InstVarSet_17, VarNamePrint_19, VarsModes_41);
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) "any_pred");
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) "(");
                    mercury__io__write_string_4_p_0(Stream_14, ModesStr_49);
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) ")");
                  }
                  DetStr_50 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Det_42);
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) " is ");
                  mercury__io__write_string_4_p_0(Stream_14, DetStr_50);
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) " :-\n");
                  hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_13, Stream_14, ModuleInfo_15, VarNameSrc_16, TypeQual_18, VarNamePrint_19, Indent1_44, (MR_String) "\n", Goal_43);
                  parse_tree__prog_out__write_indent_4_p_0(Stream_14, Indent_20);
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) ")");
                }
                break;
            }
            break;
          case (MR_Integer) 0:
            switch (PredOrFunc_38) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word ArgVarsModes_173;
                  MR_Word RetVarMode_174;
                  MR_String RetModeStr_178;
                  MR_String DetStr_204;
                  MR_Box conv1_RetVarMode_174;

                  parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[1]), VarsModes_41, &ArgVarsModes_173, &conv1_RetVarMode_174);
                  RetVarMode_174 = ((MR_Word) (conv1_RetVarMode_174));
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) "(");
                  if ((ArgVarsModes_173 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) "(");
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) "func");
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) ")");
                  }
                  else
                  {
                    MR_String ArgModesStr_153;

                    ArgModesStr_153 = hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0(Lang_45, VarNameSrc_16, InstVarSet_17, VarNamePrint_19, ArgVarsModes_173);
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) "func");
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) "(");
                    mercury__io__write_string_4_p_0(Stream_14, ArgModesStr_153);
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) ")");
                  }
                  RetModeStr_178 = hlds__hlds_out__hlds_out_util__var_mode_to_string_5_f_0(Lang_45, VarNameSrc_16, InstVarSet_17, VarNamePrint_19, RetVarMode_174);
                  DetStr_204 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Det_42);
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) " = (");
                  mercury__io__write_string_4_p_0(Stream_14, RetModeStr_178);
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) ") is ");
                  mercury__io__write_string_4_p_0(Stream_14, DetStr_204);
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) " :-\n");
                  hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_13, Stream_14, ModuleInfo_15, VarNameSrc_16, TypeQual_18, VarNamePrint_19, Indent1_44, (MR_String) "\n", Goal_43);
                  parse_tree__prog_out__write_indent_4_p_0(Stream_14, Indent_20);
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) ")");
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_String DetStr_238;

                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) "(");
                  if ((VarsModes_41 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) "(");
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) "pred");
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) ")");
                  }
                  else
                  {
                    MR_String ModesStr_214;

                    ModesStr_214 = hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0(Lang_45, VarNameSrc_16, InstVarSet_17, VarNamePrint_19, VarsModes_41);
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) "pred");
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) "(");
                    mercury__io__write_string_4_p_0(Stream_14, ModesStr_214);
                    mercury__io__write_string_4_p_0(Stream_14, (MR_String) ")");
                  }
                  DetStr_238 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(Det_42);
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) " is ");
                  mercury__io__write_string_4_p_0(Stream_14, DetStr_238);
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) " :-\n");
                  hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0(Info_13, Stream_14, ModuleInfo_15, VarNameSrc_16, TypeQual_18, VarNamePrint_19, Indent1_44, (MR_String) "\n", Goal_43);
                  parse_tree__prog_out__write_indent_4_p_0(Stream_14, Indent_20);
                  mercury__io__write_string_4_p_0(Stream_14, (MR_String) ")");
                }
                break;
            }
            break;
        }
        succeeded = (MaybeType_21 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Type_134 = ((MR_Word) ((MR_hl_field(1, MaybeType_21, (MR_Integer) 0))));
          succeeded = (TypeQual_18 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            TVarSet_135 = ((MR_Word) ((MR_hl_field(1, TypeQual_18, (MR_Integer) 0))));
        }
        if (succeeded)
        {
          mercury__io__write_string_4_p_0(Stream_14, (MR_String) " : ");
          parse_tree__mercury_to_mercury__mercury_output_type_6_p_0(TVarSet_135, VarNamePrint_19, Type_134, Stream_14);
        }
        DumpOptions_58 = ((MR_String) ((MR_hl_field(0, Info_13, (MR_Integer) 0))));
        succeeded = mercury__string__contains_char_2_p_0(DumpOptions_58, (MR_Char) 110);
        if (succeeded)
          if (!((NonLocals_40 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            mercury__io__nl_3_p_0(Stream_14);
            parse_tree__prog_out__write_indent_4_p_0(Stream_14, Indent_20);
            mercury__io__write_string_4_p_0(Stream_14, (MR_String) "% lambda nonlocals: ");
            parse_tree__parse_tree_out_term__mercury_output_vars_src_6_p_0(VarNameSrc_16, VarNamePrint_19, NonLocals_40, Stream_14);
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
  MR_Word VarType_31;
  MR_Word InstVarSet_32;

  parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
  parse_tree__parse_tree_out_term__mercury_output_var_src_6_p_0(VarNameSrc_15, VarNamePrint_17, LHS_22, Stream_13);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
  if ((TypeQual_16 == (MR_Word) ((MR_Unsigned) 0U)))
    VarType_31 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word VarTable_29 = ((MR_Word) ((MR_hl_field(1, TypeQual_16, (MR_Integer) 1))));
    MR_Word UniType_30;

    parse_tree__var_table__lookup_var_type_3_p_0(VarTable_29, LHS_22, &UniType_30);
    {
      VarType_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, VarType_31, 0) = ((MR_Box) (UniType_30));
    }
  }
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_32);
  hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_12_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, InstVarSet_32, TypeQual_16, VarNamePrint_17, Indent_18, VarType_31, RHS_23);
  mercury__io__write_string_4_p_0(Stream_13, Follow_19);
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_27, (MR_Char) 117);
  if (!(succeeded))
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_27, (MR_Char) 112);
  if (succeeded)
  {
    MR_Word ComplMode_33;
    MR_Word CanFail_34;
    MR_Word TypeInfoVars_35;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;

    succeeded = ((((MR_tag((MR_Word) Unification_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Unification_25, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      ComplMode_33 = ((MR_Word) ((MR_hl_field(3, Unification_25, (MR_Integer) 1))));
      CanFail_34 = ((MR_Unsigned) ((MR_hl_field(3, Unification_25, (MR_Integer) 2))) & (MR_Integer) 1);
      TypeInfoVars_35 = ((MR_Word) ((MR_hl_field(3, Unification_25, (MR_Integer) 3))));
      succeeded = (CanFail_34 == (MR_Integer) 0);
      if (succeeded)
      {
        Var_46 = ((MR_Word) ((MR_hl_field(0, ComplMode_33, (MR_Integer) 0))));
        Var_47 = ((MR_Word) ((MR_hl_field(0, ComplMode_33, (MR_Integer) 1))));
        Var_48 = ((MR_Word) ((MR_hl_field(0, ComplMode_33, (MR_Integer) 2))));
        Var_49 = ((MR_Word) ((MR_hl_field(0, ComplMode_33, (MR_Integer) 3))));
        succeeded = (Var_46 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (Var_47 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = (Var_48 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              succeeded = (Var_49 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
        if (succeeded)
          succeeded = (TypeInfoVars_35 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (!(succeeded))
    {
      succeeded = mercury__string__contains_char_2_p_0(Follow_19, (MR_Char) 10);
      if (!(succeeded))
        mercury__io__nl_3_p_0(Stream_13);
      hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_51_93_95_48_10_p_0(Info_12, Stream_13, VarNameSrc_15, InstVarSet_32, VarNamePrint_17, Indent_18, Unification_25);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__529__1_4_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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
  MR_Word GoalExpr_22 = ((MR_Word) ((MR_hl_field(0, Goal_20, (MR_Integer) 0))));
  MR_Word GoalInfo_23 = ((MR_Word) ((MR_hl_field(0, Goal_20, (MR_Integer) 1))));
  MR_String DumpOptions_24 = ((MR_String) ((MR_hl_field(0, Info_12, (MR_Integer) 0))));
  MR_Word CodeGenInfo_86;

  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_24, (MR_Char) 99);
  if (succeeded)
  {
    MR_Word Context_25;

    Context_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_23);
    hlds__hlds_out__hlds_out_util__maybe_output_context_comment_6_p_0(Stream_13, Indent_18, (MR_String) "", Context_25);
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_24, (MR_Char) 80);
  if (succeeded)
  {
    MR_Word GoalId_26;
    MR_Integer GoalIdNum_27;

    GoalId_26 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_23);
    GoalIdNum_27 = (MR_Integer) (GoalId_26);
    succeeded = (GoalIdNum_27 < (MR_Integer) 0);
    if (!(succeeded))
    {
      parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% goal id: ");
      mercury__io__write_int_4_p_0(Stream_13, GoalIdNum_27);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
    }
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_24, (MR_Char) 110);
  if (succeeded)
  {
    MR_Word NonLocalsSet_28;
    MR_Word NonLocalsList_29;

    NonLocalsSet_28 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_23);
    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsSet_28, &NonLocalsList_29);
    if (!((NonLocalsList_29 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% nonlocals: ");
      parse_tree__parse_tree_out_term__mercury_output_vars_src_6_p_0(VarNameSrc_15, VarNamePrint_17, NonLocalsList_29, Stream_13);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
    }
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_24, (MR_Char) 112);
  if (succeeded)
  {
    MR_Word PreDeathList_33;
    MR_Word TypeCtorInfo_289_289;
    MR_Word PreDeaths_32;
    MR_Word PreBirthList_37;
    MR_Word TypeCtorInfo_290_290;
    MR_Word PreBirths_36;

    succeeded = hlds__hlds_llds__goal_info_maybe_get_pre_deaths_2_p_0(GoalInfo_23, &PreDeaths_32);
    if (succeeded)
    {
      TypeCtorInfo_289_289 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
      PreDeathList_33 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_289_289, PreDeaths_32);
      succeeded = (PreDeathList_33 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% pre-deaths: ");
      parse_tree__parse_tree_out_term__mercury_output_vars_src_6_p_0(VarNameSrc_15, VarNamePrint_17, PreDeathList_33, Stream_13);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
    }
    succeeded = hlds__hlds_llds__goal_info_maybe_get_pre_births_2_p_0(GoalInfo_23, &PreBirths_36);
    if (succeeded)
    {
      TypeCtorInfo_290_290 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
      PreBirthList_37 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_290_290, PreBirths_36);
      succeeded = (PreBirthList_37 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% pre-births: ");
      parse_tree__parse_tree_out_term__mercury_output_vars_src_6_p_0(VarNameSrc_15, VarNamePrint_17, PreBirthList_37, Stream_13);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
    }
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_24, (MR_Char) 66);
  if (succeeded)
  {
    MR_Word ProducingVars_40;
    MR_Word ConsumingVars_42;
    MR_Word MakeVisibleVars_44;
    MR_Word NeedVisibleVars_46;

    ProducingVars_40 = hlds__hlds_goal__producing_vars_1_f_0(GoalInfo_23);
    succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProducingVars_40);
    if (succeeded)
    {
      MR_Word ProducingVarsList_41;

      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProducingVars_40, &ProducingVarsList_41);
      parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% producing vars: ");
      parse_tree__parse_tree_out_term__mercury_output_vars_src_6_p_0(VarNameSrc_15, VarNamePrint_17, ProducingVarsList_41, Stream_13);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
    }
    ConsumingVars_42 = hlds__hlds_goal__consuming_vars_1_f_0(GoalInfo_23);
    succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsumingVars_42);
    if (succeeded)
    {
      MR_Word ConsumingVarsList_43;

      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsumingVars_42, &ConsumingVarsList_43);
      parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% consuming vars: ");
      parse_tree__parse_tree_out_term__mercury_output_vars_src_6_p_0(VarNameSrc_15, VarNamePrint_17, ConsumingVarsList_43, Stream_13);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
    }
    MakeVisibleVars_44 = hlds__hlds_goal__make_visible_vars_1_f_0(GoalInfo_23);
    succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MakeVisibleVars_44);
    if (succeeded)
    {
      MR_Word MakeVisibleVarsList_45;

      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MakeVisibleVars_44, &MakeVisibleVarsList_45);
      parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% make_visible vars: ");
      parse_tree__parse_tree_out_term__mercury_output_vars_src_6_p_0(VarNameSrc_15, VarNamePrint_17, MakeVisibleVarsList_45, Stream_13);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
    }
    NeedVisibleVars_46 = hlds__hlds_goal__need_visible_vars_1_f_0(GoalInfo_23);
    succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NeedVisibleVars_46);
    if (succeeded)
    {
      MR_Word NeedVisibleVarsList_47;

      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NeedVisibleVars_46, &NeedVisibleVarsList_47);
      parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% need_visible vars: ");
      parse_tree__parse_tree_out_term__mercury_output_vars_src_6_p_0(VarNameSrc_15, VarNamePrint_17, NeedVisibleVarsList_47, Stream_13);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
    }
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_24, (MR_Char) 100);
  if (succeeded)
  {
    MR_Word Determinism_48;
    MR_String Var_154;

    parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% determinism: ");
    Determinism_48 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_23);
    Var_154 = parse_tree__prog_out__determinism_to_string_1_f_0(Determinism_48);
    mercury__io__write_string_4_p_0(Stream_13, Var_154);
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_24, (MR_Char) 101);
  if (succeeded)
  {
    MR_Word MaybeRbmmInfo_49;

    MaybeRbmmInfo_49 = hlds__hlds_goal__goal_info_get_maybe_rbmm_1_f_0(GoalInfo_23);
    if (!((MaybeRbmmInfo_49 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word RbmmInfo_50 = ((MR_Word) ((MR_hl_field(1, MaybeRbmmInfo_49, (MR_Integer) 0))));
      MR_Word Created_51 = ((MR_Word) ((MR_hl_field(0, RbmmInfo_50, (MR_Integer) 0))));
      MR_Word Removed_52 = ((MR_Word) ((MR_hl_field(0, RbmmInfo_50, (MR_Integer) 1))));
      MR_Word Carried_53 = ((MR_Word) ((MR_hl_field(0, RbmmInfo_50, (MR_Integer) 2))));
      MR_Word Alloc_54 = ((MR_Word) ((MR_hl_field(0, RbmmInfo_50, (MR_Integer) 3))));
      MR_Word Used_55 = ((MR_Word) ((MR_hl_field(0, RbmmInfo_50, (MR_Integer) 4))));
      MR_Word CreatedList_56;
      MR_Word RemovedList_57;
      MR_Word CarriedList_58;
      MR_Word AllocList_59;
      MR_Word UsedList_60;

      CreatedList_56 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), Created_51);
      RemovedList_57 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), Removed_52);
      CarriedList_58 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), Carried_53);
      AllocList_59 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), Alloc_54);
      UsedList_60 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), Used_55);
      parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% Created regions: ");
      parse_tree__parse_tree_out_term__mercury_output_vars_src_6_p_0(VarNameSrc_15, VarNamePrint_17, CreatedList_56, Stream_13);
      mercury__io__nl_3_p_0(Stream_13);
      parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% Removed regions: ");
      parse_tree__parse_tree_out_term__mercury_output_vars_src_6_p_0(VarNameSrc_15, VarNamePrint_17, RemovedList_57, Stream_13);
      mercury__io__nl_3_p_0(Stream_13);
      parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% Carried regions: ");
      parse_tree__parse_tree_out_term__mercury_output_vars_src_6_p_0(VarNameSrc_15, VarNamePrint_17, CarriedList_58, Stream_13);
      mercury__io__nl_3_p_0(Stream_13);
      parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% Allocated into regions: ");
      parse_tree__parse_tree_out_term__mercury_output_vars_src_6_p_0(VarNameSrc_15, VarNamePrint_17, AllocList_59, Stream_13);
      mercury__io__nl_3_p_0(Stream_13);
      parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% Used regions: ");
      parse_tree__parse_tree_out_term__mercury_output_vars_src_6_p_0(VarNameSrc_15, VarNamePrint_17, UsedList_60, Stream_13);
      mercury__io__nl_3_p_0(Stream_13);
    }
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_24, (MR_Char) 122);
  if (succeeded)
  {
    MR_Word Purity_61;

    Purity_61 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo_23);
    switch (Purity_61) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% impure\n");
        }
        break;
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% semipure\n");
        }
        break;
    }
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_24, (MR_Char) 69);
  if (succeeded)
  {
    MR_Word MaybeDPInfo_62;

    MaybeDPInfo_62 = hlds__hlds_goal__goal_info_get_maybe_dp_info_1_f_0(GoalInfo_23);
    if (!((MaybeDPInfo_62 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word MdprofInst_63;
      MR_Word MaybeDPCoverageInfo_64;
      MR_Word Var_192 = ((MR_Word) ((MR_hl_field(1, MaybeDPInfo_62, (MR_Integer) 0))));

      MdprofInst_63 = ((MR_Unsigned) ((MR_hl_field(0, Var_192, (MR_Integer) 0))) & (MR_Integer) 1);
      MaybeDPCoverageInfo_64 = ((MR_Word) ((MR_hl_field(0, Var_192, (MR_Integer) 1))));
      switch (MdprofInst_63) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% mdprof instrumentation\n");
          }
          break;
        case (MR_Integer) 1:
          {
          }
          break;
      }
      if (!((MaybeDPCoverageInfo_64 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word CoverageInfo_65 = ((MR_Word) ((MR_hl_field(1, MaybeDPCoverageInfo_64, (MR_Integer) 0))));
        MR_Word IsTrivial_66 = ((((MR_Unsigned) ((MR_hl_field(0, CoverageInfo_65, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
        MR_Word PortCountsGiveCoverageAfter_67 = ((MR_Unsigned) ((MR_hl_field(0, CoverageInfo_65, (MR_Integer) 0))) & (MR_Integer) 1);

        parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
        switch (IsTrivial_66) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% nontrivial goal\n");
            break;
          case (MR_Integer) 0:
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% trivial goal\n");
            break;
        }
        parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
        switch (PortCountsGiveCoverageAfter_67) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% no port counts give coverage after\n");
            break;
          case (MR_Integer) 0:
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% port counts give coverage after\n");
            break;
        }
      }
    }
  }
  hlds__hlds_out__hlds_out_goal__write_goal_expr_11_p_0(Info_12, Stream_13, ModuleInfo_14, VarNameSrc_15, TypeQual_16, VarNamePrint_17, Indent_18, Follow_19, GoalExpr_22);
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_24, (MR_Char) 105);
  if (succeeded)
  {
    MR_Word InstMapDelta_68;
    MR_Word TypeCtorInfo_300_300;
    MR_Word Vars_69;

    InstMapDelta_68 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_23);
    succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstMapDelta_68);
    if (succeeded)
    {
      hlds__instmap__instmap_delta_changed_vars_2_p_0(InstMapDelta_68, &Vars_69);
      TypeCtorInfo_300_300 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
      succeeded = parse_tree__set_of_var__is_empty_1_p_0(TypeCtorInfo_300_300, Vars_69);
    }
    if (!(succeeded))
    {
      parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
      succeeded = mercury__string__contains_char_2_p_0(DumpOptions_24, (MR_Char) 68);
      if (succeeded)
      {
        succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(InstMapDelta_68);
        if (succeeded)
          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% new insts: unreachable\n");
        else
        {
          MR_Word NewVarInsts_70;

          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% new insts:\n");
          hlds__instmap__instmap_delta_to_assoc_list_2_p_0(InstMapDelta_68, &NewVarInsts_70);
          hlds__hlds_out__hlds_out_goal__write_new_var_inst_list_7_p_0(Stream_13, VarNameSrc_15, VarNamePrint_17, Indent_18, NewVarInsts_70);
        }
      }
      else
      {
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% vars with new insts: ");
        hlds__hlds_out__hlds_out_goal__write_instmap_delta_vars_6_p_0(Stream_13, VarNameSrc_15, VarNamePrint_17, InstMapDelta_68);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
      }
    }
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_24, (MR_Char) 112);
  if (succeeded)
  {
    MR_Word PostDeathList_72;
    MR_Word TypeCtorInfo_301_301;
    MR_Word PostDeaths_71;
    MR_Word PostBirthList_76;
    MR_Word TypeCtorInfo_302_302;
    MR_Word PostBirths_75;

    succeeded = hlds__hlds_llds__goal_info_maybe_get_post_deaths_2_p_0(GoalInfo_23, &PostDeaths_71);
    if (succeeded)
    {
      TypeCtorInfo_301_301 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
      PostDeathList_72 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_301_301, PostDeaths_71);
      succeeded = (PostDeathList_72 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% post-deaths: ");
      parse_tree__parse_tree_out_term__mercury_output_vars_src_6_p_0(VarNameSrc_15, VarNamePrint_17, PostDeathList_72, Stream_13);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
    }
    succeeded = hlds__hlds_llds__goal_info_maybe_get_post_births_2_p_0(GoalInfo_23, &PostBirths_75);
    if (succeeded)
    {
      TypeCtorInfo_302_302 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
      PostBirthList_76 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_302_302, PostBirths_75);
      succeeded = (PostBirthList_76 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% post-births: ");
      parse_tree__parse_tree_out_term__mercury_output_vars_src_6_p_0(VarNameSrc_15, VarNamePrint_17, PostBirthList_76, Stream_13);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
    }
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_24, (MR_Char) 82);
  if (succeeded)
  {
    MR_Word ReuseDescription_81;
    MR_Word ListLFU_82;
    MR_Word ListLBU_83;
    MR_Word TypeCtorInfo_303_303;
    MR_Word LFU_79;
    MR_Word LBU_80;
    MR_Word Var_234;
    MR_Word Var_235;
    MR_Word Var_236;

    Var_234 = hlds__hlds_goal__goal_info_get_maybe_lfu_1_f_0(GoalInfo_23);
    succeeded = (Var_234 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      LFU_79 = ((MR_Word) ((MR_hl_field(1, Var_234, (MR_Integer) 0))));
      Var_235 = hlds__hlds_goal__goal_info_get_maybe_lbu_1_f_0(GoalInfo_23);
      succeeded = (Var_235 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        LBU_80 = ((MR_Word) ((MR_hl_field(1, Var_235, (MR_Integer) 0))));
        Var_236 = hlds__hlds_goal__goal_info_get_maybe_reuse_1_f_0(GoalInfo_23);
        succeeded = (Var_236 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ReuseDescription_81 = ((MR_Word) ((MR_hl_field(1, Var_236, (MR_Integer) 0))));
          TypeCtorInfo_303_303 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          parse_tree__set_of_var__to_sorted_list_2_p_0(TypeCtorInfo_303_303, LFU_79, &ListLFU_82);
          parse_tree__set_of_var__to_sorted_list_2_p_0(TypeCtorInfo_303_303, LBU_80, &ListLBU_83);
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
    {
      parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% LFU: ");
      parse_tree__parse_tree_out_term__mercury_output_vars_src_6_p_0(VarNameSrc_15, VarNamePrint_17, ListLFU_82, Stream_13);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
      parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% LBU: ");
      parse_tree__parse_tree_out_term__mercury_output_vars_src_6_p_0(VarNameSrc_15, VarNamePrint_17, ListLBU_83, Stream_13);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
      parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% Reuse: ");
      switch (MR_tag((MR_Word) ReuseDescription_81)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ReuseDescription_81)) {
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
            MR_Word Messages_84 = ((MR_Word) ((MR_hl_field(1, ReuseDescription_81, (MR_Integer) 0))));

            mercury__io__write_string_4_p_0(Stream_13, (MR_String) "missed (");
            parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[4]), (MR_String) ", ", Messages_84, Stream_13);
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) ")");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ShortReuseDescr_85 = ((MR_Word) ((MR_hl_field(2, ReuseDescription_81, (MR_Integer) 0))));

            mercury__io__write_string_4_p_0(Stream_13, (MR_String) "potential reuse (");
            hlds__hlds_out__hlds_out_goal__write_short_reuse_description_6_p_0(Stream_13, ShortReuseDescr_85, VarNameSrc_15, VarNamePrint_17);
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) ")");
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ShortReuseDescr_283 = ((MR_Word) ((MR_hl_field(3, ReuseDescription_81, (MR_Integer) 0))));

            mercury__io__write_string_4_p_0(Stream_13, (MR_String) "reuse (");
            hlds__hlds_out__hlds_out_goal__write_short_reuse_description_6_p_0(Stream_13, ShortReuseDescr_283, VarNameSrc_15, VarNamePrint_17);
            mercury__io__write_string_4_p_0(Stream_13, (MR_String) ")");
          }
          break;
      }
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\n");
    }
  }
  CodeGenInfo_86 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(GoalInfo_23);
  if (!((CodeGenInfo_86 == (MR_Word) ((MR_Unsigned) 0U))))
    hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_8_p_0(Info_12, Stream_13, GoalInfo_23, VarNameSrc_15, VarNamePrint_17, Indent_18);
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_24, (MR_Char) 103);
  if (succeeded)
  {
    MR_Word Features_88;
    MR_Word FeatureList_89;

    Features_88 = hlds__hlds_goal__goal_info_get_features_1_f_0(GoalInfo_23);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0), Features_88, &FeatureList_89);
    if (!((FeatureList_89 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
      mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% Goal features:  ");
      mercury__io__write_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[1]), Stream_13, ((MR_Box) (FeatureList_89)));
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
  MR_Word TypeVarSet_35;
  MR_Word InstVarSet_36;
  MR_String Code_39;
  MR_String Var_97;
  MR_String Var_107;

  ForeignLang_29 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attributes_22);
  ForeignLangStr_30 = libs__globals__foreign_language_string_1_f_0(ForeignLang_29);
  PredStr_31 = hlds__hlds_out__hlds_out_util__pred_id_to_dev_string_2_f_0(ModuleInfo_14, PredId_23);
  hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_23, &PredIdInt_32);
  hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_24, &ProcIdInt_33);
  parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\044pragma_foreign_proc(/* ");
  mercury__io__write_string_4_p_0(Stream_13, ForeignLangStr_30);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) " */, ");
  mercury__io__write_string_4_p_0(Stream_13, PredStr_31);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) " pred ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[0]), PredIdInt_32, &Var_97);
  mercury__io__write_string_4_p_0(Stream_13, Var_97);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) " proc ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[0]), ProcIdInt_33, &Var_107);
  mercury__io__write_string_4_p_0(Stream_13, Var_107);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) ",\n");
  if (!((MaybeTraceRuntimeCond_27 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word TraceRuntimeCond_34 = ((MR_Word) ((MR_hl_field(1, MaybeTraceRuntimeCond_27, (MR_Integer) 0))));

    parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% trace_runtime_cond(");
    parse_tree__parse_tree_out_clause__mercury_output_trace_expr_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0), Stream_13, (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[3]), TraceRuntimeCond_34);
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) ")\n");
  }
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_35);
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_36);
  parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "[");
  hlds__hlds_out__hlds_out_goal__write_foreign_args_9_p_0(Stream_13, VarNameSrc_15, TypeVarSet_35, InstVarSet_36, VarNamePrint_17, Indent_18, Args_25);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "],\n");
  if (!((ExtraArgs_26 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) "{");
    hlds__hlds_out__hlds_out_goal__write_foreign_args_9_p_0(Stream_13, VarNameSrc_15, TypeVarSet_35, InstVarSet_36, VarNamePrint_17, Indent_18, ExtraArgs_26);
    mercury__io__write_string_4_p_0(Stream_13, (MR_String) "},\n");
  }
  Code_39 = ((MR_String) ((MR_hl_field(0, PragmaCode_28, (MR_Integer) 0))));
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\"");
  mercury__io__write_string_4_p_0(Stream_13, Code_39);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "\")");
  mercury__io__write_string_4_p_0(Stream_13, Follow_19);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_foreign_args_9_p_0(
  MR_Word Stream_1,
  MR_Word VarNameSrc_2,
  MR_Word TVarSet_3,
  MR_Word InstVarSet_4,
  MR_Word VarNamePrint_5,
  MR_Integer Indent_6,
  MR_Word HeadVar__7_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Arg_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, (MR_Integer) 0))));
      MR_Word Args_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, (MR_Integer) 1))));
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Arg_25, (MR_Integer) 0))));
      MR_Word MaybeNameMode_29 = ((MR_Word) ((MR_hl_field(0, Arg_25, (MR_Integer) 1))));
      MR_Word Type_30 = ((MR_Word) ((MR_hl_field(0, Arg_25, (MR_Integer) 2))));
      MR_Word BoxPolicy_31 = ((MR_Unsigned) ((MR_hl_field(0, Arg_25, (MR_Integer) 3))) & (MR_Integer) 1);

      parse_tree__parse_tree_out_term__mercury_output_var_src_6_p_0(VarNameSrc_2, VarNamePrint_5, Var_28, Stream_1);
      if (!((MaybeNameMode_29 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_String Name_32;
        MR_Word Mode_33;
        MR_String ModeStr_34;
        MR_Word Var_40 = ((MR_Word) ((MR_hl_field(1, MaybeNameMode_29, (MR_Integer) 0))));

        Name_32 = ((MR_String) ((MR_hl_field(0, Var_40, (MR_Integer) 0))));
        Mode_33 = ((MR_Word) ((MR_hl_field(0, Var_40, (MR_Integer) 1))));
        ModeStr_34 = parse_tree__parse_tree_out_inst__mercury_mode_to_string_3_f_0((MR_Integer) 1, InstVarSet_4, Mode_33);
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) "/");
        mercury__io__write_string_4_p_0(Stream_1, Name_32);
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) "(");
        mercury__io__write_string_4_p_0(Stream_1, ModeStr_34);
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) ")");
      }
      switch (BoxPolicy_31) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\044alwaysboxed");
          break;
        case (MR_Integer) 0:
          {
          }
          break;
      }
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\100");
      parse_tree__mercury_to_mercury__mercury_output_type_6_p_0(TVarSet_3, VarNamePrint_5, Type_30, Stream_1);
      if (!((Args_26 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word next_value_of_HeadVar__7_7;

        mercury__io__write_string_4_p_0(Stream_1, (MR_String) ",\n");
        parse_tree__prog_out__write_indent_4_p_0(Stream_1, Indent_6);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__7_7 = Args_26;
        HeadVar__7_7 = next_value_of_HeadVar__7_7;
        continue;
      }
    }
    break;
  }
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

  switch (MR_tag((MR_Word) GenericCall_22)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word PredVar_28 = ((MR_Word) ((MR_hl_field(0, GenericCall_22, (MR_Integer) 0))));
        MR_Word Purity_29 = ((((MR_Unsigned) ((MR_hl_field(0, GenericCall_22, (MR_Integer) 1))) >> 1)) & (MR_Integer) 3);
        MR_Word PredOrFunc_30 = ((MR_Unsigned) ((MR_hl_field(0, GenericCall_22, (MR_Integer) 1))) & (MR_Integer) 1);

        switch (PredOrFunc_30) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word FuncArgVars_32;
              MR_Word FuncRetVar_33;
              MR_Word Var_68;
              MR_String Var_70;
              MR_String Var_75;
              MR_Box conv1_FuncRetVar_33;

              succeeded = mercury__string__contains_char_2_p_0(DumpOptions_27, (MR_Char) 108);
              if (succeeded)
              {
                parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
                mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% higher-order function application\n");
                hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_5_p_0(Stream_13, Indent_18, MaybeArgRegs_25);
              }
              {
                Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_68, 0) = ((MR_Box) (PredVar_28));
                MR_hl_field(1, Var_68, 1) = ((MR_Box) (ArgVars_23));
              }
              parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), Var_68, &FuncArgVars_32, &conv1_FuncRetVar_33);
              FuncRetVar_33 = ((MR_Word) (conv1_FuncRetVar_33));
              parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
              Var_70 = parse_tree__prog_out__purity_prefix_to_string_1_f_0(Purity_29);
              mercury__io__write_string_4_p_0(Stream_13, Var_70);
              parse_tree__parse_tree_out_term__mercury_output_var_src_6_p_0(VarNameSrc_15, VarNamePrint_17, FuncRetVar_33, Stream_13);
              mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
              Var_75 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(VarNameSrc_15, VarNamePrint_17, (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[2]), FuncArgVars_32);
              mercury__io__write_string_4_p_0(Stream_13, Var_75);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_String Var_56;
              MR_String Var_58;
              MR_Word Var_62;

              succeeded = mercury__string__contains_char_2_p_0(DumpOptions_27, (MR_Char) 108);
              if (succeeded)
              {
                parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
                mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% higher-order predicate call\n");
                hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_5_p_0(Stream_13, Indent_18, MaybeArgRegs_25);
              }
              parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
              Var_56 = parse_tree__prog_out__purity_prefix_to_string_1_f_0(Purity_29);
              mercury__io__write_string_4_p_0(Stream_13, Var_56);
              {
                Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_62, 0) = ((MR_Box) (PredVar_28));
                MR_hl_field(1, Var_62, 1) = ((MR_Box) (ArgVars_23));
              }
              Var_58 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(VarNameSrc_15, VarNamePrint_17, (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[3]), Var_62);
              mercury__io__write_string_4_p_0(Stream_13, Var_58);
            }
            break;
        }
        mercury__io__write_string_4_p_0(Stream_13, Follow_19);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TCInfoVar_34 = ((MR_Word) ((MR_hl_field(1, GenericCall_22, (MR_Integer) 0))));
        MR_Integer MethodNum_35 = ((MR_Integer) ((MR_hl_field(1, GenericCall_22, (MR_Integer) 1))));
        MR_Word Context_38;
        MR_Word TCInfoTerm_40;
        MR_Word MethodNumTerm_41;
        MR_Word ArgTerms_42;
        MR_Word Term_43;
        MR_Word Var_86;
        MR_Word Var_87;

        succeeded = mercury__string__contains_char_2_p_0(DumpOptions_27, (MR_Char) 108);
        if (succeeded)
        {
          parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% class method call\n");
          hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_5_p_0(Stream_13, Indent_18, MaybeArgRegs_25);
        }
        Context_38 = mercury__term_context__dummy_context_0_f_0();
        {
          TCInfoTerm_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, TCInfoTerm_40, 0) = ((MR_Box) (TCInfoVar_34));
          MR_hl_field(1, TCInfoTerm_40, 1) = ((MR_Box) (Context_38));
        }
        MethodNumTerm_41 = mercury__term_int__int_to_decimal_term_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MethodNum_35, Context_38);
        mercury__term_subst__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_23, &ArgTerms_42);
        {
          Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_87, 0) = ((MR_Box) (MethodNumTerm_41));
          MR_hl_field(1, Var_87, 1) = ((MR_Box) (ArgTerms_42));
        }
        {
          Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_86, 0) = ((MR_Box) (TCInfoTerm_40));
          MR_hl_field(1, Var_86, 1) = ((MR_Box) (Var_87));
        }
        {
          Term_43 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Term_43, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[1]));
          MR_hl_field(0, Term_43, 1) = ((MR_Box) (Var_86));
          MR_hl_field(0, Term_43, 2) = ((MR_Box) (Context_38));
        }
        parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
        parse_tree__parse_tree_out_term__mercury_output_term_src_6_p_0(VarNameSrc_15, VarNamePrint_17, Term_43, Stream_13);
        mercury__io__write_string_4_p_0(Stream_13, Follow_19);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String EventName_44 = ((MR_String) ((MR_hl_field(2, GenericCall_22, (MR_Integer) 0))));
        MR_Word Var_99;
        MR_Word Functor_130;
        MR_Word ArgTerms_131;
        MR_Word Term_132;

        succeeded = mercury__string__contains_char_2_p_0(DumpOptions_27, (MR_Char) 108);
        if (succeeded)
        {
          parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% event call\n");
          hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_5_p_0(Stream_13, Indent_18, MaybeArgRegs_25);
        }
        parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
        mercury__io__write_string_4_p_0(Stream_13, (MR_String) "event ");
        {
          Functor_130 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Functor_130, 0) = ((MR_Box) (EventName_44));
        }
        mercury__term_subst__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_23, &ArgTerms_131);
        Var_99 = mercury__term_context__dummy_context_0_f_0();
        {
          Term_132 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Term_132, 0) = ((MR_Box) (Functor_130));
          MR_hl_field(0, Term_132, 1) = ((MR_Box) (ArgTerms_131));
          MR_hl_field(0, Term_132, 2) = ((MR_Box) (Var_99));
        }
        parse_tree__parse_tree_out_term__mercury_output_term_src_6_p_0(VarNameSrc_15, VarNamePrint_17, Term_132, Stream_13);
        mercury__io__write_string_4_p_0(Stream_13, Follow_19);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word CastType_45 = ((MR_Unsigned) ((MR_hl_field(3, GenericCall_22, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_String CastTypeString_46;
        MR_Word PredOrFunc_143;

        switch (CastType_45) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              CastTypeString_46 = hlds__hlds_out__hlds_out_util__cast_type_to_string_1_f_0(CastType_45);
              PredOrFunc_143 = hlds__hlds_out__hlds_out_goal__write_cast_as_pred_or_func_1_f_0(CastType_45);
            }
            break;
          case (MR_Integer) 4:
            {
              CastTypeString_46 = (MR_String) "coerce";
              PredOrFunc_143 = (MR_Integer) 1;
            }
            break;
        }
        succeeded = mercury__string__contains_char_2_p_0(DumpOptions_27, (MR_Char) 108);
        if (succeeded)
        {
          MR_Word Var_104;
          MR_Word Var_107;

          parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
          {
            Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_107, 0) = ((MR_Box) (CastTypeString_46));
            MR_hl_field(1, Var_107, 1) = ((MR_Box) (MR_mkword(1, &hlds__hlds_out__hlds_out_goal_scalar_common_1[3])));
          }
          {
            Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_104, 0) = ((MR_Box) ((MR_String) "% "));
            MR_hl_field(1, Var_104, 1) = ((MR_Box) (Var_107));
          }
          mercury__io__write_strings_4_p_0(Stream_13, Var_104);
          hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_5_p_0(Stream_13, Indent_18, MaybeArgRegs_25);
        }
        succeeded = mercury__string__contains_char_2_p_0(DumpOptions_27, (MR_Char) 68);
        if (succeeded)
        {
          MR_Word InstVarSet_47;

          parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "% modes: ");
          mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_47);
          parse_tree__parse_tree_out_inst__mercury_output_mode_list_6_p_0(Stream_13, (MR_Integer) 1, InstVarSet_47, Modes_24);
          mercury__io__nl_3_p_0(Stream_13);
        }
        switch (PredOrFunc_143) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_String Var_126;
              MR_Word Var_128;
              MR_Word FuncArgVars_136;
              MR_Word FuncRetVar_137;
              MR_Box conv0_FuncRetVar_137;

              parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), ArgVars_23, &FuncArgVars_136, &conv0_FuncRetVar_137);
              FuncRetVar_137 = ((MR_Word) (conv0_FuncRetVar_137));
              parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
              parse_tree__parse_tree_out_term__mercury_output_var_src_6_p_0(VarNameSrc_15, VarNamePrint_17, FuncRetVar_137, Stream_13);
              mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
              {
                Var_128 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_128, 0) = ((MR_Box) (CastTypeString_46));
              }
              Var_126 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(VarNameSrc_15, VarNamePrint_17, Var_128, FuncArgVars_136);
              mercury__io__write_string_4_p_0(Stream_13, Var_126);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word Var_119;
              MR_Word Functor_133;
              MR_Word ArgTerms_134;
              MR_Word Term_135;

              {
                Functor_133 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Functor_133, 0) = ((MR_Box) (CastTypeString_46));
              }
              mercury__term_subst__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_23, &ArgTerms_134);
              Var_119 = mercury__term_context__dummy_context_0_f_0();
              {
                Term_135 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Term_135, 0) = ((MR_Box) (Functor_133));
                MR_hl_field(0, Term_135, 1) = ((MR_Box) (ArgTerms_134));
                MR_hl_field(0, Term_135, 2) = ((MR_Box) (Var_119));
              }
              parse_tree__prog_out__write_indent_4_p_0(Stream_13, Indent_18);
              parse_tree__parse_tree_out_term__mercury_output_term_src_6_p_0(VarNameSrc_15, VarNamePrint_17, Term_135, Stream_13);
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
  MR_Word PredOrFunc_4 = ((&hlds__hlds_out__hlds_out_goal_vector_common_5[0 + CastType_3]))->hlds__hlds_out__hlds_out_goal__vector_common_type_5_0__vct_5_f_0;

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
    MR_Word ArgRegStrs_11;
    MR_String ArgRegsStr_12;

    ArgRegStrs_11 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[2]), ArgRegs_10);
    ArgRegsStr_12 = mercury__string__join_list_2_f_0((MR_String) ", ", ArgRegStrs_11);
    parse_tree__prog_out__write_indent_4_p_0(Stream_6, Indent_7);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% arg regs: ");
    mercury__io__write_string_4_p_0(Stream_6, ArgRegsStr_12);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_7_p_0(
  MR_Word Stream_8,
  MR_Word VarNameSrc_9,
  MR_Word VarNamePrint_10,
  MR_String CompName_11,
  MR_Word CompState_12)
{
  MR_Word Var1_14;
  MR_Word Var2_15;

  mercury__io__write_string_4_p_0(Stream_8, CompName_11);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
  Var1_14 = ((MR_Word) ((MR_hl_field(0, CompState_12, (MR_Integer) 0))));
  Var2_15 = ((MR_Word) ((MR_hl_field(0, CompState_12, (MR_Integer) 1))));
  parse_tree__parse_tree_out_term__mercury_output_var_src_6_p_0(VarNameSrc_9, VarNamePrint_10, Var1_14, Stream_8);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
  parse_tree__parse_tree_out_term__mercury_output_var_src_6_p_0(VarNameSrc_9, VarNamePrint_10, Var2_15, Stream_8);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
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

  switch (MR_tag((MR_Word) Unification_18)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Unification_18, (MR_Integer) 0))));
        MR_Word ConsId_23 = ((MR_Word) ((MR_hl_field(0, Unification_18, (MR_Integer) 1))));
        MR_Word ArgVars_24 = ((MR_Word) ((MR_hl_field(0, Unification_18, (MR_Integer) 2))));
        MR_Word ArgModes_25 = ((MR_Word) ((MR_hl_field(0, Unification_18, (MR_Integer) 3))));
        MR_Word ConstructHow_26 = ((MR_Word) ((MR_hl_field(0, Unification_18, (MR_Integer) 4))));
        MR_Word Uniqueness_27 = ((MR_Unsigned) ((MR_hl_field(0, Unification_18, (MR_Integer) 5))) & (MR_Integer) 1);
        MR_Word SubInfo_28 = ((MR_Word) ((MR_hl_field(0, Unification_18, (MR_Integer) 6))));
        MR_String DumpOptions_29;

        parse_tree__prog_out__write_indent_4_p_0(Stream_12, Indent_17);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% ");
        parse_tree__parse_tree_out_term__mercury_output_var_src_6_p_0(VarNameSrc_14, VarNamePrint_16, Var_22, Stream_12);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) " <= ");
        hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_51_93_95_48_12_p_0(Info_11, Stream_12, VarNameSrc_14, InstVarSet_15, VarNamePrint_16, Indent_17, ConsId_23, ArgVars_24, ArgModes_25);
        DumpOptions_29 = ((MR_String) ((MR_hl_field(0, Info_11, (MR_Integer) 0))));
        succeeded = mercury__string__contains_char_2_p_0(DumpOptions_29, (MR_Char) 117);
        if (succeeded)
        {
          MR_Word TypeCtor_32;

          succeeded = ((((MR_tag((MR_Word) ConsId_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_23, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            TypeCtor_32 = ((MR_Word) ((MR_hl_field(3, ConsId_23, (MR_Integer) 3))));
            {
              MR_Word TypeCtorSymName_33 = ((MR_Word) ((MR_hl_field(0, TypeCtor_32, (MR_Integer) 0))));
              MR_Integer TypeCtorArity_34 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_32, (MR_Integer) 1))));
              MR_String TypeCtorSymNameStr_35;
              MR_String Var_186;

              parse_tree__prog_out__write_indent_4_p_0(Stream_12, Indent_17);
              TypeCtorSymNameStr_35 = mdbcomp__sym_name__sym_name_to_string_1_f_0(TypeCtorSymName_33);
              mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% cons_id type_ctor: ");
              mercury__io__write_string_4_p_0(Stream_12, TypeCtorSymNameStr_35);
              mercury__io__write_string_4_p_0(Stream_12, (MR_String) "/");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[0]), TypeCtorArity_34, &Var_186);
              mercury__io__write_string_4_p_0(Stream_12, Var_186);
              mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
            }
          }
          switch (Uniqueness_27) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
              }
              break;
            case (MR_Integer) 0:
              {
                parse_tree__prog_out__write_indent_4_p_0(Stream_12, Indent_17);
                mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% cell_is_unique\n");
              }
              break;
          }
          if (!((SubInfo_28 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            MR_Word MaybeTakeAddr_36 = ((MR_Word) ((MR_hl_field(1, SubInfo_28, (MR_Integer) 0))));
            MR_Word MaybeSize_37 = ((MR_Word) ((MR_hl_field(1, SubInfo_28, (MR_Integer) 1))));

            if (!((MaybeTakeAddr_36 == (MR_Word) ((MR_Unsigned) 0U))))
            {
              MR_Word TakeAddressFields_38 = ((MR_Word) ((MR_hl_field(1, MaybeTakeAddr_36, (MR_Integer) 0))));

              parse_tree__prog_out__write_indent_4_p_0(Stream_12, Indent_17);
              mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% take address fields: ");
              hlds__hlds_out__hlds_out_util__write_intlist_4_p_0(Stream_12, TakeAddressFields_38);
              mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
            }
            if (!((MaybeSize_37 == (MR_Word) ((MR_Unsigned) 0U))))
            {
              MR_Word SizeSource_39 = ((MR_Word) ((MR_hl_field(1, MaybeSize_37, (MR_Integer) 0))));

              parse_tree__prog_out__write_indent_4_p_0(Stream_12, Indent_17);
              mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% term size ");
              if (((MR_tag((MR_Word) SizeSource_39)) == (MR_Integer) 1))
              {
                MR_Word SizeVar_41 = ((MR_Word) ((MR_hl_field(1, SizeSource_39, (MR_Integer) 0))));

                mercury__io__write_string_4_p_0(Stream_12, (MR_String) "var ");
                parse_tree__parse_tree_out_term__mercury_output_var_src_6_p_0(VarNameSrc_14, VarNamePrint_16, SizeVar_41, Stream_12);
                mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
              }
              else
              {
                MR_Integer KnownSize_40 = ((MR_Integer) ((MR_hl_field(0, SizeSource_39, (MR_Integer) 0))));

                mercury__io__write_string_4_p_0(Stream_12, (MR_String) "const ");
                mercury__io__write_int_4_p_0(Stream_12, KnownSize_40);
                mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
              }
            }
          }
          switch (MR_tag((MR_Word) ConstructHow_26)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word CellToReuse_42 = (MR_Word) (MR_body((MR_Word) (ConstructHow_26), (MR_Integer) 1));
                MR_Word ReuseVar_43 = ((MR_Word) ((MR_hl_field(0, CellToReuse_42, (MR_Integer) 0))));

                parse_tree__prog_out__write_indent_4_p_0(Stream_12, Indent_17);
                mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% reuse cell: ");
                parse_tree__parse_tree_out_term__mercury_output_var_src_6_p_0(VarNameSrc_14, VarNamePrint_16, ReuseVar_43, Stream_12);
                mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_179 = ((MR_Unsigned) ((MR_hl_field(2, ConstructHow_26, (MR_Integer) 0))) & (MR_Integer) 1);

                switch (Var_179) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      parse_tree__prog_out__write_indent_4_p_0(Stream_12, Indent_17);
                      mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% construct statically (born static)\n");
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      parse_tree__prog_out__write_indent_4_p_0(Stream_12, Indent_17);
                      mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% construct statically (marked static)\n");
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word RegVar_46 = ((MR_Word) ((MR_hl_field(3, ConstructHow_26, (MR_Integer) 0))));

                parse_tree__prog_out__write_indent_4_p_0(Stream_12, Indent_17);
                mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% construct in region: ");
                parse_tree__parse_tree_out_term__mercury_output_var_src_6_p_0(VarNameSrc_14, VarNamePrint_16, RegVar_46, Stream_12);
                mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
              }
              break;
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word CanFail_47 = ((((MR_Unsigned) ((MR_hl_field(1, Unification_18, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
        MR_Word CanCGC_48 = ((MR_Unsigned) ((MR_hl_field(1, Unification_18, (MR_Integer) 4))) & (MR_Integer) 1);
        MR_Word Var_164 = ((MR_Word) ((MR_hl_field(1, Unification_18, (MR_Integer) 0))));
        MR_Word ConsId_165 = ((MR_Word) ((MR_hl_field(1, Unification_18, (MR_Integer) 1))));
        MR_Word ArgVars_166 = ((MR_Word) ((MR_hl_field(1, Unification_18, (MR_Integer) 2))));
        MR_Word ArgModes_167 = ((MR_Word) ((MR_hl_field(1, Unification_18, (MR_Integer) 3))));
        MR_String DumpOptions_168 = ((MR_String) ((MR_hl_field(0, Info_11, (MR_Integer) 0))));

        succeeded = mercury__string__contains_char_2_p_0(DumpOptions_168, (MR_Char) 71);
        if (succeeded)
        {
          parse_tree__prog_out__write_indent_4_p_0(Stream_12, Indent_17);
          mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% Compile time garbage collect: ");
          mercury__io__write_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_can_cgc_0), Stream_12, ((MR_Box) (CanCGC_48)));
          mercury__io__nl_3_p_0(Stream_12);
        }
        parse_tree__prog_out__write_indent_4_p_0(Stream_12, Indent_17);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% ");
        parse_tree__parse_tree_out_term__mercury_output_var_src_6_p_0(VarNameSrc_14, VarNamePrint_16, Var_164, Stream_12);
        switch (CanFail_47) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__io__write_string_4_p_0(Stream_12, (MR_String) " \?= ");
            break;
          case (MR_Integer) 1:
            mercury__io__write_string_4_p_0(Stream_12, (MR_String) " => ");
            break;
        }
        hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_51_93_95_48_12_p_0(Info_11, Stream_12, VarNameSrc_14, InstVarSet_15, VarNamePrint_16, Indent_17, ConsId_165, ArgVars_166, ArgModes_167);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word X_20 = ((MR_Word) ((MR_hl_field(2, Unification_18, (MR_Integer) 0))));
        MR_Word Y_21 = ((MR_Word) ((MR_hl_field(2, Unification_18, (MR_Integer) 1))));

        parse_tree__prog_out__write_indent_4_p_0(Stream_12, Indent_17);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% ");
        parse_tree__parse_tree_out_term__mercury_output_var_src_6_p_0(VarNameSrc_14, VarNamePrint_16, X_20, Stream_12);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) " := ");
        parse_tree__parse_tree_out_term__mercury_output_var_src_6_p_0(VarNameSrc_14, VarNamePrint_16, Y_21, Stream_12);
        mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Unification_18, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word X_162 = ((MR_Word) ((MR_hl_field(3, Unification_18, (MR_Integer) 1))));
            MR_Word Y_163 = ((MR_Word) ((MR_hl_field(3, Unification_18, (MR_Integer) 2))));

            parse_tree__prog_out__write_indent_4_p_0(Stream_12, Indent_17);
            mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% ");
            parse_tree__parse_tree_out_term__mercury_output_var_src_6_p_0(VarNameSrc_14, VarNamePrint_16, X_162, Stream_12);
            mercury__io__write_string_4_p_0(Stream_12, (MR_String) " == ");
            parse_tree__parse_tree_out_term__mercury_output_var_src_6_p_0(VarNameSrc_14, VarNamePrint_16, Y_163, Stream_12);
            mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Mode_49 = ((MR_Word) ((MR_hl_field(3, Unification_18, (MR_Integer) 1))));
            MR_Word TypeInfoVars_50 = ((MR_Word) ((MR_hl_field(3, Unification_18, (MR_Integer) 3))));
            MR_Word CanFail_169 = ((MR_Unsigned) ((MR_hl_field(3, Unification_18, (MR_Integer) 2))) & (MR_Integer) 1);

            parse_tree__prog_out__write_indent_4_p_0(Stream_12, Indent_17);
            mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% ");
            switch (CanFail_169) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                mercury__io__write_string_4_p_0(Stream_12, (MR_String) "can_fail, ");
                break;
              case (MR_Integer) 1:
                mercury__io__write_string_4_p_0(Stream_12, (MR_String) "cannot_fail, ");
                break;
            }
            mercury__io__write_string_4_p_0(Stream_12, (MR_String) "mode: ");
            hlds__hlds_out__hlds_out_mode__mercury_output_unify_mode_5_p_0(Stream_12, Mode_49, InstVarSet_15);
            mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
            parse_tree__prog_out__write_indent_4_p_0(Stream_12, Indent_17);
            mercury__io__write_string_4_p_0(Stream_12, (MR_String) "% type-info vars: ");
            parse_tree__parse_tree_out_term__mercury_output_vars_src_6_p_0(VarNameSrc_14, VarNamePrint_16, TypeInfoVars_50, Stream_12);
            mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
          }
          break;
      }
      break;
  }
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
  MR_Word ArgModes_22)
{
  MR_bool succeeded;
  MR_String Var_29;

  Var_29 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(ConsId_20);
  mercury__io__write_string_4_p_0(Stream_14, Var_29);
  if ((ArgVars_21 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__write_string_4_p_0(Stream_14, (MR_String) "\n");
  else
  {
    MR_String DumpOptions_26;

    mercury__io__write_string_4_p_0(Stream_14, (MR_String) " (");
    parse_tree__parse_tree_out_term__mercury_output_vars_src_6_p_0(VarNameSrc_16, VarNamePrint_18, ArgVars_21, Stream_14);
    mercury__io__write_string_4_p_0(Stream_14, (MR_String) ")\n");
    DumpOptions_26 = ((MR_String) ((MR_hl_field(0, Info_13, (MR_Integer) 0))));
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_26, (MR_Char) 97);
    if (succeeded)
    {
      succeeded = mercury__string__contains_char_2_p_0(DumpOptions_26, (MR_Char) 121);
      if (succeeded)
      {
        parse_tree__prog_out__write_indent_4_p_0(Stream_14, Indent_19);
        mercury__io__write_string_4_p_0(Stream_14, (MR_String) "% arg-modes\n");
        hlds__hlds_out__hlds_out_mode__mercury_output_structured_unify_mode_list_8_p_0(Stream_14, ArgModes_22, Indent_19, (MR_Integer) 1, (MR_Integer) 1, InstVarSet_17);
      }
      else
        hlds__hlds_out__hlds_out_goal__write_arg_modes_7_p_0(Stream_14, InstVarSet_17, Indent_19, (MR_Integer) 1, ArgModes_22);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_arg_modes_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
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
      MR_Integer Var_32;
      MR_String Var_38;
      MR_Integer next_value_of_HeadVar__4_4;
      MR_Word next_value_of_HeadVar__5_5;

      parse_tree__prog_out__write_indent_4_p_0(HeadVar__1_1, HeadVar__3_3);
      mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "% arg-mode ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[0]), HeadVar__4_4, &Var_38);
      mercury__io__write_string_4_p_0(HeadVar__1_1, Var_38);
      mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) " ");
      hlds__hlds_out__hlds_out_mode__mercury_output_unify_mode_5_p_0(HeadVar__1_1, UnifyMode_19, HeadVar__2_2);
      mercury__io__nl_3_p_0(HeadVar__1_1);
      Var_32 = (MR_Integer) ((MR_Unsigned) HeadVar__4_4 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Var_32;
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
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "reuse call - ");
        mercury__io__write_string_4_p_0(Stream_7, Var_34);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", no clobbers = ");
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", no clobbers = ");
        mercury__io__write_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[2]), Stream_7, ((MR_Box) (NoClobbers_17)));
      }
      break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_instmap_delta_vars_6_p_0(
  MR_Word Stream_7,
  MR_Word VarNameSrc_8,
  MR_Word VarNamePrint_9,
  MR_Word InstMapDelta_10)
{
  MR_bool succeeded;

  succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(InstMapDelta_10);
  if (succeeded)
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "unreachable");
  else
  {
    MR_Word AssocList_12;
    MR_Word Vars_13;

    hlds__instmap__instmap_delta_to_assoc_list_2_p_0(InstMapDelta_10, &AssocList_12);
    mercury__assoc_list__keys_2_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), AssocList_12, &Vars_13);
    hlds__hlds_out__hlds_out_goal__write_vars_6_p_0(Stream_7, VarNameSrc_8, VarNamePrint_9, Vars_13);
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
  MR_Word StoreMapList_28;
  MR_Word TypeInfo_153_153;
  MR_Word TypeCtorInfo_154_154;
  MR_Word StoreMap_27;
  MR_Word NeedAcrossCall_32;
  MR_Word MaybeNeedAcrossCall_31;
  MR_Word NeedInResume_46;
  MR_Word MaybeNeedInResume_45;
  MR_Word NeedInParConj_57;
  MR_Word MaybeNeedInParConj_56;

  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_16, (MR_Char) 102);
  if (succeeded)
  {
    MR_Word MaybeFollowVars_17;

    hlds__hlds_llds__goal_info_get_follow_vars_2_p_0(GoalInfo_11, &MaybeFollowVars_17);
    if (!((MaybeFollowVars_17 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word FollowVars_18 = ((MR_Word) ((MR_hl_field(1, MaybeFollowVars_17, (MR_Integer) 0))));
      MR_Word FollowVarsMap_19 = ((MR_Word) ((MR_hl_field(0, FollowVars_18, (MR_Integer) 0))));
      MR_Integer NextRegR_20 = ((MR_Integer) ((MR_hl_field(0, FollowVars_18, (MR_Integer) 1))));
      MR_Integer NextRegF_21 = ((MR_Integer) ((MR_hl_field(0, FollowVars_18, (MR_Integer) 2))));
      MR_Word FVlist_22;

      mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0), FollowVarsMap_19, &FVlist_22);
      parse_tree__prog_out__write_indent_4_p_0(Stream_10, Indent_14);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% follow vars: r");
      mercury__io__write_int_4_p_0(Stream_10, NextRegR_20);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) ", f");
      mercury__io__write_int_4_p_0(Stream_10, NextRegF_21);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
      hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_7_p_0(Stream_10, VarNameSrc_12, VarNamePrint_13, Indent_14, FVlist_22);
    }
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_16, (MR_Char) 114);
  if (succeeded)
  {
    MR_Word Resume_23;

    hlds__hlds_llds__goal_info_get_resume_point_2_p_0(GoalInfo_11, &Resume_23);
    if (!((Resume_23 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word ResumeVars_24 = ((MR_Word) ((MR_hl_field(1, Resume_23, (MR_Integer) 0))));
      MR_Word Locs_25 = ((MR_Unsigned) ((MR_hl_field(1, Resume_23, (MR_Integer) 1))) & (MR_Integer) 3);
      MR_Word ResumeVarList_26;

      ResumeVarList_26 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResumeVars_24);
      parse_tree__prog_out__write_indent_4_p_0(Stream_10, Indent_14);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% resume point ");
      switch (Locs_25) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__io__write_string_4_p_0(Stream_10, (MR_String) "orig only ");
          break;
        case (MR_Integer) 2:
          mercury__io__write_string_4_p_0(Stream_10, (MR_String) "orig then stack ");
          break;
        case (MR_Integer) 1:
          mercury__io__write_string_4_p_0(Stream_10, (MR_String) "stack only ");
          break;
        case (MR_Integer) 3:
          mercury__io__write_string_4_p_0(Stream_10, (MR_String) "stack then orig ");
          break;
      }
      parse_tree__parse_tree_out_term__mercury_output_vars_src_6_p_0(VarNameSrc_12, VarNamePrint_13, ResumeVarList_26, Stream_10);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
    }
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_16, (MR_Char) 115);
  if (succeeded)
  {
    hlds__hlds_llds__goal_info_get_store_map_2_p_0(GoalInfo_11, &StoreMap_27);
    TypeInfo_153_153 = (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]);
    TypeCtorInfo_154_154 = (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0);
    mercury__map__to_assoc_list_2_p_0(TypeInfo_153_153, TypeCtorInfo_154_154, StoreMap_27, &StoreMapList_28);
    succeeded = (StoreMapList_28 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
  }
  if (succeeded)
  {
    parse_tree__prog_out__write_indent_4_p_0(Stream_10, Indent_14);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% store map:\n");
    hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_7_p_0(Stream_10, VarNameSrc_12, VarNamePrint_13, Indent_14, StoreMapList_28);
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_16, (MR_Char) 115);
  if (succeeded)
  {
    hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(GoalInfo_11, &MaybeNeedAcrossCall_31);
    succeeded = (MaybeNeedAcrossCall_31 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      NeedAcrossCall_32 = ((MR_Word) ((MR_hl_field(1, MaybeNeedAcrossCall_31, (MR_Integer) 0))));
  }
  if (succeeded)
  {
    MR_Word CallForwardSet_33 = ((MR_Word) ((MR_hl_field(0, NeedAcrossCall_32, (MR_Integer) 0))));
    MR_Word CallResumeSet_34 = ((MR_Word) ((MR_hl_field(0, NeedAcrossCall_32, (MR_Integer) 1))));
    MR_Word CallNondetSet_35 = ((MR_Word) ((MR_hl_field(0, NeedAcrossCall_32, (MR_Integer) 2))));
    MR_Word CallForwardList_36;
    MR_Word CallResumeList_37;
    MR_Word CallNondetList_38;

    CallForwardList_36 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CallForwardSet_33);
    CallResumeList_37 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CallResumeSet_34);
    CallNondetList_38 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CallNondetSet_35);
    parse_tree__prog_out__write_indent_4_p_0(Stream_10, Indent_14);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% need across call forward vars: ");
    if ((CallForwardList_36 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "none\n");
    else
    {
      hlds__hlds_out__hlds_out_goal__write_vars_6_p_0(Stream_10, VarNameSrc_12, VarNamePrint_13, CallForwardList_36);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
    }
    parse_tree__prog_out__write_indent_4_p_0(Stream_10, Indent_14);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% need across call resume vars: ");
    if ((CallResumeList_37 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "none\n");
    else
    {
      hlds__hlds_out__hlds_out_goal__write_vars_6_p_0(Stream_10, VarNameSrc_12, VarNamePrint_13, CallResumeList_37);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
    }
    parse_tree__prog_out__write_indent_4_p_0(Stream_10, Indent_14);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% need across call nondet vars: ");
    if ((CallNondetList_38 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "none\n");
    else
    {
      hlds__hlds_out__hlds_out_goal__write_vars_6_p_0(Stream_10, VarNameSrc_12, VarNamePrint_13, CallNondetList_38);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
    }
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_16, (MR_Char) 115);
  if (succeeded)
  {
    hlds__hlds_llds__goal_info_get_maybe_need_in_resume_2_p_0(GoalInfo_11, &MaybeNeedInResume_45);
    succeeded = (MaybeNeedInResume_45 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      NeedInResume_46 = ((MR_Word) ((MR_hl_field(1, MaybeNeedInResume_45, (MR_Integer) 0))));
  }
  if (succeeded)
  {
    MR_Word ResumeOnStack_47 = ((MR_Unsigned) ((MR_hl_field(0, NeedInResume_46, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ResumeResumeSet_48 = ((MR_Word) ((MR_hl_field(0, NeedInResume_46, (MR_Integer) 1))));
    MR_Word ResumeNondetSet_49 = ((MR_Word) ((MR_hl_field(0, NeedInResume_46, (MR_Integer) 2))));
    MR_Word ResumeResumeList_50;
    MR_Word ResumeNondetList_51;

    ResumeResumeList_50 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResumeResumeSet_48);
    ResumeNondetList_51 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResumeNondetSet_49);
    parse_tree__prog_out__write_indent_4_p_0(Stream_10, Indent_14);
    switch (ResumeOnStack_47) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% resume point has no stack label\n");
        break;
      case (MR_Integer) 1:
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% resume point has stack label\n");
        break;
    }
    parse_tree__prog_out__write_indent_4_p_0(Stream_10, Indent_14);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% need in resume resume vars: ");
    if ((ResumeResumeList_50 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "none\n");
    else
    {
      hlds__hlds_out__hlds_out_goal__write_vars_6_p_0(Stream_10, VarNameSrc_12, VarNamePrint_13, ResumeResumeList_50);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
    }
    parse_tree__prog_out__write_indent_4_p_0(Stream_10, Indent_14);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% need in resume nondet vars: ");
    if ((ResumeNondetList_51 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "none\n");
    else
    {
      hlds__hlds_out__hlds_out_goal__write_vars_6_p_0(Stream_10, VarNameSrc_12, VarNamePrint_13, ResumeNondetList_51);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
    }
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_16, (MR_Char) 115);
  if (succeeded)
  {
    hlds__hlds_llds__goal_info_get_maybe_need_in_par_conj_2_p_0(GoalInfo_11, &MaybeNeedInParConj_56);
    succeeded = (MaybeNeedInParConj_56 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      NeedInParConj_57 = ((MR_Word) ((MR_hl_field(1, MaybeNeedInParConj_56, (MR_Integer) 0))));
  }
  if (succeeded)
  {
    MR_Word ParConjSet_58 = (MR_Word) (NeedInParConj_57);
    MR_Word ParConjList_59;

    ParConjList_59 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ParConjSet_58);
    parse_tree__prog_out__write_indent_4_p_0(Stream_10, Indent_14);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% need in par_conj vars: ");
    hlds__hlds_out__hlds_out_goal__write_vars_6_p_0(Stream_10, VarNameSrc_12, VarNamePrint_13, ParConjList_59);
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
      MR_String LocnStr_23;
      MR_Word MaybeWidth_24;
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__5_5;

      Var_19 = ((MR_Word) ((MR_hl_field(0, Var_28, (MR_Integer) 0))));
      Loc_20 = ((MR_Word) ((MR_hl_field(0, Var_28, (MR_Integer) 1))));
      parse_tree__prog_out__write_indent_4_p_0(Stream_1, Indent_4);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "%\t");
      parse_tree__parse_tree_out_term__mercury_output_var_src_6_p_0(VarNameSrc_2, VarNamePrint_3, Var_19, Stream_1);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\t-> ");
      hlds__hlds_llds__abs_locn_to_string_3_p_0(Loc_20, &LocnStr_23, &MaybeWidth_24);
      mercury__io__write_string_4_p_0(Stream_1, LocnStr_23);
      if (!((MaybeWidth_24 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_String Width_25 = ((MR_String) ((MR_hl_field(1, MaybeWidth_24, (MR_Integer) 0))));

        mercury__io__write_string_4_p_0(Stream_1, (MR_String) " ");
        mercury__io__write_string_4_p_0(Stream_1, Width_25);
      }
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

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_new_var_inst_list_7_p_0(
  MR_Word Stream_1,
  MR_Word VarNameSrc_2,
  MR_Word HeadVar__3_3,
  MR_Integer HeadVar__4_4,
  MR_Word HeadVar__5_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Var_19;
      MR_Word Inst_20;
      MR_Word VarInsts_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word InstVarSet_23;
      MR_Word Var_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__5_5;

      Var_19 = ((MR_Word) ((MR_hl_field(0, Var_26, (MR_Integer) 0))));
      Inst_20 = ((MR_Word) ((MR_hl_field(0, Var_26, (MR_Integer) 1))));
      parse_tree__prog_out__write_indent_4_p_0(Stream_1, HeadVar__4_4);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "%   ");
      parse_tree__parse_tree_out_term__mercury_output_var_src_6_p_0(VarNameSrc_2, HeadVar__3_3, Var_19, Stream_1);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) " -> ");
      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_23);
      parse_tree__parse_tree_out_inst__mercury_output_inst_6_p_0(Stream_1, (MR_Integer) 1, InstVarSet_23, Inst_20);
      mercury__io__nl_3_p_0(Stream_1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = VarInsts_21;
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
