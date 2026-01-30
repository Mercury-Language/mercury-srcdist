/*
** Automatically generated from `hlds_out_goal.m'
** by the Mercury compiler,
** version rotd-2026-01-30
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
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
#include "hlds.hlds_markers.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_clause.mih"
#include "parse_tree.parse_tree_out_cons_id.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_inst.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_out_type.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "parse_tree.write_error_spec.mih"
#include "recompilation.record_uses.mih"
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
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"
#include "transform_hlds.ctgc.util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_out__hlds_out_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_goal__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

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
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__format_goal_scope__2437__1_4_p_0(
  MR_Word HeadVar__1_373,
  MR_Word HeadVar__3_375,
  MR_Word * HeadVar__4_376);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__format_goal_scope__2426__1_4_p_0(
  MR_Word HeadVar__1_366,
  MR_Word HeadVar__3_368,
  MR_Word * HeadVar__4_369);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__format_goal_foreign_proc__1937__1_4_p_0(
  MR_Word HeadVar__1_105,
  MR_Word HeadVar__3_107,
  MR_Word * HeadVar__4_108);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_6_p_0(
  MR_String IndentStr_7,
  MR_Word MutableVar_8,
  MR_Word STATE_VARIABLE_AddCommaNewline_0_13,
  MR_Word * STATE_VARIABLE_AddCommaNewline_14,
  MR_Word STATE_VARIABLE_State_0_15,
  MR_Word * STATE_VARIABLE_State_16);

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
hlds__hlds_out__hlds_out_goal__limit_size_of_bound_functors_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__limit_size_of_bound_functors_3_p_0(
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
hlds__hlds_out__hlds_out_goal__case_to_string_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_goal_expr_6_p_0(
  MR_Word InfoGoal_7,
  MR_Unsigned Indent_8,
  MR_String Follow_9,
  MR_Word GoalExpr_10,
  MR_Word STATE_VARIABLE_State_0_49,
  MR_Word * STATE_VARIABLE_State_50);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_goal_conj_6_p_0(
  MR_Word InfoGoal_7,
  MR_Unsigned Indent_8,
  MR_String Follow_9,
  MR_Word GoalExpr_10,
  MR_Word STATE_VARIABLE_State_0_20,
  MR_Word * STATE_VARIABLE_State_21);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_conj_8_p_0(
  MR_Word InfoGoal_9,
  MR_Unsigned Indent_10,
  MR_String Follow_11,
  MR_String Separator_12,
  MR_Word Goal1_13,
  MR_Word Goals1_14,
  MR_Word STATE_VARIABLE_State_0_21,
  MR_Word * STATE_VARIABLE_State_22);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_goal__format_cases_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_cases_6_p_0(
  MR_Word InfoGoal_7,
  MR_Unsigned Indent_8,
  MR_Word Var_9,
  MR_Word CasesList_10,
  MR_Word STATE_VARIABLE_State_0_15,
  MR_Word * STATE_VARIABLE_State_16);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_goal_shorthand_6_p_0(
  MR_Word InfoGoal_7,
  MR_Unsigned Indent_8,
  MR_String Follow_9,
  MR_Word GoalExpr_10,
  MR_Word STATE_VARIABLE_State_0_38,
  MR_Word * STATE_VARIABLE_State_39);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_goal_scope_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_goal_scope_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_goal_scope_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_goal_scope_6_p_0(
  MR_Word STATE_VARIABLE_InfoGoal_0_52,
  MR_Unsigned Indent_8,
  MR_String Follow_9,
  MR_Word GoalExpr_10,
  MR_Word STATE_VARIABLE_State_0_53,
  MR_Word * STATE_VARIABLE_State_54);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_goal_if_then_else_6_p_0(
  MR_Word InfoGoal_7,
  MR_Unsigned Indent_8,
  MR_String Follow_9,
  MR_Word GoalExpr_10,
  MR_Word STATE_VARIABLE_State_0_32,
  MR_Word * STATE_VARIABLE_State_33);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_goal_negation_6_p_0(
  MR_Word InfoGoal_7,
  MR_Unsigned Indent_8,
  MR_String Follow_9,
  MR_Word GoalExpr_10,
  MR_Word STATE_VARIABLE_State_0_14,
  MR_Word * STATE_VARIABLE_State_15);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_goal__format_goal_switch_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_goal_switch_6_p_0(
  MR_Word InfoGoal_7,
  MR_Unsigned Indent_8,
  MR_String Follow_9,
  MR_Word GoalExpr_10,
  MR_Word STATE_VARIABLE_State_0_22,
  MR_Word * STATE_VARIABLE_State_23);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_goal_plain_call_6_p_0(
  MR_Word InfoGoal_7,
  MR_Unsigned Indent_8,
  MR_String Follow_9,
  MR_Word GoalExpr_10,
  MR_Word STATE_VARIABLE_State_0_46,
  MR_Word * STATE_VARIABLE_State_47);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_unify_rhs_2_6_p_0(
  MR_Word InfoGoal_7,
  MR_Unsigned Indent_8,
  MR_Word MaybeType_9,
  MR_Word RHS_10,
  MR_Word STATE_VARIABLE_State_0_57,
  MR_Word * STATE_VARIABLE_State_58);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_goal_unify_6_p_0(
  MR_Word InfoGoal_7,
  MR_Unsigned Indent_8,
  MR_String Follow_9,
  MR_Word GoalExpr_10,
  MR_Word STATE_VARIABLE_State_0_33,
  MR_Word * STATE_VARIABLE_State_34);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_goal__atomic_interface_vars_to_string_4_f_0(
  MR_Word VarNameSrc_6,
  MR_Word VarNamePrint_7,
  MR_String CompName_8,
  MR_Word CompState_9);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__maybe_add_comma_newline_3_p_0(
  MR_Word AddCommaNewline_4,
  MR_Word STATE_VARIABLE_State_0_6,
  MR_Word * STATE_VARIABLE_State_7);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_goal_foreign_proc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_goal_foreign_proc_6_p_0(
  MR_Word InfoGoal_7,
  MR_Unsigned Indent_8,
  MR_String Follow_9,
  MR_Word GoalExpr_10,
  MR_Word STATE_VARIABLE_State_0_37,
  MR_Word * STATE_VARIABLE_State_38);

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
hlds__hlds_out__hlds_out_goal__format_goal_generic_call_6_p_0(
  MR_Word InfoGoal_7,
  MR_Unsigned Indent_8,
  MR_String Follow_9,
  MR_Word GoalExpr_10,
  MR_Word STATE_VARIABLE_State_0_50,
  MR_Word * STATE_VARIABLE_State_51);

static MR_Word MR_CALL 
hlds__hlds_out__hlds_out_goal__write_cast_as_pred_or_func_1_f_0(
  MR_Word CastType_3);

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_goal__format_ho_arg_regs_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_ho_arg_regs_4_p_0(
  MR_Unsigned Indent_5,
  MR_Word MaybeArgRegs_6,
  MR_Word STATE_VARIABLE_State_0_12,
  MR_Word * STATE_VARIABLE_State_13);

static MR_String MR_CALL 
hlds__hlds_out__hlds_out_goal__sym_name_and_args_to_string_4_f_0(
  MR_Word VarNameSrc_6,
  MR_Word VarNamePrint_7,
  MR_Word PredName_8,
  MR_Word ArgVars_9);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_unification_5_p_0(
  MR_Word InfoGoal_6,
  MR_Unsigned Indent_7,
  MR_Word Unification_8,
  MR_Word STATE_VARIABLE_State_0_60,
  MR_Word * STATE_VARIABLE_State_61);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_functor_and_submodes_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_functor_and_submodes_7_p_0(
  MR_Word InfoGoal_8,
  MR_Unsigned Indent_9,
  MR_Word ConsId_10,
  MR_Word ArgVars_11,
  MR_Word ArgUnifyModes0_12,
  MR_Word STATE_VARIABLE_State_0_27,
  MR_Word * STATE_VARIABLE_State_28);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_arg_modes_6_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_State_0_5,
  MR_Word * STATE_VARIABLE_State_6);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_short_reuse_description_5_p_0(
  MR_Word ShortDescription_6,
  MR_Word VarNameSrc_7,
  MR_Word VarNamePrint_8,
  MR_Word STATE_VARIABLE_State_0_16,
  MR_Word * STATE_VARIABLE_State_17);

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_llds_code_gen_info_7_p_0(
  MR_Word Info_8,
  MR_Word GoalInfo_9,
  MR_Word VarNameSrc_10,
  MR_Word VarNamePrint_11,
  MR_Unsigned Indent_12,
  MR_Word STATE_VARIABLE_State_0_64,
  MR_Word * STATE_VARIABLE_State_65);

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

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_8[4][7];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_9[1][9];

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
    ((MR_Box) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_goal_feature_0))
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
    ((MR_Box) ((MR_Unsigned) 12U)),
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
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
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
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__format_functor_and_submodes_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_4[2])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__format_ho_arg_regs_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_8[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__format_goal_foreign_proc_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_4[3])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__format_goal_switch_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_8[3])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__format_goal_scope_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_8[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__format_goal_scope_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_4[3])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__format_cases_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_4[3])),
    ((MR_Box) (hlds__hlds_out__hlds_out_goal__case_to_string_4_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_3[2][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[1])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_output__pt_output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_4[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_4[4][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__string__builder__handle__arity0__string__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
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

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_8[4][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__var_db__parse_tree__var_db__type_ctor_info_var_name_source_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal__hlds__hlds_out__hlds_out_goal__type_ctor_info_hlds_out_info_goal_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_goal__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_compiletime_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_goal_scalar_common_9[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
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


static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

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
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__format_goal_scope__2437__1_4_p_0(
  MR_Word HeadVar__1_373,
  MR_Word HeadVar__3_375,
  MR_Word * HeadVar__4_376)
{
  parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_114_117_110_116_105_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[1]), HeadVar__1_373, HeadVar__3_375, HeadVar__4_376);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__format_goal_scope__2426__1_4_p_0(
  MR_Word HeadVar__1_366,
  MR_Word HeadVar__3_368,
  MR_Word * HeadVar__4_369)
{
  parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_99_111_109_112_105_108_101_116_105_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[1]), HeadVar__1_366, HeadVar__3_368, HeadVar__4_369);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__format_goal_foreign_proc__1937__1_4_p_0(
  MR_Word HeadVar__1_105,
  MR_Word HeadVar__3_107,
  MR_Word * HeadVar__4_108)
{
  parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_114_117_110_116_105_109_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[1]), HeadVar__1_105, HeadVar__3_107, HeadVar__4_108);
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) & (MR_Integer) 3);
    MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 3))) & (MR_Integer) 3);
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 3))) & (MR_Integer) 3);
    MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) & (MR_Integer) 3);
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));

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
hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_6_p_0(
  MR_String IndentStr_7,
  MR_Word MutableVar_8,
  MR_Word STATE_VARIABLE_AddCommaNewline_0_13,
  MR_Word * STATE_VARIABLE_AddCommaNewline_14,
  MR_Word STATE_VARIABLE_State_0_15,
  MR_Word * STATE_VARIABLE_State_16)
{
  MR_String MutableName_11 = ((MR_String) ((MR_hl_field(0, MutableVar_8, 0))));
  MR_String StateVarName_12 = ((MR_String) ((MR_hl_field(0, MutableVar_8, 1))));
  MR_Word STATE_VARIABLE_State_1_17;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_33;

  switch (STATE_VARIABLE_AddCommaNewline_0_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_State_1_17 = STATE_VARIABLE_State_0_15;
      break;
    case (MR_Integer) 1:
      mercury__string__builder__append_string_3_p_0((MR_String) ",\n", STATE_VARIABLE_State_0_15, &STATE_VARIABLE_State_1_17);
      break;
  }
  mercury__string__builder__append_string_3_p_0(IndentStr_7, STATE_VARIABLE_State_1_17, &Var_27);
  mercury__string__builder__append_string_3_p_0((MR_String) "state(", Var_27, &Var_28);
  mercury__string__builder__append_string_3_p_0(MutableName_11, Var_28, &Var_30);
  mercury__string__builder__append_string_3_p_0((MR_String) ", !", Var_30, &Var_31);
  mercury__string__builder__append_string_3_p_0(StateVarName_12, Var_31, &Var_33);
  mercury__string__builder__append_string_3_p_0((MR_String) ")", Var_33, STATE_VARIABLE_State_16);
  *STATE_VARIABLE_AddCommaNewline_14 = (MR_Integer) 1;
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

  hlds__hlds_out__hlds_out_goal__limit_size_of_inst_3_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Inst_6);
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
    MR_Word InitInst0_7 = ((MR_Word) ((MR_hl_field(0, Mode0_5, 0))));
    MR_Word FinalInst0_8 = ((MR_Word) ((MR_hl_field(0, Mode0_5, 1))));
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
    MR_Word Name_11 = ((MR_Word) ((MR_hl_field(1, Mode0_5, 0))));
    MR_Word ArgInsts0_12 = ((MR_Word) ((MR_hl_field(1, Mode0_5, 1))));
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
  MR_Word LI0_5 = ((MR_Word) ((MR_hl_field(0, UnifyMode0_3, 0))));
  MR_Word LF0_6 = ((MR_Word) ((MR_hl_field(0, UnifyMode0_3, 1))));
  MR_Word RI0_7 = ((MR_Word) ((MR_hl_field(0, UnifyMode0_3, 2))));
  MR_Word RF0_8 = ((MR_Word) ((MR_hl_field(0, UnifyMode0_3, 3))));
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

  hlds__hlds_out__hlds_out_goal__limit_size_of_mode_3_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Mode_6);
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

  hlds__hlds_out__hlds_out_goal__limit_size_of_mode_3_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Mode_6);
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
          MR_Word Uniq_36 = ((MR_Unsigned) ((MR_hl_field(1, Inst0_5, 0))) & (MR_Integer) 7);
          MR_Word HOInstInfo0_37 = ((MR_Word) ((MR_hl_field(1, Inst0_5, 1))));
          MR_Word HOInstInfo_38;

          if ((HOInstInfo0_37 == (MR_Word) ((MR_Unsigned) 0U)))
            HOInstInfo_38 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_Word PredInstInfo0_57 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_37), (MR_Integer) 1));
            MR_Word PredOrFunc_58 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_57, 0))) & (MR_Integer) 1);
            MR_Word ArgModes0_59 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_57, 1))));
            MR_Word RegInfo_60 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_57, 2))));
            MR_Word Detism_61 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_57, 3))) & (MR_Integer) 7);
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
          MR_Word TestResults_19 = ((MR_Word) ((MR_hl_field(2, Inst0_5, 1))));
          MR_Word BoundFunctors0_20 = ((MR_Word) ((MR_hl_field(2, Inst0_5, 2))));
          MR_Word BoundFunctors_21;
          MR_Integer Var_32 = (MR_Integer) ((MR_Unsigned) Levels_4 - (MR_Unsigned) 1);
          MR_Word Uniq_39 = ((MR_Unsigned) ((MR_hl_field(2, Inst0_5, 0))) & (MR_Integer) 7);

          hlds__hlds_out__hlds_out_goal__limit_size_of_bound_functors_3_p_0(Var_32, BoundFunctors0_20, &BoundFunctors_21);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *Inst_6 = base;
            MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_39));
            MR_hl_field(2, base, 1) = ((MR_Box) (TestResults_19));
            MR_hl_field(2, base, 2) = ((MR_Box) (BoundFunctors_21));
          }
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Inst0_5, 0))))) {
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
              MR_Word Vars_22 = ((MR_Word) ((MR_hl_field(3, Inst0_5, 1))));
              MR_Word SubInst0_23 = ((MR_Word) ((MR_hl_field(3, Inst0_5, 2))));
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
              MR_Word Uniq_16 = ((MR_Unsigned) ((MR_hl_field(3, Inst0_5, 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo0_17 = ((MR_Word) ((MR_hl_field(3, Inst0_5, 2))));
              MR_Word HOInstInfo_18;

              if ((HOInstInfo0_17 == (MR_Word) ((MR_Unsigned) 0U)))
                HOInstInfo_18 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word PredInstInfo0_46 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_17), (MR_Integer) 1));
                MR_Word PredOrFunc_47 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_46, 0))) & (MR_Integer) 1);
                MR_Word ArgModes0_48 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_46, 1))));
                MR_Word RegInfo_49 = ((MR_Word) ((MR_hl_field(0, PredInstInfo0_46, 2))));
                MR_Word Detism_50 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo0_46, 3))) & (MR_Integer) 7);
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
hlds__hlds_out__hlds_out_goal__limit_size_of_bound_functors_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Inst_6;

  hlds__hlds_out__hlds_out_goal__limit_size_of_inst_3_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Inst_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Inst_6));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__limit_size_of_bound_functors_3_p_0(
  MR_Integer Levels_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word BoundFunctor0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word BoundFunctors0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word BoundFunctor_8;
    MR_Word BoundFunctors_9;
    MR_Word ConsId_10 = ((MR_Word) ((MR_hl_field(0, BoundFunctor0_6, 0))));
    MR_Word ArgInsts0_11 = ((MR_Word) ((MR_hl_field(0, BoundFunctor0_6, 1))));
    MR_Word ArgInsts_12;
    MR_Word Var_13;

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_13, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_10[0]));
      MR_hl_field(0, Var_13, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__limit_size_of_bound_functors_3_p_0_1));
      MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_13, 3) = ((MR_Box) (Levels_1));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Var_13, ArgInsts0_11, &ArgInsts_12);
    {
      BoundFunctor_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, BoundFunctor_8, 0) = ((MR_Box) (ConsId_10));
      MR_hl_field(0, BoundFunctor_8, 1) = ((MR_Box) (ArgInsts_12));
    }
    hlds__hlds_out__hlds_out_goal__limit_size_of_bound_functors_3_p_0(Levels_1, BoundFunctors0_7, &BoundFunctors_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (BoundFunctor_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (BoundFunctors_9));
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
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
  MR_Word Inst_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
  MR_Word VarNameSrc_10 = ((MR_Word) ((MR_hl_field(0, InfoGoal_5, 2))));
  MR_Word VarNamePrint_11 = ((MR_Unsigned) ((MR_hl_field(0, InfoGoal_5, 3))) & (MR_Integer) 3);
  MR_String VarStr_12;
  MR_Word ModuleInfo_13;
  MR_Word TVarSet_14;
  MR_Word InstVarSet_15;
  MR_Word InstPieces_20;
  MR_Word InstLines_21;
  MR_Word Var_32;

  VarStr_12 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_10, VarNamePrint_11, Var_7);
  ModuleInfo_13 = ((MR_Word) ((MR_hl_field(0, InfoGoal_5, 1))));
  TVarSet_14 = ((MR_Word) ((MR_hl_field(0, InfoGoal_5, 4))));
  InstVarSet_15 = ((MR_Word) ((MR_hl_field(0, InfoGoal_5, 5))));
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (TVarSet_14));
  }
  InstPieces_20 = hlds__error_msg_inst__error_msg_inst_10_f_0(ModuleInfo_13, InstVarSet_15, (MR_Integer) 1, Var_32, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &hlds__hlds_out__hlds_out_goal_scalar_common_1[5])), (MR_Word) (MR_mkword(1, &hlds__hlds_out__hlds_out_goal_scalar_common_1[5])), (MR_Word) (MR_mkword(1, &hlds__hlds_out__hlds_out_goal_scalar_common_1[5])), Inst_8);
  InstLines_21 = parse_tree__write_error_spec__error_pieces_to_std_lines_1_f_0(InstPieces_20);
  succeeded = parse_tree__write_error_spec__do_lines_fit_in_n_code_points_2_p_0((MR_Integer) 40, InstLines_21);
  if (succeeded)
  {
    MR_String ShortInstStr_22;
    MR_String Var_83;
    MR_String Var_85;
    MR_String Var_86;
    MR_String Var_88;

    ShortInstStr_22 = parse_tree__write_error_spec__error_lines_to_one_line_string_1_f_0(InstLines_21);
    Var_83 = mercury__string__f_43_43_2_f_0(ShortInstStr_22, (MR_String) "\n");
    Var_85 = mercury__string__f_43_43_2_f_0((MR_String) " -> ", Var_83);
    Var_86 = mercury__string__f_43_43_2_f_0(VarStr_12, Var_85);
    Var_88 = mercury__string__f_43_43_2_f_0((MR_String) "%   ", Var_86);
    Str_9 = mercury__string__f_43_43_2_f_0(IndentStr_6, Var_88);
  }
  else
  {
    MR_String Prefix_23;
    MR_String LongInstStr_24;
    MR_String Var_90;
    MR_String Var_91;
    MR_String Var_93;

    Prefix_23 = mercury__string__f_43_43_2_f_0(IndentStr_6, (MR_String) "%   ");
    LongInstStr_24 = parse_tree__write_error_spec__error_lines_to_multi_line_string_2_f_0(Prefix_23, InstLines_21);
    Var_90 = mercury__string__f_43_43_2_f_0((MR_String) " ->\n", LongInstStr_24);
    Var_91 = mercury__string__f_43_43_2_f_0(VarStr_12, Var_90);
    Var_93 = mercury__string__f_43_43_2_f_0((MR_String) "%   ", Var_91);
    Str_9 = mercury__string__f_43_43_2_f_0(IndentStr_6, Var_93);
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
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
  MR_Word Inst_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
  MR_Word VarNameSrc_10 = ((MR_Word) ((MR_hl_field(0, InfoGoal_5, 2))));
  MR_Word VarNamePrint_11 = ((MR_Unsigned) ((MR_hl_field(0, InfoGoal_5, 3))) & (MR_Integer) 3);
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
  MR_Word ConsId_7 = ((MR_Word) ((MR_hl_field(0, TaggedConsId_4, 0))));

  *ConsTag_6 = ((MR_Word) ((MR_hl_field(0, TaggedConsId_4, 1))));
  *ConsName_5 = parse_tree__parse_tree_out_cons_id__cons_id_and_arity_to_string_1_f_0(ConsId_7);
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_goal__case_to_string_4_f_0_1(
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

MR_String MR_CALL 
hlds__hlds_out__hlds_out_goal__case_to_string_4_f_0(
  MR_Word InfoGoal_6,
  MR_Unsigned Indent_7,
  MR_Word Var_8,
  MR_Word Case_9)
{
  MR_String Str_10;
  MR_Word State0_11;
  MR_Word State_12;
  MR_Word MainConsId_13;
  MR_Word OtherConsIds_14;
  MR_Word Goal_15;
  MR_String IndentStr_16;
  MR_Word VarNameSrc_17;
  MR_Word VarNamePrint_18;
  MR_String VarStr_19;
  MR_Word ConsIdStrs_20;
  MR_String ConsIdsStr_21;
  MR_Word Var_23;
  MR_Word STATE_VARIABLE_State_1_25;
  MR_Unsigned Var_26;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_42;

  State0_11 = mercury__string__builder__init_0_f_0();
  MainConsId_13 = ((MR_Word) ((MR_hl_field(0, Case_9, 0))));
  OtherConsIds_14 = ((MR_Word) ((MR_hl_field(0, Case_9, 1))));
  Goal_15 = ((MR_Word) ((MR_hl_field(0, Case_9, 2))));
  IndentStr_16 = libs__indent__indent2_string_1_f_0(Indent_7);
  VarNameSrc_17 = ((MR_Word) ((MR_hl_field(0, InfoGoal_6, 2))));
  VarNamePrint_18 = ((MR_Unsigned) ((MR_hl_field(0, InfoGoal_6, 3))) & (MR_Integer) 3);
  VarStr_19 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_17, VarNamePrint_18, Var_8);
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (MainConsId_13));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) (OtherConsIds_14));
  }
  ConsIdStrs_20 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[10]), Var_23);
  ConsIdsStr_21 = mercury__string__join_list_2_f_0((MR_String) " or ", ConsIdStrs_20);
  mercury__string__builder__append_string_3_p_0(IndentStr_16, State0_11, &Var_36);
  mercury__string__builder__append_string_3_p_0((MR_String) "% ", Var_36, &Var_37);
  mercury__string__builder__append_string_3_p_0(VarStr_19, Var_37, &Var_39);
  mercury__string__builder__append_string_3_p_0((MR_String) " has functor ", Var_39, &Var_40);
  mercury__string__builder__append_string_3_p_0(ConsIdsStr_21, Var_40, &Var_42);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_42, &STATE_VARIABLE_State_1_25);
  Var_26 = (Indent_7 + (MR_Unsigned) 1U);
  hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0(InfoGoal_6, Var_26, (MR_String) "\n", Goal_15, STATE_VARIABLE_State_1_25, &State_12);
  Str_10 = mercury__string__builder__to_string_1_f_0(State_12);
  return Str_10;
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
        MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, RHS_9, 0))));

        Str_10 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(VarTable_7, VarNamePrint_8, Var_11);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ConsId0_12 = ((MR_Word) ((MR_hl_field(1, RHS_9, 0))));
        MR_Word IsExistConstruct_13 = ((MR_Unsigned) ((MR_hl_field(1, RHS_9, 1))) & (MR_Integer) 1);
        MR_Word ArgVars_14 = ((MR_Word) ((MR_hl_field(1, RHS_9, 2))));
        MR_Word ConsId_19;
        MR_Word Var_29;
        MR_Word SymName0_15;
        MR_Integer Arity_16;
        MR_Word TypeCtor_17;
        MR_Word Var_27;

        succeeded = (IsExistConstruct_13 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) ConsId0_12)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_27 = (MR_Word) (MR_body((MR_Word) (ConsId0_12), (MR_Integer) 1));
            SymName0_15 = ((MR_Word) ((MR_hl_field(0, Var_27, 0))));
            Arity_16 = ((MR_Integer) ((MR_hl_field(0, Var_27, 1))));
            TypeCtor_17 = ((MR_Word) ((MR_hl_field(0, Var_27, 2))));
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          MR_Word SymName_18;
          MR_Word Var_28;

          parse_tree__prog_type__add_new_prefix_2_p_0(SymName0_15, &SymName_18);
          {
            Var_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_28, 0) = ((MR_Box) (SymName_18));
            MR_hl_field(0, Var_28, 1) = ((MR_Box) (Arity_16));
            MR_hl_field(0, Var_28, 2) = ((MR_Box) (TypeCtor_17));
          }
          ConsId_19 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_28)));
        }
        else
          ConsId_19 = ConsId0_12;
        {
          Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_29, 0) = ((MR_Box) (VarTable_7));
        }
        Str_10 = hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(ModuleInfo_6, Var_29, VarNamePrint_8, ConsId_19, ArgVars_14);
      }
      break;
    case (MR_Integer) 2:
      Str_10 = (MR_String) "lambda goal";
      break;
  }
  return Str_10;
}

void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_unify_rhs_10_p_0(
  MR_Word Info_11,
  MR_Word ModuleInfo_12,
  MR_Word VarNameSrc_13,
  MR_Word VarNamePrint_14,
  MR_Word TVarSet_15,
  MR_Word InstVarSet_16,
  MR_Unsigned Indent_17,
  MR_Word RHS_18,
  MR_Word STATE_VARIABLE_State_0_22,
  MR_Word * STATE_VARIABLE_State_23)
{
  MR_Word InfoGoal_21;

  {
    InfoGoal_21 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InfoGoal_21, 0) = ((MR_Box) (Info_11));
    MR_hl_field(0, InfoGoal_21, 1) = ((MR_Box) (ModuleInfo_12));
    MR_hl_field(0, InfoGoal_21, 2) = ((MR_Box) (VarNameSrc_13));
    MR_hl_field(0, InfoGoal_21, 3) = (MR_Box) ((MR_Unsigned) (VarNamePrint_14));
    MR_hl_field(0, InfoGoal_21, 4) = ((MR_Box) (TVarSet_15));
    MR_hl_field(0, InfoGoal_21, 5) = ((MR_Box) (InstVarSet_16));
    MR_hl_field(0, InfoGoal_21, 6) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__hlds_out__hlds_out_goal__format_unify_rhs_2_6_p_0(InfoGoal_21, Indent_17, (MR_Word) ((MR_Unsigned) 0U), RHS_18, STATE_VARIABLE_State_0_22, STATE_VARIABLE_State_23);
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
  MR_Word State0_22;
  MR_Word State_23;
  MR_String Str_24;
  MR_Word InfoGoal_28;

  State0_22 = mercury__string__builder__init_0_f_0();
  {
    InfoGoal_28 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InfoGoal_28, 0) = ((MR_Box) (Info_12));
    MR_hl_field(0, InfoGoal_28, 1) = ((MR_Box) (ModuleInfo_14));
    MR_hl_field(0, InfoGoal_28, 2) = ((MR_Box) (VarNameSrc_15));
    MR_hl_field(0, InfoGoal_28, 3) = (MR_Box) ((MR_Unsigned) (VarNamePrint_16));
    MR_hl_field(0, InfoGoal_28, 4) = ((MR_Box) (TVarSet_17));
    MR_hl_field(0, InfoGoal_28, 5) = ((MR_Box) (InstVarSet_18));
    MR_hl_field(0, InfoGoal_28, 6) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__hlds_out__hlds_out_goal__format_unify_rhs_2_6_p_0(InfoGoal_28, Indent_19, (MR_Word) ((MR_Unsigned) 0U), RHS_20, State0_22, &State_23);
  Str_24 = mercury__string__builder__to_string_1_f_0(State_23);
  mercury__io__write_string_4_p_0(Stream_13, Str_24);
}

void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_var_to_abs_locns_7_p_0(
  MR_Word Stream_8,
  MR_Word VarNameSrc_9,
  MR_Word VarNamePrint_10,
  MR_Unsigned Indent_11,
  MR_Word VarLocs_12)
{
  MR_Word State0_14;
  MR_Word State_15;
  MR_String Str_16;

  State0_14 = mercury__string__builder__init_0_f_0();
  hlds__hlds_out__hlds_out_goal__format_var_to_abs_locns_6_p_0(VarNameSrc_9, VarNamePrint_10, Indent_11, VarLocs_12, State0_14, &State_15);
  Str_16 = mercury__string__builder__to_string_1_f_0(State_15);
  mercury__io__write_string_4_p_0(Stream_8, Str_16);
}

void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_write_goal_7_p_0(
  MR_Word InfoGoal_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_String Follow_11,
  MR_Word Goal_12)
{
  MR_Word State0_14;
  MR_Word State_15;
  MR_String Str_16;

  State0_14 = mercury__string__builder__init_0_f_0();
  hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0(InfoGoal_8, Indent_10, Follow_11, Goal_12, State0_14, &State_15);
  Str_16 = mercury__string__builder__to_string_1_f_0(State_15);
  mercury__io__write_string_4_p_0(Stream_9, Str_16);
}

void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_goal_list_7_p_0(
  MR_Word InfoGoal_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_String Separator_11,
  MR_Word Goals_12)
{
  MR_Word State0_14;
  MR_Word State_15;
  MR_String Str_16;

  State0_14 = mercury__string__builder__init_0_f_0();
  hlds__hlds_out__hlds_out_goal__format_goal_list_6_p_0(InfoGoal_8, Indent_10, Separator_11, Goals_12, State0_14, &State_15);
  Str_16 = mercury__string__builder__to_string_1_f_0(State_15);
  mercury__io__write_string_4_p_0(Stream_9, Str_16);
}

void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_goal_nl_11_p_0(
  MR_Word Info_12,
  MR_Word ModuleInfo_13,
  MR_Word VarNameSrc_14,
  MR_Word VarNamePrint_15,
  MR_Word TVarSet_16,
  MR_Word InstVarSet_17,
  MR_Unsigned Indent_18,
  MR_String Follow_19,
  MR_Word Goal_20,
  MR_Word STATE_VARIABLE_State_0_22,
  MR_Word * STATE_VARIABLE_State_23)
{
  MR_Word STATE_VARIABLE_State_1_24;
  MR_Word InfoGoal_27;

  {
    InfoGoal_27 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InfoGoal_27, 0) = ((MR_Box) (Info_12));
    MR_hl_field(0, InfoGoal_27, 1) = ((MR_Box) (ModuleInfo_13));
    MR_hl_field(0, InfoGoal_27, 2) = ((MR_Box) (VarNameSrc_14));
    MR_hl_field(0, InfoGoal_27, 3) = (MR_Box) ((MR_Unsigned) (VarNamePrint_15));
    MR_hl_field(0, InfoGoal_27, 4) = ((MR_Box) (TVarSet_16));
    MR_hl_field(0, InfoGoal_27, 5) = ((MR_Box) (InstVarSet_17));
    MR_hl_field(0, InfoGoal_27, 6) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0(InfoGoal_27, Indent_18, Follow_19, Goal_20, STATE_VARIABLE_State_0_22, &STATE_VARIABLE_State_1_24);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_1_24, STATE_VARIABLE_State_23);
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
  MR_Word State0_24;
  MR_Word State_25;
  MR_String Str_26;
  MR_Word STATE_VARIABLE_State_1_29;
  MR_Word InfoGoal_32;

  State0_24 = mercury__string__builder__init_0_f_0();
  {
    InfoGoal_32 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InfoGoal_32, 0) = ((MR_Box) (Info_13));
    MR_hl_field(0, InfoGoal_32, 1) = ((MR_Box) (ModuleInfo_15));
    MR_hl_field(0, InfoGoal_32, 2) = ((MR_Box) (VarNameSrc_16));
    MR_hl_field(0, InfoGoal_32, 3) = (MR_Box) ((MR_Unsigned) (VarNamePrint_17));
    MR_hl_field(0, InfoGoal_32, 4) = ((MR_Box) (TVarSet_18));
    MR_hl_field(0, InfoGoal_32, 5) = ((MR_Box) (InstVarSet_19));
    MR_hl_field(0, InfoGoal_32, 6) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0(InfoGoal_32, Indent_20, Follow_21, Goal_22, State0_24, &STATE_VARIABLE_State_1_29);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_1_29, &State_25);
  Str_26 = mercury__string__builder__to_string_1_f_0(State_25);
  mercury__io__write_string_4_p_0(Stream_14, Str_26);
}

void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_goal_11_p_0(
  MR_Word Info_12,
  MR_Word ModuleInfo_13,
  MR_Word VarNameSrc_14,
  MR_Word VarNamePrint_15,
  MR_Word TVarSet_16,
  MR_Word InstVarSet_17,
  MR_Unsigned Indent_18,
  MR_String Follow_19,
  MR_Word Goal_20,
  MR_Word STATE_VARIABLE_State_0_24,
  MR_Word * STATE_VARIABLE_State_25)
{
  MR_Word InfoGoal_23;

  {
    InfoGoal_23 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InfoGoal_23, 0) = ((MR_Box) (Info_12));
    MR_hl_field(0, InfoGoal_23, 1) = ((MR_Box) (ModuleInfo_13));
    MR_hl_field(0, InfoGoal_23, 2) = ((MR_Box) (VarNameSrc_14));
    MR_hl_field(0, InfoGoal_23, 3) = (MR_Box) ((MR_Unsigned) (VarNamePrint_15));
    MR_hl_field(0, InfoGoal_23, 4) = ((MR_Box) (TVarSet_16));
    MR_hl_field(0, InfoGoal_23, 5) = ((MR_Box) (InstVarSet_17));
    MR_hl_field(0, InfoGoal_23, 6) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0(InfoGoal_23, Indent_18, Follow_19, Goal_20, STATE_VARIABLE_State_0_24, STATE_VARIABLE_State_25);
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
  MR_Word State0_24;
  MR_Word State_25;
  MR_String Str_26;
  MR_Word InfoGoal_30;

  State0_24 = mercury__string__builder__init_0_f_0();
  {
    InfoGoal_30 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InfoGoal_30, 0) = ((MR_Box) (Info_13));
    MR_hl_field(0, InfoGoal_30, 1) = ((MR_Box) (ModuleInfo_15));
    MR_hl_field(0, InfoGoal_30, 2) = ((MR_Box) (VarNameSrc_16));
    MR_hl_field(0, InfoGoal_30, 3) = (MR_Box) ((MR_Unsigned) (VarNamePrint_17));
    MR_hl_field(0, InfoGoal_30, 4) = ((MR_Box) (TVarSet_18));
    MR_hl_field(0, InfoGoal_30, 5) = ((MR_Box) (InstVarSet_19));
    MR_hl_field(0, InfoGoal_30, 6) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0(InfoGoal_30, Indent_20, Follow_21, Goal_22, State0_24, &State_25);
  Str_26 = mercury__string__builder__to_string_1_f_0(State_25);
  mercury__io__write_string_4_p_0(Stream_14, Str_26);
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
  MR_Word State0_26;
  MR_Word State_27;
  MR_String Str_28;

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
  State0_26 = mercury__string__builder__init_0_f_0();
  hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0(InfoGoal_20, (MR_Unsigned) 0U, (MR_String) "", Goal_14, State0_26, &State_27);
  Str_28 = mercury__string__builder__to_string_1_f_0(State_27);
  mercury__io__write_string_4_p_0(Stream_9, Str_28);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_goal_expr_6_p_0(
  MR_Word InfoGoal_7,
  MR_Unsigned Indent_8,
  MR_String Follow_9,
  MR_Word GoalExpr_10,
  MR_Word STATE_VARIABLE_State_0_49,
  MR_Word * STATE_VARIABLE_State_50)
{
  switch (MR_tag((MR_Word) GoalExpr_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      hlds__hlds_out__hlds_out_goal__format_goal_negation_6_p_0(InfoGoal_7, Indent_8, Follow_9, GoalExpr_10, STATE_VARIABLE_State_0_49, STATE_VARIABLE_State_50);
      break;
    case (MR_Integer) 1:
      hlds__hlds_out__hlds_out_goal__format_goal_unify_6_p_0(InfoGoal_7, Indent_8, Follow_9, GoalExpr_10, STATE_VARIABLE_State_0_49, STATE_VARIABLE_State_50);
      break;
    case (MR_Integer) 2:
      hlds__hlds_out__hlds_out_goal__format_goal_plain_call_6_p_0(InfoGoal_7, Indent_8, Follow_9, GoalExpr_10, STATE_VARIABLE_State_0_49, STATE_VARIABLE_State_50);
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_10, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          hlds__hlds_out__hlds_out_goal__format_goal_generic_call_6_p_0(InfoGoal_7, Indent_8, Follow_9, GoalExpr_10, STATE_VARIABLE_State_0_49, STATE_VARIABLE_State_50);
          break;
        case (MR_Integer) 1:
          hlds__hlds_out__hlds_out_goal__format_goal_foreign_proc_6_p_0(InfoGoal_7, Indent_8, Follow_9, GoalExpr_10, STATE_VARIABLE_State_0_49, STATE_VARIABLE_State_50);
          break;
        case (MR_Integer) 2:
          hlds__hlds_out__hlds_out_goal__format_goal_conj_6_p_0(InfoGoal_7, Indent_8, Follow_9, GoalExpr_10, STATE_VARIABLE_State_0_49, STATE_VARIABLE_State_50);
          break;
        case (MR_Integer) 3:
          {
            MR_Word Disjuncts_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 1))));
            MR_String IndentStr_52;

            IndentStr_52 = libs__indent__indent2_string_1_f_0(Indent_8);
            if ((Disjuncts_51 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_83;
              MR_Word Var_84;

              mercury__string__builder__append_string_3_p_0(IndentStr_52, STATE_VARIABLE_State_0_49, &Var_83);
              mercury__string__builder__append_string_3_p_0((MR_String) "fail", Var_83, &Var_84);
              mercury__string__builder__append_string_3_p_0(Follow_9, Var_84, STATE_VARIABLE_State_50);
            }
            else
            {
              MR_Word Goal_53 = ((MR_Word) ((MR_hl_field(1, Disjuncts_51, 0))));
              MR_Word Goals_54 = ((MR_Word) ((MR_hl_field(1, Disjuncts_51, 1))));
              MR_Word STATE_VARIABLE_State_1_57;
              MR_Unsigned Var_60;
              MR_Word STATE_VARIABLE_State_2_62;
              MR_Word STATE_VARIABLE_State_3_65;
              MR_Word Var_78;
              MR_Word Var_80;
              MR_Word Var_81;

              mercury__string__builder__append_string_3_p_0(IndentStr_52, STATE_VARIABLE_State_0_49, &Var_78);
              mercury__string__builder__append_string_3_p_0((MR_String) "( % disjunction\n", Var_78, &STATE_VARIABLE_State_1_57);
              Var_60 = (Indent_8 + (MR_Unsigned) 1U);
              hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0(InfoGoal_7, Var_60, (MR_String) "\n", Goal_53, STATE_VARIABLE_State_1_57, &STATE_VARIABLE_State_2_62);
              hlds__hlds_out__hlds_out_goal__format_goal_list_6_p_0(InfoGoal_7, Indent_8, (MR_String) ";\n", Goals_54, STATE_VARIABLE_State_2_62, &STATE_VARIABLE_State_3_65);
              mercury__string__builder__append_string_3_p_0(IndentStr_52, STATE_VARIABLE_State_3_65, &Var_80);
              mercury__string__builder__append_string_3_p_0((MR_String) ")", Var_80, &Var_81);
              mercury__string__builder__append_string_3_p_0(Follow_9, Var_81, STATE_VARIABLE_State_50);
            }
          }
          break;
        case (MR_Integer) 4:
          hlds__hlds_out__hlds_out_goal__format_goal_switch_6_p_0(InfoGoal_7, Indent_8, Follow_9, GoalExpr_10, STATE_VARIABLE_State_0_49, STATE_VARIABLE_State_50);
          break;
        case (MR_Integer) 5:
          hlds__hlds_out__hlds_out_goal__format_goal_scope_6_p_0(InfoGoal_7, Indent_8, Follow_9, GoalExpr_10, STATE_VARIABLE_State_0_49, STATE_VARIABLE_State_50);
          break;
        case (MR_Integer) 6:
          hlds__hlds_out__hlds_out_goal__format_goal_if_then_else_6_p_0(InfoGoal_7, Indent_8, Follow_9, GoalExpr_10, STATE_VARIABLE_State_0_49, STATE_VARIABLE_State_50);
          break;
        case (MR_Integer) 7:
          hlds__hlds_out__hlds_out_goal__format_goal_shorthand_6_p_0(InfoGoal_7, Indent_8, Follow_9, GoalExpr_10, STATE_VARIABLE_State_0_49, STATE_VARIABLE_State_50);
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_goal_conj_6_p_0(
  MR_Word InfoGoal_7,
  MR_Unsigned Indent_8,
  MR_String Follow_9,
  MR_Word GoalExpr_10,
  MR_Word STATE_VARIABLE_State_0_20,
  MR_Word * STATE_VARIABLE_State_21)
{
  MR_bool succeeded;
  MR_Word ConjType_12 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_10, 1))) & (MR_Integer) 1);
  MR_Word List_13 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 2))));

  if ((List_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String ParStr_19;
    MR_String IndentStr_69;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;

    IndentStr_69 = libs__indent__indent2_string_1_f_0(Indent_8);
    switch (ConjType_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ParStr_19 = (MR_String) "/* parallel */";
        break;
      case (MR_Integer) 0:
        ParStr_19 = (MR_String) "";
        break;
    }
    mercury__string__builder__append_string_3_p_0(IndentStr_69, STATE_VARIABLE_State_0_20, &Var_91);
    mercury__string__builder__append_string_3_p_0(ParStr_19, Var_91, &Var_92);
    mercury__string__builder__append_string_3_p_0((MR_String) "true", Var_92, &Var_93);
    mercury__string__builder__append_string_3_p_0(Follow_9, Var_93, STATE_VARIABLE_State_21);
  }
  else
  {
    MR_Word Goal_14 = ((MR_Word) ((MR_hl_field(1, List_13, 0))));
    MR_Word Goals_15 = ((MR_Word) ((MR_hl_field(1, List_13, 1))));

    switch (ConjType_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_State_5_43;
          MR_Unsigned Var_46;
          MR_Word STATE_VARIABLE_State_6_48;
          MR_Word STATE_VARIABLE_State_7_51;
          MR_String IndentStr_68;
          MR_Word Var_86;
          MR_Word Var_88;
          MR_Word Var_89;

          IndentStr_68 = libs__indent__indent2_string_1_f_0(Indent_8);
          mercury__string__builder__append_string_3_p_0(IndentStr_68, STATE_VARIABLE_State_0_20, &Var_86);
          mercury__string__builder__append_string_3_p_0((MR_String) "( % parallel conjunction\n", Var_86, &STATE_VARIABLE_State_5_43);
          Var_46 = (Indent_8 + (MR_Unsigned) 1U);
          hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0(InfoGoal_7, Var_46, (MR_String) "\n", Goal_14, STATE_VARIABLE_State_5_43, &STATE_VARIABLE_State_6_48);
          hlds__hlds_out__hlds_out_goal__format_goal_list_6_p_0(InfoGoal_7, Indent_8, (MR_String) "&\n", Goals_15, STATE_VARIABLE_State_6_48, &STATE_VARIABLE_State_7_51);
          mercury__string__builder__append_string_3_p_0(IndentStr_68, STATE_VARIABLE_State_7_51, &Var_88);
          mercury__string__builder__append_string_3_p_0((MR_String) ")", Var_88, &Var_89);
          mercury__string__builder__append_string_3_p_0(Follow_9, Var_89, STATE_VARIABLE_State_21);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Info_16 = ((MR_Word) ((MR_hl_field(0, InfoGoal_7, 0))));
          MR_Word DumpOptions_17 = ((MR_Word) ((MR_hl_field(0, Info_16, 0))));
          MR_Word Var_80;

          Var_80 = hlds__hlds_out__hlds_out_util__empty_dump_options_0_f_0();
          succeeded = hlds__hlds_out__hlds_out_util____Unify____hlds_dump_options_0_0(DumpOptions_17, Var_80);
          if (succeeded)
            hlds__hlds_out__hlds_out_goal__write_conj_8_p_0(InfoGoal_7, Indent_8, Follow_9, (MR_String) ",\n", Goal_14, Goals_15, STATE_VARIABLE_State_0_20, STATE_VARIABLE_State_21);
          else
          {
            MR_String IndentStr_18;
            MR_Word STATE_VARIABLE_State_2_26;
            MR_Unsigned Var_29;
            MR_Word STATE_VARIABLE_State_3_32;
            MR_Word Var_81;
            MR_Word Var_83;
            MR_Word Var_84;

            IndentStr_18 = libs__indent__indent2_string_1_f_0(Indent_8);
            mercury__string__builder__append_string_3_p_0(IndentStr_18, STATE_VARIABLE_State_0_20, &Var_81);
            mercury__string__builder__append_string_3_p_0((MR_String) "( % conjunction\n", Var_81, &STATE_VARIABLE_State_2_26);
            Var_29 = (Indent_8 + (MR_Unsigned) 1U);
            hlds__hlds_out__hlds_out_goal__write_conj_8_p_0(InfoGoal_7, Var_29, (MR_String) "\n", (MR_String) ",\n", Goal_14, Goals_15, STATE_VARIABLE_State_2_26, &STATE_VARIABLE_State_3_32);
            mercury__string__builder__append_string_3_p_0(IndentStr_18, STATE_VARIABLE_State_3_32, &Var_83);
            mercury__string__builder__append_string_3_p_0((MR_String) ")", Var_83, &Var_84);
            mercury__string__builder__append_string_3_p_0(Follow_9, Var_84, STATE_VARIABLE_State_21);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_conj_8_p_0(
  MR_Word InfoGoal_9,
  MR_Unsigned Indent_10,
  MR_String Follow_11,
  MR_String Separator_12,
  MR_Word Goal1_13,
  MR_Word Goals1_14,
  MR_Word STATE_VARIABLE_State_0_21,
  MR_Word * STATE_VARIABLE_State_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Goals1_14 == (MR_Word) ((MR_Unsigned) 0U)))
      hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0(InfoGoal_9, Indent_10, Follow_11, Goal1_13, STATE_VARIABLE_State_0_21, STATE_VARIABLE_State_22);
    else
    {
      MR_Word Goal2_16 = ((MR_Word) ((MR_hl_field(1, Goals1_14, 0))));
      MR_Word Goals2_17 = ((MR_Word) ((MR_hl_field(1, Goals1_14, 1))));
      MR_Word Info_18 = ((MR_Word) ((MR_hl_field(0, InfoGoal_9, 0))));
      MR_Word DumpOptions_19 = ((MR_Word) ((MR_hl_field(0, Info_18, 0))));
      MR_Word STATE_VARIABLE_State_1_23;
      MR_Word Var_43;
      MR_Word next_value_of_Goal1_13;
      MR_Word next_value_of_Goals1_14;
      MR_Word next_value_of_STATE_VARIABLE_State_0_21;

      Var_43 = hlds__hlds_out__hlds_out_util__empty_dump_options_0_f_0();
      succeeded = hlds__hlds_out__hlds_out_util____Unify____hlds_dump_options_0_0(DumpOptions_19, Var_43);
      if (succeeded)
        hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0(InfoGoal_9, Indent_10, Separator_12, Goal1_13, STATE_VARIABLE_State_0_21, &STATE_VARIABLE_State_1_23);
      else
      {
        MR_String IndentStr_20;
        MR_Word STATE_VARIABLE_State_2_25;
        MR_Word Var_44;

        hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0(InfoGoal_9, Indent_10, (MR_String) "\n", Goal1_13, STATE_VARIABLE_State_0_21, &STATE_VARIABLE_State_2_25);
        IndentStr_20 = libs__indent__indent2_string_1_f_0(Indent_10);
        mercury__string__builder__append_string_3_p_0(IndentStr_20, STATE_VARIABLE_State_2_25, &Var_44);
        mercury__string__builder__append_string_3_p_0(Separator_12, Var_44, &STATE_VARIABLE_State_1_23);
      }
      // direct tailcall eliminated
      ;
      next_value_of_Goal1_13 = Goal2_16;
      next_value_of_Goals1_14 = Goals2_17;
      next_value_of_STATE_VARIABLE_State_0_21 = STATE_VARIABLE_State_1_23;
      Goal1_13 = next_value_of_Goal1_13;
      Goals1_14 = next_value_of_Goals1_14;
      STATE_VARIABLE_State_0_21 = next_value_of_STATE_VARIABLE_State_0_21;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_goal__format_cases_6_p_0_1(
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
hlds__hlds_out__hlds_out_goal__format_cases_6_p_0(
  MR_Word InfoGoal_7,
  MR_Unsigned Indent_8,
  MR_Word Var_9,
  MR_Word CasesList_10,
  MR_Word STATE_VARIABLE_State_0_15,
  MR_Word * STATE_VARIABLE_State_16)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((CasesList_10 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_State_16 = STATE_VARIABLE_State_0_15;
    else
    {
      MR_Word Case_12 = ((MR_Word) ((MR_hl_field(1, CasesList_10, 0))));
      MR_Word Cases_13 = ((MR_Word) ((MR_hl_field(1, CasesList_10, 1))));
      MR_String IndentStr_14;
      MR_Word STATE_VARIABLE_State_1_19;
      MR_Word STATE_VARIABLE_State_2_22;
      MR_Word Var_23;
      MR_Word MainConsId_25;
      MR_Word OtherConsIds_26;
      MR_Word Goal_27;
      MR_String IndentStr_28;
      MR_Word VarNameSrc_29;
      MR_Word VarNamePrint_30;
      MR_String VarStr_31;
      MR_Word ConsIdStrs_32;
      MR_String ConsIdsStr_33;
      MR_Word Var_35;
      MR_Word STATE_VARIABLE_State_1_37;
      MR_Unsigned Var_38;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_54;
      MR_Word next_value_of_CasesList_10;
      MR_Word next_value_of_STATE_VARIABLE_State_0_15;

      IndentStr_14 = libs__indent__indent2_string_1_f_0(Indent_8);
      mercury__string__builder__append_string_3_p_0(IndentStr_14, STATE_VARIABLE_State_0_15, &Var_23);
      mercury__string__builder__append_string_3_p_0((MR_String) ";\n", Var_23, &STATE_VARIABLE_State_1_19);
      MainConsId_25 = ((MR_Word) ((MR_hl_field(0, Case_12, 0))));
      OtherConsIds_26 = ((MR_Word) ((MR_hl_field(0, Case_12, 1))));
      Goal_27 = ((MR_Word) ((MR_hl_field(0, Case_12, 2))));
      IndentStr_28 = libs__indent__indent2_string_1_f_0(Indent_8);
      VarNameSrc_29 = ((MR_Word) ((MR_hl_field(0, InfoGoal_7, 2))));
      VarNamePrint_30 = ((MR_Unsigned) ((MR_hl_field(0, InfoGoal_7, 3))) & (MR_Integer) 3);
      VarStr_31 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_29, VarNamePrint_30, Var_9);
      {
        Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_35, 0) = ((MR_Box) (MainConsId_25));
        MR_hl_field(1, Var_35, 1) = ((MR_Box) (OtherConsIds_26));
      }
      ConsIdStrs_32 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[9]), Var_35);
      ConsIdsStr_33 = mercury__string__join_list_2_f_0((MR_String) " or ", ConsIdStrs_32);
      mercury__string__builder__append_string_3_p_0(IndentStr_28, STATE_VARIABLE_State_1_19, &Var_48);
      mercury__string__builder__append_string_3_p_0((MR_String) "% ", Var_48, &Var_49);
      mercury__string__builder__append_string_3_p_0(VarStr_31, Var_49, &Var_51);
      mercury__string__builder__append_string_3_p_0((MR_String) " has functor ", Var_51, &Var_52);
      mercury__string__builder__append_string_3_p_0(ConsIdsStr_33, Var_52, &Var_54);
      mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_54, &STATE_VARIABLE_State_1_37);
      Var_38 = (Indent_8 + (MR_Unsigned) 1U);
      hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0(InfoGoal_7, Var_38, (MR_String) "\n", Goal_27, STATE_VARIABLE_State_1_37, &STATE_VARIABLE_State_2_22);
      // direct tailcall eliminated
      ;
      next_value_of_CasesList_10 = Cases_13;
      next_value_of_STATE_VARIABLE_State_0_15 = STATE_VARIABLE_State_2_22;
      CasesList_10 = next_value_of_CasesList_10;
      STATE_VARIABLE_State_0_15 = next_value_of_STATE_VARIABLE_State_0_15;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_goal_list_6_p_0(
  MR_Word InfoGoal_7,
  MR_Unsigned Indent_8,
  MR_String Separator_9,
  MR_Word Goals_10,
  MR_Word STATE_VARIABLE_State_0_14,
  MR_Word * STATE_VARIABLE_State_15)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Goals_10 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_State_15 = STATE_VARIABLE_State_0_14;
    else
    {
      MR_Word HeadGoal_12 = ((MR_Word) ((MR_hl_field(1, Goals_10, 0))));
      MR_Word TailGoals_13 = ((MR_Word) ((MR_hl_field(1, Goals_10, 1))));
      MR_Word STATE_VARIABLE_State_1_16;
      MR_Word STATE_VARIABLE_State_2_17;
      MR_Unsigned Var_18;
      MR_Word STATE_VARIABLE_State_3_20;
      MR_Word next_value_of_Goals_10;
      MR_Word next_value_of_STATE_VARIABLE_State_0_14;

      libs__indent__format_indent2_3_p_0(Indent_8, STATE_VARIABLE_State_0_14, &STATE_VARIABLE_State_1_16);
      mercury__string__builder__append_string_3_p_0(Separator_9, STATE_VARIABLE_State_1_16, &STATE_VARIABLE_State_2_17);
      Var_18 = (Indent_8 + (MR_Unsigned) 1U);
      hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0(InfoGoal_7, Var_18, (MR_String) "\n", HeadGoal_12, STATE_VARIABLE_State_2_17, &STATE_VARIABLE_State_3_20);
      // direct tailcall eliminated
      ;
      next_value_of_Goals_10 = TailGoals_13;
      next_value_of_STATE_VARIABLE_State_0_14 = STATE_VARIABLE_State_3_20;
      Goals_10 = next_value_of_Goals_10;
      STATE_VARIABLE_State_0_14 = next_value_of_STATE_VARIABLE_State_0_14;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_goal_shorthand_6_p_0(
  MR_Word InfoGoal_7,
  MR_Unsigned Indent_8,
  MR_String Follow_9,
  MR_Word GoalExpr_10,
  MR_Word STATE_VARIABLE_State_0_38,
  MR_Word * STATE_VARIABLE_State_39)
{
  MR_Word ShortHand_12 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 1))));
  MR_String IndentStr_13;
  MR_Unsigned Indent1_14;

  IndentStr_13 = libs__indent__indent2_string_1_f_0(Indent_8);
  Indent1_14 = (Indent_8 + (MR_Unsigned) 1U);
  switch (MR_tag((MR_Word) ShortHand_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word GoalA_36 = ((MR_Word) ((MR_hl_field(0, ShortHand_12, 0))));
        MR_Word GoalB_37 = ((MR_Word) ((MR_hl_field(0, ShortHand_12, 1))));
        MR_Word STATE_VARIABLE_State_9_96;
        MR_Word STATE_VARIABLE_State_10_100;
        MR_Word STATE_VARIABLE_State_11_103;
        MR_Word STATE_VARIABLE_State_12_107;
        MR_Word Var_151;
        MR_Word Var_153;
        MR_Word Var_155;
        MR_Word Var_156;

        mercury__string__builder__append_string_3_p_0(IndentStr_13, STATE_VARIABLE_State_0_38, &Var_151);
        mercury__string__builder__append_string_3_p_0((MR_String) "( % bi-implication\n", Var_151, &STATE_VARIABLE_State_9_96);
        hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0(InfoGoal_7, Indent1_14, (MR_String) "\n", GoalA_36, STATE_VARIABLE_State_9_96, &STATE_VARIABLE_State_10_100);
        mercury__string__builder__append_string_3_p_0(IndentStr_13, STATE_VARIABLE_State_10_100, &Var_153);
        mercury__string__builder__append_string_3_p_0((MR_String) "<=>\n", Var_153, &STATE_VARIABLE_State_11_103);
        hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0(InfoGoal_7, Indent1_14, (MR_String) "\n", GoalB_37, STATE_VARIABLE_State_11_103, &STATE_VARIABLE_State_12_107);
        mercury__string__builder__append_string_3_p_0(IndentStr_13, STATE_VARIABLE_State_12_107, &Var_155);
        mercury__string__builder__append_string_3_p_0((MR_String) ")", Var_155, &Var_156);
        mercury__string__builder__append_string_3_p_0(Follow_9, Var_156, STATE_VARIABLE_State_39);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Outer_16 = ((MR_Word) ((MR_hl_field(1, ShortHand_12, 1))));
        MR_Word Inner_17 = ((MR_Word) ((MR_hl_field(1, ShortHand_12, 2))));
        MR_Word MaybeOutputVars_18 = ((MR_Word) ((MR_hl_field(1, ShortHand_12, 3))));
        MR_Word MainGoal_19 = ((MR_Word) ((MR_hl_field(1, ShortHand_12, 4))));
        MR_Word OrElseGoals_20 = ((MR_Word) ((MR_hl_field(1, ShortHand_12, 5))));
        MR_Word VarNameSrc_22 = ((MR_Word) ((MR_hl_field(0, InfoGoal_7, 2))));
        MR_Word VarNamePrint_23 = ((MR_Unsigned) ((MR_hl_field(0, InfoGoal_7, 3))) & (MR_Integer) 3);
        MR_String OuterStr_24;
        MR_String InnerStr_25;
        MR_String MaybeOutputVarsStr_26;
        MR_Word STATE_VARIABLE_State_1_49;
        MR_Word STATE_VARIABLE_State_2_59;
        MR_Word STATE_VARIABLE_State_3_61;
        MR_Word Var_161;
        MR_Word Var_162;
        MR_Word Var_164;
        MR_Word Var_165;
        MR_Word Var_167;
        MR_Word Var_168;
        MR_Word Var_170;
        MR_Word Var_172;
        MR_Word Var_173;

        OuterStr_24 = hlds__hlds_out__hlds_out_goal__atomic_interface_vars_to_string_4_f_0(VarNameSrc_22, VarNamePrint_23, (MR_String) "outer", Outer_16);
        InnerStr_25 = hlds__hlds_out__hlds_out_goal__atomic_interface_vars_to_string_4_f_0(VarNameSrc_22, VarNamePrint_23, (MR_String) "inner", Inner_17);
        if ((MaybeOutputVars_18 == (MR_Word) ((MR_Unsigned) 0U)))
          MaybeOutputVarsStr_26 = (MR_String) "no_vars";
        else
        {
          MR_Word OutputVars_27 = ((MR_Word) ((MR_hl_field(1, MaybeOutputVars_18, 0))));
          MR_String OutputVarsStr_28;
          MR_String Var_159;

          OutputVarsStr_28 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_22, VarNamePrint_23, OutputVars_27);
          Var_159 = mercury__string__f_43_43_2_f_0(OutputVarsStr_28, (MR_String) "])");
          MaybeOutputVarsStr_26 = mercury__string__f_43_43_2_f_0((MR_String) "vars([", Var_159);
        }
        mercury__string__builder__append_string_3_p_0(IndentStr_13, STATE_VARIABLE_State_0_38, &Var_161);
        mercury__string__builder__append_string_3_p_0((MR_String) "atomic [", Var_161, &Var_162);
        mercury__string__builder__append_string_3_p_0(OuterStr_24, Var_162, &Var_164);
        mercury__string__builder__append_string_3_p_0((MR_String) " ", Var_164, &Var_165);
        mercury__string__builder__append_string_3_p_0(InnerStr_25, Var_165, &Var_167);
        mercury__string__builder__append_string_3_p_0((MR_String) " ", Var_167, &Var_168);
        mercury__string__builder__append_string_3_p_0(MaybeOutputVarsStr_26, Var_168, &Var_170);
        mercury__string__builder__append_string_3_p_0((MR_String) "] (\n", Var_170, &STATE_VARIABLE_State_1_49);
        hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0(InfoGoal_7, Indent1_14, (MR_String) "\n", MainGoal_19, STATE_VARIABLE_State_1_49, &STATE_VARIABLE_State_2_59);
        hlds__hlds_out__hlds_out_goal__format_goal_list_6_p_0(InfoGoal_7, Indent_8, (MR_String) "or_else\n", OrElseGoals_20, STATE_VARIABLE_State_2_59, &STATE_VARIABLE_State_3_61);
        mercury__string__builder__append_string_3_p_0(IndentStr_13, STATE_VARIABLE_State_3_61, &Var_172);
        mercury__string__builder__append_string_3_p_0((MR_String) ")", Var_172, &Var_173);
        mercury__string__builder__append_string_3_p_0(Follow_9, Var_173, STATE_VARIABLE_State_39);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word MaybeIO_29 = ((MR_Word) ((MR_hl_field(2, ShortHand_12, 0))));
        MR_Word SubGoal_31 = ((MR_Word) ((MR_hl_field(2, ShortHand_12, 2))));
        MR_Word STATE_VARIABLE_State_5_71;
        MR_Word STATE_VARIABLE_State_6_80;
        MR_Word STATE_VARIABLE_State_7_86;
        MR_Word Var_141;
        MR_Word Var_148;
        MR_Word Var_149;

        mercury__string__builder__append_string_3_p_0(IndentStr_13, STATE_VARIABLE_State_0_38, &Var_141);
        mercury__string__builder__append_string_3_p_0((MR_String) "( % try\n", Var_141, &STATE_VARIABLE_State_5_71);
        if ((MaybeIO_29 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_State_6_80 = STATE_VARIABLE_State_5_71;
        else
        {
          MR_Word IOVarA_32;
          MR_Word IOVarB_33;
          MR_String Indent1Str_34;
          MR_String IOVarsStr_35;
          MR_Word Var_74 = ((MR_Word) ((MR_hl_field(1, MaybeIO_29, 0))));
          MR_Word Var_75;
          MR_Word Var_76;
          MR_Word VarNameSrc_115;
          MR_Word VarNamePrint_116;
          MR_Word Var_143;
          MR_Word Var_144;
          MR_Word Var_146;

          IOVarA_32 = ((MR_Word) ((MR_hl_field(0, Var_74, 0))));
          IOVarB_33 = ((MR_Word) ((MR_hl_field(0, Var_74, 1))));
          Indent1Str_34 = libs__indent__indent2_string_1_f_0(Indent1_14);
          VarNameSrc_115 = ((MR_Word) ((MR_hl_field(0, InfoGoal_7, 2))));
          VarNamePrint_116 = ((MR_Unsigned) ((MR_hl_field(0, InfoGoal_7, 3))) & (MR_Integer) 3);
          {
            Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_76, 0) = ((MR_Box) (IOVarB_33));
            MR_hl_field(1, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_75, 0) = ((MR_Box) (IOVarA_32));
            MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_76));
          }
          IOVarsStr_35 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_115, VarNamePrint_116, Var_75);
          mercury__string__builder__append_string_3_p_0(Indent1Str_34, STATE_VARIABLE_State_5_71, &Var_143);
          mercury__string__builder__append_string_3_p_0((MR_String) "% io(", Var_143, &Var_144);
          mercury__string__builder__append_string_3_p_0(IOVarsStr_35, Var_144, &Var_146);
          mercury__string__builder__append_string_3_p_0((MR_String) ")\n", Var_146, &STATE_VARIABLE_State_6_80);
        }
        hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0(InfoGoal_7, Indent1_14, (MR_String) "\n", SubGoal_31, STATE_VARIABLE_State_6_80, &STATE_VARIABLE_State_7_86);
        mercury__string__builder__append_string_3_p_0(IndentStr_13, STATE_VARIABLE_State_7_86, &Var_148);
        mercury__string__builder__append_string_3_p_0((MR_String) ")", Var_148, &Var_149);
        mercury__string__builder__append_string_3_p_0(Follow_9, Var_149, STATE_VARIABLE_State_39);
      }
      break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_goal_scope_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_AddCommaNewline_14;
  MR_Word conv2_STATE_VARIABLE_State_16;

  hlds__hlds_out__hlds_out_goal__write_trace_mutable_var_hlds_6_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_AddCommaNewline_14, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_State_16);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_AddCommaNewline_14));
  *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_State_16));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_goal_scope_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_376;

  hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__format_goal_scope__2437__1_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_3)), &conv1_HeadVar__4_376);
  *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__4_376));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_goal_scope_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_369;

  hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__format_goal_scope__2426__1_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_369);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_369));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_goal_scope_6_p_0(
  MR_Word STATE_VARIABLE_InfoGoal_0_52,
  MR_Unsigned Indent_8,
  MR_String Follow_9,
  MR_Word GoalExpr_10,
  MR_Word STATE_VARIABLE_State_0_53,
  MR_Word * STATE_VARIABLE_State_54)
{
  MR_Word Reason_12 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 1))));
  MR_Word Goal_13 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 2))));
  MR_String IndentStr_14;
  MR_Word STATE_VARIABLE_State_1_55;
  MR_Word STATE_VARIABLE_State_2_58;
  MR_Word STATE_VARIABLE_InfoGoal_1_134;
  MR_Unsigned Var_203;
  MR_Word STATE_VARIABLE_State_41_205;
  MR_Word Var_445;
  MR_Word Var_446;

  IndentStr_14 = libs__indent__indent2_string_1_f_0(Indent_8);
  mercury__string__builder__append_string_3_p_0(IndentStr_14, STATE_VARIABLE_State_0_53, &STATE_VARIABLE_State_1_55);
  switch (MR_tag((MR_Word) Reason_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Vars_15 = ((MR_Word) ((MR_hl_field(0, Reason_12, 0))));
        MR_Word Creator_16 = ((MR_Unsigned) ((MR_hl_field(0, Reason_12, 1))) & (MR_Integer) 1);
        MR_Word VarNameSrc_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_52, 2))));
        MR_Word VarNamePrint_18 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_52, 3))) & (MR_Integer) 3);
        MR_String VarsStr_19;
        MR_String CreatorStr_20;
        MR_Word Var_438;
        MR_Word Var_440;
        MR_Word Var_441;
        MR_Word Var_443;

        VarsStr_19 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_17, VarNamePrint_18, Vars_15);
        switch (Creator_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            CreatorStr_20 = (MR_String) "compiler";
            break;
          case (MR_Integer) 0:
            CreatorStr_20 = (MR_String) "user";
            break;
        }
        mercury__string__builder__append_string_3_p_0((MR_String) "some [", STATE_VARIABLE_State_1_55, &Var_438);
        mercury__string__builder__append_string_3_p_0(VarsStr_19, Var_438, &Var_440);
        mercury__string__builder__append_string_3_p_0((MR_String) "] ( % ", Var_440, &Var_441);
        mercury__string__builder__append_string_3_p_0(CreatorStr_20, Var_441, &Var_443);
        mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_443, &STATE_VARIABLE_State_2_58);
        STATE_VARIABLE_InfoGoal_1_134 = STATE_VARIABLE_InfoGoal_0_52;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word HeadWarning_21 = ((MR_Unsigned) ((MR_hl_field(1, Reason_12, 0))) & (MR_Integer) 7);
        MR_Word TailWarnings_22 = ((MR_Word) ((MR_hl_field(1, Reason_12, 1))));
        MR_Word STATE_VARIABLE_State_3_64;
        MR_Word STATE_VARIABLE_State_4_66;

        mercury__string__builder__append_string_3_p_0((MR_String) "disable_warnings [", STATE_VARIABLE_State_1_55, &STATE_VARIABLE_State_3_64);
        parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_103_111_97_108_95_119_97_114_110_105_110_103_115_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[1]), HeadWarning_21, TailWarnings_22, STATE_VARIABLE_State_3_64, &STATE_VARIABLE_State_4_66);
        mercury__string__builder__append_string_3_p_0((MR_String) "] (\n", STATE_VARIABLE_State_4_66, &STATE_VARIABLE_State_2_58);
        STATE_VARIABLE_InfoGoal_1_134 = STATE_VARIABLE_InfoGoal_0_52;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Kind_25 = ((MR_Unsigned) ((MR_hl_field(2, Reason_12, 1))) & (MR_Integer) 3);
        MR_String PromiseKindStr_26;
        MR_Word Vars_214 = ((MR_Word) ((MR_hl_field(2, Reason_12, 0))));
        MR_Word VarNameSrc_215 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_52, 2))));
        MR_Word VarNamePrint_216 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_52, 3))) & (MR_Integer) 3);
        MR_String VarsStr_217;
        MR_Word Var_415;
        MR_Word Var_416;
        MR_Word Var_418;

        VarsStr_217 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_215, VarNamePrint_216, Vars_214);
        switch (Kind_25) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            PromiseKindStr_26 = (MR_String) "promise_equivalent_solution_sets";
            break;
          case (MR_Integer) 2:
            PromiseKindStr_26 = (MR_String) "arbitrary";
            break;
          case (MR_Integer) 0:
            PromiseKindStr_26 = (MR_String) "promise_equivalent_solutions";
            break;
        }
        mercury__string__builder__append_string_3_p_0(PromiseKindStr_26, STATE_VARIABLE_State_1_55, &Var_415);
        mercury__string__builder__append_string_3_p_0((MR_String) " [", Var_415, &Var_416);
        mercury__string__builder__append_string_3_p_0(VarsStr_217, Var_416, &Var_418);
        mercury__string__builder__append_string_3_p_0((MR_String) "] (\n", Var_418, &STATE_VARIABLE_State_2_58);
        STATE_VARIABLE_InfoGoal_1_134 = STATE_VARIABLE_InfoGoal_0_52;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Reason_12, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Purity_23 = ((MR_Unsigned) ((MR_hl_field(3, Reason_12, 1))) & (MR_Integer) 3);
            MR_String PromiseStr_24;
            MR_Word Var_420;

            switch (Purity_23) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                PromiseStr_24 = (MR_String) "promise_impure";
                break;
              case (MR_Integer) 0:
                PromiseStr_24 = (MR_String) "promise_pure";
                break;
              case (MR_Integer) 1:
                PromiseStr_24 = (MR_String) "promise_semipure";
                break;
            }
            mercury__string__builder__append_string_3_p_0(PromiseStr_24, STATE_VARIABLE_State_1_55, &Var_420);
            mercury__string__builder__append_string_3_p_0((MR_String) " (\n", Var_420, &STATE_VARIABLE_State_2_58);
            STATE_VARIABLE_InfoGoal_1_134 = STATE_VARIABLE_InfoGoal_0_52;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Detism_27 = ((MR_Unsigned) ((MR_hl_field(3, Reason_12, 1))) & (MR_Integer) 7);
            MR_String ReqStr_28 = ((&hlds__hlds_out__hlds_out_goal_vector_common_6[8 + Detism_27]))->hlds__hlds_out__hlds_out_goal__vector_common_type_6_0__vct_6_f_0;
            MR_Word Var_409;

            mercury__string__builder__append_string_3_p_0(ReqStr_28, STATE_VARIABLE_State_1_55, &Var_409);
            mercury__string__builder__append_string_3_p_0((MR_String) " (\n", Var_409, &STATE_VARIABLE_State_2_58);
            STATE_VARIABLE_InfoGoal_1_134 = STATE_VARIABLE_InfoGoal_0_52;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_29 = ((MR_Word) ((MR_hl_field(3, Reason_12, 1))));
            MR_String VarStr_30;
            MR_Word VarNameSrc_218 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_52, 2))));
            MR_Word VarNamePrint_219 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_52, 3))) & (MR_Integer) 3);
            MR_Word Var_411;
            MR_Word Var_413;

            VarStr_30 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_218, VarNamePrint_219, Var_29);
            mercury__string__builder__append_string_3_p_0((MR_String) "require_complete_switch [", STATE_VARIABLE_State_1_55, &Var_411);
            mercury__string__builder__append_string_3_p_0(VarStr_30, Var_411, &Var_413);
            mercury__string__builder__append_string_3_p_0((MR_String) "] (\n", Var_413, &STATE_VARIABLE_State_2_58);
            STATE_VARIABLE_InfoGoal_1_134 = STATE_VARIABLE_InfoGoal_0_52;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word VarNameSrc_220 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_52, 2))));
            MR_Word VarNamePrint_221 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_52, 3))) & (MR_Integer) 3);
            MR_Word Detism_222 = ((MR_Unsigned) ((MR_hl_field(3, Reason_12, 2))) & (MR_Integer) 7);
            MR_String ReqStr_223 = ((&hlds__hlds_out__hlds_out_goal_vector_common_6[16 + Detism_222]))->hlds__hlds_out__hlds_out_goal__vector_common_type_6_0__vct_6_f_0;
            MR_Word Var_224 = ((MR_Word) ((MR_hl_field(3, Reason_12, 1))));
            MR_String VarStr_225;
            MR_Word Var_404;
            MR_Word Var_405;
            MR_Word Var_407;

            VarStr_225 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_220, VarNamePrint_221, Var_224);
            mercury__string__builder__append_string_3_p_0(ReqStr_223, STATE_VARIABLE_State_1_55, &Var_404);
            mercury__string__builder__append_string_3_p_0((MR_String) " [", Var_404, &Var_405);
            mercury__string__builder__append_string_3_p_0(VarStr_225, Var_405, &Var_407);
            mercury__string__builder__append_string_3_p_0((MR_String) "] (\n", Var_407, &STATE_VARIABLE_State_2_58);
            STATE_VARIABLE_InfoGoal_1_134 = STATE_VARIABLE_InfoGoal_0_52;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_389 = ((MR_Unsigned) ((MR_hl_field(3, Reason_12, 1))) & (MR_Integer) 1);

            switch (Var_389) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word STATE_VARIABLE_State_20_118;
                  MR_Word STATE_VARIABLE_State_21_119;

                  mercury__string__builder__append_string_3_p_0((MR_String) "(\n", STATE_VARIABLE_State_1_55, &STATE_VARIABLE_State_20_118);
                  libs__indent__format_indent2_3_p_0(Indent_8, STATE_VARIABLE_State_20_118, &STATE_VARIABLE_State_21_119);
                  mercury__string__builder__append_string_3_p_0((MR_String) "% commit(do_not_force_pruning)\n", STATE_VARIABLE_State_21_119, &STATE_VARIABLE_State_2_58);
                  STATE_VARIABLE_InfoGoal_1_134 = STATE_VARIABLE_InfoGoal_0_52;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word STATE_VARIABLE_State_17_112;
                  MR_Word STATE_VARIABLE_State_18_113;

                  mercury__string__builder__append_string_3_p_0((MR_String) "(\n", STATE_VARIABLE_State_1_55, &STATE_VARIABLE_State_17_112);
                  libs__indent__format_indent2_3_p_0(Indent_8, STATE_VARIABLE_State_17_112, &STATE_VARIABLE_State_18_113);
                  mercury__string__builder__append_string_3_p_0((MR_String) "% commit(force_pruning)\n", STATE_VARIABLE_State_18_113, &STATE_VARIABLE_State_2_58);
                  STATE_VARIABLE_InfoGoal_1_134 = STATE_VARIABLE_InfoGoal_0_52;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Var_388 = ((MR_Unsigned) ((MR_hl_field(3, Reason_12, 1))) & (MR_Integer) 1);

            switch (Var_388) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word STATE_VARIABLE_State_14_106;
                  MR_Word STATE_VARIABLE_State_15_107;

                  mercury__string__builder__append_string_3_p_0((MR_String) "(\n", STATE_VARIABLE_State_1_55, &STATE_VARIABLE_State_14_106);
                  libs__indent__format_indent2_3_p_0(Indent_8, STATE_VARIABLE_State_14_106, &STATE_VARIABLE_State_15_107);
                  mercury__string__builder__append_string_3_p_0((MR_String) "% barrier(not_removable)\n", STATE_VARIABLE_State_15_107, &STATE_VARIABLE_State_2_58);
                  STATE_VARIABLE_InfoGoal_1_134 = STATE_VARIABLE_InfoGoal_0_52;
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word STATE_VARIABLE_State_11_100;
                  MR_Word STATE_VARIABLE_State_12_101;

                  mercury__string__builder__append_string_3_p_0((MR_String) "(\n", STATE_VARIABLE_State_1_55, &STATE_VARIABLE_State_11_100);
                  libs__indent__format_indent2_3_p_0(Indent_8, STATE_VARIABLE_State_11_100, &STATE_VARIABLE_State_12_101);
                  mercury__string__builder__append_string_3_p_0((MR_String) "% barrier(removable)\n", STATE_VARIABLE_State_12_101, &STATE_VARIABLE_State_2_58);
                  STATE_VARIABLE_InfoGoal_1_134 = STATE_VARIABLE_InfoGoal_0_52;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_String KindStr_31;
            MR_Word DumpOptionsBackup_32;
            MR_Word STATE_VARIABLE_State_23_123;
            MR_Word Var_133;
            MR_Word Var_136;
            MR_Word VarNameSrc_226 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_52, 2))));
            MR_Word VarNamePrint_227 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_52, 3))) & (MR_Integer) 3);
            MR_Word Kind_228 = ((MR_Unsigned) ((MR_hl_field(3, Reason_12, 2))) & (MR_Integer) 3);
            MR_Word Var_229 = ((MR_Word) ((MR_hl_field(3, Reason_12, 1))));
            MR_String VarStr_230;
            MR_Word Var_303;
            MR_Word Var_304;
            MR_Word Var_305;
            MR_Word Var_306;
            MR_Word Var_307;
            MR_Word Var_308;
            MR_Word Var_310;
            MR_Word Var_311;
            MR_Word Var_312;
            MR_Word Var_430;
            MR_Word Var_431;
            MR_Word Var_433;
            MR_Word Var_434;
            MR_Word Var_436;

            VarStr_230 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_226, VarNamePrint_227, Var_229);
            KindStr_31 = ((&hlds__hlds_out__hlds_out_goal_vector_common_6[4 + Kind_228]))->hlds__hlds_out__hlds_out_goal__vector_common_type_6_0__vct_6_f_0;
            mercury__string__builder__append_string_3_p_0((MR_String) "(\n", STATE_VARIABLE_State_1_55, &STATE_VARIABLE_State_23_123);
            mercury__string__builder__append_string_3_p_0(IndentStr_14, STATE_VARIABLE_State_23_123, &Var_430);
            mercury__string__builder__append_string_3_p_0((MR_String) "% from_ground_term [", Var_430, &Var_431);
            mercury__string__builder__append_string_3_p_0(VarStr_230, Var_431, &Var_433);
            mercury__string__builder__append_string_3_p_0((MR_String) ", ", Var_433, &Var_434);
            mercury__string__builder__append_string_3_p_0(KindStr_31, Var_434, &Var_436);
            mercury__string__builder__append_string_3_p_0((MR_String) "]\n", Var_436, &STATE_VARIABLE_State_2_58);
            Var_133 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_52, 0))));
            Var_303 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_52, 1))));
            Var_304 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_52, 2))));
            Var_305 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_52, 3))) & (MR_Integer) 3);
            Var_306 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_52, 4))));
            Var_307 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_52, 5))));
            Var_308 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_52, 6))));
            DumpOptionsBackup_32 = ((MR_Word) ((MR_hl_field(0, Var_133, 1))));
            Var_310 = ((MR_Word) ((MR_hl_field(0, Var_133, 2))));
            Var_311 = ((MR_Word) ((MR_hl_field(0, Var_133, 3))));
            Var_312 = ((MR_Word) ((MR_hl_field(0, Var_133, 4))));
            {
              Var_136 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_136, 0) = ((MR_Box) (DumpOptionsBackup_32));
              MR_hl_field(0, Var_136, 1) = ((MR_Box) (DumpOptionsBackup_32));
              MR_hl_field(0, Var_136, 2) = ((MR_Box) (Var_310));
              MR_hl_field(0, Var_136, 3) = ((MR_Box) (Var_311));
              MR_hl_field(0, Var_136, 4) = ((MR_Box) (Var_312));
            }
            {
              STATE_VARIABLE_InfoGoal_1_134 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_InfoGoal_1_134, 0) = ((MR_Box) (Var_136));
              MR_hl_field(0, STATE_VARIABLE_InfoGoal_1_134, 1) = ((MR_Box) (Var_303));
              MR_hl_field(0, STATE_VARIABLE_InfoGoal_1_134, 2) = ((MR_Box) (Var_304));
              MR_hl_field(0, STATE_VARIABLE_InfoGoal_1_134, 3) = (MR_Box) ((MR_Unsigned) (Var_305));
              MR_hl_field(0, STATE_VARIABLE_InfoGoal_1_134, 4) = ((MR_Box) (Var_306));
              MR_hl_field(0, STATE_VARIABLE_InfoGoal_1_134, 5) = ((MR_Box) (Var_307));
              MR_hl_field(0, STATE_VARIABLE_InfoGoal_1_134, 6) = ((MR_Box) (Var_308));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word MaybeCompileTime_33 = ((MR_Word) ((MR_hl_field(3, Reason_12, 1))));
            MR_Word MaybeRunTime_34 = ((MR_Word) ((MR_hl_field(3, Reason_12, 2))));
            MR_Word MaybeIO0_35 = ((MR_Word) ((MR_hl_field(3, Reason_12, 3))));
            MR_Word MutableVars0_36 = ((MR_Word) ((MR_hl_field(3, Reason_12, 4))));
            MR_Word QuantVars_37 = ((MR_Word) ((MR_hl_field(3, Reason_12, 5))));
            MR_String Indent1Str_39;
            MR_Word Lang_42;
            MR_Word MutableVars_44;
            MR_Word STATE_VARIABLE_State_25_138;
            MR_Unsigned Var_140;
            MR_Word STATE_VARIABLE_State_28_151;
            MR_Word STATE_VARIABLE_AddCommaNewline_2_152;
            MR_Word STATE_VARIABLE_State_32_163;
            MR_Word STATE_VARIABLE_AddCommaNewline_3_164;
            MR_Word Var_165;
            MR_Word Var_166;
            MR_Word STATE_VARIABLE_State_34_170;
            MR_Word STATE_VARIABLE_AddCommaNewline_4_175;
            MR_Word Var_176;
            MR_Word STATE_VARIABLE_AddCommaNewline_5_177;
            MR_Word STATE_VARIABLE_State_35_178;
            MR_Word STATE_VARIABLE_State_36_180;
            MR_Word STATE_VARIABLE_State_37_183;
            MR_Word STATE_VARIABLE_State_38_188;
            MR_Box conv5_STATE_VARIABLE_AddCommaNewline_5_177;
            MR_Box conv4_STATE_VARIABLE_State_35_178;

            mercury__string__builder__append_string_3_p_0((MR_String) "trace [\n", STATE_VARIABLE_State_1_55, &STATE_VARIABLE_State_25_138);
            Var_140 = (Indent_8 + (MR_Unsigned) 1U);
            Indent1Str_39 = libs__indent__indent2_string_1_f_0(Var_140);
            if ((MaybeCompileTime_33 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              STATE_VARIABLE_State_28_151 = STATE_VARIABLE_State_25_138;
              STATE_VARIABLE_AddCommaNewline_2_152 = (MR_Integer) 0;
            }
            else
            {
              MR_Word CompileTime_40 = ((MR_Word) ((MR_hl_field(1, MaybeCompileTime_33, 0))));
              MR_Word STATE_VARIABLE_State_26_144;
              MR_Word STATE_VARIABLE_State_27_149;
              MR_Word Var_390;

              mercury__string__builder__append_string_3_p_0(Indent1Str_39, STATE_VARIABLE_State_25_138, &Var_390);
              mercury__string__builder__append_string_3_p_0((MR_String) "compile_time(", Var_390, &STATE_VARIABLE_State_26_144);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_compiletime_0), (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[1]), (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[7]), CompileTime_40, STATE_VARIABLE_State_26_144, &STATE_VARIABLE_State_27_149);
              mercury__string__builder__append_string_3_p_0((MR_String) ")", STATE_VARIABLE_State_27_149, &STATE_VARIABLE_State_28_151);
              STATE_VARIABLE_AddCommaNewline_2_152 = (MR_Integer) 1;
            }
            if ((MaybeRunTime_34 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              STATE_VARIABLE_State_32_163 = STATE_VARIABLE_State_28_151;
              STATE_VARIABLE_AddCommaNewline_3_164 = STATE_VARIABLE_AddCommaNewline_2_152;
            }
            else
            {
              MR_Word RunTime_41 = ((MR_Word) ((MR_hl_field(1, MaybeRunTime_34, 0))));
              MR_Word STATE_VARIABLE_State_29_153;
              MR_Word STATE_VARIABLE_State_30_156;
              MR_Word STATE_VARIABLE_State_31_161;
              MR_Word Var_392;

              hlds__hlds_out__hlds_out_goal__maybe_add_comma_newline_3_p_0(STATE_VARIABLE_AddCommaNewline_2_152, STATE_VARIABLE_State_28_151, &STATE_VARIABLE_State_29_153);
              mercury__string__builder__append_string_3_p_0(Indent1Str_39, STATE_VARIABLE_State_29_153, &Var_392);
              mercury__string__builder__append_string_3_p_0((MR_String) "runtime(", Var_392, &STATE_VARIABLE_State_30_156);
              parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0), (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[1]), (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[8]), RunTime_41, STATE_VARIABLE_State_30_156, &STATE_VARIABLE_State_31_161);
              mercury__string__builder__append_string_3_p_0((MR_String) ")", STATE_VARIABLE_State_31_161, &STATE_VARIABLE_State_32_163);
              STATE_VARIABLE_AddCommaNewline_3_164 = (MR_Integer) 1;
            }
            Var_166 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_52, 0))));
            Var_165 = ((MR_Word) ((MR_hl_field(0, Var_166, 4))));
            Lang_42 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Var_165);
            switch (Lang_42) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MutableVars_44 = MutableVars0_36;
                  if ((MaybeIO0_35 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    STATE_VARIABLE_State_34_170 = STATE_VARIABLE_State_32_163;
                    STATE_VARIABLE_AddCommaNewline_4_175 = STATE_VARIABLE_AddCommaNewline_3_164;
                  }
                  else
                  {
                    MR_String IOStateVarName_45 = ((MR_String) ((MR_hl_field(1, MaybeIO0_35, 0))));
                    MR_Word STATE_VARIABLE_State_33_167;
                    MR_Word Var_394;
                    MR_Word Var_395;
                    MR_Word Var_397;

                    hlds__hlds_out__hlds_out_goal__maybe_add_comma_newline_3_p_0(STATE_VARIABLE_AddCommaNewline_3_164, STATE_VARIABLE_State_32_163, &STATE_VARIABLE_State_33_167);
                    mercury__string__builder__append_string_3_p_0(Indent1Str_39, STATE_VARIABLE_State_33_167, &Var_394);
                    mercury__string__builder__append_string_3_p_0((MR_String) "io(!", Var_394, &Var_395);
                    mercury__string__builder__append_string_3_p_0(IOStateVarName_45, Var_395, &Var_397);
                    mercury__string__builder__append_string_3_p_0((MR_String) ")", Var_397, &STATE_VARIABLE_State_34_170);
                    STATE_VARIABLE_AddCommaNewline_4_175 = (MR_Integer) 1;
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  MutableVars_44 = (MR_Word) ((MR_Unsigned) 0U);
                  STATE_VARIABLE_State_34_170 = STATE_VARIABLE_State_32_163;
                  STATE_VARIABLE_AddCommaNewline_4_175 = STATE_VARIABLE_AddCommaNewline_3_164;
                }
                break;
            }
            {
              Var_176 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_176, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_9[0]));
              MR_hl_field(0, Var_176, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__format_goal_scope_6_p_0_3));
              MR_hl_field(0, Var_176, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_176, 3) = ((MR_Box) (Indent1Str_39));
            }
            mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_176, MutableVars_44, ((MR_Box) (STATE_VARIABLE_AddCommaNewline_4_175)), &conv5_STATE_VARIABLE_AddCommaNewline_5_177, ((MR_Box) (STATE_VARIABLE_State_34_170)), &conv4_STATE_VARIABLE_State_35_178);
            STATE_VARIABLE_AddCommaNewline_5_177 = ((MR_Word) (conv5_STATE_VARIABLE_AddCommaNewline_5_177));
            STATE_VARIABLE_State_35_178 = ((MR_Word) (conv4_STATE_VARIABLE_State_35_178));
            switch (STATE_VARIABLE_AddCommaNewline_5_177) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                STATE_VARIABLE_State_36_180 = STATE_VARIABLE_State_35_178;
                break;
              case (MR_Integer) 1:
                mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_35_178, &STATE_VARIABLE_State_36_180);
                break;
            }
            switch (Lang_42) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_String QuantVarsStr_46;
                  MR_Word VarNameSrc_231 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_52, 2))));
                  MR_Word VarNamePrint_232 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_52, 3))) & (MR_Integer) 3);
                  MR_Word Var_399;
                  MR_Word Var_400;
                  MR_Word Var_402;

                  QuantVarsStr_46 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_231, VarNamePrint_232, QuantVars_37);
                  mercury__string__builder__append_string_3_p_0(Indent1Str_39, STATE_VARIABLE_State_36_180, &Var_399);
                  mercury__string__builder__append_string_3_p_0((MR_String) "% quantified vars [", Var_399, &Var_400);
                  mercury__string__builder__append_string_3_p_0(QuantVarsStr_46, Var_400, &Var_402);
                  mercury__string__builder__append_string_3_p_0((MR_String) "]\n", Var_402, &STATE_VARIABLE_State_37_183);
                }
                break;
              case (MR_Integer) 0:
                STATE_VARIABLE_State_37_183 = STATE_VARIABLE_State_36_180;
                break;
            }
            libs__indent__format_indent2_3_p_0(Indent_8, STATE_VARIABLE_State_37_183, &STATE_VARIABLE_State_38_188);
            mercury__string__builder__append_string_3_p_0((MR_String) "] (\n", STATE_VARIABLE_State_38_188, &STATE_VARIABLE_State_2_58);
            STATE_VARIABLE_InfoGoal_1_134 = STATE_VARIABLE_InfoGoal_0_52;
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word LCVar_47 = ((MR_Word) ((MR_hl_field(3, Reason_12, 1))));
            MR_Word LCSVar_48 = ((MR_Word) ((MR_hl_field(3, Reason_12, 2))));
            MR_Word UseParentStack_49 = ((MR_Unsigned) ((MR_hl_field(3, Reason_12, 3))) & (MR_Integer) 1);
            MR_String UseParentStackStr_50;
            MR_String LCVarsStr_51;
            MR_Word Var_191;
            MR_Word Var_192;
            MR_Word VarNameSrc_241;
            MR_Word VarNamePrint_242;
            MR_Word Var_422;
            MR_Word Var_423;
            MR_Word Var_425;
            MR_Word Var_426;
            MR_Word Var_428;

            switch (UseParentStack_49) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                UseParentStackStr_50 = (MR_String) "using_child_stack";
                break;
              case (MR_Integer) 0:
                UseParentStackStr_50 = (MR_String) "using_parent_stack_frame";
                break;
            }
            VarNameSrc_241 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_52, 2))));
            VarNamePrint_242 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_InfoGoal_0_52, 3))) & (MR_Integer) 3);
            {
              Var_192 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_192, 0) = ((MR_Box) (LCSVar_48));
              MR_hl_field(1, Var_192, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_191 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_191, 0) = ((MR_Box) (LCVar_47));
              MR_hl_field(1, Var_191, 1) = ((MR_Box) (Var_192));
            }
            LCVarsStr_51 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_241, VarNamePrint_242, Var_191);
            mercury__string__builder__append_string_3_p_0(IndentStr_14, STATE_VARIABLE_State_1_55, &Var_422);
            mercury__string__builder__append_string_3_p_0((MR_String) "% loop_control_spawn_off_", Var_422, &Var_423);
            mercury__string__builder__append_string_3_p_0(UseParentStackStr_50, Var_423, &Var_425);
            mercury__string__builder__append_string_3_p_0((MR_String) "(", Var_425, &Var_426);
            mercury__string__builder__append_string_3_p_0(LCVarsStr_51, Var_426, &Var_428);
            mercury__string__builder__append_string_3_p_0((MR_String) ") (\n", Var_428, &STATE_VARIABLE_State_2_58);
            STATE_VARIABLE_InfoGoal_1_134 = STATE_VARIABLE_InfoGoal_0_52;
          }
          break;
      }
      break;
  }
  Var_203 = (Indent_8 + (MR_Unsigned) 1U);
  hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0(STATE_VARIABLE_InfoGoal_1_134, Var_203, (MR_String) "\n", Goal_13, STATE_VARIABLE_State_2_58, &STATE_VARIABLE_State_41_205);
  mercury__string__builder__append_string_3_p_0(IndentStr_14, STATE_VARIABLE_State_41_205, &Var_445);
  mercury__string__builder__append_string_3_p_0((MR_String) ")", Var_445, &Var_446);
  mercury__string__builder__append_string_3_p_0(Follow_9, Var_446, STATE_VARIABLE_State_54);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_goal_if_then_else_6_p_0(
  MR_Word InfoGoal_7,
  MR_Unsigned Indent_8,
  MR_String Follow_9,
  MR_Word GoalExpr_10,
  MR_Word STATE_VARIABLE_State_0_32,
  MR_Word * STATE_VARIABLE_State_33)
{
  MR_bool succeeded;
  MR_Word Vars_12 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 1))));
  MR_Word Cond_13 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 2))));
  MR_Word Then_14 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 3))));
  MR_Word Else_15 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 4))));
  MR_String IndentStr_16;
  MR_String SomeVarsStr_17;
  MR_Unsigned Indent1_23;
  MR_Word Info_24;
  MR_Word DumpOptions_25;
  MR_Unsigned ElseIndent_31;
  MR_Word STATE_VARIABLE_State_1_40;
  MR_Word STATE_VARIABLE_State_2_47;
  MR_Word STATE_VARIABLE_State_3_50;
  MR_Word STATE_VARIABLE_State_4_54;
  MR_Word STATE_VARIABLE_State_5_57;
  MR_Word STATE_VARIABLE_State_6_62;
  MR_Word Var_96;
  MR_Word Var_97;
  MR_Word Var_99;
  MR_Word Var_101;
  MR_Word Var_103;
  MR_Word Var_105;
  MR_Word Var_106;
  MR_Word Var_60;
  MR_Word Var_92;

  IndentStr_16 = libs__indent__indent2_string_1_f_0(Indent_8);
  if ((Vars_12 == (MR_Word) ((MR_Unsigned) 0U)))
    SomeVarsStr_17 = (MR_String) "";
  else
  {
    MR_Word VarNameSrc_20 = ((MR_Word) ((MR_hl_field(0, InfoGoal_7, 2))));
    MR_Word VarNamePrint_21 = ((MR_Unsigned) ((MR_hl_field(0, InfoGoal_7, 3))) & (MR_Integer) 3);
    MR_String VarsStr_22;
    MR_String Var_94;

    VarsStr_22 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_20, VarNamePrint_21, Vars_12);
    Var_94 = mercury__string__f_43_43_2_f_0(VarsStr_22, (MR_String) "]");
    SomeVarsStr_17 = mercury__string__f_43_43_2_f_0((MR_String) " some [", Var_94);
  }
  mercury__string__builder__append_string_3_p_0(IndentStr_16, STATE_VARIABLE_State_0_32, &Var_96);
  mercury__string__builder__append_string_3_p_0((MR_String) "( if", Var_96, &Var_97);
  mercury__string__builder__append_string_3_p_0(SomeVarsStr_17, Var_97, &Var_99);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_99, &STATE_VARIABLE_State_1_40);
  Indent1_23 = (Indent_8 + (MR_Unsigned) 1U);
  hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0(InfoGoal_7, Indent1_23, (MR_String) "\n", Cond_13, STATE_VARIABLE_State_1_40, &STATE_VARIABLE_State_2_47);
  mercury__string__builder__append_string_3_p_0(IndentStr_16, STATE_VARIABLE_State_2_47, &Var_101);
  mercury__string__builder__append_string_3_p_0((MR_String) "then\n", Var_101, &STATE_VARIABLE_State_3_50);
  hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0(InfoGoal_7, Indent1_23, (MR_String) "\n", Then_14, STATE_VARIABLE_State_3_50, &STATE_VARIABLE_State_4_54);
  mercury__string__builder__append_string_3_p_0(IndentStr_16, STATE_VARIABLE_State_4_54, &Var_103);
  mercury__string__builder__append_string_3_p_0((MR_String) "else\n", Var_103, &STATE_VARIABLE_State_5_57);
  Info_24 = ((MR_Word) ((MR_hl_field(0, InfoGoal_7, 0))));
  DumpOptions_25 = ((MR_Word) ((MR_hl_field(0, Info_24, 0))));
  Var_92 = hlds__hlds_out__hlds_out_util__empty_dump_options_0_f_0();
  succeeded = hlds__hlds_out__hlds_out_util____Unify____hlds_dump_options_0_0(DumpOptions_25, Var_92);
  succeeded = !(succeeded);
  if (succeeded)
  {
    Var_60 = ((MR_Word) ((MR_hl_field(0, Else_15, 0))));
    succeeded = ((((MR_tag((MR_Word) Var_60)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_60, 0)))) == (MR_Integer) 6)));
  }
  if (succeeded)
    ElseIndent_31 = Indent_8;
  else
    ElseIndent_31 = Indent1_23;
  hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0(InfoGoal_7, ElseIndent_31, (MR_String) "\n", Else_15, STATE_VARIABLE_State_5_57, &STATE_VARIABLE_State_6_62);
  mercury__string__builder__append_string_3_p_0(IndentStr_16, STATE_VARIABLE_State_6_62, &Var_105);
  mercury__string__builder__append_string_3_p_0((MR_String) ")", Var_105, &Var_106);
  mercury__string__builder__append_string_3_p_0(Follow_9, Var_106, STATE_VARIABLE_State_33);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_goal_negation_6_p_0(
  MR_Word InfoGoal_7,
  MR_Unsigned Indent_8,
  MR_String Follow_9,
  MR_Word GoalExpr_10,
  MR_Word STATE_VARIABLE_State_0_14,
  MR_Word * STATE_VARIABLE_State_15)
{
  MR_Word Goal_12 = (MR_Word) ((MR_Word) (GoalExpr_10));
  MR_String IndentStr_13;
  MR_Word STATE_VARIABLE_State_1_18;
  MR_Unsigned Var_21;
  MR_Word STATE_VARIABLE_State_2_23;
  MR_Word Var_32;
  MR_Word Var_34;
  MR_Word Var_35;

  IndentStr_13 = libs__indent__indent2_string_1_f_0(Indent_8);
  mercury__string__builder__append_string_3_p_0(IndentStr_13, STATE_VARIABLE_State_0_14, &Var_32);
  mercury__string__builder__append_string_3_p_0((MR_String) "not (\n", Var_32, &STATE_VARIABLE_State_1_18);
  Var_21 = (Indent_8 + (MR_Unsigned) 1U);
  hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0(InfoGoal_7, Var_21, (MR_String) "\n", Goal_12, STATE_VARIABLE_State_1_18, &STATE_VARIABLE_State_2_23);
  mercury__string__builder__append_string_3_p_0(IndentStr_13, STATE_VARIABLE_State_2_23, &Var_34);
  mercury__string__builder__append_string_3_p_0((MR_String) ")", Var_34, &Var_35);
  mercury__string__builder__append_string_3_p_0(Follow_9, Var_35, STATE_VARIABLE_State_15);
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_goal__format_goal_switch_6_p_0_1(
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
hlds__hlds_out__hlds_out_goal__format_goal_switch_6_p_0(
  MR_Word InfoGoal_7,
  MR_Unsigned Indent_8,
  MR_String Follow_9,
  MR_Word GoalExpr_10,
  MR_Word STATE_VARIABLE_State_0_22,
  MR_Word * STATE_VARIABLE_State_23)
{
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 1))));
  MR_Word CanFail_13 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_10, 2))) & (MR_Integer) 1);
  MR_Word CasesList_14 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 3))));
  MR_String IndentStr_15;
  MR_String CanFailStr_16;
  MR_Word VarNameSrc_17;
  MR_Word VarNamePrint_18;
  MR_String VarStr_19;
  MR_Word STATE_VARIABLE_State_1_26;
  MR_Word STATE_VARIABLE_State_3_34;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_65;
  MR_Word Var_69;
  MR_Word Var_70;

  IndentStr_15 = libs__indent__indent2_string_1_f_0(Indent_8);
  CanFailStr_16 = parse_tree__parse_tree_out_misc__can_fail_to_string_1_f_0(CanFail_13);
  VarNameSrc_17 = ((MR_Word) ((MR_hl_field(0, InfoGoal_7, 2))));
  VarNamePrint_18 = ((MR_Unsigned) ((MR_hl_field(0, InfoGoal_7, 3))) & (MR_Integer) 3);
  VarStr_19 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_17, VarNamePrint_18, Var_12);
  mercury__string__builder__append_string_3_p_0(IndentStr_15, STATE_VARIABLE_State_0_22, &Var_59);
  mercury__string__builder__append_string_3_p_0((MR_String) "( % ", Var_59, &Var_60);
  mercury__string__builder__append_string_3_p_0(CanFailStr_16, Var_60, &Var_62);
  mercury__string__builder__append_string_3_p_0((MR_String) " switch on ", Var_62, &Var_63);
  mercury__string__builder__append_string_3_p_0(VarStr_19, Var_63, &Var_65);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_65, &STATE_VARIABLE_State_1_26);
  if ((CasesList_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_67;

    mercury__string__builder__append_string_3_p_0(IndentStr_15, STATE_VARIABLE_State_1_26, &Var_67);
    mercury__string__builder__append_string_3_p_0((MR_String) "fail\n", Var_67, &STATE_VARIABLE_State_3_34);
  }
  else
  {
    MR_Word Case_20 = ((MR_Word) ((MR_hl_field(1, CasesList_14, 0))));
    MR_Word Cases_21 = ((MR_Word) ((MR_hl_field(1, CasesList_14, 1))));
    MR_Word STATE_VARIABLE_State_2_33;
    MR_Word MainConsId_72 = ((MR_Word) ((MR_hl_field(0, Case_20, 0))));
    MR_Word OtherConsIds_73 = ((MR_Word) ((MR_hl_field(0, Case_20, 1))));
    MR_Word Goal_74 = ((MR_Word) ((MR_hl_field(0, Case_20, 2))));
    MR_String IndentStr_75;
    MR_Word VarNameSrc_76;
    MR_Word VarNamePrint_77;
    MR_String VarStr_78;
    MR_Word ConsIdStrs_79;
    MR_String ConsIdsStr_80;
    MR_Word Var_82;
    MR_Word STATE_VARIABLE_State_1_84;
    MR_Unsigned Var_85;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_101;

    IndentStr_75 = libs__indent__indent2_string_1_f_0(Indent_8);
    VarNameSrc_76 = ((MR_Word) ((MR_hl_field(0, InfoGoal_7, 2))));
    VarNamePrint_77 = ((MR_Unsigned) ((MR_hl_field(0, InfoGoal_7, 3))) & (MR_Integer) 3);
    VarStr_78 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_76, VarNamePrint_77, Var_12);
    {
      Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_82, 0) = ((MR_Box) (MainConsId_72));
      MR_hl_field(1, Var_82, 1) = ((MR_Box) (OtherConsIds_73));
    }
    ConsIdStrs_79 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[6]), Var_82);
    ConsIdsStr_80 = mercury__string__join_list_2_f_0((MR_String) " or ", ConsIdStrs_79);
    mercury__string__builder__append_string_3_p_0(IndentStr_75, STATE_VARIABLE_State_1_26, &Var_95);
    mercury__string__builder__append_string_3_p_0((MR_String) "% ", Var_95, &Var_96);
    mercury__string__builder__append_string_3_p_0(VarStr_78, Var_96, &Var_98);
    mercury__string__builder__append_string_3_p_0((MR_String) " has functor ", Var_98, &Var_99);
    mercury__string__builder__append_string_3_p_0(ConsIdsStr_80, Var_99, &Var_101);
    mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_101, &STATE_VARIABLE_State_1_84);
    Var_85 = (Indent_8 + (MR_Unsigned) 1U);
    hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0(InfoGoal_7, Var_85, (MR_String) "\n", Goal_74, STATE_VARIABLE_State_1_84, &STATE_VARIABLE_State_2_33);
    hlds__hlds_out__hlds_out_goal__format_cases_6_p_0(InfoGoal_7, Indent_8, Var_12, Cases_21, STATE_VARIABLE_State_2_33, &STATE_VARIABLE_State_3_34);
  }
  mercury__string__builder__append_string_3_p_0(IndentStr_15, STATE_VARIABLE_State_3_34, &Var_69);
  mercury__string__builder__append_string_3_p_0((MR_String) ")", Var_69, &Var_70);
  mercury__string__builder__append_string_3_p_0(Follow_9, Var_70, STATE_VARIABLE_State_23);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_goal_plain_call_6_p_0(
  MR_Word InfoGoal_7,
  MR_Unsigned Indent_8,
  MR_String Follow_9,
  MR_Word GoalExpr_10,
  MR_Word STATE_VARIABLE_State_0_46,
  MR_Word * STATE_VARIABLE_State_47)
{
  MR_bool succeeded;
  MR_Word PredId_12 = ((MR_Word) ((MR_hl_field(2, GoalExpr_10, 0))));
  MR_Integer ProcId_13 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_10, 1))));
  MR_Word ArgVars_14 = ((MR_Word) ((MR_hl_field(2, GoalExpr_10, 2))));
  MR_Word Builtin_15 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr_10, 3))) & (MR_Integer) 1);
  MR_Word MaybeUnifyContext_16 = ((MR_Word) ((MR_hl_field(2, GoalExpr_10, 4))));
  MR_Word PredName_17 = ((MR_Word) ((MR_hl_field(2, GoalExpr_10, 5))));
  MR_String IndentStr_18;
  MR_Word Info_19;
  MR_Word DumpOptions_20;
  MR_Word DumpBuiltinStatus_21;
  MR_Word VarNameSrc_28;
  MR_Word VarNamePrint_29;
  MR_Word InParenArgVars_30;
  MR_String InParenArgVarsStr_32;
  MR_Word DumpInstMapVars_33;
  MR_Word STATE_VARIABLE_State_1_50;
  MR_Word STATE_VARIABLE_State_4_63;
  MR_Word STATE_VARIABLE_State_5_66;
  MR_Word Var_207;
  MR_Word Var_208;
  MR_Word Var_204;

  IndentStr_18 = libs__indent__indent2_string_1_f_0(Indent_8);
  Info_19 = ((MR_Word) ((MR_hl_field(0, InfoGoal_7, 0))));
  DumpOptions_20 = ((MR_Word) ((MR_hl_field(0, Info_19, 0))));
  DumpBuiltinStatus_21 = ((((MR_Unsigned) ((MR_hl_field(0, DumpOptions_20, 0))) >> 30)) & (MR_Integer) 1);
  switch (DumpBuiltinStatus_21) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_State_1_50 = STATE_VARIABLE_State_0_46;
      break;
    case (MR_Integer) 1:
      switch (Builtin_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_205;

            mercury__string__builder__append_string_3_p_0(IndentStr_18, STATE_VARIABLE_State_0_46, &Var_205);
            mercury__string__builder__append_string_3_p_0((MR_String) "% inline builtin\n", Var_205, &STATE_VARIABLE_State_1_50);
          }
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_State_1_50 = STATE_VARIABLE_State_0_46;
          break;
      }
      break;
  }
  mercury__string__builder__append_string_3_p_0(IndentStr_18, STATE_VARIABLE_State_1_50, &Var_207);
  VarNameSrc_28 = ((MR_Word) ((MR_hl_field(0, InfoGoal_7, 2))));
  VarNamePrint_29 = ((MR_Unsigned) ((MR_hl_field(0, InfoGoal_7, 3))) & (MR_Integer) 3);
  Var_204 = hlds__hlds_pred__invalid_pred_id_0_f_0();
  succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_12, Var_204);
  if (succeeded)
  {
    mercury__string__builder__append_string_3_p_0((MR_String) "", Var_207, &STATE_VARIABLE_State_4_63);
    InParenArgVars_30 = ArgVars_14;
  }
  else
  {
    MR_Word PredInfo_26;
    MR_Word ModuleInfo_24 = ((MR_Word) ((MR_hl_field(0, InfoGoal_7, 1))));
    MR_Word PredIdTable_25;
    MR_Box conv0_PredInfo_26;

    hlds__hlds_module__module_info_get_pred_id_table_2_p_0(ModuleInfo_24, &PredIdTable_25);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable_25, ((MR_Box) (PredId_12)), &conv0_PredInfo_26);
    if (succeeded)
    {
      PredInfo_26 = ((MR_Word) (conv0_PredInfo_26));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Purity_27;
      MR_Word PredOrFunc_236;
      MR_String PrefixStr_237;
      MR_Word STATE_VARIABLE_State_2_238;

      PredOrFunc_236 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_26);
      hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_26, &Purity_27);
      PrefixStr_237 = parse_tree__parse_tree_out_misc__purity_prefix_to_string_1_f_0(Purity_27);
      mercury__string__builder__append_string_3_p_0(PrefixStr_237, Var_207, &STATE_VARIABLE_State_2_238);
      switch (PredOrFunc_236) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word LHSVar_31;
            MR_Word STATE_VARIABLE_State_3_61;
            MR_Box conv1_LHSVar_31;

            parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), ArgVars_14, &InParenArgVars_30, &conv1_LHSVar_31);
            LHSVar_31 = ((MR_Word) (conv1_LHSVar_31));
            parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_115_114_99_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[1]), VarNameSrc_28, VarNamePrint_29, LHSVar_31, STATE_VARIABLE_State_2_238, &STATE_VARIABLE_State_3_61);
            mercury__string__builder__append_string_3_p_0((MR_String) " = ", STATE_VARIABLE_State_3_61, &STATE_VARIABLE_State_4_63);
          }
          break;
        case (MR_Integer) 0:
          {
            InParenArgVars_30 = ArgVars_14;
            STATE_VARIABLE_State_4_63 = STATE_VARIABLE_State_2_238;
          }
          break;
      }
    }
    else
    {
      mercury__string__builder__append_string_3_p_0((MR_String) "CALL TO DELETED ", Var_207, &STATE_VARIABLE_State_4_63);
      InParenArgVars_30 = ArgVars_14;
    }
  }
  InParenArgVarsStr_32 = hlds__hlds_out__hlds_out_goal__sym_name_and_args_to_string_4_f_0(VarNameSrc_28, VarNamePrint_29, PredName_17, InParenArgVars_30);
  mercury__string__builder__append_string_3_p_0(InParenArgVarsStr_32, STATE_VARIABLE_State_4_63, &Var_208);
  mercury__string__builder__append_string_3_p_0(Follow_9, Var_208, &STATE_VARIABLE_State_5_66);
  DumpInstMapVars_33 = ((((MR_Unsigned) ((MR_hl_field(0, DumpOptions_20, 0))) >> 24)) & (MR_Integer) 1);
  switch (DumpInstMapVars_33) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_State_47 = STATE_VARIABLE_State_5_66;
      break;
    case (MR_Integer) 1:
      {
        MR_Integer PredNum_34;
        MR_Integer ProcNum_35;
        MR_Word STATE_VARIABLE_State_6_73;
        MR_Word Var_209;
        MR_Word Var_210;
        MR_Word Var_212;
        MR_String Var_213;
        MR_Word Var_220;
        MR_Word Var_222;
        MR_String Var_223;

        hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_12, &PredNum_34);
        hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_13, &ProcNum_35);
        mercury__string__builder__append_string_3_p_0(IndentStr_18, STATE_VARIABLE_State_5_66, &Var_209);
        mercury__string__builder__append_string_3_p_0((MR_String) "% pred id: ", Var_209, &Var_210);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[0]), PredNum_34, &Var_213);
        mercury__string__builder__append_string_3_p_0(Var_213, Var_210, &Var_212);
        mercury__string__builder__append_string_3_p_0((MR_String) ", proc id: ", Var_212, &Var_220);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[0]), ProcNum_35, &Var_223);
        mercury__string__builder__append_string_3_p_0(Var_223, Var_220, &Var_222);
        mercury__string__builder__append_string_3_p_0(Follow_9, Var_222, &STATE_VARIABLE_State_6_73);
        if ((MaybeUnifyContext_16 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_State_47 = STATE_VARIABLE_State_6_73;
        else
        {
          MR_Word CallUnifyContext_36 = ((MR_Word) ((MR_hl_field(1, MaybeUnifyContext_16, 0))));
          MR_Word TypeQual_37 = ((MR_Word) ((MR_hl_field(0, InfoGoal_7, 6))));
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, CallUnifyContext_36, 0))));
          MR_Word VarType_42;
          MR_Word RHS_43 = ((MR_Word) ((MR_hl_field(0, CallUnifyContext_36, 1))));
          MR_String VarStr_45;
          MR_Word STATE_VARIABLE_State_7_84;
          MR_Word STATE_VARIABLE_State_8_89;
          MR_Word Var_230;
          MR_Word Var_231;
          MR_Word Var_233;

          if ((TypeQual_37 == (MR_Word) ((MR_Unsigned) 0U)))
            VarType_42 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_Word VarTable_39 = ((MR_Word) ((MR_hl_field(1, TypeQual_37, 1))));
            MR_Word UniType_41;

            parse_tree__var_table__lookup_var_type_3_p_0(VarTable_39, Var_40, &UniType_41);
            {
              VarType_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, VarType_42, 0) = ((MR_Box) (UniType_41));
            }
          }
          VarStr_45 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_28, VarNamePrint_29, Var_40);
          mercury__string__builder__append_string_3_p_0(IndentStr_18, STATE_VARIABLE_State_6_73, &Var_230);
          mercury__string__builder__append_string_3_p_0((MR_String) "% unify context: ", Var_230, &Var_231);
          mercury__string__builder__append_string_3_p_0(VarStr_45, Var_231, &Var_233);
          mercury__string__builder__append_string_3_p_0((MR_String) " = ", Var_233, &STATE_VARIABLE_State_7_84);
          hlds__hlds_out__hlds_out_goal__format_unify_rhs_2_6_p_0(InfoGoal_7, Indent_8, VarType_42, RHS_43, STATE_VARIABLE_State_7_84, &STATE_VARIABLE_State_8_89);
          mercury__string__builder__append_string_3_p_0(Follow_9, STATE_VARIABLE_State_8_89, STATE_VARIABLE_State_47);
        }
      }
      break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_unify_rhs_2_6_p_0(
  MR_Word InfoGoal_7,
  MR_Unsigned Indent_8,
  MR_Word MaybeType_9,
  MR_Word RHS_10,
  MR_Word STATE_VARIABLE_State_0_57,
  MR_Word * STATE_VARIABLE_State_58)
{
  MR_bool succeeded;
  MR_Word VarNameSrc_12 = ((MR_Word) ((MR_hl_field(0, InfoGoal_7, 2))));
  MR_Word VarNamePrint_13 = ((MR_Unsigned) ((MR_hl_field(0, InfoGoal_7, 3))) & (MR_Integer) 3);

  switch (MR_tag((MR_Word) RHS_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, RHS_10, 0))));

        parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_95_115_114_99_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[1]), VarNameSrc_12, VarNamePrint_13, Var_14, STATE_VARIABLE_State_0_57, STATE_VARIABLE_State_58);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ConsId0_15 = ((MR_Word) ((MR_hl_field(1, RHS_10, 0))));
        MR_Word IsExistConstruct_16 = ((MR_Unsigned) ((MR_hl_field(1, RHS_10, 1))) & (MR_Integer) 1);
        MR_Word ArgVars_17 = ((MR_Word) ((MR_hl_field(1, RHS_10, 2))));
        MR_Word ConsId_22;
        MR_Word ModuleInfo_23;
        MR_String RHSStr_24;
        MR_Word STATE_VARIABLE_State_2_63;
        MR_Word SymName0_18;
        MR_Integer Arity_19;
        MR_Word TypeCtor_20;
        MR_Word Var_61;
        MR_Word Type_25;
        MR_Word TVarSet_26;
        MR_Word Var_64;

        succeeded = (IsExistConstruct_16 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) ConsId0_15)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_61 = (MR_Word) (MR_body((MR_Word) (ConsId0_15), (MR_Integer) 1));
            SymName0_18 = ((MR_Word) ((MR_hl_field(0, Var_61, 0))));
            Arity_19 = ((MR_Integer) ((MR_hl_field(0, Var_61, 1))));
            TypeCtor_20 = ((MR_Word) ((MR_hl_field(0, Var_61, 2))));
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          MR_Word SymName_21;
          MR_Word Var_62;

          parse_tree__prog_type__add_new_prefix_2_p_0(SymName0_18, &SymName_21);
          {
            Var_62 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_62, 0) = ((MR_Box) (SymName_21));
            MR_hl_field(0, Var_62, 1) = ((MR_Box) (Arity_19));
            MR_hl_field(0, Var_62, 2) = ((MR_Box) (TypeCtor_20));
          }
          ConsId_22 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_62)));
        }
        else
          ConsId_22 = ConsId0_15;
        ModuleInfo_23 = ((MR_Word) ((MR_hl_field(0, InfoGoal_7, 1))));
        RHSStr_24 = hlds__hlds_out__hlds_out_util__functor_cons_id_to_string_5_f_0(ModuleInfo_23, VarNameSrc_12, VarNamePrint_13, ConsId_22, ArgVars_17);
        mercury__string__builder__append_string_3_p_0(RHSStr_24, STATE_VARIABLE_State_0_57, &STATE_VARIABLE_State_2_63);
        succeeded = (MaybeType_9 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Type_25 = ((MR_Word) ((MR_hl_field(1, MaybeType_9, 0))));
          Var_64 = ((MR_Word) ((MR_hl_field(0, InfoGoal_7, 6))));
          succeeded = (Var_64 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            TVarSet_26 = ((MR_Word) ((MR_hl_field(1, Var_64, 0))));
        }
        if (succeeded)
        {
          MR_Word STATE_VARIABLE_State_3_66;

          mercury__string__builder__append_string_3_p_0((MR_String) " : ", STATE_VARIABLE_State_2_63, &STATE_VARIABLE_State_3_66);
          parse_tree__parse_tree_out_type__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_121_112_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[1]), TVarSet_26, VarNamePrint_13, Type_25, STATE_VARIABLE_State_3_66, STATE_VARIABLE_State_58);
        }
        else
          *STATE_VARIABLE_State_58 = STATE_VARIABLE_State_2_63;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Purity_28 = ((((MR_Unsigned) ((MR_hl_field(2, RHS_10, 0))) >> 2)) & (MR_Integer) 3);
        MR_Word Groundness_29 = ((((MR_Unsigned) ((MR_hl_field(2, RHS_10, 0))) >> 1)) & (MR_Integer) 1);
        MR_Word PredOrFunc_30 = ((MR_Unsigned) ((MR_hl_field(2, RHS_10, 0))) & (MR_Integer) 1);
        MR_Word NonLocals_31 = ((MR_Word) ((MR_hl_field(2, RHS_10, 1))));
        MR_Word VarsModes_32 = ((MR_Word) ((MR_hl_field(2, RHS_10, 2))));
        MR_Word Det_33 = ((MR_Unsigned) ((MR_hl_field(2, RHS_10, 3))) & (MR_Integer) 7);
        MR_Word Goal_34 = ((MR_Word) ((MR_hl_field(2, RHS_10, 4))));
        MR_String IndentStr_35;
        MR_Unsigned Indent1_36;
        MR_Word Info_37;
        MR_Word Lang_38;
        MR_Word DumpOptions_52;
        MR_Word DumpNonLocals_53;
        MR_String Var_70;
        MR_Word STATE_VARIABLE_State_5_71;
        MR_Word Var_72;
        MR_Word STATE_VARIABLE_State_11_96;
        MR_Word STATE_VARIABLE_State_19_131;
        MR_Word Type_142;
        MR_Word TVarSet_143;
        MR_Word Var_127;

        IndentStr_35 = libs__indent__indent2_string_1_f_0(Indent_8);
        Indent1_36 = (Indent_8 + (MR_Unsigned) 1U);
        Var_70 = parse_tree__parse_tree_out_misc__purity_prefix_to_string_1_f_0(Purity_28);
        mercury__string__builder__append_string_3_p_0(Var_70, STATE_VARIABLE_State_0_57, &STATE_VARIABLE_State_5_71);
        Info_37 = ((MR_Word) ((MR_hl_field(0, InfoGoal_7, 0))));
        Var_72 = ((MR_Word) ((MR_hl_field(0, Info_37, 4))));
        Lang_38 = parse_tree__parse_tree_out_info__get_output_lang_1_f_0(Var_72);
        switch (Groundness_29) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            switch (PredOrFunc_30) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word ArgVarsModes_45;
                  MR_Word RetVarMode_46;
                  MR_String RetModeStr_50;
                  MR_Word STATE_VARIABLE_State_12_100;
                  MR_Word STATE_VARIABLE_State_13_103;
                  MR_Word STATE_VARIABLE_State_15_115;
                  MR_Word STATE_VARIABLE_State_16_121;
                  MR_Word InstVarSet_140;
                  MR_String DetStr_141;
                  MR_Word Var_537;
                  MR_Word Var_539;
                  MR_Word Var_540;
                  MR_Word Var_542;
                  MR_Word Var_544;
                  MR_Box conv0_RetVarMode_46;

                  parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[2]), VarsModes_32, &ArgVarsModes_45, &conv0_RetVarMode_46);
                  RetVarMode_46 = ((MR_Word) (conv0_RetVarMode_46));
                  mercury__string__builder__append_string_3_p_0((MR_String) "(", STATE_VARIABLE_State_5_71, &STATE_VARIABLE_State_12_100);
                  InstVarSet_140 = ((MR_Word) ((MR_hl_field(0, InfoGoal_7, 5))));
                  if ((ArgVarsModes_45 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_533;
                    MR_Word Var_535;

                    mercury__string__builder__append_string_3_p_0((MR_String) "(", STATE_VARIABLE_State_12_100, &Var_533);
                    mercury__string__builder__append_string_3_p_0((MR_String) "any_func", Var_533, &Var_535);
                    mercury__string__builder__append_string_3_p_0((MR_String) ")", Var_535, &STATE_VARIABLE_State_13_103);
                  }
                  else
                  {
                    MR_String ArgModesStr_49;
                    MR_Word Var_528;
                    MR_Word Var_529;
                    MR_Word Var_531;

                    ArgModesStr_49 = hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0(Lang_38, VarNameSrc_12, InstVarSet_140, VarNamePrint_13, ArgVarsModes_45);
                    mercury__string__builder__append_string_3_p_0((MR_String) "any_func", STATE_VARIABLE_State_12_100, &Var_528);
                    mercury__string__builder__append_string_3_p_0((MR_String) "(", Var_528, &Var_529);
                    mercury__string__builder__append_string_3_p_0(ArgModesStr_49, Var_529, &Var_531);
                    mercury__string__builder__append_string_3_p_0((MR_String) ")", Var_531, &STATE_VARIABLE_State_13_103);
                  }
                  RetModeStr_50 = hlds__hlds_out__hlds_out_util__var_mode_to_string_5_f_0(Lang_38, VarNameSrc_12, InstVarSet_140, VarNamePrint_13, RetVarMode_46);
                  DetStr_141 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_33);
                  mercury__string__builder__append_string_3_p_0((MR_String) " = (", STATE_VARIABLE_State_13_103, &Var_537);
                  mercury__string__builder__append_string_3_p_0(RetModeStr_50, Var_537, &Var_539);
                  mercury__string__builder__append_string_3_p_0((MR_String) ") is ", Var_539, &Var_540);
                  mercury__string__builder__append_string_3_p_0(DetStr_141, Var_540, &Var_542);
                  mercury__string__builder__append_string_3_p_0((MR_String) " :-\n", Var_542, &STATE_VARIABLE_State_15_115);
                  hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0(InfoGoal_7, Indent1_36, (MR_String) "\n", Goal_34, STATE_VARIABLE_State_15_115, &STATE_VARIABLE_State_16_121);
                  mercury__string__builder__append_string_3_p_0(IndentStr_35, STATE_VARIABLE_State_16_121, &Var_544);
                  mercury__string__builder__append_string_3_p_0((MR_String) ")", Var_544, &STATE_VARIABLE_State_11_96);
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_String DetStr_44;
                  MR_Word STATE_VARIABLE_State_6_74;
                  MR_Word STATE_VARIABLE_State_7_77;
                  MR_Word STATE_VARIABLE_State_9_89;
                  MR_Word STATE_VARIABLE_State_10_93;
                  MR_Word Var_522;
                  MR_Word Var_524;
                  MR_Word Var_526;

                  mercury__string__builder__append_string_3_p_0((MR_String) "(", STATE_VARIABLE_State_5_71, &STATE_VARIABLE_State_6_74);
                  if ((VarsModes_32 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_518;
                    MR_Word Var_520;

                    mercury__string__builder__append_string_3_p_0((MR_String) "(", STATE_VARIABLE_State_6_74, &Var_518);
                    mercury__string__builder__append_string_3_p_0((MR_String) "any_pred", Var_518, &Var_520);
                    mercury__string__builder__append_string_3_p_0((MR_String) ")", Var_520, &STATE_VARIABLE_State_7_77);
                  }
                  else
                  {
                    MR_Word InstVarSet_42 = ((MR_Word) ((MR_hl_field(0, InfoGoal_7, 5))));
                    MR_String ModesStr_43;
                    MR_Word Var_513;
                    MR_Word Var_514;
                    MR_Word Var_516;

                    ModesStr_43 = hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0(Lang_38, VarNameSrc_12, InstVarSet_42, VarNamePrint_13, VarsModes_32);
                    mercury__string__builder__append_string_3_p_0((MR_String) "any_pred", STATE_VARIABLE_State_6_74, &Var_513);
                    mercury__string__builder__append_string_3_p_0((MR_String) "(", Var_513, &Var_514);
                    mercury__string__builder__append_string_3_p_0(ModesStr_43, Var_514, &Var_516);
                    mercury__string__builder__append_string_3_p_0((MR_String) ")", Var_516, &STATE_VARIABLE_State_7_77);
                  }
                  DetStr_44 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_33);
                  mercury__string__builder__append_string_3_p_0((MR_String) " is ", STATE_VARIABLE_State_7_77, &Var_522);
                  mercury__string__builder__append_string_3_p_0(DetStr_44, Var_522, &Var_524);
                  mercury__string__builder__append_string_3_p_0((MR_String) " :-\n", Var_524, &STATE_VARIABLE_State_9_89);
                  hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0(InfoGoal_7, Indent1_36, (MR_String) "\n", Goal_34, STATE_VARIABLE_State_9_89, &STATE_VARIABLE_State_10_93);
                  mercury__string__builder__append_string_3_p_0(IndentStr_35, STATE_VARIABLE_State_10_93, &Var_526);
                  mercury__string__builder__append_string_3_p_0((MR_String) ")", Var_526, &STATE_VARIABLE_State_11_96);
                }
                break;
            }
            break;
          case (MR_Integer) 0:
            switch (PredOrFunc_30) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word ArgVarsModes_276;
                  MR_Word RetVarMode_277;
                  MR_String RetModeStr_281;
                  MR_Word STATE_VARIABLE_State_12_283;
                  MR_Word STATE_VARIABLE_State_13_286;
                  MR_Word STATE_VARIABLE_State_15_297;
                  MR_Word STATE_VARIABLE_State_16_303;
                  MR_Word InstVarSet_309;
                  MR_String DetStr_310;
                  MR_Word Var_504;
                  MR_Word Var_506;
                  MR_Word Var_507;
                  MR_Word Var_509;
                  MR_Word Var_511;
                  MR_Box conv1_RetVarMode_277;

                  parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[2]), VarsModes_32, &ArgVarsModes_276, &conv1_RetVarMode_277);
                  RetVarMode_277 = ((MR_Word) (conv1_RetVarMode_277));
                  mercury__string__builder__append_string_3_p_0((MR_String) "(", STATE_VARIABLE_State_5_71, &STATE_VARIABLE_State_12_283);
                  InstVarSet_309 = ((MR_Word) ((MR_hl_field(0, InfoGoal_7, 5))));
                  if ((ArgVarsModes_276 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_500;
                    MR_Word Var_502;

                    mercury__string__builder__append_string_3_p_0((MR_String) "(", STATE_VARIABLE_State_12_283, &Var_500);
                    mercury__string__builder__append_string_3_p_0((MR_String) "func", Var_500, &Var_502);
                    mercury__string__builder__append_string_3_p_0((MR_String) ")", Var_502, &STATE_VARIABLE_State_13_286);
                  }
                  else
                  {
                    MR_String ArgModesStr_256;
                    MR_Word Var_495;
                    MR_Word Var_496;
                    MR_Word Var_498;

                    ArgModesStr_256 = hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0(Lang_38, VarNameSrc_12, InstVarSet_309, VarNamePrint_13, ArgVarsModes_276);
                    mercury__string__builder__append_string_3_p_0((MR_String) "func", STATE_VARIABLE_State_12_283, &Var_495);
                    mercury__string__builder__append_string_3_p_0((MR_String) "(", Var_495, &Var_496);
                    mercury__string__builder__append_string_3_p_0(ArgModesStr_256, Var_496, &Var_498);
                    mercury__string__builder__append_string_3_p_0((MR_String) ")", Var_498, &STATE_VARIABLE_State_13_286);
                  }
                  RetModeStr_281 = hlds__hlds_out__hlds_out_util__var_mode_to_string_5_f_0(Lang_38, VarNameSrc_12, InstVarSet_309, VarNamePrint_13, RetVarMode_277);
                  DetStr_310 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_33);
                  mercury__string__builder__append_string_3_p_0((MR_String) " = (", STATE_VARIABLE_State_13_286, &Var_504);
                  mercury__string__builder__append_string_3_p_0(RetModeStr_281, Var_504, &Var_506);
                  mercury__string__builder__append_string_3_p_0((MR_String) ") is ", Var_506, &Var_507);
                  mercury__string__builder__append_string_3_p_0(DetStr_310, Var_507, &Var_509);
                  mercury__string__builder__append_string_3_p_0((MR_String) " :-\n", Var_509, &STATE_VARIABLE_State_15_297);
                  hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0(InfoGoal_7, Indent1_36, (MR_String) "\n", Goal_34, STATE_VARIABLE_State_15_297, &STATE_VARIABLE_State_16_303);
                  mercury__string__builder__append_string_3_p_0(IndentStr_35, STATE_VARIABLE_State_16_303, &Var_511);
                  mercury__string__builder__append_string_3_p_0((MR_String) ")", Var_511, &STATE_VARIABLE_State_11_96);
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_String DetStr_371;
                  MR_Word STATE_VARIABLE_State_6_373;
                  MR_Word STATE_VARIABLE_State_7_376;
                  MR_Word STATE_VARIABLE_State_9_387;
                  MR_Word STATE_VARIABLE_State_10_391;
                  MR_Word Var_489;
                  MR_Word Var_491;
                  MR_Word Var_493;

                  mercury__string__builder__append_string_3_p_0((MR_String) "(", STATE_VARIABLE_State_5_71, &STATE_VARIABLE_State_6_373);
                  if ((VarsModes_32 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_485;
                    MR_Word Var_487;

                    mercury__string__builder__append_string_3_p_0((MR_String) "(", STATE_VARIABLE_State_6_373, &Var_485);
                    mercury__string__builder__append_string_3_p_0((MR_String) "pred", Var_485, &Var_487);
                    mercury__string__builder__append_string_3_p_0((MR_String) ")", Var_487, &STATE_VARIABLE_State_7_376);
                  }
                  else
                  {
                    MR_Word InstVarSet_332 = ((MR_Word) ((MR_hl_field(0, InfoGoal_7, 5))));
                    MR_String ModesStr_333;
                    MR_Word Var_480;
                    MR_Word Var_481;
                    MR_Word Var_483;

                    ModesStr_333 = hlds__hlds_out__hlds_out_util__var_modes_to_string_5_f_0(Lang_38, VarNameSrc_12, InstVarSet_332, VarNamePrint_13, VarsModes_32);
                    mercury__string__builder__append_string_3_p_0((MR_String) "pred", STATE_VARIABLE_State_6_373, &Var_480);
                    mercury__string__builder__append_string_3_p_0((MR_String) "(", Var_480, &Var_481);
                    mercury__string__builder__append_string_3_p_0(ModesStr_333, Var_481, &Var_483);
                    mercury__string__builder__append_string_3_p_0((MR_String) ")", Var_483, &STATE_VARIABLE_State_7_376);
                  }
                  DetStr_371 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(Det_33);
                  mercury__string__builder__append_string_3_p_0((MR_String) " is ", STATE_VARIABLE_State_7_376, &Var_489);
                  mercury__string__builder__append_string_3_p_0(DetStr_371, Var_489, &Var_491);
                  mercury__string__builder__append_string_3_p_0((MR_String) " :-\n", Var_491, &STATE_VARIABLE_State_9_387);
                  hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0(InfoGoal_7, Indent1_36, (MR_String) "\n", Goal_34, STATE_VARIABLE_State_9_387, &STATE_VARIABLE_State_10_391);
                  mercury__string__builder__append_string_3_p_0(IndentStr_35, STATE_VARIABLE_State_10_391, &Var_493);
                  mercury__string__builder__append_string_3_p_0((MR_String) ")", Var_493, &STATE_VARIABLE_State_11_96);
                }
                break;
            }
            break;
        }
        succeeded = (MaybeType_9 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Type_142 = ((MR_Word) ((MR_hl_field(1, MaybeType_9, 0))));
          Var_127 = ((MR_Word) ((MR_hl_field(0, InfoGoal_7, 6))));
          succeeded = (Var_127 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            TVarSet_143 = ((MR_Word) ((MR_hl_field(1, Var_127, 0))));
        }
        if (succeeded)
        {
          MR_Word STATE_VARIABLE_State_18_129;

          mercury__string__builder__append_string_3_p_0((MR_String) " : ", STATE_VARIABLE_State_11_96, &STATE_VARIABLE_State_18_129);
          parse_tree__parse_tree_out_type__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_121_112_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[1]), TVarSet_143, VarNamePrint_13, Type_142, STATE_VARIABLE_State_18_129, &STATE_VARIABLE_State_19_131);
        }
        else
          STATE_VARIABLE_State_19_131 = STATE_VARIABLE_State_11_96;
        DumpOptions_52 = ((MR_Word) ((MR_hl_field(0, Info_37, 0))));
        DumpNonLocals_53 = ((((MR_Unsigned) ((MR_hl_field(0, DumpOptions_52, 0))) >> 21)) & (MR_Integer) 1);
        switch (DumpNonLocals_53) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_State_58 = STATE_VARIABLE_State_19_131;
            break;
          case (MR_Integer) 1:
            if ((NonLocals_31 == (MR_Word) ((MR_Unsigned) 0U)))
              *STATE_VARIABLE_State_58 = STATE_VARIABLE_State_19_131;
            else
            {
              MR_String NonLocalsStr_56;
              MR_Word Var_546;
              MR_Word Var_548;
              MR_Word Var_549;

              NonLocalsStr_56 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_12, VarNamePrint_13, NonLocals_31);
              mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_19_131, &Var_546);
              mercury__string__builder__append_string_3_p_0(IndentStr_35, Var_546, &Var_548);
              mercury__string__builder__append_string_3_p_0((MR_String) "% lambda nonlocals: ", Var_548, &Var_549);
              mercury__string__builder__append_string_3_p_0(NonLocalsStr_56, Var_549, STATE_VARIABLE_State_58);
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_goal_unify_6_p_0(
  MR_Word InfoGoal_7,
  MR_Unsigned Indent_8,
  MR_String Follow_9,
  MR_Word GoalExpr_10,
  MR_Word STATE_VARIABLE_State_0_33,
  MR_Word * STATE_VARIABLE_State_34)
{
  MR_bool succeeded;
  MR_Word LHS_12 = ((MR_Word) ((MR_hl_field(1, GoalExpr_10, 0))));
  MR_Word RHS_13 = ((MR_Word) ((MR_hl_field(1, GoalExpr_10, 1))));
  MR_Word Unification_15 = ((MR_Word) ((MR_hl_field(1, GoalExpr_10, 3))));
  MR_Word Info_17 = ((MR_Word) ((MR_hl_field(0, InfoGoal_7, 0))));
  MR_Word DumpOptions_18 = ((MR_Word) ((MR_hl_field(0, Info_17, 0))));
  MR_String IndentStr_19;
  MR_Word VarNameSrc_20;
  MR_Word VarNamePrint_21;
  MR_String LHSStr_22;
  MR_Word TypeQual_23;
  MR_Word VarType_27;
  MR_Word DumpUnifyDetails_28;
  MR_Word DumpGoalBirthsDeaths_29;
  MR_Word STATE_VARIABLE_State_1_37;
  MR_Word STATE_VARIABLE_State_2_42;
  MR_Word STATE_VARIABLE_State_3_43;
  MR_Word Var_155;
  MR_Word Var_156;

  IndentStr_19 = libs__indent__indent2_string_1_f_0(Indent_8);
  VarNameSrc_20 = ((MR_Word) ((MR_hl_field(0, InfoGoal_7, 2))));
  VarNamePrint_21 = ((MR_Unsigned) ((MR_hl_field(0, InfoGoal_7, 3))) & (MR_Integer) 3);
  LHSStr_22 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_20, VarNamePrint_21, LHS_12);
  mercury__string__builder__append_string_3_p_0(IndentStr_19, STATE_VARIABLE_State_0_33, &Var_155);
  mercury__string__builder__append_string_3_p_0(LHSStr_22, Var_155, &Var_156);
  mercury__string__builder__append_string_3_p_0((MR_String) " = ", Var_156, &STATE_VARIABLE_State_1_37);
  TypeQual_23 = ((MR_Word) ((MR_hl_field(0, InfoGoal_7, 6))));
  if ((TypeQual_23 == (MR_Word) ((MR_Unsigned) 0U)))
    VarType_27 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word VarTable_25 = ((MR_Word) ((MR_hl_field(1, TypeQual_23, 1))));
    MR_Word UniType_26;

    parse_tree__var_table__lookup_var_type_3_p_0(VarTable_25, LHS_12, &UniType_26);
    {
      VarType_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, VarType_27, 0) = ((MR_Box) (UniType_26));
    }
  }
  hlds__hlds_out__hlds_out_goal__format_unify_rhs_2_6_p_0(InfoGoal_7, Indent_8, VarType_27, RHS_13, STATE_VARIABLE_State_1_37, &STATE_VARIABLE_State_2_42);
  mercury__string__builder__append_string_3_p_0(Follow_9, STATE_VARIABLE_State_2_42, &STATE_VARIABLE_State_3_43);
  DumpGoalBirthsDeaths_29 = ((((MR_Unsigned) ((MR_hl_field(0, DumpOptions_18, 0))) >> 20)) & (MR_Integer) 1);
  DumpUnifyDetails_28 = ((((MR_Unsigned) ((MR_hl_field(0, DumpOptions_18, 0))) >> 16)) & (MR_Integer) 1);
  succeeded = (DumpUnifyDetails_28 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (DumpGoalBirthsDeaths_29 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word ComplMode_30;
    MR_Word CanFail_31;
    MR_Word TypeInfoVars_32;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;

    succeeded = ((((MR_tag((MR_Word) Unification_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Unification_15, 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      ComplMode_30 = ((MR_Word) ((MR_hl_field(3, Unification_15, 1))));
      CanFail_31 = ((MR_Unsigned) ((MR_hl_field(3, Unification_15, 2))) & (MR_Integer) 1);
      TypeInfoVars_32 = ((MR_Word) ((MR_hl_field(3, Unification_15, 3))));
      succeeded = (CanFail_31 == (MR_Integer) 0);
      if (succeeded)
      {
        Var_44 = ((MR_Word) ((MR_hl_field(0, ComplMode_30, 0))));
        Var_45 = ((MR_Word) ((MR_hl_field(0, ComplMode_30, 1))));
        Var_46 = ((MR_Word) ((MR_hl_field(0, ComplMode_30, 2))));
        Var_47 = ((MR_Word) ((MR_hl_field(0, ComplMode_30, 3))));
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
          succeeded = (TypeInfoVars_32 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
      *STATE_VARIABLE_State_34 = STATE_VARIABLE_State_3_43;
    else
    {
      MR_Word STATE_VARIABLE_State_4_50;

      succeeded = mercury__string__contains_char_2_p_0(Follow_9, (MR_Char) 10);
      if (succeeded)
        STATE_VARIABLE_State_4_50 = STATE_VARIABLE_State_3_43;
      else
        mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_3_43, &STATE_VARIABLE_State_4_50);
      hlds__hlds_out__hlds_out_goal__write_unification_5_p_0(InfoGoal_7, Indent_8, Unification_15, STATE_VARIABLE_State_4_50, STATE_VARIABLE_State_34);
    }
  }
  else
    *STATE_VARIABLE_State_34 = STATE_VARIABLE_State_3_43;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv2_Str_9;

  conv2_Str_9 = hlds__hlds_out__hlds_out_goal__new_var_inst_msg_to_string_3_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_Str_9));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_Str_9;

  conv1_Str_9 = hlds__hlds_out__hlds_out_goal__new_var_inst_to_string_3_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_Str_9));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_4;

  conv0_HeadVar__4_4 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
  return wrapper_arg_2;
}

void MR_CALL 
hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0(
  MR_Word InfoGoal_7,
  MR_Unsigned Indent_8,
  MR_String Follow_9,
  MR_Word Goal_10,
  MR_Word STATE_VARIABLE_State_0_120,
  MR_Word * STATE_VARIABLE_State_121)
{
  MR_bool succeeded;
  MR_String IndentStr_12;
  MR_Word GoalExpr_13;
  MR_Word GoalInfo_14;
  MR_Word Info_15;
  MR_Word DumpOptions_16;
  MR_Word DumpContexts_17;
  MR_Word DumpGoalIdsPaths_19;
  MR_Word DumpNonLocals_22;
  MR_Word VarNameSrc_28;
  MR_Word VarNamePrint_29;
  MR_Word DumpGoalBirthsDeaths_30;
  MR_Word DumpModeConstraints_41;
  MR_Word DumpDetism_54;
  MR_Word DumpRegions_56;
  MR_Word DumpDeepProf_76;
  MR_Word DumpInstMapVars_83;
  MR_Word DumpUseReuse_103;
  MR_Word CodeGenInfo_113;
  MR_Word DumpGoalFeatures_115;
  MR_Word STATE_VARIABLE_State_1_123;
  MR_Word STATE_VARIABLE_State_2_126;
  MR_Word STATE_VARIABLE_State_3_133;
  MR_Word STATE_VARIABLE_State_5_147;
  MR_Word STATE_VARIABLE_State_9_175;
  MR_Word STATE_VARIABLE_State_10_182;
  MR_Word STATE_VARIABLE_State_15_218;
  MR_Word STATE_VARIABLE_State_21_251;
  MR_Word STATE_VARIABLE_State_23_259;
  MR_Word STATE_VARIABLE_State_24_262;
  MR_Word STATE_VARIABLE_State_31_297;
  MR_Word STATE_VARIABLE_State_46_345;
  MR_Word STATE_VARIABLE_State_47_346;

  IndentStr_12 = libs__indent__indent2_string_1_f_0(Indent_8);
  GoalExpr_13 = ((MR_Word) ((MR_hl_field(0, Goal_10, 0))));
  GoalInfo_14 = ((MR_Word) ((MR_hl_field(0, Goal_10, 1))));
  Info_15 = ((MR_Word) ((MR_hl_field(0, InfoGoal_7, 0))));
  VarNameSrc_28 = ((MR_Word) ((MR_hl_field(0, InfoGoal_7, 2))));
  VarNamePrint_29 = ((MR_Unsigned) ((MR_hl_field(0, InfoGoal_7, 3))) & (MR_Integer) 3);
  DumpOptions_16 = ((MR_Word) ((MR_hl_field(0, Info_15, 0))));
  DumpContexts_17 = ((((MR_Unsigned) ((MR_hl_field(0, DumpOptions_16, 0))) >> 29)) & (MR_Integer) 1);
  DumpDetism_54 = ((((MR_Unsigned) ((MR_hl_field(0, DumpOptions_16, 0))) >> 28)) & (MR_Integer) 1);
  DumpRegions_56 = ((((MR_Unsigned) ((MR_hl_field(0, DumpOptions_16, 0))) >> 27)) & (MR_Integer) 1);
  DumpNonLocals_22 = ((((MR_Unsigned) ((MR_hl_field(0, DumpOptions_16, 0))) >> 21)) & (MR_Integer) 1);
  DumpGoalBirthsDeaths_30 = ((((MR_Unsigned) ((MR_hl_field(0, DumpOptions_16, 0))) >> 20)) & (MR_Integer) 1);
  DumpDeepProf_76 = ((((MR_Unsigned) ((MR_hl_field(0, DumpOptions_16, 0))) >> 12)) & (MR_Integer) 1);
  DumpModeConstraints_41 = ((((MR_Unsigned) ((MR_hl_field(0, DumpOptions_16, 0))) >> 10)) & (MR_Integer) 1);
  DumpGoalIdsPaths_19 = ((((MR_Unsigned) ((MR_hl_field(0, DumpOptions_16, 0))) >> 1)) & (MR_Integer) 1);
  switch (DumpContexts_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_State_1_123 = STATE_VARIABLE_State_0_120;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Context_18;

        Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_14);
        hlds__hlds_out__hlds_out_util__maybe_format_context_comment_5_p_0(Indent_8, (MR_String) "", Context_18, STATE_VARIABLE_State_0_120, &STATE_VARIABLE_State_1_123);
      }
      break;
  }
  switch (DumpGoalIdsPaths_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_State_2_126 = STATE_VARIABLE_State_1_123;
      break;
    case (MR_Integer) 1:
      {
        MR_Word GoalId_20;

        GoalId_20 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_14);
        succeeded = mdbcomp__goal_path__is_valid_goal_id_1_p_0(GoalId_20);
        if (succeeded)
        {
          MR_Unsigned GoalIdNum_21 = (MR_Unsigned) (GoalId_20);
          MR_Word Var_946;
          MR_Word Var_947;
          MR_Word Var_949;
          MR_String Var_951;

          mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_1_123, &Var_946);
          mercury__string__builder__append_string_3_p_0((MR_String) "% goal id: ", Var_946, &Var_947);
          mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[0]), (MR_Integer) 1, GoalIdNum_21, &Var_951);
          mercury__string__builder__append_string_3_p_0(Var_951, Var_947, &Var_949);
          mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_949, &STATE_VARIABLE_State_2_126);
        }
        else
          STATE_VARIABLE_State_2_126 = STATE_VARIABLE_State_1_123;
      }
      break;
  }
  switch (DumpNonLocals_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_State_3_133 = STATE_VARIABLE_State_2_126;
      break;
    case (MR_Integer) 1:
      {
        MR_Word NonLocalsSet_23;
        MR_Word NonLocalsList_24;

        NonLocalsSet_23 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_14);
        parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsSet_23, &NonLocalsList_24);
        if ((NonLocalsList_24 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_State_3_133 = STATE_VARIABLE_State_2_126;
        else
        {
          MR_String NonLocalsStr_27;
          MR_Word Var_959;
          MR_Word Var_960;
          MR_Word Var_962;

          NonLocalsStr_27 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_28, VarNamePrint_29, NonLocalsList_24);
          mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_2_126, &Var_959);
          mercury__string__builder__append_string_3_p_0((MR_String) "% nonlocals: ", Var_959, &Var_960);
          mercury__string__builder__append_string_3_p_0(NonLocalsStr_27, Var_960, &Var_962);
          mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_962, &STATE_VARIABLE_State_3_133);
        }
      }
      break;
  }
  switch (DumpGoalBirthsDeaths_30) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_State_5_147 = STATE_VARIABLE_State_3_133;
      break;
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_State_4_140;
        MR_Word PreDeathList_32;
        MR_Word TypeCtorInfo_916_916;
        MR_Word PreDeaths_31;
        MR_Word PreBirthList_37;
        MR_Word TypeCtorInfo_917_917;
        MR_Word PreBirths_36;

        succeeded = hlds__hlds_llds__goal_info_maybe_get_pre_deaths_2_p_0(GoalInfo_14, &PreDeaths_31);
        if (succeeded)
        {
          TypeCtorInfo_916_916 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          PreDeathList_32 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_916_916, PreDeaths_31);
          succeeded = (PreDeathList_32 != (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
        {
          MR_String PreDeathStr_35;
          MR_Word Var_964;
          MR_Word Var_965;
          MR_Word Var_967;

          PreDeathStr_35 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_28, VarNamePrint_29, PreDeathList_32);
          mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_3_133, &Var_964);
          mercury__string__builder__append_string_3_p_0((MR_String) "% pre-deaths: ", Var_964, &Var_965);
          mercury__string__builder__append_string_3_p_0(PreDeathStr_35, Var_965, &Var_967);
          mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_967, &STATE_VARIABLE_State_4_140);
        }
        else
          STATE_VARIABLE_State_4_140 = STATE_VARIABLE_State_3_133;
        succeeded = hlds__hlds_llds__goal_info_maybe_get_pre_births_2_p_0(GoalInfo_14, &PreBirths_36);
        if (succeeded)
        {
          TypeCtorInfo_917_917 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          PreBirthList_37 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_917_917, PreBirths_36);
          succeeded = (PreBirthList_37 != (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
        {
          MR_String PreBirthStr_40;
          MR_Word Var_969;
          MR_Word Var_970;
          MR_Word Var_972;

          PreBirthStr_40 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_28, VarNamePrint_29, PreBirthList_37);
          mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_4_140, &Var_969);
          mercury__string__builder__append_string_3_p_0((MR_String) "% pre-births: ", Var_969, &Var_970);
          mercury__string__builder__append_string_3_p_0(PreBirthStr_40, Var_970, &Var_972);
          mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_972, &STATE_VARIABLE_State_5_147);
        }
        else
          STATE_VARIABLE_State_5_147 = STATE_VARIABLE_State_4_140;
      }
      break;
  }
  switch (DumpModeConstraints_41) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_State_9_175 = STATE_VARIABLE_State_5_147;
      break;
    case (MR_Integer) 1:
      {
        MR_Word ProducingVars_42;
        MR_Word ConsumingVars_45;
        MR_Word MakeVisibleVars_48;
        MR_Word NeedVisibleVars_51;
        MR_Word STATE_VARIABLE_State_6_154;
        MR_Word STATE_VARIABLE_State_7_161;
        MR_Word STATE_VARIABLE_State_8_168;

        check_hlds__mode_ordering__goal_info_get_producing_vars_2_p_0(GoalInfo_14, &ProducingVars_42);
        succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProducingVars_42);
        if (succeeded)
        {
          MR_Word ProducingVarsList_43;
          MR_String ProducingVarsStr_44;
          MR_Word Var_974;
          MR_Word Var_975;
          MR_Word Var_977;

          parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProducingVars_42, &ProducingVarsList_43);
          ProducingVarsStr_44 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_28, VarNamePrint_29, ProducingVarsList_43);
          mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_5_147, &Var_974);
          mercury__string__builder__append_string_3_p_0((MR_String) "% producing vars: ", Var_974, &Var_975);
          mercury__string__builder__append_string_3_p_0(ProducingVarsStr_44, Var_975, &Var_977);
          mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_977, &STATE_VARIABLE_State_6_154);
        }
        else
          STATE_VARIABLE_State_6_154 = STATE_VARIABLE_State_5_147;
        check_hlds__mode_ordering__goal_info_get_consuming_vars_2_p_0(GoalInfo_14, &ConsumingVars_45);
        succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsumingVars_45);
        if (succeeded)
        {
          MR_Word ConsumingVarsList_46;
          MR_String ConsumingVarsStr_47;
          MR_Word Var_979;
          MR_Word Var_980;
          MR_Word Var_982;

          parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsumingVars_45, &ConsumingVarsList_46);
          ConsumingVarsStr_47 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_28, VarNamePrint_29, ConsumingVarsList_46);
          mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_6_154, &Var_979);
          mercury__string__builder__append_string_3_p_0((MR_String) "% consuming vars: ", Var_979, &Var_980);
          mercury__string__builder__append_string_3_p_0(ConsumingVarsStr_47, Var_980, &Var_982);
          mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_982, &STATE_VARIABLE_State_7_161);
        }
        else
          STATE_VARIABLE_State_7_161 = STATE_VARIABLE_State_6_154;
        check_hlds__mode_ordering__goal_info_get_make_visible_vars_2_p_0(GoalInfo_14, &MakeVisibleVars_48);
        succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MakeVisibleVars_48);
        if (succeeded)
        {
          MR_Word MakeVisibleVarsList_49;
          MR_String MakeVisibleVarsStr_50;
          MR_Word Var_984;
          MR_Word Var_985;
          MR_Word Var_987;

          parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MakeVisibleVars_48, &MakeVisibleVarsList_49);
          MakeVisibleVarsStr_50 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_28, VarNamePrint_29, MakeVisibleVarsList_49);
          mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_7_161, &Var_984);
          mercury__string__builder__append_string_3_p_0((MR_String) "% make_visible vars: ", Var_984, &Var_985);
          mercury__string__builder__append_string_3_p_0(MakeVisibleVarsStr_50, Var_985, &Var_987);
          mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_987, &STATE_VARIABLE_State_8_168);
        }
        else
          STATE_VARIABLE_State_8_168 = STATE_VARIABLE_State_7_161;
        check_hlds__mode_ordering__goal_info_get_need_visible_vars_2_p_0(GoalInfo_14, &NeedVisibleVars_51);
        succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NeedVisibleVars_51);
        if (succeeded)
        {
          MR_Word NeedVisibleVarsList_52;
          MR_String NeedVisibleVarsStr_53;
          MR_Word Var_989;
          MR_Word Var_990;
          MR_Word Var_992;

          parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NeedVisibleVars_51, &NeedVisibleVarsList_52);
          NeedVisibleVarsStr_53 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_28, VarNamePrint_29, NeedVisibleVarsList_52);
          mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_8_168, &Var_989);
          mercury__string__builder__append_string_3_p_0((MR_String) "% need_visible vars: ", Var_989, &Var_990);
          mercury__string__builder__append_string_3_p_0(NeedVisibleVarsStr_53, Var_990, &Var_992);
          mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_992, &STATE_VARIABLE_State_9_175);
        }
        else
          STATE_VARIABLE_State_9_175 = STATE_VARIABLE_State_8_168;
      }
      break;
  }
  switch (DumpDetism_54) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_State_10_182 = STATE_VARIABLE_State_9_175;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Determinism_55;
        MR_String Var_186;
        MR_Word Var_994;
        MR_Word Var_995;
        MR_Word Var_997;

        Determinism_55 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_14);
        Var_186 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(Determinism_55);
        mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_9_175, &Var_994);
        mercury__string__builder__append_string_3_p_0((MR_String) "% determinism: ", Var_994, &Var_995);
        mercury__string__builder__append_string_3_p_0(Var_186, Var_995, &Var_997);
        mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_997, &STATE_VARIABLE_State_10_182);
      }
      break;
  }
  switch (DumpRegions_56) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_State_15_218 = STATE_VARIABLE_State_10_182;
      break;
    case (MR_Integer) 1:
      {
        MR_Word MaybeRbmmInfo_57;

        MaybeRbmmInfo_57 = hlds__hlds_goal__goal_info_get_maybe_rbmm_1_f_0(GoalInfo_14);
        if ((MaybeRbmmInfo_57 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_State_15_218 = STATE_VARIABLE_State_10_182;
        else
        {
          MR_Word RbmmInfo_58 = ((MR_Word) ((MR_hl_field(1, MaybeRbmmInfo_57, 0))));
          MR_Word Created_59 = ((MR_Word) ((MR_hl_field(0, RbmmInfo_58, 0))));
          MR_Word Removed_60 = ((MR_Word) ((MR_hl_field(0, RbmmInfo_58, 1))));
          MR_Word Carried_61 = ((MR_Word) ((MR_hl_field(0, RbmmInfo_58, 2))));
          MR_Word Alloc_62 = ((MR_Word) ((MR_hl_field(0, RbmmInfo_58, 3))));
          MR_Word Used_63 = ((MR_Word) ((MR_hl_field(0, RbmmInfo_58, 4))));
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
          MR_Word STATE_VARIABLE_State_11_190;
          MR_Word STATE_VARIABLE_State_12_197;
          MR_Word STATE_VARIABLE_State_13_204;
          MR_Word STATE_VARIABLE_State_14_211;
          MR_Word Var_999;
          MR_Word Var_1000;
          MR_Word Var_1002;
          MR_Word Var_1004;
          MR_Word Var_1005;
          MR_Word Var_1007;
          MR_Word Var_1009;
          MR_Word Var_1010;
          MR_Word Var_1012;
          MR_Word Var_1014;
          MR_Word Var_1015;
          MR_Word Var_1017;
          MR_Word Var_1019;
          MR_Word Var_1020;
          MR_Word Var_1022;

          CreatedList_64 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), Created_59);
          RemovedList_65 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), Removed_60);
          CarriedList_66 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), Carried_61);
          AllocList_67 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), Alloc_62);
          UsedList_68 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), Used_63);
          CreatedStr_69 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_28, VarNamePrint_29, CreatedList_64);
          RemovedStr_70 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_28, VarNamePrint_29, RemovedList_65);
          CarriedStr_71 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_28, VarNamePrint_29, CarriedList_66);
          AllocStr_72 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_28, VarNamePrint_29, AllocList_67);
          UsedStr_73 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_28, VarNamePrint_29, UsedList_68);
          mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_10_182, &Var_999);
          mercury__string__builder__append_string_3_p_0((MR_String) "% Created regions: ", Var_999, &Var_1000);
          mercury__string__builder__append_string_3_p_0(CreatedStr_69, Var_1000, &Var_1002);
          mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_1002, &STATE_VARIABLE_State_11_190);
          mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_11_190, &Var_1004);
          mercury__string__builder__append_string_3_p_0((MR_String) "% Removed regions: ", Var_1004, &Var_1005);
          mercury__string__builder__append_string_3_p_0(RemovedStr_70, Var_1005, &Var_1007);
          mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_1007, &STATE_VARIABLE_State_12_197);
          mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_12_197, &Var_1009);
          mercury__string__builder__append_string_3_p_0((MR_String) "% Carried regions: ", Var_1009, &Var_1010);
          mercury__string__builder__append_string_3_p_0(CarriedStr_71, Var_1010, &Var_1012);
          mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_1012, &STATE_VARIABLE_State_13_204);
          mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_13_204, &Var_1014);
          mercury__string__builder__append_string_3_p_0((MR_String) "% Allocated into regions: ", Var_1014, &Var_1015);
          mercury__string__builder__append_string_3_p_0(AllocStr_72, Var_1015, &Var_1017);
          mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_1017, &STATE_VARIABLE_State_14_211);
          mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_14_211, &Var_1019);
          mercury__string__builder__append_string_3_p_0((MR_String) "% Used regions: ", Var_1019, &Var_1020);
          mercury__string__builder__append_string_3_p_0(UsedStr_73, Var_1020, &Var_1022);
          mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_1022, &STATE_VARIABLE_State_15_218);
        }
      }
      break;
  }
  switch (DumpDeepProf_76) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_State_21_251 = STATE_VARIABLE_State_15_218;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Purity_75;
        MR_Word MaybeDPInfo_77;
        MR_Word STATE_VARIABLE_State_16_1076;

        Purity_75 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo_14);
        switch (Purity_75) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            {
              MR_Word Var_1026;

              mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_15_218, &Var_1026);
              mercury__string__builder__append_string_3_p_0((MR_String) "% impure\n", Var_1026, &STATE_VARIABLE_State_16_1076);
            }
            break;
          case (MR_Integer) 0:
            STATE_VARIABLE_State_16_1076 = STATE_VARIABLE_State_15_218;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_1024;

              mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_15_218, &Var_1024);
              mercury__string__builder__append_string_3_p_0((MR_String) "% semipure\n", Var_1024, &STATE_VARIABLE_State_16_1076);
            }
            break;
        }
        MaybeDPInfo_77 = hlds__hlds_goal__goal_info_get_maybe_dp_info_1_f_0(GoalInfo_14);
        if ((MaybeDPInfo_77 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_State_21_251 = STATE_VARIABLE_State_16_1076;
        else
        {
          MR_Word MdprofInst_78;
          MR_Word MaybeDPCoverageInfo_79;
          MR_Word Var_233 = ((MR_Word) ((MR_hl_field(1, MaybeDPInfo_77, 0))));
          MR_Word STATE_VARIABLE_State_18_236;

          MdprofInst_78 = ((MR_Unsigned) ((MR_hl_field(0, Var_233, 0))) & (MR_Integer) 1);
          MaybeDPCoverageInfo_79 = ((MR_Word) ((MR_hl_field(0, Var_233, 1))));
          switch (MdprofInst_78) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_1028;

                mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_16_1076, &Var_1028);
                mercury__string__builder__append_string_3_p_0((MR_String) "% mdprof instrumentation\n", Var_1028, &STATE_VARIABLE_State_18_236);
              }
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_State_18_236 = STATE_VARIABLE_State_16_1076;
              break;
          }
          if ((MaybeDPCoverageInfo_79 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_State_21_251 = STATE_VARIABLE_State_18_236;
          else
          {
            MR_Word CoverageInfo_80 = ((MR_Word) ((MR_hl_field(1, MaybeDPCoverageInfo_79, 0))));
            MR_Word IsTrivial_81 = ((((MR_Unsigned) ((MR_hl_field(0, CoverageInfo_80, 0))) >> 1)) & (MR_Integer) 1);
            MR_Word PortCountsGiveCoverageAfter_82 = ((MR_Unsigned) ((MR_hl_field(0, CoverageInfo_80, 0))) & (MR_Integer) 1);
            MR_Word STATE_VARIABLE_State_19_241;

            switch (IsTrivial_81) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word Var_1032;

                  mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_18_236, &Var_1032);
                  mercury__string__builder__append_string_3_p_0((MR_String) "% nontrivial goal\n", Var_1032, &STATE_VARIABLE_State_19_241);
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word Var_1030;

                  mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_18_236, &Var_1030);
                  mercury__string__builder__append_string_3_p_0((MR_String) "% trivial goal\n", Var_1030, &STATE_VARIABLE_State_19_241);
                }
                break;
            }
            switch (PortCountsGiveCoverageAfter_82) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word Var_1036;

                  mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_19_241, &Var_1036);
                  mercury__string__builder__append_string_3_p_0((MR_String) "% no port counts give coverage after\n", Var_1036, &STATE_VARIABLE_State_21_251);
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word Var_1034;

                  mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_19_241, &Var_1034);
                  mercury__string__builder__append_string_3_p_0((MR_String) "% port counts give coverage after\n", Var_1034, &STATE_VARIABLE_State_21_251);
                }
                break;
            }
          }
        }
      }
      break;
  }
  hlds__hlds_out__hlds_out_goal__format_goal_expr_6_p_0(InfoGoal_7, Indent_8, Follow_9, GoalExpr_13, STATE_VARIABLE_State_21_251, &STATE_VARIABLE_State_23_259);
  DumpInstMapVars_83 = ((((MR_Unsigned) ((MR_hl_field(0, DumpOptions_16, 0))) >> 24)) & (MR_Integer) 1);
  DumpUseReuse_103 = ((MR_Unsigned) ((MR_hl_field(0, DumpOptions_16, 0))) & (MR_Integer) 1);
  switch (DumpInstMapVars_83) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_State_24_262 = STATE_VARIABLE_State_23_259;
      break;
    case (MR_Integer) 1:
      {
        MR_Word InstMapDelta_84;
        MR_Word Vars_85;

        InstMapDelta_84 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_14);
        hlds__instmap__instmap_delta_changed_vars_2_p_0(InstMapDelta_84, &Vars_85);
        succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_85);
        if (succeeded)
          succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstMapDelta_84);
        if (succeeded)
          STATE_VARIABLE_State_24_262 = STATE_VARIABLE_State_23_259;
        else
        {
          MR_Word DumpInstMapDeltas_86 = ((((MR_Unsigned) ((MR_hl_field(0, DumpOptions_16, 0))) >> 8)) & (MR_Integer) 1);
          MR_Word DumpInstMapIndent_87 = ((((MR_Unsigned) ((MR_hl_field(0, DumpOptions_16, 1))) >> 1)) & (MR_Integer) 1);

          switch (DumpInstMapDeltas_86) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String NewVarsStr_90;
                MR_Word Var_1044;
                MR_Word Var_1045;
                MR_Word Var_1047;

                succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(InstMapDelta_84);
                if (succeeded)
                  NewVarsStr_90 = (MR_String) "unreachable";
                else
                {
                  MR_Word NewVars_91;
                  MR_Word NewVarStrs_92;
                  MR_Word Var_279;
                  MR_Word NewVarInsts_357;

                  hlds__instmap__instmap_delta_to_assoc_list_2_p_0(InstMapDelta_84, &NewVarInsts_357);
                  mercury__assoc_list__keys_2_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), NewVarInsts_357, &NewVars_91);
                  {
                    Var_279 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_279, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_8[1]));
                    MR_hl_field(0, Var_279, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0_1));
                    MR_hl_field(0, Var_279, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(0, Var_279, 3) = ((MR_Box) (VarNameSrc_28));
                    MR_hl_field(0, Var_279, 4) = ((MR_Box) (VarNamePrint_29));
                  }
                  NewVarStrs_92 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_279, NewVars_91);
                  NewVarsStr_90 = mercury__string__join_list_2_f_0((MR_String) ", ", NewVarStrs_92);
                }
                mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_23_259, &Var_1044);
                mercury__string__builder__append_string_3_p_0((MR_String) "% vars with new insts: ", Var_1044, &Var_1045);
                mercury__string__builder__append_string_3_p_0(NewVarsStr_90, Var_1045, &Var_1047);
                mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_1047, &STATE_VARIABLE_State_24_262);
              }
              break;
            case (MR_Integer) 1:
              {
                succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(InstMapDelta_84);
                if (succeeded)
                {
                  MR_Word Var_1038;

                  mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_23_259, &Var_1038);
                  mercury__string__builder__append_string_3_p_0((MR_String) "% new insts: unreachable\n", Var_1038, &STATE_VARIABLE_State_24_262);
                }
                else
                  switch (DumpInstMapIndent_87) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word Var_272;
                        MR_Word STATE_VARIABLE_State_27_275;
                        MR_Word NewVarInsts_355;
                        MR_Word NewVarInstStrs_356;
                        MR_Word Var_1042;

                        hlds__instmap__instmap_delta_to_assoc_list_2_p_0(InstMapDelta_84, &NewVarInsts_355);
                        {
                          Var_272 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, Var_272, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_8[2]));
                          MR_hl_field(0, Var_272, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0_2));
                          MR_hl_field(0, Var_272, 2) = ((MR_Box) ((MR_Integer) 2));
                          MR_hl_field(0, Var_272, 3) = ((MR_Box) (InfoGoal_7));
                          MR_hl_field(0, Var_272, 4) = ((MR_Box) (IndentStr_12));
                        }
                        NewVarInstStrs_356 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_272, NewVarInsts_355);
                        mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_23_259, &Var_1042);
                        mercury__string__builder__append_string_3_p_0((MR_String) "% new insts:\n", Var_1042, &STATE_VARIABLE_State_27_275);
                        mercury__string__builder__append_strings_3_p_0(NewVarInstStrs_356, STATE_VARIABLE_State_27_275, &STATE_VARIABLE_State_24_262);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word NewVarInsts_88;
                        MR_Word NewVarInstStrs_89;
                        MR_Word Var_265;
                        MR_Word STATE_VARIABLE_State_25_268;
                        MR_Word Var_1040;

                        hlds__instmap__instmap_delta_to_assoc_list_2_p_0(InstMapDelta_84, &NewVarInsts_88);
                        {
                          Var_265 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, Var_265, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_8[2]));
                          MR_hl_field(0, Var_265, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_goal__do_format_goal_6_p_0_3));
                          MR_hl_field(0, Var_265, 2) = ((MR_Box) ((MR_Integer) 2));
                          MR_hl_field(0, Var_265, 3) = ((MR_Box) (InfoGoal_7));
                          MR_hl_field(0, Var_265, 4) = ((MR_Box) (IndentStr_12));
                        }
                        NewVarInstStrs_89 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_265, NewVarInsts_88);
                        mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_23_259, &Var_1040);
                        mercury__string__builder__append_string_3_p_0((MR_String) "% new insts:\n", Var_1040, &STATE_VARIABLE_State_25_268);
                        mercury__string__builder__append_strings_3_p_0(NewVarInstStrs_89, STATE_VARIABLE_State_25_268, &STATE_VARIABLE_State_24_262);
                      }
                      break;
                  }
              }
              break;
          }
        }
      }
      break;
  }
  switch (DumpGoalBirthsDeaths_30) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_State_31_297 = STATE_VARIABLE_State_24_262;
      break;
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_State_30_290;
        MR_Word PostDeathList_94;
        MR_Word TypeCtorInfo_941_941;
        MR_Word PostDeaths_93;
        MR_Word PostBirthList_99;
        MR_Word TypeCtorInfo_942_942;
        MR_Word PostBirths_98;

        succeeded = hlds__hlds_llds__goal_info_maybe_get_post_deaths_2_p_0(GoalInfo_14, &PostDeaths_93);
        if (succeeded)
        {
          TypeCtorInfo_941_941 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          PostDeathList_94 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_941_941, PostDeaths_93);
          succeeded = (PostDeathList_94 != (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
        {
          MR_String PostDeathStr_97;
          MR_Word Var_1049;
          MR_Word Var_1050;
          MR_Word Var_1052;

          PostDeathStr_97 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_28, VarNamePrint_29, PostDeathList_94);
          mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_24_262, &Var_1049);
          mercury__string__builder__append_string_3_p_0((MR_String) "% post-deaths: ", Var_1049, &Var_1050);
          mercury__string__builder__append_string_3_p_0(PostDeathStr_97, Var_1050, &Var_1052);
          mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_1052, &STATE_VARIABLE_State_30_290);
        }
        else
          STATE_VARIABLE_State_30_290 = STATE_VARIABLE_State_24_262;
        succeeded = hlds__hlds_llds__goal_info_maybe_get_post_births_2_p_0(GoalInfo_14, &PostBirths_98);
        if (succeeded)
        {
          TypeCtorInfo_942_942 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          PostBirthList_99 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_942_942, PostBirths_98);
          succeeded = (PostBirthList_99 != (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
        {
          MR_String PostBirthStr_102;
          MR_Word Var_1054;
          MR_Word Var_1055;
          MR_Word Var_1057;

          PostBirthStr_102 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_28, VarNamePrint_29, PostBirthList_99);
          mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_30_290, &Var_1054);
          mercury__string__builder__append_string_3_p_0((MR_String) "% post-births: ", Var_1054, &Var_1055);
          mercury__string__builder__append_string_3_p_0(PostBirthStr_102, Var_1055, &Var_1057);
          mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_1057, &STATE_VARIABLE_State_31_297);
        }
        else
          STATE_VARIABLE_State_31_297 = STATE_VARIABLE_State_30_290;
      }
      break;
  }
  switch (DumpUseReuse_103) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_State_46_345 = STATE_VARIABLE_State_31_297;
      break;
    case (MR_Integer) 1:
      {
        MR_Word LFU_104;
        MR_Word LBU_105;
        MR_Word ReuseDescription_106;
        MR_Word Var_302;
        MR_Word Var_303;
        MR_Word Var_304;

        Var_302 = transform_hlds__ctgc__util__goal_info_get_maybe_lfu_1_f_0(GoalInfo_14);
        succeeded = (Var_302 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          LFU_104 = ((MR_Word) ((MR_hl_field(1, Var_302, 0))));
          Var_303 = transform_hlds__ctgc__util__goal_info_get_maybe_lbu_1_f_0(GoalInfo_14);
          succeeded = (Var_303 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            LBU_105 = ((MR_Word) ((MR_hl_field(1, Var_303, 0))));
            Var_304 = transform_hlds__ctgc__util__goal_info_get_maybe_reuse_1_f_0(GoalInfo_14);
            succeeded = (Var_304 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              ReuseDescription_106 = ((MR_Word) ((MR_hl_field(1, Var_304, 0))));
          }
        }
        if (succeeded)
        {
          MR_Word ListLFU_107;
          MR_Word ListLBU_108;
          MR_String StrLFU_109;
          MR_String StrLBU_110;
          MR_Word STATE_VARIABLE_State_32_307;
          MR_Word STATE_VARIABLE_State_33_314;
          MR_Word STATE_VARIABLE_State_34_321;
          MR_Word STATE_VARIABLE_State_35_325;
          MR_Word Var_1059;
          MR_Word Var_1060;
          MR_Word Var_1062;
          MR_Word Var_1064;
          MR_Word Var_1065;
          MR_Word Var_1067;
          MR_Word Var_1069;

          parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LFU_104, &ListLFU_107);
          parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LBU_105, &ListLBU_108);
          StrLFU_109 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_28, VarNamePrint_29, ListLFU_107);
          StrLBU_110 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_28, VarNamePrint_29, ListLBU_108);
          mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_31_297, &Var_1059);
          mercury__string__builder__append_string_3_p_0((MR_String) "% LFU: ", Var_1059, &Var_1060);
          mercury__string__builder__append_string_3_p_0(StrLFU_109, Var_1060, &Var_1062);
          mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_1062, &STATE_VARIABLE_State_32_307);
          mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_32_307, &Var_1064);
          mercury__string__builder__append_string_3_p_0((MR_String) "% LBU: ", Var_1064, &Var_1065);
          mercury__string__builder__append_string_3_p_0(StrLBU_110, Var_1065, &Var_1067);
          mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_1067, &STATE_VARIABLE_State_33_314);
          mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_33_314, &Var_1069);
          mercury__string__builder__append_string_3_p_0((MR_String) "% Reuse: ", Var_1069, &STATE_VARIABLE_State_34_321);
          switch (MR_tag((MR_Word) ReuseDescription_106)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(ReuseDescription_106)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  mercury__string__builder__append_string_3_p_0((MR_String) "no reuse info", STATE_VARIABLE_State_34_321, &STATE_VARIABLE_State_35_325);
                  break;
                case (MR_Integer) 1:
                  mercury__string__builder__append_string_3_p_0((MR_String) "no possible reuse", STATE_VARIABLE_State_34_321, &STATE_VARIABLE_State_35_325);
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Messages_111 = ((MR_Word) ((MR_hl_field(1, ReuseDescription_106, 0))));
                MR_Word STATE_VARIABLE_State_37_329;
                MR_Word STATE_VARIABLE_State_38_331;

                mercury__string__builder__append_string_3_p_0((MR_String) "missed (", STATE_VARIABLE_State_34_321, &STATE_VARIABLE_State_37_329);
                mercury__string__builder__append_strings_sep_4_p_0((MR_String) ", ", Messages_111, STATE_VARIABLE_State_37_329, &STATE_VARIABLE_State_38_331);
                mercury__string__builder__append_string_3_p_0((MR_String) ")", STATE_VARIABLE_State_38_331, &STATE_VARIABLE_State_35_325);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ShortReuseDescr_112 = ((MR_Word) ((MR_hl_field(2, ReuseDescription_106, 0))));
                MR_Word STATE_VARIABLE_State_40_335;
                MR_Word STATE_VARIABLE_State_41_336;

                mercury__string__builder__append_string_3_p_0((MR_String) "potential reuse (", STATE_VARIABLE_State_34_321, &STATE_VARIABLE_State_40_335);
                hlds__hlds_out__hlds_out_goal__format_short_reuse_description_5_p_0(ShortReuseDescr_112, VarNameSrc_28, VarNamePrint_29, STATE_VARIABLE_State_40_335, &STATE_VARIABLE_State_41_336);
                mercury__string__builder__append_string_3_p_0((MR_String) ")", STATE_VARIABLE_State_41_336, &STATE_VARIABLE_State_35_325);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word STATE_VARIABLE_State_43_340;
                MR_Word STATE_VARIABLE_State_44_341;
                MR_Word ShortReuseDescr_360 = ((MR_Word) ((MR_hl_field(3, ReuseDescription_106, 0))));

                mercury__string__builder__append_string_3_p_0((MR_String) "reuse (", STATE_VARIABLE_State_34_321, &STATE_VARIABLE_State_43_340);
                hlds__hlds_out__hlds_out_goal__format_short_reuse_description_5_p_0(ShortReuseDescr_360, VarNameSrc_28, VarNamePrint_29, STATE_VARIABLE_State_43_340, &STATE_VARIABLE_State_44_341);
                mercury__string__builder__append_string_3_p_0((MR_String) ")", STATE_VARIABLE_State_44_341, &STATE_VARIABLE_State_35_325);
              }
              break;
          }
          mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_35_325, &STATE_VARIABLE_State_46_345);
        }
        else
          STATE_VARIABLE_State_46_345 = STATE_VARIABLE_State_31_297;
      }
      break;
  }
  CodeGenInfo_113 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(GoalInfo_14);
  if ((CodeGenInfo_113 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_State_47_346 = STATE_VARIABLE_State_46_345;
  else
    hlds__hlds_out__hlds_out_goal__format_llds_code_gen_info_7_p_0(Info_15, GoalInfo_14, VarNameSrc_28, VarNamePrint_29, Indent_8, STATE_VARIABLE_State_46_345, &STATE_VARIABLE_State_47_346);
  DumpGoalFeatures_115 = ((((MR_Unsigned) ((MR_hl_field(0, DumpOptions_16, 0))) >> 25)) & (MR_Integer) 1);
  switch (DumpGoalFeatures_115) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_State_121 = STATE_VARIABLE_State_47_346;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Features_116;
        MR_Word FeatureList_117;

        Features_116 = hlds__hlds_goal__goal_info_get_features_1_f_0(GoalInfo_14);
        mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_goal_feature_0), Features_116, &FeatureList_117);
        if ((FeatureList_117 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_State_121 = STATE_VARIABLE_State_47_346;
        else
        {
          MR_String Var_353;
          MR_Word Var_1071;
          MR_Word Var_1072;
          MR_Word Var_1074;

          Var_353 = mercury__string__string_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[1]), ((MR_Box) (FeatureList_117)));
          mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_47_346, &Var_1071);
          mercury__string__builder__append_string_3_p_0((MR_String) "% Goal features: ", Var_1071, &Var_1072);
          mercury__string__builder__append_string_3_p_0(Var_353, Var_1072, &Var_1074);
          mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_1074, STATE_VARIABLE_State_121);
        }
      }
      break;
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
  MR_Word Var1_11 = ((MR_Word) ((MR_hl_field(0, CompState_9, 0))));
  MR_Word Var2_12 = ((MR_Word) ((MR_hl_field(0, CompState_9, 1))));
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
hlds__hlds_out__hlds_out_goal__maybe_add_comma_newline_3_p_0(
  MR_Word AddCommaNewline_4,
  MR_Word STATE_VARIABLE_State_0_6,
  MR_Word * STATE_VARIABLE_State_7)
{
  switch (AddCommaNewline_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_State_7 = STATE_VARIABLE_State_0_6;
      break;
    case (MR_Integer) 1:
      mercury__string__builder__append_string_3_p_0((MR_String) ",\n", STATE_VARIABLE_State_0_6, STATE_VARIABLE_State_7);
      break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_goal_foreign_proc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_108;

  hlds__hlds_out__hlds_out_goal__IntroducedFrom__pred__format_goal_foreign_proc__1937__1_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_108);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_108));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_goal_foreign_proc_6_p_0(
  MR_Word InfoGoal_7,
  MR_Unsigned Indent_8,
  MR_String Follow_9,
  MR_Word GoalExpr_10,
  MR_Word STATE_VARIABLE_State_0_37,
  MR_Word * STATE_VARIABLE_State_38)
{
  MR_Word Attributes_12 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 1))));
  MR_Word PredId_13 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 2))));
  MR_Integer ProcId_14 = ((MR_Integer) ((MR_hl_field(3, GoalExpr_10, 3))));
  MR_Word Args_15 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 4))));
  MR_Word ExtraArgs_16 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 5))));
  MR_Word MaybeTraceRuntimeCond_17 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 6))));
  MR_Word PragmaCode_18 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 7))));
  MR_Word ForeignLang_19;
  MR_String ForeignLangStr_20;
  MR_Word ModuleInfo_21;
  MR_String PredStr_22;
  MR_Integer PredIdInt_23;
  MR_Integer ProcIdInt_24;
  MR_String IndentStr_25;
  MR_Word VarNameSrc_27;
  MR_Word VarNamePrint_28;
  MR_Word TypeVarSet_29;
  MR_Word InstVarSet_30;
  MR_String ArgsStr_31;
  MR_String Code_35;
  MR_Word STATE_VARIABLE_State_1_41;
  MR_Word STATE_VARIABLE_State_4_61;
  MR_Word STATE_VARIABLE_State_5_64;
  MR_Word STATE_VARIABLE_State_6_67;
  MR_Word Var_112;
  MR_Word Var_113;
  MR_Word Var_115;
  MR_Word Var_116;
  MR_Word Var_118;
  MR_Word Var_119;
  MR_Word Var_121;
  MR_String Var_122;
  MR_Word Var_129;
  MR_Word Var_131;
  MR_String Var_132;
  MR_Word Var_142;
  MR_Word Var_144;
  MR_Word Var_145;

  ForeignLang_19 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attributes_12);
  ForeignLangStr_20 = libs__globals__foreign_language_string_1_f_0(ForeignLang_19);
  ModuleInfo_21 = ((MR_Word) ((MR_hl_field(0, InfoGoal_7, 1))));
  PredStr_22 = hlds__hlds_out__hlds_out_util__pred_id_to_dev_string_2_f_0(ModuleInfo_21, PredId_13);
  hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_13, &PredIdInt_23);
  hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_14, &ProcIdInt_24);
  IndentStr_25 = libs__indent__indent2_string_1_f_0(Indent_8);
  mercury__string__builder__append_string_3_p_0(IndentStr_25, STATE_VARIABLE_State_0_37, &Var_112);
  mercury__string__builder__append_string_3_p_0((MR_String) "\044pragma_foreign_proc(/* ", Var_112, &Var_113);
  mercury__string__builder__append_string_3_p_0(ForeignLangStr_20, Var_113, &Var_115);
  mercury__string__builder__append_string_3_p_0((MR_String) " */, ", Var_115, &Var_116);
  mercury__string__builder__append_string_3_p_0(PredStr_22, Var_116, &Var_118);
  mercury__string__builder__append_string_3_p_0((MR_String) " pred ", Var_118, &Var_119);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[0]), PredIdInt_23, &Var_122);
  mercury__string__builder__append_string_3_p_0(Var_122, Var_119, &Var_121);
  mercury__string__builder__append_string_3_p_0((MR_String) " proc ", Var_121, &Var_129);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[0]), ProcIdInt_24, &Var_132);
  mercury__string__builder__append_string_3_p_0(Var_132, Var_129, &Var_131);
  mercury__string__builder__append_string_3_p_0((MR_String) ",\n", Var_131, &STATE_VARIABLE_State_1_41);
  if ((MaybeTraceRuntimeCond_17 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_State_4_61 = STATE_VARIABLE_State_1_41;
  else
  {
    MR_Word TraceRuntimeCond_26 = ((MR_Word) ((MR_hl_field(1, MaybeTraceRuntimeCond_17, 0))));
    MR_Word STATE_VARIABLE_State_2_54;
    MR_Word STATE_VARIABLE_State_3_59;
    MR_Word Var_140;

    mercury__string__builder__append_string_3_p_0(IndentStr_25, STATE_VARIABLE_State_1_41, &Var_140);
    mercury__string__builder__append_string_3_p_0((MR_String) "% trace_runtime_cond(", Var_140, &STATE_VARIABLE_State_2_54);
    parse_tree__parse_tree_out_clause__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_114_97_99_101_95_101_120_112_114_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_runtime_0), (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[1]), (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[5]), TraceRuntimeCond_26, STATE_VARIABLE_State_2_54, &STATE_VARIABLE_State_3_59);
    mercury__string__builder__append_string_3_p_0((MR_String) ")\n", STATE_VARIABLE_State_3_59, &STATE_VARIABLE_State_4_61);
  }
  VarNameSrc_27 = ((MR_Word) ((MR_hl_field(0, InfoGoal_7, 2))));
  VarNamePrint_28 = ((MR_Unsigned) ((MR_hl_field(0, InfoGoal_7, 3))) & (MR_Integer) 3);
  TypeVarSet_29 = ((MR_Word) ((MR_hl_field(0, InfoGoal_7, 4))));
  InstVarSet_30 = ((MR_Word) ((MR_hl_field(0, InfoGoal_7, 5))));
  ArgsStr_31 = hlds__hlds_out__hlds_out_goal__foreign_args_to_string_8_f_0(VarNameSrc_27, VarNamePrint_28, TypeVarSet_29, InstVarSet_30, IndentStr_25, (MR_String) "[", (MR_String) "],", Args_15);
  mercury__string__builder__append_string_3_p_0(ArgsStr_31, STATE_VARIABLE_State_4_61, &STATE_VARIABLE_State_5_64);
  if ((ExtraArgs_16 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_State_6_67 = STATE_VARIABLE_State_5_64;
  else
  {
    MR_String ExtraArgsStr_34;
    MR_Word HeadArg_147 = ((MR_Word) ((MR_hl_field(1, ExtraArgs_16, 0))));
    MR_Word TailArgs_148 = ((MR_Word) ((MR_hl_field(1, ExtraArgs_16, 1))));
    MR_Word LineStrs_149;

    LineStrs_149 = hlds__hlds_out__hlds_out_goal__foreign_args_to_string_lag_9_f_0(VarNameSrc_27, VarNamePrint_28, TypeVarSet_29, InstVarSet_30, IndentStr_25, (MR_String) "{", (MR_String) "},", HeadArg_147, TailArgs_148);
    mercury__string__append_list_2_p_0(LineStrs_149, &ExtraArgsStr_34);
    mercury__string__builder__append_string_3_p_0(ExtraArgsStr_34, STATE_VARIABLE_State_5_64, &STATE_VARIABLE_State_6_67);
  }
  Code_35 = ((MR_String) ((MR_hl_field(0, PragmaCode_18, 0))));
  mercury__string__builder__append_string_3_p_0((MR_String) "\"", STATE_VARIABLE_State_6_67, &Var_142);
  mercury__string__builder__append_string_3_p_0(Code_35, Var_142, &Var_144);
  mercury__string__builder__append_string_3_p_0((MR_String) "\")", Var_144, &Var_145);
  mercury__string__builder__append_string_3_p_0(Follow_9, Var_145, STATE_VARIABLE_State_38);
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
    MR_Word HeadArg_19 = ((MR_Word) ((MR_hl_field(1, Args_17, 0))));
    MR_Word TailArgs_20 = ((MR_Word) ((MR_hl_field(1, Args_17, 1))));
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
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Arg_18, 0))));
  MR_Word MaybeNameMode_22 = ((MR_Word) ((MR_hl_field(0, Arg_18, 1))));
  MR_Word Type_23 = ((MR_Word) ((MR_hl_field(0, Arg_18, 2))));
  MR_Word BoxPolicy_24 = ((MR_Unsigned) ((MR_hl_field(0, Arg_18, 3))) & (MR_Integer) 1);
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
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(1, MaybeNameMode_22, 0))));
    MR_String Var_78;
    MR_String Var_80;
    MR_String Var_81;

    Name_26 = ((MR_String) ((MR_hl_field(0, Var_37, 0))));
    Mode_27 = ((MR_Word) ((MR_hl_field(0, Var_37, 1))));
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
    MR_Word HeadArg_33 = ((MR_Word) ((MR_hl_field(1, Args_19, 0))));
    MR_Word TailArgs_34 = ((MR_Word) ((MR_hl_field(1, Args_19, 1))));
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
hlds__hlds_out__hlds_out_goal__format_goal_generic_call_6_p_0(
  MR_Word InfoGoal_7,
  MR_Unsigned Indent_8,
  MR_String Follow_9,
  MR_Word GoalExpr_10,
  MR_Word STATE_VARIABLE_State_0_50,
  MR_Word * STATE_VARIABLE_State_51)
{
  MR_Word GenericCall_12 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 1))));
  MR_Word ArgVars_13 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 2))));
  MR_Word Modes_14 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 3))));
  MR_Word MaybeArgRegs_15 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 4))));
  MR_Word Info_17 = ((MR_Word) ((MR_hl_field(0, InfoGoal_7, 0))));
  MR_Word DumpOptions_18 = ((MR_Word) ((MR_hl_field(0, Info_17, 0))));
  MR_Word DumpCallPredIds_19 = ((((MR_Unsigned) ((MR_hl_field(0, DumpOptions_18, 0))) >> 23)) & (MR_Integer) 1);
  MR_Word VarNameSrc_20 = ((MR_Word) ((MR_hl_field(0, InfoGoal_7, 2))));
  MR_Word VarNamePrint_21 = ((MR_Unsigned) ((MR_hl_field(0, InfoGoal_7, 3))) & (MR_Integer) 3);
  MR_String IndentStr_22;

  IndentStr_22 = libs__indent__indent2_string_1_f_0(Indent_8);
  switch (MR_tag((MR_Word) GenericCall_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word PredVar_23 = ((MR_Word) ((MR_hl_field(0, GenericCall_12, 0))));
        MR_Word Purity_24 = ((((MR_Unsigned) ((MR_hl_field(0, GenericCall_12, 1))) >> 1)) & (MR_Integer) 3);
        MR_Word PredOrFunc_25 = ((MR_Unsigned) ((MR_hl_field(0, GenericCall_12, 1))) & (MR_Integer) 1);
        MR_String PurityPrefix_28;
        MR_Word STATE_VARIABLE_State_3_63;

        PurityPrefix_28 = parse_tree__parse_tree_out_misc__purity_prefix_to_string_1_f_0(Purity_24);
        switch (DumpCallPredIds_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (PredOrFunc_25) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word FuncArgVars_30;
                  MR_Word FuncRetVar_31;
                  MR_String FuncRetVarStr_32;
                  MR_String ApplyStr_33;
                  MR_Word Var_76;
                  MR_Word Var_350;
                  MR_Word Var_351;
                  MR_Word Var_352;
                  MR_Word Var_353;
                  MR_Box conv1_FuncRetVar_31;

                  {
                    Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_76, 0) = ((MR_Box) (PredVar_23));
                    MR_hl_field(1, Var_76, 1) = ((MR_Box) (ArgVars_13));
                  }
                  parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), Var_76, &FuncArgVars_30, &conv1_FuncRetVar_31);
                  FuncRetVar_31 = ((MR_Word) (conv1_FuncRetVar_31));
                  FuncRetVarStr_32 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_20, VarNamePrint_21, FuncRetVar_31);
                  ApplyStr_33 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(VarNameSrc_20, VarNamePrint_21, (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[3]), FuncArgVars_30);
                  mercury__string__builder__append_string_3_p_0(IndentStr_22, STATE_VARIABLE_State_0_50, &Var_350);
                  mercury__string__builder__append_string_3_p_0(PurityPrefix_28, Var_350, &Var_351);
                  mercury__string__builder__append_string_3_p_0(FuncRetVarStr_32, Var_351, &Var_352);
                  mercury__string__builder__append_string_3_p_0((MR_String) " = ", Var_352, &Var_353);
                  mercury__string__builder__append_string_3_p_0(ApplyStr_33, Var_353, &STATE_VARIABLE_State_3_63);
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_String CallStr_29;
                  MR_Word Var_60;
                  MR_Word Var_348;
                  MR_Word Var_349;

                  {
                    Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_60, 0) = ((MR_Box) (PredVar_23));
                    MR_hl_field(1, Var_60, 1) = ((MR_Box) (ArgVars_13));
                  }
                  CallStr_29 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(VarNameSrc_20, VarNamePrint_21, (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[4]), Var_60);
                  mercury__string__builder__append_string_3_p_0(IndentStr_22, STATE_VARIABLE_State_0_50, &Var_348);
                  mercury__string__builder__append_string_3_p_0(PurityPrefix_28, Var_348, &Var_349);
                  mercury__string__builder__append_string_3_p_0(CallStr_29, Var_349, &STATE_VARIABLE_State_3_63);
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (PredOrFunc_25) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word STATE_VARIABLE_State_4_72;
                  MR_Word FuncArgVars_273;
                  MR_Word FuncRetVar_274;
                  MR_String FuncRetVarStr_275;
                  MR_String ApplyStr_276;
                  MR_Word STATE_VARIABLE_State_5_277;
                  MR_Word Var_278;
                  MR_Word Var_341;
                  MR_Word Var_343;
                  MR_Word Var_344;
                  MR_Word Var_345;
                  MR_Word Var_346;
                  MR_Box conv2_FuncRetVar_274;

                  mercury__string__builder__append_string_3_p_0(IndentStr_22, STATE_VARIABLE_State_0_50, &Var_341);
                  mercury__string__builder__append_string_3_p_0((MR_String) "% higher-order function application\n", Var_341, &STATE_VARIABLE_State_4_72);
                  hlds__hlds_out__hlds_out_goal__format_ho_arg_regs_4_p_0(Indent_8, MaybeArgRegs_15, STATE_VARIABLE_State_4_72, &STATE_VARIABLE_State_5_277);
                  {
                    Var_278 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_278, 0) = ((MR_Box) (PredVar_23));
                    MR_hl_field(1, Var_278, 1) = ((MR_Box) (ArgVars_13));
                  }
                  parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), Var_278, &FuncArgVars_273, &conv2_FuncRetVar_274);
                  FuncRetVar_274 = ((MR_Word) (conv2_FuncRetVar_274));
                  FuncRetVarStr_275 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_20, VarNamePrint_21, FuncRetVar_274);
                  ApplyStr_276 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(VarNameSrc_20, VarNamePrint_21, (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[3]), FuncArgVars_273);
                  mercury__string__builder__append_string_3_p_0(IndentStr_22, STATE_VARIABLE_State_5_277, &Var_343);
                  mercury__string__builder__append_string_3_p_0(PurityPrefix_28, Var_343, &Var_344);
                  mercury__string__builder__append_string_3_p_0(FuncRetVarStr_275, Var_344, &Var_345);
                  mercury__string__builder__append_string_3_p_0((MR_String) " = ", Var_345, &Var_346);
                  mercury__string__builder__append_string_3_p_0(ApplyStr_276, Var_346, &STATE_VARIABLE_State_3_63);
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word STATE_VARIABLE_State_1_54;
                  MR_String CallStr_292;
                  MR_Word STATE_VARIABLE_State_2_293;
                  MR_Word Var_296;
                  MR_Word Var_337;
                  MR_Word Var_339;
                  MR_Word Var_340;

                  mercury__string__builder__append_string_3_p_0(IndentStr_22, STATE_VARIABLE_State_0_50, &Var_337);
                  mercury__string__builder__append_string_3_p_0((MR_String) "% higher-order predicate call\n", Var_337, &STATE_VARIABLE_State_1_54);
                  hlds__hlds_out__hlds_out_goal__format_ho_arg_regs_4_p_0(Indent_8, MaybeArgRegs_15, STATE_VARIABLE_State_1_54, &STATE_VARIABLE_State_2_293);
                  {
                    Var_296 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_296, 0) = ((MR_Box) (PredVar_23));
                    MR_hl_field(1, Var_296, 1) = ((MR_Box) (ArgVars_13));
                  }
                  CallStr_292 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(VarNameSrc_20, VarNamePrint_21, (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[4]), Var_296);
                  mercury__string__builder__append_string_3_p_0(IndentStr_22, STATE_VARIABLE_State_2_293, &Var_339);
                  mercury__string__builder__append_string_3_p_0(PurityPrefix_28, Var_339, &Var_340);
                  mercury__string__builder__append_string_3_p_0(CallStr_292, Var_340, &STATE_VARIABLE_State_3_63);
                }
                break;
            }
            break;
        }
        mercury__string__builder__append_string_3_p_0(Follow_9, STATE_VARIABLE_State_3_63, STATE_VARIABLE_State_51);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TCInfoVar_34 = ((MR_Word) ((MR_hl_field(1, GenericCall_12, 0))));
        MR_Integer MethodNum_35;
        MR_Word Context_38;
        MR_Word TCInfoTerm_40;
        MR_Word MethodNumTerm_41;
        MR_Word ArgTerms_42;
        MR_Word Term_43;
        MR_Word Var_91 = ((MR_Word) ((MR_hl_field(1, GenericCall_12, 1))));
        MR_Word STATE_VARIABLE_State_9_97;
        MR_Word Var_99;
        MR_Word Var_100;
        MR_Word STATE_VARIABLE_State_10_101;
        MR_Word STATE_VARIABLE_State_11_103;

        MethodNum_35 = (MR_Integer) (Var_91);
        switch (DumpCallPredIds_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_State_9_97 = STATE_VARIABLE_State_0_50;
            break;
          case (MR_Integer) 1:
            {
              MR_Word STATE_VARIABLE_State_8_94;
              MR_Word Var_359;

              mercury__string__builder__append_string_3_p_0(IndentStr_22, STATE_VARIABLE_State_0_50, &Var_359);
              mercury__string__builder__append_string_3_p_0((MR_String) "% class method call\n", Var_359, &STATE_VARIABLE_State_8_94);
              hlds__hlds_out__hlds_out_goal__format_ho_arg_regs_4_p_0(Indent_8, MaybeArgRegs_15, STATE_VARIABLE_State_8_94, &STATE_VARIABLE_State_9_97);
            }
            break;
        }
        Context_38 = mercury__term_context__dummy_context_0_f_0();
        {
          TCInfoTerm_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, TCInfoTerm_40, 0) = ((MR_Box) (TCInfoVar_34));
          MR_hl_field(1, TCInfoTerm_40, 1) = ((MR_Box) (Context_38));
        }
        MethodNumTerm_41 = mercury__term_int__int_to_decimal_term_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MethodNum_35, Context_38);
        mercury__term_subst__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_13, &ArgTerms_42);
        {
          Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_100, 0) = ((MR_Box) (MethodNumTerm_41));
          MR_hl_field(1, Var_100, 1) = ((MR_Box) (ArgTerms_42));
        }
        {
          Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_99, 0) = ((MR_Box) (TCInfoTerm_40));
          MR_hl_field(1, Var_99, 1) = ((MR_Box) (Var_100));
        }
        {
          Term_43 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Term_43, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[2]));
          MR_hl_field(0, Term_43, 1) = ((MR_Box) (Var_99));
          MR_hl_field(0, Term_43, 2) = ((MR_Box) (Context_38));
        }
        mercury__string__builder__append_string_3_p_0(IndentStr_22, STATE_VARIABLE_State_9_97, &STATE_VARIABLE_State_10_101);
        parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_115_114_99_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[1]), VarNameSrc_20, VarNamePrint_21, Term_43, STATE_VARIABLE_State_10_101, &STATE_VARIABLE_State_11_103);
        mercury__string__builder__append_string_3_p_0(Follow_9, STATE_VARIABLE_State_11_103, STATE_VARIABLE_State_51);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String EventName_44 = ((MR_String) ((MR_hl_field(2, GenericCall_12, 0))));
        MR_Word STATE_VARIABLE_State_14_110;
        MR_Word Var_111;
        MR_Word STATE_VARIABLE_State_15_114;
        MR_Word STATE_VARIABLE_State_16_118;
        MR_Word Functor_155;
        MR_Word ArgTerms_156;
        MR_Word Term_157;
        MR_Word Var_357;

        switch (DumpCallPredIds_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_State_14_110 = STATE_VARIABLE_State_0_50;
            break;
          case (MR_Integer) 1:
            {
              MR_Word STATE_VARIABLE_State_13_107;
              MR_Word Var_355;

              mercury__string__builder__append_string_3_p_0(IndentStr_22, STATE_VARIABLE_State_0_50, &Var_355);
              mercury__string__builder__append_string_3_p_0((MR_String) "% event call\n", Var_355, &STATE_VARIABLE_State_13_107);
              hlds__hlds_out__hlds_out_goal__format_ho_arg_regs_4_p_0(Indent_8, MaybeArgRegs_15, STATE_VARIABLE_State_13_107, &STATE_VARIABLE_State_14_110);
            }
            break;
        }
        {
          Functor_155 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Functor_155, 0) = ((MR_Box) (EventName_44));
        }
        mercury__term_subst__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_13, &ArgTerms_156);
        Var_111 = mercury__term_context__dummy_context_0_f_0();
        {
          Term_157 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Term_157, 0) = ((MR_Box) (Functor_155));
          MR_hl_field(0, Term_157, 1) = ((MR_Box) (ArgTerms_156));
          MR_hl_field(0, Term_157, 2) = ((MR_Box) (Var_111));
        }
        mercury__string__builder__append_string_3_p_0(IndentStr_22, STATE_VARIABLE_State_14_110, &Var_357);
        mercury__string__builder__append_string_3_p_0((MR_String) "event ", Var_357, &STATE_VARIABLE_State_15_114);
        parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_101_114_109_95_115_114_99_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[1]), VarNameSrc_20, VarNamePrint_21, Term_157, STATE_VARIABLE_State_15_114, &STATE_VARIABLE_State_16_118);
        mercury__string__builder__append_string_3_p_0(Follow_9, STATE_VARIABLE_State_16_118, STATE_VARIABLE_State_51);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word CastType_45 = ((MR_Unsigned) ((MR_hl_field(3, GenericCall_12, 0))) & (MR_Integer) 7);
        MR_String CastTypeString_46;
        MR_Word DumpInstMapDeltas_47;
        MR_Word STATE_VARIABLE_State_19_127;
        MR_Word STATE_VARIABLE_State_20_131;
        MR_Word STATE_VARIABLE_State_21_139;
        MR_Word PredOrFunc_167;

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
        switch (DumpCallPredIds_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_State_19_127 = STATE_VARIABLE_State_0_50;
            break;
          case (MR_Integer) 1:
            {
              MR_Word STATE_VARIABLE_State_18_122;
              MR_Word Var_361;
              MR_Word Var_362;
              MR_Word Var_364;

              mercury__string__builder__append_string_3_p_0(IndentStr_22, STATE_VARIABLE_State_0_50, &Var_361);
              mercury__string__builder__append_string_3_p_0((MR_String) "% ", Var_361, &Var_362);
              mercury__string__builder__append_string_3_p_0(CastTypeString_46, Var_362, &Var_364);
              mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_364, &STATE_VARIABLE_State_18_122);
              hlds__hlds_out__hlds_out_goal__format_ho_arg_regs_4_p_0(Indent_8, MaybeArgRegs_15, STATE_VARIABLE_State_18_122, &STATE_VARIABLE_State_19_127);
            }
            break;
        }
        DumpInstMapDeltas_47 = ((((MR_Unsigned) ((MR_hl_field(0, DumpOptions_18, 0))) >> 8)) & (MR_Integer) 1);
        switch (DumpInstMapDeltas_47) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_State_20_131 = STATE_VARIABLE_State_19_127;
            break;
          case (MR_Integer) 1:
            {
              MR_Word InstVarSet_48;
              MR_String ModesStr_49;
              MR_Word Var_366;
              MR_Word Var_367;
              MR_Word Var_369;

              mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_48);
              ModesStr_49 = parse_tree__parse_tree_out_inst__mercury_mode_list_to_string_3_f_0((MR_Integer) 1, InstVarSet_48, Modes_14);
              mercury__string__builder__append_string_3_p_0(IndentStr_22, STATE_VARIABLE_State_19_127, &Var_366);
              mercury__string__builder__append_string_3_p_0((MR_String) "% modes: ", Var_366, &Var_367);
              mercury__string__builder__append_string_3_p_0(ModesStr_49, Var_367, &Var_369);
              mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_369, &STATE_VARIABLE_State_20_131);
            }
            break;
        }
        PredOrFunc_167 = hlds__hlds_out__hlds_out_goal__write_cast_as_pred_or_func_1_f_0(CastType_45);
        switch (PredOrFunc_167) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word Var_144;
              MR_String CallStr_159;
              MR_Word FuncArgVars_160;
              MR_Word FuncRetVar_161;
              MR_String FuncRetVarStr_162;
              MR_Word Var_372;
              MR_Word Var_373;
              MR_Word Var_374;
              MR_Box conv0_FuncRetVar_161;

              parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), ArgVars_13, &FuncArgVars_160, &conv0_FuncRetVar_161);
              FuncRetVar_161 = ((MR_Word) (conv0_FuncRetVar_161));
              FuncRetVarStr_162 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_20, VarNamePrint_21, FuncRetVar_161);
              {
                Var_144 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_144, 0) = ((MR_Box) (CastTypeString_46));
              }
              CallStr_159 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(VarNameSrc_20, VarNamePrint_21, Var_144, FuncArgVars_160);
              mercury__string__builder__append_string_3_p_0(IndentStr_22, STATE_VARIABLE_State_20_131, &Var_372);
              mercury__string__builder__append_string_3_p_0(FuncRetVarStr_162, Var_372, &Var_373);
              mercury__string__builder__append_string_3_p_0((MR_String) " = ", Var_373, &Var_374);
              mercury__string__builder__append_string_3_p_0(CallStr_159, Var_374, &STATE_VARIABLE_State_21_139);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word Var_136;
              MR_String CallStr_158;
              MR_Word Var_371;

              {
                Var_136 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_136, 0) = ((MR_Box) (CastTypeString_46));
              }
              CallStr_158 = hlds__hlds_out__hlds_out_util__functor_to_string_4_f_0(VarNameSrc_20, VarNamePrint_21, Var_136, ArgVars_13);
              mercury__string__builder__append_string_3_p_0(IndentStr_22, STATE_VARIABLE_State_20_131, &Var_371);
              mercury__string__builder__append_string_3_p_0(CallStr_158, Var_371, &STATE_VARIABLE_State_21_139);
            }
            break;
        }
        mercury__string__builder__append_string_3_p_0(Follow_9, STATE_VARIABLE_State_21_139, STATE_VARIABLE_State_51);
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
hlds__hlds_out__hlds_out_goal__format_ho_arg_regs_4_p_0_1(
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
hlds__hlds_out__hlds_out_goal__format_ho_arg_regs_4_p_0(
  MR_Unsigned Indent_5,
  MR_Word MaybeArgRegs_6,
  MR_Word STATE_VARIABLE_State_0_12,
  MR_Word * STATE_VARIABLE_State_13)
{
  if ((MaybeArgRegs_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_State_13 = STATE_VARIABLE_State_0_12;
  else
  {
    MR_Word ArgRegs_8 = ((MR_Word) ((MR_hl_field(1, MaybeArgRegs_6, 0))));
    MR_String IndentStr_9;
    MR_Word ArgRegStrs_10;
    MR_String ArgRegsStr_11;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_30;

    IndentStr_9 = libs__indent__indent2_string_1_f_0(Indent_5);
    ArgRegStrs_10 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_arg_reg_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[4]), ArgRegs_8);
    ArgRegsStr_11 = mercury__string__join_list_2_f_0((MR_String) ", ", ArgRegStrs_10);
    mercury__string__builder__append_string_3_p_0(IndentStr_9, STATE_VARIABLE_State_0_12, &Var_27);
    mercury__string__builder__append_string_3_p_0((MR_String) "% arg regs: ", Var_27, &Var_28);
    mercury__string__builder__append_string_3_p_0(ArgRegsStr_11, Var_28, &Var_30);
    mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_30, STATE_VARIABLE_State_13);
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
    MR_Word ModuleName_11 = ((MR_Word) ((MR_hl_field(1, PredName_8, 0))));
    MR_String Name_12 = ((MR_String) ((MR_hl_field(1, PredName_8, 1))));
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
    MR_String Name_16 = ((MR_String) ((MR_hl_field(0, PredName_8, 0))));

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_15, 0) = ((MR_Box) (Name_16));
    }
    Str_10 = hlds__hlds_out__hlds_out_util__functor_to_string_maybe_needs_quotes_5_f_0(VarNameSrc_6, VarNamePrint_7, (MR_Integer) 0, Var_15, ArgVars_9);
  }
  return Str_10;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__write_unification_5_p_0(
  MR_Word InfoGoal_6,
  MR_Unsigned Indent_7,
  MR_Word Unification_8,
  MR_Word STATE_VARIABLE_State_0_60,
  MR_Word * STATE_VARIABLE_State_61)
{
  MR_bool succeeded;
  MR_Word VarNameSrc_10 = ((MR_Word) ((MR_hl_field(0, InfoGoal_6, 2))));
  MR_Word VarNamePrint_11 = ((MR_Unsigned) ((MR_hl_field(0, InfoGoal_6, 3))) & (MR_Integer) 3);
  MR_String IndentStr_12;

  IndentStr_12 = libs__indent__indent2_string_1_f_0(Indent_7);
  switch (MR_tag((MR_Word) Unification_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, Unification_8, 0))));
        MR_Word ConsId_18 = ((MR_Word) ((MR_hl_field(0, Unification_8, 1))));
        MR_Word ArgVars_19 = ((MR_Word) ((MR_hl_field(0, Unification_8, 2))));
        MR_Word ArgModes_20 = ((MR_Word) ((MR_hl_field(0, Unification_8, 3))));
        MR_Word ConstructHow_21 = ((MR_Word) ((MR_hl_field(0, Unification_8, 4))));
        MR_Word Uniqueness_22 = ((MR_Unsigned) ((MR_hl_field(0, Unification_8, 5))) & (MR_Integer) 1);
        MR_Word SubInfo_23 = ((MR_Word) ((MR_hl_field(0, Unification_8, 6))));
        MR_String VarStr_24;
        MR_Word Info_25;
        MR_Word DumpOptions_26;
        MR_Word DumpUnifyDetails_27;
        MR_Word STATE_VARIABLE_State_3_82;
        MR_Word STATE_VARIABLE_State_4_87;
        MR_Word Var_336;
        MR_Word Var_337;
        MR_Word Var_339;

        VarStr_24 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_10, VarNamePrint_11, Var_17);
        mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_0_60, &Var_336);
        mercury__string__builder__append_string_3_p_0((MR_String) "% ", Var_336, &Var_337);
        mercury__string__builder__append_string_3_p_0(VarStr_24, Var_337, &Var_339);
        mercury__string__builder__append_string_3_p_0((MR_String) " <= ", Var_339, &STATE_VARIABLE_State_3_82);
        hlds__hlds_out__hlds_out_goal__format_functor_and_submodes_7_p_0(InfoGoal_6, Indent_7, ConsId_18, ArgVars_19, ArgModes_20, STATE_VARIABLE_State_3_82, &STATE_VARIABLE_State_4_87);
        Info_25 = ((MR_Word) ((MR_hl_field(0, InfoGoal_6, 0))));
        DumpOptions_26 = ((MR_Word) ((MR_hl_field(0, Info_25, 0))));
        DumpUnifyDetails_27 = ((((MR_Unsigned) ((MR_hl_field(0, DumpOptions_26, 0))) >> 16)) & (MR_Integer) 1);
        switch (DumpUnifyDetails_27) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_State_61 = STATE_VARIABLE_State_4_87;
            break;
          case (MR_Integer) 1:
            {
              MR_Word STATE_VARIABLE_State_5_91;
              MR_Word STATE_VARIABLE_State_6_100;
              MR_Word STATE_VARIABLE_State_9_118;
              MR_Word TypeCtor_30;
              MR_Word Var_88;

              succeeded = ((MR_tag((MR_Word) ConsId_18)) == (MR_Integer) 1);
              if (succeeded)
              {
                Var_88 = (MR_Word) (MR_body((MR_Word) (ConsId_18), (MR_Integer) 1));
                TypeCtor_30 = ((MR_Word) ((MR_hl_field(0, Var_88, 2))));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word TypeCtorSymName_31 = ((MR_Word) ((MR_hl_field(0, TypeCtor_30, 0))));
                MR_Integer TypeCtorArity_32 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_30, 1))));
                MR_String TypeCtorSymNameStr_33;
                MR_Word Var_341;
                MR_Word Var_342;
                MR_Word Var_344;
                MR_Word Var_345;
                MR_Word Var_347;
                MR_String Var_348;

                TypeCtorSymNameStr_33 = mdbcomp__sym_name__sym_name_to_string_1_f_0(TypeCtorSymName_31);
                mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_4_87, &Var_341);
                mercury__string__builder__append_string_3_p_0((MR_String) "% cons_id type_ctor: ", Var_341, &Var_342);
                mercury__string__builder__append_string_3_p_0(TypeCtorSymNameStr_33, Var_342, &Var_344);
                mercury__string__builder__append_string_3_p_0((MR_String) "/", Var_344, &Var_345);
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[0]), TypeCtorArity_32, &Var_348);
                mercury__string__builder__append_string_3_p_0(Var_348, Var_345, &Var_347);
                mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_347, &STATE_VARIABLE_State_5_91);
              }
              else
                STATE_VARIABLE_State_5_91 = STATE_VARIABLE_State_4_87;
              switch (Uniqueness_22) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  STATE_VARIABLE_State_6_100 = STATE_VARIABLE_State_5_91;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word Var_356;

                    mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_5_91, &Var_356);
                    mercury__string__builder__append_string_3_p_0((MR_String) "% cell_is_unique\n", Var_356, &STATE_VARIABLE_State_6_100);
                  }
                  break;
              }
              if ((SubInfo_23 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_State_9_118 = STATE_VARIABLE_State_6_100;
              else
              {
                MR_Word MaybeTakeAddr_34 = ((MR_Word) ((MR_hl_field(1, SubInfo_23, 0))));
                MR_Word MaybeSize_35 = ((MR_Word) ((MR_hl_field(1, SubInfo_23, 1))));
                MR_Word STATE_VARIABLE_State_7_105;

                if ((MaybeTakeAddr_34 == (MR_Word) ((MR_Unsigned) 0U)))
                  STATE_VARIABLE_State_7_105 = STATE_VARIABLE_State_6_100;
                else
                {
                  MR_Word TakeAddressFields_36 = ((MR_Word) ((MR_hl_field(1, MaybeTakeAddr_34, 0))));
                  MR_String Var_109;
                  MR_Word Var_358;
                  MR_Word Var_359;
                  MR_Word Var_361;

                  Var_109 = mercury__string__string_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[2]), ((MR_Box) (TakeAddressFields_36)));
                  mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_6_100, &Var_358);
                  mercury__string__builder__append_string_3_p_0((MR_String) "% take address fields: ", Var_358, &Var_359);
                  mercury__string__builder__append_string_3_p_0(Var_109, Var_359, &Var_361);
                  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_361, &STATE_VARIABLE_State_7_105);
                }
                if ((MaybeSize_35 == (MR_Word) ((MR_Unsigned) 0U)))
                  STATE_VARIABLE_State_9_118 = STATE_VARIABLE_State_7_105;
                else
                {
                  MR_Word SizeSource_37 = ((MR_Word) ((MR_hl_field(1, MaybeSize_35, 0))));
                  MR_Word STATE_VARIABLE_State_8_113;
                  MR_Word Var_363;

                  mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_7_105, &Var_363);
                  mercury__string__builder__append_string_3_p_0((MR_String) "% term size ", Var_363, &STATE_VARIABLE_State_8_113);
                  if (((MR_tag((MR_Word) SizeSource_37)) == (MR_Integer) 1))
                  {
                    MR_Word SizeVar_39 = ((MR_Word) ((MR_hl_field(1, SizeSource_37, 0))));
                    MR_String SizeVarStr_40;
                    MR_Word Var_376;
                    MR_Word Var_378;

                    SizeVarStr_40 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_10, VarNamePrint_11, SizeVar_39);
                    mercury__string__builder__append_string_3_p_0((MR_String) "var ", STATE_VARIABLE_State_8_113, &Var_376);
                    mercury__string__builder__append_string_3_p_0(SizeVarStr_40, Var_376, &Var_378);
                    mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_378, &STATE_VARIABLE_State_9_118);
                  }
                  else
                  {
                    MR_Integer KnownSize_38 = ((MR_Integer) ((MR_hl_field(0, SizeSource_37, 0))));
                    MR_Word Var_365;
                    MR_Word Var_367;
                    MR_String Var_368;

                    mercury__string__builder__append_string_3_p_0((MR_String) "const ", STATE_VARIABLE_State_8_113, &Var_365);
                    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[0]), KnownSize_38, &Var_368);
                    mercury__string__builder__append_string_3_p_0(Var_368, Var_365, &Var_367);
                    mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_367, &STATE_VARIABLE_State_9_118);
                  }
                }
              }
              switch (MR_tag((MR_Word) ConstructHow_21)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *STATE_VARIABLE_State_61 = STATE_VARIABLE_State_9_118;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word CellToReuse_41 = (MR_Word) (MR_body((MR_Word) (ConstructHow_21), (MR_Integer) 1));
                    MR_Word ReuseVar_42 = ((MR_Word) ((MR_hl_field(0, CellToReuse_41, 0))));
                    MR_String ReuseVarStr_45;
                    MR_Word Var_380;
                    MR_Word Var_381;
                    MR_Word Var_383;

                    ReuseVarStr_45 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_10, VarNamePrint_11, ReuseVar_42);
                    mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_9_118, &Var_380);
                    mercury__string__builder__append_string_3_p_0((MR_String) "% reuse cell: ", Var_380, &Var_381);
                    mercury__string__builder__append_string_3_p_0(ReuseVarStr_45, Var_381, &Var_383);
                    mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_383, STATE_VARIABLE_State_61);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_314 = ((MR_Unsigned) ((MR_hl_field(2, ConstructHow_21, 0))) & (MR_Integer) 1);

                    switch (Var_314) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word Var_387;

                          mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_9_118, &Var_387);
                          mercury__string__builder__append_string_3_p_0((MR_String) "% construct statically (born static)\n", Var_387, STATE_VARIABLE_State_61);
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word Var_385;

                          mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_9_118, &Var_385);
                          mercury__string__builder__append_string_3_p_0((MR_String) "% construct statically (marked static)\n", Var_385, STATE_VARIABLE_State_61);
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word RegVar_46 = ((MR_Word) ((MR_hl_field(3, ConstructHow_21, 0))));
                    MR_String RegVarStr_47;
                    MR_Word Var_389;
                    MR_Word Var_390;
                    MR_Word Var_392;

                    RegVarStr_47 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_10, VarNamePrint_11, RegVar_46);
                    mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_9_118, &Var_389);
                    mercury__string__builder__append_string_3_p_0((MR_String) "% construct in region: ", Var_389, &Var_390);
                    mercury__string__builder__append_string_3_p_0(RegVarStr_47, Var_390, &Var_392);
                    mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_392, STATE_VARIABLE_State_61);
                  }
                  break;
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word CanFail_48 = ((((MR_Unsigned) ((MR_hl_field(1, Unification_8, 4))) >> 1)) & (MR_Integer) 1);
        MR_Word CanCGC_49 = ((MR_Unsigned) ((MR_hl_field(1, Unification_8, 4))) & (MR_Integer) 1);
        MR_Word DumpCtgc_50;
        MR_String OpStr_51;
        MR_Word STATE_VARIABLE_State_15_154;
        MR_Word STATE_VARIABLE_State_16_162;
        MR_Word Var_190 = ((MR_Word) ((MR_hl_field(1, Unification_8, 0))));
        MR_Word ConsId_191 = ((MR_Word) ((MR_hl_field(1, Unification_8, 1))));
        MR_Word ArgVars_192 = ((MR_Word) ((MR_hl_field(1, Unification_8, 2))));
        MR_Word ArgModes_193 = ((MR_Word) ((MR_hl_field(1, Unification_8, 3))));
        MR_String VarStr_194;
        MR_Word Info_195 = ((MR_Word) ((MR_hl_field(0, InfoGoal_6, 0))));
        MR_Word DumpOptions_196 = ((MR_Word) ((MR_hl_field(0, Info_195, 0))));
        MR_Word Var_328;
        MR_Word Var_329;
        MR_Word Var_331;
        MR_Word Var_332;
        MR_Word Var_334;

        DumpCtgc_50 = ((((MR_Unsigned) ((MR_hl_field(0, DumpOptions_196, 0))) >> 6)) & (MR_Integer) 1);
        switch (DumpCtgc_50) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_State_15_154 = STATE_VARIABLE_State_0_60;
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_158;
              MR_Word Var_323;
              MR_Word Var_324;
              MR_Word Var_326;

              Var_158 = mercury__string__string_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_can_cgc_0), ((MR_Box) (CanCGC_49)));
              mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_0_60, &Var_323);
              mercury__string__builder__append_string_3_p_0((MR_String) "% Compile time garbage collect: ", Var_323, &Var_324);
              mercury__string__builder__append_string_3_p_0(Var_158, Var_324, &Var_326);
              mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_326, &STATE_VARIABLE_State_15_154);
            }
            break;
        }
        VarStr_194 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_10, VarNamePrint_11, Var_190);
        switch (CanFail_48) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            OpStr_51 = (MR_String) "\?=";
            break;
          case (MR_Integer) 1:
            OpStr_51 = (MR_String) "=>";
            break;
        }
        mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_15_154, &Var_328);
        mercury__string__builder__append_string_3_p_0((MR_String) "% ", Var_328, &Var_329);
        mercury__string__builder__append_string_3_p_0(VarStr_194, Var_329, &Var_331);
        mercury__string__builder__append_string_3_p_0((MR_String) " ", Var_331, &Var_332);
        mercury__string__builder__append_string_3_p_0(OpStr_51, Var_332, &Var_334);
        mercury__string__builder__append_string_3_p_0((MR_String) " ", Var_334, &STATE_VARIABLE_State_16_162);
        hlds__hlds_out__hlds_out_goal__format_functor_and_submodes_7_p_0(InfoGoal_6, Indent_7, ConsId_191, ArgVars_192, ArgModes_193, STATE_VARIABLE_State_16_162, STATE_VARIABLE_State_61);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word X_13 = ((MR_Word) ((MR_hl_field(2, Unification_8, 0))));
        MR_Word Y_14 = ((MR_Word) ((MR_hl_field(2, Unification_8, 1))));
        MR_String XStr_15;
        MR_String YStr_16;
        MR_Word Var_407;
        MR_Word Var_408;
        MR_Word Var_410;
        MR_Word Var_411;
        MR_Word Var_413;

        XStr_15 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_10, VarNamePrint_11, X_13);
        YStr_16 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_10, VarNamePrint_11, Y_14);
        mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_0_60, &Var_407);
        mercury__string__builder__append_string_3_p_0((MR_String) "% ", Var_407, &Var_408);
        mercury__string__builder__append_string_3_p_0(XStr_15, Var_408, &Var_410);
        mercury__string__builder__append_string_3_p_0((MR_String) " := ", Var_410, &Var_411);
        mercury__string__builder__append_string_3_p_0(YStr_16, Var_411, &Var_413);
        mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_413, STATE_VARIABLE_State_61);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Unification_8, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word X_186 = ((MR_Word) ((MR_hl_field(3, Unification_8, 1))));
            MR_Word Y_187 = ((MR_Word) ((MR_hl_field(3, Unification_8, 2))));
            MR_String XStr_188;
            MR_String YStr_189;
            MR_Word Var_315;
            MR_Word Var_316;
            MR_Word Var_318;
            MR_Word Var_319;
            MR_Word Var_321;

            XStr_188 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_10, VarNamePrint_11, X_186);
            YStr_189 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_10, VarNamePrint_11, Y_187);
            mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_0_60, &Var_315);
            mercury__string__builder__append_string_3_p_0((MR_String) "% ", Var_315, &Var_316);
            mercury__string__builder__append_string_3_p_0(XStr_188, Var_316, &Var_318);
            mercury__string__builder__append_string_3_p_0((MR_String) " == ", Var_318, &Var_319);
            mercury__string__builder__append_string_3_p_0(YStr_189, Var_319, &Var_321);
            mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_321, STATE_VARIABLE_State_61);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Mode_52 = ((MR_Word) ((MR_hl_field(3, Unification_8, 1))));
            MR_Word TypeInfoVars_53 = ((MR_Word) ((MR_hl_field(3, Unification_8, 3))));
            MR_String CanFailStr_54;
            MR_Word InstVarSet_55;
            MR_String ModeStr_56;
            MR_Word STATE_VARIABLE_State_18_172;
            MR_Word CanFail_197 = ((MR_Unsigned) ((MR_hl_field(3, Unification_8, 2))) & (MR_Integer) 1);
            MR_Word Var_394;
            MR_Word Var_395;
            MR_Word Var_397;
            MR_Word Var_398;
            MR_Word Var_400;

            switch (CanFail_197) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                CanFailStr_54 = (MR_String) "can_fail";
                break;
              case (MR_Integer) 1:
                CanFailStr_54 = (MR_String) "cannot_fail";
                break;
            }
            InstVarSet_55 = ((MR_Word) ((MR_hl_field(0, InfoGoal_6, 5))));
            ModeStr_56 = hlds__hlds_out__hlds_out_mode__mercury_unify_mode_to_string_2_f_0(InstVarSet_55, Mode_52);
            mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_0_60, &Var_394);
            mercury__string__builder__append_string_3_p_0((MR_String) "% ", Var_394, &Var_395);
            mercury__string__builder__append_string_3_p_0(CanFailStr_54, Var_395, &Var_397);
            mercury__string__builder__append_string_3_p_0((MR_String) ", mode: ", Var_397, &Var_398);
            mercury__string__builder__append_string_3_p_0(ModeStr_56, Var_398, &Var_400);
            mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_400, &STATE_VARIABLE_State_18_172);
            if ((TypeInfoVars_53 == (MR_Word) ((MR_Unsigned) 0U)))
              *STATE_VARIABLE_State_61 = STATE_VARIABLE_State_18_172;
            else
            {
              MR_String TypeInfoVarsStr_59;
              MR_Word Var_402;
              MR_Word Var_403;
              MR_Word Var_405;

              TypeInfoVarsStr_59 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_10, VarNamePrint_11, TypeInfoVars_53);
              mercury__string__builder__append_string_3_p_0(IndentStr_12, STATE_VARIABLE_State_18_172, &Var_402);
              mercury__string__builder__append_string_3_p_0((MR_String) "% type-info vars: ", Var_402, &Var_403);
              mercury__string__builder__append_string_3_p_0(TypeInfoVarsStr_59, Var_403, &Var_405);
              mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_405, STATE_VARIABLE_State_61);
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_functor_and_submodes_7_p_0_1(
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
hlds__hlds_out__hlds_out_goal__format_functor_and_submodes_7_p_0(
  MR_Word InfoGoal_8,
  MR_Unsigned Indent_9,
  MR_Word ConsId_10,
  MR_Word ArgVars_11,
  MR_Word ArgUnifyModes0_12,
  MR_Word STATE_VARIABLE_State_0_27,
  MR_Word * STATE_VARIABLE_State_28)
{
  MR_String ConsIdStr_14;

  ConsIdStr_14 = parse_tree__parse_tree_out_cons_id__cons_id_and_arity_to_string_1_f_0(ConsId_10);
  if ((ArgVars_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_167;

    mercury__string__builder__append_string_3_p_0(ConsIdStr_14, STATE_VARIABLE_State_0_27, &Var_167);
    mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_167, STATE_VARIABLE_State_28);
  }
  else
  {
    MR_Word VarNameSrc_17 = ((MR_Word) ((MR_hl_field(0, InfoGoal_8, 2))));
    MR_Word VarNamePrint_18 = ((MR_Unsigned) ((MR_hl_field(0, InfoGoal_8, 3))) & (MR_Integer) 3);
    MR_String ArgVarsStr_19;
    MR_Word Info_20;
    MR_Word DumpOptions_21;
    MR_Word DumpUnifyArgmodes_22;
    MR_Word STATE_VARIABLE_State_2_36;
    MR_Word Var_68;
    MR_Word Var_160;
    MR_Word Var_161;
    MR_Word Var_163;

    ArgVarsStr_19 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_17, VarNamePrint_18, ArgVars_11);
    mercury__string__builder__append_string_3_p_0(ConsIdStr_14, STATE_VARIABLE_State_0_27, &Var_160);
    mercury__string__builder__append_string_3_p_0((MR_String) "(", Var_160, &Var_161);
    mercury__string__builder__append_string_3_p_0(ArgVarsStr_19, Var_161, &Var_163);
    mercury__string__builder__append_string_3_p_0((MR_String) ")\n", Var_163, &STATE_VARIABLE_State_2_36);
    Info_20 = ((MR_Word) ((MR_hl_field(0, InfoGoal_8, 0))));
    Var_68 = ((MR_Word) ((MR_hl_field(0, InfoGoal_8, 5))));
    DumpOptions_21 = ((MR_Word) ((MR_hl_field(0, Info_20, 0))));
    DumpUnifyArgmodes_22 = ((((MR_Unsigned) ((MR_hl_field(0, DumpOptions_21, 0))) >> 31)) & (MR_Integer) 1);
    switch (DumpUnifyArgmodes_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_State_28 = STATE_VARIABLE_State_2_36;
        break;
      case (MR_Integer) 1:
        {
          MR_String IndentStr_24;
          MR_Word ArgUnifyModes_25;
          MR_Word DumpUnifyArgmodesStruct_26;

          IndentStr_24 = libs__indent__indent2_string_1_f_0(Indent_9);
          mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), (MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_2[3]), ArgUnifyModes0_12, &ArgUnifyModes_25);
          DumpUnifyArgmodesStruct_26 = ((((MR_Unsigned) ((MR_hl_field(0, DumpOptions_21, 0))) >> 13)) & (MR_Integer) 1);
          switch (DumpUnifyArgmodesStruct_26) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              hlds__hlds_out__hlds_out_goal__format_arg_modes_6_p_0(Var_68, IndentStr_24, (MR_Integer) 1, ArgUnifyModes_25, STATE_VARIABLE_State_2_36, STATE_VARIABLE_State_28);
              break;
            case (MR_Integer) 1:
              {
                MR_Word STATE_VARIABLE_State_3_44;
                MR_Word Var_165;
                MR_Box conv1_STATE_VARIABLE_State_28;

                mercury__string__builder__append_string_3_p_0(IndentStr_24, STATE_VARIABLE_State_2_36, &Var_165);
                mercury__string__builder__append_string_3_p_0((MR_String) "% arg-modes\n", Var_165, &STATE_VARIABLE_State_3_44);
                hlds__hlds_out__hlds_out_mode__mercury_format_structured_unify_mode_list_8_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[1]), (MR_Integer) 1, Var_68, (MR_Integer) 1, Indent_9, ArgUnifyModes_25, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_State_3_44)), &conv1_STATE_VARIABLE_State_28);
                *STATE_VARIABLE_State_28 = ((MR_Word) (conv1_STATE_VARIABLE_State_28));
              }
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_arg_modes_6_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_State_0_5,
  MR_Word * STATE_VARIABLE_State_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_State_6 = STATE_VARIABLE_State_0_5;
    else
    {
      MR_Word UnifyMode_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word UnifyModes_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_String UnifyModeStr_19;
      MR_Word STATE_VARIABLE_State_1_24;
      MR_Integer Var_31;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_37;
      MR_String Var_38;
      MR_Word Var_45;
      MR_Word Var_47;
      MR_Integer next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_State_0_5;

      UnifyModeStr_19 = hlds__hlds_out__hlds_out_mode__mercury_unify_mode_to_string_2_f_0(HeadVar__1_1, UnifyMode_16);
      mercury__string__builder__append_string_3_p_0(HeadVar__2_2, STATE_VARIABLE_State_0_5, &Var_34);
      mercury__string__builder__append_string_3_p_0((MR_String) "% arg-mode ", Var_34, &Var_35);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[0]), HeadVar__3_3, &Var_38);
      mercury__string__builder__append_string_3_p_0(Var_38, Var_35, &Var_37);
      mercury__string__builder__append_string_3_p_0((MR_String) " ", Var_37, &Var_45);
      mercury__string__builder__append_string_3_p_0(UnifyModeStr_19, Var_45, &Var_47);
      mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_47, &STATE_VARIABLE_State_1_24);
      Var_31 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Var_31;
      next_value_of_HeadVar__4_4 = UnifyModes_17;
      next_value_of_STATE_VARIABLE_State_0_5 = STATE_VARIABLE_State_1_24;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_State_0_5 = next_value_of_STATE_VARIABLE_State_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_short_reuse_description_5_p_0(
  MR_Word ShortDescription_6,
  MR_Word VarNameSrc_7,
  MR_Word VarNamePrint_8,
  MR_Word STATE_VARIABLE_State_0_16,
  MR_Word * STATE_VARIABLE_State_17)
{
  switch (MR_tag((MR_Word) ShortDescription_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__string__builder__append_string_3_p_0((MR_String) "cell died", STATE_VARIABLE_State_0_16, STATE_VARIABLE_State_17);
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, ShortDescription_6, 0))));
        MR_Word IsConditional_11 = ((MR_Unsigned) ((MR_hl_field(1, ShortDescription_6, 1))) & (MR_Integer) 1);
        MR_String VarStr_14;
        MR_String Var_26;
        MR_Word Var_44;
        MR_Word Var_46;
        MR_Word Var_47;

        VarStr_14 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_7, VarNamePrint_8, Var_10);
        switch (IsConditional_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Var_26 = (MR_String) "with condition";
            break;
          case (MR_Integer) 1:
            Var_26 = (MR_String) "always safe";
            break;
        }
        mercury__string__builder__append_string_3_p_0((MR_String) "cell reuse - ", STATE_VARIABLE_State_0_16, &Var_44);
        mercury__string__builder__append_string_3_p_0(VarStr_14, Var_44, &Var_46);
        mercury__string__builder__append_string_3_p_0((MR_String) " - ", Var_46, &Var_47);
        mercury__string__builder__append_string_3_p_0(Var_26, Var_47, STATE_VARIABLE_State_17);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word NoClobbers_15 = ((MR_Word) ((MR_hl_field(2, ShortDescription_6, 1))));
        MR_String Var_32;
        MR_String Var_35;
        MR_Word IsConditional_37 = ((MR_Unsigned) ((MR_hl_field(2, ShortDescription_6, 0))) & (MR_Integer) 1);
        MR_Word Var_39;
        MR_Word Var_41;
        MR_Word Var_42;

        switch (IsConditional_37) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Var_32 = (MR_String) "with condition";
            break;
          case (MR_Integer) 1:
            Var_32 = (MR_String) "always safe";
            break;
        }
        Var_35 = mercury__string__string_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[2]), ((MR_Box) (NoClobbers_15)));
        mercury__string__builder__append_string_3_p_0((MR_String) "reuse call - ", STATE_VARIABLE_State_0_16, &Var_39);
        mercury__string__builder__append_string_3_p_0(Var_32, Var_39, &Var_41);
        mercury__string__builder__append_string_3_p_0((MR_String) ", no clobbers = ", Var_41, &Var_42);
        mercury__string__builder__append_string_3_p_0(Var_35, Var_42, STATE_VARIABLE_State_17);
      }
      break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_llds_code_gen_info_7_p_0(
  MR_Word Info_8,
  MR_Word GoalInfo_9,
  MR_Word VarNameSrc_10,
  MR_Word VarNamePrint_11,
  MR_Unsigned Indent_12,
  MR_Word STATE_VARIABLE_State_0_64,
  MR_Word * STATE_VARIABLE_State_65)
{
  MR_String IndentStr_14;
  MR_Word DumpOptions_15;
  MR_Word DumpFollowVars_16;
  MR_Word DumpResumePoints_23;
  MR_Word DumpStoreMap_30;
  MR_Word STATE_VARIABLE_State_2_75;
  MR_Word STATE_VARIABLE_State_3_78;

  IndentStr_14 = libs__indent__indent2_string_1_f_0(Indent_12);
  DumpOptions_15 = ((MR_Word) ((MR_hl_field(0, Info_8, 0))));
  DumpFollowVars_16 = ((((MR_Unsigned) ((MR_hl_field(0, DumpOptions_15, 0))) >> 26)) & (MR_Integer) 1);
  DumpResumePoints_23 = ((((MR_Unsigned) ((MR_hl_field(0, DumpOptions_15, 0))) >> 19)) & (MR_Integer) 1);
  DumpStoreMap_30 = ((((MR_Unsigned) ((MR_hl_field(0, DumpOptions_15, 0))) >> 18)) & (MR_Integer) 1);
  switch (DumpFollowVars_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_State_2_75 = STATE_VARIABLE_State_0_64;
      break;
    case (MR_Integer) 1:
      {
        MR_Word MaybeFollowVars_17;

        hlds__hlds_llds__goal_info_get_follow_vars_2_p_0(GoalInfo_9, &MaybeFollowVars_17);
        if ((MaybeFollowVars_17 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_State_2_75 = STATE_VARIABLE_State_0_64;
        else
        {
          MR_Word FollowVars_18 = ((MR_Word) ((MR_hl_field(1, MaybeFollowVars_17, 0))));
          MR_Word FollowVarsMap_19 = ((MR_Word) ((MR_hl_field(0, FollowVars_18, 0))));
          MR_Integer NextRegR_20 = ((MR_Integer) ((MR_hl_field(0, FollowVars_18, 1))));
          MR_Integer NextRegF_21 = ((MR_Integer) ((MR_hl_field(0, FollowVars_18, 2))));
          MR_Word FVlist_22;
          MR_Word STATE_VARIABLE_State_1_68;
          MR_Word Var_296;
          MR_Word Var_297;
          MR_Word Var_299;
          MR_String Var_300;
          MR_Word Var_307;
          MR_Word Var_309;
          MR_String Var_310;

          mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0), FollowVarsMap_19, &FVlist_22);
          mercury__string__builder__append_string_3_p_0(IndentStr_14, STATE_VARIABLE_State_0_64, &Var_296);
          mercury__string__builder__append_string_3_p_0((MR_String) "% follow vars: r", Var_296, &Var_297);
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[0]), NextRegR_20, &Var_300);
          mercury__string__builder__append_string_3_p_0(Var_300, Var_297, &Var_299);
          mercury__string__builder__append_string_3_p_0((MR_String) ", f", Var_299, &Var_307);
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_5[0]), NextRegF_21, &Var_310);
          mercury__string__builder__append_string_3_p_0(Var_310, Var_307, &Var_309);
          mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_309, &STATE_VARIABLE_State_1_68);
          hlds__hlds_out__hlds_out_goal__format_var_to_abs_locns_6_p_0(VarNameSrc_10, VarNamePrint_11, Indent_12, FVlist_22, STATE_VARIABLE_State_1_68, &STATE_VARIABLE_State_2_75);
        }
      }
      break;
  }
  switch (DumpResumePoints_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_State_3_78 = STATE_VARIABLE_State_2_75;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Resume_24;

        hlds__hlds_llds__goal_info_get_resume_point_2_p_0(GoalInfo_9, &Resume_24);
        if ((Resume_24 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_State_3_78 = STATE_VARIABLE_State_2_75;
        else
        {
          MR_Word ResumeVars_25 = ((MR_Word) ((MR_hl_field(1, Resume_24, 0))));
          MR_Word Locs_26 = ((MR_Unsigned) ((MR_hl_field(1, Resume_24, 1))) & (MR_Integer) 3);
          MR_Word ResumeVarList_27;
          MR_String ResumeVarsStr_28;
          MR_String LocsStr_29;
          MR_Word Var_318;
          MR_Word Var_319;
          MR_Word Var_321;
          MR_Word Var_322;
          MR_Word Var_324;

          ResumeVarList_27 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResumeVars_25);
          ResumeVarsStr_28 = parse_tree__parse_tree_out_term__mercury_vars_to_string_src_3_f_0(VarNameSrc_10, VarNamePrint_11, ResumeVarList_27);
          LocsStr_29 = ((&hlds__hlds_out__hlds_out_goal_vector_common_6[0 + Locs_26]))->hlds__hlds_out__hlds_out_goal__vector_common_type_6_0__vct_6_f_0;
          mercury__string__builder__append_string_3_p_0(IndentStr_14, STATE_VARIABLE_State_2_75, &Var_318);
          mercury__string__builder__append_string_3_p_0((MR_String) "% resume point ", Var_318, &Var_319);
          mercury__string__builder__append_string_3_p_0(LocsStr_29, Var_319, &Var_321);
          mercury__string__builder__append_string_3_p_0((MR_String) " ", Var_321, &Var_322);
          mercury__string__builder__append_string_3_p_0(ResumeVarsStr_28, Var_322, &Var_324);
          mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_324, &STATE_VARIABLE_State_3_78);
        }
      }
      break;
  }
  switch (DumpStoreMap_30) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_State_65 = STATE_VARIABLE_State_3_78;
      break;
    case (MR_Integer) 1:
      {
        MR_Word StoreMap_31;
        MR_Word StoreMapList_32;
        MR_Word MaybeNeedAcrossCall_35;
        MR_Word MaybeNeedInResume_49;
        MR_Word MaybeNeedInParConj_60;
        MR_Word STATE_VARIABLE_State_5_90;
        MR_Word STATE_VARIABLE_State_15_119;
        MR_Word STATE_VARIABLE_State_25_151;

        hlds__hlds_llds__goal_info_get_store_map_2_p_0(GoalInfo_9, &StoreMap_31);
        mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0), StoreMap_31, &StoreMapList_32);
        if ((StoreMapList_32 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_State_5_90 = STATE_VARIABLE_State_3_78;
        else
        {
          MR_Word STATE_VARIABLE_State_4_87;
          MR_Word Var_326;

          mercury__string__builder__append_string_3_p_0(IndentStr_14, STATE_VARIABLE_State_3_78, &Var_326);
          mercury__string__builder__append_string_3_p_0((MR_String) "% store map:\n", Var_326, &STATE_VARIABLE_State_4_87);
          hlds__hlds_out__hlds_out_goal__format_var_to_abs_locns_6_p_0(VarNameSrc_10, VarNamePrint_11, Indent_12, StoreMapList_32, STATE_VARIABLE_State_4_87, &STATE_VARIABLE_State_5_90);
        }
        hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(GoalInfo_9, &MaybeNeedAcrossCall_35);
        if ((MaybeNeedAcrossCall_35 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_State_15_119 = STATE_VARIABLE_State_5_90;
        else
        {
          MR_Word NeedAcrossCall_36 = ((MR_Word) ((MR_hl_field(1, MaybeNeedAcrossCall_35, 0))));
          MR_Word CallForwardSet_37 = ((MR_Word) ((MR_hl_field(0, NeedAcrossCall_36, 0))));
          MR_Word CallResumeSet_38 = ((MR_Word) ((MR_hl_field(0, NeedAcrossCall_36, 1))));
          MR_Word CallNondetSet_39 = ((MR_Word) ((MR_hl_field(0, NeedAcrossCall_36, 2))));
          MR_Word CallForwardList_40;
          MR_Word CallResumeList_41;
          MR_Word CallNondetList_42;
          MR_Word STATE_VARIABLE_State_6_93;
          MR_Word STATE_VARIABLE_State_7_97;
          MR_Word STATE_VARIABLE_State_10_104;
          MR_Word STATE_VARIABLE_State_11_108;
          MR_Word STATE_VARIABLE_State_14_115;
          MR_Word Var_328;
          MR_Word Var_330;
          MR_Word Var_332;

          CallForwardList_40 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CallForwardSet_37);
          CallResumeList_41 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CallResumeSet_38);
          CallNondetList_42 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CallNondetSet_39);
          mercury__string__builder__append_string_3_p_0(IndentStr_14, STATE_VARIABLE_State_5_90, &Var_328);
          mercury__string__builder__append_string_3_p_0((MR_String) "% need across call forward vars: ", Var_328, &STATE_VARIABLE_State_6_93);
          if ((CallForwardList_40 == (MR_Word) ((MR_Unsigned) 0U)))
            mercury__string__builder__append_string_3_p_0((MR_String) "none\n", STATE_VARIABLE_State_6_93, &STATE_VARIABLE_State_7_97);
          else
          {
            MR_Word STATE_VARIABLE_State_8_99;

            parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_115_114_99_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[1]), VarNameSrc_10, VarNamePrint_11, CallForwardList_40, STATE_VARIABLE_State_6_93, &STATE_VARIABLE_State_8_99);
            mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_8_99, &STATE_VARIABLE_State_7_97);
          }
          mercury__string__builder__append_string_3_p_0(IndentStr_14, STATE_VARIABLE_State_7_97, &Var_330);
          mercury__string__builder__append_string_3_p_0((MR_String) "% need across call resume vars: ", Var_330, &STATE_VARIABLE_State_10_104);
          if ((CallResumeList_41 == (MR_Word) ((MR_Unsigned) 0U)))
            mercury__string__builder__append_string_3_p_0((MR_String) "none\n", STATE_VARIABLE_State_10_104, &STATE_VARIABLE_State_11_108);
          else
          {
            MR_Word STATE_VARIABLE_State_12_110;

            parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_115_114_99_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[1]), VarNameSrc_10, VarNamePrint_11, CallResumeList_41, STATE_VARIABLE_State_10_104, &STATE_VARIABLE_State_12_110);
            mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_12_110, &STATE_VARIABLE_State_11_108);
          }
          mercury__string__builder__append_string_3_p_0(IndentStr_14, STATE_VARIABLE_State_11_108, &Var_332);
          mercury__string__builder__append_string_3_p_0((MR_String) "% need across call nondet vars: ", Var_332, &STATE_VARIABLE_State_14_115);
          if ((CallNondetList_42 == (MR_Word) ((MR_Unsigned) 0U)))
            mercury__string__builder__append_string_3_p_0((MR_String) "none\n", STATE_VARIABLE_State_14_115, &STATE_VARIABLE_State_15_119);
          else
          {
            MR_Word STATE_VARIABLE_State_16_121;

            parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_115_114_99_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[1]), VarNameSrc_10, VarNamePrint_11, CallNondetList_42, STATE_VARIABLE_State_14_115, &STATE_VARIABLE_State_16_121);
            mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_16_121, &STATE_VARIABLE_State_15_119);
          }
        }
        hlds__hlds_llds__goal_info_get_maybe_need_in_resume_2_p_0(GoalInfo_9, &MaybeNeedInResume_49);
        if ((MaybeNeedInResume_49 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_State_25_151 = STATE_VARIABLE_State_15_119;
        else
        {
          MR_Word NeedInResume_50 = ((MR_Word) ((MR_hl_field(1, MaybeNeedInResume_49, 0))));
          MR_Word ResumeOnStack_51 = ((MR_Unsigned) ((MR_hl_field(0, NeedInResume_50, 0))) & (MR_Integer) 1);
          MR_Word ResumeResumeSet_52 = ((MR_Word) ((MR_hl_field(0, NeedInResume_50, 1))));
          MR_Word ResumeNondetSet_53 = ((MR_Word) ((MR_hl_field(0, NeedInResume_50, 2))));
          MR_Word ResumeResumeList_54;
          MR_Word ResumeNondetList_55;
          MR_Word STATE_VARIABLE_State_18_126;
          MR_Word STATE_VARIABLE_State_20_136;
          MR_Word STATE_VARIABLE_State_21_140;
          MR_Word STATE_VARIABLE_State_24_147;
          MR_Word Var_338;
          MR_Word Var_340;

          ResumeResumeList_54 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResumeResumeSet_52);
          ResumeNondetList_55 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResumeNondetSet_53);
          switch (ResumeOnStack_51) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_336;

                mercury__string__builder__append_string_3_p_0(IndentStr_14, STATE_VARIABLE_State_15_119, &Var_336);
                mercury__string__builder__append_string_3_p_0((MR_String) "% resume point has no stack label\n", Var_336, &STATE_VARIABLE_State_18_126);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_334;

                mercury__string__builder__append_string_3_p_0(IndentStr_14, STATE_VARIABLE_State_15_119, &Var_334);
                mercury__string__builder__append_string_3_p_0((MR_String) "% resume point has stack label\n", Var_334, &STATE_VARIABLE_State_18_126);
              }
              break;
          }
          mercury__string__builder__append_string_3_p_0(IndentStr_14, STATE_VARIABLE_State_18_126, &Var_338);
          mercury__string__builder__append_string_3_p_0((MR_String) "% need in resume resume vars: ", Var_338, &STATE_VARIABLE_State_20_136);
          if ((ResumeResumeList_54 == (MR_Word) ((MR_Unsigned) 0U)))
            mercury__string__builder__append_string_3_p_0((MR_String) "none\n", STATE_VARIABLE_State_20_136, &STATE_VARIABLE_State_21_140);
          else
          {
            MR_Word STATE_VARIABLE_State_22_142;

            parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_115_114_99_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[1]), VarNameSrc_10, VarNamePrint_11, ResumeResumeList_54, STATE_VARIABLE_State_20_136, &STATE_VARIABLE_State_22_142);
            mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_22_142, &STATE_VARIABLE_State_21_140);
          }
          mercury__string__builder__append_string_3_p_0(IndentStr_14, STATE_VARIABLE_State_21_140, &Var_340);
          mercury__string__builder__append_string_3_p_0((MR_String) "% need in resume nondet vars: ", Var_340, &STATE_VARIABLE_State_24_147);
          if ((ResumeNondetList_55 == (MR_Word) ((MR_Unsigned) 0U)))
            mercury__string__builder__append_string_3_p_0((MR_String) "none\n", STATE_VARIABLE_State_24_147, &STATE_VARIABLE_State_25_151);
          else
          {
            MR_Word STATE_VARIABLE_State_26_153;

            parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_115_114_99_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[1]), VarNameSrc_10, VarNamePrint_11, ResumeNondetList_55, STATE_VARIABLE_State_24_147, &STATE_VARIABLE_State_26_153);
            mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_26_153, &STATE_VARIABLE_State_25_151);
          }
        }
        hlds__hlds_llds__goal_info_get_maybe_need_in_par_conj_2_p_0(GoalInfo_9, &MaybeNeedInParConj_60);
        if ((MaybeNeedInParConj_60 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_State_65 = STATE_VARIABLE_State_25_151;
        else
        {
          MR_Word NeedInParConj_61 = ((MR_Word) ((MR_hl_field(1, MaybeNeedInParConj_60, 0))));
          MR_Word ParConjSet_62 = (MR_Word) (NeedInParConj_61);
          MR_Word ParConjList_63;
          MR_Word STATE_VARIABLE_State_28_158;
          MR_Word STATE_VARIABLE_State_29_162;
          MR_Word Var_342;

          ParConjList_63 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ParConjSet_62);
          mercury__string__builder__append_string_3_p_0(IndentStr_14, STATE_VARIABLE_State_25_151, &Var_342);
          mercury__string__builder__append_string_3_p_0((MR_String) "% need in par_conj vars: ", Var_342, &STATE_VARIABLE_State_28_158);
          parse_tree__parse_tree_out_term__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_118_97_114_115_95_115_114_99_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_goal_scalar_common_3[1]), VarNameSrc_10, VarNamePrint_11, ParConjList_63, STATE_VARIABLE_State_28_158, &STATE_VARIABLE_State_29_162);
          mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_29_162, STATE_VARIABLE_State_65);
        }
      }
      break;
  }
}

void MR_CALL 
hlds__hlds_out__hlds_out_goal__format_var_to_abs_locns_6_p_0(
  MR_Word VarNameSrc_1,
  MR_Word VarNamePrint_2,
  MR_Unsigned Indent_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_State_0_5,
  MR_Word * STATE_VARIABLE_State_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_State_6 = STATE_VARIABLE_State_0_5;
    else
    {
      MR_Word Var_16;
      MR_Word Loc_17;
      MR_Word VarLocs_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_String IndentStr_20;
      MR_String VarStr_21;
      MR_String LocnStr_22;
      MR_Word MaybeWidth_23;
      MR_String WidthStr_24;
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word STATE_VARIABLE_State_1_32;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_State_0_5;

      Var_16 = ((MR_Word) ((MR_hl_field(0, Var_28, 0))));
      Loc_17 = ((MR_Word) ((MR_hl_field(0, Var_28, 1))));
      IndentStr_20 = libs__indent__indent2_string_1_f_0(Indent_3);
      VarStr_21 = parse_tree__parse_tree_out_term__mercury_var_to_string_src_3_f_0(VarNameSrc_1, VarNamePrint_2, Var_16);
      hlds__hlds_llds__abs_locn_to_string_3_p_0(Loc_17, &LocnStr_22, &MaybeWidth_23);
      if ((MaybeWidth_23 == (MR_Word) ((MR_Unsigned) 0U)))
        WidthStr_24 = (MR_String) "";
      else
      {
        MR_String Width_25 = ((MR_String) ((MR_hl_field(1, MaybeWidth_23, 0))));

        WidthStr_24 = mercury__string__f_43_43_2_f_0((MR_String) " ", Width_25);
      }
      mercury__string__builder__append_string_3_p_0(IndentStr_20, STATE_VARIABLE_State_0_5, &Var_41);
      mercury__string__builder__append_string_3_p_0((MR_String) "%\t", Var_41, &Var_42);
      mercury__string__builder__append_string_3_p_0(VarStr_21, Var_42, &Var_44);
      mercury__string__builder__append_string_3_p_0((MR_String) "\t-> ", Var_44, &Var_45);
      mercury__string__builder__append_string_3_p_0(LocnStr_22, Var_45, &Var_47);
      mercury__string__builder__append_string_3_p_0(WidthStr_24, Var_47, &Var_48);
      mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_48, &STATE_VARIABLE_State_1_32);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = VarLocs_18;
      next_value_of_STATE_VARIABLE_State_0_5 = STATE_VARIABLE_State_1_32;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_State_0_5 = next_value_of_STATE_VARIABLE_State_0_5;
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
