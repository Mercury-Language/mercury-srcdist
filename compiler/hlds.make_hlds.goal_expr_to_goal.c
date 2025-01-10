/*
** Automatically generated from `goal_expr_to_goal.m'
** by the Mercury compiler,
** version rotd-2025-01-10
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


// :- module hlds.make_hlds.goal_expr_to_goal.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__goal_expr_to_goal__init
ENDINIT
*/

#include "hlds.make_hlds.goal_expr_to_goal.mih"


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
#include "require.mih"
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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
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
#include "hlds.make_goal.mih"
#include "hlds.make_hlds.mih"
#include "hlds.passes_aux.mih"
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
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
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
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "hlds.make_hlds.field_access.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "hlds.make_hlds.state_var.mih"
#include "hlds.make_hlds.superhomogeneous.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__goal_expr_to_goal__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__list__pti_list_1__plain_hlds__make_hlds__state_var__type_ctor_info_hlds_goal_svar_state_0;

static const MR_EnumFunctorDesc hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_ordinal_ordered_loc_kind_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_name_ordered_loc_kind_0[2];

static const MR_Integer hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__functor_number_map_loc_kind_0[2];

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__extract_trace_mutable_var_8_p_0(
  MR_Word Context_9,
  MR_Word Renaming_10,
  MR_Word VarSet_11,
  MR_Word Mutable_12,
  MR_Word * MutableHLDS_13,
  MR_Word * StateVar_14,
  MR_Word * GetGoal_15,
  MR_Word * SetGoal_16);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_state_var_field_assign_22_p_0(
  MR_Word LocKind_23,
  MR_Word Renaming_24,
  MR_Word Purity_25,
  MR_Word RHSTerm0_26,
  MR_Word StateVarNameTerms_27,
  MR_Word Remainder_28,
  MR_Word FieldListContext_29,
  MR_Word StateVarContext_30,
  MR_Word Context_31,
  MR_Word * HLDSGoal_32,
  MR_Word STATE_VARIABLE_SVarState_0_44,
  MR_Word * STATE_VARIABLE_SVarState_45,
  MR_Word STATE_VARIABLE_SVarStore_0_46,
  MR_Word * STATE_VARIABLE_SVarStore_47,
  MR_Word STATE_VARIABLE_VarSet_0_48,
  MR_Word * STATE_VARIABLE_VarSet_49,
  MR_Word STATE_VARIABLE_ModuleInfo_0_50,
  MR_Word * STATE_VARIABLE_ModuleInfo_51,
  MR_Word STATE_VARIABLE_QualInfo_0_52,
  MR_Word * STATE_VARIABLE_QualInfo_53,
  MR_Word STATE_VARIABLE_Specs_0_54,
  MR_Word * STATE_VARIABLE_Specs_55);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11,
  MR_Box wrapper_arg_12,
  MR_Box * wrapper_arg_13,
  MR_Box wrapper_arg_14,
  MR_Box * wrapper_arg_15);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11,
  MR_Box wrapper_arg_12,
  MR_Box * wrapper_arg_13);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11,
  MR_Box wrapper_arg_12,
  MR_Box * wrapper_arg_13,
  MR_Box wrapper_arg_14,
  MR_Box * wrapper_arg_15);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(
  MR_Word LocKind_23,
  MR_Word Renaming_24,
  MR_Word Vars0_25,
  MR_Word StateVars0_26,
  MR_Word DotSVars0_27,
  MR_Word ColonSVars0_28,
  MR_Word Context_29,
  MR_Word * QuantVars_30,
  MR_Word Goal_31,
  MR_Word * HLDSGoal_32,
  MR_Word STATE_VARIABLE_SVarState_0_47,
  MR_Word * STATE_VARIABLE_SVarState_48,
  MR_Word STATE_VARIABLE_SVarStore_0_49,
  MR_Word * STATE_VARIABLE_SVarStore_50,
  MR_Word STATE_VARIABLE_VarSet_0_51,
  MR_Word * STATE_VARIABLE_VarSet_52,
  MR_Word STATE_VARIABLE_ModuleInfo_0_53,
  MR_Word * STATE_VARIABLE_ModuleInfo_54,
  MR_Word STATE_VARIABLE_QualInfo_0_55,
  MR_Word * STATE_VARIABLE_QualInfo_56,
  MR_Word STATE_VARIABLE_Specs_0_57,
  MR_Word * STATE_VARIABLE_Specs_58);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(
  MR_Word LocKind_1,
  MR_Word Renaming_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_VarSet_0_8,
  MR_Word * STATE_VARIABLE_VarSet_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * STATE_VARIABLE_ModuleInfo_11,
  MR_Word STATE_VARIABLE_QualInfo_0_12,
  MR_Word * STATE_VARIABLE_QualInfo_13,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_p_0(
  MR_Word LocKind_22,
  MR_Word Renaming_23,
  MR_Word SubGoal_24,
  MR_Word ThenGoal_25,
  MR_Word MaybeElseGoal_26,
  MR_Word Catches_27,
  MR_Word MaybeCatchAny_28,
  MR_Word Context_29,
  MR_Word * TryGoal_30,
  MR_Word STATE_VARIABLE_SVarState_0_53,
  MR_Word * STATE_VARIABLE_SVarState_54,
  MR_Word STATE_VARIABLE_SVarStore_0_55,
  MR_Word * STATE_VARIABLE_SVarStore_56,
  MR_Word STATE_VARIABLE_VarSet_0_57,
  MR_Word * STATE_VARIABLE_VarSet_58,
  MR_Word STATE_VARIABLE_ModuleInfo_0_59,
  MR_Word * STATE_VARIABLE_ModuleInfo_60,
  MR_Word STATE_VARIABLE_QualInfo_0_61,
  MR_Word * STATE_VARIABLE_QualInfo_62,
  MR_Word STATE_VARIABLE_Specs_0_63,
  MR_Word * STATE_VARIABLE_Specs_64);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_p_0(
  MR_Word LocKind_23,
  MR_Word Renaming_24,
  MR_Word IOStateVarUnrenamed_25,
  MR_Word IOStateVar_26,
  MR_Word Goal0_27,
  MR_Word Then0_28,
  MR_Word Catches0_29,
  MR_Word MaybeCatchAny0_30,
  MR_Word Context_31,
  MR_Word * TryGoal_32,
  MR_Word STATE_VARIABLE_SVarState_0_68,
  MR_Word * STATE_VARIABLE_SVarState_69,
  MR_Word STATE_VARIABLE_SVarStore_0_70,
  MR_Word * STATE_VARIABLE_SVarStore_71,
  MR_Word STATE_VARIABLE_VarSet_0_72,
  MR_Word * STATE_VARIABLE_VarSet_73,
  MR_Word STATE_VARIABLE_ModuleInfo_0_74,
  MR_Word * STATE_VARIABLE_ModuleInfo_75,
  MR_Word STATE_VARIABLE_QualInfo_0_76,
  MR_Word * STATE_VARIABLE_QualInfo_77,
  MR_Word STATE_VARIABLE_Specs_0_78,
  MR_Word * STATE_VARIABLE_Specs_79);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__accumulate_disjunct_16_p_0(
  MR_Word LocKind_17,
  MR_Word Renaming_18,
  MR_Word SVarStateBefore_19,
  MR_Word Goal_20,
  MR_Word STATE_VARIABLE_RevDisjStates_0_30,
  MR_Word * STATE_VARIABLE_RevDisjStates_31,
  MR_Word STATE_VARIABLE_SVarStore_0_32,
  MR_Word * STATE_VARIABLE_SVarStore_33,
  MR_Word STATE_VARIABLE_VarSet_0_34,
  MR_Word * STATE_VARIABLE_VarSet_35,
  MR_Word STATE_VARIABLE_ModuleInfo_0_36,
  MR_Word * STATE_VARIABLE_ModuleInfo_37,
  MR_Word STATE_VARIABLE_QualInfo_0_38,
  MR_Word * STATE_VARIABLE_QualInfo_39,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__accumulate_plain_or_par_conjunct_18_p_0(
  MR_Word LocKind_19,
  MR_Word Renaming_20,
  MR_Word ConjType_21,
  MR_Word Goal_22,
  MR_Word STATE_VARIABLE_HLDSConjunctsCord_0_34,
  MR_Word * STATE_VARIABLE_HLDSConjunctsCord_35,
  MR_Word STATE_VARIABLE_SVarState_0_36,
  MR_Word * STATE_VARIABLE_SVarState_37,
  MR_Word STATE_VARIABLE_SVarStore_0_38,
  MR_Word * STATE_VARIABLE_SVarStore_39,
  MR_Word STATE_VARIABLE_VarSet_0_40,
  MR_Word * STATE_VARIABLE_VarSet_41,
  MR_Word STATE_VARIABLE_ModuleInfo_0_42,
  MR_Word * STATE_VARIABLE_ModuleInfo_43,
  MR_Word STATE_VARIABLE_QualInfo_0_44,
  MR_Word * STATE_VARIABLE_QualInfo_45,
  MR_Word STATE_VARIABLE_Specs_0_46,
  MR_Word * STATE_VARIABLE_Specs_47);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__rename_and_maybe_expand_dot_var_11_p_0(
  MR_Word Context_12,
  MR_Word MustRename_13,
  MR_Word Renaming_14,
  MR_Word PODVar0_15,
  MR_Word * Var_16,
  MR_Word STATE_VARIABLE_SVarState_0_23,
  MR_Word * STATE_VARIABLE_SVarState_24,
  MR_Word STATE_VARIABLE_VarSet_0_25,
  MR_Word * STATE_VARIABLE_VarSet_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_8_p_0(
  MR_Word Context_9,
  MR_Word Renaming_10,
  MR_Word VarSet_11,
  MR_Word StateVar0_12,
  MR_Word * StateVar_13,
  MR_String * StateVarName_14,
  MR_Word * GetGoal_15,
  MR_Word * SetGoal_16);

static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__exception_functor_3_f_0(
  MR_String Atom_5,
  MR_Word Arg_6,
  MR_Word Context_7);

static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_f_0(void);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(
  MR_Word ResultVarTerm_7,
  MR_Word ExcpVarTerm_8,
  MR_Word Catches_9,
  MR_Word MaybeCatchAny_10,
  MR_Word Context_11,
  MR_Word * Goal_12);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(
  MR_Word ResultVarTerm_6,
  MR_Word ExcpVarTerm_7,
  MR_Word Catches_8,
  MR_Word MaybeCatchAny_9,
  MR_Word * Goal_10);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_18_p_0(
  MR_Word LocKind_19,
  MR_Word Renaming_20,
  MR_Word AccessType_21,
  MR_Word ArgTerms0_22,
  MR_Word Context_23,
  MR_Word * HLDSGoal_24,
  MR_Word STATE_VARIABLE_SVarState_0_54,
  MR_Word * STATE_VARIABLE_SVarState_55,
  MR_Word STATE_VARIABLE_SVarStore_0_56,
  MR_Word * STATE_VARIABLE_SVarStore_57,
  MR_Word STATE_VARIABLE_VarSet_0_58,
  MR_Word * STATE_VARIABLE_VarSet_59,
  MR_Word STATE_VARIABLE_ModuleInfo_0_60,
  MR_Word * STATE_VARIABLE_ModuleInfo_61,
  MR_Word STATE_VARIABLE_QualInfo_0_62,
  MR_Word * STATE_VARIABLE_QualInfo_63,
  MR_Word STATE_VARIABLE_Specs_0_64,
  MR_Word * STATE_VARIABLE_Specs_65);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_p_0(
  MR_String UpdateStr_11,
  MR_Word Args0_12,
  MR_Word GoalInfo_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_VarSet_0_22,
  MR_Word * STATE_VARIABLE_VarSet_23,
  MR_Word STATE_VARIABLE_SVarState_0_24,
  MR_Word * STATE_VARIABLE_SVarState_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__dcg_field_error_context_pieces_1_f_0(
  MR_Word AccessType_3);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_p_0(
  MR_Word AccessType_18,
  MR_Word FieldNames_19,
  MR_Word ArgTerms_20,
  MR_Word Context_21,
  MR_Word * HLDSGoal_22,
  MR_Word STATE_VARIABLE_SVarState_0_68,
  MR_Word * STATE_VARIABLE_SVarState_69,
  MR_Word STATE_VARIABLE_SVarStore_0_70,
  MR_Word * STATE_VARIABLE_SVarStore_71,
  MR_Word STATE_VARIABLE_VarSet_0_72,
  MR_Word * STATE_VARIABLE_VarSet_73,
  MR_Word STATE_VARIABLE_ModuleInfo_0_74,
  MR_Word * STATE_VARIABLE_ModuleInfo_75,
  MR_Word STATE_VARIABLE_QualInfo_0_76,
  MR_Word * STATE_VARIABLE_QualInfo_77,
  MR_Word STATE_VARIABLE_Specs_0_78,
  MR_Word * STATE_VARIABLE_Specs_79);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_call_std_18_p_0(
  MR_Word Context_19,
  MR_Word Renaming_20,
  MR_Word SymName_21,
  MR_Word ArgTerms1_22,
  MR_Word Purity_23,
  MR_Word * HLDSGoal_24,
  MR_Word STATE_VARIABLE_SVarState_0_51,
  MR_Word * STATE_VARIABLE_SVarState_52,
  MR_Word STATE_VARIABLE_SVarStore_0_53,
  MR_Word * STATE_VARIABLE_SVarStore_54,
  MR_Word STATE_VARIABLE_VarSet_0_55,
  MR_Word * STATE_VARIABLE_VarSet_56,
  MR_Word STATE_VARIABLE_ModuleInfo_0_57,
  MR_Word * STATE_VARIABLE_ModuleInfo_58,
  MR_Word STATE_VARIABLE_QualInfo_0_59,
  MR_Word * STATE_VARIABLE_QualInfo_60,
  MR_Word STATE_VARIABLE_Specs_0_61,
  MR_Word * STATE_VARIABLE_Specs_62);

static MR_bool MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Unify____loc_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Compare____loc_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_1[53][2];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_2[1][3];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_3[6][1];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_4[1][12];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_5[1][21];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_6[1][19];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_7[1][11];




static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_1[53][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_hlds_goal_svar_state_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "to have the form"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: expected DCG field selection goal"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[8])))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[11]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    ((MR_Box) ((MR_String) "FieldValue =^ field1 ^ ... ^ fieldN"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[12])))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: expected"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    ((MR_Box) ((MR_String) "^ field1 ^ ... ^ fieldN"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in DCG field update goal, got"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ":="))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[21])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "on the left hand side of"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[23])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: expected DCG field update goal"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[8])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    ((MR_Box) ((MR_String) "^ field1 ^ ... ^ fieldN := FieldValue"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[12])))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In DCG field extraction goal:"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[15])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In DCG field update goal:"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[15])))
  },
  /* row  34 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[35]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "parameter"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[37]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "io"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[38])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "with an"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[40])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "goal"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[42])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "try"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[44])))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "part."))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[47]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "else"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[48])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "cannot have an"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[50])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_3[6][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "!:")) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "!.")) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "^")) },
  /* row   3 */
  { ((MR_Box) ((MR_String) ":=")) },
  /* row   4 */
  { ((MR_Box) ((MR_String) "{}")) },
  /* row   5 */
  { (MR_Box) ((MR_Unsigned) 0U) },
};

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_4[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_5[1][21] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 18)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__type_ctor_info_loc_kind_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_conj_type_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_store_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_store_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_6[1][19] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 16)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__type_ctor_info_loc_kind_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__list__pti_list_1__plain_hlds__make_hlds__state_var__type_ctor_info_hlds_goal_svar_state_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__list__pti_list_1__plain_hlds__make_hlds__state_var__type_ctor_info_hlds_goal_svar_state_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_store_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_store_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_7[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__goal_expr_to_goal__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__goal_expr_to_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&hlds__make_hlds__goal_expr_to_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__list__pti_list_1__plain_hlds__make_hlds__state_var__type_ctor_info_hlds_goal_svar_state_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_hlds_goal_svar_state_0) }
};

static const MR_EnumFunctorDesc hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_0 = {
  (MR_String) "loc_whole_goal",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_1 = {
  (MR_String) "loc_inside_atomic_goal",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_ordinal_ordered_loc_kind_0[2] = {
  &hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_0,
  &hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_name_ordered_loc_kind_0[2] = {
  &hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_1,
  &hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_0
};

static const MR_Integer hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__functor_number_map_loc_kind_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__type_ctor_info_loc_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__goal_expr_to_goal____Unify____loc_kind_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__goal_expr_to_goal____Compare____loc_kind_0_0_10001)),
  (MR_String) "hlds.make_hlds.goal_expr_to_goal",
  (MR_String) "loc_kind",
  { hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_name_ordered_loc_kind_0 },
  { hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_ordinal_ordered_loc_kind_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__functor_number_map_loc_kind_0,

};

void MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Compare____loc_kind_0_0(
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

MR_bool MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Unify____loc_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__extract_trace_mutable_var_8_p_0(
  MR_Word Context_9,
  MR_Word Renaming_10,
  MR_Word VarSet_11,
  MR_Word Mutable_12,
  MR_Word * MutableHLDS_13,
  MR_Word * StateVar_14,
  MR_Word * GetGoal_15,
  MR_Word * SetGoal_16)
{
  MR_String MutableName_17 = ((MR_String) ((MR_hl_field(0, Mutable_12, (MR_Integer) 0))));
  MR_Word StateVar0_18 = ((MR_Word) ((MR_hl_field(0, Mutable_12, (MR_Integer) 1))));
  MR_String StateVarName_19;
  MR_Word GetPredName_20;
  MR_Word SetPredName_21;
  MR_Word SetVar_22;
  MR_Word UseVar_23;
  MR_String Var_27;
  MR_String Var_29;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_41;
  MR_Word Var_43;

  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_10, StateVar0_18, StateVar_14);
  mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_11, *StateVar_14, &StateVarName_19);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *MutableHLDS_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MutableName_17));
    MR_hl_field(0, base, 1) = ((MR_Box) (StateVarName_19));
  }
  Var_27 = mercury__string__f_43_43_2_f_0((MR_String) "get_", MutableName_17);
  {
    GetPredName_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, GetPredName_20, 0) = ((MR_Box) (Var_27));
  }
  Var_29 = mercury__string__f_43_43_2_f_0((MR_String) "set_", MutableName_17);
  {
    SetPredName_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SetPredName_21, 0) = ((MR_Box) (Var_29));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (StateVar0_18));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) (Context_9));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    SetVar_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SetVar_22, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[0]));
    MR_hl_field(0, SetVar_22, 1) = ((MR_Box) (Var_33));
    MR_hl_field(0, SetVar_22, 2) = ((MR_Box) (Context_9));
  }
  {
    UseVar_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UseVar_23, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[1]));
    MR_hl_field(0, UseVar_23, 1) = ((MR_Box) (Var_33));
    MR_hl_field(0, UseVar_23, 2) = ((MR_Box) (Context_9));
  }
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) (SetVar_22));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    *GetGoal_15 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Context_9));
    MR_hl_field(1, base, 1) = ((MR_Box) (GetPredName_20));
    MR_hl_field(1, base, 2) = ((MR_Box) (Var_41));
    MR_hl_field(1, base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (UseVar_23));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    *SetGoal_16 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Context_9));
    MR_hl_field(1, base, 1) = ((MR_Box) (SetPredName_21));
    MR_hl_field(1, base, 2) = ((MR_Box) (Var_43));
    MR_hl_field(1, base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_state_var_field_assign_22_p_0(
  MR_Word LocKind_23,
  MR_Word Renaming_24,
  MR_Word Purity_25,
  MR_Word RHSTerm0_26,
  MR_Word StateVarNameTerms_27,
  MR_Word Remainder_28,
  MR_Word FieldListContext_29,
  MR_Word StateVarContext_30,
  MR_Word Context_31,
  MR_Word * HLDSGoal_32,
  MR_Word STATE_VARIABLE_SVarState_0_44,
  MR_Word * STATE_VARIABLE_SVarState_45,
  MR_Word STATE_VARIABLE_SVarStore_0_46,
  MR_Word * STATE_VARIABLE_SVarStore_47,
  MR_Word STATE_VARIABLE_VarSet_0_48,
  MR_Word * STATE_VARIABLE_VarSet_49,
  MR_Word STATE_VARIABLE_ModuleInfo_0_50,
  MR_Word * STATE_VARIABLE_ModuleInfo_51,
  MR_Word STATE_VARIABLE_QualInfo_0_52,
  MR_Word * STATE_VARIABLE_QualInfo_53,
  MR_Word STATE_VARIABLE_Specs_0_54,
  MR_Word * STATE_VARIABLE_Specs_55)
{
  MR_Word LHSTerm_39;
  MR_Word StateVar_40;
  MR_Word FieldList_41;
  MR_Word RHSTerm_42;
  MR_Word TransformedGoal_43;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_67;
  MR_Word Var_68;

  {
    LHSTerm_39 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LHSTerm_39, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[0]));
    MR_hl_field(0, LHSTerm_39, 1) = ((MR_Box) (StateVarNameTerms_27));
    MR_hl_field(0, LHSTerm_39, 2) = ((MR_Box) (StateVarContext_30));
  }
  {
    StateVar_40 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, StateVar_40, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[1]));
    MR_hl_field(0, StateVar_40, 1) = ((MR_Box) (StateVarNameTerms_27));
    MR_hl_field(0, StateVar_40, 2) = ((MR_Box) (StateVarContext_30));
  }
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (Remainder_28));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (StateVar_40));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_63));
  }
  {
    FieldList_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FieldList_41, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[2]));
    MR_hl_field(0, FieldList_41, 1) = ((MR_Box) (Var_62));
    MR_hl_field(0, FieldList_41, 2) = ((MR_Box) (FieldListContext_29));
  }
  {
    Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_68, 0) = ((MR_Box) (RHSTerm0_26));
    MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_67, 0) = ((MR_Box) (FieldList_41));
    MR_hl_field(1, Var_67, 1) = ((MR_Box) (Var_68));
  }
  {
    RHSTerm_42 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RHSTerm_42, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[3]));
    MR_hl_field(0, RHSTerm_42, 1) = ((MR_Box) (Var_67));
    MR_hl_field(0, RHSTerm_42, 2) = ((MR_Box) (Context_31));
  }
  {
    TransformedGoal_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TransformedGoal_43, 0) = ((MR_Box) (Context_31));
    MR_hl_field(0, TransformedGoal_43, 1) = ((MR_Box) (LHSTerm_39));
    MR_hl_field(0, TransformedGoal_43, 2) = ((MR_Box) (RHSTerm_42));
    MR_hl_field(0, TransformedGoal_43, 3) = (MR_Box) ((MR_Unsigned) (Purity_25));
  }
  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_23, Renaming_24, TransformedGoal_43, HLDSGoal_32, STATE_VARIABLE_SVarState_0_44, STATE_VARIABLE_SVarState_45, STATE_VARIABLE_SVarStore_0_46, STATE_VARIABLE_SVarStore_47, STATE_VARIABLE_VarSet_0_48, STATE_VARIABLE_VarSet_49, STATE_VARIABLE_ModuleInfo_0_50, STATE_VARIABLE_ModuleInfo_51, STATE_VARIABLE_QualInfo_0_52, STATE_VARIABLE_QualInfo_53, STATE_VARIABLE_Specs_0_54, STATE_VARIABLE_Specs_55);
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv43_MutableHLDS_13;
  MR_Word conv42_StateVar_14;
  MR_Word conv41_GetGoal_15;
  MR_Word conv40_SetGoal_16;

  hlds__make_hlds__goal_expr_to_goal__extract_trace_mutable_var_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv43_MutableHLDS_13, &conv42_StateVar_14, &conv41_GetGoal_15, &conv40_SetGoal_16);
  *wrapper_arg_2 = ((MR_Box) (conv43_MutableHLDS_13));
  *wrapper_arg_3 = ((MR_Box) (conv42_StateVar_14));
  *wrapper_arg_4 = ((MR_Box) (conv41_GetGoal_15));
  *wrapper_arg_5 = ((MR_Box) (conv40_SetGoal_16));
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11,
  MR_Box wrapper_arg_12,
  MR_Box * wrapper_arg_13,
  MR_Box wrapper_arg_14,
  MR_Box * wrapper_arg_15)
{
  MR_Box closure = closure_arg;
  MR_Word conv32_STATE_VARIABLE_HLDSConjunctsCord_35;
  MR_Word conv31_STATE_VARIABLE_SVarState_37;
  MR_Word conv30_STATE_VARIABLE_SVarStore_39;
  MR_Word conv29_STATE_VARIABLE_VarSet_41;
  MR_Word conv28_STATE_VARIABLE_ModuleInfo_43;
  MR_Word conv27_STATE_VARIABLE_QualInfo_45;
  MR_Word conv26_STATE_VARIABLE_Specs_47;

  hlds__make_hlds__goal_expr_to_goal__accumulate_plain_or_par_conjunct_18_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv32_STATE_VARIABLE_HLDSConjunctsCord_35, ((MR_Word) (wrapper_arg_4)), &conv31_STATE_VARIABLE_SVarState_37, ((MR_Word) (wrapper_arg_6)), &conv30_STATE_VARIABLE_SVarStore_39, ((MR_Word) (wrapper_arg_8)), &conv29_STATE_VARIABLE_VarSet_41, ((MR_Word) (wrapper_arg_10)), &conv28_STATE_VARIABLE_ModuleInfo_43, ((MR_Word) (wrapper_arg_12)), &conv27_STATE_VARIABLE_QualInfo_45, ((MR_Word) (wrapper_arg_14)), &conv26_STATE_VARIABLE_Specs_47);
  *wrapper_arg_3 = ((MR_Box) (conv32_STATE_VARIABLE_HLDSConjunctsCord_35));
  *wrapper_arg_5 = ((MR_Box) (conv31_STATE_VARIABLE_SVarState_37));
  *wrapper_arg_7 = ((MR_Box) (conv30_STATE_VARIABLE_SVarStore_39));
  *wrapper_arg_9 = ((MR_Box) (conv29_STATE_VARIABLE_VarSet_41));
  *wrapper_arg_11 = ((MR_Box) (conv28_STATE_VARIABLE_ModuleInfo_43));
  *wrapper_arg_13 = ((MR_Box) (conv27_STATE_VARIABLE_QualInfo_45));
  *wrapper_arg_15 = ((MR_Box) (conv26_STATE_VARIABLE_Specs_47));
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11,
  MR_Box wrapper_arg_12,
  MR_Box * wrapper_arg_13)
{
  MR_Box closure = closure_arg;
  MR_Word conv19_STATE_VARIABLE_RevDisjStates_31;
  MR_Word conv18_STATE_VARIABLE_SVarStore_33;
  MR_Word conv17_STATE_VARIABLE_VarSet_35;
  MR_Word conv16_STATE_VARIABLE_ModuleInfo_37;
  MR_Word conv15_STATE_VARIABLE_QualInfo_39;
  MR_Word conv14_STATE_VARIABLE_Specs_41;

  hlds__make_hlds__goal_expr_to_goal__accumulate_disjunct_16_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv19_STATE_VARIABLE_RevDisjStates_31, ((MR_Word) (wrapper_arg_4)), &conv18_STATE_VARIABLE_SVarStore_33, ((MR_Word) (wrapper_arg_6)), &conv17_STATE_VARIABLE_VarSet_35, ((MR_Word) (wrapper_arg_8)), &conv16_STATE_VARIABLE_ModuleInfo_37, ((MR_Word) (wrapper_arg_10)), &conv15_STATE_VARIABLE_QualInfo_39, ((MR_Word) (wrapper_arg_12)), &conv14_STATE_VARIABLE_Specs_41);
  *wrapper_arg_3 = ((MR_Box) (conv19_STATE_VARIABLE_RevDisjStates_31));
  *wrapper_arg_5 = ((MR_Box) (conv18_STATE_VARIABLE_SVarStore_33));
  *wrapper_arg_7 = ((MR_Box) (conv17_STATE_VARIABLE_VarSet_35));
  *wrapper_arg_9 = ((MR_Box) (conv16_STATE_VARIABLE_ModuleInfo_37));
  *wrapper_arg_11 = ((MR_Box) (conv15_STATE_VARIABLE_QualInfo_39));
  *wrapper_arg_13 = ((MR_Box) (conv14_STATE_VARIABLE_Specs_41));
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11,
  MR_Box wrapper_arg_12,
  MR_Box * wrapper_arg_13,
  MR_Box wrapper_arg_14,
  MR_Box * wrapper_arg_15)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_HLDSConjunctsCord_35;
  MR_Word conv5_STATE_VARIABLE_SVarState_37;
  MR_Word conv4_STATE_VARIABLE_SVarStore_39;
  MR_Word conv3_STATE_VARIABLE_VarSet_41;
  MR_Word conv2_STATE_VARIABLE_ModuleInfo_43;
  MR_Word conv1_STATE_VARIABLE_QualInfo_45;
  MR_Word conv0_STATE_VARIABLE_Specs_47;

  hlds__make_hlds__goal_expr_to_goal__accumulate_plain_or_par_conjunct_18_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_HLDSConjunctsCord_35, ((MR_Word) (wrapper_arg_4)), &conv5_STATE_VARIABLE_SVarState_37, ((MR_Word) (wrapper_arg_6)), &conv4_STATE_VARIABLE_SVarStore_39, ((MR_Word) (wrapper_arg_8)), &conv3_STATE_VARIABLE_VarSet_41, ((MR_Word) (wrapper_arg_10)), &conv2_STATE_VARIABLE_ModuleInfo_43, ((MR_Word) (wrapper_arg_12)), &conv1_STATE_VARIABLE_QualInfo_45, ((MR_Word) (wrapper_arg_14)), &conv0_STATE_VARIABLE_Specs_47);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_HLDSConjunctsCord_35));
  *wrapper_arg_5 = ((MR_Box) (conv5_STATE_VARIABLE_SVarState_37));
  *wrapper_arg_7 = ((MR_Box) (conv4_STATE_VARIABLE_SVarStore_39));
  *wrapper_arg_9 = ((MR_Box) (conv3_STATE_VARIABLE_VarSet_41));
  *wrapper_arg_11 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_43));
  *wrapper_arg_13 = ((MR_Box) (conv1_STATE_VARIABLE_QualInfo_45));
  *wrapper_arg_15 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_47));
}

void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(
  MR_Word LocKind_17,
  MR_Word Renaming_18,
  MR_Word Goal_19,
  MR_Word * HLDSGoal_20,
  MR_Word STATE_VARIABLE_SVarState_0_106,
  MR_Word * STATE_VARIABLE_SVarState_107,
  MR_Word STATE_VARIABLE_SVarStore_0_108,
  MR_Word * STATE_VARIABLE_SVarStore_109,
  MR_Word STATE_VARIABLE_VarSet_0_110,
  MR_Word * STATE_VARIABLE_VarSet_111,
  MR_Word STATE_VARIABLE_ModuleInfo_0_112,
  MR_Word * STATE_VARIABLE_ModuleInfo_113,
  MR_Word STATE_VARIABLE_QualInfo_0_114,
  MR_Word * STATE_VARIABLE_QualInfo_115,
  MR_Word STATE_VARIABLE_Specs_0_116,
  MR_Word * STATE_VARIABLE_Specs_117)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Goal_19)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Context_736 = ((MR_Word) ((MR_hl_field(0, Goal_19, (MR_Integer) 0))));
          MR_Word TermA0_737 = ((MR_Word) ((MR_hl_field(0, Goal_19, (MR_Integer) 1))));
          MR_Word TermB0_738 = ((MR_Word) ((MR_hl_field(0, Goal_19, (MR_Integer) 2))));
          MR_Word Purity_739 = ((MR_Unsigned) ((MR_hl_field(0, Goal_19, (MR_Integer) 3))) & (MR_Integer) 3);
          MR_Word TermA_740;
          MR_Word TermB_741;
          MR_Word StateVarA_742;
          MR_Word Var_752;
          MR_String Var_753;
          MR_Word Var_754;
          MR_Word Var_755;
          MR_Word Var_756;

          parse_tree__prog_rename__rename_vars_in_term_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_18, TermA0_737, &TermA_740);
          parse_tree__prog_rename__rename_vars_in_term_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_18, TermB0_738, &TermB_741);
          succeeded = ((MR_tag((MR_Word) TermA_740)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_752 = ((MR_Word) ((MR_hl_field(0, TermA_740, (MR_Integer) 0))));
            Var_754 = ((MR_Word) ((MR_hl_field(0, TermA_740, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Var_752)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_753 = ((MR_String) ((MR_hl_field(0, Var_752, (MR_Integer) 0))));
              succeeded = (strcmp(Var_753, (MR_String) "!") == 0);
              if (succeeded)
              {
                succeeded = (Var_754 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_755 = ((MR_Word) ((MR_hl_field(1, Var_754, (MR_Integer) 0))));
                  Var_756 = ((MR_Word) ((MR_hl_field(1, Var_754, (MR_Integer) 1))));
                  succeeded = (Var_756 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) Var_755)) == (MR_Integer) 1);
                    if (succeeded)
                      StateVarA_742 = ((MR_Word) ((MR_hl_field(1, Var_755, (MR_Integer) 0))));
                  }
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word STATE_VARIABLE_VarSet_60_757;
            MR_Word STATE_VARIABLE_SVarState_61_758;
            MR_Word STATE_VARIABLE_Specs_62_759;
            MR_Word StateVarB_745;
            MR_Word Var_760;
            MR_String Var_761;
            MR_Word Var_762;
            MR_Word Var_763;
            MR_Word Var_764;

            hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(Context_736, StateVarA_742, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_60_757, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_61_758, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_62_759);
            succeeded = ((MR_tag((MR_Word) TermB_741)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_760 = ((MR_Word) ((MR_hl_field(0, TermB_741, (MR_Integer) 0))));
              Var_762 = ((MR_Word) ((MR_hl_field(0, TermB_741, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_760)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_761 = ((MR_String) ((MR_hl_field(0, Var_760, (MR_Integer) 0))));
                succeeded = (strcmp(Var_761, (MR_String) "!") == 0);
                if (succeeded)
                {
                  succeeded = (Var_762 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_763 = ((MR_Word) ((MR_hl_field(1, Var_762, (MR_Integer) 0))));
                    Var_764 = ((MR_Word) ((MR_hl_field(1, Var_762, (MR_Integer) 1))));
                    succeeded = (Var_764 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) Var_763)) == (MR_Integer) 1);
                      if (succeeded)
                        StateVarB_745 = ((MR_Word) ((MR_hl_field(1, Var_763, (MR_Integer) 0))));
                    }
                  }
                }
              }
            }
            if (succeeded)
              hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(Context_736, StateVarB_745, STATE_VARIABLE_VarSet_60_757, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_SVarState_61_758, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_Specs_62_759, STATE_VARIABLE_Specs_117);
            else
            {
              *STATE_VARIABLE_Specs_117 = STATE_VARIABLE_Specs_62_759;
              *STATE_VARIABLE_VarSet_111 = STATE_VARIABLE_VarSet_60_757;
              *STATE_VARIABLE_SVarState_107 = STATE_VARIABLE_SVarState_61_758;
            }
            *HLDSGoal_20 = hlds__make_goal__true_goal_with_context_1_f_0(Context_736);
            *STATE_VARIABLE_QualInfo_115 = STATE_VARIABLE_QualInfo_0_114;
            *STATE_VARIABLE_ModuleInfo_113 = STATE_VARIABLE_ModuleInfo_0_112;
            *STATE_VARIABLE_SVarStore_109 = STATE_VARIABLE_SVarStore_0_108;
          }
          else
          {
            MR_Word StateVarB_773;
            MR_Word Var_765;
            MR_String Var_766;
            MR_Word Var_767;
            MR_Word Var_768;
            MR_Word Var_769;

            succeeded = ((MR_tag((MR_Word) TermB_741)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_765 = ((MR_Word) ((MR_hl_field(0, TermB_741, (MR_Integer) 0))));
              Var_767 = ((MR_Word) ((MR_hl_field(0, TermB_741, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_765)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_766 = ((MR_String) ((MR_hl_field(0, Var_765, (MR_Integer) 0))));
                succeeded = (strcmp(Var_766, (MR_String) "!") == 0);
                if (succeeded)
                {
                  succeeded = (Var_767 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_768 = ((MR_Word) ((MR_hl_field(1, Var_767, (MR_Integer) 0))));
                    Var_769 = ((MR_Word) ((MR_hl_field(1, Var_767, (MR_Integer) 1))));
                    succeeded = (Var_769 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) Var_768)) == (MR_Integer) 1);
                      if (succeeded)
                        StateVarB_773 = ((MR_Word) ((MR_hl_field(1, Var_768, (MR_Integer) 0))));
                    }
                  }
                }
              }
            }
            if (succeeded)
            {
              hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(Context_736, StateVarB_773, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              *HLDSGoal_20 = hlds__make_goal__true_goal_with_context_1_f_0(Context_736);
              *STATE_VARIABLE_QualInfo_115 = STATE_VARIABLE_QualInfo_0_114;
              *STATE_VARIABLE_ModuleInfo_113 = STATE_VARIABLE_ModuleInfo_0_112;
              *STATE_VARIABLE_SVarStore_109 = STATE_VARIABLE_SVarStore_0_108;
            }
            else
            {
              MR_Word STATE_VARIABLE_SVarState_81_772;

              hlds__make_hlds__superhomogeneous__unravel_unification_19_p_0(TermA_740, TermB_741, Context_736, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Purity_739, HLDSGoal_20, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_81_772, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(LocKind_17, STATE_VARIABLE_SVarState_81_772, STATE_VARIABLE_SVarState_107);
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Context_404 = ((MR_Word) ((MR_hl_field(1, Goal_19, (MR_Integer) 0))));
          MR_Word SymName_405 = ((MR_Word) ((MR_hl_field(1, Goal_19, (MR_Integer) 1))));
          MR_Word ArgTerms0_406 = ((MR_Word) ((MR_hl_field(1, Goal_19, (MR_Integer) 2))));
          MR_Word Purity_407 = ((MR_Unsigned) ((MR_hl_field(1, Goal_19, (MR_Integer) 3))) & (MR_Integer) 3);
          MR_Word ArgTerms1_408;
          MR_Word STATE_VARIABLE_SVarState_60_425;
          MR_String Name_409;

          hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(ArgTerms0_406, &ArgTerms1_408);
          succeeded = ((MR_tag((MR_Word) SymName_405)) == (MR_Integer) 0);
          if (succeeded)
          {
            Name_409 = ((MR_String) ((MR_hl_field(0, SymName_405, (MR_Integer) 0))));
            if ((strcmp(Name_409, (MR_String) ":=") == 0))
              succeeded = MR_TRUE;
            else
            if ((strcmp(Name_409, (MR_String) "=^") == 0))
              succeeded = MR_TRUE;
            else
            if ((strcmp(Name_409, (MR_String) "\\=") == 0))
              succeeded = MR_TRUE;
            else
              succeeded = MR_FALSE;
          }
          if (succeeded)
            if ((strcmp(Name_409, (MR_String) ":=") == 0))
            {
              MR_Word RHSTerm0_414;
              MR_Word Remainder_416;
              MR_Word FieldListContext_417;
              MR_Word StateVarNameTerms_418;
              MR_Word StateVarContext_419;
              MR_Word LHSTerm0_413;
              MR_Word StateVar0_415;
              MR_Word Var_426;
              MR_Word Var_427;
              MR_Word Var_428;
              MR_String Var_429;
              MR_Word Var_430;
              MR_Word Var_431;
              MR_Word Var_432;
              MR_Word Var_433;
              MR_String Var_434;
              MR_Word Var_435;
              MR_Word Var_436;

              succeeded = (ArgTerms1_408 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                LHSTerm0_413 = ((MR_Word) ((MR_hl_field(1, ArgTerms1_408, (MR_Integer) 0))));
                Var_426 = ((MR_Word) ((MR_hl_field(1, ArgTerms1_408, (MR_Integer) 1))));
                succeeded = (Var_426 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  RHSTerm0_414 = ((MR_Word) ((MR_hl_field(1, Var_426, (MR_Integer) 0))));
                  Var_427 = ((MR_Word) ((MR_hl_field(1, Var_426, (MR_Integer) 1))));
                  succeeded = (Var_427 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) LHSTerm0_413)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_428 = ((MR_Word) ((MR_hl_field(0, LHSTerm0_413, (MR_Integer) 0))));
                      Var_430 = ((MR_Word) ((MR_hl_field(0, LHSTerm0_413, (MR_Integer) 1))));
                      FieldListContext_417 = ((MR_Word) ((MR_hl_field(0, LHSTerm0_413, (MR_Integer) 2))));
                      succeeded = ((MR_tag((MR_Word) Var_428)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        Var_429 = ((MR_String) ((MR_hl_field(0, Var_428, (MR_Integer) 0))));
                        succeeded = (strcmp(Var_429, (MR_String) "^") == 0);
                        if (succeeded)
                        {
                          succeeded = (Var_430 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            StateVar0_415 = ((MR_Word) ((MR_hl_field(1, Var_430, (MR_Integer) 0))));
                            Var_431 = ((MR_Word) ((MR_hl_field(1, Var_430, (MR_Integer) 1))));
                            succeeded = (Var_431 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              Remainder_416 = ((MR_Word) ((MR_hl_field(1, Var_431, (MR_Integer) 0))));
                              Var_432 = ((MR_Word) ((MR_hl_field(1, Var_431, (MR_Integer) 1))));
                              succeeded = (Var_432 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                succeeded = ((MR_tag((MR_Word) StateVar0_415)) == (MR_Integer) 0);
                                if (succeeded)
                                {
                                  Var_433 = ((MR_Word) ((MR_hl_field(0, StateVar0_415, (MR_Integer) 0))));
                                  StateVarNameTerms_418 = ((MR_Word) ((MR_hl_field(0, StateVar0_415, (MR_Integer) 1))));
                                  StateVarContext_419 = ((MR_Word) ((MR_hl_field(0, StateVar0_415, (MR_Integer) 2))));
                                  succeeded = ((MR_tag((MR_Word) Var_433)) == (MR_Integer) 0);
                                  if (succeeded)
                                  {
                                    Var_434 = ((MR_String) ((MR_hl_field(0, Var_433, (MR_Integer) 0))));
                                    succeeded = (strcmp(Var_434, (MR_String) "!") == 0);
                                    if (succeeded)
                                    {
                                      succeeded = (StateVarNameTerms_418 != (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        Var_435 = ((MR_Word) ((MR_hl_field(1, StateVarNameTerms_418, (MR_Integer) 0))));
                                        Var_436 = ((MR_Word) ((MR_hl_field(1, StateVarNameTerms_418, (MR_Integer) 1))));
                                        succeeded = ((MR_tag((MR_Word) Var_435)) == (MR_Integer) 1);
                                        if (succeeded)
                                          succeeded = (Var_436 == (MR_Word) ((MR_Unsigned) 0U));
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
              }
              if (succeeded)
                hlds__make_hlds__goal_expr_to_goal__transform_state_var_field_assign_22_p_0(LocKind_17, Renaming_18, Purity_407, RHSTerm0_414, StateVarNameTerms_418, Remainder_416, FieldListContext_417, StateVarContext_419, Context_404, HLDSGoal_20, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_60_425, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              else
                hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_18_p_0(LocKind_17, Renaming_18, (MR_Integer) 1, ArgTerms1_408, Context_404, HLDSGoal_20, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_60_425, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
            }
            else
            if ((strcmp(Name_409, (MR_String) "=^") == 0))
              hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_18_p_0(LocKind_17, Renaming_18, (MR_Integer) 0, ArgTerms1_408, Context_404, HLDSGoal_20, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_60_425, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
            else
            {
              MR_Word LHSTerm_410;
              MR_Word RHSTerm_411;
              MR_Word Var_422;
              MR_Word Var_423;

              succeeded = (ArgTerms1_408 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                LHSTerm_410 = ((MR_Word) ((MR_hl_field(1, ArgTerms1_408, (MR_Integer) 0))));
                Var_422 = ((MR_Word) ((MR_hl_field(1, ArgTerms1_408, (MR_Integer) 1))));
                succeeded = (Var_422 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  RHSTerm_411 = ((MR_Word) ((MR_hl_field(1, Var_422, (MR_Integer) 0))));
                  Var_423 = ((MR_Word) ((MR_hl_field(1, Var_422, (MR_Integer) 1))));
                  succeeded = (Var_423 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word TransformedGoal_412;
                MR_Word Var_424;

                {
                  Var_424 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_424, 0) = ((MR_Box) (Context_404));
                  MR_hl_field(0, Var_424, 1) = ((MR_Box) (LHSTerm_410));
                  MR_hl_field(0, Var_424, 2) = ((MR_Box) (RHSTerm_411));
                  MR_hl_field(0, Var_424, 3) = (MR_Box) ((MR_Unsigned) (Purity_407));
                }
                {
                  TransformedGoal_412 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, TransformedGoal_412, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(3, TransformedGoal_412, 1) = ((MR_Box) (Context_404));
                  MR_hl_field(3, TransformedGoal_412, 2) = ((MR_Box) (Var_424));
                }
                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Renaming_18, TransformedGoal_412, HLDSGoal_20, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_60_425, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              }
              else
                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_call_std_18_p_0(Context_404, Renaming_18, SymName_405, ArgTerms1_408, Purity_407, HLDSGoal_20, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_60_425, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
            }
          else
            hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_call_std_18_p_0(Context_404, Renaming_18, SymName_405, ArgTerms1_408, Purity_407, HLDSGoal_20, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_60_425, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
          hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(LocKind_17, STATE_VARIABLE_SVarState_60_425, STATE_VARIABLE_SVarState_107);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Context_439 = ((MR_Word) ((MR_hl_field(2, Goal_19, (MR_Integer) 0))));
          MR_Word ConjunctA_440 = ((MR_Word) ((MR_hl_field(2, Goal_19, (MR_Integer) 1))));
          MR_Word ConjunctsB_441 = ((MR_Word) ((MR_hl_field(2, Goal_19, (MR_Integer) 2))));
          MR_Word HLDSConjunctsCordA_442;
          MR_Word HLDSConjunctsCord_443;
          MR_Word HLDSConjuncts_444;
          MR_Word GoalInfo_445;
          MR_Word Var_447;
          MR_Word STATE_VARIABLE_SVarState_48_448;
          MR_Word STATE_VARIABLE_SVarStore_49_449;
          MR_Word STATE_VARIABLE_VarSet_50_450;
          MR_Word STATE_VARIABLE_ModuleInfo_51_451;
          MR_Word STATE_VARIABLE_QualInfo_52_452;
          MR_Word STATE_VARIABLE_Specs_53_453;
          MR_Word Var_454;
          MR_Box conv13_HLDSConjunctsCord_443;
          MR_Box conv12_STATE_VARIABLE_SVarState_107;
          MR_Box conv11_STATE_VARIABLE_SVarStore_109;
          MR_Box conv10_STATE_VARIABLE_VarSet_111;
          MR_Box conv9_STATE_VARIABLE_ModuleInfo_113;
          MR_Box conv8_STATE_VARIABLE_QualInfo_115;
          MR_Box conv7_STATE_VARIABLE_Specs_117;

          Var_447 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
          hlds__make_hlds__goal_expr_to_goal__accumulate_plain_or_par_conjunct_18_p_0(LocKind_17, Renaming_18, (MR_Integer) 0, ConjunctA_440, Var_447, &HLDSConjunctsCordA_442, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_48_448, STATE_VARIABLE_SVarStore_0_108, &STATE_VARIABLE_SVarStore_49_449, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_50_450, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_51_451, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_52_452, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_53_453);
          {
            Var_454 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_454, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_5[0]));
            MR_hl_field(0, Var_454, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_1));
            MR_hl_field(0, Var_454, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, Var_454, 3) = ((MR_Box) (LocKind_17));
            MR_hl_field(0, Var_454, 4) = ((MR_Box) (Renaming_18));
            MR_hl_field(0, Var_454, 5) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__list__foldl7_16_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_store_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[2]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), Var_454, ConjunctsB_441, ((MR_Box) (HLDSConjunctsCordA_442)), &conv13_HLDSConjunctsCord_443, ((MR_Box) (STATE_VARIABLE_SVarState_48_448)), &conv12_STATE_VARIABLE_SVarState_107, ((MR_Box) (STATE_VARIABLE_SVarStore_49_449)), &conv11_STATE_VARIABLE_SVarStore_109, ((MR_Box) (STATE_VARIABLE_VarSet_50_450)), &conv10_STATE_VARIABLE_VarSet_111, ((MR_Box) (STATE_VARIABLE_ModuleInfo_51_451)), &conv9_STATE_VARIABLE_ModuleInfo_113, ((MR_Box) (STATE_VARIABLE_QualInfo_52_452)), &conv8_STATE_VARIABLE_QualInfo_115, ((MR_Box) (STATE_VARIABLE_Specs_53_453)), &conv7_STATE_VARIABLE_Specs_117);
          HLDSConjunctsCord_443 = ((MR_Word) (conv13_HLDSConjunctsCord_443));
          *STATE_VARIABLE_SVarState_107 = ((MR_Word) (conv12_STATE_VARIABLE_SVarState_107));
          *STATE_VARIABLE_SVarStore_109 = ((MR_Word) (conv11_STATE_VARIABLE_SVarStore_109));
          *STATE_VARIABLE_VarSet_111 = ((MR_Word) (conv10_STATE_VARIABLE_VarSet_111));
          *STATE_VARIABLE_ModuleInfo_113 = ((MR_Word) (conv9_STATE_VARIABLE_ModuleInfo_113));
          *STATE_VARIABLE_QualInfo_115 = ((MR_Word) (conv8_STATE_VARIABLE_QualInfo_115));
          *STATE_VARIABLE_Specs_117 = ((MR_Word) (conv7_STATE_VARIABLE_Specs_117));
          HLDSConjuncts_444 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HLDSConjunctsCord_443);
          hlds__hlds_goal__goal_info_init_2_p_0(Context_439, &GoalInfo_445);
          hlds__hlds_goal__conj_list_to_goal_3_p_0(HLDSConjuncts_444, GoalInfo_445, HLDSGoal_20);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Goal_19, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Context_301 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 1))));
              MR_Word GoalInfo_303;

              hlds__hlds_goal__goal_info_init_2_p_0(Context_301, &GoalInfo_303);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_2[0])));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_303));
              }
              *STATE_VARIABLE_SVarState_107 = STATE_VARIABLE_SVarState_0_106;
              *STATE_VARIABLE_SVarStore_109 = STATE_VARIABLE_SVarStore_0_108;
              *STATE_VARIABLE_VarSet_111 = STATE_VARIABLE_VarSet_0_110;
              *STATE_VARIABLE_ModuleInfo_113 = STATE_VARIABLE_ModuleInfo_0_112;
              *STATE_VARIABLE_QualInfo_115 = STATE_VARIABLE_QualInfo_0_114;
              *STATE_VARIABLE_Specs_117 = STATE_VARIABLE_Specs_0_116;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Context_564 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 1))));
              MR_Word Vars0_565 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 2))));
              MR_Word StateVars0_566 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 3))));
              MR_Word Cond_567 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 4))));
              MR_Word Then_568 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 5))));
              MR_Word Else_569 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 6))));
              MR_Word Vars_571;
              MR_Word StateVars_572;
              MR_Word BeforeCondSVarState_573;
              MR_Word HLDSCond_574;
              MR_Word AfterCondSVarState_575;
              MR_Word HLDSThen0_576;
              MR_Word AfterThenSVarState0_577;
              MR_Word Globals_578;
              MR_Word ModuleName_579;
              MR_Word AfterThenSVarState_580;
              MR_Word HLDSElse0_581;
              MR_Word AfterElseSVarState_582;
              MR_Word HLDSThen_583;
              MR_Word HLDSElse_584;
              MR_Word GoalExpr_585;
              MR_Word GoalInfo_586;
              MR_Word STATE_VARIABLE_Specs_64_589;
              MR_Word STATE_VARIABLE_SVarStore_65_590;
              MR_Word STATE_VARIABLE_VarSet_66_591;
              MR_Word STATE_VARIABLE_ModuleInfo_67_592;
              MR_Word STATE_VARIABLE_QualInfo_68_593;
              MR_Word STATE_VARIABLE_Specs_69_594;
              MR_Word STATE_VARIABLE_SVarStore_70_595;
              MR_Word STATE_VARIABLE_VarSet_71_596;
              MR_Word STATE_VARIABLE_ModuleInfo_72_597;
              MR_Word STATE_VARIABLE_QualInfo_73_598;
              MR_Word STATE_VARIABLE_Specs_74_599;
              MR_Word STATE_VARIABLE_SVarStore_75_600;
              MR_Word STATE_VARIABLE_VarSet_76_601;
              MR_Word STATE_VARIABLE_Specs_79_602;

              parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_18, Vars0_565, &Vars_571);
              parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_18, StateVars0_566, &StateVars_572);
              hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(Context_564, STATE_VARIABLE_VarSet_0_110, StateVars_572, STATE_VARIABLE_SVarState_0_106, &BeforeCondSVarState_573, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_64_589);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Renaming_18, Cond_567, &HLDSCond_574, BeforeCondSVarState_573, &AfterCondSVarState_575, STATE_VARIABLE_SVarStore_0_108, &STATE_VARIABLE_SVarStore_65_590, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_66_591, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_67_592, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_68_593, STATE_VARIABLE_Specs_64_589, &STATE_VARIABLE_Specs_69_594);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Renaming_18, Then_568, &HLDSThen0_576, AfterCondSVarState_575, &AfterThenSVarState0_577, STATE_VARIABLE_SVarStore_65_590, &STATE_VARIABLE_SVarStore_70_595, STATE_VARIABLE_VarSet_66_591, &STATE_VARIABLE_VarSet_71_596, STATE_VARIABLE_ModuleInfo_67_592, &STATE_VARIABLE_ModuleInfo_72_597, STATE_VARIABLE_QualInfo_68_593, &STATE_VARIABLE_QualInfo_73_598, STATE_VARIABLE_Specs_69_594, &STATE_VARIABLE_Specs_74_599);
              hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_72_597, &Globals_578);
              hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_72_597, &ModuleName_579);
              hlds__make_hlds__state_var__svar_finish_local_state_vars_6_p_0(Globals_578, ModuleName_579, StateVars_572, STATE_VARIABLE_SVarState_0_106, AfterThenSVarState0_577, &AfterThenSVarState_580);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Renaming_18, Else_569, &HLDSElse0_581, STATE_VARIABLE_SVarState_0_106, &AfterElseSVarState_582, STATE_VARIABLE_SVarStore_70_595, &STATE_VARIABLE_SVarStore_75_600, STATE_VARIABLE_VarSet_71_596, &STATE_VARIABLE_VarSet_76_601, STATE_VARIABLE_ModuleInfo_72_597, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_73_598, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_74_599, &STATE_VARIABLE_Specs_79_602);
              hlds__make_hlds__state_var__svar_finish_if_then_else_20_p_0(Globals_578, ModuleName_579, LocKind_17, Context_564, StateVars_572, HLDSThen0_576, &HLDSThen_583, HLDSElse0_581, &HLDSElse_584, STATE_VARIABLE_SVarState_0_106, AfterCondSVarState_575, AfterThenSVarState_580, AfterElseSVarState_582, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_VarSet_76_601, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_SVarStore_75_600, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_Specs_79_602, STATE_VARIABLE_Specs_117);
              {
                GoalExpr_585 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_585, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, GoalExpr_585, 1) = ((MR_Box) (Vars_571));
                MR_hl_field(3, GoalExpr_585, 2) = ((MR_Box) (HLDSCond_574));
                MR_hl_field(3, GoalExpr_585, 3) = ((MR_Box) (HLDSThen_583));
                MR_hl_field(3, GoalExpr_585, 4) = ((MR_Box) (HLDSElse_584));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_564, &GoalInfo_586);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_585));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_586));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Context_488 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 1))));
              MR_Word Disjunct1_489 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 2))));
              MR_Word Disjunct2_490 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 3))));
              MR_Word Disjuncts3plus_491 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 4))));
              MR_Word RevDisjunctsSVarStates1_492;
              MR_Word RevDisjunctsSVarStates2_493;
              MR_Word RevDisjunctsSVarStates_494;
              MR_Word DisjunctsSVarStates_495;
              MR_Word Disjuncts_496;
              MR_Word GoalInfo_497;
              MR_Word STATE_VARIABLE_SVarStore_52_499;
              MR_Word STATE_VARIABLE_VarSet_53_500;
              MR_Word STATE_VARIABLE_ModuleInfo_54_501;
              MR_Word STATE_VARIABLE_QualInfo_55_502;
              MR_Word STATE_VARIABLE_Specs_56_503;
              MR_Word STATE_VARIABLE_SVarStore_57_504;
              MR_Word STATE_VARIABLE_VarSet_58_505;
              MR_Word STATE_VARIABLE_ModuleInfo_59_506;
              MR_Word STATE_VARIABLE_QualInfo_60_507;
              MR_Word STATE_VARIABLE_Specs_61_508;
              MR_Word Var_509;
              MR_Word STATE_VARIABLE_SVarStore_63_510;
              MR_Word STATE_VARIABLE_VarSet_64_511;
              MR_Box conv25_RevDisjunctsSVarStates_494;
              MR_Box conv24_STATE_VARIABLE_SVarStore_63_510;
              MR_Box conv23_STATE_VARIABLE_VarSet_64_511;
              MR_Box conv22_STATE_VARIABLE_ModuleInfo_113;
              MR_Box conv21_STATE_VARIABLE_QualInfo_115;
              MR_Box conv20_STATE_VARIABLE_Specs_117;

              hlds__make_hlds__goal_expr_to_goal__accumulate_disjunct_16_p_0(LocKind_17, Renaming_18, STATE_VARIABLE_SVarState_0_106, Disjunct1_489, (MR_Word) ((MR_Unsigned) 0U), &RevDisjunctsSVarStates1_492, STATE_VARIABLE_SVarStore_0_108, &STATE_VARIABLE_SVarStore_52_499, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_53_500, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_54_501, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_55_502, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_56_503);
              hlds__make_hlds__goal_expr_to_goal__accumulate_disjunct_16_p_0(LocKind_17, Renaming_18, STATE_VARIABLE_SVarState_0_106, Disjunct2_490, RevDisjunctsSVarStates1_492, &RevDisjunctsSVarStates2_493, STATE_VARIABLE_SVarStore_52_499, &STATE_VARIABLE_SVarStore_57_504, STATE_VARIABLE_VarSet_53_500, &STATE_VARIABLE_VarSet_58_505, STATE_VARIABLE_ModuleInfo_54_501, &STATE_VARIABLE_ModuleInfo_59_506, STATE_VARIABLE_QualInfo_55_502, &STATE_VARIABLE_QualInfo_60_507, STATE_VARIABLE_Specs_56_503, &STATE_VARIABLE_Specs_61_508);
              {
                Var_509 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_509, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_6[0]));
                MR_hl_field(0, Var_509, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_2));
                MR_hl_field(0, Var_509, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, Var_509, 3) = ((MR_Box) (LocKind_17));
                MR_hl_field(0, Var_509, 4) = ((MR_Box) (Renaming_18));
                MR_hl_field(0, Var_509, 5) = ((MR_Box) (STATE_VARIABLE_SVarState_0_106));
              }
              mercury__list__foldl6_14_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[4]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_store_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[2]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), Var_509, Disjuncts3plus_491, ((MR_Box) (RevDisjunctsSVarStates2_493)), &conv25_RevDisjunctsSVarStates_494, ((MR_Box) (STATE_VARIABLE_SVarStore_57_504)), &conv24_STATE_VARIABLE_SVarStore_63_510, ((MR_Box) (STATE_VARIABLE_VarSet_58_505)), &conv23_STATE_VARIABLE_VarSet_64_511, ((MR_Box) (STATE_VARIABLE_ModuleInfo_59_506)), &conv22_STATE_VARIABLE_ModuleInfo_113, ((MR_Box) (STATE_VARIABLE_QualInfo_60_507)), &conv21_STATE_VARIABLE_QualInfo_115, ((MR_Box) (STATE_VARIABLE_Specs_61_508)), &conv20_STATE_VARIABLE_Specs_117);
              RevDisjunctsSVarStates_494 = ((MR_Word) (conv25_RevDisjunctsSVarStates_494));
              STATE_VARIABLE_SVarStore_63_510 = ((MR_Word) (conv24_STATE_VARIABLE_SVarStore_63_510));
              STATE_VARIABLE_VarSet_64_511 = ((MR_Word) (conv23_STATE_VARIABLE_VarSet_64_511));
              *STATE_VARIABLE_ModuleInfo_113 = ((MR_Word) (conv22_STATE_VARIABLE_ModuleInfo_113));
              *STATE_VARIABLE_QualInfo_115 = ((MR_Word) (conv21_STATE_VARIABLE_QualInfo_115));
              *STATE_VARIABLE_Specs_117 = ((MR_Word) (conv20_STATE_VARIABLE_Specs_117));
              mercury__list__reverse_2_p_0((MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_hlds_goal_svar_state_0), RevDisjunctsSVarStates_494, &DisjunctsSVarStates_495);
              hlds__make_hlds__state_var__svar_finish_disjunction_8_p_0(DisjunctsSVarStates_495, &Disjuncts_496, STATE_VARIABLE_VarSet_64_511, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_63_510, STATE_VARIABLE_SVarStore_109);
              hlds__hlds_goal__goal_info_init_2_p_0(Context_488, &GoalInfo_497);
              hlds__hlds_goal__disj_list_to_goal_3_p_0(Disjuncts_496, GoalInfo_497, HLDSGoal_20);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Context_604 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 1))));
              MR_Word SubGoal_605 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 2))));
              MR_Word HLDSSubGoal_607;
              MR_Word GoalExpr_609;
              MR_Word GoalInfo_610;
              MR_Word Var_608;

              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Renaming_18, SubGoal_605, &HLDSSubGoal_607, STATE_VARIABLE_SVarState_0_106, &Var_608, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              *STATE_VARIABLE_SVarState_107 = STATE_VARIABLE_SVarState_0_106;
              GoalExpr_609 = (MR_Word) ((MR_Word) (HLDSSubGoal_607));
              hlds__hlds_goal__goal_info_init_2_p_0(Context_604, &GoalInfo_610);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_609));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_610));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Context_27 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 1))));
              MR_Word GoalInfo_29;

              hlds__hlds_goal__goal_info_init_2_p_0(Context_27, &GoalInfo_29);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[6])));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_29));
              }
              *STATE_VARIABLE_SVarState_107 = STATE_VARIABLE_SVarState_0_106;
              *STATE_VARIABLE_SVarStore_109 = STATE_VARIABLE_SVarStore_0_108;
              *STATE_VARIABLE_VarSet_111 = STATE_VARIABLE_VarSet_0_110;
              *STATE_VARIABLE_ModuleInfo_113 = STATE_VARIABLE_ModuleInfo_0_112;
              *STATE_VARIABLE_QualInfo_115 = STATE_VARIABLE_QualInfo_0_114;
              *STATE_VARIABLE_Specs_117 = STATE_VARIABLE_Specs_0_116;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Context_611 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 1))));
              MR_Word ConjunctA_612 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 2))));
              MR_Word ConjunctsB_613 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 3))));
              MR_Word HLDSConjunctsCordA_614;
              MR_Word HLDSConjunctsCord_615;
              MR_Word HLDSConjuncts_616;
              MR_Word GoalInfo_617;
              MR_Word Var_619;
              MR_Word STATE_VARIABLE_SVarState_48_620;
              MR_Word STATE_VARIABLE_SVarStore_49_621;
              MR_Word STATE_VARIABLE_VarSet_50_622;
              MR_Word STATE_VARIABLE_ModuleInfo_51_623;
              MR_Word STATE_VARIABLE_QualInfo_52_624;
              MR_Word STATE_VARIABLE_Specs_53_625;
              MR_Word Var_626;
              MR_Box conv39_HLDSConjunctsCord_615;
              MR_Box conv38_STATE_VARIABLE_SVarState_107;
              MR_Box conv37_STATE_VARIABLE_SVarStore_109;
              MR_Box conv36_STATE_VARIABLE_VarSet_111;
              MR_Box conv35_STATE_VARIABLE_ModuleInfo_113;
              MR_Box conv34_STATE_VARIABLE_QualInfo_115;
              MR_Box conv33_STATE_VARIABLE_Specs_117;

              Var_619 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
              hlds__make_hlds__goal_expr_to_goal__accumulate_plain_or_par_conjunct_18_p_0(LocKind_17, Renaming_18, (MR_Integer) 1, ConjunctA_612, Var_619, &HLDSConjunctsCordA_614, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_48_620, STATE_VARIABLE_SVarStore_0_108, &STATE_VARIABLE_SVarStore_49_621, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_50_622, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_51_623, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_52_624, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_53_625);
              {
                Var_626 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_626, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_5[0]));
                MR_hl_field(0, Var_626, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_3));
                MR_hl_field(0, Var_626, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, Var_626, 3) = ((MR_Box) (LocKind_17));
                MR_hl_field(0, Var_626, 4) = ((MR_Box) (Renaming_18));
                MR_hl_field(0, Var_626, 5) = ((MR_Box) ((MR_Integer) 1));
              }
              mercury__list__foldl7_16_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_store_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[2]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), Var_626, ConjunctsB_613, ((MR_Box) (HLDSConjunctsCordA_614)), &conv39_HLDSConjunctsCord_615, ((MR_Box) (STATE_VARIABLE_SVarState_48_620)), &conv38_STATE_VARIABLE_SVarState_107, ((MR_Box) (STATE_VARIABLE_SVarStore_49_621)), &conv37_STATE_VARIABLE_SVarStore_109, ((MR_Box) (STATE_VARIABLE_VarSet_50_622)), &conv36_STATE_VARIABLE_VarSet_111, ((MR_Box) (STATE_VARIABLE_ModuleInfo_51_623)), &conv35_STATE_VARIABLE_ModuleInfo_113, ((MR_Box) (STATE_VARIABLE_QualInfo_52_624)), &conv34_STATE_VARIABLE_QualInfo_115, ((MR_Box) (STATE_VARIABLE_Specs_53_625)), &conv33_STATE_VARIABLE_Specs_117);
              HLDSConjunctsCord_615 = ((MR_Word) (conv39_HLDSConjunctsCord_615));
              *STATE_VARIABLE_SVarState_107 = ((MR_Word) (conv38_STATE_VARIABLE_SVarState_107));
              *STATE_VARIABLE_SVarStore_109 = ((MR_Word) (conv37_STATE_VARIABLE_SVarStore_109));
              *STATE_VARIABLE_VarSet_111 = ((MR_Word) (conv36_STATE_VARIABLE_VarSet_111));
              *STATE_VARIABLE_ModuleInfo_113 = ((MR_Word) (conv35_STATE_VARIABLE_ModuleInfo_113));
              *STATE_VARIABLE_QualInfo_115 = ((MR_Word) (conv34_STATE_VARIABLE_QualInfo_115));
              *STATE_VARIABLE_Specs_117 = ((MR_Word) (conv33_STATE_VARIABLE_Specs_117));
              HLDSConjuncts_616 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HLDSConjunctsCord_615);
              hlds__hlds_goal__goal_info_init_2_p_0(Context_611, &GoalInfo_617);
              hlds__hlds_goal__par_conj_list_to_goal_3_p_0(HLDSConjuncts_616, GoalInfo_617, HLDSGoal_20);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word QuantType_637 = ((((MR_Unsigned) ((MR_hl_field(3, Goal_19, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              MR_Word VarsKind_638 = ((MR_Unsigned) ((MR_hl_field(3, Goal_19, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Context_639 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 2))));
              MR_Word Vars0_640 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 3))));
              MR_Word SubGoal_641 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 4))));

              switch (QuantType_637) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word TransformedGoal_642;
                    MR_Word Var_655;
                    MR_Word Var_657;
                    MR_Word next_value_of_Goal_19;

                    {
                      Var_657 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_657, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                      MR_hl_field(3, Var_657, 1) = ((MR_Box) (Context_639));
                      MR_hl_field(3, Var_657, 2) = ((MR_Box) (SubGoal_641));
                    }
                    {
                      Var_655 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_655, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(3, Var_655, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) (VarsKind_638)));
                      MR_hl_field(3, Var_655, 2) = ((MR_Box) (Context_639));
                      MR_hl_field(3, Var_655, 3) = ((MR_Box) (Vars0_640));
                      MR_hl_field(3, Var_655, 4) = ((MR_Box) (Var_657));
                    }
                    {
                      TransformedGoal_642 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, TransformedGoal_642, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                      MR_hl_field(3, TransformedGoal_642, 1) = ((MR_Box) (Context_639));
                      MR_hl_field(3, TransformedGoal_642, 2) = ((MR_Box) (Var_655));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_Goal_19 = TransformedGoal_642;
                    Goal_19 = next_value_of_Goal_19;
                    continue;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word Vars_643;
                    MR_Word HLDSSubGoal_644;
                    MR_Word Reason_645;
                    MR_Word GoalExpr_653;
                    MR_Word GoalInfo_654;

                    parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_18, Vars0_640, &Vars_643);
                    switch (VarsKind_638) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Renaming_18, SubGoal_641, &HLDSSubGoal_644, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
                          {
                            Reason_645 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, Reason_645, 0) = ((MR_Box) (Vars_643));
                            MR_hl_field(0, Reason_645, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word BeforeInsideSVarState_648;
                          MR_Word AfterInsideSVarState_649;
                          MR_Word Globals_650;
                          MR_Word ModuleName_651;
                          MR_Word STATE_VARIABLE_Specs_74_660;

                          hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(Context_639, STATE_VARIABLE_VarSet_0_110, Vars_643, STATE_VARIABLE_SVarState_0_106, &BeforeInsideSVarState_648, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_74_660);
                          hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Renaming_18, SubGoal_641, &HLDSSubGoal_644, BeforeInsideSVarState_648, &AfterInsideSVarState_649, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_74_660, STATE_VARIABLE_Specs_117);
                          hlds__hlds_module__module_info_get_globals_2_p_0(*STATE_VARIABLE_ModuleInfo_113, &Globals_650);
                          hlds__hlds_module__module_info_get_name_2_p_0(*STATE_VARIABLE_ModuleInfo_113, &ModuleName_651);
                          hlds__make_hlds__state_var__svar_finish_local_state_vars_6_p_0(Globals_650, ModuleName_651, Vars_643, STATE_VARIABLE_SVarState_0_106, AfterInsideSVarState_649, STATE_VARIABLE_SVarState_107);
                          Reason_645 = (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[34]);
                        }
                        break;
                    }
                    {
                      GoalExpr_653 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, GoalExpr_653, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(3, GoalExpr_653, 1) = ((MR_Box) (Reason_645));
                      MR_hl_field(3, GoalExpr_653, 2) = ((MR_Box) (HLDSSubGoal_644));
                    }
                    hlds__hlds_goal__goal_info_init_2_p_0(Context_639, &GoalInfo_654);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *HLDSGoal_20 = base;
                      MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_653));
                      MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_654));
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Purity_67 = ((MR_Unsigned) ((MR_hl_field(3, Goal_19, (MR_Integer) 2))) & (MR_Integer) 3);
              MR_Word SubGoal_68 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 3))));
              MR_Word Reason_69;
              MR_Word HLDSSubGoal_71;
              MR_Word Context_242 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 1))));
              MR_Word GoalExpr_243;
              MR_Word GoalInfo_244;

              {
                Reason_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Reason_69, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Reason_69, 1) = (MR_Box) ((MR_Unsigned) (Purity_67));
              }
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Renaming_18, SubGoal_68, &HLDSSubGoal_71, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              {
                GoalExpr_243 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_243, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_243, 1) = ((MR_Box) (Reason_69));
                MR_hl_field(3, GoalExpr_243, 2) = ((MR_Box) (HLDSSubGoal_71));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_242, &GoalInfo_244);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_243));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_244));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word Vars_274 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 2))));
              MR_Word StateVars_275 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 3))));
              MR_Word DotSVars_276 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 4))));
              MR_Word ColonSVars_277 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 5))));
              MR_Word PromiseVars_279;
              MR_Word Context_280 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 1))));
              MR_Word GoalExpr_281;
              MR_Word GoalInfo_282;
              MR_Word SubGoal_283 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 6))));
              MR_Word Reason_284;
              MR_Word HLDSSubGoal_285;

              hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(LocKind_17, Renaming_18, Vars_274, StateVars_275, DotSVars_276, ColonSVars_277, Context_280, &PromiseVars_279, SubGoal_283, &HLDSSubGoal_285, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              {
                Reason_284 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Reason_284, 0) = ((MR_Box) (PromiseVars_279));
                MR_hl_field(2, Reason_284, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              {
                GoalExpr_281 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_281, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_281, 1) = ((MR_Box) (Reason_284));
                MR_hl_field(3, GoalExpr_281, 2) = ((MR_Box) (HLDSSubGoal_285));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_280, &GoalInfo_282);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_281));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_282));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word Vars_262 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 2))));
              MR_Word StateVars_263 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 3))));
              MR_Word DotSVars_264 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 4))));
              MR_Word ColonSVars_265 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 5))));
              MR_Word PromiseVars_267;
              MR_Word Context_268 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 1))));
              MR_Word GoalExpr_269;
              MR_Word GoalInfo_270;
              MR_Word SubGoal_271 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 6))));
              MR_Word Reason_272;
              MR_Word HLDSSubGoal_273;

              hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(LocKind_17, Renaming_18, Vars_262, StateVars_263, DotSVars_264, ColonSVars_265, Context_268, &PromiseVars_267, SubGoal_271, &HLDSSubGoal_273, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              {
                Reason_272 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Reason_272, 0) = ((MR_Box) (PromiseVars_267));
                MR_hl_field(2, Reason_272, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              }
              {
                GoalExpr_269 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_269, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_269, 1) = ((MR_Box) (Reason_272));
                MR_hl_field(3, GoalExpr_269, 2) = ((MR_Box) (HLDSSubGoal_273));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_268, &GoalInfo_270);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_269));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_270));
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Vars_74 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 2))));
              MR_Word StateVars_75 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 3))));
              MR_Word DotSVars_76 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 4))));
              MR_Word ColonSVars_77 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 5))));
              MR_Word PromiseVars_79;
              MR_Word Context_256 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 1))));
              MR_Word GoalExpr_257;
              MR_Word GoalInfo_258;
              MR_Word SubGoal_259 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 6))));
              MR_Word Reason_260;
              MR_Word HLDSSubGoal_261;

              hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(LocKind_17, Renaming_18, Vars_74, StateVars_75, DotSVars_76, ColonSVars_77, Context_256, &PromiseVars_79, SubGoal_259, &HLDSSubGoal_261, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              {
                Reason_260 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Reason_260, 0) = ((MR_Box) (PromiseVars_79));
                MR_hl_field(2, Reason_260, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
              }
              {
                GoalExpr_257 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_257, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_257, 1) = ((MR_Box) (Reason_260));
                MR_hl_field(3, GoalExpr_257, 2) = ((MR_Box) (HLDSSubGoal_261));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_256, &GoalInfo_258);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_257));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_258));
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word Detism_70 = ((MR_Unsigned) ((MR_hl_field(3, Goal_19, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_Word SubGoal_286 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 3))));
              MR_Word Reason_287;
              MR_Word HLDSSubGoal_288;
              MR_Word Context_289 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 1))));
              MR_Word GoalExpr_290;
              MR_Word GoalInfo_291;

              {
                Reason_287 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Reason_287, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Reason_287, 1) = (MR_Box) ((MR_Unsigned) (Detism_70));
              }
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Renaming_18, SubGoal_286, &HLDSSubGoal_288, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              {
                GoalExpr_290 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_290, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_290, 1) = ((MR_Box) (Reason_287));
                MR_hl_field(3, GoalExpr_290, 2) = ((MR_Box) (HLDSSubGoal_288));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_289, &GoalInfo_291);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_290));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_291));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word PODVar0_72 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 2))));
              MR_Word Var_73;
              MR_Word STATE_VARIABLE_SVarState_192_192;
              MR_Word STATE_VARIABLE_VarSet_193_193;
              MR_Word STATE_VARIABLE_Specs_194_194;
              MR_Word Context_249 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 1))));
              MR_Word GoalExpr_250;
              MR_Word GoalInfo_251;
              MR_Word SubGoal_252 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 3))));
              MR_Word Reason_253;
              MR_Word HLDSSubGoal_255;

              hlds__make_hlds__goal_expr_to_goal__rename_and_maybe_expand_dot_var_11_p_0(Context_249, (MR_Integer) 1, Renaming_18, PODVar0_72, &Var_73, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_192_192, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_193_193, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_194_194);
              {
                Reason_253 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Reason_253, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, Reason_253, 1) = ((MR_Box) (Var_73));
              }
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Renaming_18, SubGoal_252, &HLDSSubGoal_255, STATE_VARIABLE_SVarState_192_192, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_193_193, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_194_194, STATE_VARIABLE_Specs_117);
              {
                GoalExpr_250 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_250, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_250, 1) = ((MR_Box) (Reason_253));
                MR_hl_field(3, GoalExpr_250, 2) = ((MR_Box) (HLDSSubGoal_255));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_249, &GoalInfo_251);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_250));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_251));
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word Detism_245 = ((MR_Unsigned) ((MR_hl_field(3, Goal_19, (MR_Integer) 3))) & (MR_Integer) 7);
              MR_Word PODVar0_246 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 2))));
              MR_Word Var_247;
              MR_Word STATE_VARIABLE_SVarState_192_292;
              MR_Word STATE_VARIABLE_VarSet_193_293;
              MR_Word STATE_VARIABLE_Specs_194_294;
              MR_Word Context_295 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 1))));
              MR_Word GoalExpr_296;
              MR_Word GoalInfo_297;
              MR_Word SubGoal_298 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 4))));
              MR_Word Reason_299;
              MR_Word HLDSSubGoal_300;

              hlds__make_hlds__goal_expr_to_goal__rename_and_maybe_expand_dot_var_11_p_0(Context_295, (MR_Integer) 1, Renaming_18, PODVar0_246, &Var_247, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_192_292, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_193_293, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_194_294);
              {
                Reason_299 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Reason_299, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, Reason_299, 1) = ((MR_Box) (Var_247));
                MR_hl_field(3, Reason_299, 2) = (MR_Box) ((MR_Unsigned) (Detism_245));
              }
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Renaming_18, SubGoal_298, &HLDSSubGoal_300, STATE_VARIABLE_SVarState_192_292, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_193_293, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_194_294, STATE_VARIABLE_Specs_117);
              {
                GoalExpr_296 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_296, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_296, 1) = ((MR_Box) (Reason_299));
                MR_hl_field(3, GoalExpr_296, 2) = ((MR_Box) (HLDSSubGoal_300));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_295, &GoalInfo_297);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_296));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_297));
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word Context_465 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 1))));
              MR_Word HeadWarning_466 = ((MR_Unsigned) ((MR_hl_field(3, Goal_19, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_Word TailWarnings_467 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 3))));
              MR_Word SubGoal_468 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 4))));
              MR_Word HLDSSubGoal_472;
              MR_Word GoalExpr_475;
              MR_Word GoalInfo_476;
              MR_Word Var_486;

              succeeded = (HeadWarning_466 == (MR_Integer) 2);
              if (!(succeeded))
                succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), ((MR_Box) ((MR_Integer) 2)), TailWarnings_467);
              if (succeeded)
              {
                MR_Word Globals0_469;
                MR_Word WarnOccursCheck0_470;
                MR_Word Globals1_471;
                MR_Word Globals2_473;
                MR_Word Globals3_474;
                MR_Word STATE_VARIABLE_ModuleInfo_56_482;
                MR_Word STATE_VARIABLE_ModuleInfo_60_483;
                MR_Word Var_485;

                hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_112, &Globals0_469);
                libs__globals__lookup_bool_option_3_p_0(Globals0_469, (MR_Integer) 63, &WarnOccursCheck0_470);
                libs__globals__set_option_4_p_0((MR_Integer) 63, (MR_Word) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_3[5])), Globals0_469, &Globals1_471);
                hlds__hlds_module__module_info_set_globals_3_p_0(Globals1_471, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_56_482);
                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Renaming_18, SubGoal_468, &HLDSSubGoal_472, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_56_482, &STATE_VARIABLE_ModuleInfo_60_483, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
                hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_60_483, &Globals2_473);
                {
                  Var_485 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_485, 0) = (MR_Box) ((MR_Unsigned) (WarnOccursCheck0_470));
                }
                libs__globals__set_option_4_p_0((MR_Integer) 63, Var_485, Globals2_473, &Globals3_474);
                hlds__hlds_module__module_info_set_globals_3_p_0(Globals3_474, STATE_VARIABLE_ModuleInfo_60_483, STATE_VARIABLE_ModuleInfo_113);
              }
              else
                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Renaming_18, SubGoal_468, &HLDSSubGoal_472, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              {
                Var_486 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_486, 0) = (MR_Box) ((MR_Unsigned) (HeadWarning_466));
                MR_hl_field(1, Var_486, 1) = ((MR_Box) (TailWarnings_467));
              }
              {
                GoalExpr_475 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_475, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_475, 1) = ((MR_Box) (Var_486));
                MR_hl_field(3, GoalExpr_475, 2) = ((MR_Box) (HLDSSubGoal_472));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_465, &GoalInfo_476);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_475));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_476));
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word Context_664 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 1))));
              MR_Word MaybeCompileTime_665 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 2))));
              MR_Word MaybeRunTime_666 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 3))));
              MR_Word MaybeIO0_667 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 4))));
              MR_Word Mutables0_668 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 5))));
              MR_Word SubGoal0_669 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 6))));
              MR_Word MutableHLDSs_670;
              MR_Word MutableStateVars_671;
              MR_Word MutableGetGoals_672;
              MR_Word MutableSetGoals_673;
              MR_Word MaybeIOHLDS_679;
              MR_Word StateVars_680;
              MR_Word GetGoals_681;
              MR_Word SetGoals_682;
              MR_Word SubGoal1_683;
              MR_Word BeforeInsideSVarState_684;
              MR_Word HLDSSubGoal_685;
              MR_Word AfterInsideSVarState_686;
              MR_Word Globals_687;
              MR_Word ModuleName_688;
              MR_Word Reason_689;
              MR_Word GoalExpr_690;
              MR_Word GoalInfo_691;
              MR_Word Var_692;
              MR_Word Var_693;
              MR_Word Var_694;
              MR_Word Var_695;
              MR_Word STATE_VARIABLE_Specs_74_697;
              MR_Word STATE_VARIABLE_QualInfo_78_698;

              {
                Var_692 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_692, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_7[0]));
                MR_hl_field(0, Var_692, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_4));
                MR_hl_field(0, Var_692, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, Var_692, 3) = ((MR_Box) (Context_664));
                MR_hl_field(0, Var_692, 4) = ((MR_Box) (Renaming_18));
                MR_hl_field(0, Var_692, 5) = ((MR_Box) (STATE_VARIABLE_VarSet_0_110));
              }
              mercury__list__map4_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[5]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), Var_692, Mutables0_668, &MutableHLDSs_670, &MutableStateVars_671, &MutableGetGoals_672, &MutableSetGoals_673);
              if ((MaybeIO0_667 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MaybeIOHLDS_679 = (MR_Word) ((MR_Unsigned) 0U);
                StateVars_680 = MutableStateVars_671;
                GetGoals_681 = MutableGetGoals_672;
                SetGoals_682 = MutableSetGoals_673;
              }
              else
              {
                MR_Word IOStateVar0_674 = ((MR_Word) ((MR_hl_field(1, MaybeIO0_667, (MR_Integer) 0))));
                MR_Word IOStateVar_675;
                MR_String IOStateVarName_676;
                MR_Word IOGetGoal_677;
                MR_Word IOSetGoal_678;

                hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_8_p_0(Context_664, Renaming_18, STATE_VARIABLE_VarSet_0_110, IOStateVar0_674, &IOStateVar_675, &IOStateVarName_676, &IOGetGoal_677, &IOSetGoal_678);
                {
                  MaybeIOHLDS_679 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MaybeIOHLDS_679, 0) = ((MR_Box) (IOStateVarName_676));
                }
                {
                  StateVars_680 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, StateVars_680, 0) = ((MR_Box) (IOStateVar_675));
                  MR_hl_field(1, StateVars_680, 1) = ((MR_Box) (MutableStateVars_671));
                }
                {
                  GetGoals_681 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, GetGoals_681, 0) = ((MR_Box) (IOGetGoal_677));
                  MR_hl_field(1, GetGoals_681, 1) = ((MR_Box) (MutableGetGoals_672));
                }
                {
                  SetGoals_682 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, SetGoals_682, 0) = ((MR_Box) (IOSetGoal_678));
                  MR_hl_field(1, SetGoals_682, 1) = ((MR_Box) (MutableSetGoals_673));
                }
              }
              {
                Var_695 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_695, 0) = ((MR_Box) (SubGoal0_669));
                MR_hl_field(1, Var_695, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_694 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), Var_695, SetGoals_682);
              Var_693 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), GetGoals_681, Var_694);
              SubGoal1_683 = parse_tree__prog_util__goal_list_to_conj_2_f_0(Context_664, Var_693);
              hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(Context_664, STATE_VARIABLE_VarSet_0_110, StateVars_680, STATE_VARIABLE_SVarState_0_106, &BeforeInsideSVarState_684, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_74_697);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Renaming_18, SubGoal1_683, &HLDSSubGoal_685, BeforeInsideSVarState_684, &AfterInsideSVarState_686, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_78_698, STATE_VARIABLE_Specs_74_697, STATE_VARIABLE_Specs_117);
              hlds__hlds_module__module_info_get_globals_2_p_0(*STATE_VARIABLE_ModuleInfo_113, &Globals_687);
              hlds__hlds_module__module_info_get_name_2_p_0(*STATE_VARIABLE_ModuleInfo_113, &ModuleName_688);
              hlds__make_hlds__state_var__svar_finish_local_state_vars_6_p_0(Globals_687, ModuleName_688, StateVars_680, STATE_VARIABLE_SVarState_0_106, AfterInsideSVarState_686, STATE_VARIABLE_SVarState_107);
              hlds__make_hlds__qual_info__qual_info_set_found_trace_goal_3_p_0((MR_Integer) 1, STATE_VARIABLE_QualInfo_78_698, STATE_VARIABLE_QualInfo_115);
              {
                Reason_689 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Reason_689, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(3, Reason_689, 1) = ((MR_Box) (MaybeCompileTime_665));
                MR_hl_field(3, Reason_689, 2) = ((MR_Box) (MaybeRunTime_666));
                MR_hl_field(3, Reason_689, 3) = ((MR_Box) (MaybeIOHLDS_679));
                MR_hl_field(3, Reason_689, 4) = ((MR_Box) (MutableHLDSs_670));
                MR_hl_field(3, Reason_689, 5) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                GoalExpr_690 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_690, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_690, 1) = ((MR_Box) (Reason_689));
                MR_hl_field(3, GoalExpr_690, 2) = ((MR_Box) (HLDSSubGoal_685));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_664, &GoalInfo_691);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_690));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_691));
              }
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word Context_304 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 1))));
              MR_Word Outer0_305 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 2))));
              MR_Word Inner0_306 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 3))));
              MR_Word MaybeOutputVars0_307 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 4))));
              MR_Word MainGoal_308 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 5))));
              MR_Word OrElseGoals_309 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 6))));
              MR_Word MaybeOutputVars_310;
              MR_Word Outer_319;
              MR_Word HLDSGoals_334;
              MR_Word HLDSMainGoal_335;
              MR_Word HLDSOrElseGoals_336;
              MR_Word Inner_341;
              MR_Word ShortHand_345;
              MR_Word GoalExpr_346;
              MR_Word GoalInfo_347;

              if ((MaybeOutputVars0_307 == (MR_Word) ((MR_Unsigned) 0U)))
                MaybeOutputVars_310 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word OutputVars0_311 = ((MR_Word) ((MR_hl_field(1, MaybeOutputVars0_307, (MR_Integer) 0))));
                MR_Word OutputVars_312;

                parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_18, OutputVars0_311, &OutputVars_312);
                {
                  MaybeOutputVars_310 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MaybeOutputVars_310, 0) = ((MR_Box) (OutputVars_312));
                }
              }
              if (((MR_tag((MR_Word) Outer0_305)) == (MR_Integer) 0))
              {
                MR_Word OuterStateVar0_313 = ((MR_Word) ((MR_hl_field(0, Outer0_305, (MR_Integer) 0))));
                MR_Word OuterStateVar_314;
                MR_Word OuterDI_315;
                MR_Word OuterUO_316;
                MR_Word OuterScopeInfo2_344;
                MR_Word STATE_VARIABLE_SVarState_91_355;
                MR_Word STATE_VARIABLE_VarSet_92_356;
                MR_Word STATE_VARIABLE_Specs_93_357;
                MR_Word STATE_VARIABLE_SVarState_115_376;

                parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_18, OuterStateVar0_313, &OuterStateVar_314);
                hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_p_0(Context_304, OuterStateVar_314, &OuterDI_315, &OuterUO_316, &OuterScopeInfo2_344, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_91_355, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_92_356, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_93_357);
                {
                  Outer_319 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Outer_319, 0) = ((MR_Box) (OuterDI_315));
                  MR_hl_field(0, Outer_319, 1) = ((MR_Box) (OuterUO_316));
                }
                if (((MR_tag((MR_Word) Inner0_306)) == (MR_Integer) 0))
                {
                  MR_Word InnerStateVar0_322 = ((MR_Word) ((MR_hl_field(0, Inner0_306, (MR_Integer) 0))));
                  MR_Word InnerStateVar_323;
                  MR_Word BeforeDisjSVarState_328;
                  MR_Word HLDSMainGoal0_329;
                  MR_Word AfterMainSVarState_330;
                  MR_Word MainDisjState_331;
                  MR_Word OrElseDisjStates_332;
                  MR_Word AllDisjStates_333;
                  MR_Word InnerScopeInfo2_338;
                  MR_Word InnerDI_339;
                  MR_Word InnerUO_340;
                  MR_Word STATE_VARIABLE_VarSet_98_362;
                  MR_Word STATE_VARIABLE_Specs_99_363;
                  MR_Word STATE_VARIABLE_SVarStore_100_364;
                  MR_Word STATE_VARIABLE_VarSet_101_365;
                  MR_Word STATE_VARIABLE_ModuleInfo_102_366;
                  MR_Word STATE_VARIABLE_QualInfo_103_367;
                  MR_Word STATE_VARIABLE_Specs_104_368;
                  MR_Word STATE_VARIABLE_SVarStore_105_369;
                  MR_Word STATE_VARIABLE_VarSet_106_370;
                  MR_Word STATE_VARIABLE_Specs_109_371;
                  MR_Word STATE_VARIABLE_VarSet_110_372;
                  MR_Word STATE_VARIABLE_SVarState_111_373;

                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_18, InnerStateVar0_322, &InnerStateVar_323);
                  hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_p_0(Context_304, InnerStateVar_323, &InnerScopeInfo2_338, STATE_VARIABLE_SVarState_91_355, &BeforeDisjSVarState_328, STATE_VARIABLE_VarSet_92_356, &STATE_VARIABLE_VarSet_98_362, STATE_VARIABLE_Specs_93_357, &STATE_VARIABLE_Specs_99_363);
                  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Renaming_18, MainGoal_308, &HLDSMainGoal0_329, BeforeDisjSVarState_328, &AfterMainSVarState_330, STATE_VARIABLE_SVarStore_0_108, &STATE_VARIABLE_SVarStore_100_364, STATE_VARIABLE_VarSet_98_362, &STATE_VARIABLE_VarSet_101_365, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_102_366, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_103_367, STATE_VARIABLE_Specs_99_363, &STATE_VARIABLE_Specs_104_368);
                  {
                    MainDisjState_331 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, MainDisjState_331, 0) = ((MR_Box) (HLDSMainGoal0_329));
                    MR_hl_field(0, MainDisjState_331, 1) = ((MR_Box) (AfterMainSVarState_330));
                  }
                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(LocKind_17, Renaming_18, OrElseGoals_309, &OrElseDisjStates_332, BeforeDisjSVarState_328, STATE_VARIABLE_SVarStore_100_364, &STATE_VARIABLE_SVarStore_105_369, STATE_VARIABLE_VarSet_101_365, &STATE_VARIABLE_VarSet_106_370, STATE_VARIABLE_ModuleInfo_102_366, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_103_367, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_104_368, &STATE_VARIABLE_Specs_109_371);
                  {
                    AllDisjStates_333 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, AllDisjStates_333, 0) = ((MR_Box) (MainDisjState_331));
                    MR_hl_field(1, AllDisjStates_333, 1) = ((MR_Box) (OrElseDisjStates_332));
                  }
                  hlds__make_hlds__state_var__svar_finish_disjunction_8_p_0(AllDisjStates_333, &HLDSGoals_334, STATE_VARIABLE_VarSet_106_370, &STATE_VARIABLE_VarSet_110_372, BeforeDisjSVarState_328, &STATE_VARIABLE_SVarState_111_373, STATE_VARIABLE_SVarStore_105_369, STATE_VARIABLE_SVarStore_109);
                  hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_p_0(Context_304, InnerScopeInfo2_338, &InnerDI_339, &InnerUO_340, STATE_VARIABLE_SVarState_111_373, &STATE_VARIABLE_SVarState_115_376, STATE_VARIABLE_VarSet_110_372, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_Specs_109_371, STATE_VARIABLE_Specs_117);
                  {
                    Inner_341 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Inner_341, 0) = ((MR_Box) (InnerDI_339));
                    MR_hl_field(0, Inner_341, 1) = ((MR_Box) (InnerUO_340));
                  }
                }
                else
                {
                  MR_Word InnerDI0_342;
                  MR_Word InnerUO0_343;
                  MR_Word InnerDI_395;
                  MR_Word InnerUO_396;
                  MR_Word HLDSMainGoal0_859;
                  MR_Word AfterMainSVarState_860;
                  MR_Word MainDisjState_861;
                  MR_Word OrElseDisjStates_862;
                  MR_Word AllDisjStates_863;
                  MR_Word STATE_VARIABLE_SVarStore_100_866;
                  MR_Word STATE_VARIABLE_VarSet_101_867;
                  MR_Word STATE_VARIABLE_ModuleInfo_102_868;
                  MR_Word STATE_VARIABLE_QualInfo_103_869;
                  MR_Word STATE_VARIABLE_Specs_104_870;
                  MR_Word STATE_VARIABLE_SVarStore_105_871;
                  MR_Word STATE_VARIABLE_VarSet_106_872;

                  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Renaming_18, MainGoal_308, &HLDSMainGoal0_859, STATE_VARIABLE_SVarState_91_355, &AfterMainSVarState_860, STATE_VARIABLE_SVarStore_0_108, &STATE_VARIABLE_SVarStore_100_866, STATE_VARIABLE_VarSet_92_356, &STATE_VARIABLE_VarSet_101_867, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_102_868, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_103_869, STATE_VARIABLE_Specs_93_357, &STATE_VARIABLE_Specs_104_870);
                  {
                    MainDisjState_861 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, MainDisjState_861, 0) = ((MR_Box) (HLDSMainGoal0_859));
                    MR_hl_field(0, MainDisjState_861, 1) = ((MR_Box) (AfterMainSVarState_860));
                  }
                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(LocKind_17, Renaming_18, OrElseGoals_309, &OrElseDisjStates_862, STATE_VARIABLE_SVarState_91_355, STATE_VARIABLE_SVarStore_100_866, &STATE_VARIABLE_SVarStore_105_871, STATE_VARIABLE_VarSet_101_867, &STATE_VARIABLE_VarSet_106_872, STATE_VARIABLE_ModuleInfo_102_868, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_103_869, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_104_870, STATE_VARIABLE_Specs_117);
                  {
                    AllDisjStates_863 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, AllDisjStates_863, 0) = ((MR_Box) (MainDisjState_861));
                    MR_hl_field(1, AllDisjStates_863, 1) = ((MR_Box) (OrElseDisjStates_862));
                  }
                  hlds__make_hlds__state_var__svar_finish_disjunction_8_p_0(AllDisjStates_863, &HLDSGoals_334, STATE_VARIABLE_VarSet_106_872, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_SVarState_91_355, &STATE_VARIABLE_SVarState_115_376, STATE_VARIABLE_SVarStore_105_871, STATE_VARIABLE_SVarStore_109);
                  InnerDI0_342 = ((MR_Word) ((MR_hl_field(1, Inner0_306, (MR_Integer) 0))));
                  InnerUO0_343 = ((MR_Word) ((MR_hl_field(1, Inner0_306, (MR_Integer) 1))));
                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_18, InnerDI0_342, &InnerDI_395);
                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_18, InnerUO0_343, &InnerUO_396);
                  {
                    Inner_341 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Inner_341, 0) = ((MR_Box) (InnerDI_395));
                    MR_hl_field(0, Inner_341, 1) = ((MR_Box) (InnerUO_396));
                  }
                }
                hlds__make_hlds__state_var__svar_finish_outer_atomic_scope_3_p_0(OuterScopeInfo2_344, STATE_VARIABLE_SVarState_115_376, STATE_VARIABLE_SVarState_107);
              }
              else
              {
                MR_Word OuterDI0_320 = ((MR_Word) ((MR_hl_field(1, Outer0_305, (MR_Integer) 0))));
                MR_Word OuterUO0_321 = ((MR_Word) ((MR_hl_field(1, Outer0_305, (MR_Integer) 1))));
                MR_Word OuterDI_393;
                MR_Word OuterUO_394;

                parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_18, OuterDI0_320, &OuterDI_393);
                parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_18, OuterUO0_321, &OuterUO_394);
                {
                  Outer_319 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Outer_319, 0) = ((MR_Box) (OuterDI_393));
                  MR_hl_field(0, Outer_319, 1) = ((MR_Box) (OuterUO_394));
                }
                if (((MR_tag((MR_Word) Inner0_306)) == (MR_Integer) 0))
                {
                  MR_Word InnerStateVar0_776 = ((MR_Word) ((MR_hl_field(0, Inner0_306, (MR_Integer) 0))));
                  MR_Word InnerStateVar_777;
                  MR_Word InnerScopeInfo2_788;
                  MR_Word InnerDI_789;
                  MR_Word InnerUO_790;
                  MR_Word BeforeDisjSVarState_820;
                  MR_Word HLDSMainGoal0_821;
                  MR_Word AfterMainSVarState_822;
                  MR_Word MainDisjState_823;
                  MR_Word OrElseDisjStates_824;
                  MR_Word AllDisjStates_825;
                  MR_Word STATE_VARIABLE_VarSet_98_835;
                  MR_Word STATE_VARIABLE_Specs_99_836;
                  MR_Word STATE_VARIABLE_SVarStore_100_837;
                  MR_Word STATE_VARIABLE_VarSet_101_838;
                  MR_Word STATE_VARIABLE_ModuleInfo_102_839;
                  MR_Word STATE_VARIABLE_QualInfo_103_840;
                  MR_Word STATE_VARIABLE_Specs_104_841;
                  MR_Word STATE_VARIABLE_SVarStore_105_842;
                  MR_Word STATE_VARIABLE_VarSet_106_843;
                  MR_Word STATE_VARIABLE_Specs_109_844;
                  MR_Word STATE_VARIABLE_VarSet_110_845;
                  MR_Word STATE_VARIABLE_SVarState_111_846;

                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_18, InnerStateVar0_776, &InnerStateVar_777);
                  hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_p_0(Context_304, InnerStateVar_777, &InnerScopeInfo2_788, STATE_VARIABLE_SVarState_0_106, &BeforeDisjSVarState_820, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_98_835, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_99_836);
                  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Renaming_18, MainGoal_308, &HLDSMainGoal0_821, BeforeDisjSVarState_820, &AfterMainSVarState_822, STATE_VARIABLE_SVarStore_0_108, &STATE_VARIABLE_SVarStore_100_837, STATE_VARIABLE_VarSet_98_835, &STATE_VARIABLE_VarSet_101_838, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_102_839, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_103_840, STATE_VARIABLE_Specs_99_836, &STATE_VARIABLE_Specs_104_841);
                  {
                    MainDisjState_823 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, MainDisjState_823, 0) = ((MR_Box) (HLDSMainGoal0_821));
                    MR_hl_field(0, MainDisjState_823, 1) = ((MR_Box) (AfterMainSVarState_822));
                  }
                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(LocKind_17, Renaming_18, OrElseGoals_309, &OrElseDisjStates_824, BeforeDisjSVarState_820, STATE_VARIABLE_SVarStore_100_837, &STATE_VARIABLE_SVarStore_105_842, STATE_VARIABLE_VarSet_101_838, &STATE_VARIABLE_VarSet_106_843, STATE_VARIABLE_ModuleInfo_102_839, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_103_840, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_104_841, &STATE_VARIABLE_Specs_109_844);
                  {
                    AllDisjStates_825 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, AllDisjStates_825, 0) = ((MR_Box) (MainDisjState_823));
                    MR_hl_field(1, AllDisjStates_825, 1) = ((MR_Box) (OrElseDisjStates_824));
                  }
                  hlds__make_hlds__state_var__svar_finish_disjunction_8_p_0(AllDisjStates_825, &HLDSGoals_334, STATE_VARIABLE_VarSet_106_843, &STATE_VARIABLE_VarSet_110_845, BeforeDisjSVarState_820, &STATE_VARIABLE_SVarState_111_846, STATE_VARIABLE_SVarStore_105_842, STATE_VARIABLE_SVarStore_109);
                  hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_p_0(Context_304, InnerScopeInfo2_788, &InnerDI_789, &InnerUO_790, STATE_VARIABLE_SVarState_111_846, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_VarSet_110_845, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_Specs_109_844, STATE_VARIABLE_Specs_117);
                  {
                    Inner_341 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Inner_341, 0) = ((MR_Box) (InnerDI_789));
                    MR_hl_field(0, Inner_341, 1) = ((MR_Box) (InnerUO_790));
                  }
                }
                else
                {
                  MR_Word InnerDI0_796;
                  MR_Word InnerUO0_797;
                  MR_Word InnerDI_800;
                  MR_Word InnerUO_801;
                  MR_Word HLDSMainGoal0_879;
                  MR_Word AfterMainSVarState_880;
                  MR_Word MainDisjState_881;
                  MR_Word OrElseDisjStates_882;
                  MR_Word AllDisjStates_883;
                  MR_Word STATE_VARIABLE_SVarStore_100_886;
                  MR_Word STATE_VARIABLE_VarSet_101_887;
                  MR_Word STATE_VARIABLE_ModuleInfo_102_888;
                  MR_Word STATE_VARIABLE_QualInfo_103_889;
                  MR_Word STATE_VARIABLE_Specs_104_890;
                  MR_Word STATE_VARIABLE_SVarStore_105_891;
                  MR_Word STATE_VARIABLE_VarSet_106_892;

                  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Renaming_18, MainGoal_308, &HLDSMainGoal0_879, STATE_VARIABLE_SVarState_0_106, &AfterMainSVarState_880, STATE_VARIABLE_SVarStore_0_108, &STATE_VARIABLE_SVarStore_100_886, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_101_887, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_102_888, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_103_889, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_104_890);
                  {
                    MainDisjState_881 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, MainDisjState_881, 0) = ((MR_Box) (HLDSMainGoal0_879));
                    MR_hl_field(0, MainDisjState_881, 1) = ((MR_Box) (AfterMainSVarState_880));
                  }
                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(LocKind_17, Renaming_18, OrElseGoals_309, &OrElseDisjStates_882, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarStore_100_886, &STATE_VARIABLE_SVarStore_105_891, STATE_VARIABLE_VarSet_101_887, &STATE_VARIABLE_VarSet_106_892, STATE_VARIABLE_ModuleInfo_102_888, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_103_889, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_104_890, STATE_VARIABLE_Specs_117);
                  {
                    AllDisjStates_883 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, AllDisjStates_883, 0) = ((MR_Box) (MainDisjState_881));
                    MR_hl_field(1, AllDisjStates_883, 1) = ((MR_Box) (OrElseDisjStates_882));
                  }
                  hlds__make_hlds__state_var__svar_finish_disjunction_8_p_0(AllDisjStates_883, &HLDSGoals_334, STATE_VARIABLE_VarSet_106_892, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_105_891, STATE_VARIABLE_SVarStore_109);
                  InnerDI0_796 = ((MR_Word) ((MR_hl_field(1, Inner0_306, (MR_Integer) 0))));
                  InnerUO0_797 = ((MR_Word) ((MR_hl_field(1, Inner0_306, (MR_Integer) 1))));
                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_18, InnerDI0_796, &InnerDI_800);
                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_18, InnerUO0_797, &InnerUO_801);
                  {
                    Inner_341 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Inner_341, 0) = ((MR_Box) (InnerDI_800));
                    MR_hl_field(0, Inner_341, 1) = ((MR_Box) (InnerUO_801));
                  }
                }
              }
              if ((HLDSGoals_334 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_parse_tree_goal_to_hlds_atomic\'/16", (MR_String) "atomic HLDSGoals = []");
                  return;
                }
              else
              {
                HLDSMainGoal_335 = ((MR_Word) ((MR_hl_field(1, HLDSGoals_334, (MR_Integer) 0))));
                HLDSOrElseGoals_336 = ((MR_Word) ((MR_hl_field(1, HLDSGoals_334, (MR_Integer) 1))));
              }
              {
                ShortHand_345 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, ShortHand_345, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(1, ShortHand_345, 1) = ((MR_Box) (Outer_319));
                MR_hl_field(1, ShortHand_345, 2) = ((MR_Box) (Inner_341));
                MR_hl_field(1, ShortHand_345, 3) = ((MR_Box) (MaybeOutputVars_310));
                MR_hl_field(1, ShortHand_345, 4) = ((MR_Box) (HLDSMainGoal_335));
                MR_hl_field(1, ShortHand_345, 5) = ((MR_Box) (HLDSOrElseGoals_336));
                MR_hl_field(1, ShortHand_345, 6) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                GoalExpr_346 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_346, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(3, GoalExpr_346, 1) = ((MR_Box) (ShortHand_345));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_304, &GoalInfo_347);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_346));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_347));
              }
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word Context_705 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 1))));
              MR_Word MaybeIO0_706 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 2))));
              MR_Word SubGoal0_707 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 3))));
              MR_Word Then0_708 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 4))));
              MR_Word MaybeElse0_709 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 5))));
              MR_Word Catches0_710 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 6))));
              MR_Word MaybeCatchAny0_711 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 7))));

              if ((MaybeIO0_706 == (MR_Word) ((MR_Unsigned) 0U)))
                hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_p_0(LocKind_17, Renaming_18, SubGoal0_707, Then0_708, MaybeElse0_709, Catches0_710, MaybeCatchAny0_711, Context_705, HLDSGoal_20, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              else
              {
                MR_Word IOStateVar0_712 = ((MR_Word) ((MR_hl_field(1, MaybeIO0_706, (MR_Integer) 0))));

                if ((MaybeElse0_709 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word IOStateVar_713;

                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_18, IOStateVar0_712, &IOStateVar_713);
                  hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_p_0(LocKind_17, Renaming_18, IOStateVar0_712, IOStateVar_713, SubGoal0_707, Then0_708, Catches0_710, MaybeCatchAny0_711, Context_705, HLDSGoal_20, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
                }
                else
                {
                  MR_Word Pieces_715;
                  MR_Word Spec_716;
                  MR_Word Var_722;
                  MR_Word Var_723;
                  MR_Word Var_725;
                  MR_Word Var_726;

                  Var_723 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[46])));
                  Var_726 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[52])));
                  Var_725 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_726, (MR_Word) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[15])));
                  Var_722 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_723, Var_725);
                  Pieces_715 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[36])), Var_722);
                  {
                    Spec_716 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Spec_716, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_parse_tree_goal_to_hlds_try\'/16"));
                    MR_hl_field(0, Spec_716, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, Spec_716, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                    MR_hl_field(0, Spec_716, 3) = ((MR_Box) (Context_705));
                    MR_hl_field(0, Spec_716, 4) = ((MR_Box) (Pieces_715));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_Specs_117 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_716));
                    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_116));
                  }
                  *HLDSGoal_20 = hlds__make_goal__true_goal_with_context_1_f_0(Context_705);
                  *STATE_VARIABLE_SVarState_107 = STATE_VARIABLE_SVarState_0_106;
                  *STATE_VARIABLE_SVarStore_109 = STATE_VARIABLE_SVarStore_0_108;
                  *STATE_VARIABLE_VarSet_111 = STATE_VARIABLE_VarSet_0_110;
                  *STATE_VARIABLE_ModuleInfo_113 = STATE_VARIABLE_ModuleInfo_0_112;
                  *STATE_VARIABLE_QualInfo_115 = STATE_VARIABLE_QualInfo_0_114;
                }
              }
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word P_56 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 2))));
              MR_Word Q_57 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 3))));
              MR_Word TransformedGoal_58;
              MR_Word Var_163;
              MR_Word Var_164;
              MR_Word Var_165;
              MR_Word Context_241 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 1))));
              MR_Word next_value_of_Goal_19;

              {
                Var_165 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_165, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, Var_165, 1) = ((MR_Box) (Context_241));
                MR_hl_field(3, Var_165, 2) = ((MR_Box) (Q_57));
              }
              {
                Var_164 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_164, 0) = ((MR_Box) (Var_165));
                MR_hl_field(1, Var_164, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_163 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_163, 0) = ((MR_Box) (Context_241));
                MR_hl_field(2, Var_163, 1) = ((MR_Box) (P_56));
                MR_hl_field(2, Var_163, 2) = ((MR_Box) (Var_164));
              }
              {
                TransformedGoal_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, TransformedGoal_58, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, TransformedGoal_58, 1) = ((MR_Box) (Context_241));
                MR_hl_field(3, TransformedGoal_58, 2) = ((MR_Box) (Var_163));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_19 = TransformedGoal_58;
              Goal_19 = next_value_of_Goal_19;
              continue;
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word Context_520 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 1))));
              MR_Word SubGoalA_521 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 2))));
              MR_Word SubGoalB_522 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 3))));
              MR_Word HLDSSubGoalA_524;
              MR_Word HLDSSubGoalB_525;
              MR_Word GoalExpr_527;
              MR_Word GoalInfo_528;
              MR_Word STATE_VARIABLE_SVarState_48_529;
              MR_Word STATE_VARIABLE_SVarStore_49_530;
              MR_Word STATE_VARIABLE_VarSet_50_531;
              MR_Word STATE_VARIABLE_ModuleInfo_51_532;
              MR_Word STATE_VARIABLE_QualInfo_52_533;
              MR_Word STATE_VARIABLE_Specs_53_534;
              MR_Word Var_535;
              MR_Word Var_526;

              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Renaming_18, SubGoalA_521, &HLDSSubGoalA_524, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_48_529, STATE_VARIABLE_SVarStore_0_108, &STATE_VARIABLE_SVarStore_49_530, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_50_531, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_51_532, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_52_533, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_53_534);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Renaming_18, SubGoalB_522, &HLDSSubGoalB_525, STATE_VARIABLE_SVarState_48_529, &Var_526, STATE_VARIABLE_SVarStore_49_530, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_50_531, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_51_532, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_52_533, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_53_534, STATE_VARIABLE_Specs_117);
              *STATE_VARIABLE_SVarState_107 = STATE_VARIABLE_SVarState_0_106;
              {
                Var_535 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_535, 0) = ((MR_Box) (HLDSSubGoalA_524));
                MR_hl_field(0, Var_535, 1) = ((MR_Box) (HLDSSubGoalB_525));
              }
              {
                GoalExpr_527 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_527, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(3, GoalExpr_527, 1) = ((MR_Box) (Var_535));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_520, &GoalInfo_528);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_527));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_528));
              }
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Word Context_536 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 1))));
              MR_String EventName_537 = ((MR_String) ((MR_hl_field(3, Goal_19, (MR_Integer) 2))));
              MR_Word ArgTerms0_538 = ((MR_Word) ((MR_hl_field(3, Goal_19, (MR_Integer) 3))));
              MR_Word ArgTerms1_539;
              MR_Word ArgTerms_540;
              MR_Word HeadVars_541;
              MR_Word HeadVarsArgTerms_542;
              MR_Integer Arity_543;
              MR_Word Modes_544;
              MR_Word Details_545;
              MR_Word GoalExpr0_546;
              MR_Word GoalInfo_547;
              MR_Word HLDSGoal0_548;
              MR_Word CallId_549;
              MR_Word STATE_VARIABLE_VarSet_54_551;
              MR_Word STATE_VARIABLE_SVarState_55_552;
              MR_Word STATE_VARIABLE_Specs_56_553;
              MR_Word Var_554;
              MR_Word Var_557;
              MR_Word Var_559;
              MR_Word STATE_VARIABLE_SVarState_63_560;

              hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(ArgTerms0_538, &ArgTerms1_539);
              parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_18, ArgTerms1_539, &ArgTerms_540);
              hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_9_p_0(ArgTerms_540, &HeadVars_541, &HeadVarsArgTerms_542, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_54_551, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_55_552, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_56_553);
              mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[5]), HeadVars_541, &Arity_543);
              Var_554 = parse_tree__prog_mode__in_mode_0_f_0();
              mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Arity_543, ((MR_Box) (Var_554)), &Modes_544);
              {
                Details_545 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Details_545, 0) = ((MR_Box) (EventName_537));
              }
              {
                GoalExpr0_546 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr0_546, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, GoalExpr0_546, 1) = ((MR_Box) (Details_545));
                MR_hl_field(3, GoalExpr0_546, 2) = ((MR_Box) (HeadVars_541));
                MR_hl_field(3, GoalExpr0_546, 3) = ((MR_Box) (Modes_544));
                MR_hl_field(3, GoalExpr0_546, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, GoalExpr0_546, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_536, &GoalInfo_547);
              {
                HLDSGoal0_548 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, HLDSGoal0_548, 0) = ((MR_Box) (GoalExpr0_546));
                MR_hl_field(0, HLDSGoal0_548, 1) = ((MR_Box) (GoalInfo_547));
              }
              {
                Var_557 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_557, 0) = ((MR_Box) (STATE_VARIABLE_VarSet_54_551));
              }
              {
                CallId_549 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, CallId_549, 0) = ((MR_Box) (Var_557));
                MR_hl_field(1, CallId_549, 1) = ((MR_Box) (Details_545));
              }
              {
                Var_559 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_559, 0) = ((MR_Box) (CallId_549));
              }
              hlds__make_hlds__superhomogeneous__insert_arg_unifications_17_p_0(HeadVarsArgTerms_542, Context_536, Var_559, HLDSGoal0_548, HLDSGoal_20, STATE_VARIABLE_SVarState_55_552, &STATE_VARIABLE_SVarState_63_560, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_54_551, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_56_553, STATE_VARIABLE_Specs_117);
              hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(LocKind_17, STATE_VARIABLE_SVarState_63_560, STATE_VARIABLE_SVarState_107);
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__3_3;
  MR_Word conv2_HeadVar__5_5;
  MR_Word conv1_HeadVar__7_7;
  MR_Word conv0_HeadVar__9_9;

  hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__3_3, ((MR_Word) (wrapper_arg_3)), &conv2_HeadVar__5_5, ((MR_Word) (wrapper_arg_5)), &conv1_HeadVar__7_7, ((MR_Word) (wrapper_arg_7)), &conv0_HeadVar__9_9);
  *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv2_HeadVar__5_5));
  *wrapper_arg_6 = ((MR_Box) (conv1_HeadVar__7_7));
  *wrapper_arg_8 = ((MR_Box) (conv0_HeadVar__9_9));
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(
  MR_Word LocKind_23,
  MR_Word Renaming_24,
  MR_Word Vars0_25,
  MR_Word StateVars0_26,
  MR_Word DotSVars0_27,
  MR_Word ColonSVars0_28,
  MR_Word Context_29,
  MR_Word * QuantVars_30,
  MR_Word Goal_31,
  MR_Word * HLDSGoal_32,
  MR_Word STATE_VARIABLE_SVarState_0_47,
  MR_Word * STATE_VARIABLE_SVarState_48,
  MR_Word STATE_VARIABLE_SVarStore_0_49,
  MR_Word * STATE_VARIABLE_SVarStore_50,
  MR_Word STATE_VARIABLE_VarSet_0_51,
  MR_Word * STATE_VARIABLE_VarSet_52,
  MR_Word STATE_VARIABLE_ModuleInfo_0_53,
  MR_Word * STATE_VARIABLE_ModuleInfo_54,
  MR_Word STATE_VARIABLE_QualInfo_0_55,
  MR_Word * STATE_VARIABLE_QualInfo_56,
  MR_Word STATE_VARIABLE_Specs_0_57,
  MR_Word * STATE_VARIABLE_Specs_58)
{
  MR_Word Vars_39;
  MR_Word StateVars1_40;
  MR_Word DotSVars1_41;
  MR_Word ColonSVars1_42;
  MR_Word OldStateVars_43;
  MR_Word DotSVars_44;
  MR_Word NewStateVars_45;
  MR_Word ColonSVars_46;
  MR_Word Var_63;
  MR_Word STATE_VARIABLE_VarSet_64_64;
  MR_Word STATE_VARIABLE_SVarState_65_65;
  MR_Word STATE_VARIABLE_Specs_66_66;
  MR_Word STATE_VARIABLE_VarSet_68_68;
  MR_Word STATE_VARIABLE_SVarState_69_69;
  MR_Word STATE_VARIABLE_Specs_70_70;
  MR_Word STATE_VARIABLE_SVarState_71_71;
  MR_Word STATE_VARIABLE_VarSet_73_73;
  MR_Word STATE_VARIABLE_Specs_76_76;
  MR_Word STATE_VARIABLE_VarSet_78_78;
  MR_Word STATE_VARIABLE_SVarState_79_79;
  MR_Word STATE_VARIABLE_Specs_80_80;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Box conv6_STATE_VARIABLE_VarSet_64_64;
  MR_Box conv5_STATE_VARIABLE_SVarState_65_65;
  MR_Box conv4_STATE_VARIABLE_Specs_66_66;
  MR_Box conv9_STATE_VARIABLE_VarSet_68_68;
  MR_Box conv8_STATE_VARIABLE_SVarState_69_69;
  MR_Box conv7_STATE_VARIABLE_Specs_70_70;
  MR_Box conv12_STATE_VARIABLE_VarSet_78_78;
  MR_Box conv11_STATE_VARIABLE_SVarState_79_79;
  MR_Box conv10_STATE_VARIABLE_Specs_80_80;
  MR_Box conv15_STATE_VARIABLE_VarSet_52;
  MR_Box conv14_STATE_VARIABLE_SVarState_48;
  MR_Box conv13_STATE_VARIABLE_Specs_58;

  parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_24, Vars0_25, &Vars_39);
  parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_24, StateVars0_26, &StateVars1_40);
  parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_24, DotSVars0_27, &DotSVars1_41);
  parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_24, ColonSVars0_28, &ColonSVars1_42);
  {
    Var_63 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_63, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_4[0]));
    MR_hl_field(0, Var_63, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0_1));
    MR_hl_field(0, Var_63, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_63, 3) = ((MR_Box) (Context_29));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[2]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), Var_63, StateVars1_40, &OldStateVars_43, ((MR_Box) (STATE_VARIABLE_VarSet_0_51)), &conv6_STATE_VARIABLE_VarSet_64_64, ((MR_Box) (STATE_VARIABLE_SVarState_0_47)), &conv5_STATE_VARIABLE_SVarState_65_65, ((MR_Box) (STATE_VARIABLE_Specs_0_57)), &conv4_STATE_VARIABLE_Specs_66_66);
  STATE_VARIABLE_VarSet_64_64 = ((MR_Word) (conv6_STATE_VARIABLE_VarSet_64_64));
  STATE_VARIABLE_SVarState_65_65 = ((MR_Word) (conv5_STATE_VARIABLE_SVarState_65_65));
  STATE_VARIABLE_Specs_66_66 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_66_66));
  mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[2]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), Var_63, DotSVars1_41, &DotSVars_44, ((MR_Box) (STATE_VARIABLE_VarSet_64_64)), &conv9_STATE_VARIABLE_VarSet_68_68, ((MR_Box) (STATE_VARIABLE_SVarState_65_65)), &conv8_STATE_VARIABLE_SVarState_69_69, ((MR_Box) (STATE_VARIABLE_Specs_66_66)), &conv7_STATE_VARIABLE_Specs_70_70);
  STATE_VARIABLE_VarSet_68_68 = ((MR_Word) (conv9_STATE_VARIABLE_VarSet_68_68));
  STATE_VARIABLE_SVarState_69_69 = ((MR_Word) (conv8_STATE_VARIABLE_SVarState_69_69));
  STATE_VARIABLE_Specs_70_70 = ((MR_Word) (conv7_STATE_VARIABLE_Specs_70_70));
  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_23, Renaming_24, Goal_31, HLDSGoal_32, STATE_VARIABLE_SVarState_69_69, &STATE_VARIABLE_SVarState_71_71, STATE_VARIABLE_SVarStore_0_49, STATE_VARIABLE_SVarStore_50, STATE_VARIABLE_VarSet_68_68, &STATE_VARIABLE_VarSet_73_73, STATE_VARIABLE_ModuleInfo_0_53, STATE_VARIABLE_ModuleInfo_54, STATE_VARIABLE_QualInfo_0_55, STATE_VARIABLE_QualInfo_56, STATE_VARIABLE_Specs_70_70, &STATE_VARIABLE_Specs_76_76);
  mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[2]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), Var_63, StateVars1_40, &NewStateVars_45, ((MR_Box) (STATE_VARIABLE_VarSet_73_73)), &conv12_STATE_VARIABLE_VarSet_78_78, ((MR_Box) (STATE_VARIABLE_SVarState_71_71)), &conv11_STATE_VARIABLE_SVarState_79_79, ((MR_Box) (STATE_VARIABLE_Specs_76_76)), &conv10_STATE_VARIABLE_Specs_80_80);
  STATE_VARIABLE_VarSet_78_78 = ((MR_Word) (conv12_STATE_VARIABLE_VarSet_78_78));
  STATE_VARIABLE_SVarState_79_79 = ((MR_Word) (conv11_STATE_VARIABLE_SVarState_79_79));
  STATE_VARIABLE_Specs_80_80 = ((MR_Word) (conv10_STATE_VARIABLE_Specs_80_80));
  mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[2]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), Var_63, ColonSVars1_42, &ColonSVars_46, ((MR_Box) (STATE_VARIABLE_VarSet_78_78)), &conv15_STATE_VARIABLE_VarSet_52, ((MR_Box) (STATE_VARIABLE_SVarState_79_79)), &conv14_STATE_VARIABLE_SVarState_48, ((MR_Box) (STATE_VARIABLE_Specs_80_80)), &conv13_STATE_VARIABLE_Specs_58);
  *STATE_VARIABLE_VarSet_52 = ((MR_Word) (conv15_STATE_VARIABLE_VarSet_52));
  *STATE_VARIABLE_SVarState_48 = ((MR_Word) (conv14_STATE_VARIABLE_SVarState_48));
  *STATE_VARIABLE_Specs_58 = ((MR_Word) (conv13_STATE_VARIABLE_Specs_58));
  Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[5]), DotSVars_44, ColonSVars_46);
  Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[5]), NewStateVars_45, Var_87);
  Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[5]), OldStateVars_43, Var_86);
  *QuantVars_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[5]), Vars_39, Var_85);
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(
  MR_Word LocKind_1,
  MR_Word Renaming_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_VarSet_0_8,
  MR_Word * STATE_VARIABLE_VarSet_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * STATE_VARIABLE_ModuleInfo_11,
  MR_Word STATE_VARIABLE_QualInfo_0_12,
  MR_Word * STATE_VARIABLE_QualInfo_13,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_15 = STATE_VARIABLE_Specs_0_14;
    *STATE_VARIABLE_QualInfo_13 = STATE_VARIABLE_QualInfo_0_12;
    *STATE_VARIABLE_ModuleInfo_11 = STATE_VARIABLE_ModuleInfo_0_10;
    *STATE_VARIABLE_VarSet_9 = STATE_VARIABLE_VarSet_0_8;
    *HeadVar__7_7 = HeadVar__6_6;
  }
  else
  {
    MR_Word Goal_36 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Goals_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word DisjState_38;
    MR_Word DisjStates_39;
    MR_Word HLDSGoal_46;
    MR_Word SVarStateAfterDisjunct_47;
    MR_Word STATE_VARIABLE_SVarStore_58_58;
    MR_Word STATE_VARIABLE_VarSet_59_59;
    MR_Word STATE_VARIABLE_ModuleInfo_60_60;
    MR_Word STATE_VARIABLE_QualInfo_61_61;
    MR_Word STATE_VARIABLE_Specs_62_62;

    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_1, Renaming_2, Goal_36, &HLDSGoal_46, HeadVar__5_5, &SVarStateAfterDisjunct_47, HeadVar__6_6, &STATE_VARIABLE_SVarStore_58_58, STATE_VARIABLE_VarSet_0_8, &STATE_VARIABLE_VarSet_59_59, STATE_VARIABLE_ModuleInfo_0_10, &STATE_VARIABLE_ModuleInfo_60_60, STATE_VARIABLE_QualInfo_0_12, &STATE_VARIABLE_QualInfo_61_61, STATE_VARIABLE_Specs_0_14, &STATE_VARIABLE_Specs_62_62);
    {
      DisjState_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, DisjState_38, 0) = ((MR_Box) (HLDSGoal_46));
      MR_hl_field(0, DisjState_38, 1) = ((MR_Box) (SVarStateAfterDisjunct_47));
    }
    hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(LocKind_1, Renaming_2, Goals_37, &DisjStates_39, HeadVar__5_5, STATE_VARIABLE_SVarStore_58_58, HeadVar__7_7, STATE_VARIABLE_VarSet_59_59, STATE_VARIABLE_VarSet_9, STATE_VARIABLE_ModuleInfo_60_60, STATE_VARIABLE_ModuleInfo_11, STATE_VARIABLE_QualInfo_61_61, STATE_VARIABLE_QualInfo_13, STATE_VARIABLE_Specs_62_62, STATE_VARIABLE_Specs_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (DisjState_38));
      MR_hl_field(1, base, 1) = ((MR_Box) (DisjStates_39));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_p_0(
  MR_Word LocKind_22,
  MR_Word Renaming_23,
  MR_Word SubGoal_24,
  MR_Word ThenGoal_25,
  MR_Word MaybeElseGoal_26,
  MR_Word Catches_27,
  MR_Word MaybeCatchAny_28,
  MR_Word Context_29,
  MR_Word * TryGoal_30,
  MR_Word STATE_VARIABLE_SVarState_0_53,
  MR_Word * STATE_VARIABLE_SVarState_54,
  MR_Word STATE_VARIABLE_SVarStore_0_55,
  MR_Word * STATE_VARIABLE_SVarStore_56,
  MR_Word STATE_VARIABLE_VarSet_0_57,
  MR_Word * STATE_VARIABLE_VarSet_58,
  MR_Word STATE_VARIABLE_ModuleInfo_0_59,
  MR_Word * STATE_VARIABLE_ModuleInfo_60,
  MR_Word STATE_VARIABLE_QualInfo_0_61,
  MR_Word * STATE_VARIABLE_QualInfo_62,
  MR_Word STATE_VARIABLE_Specs_0_63,
  MR_Word * STATE_VARIABLE_Specs_64)
{
  MR_Word ResultVar_37;
  MR_Word ExcpVar_38;
  MR_Word ResultVarTerm_39;
  MR_Word ExcpVarTerm_40;
  MR_Word NullTupleTerm_41;
  MR_Word GoalInfo_42;
  MR_Word CallMagicGoal_43;
  MR_Word ResultIsSucceededUnifyGoal_44;
  MR_Word SucceededSubGoal_46;
  MR_Word ResultIsSucceededDisjunctGoal_47;
  MR_Word ResultIsExceptionDisjunctGoal_48;
  MR_Word CallMagicThenDisjunctionGoal_49;
  MR_Word HLDSCallMagicThenDisjunctionGoal_50;
  MR_Word ShortHand_51;
  MR_Word GoalExpr_52;
  MR_Word STATE_VARIABLE_VarSet_66_66;
  MR_Word STATE_VARIABLE_VarSet_67_67;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_75;
  MR_Word Var_90;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_104;
  MR_Word SymName_106;
  MR_Word Var_107;
  MR_Word Var_108;
  MR_Word ResultIsExceptionUnify_111;
  MR_Word CatchChain_112;
  MR_Word Var_113;
  MR_Word Var_116;
  MR_Word SymName_118;
  MR_Word Var_119;
  MR_Word Var_120;

  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "TryResult", &ResultVar_37, STATE_VARIABLE_VarSet_0_57, &STATE_VARIABLE_VarSet_66_66);
  mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &ExcpVar_38, STATE_VARIABLE_VarSet_66_66, &STATE_VARIABLE_VarSet_67_67);
  {
    ResultVarTerm_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ResultVarTerm_39, 0) = ((MR_Box) (ResultVar_37));
    MR_hl_field(1, ResultVarTerm_39, 1) = ((MR_Box) (Context_29));
  }
  {
    ExcpVarTerm_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ExcpVarTerm_40, 0) = ((MR_Box) (ExcpVar_38));
    MR_hl_field(1, ExcpVarTerm_40, 1) = ((MR_Box) (Context_29));
  }
  {
    NullTupleTerm_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, NullTupleTerm_41, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[4]));
    MR_hl_field(0, NullTupleTerm_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, NullTupleTerm_41, 2) = ((MR_Box) (Context_29));
  }
  hlds__hlds_goal__goal_info_init_2_p_0(Context_29, &GoalInfo_42);
  Var_104 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
  {
    Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_104));
    MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_String) "magic_exception_result"));
  }
  {
    Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_72, 0) = ((MR_Box) (ResultVarTerm_39));
    MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    CallMagicGoal_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, CallMagicGoal_43, 0) = ((MR_Box) (Context_29));
    MR_hl_field(1, CallMagicGoal_43, 1) = ((MR_Box) (Var_71));
    MR_hl_field(1, CallMagicGoal_43, 2) = ((MR_Box) (Var_72));
    MR_hl_field(1, CallMagicGoal_43, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  Var_107 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
  {
    SymName_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_106, 0) = ((MR_Box) (Var_107));
    MR_hl_field(1, SymName_106, 1) = ((MR_Box) ((MR_String) "succeeded"));
  }
  {
    Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_108, 0) = ((MR_Box) (NullTupleTerm_41));
    MR_hl_field(1, Var_108, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SymName_106, Var_108, Context_29, &Var_75);
  {
    ResultIsSucceededUnifyGoal_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ResultIsSucceededUnifyGoal_44, 0) = ((MR_Box) (Context_29));
    MR_hl_field(0, ResultIsSucceededUnifyGoal_44, 1) = ((MR_Box) (ResultVarTerm_39));
    MR_hl_field(0, ResultIsSucceededUnifyGoal_44, 2) = ((MR_Box) (Var_75));
    MR_hl_field(0, ResultIsSucceededUnifyGoal_44, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  if ((MaybeElseGoal_26 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_80;
    MR_Word Var_84;
    MR_Word Var_85;

    {
      Var_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_80, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_80, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
      MR_hl_field(3, Var_80, 2) = ((MR_Box) (Context_29));
      MR_hl_field(3, Var_80, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_80, 4) = ((MR_Box) (SubGoal_24));
    }
    {
      Var_85 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_85, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_85, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
      MR_hl_field(3, Var_85, 2) = ((MR_Box) (Context_29));
      MR_hl_field(3, Var_85, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_85, 4) = ((MR_Box) (ThenGoal_25));
    }
    {
      Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_84, 0) = ((MR_Box) (Var_85));
      MR_hl_field(1, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      SucceededSubGoal_46 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, SucceededSubGoal_46, 0) = ((MR_Box) (Context_29));
      MR_hl_field(2, SucceededSubGoal_46, 1) = ((MR_Box) (Var_80));
      MR_hl_field(2, SucceededSubGoal_46, 2) = ((MR_Box) (Var_84));
    }
  }
  else
  {
    MR_Word ElseGoal_45 = ((MR_Word) ((MR_hl_field(1, MaybeElseGoal_26, (MR_Integer) 0))));

    {
      SucceededSubGoal_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, SucceededSubGoal_46, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, SucceededSubGoal_46, 1) = ((MR_Box) (Context_29));
      MR_hl_field(3, SucceededSubGoal_46, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, SucceededSubGoal_46, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, SucceededSubGoal_46, 4) = ((MR_Box) (SubGoal_24));
      MR_hl_field(3, SucceededSubGoal_46, 5) = ((MR_Box) (ThenGoal_25));
      MR_hl_field(3, SucceededSubGoal_46, 6) = ((MR_Box) (ElseGoal_45));
    }
  }
  {
    Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_90, 0) = ((MR_Box) (SucceededSubGoal_46));
    MR_hl_field(1, Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    ResultIsSucceededDisjunctGoal_47 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, ResultIsSucceededDisjunctGoal_47, 0) = ((MR_Box) (Context_29));
    MR_hl_field(2, ResultIsSucceededDisjunctGoal_47, 1) = ((MR_Box) (ResultIsSucceededUnifyGoal_44));
    MR_hl_field(2, ResultIsSucceededDisjunctGoal_47, 2) = ((MR_Box) (Var_90));
  }
  Var_119 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
  {
    SymName_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_118, 0) = ((MR_Box) (Var_119));
    MR_hl_field(1, SymName_118, 1) = ((MR_Box) ((MR_String) "exception"));
  }
  {
    Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_120, 0) = ((MR_Box) (ExcpVarTerm_40));
    MR_hl_field(1, Var_120, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SymName_118, Var_120, Context_29, &Var_113);
  {
    ResultIsExceptionUnify_111 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ResultIsExceptionUnify_111, 0) = ((MR_Box) (Context_29));
    MR_hl_field(0, ResultIsExceptionUnify_111, 1) = ((MR_Box) (ResultVarTerm_39));
    MR_hl_field(0, ResultIsExceptionUnify_111, 2) = ((MR_Box) (Var_113));
    MR_hl_field(0, ResultIsExceptionUnify_111, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(ResultVarTerm_39, ExcpVarTerm_40, Catches_27, MaybeCatchAny_28, &CatchChain_112);
  {
    Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_116, 0) = ((MR_Box) (CatchChain_112));
    MR_hl_field(1, Var_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    ResultIsExceptionDisjunctGoal_48 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, ResultIsExceptionDisjunctGoal_48, 0) = ((MR_Box) (Context_29));
    MR_hl_field(2, ResultIsExceptionDisjunctGoal_48, 1) = ((MR_Box) (ResultIsExceptionUnify_111));
    MR_hl_field(2, ResultIsExceptionDisjunctGoal_48, 2) = ((MR_Box) (Var_116));
  }
  {
    Var_93 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_93, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_93, 1) = ((MR_Box) (Context_29));
    MR_hl_field(3, Var_93, 2) = ((MR_Box) (ResultIsSucceededDisjunctGoal_47));
    MR_hl_field(3, Var_93, 3) = ((MR_Box) (ResultIsExceptionDisjunctGoal_48));
    MR_hl_field(3, Var_93, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_93));
    MR_hl_field(1, Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    CallMagicThenDisjunctionGoal_49 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, CallMagicThenDisjunctionGoal_49, 0) = ((MR_Box) (Context_29));
    MR_hl_field(2, CallMagicThenDisjunctionGoal_49, 1) = ((MR_Box) (CallMagicGoal_43));
    MR_hl_field(2, CallMagicThenDisjunctionGoal_49, 2) = ((MR_Box) (Var_92));
  }
  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_22, Renaming_23, CallMagicThenDisjunctionGoal_49, &HLDSCallMagicThenDisjunctionGoal_50, STATE_VARIABLE_SVarState_0_53, STATE_VARIABLE_SVarState_54, STATE_VARIABLE_SVarStore_0_55, STATE_VARIABLE_SVarStore_56, STATE_VARIABLE_VarSet_67_67, STATE_VARIABLE_VarSet_58, STATE_VARIABLE_ModuleInfo_0_59, STATE_VARIABLE_ModuleInfo_60, STATE_VARIABLE_QualInfo_0_61, STATE_VARIABLE_QualInfo_62, STATE_VARIABLE_Specs_0_63, STATE_VARIABLE_Specs_64);
  {
    ShortHand_51 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, ShortHand_51, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, ShortHand_51, 1) = ((MR_Box) (ResultVar_37));
    MR_hl_field(2, ShortHand_51, 2) = ((MR_Box) (HLDSCallMagicThenDisjunctionGoal_50));
  }
  {
    GoalExpr_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, GoalExpr_52, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(3, GoalExpr_52, 1) = ((MR_Box) (ShortHand_51));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *TryGoal_30 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_52));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_42));
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_p_0(
  MR_Word LocKind_23,
  MR_Word Renaming_24,
  MR_Word IOStateVarUnrenamed_25,
  MR_Word IOStateVar_26,
  MR_Word Goal0_27,
  MR_Word Then0_28,
  MR_Word Catches0_29,
  MR_Word MaybeCatchAny0_30,
  MR_Word Context_31,
  MR_Word * TryGoal_32,
  MR_Word STATE_VARIABLE_SVarState_0_68,
  MR_Word * STATE_VARIABLE_SVarState_69,
  MR_Word STATE_VARIABLE_SVarStore_0_70,
  MR_Word * STATE_VARIABLE_SVarStore_71,
  MR_Word STATE_VARIABLE_VarSet_0_72,
  MR_Word * STATE_VARIABLE_VarSet_73,
  MR_Word STATE_VARIABLE_ModuleInfo_0_74,
  MR_Word * STATE_VARIABLE_ModuleInfo_75,
  MR_Word STATE_VARIABLE_QualInfo_0_76,
  MR_Word * STATE_VARIABLE_QualInfo_77,
  MR_Word STATE_VARIABLE_Specs_0_78,
  MR_Word * STATE_VARIABLE_Specs_79)
{
  MR_Word ResultVar_39;
  MR_Word ExcpVar_40;
  MR_Word ResultVarTerm_41;
  MR_Word ExcpVarTerm_42;
  MR_Word NullTupleTerm_43;
  MR_Word GoalInfo_44;
  MR_Word CallMagicGoal_45;
  MR_Word HLDSCallMagicGoal_46;
  MR_Word IOStateVarBefore_47;
  MR_Word ResultIsSucceededUnifyGoal_49;
  MR_Word HLDSResultIsSucceededUnifyGoal_50;
  MR_Word IOUnify_51;
  MR_Word ScopedGoal_52;
  MR_Word HLDSScopedGoal_53;
  MR_Word IOStateVarAfter_54;
  MR_Word ScopedThenGoal_55;
  MR_Word HLDSScopedThenGoal_56;
  MR_Word HLDSResultIsSucceededDisjunctGoal_57;
  MR_Word SVarStateAfterResultIsSucceededDisjunct_58;
  MR_Word ResultIsExceptionDisjunctGoal_59;
  MR_Word HLDSResultIsExceptionDisjunctGoal_60;
  MR_Word SVarStateAfterResultIsExceptionDisjunct_61;
  MR_Word DisjunctSVarStates_62;
  MR_Word HLDSDisjuncts_63;
  MR_Word HLDSDisjunction_64;
  MR_Word CallMagicThenDisjunction_65;
  MR_Word IOStateVars_66;
  MR_Word GoalExpr_67;
  MR_Word STATE_VARIABLE_VarSet_81_81;
  MR_Word STATE_VARIABLE_VarSet_82_82;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Word STATE_VARIABLE_SVarState_90_90;
  MR_Word STATE_VARIABLE_SVarStore_91_91;
  MR_Word STATE_VARIABLE_VarSet_92_92;
  MR_Word STATE_VARIABLE_ModuleInfo_93_93;
  MR_Word STATE_VARIABLE_QualInfo_94_94;
  MR_Word STATE_VARIABLE_Specs_95_95;
  MR_Word STATE_VARIABLE_VarSet_96_96;
  MR_Word STATE_VARIABLE_Specs_98_98;
  MR_Word Var_99;
  MR_Word STATE_VARIABLE_SVarState_102_102;
  MR_Word STATE_VARIABLE_SVarStore_103_103;
  MR_Word STATE_VARIABLE_VarSet_104_104;
  MR_Word STATE_VARIABLE_ModuleInfo_105_105;
  MR_Word STATE_VARIABLE_QualInfo_106_106;
  MR_Word STATE_VARIABLE_Specs_107_107;
  MR_Word Var_108;
  MR_Word Var_111;
  MR_Word Var_112;
  MR_Word Var_114;
  MR_Word Var_124;
  MR_Word Var_125;
  MR_Word STATE_VARIABLE_SVarState_127_127;
  MR_Word STATE_VARIABLE_SVarStore_128_128;
  MR_Word STATE_VARIABLE_VarSet_129_129;
  MR_Word STATE_VARIABLE_ModuleInfo_130_130;
  MR_Word STATE_VARIABLE_QualInfo_131_131;
  MR_Word STATE_VARIABLE_Specs_132_132;
  MR_Word STATE_VARIABLE_VarSet_133_133;
  MR_Word STATE_VARIABLE_SVarState_134_134;
  MR_Word STATE_VARIABLE_Specs_135_135;
  MR_Word STATE_VARIABLE_SVarStore_140_140;
  MR_Word STATE_VARIABLE_VarSet_141_141;
  MR_Word STATE_VARIABLE_ModuleInfo_142_142;
  MR_Word STATE_VARIABLE_QualInfo_143_143;
  MR_Word STATE_VARIABLE_Specs_144_144;
  MR_Word Var_145;
  MR_Word Var_146;
  MR_Word Var_147;
  MR_Word STATE_VARIABLE_SVarState_149_149;
  MR_Word STATE_VARIABLE_SVarStore_151_151;
  MR_Word STATE_VARIABLE_VarSet_152_152;
  MR_Word Var_156;
  MR_Word Var_157;
  MR_Word Var_158;
  MR_Word Var_163;
  MR_Word Var_164;
  MR_Word Var_166;
  MR_Word Var_167;

  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "TryResult", &ResultVar_39, STATE_VARIABLE_VarSet_0_72, &STATE_VARIABLE_VarSet_81_81);
  mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &ExcpVar_40, STATE_VARIABLE_VarSet_81_81, &STATE_VARIABLE_VarSet_82_82);
  {
    ResultVarTerm_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ResultVarTerm_41, 0) = ((MR_Box) (ResultVar_39));
    MR_hl_field(1, ResultVarTerm_41, 1) = ((MR_Box) (Context_31));
  }
  {
    ExcpVarTerm_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ExcpVarTerm_42, 0) = ((MR_Box) (ExcpVar_40));
    MR_hl_field(1, ExcpVarTerm_42, 1) = ((MR_Box) (Context_31));
  }
  {
    NullTupleTerm_43 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, NullTupleTerm_43, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[4]));
    MR_hl_field(0, NullTupleTerm_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, NullTupleTerm_43, 2) = ((MR_Box) (Context_31));
  }
  hlds__hlds_goal__goal_info_init_2_p_0(Context_31, &GoalInfo_44);
  Var_86 = hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_f_0();
  {
    Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_87, 0) = ((MR_Box) (ResultVarTerm_41));
    MR_hl_field(1, Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    CallMagicGoal_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, CallMagicGoal_45, 0) = ((MR_Box) (Context_31));
    MR_hl_field(1, CallMagicGoal_45, 1) = ((MR_Box) (Var_86));
    MR_hl_field(1, CallMagicGoal_45, 2) = ((MR_Box) (Var_87));
    MR_hl_field(1, CallMagicGoal_45, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_23, Renaming_24, CallMagicGoal_45, &HLDSCallMagicGoal_46, STATE_VARIABLE_SVarState_0_68, &STATE_VARIABLE_SVarState_90_90, STATE_VARIABLE_SVarStore_0_70, &STATE_VARIABLE_SVarStore_91_91, STATE_VARIABLE_VarSet_82_82, &STATE_VARIABLE_VarSet_92_92, STATE_VARIABLE_ModuleInfo_0_74, &STATE_VARIABLE_ModuleInfo_93_93, STATE_VARIABLE_QualInfo_0_76, &STATE_VARIABLE_QualInfo_94_94, STATE_VARIABLE_Specs_0_78, &STATE_VARIABLE_Specs_95_95);
  hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(Context_31, IOStateVar_26, &IOStateVarBefore_47, STATE_VARIABLE_VarSet_92_92, &STATE_VARIABLE_VarSet_96_96, STATE_VARIABLE_SVarState_90_90, &STATE_VARIABLE_SVarState_149_149, STATE_VARIABLE_Specs_95_95, &STATE_VARIABLE_Specs_98_98);
  Var_99 = hlds__make_hlds__goal_expr_to_goal__exception_functor_3_f_0((MR_String) "succeeded", NullTupleTerm_43, Context_31);
  {
    ResultIsSucceededUnifyGoal_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ResultIsSucceededUnifyGoal_49, 0) = ((MR_Box) (Context_31));
    MR_hl_field(0, ResultIsSucceededUnifyGoal_49, 1) = ((MR_Box) (ResultVarTerm_41));
    MR_hl_field(0, ResultIsSucceededUnifyGoal_49, 2) = ((MR_Box) (Var_99));
    MR_hl_field(0, ResultIsSucceededUnifyGoal_49, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_23, Renaming_24, ResultIsSucceededUnifyGoal_49, &HLDSResultIsSucceededUnifyGoal_50, STATE_VARIABLE_SVarState_149_149, &STATE_VARIABLE_SVarState_102_102, STATE_VARIABLE_SVarStore_91_91, &STATE_VARIABLE_SVarStore_103_103, STATE_VARIABLE_VarSet_96_96, &STATE_VARIABLE_VarSet_104_104, STATE_VARIABLE_ModuleInfo_93_93, &STATE_VARIABLE_ModuleInfo_105_105, STATE_VARIABLE_QualInfo_94_94, &STATE_VARIABLE_QualInfo_106_106, STATE_VARIABLE_Specs_98_98, &STATE_VARIABLE_Specs_107_107);
  {
    Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_112, 0) = ((MR_Box) (IOStateVarUnrenamed_25));
    MR_hl_field(1, Var_112, 1) = ((MR_Box) (Context_31));
  }
  {
    Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_111, 0) = ((MR_Box) (Var_112));
    MR_hl_field(1, Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_108 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_108, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[0]));
    MR_hl_field(0, Var_108, 1) = ((MR_Box) (Var_111));
    MR_hl_field(0, Var_108, 2) = ((MR_Box) (Context_31));
  }
  {
    Var_114 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_114, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[1]));
    MR_hl_field(0, Var_114, 1) = ((MR_Box) (Var_111));
    MR_hl_field(0, Var_114, 2) = ((MR_Box) (Context_31));
  }
  {
    IOUnify_51 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, IOUnify_51, 0) = ((MR_Box) (Context_31));
    MR_hl_field(0, IOUnify_51, 1) = ((MR_Box) (Var_108));
    MR_hl_field(0, IOUnify_51, 2) = ((MR_Box) (Var_114));
    MR_hl_field(0, IOUnify_51, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_125, 0) = ((MR_Box) (Goal0_27));
    MR_hl_field(1, Var_125, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_124 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_124, 0) = ((MR_Box) (Context_31));
    MR_hl_field(2, Var_124, 1) = ((MR_Box) (IOUnify_51));
    MR_hl_field(2, Var_124, 2) = ((MR_Box) (Var_125));
  }
  {
    ScopedGoal_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ScopedGoal_52, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, ScopedGoal_52, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
    MR_hl_field(3, ScopedGoal_52, 2) = ((MR_Box) (Context_31));
    MR_hl_field(3, ScopedGoal_52, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, ScopedGoal_52, 4) = ((MR_Box) (Var_124));
  }
  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_23, Renaming_24, ScopedGoal_52, &HLDSScopedGoal_53, STATE_VARIABLE_SVarState_102_102, &STATE_VARIABLE_SVarState_127_127, STATE_VARIABLE_SVarStore_103_103, &STATE_VARIABLE_SVarStore_128_128, STATE_VARIABLE_VarSet_104_104, &STATE_VARIABLE_VarSet_129_129, STATE_VARIABLE_ModuleInfo_105_105, &STATE_VARIABLE_ModuleInfo_130_130, STATE_VARIABLE_QualInfo_106_106, &STATE_VARIABLE_QualInfo_131_131, STATE_VARIABLE_Specs_107_107, &STATE_VARIABLE_Specs_132_132);
  hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(Context_31, IOStateVar_26, &IOStateVarAfter_54, STATE_VARIABLE_VarSet_129_129, &STATE_VARIABLE_VarSet_133_133, STATE_VARIABLE_SVarState_127_127, &STATE_VARIABLE_SVarState_134_134, STATE_VARIABLE_Specs_132_132, &STATE_VARIABLE_Specs_135_135);
  {
    ScopedThenGoal_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ScopedThenGoal_55, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, ScopedThenGoal_55, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
    MR_hl_field(3, ScopedThenGoal_55, 2) = ((MR_Box) (Context_31));
    MR_hl_field(3, ScopedThenGoal_55, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, ScopedThenGoal_55, 4) = ((MR_Box) (Then0_28));
  }
  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_23, Renaming_24, ScopedThenGoal_55, &HLDSScopedThenGoal_56, STATE_VARIABLE_SVarState_134_134, &SVarStateAfterResultIsSucceededDisjunct_58, STATE_VARIABLE_SVarStore_128_128, &STATE_VARIABLE_SVarStore_140_140, STATE_VARIABLE_VarSet_133_133, &STATE_VARIABLE_VarSet_141_141, STATE_VARIABLE_ModuleInfo_130_130, &STATE_VARIABLE_ModuleInfo_142_142, STATE_VARIABLE_QualInfo_131_131, &STATE_VARIABLE_QualInfo_143_143, STATE_VARIABLE_Specs_135_135, &STATE_VARIABLE_Specs_144_144);
  {
    Var_147 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_147, 0) = ((MR_Box) (HLDSScopedThenGoal_56));
    MR_hl_field(1, Var_147, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_146 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_146, 0) = ((MR_Box) (HLDSScopedGoal_53));
    MR_hl_field(1, Var_146, 1) = ((MR_Box) (Var_147));
  }
  {
    Var_145 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_145, 0) = ((MR_Box) (HLDSResultIsSucceededUnifyGoal_50));
    MR_hl_field(1, Var_145, 1) = ((MR_Box) (Var_146));
  }
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_145, GoalInfo_44, &HLDSResultIsSucceededDisjunctGoal_57);
  hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(ResultVarTerm_41, ExcpVarTerm_42, Catches0_29, MaybeCatchAny0_30, Context_31, &ResultIsExceptionDisjunctGoal_59);
  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_23, Renaming_24, ResultIsExceptionDisjunctGoal_59, &HLDSResultIsExceptionDisjunctGoal_60, STATE_VARIABLE_SVarState_149_149, &SVarStateAfterResultIsExceptionDisjunct_61, STATE_VARIABLE_SVarStore_140_140, &STATE_VARIABLE_SVarStore_151_151, STATE_VARIABLE_VarSet_141_141, &STATE_VARIABLE_VarSet_152_152, STATE_VARIABLE_ModuleInfo_142_142, STATE_VARIABLE_ModuleInfo_75, STATE_VARIABLE_QualInfo_143_143, STATE_VARIABLE_QualInfo_77, STATE_VARIABLE_Specs_144_144, STATE_VARIABLE_Specs_79);
  {
    Var_156 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_156, 0) = ((MR_Box) (HLDSResultIsSucceededDisjunctGoal_57));
    MR_hl_field(0, Var_156, 1) = ((MR_Box) (SVarStateAfterResultIsSucceededDisjunct_58));
  }
  {
    Var_158 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_158, 0) = ((MR_Box) (HLDSResultIsExceptionDisjunctGoal_60));
    MR_hl_field(0, Var_158, 1) = ((MR_Box) (SVarStateAfterResultIsExceptionDisjunct_61));
  }
  {
    Var_157 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_157, 0) = ((MR_Box) (Var_158));
    MR_hl_field(1, Var_157, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    DisjunctSVarStates_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, DisjunctSVarStates_62, 0) = ((MR_Box) (Var_156));
    MR_hl_field(1, DisjunctSVarStates_62, 1) = ((MR_Box) (Var_157));
  }
  hlds__make_hlds__state_var__svar_finish_disjunction_8_p_0(DisjunctSVarStates_62, &HLDSDisjuncts_63, STATE_VARIABLE_VarSet_152_152, STATE_VARIABLE_VarSet_73, STATE_VARIABLE_SVarState_149_149, STATE_VARIABLE_SVarState_69, STATE_VARIABLE_SVarStore_151_151, STATE_VARIABLE_SVarStore_71);
  hlds__hlds_goal__disj_list_to_goal_3_p_0(HLDSDisjuncts_63, GoalInfo_44, &HLDSDisjunction_64);
  {
    Var_164 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_164, 0) = ((MR_Box) (HLDSDisjunction_64));
    MR_hl_field(1, Var_164, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_163 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_163, 0) = ((MR_Box) (HLDSCallMagicGoal_46));
    MR_hl_field(1, Var_163, 1) = ((MR_Box) (Var_164));
  }
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_163, GoalInfo_44, &CallMagicThenDisjunction_65);
  {
    IOStateVars_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, IOStateVars_66, 0) = ((MR_Box) (IOStateVarBefore_47));
    MR_hl_field(0, IOStateVars_66, 1) = ((MR_Box) (IOStateVarAfter_54));
  }
  {
    Var_167 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_167, 0) = ((MR_Box) (IOStateVars_66));
  }
  {
    Var_166 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_166, 0) = ((MR_Box) (Var_167));
    MR_hl_field(2, Var_166, 1) = ((MR_Box) (ResultVar_39));
    MR_hl_field(2, Var_166, 2) = ((MR_Box) (CallMagicThenDisjunction_65));
  }
  {
    GoalExpr_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, GoalExpr_67, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(3, GoalExpr_67, 1) = ((MR_Box) (Var_166));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *TryGoal_32 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_67));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_44));
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__accumulate_disjunct_16_p_0(
  MR_Word LocKind_17,
  MR_Word Renaming_18,
  MR_Word SVarStateBefore_19,
  MR_Word Goal_20,
  MR_Word STATE_VARIABLE_RevDisjStates_0_30,
  MR_Word * STATE_VARIABLE_RevDisjStates_31,
  MR_Word STATE_VARIABLE_SVarStore_0_32,
  MR_Word * STATE_VARIABLE_SVarStore_33,
  MR_Word STATE_VARIABLE_VarSet_0_34,
  MR_Word * STATE_VARIABLE_VarSet_35,
  MR_Word STATE_VARIABLE_ModuleInfo_0_36,
  MR_Word * STATE_VARIABLE_ModuleInfo_37,
  MR_Word STATE_VARIABLE_QualInfo_0_38,
  MR_Word * STATE_VARIABLE_QualInfo_39,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41)
{
  MR_Word HLDSGoal_27;
  MR_Word SVarStateAfterDisjunct_28;
  MR_Word DisjState_29;

  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Renaming_18, Goal_20, &HLDSGoal_27, SVarStateBefore_19, &SVarStateAfterDisjunct_28, STATE_VARIABLE_SVarStore_0_32, STATE_VARIABLE_SVarStore_33, STATE_VARIABLE_VarSet_0_34, STATE_VARIABLE_VarSet_35, STATE_VARIABLE_ModuleInfo_0_36, STATE_VARIABLE_ModuleInfo_37, STATE_VARIABLE_QualInfo_0_38, STATE_VARIABLE_QualInfo_39, STATE_VARIABLE_Specs_0_40, STATE_VARIABLE_Specs_41);
  {
    DisjState_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, DisjState_29, 0) = ((MR_Box) (HLDSGoal_27));
    MR_hl_field(0, DisjState_29, 1) = ((MR_Box) (SVarStateAfterDisjunct_28));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_RevDisjStates_31 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (DisjState_29));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevDisjStates_0_30));
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__accumulate_plain_or_par_conjunct_18_p_0(
  MR_Word LocKind_19,
  MR_Word Renaming_20,
  MR_Word ConjType_21,
  MR_Word Goal_22,
  MR_Word STATE_VARIABLE_HLDSConjunctsCord_0_34,
  MR_Word * STATE_VARIABLE_HLDSConjunctsCord_35,
  MR_Word STATE_VARIABLE_SVarState_0_36,
  MR_Word * STATE_VARIABLE_SVarState_37,
  MR_Word STATE_VARIABLE_SVarStore_0_38,
  MR_Word * STATE_VARIABLE_SVarStore_39,
  MR_Word STATE_VARIABLE_VarSet_0_40,
  MR_Word * STATE_VARIABLE_VarSet_41,
  MR_Word STATE_VARIABLE_ModuleInfo_0_42,
  MR_Word * STATE_VARIABLE_ModuleInfo_43,
  MR_Word STATE_VARIABLE_QualInfo_0_44,
  MR_Word * STATE_VARIABLE_QualInfo_45,
  MR_Word STATE_VARIABLE_Specs_0_46,
  MR_Word * STATE_VARIABLE_Specs_47)
{
  MR_bool succeeded;
  MR_Word HLDSGoal_30;
  MR_Word HLDSGoalExpr_31;
  MR_Word HLDSConjuncts_33;
  MR_Word Var_58;

  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_19, Renaming_20, Goal_22, &HLDSGoal_30, STATE_VARIABLE_SVarState_0_36, STATE_VARIABLE_SVarState_37, STATE_VARIABLE_SVarStore_0_38, STATE_VARIABLE_SVarStore_39, STATE_VARIABLE_VarSet_0_40, STATE_VARIABLE_VarSet_41, STATE_VARIABLE_ModuleInfo_0_42, STATE_VARIABLE_ModuleInfo_43, STATE_VARIABLE_QualInfo_0_44, STATE_VARIABLE_QualInfo_45, STATE_VARIABLE_Specs_0_46, STATE_VARIABLE_Specs_47);
  HLDSGoalExpr_31 = ((MR_Word) ((MR_hl_field(0, HLDSGoal_30, (MR_Integer) 0))));
  succeeded = ((((MR_tag((MR_Word) HLDSGoalExpr_31)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HLDSGoalExpr_31, (MR_Integer) 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Var_58 = ((MR_Unsigned) ((MR_hl_field(3, HLDSGoalExpr_31, (MR_Integer) 1))) & (MR_Integer) 1);
    HLDSConjuncts_33 = ((MR_Word) ((MR_hl_field(3, HLDSGoalExpr_31, (MR_Integer) 2))));
    succeeded = (ConjType_21 == Var_58);
  }
  if (succeeded)
  {
    MR_Word Var_55;

    Var_55 = mercury__cord__from_list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HLDSConjuncts_33);
    *STATE_VARIABLE_HLDSConjunctsCord_35 = mercury__cord__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), STATE_VARIABLE_HLDSConjunctsCord_0_34, Var_55);
  }
  else
    mercury__cord__snoc_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (HLDSGoal_30)), STATE_VARIABLE_HLDSConjunctsCord_0_34, STATE_VARIABLE_HLDSConjunctsCord_35);
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__rename_and_maybe_expand_dot_var_11_p_0(
  MR_Word Context_12,
  MR_Word MustRename_13,
  MR_Word Renaming_14,
  MR_Word PODVar0_15,
  MR_Word * Var_16,
  MR_Word STATE_VARIABLE_SVarState_0_23,
  MR_Word * STATE_VARIABLE_SVarState_24,
  MR_Word STATE_VARIABLE_VarSet_0_25,
  MR_Word * STATE_VARIABLE_VarSet_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  if (((MR_tag((MR_Word) PODVar0_15)) == (MR_Integer) 1))
  {
    MR_Word DotVar0_21 = ((MR_Word) ((MR_hl_field(1, PODVar0_15, (MR_Integer) 0))));
    MR_Word DotVar_22;

    parse_tree__prog_rename__rename_var_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MustRename_13, Renaming_14, DotVar0_21, &DotVar_22);
    hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(Context_12, DotVar_22, Var_16, STATE_VARIABLE_VarSet_0_25, STATE_VARIABLE_VarSet_26, STATE_VARIABLE_SVarState_0_23, STATE_VARIABLE_SVarState_24, STATE_VARIABLE_Specs_0_27, STATE_VARIABLE_Specs_28);
  }
  else
  {
    MR_Word Var0_20 = ((MR_Word) ((MR_hl_field(0, PODVar0_15, (MR_Integer) 0))));

    parse_tree__prog_rename__rename_var_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MustRename_13, Renaming_14, Var0_20, Var_16);
    *STATE_VARIABLE_SVarState_24 = STATE_VARIABLE_SVarState_0_23;
    *STATE_VARIABLE_VarSet_26 = STATE_VARIABLE_VarSet_0_25;
    *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_8_p_0(
  MR_Word Context_9,
  MR_Word Renaming_10,
  MR_Word VarSet_11,
  MR_Word StateVar0_12,
  MR_Word * StateVar_13,
  MR_String * StateVarName_14,
  MR_Word * GetGoal_15,
  MR_Word * SetGoal_16)
{
  MR_Word IO_17;
  MR_Word GetPredName_18;
  MR_Word SetPredName_19;
  MR_Word SetVar_20;
  MR_Word UseVar_21;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_37;
  MR_Word Var_39;

  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_10, StateVar0_12, StateVar_13);
  mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_11, *StateVar_13, StateVarName_14);
  IO_17 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
  {
    GetPredName_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, GetPredName_18, 0) = ((MR_Box) (IO_17));
    MR_hl_field(1, GetPredName_18, 1) = ((MR_Box) ((MR_String) "unsafe_get_io_state"));
  }
  {
    SetPredName_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SetPredName_19, 0) = ((MR_Box) (IO_17));
    MR_hl_field(1, SetPredName_19, 1) = ((MR_Box) ((MR_String) "unsafe_set_io_state"));
  }
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (StateVar0_12));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) (Context_9));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    SetVar_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SetVar_20, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[0]));
    MR_hl_field(0, SetVar_20, 1) = ((MR_Box) (Var_29));
    MR_hl_field(0, SetVar_20, 2) = ((MR_Box) (Context_9));
  }
  {
    UseVar_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UseVar_21, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[1]));
    MR_hl_field(0, UseVar_21, 1) = ((MR_Box) (Var_29));
    MR_hl_field(0, UseVar_21, 2) = ((MR_Box) (Context_9));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (SetVar_20));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    *GetGoal_15 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Context_9));
    MR_hl_field(1, base, 1) = ((MR_Box) (GetPredName_18));
    MR_hl_field(1, base, 2) = ((MR_Box) (Var_37));
    MR_hl_field(1, base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (UseVar_21));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    *SetGoal_16 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Context_9));
    MR_hl_field(1, base, 1) = ((MR_Box) (SetPredName_19));
    MR_hl_field(1, base, 2) = ((MR_Box) (Var_39));
    MR_hl_field(1, base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__exception_functor_3_f_0(
  MR_String Atom_5,
  MR_Word Arg_6,
  MR_Word Context_7)
{
  MR_Word Term_8;
  MR_Word SymName_9;
  MR_Word Var_10;
  MR_Word Var_11;

  Var_10 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
  {
    SymName_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_9, 0) = ((MR_Box) (Var_10));
    MR_hl_field(1, SymName_9, 1) = ((MR_Box) (Atom_5));
  }
  {
    Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_11, 0) = ((MR_Box) (Arg_6));
    MR_hl_field(1, Var_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SymName_9, Var_11, Context_7, &Term_8);
  return Term_8;
}

static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word Var_2;

  Var_2 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
  {
    HeadVar__1_1 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__1_1, 0) = ((MR_Box) (Var_2));
    MR_hl_field(1, HeadVar__1_1, 1) = ((MR_Box) ((MR_String) "magic_exception_result"));
  }
  return HeadVar__1_1;
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(
  MR_Word ResultVarTerm_7,
  MR_Word ExcpVarTerm_8,
  MR_Word Catches_9,
  MR_Word MaybeCatchAny_10,
  MR_Word Context_11,
  MR_Word * Goal_12)
{
  MR_Word ResultIsExceptionUnify_13;
  MR_Word CatchChain_14;
  MR_Word Var_15;
  MR_Word Var_18;
  MR_Word SymName_20;
  MR_Word Var_21;
  MR_Word Var_22;

  Var_21 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
  {
    SymName_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_20, 0) = ((MR_Box) (Var_21));
    MR_hl_field(1, SymName_20, 1) = ((MR_Box) ((MR_String) "exception"));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (ExcpVarTerm_8));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SymName_20, Var_22, Context_11, &Var_15);
  {
    ResultIsExceptionUnify_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ResultIsExceptionUnify_13, 0) = ((MR_Box) (Context_11));
    MR_hl_field(0, ResultIsExceptionUnify_13, 1) = ((MR_Box) (ResultVarTerm_7));
    MR_hl_field(0, ResultIsExceptionUnify_13, 2) = ((MR_Box) (Var_15));
    MR_hl_field(0, ResultIsExceptionUnify_13, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(ResultVarTerm_7, ExcpVarTerm_8, Catches_9, MaybeCatchAny_10, &CatchChain_14);
  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = ((MR_Box) (CatchChain_14));
    MR_hl_field(1, Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    *Goal_12 = base;
    MR_hl_field(2, base, 0) = ((MR_Box) (Context_11));
    MR_hl_field(2, base, 1) = ((MR_Box) (ResultIsExceptionUnify_13));
    MR_hl_field(2, base, 2) = ((MR_Box) (Var_18));
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(
  MR_Word ResultVarTerm_6,
  MR_Word ExcpVarTerm_7,
  MR_Word Catches_8,
  MR_Word MaybeCatchAny_9,
  MR_Word * Goal_10)
{
  if ((Catches_8 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((MaybeCatchAny_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Rethrow_20;
      MR_Word Var_32;
      MR_Word Var_34;
      MR_Word Var_35;

      Var_32 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
      {
        Rethrow_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Rethrow_20, 0) = ((MR_Box) (Var_32));
        MR_hl_field(1, Rethrow_20, 1) = ((MR_Box) ((MR_String) "rethrow"));
      }
      Var_34 = mercury__term__get_term_context_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ExcpVarTerm_7);
      {
        Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_35, 0) = ((MR_Box) (ResultVarTerm_6));
        MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        *Goal_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_34));
        MR_hl_field(1, base, 1) = ((MR_Box) (Rethrow_20));
        MR_hl_field(1, base, 2) = ((MR_Box) (Var_35));
        MR_hl_field(1, base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
    }
    else
    {
      MR_Word CatchAnyVar_16;
      MR_Word CatchAnyGoal_17;
      MR_Word Context_18;
      MR_Word GetUnivValue_19;
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, MaybeCatchAny_9, (MR_Integer) 0))));
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_30;
      MR_Word SymName_40;
      MR_Word Var_41;
      MR_Word Var_42;

      CatchAnyVar_16 = ((MR_Word) ((MR_hl_field(0, Var_25, (MR_Integer) 0))));
      CatchAnyGoal_17 = ((MR_Word) ((MR_hl_field(0, Var_25, (MR_Integer) 1))));
      Context_18 = parse_tree__prog_item__get_goal_context_1_f_0(CatchAnyGoal_17);
      {
        Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_26, 0) = ((MR_Box) (CatchAnyVar_16));
        MR_hl_field(1, Var_26, 1) = ((MR_Box) (Context_18));
      }
      Var_41 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
      {
        SymName_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, SymName_40, 0) = ((MR_Box) (Var_41));
        MR_hl_field(1, SymName_40, 1) = ((MR_Box) ((MR_String) "exc_univ_value"));
      }
      {
        Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_42, 0) = ((MR_Box) (ExcpVarTerm_7));
        MR_hl_field(1, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SymName_40, Var_42, Context_18, &Var_27);
      {
        GetUnivValue_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, GetUnivValue_19, 0) = ((MR_Box) (Context_18));
        MR_hl_field(0, GetUnivValue_19, 1) = ((MR_Box) (Var_26));
        MR_hl_field(0, GetUnivValue_19, 2) = ((MR_Box) (Var_27));
        MR_hl_field(0, GetUnivValue_19, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      {
        Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_30, 0) = ((MR_Box) (CatchAnyGoal_17));
        MR_hl_field(1, Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *Goal_10 = base;
        MR_hl_field(2, base, 0) = ((MR_Box) (Context_18));
        MR_hl_field(2, base, 1) = ((MR_Box) (GetUnivValue_19));
        MR_hl_field(2, base, 2) = ((MR_Box) (Var_30));
      }
    }
  else
  {
    MR_Word FirstPattern_11;
    MR_Word FirstGoal_12;
    MR_Word RestCatches_13 = ((MR_Word) ((MR_hl_field(1, Catches_8, (MR_Integer) 1))));
    MR_Word ElseGoal_14;
    MR_Word FirstPatternGoal_15;
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, Catches_8, (MR_Integer) 0))));
    MR_Word Var_22;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_49;
    MR_Word Var_50;

    FirstPattern_11 = ((MR_Word) ((MR_hl_field(0, Var_21, (MR_Integer) 0))));
    FirstGoal_12 = ((MR_Word) ((MR_hl_field(0, Var_21, (MR_Integer) 1))));
    hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(ResultVarTerm_6, ExcpVarTerm_7, RestCatches_13, MaybeCatchAny_9, &ElseGoal_14);
    Var_45 = mercury__term__get_term_context_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), FirstPattern_11);
    Var_47 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    {
      Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_String) "exc_univ_to_type"));
    }
    {
      Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_50, 0) = ((MR_Box) (FirstPattern_11));
      MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = ((MR_Box) (ExcpVarTerm_7));
      MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_50));
    }
    {
      FirstPatternGoal_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FirstPatternGoal_15, 0) = ((MR_Box) (Var_45));
      MR_hl_field(1, FirstPatternGoal_15, 1) = ((MR_Box) (Var_46));
      MR_hl_field(1, FirstPatternGoal_15, 2) = ((MR_Box) (Var_49));
      MR_hl_field(1, FirstPatternGoal_15, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    Var_22 = mercury__term__get_term_context_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), FirstPattern_11);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
      *Goal_10 = base;
      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, base, 1) = ((MR_Box) (Var_22));
      MR_hl_field(3, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, base, 4) = ((MR_Box) (FirstPatternGoal_15));
      MR_hl_field(3, base, 5) = ((MR_Box) (FirstGoal_12));
      MR_hl_field(3, base, 6) = ((MR_Box) (ElseGoal_14));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_18_p_0(
  MR_Word LocKind_19,
  MR_Word Renaming_20,
  MR_Word AccessType_21,
  MR_Word ArgTerms0_22,
  MR_Word Context_23,
  MR_Word * HLDSGoal_24,
  MR_Word STATE_VARIABLE_SVarState_0_54,
  MR_Word * STATE_VARIABLE_SVarState_55,
  MR_Word STATE_VARIABLE_SVarStore_0_56,
  MR_Word * STATE_VARIABLE_SVarStore_57,
  MR_Word STATE_VARIABLE_VarSet_0_58,
  MR_Word * STATE_VARIABLE_VarSet_59,
  MR_Word STATE_VARIABLE_ModuleInfo_0_60,
  MR_Word * STATE_VARIABLE_ModuleInfo_61,
  MR_Word STATE_VARIABLE_QualInfo_0_62,
  MR_Word * STATE_VARIABLE_QualInfo_63,
  MR_Word STATE_VARIABLE_Specs_0_64,
  MR_Word * STATE_VARIABLE_Specs_65)
{
  MR_bool succeeded;
  MR_Word ArgTerms1_31;
  MR_Word GoalInfo_32;
  MR_Word FieldNameTerm_37;
  MR_Word FieldValueTerm_38;
  MR_Word Var_68;
  MR_Word LHSTerm_33;
  MR_Word RHSTerm_34;
  MR_Word Var_67;
  MR_Word Var_69;
  MR_Word Var_70;

  parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_20, ArgTerms0_22, &ArgTerms1_31);
  hlds__hlds_goal__goal_info_init_2_p_0(Context_23, &GoalInfo_32);
  succeeded = (ArgTerms1_31 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    LHSTerm_33 = ((MR_Word) ((MR_hl_field(1, ArgTerms1_31, (MR_Integer) 0))));
    Var_67 = ((MR_Word) ((MR_hl_field(1, ArgTerms1_31, (MR_Integer) 1))));
    succeeded = (Var_67 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      RHSTerm_34 = ((MR_Word) ((MR_hl_field(1, Var_67, (MR_Integer) 0))));
      Var_68 = ((MR_Word) ((MR_hl_field(1, Var_67, (MR_Integer) 1))));
      succeeded = (Var_68 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_69 = ((MR_Word) ((MR_hl_field(1, Var_68, (MR_Integer) 1))));
        succeeded = (Var_69 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_70 = ((MR_Word) ((MR_hl_field(1, Var_69, (MR_Integer) 1))));
          succeeded = (Var_70 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            switch (AccessType_21) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  FieldNameTerm_37 = RHSTerm_34;
                  FieldValueTerm_38 = LHSTerm_33;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_71;
                  MR_String Var_72;
                  MR_Word Var_73;
                  MR_Word Var_74;

                  succeeded = ((MR_tag((MR_Word) LHSTerm_33)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_71 = ((MR_Word) ((MR_hl_field(0, LHSTerm_33, (MR_Integer) 0))));
                    Var_73 = ((MR_Word) ((MR_hl_field(0, LHSTerm_33, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_71)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_72 = ((MR_String) ((MR_hl_field(0, Var_71, (MR_Integer) 0))));
                      succeeded = (strcmp(Var_72, (MR_String) "^") == 0);
                      if (succeeded)
                      {
                        succeeded = (Var_73 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          FieldNameTerm_37 = ((MR_Word) ((MR_hl_field(1, Var_73, (MR_Integer) 0))));
                          Var_74 = ((MR_Word) ((MR_hl_field(1, Var_73, (MR_Integer) 1))));
                          succeeded = (Var_74 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            FieldValueTerm_38 = RHSTerm_34;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                    }
                  }
                }
                break;
            }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word ContextPieces_41;
    MR_Word MaybeFieldNames_42;

    ContextPieces_41 = hlds__make_hlds__goal_expr_to_goal__dcg_field_error_context_pieces_1_f_0(AccessType_21);
    hlds__make_hlds__field_access__parse_field_list_4_p_0(FieldNameTerm_37, STATE_VARIABLE_VarSet_0_58, ContextPieces_41, &MaybeFieldNames_42);
    if (((MR_tag((MR_Word) MaybeFieldNames_42)) == (MR_Integer) 0))
    {
      MR_Word FieldNamesSpecs_45 = ((MR_Word) ((MR_hl_field(0, MaybeFieldNames_42, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_Specs_85_85;

      STATE_VARIABLE_Specs_85_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), FieldNamesSpecs_45, STATE_VARIABLE_Specs_0_64);
      hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_p_0((MR_String) "^", ArgTerms1_31, GoalInfo_32, HLDSGoal_24, STATE_VARIABLE_VarSet_0_58, STATE_VARIABLE_VarSet_59, STATE_VARIABLE_SVarState_0_54, STATE_VARIABLE_SVarState_55, STATE_VARIABLE_Specs_85_85, STATE_VARIABLE_Specs_65);
      hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 1, STATE_VARIABLE_QualInfo_0_62, STATE_VARIABLE_QualInfo_63);
      *STATE_VARIABLE_SVarStore_57 = STATE_VARIABLE_SVarStore_0_56;
      *STATE_VARIABLE_ModuleInfo_61 = STATE_VARIABLE_ModuleInfo_0_60;
    }
    else
    {
      MR_Word FieldNames_43 = ((MR_Word) ((MR_hl_field(1, MaybeFieldNames_42, (MR_Integer) 0))));
      MR_Word ArgTerms_44;
      MR_Word STATE_VARIABLE_SVarState_78_78;

      {
        ArgTerms_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ArgTerms_44, 0) = ((MR_Box) (FieldValueTerm_38));
        MR_hl_field(1, ArgTerms_44, 1) = ((MR_Box) (Var_68));
      }
      hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_p_0(AccessType_21, FieldNames_43, ArgTerms_44, Context_23, HLDSGoal_24, STATE_VARIABLE_SVarState_0_54, &STATE_VARIABLE_SVarState_78_78, STATE_VARIABLE_SVarStore_0_56, STATE_VARIABLE_SVarStore_57, STATE_VARIABLE_VarSet_0_58, STATE_VARIABLE_VarSet_59, STATE_VARIABLE_ModuleInfo_0_60, STATE_VARIABLE_ModuleInfo_61, STATE_VARIABLE_QualInfo_0_62, STATE_VARIABLE_QualInfo_63, STATE_VARIABLE_Specs_0_64, STATE_VARIABLE_Specs_65);
      hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(LocKind_19, STATE_VARIABLE_SVarState_78_78, STATE_VARIABLE_SVarState_55);
    }
  }
  else
  {
    MR_Word Pieces_46;
    MR_Word Spec_53;
    MR_Word STATE_VARIABLE_Specs_95_95;

    hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_p_0((MR_String) "^", ArgTerms1_31, GoalInfo_32, HLDSGoal_24, STATE_VARIABLE_VarSet_0_58, STATE_VARIABLE_VarSet_59, STATE_VARIABLE_SVarState_0_54, STATE_VARIABLE_SVarState_55, STATE_VARIABLE_Specs_0_64, &STATE_VARIABLE_Specs_95_95);
    hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 1, STATE_VARIABLE_QualInfo_0_62, STATE_VARIABLE_QualInfo_63);
    switch (AccessType_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_105;
          MR_Word Var_106;

          Var_106 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[14])));
          Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_106, (MR_Word) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[15])));
          Pieces_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[10])), Var_105);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHSTerm_182;
          MR_Word Var_117;
          MR_Word Var_118;
          MR_Word Var_119;
          MR_Word Var_120;
          MR_Word Var_121;
          MR_String Var_122;
          MR_Word Var_123;
          MR_Word Var_124;

          succeeded = (ArgTerms1_31 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            LHSTerm_182 = ((MR_Word) ((MR_hl_field(1, ArgTerms1_31, (MR_Integer) 0))));
            Var_117 = ((MR_Word) ((MR_hl_field(1, ArgTerms1_31, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) LHSTerm_182)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_121 = ((MR_Word) ((MR_hl_field(0, LHSTerm_182, (MR_Integer) 0))));
              Var_123 = ((MR_Word) ((MR_hl_field(0, LHSTerm_182, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_121)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_122 = ((MR_String) ((MR_hl_field(0, Var_121, (MR_Integer) 0))));
                succeeded = (strcmp(Var_122, (MR_String) "^") == 0);
                if (succeeded)
                {
                  succeeded = (Var_123 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_124 = ((MR_Word) ((MR_hl_field(1, Var_123, (MR_Integer) 1))));
                    succeeded = (Var_124 == (MR_Word) ((MR_Unsigned) 0U));
                  }
                }
              }
            }
            succeeded = !(succeeded);
            if (succeeded)
            {
              succeeded = (Var_117 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_118 = ((MR_Word) ((MR_hl_field(1, Var_117, (MR_Integer) 1))));
                succeeded = (Var_118 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_119 = ((MR_Word) ((MR_hl_field(1, Var_118, (MR_Integer) 1))));
                  succeeded = (Var_119 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_120 = ((MR_Word) ((MR_hl_field(1, Var_119, (MR_Integer) 1))));
                    succeeded = (Var_120 == (MR_Word) ((MR_Unsigned) 0U));
                  }
                }
              }
            }
          }
          if (succeeded)
          {
            MR_String LHSTermStr_52;
            MR_Word Var_131;
            MR_Word Var_132;
            MR_Word Var_137;
            MR_Word Var_148;
            MR_Word Var_149;
            MR_Word Var_150;
            MR_Word Var_151;

            LHSTermStr_52 = parse_tree__parse_tree_out_term__mercury_limited_term_to_string_vs_4_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *STATE_VARIABLE_VarSet_59, (MR_Integer) 0, (MR_Integer) 70, LHSTerm_182);
            Var_132 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[19])));
            {
              Var_151 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_151, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_151, 1) = ((MR_Box) (LHSTermStr_52));
            }
            {
              Var_150 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_150, 0) = ((MR_Box) (Var_151));
              MR_hl_field(1, Var_150, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[12])));
            }
            Var_149 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_150);
            Var_148 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_149, (MR_Word) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[15])));
            Var_137 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[25])), Var_148);
            Var_131 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_132, Var_137);
            Pieces_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[17])), Var_131);
          }
          else
          {
            MR_Word Var_166;
            MR_Word Var_167;

            Var_167 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[29])));
            Var_166 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_167, (MR_Word) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[15])));
            Pieces_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[27])), Var_166);
          }
        }
        break;
    }
    {
      Spec_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_53, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax\'/18"));
      MR_hl_field(0, Spec_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_53, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_53, 3) = ((MR_Box) (Context_23));
      MR_hl_field(0, Spec_53, 4) = ((MR_Box) (Pieces_46));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_65 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_53));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_95_95));
    }
    *STATE_VARIABLE_ModuleInfo_61 = STATE_VARIABLE_ModuleInfo_0_60;
    *STATE_VARIABLE_SVarStore_57 = STATE_VARIABLE_SVarStore_0_56;
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_p_0(
  MR_String UpdateStr_11,
  MR_Word Args0_12,
  MR_Word GoalInfo_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_VarSet_0_22,
  MR_Word * STATE_VARIABLE_VarSet_23,
  MR_Word STATE_VARIABLE_SVarState_0_24,
  MR_Word * STATE_VARIABLE_SVarState_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  MR_Word HeadVars_18;
  MR_Word GoalExpr_21;
  MR_Word Var_31;
  MR_Integer Var_32;
  MR_Word Var_34;
  MR_Word _HeadVarsArgs0_19;

  hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_9_p_0(Args0_12, &HeadVars_18, &_HeadVarsArgs0_19, STATE_VARIABLE_VarSet_0_22, STATE_VARIABLE_VarSet_23, STATE_VARIABLE_SVarState_0_24, STATE_VARIABLE_SVarState_25, STATE_VARIABLE_Specs_0_26, STATE_VARIABLE_Specs_27);
  Var_31 = hlds__hlds_pred__invalid_pred_id_0_f_0();
  Var_32 = hlds__hlds_pred__invalid_proc_id_0_f_0();
  {
    Var_34 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_34, 0) = ((MR_Box) (UpdateStr_11));
  }
  {
    GoalExpr_21 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, GoalExpr_21, 0) = ((MR_Box) (Var_31));
    MR_hl_field(2, GoalExpr_21, 1) = ((MR_Box) (Var_32));
    MR_hl_field(2, GoalExpr_21, 2) = ((MR_Box) (HeadVars_18));
    MR_hl_field(2, GoalExpr_21, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(2, GoalExpr_21, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, GoalExpr_21, 5) = ((MR_Box) (Var_34));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_21));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_13));
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__dcg_field_error_context_pieces_1_f_0(
  MR_Word AccessType_3)
{
  MR_Word ContextPieces_4;

  switch (AccessType_3) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ContextPieces_4 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[31]));
      break;
    case (MR_Integer) 1:
      ContextPieces_4 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[33]));
      break;
  }
  return ContextPieces_4;
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_p_0(
  MR_Word AccessType_18,
  MR_Word FieldNames_19,
  MR_Word ArgTerms_20,
  MR_Word Context_21,
  MR_Word * HLDSGoal_22,
  MR_Word STATE_VARIABLE_SVarState_0_68,
  MR_Word * STATE_VARIABLE_SVarState_69,
  MR_Word STATE_VARIABLE_SVarStore_0_70,
  MR_Word * STATE_VARIABLE_SVarStore_71,
  MR_Word STATE_VARIABLE_VarSet_0_72,
  MR_Word * STATE_VARIABLE_VarSet_73,
  MR_Word STATE_VARIABLE_ModuleInfo_0_74,
  MR_Word * STATE_VARIABLE_ModuleInfo_75,
  MR_Word STATE_VARIABLE_QualInfo_0_76,
  MR_Word * STATE_VARIABLE_QualInfo_77,
  MR_Word STATE_VARIABLE_Specs_0_78,
  MR_Word * STATE_VARIABLE_Specs_79)
{
  MR_bool succeeded;
  MR_Word ArgVarsTerms_30;
  MR_Word FieldValueVarTerm_31;
  MR_Word TermInputVarTerm_32;
  MR_Word TermOutputVarTerm_33;
  MR_Word FieldValueVar_42;
  MR_Word FieldValueTerm_43;
  MR_Word TermInputVar_44;
  MR_Word TermInputTerm_45;
  MR_Word TermOutputVar_46;
  MR_Word TermOutputTerm_47;
  MR_Word InputTermArgContext_49;
  MR_Word Functor_50;
  MR_Word HLDSGoal0_53;
  MR_Integer FieldArgNumber_54;
  MR_Word FieldArgContext_55;
  MR_Integer OutputTermArgNumber_61;
  MR_Word OutputTermArgContext_62;
  MR_Word FieldValueVTNC_64;
  MR_Word TermInputVTNC_65;
  MR_Word TermOutputVTNC_66;
  MR_Word ArgVarsTermsNumsContexts_67;
  MR_Word STATE_VARIABLE_VarSet_80_80;
  MR_Word STATE_VARIABLE_SVarState_81_81;
  MR_Word STATE_VARIABLE_Specs_82_82;
  MR_Word STATE_VARIABLE_SVarState_99_99;
  MR_Word STATE_VARIABLE_SVarStore_100_100;
  MR_Word STATE_VARIABLE_VarSet_101_101;
  MR_Word STATE_VARIABLE_ModuleInfo_102_102;
  MR_Word STATE_VARIABLE_QualInfo_103_103;
  MR_Word STATE_VARIABLE_Specs_104_104;
  MR_Word Var_127;
  MR_Word Var_128;
  MR_Word _ArgVars_29;

  hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_9_p_0(ArgTerms_20, &_ArgVars_29, &ArgVarsTerms_30, STATE_VARIABLE_VarSet_0_72, &STATE_VARIABLE_VarSet_80_80, STATE_VARIABLE_SVarState_0_68, &STATE_VARIABLE_SVarState_81_81, STATE_VARIABLE_Specs_0_78, &STATE_VARIABLE_Specs_82_82);
  if ((ArgVarsTerms_30 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "arity != 3");
      return;
    }
  else
  {
    MR_Word Var_153 = ((MR_Word) ((MR_hl_field(1, ArgVarsTerms_30, (MR_Integer) 1))));
    MR_Word Var_154 = ((MR_Word) ((MR_hl_field(1, ArgVarsTerms_30, (MR_Integer) 0))));

    if ((Var_153 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "arity != 3");
        return;
      }
    else
    {
      MR_Word Var_155 = ((MR_Word) ((MR_hl_field(1, Var_153, (MR_Integer) 1))));
      MR_Word Var_156 = ((MR_Word) ((MR_hl_field(1, Var_153, (MR_Integer) 0))));

      if ((Var_155 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "arity != 3");
          return;
        }
      else
      {
        MR_Word Var_157 = ((MR_Word) ((MR_hl_field(1, Var_155, (MR_Integer) 1))));
        MR_Word Var_158 = ((MR_Word) ((MR_hl_field(1, Var_155, (MR_Integer) 0))));

        if ((Var_157 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          FieldValueVarTerm_31 = Var_154;
          TermInputVarTerm_32 = Var_156;
          TermOutputVarTerm_33 = Var_158;
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "arity != 3");
            return;
          }
      }
    }
  }
  FieldValueVar_42 = ((MR_Word) ((MR_hl_field(0, FieldValueVarTerm_31, (MR_Integer) 0))));
  FieldValueTerm_43 = ((MR_Word) ((MR_hl_field(0, FieldValueVarTerm_31, (MR_Integer) 1))));
  TermInputVar_44 = ((MR_Word) ((MR_hl_field(0, TermInputVarTerm_32, (MR_Integer) 0))));
  TermInputTerm_45 = ((MR_Word) ((MR_hl_field(0, TermInputVarTerm_32, (MR_Integer) 1))));
  TermOutputVar_46 = ((MR_Word) ((MR_hl_field(0, TermOutputVarTerm_33, (MR_Integer) 0))));
  TermOutputTerm_47 = ((MR_Word) ((MR_hl_field(0, TermOutputVarTerm_33, (MR_Integer) 1))));
  switch (AccessType_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_113;
        MR_Word Var_123;
        MR_Word Var_124;
        MR_Word InnermostFunctor_139;
        MR_Word ConsName_141;
        MR_Integer ConsArity_142;
        MR_Word PFSymNameArity_144;
        MR_Word DuCtor_137;

        hlds__make_hlds__field_access__expand_dcg_field_extraction_goal_22_p_0(Context_21, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), FieldNames_19, FieldValueVar_42, TermInputVar_44, TermOutputVar_46, &Functor_50, &Var_113, &HLDSGoal0_53, STATE_VARIABLE_SVarState_81_81, &STATE_VARIABLE_SVarState_99_99, STATE_VARIABLE_SVarStore_0_70, &STATE_VARIABLE_SVarStore_100_100, STATE_VARIABLE_VarSet_80_80, &STATE_VARIABLE_VarSet_101_101, STATE_VARIABLE_ModuleInfo_0_74, &STATE_VARIABLE_ModuleInfo_102_102, STATE_VARIABLE_QualInfo_0_76, &STATE_VARIABLE_QualInfo_103_103, STATE_VARIABLE_Specs_82_82, &STATE_VARIABLE_Specs_104_104);
        InnermostFunctor_139 = ((MR_Word) ((MR_hl_field(0, Var_113, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) InnermostFunctor_139)) == (MR_Integer) 1);
        if (succeeded)
        {
          DuCtor_137 = (MR_Word) (MR_body((MR_Word) (InnermostFunctor_139), (MR_Integer) 1));
          ConsName_141 = ((MR_Word) ((MR_hl_field(0, DuCtor_137, (MR_Integer) 0))));
          ConsArity_142 = ((MR_Integer) ((MR_hl_field(0, DuCtor_137, (MR_Integer) 1))));
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "not cons");
            return;
          }
        Var_123 = (MR_Word) (ConsArity_142);
        {
          PFSymNameArity_144 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PFSymNameArity_144, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(0, PFSymNameArity_144, 1) = ((MR_Box) (ConsName_141));
          MR_hl_field(0, PFSymNameArity_144, 2) = ((MR_Box) (Var_123));
        }
        FieldArgNumber_54 = (MR_Integer) 2;
        {
          Var_124 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_124, 0) = ((MR_Box) (PFSymNameArity_144));
        }
        {
          FieldArgContext_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, FieldArgContext_55, 0) = ((MR_Box) (Var_124));
        }
        OutputTermArgNumber_61 = (MR_Integer) 3;
        {
          OutputTermArgContext_62 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, OutputTermArgContext_62, 0) = ((MR_Box) (Functor_50));
          MR_hl_field(2, OutputTermArgContext_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, OutputTermArgContext_62, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word InnermostFunctor_51;
        MR_Word InnermostSubContext_52;
        MR_Word ConsName_57;
        MR_Integer ConsArity_58;
        MR_Word PFSymNameArity_60;
        MR_Word Var_98;
        MR_Word Var_109;
        MR_Word Var_110;
        MR_Word DuCtor_56;

        hlds__make_hlds__field_access__expand_set_field_function_call_22_p_0(Context_21, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), FieldNames_19, FieldValueVar_42, TermInputVar_44, TermOutputVar_46, &Functor_50, &Var_98, &HLDSGoal0_53, STATE_VARIABLE_SVarState_81_81, &STATE_VARIABLE_SVarState_99_99, STATE_VARIABLE_SVarStore_0_70, &STATE_VARIABLE_SVarStore_100_100, STATE_VARIABLE_VarSet_80_80, &STATE_VARIABLE_VarSet_101_101, STATE_VARIABLE_ModuleInfo_0_74, &STATE_VARIABLE_ModuleInfo_102_102, STATE_VARIABLE_QualInfo_0_76, &STATE_VARIABLE_QualInfo_103_103, STATE_VARIABLE_Specs_82_82, &STATE_VARIABLE_Specs_104_104);
        InnermostFunctor_51 = ((MR_Word) ((MR_hl_field(0, Var_98, (MR_Integer) 0))));
        InnermostSubContext_52 = ((MR_Word) ((MR_hl_field(0, Var_98, (MR_Integer) 1))));
        FieldArgNumber_54 = (MR_Integer) 2;
        {
          FieldArgContext_55 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, FieldArgContext_55, 0) = ((MR_Box) (InnermostFunctor_51));
          MR_hl_field(2, FieldArgContext_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, FieldArgContext_55, 2) = ((MR_Box) (InnermostSubContext_52));
        }
        succeeded = ((MR_tag((MR_Word) Functor_50)) == (MR_Integer) 1);
        if (succeeded)
        {
          DuCtor_56 = (MR_Word) (MR_body((MR_Word) (Functor_50), (MR_Integer) 1));
          ConsName_57 = ((MR_Word) ((MR_hl_field(0, DuCtor_56, (MR_Integer) 0))));
          ConsArity_58 = ((MR_Integer) ((MR_hl_field(0, DuCtor_56, (MR_Integer) 1))));
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "not cons");
            return;
          }
        Var_109 = (MR_Word) (ConsArity_58);
        {
          PFSymNameArity_60 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PFSymNameArity_60, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(0, PFSymNameArity_60, 1) = ((MR_Box) (ConsName_57));
          MR_hl_field(0, PFSymNameArity_60, 2) = ((MR_Box) (Var_109));
        }
        OutputTermArgNumber_61 = (MR_Integer) 3;
        {
          Var_110 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_110, 0) = ((MR_Box) (PFSymNameArity_60));
        }
        {
          OutputTermArgContext_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, OutputTermArgContext_62, 0) = ((MR_Box) (Var_110));
        }
      }
      break;
  }
  {
    InputTermArgContext_49 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, InputTermArgContext_49, 0) = ((MR_Box) (Functor_50));
    MR_hl_field(2, InputTermArgContext_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, InputTermArgContext_49, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    FieldValueVTNC_64 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FieldValueVTNC_64, 0) = ((MR_Box) (FieldValueVar_42));
    MR_hl_field(0, FieldValueVTNC_64, 1) = ((MR_Box) (FieldValueTerm_43));
    MR_hl_field(0, FieldValueVTNC_64, 2) = ((MR_Box) (FieldArgNumber_54));
    MR_hl_field(0, FieldValueVTNC_64, 3) = ((MR_Box) (FieldArgContext_55));
  }
  {
    TermInputVTNC_65 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TermInputVTNC_65, 0) = ((MR_Box) (TermInputVar_44));
    MR_hl_field(0, TermInputVTNC_65, 1) = ((MR_Box) (TermInputTerm_45));
    MR_hl_field(0, TermInputVTNC_65, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, TermInputVTNC_65, 3) = ((MR_Box) (InputTermArgContext_49));
  }
  {
    TermOutputVTNC_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TermOutputVTNC_66, 0) = ((MR_Box) (TermOutputVar_46));
    MR_hl_field(0, TermOutputVTNC_66, 1) = ((MR_Box) (TermOutputTerm_47));
    MR_hl_field(0, TermOutputVTNC_66, 2) = ((MR_Box) (OutputTermArgNumber_61));
    MR_hl_field(0, TermOutputVTNC_66, 3) = ((MR_Box) (OutputTermArgContext_62));
  }
  {
    Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_128, 0) = ((MR_Box) (TermOutputVTNC_66));
    MR_hl_field(1, Var_128, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_127, 0) = ((MR_Box) (TermInputVTNC_65));
    MR_hl_field(1, Var_127, 1) = ((MR_Box) (Var_128));
  }
  {
    ArgVarsTermsNumsContexts_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArgVarsTermsNumsContexts_67, 0) = ((MR_Box) (FieldValueVTNC_64));
    MR_hl_field(1, ArgVarsTermsNumsContexts_67, 1) = ((MR_Box) (Var_127));
  }
  hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_16_p_0(ArgVarsTermsNumsContexts_67, Context_21, HLDSGoal0_53, HLDSGoal_22, STATE_VARIABLE_SVarState_99_99, STATE_VARIABLE_SVarState_69, STATE_VARIABLE_SVarStore_100_100, STATE_VARIABLE_SVarStore_71, STATE_VARIABLE_VarSet_101_101, STATE_VARIABLE_VarSet_73, STATE_VARIABLE_ModuleInfo_102_102, STATE_VARIABLE_ModuleInfo_75, STATE_VARIABLE_QualInfo_103_103, STATE_VARIABLE_QualInfo_77, STATE_VARIABLE_Specs_104_104, STATE_VARIABLE_Specs_79);
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_call_std_18_p_0(
  MR_Word Context_19,
  MR_Word Renaming_20,
  MR_Word SymName_21,
  MR_Word ArgTerms1_22,
  MR_Word Purity_23,
  MR_Word * HLDSGoal_24,
  MR_Word STATE_VARIABLE_SVarState_0_51,
  MR_Word * STATE_VARIABLE_SVarState_52,
  MR_Word STATE_VARIABLE_SVarStore_0_53,
  MR_Word * STATE_VARIABLE_SVarStore_54,
  MR_Word STATE_VARIABLE_VarSet_0_55,
  MR_Word * STATE_VARIABLE_VarSet_56,
  MR_Word STATE_VARIABLE_ModuleInfo_0_57,
  MR_Word * STATE_VARIABLE_ModuleInfo_58,
  MR_Word STATE_VARIABLE_QualInfo_0_59,
  MR_Word * STATE_VARIABLE_QualInfo_60,
  MR_Word STATE_VARIABLE_Specs_0_61,
  MR_Word * STATE_VARIABLE_Specs_62)
{
  MR_bool succeeded;
  MR_Word ArgTerms_31;
  MR_Word HeadVars_32;
  MR_Word HeadVarsArgTerms_33;
  MR_Word PredFormArity_34;
  MR_Word GoalExpr_42;
  MR_Word CallId_43;
  MR_Word GoalInfo_48;
  MR_Word HLDSGoal0_49;
  MR_Word UserArity_50;
  MR_Word STATE_VARIABLE_VarSet_64_64;
  MR_Word STATE_VARIABLE_SVarState_65_65;
  MR_Word STATE_VARIABLE_Specs_66_66;
  MR_Word STATE_VARIABLE_QualInfo_75_75;
  MR_Word Var_76;
  MR_Word Syntax_35;
  MR_Word PredVar_36;
  MR_Word RealHeadVars_37;
  MR_String Var_79;

  parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_20, ArgTerms1_22, &ArgTerms_31);
  hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_9_p_0(ArgTerms_31, &HeadVars_32, &HeadVarsArgTerms_33, STATE_VARIABLE_VarSet_0_55, &STATE_VARIABLE_VarSet_64_64, STATE_VARIABLE_SVarState_0_51, &STATE_VARIABLE_SVarState_65_65, STATE_VARIABLE_Specs_0_61, &STATE_VARIABLE_Specs_66_66);
  PredFormArity_34 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0]), ArgTerms_31);
  succeeded = ((MR_tag((MR_Word) SymName_21)) == (MR_Integer) 0);
  if (succeeded)
  {
    Var_79 = ((MR_String) ((MR_hl_field(0, SymName_21, (MR_Integer) 0))));
    if ((strcmp(Var_79, (MR_String) "") == 0))
    {
      Syntax_35 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    if ((strcmp(Var_79, (MR_String) "call") == 0))
    {
      Syntax_35 = (MR_Integer) 0;
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      succeeded = (HeadVars_32 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        PredVar_36 = ((MR_Word) ((MR_hl_field(1, HeadVars_32, (MR_Integer) 0))));
        RealHeadVars_37 = ((MR_Word) ((MR_hl_field(1, HeadVars_32, (MR_Integer) 1))));
      }
    }
  }
  if (succeeded)
  {
    MR_Word GenericCall_41;
    MR_Word Var_70;

    {
      GenericCall_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, GenericCall_41, 0) = ((MR_Box) (PredVar_36));
      MR_hl_field(0, GenericCall_41, 1) = (MR_Box) (((((MR_Unsigned) (Purity_23) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
      MR_hl_field(0, GenericCall_41, 2) = ((MR_Box) (PredFormArity_34));
      MR_hl_field(0, GenericCall_41, 3) = (MR_Box) ((MR_Unsigned) (Syntax_35));
    }
    {
      GoalExpr_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, GoalExpr_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, GoalExpr_42, 1) = ((MR_Box) (GenericCall_41));
      MR_hl_field(3, GoalExpr_42, 2) = ((MR_Box) (RealHeadVars_37));
      MR_hl_field(3, GoalExpr_42, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, GoalExpr_42, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, GoalExpr_42, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 6));
    }
    {
      Var_70 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_70, 0) = ((MR_Box) (STATE_VARIABLE_VarSet_64_64));
    }
    {
      CallId_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, CallId_43, 0) = ((MR_Box) (Var_70));
      MR_hl_field(1, CallId_43, 1) = ((MR_Box) (GenericCall_41));
    }
  }
  else
  {
    MR_Word PredId_44;
    MR_Integer ModeId_45;
    MR_Word PFSymNameArity_47;

    PredId_44 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    ModeId_45 = hlds__hlds_pred__invalid_proc_id_0_f_0();
    {
      GoalExpr_42 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, GoalExpr_42, 0) = ((MR_Box) (PredId_44));
      MR_hl_field(2, GoalExpr_42, 1) = ((MR_Box) (ModeId_45));
      MR_hl_field(2, GoalExpr_42, 2) = ((MR_Box) (HeadVars_32));
      MR_hl_field(2, GoalExpr_42, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(2, GoalExpr_42, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, GoalExpr_42, 5) = ((MR_Box) (SymName_21));
    }
    {
      PFSymNameArity_47 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PFSymNameArity_47, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(0, PFSymNameArity_47, 1) = ((MR_Box) (SymName_21));
      MR_hl_field(0, PFSymNameArity_47, 2) = ((MR_Box) (PredFormArity_34));
    }
    {
      CallId_43 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, CallId_43, 0) = ((MR_Box) (PFSymNameArity_47));
    }
  }
  hlds__hlds_goal__goal_info_init_context_purity_3_p_0(Context_19, Purity_23, &GoalInfo_48);
  {
    HLDSGoal0_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HLDSGoal0_49, 0) = ((MR_Box) (GoalExpr_42));
    MR_hl_field(0, HLDSGoal0_49, 1) = ((MR_Box) (GoalInfo_48));
  }
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 0, &UserArity_50, PredFormArity_34);
  hlds__make_hlds__qual_info__record_called_pred_or_func_5_p_0((MR_Integer) 0, SymName_21, UserArity_50, STATE_VARIABLE_QualInfo_0_59, &STATE_VARIABLE_QualInfo_75_75);
  {
    Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_76, 0) = ((MR_Box) (CallId_43));
  }
  hlds__make_hlds__superhomogeneous__insert_arg_unifications_17_p_0(HeadVarsArgTerms_33, Context_19, Var_76, HLDSGoal0_49, HLDSGoal_24, STATE_VARIABLE_SVarState_65_65, STATE_VARIABLE_SVarState_52, STATE_VARIABLE_SVarStore_0_53, STATE_VARIABLE_SVarStore_54, STATE_VARIABLE_VarSet_64_64, STATE_VARIABLE_VarSet_56, STATE_VARIABLE_ModuleInfo_0_57, STATE_VARIABLE_ModuleInfo_58, STATE_VARIABLE_QualInfo_75_75, STATE_VARIABLE_QualInfo_60, STATE_VARIABLE_Specs_66_66, STATE_VARIABLE_Specs_62);
}

static MR_bool MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Unify____loc_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__goal_expr_to_goal____Unify____loc_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Compare____loc_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__goal_expr_to_goal____Compare____loc_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__make_hlds__goal_expr_to_goal__init(void)
{
}

void mercury__hlds__make_hlds__goal_expr_to_goal__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__type_ctor_info_loc_kind_0);
}

void mercury__hlds__make_hlds__goal_expr_to_goal__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__goal_expr_to_goal__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.goal_expr_to_goal.
