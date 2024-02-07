/*
** Automatically generated from `hlds_out_goal.m'
** by the Mercury compiler,
** version rotd-2024-02-07
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
#include "term_int.mih"
#include "term_subst.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_ordering.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.error_msg_inst.mih"
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
#include "parse_tree.write_error_spec.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_mode.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "transform_hlds.ctgc.util.mih"




static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_goal__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_goal__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_goal__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_PseudoTypeInfo hlds__hlds_out__hlds_out_goal__hlds__hlds_out__hlds_out_goal__field_types_hlds_out_info_goal_0_0[7];

static const MR_ConstString hlds__hlds_out__hlds_out_goal__hlds__hlds_out__hlds_out_goal__field_names_hlds_out_info_goal_0_0[7];

static const MR_DuArgLocn hlds__hlds_out__hlds_out_goal__hlds__hlds_out__hlds_out_goal__field_locns_hlds_out_info_goal_0_0[7];

static const MR_DuFunctorDesc hlds__hlds_out__hlds_out_goal__hlds__hlds_out__hlds_out_goal__du_functor_desc_hlds_out_info_goal_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_goal__hlds__hlds_out__hlds_out_goal__du_stag_ordered_hlds_out_info_goal_0_0[1];

static const MR_DuPtagLayout hlds__hlds_out__hlds_out_goal__hlds__hlds_out__hlds_out_goal__du_ptag_ordered_hlds_out_info_goal_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_goal__hlds__hlds_out__hlds_out_goal__du_name_ordered_hlds_out_info_goal_0[1];

static const MR_Integer hlds__hlds_out__hlds_out_goal__hlds__hlds_out__hlds_out_goal__functor_number_map_hlds_out_info_goal_0[1];

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__write_goal_scope__2246__1_4_p_0(
  MR_Word HeadVar__1_371,
  MR_Word HeadVar__2_372);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__write_goal_scope__2236__1_4_p_0(
  MR_Word HeadVar__1_364,
  MR_Word HeadVar__2_365);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__write_goal_foreign_proc__1762__1_4_p_0(
  MR_Word HeadVar__1_106,
  MR_Word HeadVar__2_107);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__569__1_4_p_0(
  MR_String HeadVar__1_426,
  MR_Word HeadVar__2_427);

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
hlds__hlds_out__hlds_out_goal__new_var_inst_msg_to_string_3_f_0(
  MR_Word InfoGoal_5,
  MR_String IndentStr_6,
  MR_Word HeadVar__3_3);

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_goal__new_var_inst_to_string_3_f_0(
  MR_Word InfoGoal_5,
  MR_String IndentStr_6,
  MR_Word HeadVar__3_3);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_goal__write_case_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_case_7_p_0(
  MR_Word InfoGoal_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_Word Var_11,
  MR_Word Case_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_expr_7_p_0(
  MR_Word InfoGoal_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_String Follow_11,
  MR_Word GoalExpr_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_conj_7_p_0(
  MR_Word InfoGoal_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_String Follow_11,
  MR_Word GoalExpr_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_conj_9_p_0(
  MR_Word InfoGoal_10,
  MR_Word Stream_11,
  MR_Unsigned Indent_12,
  MR_String Follow_13,
  MR_String Separator_14,
  MR_Word Goal1_15,
  MR_Word Goals1_16);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_goal__write_cases_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_cases_7_p_0(
  MR_Word InfoGoal_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_Word Var_11,
  MR_Word CasesList_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_shorthand_7_p_0(
  MR_Word InfoGoal_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_String Follow_11,
  MR_Word GoalExpr_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_7_p_0(
  MR_Word STATE_VARIABLE_InfoGoal_0_54,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_String Follow_11,
  MR_Word GoalExpr_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_7_p_0(
  MR_Word InfoGoal_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_String Follow_11,
  MR_Word GoalExpr_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_negation_7_p_0(
  MR_Word InfoGoal_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_String Follow_11,
  MR_Word GoalExpr_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_switch_7_p_0(
  MR_Word InfoGoal_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_String Follow_11,
  MR_Word GoalExpr_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_plain_call_7_p_0(
  MR_Word InfoGoal_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_String Follow_11,
  MR_Word GoalExpr_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_7_p_0(
  MR_Word InfoGoal_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_Word MaybeType_11,
  MR_Word RHS_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_unify_7_p_0(
  MR_Word InfoGoal_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_String Follow_11,
  MR_Word GoalExpr_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_foreign_proc_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_foreign_proc_7_p_0(
  MR_Word InfoGoal_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_String Follow_11,
  MR_Word GoalExpr_12);

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_goal__foreign_args_to_string_8_f_0(
  MR_Word VarNameSrc_10,
  MR_Word VarNamePrint_11,
  MR_Word TypeVarSet_12,
  MR_Word InstVarSet_13,
  MR_String IndentStr_14,
  MR_String LParen_15,
  MR_String RParen_16,
  MR_Word Args_17);

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
hlds__hlds_out__hlds_out_goal__write_goal_generic_call_7_p_0(
  MR_Word InfoGoal_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_String Follow_11,
  MR_Word GoalExpr_12);

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
  MR_Unsigned Indent_7,
  MR_Word MaybeArgRegs_8);

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_goal__sym_name_and_args_to_string_4_f_0(
  MR_Word VarNameSrc_6,
  MR_Word VarNamePrint_7,
  MR_Word PredName_8,
  MR_Word ArgVars_9);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_unification_6_p_0(
  MR_Word InfoGoal_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_Word Unification_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_functor_and_submodes_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_functor_and_submodes_8_p_0(
  MR_Word InfoGoal_9,
  MR_Word Stream_10,
  MR_Unsigned Indent_11,
  MR_Word ConsId_12,
  MR_Word ArgVars_13,
  MR_Word ArgUnifyModes0_14);

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
  MR_Unsigned Indent_14);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_vars_6_p_0(
  MR_Word Stream_1,
  MR_Word VarNameSrc_2,
  MR_Word VarNamePrint_3,
  MR_Word HeadVar__4_4);

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_goal____Unify____hlds_out_info_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal____Compare____hlds_out_info_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_1[8][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_2[11][3];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_3[2][4];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_4[4][5];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_5[5][1];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_8[6][7];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_9[1][10];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_10[2][6];


struct hlds__hlds_out__hlds_out_goal__vector_common_type_6_0_s {
  const MR_String hlds__hlds_out__hlds_out_goal__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct hlds__hlds_out__hlds_out_goal__vector_common_type_6_0_s hlds__hlds_out__hlds_out_goal_vector_common_6[24];

struct hlds__hlds_out__hlds_out_goal__vector_common_type_7_0_s {
  const MR_Word hlds__hlds_out__hlds_out_goal__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct hlds__hlds_out__hlds_out_goal__vector_common_type_7_0_s hlds__hlds_out__hlds_out_goal_vector_common_7[5];



static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_1[8][2] = {
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
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[1])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[6]))
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
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__write_functor_and_submodes_8_p_0_1)),
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
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__write_goal_foreign_proc_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_8[4])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_8[5])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__write_goal_scope_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_8[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__write_goal_scope_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_4[3])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__write_cases_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_4[3])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__write_case_7_p_0_1)),
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

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_8[6][7] = {
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
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal__hlds__hlds_out__hlds_out_goal__type_ctor_info_hlds_out_info_goal_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__var_db__parse_tree__var_db__type_ctor_info_var_name_source_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   5 */
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

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_9[1][10] = {
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

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_10[2][6] = {
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

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_goal__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_goal__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_PseudoTypeInfo hlds__hlds_out__hlds_out_goal__hlds__hlds_out__hlds_out_goal__field_types_hlds_out_info_goal_0_0[7] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_db__parse_tree__var_db__type_ctor_info_var_name_source_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_out__hlds_out_goal__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_out__hlds_out_goal__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_type_qual_0)
};

static const MR_ConstString hlds__hlds_out__hlds_out_goal__hlds__hlds_out__hlds_out_goal__field_names_hlds_out_info_goal_0_0[7] = {
  (MR_String) "hoig_out_info",
  (MR_String) "hoig_module_info",
  (MR_String) "hoig_var_name_src",
  (MR_String) "hoig_var_name_print",
  (MR_String) "hoig_tvarset",
  (MR_String) "hoig_inst_varset",
  (MR_String) "hoig_type_qual"
};

static const MR_DuArgLocn hlds__hlds_out__hlds_out_goal__hlds__hlds_out__hlds_out_goal__field_locns_hlds_out_info_goal_0_0[7] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc hlds__hlds_out__hlds_out_goal__hlds__hlds_out__hlds_out_goal__du_functor_desc_hlds_out_info_goal_0_0 = {
  (MR_String) "hlds_out_info_goal",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_out__hlds_out_goal__hlds__hlds_out__hlds_out_goal__field_types_hlds_out_info_goal_0_0,
  hlds__hlds_out__hlds_out_goal__hlds__hlds_out__hlds_out_goal__field_names_hlds_out_info_goal_0_0,
  hlds__hlds_out__hlds_out_goal__hlds__hlds_out__hlds_out_goal__field_locns_hlds_out_info_goal_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_goal__hlds__hlds_out__hlds_out_goal__du_stag_ordered_hlds_out_info_goal_0_0[1] = { &hlds__hlds_out__hlds_out_goal__hlds__hlds_out__hlds_out_goal__du_functor_desc_hlds_out_info_goal_0_0 };

static const MR_DuPtagLayout hlds__hlds_out__hlds_out_goal__hlds__hlds_out__hlds_out_goal__du_ptag_ordered_hlds_out_info_goal_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_out__hlds_out_goal__hlds__hlds_out__hlds_out_goal__du_stag_ordered_hlds_out_info_goal_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_out__hlds_out_goal__hlds__hlds_out__hlds_out_goal__du_name_ordered_hlds_out_info_goal_0[1] = { &hlds__hlds_out__hlds_out_goal__hlds__hlds_out__hlds_out_goal__du_functor_desc_hlds_out_info_goal_0_0 };

static const MR_Integer hlds__hlds_out__hlds_out_goal__hlds__hlds_out__hlds_out_goal__functor_number_map_hlds_out_info_goal_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__hlds_out__hlds_out_goal__hlds__hlds_out__hlds_out_goal__type_ctor_info_hlds_out_info_goal_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_out__hlds_out_goal____Unify____hlds_out_info_goal_0_0_10001)),
  ((MR_Box) (hlds__hlds_out__hlds_out_goal____Compare____hlds_out_info_goal_0_0_10001)),
  (MR_String) "hlds.hlds_out.hlds_out_goal",
  (MR_String) "hlds_out_info_goal",
  { hlds__hlds_out__hlds_out_goal__hlds__hlds_out__hlds_out_goal__du_name_ordered_hlds_out_info_goal_0 },
  { hlds__hlds_out__hlds_out_goal__hlds__hlds_out__hlds_out_goal__du_ptag_ordered_hlds_out_info_goal_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_out__hlds_out_goal__hlds__hlds_out__hlds_out_goal__functor_number_map_hlds_out_info_goal_0,

};

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__write_goal_scope__2246__1_4_p_0(
  MR_Word HeadVar__1_371,
  MR_Word HeadVar__2_372)
{
  MR_Box conv0_HeadVar__4_374;

  parse_tree__parse_tree_out_clause__mercury_format_trace_runtime_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[1]), HeadVar__1_371, ((MR_Box) (HeadVar__2_372)), ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__4_374);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__write_goal_scope__2236__1_4_p_0(
  MR_Word HeadVar__1_364,
  MR_Word HeadVar__2_365)
{
  MR_Box conv0_HeadVar__4_367;

  parse_tree__parse_tree_out_clause__mercury_format_trace_compiletime_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[1]), HeadVar__1_364, ((MR_Box) (HeadVar__2_365)), ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__4_367);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__write_goal_foreign_proc__1762__1_4_p_0(
  MR_Word HeadVar__1_106,
  MR_Word HeadVar__2_107)
{
  MR_Box conv0_HeadVar__4_109;

  parse_tree__parse_tree_out_clause__mercury_format_trace_runtime_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[1]), HeadVar__1_106, ((MR_Box) (HeadVar__2_107)), ((MR_Box) ((MR_Integer) 0)), &conv0_HeadVar__4_109);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__569__1_4_p_0(
  MR_String HeadVar__1_426,
  MR_Word HeadVar__2_427)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  MR_Box conv1_HeadVar__4_429;

  func_0(((MR_Box) ((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[1]))), ((MR_Box) (HeadVar__1_426)), ((MR_Box) (HeadVar__2_427)), ((MR_Box) ((MR_Integer) 0)), &conv1_HeadVar__4_429);
}

void MR_CALL 
hlds__hlds_out__hlds_out_goal____Compare____hlds_out_info_goal_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_24 == CastY_25);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 3);
    MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 3);
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word SubResult1_6;

    hlds__hlds_out__hlds_out_util____Compare____hlds_out_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      hlds__hlds_module____Compare____module_info_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        parse_tree__var_db____Compare____var_name_source_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;
          MR_Integer Var_33 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_34 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_33 < Var_34);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_33 > Var_34);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[3]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[4]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
                parse_tree__var_table____Compare____type_qual_0_0(HeadVar__1_1, ArgX7_22, ArgY7_23);
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_out__hlds_out_goal____Unify____hlds_out_info_goal_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_22_22;
    MR_Word TypeInfo_23_23;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 3);
    MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 3);
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));

    succeeded = hlds__hlds_out__hlds_out_util____Unify____hlds_out_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = parse_tree__var_db____Unify____var_name_source_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
          {
            TypeInfo_22_22 = (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[3]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_23_23 = (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[4]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
                succeeded = parse_tree__var_table____Unify____type_qual_0_0(ArgX7_15, ArgY7_16);
            }
          }
        }
      }
    }
  }
  return succeeded;
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
      MR_hl_field(0, Var_14, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_10[0]));
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
          *Inst_6 = (MR_Word) (MR_mkword(3, &hlds__hlds_out__hlds_out_goal_scalar_common_1[7]));
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
              MR_hl_field(0, Var_64, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_10[1]));
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
          *Inst_6 = (MR_Word) (MR_mkword(3, &hlds__hlds_out__hlds_out_goal_scalar_common_1[7]));
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
              *Inst_6 = (MR_Word) (MR_mkword(3, &hlds__hlds_out__hlds_out_goal_scalar_common_1[7]));
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
              *Inst_6 = (MR_Word) (MR_mkword(3, &hlds__hlds_out__hlds_out_goal_scalar_common_1[7]));
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
                  MR_hl_field(0, Var_53, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_10[1]));
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
      MR_hl_field(0, Var_13, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_10[0]));
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
hlds__hlds_out__hlds_out_goal__new_var_inst_msg_to_string_3_f_0(
  MR_Word InfoGoal_5,
  MR_String IndentStr_6,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_String Str_9;
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_Word Inst_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
  MR_Word VarNameSrc_10 = ((MR_Word) ((MR_hl_field(0, InfoGoal_5, (MR_Integer) 2))));
  MR_Word VarNamePrint_11 = ((MR_Unsigned) ((MR_hl_field(0, InfoGoal_5, (MR_Integer) 3))) & (MR_Integer) 3);
  MR_String VarStr_12;
  MR_Word ModuleInfo_13;
  MR_Word TVarSet_14;
  MR_Word InstVarSet_15;
  MR_Word InstPieces_19;
  MR_Word InstLines_20;
  MR_Word Var_31;

  VarStr_12 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_10, VarNamePrint_11, Var_7);
  ModuleInfo_13 = ((MR_Word) ((MR_hl_field(0, InfoGoal_5, (MR_Integer) 1))));
  TVarSet_14 = ((MR_Word) ((MR_hl_field(0, InfoGoal_5, (MR_Integer) 4))));
  InstVarSet_15 = ((MR_Word) ((MR_hl_field(0, InfoGoal_5, (MR_Integer) 5))));
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) (TVarSet_14));
  }
  InstPieces_19 = hlds__error_msg_inst__error_msg_inst_9_f_0(ModuleInfo_13, InstVarSet_15, (MR_Integer) 1, Var_31, (MR_Integer) 1, (MR_Word) (MR_mkword(1, &hlds__hlds_out__hlds_out_goal_scalar_common_1[5])), (MR_Word) (MR_mkword(1, &hlds__hlds_out__hlds_out_goal_scalar_common_1[5])), (MR_Word) (MR_mkword(1, &hlds__hlds_out__hlds_out_goal_scalar_common_1[5])), Inst_8);
  InstLines_20 = parse_tree__write_error_spec__error_pieces_to_std_lines_1_f_0(InstPieces_19);
  succeeded = parse_tree__write_error_spec__do_lines_fit_in_n_code_points_2_p_0((MR_Integer) 40, InstLines_20);
  if (succeeded)
  {
    MR_String ShortInstStr_21;
    MR_String Var_82;
    MR_String Var_84;
    MR_String Var_85;
    MR_String Var_87;

    ShortInstStr_21 = parse_tree__write_error_spec__error_lines_to_one_line_string_1_f_0(InstLines_20);
    Var_82 = mercury__string__f_43_43_2_f_0(ShortInstStr_21, (MR_String) "\n");
    Var_84 = mercury__string__f_43_43_2_f_0((MR_String) " -> ", Var_82);
    Var_85 = mercury__string__f_43_43_2_f_0(VarStr_12, Var_84);
    Var_87 = mercury__string__f_43_43_2_f_0((MR_String) "%   ", Var_85);
    Str_9 = mercury__string__f_43_43_2_f_0(IndentStr_6, Var_87);
  }
  else
  {
    MR_String Prefix_22;
    MR_String LongInstStr_23;
    MR_String Var_89;
    MR_String Var_90;
    MR_String Var_92;

    Prefix_22 = mercury__string__f_43_43_2_f_0(IndentStr_6, (MR_String) "%   ");
    LongInstStr_23 = parse_tree__write_error_spec__error_lines_to_multi_line_string_2_f_0(Prefix_22, InstLines_20);
    Var_89 = mercury__string__f_43_43_2_f_0((MR_String) " ->\n", LongInstStr_23);
    Var_90 = mercury__string__f_43_43_2_f_0(VarStr_12, Var_89);
    Var_92 = mercury__string__f_43_43_2_f_0((MR_String) "%   ", Var_90);
    Str_9 = mercury__string__f_43_43_2_f_0(IndentStr_6, Var_92);
  }
  return Str_9;
}

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_goal__new_var_inst_to_string_3_f_0(
  MR_Word InfoGoal_5,
  MR_String IndentStr_6,
  MR_Word HeadVar__3_3)
{
  MR_String Str_9;
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_Word Inst_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
  MR_Word VarNameSrc_10 = ((MR_Word) ((MR_hl_field(0, InfoGoal_5, (MR_Integer) 2))));
  MR_Word VarNamePrint_11 = ((MR_Unsigned) ((MR_hl_field(0, InfoGoal_5, (MR_Integer) 3))) & (MR_Integer) 3);
  MR_String VarStr_12;
  MR_Word InstVarSet_13;
  MR_String InstStr_14;
  MR_String Var_38;
  MR_String Var_40;
  MR_String Var_41;
  MR_String Var_43;

  VarStr_12 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_10, VarNamePrint_11, Var_7);
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_13);
  InstStr_14 = parse_tree__parse_tree_out_inst__mercury_inst_to_string_3_f_0((MR_Integer) 1, InstVarSet_13, Inst_8);
  Var_38 = mercury__string__f_43_43_2_f_0(InstStr_14, (MR_String) "\n");
  Var_40 = mercury__string__f_43_43_2_f_0((MR_String) " -> ", Var_38);
  Var_41 = mercury__string__f_43_43_2_f_0(VarStr_12, Var_40);
  Var_43 = mercury__string__f_43_43_2_f_0((MR_String) "%   ", Var_41);
  Str_9 = mercury__string__f_43_43_2_f_0(IndentStr_6, Var_43);
  return Str_9;
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
hlds__hlds_out__hlds_out_goal__write_unify_rhs_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Word ModuleInfo_14,
  MR_Word VarNameSrc_15,
  MR_Word VarNamePrint_16,
  MR_Word TVarSet_17,
  MR_Word InstVarSet_18,
  MR_Unsigned Indent_19,
  MR_Word RHS_20)
{
  MR_Word InfoGoal_23;

  {
    InfoGoal_23 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InfoGoal_23, 0) = ((MR_Box) (Info_12));
    MR_hl_field(0, InfoGoal_23, 1) = ((MR_Box) (ModuleInfo_14));
    MR_hl_field(0, InfoGoal_23, 2) = ((MR_Box) (VarNameSrc_15));
    MR_hl_field(0, InfoGoal_23, 3) = (MR_Box) ((MR_Unsigned) (VarNamePrint_16));
    MR_hl_field(0, InfoGoal_23, 4) = ((MR_Box) (TVarSet_17));
    MR_hl_field(0, InfoGoal_23, 5) = ((MR_Box) (InstVarSet_18));
    MR_hl_field(0, InfoGoal_23, 6) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_7_p_0(InfoGoal_23, Stream_13, Indent_19, (MR_Word) ((MR_Unsigned) 0U), RHS_20);
}

void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_nl_12_p_0(
  MR_Word Info_13,
  MR_Word Stream_14,
  MR_Word ModuleInfo_15,
  MR_Word VarNameSrc_16,
  MR_Word VarNamePrint_17,
  MR_Word TVarSet_18,
  MR_Word InstVarSet_19,
  MR_Unsigned Indent_20,
  MR_String Follow_21,
  MR_Word Goal_22)
{
  MR_Word InfoGoal_28;

  {
    InfoGoal_28 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InfoGoal_28, 0) = ((MR_Box) (Info_13));
    MR_hl_field(0, InfoGoal_28, 1) = ((MR_Box) (ModuleInfo_15));
    MR_hl_field(0, InfoGoal_28, 2) = ((MR_Box) (VarNameSrc_16));
    MR_hl_field(0, InfoGoal_28, 3) = (MR_Box) ((MR_Unsigned) (VarNamePrint_17));
    MR_hl_field(0, InfoGoal_28, 4) = ((MR_Box) (TVarSet_18));
    MR_hl_field(0, InfoGoal_28, 5) = ((MR_Box) (InstVarSet_19));
    MR_hl_field(0, InfoGoal_28, 6) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0(InfoGoal_28, Stream_14, Indent_20, Follow_21, Goal_22);
  mercury__io__nl_3_p_0(Stream_14);
}

void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_12_p_0(
  MR_Word Info_13,
  MR_Word Stream_14,
  MR_Word ModuleInfo_15,
  MR_Word VarNameSrc_16,
  MR_Word VarNamePrint_17,
  MR_Word TVarSet_18,
  MR_Word InstVarSet_19,
  MR_Unsigned Indent_20,
  MR_String Follow_21,
  MR_Word Goal_22)
{
  MR_Word InfoGoal_25;

  {
    InfoGoal_25 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InfoGoal_25, 0) = ((MR_Box) (Info_13));
    MR_hl_field(0, InfoGoal_25, 1) = ((MR_Box) (ModuleInfo_15));
    MR_hl_field(0, InfoGoal_25, 2) = ((MR_Box) (VarNameSrc_16));
    MR_hl_field(0, InfoGoal_25, 3) = (MR_Box) ((MR_Unsigned) (VarNamePrint_17));
    MR_hl_field(0, InfoGoal_25, 4) = ((MR_Box) (TVarSet_18));
    MR_hl_field(0, InfoGoal_25, 5) = ((MR_Box) (InstVarSet_19));
    MR_hl_field(0, InfoGoal_25, 6) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0(InfoGoal_25, Stream_14, Indent_20, Follow_21, Goal_22);
}

void MR_CALL 
hlds__hlds_out__hlds_out_goal__dump_goal_nl_8_p_0(
  MR_Word Stream_9,
  MR_Word ModuleInfo_10,
  MR_Word VarNameSrc_11,
  MR_Word TVarSet_12,
  MR_Word InstVarSet_13,
  MR_Word Goal_14)
{
  hlds__hlds_out__hlds_out_goal__dump_goal_8_p_0(Stream_9, ModuleInfo_10, VarNameSrc_11, TVarSet_12, InstVarSet_13, Goal_14);
  mercury__io__nl_3_p_0(Stream_9);
}

void MR_CALL 
hlds__hlds_out__hlds_out_goal__dump_goal_8_p_0(
  MR_Word Stream_9,
  MR_Word ModuleInfo_10,
  MR_Word VarNameSrc_11,
  MR_Word TVarSet_12,
  MR_Word InstVarSet_13,
  MR_Word Goal_14)
{
  MR_Word Globals_16;
  MR_Word Info_17;
  MR_Word InfoGoal_20;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_10, &Globals_16);
  Info_17 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(Globals_16, (MR_Integer) 1);
  {
    InfoGoal_20 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InfoGoal_20, 0) = ((MR_Box) (Info_17));
    MR_hl_field(0, InfoGoal_20, 1) = ((MR_Box) (ModuleInfo_10));
    MR_hl_field(0, InfoGoal_20, 2) = ((MR_Box) (VarNameSrc_11));
    MR_hl_field(0, InfoGoal_20, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, InfoGoal_20, 4) = ((MR_Box) (TVarSet_12));
    MR_hl_field(0, InfoGoal_20, 5) = ((MR_Box) (InstVarSet_13));
    MR_hl_field(0, InfoGoal_20, 6) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0(InfoGoal_20, Stream_9, (MR_Unsigned) 0U, (MR_String) "", Goal_14);
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_goal__write_case_7_p_0_1(
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
hlds__hlds_out__hlds_out_goal__write_case_7_p_0(
  MR_Word InfoGoal_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_Word Var_11,
  MR_Word Case_12)
{
  MR_Word MainConsId_14 = ((MR_Word) ((MR_hl_field(0, Case_12, (MR_Integer) 0))));
  MR_Word OtherConsIds_15 = ((MR_Word) ((MR_hl_field(0, Case_12, (MR_Integer) 1))));
  MR_Word Goal_16 = ((MR_Word) ((MR_hl_field(0, Case_12, (MR_Integer) 2))));
  MR_String IndentStr_17;
  MR_Word VarNameSrc_18;
  MR_Word VarNamePrint_19;
  MR_String VarStr_20;
  MR_Word ConsIdStrs_21;
  MR_String ConsIdsStr_22;
  MR_Word Var_26;

  IndentStr_17 = libs__indent__indent2_string_1_f_0(Indent_10);
  VarNameSrc_18 = ((MR_Word) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 2))));
  VarNamePrint_19 = ((MR_Unsigned) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 3))) & (MR_Integer) 3);
  VarStr_20 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_18, VarNamePrint_19, Var_11);
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (MainConsId_14));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (OtherConsIds_15));
  }
  ConsIdStrs_21 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[10]), Var_26);
  ConsIdsStr_22 = mercury__string__join_list_2_f_0((MR_String) " or ", ConsIdStrs_21);
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_17);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% ");
  mercury__io__write_string_4_p_0(Stream_9, VarStr_20);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " has functor ");
  mercury__io__write_string_4_p_0(Stream_9, ConsIdsStr_22);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
  hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0(InfoGoal_8, Stream_9, Indent_10, (MR_String) "\n", Goal_16);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_expr_7_p_0(
  MR_Word InfoGoal_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_String Follow_11,
  MR_Word GoalExpr_12)
{
  switch (MR_tag((MR_Word) GoalExpr_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      hlds__hlds_out__hlds_out_goal__write_goal_negation_7_p_0(InfoGoal_8, Stream_9, Indent_10, Follow_11, GoalExpr_12);
      break;
    case (MR_Integer) 1:
      hlds__hlds_out__hlds_out_goal__write_goal_unify_7_p_0(InfoGoal_8, Stream_9, Indent_10, Follow_11, GoalExpr_12);
      break;
    case (MR_Integer) 2:
      hlds__hlds_out__hlds_out_goal__write_goal_plain_call_7_p_0(InfoGoal_8, Stream_9, Indent_10, Follow_11, GoalExpr_12);
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          hlds__hlds_out__hlds_out_goal__write_goal_generic_call_7_p_0(InfoGoal_8, Stream_9, Indent_10, Follow_11, GoalExpr_12);
          break;
        case (MR_Integer) 1:
          hlds__hlds_out__hlds_out_goal__write_goal_foreign_proc_7_p_0(InfoGoal_8, Stream_9, Indent_10, Follow_11, GoalExpr_12);
          break;
        case (MR_Integer) 2:
          hlds__hlds_out__hlds_out_goal__write_goal_conj_7_p_0(InfoGoal_8, Stream_9, Indent_10, Follow_11, GoalExpr_12);
          break;
        case (MR_Integer) 3:
          {
            MR_Word Disjuncts_53 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 1))));
            MR_String IndentStr_54;

            IndentStr_54 = libs__indent__indent2_string_1_f_0(Indent_10);
            if ((Disjuncts_53 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__io__write_string_4_p_0(Stream_9, IndentStr_54);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "fail");
              mercury__io__write_string_4_p_0(Stream_9, Follow_11);
            }
            else
            {
              MR_Word Goal_55 = ((MR_Word) ((MR_hl_field(1, Disjuncts_53, (MR_Integer) 0))));
              MR_Word Goals_56 = ((MR_Word) ((MR_hl_field(1, Disjuncts_53, (MR_Integer) 1))));
              MR_Unsigned Var_62;

              mercury__io__write_string_4_p_0(Stream_9, IndentStr_54);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "( % disjunction\n");
              Var_62 = (Indent_10 + (MR_Unsigned) 1U);
              hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0(InfoGoal_8, Stream_9, Var_62, (MR_String) "\n", Goal_55);
              hlds__hlds_out__hlds_out_goal__write_goal_list_7_p_0(InfoGoal_8, Stream_9, Indent_10, (MR_String) ";\n", Goals_56);
              mercury__io__write_string_4_p_0(Stream_9, IndentStr_54);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
              mercury__io__write_string_4_p_0(Stream_9, Follow_11);
            }
          }
          break;
        case (MR_Integer) 4:
          hlds__hlds_out__hlds_out_goal__write_goal_switch_7_p_0(InfoGoal_8, Stream_9, Indent_10, Follow_11, GoalExpr_12);
          break;
        case (MR_Integer) 5:
          hlds__hlds_out__hlds_out_goal__write_goal_scope_7_p_0(InfoGoal_8, Stream_9, Indent_10, Follow_11, GoalExpr_12);
          break;
        case (MR_Integer) 6:
          hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_7_p_0(InfoGoal_8, Stream_9, Indent_10, Follow_11, GoalExpr_12);
          break;
        case (MR_Integer) 7:
          hlds__hlds_out__hlds_out_goal__write_goal_shorthand_7_p_0(InfoGoal_8, Stream_9, Indent_10, Follow_11, GoalExpr_12);
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_conj_7_p_0(
  MR_Word InfoGoal_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_String Follow_11,
  MR_Word GoalExpr_12)
{
  MR_bool succeeded;
  MR_Word ConjType_14 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word List_15 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 2))));

  if ((List_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String ParStr_21;
    MR_String IndentStr_71;

    IndentStr_71 = libs__indent__indent2_string_1_f_0(Indent_10);
    switch (ConjType_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ParStr_21 = (MR_String) "/* parallel */";
        break;
      case (MR_Integer) 0:
        ParStr_21 = (MR_String) "";
        break;
    }
    mercury__io__write_string_4_p_0(Stream_9, IndentStr_71);
    mercury__io__write_string_4_p_0(Stream_9, ParStr_21);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "true");
    mercury__io__write_string_4_p_0(Stream_9, Follow_11);
  }
  else
  {
    MR_Word Goal_16 = ((MR_Word) ((MR_hl_field(1, List_15, (MR_Integer) 0))));
    MR_Word Goals_17 = ((MR_Word) ((MR_hl_field(1, List_15, (MR_Integer) 1))));

    switch (ConjType_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Unsigned Var_48;
          MR_String IndentStr_70;

          IndentStr_70 = libs__indent__indent2_string_1_f_0(Indent_10);
          mercury__io__write_string_4_p_0(Stream_9, IndentStr_70);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "( % parallel conjunction\n");
          Var_48 = (Indent_10 + (MR_Unsigned) 1U);
          hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0(InfoGoal_8, Stream_9, Var_48, (MR_String) "\n", Goal_16);
          hlds__hlds_out__hlds_out_goal__write_goal_list_7_p_0(InfoGoal_8, Stream_9, Indent_10, (MR_String) "&\n", Goals_17);
          mercury__io__write_string_4_p_0(Stream_9, IndentStr_70);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          mercury__io__write_string_4_p_0(Stream_9, Follow_11);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Info_18 = ((MR_Word) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 0))));
          MR_String DumpOptions_19 = ((MR_String) ((MR_hl_field(0, Info_18, (MR_Integer) 0))));

          succeeded = (strcmp(DumpOptions_19, (MR_String) "") == 0);
          if (succeeded)
            hlds__hlds_out__hlds_out_goal__write_conj_9_p_0(InfoGoal_8, Stream_9, Indent_10, Follow_11, (MR_String) ",\n", Goal_16, Goals_17);
          else
          {
            MR_String IndentStr_20;
            MR_Unsigned Var_31;

            IndentStr_20 = libs__indent__indent2_string_1_f_0(Indent_10);
            mercury__io__write_string_4_p_0(Stream_9, IndentStr_20);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "( % conjunction\n");
            Var_31 = (Indent_10 + (MR_Unsigned) 1U);
            hlds__hlds_out__hlds_out_goal__write_conj_9_p_0(InfoGoal_8, Stream_9, Var_31, (MR_String) "\n", (MR_String) ",\n", Goal_16, Goals_17);
            mercury__io__write_string_4_p_0(Stream_9, IndentStr_20);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
            mercury__io__write_string_4_p_0(Stream_9, Follow_11);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_conj_9_p_0(
  MR_Word InfoGoal_10,
  MR_Word Stream_11,
  MR_Unsigned Indent_12,
  MR_String Follow_13,
  MR_String Separator_14,
  MR_Word Goal1_15,
  MR_Word Goals1_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Goals1_16 == (MR_Word) ((MR_Unsigned) 0U)))
      hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0(InfoGoal_10, Stream_11, Indent_12, Follow_13, Goal1_15);
    else
    {
      MR_Word Goal2_18 = ((MR_Word) ((MR_hl_field(1, Goals1_16, (MR_Integer) 0))));
      MR_Word Goals2_19 = ((MR_Word) ((MR_hl_field(1, Goals1_16, (MR_Integer) 1))));
      MR_Word Info_20 = ((MR_Word) ((MR_hl_field(0, InfoGoal_10, (MR_Integer) 0))));
      MR_String DumpOptions_21 = ((MR_String) ((MR_hl_field(0, Info_20, (MR_Integer) 0))));
      MR_Word next_value_of_Goal1_15;
      MR_Word next_value_of_Goals1_16;

      succeeded = (strcmp(DumpOptions_21, (MR_String) "") == 0);
      if (succeeded)
        hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0(InfoGoal_10, Stream_11, Indent_12, Separator_14, Goal1_15);
      else
      {
        MR_String IndentStr_22;

        hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0(InfoGoal_10, Stream_11, Indent_12, (MR_String) "\n", Goal1_15);
        IndentStr_22 = libs__indent__indent2_string_1_f_0(Indent_12);
        mercury__io__write_string_4_p_0(Stream_11, IndentStr_22);
        mercury__io__write_string_4_p_0(Stream_11, Separator_14);
      }
      // direct tailcall eliminated
      ;
      next_value_of_Goal1_15 = Goal2_18;
      next_value_of_Goals1_16 = Goals2_19;
      Goal1_15 = next_value_of_Goal1_15;
      Goals1_16 = next_value_of_Goals1_16;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_goal__write_cases_7_p_0_1(
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
hlds__hlds_out__hlds_out_goal__write_cases_7_p_0(
  MR_Word InfoGoal_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_Word Var_11,
  MR_Word CasesList_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((CasesList_12 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Case_14 = ((MR_Word) ((MR_hl_field(1, CasesList_12, (MR_Integer) 0))));
      MR_Word Cases_15 = ((MR_Word) ((MR_hl_field(1, CasesList_12, (MR_Integer) 1))));
      MR_String IndentStr_16;
      MR_Unsigned Var_24;
      MR_Word MainConsId_29;
      MR_Word OtherConsIds_30;
      MR_Word Goal_31;
      MR_String IndentStr_32;
      MR_Word VarNameSrc_33;
      MR_Word VarNamePrint_34;
      MR_String VarStr_35;
      MR_Word ConsIdStrs_36;
      MR_String ConsIdsStr_37;
      MR_Word Var_39;
      MR_Word next_value_of_CasesList_12;

      IndentStr_16 = libs__indent__indent2_string_1_f_0(Indent_10);
      mercury__io__write_string_4_p_0(Stream_9, IndentStr_16);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
      Var_24 = (Indent_10 + (MR_Unsigned) 1U);
      MainConsId_29 = ((MR_Word) ((MR_hl_field(0, Case_14, (MR_Integer) 0))));
      OtherConsIds_30 = ((MR_Word) ((MR_hl_field(0, Case_14, (MR_Integer) 1))));
      Goal_31 = ((MR_Word) ((MR_hl_field(0, Case_14, (MR_Integer) 2))));
      IndentStr_32 = libs__indent__indent2_string_1_f_0(Var_24);
      VarNameSrc_33 = ((MR_Word) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 2))));
      VarNamePrint_34 = ((MR_Unsigned) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 3))) & (MR_Integer) 3);
      VarStr_35 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_33, VarNamePrint_34, Var_11);
      {
        Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_39, 0) = ((MR_Box) (MainConsId_29));
        MR_hl_field(1, Var_39, 1) = ((MR_Box) (OtherConsIds_30));
      }
      ConsIdStrs_36 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[9]), Var_39);
      ConsIdsStr_37 = mercury__string__join_list_2_f_0((MR_String) " or ", ConsIdStrs_36);
      mercury__io__write_string_4_p_0(Stream_9, IndentStr_32);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% ");
      mercury__io__write_string_4_p_0(Stream_9, VarStr_35);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) " has functor ");
      mercury__io__write_string_4_p_0(Stream_9, ConsIdsStr_37);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
      hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0(InfoGoal_8, Stream_9, Var_24, (MR_String) "\n", Goal_31);
      // direct tailcall eliminated
      ;
      next_value_of_CasesList_12 = Cases_15;
      CasesList_12 = next_value_of_CasesList_12;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_list_7_p_0(
  MR_Word InfoGoal_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_String Separator_11,
  MR_Word Goals_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((Goals_12 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word HeadGoal_14 = ((MR_Word) ((MR_hl_field(1, Goals_12, (MR_Integer) 0))));
      MR_Word TailGoals_15 = ((MR_Word) ((MR_hl_field(1, Goals_12, (MR_Integer) 1))));
      MR_Unsigned Var_20;
      MR_Word next_value_of_Goals_12;

      libs__indent__write_indent2_4_p_0(Stream_9, Indent_10);
      mercury__io__write_string_4_p_0(Stream_9, Separator_11);
      Var_20 = (Indent_10 + (MR_Unsigned) 1U);
      hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0(InfoGoal_8, Stream_9, Var_20, (MR_String) "\n", HeadGoal_14);
      // direct tailcall eliminated
      ;
      next_value_of_Goals_12 = TailGoals_15;
      Goals_12 = next_value_of_Goals_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_shorthand_7_p_0(
  MR_Word InfoGoal_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_String Follow_11,
  MR_Word GoalExpr_12)
{
  MR_Word ShortHand_14 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 1))));
  MR_String IndentStr_15;
  MR_Unsigned Indent1_16;

  IndentStr_15 = libs__indent__indent2_string_1_f_0(Indent_10);
  Indent1_16 = (Indent_10 + (MR_Unsigned) 1U);
  switch (MR_tag((MR_Word) ShortHand_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word GoalA_38 = ((MR_Word) ((MR_hl_field(0, ShortHand_14, (MR_Integer) 0))));
        MR_Word GoalB_39 = ((MR_Word) ((MR_hl_field(0, ShortHand_14, (MR_Integer) 1))));

        mercury__io__write_string_4_p_0(Stream_9, IndentStr_15);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "( % bi-implication\n");
        hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0(InfoGoal_8, Stream_9, Indent1_16, (MR_String) "\n", GoalA_38);
        mercury__io__write_string_4_p_0(Stream_9, IndentStr_15);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "<=>\n");
        hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0(InfoGoal_8, Stream_9, Indent1_16, (MR_String) "\n", GoalB_39);
        mercury__io__write_string_4_p_0(Stream_9, IndentStr_15);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
        mercury__io__write_string_4_p_0(Stream_9, Follow_11);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Outer_18 = ((MR_Word) ((MR_hl_field(1, ShortHand_14, (MR_Integer) 1))));
        MR_Word Inner_19 = ((MR_Word) ((MR_hl_field(1, ShortHand_14, (MR_Integer) 2))));
        MR_Word MaybeOutputVars_20 = ((MR_Word) ((MR_hl_field(1, ShortHand_14, (MR_Integer) 3))));
        MR_Word MainGoal_21 = ((MR_Word) ((MR_hl_field(1, ShortHand_14, (MR_Integer) 4))));
        MR_Word OrElseGoals_22 = ((MR_Word) ((MR_hl_field(1, ShortHand_14, (MR_Integer) 5))));
        MR_Word VarNameSrc_24 = ((MR_Word) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 2))));
        MR_Word VarNamePrint_25 = ((MR_Unsigned) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 3))) & (MR_Integer) 3);
        MR_String OuterStr_26;
        MR_String InnerStr_27;
        MR_String MaybeOutputVarsStr_28;

        OuterStr_26 = hlds__hlds_out__hlds_out_goal__atomic_interface_vars_to_string_4_f_0(VarNameSrc_24, VarNamePrint_25, (MR_String) "outer", Outer_18);
        InnerStr_27 = hlds__hlds_out__hlds_out_goal__atomic_interface_vars_to_string_4_f_0(VarNameSrc_24, VarNamePrint_25, (MR_String) "inner", Inner_19);
        if ((MaybeOutputVars_20 == (MR_Word) ((MR_Unsigned) 0U)))
          MaybeOutputVarsStr_28 = (MR_String) "no_vars";
        else
        {
          MR_Word OutputVars_29 = ((MR_Word) ((MR_hl_field(1, MaybeOutputVars_20, (MR_Integer) 0))));
          MR_String OutputVarsStr_30;
          MR_String Var_161;

          OutputVarsStr_30 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_24, VarNamePrint_25, OutputVars_29);
          Var_161 = mercury__string__f_43_43_2_f_0(OutputVarsStr_30, (MR_String) "])");
          MaybeOutputVarsStr_28 = mercury__string__f_43_43_2_f_0((MR_String) "vars([", Var_161);
        }
        mercury__io__write_string_4_p_0(Stream_9, IndentStr_15);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "atomic [");
        mercury__io__write_string_4_p_0(Stream_9, OuterStr_26);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
        mercury__io__write_string_4_p_0(Stream_9, InnerStr_27);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
        mercury__io__write_string_4_p_0(Stream_9, MaybeOutputVarsStr_28);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "] (\n");
        hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0(InfoGoal_8, Stream_9, Indent1_16, (MR_String) "\n", MainGoal_21);
        hlds__hlds_out__hlds_out_goal__write_goal_list_7_p_0(InfoGoal_8, Stream_9, Indent_10, (MR_String) "or_else\n", OrElseGoals_22);
        mercury__io__write_string_4_p_0(Stream_9, IndentStr_15);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
        mercury__io__write_string_4_p_0(Stream_9, Follow_11);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word MaybeIO_31 = ((MR_Word) ((MR_hl_field(2, ShortHand_14, (MR_Integer) 0))));
        MR_Word SubGoal_33 = ((MR_Word) ((MR_hl_field(2, ShortHand_14, (MR_Integer) 2))));

        mercury__io__write_string_4_p_0(Stream_9, IndentStr_15);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "( % try\n");
        if (!((MaybeIO_31 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word IOVarA_34;
          MR_Word IOVarB_35;
          MR_String Indent1Str_36;
          MR_String IOVarsStr_37;
          MR_Word Var_76 = ((MR_Word) ((MR_hl_field(1, MaybeIO_31, (MR_Integer) 0))));
          MR_Word Var_77;
          MR_Word Var_78;
          MR_Word VarNameSrc_117;
          MR_Word VarNamePrint_118;

          IOVarA_34 = ((MR_Word) ((MR_hl_field(0, Var_76, (MR_Integer) 0))));
          IOVarB_35 = ((MR_Word) ((MR_hl_field(0, Var_76, (MR_Integer) 1))));
          Indent1Str_36 = libs__indent__indent2_string_1_f_0(Indent1_16);
          VarNameSrc_117 = ((MR_Word) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 2))));
          VarNamePrint_118 = ((MR_Unsigned) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 3))) & (MR_Integer) 3);
          {
            Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_78, 0) = ((MR_Box) (IOVarB_35));
            MR_hl_field(1, Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_77, 0) = ((MR_Box) (IOVarA_34));
            MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_78));
          }
          IOVarsStr_37 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_117, VarNamePrint_118, Var_77);
          mercury__io__write_string_4_p_0(Stream_9, Indent1Str_36);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% io(");
          mercury__io__write_string_4_p_0(Stream_9, IOVarsStr_37);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")\n");
        }
        hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0(InfoGoal_8, Stream_9, Indent1_16, (MR_String) "\n", SubGoal_33);
        mercury__io__write_string_4_p_0(Stream_9, IndentStr_15);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
        mercury__io__write_string_4_p_0(Stream_9, Follow_11);
      }
      break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_AddCommaNewline_16;

  hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_AddCommaNewline_16);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_AddCommaNewline_16));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__write_goal_scope__2246__1_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__write_goal_scope__2236__1_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_scope_7_p_0(
  MR_Word STATE_VARIABLE_InfoGoal_0_54,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_String Follow_11,
  MR_Word GoalExpr_12)
{
  MR_Word Reason_14 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 1))));
  MR_Word Goal_15 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 2))));
  MR_String IndentStr_16;
  MR_Word STATE_VARIABLE_InfoGoal_135_135;
  MR_Unsigned Var_201;

  IndentStr_16 = libs__indent__indent2_string_1_f_0(Indent_10);
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_16);
  switch (MR_tag((MR_Word) Reason_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Vars_17 = ((MR_Word) ((MR_hl_field(0, Reason_14, (MR_Integer) 0))));
        MR_Word Creator_18 = ((MR_Unsigned) ((MR_hl_field(0, Reason_14, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_Word VarNameSrc_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_54, (MR_Integer) 2))));
        MR_Word VarNamePrint_20 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_54, (MR_Integer) 3))) & (MR_Integer) 3);
        MR_String VarsStr_21;
        MR_String CreatorStr_22;

        VarsStr_21 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_19, VarNamePrint_20, Vars_17);
        switch (Creator_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            CreatorStr_22 = (MR_String) "compiler";
            break;
          case (MR_Integer) 0:
            CreatorStr_22 = (MR_String) "user";
            break;
        }
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "some [");
        mercury__io__write_string_4_p_0(Stream_9, VarsStr_21);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "] ( % ");
        mercury__io__write_string_4_p_0(Stream_9, CreatorStr_22);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
        STATE_VARIABLE_InfoGoal_135_135 = STATE_VARIABLE_InfoGoal_0_54;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word HeadWarning_23 = ((MR_Unsigned) ((MR_hl_field(1, Reason_14, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Word TailWarnings_24 = ((MR_Word) ((MR_hl_field(1, Reason_14, (MR_Integer) 1))));
        MR_Box conv0_STATE_VARIABLE_IO_67_67;

        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "disable_warnings [");
        parse_tree__parse_tree_out_clause__mercury_format_goal_warnings_5_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[1]), ((MR_Box) (Stream_9)), HeadWarning_23, TailWarnings_24, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_67_67);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "] (\n");
        STATE_VARIABLE_InfoGoal_135_135 = STATE_VARIABLE_InfoGoal_0_54;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Kind_27 = ((MR_Unsigned) ((MR_hl_field(2, Reason_14, (MR_Integer) 1))) & (MR_Integer) 3);
        MR_String PromiseKindStr_28;
        MR_Word Vars_212 = ((MR_Word) ((MR_hl_field(2, Reason_14, (MR_Integer) 0))));
        MR_Word VarNameSrc_213 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_54, (MR_Integer) 2))));
        MR_Word VarNamePrint_214 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_54, (MR_Integer) 3))) & (MR_Integer) 3);
        MR_String VarsStr_215;

        VarsStr_215 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_213, VarNamePrint_214, Vars_212);
        switch (Kind_27) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            PromiseKindStr_28 = (MR_String) "promise_equivalent_solution_sets";
            break;
          case (MR_Integer) 2:
            PromiseKindStr_28 = (MR_String) "arbitrary";
            break;
          case (MR_Integer) 0:
            PromiseKindStr_28 = (MR_String) "promise_equivalent_solutions";
            break;
        }
        mercury__io__write_string_4_p_0(Stream_9, PromiseKindStr_28);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) " [");
        mercury__io__write_string_4_p_0(Stream_9, VarsStr_215);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "] (\n");
        STATE_VARIABLE_InfoGoal_135_135 = STATE_VARIABLE_InfoGoal_0_54;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Reason_14, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Purity_25 = ((MR_Unsigned) ((MR_hl_field(3, Reason_14, (MR_Integer) 1))) & (MR_Integer) 3);
            MR_String PromiseStr_26;

            switch (Purity_25) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                PromiseStr_26 = (MR_String) "promise_impure";
                break;
              case (MR_Integer) 0:
                PromiseStr_26 = (MR_String) "promise_pure";
                break;
              case (MR_Integer) 1:
                PromiseStr_26 = (MR_String) "promise_semipure";
                break;
            }
            mercury__io__write_string_4_p_0(Stream_9, PromiseStr_26);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " (\n");
            STATE_VARIABLE_InfoGoal_135_135 = STATE_VARIABLE_InfoGoal_0_54;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Detism_29 = ((MR_Unsigned) ((MR_hl_field(3, Reason_14, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_String ReqStr_30 = ((&hlds__hlds_out__hlds_out_goal_vector_common_6[8 + Detism_29]))->hlds__hlds_out__hlds_out_goal__vector_common_type_6_0__vct_6_f_0;

            mercury__io__write_string_4_p_0(Stream_9, ReqStr_30);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " (\n");
            STATE_VARIABLE_InfoGoal_135_135 = STATE_VARIABLE_InfoGoal_0_54;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_31 = ((MR_Word) ((MR_hl_field(3, Reason_14, (MR_Integer) 1))));
            MR_String VarStr_32;
            MR_Word VarNameSrc_216 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_54, (MR_Integer) 2))));
            MR_Word VarNamePrint_217 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_54, (MR_Integer) 3))) & (MR_Integer) 3);

            VarStr_32 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_216, VarNamePrint_217, Var_31);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "require_complete_switch [");
            mercury__io__write_string_4_p_0(Stream_9, VarStr_32);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "] (\n");
            STATE_VARIABLE_InfoGoal_135_135 = STATE_VARIABLE_InfoGoal_0_54;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word VarNameSrc_218 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_54, (MR_Integer) 2))));
            MR_Word VarNamePrint_219 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_54, (MR_Integer) 3))) & (MR_Integer) 3);
            MR_Word Detism_220 = ((MR_Unsigned) ((MR_hl_field(3, Reason_14, (MR_Integer) 2))) & (MR_Integer) 7);
            MR_String ReqStr_221 = ((&hlds__hlds_out__hlds_out_goal_vector_common_6[16 + Detism_220]))->hlds__hlds_out__hlds_out_goal__vector_common_type_6_0__vct_6_f_0;
            MR_Word Var_222 = ((MR_Word) ((MR_hl_field(3, Reason_14, (MR_Integer) 1))));
            MR_String VarStr_223;

            VarStr_223 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_218, VarNamePrint_219, Var_222);
            mercury__io__write_string_4_p_0(Stream_9, ReqStr_221);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " [");
            mercury__io__write_string_4_p_0(Stream_9, VarStr_223);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "] (\n");
            STATE_VARIABLE_InfoGoal_135_135 = STATE_VARIABLE_InfoGoal_0_54;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_387 = ((MR_Unsigned) ((MR_hl_field(3, Reason_14, (MR_Integer) 1))) & (MR_Integer) 1);

            switch (Var_387) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(\n");
                  libs__indent__write_indent2_4_p_0(Stream_9, Indent_10);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% commit(dont_force_pruning)\n");
                  STATE_VARIABLE_InfoGoal_135_135 = STATE_VARIABLE_InfoGoal_0_54;
                }
                break;
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(\n");
                  libs__indent__write_indent2_4_p_0(Stream_9, Indent_10);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% commit(force_pruning)\n");
                  STATE_VARIABLE_InfoGoal_135_135 = STATE_VARIABLE_InfoGoal_0_54;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Var_386 = ((MR_Unsigned) ((MR_hl_field(3, Reason_14, (MR_Integer) 1))) & (MR_Integer) 1);

            switch (Var_386) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(\n");
                  libs__indent__write_indent2_4_p_0(Stream_9, Indent_10);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% barrier(not_removable)\n");
                  STATE_VARIABLE_InfoGoal_135_135 = STATE_VARIABLE_InfoGoal_0_54;
                }
                break;
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(\n");
                  libs__indent__write_indent2_4_p_0(Stream_9, Indent_10);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% barrier(removable)\n");
                  STATE_VARIABLE_InfoGoal_135_135 = STATE_VARIABLE_InfoGoal_0_54;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_String KindStr_33;
            MR_String DumpOptionsBackup_34;
            MR_Word Var_134;
            MR_Word Var_137;
            MR_Word VarNameSrc_224 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_54, (MR_Integer) 2))));
            MR_Word VarNamePrint_225 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_54, (MR_Integer) 3))) & (MR_Integer) 3);
            MR_Word Kind_226 = ((MR_Unsigned) ((MR_hl_field(3, Reason_14, (MR_Integer) 2))) & (MR_Integer) 3);
            MR_Word Var_227 = ((MR_Word) ((MR_hl_field(3, Reason_14, (MR_Integer) 1))));
            MR_String VarStr_228;
            MR_Word Var_301;
            MR_Word Var_302;
            MR_Word Var_303;
            MR_Word Var_304;
            MR_Word Var_305;
            MR_Word Var_306;
            MR_Word Var_308;
            MR_Word Var_309;
            MR_Word Var_310;

            VarStr_228 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_224, VarNamePrint_225, Var_227);
            KindStr_33 = ((&hlds__hlds_out__hlds_out_goal_vector_common_6[4 + Kind_226]))->hlds__hlds_out__hlds_out_goal__vector_common_type_6_0__vct_6_f_0;
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(\n");
            mercury__io__write_string_4_p_0(Stream_9, IndentStr_16);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% from_ground_term [");
            mercury__io__write_string_4_p_0(Stream_9, VarStr_228);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
            mercury__io__write_string_4_p_0(Stream_9, KindStr_33);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "]\n");
            Var_134 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_54, (MR_Integer) 0))));
            Var_301 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_54, (MR_Integer) 1))));
            Var_302 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_54, (MR_Integer) 2))));
            Var_303 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_54, (MR_Integer) 3))) & (MR_Integer) 3);
            Var_304 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_54, (MR_Integer) 4))));
            Var_305 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_54, (MR_Integer) 5))));
            Var_306 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_54, (MR_Integer) 6))));
            DumpOptionsBackup_34 = ((MR_String) ((MR_hl_field(0, Var_134, (MR_Integer) 1))));
            Var_308 = ((MR_Word) ((MR_hl_field(0, Var_134, (MR_Integer) 2))));
            Var_309 = ((MR_Word) ((MR_hl_field(0, Var_134, (MR_Integer) 3))));
            Var_310 = ((MR_Word) ((MR_hl_field(0, Var_134, (MR_Integer) 4))));
            {
              Var_137 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_137, 0) = ((MR_Box) (DumpOptionsBackup_34));
              MR_hl_field(0, Var_137, 1) = ((MR_Box) (DumpOptionsBackup_34));
              MR_hl_field(0, Var_137, 2) = ((MR_Box) (Var_308));
              MR_hl_field(0, Var_137, 3) = ((MR_Box) (Var_309));
              MR_hl_field(0, Var_137, 4) = ((MR_Box) (Var_310));
            }
            {
              STATE_VARIABLE_InfoGoal_135_135 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_InfoGoal_135_135, 0) = ((MR_Box) (Var_137));
              MR_hl_field(0, STATE_VARIABLE_InfoGoal_135_135, 1) = ((MR_Box) (Var_301));
              MR_hl_field(0, STATE_VARIABLE_InfoGoal_135_135, 2) = ((MR_Box) (Var_302));
              MR_hl_field(0, STATE_VARIABLE_InfoGoal_135_135, 3) = (MR_Box) ((MR_Unsigned) (Var_303));
              MR_hl_field(0, STATE_VARIABLE_InfoGoal_135_135, 4) = ((MR_Box) (Var_304));
              MR_hl_field(0, STATE_VARIABLE_InfoGoal_135_135, 5) = ((MR_Box) (Var_305));
              MR_hl_field(0, STATE_VARIABLE_InfoGoal_135_135, 6) = ((MR_Box) (Var_306));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word MaybeCompileTime_35 = ((MR_Word) ((MR_hl_field(3, Reason_14, (MR_Integer) 1))));
            MR_Word MaybeRunTime_36 = ((MR_Word) ((MR_hl_field(3, Reason_14, (MR_Integer) 2))));
            MR_Word MaybeIO0_37 = ((MR_Word) ((MR_hl_field(3, Reason_14, (MR_Integer) 3))));
            MR_Word MutableVars0_38 = ((MR_Word) ((MR_hl_field(3, Reason_14, (MR_Integer) 4))));
            MR_Word QuantVars_39 = ((MR_Word) ((MR_hl_field(3, Reason_14, (MR_Integer) 5))));
            MR_String Indent1Str_41;
            MR_Word Lang_44;
            MR_Word MutableVars_46;
            MR_Unsigned Var_141;
            MR_Word STATE_VARIABLE_AddCommaNewline_152_152;
            MR_Word STATE_VARIABLE_AddCommaNewline_163_163;
            MR_Word Var_164;
            MR_Word Var_165;
            MR_Word STATE_VARIABLE_AddCommaNewline_174_174;
            MR_Word Var_175;
            MR_Word STATE_VARIABLE_AddCommaNewline_176_176;
            MR_Box conv5_STATE_VARIABLE_AddCommaNewline_176_176;
            MR_Box conv4_STATE_VARIABLE_IO_177_177;

            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "trace [\n");
            Var_141 = (Indent_10 + (MR_Unsigned) 1U);
            Indent1Str_41 = libs__indent__indent2_string_1_f_0(Var_141);
            if ((MaybeCompileTime_35 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_AddCommaNewline_152_152 = (MR_Integer) 0;
            else
            {
              MR_Word CompileTime_42 = ((MR_Word) ((MR_hl_field(1, MaybeCompileTime_35, (MR_Integer) 0))));
              MR_Box conv1_STATE_VARIABLE_IO_149_149;

              mercury__io__write_string_4_p_0(Stream_9, Indent1Str_41);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "compile_time(");
              parse_tree__parse_tree_out_clause__mercury_format_trace_expr_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_compiletime_0), (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[1]), ((MR_Box) (Stream_9)), (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[7]), CompileTime_42, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_149_149);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
              STATE_VARIABLE_AddCommaNewline_152_152 = (MR_Integer) 1;
            }
            if ((MaybeRunTime_36 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_AddCommaNewline_163_163 = STATE_VARIABLE_AddCommaNewline_152_152;
            else
            {
              MR_Word RunTime_43 = ((MR_Word) ((MR_hl_field(1, MaybeRunTime_36, (MR_Integer) 0))));
              MR_Box conv2_STATE_VARIABLE_IO_160_160;

              hlds__hlds_out__hlds_out_goal__maybe_add_comma_newline_4_p_0(Stream_9, STATE_VARIABLE_AddCommaNewline_152_152);
              mercury__io__write_string_4_p_0(Stream_9, Indent1Str_41);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "runtime(");
              parse_tree__parse_tree_out_clause__mercury_format_trace_expr_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0), (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[1]), ((MR_Box) (Stream_9)), (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[8]), RunTime_43, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_160_160);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
              STATE_VARIABLE_AddCommaNewline_163_163 = (MR_Integer) 1;
            }
            Var_165 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_54, (MR_Integer) 0))));
            Var_164 = ((MR_Word) ((MR_hl_field(0, Var_165, (MR_Integer) 4))));
            Lang_44 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Var_164);
            switch (Lang_44) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MutableVars_46 = MutableVars0_38;
                  if ((MaybeIO0_37 == (MR_Word) ((MR_Unsigned) 0U)))
                    STATE_VARIABLE_AddCommaNewline_174_174 = STATE_VARIABLE_AddCommaNewline_163_163;
                  else
                  {
                    MR_String IOStateVarName_47 = ((MR_String) ((MR_hl_field(1, MaybeIO0_37, (MR_Integer) 0))));

                    hlds__hlds_out__hlds_out_goal__maybe_add_comma_newline_4_p_0(Stream_9, STATE_VARIABLE_AddCommaNewline_163_163);
                    mercury__io__write_string_4_p_0(Stream_9, Indent1Str_41);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "io(!");
                    mercury__io__write_string_4_p_0(Stream_9, IOStateVarName_47);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
                    STATE_VARIABLE_AddCommaNewline_174_174 = (MR_Integer) 1;
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  MutableVars_46 = (MR_Word) ((MR_Unsigned) 0U);
                  STATE_VARIABLE_AddCommaNewline_174_174 = STATE_VARIABLE_AddCommaNewline_163_163;
                }
                break;
            }
            {
              Var_175 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_175, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_9[0]));
              MR_hl_field(0, Var_175, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__write_goal_scope_7_p_0_3));
              MR_hl_field(0, Var_175, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_175, 3) = ((MR_Box) (Stream_9));
              MR_hl_field(0, Var_175, 4) = ((MR_Box) (Indent1Str_41));
            }
            mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_175, MutableVars_46, ((MR_Box) (STATE_VARIABLE_AddCommaNewline_174_174)), &conv5_STATE_VARIABLE_AddCommaNewline_176_176, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_177_177);
            STATE_VARIABLE_AddCommaNewline_176_176 = ((MR_Word) (conv5_STATE_VARIABLE_AddCommaNewline_176_176));
            switch (STATE_VARIABLE_AddCommaNewline_176_176) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                mercury__io__nl_3_p_0(Stream_9);
                break;
            }
            switch (Lang_44) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_String QuantVarsStr_48;
                  MR_Word VarNameSrc_229 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_54, (MR_Integer) 2))));
                  MR_Word VarNamePrint_230 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_54, (MR_Integer) 3))) & (MR_Integer) 3);

                  QuantVarsStr_48 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_229, VarNamePrint_230, QuantVars_39);
                  mercury__io__write_string_4_p_0(Stream_9, Indent1Str_41);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% quantified vars [");
                  mercury__io__write_string_4_p_0(Stream_9, QuantVarsStr_48);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "]\n");
                }
                break;
              case (MR_Integer) 0:
                {
                }
                break;
            }
            libs__indent__write_indent2_4_p_0(Stream_9, Indent_10);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "] (\n");
            STATE_VARIABLE_InfoGoal_135_135 = STATE_VARIABLE_InfoGoal_0_54;
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word LCVar_49 = ((MR_Word) ((MR_hl_field(3, Reason_14, (MR_Integer) 1))));
            MR_Word LCSVar_50 = ((MR_Word) ((MR_hl_field(3, Reason_14, (MR_Integer) 2))));
            MR_Word UseParentStack_51 = ((MR_Unsigned) ((MR_hl_field(3, Reason_14, (MR_Integer) 3))) & (MR_Integer) 1);
            MR_String UseParentStackStr_52;
            MR_String LCVarsStr_53;
            MR_Word Var_189;
            MR_Word Var_190;
            MR_Word VarNameSrc_239;
            MR_Word VarNamePrint_240;

            switch (UseParentStack_51) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                UseParentStackStr_52 = (MR_String) "using_child_stack";
                break;
              case (MR_Integer) 0:
                UseParentStackStr_52 = (MR_String) "using_parent_stack_frame";
                break;
            }
            VarNameSrc_239 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_54, (MR_Integer) 2))));
            VarNamePrint_240 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_54, (MR_Integer) 3))) & (MR_Integer) 3);
            {
              Var_190 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_190, 0) = ((MR_Box) (LCSVar_50));
              MR_hl_field(1, Var_190, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_189 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_189, 0) = ((MR_Box) (LCVar_49));
              MR_hl_field(1, Var_189, 1) = ((MR_Box) (Var_190));
            }
            LCVarsStr_53 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_239, VarNamePrint_240, Var_189);
            mercury__io__write_string_4_p_0(Stream_9, IndentStr_16);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% loop_control_spawn_off_");
            mercury__io__write_string_4_p_0(Stream_9, UseParentStackStr_52);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            mercury__io__write_string_4_p_0(Stream_9, LCVarsStr_53);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") (\n");
            STATE_VARIABLE_InfoGoal_135_135 = STATE_VARIABLE_InfoGoal_0_54;
          }
          break;
      }
      break;
  }
  Var_201 = (Indent_10 + (MR_Unsigned) 1U);
  hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0(STATE_VARIABLE_InfoGoal_135_135, Stream_9, Var_201, (MR_String) "\n", Goal_15);
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_16);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
  mercury__io__write_string_4_p_0(Stream_9, Follow_11);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_if_then_else_7_p_0(
  MR_Word InfoGoal_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_String Follow_11,
  MR_Word GoalExpr_12)
{
  MR_bool succeeded;
  MR_Word Vars_14 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 1))));
  MR_Word Cond_15 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 2))));
  MR_Word Then_16 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 3))));
  MR_Word Else_17 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 4))));
  MR_String IndentStr_18;
  MR_String SomeVarsStr_19;
  MR_Unsigned Indent1_25;
  MR_Word Info_26;
  MR_String DumpOptions_27;
  MR_Unsigned ElseIndent_33;
  MR_Word Var_62;

  IndentStr_18 = libs__indent__indent2_string_1_f_0(Indent_10);
  if ((Vars_14 == (MR_Word) ((MR_Unsigned) 0U)))
    SomeVarsStr_19 = (MR_String) "";
  else
  {
    MR_Word VarNameSrc_22 = ((MR_Word) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 2))));
    MR_Word VarNamePrint_23 = ((MR_Unsigned) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 3))) & (MR_Integer) 3);
    MR_String VarsStr_24;
    MR_String Var_95;

    VarsStr_24 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_22, VarNamePrint_23, Vars_14);
    Var_95 = mercury__string__f_43_43_2_f_0(VarsStr_24, (MR_String) "]");
    SomeVarsStr_19 = mercury__string__f_43_43_2_f_0((MR_String) " some [", Var_95);
  }
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_18);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "( if");
  mercury__io__write_string_4_p_0(Stream_9, SomeVarsStr_19);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
  Indent1_25 = (Indent_10 + (MR_Unsigned) 1U);
  hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0(InfoGoal_8, Stream_9, Indent1_25, (MR_String) "\n", Cond_15);
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_18);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "then\n");
  hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0(InfoGoal_8, Stream_9, Indent1_25, (MR_String) "\n", Then_16);
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_18);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "else\n");
  Info_26 = ((MR_Word) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 0))));
  DumpOptions_27 = ((MR_String) ((MR_hl_field(0, Info_26, (MR_Integer) 0))));
  succeeded = (strcmp(DumpOptions_27, (MR_String) "") == 0);
  succeeded = !(succeeded);
  if (succeeded)
  {
    Var_62 = ((MR_Word) ((MR_hl_field(0, Else_17, (MR_Integer) 0))));
    succeeded = ((((MR_tag((MR_Word) Var_62)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_62, (MR_Integer) 0)))) == (MR_Integer) 6)));
    if (succeeded)
    {
    }
  }
  if (succeeded)
    ElseIndent_33 = Indent_10;
  else
    ElseIndent_33 = Indent1_25;
  hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0(InfoGoal_8, Stream_9, ElseIndent_33, (MR_String) "\n", Else_17);
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_18);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
  mercury__io__write_string_4_p_0(Stream_9, Follow_11);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_negation_7_p_0(
  MR_Word InfoGoal_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_String Follow_11,
  MR_Word GoalExpr_12)
{
  MR_Word Goal_14 = (MR_Word) ((MR_Word) (GoalExpr_12));
  MR_String IndentStr_15;
  MR_Unsigned Var_23;

  IndentStr_15 = libs__indent__indent2_string_1_f_0(Indent_10);
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_15);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "not (\n");
  Var_23 = (Indent_10 + (MR_Unsigned) 1U);
  hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0(InfoGoal_8, Stream_9, Var_23, (MR_String) "\n", Goal_14);
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_15);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
  mercury__io__write_string_4_p_0(Stream_9, Follow_11);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_switch_7_p_0(
  MR_Word InfoGoal_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_String Follow_11,
  MR_Word GoalExpr_12)
{
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 1))));
  MR_Word CanFail_15 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word CasesList_16 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 3))));
  MR_String IndentStr_17;
  MR_String CanFailStr_18;
  MR_Word VarNameSrc_19;
  MR_Word VarNamePrint_20;
  MR_String VarStr_21;
  MR_Unsigned Indent1_22;

  IndentStr_17 = libs__indent__indent2_string_1_f_0(Indent_10);
  CanFailStr_18 = parse_tree__parse_tree_out_misc__can_fail_to_string_1_f_0(CanFail_15);
  VarNameSrc_19 = ((MR_Word) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 2))));
  VarNamePrint_20 = ((MR_Unsigned) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 3))) & (MR_Integer) 3);
  VarStr_21 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_19, VarNamePrint_20, Var_14);
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_17);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "( % ");
  mercury__io__write_string_4_p_0(Stream_9, CanFailStr_18);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " switch on \140");
  mercury__io__write_string_4_p_0(Stream_9, VarStr_21);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\'\n");
  Indent1_22 = (Indent_10 + (MR_Unsigned) 1U);
  if ((CasesList_16 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mercury__io__write_string_4_p_0(Stream_9, IndentStr_17);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "fail\n");
  }
  else
  {
    MR_Word Case_23 = ((MR_Word) ((MR_hl_field(1, CasesList_16, (MR_Integer) 0))));
    MR_Word Cases_24 = ((MR_Word) ((MR_hl_field(1, CasesList_16, (MR_Integer) 1))));

    hlds__hlds_out__hlds_out_goal__write_case_7_p_0(InfoGoal_8, Stream_9, Indent1_22, Var_14, Case_23);
    hlds__hlds_out__hlds_out_goal__write_cases_7_p_0(InfoGoal_8, Stream_9, Indent_10, Var_14, Cases_24);
  }
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_17);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
  mercury__io__write_string_4_p_0(Stream_9, Follow_11);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_plain_call_7_p_0(
  MR_Word InfoGoal_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_String Follow_11,
  MR_Word GoalExpr_12)
{
  MR_bool succeeded;
  MR_Word PredId_14 = ((MR_Word) ((MR_hl_field(2, GoalExpr_12, (MR_Integer) 0))));
  MR_Integer ProcId_15 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_12, (MR_Integer) 1))));
  MR_Word ArgVars_16 = ((MR_Word) ((MR_hl_field(2, GoalExpr_12, (MR_Integer) 2))));
  MR_Word Builtin_17 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr_12, (MR_Integer) 3))) & (MR_Integer) 1);
  MR_Word MaybeUnifyContext_18 = ((MR_Word) ((MR_hl_field(2, GoalExpr_12, (MR_Integer) 4))));
  MR_Word PredName_19 = ((MR_Word) ((MR_hl_field(2, GoalExpr_12, (MR_Integer) 5))));
  MR_Word Info_20 = ((MR_Word) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 0))));
  MR_String DumpOptions_21 = ((MR_String) ((MR_hl_field(0, Info_20, (MR_Integer) 0))));
  MR_String IndentStr_22;
  MR_Word VarNameSrc_29;
  MR_Word VarNamePrint_30;
  MR_Word InParenArgVars_31;
  MR_String InParenArgVarsStr_33;
  MR_Word Var_128;

  IndentStr_22 = libs__indent__indent2_string_1_f_0(Indent_10);
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_21, (MR_Char) 98);
  if (succeeded)
    switch (Builtin_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__io__write_string_4_p_0(Stream_9, IndentStr_22);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% inline builtin\n");
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_22);
  VarNameSrc_29 = ((MR_Word) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 2))));
  VarNamePrint_30 = ((MR_Unsigned) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 3))) & (MR_Integer) 3);
  Var_128 = hlds__hlds_pred__invalid_pred_id_0_f_0();
  succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_14, Var_128);
  if (succeeded)
  {
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "");
    InParenArgVars_31 = ArgVars_16;
  }
  else
  {
    MR_Word PredInfo_27;
    MR_Word ModuleInfo_25 = ((MR_Word) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 1))));
    MR_Word PredIdTable_26;
    MR_Box conv0_PredInfo_27;

    hlds__hlds_module__module_info_get_pred_id_table_2_p_0(ModuleInfo_25, &PredIdTable_26);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable_26, ((MR_Box) (PredId_14)), &conv0_PredInfo_27);
    if (succeeded)
    {
      PredInfo_27 = ((MR_Word) (conv0_PredInfo_27));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Purity_28;
      MR_Word PredOrFunc_160;
      MR_String PrefixStr_161;

      PredOrFunc_160 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_27);
      hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_27, &Purity_28);
      PrefixStr_161 = parse_tree__parse_tree_out_misc__purity_prefix_to_string_1_f_0(Purity_28);
      mercury__io__write_string_4_p_0(Stream_9, PrefixStr_161);
      switch (PredOrFunc_160) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word LHSVar_32;
            MR_Box conv1_LHSVar_32;

            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), ArgVars_16, &InParenArgVars_31, &conv1_LHSVar_32);
            LHSVar_32 = ((MR_Word) (conv1_LHSVar_32));
            parse_tree__parse_tree_out_term__mercury_output_var_src_6_p_0(VarNameSrc_29, VarNamePrint_30, LHSVar_32, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = ");
          }
          break;
        case (MR_Integer) 0:
          InParenArgVars_31 = ArgVars_16;
          break;
      }
    }
    else
    {
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "CALL TO DELETED ");
      InParenArgVars_31 = ArgVars_16;
    }
  }
  InParenArgVarsStr_33 = hlds__hlds_out__hlds_out_goal__sym_name_and_args_to_string_4_f_0(VarNameSrc_29, VarNamePrint_30, PredName_19, InParenArgVars_31);
  mercury__io__write_string_4_p_0(Stream_9, InParenArgVarsStr_33);
  mercury__io__write_string_4_p_0(Stream_9, Follow_11);
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_21, (MR_Char) 108);
  if (succeeded)
  {
    MR_Integer PredNum_34;
    MR_Integer ProcNum_35;
    MR_String Var_137;
    MR_String Var_147;

    hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_14, &PredNum_34);
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_15, &ProcNum_35);
    mercury__io__write_string_4_p_0(Stream_9, IndentStr_22);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% pred id: ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[0]), PredNum_34, &Var_137);
    mercury__io__write_string_4_p_0(Stream_9, Var_137);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", proc id: ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[0]), ProcNum_35, &Var_147);
    mercury__io__write_string_4_p_0(Stream_9, Var_147);
    mercury__io__write_string_4_p_0(Stream_9, Follow_11);
    if (!((MaybeUnifyContext_18 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word CallUnifyContext_36 = ((MR_Word) ((MR_hl_field(1, MaybeUnifyContext_18, (MR_Integer) 0))));
      MR_Word TypeQual_37 = ((MR_Word) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 6))));
      MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, CallUnifyContext_36, (MR_Integer) 0))));
      MR_Word VarType_42;
      MR_Word RHS_43 = ((MR_Word) ((MR_hl_field(0, CallUnifyContext_36, (MR_Integer) 1))));
      MR_String VarStr_45;

      if ((TypeQual_37 == (MR_Word) ((MR_Unsigned) 0U)))
        VarType_42 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word VarTable_39 = ((MR_Word) ((MR_hl_field(1, TypeQual_37, (MR_Integer) 1))));
        MR_Word UniType_41;

        parse_tree__var_table__lookup_var_type_3_p_0(VarTable_39, Var_40, &UniType_41);
        {
          VarType_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, VarType_42, 0) = ((MR_Box) (UniType_41));
        }
      }
      VarStr_45 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_29, VarNamePrint_30, Var_40);
      mercury__io__write_string_4_p_0(Stream_9, IndentStr_22);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% unify context: ");
      mercury__io__write_string_4_p_0(Stream_9, VarStr_45);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = ");
      hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_7_p_0(InfoGoal_8, Stream_9, Indent_10, VarType_42, RHS_43);
      mercury__io__write_string_4_p_0(Stream_9, Follow_11);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_7_p_0(
  MR_Word InfoGoal_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_Word MaybeType_11,
  MR_Word RHS_12)
{
  MR_bool succeeded;
  MR_Word VarNameSrc_14 = ((MR_Word) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 2))));
  MR_Word VarNamePrint_15 = ((MR_Unsigned) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 3))) & (MR_Integer) 3);

  switch (MR_tag((MR_Word) RHS_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, RHS_12, (MR_Integer) 0))));

        parse_tree__parse_tree_out_term__mercury_output_var_src_6_p_0(VarNameSrc_14, VarNamePrint_15, Var_16, Stream_9);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ConsId0_17 = ((MR_Word) ((MR_hl_field(1, RHS_12, (MR_Integer) 0))));
        MR_Word IsExistConstruct_18 = ((MR_Unsigned) ((MR_hl_field(1, RHS_12, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_Word ArgVars_19 = ((MR_Word) ((MR_hl_field(1, RHS_12, (MR_Integer) 2))));
        MR_Word ConsId_24;
        MR_Word ModuleInfo_25;
        MR_String RHSStr_26;
        MR_Word SymName0_20;
        MR_Integer Arity_21;
        MR_Word TypeCtor_22;
        MR_Word Type_27;
        MR_Word TVarSet_28;
        MR_Word Var_63;

        succeeded = (IsExistConstruct_18 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = ((((MR_tag((MR_Word) ConsId0_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId0_17, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            SymName0_20 = ((MR_Word) ((MR_hl_field(3, ConsId0_17, (MR_Integer) 1))));
            Arity_21 = ((MR_Integer) ((MR_hl_field(3, ConsId0_17, (MR_Integer) 2))));
            TypeCtor_22 = ((MR_Word) ((MR_hl_field(3, ConsId0_17, (MR_Integer) 3))));
          }
        }
        if (succeeded)
        {
          MR_Word SymName_23;

          parse_tree__prog_type__add_new_prefix_2_p_0(SymName0_20, &SymName_23);
          {
            ConsId_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, ConsId_24, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, ConsId_24, 1) = ((MR_Box) (SymName_23));
            MR_hl_field(3, ConsId_24, 2) = ((MR_Box) (Arity_21));
            MR_hl_field(3, ConsId_24, 3) = ((MR_Box) (TypeCtor_22));
          }
        }
        else
          ConsId_24 = ConsId0_17;
        ModuleInfo_25 = ((MR_Word) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 1))));
        RHSStr_26 = hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(ModuleInfo_25, VarNameSrc_14, VarNamePrint_15, ConsId_24, ArgVars_19);
        mercury__io__write_string_4_p_0(Stream_9, RHSStr_26);
        succeeded = (MaybeType_11 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Type_27 = ((MR_Word) ((MR_hl_field(1, MaybeType_11, (MR_Integer) 0))));
          Var_63 = ((MR_Word) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 6))));
          succeeded = (Var_63 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            TVarSet_28 = ((MR_Word) ((MR_hl_field(1, Var_63, (MR_Integer) 0))));
        }
        if (succeeded)
        {
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) " : ");
          parse_tree__parse_tree_out_type__mercury_output_type_6_p_0(TVarSet_28, VarNamePrint_15, Type_27, Stream_9);
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Purity_30 = ((((MR_Unsigned) ((MR_hl_field(2, RHS_12, (MR_Integer) 0))) >> 2)) & (MR_Integer) 3);
        MR_Word Groundness_31 = ((((MR_Unsigned) ((MR_hl_field(2, RHS_12, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
        MR_Word PredOrFunc_32 = ((MR_Unsigned) ((MR_hl_field(2, RHS_12, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word NonLocals_34 = ((MR_Word) ((MR_hl_field(2, RHS_12, (MR_Integer) 2))));
        MR_Word VarsModes_35 = ((MR_Word) ((MR_hl_field(2, RHS_12, (MR_Integer) 3))));
        MR_Word Det_36 = ((MR_Unsigned) ((MR_hl_field(2, RHS_12, (MR_Integer) 4))) & (MR_Integer) 7);
        MR_Word Goal_37 = ((MR_Word) ((MR_hl_field(2, RHS_12, (MR_Integer) 5))));
        MR_String IndentStr_38;
        MR_Unsigned Indent1_39;
        MR_Word Info_40;
        MR_Word Lang_41;
        MR_String DumpOptions_55;
        MR_String Var_68;
        MR_Word Var_70;
        MR_Word Type_140;
        MR_Word TVarSet_141;
        MR_Word Var_125;

        IndentStr_38 = libs__indent__indent2_string_1_f_0(Indent_10);
        Indent1_39 = (Indent_10 + (MR_Unsigned) 1U);
        Var_68 = parse_tree__parse_tree_out_misc__purity_prefix_to_string_1_f_0(Purity_30);
        mercury__io__write_string_4_p_0(Stream_9, Var_68);
        Info_40 = ((MR_Word) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 0))));
        Var_70 = ((MR_Word) ((MR_hl_field(0, Info_40, (MR_Integer) 4))));
        Lang_41 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Var_70);
        switch (Groundness_31) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            switch (PredOrFunc_32) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word ArgVarsModes_48;
                  MR_Word RetVarMode_49;
                  MR_String RetModeStr_53;
                  MR_Word InstVarSet_138;
                  MR_String DetStr_139;
                  MR_Box conv0_RetVarMode_49;

                  parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[2]), VarsModes_35, &ArgVarsModes_48, &conv0_RetVarMode_49);
                  RetVarMode_49 = ((MR_Word) (conv0_RetVarMode_49));
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                  InstVarSet_138 = ((MR_Word) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 5))));
                  if ((ArgVarsModes_48 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "any_func");
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
                  }
                  else
                  {
                    MR_String ArgModesStr_52;

                    ArgModesStr_52 = hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0(Lang_41, VarNameSrc_14, InstVarSet_138, VarNamePrint_15, ArgVarsModes_48);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "any_func");
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                    mercury__io__write_string_4_p_0(Stream_9, ArgModesStr_52);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
                  }
                  RetModeStr_53 = hlds__hlds_out__hlds_out_util__var_mode_to_string_5_f_0(Lang_41, VarNameSrc_14, InstVarSet_138, VarNamePrint_15, RetVarMode_49);
                  DetStr_139 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_36);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = (");
                  mercury__io__write_string_4_p_0(Stream_9, RetModeStr_53);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") is ");
                  mercury__io__write_string_4_p_0(Stream_9, DetStr_139);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " :-\n");
                  hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0(InfoGoal_8, Stream_9, Indent1_39, (MR_String) "\n", Goal_37);
                  mercury__io__write_string_4_p_0(Stream_9, IndentStr_38);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_String DetStr_47;

                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                  if ((VarsModes_35 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "any_pred");
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
                  }
                  else
                  {
                    MR_Word InstVarSet_45 = ((MR_Word) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 5))));
                    MR_String ModesStr_46;

                    ModesStr_46 = hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0(Lang_41, VarNameSrc_14, InstVarSet_45, VarNamePrint_15, VarsModes_35);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "any_pred");
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                    mercury__io__write_string_4_p_0(Stream_9, ModesStr_46);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
                  }
                  DetStr_47 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_36);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " is ");
                  mercury__io__write_string_4_p_0(Stream_9, DetStr_47);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " :-\n");
                  hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0(InfoGoal_8, Stream_9, Indent1_39, (MR_String) "\n", Goal_37);
                  mercury__io__write_string_4_p_0(Stream_9, IndentStr_38);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
                }
                break;
            }
            break;
          case (MR_Integer) 0:
            switch (PredOrFunc_32) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word ArgVarsModes_233;
                  MR_Word RetVarMode_234;
                  MR_String RetModeStr_238;
                  MR_Word InstVarSet_266;
                  MR_String DetStr_267;
                  MR_Box conv1_RetVarMode_234;

                  parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[2]), VarsModes_35, &ArgVarsModes_233, &conv1_RetVarMode_234);
                  RetVarMode_234 = ((MR_Word) (conv1_RetVarMode_234));
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                  InstVarSet_266 = ((MR_Word) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 5))));
                  if ((ArgVarsModes_233 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "func");
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
                  }
                  else
                  {
                    MR_String ArgModesStr_213;

                    ArgModesStr_213 = hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0(Lang_41, VarNameSrc_14, InstVarSet_266, VarNamePrint_15, ArgVarsModes_233);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "func");
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                    mercury__io__write_string_4_p_0(Stream_9, ArgModesStr_213);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
                  }
                  RetModeStr_238 = hlds__hlds_out__hlds_out_util__var_mode_to_string_5_f_0(Lang_41, VarNameSrc_14, InstVarSet_266, VarNamePrint_15, RetVarMode_234);
                  DetStr_267 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_36);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = (");
                  mercury__io__write_string_4_p_0(Stream_9, RetModeStr_238);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") is ");
                  mercury__io__write_string_4_p_0(Stream_9, DetStr_267);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " :-\n");
                  hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0(InfoGoal_8, Stream_9, Indent1_39, (MR_String) "\n", Goal_37);
                  mercury__io__write_string_4_p_0(Stream_9, IndentStr_38);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_String DetStr_328;

                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                  if ((VarsModes_35 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "pred");
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
                  }
                  else
                  {
                    MR_Word InstVarSet_289 = ((MR_Word) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 5))));
                    MR_String ModesStr_290;

                    ModesStr_290 = hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0(Lang_41, VarNameSrc_14, InstVarSet_289, VarNamePrint_15, VarsModes_35);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "pred");
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                    mercury__io__write_string_4_p_0(Stream_9, ModesStr_290);
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
                  }
                  DetStr_328 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_36);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " is ");
                  mercury__io__write_string_4_p_0(Stream_9, DetStr_328);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " :-\n");
                  hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0(InfoGoal_8, Stream_9, Indent1_39, (MR_String) "\n", Goal_37);
                  mercury__io__write_string_4_p_0(Stream_9, IndentStr_38);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
                }
                break;
            }
            break;
        }
        succeeded = (MaybeType_11 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Type_140 = ((MR_Word) ((MR_hl_field(1, MaybeType_11, (MR_Integer) 0))));
          Var_125 = ((MR_Word) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 6))));
          succeeded = (Var_125 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            TVarSet_141 = ((MR_Word) ((MR_hl_field(1, Var_125, (MR_Integer) 0))));
        }
        if (succeeded)
        {
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) " : ");
          parse_tree__parse_tree_out_type__mercury_output_type_6_p_0(TVarSet_141, VarNamePrint_15, Type_140, Stream_9);
        }
        DumpOptions_55 = ((MR_String) ((MR_hl_field(0, Info_40, (MR_Integer) 0))));
        succeeded = mercury__string__contains_char_2_p_0(DumpOptions_55, (MR_Char) 110);
        if (succeeded)
          if (!((NonLocals_34 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            MR_String NonLocalsStr_58;

            NonLocalsStr_58 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_14, VarNamePrint_15, NonLocals_34);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
            mercury__io__write_string_4_p_0(Stream_9, IndentStr_38);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% lambda nonlocals: ");
            mercury__io__write_string_4_p_0(Stream_9, NonLocalsStr_58);
          }
      }
      break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_unify_7_p_0(
  MR_Word InfoGoal_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_String Follow_11,
  MR_Word GoalExpr_12)
{
  MR_bool succeeded;
  MR_Word LHS_14 = ((MR_Word) ((MR_hl_field(1, GoalExpr_12, (MR_Integer) 0))));
  MR_Word RHS_15 = ((MR_Word) ((MR_hl_field(1, GoalExpr_12, (MR_Integer) 1))));
  MR_Word Unification_17 = ((MR_Word) ((MR_hl_field(1, GoalExpr_12, (MR_Integer) 3))));
  MR_Word Info_19 = ((MR_Word) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 0))));
  MR_String DumpOptions_20 = ((MR_String) ((MR_hl_field(0, Info_19, (MR_Integer) 0))));
  MR_String IndentStr_21;
  MR_Word VarNameSrc_22;
  MR_Word VarNamePrint_23;
  MR_String LHSStr_24;
  MR_Word TypeQual_25;
  MR_Word VarType_29;

  IndentStr_21 = libs__indent__indent2_string_1_f_0(Indent_10);
  VarNameSrc_22 = ((MR_Word) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 2))));
  VarNamePrint_23 = ((MR_Unsigned) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 3))) & (MR_Integer) 3);
  LHSStr_24 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_22, VarNamePrint_23, LHS_14);
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_21);
  mercury__io__write_string_4_p_0(Stream_9, LHSStr_24);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = ");
  TypeQual_25 = ((MR_Word) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 6))));
  if ((TypeQual_25 == (MR_Word) ((MR_Unsigned) 0U)))
    VarType_29 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word VarTable_27 = ((MR_Word) ((MR_hl_field(1, TypeQual_25, (MR_Integer) 1))));
    MR_Word UniType_28;

    parse_tree__var_table__lookup_var_type_3_p_0(VarTable_27, LHS_14, &UniType_28);
    {
      VarType_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, VarType_29, 0) = ((MR_Box) (UniType_28));
    }
  }
  hlds__hlds_out__hlds_out_goal__write_unify_rhs_2_7_p_0(InfoGoal_8, Stream_9, Indent_10, VarType_29, RHS_15);
  mercury__io__write_string_4_p_0(Stream_9, Follow_11);
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_20, (MR_Char) 117);
  if (!(succeeded))
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_20, (MR_Char) 112);
  if (succeeded)
  {
    MR_Word ComplMode_30;
    MR_Word CanFail_31;
    MR_Word TypeInfoVars_32;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;

    succeeded = ((((MR_tag((MR_Word) Unification_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Unification_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      ComplMode_30 = ((MR_Word) ((MR_hl_field(3, Unification_17, (MR_Integer) 1))));
      CanFail_31 = ((MR_Unsigned) ((MR_hl_field(3, Unification_17, (MR_Integer) 2))) & (MR_Integer) 1);
      TypeInfoVars_32 = ((MR_Word) ((MR_hl_field(3, Unification_17, (MR_Integer) 3))));
      succeeded = (CanFail_31 == (MR_Integer) 0);
      if (succeeded)
      {
        Var_46 = ((MR_Word) ((MR_hl_field(0, ComplMode_30, (MR_Integer) 0))));
        Var_47 = ((MR_Word) ((MR_hl_field(0, ComplMode_30, (MR_Integer) 1))));
        Var_48 = ((MR_Word) ((MR_hl_field(0, ComplMode_30, (MR_Integer) 2))));
        Var_49 = ((MR_Word) ((MR_hl_field(0, ComplMode_30, (MR_Integer) 3))));
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
          succeeded = (TypeInfoVars_32 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (!(succeeded))
    {
      succeeded = mercury__string__contains_char_2_p_0(Follow_11, (MR_Char) 10);
      if (!(succeeded))
        mercury__io__nl_3_p_0(Stream_9);
      hlds__hlds_out__hlds_out_goal__write_unification_6_p_0(InfoGoal_8, Stream_9, Indent_10, Unification_17);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__do_write_goal__569__1_4_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv4_HeadVar__4_4;

  conv4_HeadVar__4_4 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__4_4));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mercury__io__write_string_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv2_Str_9;

  conv2_Str_9 = hlds__hlds_out__hlds_out_goal__new_var_inst_to_string_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_Str_9));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mercury__io__write_string_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_Str_9;

  conv0_Str_9 = hlds__hlds_out__hlds_out_goal__new_var_inst_msg_to_string_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Str_9));
  return wrapper_arg_2;
}

void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0(
  MR_Word InfoGoal_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_String Follow_11,
  MR_Word Goal_12)
{
  MR_bool succeeded;
  MR_String IndentStr_14;
  MR_Word GoalExpr_15;
  MR_Word GoalInfo_16;
  MR_Word Info_17;
  MR_String DumpOptions_18;
  MR_Word VarNameSrc_27;
  MR_Word VarNamePrint_28;
  MR_Word CodeGenInfo_102;

  IndentStr_14 = libs__indent__indent2_string_1_f_0(Indent_10);
  GoalExpr_15 = ((MR_Word) ((MR_hl_field(0, Goal_12, (MR_Integer) 0))));
  GoalInfo_16 = ((MR_Word) ((MR_hl_field(0, Goal_12, (MR_Integer) 1))));
  Info_17 = ((MR_Word) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 0))));
  DumpOptions_18 = ((MR_String) ((MR_hl_field(0, Info_17, (MR_Integer) 0))));
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_18, (MR_Char) 99);
  if (succeeded)
  {
    MR_Word Context_19;

    Context_19 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_16);
    hlds__hlds_out__hlds_out_util__maybe_output_context_comment_6_p_0(Stream_9, Indent_10, (MR_String) "", Context_19);
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_18, (MR_Char) 80);
  if (succeeded)
  {
    MR_Word GoalId_20;

    GoalId_20 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_16);
    succeeded = mdbcomp__goal_path__is_valid_goal_id_1_p_0(GoalId_20);
    if (succeeded)
    {
      MR_Unsigned GoalIdNum_21 = (MR_Unsigned) (GoalId_20);
      MR_String Var_439;

      mercury__io__write_string_4_p_0(Stream_9, IndentStr_14);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% goal id: ");
      mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[0]), (MR_Integer) 1, GoalIdNum_21, &Var_439);
      mercury__io__write_string_4_p_0(Stream_9, Var_439);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
    }
  }
  VarNameSrc_27 = ((MR_Word) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 2))));
  VarNamePrint_28 = ((MR_Unsigned) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 3))) & (MR_Integer) 3);
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_18, (MR_Char) 110);
  if (succeeded)
  {
    MR_Word NonLocalsSet_22;
    MR_Word NonLocalsList_23;

    NonLocalsSet_22 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_16);
    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsSet_22, &NonLocalsList_23);
    if (!((NonLocalsList_23 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String NonLocalsStr_26;

      NonLocalsStr_26 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_27, VarNamePrint_28, NonLocalsList_23);
      mercury__io__write_string_4_p_0(Stream_9, IndentStr_14);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% nonlocals: ");
      mercury__io__write_string_4_p_0(Stream_9, NonLocalsStr_26);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
    }
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_18, (MR_Char) 112);
  if (succeeded)
  {
    MR_Word PreDeathList_30;
    MR_Word TypeCtorInfo_390_390;
    MR_Word PreDeaths_29;
    MR_Word PreBirthList_35;
    MR_Word TypeCtorInfo_391_391;
    MR_Word PreBirths_34;

    succeeded = hlds__hlds_llds__goal_info_maybe_get_pre_deaths_2_p_0(GoalInfo_16, &PreDeaths_29);
    if (succeeded)
    {
      TypeCtorInfo_390_390 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
      PreDeathList_30 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_390_390, PreDeaths_29);
      succeeded = (PreDeathList_30 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_String PreDeathStr_33;

      PreDeathStr_33 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_27, VarNamePrint_28, PreDeathList_30);
      mercury__io__write_string_4_p_0(Stream_9, IndentStr_14);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% pre-deaths: ");
      mercury__io__write_string_4_p_0(Stream_9, PreDeathStr_33);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
    }
    succeeded = hlds__hlds_llds__goal_info_maybe_get_pre_births_2_p_0(GoalInfo_16, &PreBirths_34);
    if (succeeded)
    {
      TypeCtorInfo_391_391 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
      PreBirthList_35 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_391_391, PreBirths_34);
      succeeded = (PreBirthList_35 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_String PreBirthStr_38;

      PreBirthStr_38 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_27, VarNamePrint_28, PreBirthList_35);
      mercury__io__write_string_4_p_0(Stream_9, IndentStr_14);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% pre-births: ");
      mercury__io__write_string_4_p_0(Stream_9, PreBirthStr_38);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
    }
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_18, (MR_Char) 66);
  if (succeeded)
  {
    MR_Word ProducingVars_39;
    MR_Word ConsumingVars_42;
    MR_Word MakeVisibleVars_45;
    MR_Word NeedVisibleVars_48;

    check_hlds__mode_ordering__goal_info_get_producing_vars_2_p_0(GoalInfo_16, &ProducingVars_39);
    succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProducingVars_39);
    if (succeeded)
    {
      MR_Word ProducingVarsList_40;
      MR_String ProducingVarsStr_41;

      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProducingVars_39, &ProducingVarsList_40);
      ProducingVarsStr_41 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_27, VarNamePrint_28, ProducingVarsList_40);
      mercury__io__write_string_4_p_0(Stream_9, IndentStr_14);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% producing vars: ");
      mercury__io__write_string_4_p_0(Stream_9, ProducingVarsStr_41);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
    }
    check_hlds__mode_ordering__goal_info_get_consuming_vars_2_p_0(GoalInfo_16, &ConsumingVars_42);
    succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsumingVars_42);
    if (succeeded)
    {
      MR_Word ConsumingVarsList_43;
      MR_String ConsumingVarsStr_44;

      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsumingVars_42, &ConsumingVarsList_43);
      ConsumingVarsStr_44 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_27, VarNamePrint_28, ConsumingVarsList_43);
      mercury__io__write_string_4_p_0(Stream_9, IndentStr_14);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% consuming vars: ");
      mercury__io__write_string_4_p_0(Stream_9, ConsumingVarsStr_44);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
    }
    check_hlds__mode_ordering__goal_info_get_make_visible_vars_2_p_0(GoalInfo_16, &MakeVisibleVars_45);
    succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MakeVisibleVars_45);
    if (succeeded)
    {
      MR_Word MakeVisibleVarsList_46;
      MR_String MakeVisibleVarsStr_47;

      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MakeVisibleVars_45, &MakeVisibleVarsList_46);
      MakeVisibleVarsStr_47 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_27, VarNamePrint_28, MakeVisibleVarsList_46);
      mercury__io__write_string_4_p_0(Stream_9, IndentStr_14);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% make_visible vars: ");
      mercury__io__write_string_4_p_0(Stream_9, MakeVisibleVarsStr_47);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
    }
    check_hlds__mode_ordering__goal_info_get_need_visible_vars_2_p_0(GoalInfo_16, &NeedVisibleVars_48);
    succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NeedVisibleVars_48);
    if (succeeded)
    {
      MR_Word NeedVisibleVarsList_49;
      MR_String NeedVisibleVarsStr_50;

      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NeedVisibleVars_48, &NeedVisibleVarsList_49);
      NeedVisibleVarsStr_50 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_27, VarNamePrint_28, NeedVisibleVarsList_49);
      mercury__io__write_string_4_p_0(Stream_9, IndentStr_14);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% need_visible vars: ");
      mercury__io__write_string_4_p_0(Stream_9, NeedVisibleVarsStr_50);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
    }
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_18, (MR_Char) 100);
  if (succeeded)
  {
    MR_Word Determinism_51;
    MR_String Var_180;

    Determinism_51 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_16);
    Var_180 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(Determinism_51);
    mercury__io__write_string_4_p_0(Stream_9, IndentStr_14);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% determinism: ");
    mercury__io__write_string_4_p_0(Stream_9, Var_180);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_18, (MR_Char) 101);
  if (succeeded)
  {
    MR_Word MaybeRbmmInfo_52;

    MaybeRbmmInfo_52 = hlds__hlds_goal__goal_info_get_maybe_rbmm_1_f_0(GoalInfo_16);
    if (!((MaybeRbmmInfo_52 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word RbmmInfo_53 = ((MR_Word) ((MR_hl_field(1, MaybeRbmmInfo_52, (MR_Integer) 0))));
      MR_Word Created_54 = ((MR_Word) ((MR_hl_field(0, RbmmInfo_53, (MR_Integer) 0))));
      MR_Word Removed_55 = ((MR_Word) ((MR_hl_field(0, RbmmInfo_53, (MR_Integer) 1))));
      MR_Word Carried_56 = ((MR_Word) ((MR_hl_field(0, RbmmInfo_53, (MR_Integer) 2))));
      MR_Word Alloc_57 = ((MR_Word) ((MR_hl_field(0, RbmmInfo_53, (MR_Integer) 3))));
      MR_Word Used_58 = ((MR_Word) ((MR_hl_field(0, RbmmInfo_53, (MR_Integer) 4))));
      MR_Word CreatedList_59;
      MR_Word RemovedList_60;
      MR_Word CarriedList_61;
      MR_Word AllocList_62;
      MR_Word UsedList_63;
      MR_String CreatedStr_64;
      MR_String RemovedStr_65;
      MR_String CarriedStr_66;
      MR_String AllocStr_67;
      MR_String UsedStr_68;

      CreatedList_59 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), Created_54);
      RemovedList_60 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), Removed_55);
      CarriedList_61 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), Carried_56);
      AllocList_62 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), Alloc_57);
      UsedList_63 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), Used_58);
      CreatedStr_64 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_27, VarNamePrint_28, CreatedList_59);
      RemovedStr_65 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_27, VarNamePrint_28, RemovedList_60);
      CarriedStr_66 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_27, VarNamePrint_28, CarriedList_61);
      AllocStr_67 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_27, VarNamePrint_28, AllocList_62);
      UsedStr_68 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_27, VarNamePrint_28, UsedList_63);
      mercury__io__write_string_4_p_0(Stream_9, IndentStr_14);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% Created regions: ");
      mercury__io__write_string_4_p_0(Stream_9, CreatedStr_64);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
      mercury__io__write_string_4_p_0(Stream_9, IndentStr_14);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% Removed regions: ");
      mercury__io__write_string_4_p_0(Stream_9, RemovedStr_65);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
      mercury__io__write_string_4_p_0(Stream_9, IndentStr_14);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% Carried regions: ");
      mercury__io__write_string_4_p_0(Stream_9, CarriedStr_66);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
      mercury__io__write_string_4_p_0(Stream_9, IndentStr_14);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% Allocated into regions: ");
      mercury__io__write_string_4_p_0(Stream_9, AllocStr_67);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
      mercury__io__write_string_4_p_0(Stream_9, IndentStr_14);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% Used regions: ");
      mercury__io__write_string_4_p_0(Stream_9, UsedStr_68);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
    }
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_18, (MR_Char) 122);
  if (succeeded)
  {
    MR_Word Purity_69;

    Purity_69 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo_16);
    switch (Purity_69) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          mercury__io__write_string_4_p_0(Stream_9, IndentStr_14);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% impure\n");
        }
        break;
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_4_p_0(Stream_9, IndentStr_14);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% semipure\n");
        }
        break;
    }
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_18, (MR_Char) 69);
  if (succeeded)
  {
    MR_Word MaybeDPInfo_70;

    MaybeDPInfo_70 = hlds__hlds_goal__goal_info_get_maybe_dp_info_1_f_0(GoalInfo_16);
    if (!((MaybeDPInfo_70 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word MdprofInst_71;
      MR_Word MaybeDPCoverageInfo_72;
      MR_Word Var_230 = ((MR_Word) ((MR_hl_field(1, MaybeDPInfo_70, (MR_Integer) 0))));

      MdprofInst_71 = ((MR_Unsigned) ((MR_hl_field(0, Var_230, (MR_Integer) 0))) & (MR_Integer) 1);
      MaybeDPCoverageInfo_72 = ((MR_Word) ((MR_hl_field(0, Var_230, (MR_Integer) 1))));
      switch (MdprofInst_71) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__io__write_string_4_p_0(Stream_9, IndentStr_14);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% mdprof instrumentation\n");
          }
          break;
        case (MR_Integer) 1:
          {
          }
          break;
      }
      if (!((MaybeDPCoverageInfo_72 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word CoverageInfo_73 = ((MR_Word) ((MR_hl_field(1, MaybeDPCoverageInfo_72, (MR_Integer) 0))));
        MR_Word IsTrivial_74 = ((((MR_Unsigned) ((MR_hl_field(0, CoverageInfo_73, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
        MR_Word PortCountsGiveCoverageAfter_75 = ((MR_Unsigned) ((MR_hl_field(0, CoverageInfo_73, (MR_Integer) 0))) & (MR_Integer) 1);

        switch (IsTrivial_74) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              mercury__io__write_string_4_p_0(Stream_9, IndentStr_14);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% nontrivial goal\n");
            }
            break;
          case (MR_Integer) 0:
            {
              mercury__io__write_string_4_p_0(Stream_9, IndentStr_14);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% trivial goal\n");
            }
            break;
        }
        switch (PortCountsGiveCoverageAfter_75) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              mercury__io__write_string_4_p_0(Stream_9, IndentStr_14);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% no port counts give coverage after\n");
            }
            break;
          case (MR_Integer) 0:
            {
              mercury__io__write_string_4_p_0(Stream_9, IndentStr_14);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% port counts give coverage after\n");
            }
            break;
        }
      }
    }
  }
  hlds__hlds_out__hlds_out_goal__write_goal_expr_7_p_0(InfoGoal_8, Stream_9, Indent_10, Follow_11, GoalExpr_15);
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_18, (MR_Char) 105);
  if (succeeded)
  {
    MR_Word InstMapDelta_76;
    MR_Word Vars_77;

    InstMapDelta_76 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_16);
    hlds__instmap__instmap_delta_changed_vars_2_p_0(InstMapDelta_76, &Vars_77);
    succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_77);
    if (succeeded)
      succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstMapDelta_76);
    if (!(succeeded))
    {
      succeeded = mercury__string__contains_char_2_p_0(DumpOptions_18, (MR_Char) 68);
      if (succeeded)
      {
        succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(InstMapDelta_76);
        if (succeeded)
        {
          mercury__io__write_string_4_p_0(Stream_9, IndentStr_14);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% new insts: unreachable\n");
        }
        else
        {
          succeeded = mercury__string__contains_char_2_p_0(DumpOptions_18, (MR_Char) 89);
          if (succeeded)
          {
            MR_Word NewVarInsts_78;
            MR_Word NewVarInstStrs_79;
            MR_Word Var_265;
            MR_Word Var_271;
            MR_Box conv1_STATE_VARIABLE_IO_261_261;

            hlds__instmap__instmap_delta_to_assoc_list_2_p_0(InstMapDelta_76, &NewVarInsts_78);
            {
              Var_265 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_265, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_8[1]));
              MR_hl_field(0, Var_265, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0_1));
              MR_hl_field(0, Var_265, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_265, 3) = ((MR_Box) (InfoGoal_8));
              MR_hl_field(0, Var_265, 4) = ((MR_Box) (IndentStr_14));
            }
            NewVarInstStrs_79 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_265, NewVarInsts_78);
            mercury__io__write_string_4_p_0(Stream_9, IndentStr_14);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% new insts:\n");
            {
              Var_271 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_271, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_8[2]));
              MR_hl_field(0, Var_271, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0_2));
              MR_hl_field(0, Var_271, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_271, 3) = ((MR_Box) (Stream_9));
            }
            mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_271, NewVarInstStrs_79, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_261_261);
          }
          else
          {
            MR_Word Var_273;
            MR_Word Var_279;
            MR_Word NewVarInsts_361;
            MR_Word NewVarInstStrs_362;
            MR_Box conv3_STATE_VARIABLE_IO_261_261;

            hlds__instmap__instmap_delta_to_assoc_list_2_p_0(InstMapDelta_76, &NewVarInsts_361);
            {
              Var_273 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_273, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_8[1]));
              MR_hl_field(0, Var_273, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0_3));
              MR_hl_field(0, Var_273, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_273, 3) = ((MR_Box) (InfoGoal_8));
              MR_hl_field(0, Var_273, 4) = ((MR_Box) (IndentStr_14));
            }
            NewVarInstStrs_362 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_273, NewVarInsts_361);
            mercury__io__write_string_4_p_0(Stream_9, IndentStr_14);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% new insts:\n");
            {
              Var_279 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_279, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_8[2]));
              MR_hl_field(0, Var_279, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0_4));
              MR_hl_field(0, Var_279, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_279, 3) = ((MR_Box) (Stream_9));
            }
            mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_279, NewVarInstStrs_362, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_261_261);
          }
        }
      }
      else
      {
        MR_String NewVarsStr_80;

        succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(InstMapDelta_76);
        if (succeeded)
          NewVarsStr_80 = (MR_String) "unreachable";
        else
        {
          MR_Word NewVars_81;
          MR_Word NewVarStrs_82;
          MR_Word Var_281;
          MR_Word NewVarInsts_363;

          hlds__instmap__instmap_delta_to_assoc_list_2_p_0(InstMapDelta_76, &NewVarInsts_363);
          mercury__assoc_list__keys_2_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), NewVarInsts_363, &NewVars_81);
          {
            Var_281 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_281, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_8[3]));
            MR_hl_field(0, Var_281, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0_5));
            MR_hl_field(0, Var_281, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_281, 3) = ((MR_Box) (VarNameSrc_27));
            MR_hl_field(0, Var_281, 4) = ((MR_Box) (VarNamePrint_28));
          }
          NewVarStrs_82 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_281, NewVars_81);
          NewVarsStr_80 = mercury__string__join_list_2_f_0((MR_String) ", ", NewVarStrs_82);
        }
        mercury__io__write_string_4_p_0(Stream_9, IndentStr_14);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% vars with new insts: ");
        mercury__io__write_string_4_p_0(Stream_9, NewVarsStr_80);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
      }
    }
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_18, (MR_Char) 112);
  if (succeeded)
  {
    MR_Word PostDeathList_84;
    MR_Word TypeCtorInfo_423_423;
    MR_Word PostDeaths_83;
    MR_Word PostBirthList_89;
    MR_Word TypeCtorInfo_424_424;
    MR_Word PostBirths_88;

    succeeded = hlds__hlds_llds__goal_info_maybe_get_post_deaths_2_p_0(GoalInfo_16, &PostDeaths_83);
    if (succeeded)
    {
      TypeCtorInfo_423_423 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
      PostDeathList_84 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_423_423, PostDeaths_83);
      succeeded = (PostDeathList_84 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_String PostDeathStr_87;

      PostDeathStr_87 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_27, VarNamePrint_28, PostDeathList_84);
      mercury__io__write_string_4_p_0(Stream_9, IndentStr_14);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% post-deaths: ");
      mercury__io__write_string_4_p_0(Stream_9, PostDeathStr_87);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
    }
    succeeded = hlds__hlds_llds__goal_info_maybe_get_post_births_2_p_0(GoalInfo_16, &PostBirths_88);
    if (succeeded)
    {
      TypeCtorInfo_424_424 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
      PostBirthList_89 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_424_424, PostBirths_88);
      succeeded = (PostBirthList_89 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
    {
      MR_String PostBirthStr_92;

      PostBirthStr_92 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_27, VarNamePrint_28, PostBirthList_89);
      mercury__io__write_string_4_p_0(Stream_9, IndentStr_14);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% post-births: ");
      mercury__io__write_string_4_p_0(Stream_9, PostBirthStr_92);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
    }
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_18, (MR_Char) 82);
  if (succeeded)
  {
    MR_Word LFU_93;
    MR_Word LBU_94;
    MR_Word ReuseDescription_95;
    MR_Word Var_306;
    MR_Word Var_307;
    MR_Word Var_308;

    Var_306 = transform_hlds__ctgc__util__goal_info_get_maybe_lfu_1_f_0(GoalInfo_16);
    succeeded = (Var_306 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      LFU_93 = ((MR_Word) ((MR_hl_field(1, Var_306, (MR_Integer) 0))));
      Var_307 = transform_hlds__ctgc__util__goal_info_get_maybe_lbu_1_f_0(GoalInfo_16);
      succeeded = (Var_307 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        LBU_94 = ((MR_Word) ((MR_hl_field(1, Var_307, (MR_Integer) 0))));
        Var_308 = transform_hlds__ctgc__util__goal_info_get_maybe_reuse_1_f_0(GoalInfo_16);
        succeeded = (Var_308 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          ReuseDescription_95 = ((MR_Word) ((MR_hl_field(1, Var_308, (MR_Integer) 0))));
      }
    }
    if (succeeded)
    {
      MR_Word ListLFU_96;
      MR_Word ListLBU_97;
      MR_String StrLFU_98;
      MR_String StrLBU_99;

      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LFU_93, &ListLFU_96);
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LBU_94, &ListLBU_97);
      StrLFU_98 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_27, VarNamePrint_28, ListLFU_96);
      StrLBU_99 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_27, VarNamePrint_28, ListLBU_97);
      mercury__io__write_string_4_p_0(Stream_9, IndentStr_14);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% LFU: ");
      mercury__io__write_string_4_p_0(Stream_9, StrLFU_98);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
      mercury__io__write_string_4_p_0(Stream_9, IndentStr_14);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% LBU: ");
      mercury__io__write_string_4_p_0(Stream_9, StrLBU_99);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
      mercury__io__write_string_4_p_0(Stream_9, IndentStr_14);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% Reuse: ");
      switch (MR_tag((MR_Word) ReuseDescription_95)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ReuseDescription_95)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "no reuse info");
              break;
            case (MR_Integer) 1:
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "no possible reuse");
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Messages_100 = ((MR_Word) ((MR_hl_field(1, ReuseDescription_95, (MR_Integer) 0))));

            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "missed (");
            parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[6]), (MR_String) ", ", Messages_100, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ShortReuseDescr_101 = ((MR_Word) ((MR_hl_field(2, ReuseDescription_95, (MR_Integer) 0))));

            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "potential reuse (");
            hlds__hlds_out__hlds_out_goal__write_short_reuse_description_6_p_0(Stream_9, ShortReuseDescr_101, VarNameSrc_27, VarNamePrint_28);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ShortReuseDescr_366 = ((MR_Word) ((MR_hl_field(3, ReuseDescription_95, (MR_Integer) 0))));

            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "reuse (");
            hlds__hlds_out__hlds_out_goal__write_short_reuse_description_6_p_0(Stream_9, ShortReuseDescr_366, VarNameSrc_27, VarNamePrint_28);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          }
          break;
      }
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
    }
  }
  CodeGenInfo_102 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(GoalInfo_16);
  if (!((CodeGenInfo_102 == (MR_Word) ((MR_Unsigned) 0U))))
    hlds__hlds_out__hlds_out_goal__write_llds_code_gen_info_8_p_0(Info_17, Stream_9, GoalInfo_16, VarNameSrc_27, VarNamePrint_28, Indent_10);
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_18, (MR_Char) 103);
  if (succeeded)
  {
    MR_Word Features_104;
    MR_Word FeatureList_105;

    Features_104 = hlds__hlds_goal__goal_info_get_features_1_f_0(GoalInfo_16);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0), Features_104, &FeatureList_105);
    if (!((FeatureList_105 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String Var_359;

      Var_359 = mercury__string__string_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[1]), ((MR_Box) (FeatureList_105)));
      mercury__io__write_string_4_p_0(Stream_9, IndentStr_14);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% Goal features: ");
      mercury__io__write_string_4_p_0(Stream_9, Var_359);
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
    }
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

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_foreign_proc_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__write_goal_foreign_proc__1762__1_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_foreign_proc_7_p_0(
  MR_Word InfoGoal_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_String Follow_11,
  MR_Word GoalExpr_12)
{
  MR_Word Attributes_14 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 1))));
  MR_Word PredId_15 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 2))));
  MR_Integer ProcId_16 = ((MR_Integer) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 3))));
  MR_Word Args_17 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 4))));
  MR_Word ExtraArgs_18 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 5))));
  MR_Word MaybeTraceRuntimeCond_19 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 6))));
  MR_Word PragmaCode_20 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 7))));
  MR_Word ForeignLang_21;
  MR_String ForeignLangStr_22;
  MR_Word ModuleInfo_23;
  MR_String PredStr_24;
  MR_Integer PredIdInt_25;
  MR_Integer ProcIdInt_26;
  MR_String IndentStr_27;
  MR_Word VarNameSrc_29;
  MR_Word VarNamePrint_30;
  MR_Word TypeVarSet_31;
  MR_Word InstVarSet_32;
  MR_String ArgsStr_33;
  MR_String Code_37;
  MR_String Var_123;
  MR_String Var_133;

  ForeignLang_21 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attributes_14);
  ForeignLangStr_22 = libs__globals__foreign_language_string_1_f_0(ForeignLang_21);
  ModuleInfo_23 = ((MR_Word) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 1))));
  PredStr_24 = hlds__hlds_out__hlds_out_util__pred_id_to_dev_string_2_f_0(ModuleInfo_23, PredId_15);
  hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_15, &PredIdInt_25);
  hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_16, &ProcIdInt_26);
  IndentStr_27 = libs__indent__indent2_string_1_f_0(Indent_10);
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_27);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\044pragma_foreign_proc(/* ");
  mercury__io__write_string_4_p_0(Stream_9, ForeignLangStr_22);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " */, ");
  mercury__io__write_string_4_p_0(Stream_9, PredStr_24);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " pred ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[0]), PredIdInt_25, &Var_123);
  mercury__io__write_string_4_p_0(Stream_9, Var_123);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " proc ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[0]), ProcIdInt_26, &Var_133);
  mercury__io__write_string_4_p_0(Stream_9, Var_133);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
  if (!((MaybeTraceRuntimeCond_19 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word TraceRuntimeCond_28 = ((MR_Word) ((MR_hl_field(1, MaybeTraceRuntimeCond_19, (MR_Integer) 0))));
    MR_Box conv0_STATE_VARIABLE_IO_60_60;

    mercury__io__write_string_4_p_0(Stream_9, IndentStr_27);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% trace_runtime_cond(");
    parse_tree__parse_tree_out_clause__mercury_format_trace_expr_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0), (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[1]), ((MR_Box) (Stream_9)), (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[5]), TraceRuntimeCond_28, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_60_60);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")\n");
  }
  VarNameSrc_29 = ((MR_Word) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 2))));
  VarNamePrint_30 = ((MR_Unsigned) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 3))) & (MR_Integer) 3);
  TypeVarSet_31 = ((MR_Word) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 4))));
  InstVarSet_32 = ((MR_Word) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 5))));
  ArgsStr_33 = hlds__hlds_out__hlds_out_goal__foreign_args_to_string_8_f_0(VarNameSrc_29, VarNamePrint_30, TypeVarSet_31, InstVarSet_32, IndentStr_27, (MR_String) "[", (MR_String) "],", Args_17);
  mercury__io__write_string_4_p_0(Stream_9, ArgsStr_33);
  if (!((ExtraArgs_18 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_String ExtraArgsStr_36;
    MR_Word HeadArg_148 = ((MR_Word) ((MR_hl_field(1, ExtraArgs_18, (MR_Integer) 0))));
    MR_Word TailArgs_149 = ((MR_Word) ((MR_hl_field(1, ExtraArgs_18, (MR_Integer) 1))));
    MR_Word LineStrs_150;

    LineStrs_150 = hlds__hlds_out__hlds_out_goal__foreign_args_to_string_lag_9_f_0(VarNameSrc_29, VarNamePrint_30, TypeVarSet_31, InstVarSet_32, IndentStr_27, (MR_String) "{", (MR_String) "},", HeadArg_148, TailArgs_149);
    mercury__string__append_list_2_p_0(LineStrs_150, &ExtraArgsStr_36);
    mercury__io__write_string_4_p_0(Stream_9, ExtraArgsStr_36);
  }
  Code_37 = ((MR_String) ((MR_hl_field(0, PragmaCode_20, (MR_Integer) 0))));
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\"");
  mercury__io__write_string_4_p_0(Stream_9, Code_37);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\")");
  mercury__io__write_string_4_p_0(Stream_9, Follow_11);
}

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_goal__foreign_args_to_string_8_f_0(
  MR_Word VarNameSrc_10,
  MR_Word VarNamePrint_11,
  MR_Word TypeVarSet_12,
  MR_Word InstVarSet_13,
  MR_String IndentStr_14,
  MR_String LParen_15,
  MR_String RParen_16,
  MR_Word Args_17)
{
  MR_String Str_18;

  if ((Args_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String Var_31;
    MR_String Var_32;

    Var_31 = mercury__string__f_43_43_2_f_0(RParen_16, (MR_String) "\n");
    Var_32 = mercury__string__f_43_43_2_f_0(LParen_15, Var_31);
    Str_18 = mercury__string__f_43_43_2_f_0(IndentStr_14, Var_32);
  }
  else
  {
    MR_Word HeadArg_19 = ((MR_Word) ((MR_hl_field(1, Args_17, (MR_Integer) 0))));
    MR_Word TailArgs_20 = ((MR_Word) ((MR_hl_field(1, Args_17, (MR_Integer) 1))));
    MR_Word LineStrs_21;

    LineStrs_21 = hlds__hlds_out__hlds_out_goal__foreign_args_to_string_lag_9_f_0(VarNameSrc_10, VarNamePrint_11, TypeVarSet_12, InstVarSet_13, IndentStr_14, LParen_15, RParen_16, HeadArg_19, TailArgs_20);
    mercury__string__append_list_2_p_0(LineStrs_21, &Str_18);
  }
  return Str_18;
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
hlds__hlds_out__hlds_out_goal__write_goal_generic_call_7_p_0(
  MR_Word InfoGoal_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_String Follow_11,
  MR_Word GoalExpr_12)
{
  MR_bool succeeded;
  MR_Word GenericCall_14 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 1))));
  MR_Word ArgVars_15 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 2))));
  MR_Word Modes_16 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 3))));
  MR_Word MaybeArgRegs_17 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, (MR_Integer) 4))));
  MR_Word Info_19 = ((MR_Word) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 0))));
  MR_String DumpOptions_20 = ((MR_String) ((MR_hl_field(0, Info_19, (MR_Integer) 0))));
  MR_Word VarNameSrc_21 = ((MR_Word) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 2))));
  MR_Word VarNamePrint_22 = ((MR_Unsigned) ((MR_hl_field(0, InfoGoal_8, (MR_Integer) 3))) & (MR_Integer) 3);
  MR_String IndentStr_23;

  IndentStr_23 = libs__indent__indent2_string_1_f_0(Indent_10);
  switch (MR_tag((MR_Word) GenericCall_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word PredVar_24 = ((MR_Word) ((MR_hl_field(0, GenericCall_14, (MR_Integer) 0))));
        MR_Word Purity_25 = ((((MR_Unsigned) ((MR_hl_field(0, GenericCall_14, (MR_Integer) 1))) >> 1)) & (MR_Integer) 3);
        MR_Word PredOrFunc_26 = ((MR_Unsigned) ((MR_hl_field(0, GenericCall_14, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_String PurityPrefix_28;

        PurityPrefix_28 = parse_tree__parse_tree_out_misc__purity_prefix_to_string_1_f_0(Purity_25);
        switch (PredOrFunc_26) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word FuncArgVars_30;
              MR_Word FuncRetVar_31;
              MR_String FuncRetVarStr_32;
              MR_String ApplyStr_33;
              MR_Word Var_77;
              MR_Box conv1_FuncRetVar_31;

              succeeded = mercury__string__contains_char_2_p_0(DumpOptions_20, (MR_Char) 108);
              if (succeeded)
              {
                mercury__io__write_string_4_p_0(Stream_9, IndentStr_23);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% higher-order function application\n");
                hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_5_p_0(Stream_9, Indent_10, MaybeArgRegs_17);
              }
              {
                Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_77, 0) = ((MR_Box) (PredVar_24));
                MR_hl_field(1, Var_77, 1) = ((MR_Box) (ArgVars_15));
              }
              parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), Var_77, &FuncArgVars_30, &conv1_FuncRetVar_31);
              FuncRetVar_31 = ((MR_Word) (conv1_FuncRetVar_31));
              FuncRetVarStr_32 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_21, VarNamePrint_22, FuncRetVar_31);
              ApplyStr_33 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(VarNameSrc_21, VarNamePrint_22, (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[3]), FuncArgVars_30);
              mercury__io__write_string_4_p_0(Stream_9, IndentStr_23);
              mercury__io__write_string_4_p_0(Stream_9, PurityPrefix_28);
              mercury__io__write_string_4_p_0(Stream_9, FuncRetVarStr_32);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = ");
              mercury__io__write_string_4_p_0(Stream_9, ApplyStr_33);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_String CallStr_29;
              MR_Word Var_60;

              succeeded = mercury__string__contains_char_2_p_0(DumpOptions_20, (MR_Char) 108);
              if (succeeded)
              {
                mercury__io__write_string_4_p_0(Stream_9, IndentStr_23);
                mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% higher-order predicate call\n");
                hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_5_p_0(Stream_9, Indent_10, MaybeArgRegs_17);
              }
              {
                Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_60, 0) = ((MR_Box) (PredVar_24));
                MR_hl_field(1, Var_60, 1) = ((MR_Box) (ArgVars_15));
              }
              CallStr_29 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(VarNameSrc_21, VarNamePrint_22, (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[4]), Var_60);
              mercury__io__write_string_4_p_0(Stream_9, IndentStr_23);
              mercury__io__write_string_4_p_0(Stream_9, PurityPrefix_28);
              mercury__io__write_string_4_p_0(Stream_9, CallStr_29);
            }
            break;
        }
        mercury__io__write_string_4_p_0(Stream_9, Follow_11);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TCInfoVar_34 = ((MR_Word) ((MR_hl_field(1, GenericCall_14, (MR_Integer) 0))));
        MR_Integer MethodNum_35;
        MR_Word Context_38;
        MR_Word TCInfoTerm_40;
        MR_Word MethodNumTerm_41;
        MR_Word ArgTerms_42;
        MR_Word Term_43;
        MR_Word Var_92 = ((MR_Word) ((MR_hl_field(1, GenericCall_14, (MR_Integer) 1))));
        MR_Word Var_101;
        MR_Word Var_102;

        MethodNum_35 = (MR_Integer) (Var_92);
        succeeded = mercury__string__contains_char_2_p_0(DumpOptions_20, (MR_Char) 108);
        if (succeeded)
        {
          mercury__io__write_string_4_p_0(Stream_9, IndentStr_23);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% class method call\n");
          hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_5_p_0(Stream_9, Indent_10, MaybeArgRegs_17);
        }
        Context_38 = mercury__term_context__dummy_context_0_f_0();
        {
          TCInfoTerm_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, TCInfoTerm_40, 0) = ((MR_Box) (TCInfoVar_34));
          MR_hl_field(1, TCInfoTerm_40, 1) = ((MR_Box) (Context_38));
        }
        MethodNumTerm_41 = mercury__term_int__int_to_decimal_term_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MethodNum_35, Context_38);
        mercury__term_subst__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_15, &ArgTerms_42);
        {
          Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_102, 0) = ((MR_Box) (MethodNumTerm_41));
          MR_hl_field(1, Var_102, 1) = ((MR_Box) (ArgTerms_42));
        }
        {
          Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_101, 0) = ((MR_Box) (TCInfoTerm_40));
          MR_hl_field(1, Var_101, 1) = ((MR_Box) (Var_102));
        }
        {
          Term_43 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Term_43, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[2]));
          MR_hl_field(0, Term_43, 1) = ((MR_Box) (Var_101));
          MR_hl_field(0, Term_43, 2) = ((MR_Box) (Context_38));
        }
        mercury__io__write_string_4_p_0(Stream_9, IndentStr_23);
        parse_tree__parse_tree_out_term__mercury_output_term_src_6_p_0(VarNameSrc_21, VarNamePrint_22, Term_43, Stream_9);
        mercury__io__write_string_4_p_0(Stream_9, Follow_11);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String EventName_44 = ((MR_String) ((MR_hl_field(2, GenericCall_14, (MR_Integer) 0))));
        MR_Word Var_113;
        MR_Word Functor_158;
        MR_Word ArgTerms_159;
        MR_Word Term_160;

        succeeded = mercury__string__contains_char_2_p_0(DumpOptions_20, (MR_Char) 108);
        if (succeeded)
        {
          mercury__io__write_string_4_p_0(Stream_9, IndentStr_23);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% event call\n");
          hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_5_p_0(Stream_9, Indent_10, MaybeArgRegs_17);
        }
        {
          Functor_158 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Functor_158, 0) = ((MR_Box) (EventName_44));
        }
        mercury__term_subst__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_15, &ArgTerms_159);
        Var_113 = mercury__term_context__dummy_context_0_f_0();
        {
          Term_160 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Term_160, 0) = ((MR_Box) (Functor_158));
          MR_hl_field(0, Term_160, 1) = ((MR_Box) (ArgTerms_159));
          MR_hl_field(0, Term_160, 2) = ((MR_Box) (Var_113));
        }
        mercury__io__write_string_4_p_0(Stream_9, IndentStr_23);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "event ");
        parse_tree__parse_tree_out_term__mercury_output_term_src_6_p_0(VarNameSrc_21, VarNamePrint_22, Term_160, Stream_9);
        mercury__io__write_string_4_p_0(Stream_9, Follow_11);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word CastType_45 = ((MR_Unsigned) ((MR_hl_field(3, GenericCall_14, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_String CastTypeString_46;
        MR_Word PredOrFunc_170;

        switch (CastType_45) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            CastTypeString_46 = hlds__hlds_out__hlds_out_util__cast_type_to_string_1_f_0(CastType_45);
            break;
          case (MR_Integer) 4:
            CastTypeString_46 = (MR_String) "coerce";
            break;
        }
        succeeded = mercury__string__contains_char_2_p_0(DumpOptions_20, (MR_Char) 108);
        if (succeeded)
        {
          mercury__io__write_string_4_p_0(Stream_9, IndentStr_23);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% ");
          mercury__io__write_string_4_p_0(Stream_9, CastTypeString_46);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
          hlds__hlds_out__hlds_out_goal__write_ho_arg_regs_5_p_0(Stream_9, Indent_10, MaybeArgRegs_17);
        }
        succeeded = mercury__string__contains_char_2_p_0(DumpOptions_20, (MR_Char) 68);
        if (succeeded)
        {
          MR_Word InstVarSet_47;
          MR_String ModesStr_48;

          mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_47);
          ModesStr_48 = parse_tree__parse_tree_out_inst__mercury_mode_list_to_string_3_f_0((MR_Integer) 1, InstVarSet_47, Modes_16);
          mercury__io__write_string_4_p_0(Stream_9, IndentStr_23);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "% modes: ");
          mercury__io__write_string_4_p_0(Stream_9, ModesStr_48);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
        }
        PredOrFunc_170 = hlds__hlds_out__hlds_out_goal__write_cast_as_pred_or_func_1_f_0(CastType_45);
        switch (PredOrFunc_170) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word Var_147;
              MR_String CallStr_162;
              MR_Word FuncArgVars_163;
              MR_Word FuncRetVar_164;
              MR_String FuncRetVarStr_165;
              MR_Box conv0_FuncRetVar_164;

              parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), ArgVars_15, &FuncArgVars_163, &conv0_FuncRetVar_164);
              FuncRetVar_164 = ((MR_Word) (conv0_FuncRetVar_164));
              FuncRetVarStr_165 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_21, VarNamePrint_22, FuncRetVar_164);
              {
                Var_147 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_147, 0) = ((MR_Box) (CastTypeString_46));
              }
              CallStr_162 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(VarNameSrc_21, VarNamePrint_22, Var_147, FuncArgVars_163);
              mercury__io__write_string_4_p_0(Stream_9, IndentStr_23);
              mercury__io__write_string_4_p_0(Stream_9, FuncRetVarStr_165);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = ");
              mercury__io__write_string_4_p_0(Stream_9, CallStr_162);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word Var_139;
              MR_String CallStr_161;

              {
                Var_139 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_139, 0) = ((MR_Box) (CastTypeString_46));
              }
              CallStr_161 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(VarNameSrc_21, VarNamePrint_22, Var_139, ArgVars_15);
              mercury__io__write_string_4_p_0(Stream_9, IndentStr_23);
              mercury__io__write_string_4_p_0(Stream_9, CallStr_161);
            }
            break;
        }
        mercury__io__write_string_4_p_0(Stream_9, Follow_11);
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
  MR_Unsigned Indent_7,
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
hlds__hlds_out__hlds_out_goal__write_unification_6_p_0(
  MR_Word InfoGoal_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_Word Unification_10)
{
  MR_bool succeeded;
  MR_Word VarNameSrc_12 = ((MR_Word) ((MR_hl_field(0, InfoGoal_7, (MR_Integer) 2))));
  MR_Word VarNamePrint_13 = ((MR_Unsigned) ((MR_hl_field(0, InfoGoal_7, (MR_Integer) 3))) & (MR_Integer) 3);
  MR_String IndentStr_14;

  IndentStr_14 = libs__indent__indent2_string_1_f_0(Indent_9);
  switch (MR_tag((MR_Word) Unification_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Unification_10, (MR_Integer) 0))));
        MR_Word ConsId_20 = ((MR_Word) ((MR_hl_field(0, Unification_10, (MR_Integer) 1))));
        MR_Word ArgVars_21 = ((MR_Word) ((MR_hl_field(0, Unification_10, (MR_Integer) 2))));
        MR_Word ArgModes_22 = ((MR_Word) ((MR_hl_field(0, Unification_10, (MR_Integer) 3))));
        MR_Word ConstructHow_23 = ((MR_Word) ((MR_hl_field(0, Unification_10, (MR_Integer) 4))));
        MR_Word Uniqueness_24 = ((MR_Unsigned) ((MR_hl_field(0, Unification_10, (MR_Integer) 5))) & (MR_Integer) 1);
        MR_Word SubInfo_25 = ((MR_Word) ((MR_hl_field(0, Unification_10, (MR_Integer) 6))));
        MR_String VarStr_26;
        MR_Word Info_27;
        MR_String DumpOptions_28;

        VarStr_26 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_12, VarNamePrint_13, Var_19);
        mercury__io__write_string_4_p_0(Stream_8, IndentStr_14);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% ");
        mercury__io__write_string_4_p_0(Stream_8, VarStr_26);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " <= ");
        hlds__hlds_out__hlds_out_goal__write_functor_and_submodes_8_p_0(InfoGoal_7, Stream_8, Indent_9, ConsId_20, ArgVars_21, ArgModes_22);
        Info_27 = ((MR_Word) ((MR_hl_field(0, InfoGoal_7, (MR_Integer) 0))));
        DumpOptions_28 = ((MR_String) ((MR_hl_field(0, Info_27, (MR_Integer) 0))));
        succeeded = mercury__string__contains_char_2_p_0(DumpOptions_28, (MR_Char) 117);
        if (succeeded)
        {
          MR_Word TypeCtor_31;

          succeeded = ((((MR_tag((MR_Word) ConsId_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_20, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            TypeCtor_31 = ((MR_Word) ((MR_hl_field(3, ConsId_20, (MR_Integer) 3))));
            {
              MR_Word TypeCtorSymName_32 = ((MR_Word) ((MR_hl_field(0, TypeCtor_31, (MR_Integer) 0))));
              MR_Integer TypeCtorArity_33 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_31, (MR_Integer) 1))));
              MR_String TypeCtorSymNameStr_34;
              MR_String Var_271;

              TypeCtorSymNameStr_34 = mdbcomp__sym_name__sym_name_to_string_1_f_0(TypeCtorSymName_32);
              mercury__io__write_string_4_p_0(Stream_8, IndentStr_14);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% cons_id type_ctor: ");
              mercury__io__write_string_4_p_0(Stream_8, TypeCtorSymNameStr_34);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "/");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[0]), TypeCtorArity_33, &Var_271);
              mercury__io__write_string_4_p_0(Stream_8, Var_271);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
            }
          }
          switch (Uniqueness_24) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
              }
              break;
            case (MR_Integer) 0:
              {
                mercury__io__write_string_4_p_0(Stream_8, IndentStr_14);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% cell_is_unique\n");
              }
              break;
          }
          if (!((SubInfo_25 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            MR_Word MaybeTakeAddr_35 = ((MR_Word) ((MR_hl_field(1, SubInfo_25, (MR_Integer) 0))));
            MR_Word MaybeSize_36 = ((MR_Word) ((MR_hl_field(1, SubInfo_25, (MR_Integer) 1))));

            if (!((MaybeTakeAddr_35 == (MR_Word) ((MR_Unsigned) 0U))))
            {
              MR_Word TakeAddressFields_37 = ((MR_Word) ((MR_hl_field(1, MaybeTakeAddr_35, (MR_Integer) 0))));
              MR_String Var_107;

              Var_107 = mercury__string__string_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[2]), ((MR_Box) (TakeAddressFields_37)));
              mercury__io__write_string_4_p_0(Stream_8, IndentStr_14);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% take address fields: ");
              mercury__io__write_string_4_p_0(Stream_8, Var_107);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
            }
            if (!((MaybeSize_36 == (MR_Word) ((MR_Unsigned) 0U))))
            {
              MR_Word SizeSource_38 = ((MR_Word) ((MR_hl_field(1, MaybeSize_36, (MR_Integer) 0))));

              mercury__io__write_string_4_p_0(Stream_8, IndentStr_14);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% term size ");
              if (((MR_tag((MR_Word) SizeSource_38)) == (MR_Integer) 1))
              {
                MR_Word SizeVar_40 = ((MR_Word) ((MR_hl_field(1, SizeSource_38, (MR_Integer) 0))));
                MR_String SizeVarStr_41;

                SizeVarStr_41 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_12, VarNamePrint_13, SizeVar_40);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "var ");
                mercury__io__write_string_4_p_0(Stream_8, SizeVarStr_41);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
              }
              else
              {
                MR_Integer KnownSize_39 = ((MR_Integer) ((MR_hl_field(0, SizeSource_38, (MR_Integer) 0))));
                MR_String Var_291;

                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "const ");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[0]), KnownSize_39, &Var_291);
                mercury__io__write_string_4_p_0(Stream_8, Var_291);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
              }
            }
          }
          switch (MR_tag((MR_Word) ConstructHow_23)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word CellToReuse_42 = (MR_Word) (MR_body((MR_Word) (ConstructHow_23), (MR_Integer) 1));
                MR_Word ReuseVar_43 = ((MR_Word) ((MR_hl_field(0, CellToReuse_42, (MR_Integer) 0))));
                MR_String ReuseVarStr_46;

                ReuseVarStr_46 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_12, VarNamePrint_13, ReuseVar_43);
                mercury__io__write_string_4_p_0(Stream_8, IndentStr_14);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% reuse cell: ");
                mercury__io__write_string_4_p_0(Stream_8, ReuseVarStr_46);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_237 = ((MR_Unsigned) ((MR_hl_field(2, ConstructHow_23, (MR_Integer) 0))) & (MR_Integer) 1);

                switch (Var_237) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, IndentStr_14);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% construct statically (born static)\n");
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, IndentStr_14);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% construct statically (marked static)\n");
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word RegVar_47 = ((MR_Word) ((MR_hl_field(3, ConstructHow_23, (MR_Integer) 0))));
                MR_String RegVarStr_48;

                RegVarStr_48 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_12, VarNamePrint_13, RegVar_47);
                mercury__io__write_string_4_p_0(Stream_8, IndentStr_14);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% construct in region: ");
                mercury__io__write_string_4_p_0(Stream_8, RegVarStr_48);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
              }
              break;
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word CanFail_49 = ((((MR_Unsigned) ((MR_hl_field(1, Unification_10, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
        MR_Word CanCGC_50 = ((MR_Unsigned) ((MR_hl_field(1, Unification_10, (MR_Integer) 4))) & (MR_Integer) 1);
        MR_String OpStr_51;
        MR_Word Var_189 = ((MR_Word) ((MR_hl_field(1, Unification_10, (MR_Integer) 0))));
        MR_Word ConsId_190 = ((MR_Word) ((MR_hl_field(1, Unification_10, (MR_Integer) 1))));
        MR_Word ArgVars_191 = ((MR_Word) ((MR_hl_field(1, Unification_10, (MR_Integer) 2))));
        MR_Word ArgModes_192 = ((MR_Word) ((MR_hl_field(1, Unification_10, (MR_Integer) 3))));
        MR_String VarStr_193;
        MR_Word Info_194 = ((MR_Word) ((MR_hl_field(0, InfoGoal_7, (MR_Integer) 0))));
        MR_String DumpOptions_195 = ((MR_String) ((MR_hl_field(0, Info_194, (MR_Integer) 0))));

        succeeded = mercury__string__contains_char_2_p_0(DumpOptions_195, (MR_Char) 71);
        if (succeeded)
        {
          MR_String Var_157;

          Var_157 = mercury__string__string_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_can_cgc_0), ((MR_Box) (CanCGC_50)));
          mercury__io__write_string_4_p_0(Stream_8, IndentStr_14);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% Compile time garbage collect: ");
          mercury__io__write_string_4_p_0(Stream_8, Var_157);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
        }
        VarStr_193 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_12, VarNamePrint_13, Var_189);
        switch (CanFail_49) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            OpStr_51 = (MR_String) "\?=";
            break;
          case (MR_Integer) 1:
            OpStr_51 = (MR_String) "=>";
            break;
        }
        mercury__io__write_string_4_p_0(Stream_8, IndentStr_14);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% ");
        mercury__io__write_string_4_p_0(Stream_8, VarStr_193);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
        mercury__io__write_string_4_p_0(Stream_8, OpStr_51);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
        hlds__hlds_out__hlds_out_goal__write_functor_and_submodes_8_p_0(InfoGoal_7, Stream_8, Indent_9, ConsId_190, ArgVars_191, ArgModes_192);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word X_15 = ((MR_Word) ((MR_hl_field(2, Unification_10, (MR_Integer) 0))));
        MR_Word Y_16 = ((MR_Word) ((MR_hl_field(2, Unification_10, (MR_Integer) 1))));
        MR_String XStr_17;
        MR_String YStr_18;

        XStr_17 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_12, VarNamePrint_13, X_15);
        YStr_18 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_12, VarNamePrint_13, Y_16);
        mercury__io__write_string_4_p_0(Stream_8, IndentStr_14);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% ");
        mercury__io__write_string_4_p_0(Stream_8, XStr_17);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " := ");
        mercury__io__write_string_4_p_0(Stream_8, YStr_18);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Unification_10, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word X_185 = ((MR_Word) ((MR_hl_field(3, Unification_10, (MR_Integer) 1))));
            MR_Word Y_186 = ((MR_Word) ((MR_hl_field(3, Unification_10, (MR_Integer) 2))));
            MR_String XStr_187;
            MR_String YStr_188;

            XStr_187 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_12, VarNamePrint_13, X_185);
            YStr_188 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_12, VarNamePrint_13, Y_186);
            mercury__io__write_string_4_p_0(Stream_8, IndentStr_14);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% ");
            mercury__io__write_string_4_p_0(Stream_8, XStr_187);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " == ");
            mercury__io__write_string_4_p_0(Stream_8, YStr_188);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Mode_52 = ((MR_Word) ((MR_hl_field(3, Unification_10, (MR_Integer) 1))));
            MR_Word TypeInfoVars_53 = ((MR_Word) ((MR_hl_field(3, Unification_10, (MR_Integer) 3))));
            MR_String CanFailStr_54;
            MR_Word InstVarSet_55;
            MR_String ModeStr_56;
            MR_String TypeInfoVarsStr_57;
            MR_Word CanFail_196 = ((MR_Unsigned) ((MR_hl_field(3, Unification_10, (MR_Integer) 2))) & (MR_Integer) 1);

            switch (CanFail_196) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                CanFailStr_54 = (MR_String) "can_fail";
                break;
              case (MR_Integer) 1:
                CanFailStr_54 = (MR_String) "cannot_fail";
                break;
            }
            InstVarSet_55 = ((MR_Word) ((MR_hl_field(0, InfoGoal_7, (MR_Integer) 5))));
            ModeStr_56 = hlds__hlds_out__hlds_out_mode__mercury_unify_mode_to_string_2_f_0(InstVarSet_55, Mode_52);
            mercury__io__write_string_4_p_0(Stream_8, IndentStr_14);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% ");
            mercury__io__write_string_4_p_0(Stream_8, CanFailStr_54);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", mode: ");
            mercury__io__write_string_4_p_0(Stream_8, ModeStr_56);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
            TypeInfoVarsStr_57 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_12, VarNamePrint_13, TypeInfoVars_53);
            mercury__io__write_string_4_p_0(Stream_8, IndentStr_14);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% type-info vars: ");
            mercury__io__write_string_4_p_0(Stream_8, TypeInfoVarsStr_57);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_functor_and_submodes_8_p_0_1(
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
hlds__hlds_out__hlds_out_goal__write_functor_and_submodes_8_p_0(
  MR_Word InfoGoal_9,
  MR_Word Stream_10,
  MR_Unsigned Indent_11,
  MR_Word ConsId_12,
  MR_Word ArgVars_13,
  MR_Word ArgUnifyModes0_14)
{
  MR_bool succeeded;
  MR_String ConsIdStr_16;

  ConsIdStr_16 = parse_tree__parse_tree_out_cons_id__cons_id_and_arity_to_string_1_f_0(ConsId_12);
  if ((ArgVars_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mercury__io__write_string_4_p_0(Stream_10, ConsIdStr_16);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
  }
  else
  {
    MR_Word VarNameSrc_19 = ((MR_Word) ((MR_hl_field(0, InfoGoal_9, (MR_Integer) 2))));
    MR_Word VarNamePrint_20 = ((MR_Unsigned) ((MR_hl_field(0, InfoGoal_9, (MR_Integer) 3))) & (MR_Integer) 3);
    MR_String ArgVarsStr_21;
    MR_Word Info_22;
    MR_String DumpOptions_23;

    ArgVarsStr_21 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_19, VarNamePrint_20, ArgVars_13);
    mercury__io__write_string_4_p_0(Stream_10, ConsIdStr_16);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "(");
    mercury__io__write_string_4_p_0(Stream_10, ArgVarsStr_21);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")\n");
    Info_22 = ((MR_Word) ((MR_hl_field(0, InfoGoal_9, (MR_Integer) 0))));
    DumpOptions_23 = ((MR_String) ((MR_hl_field(0, Info_22, (MR_Integer) 0))));
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_23, (MR_Char) 97);
    if (succeeded)
    {
      MR_Word InstVarSet_24 = ((MR_Word) ((MR_hl_field(0, InfoGoal_9, (MR_Integer) 5))));
      MR_String IndentStr_25;
      MR_Word ArgUnifyModes_26;

      IndentStr_25 = libs__indent__indent2_string_1_f_0(Indent_11);
      mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[3]), ArgUnifyModes0_14, &ArgUnifyModes_26);
      succeeded = mercury__string__contains_char_2_p_0(DumpOptions_23, (MR_Char) 121);
      if (succeeded)
      {
        mercury__io__write_string_4_p_0(Stream_10, IndentStr_25);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "% arg-modes\n");
        hlds__hlds_out__hlds_out_mode__mercury_output_structured_unify_mode_list_8_p_0(Stream_10, (MR_Integer) 1, InstVarSet_24, (MR_Integer) 1, Indent_11, ArgUnifyModes_26);
      }
      else
        hlds__hlds_out__hlds_out_goal__write_arg_modes_7_p_0(Stream_10, InstVarSet_24, IndentStr_25, (MR_Integer) 1, ArgUnifyModes_26);
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
  MR_Unsigned Indent_14)
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
  MR_Unsigned Indent_4,
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

static MR_bool MR_CALL 
hlds__hlds_out__hlds_out_goal____Unify____hlds_out_info_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_out__hlds_out_goal____Unify____hlds_out_info_goal_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal____Compare____hlds_out_info_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_out__hlds_out_goal____Compare____hlds_out_info_goal_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__hlds_out__hlds_out_goal__init(void)
{
}

void mercury__hlds__hlds_out__hlds_out_goal__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hlds_out__hlds_out_goal__hlds__hlds_out__hlds_out_goal__type_ctor_info_hlds_out_info_goal_0);
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
