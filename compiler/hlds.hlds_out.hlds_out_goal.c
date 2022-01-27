/*
** Automatically generated from `hlds_out_goal.m'
** by the Mercury compiler,
** version rotd-2016-01-15
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


/* :- module hlds.hlds_out.hlds_out_goal. */
/* :- implementation. */

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
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
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
#include "random.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_clause.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_inst.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_mode.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_52_93_95_48_10_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_52_93_95_48_10_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_50_44_32_52_93_95_48_10_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_50_93_95_48_11_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_12,
  MR_Word hlds__hlds_out__hlds_out_goal__ProgVarSet_14,
  MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_15,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_16,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_17,
  MR_Word hlds__hlds_out__hlds_out_goal__ConsId_18,
  MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_19,
  MR_Word hlds__hlds_out__hlds_out_goal__ArgModes_20);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_9_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_10,
  MR_Word hlds__hlds_out__hlds_out_goal__ProgVarSet_12,
  MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_13,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_14,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_15,
  MR_Word hlds__hlds_out__hlds_out_goal__Unification_16);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__332__1_3_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_334);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__328__1_3_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_330);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__324__1_3_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_326);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__320__1_3_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_322);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__316__1_3_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_318);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_6_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_7,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_8,
  MR_String hlds__hlds_out__hlds_out_goal__CompName_9,
  MR_Word hlds__hlds_out__hlds_out_goal__CompState_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__maybe_add_newline_indent_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__AddCommaNewlineIndent_5,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__maybe_add_comma_newline_indent_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__AddCommaNewlineIndent_5,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_6_p_0(
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_7,
  MR_Word hlds__hlds_out__hlds_out_goal__MutableVar_8,
  MR_Word hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_0_13,
  MR_Word * hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_14);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0_3(
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_4,
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0_2(
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_41,
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_negation_10_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_alternative_cons_id_3_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__ConsId_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_case_10_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_case_10_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
  MR_Word hlds__hlds_out__hlds_out_goal__Var_17,
  MR_Word hlds__hlds_out__hlds_out_goal__Case_18);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_cases_10_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
  MR_Word hlds__hlds_out__hlds_out_goal__Var_17,
  MR_Word hlds__hlds_out__hlds_out_goal__CasesList_18);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_switch_10_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_disj_10_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_conj_12_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_13,
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_14,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_15,
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_16,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_17,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_18,
  MR_String hlds__hlds_out__hlds_out_goal__Follow_19,
  MR_String hlds__hlds_out__hlds_out_goal__Separator_20,
  MR_Word hlds__hlds_out__hlds_out_goal__Goal1_21,
  MR_Word hlds__hlds_out__hlds_out_goal__Goals1_22);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_conj_10_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_foreign_args_6_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_1,
  MR_Word hlds__hlds_out__hlds_out_goal__TVarSet_2,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_3,
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__4_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_ho_arg_reg_3_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__ArgReg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0(
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_5,
  MR_Word hlds__hlds_out__hlds_out_goal__MaybeArgRegs_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_sym_name_and_args_6_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_7,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_8,
  MR_Word hlds__hlds_out__hlds_out_goal__PredName_9,
  MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_12,
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
  MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_15,
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_16,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_17,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_18,
  MR_Word hlds__hlds_out__hlds_out_goal__MaybeType_19,
  MR_Word hlds__hlds_out__hlds_out_goal__RHS_20);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_12_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_13,
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_14,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_15,
  MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_16,
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_17,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_18,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_19,
  MR_String hlds__hlds_out__hlds_out_goal__Follow_20,
  MR_Word hlds__hlds_out__hlds_out_goal__MaybeType_21,
  MR_Word hlds__hlds_out__hlds_out_goal__RHS_22);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_unify_10_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_expr_10_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__ShortDescription_6,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_7,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_1,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_2,
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__3_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_instmap_delta_vars_5_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_6,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_7,
  MR_Word hlds__hlds_out__hlds_out_goal__InstMapDelta_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_instmap_delta_6_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_7,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_8,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_9,
  MR_Word hlds__hlds_out__hlds_out_goal__InstMapDelta_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_8,
  MR_Word hlds__hlds_out__hlds_out_goal__GoalInfo_9,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_10,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_11,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_6(
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_5(
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_4(
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_3(
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_2(
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_1[18][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_2[6][6];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_3[11][3];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_4[4][1];

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
    ((MR_Box) ((MR_String) ")")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "any_func")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[3])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "(")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "(")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "any_func")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "any_pred")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[3])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "(")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "any_pred")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[6])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "func")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[3])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "(")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[11])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "func")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[6])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "pred")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[3])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "(")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[14])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "pred")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[6])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_2[6][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_compiletime_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_3[11][3] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[1])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[2])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[3])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__write_case_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[4])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[5])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[5])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_52_93_95_48_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_4[4][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
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

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_5[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_52_93_95_48_10_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

    {
      parse_tree__parse_tree_out_clause__mercury_output_trace_runtime_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_52_93_95_48_10_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
    MR_Word hlds__hlds_out__hlds_out_goal__Attributes_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_goal__PredId_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 2)));
    MR_Integer hlds__hlds_out__hlds_out_goal__ProcId_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 3)));
    MR_Word hlds__hlds_out__hlds_out_goal__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 4)));
    MR_Word hlds__hlds_out__hlds_out_goal__ExtraArgs_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 5)));
    MR_Word hlds__hlds_out__hlds_out_goal__MaybeTraceRuntimeCond_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 6)));
    MR_Word hlds__hlds_out__hlds_out_goal__PragmaCode_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 7)));
    MR_Word hlds__hlds_out__hlds_out_goal__ForeignLang_27;
    MR_Integer hlds__hlds_out__hlds_out_goal__PredIdInt_28;
    MR_Integer hlds__hlds_out__hlds_out_goal__ProcIdInt_29;
    MR_Word hlds__hlds_out__hlds_out_goal__TypeVarSet_31;
    MR_String hlds__hlds_out__hlds_out_goal__Code_34;
    MR_String hlds__hlds_out__hlds_out_goal__V_41_41;
    MR_Word hlds__hlds_out__hlds_out_goal__V_35_35;

    {
      hlds__hlds_out__hlds_out_goal__ForeignLang_27 = parse_tree__prog_data__get_foreign_language_1_f_0(hlds__hlds_out__hlds_out_goal__Attributes_20);
    }
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\044pragma_foreign_proc(/* ");
    }
    {
      hlds__hlds_out__hlds_out_goal__V_41_41 = libs__globals__foreign_language_string_1_f_0(hlds__hlds_out__hlds_out_goal__ForeignLang_27);
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_41_41);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " */, ");
    }
    {
      hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__PredId_21);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " pred ");
    }
    {
      hlds__hlds_pred__pred_id_to_int_2_p_0(hlds__hlds_out__hlds_out_goal__PredId_21, &hlds__hlds_out__hlds_out_goal__PredIdInt_28);
    }
    {
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_goal__PredIdInt_28);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " proc ");
    }
    {
      hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_goal__ProcId_22, &hlds__hlds_out__hlds_out_goal__ProcIdInt_29);
    }
    {
      mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_goal__ProcIdInt_29);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n");
    }
    if ((hlds__hlds_out__hlds_out_goal__MaybeTraceRuntimeCond_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word hlds__hlds_out__hlds_out_goal__TraceRuntimeCond_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeTraceRuntimeCond_25, (MR_Integer) 0)));

        {
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "% trace_runtime_cond(");
        }
        {
          parse_tree__parse_tree_out_clause__mercury_output_trace_expr_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0, (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[10], hlds__hlds_out__hlds_out_goal__TraceRuntimeCond_30);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ")\n");
        }
      }
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
    {
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &hlds__hlds_out__hlds_out_goal__TypeVarSet_31);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
    {
      hlds__hlds_out__hlds_out_goal__write_foreign_args_6_p_0(hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeVarSet_31, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Args_23);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "],\n");
    }
    if ((hlds__hlds_out__hlds_out_goal__ExtraArgs_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "{");
        }
        {
          hlds__hlds_out__hlds_out_goal__write_foreign_args_6_p_0(hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeVarSet_31, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__ExtraArgs_24);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "},\n");
        }
      }
    hlds__hlds_out__hlds_out_goal__Code_34 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__PragmaCode_26, (MR_Integer) 0)));
    hlds__hlds_out__hlds_out_goal__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__PragmaCode_26, (MR_Integer) 1)));
    {
      mercury__io__write_string_3_p_0((MR_String) "\"");
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Code_34);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\"");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_50_44_32_52_93_95_48_10_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
    MR_Word hlds__hlds_out__hlds_out_goal__GenericCall_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 2)));
    MR_Word hlds__hlds_out__hlds_out_goal__Modes_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 3)));
    MR_Word hlds__hlds_out__hlds_out_goal__MaybeArgRegs_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 4)));
    MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_25 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_goal__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 5)));
    MR_String hlds__hlds_out__hlds_out_goal__V_125_125 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_goal__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 2)));
    MR_Word hlds__hlds_out__hlds_out_goal__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 3)));
    MR_Word hlds__hlds_out__hlds_out_goal__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 4)));

    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__GenericCall_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__hlds_out__hlds_out_goal__PredVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 0)));
          MR_Word hlds__hlds_out__hlds_out_goal__Purity_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 1)));
          MR_Word hlds__hlds_out__hlds_out_goal__PredOrFunc_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 2)));
          MR_Integer hlds__hlds_out__hlds_out_goal__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 3)));

          switch (hlds__hlds_out__hlds_out_goal__PredOrFunc_28) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word hlds__hlds_out__hlds_out_goal__FuncArgVars_30;
                MR_Word hlds__hlds_out__hlds_out_goal__FuncRetVar_31;
                MR_Word hlds__hlds_out__hlds_out_goal__V_96_96;
                MR_Box hlds__hlds_out__hlds_out_goal__conv0_FuncRetVar_31;

                {
                  hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_25, (MR_Char) 108);
                }
                if (hlds__hlds_out__hlds_out_goal__succeeded)
                  {
                    {
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) "% higher-order function application\n");
                    }
                    {
                      hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0(hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__MaybeArgRegs_23);
                    }
                  }
                else
                  {
                  }
                {
                  hlds__hlds_out__hlds_out_goal__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_96_96, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__PredVar_26));
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_96_96, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__ArgVars_21));
                }
                {
                  parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], hlds__hlds_out__hlds_out_goal__V_96_96, &hlds__hlds_out__hlds_out_goal__FuncArgVars_30, &hlds__hlds_out__hlds_out_goal__conv0_FuncRetVar_31);
                }
                hlds__hlds_out__hlds_out_goal__FuncRetVar_31 = ((MR_Word) hlds__hlds_out__hlds_out_goal__conv0_FuncRetVar_31);
                {
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                }
                {
                  parse_tree__prog_out__write_purity_prefix_3_p_0(hlds__hlds_out__hlds_out_goal__Purity_27);
                }
                {
                  parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__FuncRetVar_31);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) " = ");
                }
                {
                  hlds__hlds_out__hlds_out_util__write_functor_6_p_0(hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_4[2], hlds__hlds_out__hlds_out_goal__FuncArgVars_30);
                }
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word hlds__hlds_out__hlds_out_goal__V_113_113;

                {
                  hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_25, (MR_Char) 108);
                }
                if (hlds__hlds_out__hlds_out_goal__succeeded)
                  {
                    {
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) "% higher-order predicate call\n");
                    }
                    {
                      hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0(hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__MaybeArgRegs_23);
                    }
                  }
                else
                  {
                  }
                {
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                }
                {
                  parse_tree__prog_out__write_purity_prefix_3_p_0(hlds__hlds_out__hlds_out_goal__Purity_27);
                }
                {
                  hlds__hlds_out__hlds_out_goal__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_113_113, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__PredVar_26));
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_113_113, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__ArgVars_21));
                }
                {
                  hlds__hlds_out__hlds_out_util__write_functor_6_p_0(hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_4[3], hlds__hlds_out__hlds_out_goal__V_113_113);
                }
              }
              break;
          }
          {
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_131_131;
          MR_Word hlds__hlds_out__hlds_out_goal__TCInfoVar_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 0)));
          MR_Integer hlds__hlds_out__hlds_out_goal__MethodNum_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 1)));
          MR_Word hlds__hlds_out__hlds_out_goal__Context_36;
          MR_Word hlds__hlds_out__hlds_out_goal__TCInfoTerm_38;
          MR_Word hlds__hlds_out__hlds_out_goal__MethodNumTerm_39;
          MR_Word hlds__hlds_out__hlds_out_goal__ArgTerms_40;
          MR_Word hlds__hlds_out__hlds_out_goal__Term_41;
          MR_Word hlds__hlds_out__hlds_out_goal__V_84_84;
          MR_Word hlds__hlds_out__hlds_out_goal__V_86_86;
          MR_Word hlds__hlds_out__hlds_out_goal__V_87_87;
          MR_Word hlds__hlds_out__hlds_out_goal___ClassId_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 2)));
          MR_Word hlds__hlds_out__hlds_out_goal___MethodId_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 3)));

          {
            hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_25, (MR_Char) 108);
          }
          if (hlds__hlds_out__hlds_out_goal__succeeded)
            {
              {
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "% class method call\n");
              }
              {
                hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0(hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__MaybeArgRegs_23);
              }
            }
          else
            {
            }
          {
            mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_goal__Context_36);
          }
          {
            hlds__hlds_out__hlds_out_goal__TCInfoTerm_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TCInfoTerm_38, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__TCInfoVar_32));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TCInfoTerm_38, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Context_36));
          }
          {
            hlds__hlds_out__hlds_out_goal__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_84_84, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__MethodNum_33));
          }
          {
            hlds__hlds_out__hlds_out_goal__MethodNumTerm_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__MethodNumTerm_39, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_84_84));
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__MethodNumTerm_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__MethodNumTerm_39, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Context_36));
          }
          hlds__hlds_out__hlds_out_goal__TypeCtorInfo_131_131 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          {
            mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_131_131, hlds__hlds_out__hlds_out_goal__ArgVars_21, &hlds__hlds_out__hlds_out_goal__ArgTerms_40);
          }
          {
            hlds__hlds_out__hlds_out_goal__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_87_87, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__MethodNumTerm_39));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_87_87, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__ArgTerms_40));
          }
          {
            hlds__hlds_out__hlds_out_goal__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_86_86, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__TCInfoTerm_38));
            MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_86_86, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_87_87));
          }
          {
            hlds__hlds_out__hlds_out_goal__Term_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Term_41, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Term_41, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_86_86));
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Term_41, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Context_36));
          }
          {
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
          {
            parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_131_131, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Term_41);
          }
          {
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_132_132;
          MR_String hlds__hlds_out__hlds_out_goal__EventName_42 = ((MR_String) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 0)));
          MR_Word hlds__hlds_out__hlds_out_goal__Context_117;
          MR_Word hlds__hlds_out__hlds_out_goal__Functor_118;
          MR_Word hlds__hlds_out__hlds_out_goal__ArgTerms_119;
          MR_Word hlds__hlds_out__hlds_out_goal__Term_120;

          {
            hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_25, (MR_Char) 108);
          }
          if (hlds__hlds_out__hlds_out_goal__succeeded)
            {
              {
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "% event call\n");
              }
              {
                hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0(hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__MaybeArgRegs_23);
              }
            }
          else
            {
            }
          {
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "event ");
          }
          {
            mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_goal__Context_117);
          }
          {
            hlds__hlds_out__hlds_out_goal__Functor_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Functor_118, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__EventName_42));
          }
          hlds__hlds_out__hlds_out_goal__TypeCtorInfo_132_132 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          {
            mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_132_132, hlds__hlds_out__hlds_out_goal__ArgVars_21, &hlds__hlds_out__hlds_out_goal__ArgTerms_119);
          }
          {
            hlds__hlds_out__hlds_out_goal__Term_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Term_120, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Functor_118));
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Term_120, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__ArgTerms_119));
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Term_120, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Context_117));
          }
          {
            parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_132_132, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Term_120);
          }
          {
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_134_134;
          MR_Word hlds__hlds_out__hlds_out_goal__CastType_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GenericCall_20, (MR_Integer) 0)));
          MR_String hlds__hlds_out__hlds_out_goal__CastTypeString_44;
          MR_Word hlds__hlds_out__hlds_out_goal__Context_121;
          MR_Word hlds__hlds_out__hlds_out_goal__Functor_122;
          MR_Word hlds__hlds_out__hlds_out_goal__ArgTerms_123;
          MR_Word hlds__hlds_out__hlds_out_goal__Term_124;

          {
            hlds__hlds_out__hlds_out_goal__CastTypeString_44 = hlds__hlds_out__hlds_out_util__cast_type_to_string_1_f_0(hlds__hlds_out__hlds_out_goal__CastType_43);
          }
          {
            hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_25, (MR_Char) 108);
          }
          if (hlds__hlds_out__hlds_out_goal__succeeded)
            {
              MR_Word hlds__hlds_out__hlds_out_goal__V_50_50;
              MR_Word hlds__hlds_out__hlds_out_goal__V_53_53;

              {
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
              }
              {
                hlds__hlds_out__hlds_out_goal__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_53_53, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__CastTypeString_44));
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[17])));
              }
              {
                hlds__hlds_out__hlds_out_goal__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_50_50, 0) = ((MR_Box) ((MR_String) "% "));
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_50_50, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_53_53));
              }
              {
                mercury__io__write_strings_3_p_0(hlds__hlds_out__hlds_out_goal__V_50_50);
              }
              {
                hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0(hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__MaybeArgRegs_23);
              }
            }
          else
            {
            }
          {
            hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_25, (MR_Char) 68);
          }
          if (hlds__hlds_out__hlds_out_goal__succeeded)
            {
              MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_45;

              {
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "% modes: ");
              }
              {
                mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &hlds__hlds_out__hlds_out_goal__InstVarSet_45);
              }
              {
                parse_tree__parse_tree_out_inst__mercury_output_mode_list_5_p_0((MR_Integer) 1, hlds__hlds_out__hlds_out_goal__InstVarSet_45, hlds__hlds_out__hlds_out_goal__Modes_22);
              }
              {
                mercury__io__nl_2_p_0();
              }
            }
          else
            {
            }
          {
            hlds__hlds_out__hlds_out_goal__Functor_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Functor_122, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__CastTypeString_44));
          }
          hlds__hlds_out__hlds_out_goal__TypeCtorInfo_134_134 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          {
            mercury__term__var_list_to_term_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_134_134, hlds__hlds_out__hlds_out_goal__ArgVars_21, &hlds__hlds_out__hlds_out_goal__ArgTerms_123);
          }
          {
            mercury__term__context_init_1_p_0(&hlds__hlds_out__hlds_out_goal__Context_121);
          }
          {
            hlds__hlds_out__hlds_out_goal__Term_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Term_124, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Functor_122));
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Term_124, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__ArgTerms_123));
            MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Term_124, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Context_121));
          }
          {
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
          {
            parse_tree__parse_tree_out_term__mercury_output_term_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_134_134, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Term_124);
          }
          {
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_50_93_95_48_11_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_12,
  MR_Word hlds__hlds_out__hlds_out_goal__ProgVarSet_14,
  MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_15,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_16,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_17,
  MR_Word hlds__hlds_out__hlds_out_goal__ConsId_18,
  MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_19,
  MR_Word hlds__hlds_out__hlds_out_goal__ArgModes_20)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
    MR_String hlds__hlds_out__hlds_out_goal__V_27_27;

    {
      hlds__hlds_out__hlds_out_goal__V_27_27 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(hlds__hlds_out__hlds_out_goal__ConsId_18);
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_27_27);
    }
    if ((hlds__hlds_out__hlds_out_goal__ArgVars_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
    else
      {
        MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_24;
        MR_String hlds__hlds_out__hlds_out_goal__V_50_50;
        MR_Word hlds__hlds_out__hlds_out_goal__V_51_51;
        MR_Word hlds__hlds_out__hlds_out_goal__V_52_52;
        MR_Word hlds__hlds_out__hlds_out_goal__V_53_53;

        {
          mercury__io__write_string_3_p_0((MR_String) " (");
        }
        {
          parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__ProgVarSet_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_16, hlds__hlds_out__hlds_out_goal__ArgVars_19);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ")\n");
        }
        hlds__hlds_out__hlds_out_goal__DumpOptions_24 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 0)));
        hlds__hlds_out__hlds_out_goal__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 1)));
        hlds__hlds_out__hlds_out_goal__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 2)));
        hlds__hlds_out__hlds_out_goal__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 3)));
        hlds__hlds_out__hlds_out_goal__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 4)));
        {
          hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_24, (MR_Char) 97);
        }
        if (hlds__hlds_out__hlds_out_goal__succeeded)
          {
            {
              hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_24, (MR_Char) 121);
            }
            if (hlds__hlds_out__hlds_out_goal__succeeded)
              {
                {
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_17);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "% arg-modes\n");
                }
                {
                  hlds__hlds_out__hlds_out_mode__mercury_output_structured_uni_mode_list_7_p_0(hlds__hlds_out__hlds_out_goal__ArgModes_20, hlds__hlds_out__hlds_out_goal__Indent_17, (MR_Integer) 1, (MR_Integer) 1, hlds__hlds_out__hlds_out_goal__InstVarSet_15);
                }
              }
            else
              {
                {
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_17);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "% arg-modes ");
                }
                {
                  hlds__hlds_out__hlds_out_mode__mercury_output_uni_mode_list_4_p_0(hlds__hlds_out__hlds_out_goal__ArgModes_20, hlds__hlds_out__hlds_out_goal__InstVarSet_15);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
              }
          }
        else
          {
          }
      }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_9_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_10,
  MR_Word hlds__hlds_out__hlds_out_goal__ProgVarSet_12,
  MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_13,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_14,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_15,
  MR_Word hlds__hlds_out__hlds_out_goal__Unification_16)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__Unification_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_173_173;
          MR_Word hlds__hlds_out__hlds_out_goal__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 0)));
          MR_Word hlds__hlds_out__hlds_out_goal__ConsId_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 1)));
          MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 2)));
          MR_Word hlds__hlds_out__hlds_out_goal__ArgModes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 3)));
          MR_Word hlds__hlds_out__hlds_out_goal__ConstructHow_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 4)));
          MR_Word hlds__hlds_out__hlds_out_goal__Uniqueness_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 5)));
          MR_Word hlds__hlds_out__hlds_out_goal__SubInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 6)));
          MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_27;
          MR_String hlds__hlds_out__hlds_out_goal__V_163_163;
          MR_Word hlds__hlds_out__hlds_out_goal__V_164_164;
          MR_Word hlds__hlds_out__hlds_out_goal__V_165_165;
          MR_Word hlds__hlds_out__hlds_out_goal__V_166_166;

          {
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_15);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "% ");
          }
          hlds__hlds_out__hlds_out_goal__TypeCtorInfo_173_173 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          {
            parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_173_173, hlds__hlds_out__hlds_out_goal__ProgVarSet_12, hlds__hlds_out__hlds_out_goal__VarNamePrint_14, hlds__hlds_out__hlds_out_goal__Var_20);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " := ");
          }
          {
            hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_50_93_95_48_11_p_0(hlds__hlds_out__hlds_out_goal__Info_10, hlds__hlds_out__hlds_out_goal__ProgVarSet_12, hlds__hlds_out__hlds_out_goal__InstVarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_14, hlds__hlds_out__hlds_out_goal__Indent_15, hlds__hlds_out__hlds_out_goal__ConsId_21, hlds__hlds_out__hlds_out_goal__ArgVars_22, hlds__hlds_out__hlds_out_goal__ArgModes_23);
          }
          hlds__hlds_out__hlds_out_goal__DumpOptions_27 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 0)));
          hlds__hlds_out__hlds_out_goal__V_163_163 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 1)));
          hlds__hlds_out__hlds_out_goal__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 2)));
          hlds__hlds_out__hlds_out_goal__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 3)));
          hlds__hlds_out__hlds_out_goal__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 4)));
          {
            hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_27, (MR_Char) 117);
          }
          if (hlds__hlds_out__hlds_out_goal__succeeded)
            {
              MR_Word hlds__hlds_out__hlds_out_goal__TypeCtor_30;
              MR_Word hlds__hlds_out__hlds_out_goal__V_28_28;
              MR_Integer hlds__hlds_out__hlds_out_goal__V_29_29;

              hlds__hlds_out__hlds_out_goal__succeeded = ((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__ConsId_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_21, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (hlds__hlds_out__hlds_out_goal__succeeded)
                {
                  hlds__hlds_out__hlds_out_goal__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_21, (MR_Integer) 1)));
                  hlds__hlds_out__hlds_out_goal__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_21, (MR_Integer) 2)));
                  hlds__hlds_out__hlds_out_goal__TypeCtor_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_21, (MR_Integer) 3)));
                  {
                    MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorSymName_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__TypeCtor_30, (MR_Integer) 0)));
                    MR_Integer hlds__hlds_out__hlds_out_goal__TypeCtorArity_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__TypeCtor_30, (MR_Integer) 1)));
                    MR_String hlds__hlds_out__hlds_out_goal__TypeCtorSymNameStr_33;
                    MR_String hlds__hlds_out__hlds_out_goal__V_180_180;
                    MR_Word hlds__hlds_out__hlds_out_goal__V_186_186;
                    MR_String hlds__hlds_out__hlds_out_goal__V_189_189;

                    {
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_15);
                    }
                    {
                      hlds__hlds_out__hlds_out_goal__TypeCtorSymNameStr_33 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorSymName_31);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) "% cons_id type_ctor: ");
                    }
                    hlds__hlds_out__hlds_out_goal__V_186_186 = (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_4[0];
                    {
                      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_goal__V_186_186, hlds__hlds_out__hlds_out_goal__TypeCtorSymNameStr_33, &hlds__hlds_out__hlds_out_goal__V_180_180);
                    }
                    {
                      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_180_180);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) "/");
                    }
                    {
                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__hlds_out__hlds_out_goal__V_186_186, hlds__hlds_out__hlds_out_goal__TypeCtorArity_32, &hlds__hlds_out__hlds_out_goal__V_189_189);
                    }
                    {
                      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_189_189);
                    }
                  }
                }
              else
                {
                }
              switch (hlds__hlds_out__hlds_out_goal__Uniqueness_25) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_15);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) "% cell_is_unique\n");
                    }
                  }
                  break;
              }
              if ((hlds__hlds_out__hlds_out_goal__SubInfo_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                }
              else
                {
                  MR_Word hlds__hlds_out__hlds_out_goal__MaybeTakeAddr_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__SubInfo_26, (MR_Integer) 0)));
                  MR_Word hlds__hlds_out__hlds_out_goal__MaybeSize_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__SubInfo_26, (MR_Integer) 1)));

                  if ((hlds__hlds_out__hlds_out_goal__MaybeTakeAddr_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                    }
                  else
                    {
                      MR_Word hlds__hlds_out__hlds_out_goal__TakeAddressFields_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeTakeAddr_34, (MR_Integer) 0)));

                      {
                        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_15);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) "% take address fields: ");
                      }
                      {
                        hlds__hlds_out__hlds_out_util__write_intlist_3_p_0(hlds__hlds_out__hlds_out_goal__TakeAddressFields_36);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) "\n");
                      }
                    }
                  if ((hlds__hlds_out__hlds_out_goal__MaybeSize_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                    }
                  else
                    {
                      MR_Word hlds__hlds_out__hlds_out_goal__SizeSource_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeSize_35, (MR_Integer) 0)));

                      {
                        hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_15);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) "% term size ");
                      }
                      if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__SizeSource_37)) == (MR_mktag((MR_Integer) 1))))
                        {
                          MR_Word hlds__hlds_out__hlds_out_goal__SizeVar_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__SizeSource_37, (MR_Integer) 0)));

                          {
                            mercury__io__write_string_3_p_0((MR_String) "var ");
                          }
                          {
                            parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_173_173, hlds__hlds_out__hlds_out_goal__ProgVarSet_12, hlds__hlds_out__hlds_out_goal__VarNamePrint_14, hlds__hlds_out__hlds_out_goal__SizeVar_39);
                          }
                          {
                            mercury__io__write_string_3_p_0((MR_String) "\n");
                          }
                        }
                      else
                        {
                          MR_Integer hlds__hlds_out__hlds_out_goal__KnownSize_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__SizeSource_37, (MR_Integer) 0)));

                          {
                            mercury__io__write_string_3_p_0((MR_String) "const ");
                          }
                          {
                            mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_goal__KnownSize_38);
                          }
                          {
                            mercury__io__write_string_3_p_0((MR_String) "\n");
                          }
                        }
                    }
                }
              switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__ConstructHow_24)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(hlds__hlds_out__hlds_out_goal__ConstructHow_24)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        {
                          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_15);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "% construct statically\n");
                        }
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
                    MR_Word hlds__hlds_out__hlds_out_goal__CellToReuse_40 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_goal__ConstructHow_24), (MR_Integer) 1);
                    MR_Word hlds__hlds_out__hlds_out_goal__ReuseVar_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CellToReuse_40, (MR_Integer) 0)));
                    MR_Word hlds__hlds_out__hlds_out_goal___ReuseConsIds_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CellToReuse_40, (MR_Integer) 1)));
                    MR_Word hlds__hlds_out__hlds_out_goal___FieldAssigns_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CellToReuse_40, (MR_Integer) 2)));

                    {
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_15);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) "% reuse cell: ");
                    }
                    {
                      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_173_173, hlds__hlds_out__hlds_out_goal__ProgVarSet_12, hlds__hlds_out__hlds_out_goal__VarNamePrint_14, hlds__hlds_out__hlds_out_goal__ReuseVar_41);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) "\n");
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word hlds__hlds_out__hlds_out_goal__RegVar_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__ConstructHow_24, (MR_Integer) 0)));

                    {
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_15);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) "% construct in region: ");
                    }
                    {
                      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_173_173, hlds__hlds_out__hlds_out_goal__ProgVarSet_12, hlds__hlds_out__hlds_out_goal__VarNamePrint_14, hlds__hlds_out__hlds_out_goal__RegVar_44);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) "\n");
                    }
                  }
                  break;
              }
            }
          else
            {
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__hlds_out__hlds_out_goal__CanFail_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 4)));
          MR_Word hlds__hlds_out__hlds_out_goal__CanCGC_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 5)));
          MR_Word hlds__hlds_out__hlds_out_goal__Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 0)));
          MR_Word hlds__hlds_out__hlds_out_goal__ConsId_158 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 1)));
          MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_159 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 2)));
          MR_Word hlds__hlds_out__hlds_out_goal__ArgModes_160 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 3)));
          MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_161 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 0)));
          MR_String hlds__hlds_out__hlds_out_goal__V_167_167 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 1)));
          MR_Word hlds__hlds_out__hlds_out_goal__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 2)));
          MR_Word hlds__hlds_out__hlds_out_goal__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 3)));
          MR_Word hlds__hlds_out__hlds_out_goal__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_10, (MR_Integer) 4)));

          {
            hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_161, (MR_Char) 71);
          }
          if (hlds__hlds_out__hlds_out_goal__succeeded)
            {
              {
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_15);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "% Compile time garbage collect: ");
              }
              {
                mercury__io__write_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_can_cgc_0, ((MR_Box) (hlds__hlds_out__hlds_out_goal__CanCGC_46)));
              }
              {
                mercury__io__nl_2_p_0();
              }
            }
          else
            {
            }
          {
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_15);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "% ");
          }
          {
            parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__ProgVarSet_12, hlds__hlds_out__hlds_out_goal__VarNamePrint_14, hlds__hlds_out__hlds_out_goal__Var_157);
          }
          switch (hlds__hlds_out__hlds_out_goal__CanFail_45) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) " \?= ");
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) " => ");
                }
              }
              break;
          }
          {
            hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_102_117_110_99_116_111_114_95_97_110_100_95_115_117_98_109_111_100_101_115_95_95_91_50_93_95_48_11_p_0(hlds__hlds_out__hlds_out_goal__Info_10, hlds__hlds_out__hlds_out_goal__ProgVarSet_12, hlds__hlds_out__hlds_out_goal__InstVarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_14, hlds__hlds_out__hlds_out_goal__Indent_15, hlds__hlds_out__hlds_out_goal__ConsId_158, hlds__hlds_out__hlds_out_goal__ArgVars_159, hlds__hlds_out__hlds_out_goal__ArgModes_160);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_171_171;
          MR_Word hlds__hlds_out__hlds_out_goal__X_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 0)));
          MR_Word hlds__hlds_out__hlds_out_goal__Y_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 1)));

          {
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_15);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "% ");
          }
          hlds__hlds_out__hlds_out_goal__TypeCtorInfo_171_171 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          {
            parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_171_171, hlds__hlds_out__hlds_out_goal__ProgVarSet_12, hlds__hlds_out__hlds_out_goal__VarNamePrint_14, hlds__hlds_out__hlds_out_goal__X_18);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " := ");
          }
          {
            parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_171_171, hlds__hlds_out__hlds_out_goal__ProgVarSet_12, hlds__hlds_out__hlds_out_goal__VarNamePrint_14, hlds__hlds_out__hlds_out_goal__Y_19);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_172_172;
              MR_Word hlds__hlds_out__hlds_out_goal__X_155 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 1)));
              MR_Word hlds__hlds_out__hlds_out_goal__Y_156 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 2)));

              {
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_15);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "% ");
              }
              hlds__hlds_out__hlds_out_goal__TypeCtorInfo_172_172 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
              {
                parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_172_172, hlds__hlds_out__hlds_out_goal__ProgVarSet_12, hlds__hlds_out__hlds_out_goal__VarNamePrint_14, hlds__hlds_out__hlds_out_goal__X_155);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " == ");
              }
              {
                parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_172_172, hlds__hlds_out__hlds_out_goal__ProgVarSet_12, hlds__hlds_out__hlds_out_goal__VarNamePrint_14, hlds__hlds_out__hlds_out_goal__Y_156);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__hlds_out__hlds_out_goal__Mode_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 1)));
              MR_Word hlds__hlds_out__hlds_out_goal__TypeInfoVars_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 3)));
              MR_Word hlds__hlds_out__hlds_out_goal__CanFail_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_16, (MR_Integer) 2)));

              {
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_15);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "% ");
              }
              switch (hlds__hlds_out__hlds_out_goal__CanFail_162) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "can_fail, ");
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "cannot_fail, ");
                    }
                  }
                  break;
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "mode: ");
              }
              {
                hlds__hlds_out__hlds_out_mode__mercury_output_uni_mode_4_p_0(hlds__hlds_out__hlds_out_goal__Mode_47, hlds__hlds_out__hlds_out_goal__InstVarSet_13);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
              {
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_15);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "% type-info vars: ");
              }
              {
                parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__ProgVarSet_12, hlds__hlds_out__hlds_out_goal__VarNamePrint_14, hlds__hlds_out__hlds_out_goal__TypeInfoVars_48);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__332__1_3_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_334)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

    {
      mercury__io__write_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], ((MR_Box) (hlds__hlds_out__hlds_out_goal__HeadVar__1_334)));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__328__1_3_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_330)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

    {
      mercury__io__write_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], ((MR_Box) (hlds__hlds_out__hlds_out_goal__HeadVar__1_330)));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__324__1_3_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_326)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

    {
      mercury__io__write_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], ((MR_Box) (hlds__hlds_out__hlds_out_goal__HeadVar__1_326)));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__320__1_3_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_322)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

    {
      mercury__io__write_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], ((MR_Box) (hlds__hlds_out__hlds_out_goal__HeadVar__1_322)));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__316__1_3_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__1_318)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

    {
      mercury__io__write_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], ((MR_Box) (hlds__hlds_out__hlds_out_goal__HeadVar__1_318)));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_6_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_7,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_8,
  MR_String hlds__hlds_out__hlds_out_goal__CompName_9,
  MR_Word hlds__hlds_out__hlds_out_goal__CompState_10)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
    MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_25_25;
    MR_Word hlds__hlds_out__hlds_out_goal__Var1_12;
    MR_Word hlds__hlds_out__hlds_out_goal__Var2_13;

    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__CompName_9);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
    hlds__hlds_out__hlds_out_goal__Var1_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CompState_10, (MR_Integer) 0)));
    hlds__hlds_out__hlds_out_goal__Var2_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CompState_10, (MR_Integer) 1)));
    hlds__hlds_out__hlds_out_goal__TypeCtorInfo_25_25 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_25_25, hlds__hlds_out__hlds_out_goal__VarSet_7, hlds__hlds_out__hlds_out_goal__VarNamePrint_8, hlds__hlds_out__hlds_out_goal__Var1_12);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", ");
    }
    {
      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_25_25, hlds__hlds_out__hlds_out_goal__VarSet_7, hlds__hlds_out__hlds_out_goal__VarNamePrint_8, hlds__hlds_out__hlds_out_goal__Var2_13);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
    MR_Word hlds__hlds_out__hlds_out_goal__ShortHand_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__ShortHand_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__hlds_out__hlds_out_goal__GoalA_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 0)));
          MR_Word hlds__hlds_out__hlds_out_goal__GoalB_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 1)));
          MR_Integer hlds__hlds_out__hlds_out_goal__Indent1_36;

          {
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "( % bi-implication\n");
          }
          hlds__hlds_out__hlds_out_goal__Indent1_36 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
          {
            hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent1_36, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__GoalA_34);
          }
          {
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "<=>\n");
          }
          {
            hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent1_36, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__GoalB_35);
          }
          {
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          {
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__hlds_out__hlds_out_goal__Outer_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 1)));
          MR_Word hlds__hlds_out__hlds_out_goal__Inner_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 2)));
          MR_Word hlds__hlds_out__hlds_out_goal__MaybeOutputVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 3)));
          MR_Word hlds__hlds_out__hlds_out_goal__MainGoal_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 4)));
          MR_Word hlds__hlds_out__hlds_out_goal__OrElseGoals_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 5)));
          MR_Integer hlds__hlds_out__hlds_out_goal__V_95_95;
          MR_Word hlds__hlds_out__hlds_out_goal___GoalType_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 0)));
          MR_Word hlds__hlds_out__hlds_out_goal___OrElseInners_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 6)));

          {
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "atomic [");
          }
          {
            hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_6_p_0(hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, (MR_String) "outer", hlds__hlds_out__hlds_out_goal__Outer_22);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " ");
          }
          {
            hlds__hlds_out__hlds_out_goal__write_atomic_interface_vars_6_p_0(hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, (MR_String) "inner", hlds__hlds_out__hlds_out_goal__Inner_23);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " ");
          }
          if ((hlds__hlds_out__hlds_out_goal__MaybeOutputVars_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
            }
          else
            {
              MR_Word hlds__hlds_out__hlds_out_goal__OutputVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeOutputVars_24, (MR_Integer) 0)));

              {
                mercury__io__write_string_3_p_0((MR_String) "vars([");
              }
              {
                parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__OutputVars_28);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "])");
              }
            }
          {
            mercury__io__write_string_3_p_0((MR_String) "] (\n");
          }
          hlds__hlds_out__hlds_out_goal__V_95_95 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
          {
            hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__V_95_95, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__MainGoal_25);
          }
          {
            hlds__hlds_out__hlds_out_goal__write_goal_list_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, (MR_String) "or_else\n", hlds__hlds_out__hlds_out_goal__OrElseGoals_26);
          }
          {
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          {
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__hlds_out__hlds_out_goal__MaybeIO_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 0)));
          MR_Word hlds__hlds_out__hlds_out_goal__SubGoal_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 2)));
          MR_Integer hlds__hlds_out__hlds_out_goal__V_69_69;
          MR_Word hlds__hlds_out__hlds_out_goal__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__ShortHand_20, (MR_Integer) 1)));

          {
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "( % try\n");
          }
          if ((hlds__hlds_out__hlds_out_goal__MaybeIO_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
            }
          else
            {
              MR_Word hlds__hlds_out__hlds_out_goal__IOVarA_32;
              MR_Word hlds__hlds_out__hlds_out_goal__IOVarB_33;
              MR_Word hlds__hlds_out__hlds_out_goal__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeIO_29, (MR_Integer) 0)));
              MR_Integer hlds__hlds_out__hlds_out_goal__V_58_58;
              MR_Word hlds__hlds_out__hlds_out_goal__V_63_63;
              MR_Word hlds__hlds_out__hlds_out_goal__V_65_65;

              hlds__hlds_out__hlds_out_goal__IOVarA_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_57_57, (MR_Integer) 0)));
              hlds__hlds_out__hlds_out_goal__IOVarB_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_57_57, (MR_Integer) 1)));
              hlds__hlds_out__hlds_out_goal__V_58_58 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
              {
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__V_58_58);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "% io(");
              }
              {
                hlds__hlds_out__hlds_out_goal__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_65_65, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__IOVarB_33));
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                hlds__hlds_out__hlds_out_goal__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_63_63, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__IOVarA_32));
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_63_63, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_65_65));
              }
              {
                parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__V_63_63);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")\n");
              }
            }
          hlds__hlds_out__hlds_out_goal__V_69_69 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
          {
            hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__V_69_69, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__SubGoal_31);
          }
          {
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          {
            mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__maybe_add_newline_indent_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__AddCommaNewlineIndent_5,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_6)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

    switch (hlds__hlds_out__hlds_out_goal__AddCommaNewlineIndent_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
          {
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_6);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__maybe_add_comma_newline_indent_4_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__AddCommaNewlineIndent_5,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_6)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

    switch (hlds__hlds_out__hlds_out_goal__AddCommaNewlineIndent_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) ",\n");
          }
          {
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_6);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_6_p_0(
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_7,
  MR_Word hlds__hlds_out__hlds_out_goal__MutableVar_8,
  MR_Word hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_0_13,
  MR_Word * hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_14)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
    MR_String hlds__hlds_out__hlds_out_goal__MutableName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__MutableVar_8, (MR_Integer) 0)));
    MR_String hlds__hlds_out__hlds_out_goal__StateVarName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__MutableVar_8, (MR_Integer) 1)));
    MR_String hlds__hlds_out__hlds_out_goal__V_18_18;
    MR_String hlds__hlds_out__hlds_out_goal__V_21_21;
    MR_String hlds__hlds_out__hlds_out_goal__V_23_23;
    MR_String hlds__hlds_out__hlds_out_goal__V_26_26;

    switch (hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_0_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
          {
            hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_7);
          }
        }
        break;
    }
    {
      hlds__hlds_out__hlds_out_goal__V_21_21 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_goal__MutableName_11, (MR_String) ", ");
    }
    {
      hlds__hlds_out__hlds_out_goal__V_18_18 = mercury__string__f_43_43_2_f_0((MR_String) "% state(", hlds__hlds_out__hlds_out_goal__V_21_21);
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_18_18);
    }
    {
      hlds__hlds_out__hlds_out_goal__V_26_26 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_goal__StateVarName_12, (MR_String) ")");
    }
    {
      hlds__hlds_out__hlds_out_goal__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) "!", hlds__hlds_out__hlds_out_goal__V_26_26);
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_23_23);
    }
    *hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_14 = (MR_Integer) 1;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0_3(
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_4,
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_5)
{
  {
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;
    MR_Word hlds__hlds_out__hlds_out_goal__conv0_STATE_VARIABLE_AddCommaNewlineIndent_14;

    {
      hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_6_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_1), ((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_2), &hlds__hlds_out__hlds_out_goal__conv0_STATE_VARIABLE_AddCommaNewlineIndent_14);
    }
    *hlds__hlds_out__hlds_out_goal__wrapper_arg_3 = ((MR_Box) (hlds__hlds_out__hlds_out_goal__conv0_STATE_VARIABLE_AddCommaNewlineIndent_14));
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0_2(
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

    {
      parse_tree__parse_tree_out_clause__mercury_output_trace_runtime_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

    {
      parse_tree__parse_tree_out_clause__mercury_output_trace_compiletime_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_41,
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
    MR_Word hlds__hlds_out__hlds_out_goal__Reason_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_goal__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 2)));
    MR_Word hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122;
    MR_Integer hlds__hlds_out__hlds_out_goal__V_215_215;

    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__Reason_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__hlds_out__hlds_out_goal__Vars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 0)));

          {
            mercury__io__write_string_3_p_0((MR_String) "some [");
          }
          {
            parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Vars_22);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "] (\n");
          }
          hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_41;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__hlds_out__hlds_out_goal__Kind_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 1)));
          MR_Word hlds__hlds_out__hlds_out_goal__Vars_223 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 0)));

          switch (hlds__hlds_out__hlds_out_goal__Kind_24) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "promise_equivalent_solution_sets");
                }
              }
              break;
            case (MR_Integer) 2:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "arbitrary");
                }
              }
              break;
            case (MR_Integer) 0:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "promise_equivalent_solutions");
                }
              }
              break;
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " [");
          }
          {
            parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Vars_223);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "] (\n");
          }
          hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_41;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__hlds_out__hlds_out_goal__Purity_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 0)));

          switch (hlds__hlds_out__hlds_out_goal__Purity_23) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "promise_impure (");
                }
              }
              break;
            case (MR_Integer) 0:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "promise_pure (");
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "promise_semipure (");
                }
              }
              break;
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
          hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_41;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__hlds_out__hlds_out_goal__Detism_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 1)));

              switch (hlds__hlds_out__hlds_out_goal__Detism_25) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 4:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_cc_multi");
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_cc_nondet");
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_det");
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_erroneous");
                    }
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_failure");
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_multi");
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_nondet");
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_semidet");
                    }
                  }
                  break;
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " (\n");
              }
              hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_41;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__hlds_out__hlds_out_goal__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 1)));

              {
                mercury__io__write_string_3_p_0((MR_String) "require_complete_switch [");
              }
              {
                parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Var_26);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "] (\n");
              }
              hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_41;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__hlds_out__hlds_out_goal__Detism_224 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 2)));
              MR_Word hlds__hlds_out__hlds_out_goal__Var_225 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 1)));

              switch (hlds__hlds_out__hlds_out_goal__Detism_224) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 4:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_cc_multi");
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_cc_nondet");
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_det");
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_erroneous");
                    }
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_failure");
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_multi");
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_nondet");
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "require_switch_arms_semidet");
                    }
                  }
                  break;
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " [");
              }
              {
                parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Var_225);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "] (\n");
              }
              hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_41;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word hlds__hlds_out__hlds_out_goal__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 1)));

              switch (hlds__hlds_out__hlds_out_goal__V_261_261) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(\n");
                    }
                    {
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) "% commit(dont_force_pruning)\n");
                    }
                    hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_41;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(\n");
                    }
                    {
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) "% commit(force_pruning)\n");
                    }
                    hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_41;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word hlds__hlds_out__hlds_out_goal__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 1)));

              switch (hlds__hlds_out__hlds_out_goal__V_260_260) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(\n");
                    }
                    {
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) "% barrier(not_removable)\n");
                    }
                    hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_41;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(\n");
                    }
                    {
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) "% barrier(removable)\n");
                    }
                    hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_41;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_String hlds__hlds_out__hlds_out_goal__DumpOptionsBackup_27;
              MR_Word hlds__hlds_out__hlds_out_goal__Kind_226 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 2)));
              MR_Word hlds__hlds_out__hlds_out_goal__Var_227 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 1)));
              MR_Word hlds__hlds_out__hlds_out_goal__V_229_229;
              MR_Word hlds__hlds_out__hlds_out_goal__V_230_230;
              MR_Word hlds__hlds_out__hlds_out_goal__V_231_231;
              MR_String hlds__hlds_out__hlds_out_goal__V_228_228;

              {
                mercury__io__write_string_3_p_0((MR_String) "(\n");
              }
              {
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "% from_ground_term [");
              }
              {
                parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Var_227);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ", ");
              }
              switch (hlds__hlds_out__hlds_out_goal__Kind_226) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "construct");
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "deconstruct");
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "initial");
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "other");
                    }
                  }
                  break;
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "]\n");
              }
              hlds__hlds_out__hlds_out_goal__V_228_228 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
              hlds__hlds_out__hlds_out_goal__DumpOptionsBackup_27 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
              hlds__hlds_out__hlds_out_goal__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
              hlds__hlds_out__hlds_out_goal__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)));
              hlds__hlds_out__hlds_out_goal__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_41, (MR_Integer) 4)));
              {
                hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__DumpOptionsBackup_27));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__DumpOptionsBackup_27));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_229_229));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_230_230));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122, 4) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_231_231));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word hlds__hlds_out__hlds_out_goal__MaybeCompileTime_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 1)));
              MR_Word hlds__hlds_out__hlds_out_goal__MaybeRunTime_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 2)));
              MR_Word hlds__hlds_out__hlds_out_goal__MaybeIO_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 3)));
              MR_Word hlds__hlds_out__hlds_out_goal__MutableVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 4)));
              MR_Word hlds__hlds_out__hlds_out_goal__QuantVars_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 5)));
              MR_Word hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_68_68;
              MR_Word hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_78_78;
              MR_Word hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_87_87;
              MR_Word hlds__hlds_out__hlds_out_goal__V_88_88;
              MR_Word hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_89_89;
              MR_Integer hlds__hlds_out__hlds_out_goal__V_91_91;
              MR_Integer hlds__hlds_out__hlds_out_goal__V_93_93;
              MR_Box hlds__hlds_out__hlds_out_goal__conv2_STATE_VARIABLE_AddCommaNewlineIndent_89_89;
              MR_Box hlds__hlds_out__hlds_out_goal__conv1_STATE_VARIABLE_IO_90_90;

              {
                mercury__io__write_string_3_p_0((MR_String) "trace [\n");
              }
              if ((hlds__hlds_out__hlds_out_goal__MaybeCompileTime_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_68_68 = (MR_Integer) 0;
              else
                {
                  MR_Word hlds__hlds_out__hlds_out_goal__CompileTime_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeCompileTime_28, (MR_Integer) 0)));
                  MR_Integer hlds__hlds_out__hlds_out_goal__V_59_59 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);

                  {
                    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__V_59_59);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "compile_time(");
                  }
                  {
                    parse_tree__parse_tree_out_clause__mercury_output_trace_expr_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_compiletime_0, (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[8], hlds__hlds_out__hlds_out_goal__CompileTime_34);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_68_68 = (MR_Integer) 1;
                }
              if ((hlds__hlds_out__hlds_out_goal__MaybeRunTime_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_78_78 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_68_68;
              else
                {
                  MR_Word hlds__hlds_out__hlds_out_goal__RunTime_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeRunTime_29, (MR_Integer) 0)));
                  MR_Integer hlds__hlds_out__hlds_out_goal__V_69_69 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);

                  {
                    hlds__hlds_out__hlds_out_goal__maybe_add_comma_newline_indent_4_p_0(hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_68_68, hlds__hlds_out__hlds_out_goal__V_69_69);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "runtime(");
                  }
                  {
                    parse_tree__parse_tree_out_clause__mercury_output_trace_expr_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0, (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[9], hlds__hlds_out__hlds_out_goal__RunTime_35);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_78_78 = (MR_Integer) 1;
                }
              if ((hlds__hlds_out__hlds_out_goal__MaybeIO_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_87_87 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_78_78;
              else
                {
                  MR_String hlds__hlds_out__hlds_out_goal__IOStateVarName_36 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeIO_30, (MR_Integer) 0)));
                  MR_Integer hlds__hlds_out__hlds_out_goal__V_79_79 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
                  MR_String hlds__hlds_out__hlds_out_goal__V_82_82;
                  MR_String hlds__hlds_out__hlds_out_goal__V_85_85;

                  {
                    hlds__hlds_out__hlds_out_goal__maybe_add_newline_indent_4_p_0(hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_78_78, hlds__hlds_out__hlds_out_goal__V_79_79);
                  }
                  {
                    hlds__hlds_out__hlds_out_goal__V_85_85 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_goal__IOStateVarName_36, (MR_String) ")");
                  }
                  {
                    hlds__hlds_out__hlds_out_goal__V_82_82 = mercury__string__f_43_43_2_f_0((MR_String) "% io(!", hlds__hlds_out__hlds_out_goal__V_85_85);
                  }
                  {
                    mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_82_82);
                  }
                  hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_87_87 = (MR_Integer) 1;
                }
              hlds__hlds_out__hlds_out_goal__V_91_91 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
              {
                hlds__hlds_out__hlds_out_goal__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_88_88, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[0]));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_88_88, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0_3));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_88_88, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_88_88, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_91_91));
              }
              {
                mercury__list__foldl2_6_p_2((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, hlds__hlds_out__hlds_out_goal__V_88_88, hlds__hlds_out__hlds_out_goal__MutableVars_31, ((MR_Box) (hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_87_87)), &hlds__hlds_out__hlds_out_goal__conv2_STATE_VARIABLE_AddCommaNewlineIndent_89_89, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_goal__conv1_STATE_VARIABLE_IO_90_90);
              }
              hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_89_89 = ((MR_Word) hlds__hlds_out__hlds_out_goal__conv2_STATE_VARIABLE_AddCommaNewlineIndent_89_89);
              hlds__hlds_out__hlds_out_goal__V_93_93 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
              {
                hlds__hlds_out__hlds_out_goal__maybe_add_newline_indent_4_p_0(hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_89_89, hlds__hlds_out__hlds_out_goal__V_93_93);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "% quantified vars [");
              }
              {
                parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__QuantVars_32);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "]");
              }
              {
                hlds__hlds_out__hlds_out_goal__maybe_add_newline_indent_4_p_0(hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_AddCommaNewlineIndent_89_89, hlds__hlds_out__hlds_out_goal__Indent_16);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "] (\n");
              }
              hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_41;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word hlds__hlds_out__hlds_out_goal__LCVar_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 1)));
              MR_Word hlds__hlds_out__hlds_out_goal__LCSVar_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 2)));
              MR_Word hlds__hlds_out__hlds_out_goal__UseParentStack_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Reason_20, (MR_Integer) 3)));
              MR_String hlds__hlds_out__hlds_out_goal__UseParentStackStr_40;
              MR_Word hlds__hlds_out__hlds_out_goal__V_50_50;
              MR_Word hlds__hlds_out__hlds_out_goal__V_52_52;
              MR_String hlds__hlds_out__hlds_out_goal__V_265_265;

              switch (hlds__hlds_out__hlds_out_goal__UseParentStack_39) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  hlds__hlds_out__hlds_out_goal__UseParentStackStr_40 = (MR_String) "using_child_stack";
                  break;
                case (MR_Integer) 0:
                  hlds__hlds_out__hlds_out_goal__UseParentStackStr_40 = (MR_String) "using_parent_stack_frame";
                  break;
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "loop_control_spawn_off_");
              }
              {
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_4[0], hlds__hlds_out__hlds_out_goal__UseParentStackStr_40, &hlds__hlds_out__hlds_out_goal__V_265_265);
              }
              {
                mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_265_265);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                hlds__hlds_out__hlds_out_goal__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_52_52, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__LCSVar_38));
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                hlds__hlds_out__hlds_out_goal__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_50_50, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__LCVar_37));
                MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_50_50, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__V_52_52));
              }
              {
                parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__V_50_50);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ") (\n");
              }
              hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122 = hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_0_41;
            }
            break;
        }
        break;
    }
    hlds__hlds_out__hlds_out_goal__V_215_215 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
    {
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__STATE_VARIABLE_Info_122_122, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__V_215_215, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__Goal_21);
    }
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
    MR_Word hlds__hlds_out__hlds_out_goal__Cond_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 2)));
    MR_Word hlds__hlds_out__hlds_out_goal__Then_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 3)));
    MR_Word hlds__hlds_out__hlds_out_goal__Else_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 4)));
    MR_Integer hlds__hlds_out__hlds_out_goal__Indent1_24;
    MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_25;
    MR_Integer hlds__hlds_out__hlds_out_goal__ElseIndent_31;
    MR_Word hlds__hlds_out__hlds_out_goal__Vars_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 1)));
    MR_String hlds__hlds_out__hlds_out_goal__V_58_58;
    MR_Word hlds__hlds_out__hlds_out_goal__V_59_59;
    MR_Word hlds__hlds_out__hlds_out_goal__V_60_60;
    MR_Word hlds__hlds_out__hlds_out_goal__V_61_61;
    MR_Word hlds__hlds_out__hlds_out_goal__V_51_51;
    MR_Word hlds__hlds_out__hlds_out_goal__V_30_30;
    MR_Word hlds__hlds_out__hlds_out_goal__V_26_26;
    MR_Word hlds__hlds_out__hlds_out_goal__V_27_27;
    MR_Word hlds__hlds_out__hlds_out_goal__V_28_28;
    MR_Word hlds__hlds_out__hlds_out_goal__V_29_29;

    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "( if");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    hlds__hlds_out__hlds_out_goal__Indent1_24 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
    {
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent1_24, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__Cond_21);
    }
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "then\n");
    }
    {
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent1_24, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__Then_22);
    }
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "else\n");
    }
    hlds__hlds_out__hlds_out_goal__DumpOptions_25 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 0)));
    hlds__hlds_out__hlds_out_goal__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 1)));
    hlds__hlds_out__hlds_out_goal__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 2)));
    hlds__hlds_out__hlds_out_goal__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 3)));
    hlds__hlds_out__hlds_out_goal__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 4)));
    hlds__hlds_out__hlds_out_goal__succeeded = (strcmp(hlds__hlds_out__hlds_out_goal__DumpOptions_25, (MR_String) "") == 0);
    hlds__hlds_out__hlds_out_goal__succeeded = !(hlds__hlds_out__hlds_out_goal__succeeded);
    if (hlds__hlds_out__hlds_out_goal__succeeded)
      {
        hlds__hlds_out__hlds_out_goal__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Else_23, (MR_Integer) 0)));
        hlds__hlds_out__hlds_out_goal__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Else_23, (MR_Integer) 1)));
        hlds__hlds_out__hlds_out_goal__succeeded = ((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__V_51_51)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__V_51_51, (MR_Integer) 0)))) == (MR_Integer) 6)));
        if (hlds__hlds_out__hlds_out_goal__succeeded)
          {
            hlds__hlds_out__hlds_out_goal__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__V_51_51, (MR_Integer) 1)));
            hlds__hlds_out__hlds_out_goal__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__V_51_51, (MR_Integer) 2)));
            hlds__hlds_out__hlds_out_goal__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__V_51_51, (MR_Integer) 3)));
            hlds__hlds_out__hlds_out_goal__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__V_51_51, (MR_Integer) 4)));
          }
      }
    if (hlds__hlds_out__hlds_out_goal__succeeded)
      hlds__hlds_out__hlds_out_goal__ElseIndent_31 = hlds__hlds_out__hlds_out_goal__Indent_16;
    else
      hlds__hlds_out__hlds_out_goal__ElseIndent_31 = hlds__hlds_out__hlds_out_goal__Indent1_24;
    {
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__ElseIndent_31, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__Else_23);
    }
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_negation_10_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
    MR_Word hlds__hlds_out__hlds_out_goal__Goal_20 = (MR_Word) MR_body(((MR_Word) hlds__hlds_out__hlds_out_goal__GoalExpr_18), (MR_Integer) 0);
    MR_Integer hlds__hlds_out__hlds_out_goal__V_26_26;

    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "not (\n");
    }
    hlds__hlds_out__hlds_out_goal__V_26_26 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
    {
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__V_26_26, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__Goal_20);
    }
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_alternative_cons_id_3_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__ConsId_4)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
    MR_String hlds__hlds_out__hlds_out_goal__V_10_10;

    {
      mercury__io__write_string_3_p_0((MR_String) " or ");
    }
    {
      hlds__hlds_out__hlds_out_goal__V_10_10 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(hlds__hlds_out__hlds_out_goal__ConsId_4);
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_10_10);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_case_10_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

    {
      hlds__hlds_out__hlds_out_goal__write_alternative_cons_id_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_case_10_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
  MR_Word hlds__hlds_out__hlds_out_goal__Var_17,
  MR_Word hlds__hlds_out__hlds_out_goal__Case_18)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
    MR_Word hlds__hlds_out__hlds_out_goal__MainConsId_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Case_18, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_goal__OtherConsIds_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Case_18, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_goal__Goal_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Case_18, (MR_Integer) 2)));
    MR_String hlds__hlds_out__hlds_out_goal__V_31_31;
    MR_Box hlds__hlds_out__hlds_out_goal__conv0_STATE_VARIABLE_IO_34_34;

    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "% ");
    }
    {
      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Var_17);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " has functor ");
    }
    {
      hlds__hlds_out__hlds_out_goal__V_31_31 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(hlds__hlds_out__hlds_out_goal__MainConsId_20);
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_31_31);
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[7], hlds__hlds_out__hlds_out_goal__OtherConsIds_21, ((MR_Box) ((MR_Integer) 0)), &hlds__hlds_out__hlds_out_goal__conv0_STATE_VARIABLE_IO_34_34);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__Goal_22);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_cases_10_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
  MR_Word hlds__hlds_out__hlds_out_goal__Var_17,
  MR_Word hlds__hlds_out__hlds_out_goal__CasesList_18)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

        if ((hlds__hlds_out__hlds_out_goal__CasesList_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word hlds__hlds_out__hlds_out_goal__Case_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__CasesList_18, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_goal__Cases_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__CasesList_18, (MR_Integer) 1)));
            MR_Integer hlds__hlds_out__hlds_out_goal__V_27_27;

            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ";\n");
            }
            hlds__hlds_out__hlds_out_goal__V_27_27 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
            {
              hlds__hlds_out__hlds_out_goal__write_case_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__V_27_27, hlds__hlds_out__hlds_out_goal__Var_17, hlds__hlds_out__hlds_out_goal__Case_20);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__hlds_out__hlds_out_goal__CasesList__tmp_copy_18 = hlds__hlds_out__hlds_out_goal__Cases_21;

              hlds__hlds_out__hlds_out_goal__CasesList_18 = hlds__hlds_out__hlds_out_goal__CasesList__tmp_copy_18;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_switch_10_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
    MR_Word hlds__hlds_out__hlds_out_goal__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_goal__CanFail_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 2)));
    MR_Word hlds__hlds_out__hlds_out_goal__CasesList_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 3)));
    MR_Integer hlds__hlds_out__hlds_out_goal__Indent1_23;
    MR_String hlds__hlds_out__hlds_out_goal__V_31_31;

    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "( % ");
    }
    {
      hlds__hlds_out__hlds_out_goal__V_31_31 = parse_tree__prog_out__can_fail_to_string_1_f_0(hlds__hlds_out__hlds_out_goal__CanFail_21);
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_31_31);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " switch on \140");
    }
    {
      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Var_20);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\'\n");
    }
    hlds__hlds_out__hlds_out_goal__Indent1_23 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
    if ((hlds__hlds_out__hlds_out_goal__CasesList_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent1_23);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "fail\n");
        }
      }
    else
      {
        MR_Word hlds__hlds_out__hlds_out_goal__Case_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__CasesList_22, (MR_Integer) 0)));
        MR_Word hlds__hlds_out__hlds_out_goal__Cases_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__CasesList_22, (MR_Integer) 1)));

        {
          hlds__hlds_out__hlds_out_goal__write_case_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent1_23, hlds__hlds_out__hlds_out_goal__Var_20, hlds__hlds_out__hlds_out_goal__Case_24);
        }
        {
          hlds__hlds_out__hlds_out_goal__write_cases_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Var_20, hlds__hlds_out__hlds_out_goal__Cases_25);
        }
      }
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_disj_10_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
    MR_Word hlds__hlds_out__hlds_out_goal__Disjuncts_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 1)));

    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
    if ((hlds__hlds_out__hlds_out_goal__Disjuncts_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "fail");
        }
        {
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
        }
      }
    else
      {
        MR_Word hlds__hlds_out__hlds_out_goal__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Disjuncts_20, (MR_Integer) 0)));
        MR_Word hlds__hlds_out__hlds_out_goal__Goals_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Disjuncts_20, (MR_Integer) 1)));
        MR_Integer hlds__hlds_out__hlds_out_goal__V_31_31;

        {
          mercury__io__write_string_3_p_0((MR_String) "( % disjunction\n");
        }
        hlds__hlds_out__hlds_out_goal__V_31_31 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
        {
          hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__V_31_31, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__Goal_21);
        }
        {
          hlds__hlds_out__hlds_out_goal__write_goal_list_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, (MR_String) ";\n", hlds__hlds_out__hlds_out_goal__Goals_22);
        }
        {
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        {
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
        }
      }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_conj_12_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_13,
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_14,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_15,
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_16,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_17,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_18,
  MR_String hlds__hlds_out__hlds_out_goal__Follow_19,
  MR_String hlds__hlds_out__hlds_out_goal__Separator_20,
  MR_Word hlds__hlds_out__hlds_out_goal__Goal1_21,
  MR_Word hlds__hlds_out__hlds_out_goal__Goals1_22)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

        if ((hlds__hlds_out__hlds_out_goal__Goals1_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_13, hlds__hlds_out__hlds_out_goal__ModuleInfo_14, hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__TypeQual_16, hlds__hlds_out__hlds_out_goal__VarNamePrint_17, hlds__hlds_out__hlds_out_goal__Indent_18, hlds__hlds_out__hlds_out_goal__Follow_19, hlds__hlds_out__hlds_out_goal__Goal1_21);
          }
        else
          {
            MR_Word hlds__hlds_out__hlds_out_goal__Goal2_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Goals1_22, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_goal__Goals2_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Goals1_22, (MR_Integer) 1)));
            MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_26 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_13, (MR_Integer) 0)));
            MR_String hlds__hlds_out__hlds_out_goal__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_13, (MR_Integer) 1)));
            MR_Word hlds__hlds_out__hlds_out_goal__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_13, (MR_Integer) 2)));
            MR_Word hlds__hlds_out__hlds_out_goal__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_13, (MR_Integer) 3)));
            MR_Word hlds__hlds_out__hlds_out_goal__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_13, (MR_Integer) 4)));

            hlds__hlds_out__hlds_out_goal__succeeded = (strcmp(hlds__hlds_out__hlds_out_goal__DumpOptions_26, (MR_String) "") == 0);
            if (hlds__hlds_out__hlds_out_goal__succeeded)
              {
                hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_13, hlds__hlds_out__hlds_out_goal__ModuleInfo_14, hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__TypeQual_16, hlds__hlds_out__hlds_out_goal__VarNamePrint_17, hlds__hlds_out__hlds_out_goal__Indent_18, hlds__hlds_out__hlds_out_goal__Separator_20, hlds__hlds_out__hlds_out_goal__Goal1_21);
              }
            else
              {
                {
                  hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_13, hlds__hlds_out__hlds_out_goal__ModuleInfo_14, hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__TypeQual_16, hlds__hlds_out__hlds_out_goal__VarNamePrint_17, hlds__hlds_out__hlds_out_goal__Indent_18, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__Goal1_21);
                }
                {
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_18);
                }
                {
                  mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Separator_20);
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__hlds_out__hlds_out_goal__Goal1__tmp_copy_21 = hlds__hlds_out__hlds_out_goal__Goal2_24;
              MR_Word hlds__hlds_out__hlds_out_goal__Goals1__tmp_copy_22 = hlds__hlds_out__hlds_out_goal__Goals2_25;

              hlds__hlds_out__hlds_out_goal__Goals1_22 = hlds__hlds_out__hlds_out_goal__Goals1__tmp_copy_22;
              hlds__hlds_out__hlds_out_goal__Goal1_21 = hlds__hlds_out__hlds_out_goal__Goal1__tmp_copy_21;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_conj_10_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
    MR_Word hlds__hlds_out__hlds_out_goal__ConjType_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_goal__List_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 2)));

    if ((hlds__hlds_out__hlds_out_goal__List_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
        }
        switch (hlds__hlds_out__hlds_out_goal__ConjType_20) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "/* parallel */ true");
              }
            }
            break;
          case (MR_Integer) 0:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "true");
              }
            }
            break;
        }
        {
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
        }
      }
    else
      {
        MR_Word hlds__hlds_out__hlds_out_goal__Goal_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__List_21, (MR_Integer) 0)));
        MR_Word hlds__hlds_out__hlds_out_goal__Goals_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__List_21, (MR_Integer) 1)));

        switch (hlds__hlds_out__hlds_out_goal__ConjType_20) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Integer hlds__hlds_out__hlds_out_goal__V_36_36;

              {
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "( % parallel conjunction\n");
              }
              hlds__hlds_out__hlds_out_goal__V_36_36 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
              {
                hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__V_36_36, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__Goal_22);
              }
              {
                hlds__hlds_out__hlds_out_goal__write_goal_list_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, (MR_String) "&\n", hlds__hlds_out__hlds_out_goal__Goals_23);
              }
              {
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              {
                mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
              }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_24 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 0)));
              MR_String hlds__hlds_out__hlds_out_goal__V_60_60 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 1)));
              MR_Word hlds__hlds_out__hlds_out_goal__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 2)));
              MR_Word hlds__hlds_out__hlds_out_goal__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 3)));
              MR_Word hlds__hlds_out__hlds_out_goal__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 4)));

              hlds__hlds_out__hlds_out_goal__succeeded = (strcmp(hlds__hlds_out__hlds_out_goal__DumpOptions_24, (MR_String) "") == 0);
              if (hlds__hlds_out__hlds_out_goal__succeeded)
                {
                  {
                    hlds__hlds_out__hlds_out_goal__write_conj_12_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, (MR_String) ",\n", hlds__hlds_out__hlds_out_goal__Goal_22, hlds__hlds_out__hlds_out_goal__Goals_23);
                  }
                }
              else
                {
                  MR_Integer hlds__hlds_out__hlds_out_goal__V_51_51;

                  {
                    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "( % conjunction\n");
                  }
                  hlds__hlds_out__hlds_out_goal__V_51_51 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
                  {
                    hlds__hlds_out__hlds_out_goal__write_conj_12_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__V_51_51, (MR_String) "\n", (MR_String) ",\n", hlds__hlds_out__hlds_out_goal__Goal_22, hlds__hlds_out__hlds_out_goal__Goals_23);
                  }
                  {
                    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  {
                    mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
                  }
                }
            }
            break;
        }
      }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_foreign_args_6_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_1,
  MR_Word hlds__hlds_out__hlds_out_goal__TVarSet_2,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_3,
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

        if ((hlds__hlds_out__hlds_out_goal__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word hlds__hlds_out__hlds_out_goal__Arg_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_goal__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__HeadVar__4_4, (MR_Integer) 1)));
            MR_Word hlds__hlds_out__hlds_out_goal__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Arg_16, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_goal__MaybeNameMode_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Arg_16, (MR_Integer) 1)));
            MR_Word hlds__hlds_out__hlds_out_goal__Type_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Arg_16, (MR_Integer) 2)));
            MR_Word hlds__hlds_out__hlds_out_goal__BoxPolicy_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Arg_16, (MR_Integer) 3)));

            {
              parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_1, hlds__hlds_out__hlds_out_goal__VarNamePrint_3, hlds__hlds_out__hlds_out_goal__Var_19);
            }
            if ((hlds__hlds_out__hlds_out_goal__MaybeNameMode_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
              }
            else
              {
                MR_String hlds__hlds_out__hlds_out_goal__Name_23;
                MR_Word hlds__hlds_out__hlds_out_goal__Mode_24;
                MR_Word hlds__hlds_out__hlds_out_goal__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeNameMode_20, (MR_Integer) 0)));
                MR_String hlds__hlds_out__hlds_out_goal__V_31_31;
                MR_String hlds__hlds_out__hlds_out_goal__V_34_34;
                MR_Word hlds__hlds_out__hlds_out_goal__V_53_53;

                hlds__hlds_out__hlds_out_goal__Name_23 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_30_30, (MR_Integer) 0)));
                hlds__hlds_out__hlds_out_goal__Mode_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_30_30, (MR_Integer) 1)));
                {
                  hlds__hlds_out__hlds_out_goal__V_34_34 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_goal__Name_23, (MR_String) "(");
                }
                {
                  hlds__hlds_out__hlds_out_goal__V_31_31 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__hlds_out__hlds_out_goal__V_34_34);
                }
                {
                  mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_31_31);
                }
                {
                  hlds__hlds_out__hlds_out_goal__V_53_53 = parse_tree__prog_mode__in_mode_0_f_0();
                }
                {
                  hlds__hlds_out__hlds_out_goal__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(hlds__hlds_out__hlds_out_goal__Mode_24, hlds__hlds_out__hlds_out_goal__V_53_53);
                }
                if (hlds__hlds_out__hlds_out_goal__succeeded)
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "in");
                    }
                  }
                else
                  {
                    MR_Word hlds__hlds_out__hlds_out_goal__V_54_54;

                    {
                      hlds__hlds_out__hlds_out_goal__V_54_54 = parse_tree__prog_mode__out_mode_0_f_0();
                    }
                    {
                      hlds__hlds_out__hlds_out_goal__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0(hlds__hlds_out__hlds_out_goal__Mode_24, hlds__hlds_out__hlds_out_goal__V_54_54);
                    }
                    if (hlds__hlds_out__hlds_out_goal__succeeded)
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "out");
                        }
                      }
                    else
                      {
                        {
                          mercury__io__write_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, ((MR_Box) (hlds__hlds_out__hlds_out_goal__Mode_24)));
                        }
                      }
                  }
                {
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
              }
            switch (hlds__hlds_out__hlds_out_goal__BoxPolicy_22) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "\044alwaysboxed");
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                }
                break;
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\100");
            }
            {
              parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(hlds__hlds_out__hlds_out_goal__TVarSet_2, hlds__hlds_out__hlds_out_goal__VarNamePrint_3, hlds__hlds_out__hlds_out_goal__Type_21);
            }
            if ((hlds__hlds_out__hlds_out_goal__Args_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
              }
            else
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__4__tmp_copy_4 = hlds__hlds_out__hlds_out_goal__Args_17;

                  hlds__hlds_out__hlds_out_goal__HeadVar__4_4 = hlds__hlds_out__hlds_out_goal__HeadVar__4__tmp_copy_4;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_ho_arg_reg_3_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__ArgReg_4)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

    switch (hlds__hlds_out__hlds_out_goal__ArgReg_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "reg_f");
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "reg_r");
          }
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

    {
      hlds__hlds_out__hlds_out_goal__write_ho_arg_reg_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_4_p_0(
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_5,
  MR_Word hlds__hlds_out__hlds_out_goal__MaybeArgRegs_6)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

    if ((hlds__hlds_out__hlds_out_goal__MaybeArgRegs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word hlds__hlds_out__hlds_out_goal__ArgRegs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeArgRegs_6, (MR_Integer) 0)));

        {
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_5);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "% arg regs: ");
        }
        {
          mercury__io__write_list_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0, hlds__hlds_out__hlds_out_goal__ArgRegs_8, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[6]);
        }
        {
          mercury__io__nl_2_p_0();
        }
      }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_sym_name_and_args_6_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_7,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_8,
  MR_Word hlds__hlds_out__hlds_out_goal__PredName_9,
  MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_10)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

    if (((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__PredName_9)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word hlds__hlds_out__hlds_out_goal__ModuleName_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PredName_9, (MR_Integer) 0)));
        MR_String hlds__hlds_out__hlds_out_goal__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PredName_9, (MR_Integer) 1)));
        MR_Word hlds__hlds_out__hlds_out_goal__V_19_19;

        {
          hlds__hlds_out__hlds_out_goal__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_19_19, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Name_13));
        }
        {
          hlds__hlds_out__hlds_out_util__write_qualified_functor_7_p_0(hlds__hlds_out__hlds_out_goal__VarSet_7, hlds__hlds_out__hlds_out_goal__VarNamePrint_8, hlds__hlds_out__hlds_out_goal__ModuleName_12, hlds__hlds_out__hlds_out_goal__V_19_19, hlds__hlds_out__hlds_out_goal__ArgVars_10);
        }
      }
    else
      {
        MR_Word hlds__hlds_out__hlds_out_goal__V_17_17;
        MR_String hlds__hlds_out__hlds_out_goal__Name_21 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__PredName_9, (MR_Integer) 0)));

        {
          hlds__hlds_out__hlds_out_goal__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_17_17, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Name_21));
        }
        {
          hlds__hlds_out__hlds_out_util__write_functor_maybe_needs_quotes_7_p_0(hlds__hlds_out__hlds_out_goal__VarSet_7, hlds__hlds_out__hlds_out_goal__VarNamePrint_8, (MR_Integer) 0, hlds__hlds_out__hlds_out_goal__V_17_17, hlds__hlds_out__hlds_out_goal__ArgVars_10);
        }
      }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
    MR_Word hlds__hlds_out__hlds_out_goal__PredId_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 0)));
    MR_Integer hlds__hlds_out__hlds_out_goal__ProcId_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 2)));
    MR_Word hlds__hlds_out__hlds_out_goal__Builtin_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 3)));
    MR_Word hlds__hlds_out__hlds_out_goal__MaybeUnifyContext_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 4)));
    MR_Word hlds__hlds_out__hlds_out_goal__PredName_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 5)));
    MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_26 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_goal__NewArgVars_30;
    MR_String hlds__hlds_out__hlds_out_goal__V_75_75 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_goal__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 2)));
    MR_Word hlds__hlds_out__hlds_out_goal__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 3)));
    MR_Word hlds__hlds_out__hlds_out_goal__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 4)));
    MR_Word hlds__hlds_out__hlds_out_goal__V_83_83;

    {
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_26, (MR_Char) 98);
    }
    if (hlds__hlds_out__hlds_out_goal__succeeded)
      switch (hlds__hlds_out__hlds_out_goal__Builtin_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% inline builtin\n");
            }
          }
          break;
        case (MR_Integer) 2:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% out of line builtin\n");
            }
          }
          break;
      }
    else
      {
      }
    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
    {
      hlds__hlds_out__hlds_out_goal__V_83_83 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    }
    {
      hlds__hlds_out__hlds_out_goal__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__hlds_out__hlds_out_goal__PredId_20, hlds__hlds_out__hlds_out_goal__V_83_83);
    }
    if (hlds__hlds_out__hlds_out_goal__succeeded)
      hlds__hlds_out__hlds_out_goal__NewArgVars_30 = hlds__hlds_out__hlds_out_goal__ArgVars_22;
    else
      {
        MR_Word hlds__hlds_out__hlds_out_goal__PredInfo_28;
        MR_Word hlds__hlds_out__hlds_out_goal__Purity_29;
        MR_Word hlds__hlds_out__hlds_out_goal__PredOrFunc_85;

        {
          hlds__hlds_module__module_info_pred_info_3_p_0(hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__PredId_20, &hlds__hlds_out__hlds_out_goal__PredInfo_28);
        }
        {
          hlds__hlds_pred__pred_info_get_purity_2_p_0(hlds__hlds_out__hlds_out_goal__PredInfo_28, &hlds__hlds_out__hlds_out_goal__Purity_29);
        }
        {
          hlds__hlds_out__hlds_out_goal__PredOrFunc_85 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__hlds_out__hlds_out_goal__PredInfo_28);
        }
        {
          parse_tree__prog_out__write_purity_prefix_3_p_0(hlds__hlds_out__hlds_out_goal__Purity_29);
        }
        switch (hlds__hlds_out__hlds_out_goal__PredOrFunc_85) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word hlds__hlds_out__hlds_out_goal__LHSVar_31;
              MR_Box hlds__hlds_out__hlds_out_goal__conv0_LHSVar_31;

              {
                parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], hlds__hlds_out__hlds_out_goal__ArgVars_22, &hlds__hlds_out__hlds_out_goal__NewArgVars_30, &hlds__hlds_out__hlds_out_goal__conv0_LHSVar_31);
              }
              hlds__hlds_out__hlds_out_goal__LHSVar_31 = ((MR_Word) hlds__hlds_out__hlds_out_goal__conv0_LHSVar_31);
              {
                parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__LHSVar_31);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) " = ");
              }
            }
            break;
          case (MR_Integer) 0:
            hlds__hlds_out__hlds_out_goal__NewArgVars_30 = hlds__hlds_out__hlds_out_goal__ArgVars_22;
            break;
        }
      }
    {
      hlds__hlds_out__hlds_out_goal__write_sym_name_and_args_6_p_0(hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__PredName_25, hlds__hlds_out__hlds_out_goal__NewArgVars_30);
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
    }
    {
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_26, (MR_Char) 108);
    }
    if (hlds__hlds_out__hlds_out_goal__succeeded)
      {
        MR_Integer hlds__hlds_out__hlds_out_goal__PredNum_32;
        MR_Integer hlds__hlds_out__hlds_out_goal__ProcNum_33;

        {
          hlds__hlds_pred__pred_id_to_int_2_p_0(hlds__hlds_out__hlds_out_goal__PredId_20, &hlds__hlds_out__hlds_out_goal__PredNum_32);
        }
        {
          hlds__hlds_pred__proc_id_to_int_2_p_0(hlds__hlds_out__hlds_out_goal__ProcId_21, &hlds__hlds_out__hlds_out_goal__ProcNum_33);
        }
        {
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "% pred id: ");
        }
        {
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_goal__PredNum_32);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ", proc id: ");
        }
        {
          mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_goal__ProcNum_33);
        }
        {
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_17);
        }
        if ((hlds__hlds_out__hlds_out_goal__MaybeUnifyContext_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word hlds__hlds_out__hlds_out_goal__CallUnifyContext_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeUnifyContext_24, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_goal__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CallUnifyContext_34, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_goal__VarType_39;
            MR_Word hlds__hlds_out__hlds_out_goal__RHS_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CallUnifyContext_34, (MR_Integer) 1)));
            MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_42;
            MR_Word hlds__hlds_out__hlds_out_goal___UnifyContext_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CallUnifyContext_34, (MR_Integer) 2)));

            if ((hlds__hlds_out__hlds_out_goal__TypeQual_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              hlds__hlds_out__hlds_out_goal__VarType_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                MR_Word hlds__hlds_out__hlds_out_goal__VarTypes_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TypeQual_14, (MR_Integer) 1)));
                MR_Word hlds__hlds_out__hlds_out_goal__UniType_38;
                MR_Word hlds__hlds_out__hlds_out_goal__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TypeQual_14, (MR_Integer) 0)));

                {
                  hlds__vartypes__lookup_var_type_3_p_0(hlds__hlds_out__hlds_out_goal__VarTypes_36, hlds__hlds_out__hlds_out_goal__Var_37, &hlds__hlds_out__hlds_out_goal__UniType_38);
                }
                {
                  hlds__hlds_out__hlds_out_goal__VarType_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__VarType_39, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__UniType_38));
                }
              }
            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% unify context: ");
            }
            {
              parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Var_37);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " = ");
            }
            {
              mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &hlds__hlds_out__hlds_out_goal__InstVarSet_42);
            }
            {
              hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_12_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__InstVarSet_42, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__VarType_39, hlds__hlds_out__hlds_out_goal__RHS_40);
            }
          }
      }
    else
      {
      }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_12,
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_13,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_14,
  MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_15,
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_16,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_17,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_18,
  MR_Word hlds__hlds_out__hlds_out_goal__MaybeType_19,
  MR_Word hlds__hlds_out__hlds_out_goal__RHS_20)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__RHS_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__hlds_out__hlds_out_goal__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__RHS_20, (MR_Integer) 0)));

          {
            parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_17, hlds__hlds_out__hlds_out_goal__Var_22);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__hlds_out__hlds_out_goal__ConsId0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__RHS_20, (MR_Integer) 0)));
          MR_Word hlds__hlds_out__hlds_out_goal__IsExistConstruct_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__RHS_20, (MR_Integer) 1)));
          MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__RHS_20, (MR_Integer) 2)));
          MR_Word hlds__hlds_out__hlds_out_goal__ConsId_30;
          MR_Word hlds__hlds_out__hlds_out_goal__SymName0_26;
          MR_Integer hlds__hlds_out__hlds_out_goal__Arity_27;
          MR_Word hlds__hlds_out__hlds_out_goal__TypeCtor_28;
          MR_Word hlds__hlds_out__hlds_out_goal__Type_31;
          MR_Word hlds__hlds_out__hlds_out_goal__TVarSet_32;
          MR_Word hlds__hlds_out__hlds_out_goal__V_33_33;

          hlds__hlds_out__hlds_out_goal__succeeded = (hlds__hlds_out__hlds_out_goal__IsExistConstruct_24 == (MR_Integer) 1);
          if (hlds__hlds_out__hlds_out_goal__succeeded)
            {
              hlds__hlds_out__hlds_out_goal__succeeded = ((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__ConsId0_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId0_23, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (hlds__hlds_out__hlds_out_goal__succeeded)
                {
                  hlds__hlds_out__hlds_out_goal__SymName0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId0_23, (MR_Integer) 1)));
                  hlds__hlds_out__hlds_out_goal__Arity_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId0_23, (MR_Integer) 2)));
                  hlds__hlds_out__hlds_out_goal__TypeCtor_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId0_23, (MR_Integer) 3)));
                }
            }
          if (hlds__hlds_out__hlds_out_goal__succeeded)
            {
              MR_Word hlds__hlds_out__hlds_out_goal__SymName_29;

              {
                parse_tree__prog_type__add_new_prefix_2_p_0(hlds__hlds_out__hlds_out_goal__SymName0_26, &hlds__hlds_out__hlds_out_goal__SymName_29);
              }
              {
                hlds__hlds_out__hlds_out_goal__ConsId_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_30, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__SymName_29));
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_30, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Arity_27));
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_30, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__TypeCtor_28));
              }
            }
          else
            hlds__hlds_out__hlds_out_goal__ConsId_30 = hlds__hlds_out__hlds_out_goal__ConsId0_23;
          {
            hlds__hlds_out__hlds_out_util__write_functor_cons_id_7_p_0(hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_17, hlds__hlds_out__hlds_out_goal__ConsId_30, hlds__hlds_out__hlds_out_goal__ArgVars_25);
          }
          hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__MaybeType_19)) == (MR_mktag((MR_Integer) 1)));
          if (hlds__hlds_out__hlds_out_goal__succeeded)
            {
              hlds__hlds_out__hlds_out_goal__Type_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeType_19, (MR_Integer) 0)));
              hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__TypeQual_16)) == (MR_mktag((MR_Integer) 1)));
              if (hlds__hlds_out__hlds_out_goal__succeeded)
                {
                  hlds__hlds_out__hlds_out_goal__TVarSet_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TypeQual_16, (MR_Integer) 0)));
                  hlds__hlds_out__hlds_out_goal__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TypeQual_16, (MR_Integer) 1)));
                }
            }
          if (hlds__hlds_out__hlds_out_goal__succeeded)
            {
              {
                mercury__io__write_string_3_p_0((MR_String) " : ");
              }
              {
                parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(hlds__hlds_out__hlds_out_goal__TVarSet_32, hlds__hlds_out__hlds_out_goal__VarNamePrint_17, hlds__hlds_out__hlds_out_goal__Type_31);
              }
            }
          else
            {
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__hlds_out__hlds_out_goal__Purity_34 = ((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__RHS_20, (MR_Integer) 0)))) & (MR_Integer) 3);
          MR_Word hlds__hlds_out__hlds_out_goal__Groundness_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__RHS_20, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Word hlds__hlds_out__hlds_out_goal__PredOrFunc_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__RHS_20, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
          MR_Word hlds__hlds_out__hlds_out_goal__NonLocals_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__RHS_20, (MR_Integer) 2)));
          MR_Word hlds__hlds_out__hlds_out_goal__Vars_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__RHS_20, (MR_Integer) 3)));
          MR_Word hlds__hlds_out__hlds_out_goal__Modes_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__RHS_20, (MR_Integer) 4)));
          MR_Word hlds__hlds_out__hlds_out_goal__Det_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__RHS_20, (MR_Integer) 5)));
          MR_Word hlds__hlds_out__hlds_out_goal__Goal_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__RHS_20, (MR_Integer) 6)));
          MR_Integer hlds__hlds_out__hlds_out_goal__Indent1_43 = (hlds__hlds_out__hlds_out_goal__Indent_18 + (MR_Integer) 1);
          MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_53;
          MR_Word hlds__hlds_out__hlds_out_goal__Type_134;
          MR_Word hlds__hlds_out__hlds_out_goal__TVarSet_135;
          MR_Word hlds__hlds_out__hlds_out_goal__V_52_52;
          MR_String hlds__hlds_out__hlds_out_goal__V_139_139;
          MR_Word hlds__hlds_out__hlds_out_goal__V_140_140;
          MR_Word hlds__hlds_out__hlds_out_goal__V_141_141;
          MR_Word hlds__hlds_out__hlds_out_goal__V_142_142;

          {
            parse_tree__prog_out__write_purity_prefix_3_p_0(hlds__hlds_out__hlds_out_goal__Purity_34);
          }
          switch (hlds__hlds_out__hlds_out_goal__Groundness_35) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              switch (hlds__hlds_out__hlds_out_goal__PredOrFunc_36) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word hlds__hlds_out__hlds_out_goal__ArgModes_47;
                    MR_Word hlds__hlds_out__hlds_out_goal__RetMode_48;
                    MR_Word hlds__hlds_out__hlds_out_goal__RetVar_49;
                    MR_Word hlds__hlds_out__hlds_out_goal__V_79_79;
                    MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_131;
                    MR_Box hlds__hlds_out__hlds_out_goal__conv0_RetMode_48;
                    MR_Box hlds__hlds_out__hlds_out_goal__conv1_RetVar_49;

                    {
                      parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__hlds_out__hlds_out_goal__Modes_40, &hlds__hlds_out__hlds_out_goal__ArgModes_47, &hlds__hlds_out__hlds_out_goal__conv0_RetMode_48);
                    }
                    hlds__hlds_out__hlds_out_goal__RetMode_48 = ((MR_Word) hlds__hlds_out__hlds_out_goal__conv0_RetMode_48);
                    {
                      parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], hlds__hlds_out__hlds_out_goal__Vars_39, &hlds__hlds_out__hlds_out_goal__ArgVars_131, &hlds__hlds_out__hlds_out_goal__conv1_RetVar_49);
                    }
                    hlds__hlds_out__hlds_out_goal__RetVar_49 = ((MR_Word) hlds__hlds_out__hlds_out_goal__conv1_RetVar_49);
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                    }
                    if ((hlds__hlds_out__hlds_out_goal__ArgVars_131 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        {
                          mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[5]));
                        }
                      }
                    else
                      {
                        {
                          mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[7]));
                        }
                        {
                          hlds__hlds_out__hlds_out_util__write_var_modes_7_p_0(hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__InstVarSet_15, hlds__hlds_out__hlds_out_goal__VarNamePrint_17, hlds__hlds_out__hlds_out_goal__ArgVars_131, hlds__hlds_out__hlds_out_goal__ArgModes_47);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                    {
                      mercury__io__write_string_3_p_0((MR_String) " = (");
                    }
                    {
                      hlds__hlds_out__hlds_out_goal__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_79_79, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__RetVar_49));
                      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_79_79, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__RetMode_48));
                    }
                    {
                      hlds__hlds_out__hlds_out_util__write_var_mode_6_p_0(hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__InstVarSet_15, hlds__hlds_out__hlds_out_goal__VarNamePrint_17, hlds__hlds_out__hlds_out_goal__V_79_79);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) ") is ");
                    }
                    {
                      parse_tree__mercury_to_mercury__mercury_output_det_3_p_0(hlds__hlds_out__hlds_out_goal__Det_41);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) " :-\n");
                    }
                    {
                      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_12, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__TypeQual_16, hlds__hlds_out__hlds_out_goal__VarNamePrint_17, hlds__hlds_out__hlds_out_goal__Indent1_43, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__Goal_42);
                    }
                    {
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_18);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) ")\n");
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                    }
                    if ((hlds__hlds_out__hlds_out_goal__Vars_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        {
                          mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[9]));
                        }
                      }
                    else
                      {
                        {
                          mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[10]));
                        }
                        {
                          hlds__hlds_out__hlds_out_util__write_var_modes_7_p_0(hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__InstVarSet_15, hlds__hlds_out__hlds_out_goal__VarNamePrint_17, hlds__hlds_out__hlds_out_goal__Vars_39, hlds__hlds_out__hlds_out_goal__Modes_40);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                    {
                      mercury__io__write_string_3_p_0((MR_String) " is ");
                    }
                    {
                      parse_tree__mercury_to_mercury__mercury_output_det_3_p_0(hlds__hlds_out__hlds_out_goal__Det_41);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) " :-\n");
                    }
                    {
                      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_12, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__TypeQual_16, hlds__hlds_out__hlds_out_goal__VarNamePrint_17, hlds__hlds_out__hlds_out_goal__Indent1_43, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__Goal_42);
                    }
                    {
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_18);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) ")\n");
                    }
                  }
                  break;
              }
              break;
            case (MR_Integer) 0:
              switch (hlds__hlds_out__hlds_out_goal__PredOrFunc_36) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word hlds__hlds_out__hlds_out_goal__ArgModes_179;
                    MR_Word hlds__hlds_out__hlds_out_goal__RetMode_180;
                    MR_Word hlds__hlds_out__hlds_out_goal__RetVar_181;
                    MR_Word hlds__hlds_out__hlds_out_goal__V_202_202;
                    MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_213;
                    MR_Box hlds__hlds_out__hlds_out_goal__conv2_RetMode_180;
                    MR_Box hlds__hlds_out__hlds_out_goal__conv3_RetVar_181;

                    {
                      parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__hlds_out__hlds_out_goal__Modes_40, &hlds__hlds_out__hlds_out_goal__ArgModes_179, &hlds__hlds_out__hlds_out_goal__conv2_RetMode_180);
                    }
                    hlds__hlds_out__hlds_out_goal__RetMode_180 = ((MR_Word) hlds__hlds_out__hlds_out_goal__conv2_RetMode_180);
                    {
                      parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], hlds__hlds_out__hlds_out_goal__Vars_39, &hlds__hlds_out__hlds_out_goal__ArgVars_213, &hlds__hlds_out__hlds_out_goal__conv3_RetVar_181);
                    }
                    hlds__hlds_out__hlds_out_goal__RetVar_181 = ((MR_Word) hlds__hlds_out__hlds_out_goal__conv3_RetVar_181);
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                    }
                    if ((hlds__hlds_out__hlds_out_goal__ArgVars_213 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        {
                          mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[12]));
                        }
                      }
                    else
                      {
                        {
                          mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[13]));
                        }
                        {
                          hlds__hlds_out__hlds_out_util__write_var_modes_7_p_0(hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__InstVarSet_15, hlds__hlds_out__hlds_out_goal__VarNamePrint_17, hlds__hlds_out__hlds_out_goal__ArgVars_213, hlds__hlds_out__hlds_out_goal__ArgModes_179);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                    {
                      mercury__io__write_string_3_p_0((MR_String) " = (");
                    }
                    {
                      hlds__hlds_out__hlds_out_goal__V_202_202 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_202_202, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__RetVar_181));
                      MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_202_202, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__RetMode_180));
                    }
                    {
                      hlds__hlds_out__hlds_out_util__write_var_mode_6_p_0(hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__InstVarSet_15, hlds__hlds_out__hlds_out_goal__VarNamePrint_17, hlds__hlds_out__hlds_out_goal__V_202_202);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) ") is ");
                    }
                    {
                      parse_tree__mercury_to_mercury__mercury_output_det_3_p_0(hlds__hlds_out__hlds_out_goal__Det_41);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) " :-\n");
                    }
                    {
                      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_12, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__TypeQual_16, hlds__hlds_out__hlds_out_goal__VarNamePrint_17, hlds__hlds_out__hlds_out_goal__Indent1_43, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__Goal_42);
                    }
                    {
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_18);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) ")\n");
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                    }
                    if ((hlds__hlds_out__hlds_out_goal__Vars_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        {
                          mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[15]));
                        }
                      }
                    else
                      {
                        {
                          mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_out__hlds_out_goal_scalar_common_1[16]));
                        }
                        {
                          hlds__hlds_out__hlds_out_util__write_var_modes_7_p_0(hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__InstVarSet_15, hlds__hlds_out__hlds_out_goal__VarNamePrint_17, hlds__hlds_out__hlds_out_goal__Vars_39, hlds__hlds_out__hlds_out_goal__Modes_40);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                    {
                      mercury__io__write_string_3_p_0((MR_String) " is ");
                    }
                    {
                      parse_tree__mercury_to_mercury__mercury_output_det_3_p_0(hlds__hlds_out__hlds_out_goal__Det_41);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) " :-\n");
                    }
                    {
                      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_12, hlds__hlds_out__hlds_out_goal__ModuleInfo_13, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__TypeQual_16, hlds__hlds_out__hlds_out_goal__VarNamePrint_17, hlds__hlds_out__hlds_out_goal__Indent1_43, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__Goal_42);
                    }
                    {
                      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_18);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) ")\n");
                    }
                  }
                  break;
              }
              break;
          }
          hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__MaybeType_19)) == (MR_mktag((MR_Integer) 1)));
          if (hlds__hlds_out__hlds_out_goal__succeeded)
            {
              hlds__hlds_out__hlds_out_goal__Type_134 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeType_19, (MR_Integer) 0)));
              hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__TypeQual_16)) == (MR_mktag((MR_Integer) 1)));
              if (hlds__hlds_out__hlds_out_goal__succeeded)
                {
                  hlds__hlds_out__hlds_out_goal__TVarSet_135 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TypeQual_16, (MR_Integer) 0)));
                  hlds__hlds_out__hlds_out_goal__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TypeQual_16, (MR_Integer) 1)));
                }
            }
          if (hlds__hlds_out__hlds_out_goal__succeeded)
            {
              {
                mercury__io__write_string_3_p_0((MR_String) " : ");
              }
              {
                parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(hlds__hlds_out__hlds_out_goal__TVarSet_135, hlds__hlds_out__hlds_out_goal__VarNamePrint_17, hlds__hlds_out__hlds_out_goal__Type_134);
              }
            }
          else
            {
            }
          hlds__hlds_out__hlds_out_goal__DumpOptions_53 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 0)));
          hlds__hlds_out__hlds_out_goal__V_139_139 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 1)));
          hlds__hlds_out__hlds_out_goal__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 2)));
          hlds__hlds_out__hlds_out_goal__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 3)));
          hlds__hlds_out__hlds_out_goal__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_12, (MR_Integer) 4)));
          {
            hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_53, (MR_Char) 110);
          }
          if (hlds__hlds_out__hlds_out_goal__succeeded)
            if ((hlds__hlds_out__hlds_out_goal__NonLocals_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
              }
            else
              {
                {
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent1_43);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "% lambda nonlocals: ");
                }
                {
                  parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_17, hlds__hlds_out__hlds_out_goal__NonLocals_38);
                }
              }
          else
            {
            }
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_12_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_13,
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_14,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_15,
  MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_16,
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_17,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_18,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_19,
  MR_String hlds__hlds_out__hlds_out_goal__Follow_20,
  MR_Word hlds__hlds_out__hlds_out_goal__MaybeType_21,
  MR_Word hlds__hlds_out__hlds_out_goal__RHS_22)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

    {
      hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_p_0(hlds__hlds_out__hlds_out_goal__Info_13, hlds__hlds_out__hlds_out_goal__ModuleInfo_14, hlds__hlds_out__hlds_out_goal__VarSet_15, hlds__hlds_out__hlds_out_goal__InstVarSet_16, hlds__hlds_out__hlds_out_goal__TypeQual_17, hlds__hlds_out__hlds_out_goal__VarNamePrint_18, hlds__hlds_out__hlds_out_goal__Indent_19, hlds__hlds_out__hlds_out_goal__MaybeType_21, hlds__hlds_out__hlds_out_goal__RHS_22);
    }
    {
      mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Follow_20);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_unify_10_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
    MR_Word hlds__hlds_out__hlds_out_goal__LHS_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_goal__RHS_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_goal__Unification_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 3)));
    MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_25 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_goal__VarType_29;
    MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_30;
    MR_Word hlds__hlds_out__hlds_out_goal__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 2)));
    MR_Word hlds__hlds_out__hlds_out_goal__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 4)));
    MR_String hlds__hlds_out__hlds_out_goal__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_goal__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 2)));
    MR_Word hlds__hlds_out__hlds_out_goal__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 3)));
    MR_Word hlds__hlds_out__hlds_out_goal__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 4)));

    {
      hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
    }
    {
      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__LHS_20);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = ");
    }
    if ((hlds__hlds_out__hlds_out_goal__TypeQual_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      hlds__hlds_out__hlds_out_goal__VarType_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word hlds__hlds_out__hlds_out_goal__VarTypes_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TypeQual_14, (MR_Integer) 1)));
        MR_Word hlds__hlds_out__hlds_out_goal__UniType_28;
        MR_Word hlds__hlds_out__hlds_out_goal__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__TypeQual_14, (MR_Integer) 0)));

        {
          hlds__vartypes__lookup_var_type_3_p_0(hlds__hlds_out__hlds_out_goal__VarTypes_27, hlds__hlds_out__hlds_out_goal__LHS_20, &hlds__hlds_out__hlds_out_goal__UniType_28);
        }
        {
          hlds__hlds_out__hlds_out_goal__VarType_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__VarType_29, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__UniType_28));
        }
      }
    {
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &hlds__hlds_out__hlds_out_goal__InstVarSet_30);
    }
    {
      hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_12_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__InstVarSet_30, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__VarType_29, hlds__hlds_out__hlds_out_goal__RHS_21);
    }
    {
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_25, (MR_Char) 117);
    }
    if (!(hlds__hlds_out__hlds_out_goal__succeeded))
      {
        {
          hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_25, (MR_Char) 112);
        }
      }
    if (hlds__hlds_out__hlds_out_goal__succeeded)
      {
        MR_Word hlds__hlds_out__hlds_out_goal__Mode_31;
        MR_Word hlds__hlds_out__hlds_out_goal__CanFail_32;
        MR_Word hlds__hlds_out__hlds_out_goal__TypeInfoVars_33;
        MR_Word hlds__hlds_out__hlds_out_goal__V_43_43;
        MR_Word hlds__hlds_out__hlds_out_goal__V_44_44;
        MR_Word hlds__hlds_out__hlds_out_goal__V_45_45;
        MR_Word hlds__hlds_out__hlds_out_goal__V_46_46;
        MR_Word hlds__hlds_out__hlds_out_goal__V_47_47;
        MR_Word hlds__hlds_out__hlds_out_goal__V_48_48;

        hlds__hlds_out__hlds_out_goal__succeeded = ((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__Unification_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_23, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (hlds__hlds_out__hlds_out_goal__succeeded)
          {
            hlds__hlds_out__hlds_out_goal__Mode_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_23, (MR_Integer) 1)));
            hlds__hlds_out__hlds_out_goal__CanFail_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_23, (MR_Integer) 2)));
            hlds__hlds_out__hlds_out_goal__TypeInfoVars_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__Unification_23, (MR_Integer) 3)));
            hlds__hlds_out__hlds_out_goal__succeeded = (hlds__hlds_out__hlds_out_goal__CanFail_32 == (MR_Integer) 0);
            if (hlds__hlds_out__hlds_out_goal__succeeded)
              {
                hlds__hlds_out__hlds_out_goal__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Mode_31, (MR_Integer) 0)));
                hlds__hlds_out__hlds_out_goal__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Mode_31, (MR_Integer) 1)));
                hlds__hlds_out__hlds_out_goal__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_43_43, (MR_Integer) 0)));
                hlds__hlds_out__hlds_out_goal__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_43_43, (MR_Integer) 1)));
                hlds__hlds_out__hlds_out_goal__succeeded = (hlds__hlds_out__hlds_out_goal__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (hlds__hlds_out__hlds_out_goal__succeeded)
                  {
                    hlds__hlds_out__hlds_out_goal__succeeded = (hlds__hlds_out__hlds_out_goal__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (hlds__hlds_out__hlds_out_goal__succeeded)
                      {
                        hlds__hlds_out__hlds_out_goal__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_46_46, (MR_Integer) 0)));
                        hlds__hlds_out__hlds_out_goal__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_46_46, (MR_Integer) 1)));
                        hlds__hlds_out__hlds_out_goal__succeeded = (hlds__hlds_out__hlds_out_goal__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (hlds__hlds_out__hlds_out_goal__succeeded)
                          hlds__hlds_out__hlds_out_goal__succeeded = (hlds__hlds_out__hlds_out_goal__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
                if (hlds__hlds_out__hlds_out_goal__succeeded)
                  hlds__hlds_out__hlds_out_goal__succeeded = (hlds__hlds_out__hlds_out_goal__TypeInfoVars_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
          }
        if (hlds__hlds_out__hlds_out_goal__succeeded)
          {
          }
        else
          {
            hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_117_110_105_102_105_99_97_116_105_111_110_95_95_91_50_93_95_48_9_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__InstVarSet_30, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Unification_23);
          }
      }
    else
      {
      }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_expr_10_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
  MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_18)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__GoalExpr_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          hlds__hlds_out__hlds_out_goal__write_goal_negation_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__GoalExpr_18);
        }
        break;
      case (MR_Integer) 1:
        {
          hlds__hlds_out__hlds_out_goal__write_goal_unify_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__GoalExpr_18);
        }
        break;
      case (MR_Integer) 2:
        {
          hlds__hlds_out__hlds_out_goal__write_goal_plain_call_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__GoalExpr_18);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__GoalExpr_18, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_103_101_110_101_114_105_99_95_99_97_108_108_95_95_91_50_44_32_52_93_95_48_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__GoalExpr_18);
            }
            break;
          case (MR_Integer) 1:
            {
              hlds__hlds_out__hlds_out_goal__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_103_111_97_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_95_91_49_44_32_52_93_95_48_10_p_0(hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__GoalExpr_18);
            }
            break;
          case (MR_Integer) 2:
            {
              hlds__hlds_out__hlds_out_goal__write_goal_conj_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__GoalExpr_18);
            }
            break;
          case (MR_Integer) 3:
            {
              hlds__hlds_out__hlds_out_goal__write_goal_disj_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__GoalExpr_18);
            }
            break;
          case (MR_Integer) 4:
            {
              hlds__hlds_out__hlds_out_goal__write_goal_switch_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__GoalExpr_18);
            }
            break;
          case (MR_Integer) 5:
            {
              hlds__hlds_out__hlds_out_goal__write_goal_scope_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__GoalExpr_18);
            }
            break;
          case (MR_Integer) 6:
            {
              hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__GoalExpr_18);
            }
            break;
          case (MR_Integer) 7:
            {
              hlds__hlds_out__hlds_out_goal__write_goal_shorthand_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__GoalExpr_18);
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__ShortDescription_6,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_7,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_8)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__ShortDescription_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "cell died");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__hlds_out__hlds_out_goal__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortDescription_6, (MR_Integer) 0)));
          MR_Word hlds__hlds_out__hlds_out_goal__IsConditional_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortDescription_6, (MR_Integer) 1)));
          MR_Word hlds__hlds_out__hlds_out_goal__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortDescription_6, (MR_Integer) 2)));
          MR_Word hlds__hlds_out__hlds_out_goal__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ShortDescription_6, (MR_Integer) 3)));

          {
            mercury__io__write_string_3_p_0((MR_String) "cell reuse - ");
          }
          {
            parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_7, hlds__hlds_out__hlds_out_goal__VarNamePrint_8, hlds__hlds_out__hlds_out_goal__Var_10);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " - ");
          }
          switch (hlds__hlds_out__hlds_out_goal__IsConditional_11) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "with condition");
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "always safe");
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__hlds_out__hlds_out_goal__NoClobbers_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__ShortDescription_6, (MR_Integer) 1)));
          MR_Word hlds__hlds_out__hlds_out_goal__IsConditional_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__ShortDescription_6, (MR_Integer) 0)));

          {
            mercury__io__write_string_3_p_0((MR_String) "reuse call - ");
          }
          switch (hlds__hlds_out__hlds_out_goal__IsConditional_31) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "with condition");
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "always safe");
                }
              }
              break;
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ", no clobbers = ");
          }
          {
            mercury__io__write_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[2], ((MR_Box) (hlds__hlds_out__hlds_out_goal__NoClobbers_14)));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_1,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_2,
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

        if ((hlds__hlds_out__hlds_out_goal__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word hlds__hlds_out__hlds_out_goal__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word hlds__hlds_out__hlds_out_goal__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__HeadVar__3_3, (MR_Integer) 0)));

            if ((hlds__hlds_out__hlds_out_goal__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_1, hlds__hlds_out__hlds_out_goal__VarNamePrint_2, hlds__hlds_out__hlds_out_goal__V_36_36);
                }
              }
            else
              {
                MR_Word hlds__hlds_out__hlds_out_goal__V_66_66;
                MR_Word hlds__hlds_out__hlds_out_goal__V_67_67;

                {
                  parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_1, hlds__hlds_out__hlds_out_goal__VarNamePrint_2, hlds__hlds_out__hlds_out_goal__V_36_36);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
                hlds__hlds_out__hlds_out_goal__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_35_35, (MR_Integer) 0)));
                hlds__hlds_out__hlds_out_goal__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_35_35, (MR_Integer) 1)));
                if ((hlds__hlds_out__hlds_out_goal__V_66_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    {
                      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_1, hlds__hlds_out__hlds_out_goal__VarNamePrint_2, hlds__hlds_out__hlds_out_goal__V_67_67);
                    }
                  }
                else
                  {
                    {
                      parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_1, hlds__hlds_out__hlds_out_goal__VarNamePrint_2, hlds__hlds_out__hlds_out_goal__V_67_67);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) ", ");
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__3__tmp_copy_3 = hlds__hlds_out__hlds_out_goal__V_66_66;

                      hlds__hlds_out__hlds_out_goal__HeadVar__3_3 = hlds__hlds_out__hlds_out_goal__HeadVar__3__tmp_copy_3;
                    }
                    continue;
                  }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_instmap_delta_vars_5_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_6,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_7,
  MR_Word hlds__hlds_out__hlds_out_goal__InstMapDelta_8)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

    {
      hlds__hlds_out__hlds_out_goal__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(hlds__hlds_out__hlds_out_goal__InstMapDelta_8);
    }
    if (hlds__hlds_out__hlds_out_goal__succeeded)
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "unreachable");
        }
      }
    else
      {
        MR_Word hlds__hlds_out__hlds_out_goal__AssocList_10;
        MR_Word hlds__hlds_out__hlds_out_goal__Vars_11;

        {
          hlds__instmap__instmap_delta_to_assoc_list_2_p_0(hlds__hlds_out__hlds_out_goal__InstMapDelta_8, &hlds__hlds_out__hlds_out_goal__AssocList_10);
        }
        {
          mercury__assoc_list__keys_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, hlds__hlds_out__hlds_out_goal__AssocList_10, &hlds__hlds_out__hlds_out_goal__Vars_11);
        }
        {
          hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(hlds__hlds_out__hlds_out_goal__VarSet_6, hlds__hlds_out__hlds_out_goal__VarNamePrint_7, hlds__hlds_out__hlds_out_goal__Vars_11);
        }
      }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_instmap_delta_6_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_7,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_8,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_9,
  MR_Word hlds__hlds_out__hlds_out_goal__InstMapDelta_10)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

    {
      hlds__hlds_out__hlds_out_goal__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(hlds__hlds_out__hlds_out_goal__InstMapDelta_10);
    }
    if (hlds__hlds_out__hlds_out_goal__succeeded)
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "unreachable");
        }
      }
    else
      {
        MR_Word hlds__hlds_out__hlds_out_goal__AssocList_12;

        {
          hlds__instmap__instmap_delta_to_assoc_list_2_p_0(hlds__hlds_out__hlds_out_goal__InstMapDelta_10, &hlds__hlds_out__hlds_out_goal__AssocList_12);
        }
        {
          hlds__hlds_out__hlds_out_mode__write_var_inst_list_6_p_0(hlds__hlds_out__hlds_out_goal__VarSet_7, hlds__hlds_out__hlds_out_goal__VarNamePrint_8, hlds__hlds_out__hlds_out_goal__Indent_9, hlds__hlds_out__hlds_out_goal__AssocList_12);
        }
      }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_8,
  MR_Word hlds__hlds_out__hlds_out_goal__GoalInfo_9,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_10,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_11,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_12)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
    MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_14 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_8, (MR_Integer) 0)));
    MR_String hlds__hlds_out__hlds_out_goal__V_145_145 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_8, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_goal__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_8, (MR_Integer) 2)));
    MR_Word hlds__hlds_out__hlds_out_goal__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_8, (MR_Integer) 3)));
    MR_Word hlds__hlds_out__hlds_out_goal__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_8, (MR_Integer) 4)));
    MR_Word hlds__hlds_out__hlds_out_goal__StoreMapList_26;
    MR_Word hlds__hlds_out__hlds_out_goal__TypeInfo_152_152;
    MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_153_153;
    MR_Word hlds__hlds_out__hlds_out_goal__StoreMap_25;
    MR_Word hlds__hlds_out__hlds_out_goal__V_27_27;
    MR_Word hlds__hlds_out__hlds_out_goal__V_28_28;
    MR_Word hlds__hlds_out__hlds_out_goal__NeedAcrossCall_30;
    MR_Word hlds__hlds_out__hlds_out_goal__MaybeNeedAcrossCall_29;
    MR_Word hlds__hlds_out__hlds_out_goal__NeedInResume_44;
    MR_Word hlds__hlds_out__hlds_out_goal__MaybeNeedInResume_43;
    MR_Word hlds__hlds_out__hlds_out_goal__NeedInParConj_55;
    MR_Word hlds__hlds_out__hlds_out_goal__MaybeNeedInParConj_54;

    {
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_14, (MR_Char) 102);
    }
    if (hlds__hlds_out__hlds_out_goal__succeeded)
      {
        MR_Word hlds__hlds_out__hlds_out_goal__MaybeFollowVars_15;

        {
          hlds__hlds_llds__goal_info_get_follow_vars_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_9, &hlds__hlds_out__hlds_out_goal__MaybeFollowVars_15);
        }
        if ((hlds__hlds_out__hlds_out_goal__MaybeFollowVars_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word hlds__hlds_out__hlds_out_goal__FollowVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeFollowVars_15, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_goal__FollowVarsMap_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__FollowVars_16, (MR_Integer) 0)));
            MR_Integer hlds__hlds_out__hlds_out_goal__NextRegR_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__FollowVars_16, (MR_Integer) 1)));
            MR_Integer hlds__hlds_out__hlds_out_goal__NextRegF_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__FollowVars_16, (MR_Integer) 2)));
            MR_Word hlds__hlds_out__hlds_out_goal__FVlist_20;

            {
              mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, hlds__hlds_out__hlds_out_goal__FollowVarsMap_17, &hlds__hlds_out__hlds_out_goal__FVlist_20);
            }
            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% follow vars: r");
            }
            {
              mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_goal__NextRegR_18);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ", f");
            }
            {
              mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_goal__NextRegF_19);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
            {
              hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_p_0(hlds__hlds_out__hlds_out_goal__VarSet_10, hlds__hlds_out__hlds_out_goal__VarNamePrint_11, hlds__hlds_out__hlds_out_goal__Indent_12, hlds__hlds_out__hlds_out_goal__FVlist_20);
            }
          }
      }
    else
      {
      }
    {
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_14, (MR_Char) 114);
    }
    if (hlds__hlds_out__hlds_out_goal__succeeded)
      {
        MR_Word hlds__hlds_out__hlds_out_goal__Resume_21;

        {
          hlds__hlds_llds__goal_info_get_resume_point_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_9, &hlds__hlds_out__hlds_out_goal__Resume_21);
        }
        if ((hlds__hlds_out__hlds_out_goal__Resume_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_151_151 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            MR_Word hlds__hlds_out__hlds_out_goal__ResumeVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Resume_21, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_goal__Locs_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Resume_21, (MR_Integer) 1)));
            MR_Word hlds__hlds_out__hlds_out_goal__ResumeVarList_24;

            {
              hlds__hlds_out__hlds_out_goal__ResumeVarList_24 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_151_151, hlds__hlds_out__hlds_out_goal__ResumeVars_22);
            }
            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% resume point ");
            }
            switch (hlds__hlds_out__hlds_out_goal__Locs_23) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "orig and stack ");
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "orig only ");
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "stack and orig ");
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "stack only ");
                  }
                }
                break;
            }
            {
              parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_151_151, hlds__hlds_out__hlds_out_goal__VarSet_10, hlds__hlds_out__hlds_out_goal__VarNamePrint_11, hlds__hlds_out__hlds_out_goal__ResumeVarList_24);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
          }
      }
    else
      {
      }
    {
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_14, (MR_Char) 115);
    }
    if (hlds__hlds_out__hlds_out_goal__succeeded)
      {
        {
          hlds__hlds_llds__goal_info_get_store_map_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_9, &hlds__hlds_out__hlds_out_goal__StoreMap_25);
        }
        hlds__hlds_out__hlds_out_goal__TypeInfo_152_152 = (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0];
        hlds__hlds_out__hlds_out_goal__TypeCtorInfo_153_153 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0;
        {
          mercury__map__to_assoc_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeInfo_152_152, hlds__hlds_out__hlds_out_goal__TypeCtorInfo_153_153, hlds__hlds_out__hlds_out_goal__StoreMap_25, &hlds__hlds_out__hlds_out_goal__StoreMapList_26);
        }
        hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__StoreMapList_26)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__hlds_out__hlds_out_goal__succeeded)
          {
            hlds__hlds_out__hlds_out_goal__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__StoreMapList_26, (MR_Integer) 0)));
            hlds__hlds_out__hlds_out_goal__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__StoreMapList_26, (MR_Integer) 1)));
          }
      }
    if (hlds__hlds_out__hlds_out_goal__succeeded)
      {
        {
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "% store map:\n");
        }
        {
          hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_p_0(hlds__hlds_out__hlds_out_goal__VarSet_10, hlds__hlds_out__hlds_out_goal__VarNamePrint_11, hlds__hlds_out__hlds_out_goal__Indent_12, hlds__hlds_out__hlds_out_goal__StoreMapList_26);
        }
      }
    else
      {
      }
    {
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_14, (MR_Char) 115);
    }
    if (hlds__hlds_out__hlds_out_goal__succeeded)
      {
        {
          hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_9, &hlds__hlds_out__hlds_out_goal__MaybeNeedAcrossCall_29);
        }
        hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__MaybeNeedAcrossCall_29)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__hlds_out__hlds_out_goal__succeeded)
          hlds__hlds_out__hlds_out_goal__NeedAcrossCall_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeNeedAcrossCall_29, (MR_Integer) 0)));
      }
    if (hlds__hlds_out__hlds_out_goal__succeeded)
      {
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_154_154 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
        MR_Word hlds__hlds_out__hlds_out_goal__CallForwardSet_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__NeedAcrossCall_30, (MR_Integer) 0)));
        MR_Word hlds__hlds_out__hlds_out_goal__CallResumeSet_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__NeedAcrossCall_30, (MR_Integer) 1)));
        MR_Word hlds__hlds_out__hlds_out_goal__CallNondetSet_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__NeedAcrossCall_30, (MR_Integer) 2)));
        MR_Word hlds__hlds_out__hlds_out_goal__CallForwardList_34;
        MR_Word hlds__hlds_out__hlds_out_goal__CallResumeList_35;
        MR_Word hlds__hlds_out__hlds_out_goal__CallNondetList_36;

        {
          hlds__hlds_out__hlds_out_goal__CallForwardList_34 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_154_154, hlds__hlds_out__hlds_out_goal__CallForwardSet_31);
        }
        {
          hlds__hlds_out__hlds_out_goal__CallResumeList_35 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_154_154, hlds__hlds_out__hlds_out_goal__CallResumeSet_32);
        }
        {
          hlds__hlds_out__hlds_out_goal__CallNondetList_36 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_154_154, hlds__hlds_out__hlds_out_goal__CallNondetSet_33);
        }
        {
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "% need across call forward vars: ");
        }
        if ((hlds__hlds_out__hlds_out_goal__CallForwardList_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "none\n");
            }
          }
        else
          {
            {
              hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(hlds__hlds_out__hlds_out_goal__VarSet_10, hlds__hlds_out__hlds_out_goal__VarNamePrint_11, hlds__hlds_out__hlds_out_goal__CallForwardList_34);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
          }
        {
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "% need across call resume vars: ");
        }
        if ((hlds__hlds_out__hlds_out_goal__CallResumeList_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "none\n");
            }
          }
        else
          {
            {
              hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(hlds__hlds_out__hlds_out_goal__VarSet_10, hlds__hlds_out__hlds_out_goal__VarNamePrint_11, hlds__hlds_out__hlds_out_goal__CallResumeList_35);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
          }
        {
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "% need across call nondet vars: ");
        }
        if ((hlds__hlds_out__hlds_out_goal__CallNondetList_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "none\n");
            }
          }
        else
          {
            {
              hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(hlds__hlds_out__hlds_out_goal__VarSet_10, hlds__hlds_out__hlds_out_goal__VarNamePrint_11, hlds__hlds_out__hlds_out_goal__CallNondetList_36);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
          }
      }
    else
      {
      }
    {
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_14, (MR_Char) 115);
    }
    if (hlds__hlds_out__hlds_out_goal__succeeded)
      {
        {
          hlds__hlds_llds__goal_info_get_maybe_need_in_resume_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_9, &hlds__hlds_out__hlds_out_goal__MaybeNeedInResume_43);
        }
        hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__MaybeNeedInResume_43)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__hlds_out__hlds_out_goal__succeeded)
          hlds__hlds_out__hlds_out_goal__NeedInResume_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeNeedInResume_43, (MR_Integer) 0)));
      }
    if (hlds__hlds_out__hlds_out_goal__succeeded)
      {
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_155_155 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
        MR_Word hlds__hlds_out__hlds_out_goal__ResumeOnStack_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__NeedInResume_44, (MR_Integer) 0)));
        MR_Word hlds__hlds_out__hlds_out_goal__ResumeResumeSet_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__NeedInResume_44, (MR_Integer) 1)));
        MR_Word hlds__hlds_out__hlds_out_goal__ResumeNondetSet_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__NeedInResume_44, (MR_Integer) 2)));
        MR_Word hlds__hlds_out__hlds_out_goal__ResumeResumeList_48;
        MR_Word hlds__hlds_out__hlds_out_goal__ResumeNondetList_49;

        {
          hlds__hlds_out__hlds_out_goal__ResumeResumeList_48 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_155_155, hlds__hlds_out__hlds_out_goal__ResumeResumeSet_46);
        }
        {
          hlds__hlds_out__hlds_out_goal__ResumeNondetList_49 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_155_155, hlds__hlds_out__hlds_out_goal__ResumeNondetSet_47);
        }
        {
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
        }
        switch (hlds__hlds_out__hlds_out_goal__ResumeOnStack_45) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "% resume point has no stack label\n");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "% resume point has stack label\n");
              }
            }
            break;
        }
        {
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "% need in resume resume vars: ");
        }
        if ((hlds__hlds_out__hlds_out_goal__ResumeResumeList_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "none\n");
            }
          }
        else
          {
            {
              hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(hlds__hlds_out__hlds_out_goal__VarSet_10, hlds__hlds_out__hlds_out_goal__VarNamePrint_11, hlds__hlds_out__hlds_out_goal__ResumeResumeList_48);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
          }
        {
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "% need in resume nondet vars: ");
        }
        if ((hlds__hlds_out__hlds_out_goal__ResumeNondetList_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "none\n");
            }
          }
        else
          {
            {
              hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(hlds__hlds_out__hlds_out_goal__VarSet_10, hlds__hlds_out__hlds_out_goal__VarNamePrint_11, hlds__hlds_out__hlds_out_goal__ResumeNondetList_49);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
          }
      }
    else
      {
      }
    {
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_14, (MR_Char) 115);
    }
    if (hlds__hlds_out__hlds_out_goal__succeeded)
      {
        {
          hlds__hlds_llds__goal_info_get_maybe_need_in_par_conj_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_9, &hlds__hlds_out__hlds_out_goal__MaybeNeedInParConj_54);
        }
        hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__MaybeNeedInParConj_54)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__hlds_out__hlds_out_goal__succeeded)
          hlds__hlds_out__hlds_out_goal__NeedInParConj_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeNeedInParConj_54, (MR_Integer) 0)));
      }
    if (hlds__hlds_out__hlds_out_goal__succeeded)
      {
        MR_Word hlds__hlds_out__hlds_out_goal__ParConjSet_56 = (MR_Word) hlds__hlds_out__hlds_out_goal__NeedInParConj_55;
        MR_Word hlds__hlds_out__hlds_out_goal__ParConjList_57;

        {
          hlds__hlds_out__hlds_out_goal__ParConjList_57 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__ParConjSet_56);
        }
        {
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_12);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "% need in par_conj vars: ");
        }
        {
          hlds__hlds_out__hlds_out_goal__write_vars_5_p_0(hlds__hlds_out__hlds_out_goal__VarSet_10, hlds__hlds_out__hlds_out_goal__VarNamePrint_11, hlds__hlds_out__hlds_out_goal__ParConjList_57);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
    else
      {
      }
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_goal__case_comment_3_f_0(
  MR_String hlds__hlds_out__hlds_out_goal__VarName_5,
  MR_String hlds__hlds_out__hlds_out_goal__MainConsName_6,
  MR_Word hlds__hlds_out__hlds_out_goal__OtherConsNames_7)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
    MR_String hlds__hlds_out__hlds_out_goal__Comment_8;

    if ((hlds__hlds_out__hlds_out_goal__OtherConsNames_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_String hlds__hlds_out__hlds_out_goal__V_16_16;

        {
          hlds__hlds_out__hlds_out_goal__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) " has the functor ", hlds__hlds_out__hlds_out_goal__MainConsName_6);
        }
        {
          hlds__hlds_out__hlds_out_goal__Comment_8 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_goal__VarName_5, hlds__hlds_out__hlds_out_goal__V_16_16);
        }
      }
    else
      {
        MR_String hlds__hlds_out__hlds_out_goal__V_11_11;
        MR_String hlds__hlds_out__hlds_out_goal__V_13_13;
        MR_Word hlds__hlds_out__hlds_out_goal__V_15_15;

        {
          hlds__hlds_out__hlds_out_goal__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_15_15, 0) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__MainConsName_6));
          MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_15_15, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__OtherConsNames_7));
        }
        {
          hlds__hlds_out__hlds_out_goal__V_13_13 = mercury__string__join_list_2_f_0((MR_String) ", ", hlds__hlds_out__hlds_out_goal__V_15_15);
        }
        {
          hlds__hlds_out__hlds_out_goal__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) " has one of the functors ", hlds__hlds_out__hlds_out_goal__V_13_13);
        }
        {
          hlds__hlds_out__hlds_out_goal__Comment_8 = mercury__string__f_43_43_2_f_0(hlds__hlds_out__hlds_out_goal__VarName_5, hlds__hlds_out__hlds_out_goal__V_11_11);
        }
      }
    return hlds__hlds_out__hlds_out_goal__Comment_8;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_goal__project_cons_name_and_tag_3_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__TaggedConsId_4,
  MR_String * hlds__hlds_out__hlds_out_goal__ConsName_5,
  MR_Word * hlds__hlds_out__hlds_out_goal__ConsTag_6)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
    MR_Word hlds__hlds_out__hlds_out_goal__ConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__TaggedConsId_4, (MR_Integer) 0)));

    *hlds__hlds_out__hlds_out_goal__ConsTag_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__TaggedConsId_4, (MR_Integer) 1)));
    {
      *hlds__hlds_out__hlds_out_goal__ConsName_5 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(hlds__hlds_out__hlds_out_goal__ConsId_7);
    }
  }
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_goal__unify_rhs_to_string_4_f_0(
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_6,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_7,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_8,
  MR_Word hlds__hlds_out__hlds_out_goal__RHS_9)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
    MR_String hlds__hlds_out__hlds_out_goal__Str_10;

    switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__RHS_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__hlds_out__hlds_out_goal__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__RHS_9, (MR_Integer) 0)));

          {
            hlds__hlds_out__hlds_out_goal__Str_10 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_7, hlds__hlds_out__hlds_out_goal__VarNamePrint_8, hlds__hlds_out__hlds_out_goal__Var_11);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__hlds_out__hlds_out_goal__ConsId0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__RHS_9, (MR_Integer) 0)));
          MR_Word hlds__hlds_out__hlds_out_goal__IsExistConstruct_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__RHS_9, (MR_Integer) 1)));
          MR_Word hlds__hlds_out__hlds_out_goal__ArgVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__RHS_9, (MR_Integer) 2)));
          MR_Word hlds__hlds_out__hlds_out_goal__ConsId_19;
          MR_Word hlds__hlds_out__hlds_out_goal__SymName0_15;
          MR_Integer hlds__hlds_out__hlds_out_goal__Arity_16;
          MR_Word hlds__hlds_out__hlds_out_goal__TypeCtor_17;

          hlds__hlds_out__hlds_out_goal__succeeded = (hlds__hlds_out__hlds_out_goal__IsExistConstruct_13 == (MR_Integer) 1);
          if (hlds__hlds_out__hlds_out_goal__succeeded)
            {
              hlds__hlds_out__hlds_out_goal__succeeded = ((((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__ConsId0_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId0_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (hlds__hlds_out__hlds_out_goal__succeeded)
                {
                  hlds__hlds_out__hlds_out_goal__SymName0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId0_12, (MR_Integer) 1)));
                  hlds__hlds_out__hlds_out_goal__Arity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId0_12, (MR_Integer) 2)));
                  hlds__hlds_out__hlds_out_goal__TypeCtor_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId0_12, (MR_Integer) 3)));
                }
            }
          if (hlds__hlds_out__hlds_out_goal__succeeded)
            {
              MR_Word hlds__hlds_out__hlds_out_goal__SymName_18;

              {
                parse_tree__prog_type__add_new_prefix_2_p_0(hlds__hlds_out__hlds_out_goal__SymName0_15, &hlds__hlds_out__hlds_out_goal__SymName_18);
              }
              {
                hlds__hlds_out__hlds_out_goal__ConsId_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_19, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__SymName_18));
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_19, 2) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__Arity_16));
                MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ConsId_19, 3) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__TypeCtor_17));
              }
            }
          else
            hlds__hlds_out__hlds_out_goal__ConsId_19 = hlds__hlds_out__hlds_out_goal__ConsId0_12;
          {
            hlds__hlds_out__hlds_out_goal__Str_10 = hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(hlds__hlds_out__hlds_out_goal__ModuleInfo_6, hlds__hlds_out__hlds_out_goal__VarSet_7, hlds__hlds_out__hlds_out_goal__VarNamePrint_8, hlds__hlds_out__hlds_out_goal__ConsId_19, hlds__hlds_out__hlds_out_goal__ArgVars_14);
          }
        }
        break;
      case (MR_Integer) 2:
        hlds__hlds_out__hlds_out_goal__Str_10 = (MR_String) "lambda goal";
        break;
    }
    return hlds__hlds_out__hlds_out_goal__Str_10;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_unify_rhs_9_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_10,
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_11,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_12,
  MR_Word hlds__hlds_out__hlds_out_goal__InstVarSet_13,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_14,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_15,
  MR_Word hlds__hlds_out__hlds_out_goal__RHS_16)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

    {
      hlds__hlds_out__hlds_out_goal__write_unify_rhs_3_11_p_0(hlds__hlds_out__hlds_out_goal__Info_10, hlds__hlds_out__hlds_out_goal__ModuleInfo_11, hlds__hlds_out__hlds_out_goal__VarSet_12, hlds__hlds_out__hlds_out_goal__InstVarSet_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__hlds_out__hlds_out_goal__VarNamePrint_14, hlds__hlds_out__hlds_out_goal__Indent_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__hlds_out__hlds_out_goal__RHS_16);
    }
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_6_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_1,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_2,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_3,
  MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

        if ((hlds__hlds_out__hlds_out_goal__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word hlds__hlds_out__hlds_out_goal__Var_16;
            MR_Word hlds__hlds_out__hlds_out_goal__Loc_17;
            MR_Word hlds__hlds_out__hlds_out_goal__VarLocs_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__HeadVar__4_4, (MR_Integer) 1)));
            MR_String hlds__hlds_out__hlds_out_goal__LocnStr_20;
            MR_Word hlds__hlds_out__hlds_out_goal__MaybeWidth_21;
            MR_Word hlds__hlds_out__hlds_out_goal__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__HeadVar__4_4, (MR_Integer) 0)));

            hlds__hlds_out__hlds_out_goal__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_25_25, (MR_Integer) 0)));
            hlds__hlds_out__hlds_out_goal__Loc_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_25_25, (MR_Integer) 1)));
            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_3);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "%\t");
            }
            {
              parse_tree__parse_tree_out_term__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_1, hlds__hlds_out__hlds_out_goal__VarNamePrint_2, hlds__hlds_out__hlds_out_goal__Var_16);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\t-> ");
            }
            {
              hlds__hlds_llds__abs_locn_to_string_3_p_0(hlds__hlds_out__hlds_out_goal__Loc_17, &hlds__hlds_out__hlds_out_goal__LocnStr_20, &hlds__hlds_out__hlds_out_goal__MaybeWidth_21);
            }
            {
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__LocnStr_20);
            }
            if ((hlds__hlds_out__hlds_out_goal__MaybeWidth_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
              }
            else
              {
                MR_String hlds__hlds_out__hlds_out_goal__Width_22 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeWidth_21, (MR_Integer) 0)));

                {
                  mercury__io__write_string_3_p_0((MR_String) " ");
                }
                {
                  mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Width_22);
                }
              }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__hlds_out__hlds_out_goal__HeadVar__4__tmp_copy_4 = hlds__hlds_out__hlds_out_goal__VarLocs_18;

              hlds__hlds_out__hlds_out_goal__HeadVar__4_4 = hlds__hlds_out__hlds_out_goal__HeadVar__4__tmp_copy_4;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_list_10_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
  MR_String hlds__hlds_out__hlds_out_goal__Separator_17,
  MR_Word hlds__hlds_out__hlds_out_goal__Goals_18)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

        if ((hlds__hlds_out__hlds_out_goal__Goals_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word hlds__hlds_out__hlds_out_goal__HeadGoal_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Goals_18, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_goal__TailGoals_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__Goals_18, (MR_Integer) 1)));
            MR_Integer hlds__hlds_out__hlds_out_goal__V_26_26;

            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
            {
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__Separator_17);
            }
            hlds__hlds_out__hlds_out_goal__V_26_26 = (hlds__hlds_out__hlds_out_goal__Indent_16 + (MR_Integer) 1);
            {
              hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__V_26_26, (MR_String) "\n", hlds__hlds_out__hlds_out_goal__HeadGoal_20);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__hlds_out__hlds_out_goal__Goals__tmp_copy_18 = hlds__hlds_out__hlds_out_goal__TailGoals_21;

              hlds__hlds_out__hlds_out_goal__Goals_18 = hlds__hlds_out__hlds_out_goal__Goals__tmp_copy_18;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_6(
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

    {
      mercury__io__write_string_3_p_0(((MR_String) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_5(
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

    {
      hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__332__1_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_4(
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

    {
      hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__328__1_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_3(
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

    {
      hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__324__1_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_2(
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

    {
      hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__320__1_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0_1(
  MR_Box hlds__hlds_out__hlds_out_goal__closure_arg,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_1,
  MR_Box hlds__hlds_out__hlds_out_goal__wrapper_arg_2,
  MR_Box * hlds__hlds_out__hlds_out_goal__wrapper_arg_3)
{
  {
    MR_Box hlds__hlds_out__hlds_out_goal__closure = hlds__hlds_out__hlds_out_goal__closure_arg;

    {
      hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__316__1_3_p_0(((MR_Word) hlds__hlds_out__hlds_out_goal__wrapper_arg_1));
    }
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_11,
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_12,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_13,
  MR_Word hlds__hlds_out__hlds_out_goal__TypeQual_14,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_15,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_16,
  MR_String hlds__hlds_out__hlds_out_goal__Follow_17,
  MR_Word hlds__hlds_out__hlds_out_goal__Goal_18)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
    MR_Word hlds__hlds_out__hlds_out_goal__GoalExpr_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Goal_18, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_goal__GoalInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Goal_18, (MR_Integer) 1)));
    MR_String hlds__hlds_out__hlds_out_goal__DumpOptions_22 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 0)));
    MR_Word hlds__hlds_out__hlds_out_goal__CodeGenInfo_80;
    MR_String hlds__hlds_out__hlds_out_goal__V_300_300 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 1)));
    MR_Word hlds__hlds_out__hlds_out_goal__V_301_301 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 2)));
    MR_Word hlds__hlds_out__hlds_out_goal__V_302_302 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 3)));
    MR_Word hlds__hlds_out__hlds_out_goal__V_303_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__Info_11, (MR_Integer) 4)));

    {
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 99);
    }
    if (hlds__hlds_out__hlds_out_goal__succeeded)
      {
        MR_Word hlds__hlds_out__hlds_out_goal__Context_23;
        MR_String hlds__hlds_out__hlds_out_goal__FileName_24;
        MR_Integer hlds__hlds_out__hlds_out_goal__LineNumber_25;

        {
          hlds__hlds_out__hlds_out_goal__Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
        {
          mercury__term__context_file_2_p_0(hlds__hlds_out__hlds_out_goal__Context_23, &hlds__hlds_out__hlds_out_goal__FileName_24);
        }
        {
          mercury__term__context_line_2_p_0(hlds__hlds_out__hlds_out_goal__Context_23, &hlds__hlds_out__hlds_out_goal__LineNumber_25);
        }
        hlds__hlds_out__hlds_out_goal__succeeded = (strcmp(hlds__hlds_out__hlds_out_goal__FileName_24, (MR_String) "") == 0);
        if (hlds__hlds_out__hlds_out_goal__succeeded)
          {
          }
        else
          {
            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% context: file \140");
            }
            {
              mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__FileName_24);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\', line ");
            }
            {
              mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_goal__LineNumber_25);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
          }
      }
    else
      {
      }
    {
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 80);
    }
    if (hlds__hlds_out__hlds_out_goal__succeeded)
      {
        MR_Word hlds__hlds_out__hlds_out_goal__GoalId_26;
        MR_Integer hlds__hlds_out__hlds_out_goal__GoalIdNum_27;

        {
          hlds__hlds_out__hlds_out_goal__GoalId_26 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
        hlds__hlds_out__hlds_out_goal__GoalIdNum_27 = (MR_Integer) hlds__hlds_out__hlds_out_goal__GoalId_26;
        hlds__hlds_out__hlds_out_goal__succeeded = (hlds__hlds_out__hlds_out_goal__GoalIdNum_27 < (MR_Integer) 0);
        if (hlds__hlds_out__hlds_out_goal__succeeded)
          {
          }
        else
          {
            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% goal id: ");
            }
            {
              mercury__io__write_int_3_p_0(hlds__hlds_out__hlds_out_goal__GoalIdNum_27);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
          }
      }
    else
      {
      }
    {
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 110);
    }
    if (hlds__hlds_out__hlds_out_goal__succeeded)
      {
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_304_304;
        MR_Word hlds__hlds_out__hlds_out_goal__NonLocalsSet_28;
        MR_Word hlds__hlds_out__hlds_out_goal__NonLocalsList_29;

        {
          hlds__hlds_out__hlds_out_goal__NonLocalsSet_28 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
        hlds__hlds_out__hlds_out_goal__TypeCtorInfo_304_304 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
        {
          parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_304_304, hlds__hlds_out__hlds_out_goal__NonLocalsSet_28, &hlds__hlds_out__hlds_out_goal__NonLocalsList_29);
        }
        if ((hlds__hlds_out__hlds_out_goal__NonLocalsList_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% nonlocals: ");
            }
            {
              parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_304_304, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__NonLocalsList_29);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
          }
      }
    else
      {
      }
    {
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 112);
    }
    if (hlds__hlds_out__hlds_out_goal__succeeded)
      {
        MR_Word hlds__hlds_out__hlds_out_goal__PreDeathList_33;
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_305_305;
        MR_Word hlds__hlds_out__hlds_out_goal__PreDeaths_32;
        MR_Word hlds__hlds_out__hlds_out_goal__V_34_34;
        MR_Word hlds__hlds_out__hlds_out_goal__V_35_35;
        MR_Word hlds__hlds_out__hlds_out_goal__PreBirthList_37;
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_307_307;
        MR_Word hlds__hlds_out__hlds_out_goal__PreBirths_36;
        MR_Word hlds__hlds_out__hlds_out_goal__V_38_38;
        MR_Word hlds__hlds_out__hlds_out_goal__V_39_39;

        {
          hlds__hlds_out__hlds_out_goal__succeeded = hlds__hlds_llds__goal_info_maybe_get_pre_deaths_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21, &hlds__hlds_out__hlds_out_goal__PreDeaths_32);
        }
        if (hlds__hlds_out__hlds_out_goal__succeeded)
          {
            hlds__hlds_out__hlds_out_goal__TypeCtorInfo_305_305 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            {
              hlds__hlds_out__hlds_out_goal__PreDeathList_33 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_305_305, hlds__hlds_out__hlds_out_goal__PreDeaths_32);
            }
            hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__PreDeathList_33)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__hlds_out__hlds_out_goal__succeeded)
              {
                hlds__hlds_out__hlds_out_goal__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PreDeathList_33, (MR_Integer) 0)));
                hlds__hlds_out__hlds_out_goal__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PreDeathList_33, (MR_Integer) 1)));
              }
          }
        if (hlds__hlds_out__hlds_out_goal__succeeded)
          {
            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% pre-deaths: ");
            }
            {
              parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__PreDeathList_33);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
          }
        else
          {
          }
        {
          hlds__hlds_out__hlds_out_goal__succeeded = hlds__hlds_llds__goal_info_maybe_get_pre_births_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21, &hlds__hlds_out__hlds_out_goal__PreBirths_36);
        }
        if (hlds__hlds_out__hlds_out_goal__succeeded)
          {
            hlds__hlds_out__hlds_out_goal__TypeCtorInfo_307_307 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            {
              hlds__hlds_out__hlds_out_goal__PreBirthList_37 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_307_307, hlds__hlds_out__hlds_out_goal__PreBirths_36);
            }
            hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__PreBirthList_37)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__hlds_out__hlds_out_goal__succeeded)
              {
                hlds__hlds_out__hlds_out_goal__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PreBirthList_37, (MR_Integer) 0)));
                hlds__hlds_out__hlds_out_goal__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PreBirthList_37, (MR_Integer) 1)));
              }
          }
        if (hlds__hlds_out__hlds_out_goal__succeeded)
          {
            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% pre-births: ");
            }
            {
              parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__PreBirthList_37);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
          }
        else
          {
          }
      }
    else
      {
      }
    {
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 66);
    }
    if (hlds__hlds_out__hlds_out_goal__succeeded)
      {
        MR_Word hlds__hlds_out__hlds_out_goal__ProducingVars_40;
        MR_Word hlds__hlds_out__hlds_out_goal__ConsumingVars_42;
        MR_Word hlds__hlds_out__hlds_out_goal__MakeVisibleVars_44;
        MR_Word hlds__hlds_out__hlds_out_goal__NeedVisibleVars_46;

        {
          hlds__hlds_out__hlds_out_goal__ProducingVars_40 = hlds__hlds_goal__producing_vars_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
        {
          hlds__hlds_out__hlds_out_goal__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__ProducingVars_40);
        }
        if (hlds__hlds_out__hlds_out_goal__succeeded)
          {
            MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_310_310 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            MR_Word hlds__hlds_out__hlds_out_goal__ProducingVarsList_41;

            {
              parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_310_310, hlds__hlds_out__hlds_out_goal__ProducingVars_40, &hlds__hlds_out__hlds_out_goal__ProducingVarsList_41);
            }
            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% producing vars: ");
            }
            {
              parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_310_310, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__ProducingVarsList_41);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
          }
        else
          {
          }
        {
          hlds__hlds_out__hlds_out_goal__ConsumingVars_42 = hlds__hlds_goal__consuming_vars_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
        {
          hlds__hlds_out__hlds_out_goal__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__ConsumingVars_42);
        }
        if (hlds__hlds_out__hlds_out_goal__succeeded)
          {
            MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_312_312 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            MR_Word hlds__hlds_out__hlds_out_goal__ConsumingVarsList_43;

            {
              parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_312_312, hlds__hlds_out__hlds_out_goal__ConsumingVars_42, &hlds__hlds_out__hlds_out_goal__ConsumingVarsList_43);
            }
            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% consuming vars: ");
            }
            {
              parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_312_312, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__ConsumingVarsList_43);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
          }
        else
          {
          }
        {
          hlds__hlds_out__hlds_out_goal__MakeVisibleVars_44 = hlds__hlds_goal__make_visible_vars_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
        {
          hlds__hlds_out__hlds_out_goal__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__MakeVisibleVars_44);
        }
        if (hlds__hlds_out__hlds_out_goal__succeeded)
          {
            MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_314_314 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            MR_Word hlds__hlds_out__hlds_out_goal__MakeVisibleVarsList_45;

            {
              parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_314_314, hlds__hlds_out__hlds_out_goal__MakeVisibleVars_44, &hlds__hlds_out__hlds_out_goal__MakeVisibleVarsList_45);
            }
            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% make_visible vars: ");
            }
            {
              parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_314_314, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__MakeVisibleVarsList_45);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
          }
        else
          {
          }
        {
          hlds__hlds_out__hlds_out_goal__NeedVisibleVars_46 = hlds__hlds_goal__need_visible_vars_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
        {
          hlds__hlds_out__hlds_out_goal__succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__NeedVisibleVars_46);
        }
        if (hlds__hlds_out__hlds_out_goal__succeeded)
          {
            MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_316_316 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            MR_Word hlds__hlds_out__hlds_out_goal__NeedVisibleVarsList_47;

            {
              parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_316_316, hlds__hlds_out__hlds_out_goal__NeedVisibleVars_46, &hlds__hlds_out__hlds_out_goal__NeedVisibleVarsList_47);
            }
            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% need_visible vars: ");
            }
            {
              parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_316_316, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__NeedVisibleVarsList_47);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
          }
        else
          {
          }
      }
    else
      {
      }
    {
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 100);
    }
    if (hlds__hlds_out__hlds_out_goal__succeeded)
      {
        MR_Word hlds__hlds_out__hlds_out_goal__Determinism_48;
        MR_String hlds__hlds_out__hlds_out_goal__V_155_155;

        {
          hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "% determinism: ");
        }
        {
          hlds__hlds_out__hlds_out_goal__Determinism_48 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
        {
          hlds__hlds_out__hlds_out_goal__V_155_155 = parse_tree__prog_out__determinism_to_string_1_f_0(hlds__hlds_out__hlds_out_goal__Determinism_48);
        }
        {
          mercury__io__write_string_3_p_0(hlds__hlds_out__hlds_out_goal__V_155_155);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
    else
      {
      }
    {
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 101);
    }
    if (hlds__hlds_out__hlds_out_goal__succeeded)
      {
        MR_Word hlds__hlds_out__hlds_out_goal__MaybeRbmmInfo_49;

        {
          hlds__hlds_out__hlds_out_goal__MaybeRbmmInfo_49 = hlds__hlds_goal__goal_info_get_maybe_rbmm_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
        if ((hlds__hlds_out__hlds_out_goal__MaybeRbmmInfo_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word hlds__hlds_out__hlds_out_goal__TypeInfo_317_317;
            MR_Word hlds__hlds_out__hlds_out_goal__RbmmInfo_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeRbmmInfo_49, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_goal__Created_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__RbmmInfo_50, (MR_Integer) 0)));
            MR_Word hlds__hlds_out__hlds_out_goal__Removed_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__RbmmInfo_50, (MR_Integer) 1)));
            MR_Word hlds__hlds_out__hlds_out_goal__Carried_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__RbmmInfo_50, (MR_Integer) 2)));
            MR_Word hlds__hlds_out__hlds_out_goal__Alloc_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__RbmmInfo_50, (MR_Integer) 3)));
            MR_Word hlds__hlds_out__hlds_out_goal__Used_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__RbmmInfo_50, (MR_Integer) 4)));
            MR_Word hlds__hlds_out__hlds_out_goal__V_163_163;
            MR_Word hlds__hlds_out__hlds_out_goal__V_171_171;
            MR_Word hlds__hlds_out__hlds_out_goal__V_179_179;
            MR_Word hlds__hlds_out__hlds_out_goal__V_187_187;
            MR_Word hlds__hlds_out__hlds_out_goal__V_195_195;

            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% Created regions: ");
            }
            hlds__hlds_out__hlds_out_goal__TypeInfo_317_317 = (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[0];
            {
              hlds__hlds_out__hlds_out_goal__V_163_163 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__Created_51);
            }
            {
              mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__V_163_163, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[0]);
            }
            {
              mercury__io__nl_2_p_0();
            }
            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% Removed regions: ");
            }
            {
              hlds__hlds_out__hlds_out_goal__V_171_171 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__Removed_52);
            }
            {
              mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__V_171_171, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[1]);
            }
            {
              mercury__io__nl_2_p_0();
            }
            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% Carried regions: ");
            }
            {
              hlds__hlds_out__hlds_out_goal__V_179_179 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__Carried_53);
            }
            {
              mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__V_179_179, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[2]);
            }
            {
              mercury__io__nl_2_p_0();
            }
            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% Allocated into regions: ");
            }
            {
              hlds__hlds_out__hlds_out_goal__V_187_187 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__Alloc_54);
            }
            {
              mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__V_187_187, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[3]);
            }
            {
              mercury__io__nl_2_p_0();
            }
            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% Used regions: ");
            }
            {
              hlds__hlds_out__hlds_out_goal__V_195_195 = mercury__set__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__Used_55);
            }
            {
              mercury__io__write_list_5_p_0(hlds__hlds_out__hlds_out_goal__TypeInfo_317_317, hlds__hlds_out__hlds_out_goal__V_195_195, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[4]);
            }
            {
              mercury__io__nl_2_p_0();
            }
          }
      }
    else
      {
      }
    {
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 122);
    }
    if (hlds__hlds_out__hlds_out_goal__succeeded)
      {
        MR_Word hlds__hlds_out__hlds_out_goal__Purity_56;

        {
          hlds__hlds_out__hlds_out_goal__Purity_56 = hlds__hlds_goal__goal_info_get_purity_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
        switch (hlds__hlds_out__hlds_out_goal__Purity_56) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            {
              {
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "% impure\n");
              }
            }
            break;
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              {
                hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "% semipure\n");
              }
            }
            break;
        }
      }
    else
      {
      }
    {
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 69);
    }
    if (hlds__hlds_out__hlds_out_goal__succeeded)
      {
        MR_Word hlds__hlds_out__hlds_out_goal__MaybeDPInfo_57;

        {
          hlds__hlds_out__hlds_out_goal__MaybeDPInfo_57 = hlds__hlds_goal__goal_info_get_maybe_dp_info_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
        if ((hlds__hlds_out__hlds_out_goal__MaybeDPInfo_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word hlds__hlds_out__hlds_out_goal__MdprofInst_58;
            MR_Word hlds__hlds_out__hlds_out_goal__MaybeDPCoverageInfo_59;
            MR_Word hlds__hlds_out__hlds_out_goal__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeDPInfo_57, (MR_Integer) 0)));

            hlds__hlds_out__hlds_out_goal__MdprofInst_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_208_208, (MR_Integer) 0)));
            hlds__hlds_out__hlds_out_goal__MaybeDPCoverageInfo_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__V_208_208, (MR_Integer) 1)));
            switch (hlds__hlds_out__hlds_out_goal__MdprofInst_58) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) "% mdprof instrumentation\n");
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                }
                break;
            }
            if ((hlds__hlds_out__hlds_out_goal__MaybeDPCoverageInfo_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
              }
            else
              {
                MR_Word hlds__hlds_out__hlds_out_goal__CoverageInfo_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__MaybeDPCoverageInfo_59, (MR_Integer) 0)));
                MR_Word hlds__hlds_out__hlds_out_goal__IsTrivial_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CoverageInfo_60, (MR_Integer) 0)));
                MR_Word hlds__hlds_out__hlds_out_goal__PortCountsGiveCoverageAfter_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_out__hlds_out_goal__CoverageInfo_60, (MR_Integer) 1)));

                {
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                }
                switch (hlds__hlds_out__hlds_out_goal__IsTrivial_61) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "% nontrivial goal\n");
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "% trivial goal\n");
                      }
                    }
                    break;
                }
                {
                  hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
                }
                switch (hlds__hlds_out__hlds_out_goal__PortCountsGiveCoverageAfter_62) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "% no port counts give coverage after\n");
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "% port counts give coverage after\n");
                      }
                    }
                    break;
                }
              }
          }
      }
    else
      {
      }
    {
      hlds__hlds_out__hlds_out_goal__write_goal_expr_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_12, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__TypeQual_14, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__Follow_17, hlds__hlds_out__hlds_out_goal__GoalExpr_20);
    }
    {
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 105);
    }
    if (hlds__hlds_out__hlds_out_goal__succeeded)
      {
        MR_Word hlds__hlds_out__hlds_out_goal__InstMapDelta_63;
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_338_338;
        MR_Word hlds__hlds_out__hlds_out_goal__Vars_64;

        {
          hlds__hlds_out__hlds_out_goal__InstMapDelta_63 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
        {
          hlds__hlds_out__hlds_out_goal__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(hlds__hlds_out__hlds_out_goal__InstMapDelta_63);
        }
        if (hlds__hlds_out__hlds_out_goal__succeeded)
          {
            {
              hlds__instmap__instmap_delta_changed_vars_2_p_0(hlds__hlds_out__hlds_out_goal__InstMapDelta_63, &hlds__hlds_out__hlds_out_goal__Vars_64);
            }
            hlds__hlds_out__hlds_out_goal__TypeCtorInfo_338_338 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            {
              hlds__hlds_out__hlds_out_goal__succeeded = parse_tree__set_of_var__is_empty_1_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_338_338, hlds__hlds_out__hlds_out_goal__Vars_64);
            }
          }
        if (hlds__hlds_out__hlds_out_goal__succeeded)
          {
          }
        else
          {
            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
            {
              hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 68);
            }
            if (hlds__hlds_out__hlds_out_goal__succeeded)
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "% new insts: ");
                }
                {
                  hlds__hlds_out__hlds_out_goal__write_instmap_delta_6_p_0(hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16, hlds__hlds_out__hlds_out_goal__InstMapDelta_63);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
              }
            else
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "% vars with new insts: ");
                }
                {
                  hlds__hlds_out__hlds_out_goal__write_instmap_delta_vars_5_p_0(hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__InstMapDelta_63);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
              }
          }
      }
    else
      {
      }
    {
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 112);
    }
    if (hlds__hlds_out__hlds_out_goal__succeeded)
      {
        MR_Word hlds__hlds_out__hlds_out_goal__PostDeathList_66;
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_339_339;
        MR_Word hlds__hlds_out__hlds_out_goal__PostDeaths_65;
        MR_Word hlds__hlds_out__hlds_out_goal__V_67_67;
        MR_Word hlds__hlds_out__hlds_out_goal__V_68_68;
        MR_Word hlds__hlds_out__hlds_out_goal__PostBirthList_70;
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_341_341;
        MR_Word hlds__hlds_out__hlds_out_goal__PostBirths_69;
        MR_Word hlds__hlds_out__hlds_out_goal__V_71_71;
        MR_Word hlds__hlds_out__hlds_out_goal__V_72_72;

        {
          hlds__hlds_out__hlds_out_goal__succeeded = hlds__hlds_llds__goal_info_maybe_get_post_deaths_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21, &hlds__hlds_out__hlds_out_goal__PostDeaths_65);
        }
        if (hlds__hlds_out__hlds_out_goal__succeeded)
          {
            hlds__hlds_out__hlds_out_goal__TypeCtorInfo_339_339 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            {
              hlds__hlds_out__hlds_out_goal__PostDeathList_66 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_339_339, hlds__hlds_out__hlds_out_goal__PostDeaths_65);
            }
            hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__PostDeathList_66)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__hlds_out__hlds_out_goal__succeeded)
              {
                hlds__hlds_out__hlds_out_goal__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PostDeathList_66, (MR_Integer) 0)));
                hlds__hlds_out__hlds_out_goal__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PostDeathList_66, (MR_Integer) 1)));
              }
          }
        if (hlds__hlds_out__hlds_out_goal__succeeded)
          {
            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% post-deaths: ");
            }
            {
              parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__PostDeathList_66);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
          }
        else
          {
          }
        {
          hlds__hlds_out__hlds_out_goal__succeeded = hlds__hlds_llds__goal_info_maybe_get_post_births_2_p_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21, &hlds__hlds_out__hlds_out_goal__PostBirths_69);
        }
        if (hlds__hlds_out__hlds_out_goal__succeeded)
          {
            hlds__hlds_out__hlds_out_goal__TypeCtorInfo_341_341 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            {
              hlds__hlds_out__hlds_out_goal__PostBirthList_70 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_341_341, hlds__hlds_out__hlds_out_goal__PostBirths_69);
            }
            hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__PostBirthList_70)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__hlds_out__hlds_out_goal__succeeded)
              {
                hlds__hlds_out__hlds_out_goal__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PostBirthList_70, (MR_Integer) 0)));
                hlds__hlds_out__hlds_out_goal__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__PostBirthList_70, (MR_Integer) 1)));
              }
          }
        if (hlds__hlds_out__hlds_out_goal__succeeded)
          {
            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% post-births: ");
            }
            {
              parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__PostBirthList_70);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
          }
        else
          {
          }
      }
    else
      {
      }
    {
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 82);
    }
    if (hlds__hlds_out__hlds_out_goal__succeeded)
      {
        MR_Word hlds__hlds_out__hlds_out_goal__ReuseDescription_75;
        MR_Word hlds__hlds_out__hlds_out_goal__ListLFU_76;
        MR_Word hlds__hlds_out__hlds_out_goal__ListLBU_77;
        MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_343_343;
        MR_Word hlds__hlds_out__hlds_out_goal__LFU_73;
        MR_Word hlds__hlds_out__hlds_out_goal__LBU_74;
        MR_Word hlds__hlds_out__hlds_out_goal__V_250_250;
        MR_Word hlds__hlds_out__hlds_out_goal__V_251_251;
        MR_Word hlds__hlds_out__hlds_out_goal__V_252_252;

        {
          hlds__hlds_out__hlds_out_goal__V_250_250 = hlds__hlds_goal__goal_info_get_maybe_lfu_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
        hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__V_250_250)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__hlds_out__hlds_out_goal__succeeded)
          {
            hlds__hlds_out__hlds_out_goal__LFU_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_250_250, (MR_Integer) 0)));
            {
              hlds__hlds_out__hlds_out_goal__V_251_251 = hlds__hlds_goal__goal_info_get_maybe_lbu_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
            }
            hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__V_251_251)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__hlds_out__hlds_out_goal__succeeded)
              {
                hlds__hlds_out__hlds_out_goal__LBU_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_251_251, (MR_Integer) 0)));
                {
                  hlds__hlds_out__hlds_out_goal__V_252_252 = hlds__hlds_goal__goal_info_get_maybe_reuse_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
                }
                hlds__hlds_out__hlds_out_goal__succeeded = ((MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__V_252_252)) == (MR_mktag((MR_Integer) 1)));
                if (hlds__hlds_out__hlds_out_goal__succeeded)
                  {
                    hlds__hlds_out__hlds_out_goal__ReuseDescription_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__V_252_252, (MR_Integer) 0)));
                    hlds__hlds_out__hlds_out_goal__TypeCtorInfo_343_343 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                    {
                      parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_343_343, hlds__hlds_out__hlds_out_goal__LFU_73, &hlds__hlds_out__hlds_out_goal__ListLFU_76);
                    }
                    {
                      parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_343_343, hlds__hlds_out__hlds_out_goal__LBU_74, &hlds__hlds_out__hlds_out_goal__ListLBU_77);
                    }
                    hlds__hlds_out__hlds_out_goal__succeeded = MR_TRUE;
                  }
              }
          }
        if (hlds__hlds_out__hlds_out_goal__succeeded)
          {
            MR_Word hlds__hlds_out__hlds_out_goal__TypeCtorInfo_344_344;

            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% LFU: ");
            }
            hlds__hlds_out__hlds_out_goal__TypeCtorInfo_344_344 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            {
              parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_344_344, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__ListLFU_76);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% LBU: ");
            }
            {
              parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0(hlds__hlds_out__hlds_out_goal__TypeCtorInfo_344_344, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__ListLBU_77);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% Reuse: ");
            }
            switch (MR_tag((MR_Word) hlds__hlds_out__hlds_out_goal__ReuseDescription_75)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(hlds__hlds_out__hlds_out_goal__ReuseDescription_75)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "no reuse info");
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "no possible reuse");
                      }
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__hlds_out__hlds_out_goal__Messages_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_out__hlds_out_goal__ReuseDescription_75, (MR_Integer) 0)));

                  {
                    mercury__io__write_string_3_p_0((MR_String) "missed (");
                  }
                  {
                    mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__hlds_out__hlds_out_goal__Messages_78, (MR_String) ", ", (MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_3[5]);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word hlds__hlds_out__hlds_out_goal__ShortReuseDescr_79 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_out__hlds_out_goal__ReuseDescription_75, (MR_Integer) 0)));

                  {
                    mercury__io__write_string_3_p_0((MR_String) "potential reuse (");
                  }
                  {
                    hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_p_0(hlds__hlds_out__hlds_out_goal__ShortReuseDescr_79, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word hlds__hlds_out__hlds_out_goal__ShortReuseDescr_299 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_out__hlds_out_goal__ReuseDescription_75, (MR_Integer) 0)));

                  {
                    mercury__io__write_string_3_p_0((MR_String) "reuse (");
                  }
                  {
                    hlds__hlds_out__hlds_out_goal__write_short_reuse_description_5_p_0(hlds__hlds_out__hlds_out_goal__ShortReuseDescr_299, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
                break;
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
          }
        else
          {
          }
      }
    else
      {
      }
    {
      hlds__hlds_out__hlds_out_goal__CodeGenInfo_80 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
    }
    if ((hlds__hlds_out__hlds_out_goal__CodeGenInfo_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_7_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__GoalInfo_21, hlds__hlds_out__hlds_out_goal__VarSet_13, hlds__hlds_out__hlds_out_goal__VarNamePrint_15, hlds__hlds_out__hlds_out_goal__Indent_16);
      }
    {
      hlds__hlds_out__hlds_out_goal__succeeded = mercury__string__contains_char_2_p_0(hlds__hlds_out__hlds_out_goal__DumpOptions_22, (MR_Char) 103);
    }
    if (hlds__hlds_out__hlds_out_goal__succeeded)
      {
        MR_Word hlds__hlds_out__hlds_out_goal__Features_82;
        MR_Word hlds__hlds_out__hlds_out_goal__FeatureList_83;

        {
          hlds__hlds_out__hlds_out_goal__Features_82 = hlds__hlds_goal__goal_info_get_features_1_f_0(hlds__hlds_out__hlds_out_goal__GoalInfo_21);
        }
        {
          mercury__set__to_sorted_list_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0, hlds__hlds_out__hlds_out_goal__Features_82, &hlds__hlds_out__hlds_out_goal__FeatureList_83);
        }
        if ((hlds__hlds_out__hlds_out_goal__FeatureList_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            {
              hlds__hlds_out__hlds_out_util__write_indent_3_p_0(hlds__hlds_out__hlds_out_goal__Indent_16);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "% Goal features:  ");
            }
            {
              mercury__io__write_3_p_0((MR_Word) &hlds__hlds_out__hlds_out_goal_scalar_common_1[1], ((MR_Box) (hlds__hlds_out__hlds_out_goal__FeatureList_83)));
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
          }
      }
    else
      {
      }
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_9_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__Info_10,
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_11,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_12,
  MR_Word hlds__hlds_out__hlds_out_goal__VarNamePrint_13,
  MR_Integer hlds__hlds_out__hlds_out_goal__Indent_14,
  MR_String hlds__hlds_out__hlds_out_goal__Follow_15,
  MR_Word hlds__hlds_out__hlds_out_goal__Goal_16)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;

    {
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_10, hlds__hlds_out__hlds_out_goal__ModuleInfo_11, hlds__hlds_out__hlds_out_goal__VarSet_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__hlds_out__hlds_out_goal__VarNamePrint_13, hlds__hlds_out__hlds_out_goal__Indent_14, hlds__hlds_out__hlds_out_goal__Follow_15, hlds__hlds_out__hlds_out_goal__Goal_16);
    }
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_goal__dump_goal_5_p_0(
  MR_Word hlds__hlds_out__hlds_out_goal__ModuleInfo_6,
  MR_Word hlds__hlds_out__hlds_out_goal__VarSet_7,
  MR_Word hlds__hlds_out__hlds_out_goal__Goal_8)
{
  {
    MR_bool hlds__hlds_out__hlds_out_goal__succeeded;
    MR_Word hlds__hlds_out__hlds_out_goal__Globals_10;
    MR_Word hlds__hlds_out__hlds_out_goal__Info_11;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__hlds_out__hlds_out_goal__ModuleInfo_6, &hlds__hlds_out__hlds_out_goal__Globals_10);
    }
    {
      hlds__hlds_out__hlds_out_goal__Info_11 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(hlds__hlds_out__hlds_out_goal__Globals_10, (MR_Integer) 1);
    }
    {
      hlds__hlds_out__hlds_out_goal__do_write_goal_10_p_0(hlds__hlds_out__hlds_out_goal__Info_11, hlds__hlds_out__hlds_out_goal__ModuleInfo_6, hlds__hlds_out__hlds_out_goal__VarSet_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 1, (MR_Integer) 0, (MR_String) "", hlds__hlds_out__hlds_out_goal__Goal_8);
    }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.hlds_out.hlds_out_goal. */
