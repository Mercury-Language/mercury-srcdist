/*
** Automatically generated from `goal_expr_to_goal.m'
** by the Mercury compiler,
** version rotd-2022-06-12
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
#include "counter.mih"
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
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
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
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

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
  MR_Word VarSet_10,
  MR_Word Renaming_11,
  MR_Word Mutable_12,
  MR_Word * MutableHLDS_13,
  MR_Word * StateVar_14,
  MR_Word * GetGoal_15,
  MR_Word * SetGoal_16);

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
  MR_Word Vars0_24,
  MR_Word StateVars0_25,
  MR_Word DotSVars0_26,
  MR_Word ColonSVars0_27,
  MR_Word Context_28,
  MR_Word Renaming_29,
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
  MR_Word HeadVar__2_2,
  MR_Word Renaming_3,
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
  MR_Word SubGoal_23,
  MR_Word ThenGoal_24,
  MR_Word MaybeElseGoal_25,
  MR_Word Catches_26,
  MR_Word MaybeCatchAny_27,
  MR_Word Context_28,
  MR_Word Renaming_29,
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
  MR_Word IOStateVarUnrenamed_24,
  MR_Word IOStateVar_25,
  MR_Word Goal0_26,
  MR_Word Then0_27,
  MR_Word Catches0_28,
  MR_Word MaybeCatchAny0_29,
  MR_Word Context_30,
  MR_Word Renaming_31,
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
  MR_Word ConjType_20,
  MR_Word Renaming_21,
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
  MR_Word VarSet_10,
  MR_Word Renaming_11,
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
hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_p_0(
  MR_Word LocKind_18,
  MR_Word AccessType_19,
  MR_Word ArgTerms0_20,
  MR_Word Context_21,
  MR_Word * HLDSGoal_22,
  MR_Word STATE_VARIABLE_SVarState_0_45,
  MR_Word * STATE_VARIABLE_SVarState_46,
  MR_Word STATE_VARIABLE_SVarStore_0_47,
  MR_Word * STATE_VARIABLE_SVarStore_48,
  MR_Word STATE_VARIABLE_VarSet_0_49,
  MR_Word * STATE_VARIABLE_VarSet_50,
  MR_Word STATE_VARIABLE_ModuleInfo_0_51,
  MR_Word * STATE_VARIABLE_ModuleInfo_52,
  MR_Word STATE_VARIABLE_QualInfo_0_53,
  MR_Word * STATE_VARIABLE_QualInfo_54,
  MR_Word STATE_VARIABLE_Specs_0_55,
  MR_Word * STATE_VARIABLE_Specs_56);

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
  MR_Word STATE_VARIABLE_SVarState_0_70,
  MR_Word * STATE_VARIABLE_SVarState_71,
  MR_Word STATE_VARIABLE_SVarStore_0_72,
  MR_Word * STATE_VARIABLE_SVarStore_73,
  MR_Word STATE_VARIABLE_VarSet_0_74,
  MR_Word * STATE_VARIABLE_VarSet_75,
  MR_Word STATE_VARIABLE_ModuleInfo_0_76,
  MR_Word * STATE_VARIABLE_ModuleInfo_77,
  MR_Word STATE_VARIABLE_QualInfo_0_78,
  MR_Word * STATE_VARIABLE_QualInfo_79,
  MR_Word STATE_VARIABLE_Specs_0_80,
  MR_Word * STATE_VARIABLE_Specs_81);

static MR_bool MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Unify____loc_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Compare____loc_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_1[40][2];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_2[1][3];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_3[6][1];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_4[1][12];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_5[1][21];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_6[1][19];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_7[1][11];




static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_1[40][2] = {
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
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
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
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in DCG field access goal."))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[7])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "^ field1 ^ ... ^ fieldN := Field"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[9])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[11])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Field =^ field1 ^ ... ^ fieldN"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[13])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[15])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In DCG field extraction goal:"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[7])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In DCG field update goal:"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[7])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "part."))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[7])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "else"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[23])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "cannot have an"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[25])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "parameter"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[27])))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "io"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[29])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with an"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[31])))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "goal"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[33])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "try"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[35])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[37])))
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
  {
    ((MR_Box) ((MR_String) "!:"))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "!."))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) ":="))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row   5 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_4[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_5[1][21] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 18)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__type_ctor_info_loc_kind_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_conj_type_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
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
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
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
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_7[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
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



static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
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
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__list__pti_list_1__plain_hlds__make_hlds__state_var__type_ctor_info_hlds_goal_svar_state_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_hlds_goal_svar_state_0)
  }
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
  MR_Word VarSet_10,
  MR_Word Renaming_11,
  MR_Word Mutable_12,
  MR_Word * MutableHLDS_13,
  MR_Word * StateVar_14,
  MR_Word * GetGoal_15,
  MR_Word * SetGoal_16)
{
  MR_String MutableName_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), Mutable_12, (MR_Integer) 0))));
  MR_Word StateVar0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mutable_12, (MR_Integer) 1))));
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

  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_11, StateVar0_18, StateVar_14);
  mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_10, *StateVar_14, &StateVarName_19);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *MutableHLDS_13 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MutableName_17));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (StateVarName_19));
  }
  Var_27 = mercury__string__f_43_43_2_f_0((MR_String) "get_", MutableName_17);
  {
    GetPredName_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), GetPredName_20, 0) = ((MR_Box) (Var_27));
  }
  Var_29 = mercury__string__f_43_43_2_f_0((MR_String) "set_", MutableName_17);
  {
    SetPredName_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), SetPredName_21, 0) = ((MR_Box) (Var_29));
  }
  {
    Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (StateVar0_18));
    MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Context_9));
  }
  {
    Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
    MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    SetVar_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), SetVar_22, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[0]));
    MR_hl_field(MR_mktag(0), SetVar_22, 1) = ((MR_Box) (Var_33));
    MR_hl_field(MR_mktag(0), SetVar_22, 2) = ((MR_Box) (Context_9));
  }
  {
    UseVar_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), UseVar_23, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[1]));
    MR_hl_field(MR_mktag(0), UseVar_23, 1) = ((MR_Box) (Var_33));
    MR_hl_field(MR_mktag(0), UseVar_23, 2) = ((MR_Box) (Context_9));
  }
  {
    Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (SetVar_22));
    MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    *GetGoal_15 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Context_9));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (GetPredName_20));
    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Var_41));
    MR_hl_field(MR_mktag(1), base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  {
    Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (UseVar_23));
    MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    *SetGoal_16 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Context_9));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SetPredName_21));
    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Var_43));
    MR_hl_field(MR_mktag(1), base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
  }
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

  hlds__make_hlds__goal_expr_to_goal__extract_trace_mutable_var_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv43_MutableHLDS_13, &conv42_StateVar_14, &conv41_GetGoal_15, &conv40_SetGoal_16);
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

  hlds__make_hlds__goal_expr_to_goal__accumulate_plain_or_par_conjunct_18_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv32_STATE_VARIABLE_HLDSConjunctsCord_35, ((MR_Word) (wrapper_arg_4)), &conv31_STATE_VARIABLE_SVarState_37, ((MR_Word) (wrapper_arg_6)), &conv30_STATE_VARIABLE_SVarStore_39, ((MR_Word) (wrapper_arg_8)), &conv29_STATE_VARIABLE_VarSet_41, ((MR_Word) (wrapper_arg_10)), &conv28_STATE_VARIABLE_ModuleInfo_43, ((MR_Word) (wrapper_arg_12)), &conv27_STATE_VARIABLE_QualInfo_45, ((MR_Word) (wrapper_arg_14)), &conv26_STATE_VARIABLE_Specs_47);
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

  hlds__make_hlds__goal_expr_to_goal__accumulate_disjunct_16_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv19_STATE_VARIABLE_RevDisjStates_31, ((MR_Word) (wrapper_arg_4)), &conv18_STATE_VARIABLE_SVarStore_33, ((MR_Word) (wrapper_arg_6)), &conv17_STATE_VARIABLE_VarSet_35, ((MR_Word) (wrapper_arg_8)), &conv16_STATE_VARIABLE_ModuleInfo_37, ((MR_Word) (wrapper_arg_10)), &conv15_STATE_VARIABLE_QualInfo_39, ((MR_Word) (wrapper_arg_12)), &conv14_STATE_VARIABLE_Specs_41);
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

  hlds__make_hlds__goal_expr_to_goal__accumulate_plain_or_par_conjunct_18_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_HLDSConjunctsCord_35, ((MR_Word) (wrapper_arg_4)), &conv5_STATE_VARIABLE_SVarState_37, ((MR_Word) (wrapper_arg_6)), &conv4_STATE_VARIABLE_SVarStore_39, ((MR_Word) (wrapper_arg_8)), &conv3_STATE_VARIABLE_VarSet_41, ((MR_Word) (wrapper_arg_10)), &conv2_STATE_VARIABLE_ModuleInfo_43, ((MR_Word) (wrapper_arg_12)), &conv1_STATE_VARIABLE_QualInfo_45, ((MR_Word) (wrapper_arg_14)), &conv0_STATE_VARIABLE_Specs_47);
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
  MR_Word Goal_18,
  MR_Word Renaming_19,
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
    switch (MR_tag((MR_Word) Goal_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Context_1256 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_18, (MR_Integer) 0))));
          MR_Word TermA0_1257 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_18, (MR_Integer) 1))));
          MR_Word TermB0_1258 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_18, (MR_Integer) 2))));
          MR_Word Purity_1259 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Goal_18, (MR_Integer) 3))) & (MR_Integer) 3);
          MR_Word TermA_1260;
          MR_Word TermB_1261;
          MR_Word StateVarA_1262;
          MR_Word Var_1272;
          MR_String Var_1273;
          MR_Word Var_1274;
          MR_Word Var_1275;
          MR_Word Var_1276;

          parse_tree__prog_rename__rename_vars_in_term_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, TermA0_1257, &TermA_1260);
          parse_tree__prog_rename__rename_vars_in_term_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, TermB0_1258, &TermB_1261);
          succeeded = ((MR_tag((MR_Word) TermA_1260)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_1272 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermA_1260, (MR_Integer) 0))));
            Var_1274 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermA_1260, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Var_1272)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_1273 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_1272, (MR_Integer) 0))));
              succeeded = (strcmp(Var_1273, (MR_String) "!") == 0);
              if (succeeded)
              {
                succeeded = (Var_1274 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_1275 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1274, (MR_Integer) 0))));
                  Var_1276 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1274, (MR_Integer) 1))));
                  succeeded = (Var_1276 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) Var_1275)) == (MR_Integer) 1);
                    if (succeeded)
                      StateVarA_1262 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1275, (MR_Integer) 0))));
                  }
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word STATE_VARIABLE_VarSet_60_1277;
            MR_Word STATE_VARIABLE_SVarState_61_1278;
            MR_Word STATE_VARIABLE_Specs_62_1279;
            MR_Word StateVarB_1265;
            MR_Word Var_1280;
            MR_String Var_1281;
            MR_Word Var_1282;
            MR_Word Var_1283;
            MR_Word Var_1284;

            hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(Context_1256, StateVarA_1262, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_60_1277, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_61_1278, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_62_1279);
            succeeded = ((MR_tag((MR_Word) TermB_1261)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_1280 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermB_1261, (MR_Integer) 0))));
              Var_1282 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermB_1261, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_1280)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_1281 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_1280, (MR_Integer) 0))));
                succeeded = (strcmp(Var_1281, (MR_String) "!") == 0);
                if (succeeded)
                {
                  succeeded = (Var_1282 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_1283 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1282, (MR_Integer) 0))));
                    Var_1284 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1282, (MR_Integer) 1))));
                    succeeded = (Var_1284 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) Var_1283)) == (MR_Integer) 1);
                      if (succeeded)
                        StateVarB_1265 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1283, (MR_Integer) 0))));
                    }
                  }
                }
              }
            }
            if (succeeded)
              hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(Context_1256, StateVarB_1265, STATE_VARIABLE_VarSet_60_1277, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_SVarState_61_1278, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_Specs_62_1279, STATE_VARIABLE_Specs_117);
            else
            {
              *STATE_VARIABLE_Specs_117 = STATE_VARIABLE_Specs_62_1279;
              *STATE_VARIABLE_VarSet_111 = STATE_VARIABLE_VarSet_60_1277;
              *STATE_VARIABLE_SVarState_107 = STATE_VARIABLE_SVarState_61_1278;
            }
            *HLDSGoal_20 = hlds__make_goal__true_goal_with_context_1_f_0(Context_1256);
            *STATE_VARIABLE_QualInfo_115 = STATE_VARIABLE_QualInfo_0_114;
            *STATE_VARIABLE_ModuleInfo_113 = STATE_VARIABLE_ModuleInfo_0_112;
            *STATE_VARIABLE_SVarStore_109 = STATE_VARIABLE_SVarStore_0_108;
          }
          else
          {
            MR_Word StateVarB_1305;
            MR_Word Var_1288;
            MR_String Var_1289;
            MR_Word Var_1290;
            MR_Word Var_1291;
            MR_Word Var_1292;

            succeeded = ((MR_tag((MR_Word) TermB_1261)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_1288 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermB_1261, (MR_Integer) 0))));
              Var_1290 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermB_1261, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_1288)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_1289 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_1288, (MR_Integer) 0))));
                succeeded = (strcmp(Var_1289, (MR_String) "!") == 0);
                if (succeeded)
                {
                  succeeded = (Var_1290 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_1291 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1290, (MR_Integer) 0))));
                    Var_1292 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1290, (MR_Integer) 1))));
                    succeeded = (Var_1292 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) Var_1291)) == (MR_Integer) 1);
                      if (succeeded)
                        StateVarB_1305 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1291, (MR_Integer) 0))));
                    }
                  }
                }
              }
            }
            if (succeeded)
            {
              hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(Context_1256, StateVarB_1305, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              *HLDSGoal_20 = hlds__make_goal__true_goal_with_context_1_f_0(Context_1256);
              *STATE_VARIABLE_QualInfo_115 = STATE_VARIABLE_QualInfo_0_114;
              *STATE_VARIABLE_ModuleInfo_113 = STATE_VARIABLE_ModuleInfo_0_112;
              *STATE_VARIABLE_SVarStore_109 = STATE_VARIABLE_SVarStore_0_108;
            }
            else
            {
              MR_Word STATE_VARIABLE_SVarState_81_1298;

              hlds__make_hlds__superhomogeneous__unravel_unification_19_p_0(TermA_1260, TermB_1261, Context_1256, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Purity_1259, HLDSGoal_20, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_81_1298, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(LocKind_17, STATE_VARIABLE_SVarState_81_1298, STATE_VARIABLE_SVarState_107);
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Context_451 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal_18, (MR_Integer) 0))));
          MR_Word SymName_452 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal_18, (MR_Integer) 1))));
          MR_Word ArgTerms0_453 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal_18, (MR_Integer) 2))));
          MR_Word Purity_454 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Goal_18, (MR_Integer) 3))) & (MR_Integer) 3);
          MR_Word ArgTerms1_455;
          MR_Word STATE_VARIABLE_SVarState_84_496;
          MR_Word LHSTerm_456;
          MR_Word RHSTerm_457;
          MR_String Var_492;
          MR_Word Var_493;
          MR_Word Var_494;

          hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(ArgTerms0_453, &ArgTerms1_455);
          succeeded = ((MR_tag((MR_Word) SymName_452)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_492 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_452, (MR_Integer) 0))));
            succeeded = (strcmp(Var_492, (MR_String) "\\=") == 0);
            if (succeeded)
            {
              succeeded = (ArgTerms1_455 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                LHSTerm_456 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms1_455, (MR_Integer) 0))));
                Var_493 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms1_455, (MR_Integer) 1))));
                succeeded = (Var_493 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  RHSTerm_457 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_493, (MR_Integer) 0))));
                  Var_494 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_493, (MR_Integer) 1))));
                  succeeded = (Var_494 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word TransformedGoal_458;
            MR_Word Var_495;

            {
              Var_495 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_495, 0) = ((MR_Box) (Context_451));
              MR_hl_field(MR_mktag(0), Var_495, 1) = ((MR_Box) (LHSTerm_456));
              MR_hl_field(MR_mktag(0), Var_495, 2) = ((MR_Box) (RHSTerm_457));
              MR_hl_field(MR_mktag(0), Var_495, 3) = (MR_Box) ((MR_Unsigned) (Purity_454));
            }
            {
              TransformedGoal_458 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), TransformedGoal_458, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), TransformedGoal_458, 1) = ((MR_Box) (Context_451));
              MR_hl_field(MR_mktag(3), TransformedGoal_458, 2) = ((MR_Box) (Var_495));
            }
            hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, TransformedGoal_458, Renaming_19, HLDSGoal_20, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_84_496, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
          }
          else
          {
            MR_Word RHSTerm0_460;
            MR_Word Remainder_462;
            MR_Word FieldListContext_463;
            MR_Word StateVarNameTerms_464;
            MR_Word StateVarContext_465;
            MR_Word Var_505;
            MR_Word Var_513;
            MR_Word LHSTerm0_459;
            MR_Word StateVar0_461;
            MR_String Var_502;
            MR_Word Var_503;
            MR_Word Var_504;
            MR_String Var_506;
            MR_Word Var_507;
            MR_Word Var_508;
            MR_Word Var_509;
            MR_Word Var_510;
            MR_String Var_511;
            MR_Word Var_512;

            succeeded = ((MR_tag((MR_Word) SymName_452)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_502 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_452, (MR_Integer) 0))));
              succeeded = (strcmp(Var_502, (MR_String) ":=") == 0);
              if (succeeded)
              {
                succeeded = (ArgTerms1_455 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  LHSTerm0_459 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms1_455, (MR_Integer) 0))));
                  Var_503 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms1_455, (MR_Integer) 1))));
                  succeeded = (Var_503 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    RHSTerm0_460 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_503, (MR_Integer) 0))));
                    Var_504 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_503, (MR_Integer) 1))));
                    succeeded = (Var_504 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) LHSTerm0_459)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        Var_505 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHSTerm0_459, (MR_Integer) 0))));
                        Var_507 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHSTerm0_459, (MR_Integer) 1))));
                        FieldListContext_463 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHSTerm0_459, (MR_Integer) 2))));
                        succeeded = ((MR_tag((MR_Word) Var_505)) == (MR_Integer) 0);
                        if (succeeded)
                        {
                          Var_506 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_505, (MR_Integer) 0))));
                          succeeded = (strcmp(Var_506, (MR_String) "^") == 0);
                          if (succeeded)
                          {
                            succeeded = (Var_507 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              StateVar0_461 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_507, (MR_Integer) 0))));
                              Var_508 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_507, (MR_Integer) 1))));
                              succeeded = (Var_508 != (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                Remainder_462 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_508, (MR_Integer) 0))));
                                Var_509 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_508, (MR_Integer) 1))));
                                succeeded = (Var_509 == (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  succeeded = ((MR_tag((MR_Word) StateVar0_461)) == (MR_Integer) 0);
                                  if (succeeded)
                                  {
                                    Var_510 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StateVar0_461, (MR_Integer) 0))));
                                    StateVarNameTerms_464 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StateVar0_461, (MR_Integer) 1))));
                                    StateVarContext_465 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StateVar0_461, (MR_Integer) 2))));
                                    succeeded = ((MR_tag((MR_Word) Var_510)) == (MR_Integer) 0);
                                    if (succeeded)
                                    {
                                      Var_511 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_510, (MR_Integer) 0))));
                                      succeeded = (strcmp(Var_511, (MR_String) "!") == 0);
                                      if (succeeded)
                                      {
                                        succeeded = (StateVarNameTerms_464 != (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          Var_512 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StateVarNameTerms_464, (MR_Integer) 0))));
                                          Var_513 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StateVarNameTerms_464, (MR_Integer) 1))));
                                          succeeded = ((MR_tag((MR_Word) Var_512)) == (MR_Integer) 1);
                                          if (succeeded)
                                            succeeded = (Var_513 == (MR_Word) ((MR_Unsigned) 0U));
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
              }
            }
            if (succeeded)
            {
              MR_Word StateVar_468;
              MR_Word FieldList_469;
              MR_Word Var_520;
              MR_Word Var_521;
              MR_Word Var_525;
              MR_Word Var_526;
              MR_Word LHSTerm_561;
              MR_Word RHSTerm_562;
              MR_Word TransformedGoal_563;

              {
                LHSTerm_561 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), LHSTerm_561, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[0]));
                MR_hl_field(MR_mktag(0), LHSTerm_561, 1) = ((MR_Box) (StateVarNameTerms_464));
                MR_hl_field(MR_mktag(0), LHSTerm_561, 2) = ((MR_Box) (StateVarContext_465));
              }
              {
                StateVar_468 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), StateVar_468, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[1]));
                MR_hl_field(MR_mktag(0), StateVar_468, 1) = ((MR_Box) (StateVarNameTerms_464));
                MR_hl_field(MR_mktag(0), StateVar_468, 2) = ((MR_Box) (StateVarContext_465));
              }
              {
                Var_521 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_521, 0) = ((MR_Box) (Remainder_462));
                MR_hl_field(MR_mktag(1), Var_521, 1) = ((MR_Box) (Var_513));
              }
              {
                Var_520 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_520, 0) = ((MR_Box) (StateVar_468));
                MR_hl_field(MR_mktag(1), Var_520, 1) = ((MR_Box) (Var_521));
              }
              {
                FieldList_469 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), FieldList_469, 0) = ((MR_Box) (Var_505));
                MR_hl_field(MR_mktag(0), FieldList_469, 1) = ((MR_Box) (Var_520));
                MR_hl_field(MR_mktag(0), FieldList_469, 2) = ((MR_Box) (FieldListContext_463));
              }
              {
                Var_526 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_526, 0) = ((MR_Box) (RHSTerm0_460));
                MR_hl_field(MR_mktag(1), Var_526, 1) = ((MR_Box) (Var_513));
              }
              {
                Var_525 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_525, 0) = ((MR_Box) (FieldList_469));
                MR_hl_field(MR_mktag(1), Var_525, 1) = ((MR_Box) (Var_526));
              }
              {
                RHSTerm_562 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), RHSTerm_562, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[2]));
                MR_hl_field(MR_mktag(0), RHSTerm_562, 1) = ((MR_Box) (Var_525));
                MR_hl_field(MR_mktag(0), RHSTerm_562, 2) = ((MR_Box) (Context_451));
              }
              {
                TransformedGoal_563 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TransformedGoal_563, 0) = ((MR_Box) (Context_451));
                MR_hl_field(MR_mktag(0), TransformedGoal_563, 1) = ((MR_Box) (LHSTerm_561));
                MR_hl_field(MR_mktag(0), TransformedGoal_563, 2) = ((MR_Box) (RHSTerm_562));
                MR_hl_field(MR_mktag(0), TransformedGoal_563, 3) = (MR_Box) ((MR_Unsigned) (Purity_454));
              }
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, TransformedGoal_563, Renaming_19, HLDSGoal_20, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_84_496, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
            }
            else
            {
              MR_Word AccessType_471;
              MR_String Operator_470;

              succeeded = ((MR_tag((MR_Word) SymName_452)) == (MR_Integer) 0);
              if (succeeded)
              {
                Operator_470 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_452, (MR_Integer) 0))));
                if ((strcmp(Operator_470, (MR_String) ":=") == 0))
                {
                  AccessType_471 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                if ((strcmp(Operator_470, (MR_String) "=^") == 0))
                {
                  AccessType_471 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                else
                  succeeded = MR_FALSE;
              }
              if (succeeded)
              {
                MR_Word ArgTerms_472;

                parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, ArgTerms1_455, &ArgTerms_472);
                hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_p_0(LocKind_17, AccessType_471, ArgTerms_472, Context_451, HLDSGoal_20, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_84_496, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              }
              else
              {
                MR_Word HeadVars_473;
                MR_Word HeadVarsArgTerms_474;
                MR_Word PredFormArity_475;
                MR_Word GoalExpr_482;
                MR_Word CallId_484;
                MR_Word GoalInfo_489;
                MR_Word HLDSGoal0_490;
                MR_Word UserArity_491;
                MR_Word STATE_VARIABLE_VarSet_130_542;
                MR_Word STATE_VARIABLE_SVarState_131_543;
                MR_Word STATE_VARIABLE_Specs_132_544;
                MR_Word STATE_VARIABLE_QualInfo_140_552;
                MR_Word Var_553;
                MR_Word ArgTerms_564;
                MR_Word PredVar_476;
                MR_Word RealHeadVars_477;
                MR_String Var_568;

                parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, ArgTerms1_455, &ArgTerms_564);
                hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_9_p_0(ArgTerms_564, &HeadVars_473, &HeadVarsArgTerms_474, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_130_542, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_131_543, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_132_544);
                PredFormArity_475 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0]), ArgTerms_564);
                succeeded = ((MR_tag((MR_Word) SymName_452)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_568 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_452, (MR_Integer) 0))));
                  if ((strcmp(Var_568, (MR_String) "") == 0))
                    succeeded = MR_TRUE;
                  else
                  if ((strcmp(Var_568, (MR_String) "call") == 0))
                    succeeded = MR_TRUE;
                  else
                    succeeded = MR_FALSE;
                  if (succeeded)
                  {
                    succeeded = (HeadVars_473 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      PredVar_476 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVars_473, (MR_Integer) 0))));
                      RealHeadVars_477 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVars_473, (MR_Integer) 1))));
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Word GenericCall_481;
                  MR_Word GenericCallId_483;

                  {
                    GenericCall_481 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), GenericCall_481, 0) = ((MR_Box) (PredVar_476));
                    MR_hl_field(MR_mktag(0), GenericCall_481, 1) = (MR_Box) (((((MR_Unsigned) (Purity_454) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
                    MR_hl_field(MR_mktag(0), GenericCall_481, 2) = ((MR_Box) (PredFormArity_475));
                  }
                  {
                    GoalExpr_482 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), GoalExpr_482, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), GoalExpr_482, 1) = ((MR_Box) (GenericCall_481));
                    MR_hl_field(MR_mktag(3), GoalExpr_482, 2) = ((MR_Box) (RealHeadVars_477));
                    MR_hl_field(MR_mktag(3), GoalExpr_482, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), GoalExpr_482, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), GoalExpr_482, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 6));
                  }
                  hlds__hlds_goal__generic_call_to_id_2_p_0(GenericCall_481, &GenericCallId_483);
                  {
                    CallId_484 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), CallId_484, 0) = ((MR_Box) (GenericCallId_483));
                  }
                }
                else
                {
                  MR_Word PredId_485;
                  MR_Integer ModeId_486;
                  MR_Word PFSymNameArity_488;

                  PredId_485 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                  ModeId_486 = hlds__hlds_pred__invalid_proc_id_0_f_0();
                  {
                    GoalExpr_482 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), GoalExpr_482, 0) = ((MR_Box) (PredId_485));
                    MR_hl_field(MR_mktag(2), GoalExpr_482, 1) = ((MR_Box) (ModeId_486));
                    MR_hl_field(MR_mktag(2), GoalExpr_482, 2) = ((MR_Box) (HeadVars_473));
                    MR_hl_field(MR_mktag(2), GoalExpr_482, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(2), GoalExpr_482, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(2), GoalExpr_482, 5) = ((MR_Box) (SymName_452));
                  }
                  {
                    PFSymNameArity_488 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), PFSymNameArity_488, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(0), PFSymNameArity_488, 1) = ((MR_Box) (SymName_452));
                    MR_hl_field(MR_mktag(0), PFSymNameArity_488, 2) = ((MR_Box) (PredFormArity_475));
                  }
                  {
                    CallId_484 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), CallId_484, 0) = ((MR_Box) (PFSymNameArity_488));
                  }
                }
                hlds__hlds_goal__goal_info_init_context_purity_3_p_0(Context_451, Purity_454, &GoalInfo_489);
                {
                  HLDSGoal0_490 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), HLDSGoal0_490, 0) = ((MR_Box) (GoalExpr_482));
                  MR_hl_field(MR_mktag(0), HLDSGoal0_490, 1) = ((MR_Box) (GoalInfo_489));
                }
                parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 0, &UserArity_491, PredFormArity_475);
                hlds__make_hlds__qual_info__record_called_pred_or_func_5_p_0((MR_Integer) 0, SymName_452, UserArity_491, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_140_552);
                {
                  Var_553 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_553, 0) = ((MR_Box) (CallId_484));
                }
                hlds__make_hlds__superhomogeneous__insert_arg_unifications_17_p_0(HeadVarsArgTerms_474, Context_451, Var_553, HLDSGoal0_490, HLDSGoal_20, STATE_VARIABLE_SVarState_131_543, &STATE_VARIABLE_SVarState_84_496, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_130_542, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_140_552, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_132_544, STATE_VARIABLE_Specs_117);
              }
            }
          }
          hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(LocKind_17, STATE_VARIABLE_SVarState_84_496, STATE_VARIABLE_SVarState_107);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Context_591 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_18, (MR_Integer) 0))));
          MR_Word ConjunctA_592 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_18, (MR_Integer) 1))));
          MR_Word ConjunctsB_593 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_18, (MR_Integer) 2))));
          MR_Word HLDSConjunctsCordA_594;
          MR_Word HLDSConjunctsCord_595;
          MR_Word HLDSConjuncts_596;
          MR_Word GoalInfo_597;
          MR_Word Var_599;
          MR_Word STATE_VARIABLE_SVarState_48_600;
          MR_Word STATE_VARIABLE_SVarStore_49_601;
          MR_Word STATE_VARIABLE_VarSet_50_602;
          MR_Word STATE_VARIABLE_ModuleInfo_51_603;
          MR_Word STATE_VARIABLE_QualInfo_52_604;
          MR_Word STATE_VARIABLE_Specs_53_605;
          MR_Word Var_606;
          MR_Box conv13_HLDSConjunctsCord_595;
          MR_Box conv12_STATE_VARIABLE_SVarState_107;
          MR_Box conv11_STATE_VARIABLE_SVarStore_109;
          MR_Box conv10_STATE_VARIABLE_VarSet_111;
          MR_Box conv9_STATE_VARIABLE_ModuleInfo_113;
          MR_Box conv8_STATE_VARIABLE_QualInfo_115;
          MR_Box conv7_STATE_VARIABLE_Specs_117;

          Var_599 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
          hlds__make_hlds__goal_expr_to_goal__accumulate_plain_or_par_conjunct_18_p_0(LocKind_17, (MR_Integer) 0, Renaming_19, ConjunctA_592, Var_599, &HLDSConjunctsCordA_594, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_48_600, STATE_VARIABLE_SVarStore_0_108, &STATE_VARIABLE_SVarStore_49_601, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_50_602, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_51_603, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_52_604, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_53_605);
          {
            Var_606 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_606, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), Var_606, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_1));
            MR_hl_field(MR_mktag(0), Var_606, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_606, 3) = ((MR_Box) (LocKind_17));
            MR_hl_field(MR_mktag(0), Var_606, 4) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), Var_606, 5) = ((MR_Box) (Renaming_19));
          }
          mercury__list__foldl7_16_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_store_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[2]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), Var_606, ConjunctsB_593, ((MR_Box) (HLDSConjunctsCordA_594)), &conv13_HLDSConjunctsCord_595, ((MR_Box) (STATE_VARIABLE_SVarState_48_600)), &conv12_STATE_VARIABLE_SVarState_107, ((MR_Box) (STATE_VARIABLE_SVarStore_49_601)), &conv11_STATE_VARIABLE_SVarStore_109, ((MR_Box) (STATE_VARIABLE_VarSet_50_602)), &conv10_STATE_VARIABLE_VarSet_111, ((MR_Box) (STATE_VARIABLE_ModuleInfo_51_603)), &conv9_STATE_VARIABLE_ModuleInfo_113, ((MR_Box) (STATE_VARIABLE_QualInfo_52_604)), &conv8_STATE_VARIABLE_QualInfo_115, ((MR_Box) (STATE_VARIABLE_Specs_53_605)), &conv7_STATE_VARIABLE_Specs_117);
          HLDSConjunctsCord_595 = ((MR_Word) (conv13_HLDSConjunctsCord_595));
          *STATE_VARIABLE_SVarState_107 = ((MR_Word) (conv12_STATE_VARIABLE_SVarState_107));
          *STATE_VARIABLE_SVarStore_109 = ((MR_Word) (conv11_STATE_VARIABLE_SVarStore_109));
          *STATE_VARIABLE_VarSet_111 = ((MR_Word) (conv10_STATE_VARIABLE_VarSet_111));
          *STATE_VARIABLE_ModuleInfo_113 = ((MR_Word) (conv9_STATE_VARIABLE_ModuleInfo_113));
          *STATE_VARIABLE_QualInfo_115 = ((MR_Word) (conv8_STATE_VARIABLE_QualInfo_115));
          *STATE_VARIABLE_Specs_117 = ((MR_Word) (conv7_STATE_VARIABLE_Specs_117));
          HLDSConjuncts_596 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HLDSConjunctsCord_595);
          hlds__hlds_goal__goal_info_init_2_p_0(Context_591, &GoalInfo_597);
          hlds__hlds_goal__conj_list_to_goal_3_p_0(HLDSConjuncts_596, GoalInfo_597, HLDSGoal_20);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Context_301 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalInfo_303;

              hlds__hlds_goal__goal_info_init_2_p_0(Context_301, &GoalInfo_303);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_2[0])));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_303));
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
              MR_Word Context_879 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word Vars0_880 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word StateVars0_881 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word Cond_882 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word Then_883 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 5))));
              MR_Word Else_884 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 6))));
              MR_Word Vars_886;
              MR_Word StateVars_887;
              MR_Word BeforeCondSVarState_888;
              MR_Word HLDSCond_889;
              MR_Word AfterCondSVarState_890;
              MR_Word HLDSThen0_891;
              MR_Word AfterThenSVarState0_892;
              MR_Word Globals_893;
              MR_Word ModuleName_894;
              MR_Word AfterThenSVarState_895;
              MR_Word HLDSElse0_896;
              MR_Word AfterElseSVarState_897;
              MR_Word HLDSThen_898;
              MR_Word HLDSElse_899;
              MR_Word GoalExpr_900;
              MR_Word GoalInfo_901;
              MR_Word STATE_VARIABLE_Specs_64_904;
              MR_Word STATE_VARIABLE_SVarStore_65_905;
              MR_Word STATE_VARIABLE_VarSet_66_906;
              MR_Word STATE_VARIABLE_ModuleInfo_67_907;
              MR_Word STATE_VARIABLE_QualInfo_68_908;
              MR_Word STATE_VARIABLE_Specs_69_909;
              MR_Word STATE_VARIABLE_SVarStore_70_910;
              MR_Word STATE_VARIABLE_VarSet_71_911;
              MR_Word STATE_VARIABLE_ModuleInfo_72_912;
              MR_Word STATE_VARIABLE_QualInfo_73_913;
              MR_Word STATE_VARIABLE_Specs_74_914;
              MR_Word STATE_VARIABLE_SVarStore_75_915;
              MR_Word STATE_VARIABLE_VarSet_76_916;
              MR_Word STATE_VARIABLE_Specs_79_919;

              parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, Vars0_880, &Vars_886);
              parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, StateVars0_881, &StateVars_887);
              hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(Context_879, STATE_VARIABLE_VarSet_0_110, StateVars_887, STATE_VARIABLE_SVarState_0_106, &BeforeCondSVarState_888, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_64_904);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Cond_882, Renaming_19, &HLDSCond_889, BeforeCondSVarState_888, &AfterCondSVarState_890, STATE_VARIABLE_SVarStore_0_108, &STATE_VARIABLE_SVarStore_65_905, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_66_906, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_67_907, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_68_908, STATE_VARIABLE_Specs_64_904, &STATE_VARIABLE_Specs_69_909);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Then_883, Renaming_19, &HLDSThen0_891, AfterCondSVarState_890, &AfterThenSVarState0_892, STATE_VARIABLE_SVarStore_65_905, &STATE_VARIABLE_SVarStore_70_910, STATE_VARIABLE_VarSet_66_906, &STATE_VARIABLE_VarSet_71_911, STATE_VARIABLE_ModuleInfo_67_907, &STATE_VARIABLE_ModuleInfo_72_912, STATE_VARIABLE_QualInfo_68_908, &STATE_VARIABLE_QualInfo_73_913, STATE_VARIABLE_Specs_69_909, &STATE_VARIABLE_Specs_74_914);
              hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_72_912, &Globals_893);
              hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_72_912, &ModuleName_894);
              hlds__make_hlds__state_var__svar_finish_local_state_vars_6_p_0(Globals_893, ModuleName_894, StateVars_887, STATE_VARIABLE_SVarState_0_106, AfterThenSVarState0_892, &AfterThenSVarState_895);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Else_884, Renaming_19, &HLDSElse0_896, STATE_VARIABLE_SVarState_0_106, &AfterElseSVarState_897, STATE_VARIABLE_SVarStore_70_910, &STATE_VARIABLE_SVarStore_75_915, STATE_VARIABLE_VarSet_71_911, &STATE_VARIABLE_VarSet_76_916, STATE_VARIABLE_ModuleInfo_72_912, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_73_913, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_74_914, &STATE_VARIABLE_Specs_79_919);
              hlds__make_hlds__state_var__svar_finish_if_then_else_20_p_0(Globals_893, ModuleName_894, LocKind_17, Context_879, StateVars_887, HLDSThen0_891, &HLDSThen_898, HLDSElse0_896, &HLDSElse_899, STATE_VARIABLE_SVarState_0_106, AfterCondSVarState_890, AfterThenSVarState_895, AfterElseSVarState_897, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_VarSet_76_916, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_SVarStore_75_915, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_Specs_79_919, STATE_VARIABLE_Specs_117);
              {
                GoalExpr_900 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_900, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), GoalExpr_900, 1) = ((MR_Box) (Vars_886));
                MR_hl_field(MR_mktag(3), GoalExpr_900, 2) = ((MR_Box) (HLDSCond_889));
                MR_hl_field(MR_mktag(3), GoalExpr_900, 3) = ((MR_Box) (HLDSThen_898));
                MR_hl_field(MR_mktag(3), GoalExpr_900, 4) = ((MR_Box) (HLDSElse_899));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_879, &GoalInfo_901);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_900));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_901));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Context_717 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word Disjunct1_718 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word Disjunct2_719 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word Disjuncts3plus_720 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word RevDisjunctsSVarStates1_722;
              MR_Word RevDisjunctsSVarStates2_723;
              MR_Word RevDisjunctsSVarStates_724;
              MR_Word DisjunctsSVarStates_725;
              MR_Word Disjuncts_726;
              MR_Word GoalInfo_728;
              MR_Word STATE_VARIABLE_SVarStore_52_730;
              MR_Word STATE_VARIABLE_VarSet_53_731;
              MR_Word STATE_VARIABLE_ModuleInfo_54_732;
              MR_Word STATE_VARIABLE_QualInfo_55_733;
              MR_Word STATE_VARIABLE_Specs_56_734;
              MR_Word STATE_VARIABLE_SVarStore_57_735;
              MR_Word STATE_VARIABLE_VarSet_58_736;
              MR_Word STATE_VARIABLE_ModuleInfo_59_737;
              MR_Word STATE_VARIABLE_QualInfo_60_738;
              MR_Word STATE_VARIABLE_Specs_61_739;
              MR_Word Var_740;
              MR_Word STATE_VARIABLE_SVarStore_63_741;
              MR_Word STATE_VARIABLE_VarSet_64_742;
              MR_Box conv25_RevDisjunctsSVarStates_724;
              MR_Box conv24_STATE_VARIABLE_SVarStore_63_741;
              MR_Box conv23_STATE_VARIABLE_VarSet_64_742;
              MR_Box conv22_STATE_VARIABLE_ModuleInfo_113;
              MR_Box conv21_STATE_VARIABLE_QualInfo_115;
              MR_Box conv20_STATE_VARIABLE_Specs_117;

              hlds__make_hlds__goal_expr_to_goal__accumulate_disjunct_16_p_0(LocKind_17, Renaming_19, STATE_VARIABLE_SVarState_0_106, Disjunct1_718, (MR_Word) ((MR_Unsigned) 0U), &RevDisjunctsSVarStates1_722, STATE_VARIABLE_SVarStore_0_108, &STATE_VARIABLE_SVarStore_52_730, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_53_731, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_54_732, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_55_733, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_56_734);
              hlds__make_hlds__goal_expr_to_goal__accumulate_disjunct_16_p_0(LocKind_17, Renaming_19, STATE_VARIABLE_SVarState_0_106, Disjunct2_719, RevDisjunctsSVarStates1_722, &RevDisjunctsSVarStates2_723, STATE_VARIABLE_SVarStore_52_730, &STATE_VARIABLE_SVarStore_57_735, STATE_VARIABLE_VarSet_53_731, &STATE_VARIABLE_VarSet_58_736, STATE_VARIABLE_ModuleInfo_54_732, &STATE_VARIABLE_ModuleInfo_59_737, STATE_VARIABLE_QualInfo_55_733, &STATE_VARIABLE_QualInfo_60_738, STATE_VARIABLE_Specs_56_734, &STATE_VARIABLE_Specs_61_739);
              {
                Var_740 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_740, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_6[0]));
                MR_hl_field(MR_mktag(0), Var_740, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_2));
                MR_hl_field(MR_mktag(0), Var_740, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_740, 3) = ((MR_Box) (LocKind_17));
                MR_hl_field(MR_mktag(0), Var_740, 4) = ((MR_Box) (Renaming_19));
                MR_hl_field(MR_mktag(0), Var_740, 5) = ((MR_Box) (STATE_VARIABLE_SVarState_0_106));
              }
              mercury__list__foldl6_14_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[4]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_store_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[2]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), Var_740, Disjuncts3plus_720, ((MR_Box) (RevDisjunctsSVarStates2_723)), &conv25_RevDisjunctsSVarStates_724, ((MR_Box) (STATE_VARIABLE_SVarStore_57_735)), &conv24_STATE_VARIABLE_SVarStore_63_741, ((MR_Box) (STATE_VARIABLE_VarSet_58_736)), &conv23_STATE_VARIABLE_VarSet_64_742, ((MR_Box) (STATE_VARIABLE_ModuleInfo_59_737)), &conv22_STATE_VARIABLE_ModuleInfo_113, ((MR_Box) (STATE_VARIABLE_QualInfo_60_738)), &conv21_STATE_VARIABLE_QualInfo_115, ((MR_Box) (STATE_VARIABLE_Specs_61_739)), &conv20_STATE_VARIABLE_Specs_117);
              RevDisjunctsSVarStates_724 = ((MR_Word) (conv25_RevDisjunctsSVarStates_724));
              STATE_VARIABLE_SVarStore_63_741 = ((MR_Word) (conv24_STATE_VARIABLE_SVarStore_63_741));
              STATE_VARIABLE_VarSet_64_742 = ((MR_Word) (conv23_STATE_VARIABLE_VarSet_64_742));
              *STATE_VARIABLE_ModuleInfo_113 = ((MR_Word) (conv22_STATE_VARIABLE_ModuleInfo_113));
              *STATE_VARIABLE_QualInfo_115 = ((MR_Word) (conv21_STATE_VARIABLE_QualInfo_115));
              *STATE_VARIABLE_Specs_117 = ((MR_Word) (conv20_STATE_VARIABLE_Specs_117));
              mercury__list__reverse_2_p_0((MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_hlds_goal_svar_state_0), RevDisjunctsSVarStates_724, &DisjunctsSVarStates_725);
              hlds__make_hlds__state_var__svar_finish_disjunction_8_p_0(DisjunctsSVarStates_725, &Disjuncts_726, STATE_VARIABLE_VarSet_64_742, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_63_741, STATE_VARIABLE_SVarStore_109);
              hlds__hlds_goal__goal_info_init_2_p_0(Context_717, &GoalInfo_728);
              hlds__hlds_goal__disj_list_to_goal_3_p_0(Disjuncts_726, GoalInfo_728, HLDSGoal_20);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Context_943 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word SubGoal_944 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word HLDSSubGoal_946;
              MR_Word GoalExpr_948;
              MR_Word GoalInfo_949;
              MR_Word Var_947;

              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_944, Renaming_19, &HLDSSubGoal_946, STATE_VARIABLE_SVarState_0_106, &Var_947, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              *STATE_VARIABLE_SVarState_107 = STATE_VARIABLE_SVarState_0_106;
              GoalExpr_948 = (MR_Word) ((MR_Word) (HLDSSubGoal_946));
              hlds__hlds_goal__goal_info_init_2_p_0(Context_943, &GoalInfo_949);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_948));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_949));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Context_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalInfo_29;

              hlds__hlds_goal__goal_info_init_2_p_0(Context_27, &GoalInfo_29);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[6])));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_29));
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
              MR_Word Context_972 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word ConjunctA_973 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word ConjunctsB_974 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word HLDSConjunctsCordA_975;
              MR_Word HLDSConjunctsCord_976;
              MR_Word HLDSConjuncts_977;
              MR_Word GoalInfo_978;
              MR_Word Var_980;
              MR_Word STATE_VARIABLE_SVarState_48_981;
              MR_Word STATE_VARIABLE_SVarStore_49_982;
              MR_Word STATE_VARIABLE_VarSet_50_983;
              MR_Word STATE_VARIABLE_ModuleInfo_51_984;
              MR_Word STATE_VARIABLE_QualInfo_52_985;
              MR_Word STATE_VARIABLE_Specs_53_986;
              MR_Word Var_987;
              MR_Box conv39_HLDSConjunctsCord_976;
              MR_Box conv38_STATE_VARIABLE_SVarState_107;
              MR_Box conv37_STATE_VARIABLE_SVarStore_109;
              MR_Box conv36_STATE_VARIABLE_VarSet_111;
              MR_Box conv35_STATE_VARIABLE_ModuleInfo_113;
              MR_Box conv34_STATE_VARIABLE_QualInfo_115;
              MR_Box conv33_STATE_VARIABLE_Specs_117;

              Var_980 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
              hlds__make_hlds__goal_expr_to_goal__accumulate_plain_or_par_conjunct_18_p_0(LocKind_17, (MR_Integer) 1, Renaming_19, ConjunctA_973, Var_980, &HLDSConjunctsCordA_975, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_48_981, STATE_VARIABLE_SVarStore_0_108, &STATE_VARIABLE_SVarStore_49_982, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_50_983, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_51_984, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_52_985, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_53_986);
              {
                Var_987 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_987, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_5[0]));
                MR_hl_field(MR_mktag(0), Var_987, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_3));
                MR_hl_field(MR_mktag(0), Var_987, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_987, 3) = ((MR_Box) (LocKind_17));
                MR_hl_field(MR_mktag(0), Var_987, 4) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_987, 5) = ((MR_Box) (Renaming_19));
              }
              mercury__list__foldl7_16_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_store_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[2]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), Var_987, ConjunctsB_974, ((MR_Box) (HLDSConjunctsCordA_975)), &conv39_HLDSConjunctsCord_976, ((MR_Box) (STATE_VARIABLE_SVarState_48_981)), &conv38_STATE_VARIABLE_SVarState_107, ((MR_Box) (STATE_VARIABLE_SVarStore_49_982)), &conv37_STATE_VARIABLE_SVarStore_109, ((MR_Box) (STATE_VARIABLE_VarSet_50_983)), &conv36_STATE_VARIABLE_VarSet_111, ((MR_Box) (STATE_VARIABLE_ModuleInfo_51_984)), &conv35_STATE_VARIABLE_ModuleInfo_113, ((MR_Box) (STATE_VARIABLE_QualInfo_52_985)), &conv34_STATE_VARIABLE_QualInfo_115, ((MR_Box) (STATE_VARIABLE_Specs_53_986)), &conv33_STATE_VARIABLE_Specs_117);
              HLDSConjunctsCord_976 = ((MR_Word) (conv39_HLDSConjunctsCord_976));
              *STATE_VARIABLE_SVarState_107 = ((MR_Word) (conv38_STATE_VARIABLE_SVarState_107));
              *STATE_VARIABLE_SVarStore_109 = ((MR_Word) (conv37_STATE_VARIABLE_SVarStore_109));
              *STATE_VARIABLE_VarSet_111 = ((MR_Word) (conv36_STATE_VARIABLE_VarSet_111));
              *STATE_VARIABLE_ModuleInfo_113 = ((MR_Word) (conv35_STATE_VARIABLE_ModuleInfo_113));
              *STATE_VARIABLE_QualInfo_115 = ((MR_Word) (conv34_STATE_VARIABLE_QualInfo_115));
              *STATE_VARIABLE_Specs_117 = ((MR_Word) (conv33_STATE_VARIABLE_Specs_117));
              HLDSConjuncts_977 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HLDSConjunctsCord_976);
              hlds__hlds_goal__goal_info_init_2_p_0(Context_972, &GoalInfo_978);
              hlds__hlds_goal__par_conj_list_to_goal_3_p_0(HLDSConjuncts_977, GoalInfo_978, HLDSGoal_20);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word QuantType_1041 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              MR_Word VarsKind_1042 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Context_1043 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word Vars0_1044 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word SubGoal_1045 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));

              switch (QuantType_1041) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word TransformedGoal_1046;
                    MR_Word Var_1059;
                    MR_Word Var_1061;
                    MR_Word next_value_of_Goal_18;

                    {
                      Var_1061 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_1061, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                      MR_hl_field(MR_mktag(3), Var_1061, 1) = ((MR_Box) (Context_1043));
                      MR_hl_field(MR_mktag(3), Var_1061, 2) = ((MR_Box) (SubGoal_1045));
                    }
                    {
                      Var_1059 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_1059, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), Var_1059, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) (VarsKind_1042)));
                      MR_hl_field(MR_mktag(3), Var_1059, 2) = ((MR_Box) (Context_1043));
                      MR_hl_field(MR_mktag(3), Var_1059, 3) = ((MR_Box) (Vars0_1044));
                      MR_hl_field(MR_mktag(3), Var_1059, 4) = ((MR_Box) (Var_1061));
                    }
                    {
                      TransformedGoal_1046 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), TransformedGoal_1046, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                      MR_hl_field(MR_mktag(3), TransformedGoal_1046, 1) = ((MR_Box) (Context_1043));
                      MR_hl_field(MR_mktag(3), TransformedGoal_1046, 2) = ((MR_Box) (Var_1059));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_Goal_18 = TransformedGoal_1046;
                    Goal_18 = next_value_of_Goal_18;
                    continue;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word Vars_1047;
                    MR_Word HLDSSubGoal_1048;
                    MR_Word Reason_1049;
                    MR_Word GoalExpr_1057;
                    MR_Word GoalInfo_1058;

                    parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, Vars0_1044, &Vars_1047);
                    switch (VarsKind_1042) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_1045, Renaming_19, &HLDSSubGoal_1048, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
                          {
                            Reason_1049 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Reason_1049, 0) = ((MR_Box) (Vars_1047));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word BeforeInsideSVarState_1052;
                          MR_Word AfterInsideSVarState_1053;
                          MR_Word Globals_1054;
                          MR_Word ModuleName_1055;
                          MR_Word STATE_VARIABLE_Specs_73_1075;

                          hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(Context_1043, STATE_VARIABLE_VarSet_0_110, Vars_1047, STATE_VARIABLE_SVarState_0_106, &BeforeInsideSVarState_1052, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_73_1075);
                          hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_1045, Renaming_19, &HLDSSubGoal_1048, BeforeInsideSVarState_1052, &AfterInsideSVarState_1053, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_73_1075, STATE_VARIABLE_Specs_117);
                          hlds__hlds_module__module_info_get_globals_2_p_0(*STATE_VARIABLE_ModuleInfo_113, &Globals_1054);
                          hlds__hlds_module__module_info_get_name_2_p_0(*STATE_VARIABLE_ModuleInfo_113, &ModuleName_1055);
                          hlds__make_hlds__state_var__svar_finish_local_state_vars_6_p_0(Globals_1054, ModuleName_1055, Vars_1047, STATE_VARIABLE_SVarState_0_106, AfterInsideSVarState_1053, STATE_VARIABLE_SVarState_107);
                          Reason_1049 = (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[3]);
                        }
                        break;
                    }
                    {
                      GoalExpr_1057 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_1057, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(MR_mktag(3), GoalExpr_1057, 1) = ((MR_Box) (Reason_1049));
                      MR_hl_field(MR_mktag(3), GoalExpr_1057, 2) = ((MR_Box) (HLDSSubGoal_1048));
                    }
                    hlds__hlds_goal__goal_info_init_2_p_0(Context_1043, &GoalInfo_1058);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *HLDSGoal_20 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_1057));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_1058));
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Purity_67 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))) & (MR_Integer) 3);
              MR_Word SubGoal_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word Reason_69;
              MR_Word HLDSSubGoal_71;
              MR_Word Context_242 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_243;
              MR_Word GoalInfo_244;

              {
                Reason_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Reason_69, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Reason_69, 1) = (MR_Box) ((MR_Unsigned) (Purity_67));
              }
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_68, Renaming_19, &HLDSSubGoal_71, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              {
                GoalExpr_243 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_243, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_243, 1) = ((MR_Box) (Reason_69));
                MR_hl_field(MR_mktag(3), GoalExpr_243, 2) = ((MR_Box) (HLDSSubGoal_71));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_242, &GoalInfo_244);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_243));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_244));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word Vars_274 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word StateVars_275 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word DotSVars_276 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word ColonSVars_277 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 5))));
              MR_Word PromiseVars_279;
              MR_Word Context_280 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_281;
              MR_Word GoalInfo_282;
              MR_Word SubGoal_283 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 6))));
              MR_Word Reason_284;
              MR_Word HLDSSubGoal_285;

              hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(LocKind_17, Vars_274, StateVars_275, DotSVars_276, ColonSVars_277, Context_280, Renaming_19, &PromiseVars_279, SubGoal_283, &HLDSSubGoal_285, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              {
                Reason_284 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Reason_284, 0) = ((MR_Box) (PromiseVars_279));
                MR_hl_field(MR_mktag(2), Reason_284, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              {
                GoalExpr_281 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_281, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_281, 1) = ((MR_Box) (Reason_284));
                MR_hl_field(MR_mktag(3), GoalExpr_281, 2) = ((MR_Box) (HLDSSubGoal_285));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_280, &GoalInfo_282);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_281));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_282));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word Vars_262 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word StateVars_263 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word DotSVars_264 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word ColonSVars_265 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 5))));
              MR_Word PromiseVars_267;
              MR_Word Context_268 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_269;
              MR_Word GoalInfo_270;
              MR_Word SubGoal_271 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 6))));
              MR_Word Reason_272;
              MR_Word HLDSSubGoal_273;

              hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(LocKind_17, Vars_262, StateVars_263, DotSVars_264, ColonSVars_265, Context_268, Renaming_19, &PromiseVars_267, SubGoal_271, &HLDSSubGoal_273, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              {
                Reason_272 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Reason_272, 0) = ((MR_Box) (PromiseVars_267));
                MR_hl_field(MR_mktag(2), Reason_272, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              }
              {
                GoalExpr_269 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_269, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_269, 1) = ((MR_Box) (Reason_272));
                MR_hl_field(MR_mktag(3), GoalExpr_269, 2) = ((MR_Box) (HLDSSubGoal_273));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_268, &GoalInfo_270);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_269));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_270));
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Vars_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word StateVars_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word DotSVars_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word ColonSVars_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 5))));
              MR_Word PromiseVars_79;
              MR_Word Context_256 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_257;
              MR_Word GoalInfo_258;
              MR_Word SubGoal_259 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 6))));
              MR_Word Reason_260;
              MR_Word HLDSSubGoal_261;

              hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(LocKind_17, Vars_74, StateVars_75, DotSVars_76, ColonSVars_77, Context_256, Renaming_19, &PromiseVars_79, SubGoal_259, &HLDSSubGoal_261, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              {
                Reason_260 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Reason_260, 0) = ((MR_Box) (PromiseVars_79));
                MR_hl_field(MR_mktag(2), Reason_260, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
              }
              {
                GoalExpr_257 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_257, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_257, 1) = ((MR_Box) (Reason_260));
                MR_hl_field(MR_mktag(3), GoalExpr_257, 2) = ((MR_Box) (HLDSSubGoal_261));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_256, &GoalInfo_258);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_257));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_258));
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word Detism_70 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_Word SubGoal_286 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word Reason_287;
              MR_Word HLDSSubGoal_288;
              MR_Word Context_289 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_290;
              MR_Word GoalInfo_291;

              {
                Reason_287 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Reason_287, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Reason_287, 1) = (MR_Box) ((MR_Unsigned) (Detism_70));
              }
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_286, Renaming_19, &HLDSSubGoal_288, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              {
                GoalExpr_290 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_290, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_290, 1) = ((MR_Box) (Reason_287));
                MR_hl_field(MR_mktag(3), GoalExpr_290, 2) = ((MR_Box) (HLDSSubGoal_288));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_289, &GoalInfo_291);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_290));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_291));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word PODVar0_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word Var_73;
              MR_Word STATE_VARIABLE_SVarState_192_192;
              MR_Word STATE_VARIABLE_VarSet_193_193;
              MR_Word STATE_VARIABLE_Specs_194_194;
              MR_Word Context_249 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_250;
              MR_Word GoalInfo_251;
              MR_Word SubGoal_252 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word Reason_253;
              MR_Word HLDSSubGoal_255;

              hlds__make_hlds__goal_expr_to_goal__rename_and_maybe_expand_dot_var_11_p_0(Context_249, (MR_Integer) 1, Renaming_19, PODVar0_72, &Var_73, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_192_192, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_193_193, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_194_194);
              {
                Reason_253 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Reason_253, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), Reason_253, 1) = ((MR_Box) (Var_73));
              }
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_252, Renaming_19, &HLDSSubGoal_255, STATE_VARIABLE_SVarState_192_192, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_193_193, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_194_194, STATE_VARIABLE_Specs_117);
              {
                GoalExpr_250 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_250, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_250, 1) = ((MR_Box) (Reason_253));
                MR_hl_field(MR_mktag(3), GoalExpr_250, 2) = ((MR_Box) (HLDSSubGoal_255));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_249, &GoalInfo_251);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_250));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_251));
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word Detism_245 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))) & (MR_Integer) 7);
              MR_Word PODVar0_246 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word Var_247;
              MR_Word STATE_VARIABLE_SVarState_192_292;
              MR_Word STATE_VARIABLE_VarSet_193_293;
              MR_Word STATE_VARIABLE_Specs_194_294;
              MR_Word Context_295 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_296;
              MR_Word GoalInfo_297;
              MR_Word SubGoal_298 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word Reason_299;
              MR_Word HLDSSubGoal_300;

              hlds__make_hlds__goal_expr_to_goal__rename_and_maybe_expand_dot_var_11_p_0(Context_295, (MR_Integer) 1, Renaming_19, PODVar0_246, &Var_247, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_192_292, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_193_293, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_194_294);
              {
                Reason_299 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Reason_299, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), Reason_299, 1) = ((MR_Box) (Var_247));
                MR_hl_field(MR_mktag(3), Reason_299, 2) = (MR_Box) ((MR_Unsigned) (Detism_245));
              }
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_298, Renaming_19, &HLDSSubGoal_300, STATE_VARIABLE_SVarState_192_292, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_193_293, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_194_294, STATE_VARIABLE_Specs_117);
              {
                GoalExpr_296 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_296, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_296, 1) = ((MR_Box) (Reason_299));
                MR_hl_field(MR_mktag(3), GoalExpr_296, 2) = ((MR_Box) (HLDSSubGoal_300));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_295, &GoalInfo_297);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_296));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_297));
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word Context_660 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word HeadWarning_661 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_Word TailWarnings_662 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word SubGoal_663 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word HLDSSubGoal_667;
              MR_Word GoalExpr_670;
              MR_Word GoalInfo_671;
              MR_Word Var_693;

              succeeded = (HeadWarning_661 == (MR_Integer) 1);
              if (!(succeeded))
                succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), ((MR_Box) ((MR_Integer) 1)), TailWarnings_662);
              if (succeeded)
              {
                MR_Word Globals0_664;
                MR_Word WarnOccursCheck0_665;
                MR_Word Globals1_666;
                MR_Word Globals2_668;
                MR_Word Globals3_669;
                MR_Word STATE_VARIABLE_ModuleInfo_56_677;
                MR_Word STATE_VARIABLE_ModuleInfo_60_681;
                MR_Word Var_685;

                hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_112, &Globals0_664);
                libs__globals__lookup_bool_option_3_p_0(Globals0_664, (MR_Integer) 62, &WarnOccursCheck0_665);
                libs__globals__set_option_4_p_0((MR_Integer) 62, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_3[5])), Globals0_664, &Globals1_666);
                hlds__hlds_module__module_info_set_globals_3_p_0(Globals1_666, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_56_677);
                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_663, Renaming_19, &HLDSSubGoal_667, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_56_677, &STATE_VARIABLE_ModuleInfo_60_681, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
                hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_60_681, &Globals2_668);
                {
                  Var_685 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_685, 0) = (MR_Box) ((MR_Unsigned) (WarnOccursCheck0_665));
                }
                libs__globals__set_option_4_p_0((MR_Integer) 62, Var_685, Globals2_668, &Globals3_669);
                hlds__hlds_module__module_info_set_globals_3_p_0(Globals3_669, STATE_VARIABLE_ModuleInfo_60_681, STATE_VARIABLE_ModuleInfo_113);
              }
              else
                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_663, Renaming_19, &HLDSSubGoal_667, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              {
                Var_693 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_693, 0) = (MR_Box) ((MR_Unsigned) (HeadWarning_661));
                MR_hl_field(MR_mktag(1), Var_693, 1) = ((MR_Box) (TailWarnings_662));
              }
              {
                GoalExpr_670 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_670, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_670, 1) = ((MR_Box) (Var_693));
                MR_hl_field(MR_mktag(3), GoalExpr_670, 2) = ((MR_Box) (HLDSSubGoal_667));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_660, &GoalInfo_671);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_670));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_671));
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word Context_1106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word MaybeCompileTime_1107 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word MaybeRunTime_1108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word MaybeIO0_1109 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word Mutables0_1110 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 5))));
              MR_Word SubGoal0_1111 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 6))));
              MR_Word MutableHLDSs_1112;
              MR_Word MutableStateVars_1113;
              MR_Word MutableGetGoals_1114;
              MR_Word MutableSetGoals_1115;
              MR_Word MaybeIOHLDS_1121;
              MR_Word StateVars_1122;
              MR_Word GetGoals_1123;
              MR_Word SetGoals_1124;
              MR_Word SubGoal1_1125;
              MR_Word BeforeInsideSVarState_1127;
              MR_Word HLDSSubGoal_1128;
              MR_Word AfterInsideSVarState_1129;
              MR_Word Globals_1130;
              MR_Word ModuleName_1131;
              MR_Word Reason_1133;
              MR_Word GoalExpr_1134;
              MR_Word GoalInfo_1135;
              MR_Word Var_1136;
              MR_Word Var_1137;
              MR_Word Var_1138;
              MR_Word Var_1139;
              MR_Word STATE_VARIABLE_Specs_74_1141;
              MR_Word STATE_VARIABLE_QualInfo_78_1145;

              {
                Var_1136 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_1136, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_7[0]));
                MR_hl_field(MR_mktag(0), Var_1136, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_4));
                MR_hl_field(MR_mktag(0), Var_1136, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_1136, 3) = ((MR_Box) (Context_1106));
                MR_hl_field(MR_mktag(0), Var_1136, 4) = ((MR_Box) (STATE_VARIABLE_VarSet_0_110));
                MR_hl_field(MR_mktag(0), Var_1136, 5) = ((MR_Box) (Renaming_19));
              }
              mercury__list__map4_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[5]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), Var_1136, Mutables0_1110, &MutableHLDSs_1112, &MutableStateVars_1113, &MutableGetGoals_1114, &MutableSetGoals_1115);
              if ((MaybeIO0_1109 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MaybeIOHLDS_1121 = (MR_Word) ((MR_Unsigned) 0U);
                StateVars_1122 = MutableStateVars_1113;
                GetGoals_1123 = MutableGetGoals_1114;
                SetGoals_1124 = MutableSetGoals_1115;
              }
              else
              {
                MR_Word IOStateVar0_1116 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIO0_1109, (MR_Integer) 0))));
                MR_Word IOStateVar_1117;
                MR_String IOStateVarName_1118;
                MR_Word IOGetGoal_1119;
                MR_Word IOSetGoal_1120;

                hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_8_p_0(Context_1106, STATE_VARIABLE_VarSet_0_110, Renaming_19, IOStateVar0_1116, &IOStateVar_1117, &IOStateVarName_1118, &IOGetGoal_1119, &IOSetGoal_1120);
                {
                  MaybeIOHLDS_1121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MaybeIOHLDS_1121, 0) = ((MR_Box) (IOStateVarName_1118));
                }
                {
                  StateVars_1122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), StateVars_1122, 0) = ((MR_Box) (IOStateVar_1117));
                  MR_hl_field(MR_mktag(1), StateVars_1122, 1) = ((MR_Box) (MutableStateVars_1113));
                }
                {
                  GetGoals_1123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), GetGoals_1123, 0) = ((MR_Box) (IOGetGoal_1119));
                  MR_hl_field(MR_mktag(1), GetGoals_1123, 1) = ((MR_Box) (MutableGetGoals_1114));
                }
                {
                  SetGoals_1124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), SetGoals_1124, 0) = ((MR_Box) (IOSetGoal_1120));
                  MR_hl_field(MR_mktag(1), SetGoals_1124, 1) = ((MR_Box) (MutableSetGoals_1115));
                }
              }
              {
                Var_1139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_1139, 0) = ((MR_Box) (SubGoal0_1111));
                MR_hl_field(MR_mktag(1), Var_1139, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_1138 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), Var_1139, SetGoals_1124);
              Var_1137 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), GetGoals_1123, Var_1138);
              SubGoal1_1125 = parse_tree__prog_util__goal_list_to_conj_2_f_0(Context_1106, Var_1137);
              hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(Context_1106, STATE_VARIABLE_VarSet_0_110, StateVars_1122, STATE_VARIABLE_SVarState_0_106, &BeforeInsideSVarState_1127, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_74_1141);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal1_1125, Renaming_19, &HLDSSubGoal_1128, BeforeInsideSVarState_1127, &AfterInsideSVarState_1129, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_78_1145, STATE_VARIABLE_Specs_74_1141, STATE_VARIABLE_Specs_117);
              hlds__hlds_module__module_info_get_globals_2_p_0(*STATE_VARIABLE_ModuleInfo_113, &Globals_1130);
              hlds__hlds_module__module_info_get_name_2_p_0(*STATE_VARIABLE_ModuleInfo_113, &ModuleName_1131);
              hlds__make_hlds__state_var__svar_finish_local_state_vars_6_p_0(Globals_1130, ModuleName_1131, StateVars_1122, STATE_VARIABLE_SVarState_0_106, AfterInsideSVarState_1129, STATE_VARIABLE_SVarState_107);
              hlds__make_hlds__qual_info__qual_info_set_found_trace_goal_3_p_0((MR_Integer) 1, STATE_VARIABLE_QualInfo_78_1145, STATE_VARIABLE_QualInfo_115);
              {
                Reason_1133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Reason_1133, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), Reason_1133, 1) = ((MR_Box) (MaybeCompileTime_1107));
                MR_hl_field(MR_mktag(3), Reason_1133, 2) = ((MR_Box) (MaybeRunTime_1108));
                MR_hl_field(MR_mktag(3), Reason_1133, 3) = ((MR_Box) (MaybeIOHLDS_1121));
                MR_hl_field(MR_mktag(3), Reason_1133, 4) = ((MR_Box) (MutableHLDSs_1112));
                MR_hl_field(MR_mktag(3), Reason_1133, 5) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                GoalExpr_1134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_1134, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_1134, 1) = ((MR_Box) (Reason_1133));
                MR_hl_field(MR_mktag(3), GoalExpr_1134, 2) = ((MR_Box) (HLDSSubGoal_1128));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_1106, &GoalInfo_1135);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_1134));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_1135));
              }
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word Context_326 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word Outer0_327 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word Inner0_328 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word MaybeOutputVars0_329 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word MainGoal_330 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 5))));
              MR_Word OrElseGoals_331 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 6))));
              MR_Word MaybeOutputVars_332;
              MR_Word Outer_341;
              MR_Word HLDSGoals_356;
              MR_Word HLDSMainGoal_357;
              MR_Word HLDSOrElseGoals_358;
              MR_Word Inner_363;
              MR_Word ShortHand_367;
              MR_Word GoalExpr_368;
              MR_Word GoalInfo_369;

              if ((MaybeOutputVars0_329 == (MR_Word) ((MR_Unsigned) 0U)))
                MaybeOutputVars_332 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word OutputVars0_333 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOutputVars0_329, (MR_Integer) 0))));
                MR_Word OutputVars_334;

                parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, OutputVars0_333, &OutputVars_334);
                {
                  MaybeOutputVars_332 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MaybeOutputVars_332, 0) = ((MR_Box) (OutputVars_334));
                }
              }
              if (((MR_tag((MR_Word) Outer0_327)) == (MR_Integer) 0))
              {
                MR_Word OuterStateVar0_335 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer0_327, (MR_Integer) 0))));
                MR_Word OuterStateVar_336;
                MR_Word OuterDI_337;
                MR_Word OuterUO_338;
                MR_Word OuterScopeInfo2_366;
                MR_Word STATE_VARIABLE_SVarState_89_376;
                MR_Word STATE_VARIABLE_VarSet_90_377;
                MR_Word STATE_VARIABLE_Specs_91_378;
                MR_Word STATE_VARIABLE_SVarState_113_400;

                parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, OuterStateVar0_335, &OuterStateVar_336);
                hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_p_0(Context_326, OuterStateVar_336, &OuterDI_337, &OuterUO_338, &OuterScopeInfo2_366, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_89_376, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_90_377, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_91_378);
                {
                  Outer_341 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Outer_341, 0) = ((MR_Box) (OuterDI_337));
                  MR_hl_field(MR_mktag(0), Outer_341, 1) = ((MR_Box) (OuterUO_338));
                }
                if (((MR_tag((MR_Word) Inner0_328)) == (MR_Integer) 0))
                {
                  MR_Word InnerStateVar0_344 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner0_328, (MR_Integer) 0))));
                  MR_Word InnerStateVar_345;
                  MR_Word BeforeDisjSVarState_350;
                  MR_Word HLDSMainGoal0_351;
                  MR_Word AfterMainSVarState_352;
                  MR_Word MainDisjState_353;
                  MR_Word OrElseDisjStates_354;
                  MR_Word AllDisjStates_355;
                  MR_Word InnerScopeInfo2_360;
                  MR_Word InnerDI_361;
                  MR_Word InnerUO_362;
                  MR_Word STATE_VARIABLE_VarSet_96_383;
                  MR_Word STATE_VARIABLE_Specs_97_384;
                  MR_Word STATE_VARIABLE_SVarStore_98_385;
                  MR_Word STATE_VARIABLE_VarSet_99_386;
                  MR_Word STATE_VARIABLE_ModuleInfo_100_387;
                  MR_Word STATE_VARIABLE_QualInfo_101_388;
                  MR_Word STATE_VARIABLE_Specs_102_389;
                  MR_Word STATE_VARIABLE_SVarStore_103_390;
                  MR_Word STATE_VARIABLE_VarSet_104_391;
                  MR_Word STATE_VARIABLE_Specs_107_394;
                  MR_Word STATE_VARIABLE_VarSet_108_395;
                  MR_Word STATE_VARIABLE_SVarState_109_396;

                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, InnerStateVar0_344, &InnerStateVar_345);
                  hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_p_0(Context_326, InnerStateVar_345, &InnerScopeInfo2_360, STATE_VARIABLE_SVarState_89_376, &BeforeDisjSVarState_350, STATE_VARIABLE_VarSet_90_377, &STATE_VARIABLE_VarSet_96_383, STATE_VARIABLE_Specs_91_378, &STATE_VARIABLE_Specs_97_384);
                  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, MainGoal_330, Renaming_19, &HLDSMainGoal0_351, BeforeDisjSVarState_350, &AfterMainSVarState_352, STATE_VARIABLE_SVarStore_0_108, &STATE_VARIABLE_SVarStore_98_385, STATE_VARIABLE_VarSet_96_383, &STATE_VARIABLE_VarSet_99_386, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_100_387, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_101_388, STATE_VARIABLE_Specs_97_384, &STATE_VARIABLE_Specs_102_389);
                  {
                    MainDisjState_353 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MainDisjState_353, 0) = ((MR_Box) (HLDSMainGoal0_351));
                    MR_hl_field(MR_mktag(0), MainDisjState_353, 1) = ((MR_Box) (AfterMainSVarState_352));
                  }
                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(LocKind_17, OrElseGoals_331, Renaming_19, &OrElseDisjStates_354, BeforeDisjSVarState_350, STATE_VARIABLE_SVarStore_98_385, &STATE_VARIABLE_SVarStore_103_390, STATE_VARIABLE_VarSet_99_386, &STATE_VARIABLE_VarSet_104_391, STATE_VARIABLE_ModuleInfo_100_387, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_101_388, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_102_389, &STATE_VARIABLE_Specs_107_394);
                  {
                    AllDisjStates_355 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), AllDisjStates_355, 0) = ((MR_Box) (MainDisjState_353));
                    MR_hl_field(MR_mktag(1), AllDisjStates_355, 1) = ((MR_Box) (OrElseDisjStates_354));
                  }
                  hlds__make_hlds__state_var__svar_finish_disjunction_8_p_0(AllDisjStates_355, &HLDSGoals_356, STATE_VARIABLE_VarSet_104_391, &STATE_VARIABLE_VarSet_108_395, BeforeDisjSVarState_350, &STATE_VARIABLE_SVarState_109_396, STATE_VARIABLE_SVarStore_103_390, STATE_VARIABLE_SVarStore_109);
                  hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_p_0(Context_326, InnerScopeInfo2_360, &InnerDI_361, &InnerUO_362, STATE_VARIABLE_SVarState_109_396, &STATE_VARIABLE_SVarState_113_400, STATE_VARIABLE_VarSet_108_395, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_Specs_107_394, STATE_VARIABLE_Specs_117);
                  {
                    Inner_363 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Inner_363, 0) = ((MR_Box) (InnerDI_361));
                    MR_hl_field(MR_mktag(0), Inner_363, 1) = ((MR_Box) (InnerUO_362));
                  }
                }
                else
                {
                  MR_Word InnerDI0_364;
                  MR_Word InnerUO0_365;
                  MR_Word InnerDI_422;
                  MR_Word InnerUO_423;
                  MR_Word HLDSMainGoal0_1391;
                  MR_Word AfterMainSVarState_1392;
                  MR_Word MainDisjState_1393;
                  MR_Word OrElseDisjStates_1394;
                  MR_Word AllDisjStates_1395;
                  MR_Word STATE_VARIABLE_SVarStore_98_1398;
                  MR_Word STATE_VARIABLE_VarSet_99_1399;
                  MR_Word STATE_VARIABLE_ModuleInfo_100_1400;
                  MR_Word STATE_VARIABLE_QualInfo_101_1401;
                  MR_Word STATE_VARIABLE_Specs_102_1402;
                  MR_Word STATE_VARIABLE_SVarStore_103_1403;
                  MR_Word STATE_VARIABLE_VarSet_104_1404;

                  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, MainGoal_330, Renaming_19, &HLDSMainGoal0_1391, STATE_VARIABLE_SVarState_89_376, &AfterMainSVarState_1392, STATE_VARIABLE_SVarStore_0_108, &STATE_VARIABLE_SVarStore_98_1398, STATE_VARIABLE_VarSet_90_377, &STATE_VARIABLE_VarSet_99_1399, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_100_1400, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_101_1401, STATE_VARIABLE_Specs_91_378, &STATE_VARIABLE_Specs_102_1402);
                  {
                    MainDisjState_1393 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MainDisjState_1393, 0) = ((MR_Box) (HLDSMainGoal0_1391));
                    MR_hl_field(MR_mktag(0), MainDisjState_1393, 1) = ((MR_Box) (AfterMainSVarState_1392));
                  }
                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(LocKind_17, OrElseGoals_331, Renaming_19, &OrElseDisjStates_1394, STATE_VARIABLE_SVarState_89_376, STATE_VARIABLE_SVarStore_98_1398, &STATE_VARIABLE_SVarStore_103_1403, STATE_VARIABLE_VarSet_99_1399, &STATE_VARIABLE_VarSet_104_1404, STATE_VARIABLE_ModuleInfo_100_1400, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_101_1401, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_102_1402, STATE_VARIABLE_Specs_117);
                  {
                    AllDisjStates_1395 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), AllDisjStates_1395, 0) = ((MR_Box) (MainDisjState_1393));
                    MR_hl_field(MR_mktag(1), AllDisjStates_1395, 1) = ((MR_Box) (OrElseDisjStates_1394));
                  }
                  hlds__make_hlds__state_var__svar_finish_disjunction_8_p_0(AllDisjStates_1395, &HLDSGoals_356, STATE_VARIABLE_VarSet_104_1404, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_SVarState_89_376, &STATE_VARIABLE_SVarState_113_400, STATE_VARIABLE_SVarStore_103_1403, STATE_VARIABLE_SVarStore_109);
                  InnerDI0_364 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Inner0_328, (MR_Integer) 0))));
                  InnerUO0_365 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Inner0_328, (MR_Integer) 1))));
                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, InnerDI0_364, &InnerDI_422);
                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, InnerUO0_365, &InnerUO_423);
                  {
                    Inner_363 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Inner_363, 0) = ((MR_Box) (InnerDI_422));
                    MR_hl_field(MR_mktag(0), Inner_363, 1) = ((MR_Box) (InnerUO_423));
                  }
                }
                hlds__make_hlds__state_var__svar_finish_outer_atomic_scope_3_p_0(OuterScopeInfo2_366, STATE_VARIABLE_SVarState_113_400, STATE_VARIABLE_SVarState_107);
              }
              else
              {
                MR_Word OuterDI0_342 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Outer0_327, (MR_Integer) 0))));
                MR_Word OuterUO0_343 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Outer0_327, (MR_Integer) 1))));
                MR_Word OuterDI_420;
                MR_Word OuterUO_421;

                parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, OuterDI0_342, &OuterDI_420);
                parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, OuterUO0_343, &OuterUO_421);
                {
                  Outer_341 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Outer_341, 0) = ((MR_Box) (OuterDI_420));
                  MR_hl_field(MR_mktag(0), Outer_341, 1) = ((MR_Box) (OuterUO_421));
                }
                if (((MR_tag((MR_Word) Inner0_328)) == (MR_Integer) 0))
                {
                  MR_Word InnerStateVar0_1308 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner0_328, (MR_Integer) 0))));
                  MR_Word InnerStateVar_1309;
                  MR_Word InnerScopeInfo2_1320;
                  MR_Word InnerDI_1321;
                  MR_Word InnerUO_1322;
                  MR_Word BeforeDisjSVarState_1352;
                  MR_Word HLDSMainGoal0_1353;
                  MR_Word AfterMainSVarState_1354;
                  MR_Word MainDisjState_1355;
                  MR_Word OrElseDisjStates_1356;
                  MR_Word AllDisjStates_1357;
                  MR_Word STATE_VARIABLE_VarSet_96_1367;
                  MR_Word STATE_VARIABLE_Specs_97_1368;
                  MR_Word STATE_VARIABLE_SVarStore_98_1369;
                  MR_Word STATE_VARIABLE_VarSet_99_1370;
                  MR_Word STATE_VARIABLE_ModuleInfo_100_1371;
                  MR_Word STATE_VARIABLE_QualInfo_101_1372;
                  MR_Word STATE_VARIABLE_Specs_102_1373;
                  MR_Word STATE_VARIABLE_SVarStore_103_1374;
                  MR_Word STATE_VARIABLE_VarSet_104_1375;
                  MR_Word STATE_VARIABLE_Specs_107_1376;
                  MR_Word STATE_VARIABLE_VarSet_108_1377;
                  MR_Word STATE_VARIABLE_SVarState_109_1378;

                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, InnerStateVar0_1308, &InnerStateVar_1309);
                  hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_p_0(Context_326, InnerStateVar_1309, &InnerScopeInfo2_1320, STATE_VARIABLE_SVarState_0_106, &BeforeDisjSVarState_1352, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_96_1367, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_97_1368);
                  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, MainGoal_330, Renaming_19, &HLDSMainGoal0_1353, BeforeDisjSVarState_1352, &AfterMainSVarState_1354, STATE_VARIABLE_SVarStore_0_108, &STATE_VARIABLE_SVarStore_98_1369, STATE_VARIABLE_VarSet_96_1367, &STATE_VARIABLE_VarSet_99_1370, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_100_1371, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_101_1372, STATE_VARIABLE_Specs_97_1368, &STATE_VARIABLE_Specs_102_1373);
                  {
                    MainDisjState_1355 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MainDisjState_1355, 0) = ((MR_Box) (HLDSMainGoal0_1353));
                    MR_hl_field(MR_mktag(0), MainDisjState_1355, 1) = ((MR_Box) (AfterMainSVarState_1354));
                  }
                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(LocKind_17, OrElseGoals_331, Renaming_19, &OrElseDisjStates_1356, BeforeDisjSVarState_1352, STATE_VARIABLE_SVarStore_98_1369, &STATE_VARIABLE_SVarStore_103_1374, STATE_VARIABLE_VarSet_99_1370, &STATE_VARIABLE_VarSet_104_1375, STATE_VARIABLE_ModuleInfo_100_1371, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_101_1372, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_102_1373, &STATE_VARIABLE_Specs_107_1376);
                  {
                    AllDisjStates_1357 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), AllDisjStates_1357, 0) = ((MR_Box) (MainDisjState_1355));
                    MR_hl_field(MR_mktag(1), AllDisjStates_1357, 1) = ((MR_Box) (OrElseDisjStates_1356));
                  }
                  hlds__make_hlds__state_var__svar_finish_disjunction_8_p_0(AllDisjStates_1357, &HLDSGoals_356, STATE_VARIABLE_VarSet_104_1375, &STATE_VARIABLE_VarSet_108_1377, BeforeDisjSVarState_1352, &STATE_VARIABLE_SVarState_109_1378, STATE_VARIABLE_SVarStore_103_1374, STATE_VARIABLE_SVarStore_109);
                  hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_p_0(Context_326, InnerScopeInfo2_1320, &InnerDI_1321, &InnerUO_1322, STATE_VARIABLE_SVarState_109_1378, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_VarSet_108_1377, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_Specs_107_1376, STATE_VARIABLE_Specs_117);
                  {
                    Inner_363 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Inner_363, 0) = ((MR_Box) (InnerDI_1321));
                    MR_hl_field(MR_mktag(0), Inner_363, 1) = ((MR_Box) (InnerUO_1322));
                  }
                }
                else
                {
                  MR_Word InnerDI0_1328;
                  MR_Word InnerUO0_1329;
                  MR_Word InnerDI_1332;
                  MR_Word InnerUO_1333;
                  MR_Word HLDSMainGoal0_1411;
                  MR_Word AfterMainSVarState_1412;
                  MR_Word MainDisjState_1413;
                  MR_Word OrElseDisjStates_1414;
                  MR_Word AllDisjStates_1415;
                  MR_Word STATE_VARIABLE_SVarStore_98_1418;
                  MR_Word STATE_VARIABLE_VarSet_99_1419;
                  MR_Word STATE_VARIABLE_ModuleInfo_100_1420;
                  MR_Word STATE_VARIABLE_QualInfo_101_1421;
                  MR_Word STATE_VARIABLE_Specs_102_1422;
                  MR_Word STATE_VARIABLE_SVarStore_103_1423;
                  MR_Word STATE_VARIABLE_VarSet_104_1424;

                  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, MainGoal_330, Renaming_19, &HLDSMainGoal0_1411, STATE_VARIABLE_SVarState_0_106, &AfterMainSVarState_1412, STATE_VARIABLE_SVarStore_0_108, &STATE_VARIABLE_SVarStore_98_1418, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_99_1419, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_100_1420, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_101_1421, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_102_1422);
                  {
                    MainDisjState_1413 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MainDisjState_1413, 0) = ((MR_Box) (HLDSMainGoal0_1411));
                    MR_hl_field(MR_mktag(0), MainDisjState_1413, 1) = ((MR_Box) (AfterMainSVarState_1412));
                  }
                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(LocKind_17, OrElseGoals_331, Renaming_19, &OrElseDisjStates_1414, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarStore_98_1418, &STATE_VARIABLE_SVarStore_103_1423, STATE_VARIABLE_VarSet_99_1419, &STATE_VARIABLE_VarSet_104_1424, STATE_VARIABLE_ModuleInfo_100_1420, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_101_1421, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_102_1422, STATE_VARIABLE_Specs_117);
                  {
                    AllDisjStates_1415 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), AllDisjStates_1415, 0) = ((MR_Box) (MainDisjState_1413));
                    MR_hl_field(MR_mktag(1), AllDisjStates_1415, 1) = ((MR_Box) (OrElseDisjStates_1414));
                  }
                  hlds__make_hlds__state_var__svar_finish_disjunction_8_p_0(AllDisjStates_1415, &HLDSGoals_356, STATE_VARIABLE_VarSet_104_1424, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_103_1423, STATE_VARIABLE_SVarStore_109);
                  InnerDI0_1328 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Inner0_328, (MR_Integer) 0))));
                  InnerUO0_1329 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Inner0_328, (MR_Integer) 1))));
                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, InnerDI0_1328, &InnerDI_1332);
                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, InnerUO0_1329, &InnerUO_1333);
                  {
                    Inner_363 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Inner_363, 0) = ((MR_Box) (InnerDI_1332));
                    MR_hl_field(MR_mktag(0), Inner_363, 1) = ((MR_Box) (InnerUO_1333));
                  }
                }
              }
              if ((HLDSGoals_356 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_parse_tree_goal_to_hlds_atomic\'/16", (MR_String) "atomic HLDSGoals = []");
                  return;
                }
              else
              {
                HLDSMainGoal_357 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HLDSGoals_356, (MR_Integer) 0))));
                HLDSOrElseGoals_358 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HLDSGoals_356, (MR_Integer) 1))));
              }
              {
                ShortHand_367 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ShortHand_367, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(1), ShortHand_367, 1) = ((MR_Box) (Outer_341));
                MR_hl_field(MR_mktag(1), ShortHand_367, 2) = ((MR_Box) (Inner_363));
                MR_hl_field(MR_mktag(1), ShortHand_367, 3) = ((MR_Box) (MaybeOutputVars_332));
                MR_hl_field(MR_mktag(1), ShortHand_367, 4) = ((MR_Box) (HLDSMainGoal_357));
                MR_hl_field(MR_mktag(1), ShortHand_367, 5) = ((MR_Box) (HLDSOrElseGoals_358));
                MR_hl_field(MR_mktag(1), ShortHand_367, 6) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                GoalExpr_368 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_368, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), GoalExpr_368, 1) = ((MR_Box) (ShortHand_367));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_326, &GoalInfo_369);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_368));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_369));
              }
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word Context_1182 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word MaybeIO0_1183 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word SubGoal0_1184 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word Then0_1185 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word MaybeElse0_1186 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 5))));
              MR_Word Catches0_1187 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 6))));
              MR_Word MaybeCatchAny0_1188 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 7))));

              if ((MaybeIO0_1183 == (MR_Word) ((MR_Unsigned) 0U)))
                hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_p_0(LocKind_17, SubGoal0_1184, Then0_1185, MaybeElse0_1186, Catches0_1187, MaybeCatchAny0_1188, Context_1182, Renaming_19, HLDSGoal_20, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              else
              {
                MR_Word IOStateVar0_1189 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIO0_1183, (MR_Integer) 0))));

                if ((MaybeElse0_1186 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word IOStateVar_1190;

                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, IOStateVar0_1189, &IOStateVar_1190);
                  hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_p_0(LocKind_17, IOStateVar0_1189, IOStateVar_1190, SubGoal0_1184, Then0_1185, Catches0_1187, MaybeCatchAny0_1188, Context_1182, Renaming_19, HLDSGoal_20, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
                }
                else
                {
                  MR_Word Spec_1193;

                  {
                    Spec_1193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Spec_1193, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_parse_tree_goal_to_hlds_try\'/16"));
                    MR_hl_field(MR_mktag(1), Spec_1193, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(1), Spec_1193, 2) = ((MR_Box) ((MR_Unsigned) 40U));
                    MR_hl_field(MR_mktag(1), Spec_1193, 3) = ((MR_Box) (Context_1182));
                    MR_hl_field(MR_mktag(1), Spec_1193, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[39])));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_Specs_117 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_1193));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_116));
                  }
                  *HLDSGoal_20 = hlds__make_goal__true_goal_with_context_1_f_0(Context_1182);
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
              MR_Word P_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word Q_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word TransformedGoal_58;
              MR_Word Var_163;
              MR_Word Var_164;
              MR_Word Var_165;
              MR_Word Context_241 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word next_value_of_Goal_18;

              {
                Var_165 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_165, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), Var_165, 1) = ((MR_Box) (Context_241));
                MR_hl_field(MR_mktag(3), Var_165, 2) = ((MR_Box) (Q_57));
              }
              {
                Var_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_164, 0) = ((MR_Box) (Var_165));
                MR_hl_field(MR_mktag(1), Var_164, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_163 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_163, 0) = ((MR_Box) (Context_241));
                MR_hl_field(MR_mktag(2), Var_163, 1) = ((MR_Box) (P_56));
                MR_hl_field(MR_mktag(2), Var_163, 2) = ((MR_Box) (Var_164));
              }
              {
                TransformedGoal_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TransformedGoal_58, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), TransformedGoal_58, 1) = ((MR_Box) (Context_241));
                MR_hl_field(MR_mktag(3), TransformedGoal_58, 2) = ((MR_Box) (Var_163));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_18 = TransformedGoal_58;
              Goal_18 = next_value_of_Goal_18;
              continue;
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word Context_786 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word SubGoalA_787 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word SubGoalB_788 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word HLDSSubGoalA_790;
              MR_Word HLDSSubGoalB_791;
              MR_Word GoalExpr_793;
              MR_Word GoalInfo_794;
              MR_Word STATE_VARIABLE_SVarState_48_795;
              MR_Word STATE_VARIABLE_SVarStore_49_796;
              MR_Word STATE_VARIABLE_VarSet_50_797;
              MR_Word STATE_VARIABLE_ModuleInfo_51_798;
              MR_Word STATE_VARIABLE_QualInfo_52_799;
              MR_Word STATE_VARIABLE_Specs_53_800;
              MR_Word Var_807;
              MR_Word Var_792;

              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoalA_787, Renaming_19, &HLDSSubGoalA_790, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_48_795, STATE_VARIABLE_SVarStore_0_108, &STATE_VARIABLE_SVarStore_49_796, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_50_797, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_51_798, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_52_799, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_53_800);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoalB_788, Renaming_19, &HLDSSubGoalB_791, STATE_VARIABLE_SVarState_48_795, &Var_792, STATE_VARIABLE_SVarStore_49_796, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_50_797, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_51_798, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_52_799, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_53_800, STATE_VARIABLE_Specs_117);
              *STATE_VARIABLE_SVarState_107 = STATE_VARIABLE_SVarState_0_106;
              {
                Var_807 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_807, 0) = ((MR_Box) (HLDSSubGoalA_790));
                MR_hl_field(MR_mktag(0), Var_807, 1) = ((MR_Box) (HLDSSubGoalB_791));
              }
              {
                GoalExpr_793 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_793, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), GoalExpr_793, 1) = ((MR_Box) (Var_807));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_786, &GoalInfo_794);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_793));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_794));
              }
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Word Context_830 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_String EventName_831 = ((MR_String) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word ArgTerms0_832 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word ArgTerms1_833;
              MR_Word ArgTerms_834;
              MR_Word HeadVars_835;
              MR_Word HeadVarsArgTerms_836;
              MR_Integer Arity_837;
              MR_Word Modes_838;
              MR_Word Details_839;
              MR_Word GoalExpr0_840;
              MR_Word GoalInfo_841;
              MR_Word HLDSGoal0_842;
              MR_Word CallId_843;
              MR_Word STATE_VARIABLE_VarSet_54_845;
              MR_Word STATE_VARIABLE_SVarState_55_846;
              MR_Word STATE_VARIABLE_Specs_56_847;
              MR_Word Var_848;
              MR_Word Var_851;
              MR_Word Var_852;
              MR_Word STATE_VARIABLE_SVarState_62_853;

              hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(ArgTerms0_832, &ArgTerms1_833);
              parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, ArgTerms1_833, &ArgTerms_834);
              hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_9_p_0(ArgTerms_834, &HeadVars_835, &HeadVarsArgTerms_836, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_54_845, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_55_846, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_56_847);
              mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[5]), HeadVars_835, &Arity_837);
              Var_848 = parse_tree__prog_mode__in_mode_0_f_0();
              mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Arity_837, ((MR_Box) (Var_848)), &Modes_838);
              {
                Details_839 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Details_839, 0) = ((MR_Box) (EventName_831));
              }
              {
                GoalExpr0_840 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr0_840, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), GoalExpr0_840, 1) = ((MR_Box) (Details_839));
                MR_hl_field(MR_mktag(3), GoalExpr0_840, 2) = ((MR_Box) (HeadVars_835));
                MR_hl_field(MR_mktag(3), GoalExpr0_840, 3) = ((MR_Box) (Modes_838));
                MR_hl_field(MR_mktag(3), GoalExpr0_840, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), GoalExpr0_840, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_830, &GoalInfo_841);
              {
                HLDSGoal0_842 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), HLDSGoal0_842, 0) = ((MR_Box) (GoalExpr0_840));
                MR_hl_field(MR_mktag(0), HLDSGoal0_842, 1) = ((MR_Box) (GoalInfo_841));
              }
              {
                Var_851 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_851, 0) = ((MR_Box) (EventName_831));
              }
              {
                CallId_843 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), CallId_843, 0) = ((MR_Box) (Var_851));
              }
              {
                Var_852 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_852, 0) = ((MR_Box) (CallId_843));
              }
              hlds__make_hlds__superhomogeneous__insert_arg_unifications_17_p_0(HeadVarsArgTerms_836, Context_830, Var_852, HLDSGoal0_842, HLDSGoal_20, STATE_VARIABLE_SVarState_55_846, &STATE_VARIABLE_SVarState_62_853, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_54_845, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_56_847, STATE_VARIABLE_Specs_117);
              hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(LocKind_17, STATE_VARIABLE_SVarState_62_853, STATE_VARIABLE_SVarState_107);
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

  hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__3_3, ((MR_Word) (wrapper_arg_3)), &conv2_HeadVar__5_5, ((MR_Word) (wrapper_arg_5)), &conv1_HeadVar__7_7, ((MR_Word) (wrapper_arg_7)), &conv0_HeadVar__9_9);
  *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv2_HeadVar__5_5));
  *wrapper_arg_6 = ((MR_Box) (conv1_HeadVar__7_7));
  *wrapper_arg_8 = ((MR_Box) (conv0_HeadVar__9_9));
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(
  MR_Word LocKind_23,
  MR_Word Vars0_24,
  MR_Word StateVars0_25,
  MR_Word DotSVars0_26,
  MR_Word ColonSVars0_27,
  MR_Word Context_28,
  MR_Word Renaming_29,
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

  parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_29, Vars0_24, &Vars_39);
  parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_29, StateVars0_25, &StateVars1_40);
  parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_29, DotSVars0_26, &DotSVars1_41);
  parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_29, ColonSVars0_27, &ColonSVars1_42);
  {
    Var_63 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_4[0]));
    MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0_1));
    MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (Context_28));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[2]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), Var_63, StateVars1_40, &OldStateVars_43, ((MR_Box) (STATE_VARIABLE_VarSet_0_51)), &conv6_STATE_VARIABLE_VarSet_64_64, ((MR_Box) (STATE_VARIABLE_SVarState_0_47)), &conv5_STATE_VARIABLE_SVarState_65_65, ((MR_Box) (STATE_VARIABLE_Specs_0_57)), &conv4_STATE_VARIABLE_Specs_66_66);
  STATE_VARIABLE_VarSet_64_64 = ((MR_Word) (conv6_STATE_VARIABLE_VarSet_64_64));
  STATE_VARIABLE_SVarState_65_65 = ((MR_Word) (conv5_STATE_VARIABLE_SVarState_65_65));
  STATE_VARIABLE_Specs_66_66 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_66_66));
  mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[2]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), Var_63, DotSVars1_41, &DotSVars_44, ((MR_Box) (STATE_VARIABLE_VarSet_64_64)), &conv9_STATE_VARIABLE_VarSet_68_68, ((MR_Box) (STATE_VARIABLE_SVarState_65_65)), &conv8_STATE_VARIABLE_SVarState_69_69, ((MR_Box) (STATE_VARIABLE_Specs_66_66)), &conv7_STATE_VARIABLE_Specs_70_70);
  STATE_VARIABLE_VarSet_68_68 = ((MR_Word) (conv9_STATE_VARIABLE_VarSet_68_68));
  STATE_VARIABLE_SVarState_69_69 = ((MR_Word) (conv8_STATE_VARIABLE_SVarState_69_69));
  STATE_VARIABLE_Specs_70_70 = ((MR_Word) (conv7_STATE_VARIABLE_Specs_70_70));
  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_23, Goal_31, Renaming_29, HLDSGoal_32, STATE_VARIABLE_SVarState_69_69, &STATE_VARIABLE_SVarState_71_71, STATE_VARIABLE_SVarStore_0_49, STATE_VARIABLE_SVarStore_50, STATE_VARIABLE_VarSet_68_68, &STATE_VARIABLE_VarSet_73_73, STATE_VARIABLE_ModuleInfo_0_53, STATE_VARIABLE_ModuleInfo_54, STATE_VARIABLE_QualInfo_0_55, STATE_VARIABLE_QualInfo_56, STATE_VARIABLE_Specs_70_70, &STATE_VARIABLE_Specs_76_76);
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
  MR_Word HeadVar__2_2,
  MR_Word Renaming_3,
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
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
    MR_Word Goal_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word DisjState_38;
    MR_Word DisjStates_39;
    MR_Word HLDSGoal_46;
    MR_Word SVarStateAfterDisjunct_47;
    MR_Word STATE_VARIABLE_SVarStore_58_58;
    MR_Word STATE_VARIABLE_VarSet_59_59;
    MR_Word STATE_VARIABLE_ModuleInfo_60_60;
    MR_Word STATE_VARIABLE_QualInfo_61_61;
    MR_Word STATE_VARIABLE_Specs_62_62;

    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_1, Goal_35, Renaming_3, &HLDSGoal_46, HeadVar__5_5, &SVarStateAfterDisjunct_47, HeadVar__6_6, &STATE_VARIABLE_SVarStore_58_58, STATE_VARIABLE_VarSet_0_8, &STATE_VARIABLE_VarSet_59_59, STATE_VARIABLE_ModuleInfo_0_10, &STATE_VARIABLE_ModuleInfo_60_60, STATE_VARIABLE_QualInfo_0_12, &STATE_VARIABLE_QualInfo_61_61, STATE_VARIABLE_Specs_0_14, &STATE_VARIABLE_Specs_62_62);
    {
      DisjState_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), DisjState_38, 0) = ((MR_Box) (HLDSGoal_46));
      MR_hl_field(MR_mktag(0), DisjState_38, 1) = ((MR_Box) (SVarStateAfterDisjunct_47));
    }
    hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(LocKind_1, Goals_36, Renaming_3, &DisjStates_39, HeadVar__5_5, STATE_VARIABLE_SVarStore_58_58, HeadVar__7_7, STATE_VARIABLE_VarSet_59_59, STATE_VARIABLE_VarSet_9, STATE_VARIABLE_ModuleInfo_60_60, STATE_VARIABLE_ModuleInfo_11, STATE_VARIABLE_QualInfo_61_61, STATE_VARIABLE_QualInfo_13, STATE_VARIABLE_Specs_62_62, STATE_VARIABLE_Specs_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DisjState_38));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (DisjStates_39));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_p_0(
  MR_Word LocKind_22,
  MR_Word SubGoal_23,
  MR_Word ThenGoal_24,
  MR_Word MaybeElseGoal_25,
  MR_Word Catches_26,
  MR_Word MaybeCatchAny_27,
  MR_Word Context_28,
  MR_Word Renaming_29,
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

  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "TryResult", &ResultVar_37, STATE_VARIABLE_VarSet_0_57, &STATE_VARIABLE_VarSet_66_66);
  mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &ExcpVar_38, STATE_VARIABLE_VarSet_66_66, &STATE_VARIABLE_VarSet_67_67);
  {
    ResultVarTerm_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), ResultVarTerm_39, 0) = ((MR_Box) (ResultVar_37));
    MR_hl_field(MR_mktag(1), ResultVarTerm_39, 1) = ((MR_Box) (Context_28));
  }
  {
    ExcpVarTerm_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), ExcpVarTerm_40, 0) = ((MR_Box) (ExcpVar_38));
    MR_hl_field(MR_mktag(1), ExcpVarTerm_40, 1) = ((MR_Box) (Context_28));
  }
  {
    NullTupleTerm_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), NullTupleTerm_41, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[4]));
    MR_hl_field(MR_mktag(0), NullTupleTerm_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), NullTupleTerm_41, 2) = ((MR_Box) (Context_28));
  }
  hlds__hlds_goal__goal_info_init_2_p_0(Context_28, &GoalInfo_42);
  Var_71 = hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_f_0();
  {
    Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (ResultVarTerm_39));
    MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    CallMagicGoal_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), CallMagicGoal_43, 0) = ((MR_Box) (Context_28));
    MR_hl_field(MR_mktag(1), CallMagicGoal_43, 1) = ((MR_Box) (Var_71));
    MR_hl_field(MR_mktag(1), CallMagicGoal_43, 2) = ((MR_Box) (Var_72));
    MR_hl_field(MR_mktag(1), CallMagicGoal_43, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  Var_75 = hlds__make_hlds__goal_expr_to_goal__exception_functor_3_f_0((MR_String) "succeeded", NullTupleTerm_41, Context_28);
  {
    ResultIsSucceededUnifyGoal_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ResultIsSucceededUnifyGoal_44, 0) = ((MR_Box) (Context_28));
    MR_hl_field(MR_mktag(0), ResultIsSucceededUnifyGoal_44, 1) = ((MR_Box) (ResultVarTerm_39));
    MR_hl_field(MR_mktag(0), ResultIsSucceededUnifyGoal_44, 2) = ((MR_Box) (Var_75));
    MR_hl_field(MR_mktag(0), ResultIsSucceededUnifyGoal_44, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  if ((MaybeElseGoal_25 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_80;
    MR_Word Var_84;
    MR_Word Var_85;

    {
      Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_80, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), Var_80, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
      MR_hl_field(MR_mktag(3), Var_80, 2) = ((MR_Box) (Context_28));
      MR_hl_field(MR_mktag(3), Var_80, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_80, 4) = ((MR_Box) (SubGoal_23));
    }
    {
      Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_85, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), Var_85, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
      MR_hl_field(MR_mktag(3), Var_85, 2) = ((MR_Box) (Context_28));
      MR_hl_field(MR_mktag(3), Var_85, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_85, 4) = ((MR_Box) (ThenGoal_24));
    }
    {
      Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
      MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      SucceededSubGoal_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), SucceededSubGoal_46, 0) = ((MR_Box) (Context_28));
      MR_hl_field(MR_mktag(2), SucceededSubGoal_46, 1) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(2), SucceededSubGoal_46, 2) = ((MR_Box) (Var_84));
    }
  }
  else
  {
    MR_Word ElseGoal_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElseGoal_25, (MR_Integer) 0))));

    {
      SucceededSubGoal_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), SucceededSubGoal_46, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), SucceededSubGoal_46, 1) = ((MR_Box) (Context_28));
      MR_hl_field(MR_mktag(3), SucceededSubGoal_46, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), SucceededSubGoal_46, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), SucceededSubGoal_46, 4) = ((MR_Box) (SubGoal_23));
      MR_hl_field(MR_mktag(3), SucceededSubGoal_46, 5) = ((MR_Box) (ThenGoal_24));
      MR_hl_field(MR_mktag(3), SucceededSubGoal_46, 6) = ((MR_Box) (ElseGoal_45));
    }
  }
  {
    Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (SucceededSubGoal_46));
    MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    ResultIsSucceededDisjunctGoal_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), ResultIsSucceededDisjunctGoal_47, 0) = ((MR_Box) (Context_28));
    MR_hl_field(MR_mktag(2), ResultIsSucceededDisjunctGoal_47, 1) = ((MR_Box) (ResultIsSucceededUnifyGoal_44));
    MR_hl_field(MR_mktag(2), ResultIsSucceededDisjunctGoal_47, 2) = ((MR_Box) (Var_90));
  }
  hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(ResultVarTerm_39, ExcpVarTerm_40, Catches_26, MaybeCatchAny_27, Context_28, &ResultIsExceptionDisjunctGoal_48);
  {
    Var_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_93, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(MR_mktag(3), Var_93, 1) = ((MR_Box) (Context_28));
    MR_hl_field(MR_mktag(3), Var_93, 2) = ((MR_Box) (ResultIsSucceededDisjunctGoal_47));
    MR_hl_field(MR_mktag(3), Var_93, 3) = ((MR_Box) (ResultIsExceptionDisjunctGoal_48));
    MR_hl_field(MR_mktag(3), Var_93, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (Var_93));
    MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    CallMagicThenDisjunctionGoal_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), CallMagicThenDisjunctionGoal_49, 0) = ((MR_Box) (Context_28));
    MR_hl_field(MR_mktag(2), CallMagicThenDisjunctionGoal_49, 1) = ((MR_Box) (CallMagicGoal_43));
    MR_hl_field(MR_mktag(2), CallMagicThenDisjunctionGoal_49, 2) = ((MR_Box) (Var_92));
  }
  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_22, CallMagicThenDisjunctionGoal_49, Renaming_29, &HLDSCallMagicThenDisjunctionGoal_50, STATE_VARIABLE_SVarState_0_53, STATE_VARIABLE_SVarState_54, STATE_VARIABLE_SVarStore_0_55, STATE_VARIABLE_SVarStore_56, STATE_VARIABLE_VarSet_67_67, STATE_VARIABLE_VarSet_58, STATE_VARIABLE_ModuleInfo_0_59, STATE_VARIABLE_ModuleInfo_60, STATE_VARIABLE_QualInfo_0_61, STATE_VARIABLE_QualInfo_62, STATE_VARIABLE_Specs_0_63, STATE_VARIABLE_Specs_64);
  {
    ShortHand_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), ShortHand_51, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(2), ShortHand_51, 1) = ((MR_Box) (ResultVar_37));
    MR_hl_field(MR_mktag(2), ShortHand_51, 2) = ((MR_Box) (HLDSCallMagicThenDisjunctionGoal_50));
  }
  {
    GoalExpr_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), GoalExpr_52, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(MR_mktag(3), GoalExpr_52, 1) = ((MR_Box) (ShortHand_51));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *TryGoal_30 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_52));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_42));
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_p_0(
  MR_Word LocKind_23,
  MR_Word IOStateVarUnrenamed_24,
  MR_Word IOStateVar_25,
  MR_Word Goal0_26,
  MR_Word Then0_27,
  MR_Word Catches0_28,
  MR_Word MaybeCatchAny0_29,
  MR_Word Context_30,
  MR_Word Renaming_31,
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
    ResultVarTerm_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), ResultVarTerm_41, 0) = ((MR_Box) (ResultVar_39));
    MR_hl_field(MR_mktag(1), ResultVarTerm_41, 1) = ((MR_Box) (Context_30));
  }
  {
    ExcpVarTerm_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), ExcpVarTerm_42, 0) = ((MR_Box) (ExcpVar_40));
    MR_hl_field(MR_mktag(1), ExcpVarTerm_42, 1) = ((MR_Box) (Context_30));
  }
  {
    NullTupleTerm_43 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), NullTupleTerm_43, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[4]));
    MR_hl_field(MR_mktag(0), NullTupleTerm_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), NullTupleTerm_43, 2) = ((MR_Box) (Context_30));
  }
  hlds__hlds_goal__goal_info_init_2_p_0(Context_30, &GoalInfo_44);
  Var_86 = hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_f_0();
  {
    Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (ResultVarTerm_41));
    MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    CallMagicGoal_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), CallMagicGoal_45, 0) = ((MR_Box) (Context_30));
    MR_hl_field(MR_mktag(1), CallMagicGoal_45, 1) = ((MR_Box) (Var_86));
    MR_hl_field(MR_mktag(1), CallMagicGoal_45, 2) = ((MR_Box) (Var_87));
    MR_hl_field(MR_mktag(1), CallMagicGoal_45, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_23, CallMagicGoal_45, Renaming_31, &HLDSCallMagicGoal_46, STATE_VARIABLE_SVarState_0_68, &STATE_VARIABLE_SVarState_90_90, STATE_VARIABLE_SVarStore_0_70, &STATE_VARIABLE_SVarStore_91_91, STATE_VARIABLE_VarSet_82_82, &STATE_VARIABLE_VarSet_92_92, STATE_VARIABLE_ModuleInfo_0_74, &STATE_VARIABLE_ModuleInfo_93_93, STATE_VARIABLE_QualInfo_0_76, &STATE_VARIABLE_QualInfo_94_94, STATE_VARIABLE_Specs_0_78, &STATE_VARIABLE_Specs_95_95);
  hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(Context_30, IOStateVar_25, &IOStateVarBefore_47, STATE_VARIABLE_VarSet_92_92, &STATE_VARIABLE_VarSet_96_96, STATE_VARIABLE_SVarState_90_90, &STATE_VARIABLE_SVarState_149_149, STATE_VARIABLE_Specs_95_95, &STATE_VARIABLE_Specs_98_98);
  Var_99 = hlds__make_hlds__goal_expr_to_goal__exception_functor_3_f_0((MR_String) "succeeded", NullTupleTerm_43, Context_30);
  {
    ResultIsSucceededUnifyGoal_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ResultIsSucceededUnifyGoal_49, 0) = ((MR_Box) (Context_30));
    MR_hl_field(MR_mktag(0), ResultIsSucceededUnifyGoal_49, 1) = ((MR_Box) (ResultVarTerm_41));
    MR_hl_field(MR_mktag(0), ResultIsSucceededUnifyGoal_49, 2) = ((MR_Box) (Var_99));
    MR_hl_field(MR_mktag(0), ResultIsSucceededUnifyGoal_49, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_23, ResultIsSucceededUnifyGoal_49, Renaming_31, &HLDSResultIsSucceededUnifyGoal_50, STATE_VARIABLE_SVarState_149_149, &STATE_VARIABLE_SVarState_102_102, STATE_VARIABLE_SVarStore_91_91, &STATE_VARIABLE_SVarStore_103_103, STATE_VARIABLE_VarSet_96_96, &STATE_VARIABLE_VarSet_104_104, STATE_VARIABLE_ModuleInfo_93_93, &STATE_VARIABLE_ModuleInfo_105_105, STATE_VARIABLE_QualInfo_94_94, &STATE_VARIABLE_QualInfo_106_106, STATE_VARIABLE_Specs_98_98, &STATE_VARIABLE_Specs_107_107);
  {
    Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (IOStateVarUnrenamed_24));
    MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) (Context_30));
  }
  {
    Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Var_112));
    MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_108 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[0]));
    MR_hl_field(MR_mktag(0), Var_108, 1) = ((MR_Box) (Var_111));
    MR_hl_field(MR_mktag(0), Var_108, 2) = ((MR_Box) (Context_30));
  }
  {
    Var_114 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[1]));
    MR_hl_field(MR_mktag(0), Var_114, 1) = ((MR_Box) (Var_111));
    MR_hl_field(MR_mktag(0), Var_114, 2) = ((MR_Box) (Context_30));
  }
  {
    IOUnify_51 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), IOUnify_51, 0) = ((MR_Box) (Context_30));
    MR_hl_field(MR_mktag(0), IOUnify_51, 1) = ((MR_Box) (Var_108));
    MR_hl_field(MR_mktag(0), IOUnify_51, 2) = ((MR_Box) (Var_114));
    MR_hl_field(MR_mktag(0), IOUnify_51, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (Goal0_26));
    MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_124 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), Var_124, 0) = ((MR_Box) (Context_30));
    MR_hl_field(MR_mktag(2), Var_124, 1) = ((MR_Box) (IOUnify_51));
    MR_hl_field(MR_mktag(2), Var_124, 2) = ((MR_Box) (Var_125));
  }
  {
    ScopedGoal_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), ScopedGoal_52, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(MR_mktag(3), ScopedGoal_52, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
    MR_hl_field(MR_mktag(3), ScopedGoal_52, 2) = ((MR_Box) (Context_30));
    MR_hl_field(MR_mktag(3), ScopedGoal_52, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), ScopedGoal_52, 4) = ((MR_Box) (Var_124));
  }
  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_23, ScopedGoal_52, Renaming_31, &HLDSScopedGoal_53, STATE_VARIABLE_SVarState_102_102, &STATE_VARIABLE_SVarState_127_127, STATE_VARIABLE_SVarStore_103_103, &STATE_VARIABLE_SVarStore_128_128, STATE_VARIABLE_VarSet_104_104, &STATE_VARIABLE_VarSet_129_129, STATE_VARIABLE_ModuleInfo_105_105, &STATE_VARIABLE_ModuleInfo_130_130, STATE_VARIABLE_QualInfo_106_106, &STATE_VARIABLE_QualInfo_131_131, STATE_VARIABLE_Specs_107_107, &STATE_VARIABLE_Specs_132_132);
  hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(Context_30, IOStateVar_25, &IOStateVarAfter_54, STATE_VARIABLE_VarSet_129_129, &STATE_VARIABLE_VarSet_133_133, STATE_VARIABLE_SVarState_127_127, &STATE_VARIABLE_SVarState_134_134, STATE_VARIABLE_Specs_132_132, &STATE_VARIABLE_Specs_135_135);
  {
    ScopedThenGoal_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), ScopedThenGoal_55, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(MR_mktag(3), ScopedThenGoal_55, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
    MR_hl_field(MR_mktag(3), ScopedThenGoal_55, 2) = ((MR_Box) (Context_30));
    MR_hl_field(MR_mktag(3), ScopedThenGoal_55, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), ScopedThenGoal_55, 4) = ((MR_Box) (Then0_27));
  }
  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_23, ScopedThenGoal_55, Renaming_31, &HLDSScopedThenGoal_56, STATE_VARIABLE_SVarState_134_134, &SVarStateAfterResultIsSucceededDisjunct_58, STATE_VARIABLE_SVarStore_128_128, &STATE_VARIABLE_SVarStore_140_140, STATE_VARIABLE_VarSet_133_133, &STATE_VARIABLE_VarSet_141_141, STATE_VARIABLE_ModuleInfo_130_130, &STATE_VARIABLE_ModuleInfo_142_142, STATE_VARIABLE_QualInfo_131_131, &STATE_VARIABLE_QualInfo_143_143, STATE_VARIABLE_Specs_135_135, &STATE_VARIABLE_Specs_144_144);
  {
    Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (HLDSScopedThenGoal_56));
    MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_146, 0) = ((MR_Box) (HLDSScopedGoal_53));
    MR_hl_field(MR_mktag(1), Var_146, 1) = ((MR_Box) (Var_147));
  }
  {
    Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) (HLDSResultIsSucceededUnifyGoal_50));
    MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) (Var_146));
  }
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_145, GoalInfo_44, &HLDSResultIsSucceededDisjunctGoal_57);
  hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(ResultVarTerm_41, ExcpVarTerm_42, Catches0_28, MaybeCatchAny0_29, Context_30, &ResultIsExceptionDisjunctGoal_59);
  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_23, ResultIsExceptionDisjunctGoal_59, Renaming_31, &HLDSResultIsExceptionDisjunctGoal_60, STATE_VARIABLE_SVarState_149_149, &SVarStateAfterResultIsExceptionDisjunct_61, STATE_VARIABLE_SVarStore_140_140, &STATE_VARIABLE_SVarStore_151_151, STATE_VARIABLE_VarSet_141_141, &STATE_VARIABLE_VarSet_152_152, STATE_VARIABLE_ModuleInfo_142_142, STATE_VARIABLE_ModuleInfo_75, STATE_VARIABLE_QualInfo_143_143, STATE_VARIABLE_QualInfo_77, STATE_VARIABLE_Specs_144_144, STATE_VARIABLE_Specs_79);
  {
    Var_156 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_156, 0) = ((MR_Box) (HLDSResultIsSucceededDisjunctGoal_57));
    MR_hl_field(MR_mktag(0), Var_156, 1) = ((MR_Box) (SVarStateAfterResultIsSucceededDisjunct_58));
  }
  {
    Var_158 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_158, 0) = ((MR_Box) (HLDSResultIsExceptionDisjunctGoal_60));
    MR_hl_field(MR_mktag(0), Var_158, 1) = ((MR_Box) (SVarStateAfterResultIsExceptionDisjunct_61));
  }
  {
    Var_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_157, 0) = ((MR_Box) (Var_158));
    MR_hl_field(MR_mktag(1), Var_157, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    DisjunctSVarStates_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), DisjunctSVarStates_62, 0) = ((MR_Box) (Var_156));
    MR_hl_field(MR_mktag(1), DisjunctSVarStates_62, 1) = ((MR_Box) (Var_157));
  }
  hlds__make_hlds__state_var__svar_finish_disjunction_8_p_0(DisjunctSVarStates_62, &HLDSDisjuncts_63, STATE_VARIABLE_VarSet_152_152, STATE_VARIABLE_VarSet_73, STATE_VARIABLE_SVarState_149_149, STATE_VARIABLE_SVarState_69, STATE_VARIABLE_SVarStore_151_151, STATE_VARIABLE_SVarStore_71);
  hlds__hlds_goal__disj_list_to_goal_3_p_0(HLDSDisjuncts_63, GoalInfo_44, &HLDSDisjunction_64);
  {
    Var_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_164, 0) = ((MR_Box) (HLDSDisjunction_64));
    MR_hl_field(MR_mktag(1), Var_164, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_163, 0) = ((MR_Box) (HLDSCallMagicGoal_46));
    MR_hl_field(MR_mktag(1), Var_163, 1) = ((MR_Box) (Var_164));
  }
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_163, GoalInfo_44, &CallMagicThenDisjunction_65);
  {
    IOStateVars_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), IOStateVars_66, 0) = ((MR_Box) (IOStateVarBefore_47));
    MR_hl_field(MR_mktag(0), IOStateVars_66, 1) = ((MR_Box) (IOStateVarAfter_54));
  }
  {
    Var_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_167, 0) = ((MR_Box) (IOStateVars_66));
  }
  {
    Var_166 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), Var_166, 0) = ((MR_Box) (Var_167));
    MR_hl_field(MR_mktag(2), Var_166, 1) = ((MR_Box) (ResultVar_39));
    MR_hl_field(MR_mktag(2), Var_166, 2) = ((MR_Box) (CallMagicThenDisjunction_65));
  }
  {
    GoalExpr_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), GoalExpr_67, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(MR_mktag(3), GoalExpr_67, 1) = ((MR_Box) (Var_166));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *TryGoal_32 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_67));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_44));
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

  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Goal_20, Renaming_18, &HLDSGoal_27, SVarStateBefore_19, &SVarStateAfterDisjunct_28, STATE_VARIABLE_SVarStore_0_32, STATE_VARIABLE_SVarStore_33, STATE_VARIABLE_VarSet_0_34, STATE_VARIABLE_VarSet_35, STATE_VARIABLE_ModuleInfo_0_36, STATE_VARIABLE_ModuleInfo_37, STATE_VARIABLE_QualInfo_0_38, STATE_VARIABLE_QualInfo_39, STATE_VARIABLE_Specs_0_40, STATE_VARIABLE_Specs_41);
  {
    DisjState_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), DisjState_29, 0) = ((MR_Box) (HLDSGoal_27));
    MR_hl_field(MR_mktag(0), DisjState_29, 1) = ((MR_Box) (SVarStateAfterDisjunct_28));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_RevDisjStates_31 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DisjState_29));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevDisjStates_0_30));
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__accumulate_plain_or_par_conjunct_18_p_0(
  MR_Word LocKind_19,
  MR_Word ConjType_20,
  MR_Word Renaming_21,
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

  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_19, Goal_22, Renaming_21, &HLDSGoal_30, STATE_VARIABLE_SVarState_0_36, STATE_VARIABLE_SVarState_37, STATE_VARIABLE_SVarStore_0_38, STATE_VARIABLE_SVarStore_39, STATE_VARIABLE_VarSet_0_40, STATE_VARIABLE_VarSet_41, STATE_VARIABLE_ModuleInfo_0_42, STATE_VARIABLE_ModuleInfo_43, STATE_VARIABLE_QualInfo_0_44, STATE_VARIABLE_QualInfo_45, STATE_VARIABLE_Specs_0_46, STATE_VARIABLE_Specs_47);
  HLDSGoalExpr_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HLDSGoal_30, (MR_Integer) 0))));
  succeeded = ((((MR_tag((MR_Word) HLDSGoalExpr_31)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HLDSGoalExpr_31, (MR_Integer) 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Var_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HLDSGoalExpr_31, (MR_Integer) 1))) & (MR_Integer) 1);
    HLDSConjuncts_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HLDSGoalExpr_31, (MR_Integer) 2))));
    succeeded = (ConjType_20 == Var_58);
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
    MR_Word DotVar0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PODVar0_15, (MR_Integer) 0))));
    MR_Word DotVar_22;

    parse_tree__prog_rename__rename_var_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MustRename_13, Renaming_14, DotVar0_21, &DotVar_22);
    hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(Context_12, DotVar_22, Var_16, STATE_VARIABLE_VarSet_0_25, STATE_VARIABLE_VarSet_26, STATE_VARIABLE_SVarState_0_23, STATE_VARIABLE_SVarState_24, STATE_VARIABLE_Specs_0_27, STATE_VARIABLE_Specs_28);
  }
  else
  {
    MR_Word Var0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PODVar0_15, (MR_Integer) 0))));

    parse_tree__prog_rename__rename_var_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MustRename_13, Renaming_14, Var0_20, Var_16);
    *STATE_VARIABLE_SVarState_24 = STATE_VARIABLE_SVarState_0_23;
    *STATE_VARIABLE_VarSet_26 = STATE_VARIABLE_VarSet_0_25;
    *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_8_p_0(
  MR_Word Context_9,
  MR_Word VarSet_10,
  MR_Word Renaming_11,
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

  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_11, StateVar0_12, StateVar_13);
  mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_10, *StateVar_13, StateVarName_14);
  IO_17 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
  {
    GetPredName_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), GetPredName_18, 0) = ((MR_Box) (IO_17));
    MR_hl_field(MR_mktag(1), GetPredName_18, 1) = ((MR_Box) ((MR_String) "unsafe_get_io_state"));
  }
  {
    SetPredName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), SetPredName_19, 0) = ((MR_Box) (IO_17));
    MR_hl_field(MR_mktag(1), SetPredName_19, 1) = ((MR_Box) ((MR_String) "unsafe_set_io_state"));
  }
  {
    Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (StateVar0_12));
    MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Context_9));
  }
  {
    Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
    MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    SetVar_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), SetVar_20, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[0]));
    MR_hl_field(MR_mktag(0), SetVar_20, 1) = ((MR_Box) (Var_29));
    MR_hl_field(MR_mktag(0), SetVar_20, 2) = ((MR_Box) (Context_9));
  }
  {
    UseVar_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), UseVar_21, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[1]));
    MR_hl_field(MR_mktag(0), UseVar_21, 1) = ((MR_Box) (Var_29));
    MR_hl_field(MR_mktag(0), UseVar_21, 2) = ((MR_Box) (Context_9));
  }
  {
    Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (SetVar_20));
    MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    *GetGoal_15 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Context_9));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (GetPredName_18));
    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Var_37));
    MR_hl_field(MR_mktag(1), base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  {
    Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (UseVar_21));
    MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    *SetGoal_16 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Context_9));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SetPredName_19));
    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Var_39));
    MR_hl_field(MR_mktag(1), base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
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
    SymName_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), SymName_9, 0) = ((MR_Box) (Var_10));
    MR_hl_field(MR_mktag(1), SymName_9, 1) = ((MR_Box) (Atom_5));
  }
  {
    Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Arg_6));
    MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
    HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), HeadVar__1_1, 0) = ((MR_Box) (Var_2));
    MR_hl_field(MR_mktag(1), HeadVar__1_1, 1) = ((MR_Box) ((MR_String) "magic_exception_result"));
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
  MR_Word SymName_24;
  MR_Word Var_25;
  MR_Word Var_26;

  Var_25 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
  {
    SymName_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), SymName_24, 0) = ((MR_Box) (Var_25));
    MR_hl_field(MR_mktag(1), SymName_24, 1) = ((MR_Box) ((MR_String) "exception"));
  }
  {
    Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (ExcpVarTerm_8));
    MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SymName_24, Var_26, Context_11, &Var_15);
  {
    ResultIsExceptionUnify_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ResultIsExceptionUnify_13, 0) = ((MR_Box) (Context_11));
    MR_hl_field(MR_mktag(0), ResultIsExceptionUnify_13, 1) = ((MR_Box) (ResultVarTerm_7));
    MR_hl_field(MR_mktag(0), ResultIsExceptionUnify_13, 2) = ((MR_Box) (Var_15));
    MR_hl_field(MR_mktag(0), ResultIsExceptionUnify_13, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(ResultVarTerm_7, ExcpVarTerm_8, Catches_9, MaybeCatchAny_10, &CatchChain_14);
  {
    Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (CatchChain_14));
    MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    *Goal_12 = base;
    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Context_11));
    MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ResultIsExceptionUnify_13));
    MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (Var_18));
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
        Rethrow_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Rethrow_20, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), Rethrow_20, 1) = ((MR_Box) ((MR_String) "rethrow"));
      }
      Var_34 = mercury__term__get_term_context_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ExcpVarTerm_7);
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (ResultVarTerm_6));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        *Goal_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Rethrow_20));
        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(1), base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
    }
    else
    {
      MR_Word CatchAnyVar_16;
      MR_Word CatchAnyGoal_17;
      MR_Word Context_18;
      MR_Word GetUnivValue_19;
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCatchAny_9, (MR_Integer) 0))));
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_30;
      MR_Word SymName_44;
      MR_Word Var_45;
      MR_Word Var_46;

      CatchAnyVar_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))));
      CatchAnyGoal_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1))));
      Context_18 = parse_tree__prog_item__get_goal_context_1_f_0(CatchAnyGoal_17);
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (CatchAnyVar_16));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Context_18));
      }
      Var_45 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
      {
        SymName_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SymName_44, 0) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(1), SymName_44, 1) = ((MR_Box) ((MR_String) "exc_univ_value"));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (ExcpVarTerm_7));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SymName_44, Var_46, Context_18, &Var_27);
      {
        GetUnivValue_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), GetUnivValue_19, 0) = ((MR_Box) (Context_18));
        MR_hl_field(MR_mktag(0), GetUnivValue_19, 1) = ((MR_Box) (Var_26));
        MR_hl_field(MR_mktag(0), GetUnivValue_19, 2) = ((MR_Box) (Var_27));
        MR_hl_field(MR_mktag(0), GetUnivValue_19, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (CatchAnyGoal_17));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *Goal_10 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Context_18));
        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (GetUnivValue_19));
        MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (Var_30));
      }
    }
  else
  {
    MR_Word FirstPattern_11;
    MR_Word FirstGoal_12;
    MR_Word RestCatches_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Catches_8, (MR_Integer) 1))));
    MR_Word ElseGoal_14;
    MR_Word FirstPatternGoal_15;
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Catches_8, (MR_Integer) 0))));
    MR_Word Var_22;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_56;
    MR_Word Var_57;

    FirstPattern_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0))));
    FirstGoal_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 1))));
    hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(ResultVarTerm_6, ExcpVarTerm_7, RestCatches_13, MaybeCatchAny_9, &ElseGoal_14);
    Var_52 = mercury__term__get_term_context_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), FirstPattern_11);
    Var_54 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_String) "exc_univ_to_type"));
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (FirstPattern_11));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (ExcpVarTerm_7));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_57));
    }
    {
      FirstPatternGoal_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), FirstPatternGoal_15, 0) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(1), FirstPatternGoal_15, 1) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(1), FirstPatternGoal_15, 2) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(1), FirstPatternGoal_15, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    Var_22 = mercury__term__get_term_context_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), FirstPattern_11);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
      *Goal_10 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (FirstPatternGoal_15));
      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (FirstGoal_12));
      MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (ElseGoal_14));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_p_0(
  MR_Word LocKind_18,
  MR_Word AccessType_19,
  MR_Word ArgTerms0_20,
  MR_Word Context_21,
  MR_Word * HLDSGoal_22,
  MR_Word STATE_VARIABLE_SVarState_0_45,
  MR_Word * STATE_VARIABLE_SVarState_46,
  MR_Word STATE_VARIABLE_SVarStore_0_47,
  MR_Word * STATE_VARIABLE_SVarStore_48,
  MR_Word STATE_VARIABLE_VarSet_0_49,
  MR_Word * STATE_VARIABLE_VarSet_50,
  MR_Word STATE_VARIABLE_ModuleInfo_0_51,
  MR_Word * STATE_VARIABLE_ModuleInfo_52,
  MR_Word STATE_VARIABLE_QualInfo_0_53,
  MR_Word * STATE_VARIABLE_QualInfo_54,
  MR_Word STATE_VARIABLE_Specs_0_55,
  MR_Word * STATE_VARIABLE_Specs_56)
{
  MR_bool succeeded;
  MR_Word GoalInfo_29;
  MR_Word FieldNameTerm_34;
  MR_Word FieldValueTerm_35;
  MR_Word Var_58;
  MR_Word LHSTerm_30;
  MR_Word RHSTerm_31;
  MR_Word Var_57;
  MR_Word Var_59;
  MR_Word Var_60;

  hlds__hlds_goal__goal_info_init_2_p_0(Context_21, &GoalInfo_29);
  succeeded = (ArgTerms0_20 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    LHSTerm_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms0_20, (MR_Integer) 0))));
    Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms0_20, (MR_Integer) 1))));
    succeeded = (Var_57 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      RHSTerm_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_57, (MR_Integer) 0))));
      Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_57, (MR_Integer) 1))));
      succeeded = (Var_58 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_58, (MR_Integer) 1))));
        succeeded = (Var_59 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_59, (MR_Integer) 1))));
          succeeded = (Var_60 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            switch (AccessType_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  FieldNameTerm_34 = RHSTerm_31;
                  FieldValueTerm_35 = LHSTerm_30;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_61;
                  MR_String Var_62;
                  MR_Word Var_63;
                  MR_Word Var_64;

                  succeeded = ((MR_tag((MR_Word) LHSTerm_30)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHSTerm_30, (MR_Integer) 0))));
                    Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHSTerm_30, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_61)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_62 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_61, (MR_Integer) 0))));
                      succeeded = (strcmp(Var_62, (MR_String) "^") == 0);
                      if (succeeded)
                      {
                        succeeded = (Var_63 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          FieldNameTerm_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_63, (MR_Integer) 0))));
                          Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_63, (MR_Integer) 1))));
                          succeeded = (Var_64 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            FieldValueTerm_35 = RHSTerm_31;
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
    MR_Word ContextPieces_38;
    MR_Word MaybeFieldNames_39;

    ContextPieces_38 = hlds__make_hlds__goal_expr_to_goal__dcg_field_error_context_pieces_1_f_0(AccessType_19);
    hlds__make_hlds__field_access__parse_field_list_4_p_0(FieldNameTerm_34, STATE_VARIABLE_VarSet_0_49, ContextPieces_38, &MaybeFieldNames_39);
    if (((MR_tag((MR_Word) MaybeFieldNames_39)) == (MR_Integer) 0))
    {
      MR_Word FieldNamesSpecs_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeFieldNames_39, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_Specs_75_75;

      STATE_VARIABLE_Specs_75_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), FieldNamesSpecs_42, STATE_VARIABLE_Specs_0_55);
      hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_p_0((MR_String) "^", ArgTerms0_20, GoalInfo_29, HLDSGoal_22, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_SVarState_0_45, STATE_VARIABLE_SVarState_46, STATE_VARIABLE_Specs_75_75, STATE_VARIABLE_Specs_56);
      hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 1, STATE_VARIABLE_QualInfo_0_53, STATE_VARIABLE_QualInfo_54);
      *STATE_VARIABLE_SVarStore_48 = STATE_VARIABLE_SVarStore_0_47;
      *STATE_VARIABLE_ModuleInfo_52 = STATE_VARIABLE_ModuleInfo_0_51;
    }
    else
    {
      MR_Word FieldNames_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFieldNames_39, (MR_Integer) 0))));
      MR_Word ArgTerms_41;
      MR_Word STATE_VARIABLE_SVarState_68_68;

      {
        ArgTerms_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ArgTerms_41, 0) = ((MR_Box) (FieldValueTerm_35));
        MR_hl_field(MR_mktag(1), ArgTerms_41, 1) = ((MR_Box) (Var_58));
      }
      hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_p_0(AccessType_19, FieldNames_40, ArgTerms_41, Context_21, HLDSGoal_22, STATE_VARIABLE_SVarState_0_45, &STATE_VARIABLE_SVarState_68_68, STATE_VARIABLE_SVarStore_0_47, STATE_VARIABLE_SVarStore_48, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_ModuleInfo_0_51, STATE_VARIABLE_ModuleInfo_52, STATE_VARIABLE_QualInfo_0_53, STATE_VARIABLE_QualInfo_54, STATE_VARIABLE_Specs_0_55, STATE_VARIABLE_Specs_56);
      hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(LocKind_18, STATE_VARIABLE_SVarState_68_68, STATE_VARIABLE_SVarState_46);
    }
  }
  else
  {
    MR_Word Spec_44;
    MR_Word STATE_VARIABLE_Specs_85_85;

    hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_p_0((MR_String) "^", ArgTerms0_20, GoalInfo_29, HLDSGoal_22, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_SVarState_0_45, STATE_VARIABLE_SVarState_46, STATE_VARIABLE_Specs_0_55, &STATE_VARIABLE_Specs_85_85);
    hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 1, STATE_VARIABLE_QualInfo_0_53, STATE_VARIABLE_QualInfo_54);
    {
      Spec_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_44, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax\'/17"));
      MR_hl_field(MR_mktag(1), Spec_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_44, 2) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(MR_mktag(1), Spec_44, 3) = ((MR_Box) (Context_21));
      MR_hl_field(MR_mktag(1), Spec_44, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[17])));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_56 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_44));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_85_85));
    }
    *STATE_VARIABLE_ModuleInfo_52 = STATE_VARIABLE_ModuleInfo_0_51;
    *STATE_VARIABLE_SVarStore_48 = STATE_VARIABLE_SVarStore_0_47;
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
    MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (UpdateStr_11));
  }
  {
    GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), GoalExpr_21, 0) = ((MR_Box) (Var_31));
    MR_hl_field(MR_mktag(2), GoalExpr_21, 1) = ((MR_Box) (Var_32));
    MR_hl_field(MR_mktag(2), GoalExpr_21, 2) = ((MR_Box) (HeadVars_18));
    MR_hl_field(MR_mktag(2), GoalExpr_21, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(2), GoalExpr_21, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(2), GoalExpr_21, 5) = ((MR_Box) (Var_34));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_14 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_21));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_13));
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
      ContextPieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[19]));
      break;
    case (MR_Integer) 1:
      ContextPieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[21]));
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
  MR_Word STATE_VARIABLE_SVarState_0_70,
  MR_Word * STATE_VARIABLE_SVarState_71,
  MR_Word STATE_VARIABLE_SVarStore_0_72,
  MR_Word * STATE_VARIABLE_SVarStore_73,
  MR_Word STATE_VARIABLE_VarSet_0_74,
  MR_Word * STATE_VARIABLE_VarSet_75,
  MR_Word STATE_VARIABLE_ModuleInfo_0_76,
  MR_Word * STATE_VARIABLE_ModuleInfo_77,
  MR_Word STATE_VARIABLE_QualInfo_0_78,
  MR_Word * STATE_VARIABLE_QualInfo_79,
  MR_Word STATE_VARIABLE_Specs_0_80,
  MR_Word * STATE_VARIABLE_Specs_81)
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
  MR_Integer OutputTermArgNumber_62;
  MR_Word OutputTermArgContext_63;
  MR_Word FieldValueVTNC_66;
  MR_Word TermInputVTNC_67;
  MR_Word TermOutputVTNC_68;
  MR_Word ArgVarsTermsNumsContexts_69;
  MR_Word STATE_VARIABLE_VarSet_82_82;
  MR_Word STATE_VARIABLE_SVarState_83_83;
  MR_Word STATE_VARIABLE_Specs_84_84;
  MR_Word STATE_VARIABLE_SVarState_101_101;
  MR_Word STATE_VARIABLE_SVarStore_102_102;
  MR_Word STATE_VARIABLE_VarSet_103_103;
  MR_Word STATE_VARIABLE_ModuleInfo_104_104;
  MR_Word STATE_VARIABLE_QualInfo_105_105;
  MR_Word STATE_VARIABLE_Specs_106_106;
  MR_Word Var_129;
  MR_Word Var_130;
  MR_Word _ArgVars_29;

  hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_9_p_0(ArgTerms_20, &_ArgVars_29, &ArgVarsTerms_30, STATE_VARIABLE_VarSet_0_74, &STATE_VARIABLE_VarSet_82_82, STATE_VARIABLE_SVarState_0_70, &STATE_VARIABLE_SVarState_83_83, STATE_VARIABLE_Specs_0_80, &STATE_VARIABLE_Specs_84_84);
  if ((ArgVarsTerms_30 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "arity != 3");
      return;
    }
  else
  {
    MR_Word Var_154 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVarsTerms_30, (MR_Integer) 1))));
    MR_Word Var_155 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVarsTerms_30, (MR_Integer) 0))));

    if ((Var_154 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "arity != 3");
        return;
      }
    else
    {
      MR_Word Var_156 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_154, (MR_Integer) 1))));
      MR_Word Var_157 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_154, (MR_Integer) 0))));

      if ((Var_156 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "arity != 3");
          return;
        }
      else
      {
        MR_Word Var_158 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_156, (MR_Integer) 1))));
        MR_Word Var_159 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_156, (MR_Integer) 0))));

        if ((Var_158 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          FieldValueVarTerm_31 = Var_155;
          TermInputVarTerm_32 = Var_157;
          TermOutputVarTerm_33 = Var_159;
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "arity != 3");
            return;
          }
      }
    }
  }
  FieldValueVar_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldValueVarTerm_31, (MR_Integer) 0))));
  FieldValueTerm_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldValueVarTerm_31, (MR_Integer) 1))));
  TermInputVar_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermInputVarTerm_32, (MR_Integer) 0))));
  TermInputTerm_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermInputVarTerm_32, (MR_Integer) 1))));
  TermOutputVar_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermOutputVarTerm_33, (MR_Integer) 0))));
  TermOutputTerm_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermOutputVarTerm_33, (MR_Integer) 1))));
  switch (AccessType_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_115;
        MR_Word Var_125;
        MR_Word Var_126;
        MR_Word InnermostFunctor_140;
        MR_Word ConsName_143;
        MR_Integer ConsArity_144;
        MR_Word PFSymNameArity_145;
        MR_Word ConsNamePrime_138;
        MR_Integer ConsArityPrime_139;

        hlds__make_hlds__field_access__expand_dcg_field_extraction_goal_22_p_0(Context_21, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), FieldNames_19, FieldValueVar_42, TermInputVar_44, TermOutputVar_46, &Functor_50, &Var_115, &HLDSGoal0_53, STATE_VARIABLE_SVarState_83_83, &STATE_VARIABLE_SVarState_101_101, STATE_VARIABLE_SVarStore_0_72, &STATE_VARIABLE_SVarStore_102_102, STATE_VARIABLE_VarSet_82_82, &STATE_VARIABLE_VarSet_103_103, STATE_VARIABLE_ModuleInfo_0_76, &STATE_VARIABLE_ModuleInfo_104_104, STATE_VARIABLE_QualInfo_0_78, &STATE_VARIABLE_QualInfo_105_105, STATE_VARIABLE_Specs_84_84, &STATE_VARIABLE_Specs_106_106);
        InnermostFunctor_140 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_115, (MR_Integer) 0))));
        succeeded = ((((MR_tag((MR_Word) InnermostFunctor_140)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InnermostFunctor_140, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (succeeded)
        {
          ConsNamePrime_138 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InnermostFunctor_140, (MR_Integer) 1))));
          ConsArityPrime_139 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), InnermostFunctor_140, (MR_Integer) 2))));
          ConsName_143 = ConsNamePrime_138;
          ConsArity_144 = ConsArityPrime_139;
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "not cons");
            return;
          }
        Var_125 = (MR_Word) (ConsArity_144);
        {
          PFSymNameArity_145 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), PFSymNameArity_145, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), PFSymNameArity_145, 1) = ((MR_Box) (ConsName_143));
          MR_hl_field(MR_mktag(0), PFSymNameArity_145, 2) = ((MR_Box) (Var_125));
        }
        FieldArgNumber_54 = (MR_Integer) 2;
        {
          Var_126 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_126, 0) = ((MR_Box) (PFSymNameArity_145));
        }
        {
          FieldArgContext_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), FieldArgContext_55, 0) = ((MR_Box) (Var_126));
        }
        OutputTermArgNumber_62 = (MR_Integer) 3;
        {
          OutputTermArgContext_63 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), OutputTermArgContext_63, 0) = ((MR_Box) (Functor_50));
          MR_hl_field(MR_mktag(2), OutputTermArgContext_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(2), OutputTermArgContext_63, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word InnermostFunctor_51;
        MR_Word InnermostSubContext_52;
        MR_Word ConsName_59;
        MR_Integer ConsArity_60;
        MR_Word PFSymNameArity_61;
        MR_Word Var_100;
        MR_Word Var_111;
        MR_Word Var_112;
        MR_Word ConsNamePrime_56;
        MR_Integer ConsArityPrime_57;

        hlds__make_hlds__field_access__expand_set_field_function_call_22_p_0(Context_21, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), FieldNames_19, FieldValueVar_42, TermInputVar_44, TermOutputVar_46, &Functor_50, &Var_100, &HLDSGoal0_53, STATE_VARIABLE_SVarState_83_83, &STATE_VARIABLE_SVarState_101_101, STATE_VARIABLE_SVarStore_0_72, &STATE_VARIABLE_SVarStore_102_102, STATE_VARIABLE_VarSet_82_82, &STATE_VARIABLE_VarSet_103_103, STATE_VARIABLE_ModuleInfo_0_76, &STATE_VARIABLE_ModuleInfo_104_104, STATE_VARIABLE_QualInfo_0_78, &STATE_VARIABLE_QualInfo_105_105, STATE_VARIABLE_Specs_84_84, &STATE_VARIABLE_Specs_106_106);
        InnermostFunctor_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_100, (MR_Integer) 0))));
        InnermostSubContext_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_100, (MR_Integer) 1))));
        FieldArgNumber_54 = (MR_Integer) 2;
        {
          FieldArgContext_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), FieldArgContext_55, 0) = ((MR_Box) (InnermostFunctor_51));
          MR_hl_field(MR_mktag(2), FieldArgContext_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(2), FieldArgContext_55, 2) = ((MR_Box) (InnermostSubContext_52));
        }
        succeeded = ((((MR_tag((MR_Word) Functor_50)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_50, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (succeeded)
        {
          ConsNamePrime_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Functor_50, (MR_Integer) 1))));
          ConsArityPrime_57 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_50, (MR_Integer) 2))));
          ConsName_59 = ConsNamePrime_56;
          ConsArity_60 = ConsArityPrime_57;
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "not cons");
            return;
          }
        Var_111 = (MR_Word) (ConsArity_60);
        {
          PFSymNameArity_61 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), PFSymNameArity_61, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), PFSymNameArity_61, 1) = ((MR_Box) (ConsName_59));
          MR_hl_field(MR_mktag(0), PFSymNameArity_61, 2) = ((MR_Box) (Var_111));
        }
        OutputTermArgNumber_62 = (MR_Integer) 3;
        {
          Var_112 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_112, 0) = ((MR_Box) (PFSymNameArity_61));
        }
        {
          OutputTermArgContext_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), OutputTermArgContext_63, 0) = ((MR_Box) (Var_112));
        }
      }
      break;
  }
  {
    InputTermArgContext_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), InputTermArgContext_49, 0) = ((MR_Box) (Functor_50));
    MR_hl_field(MR_mktag(2), InputTermArgContext_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(2), InputTermArgContext_49, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    FieldValueVTNC_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), FieldValueVTNC_66, 0) = ((MR_Box) (FieldValueVar_42));
    MR_hl_field(MR_mktag(0), FieldValueVTNC_66, 1) = ((MR_Box) (FieldValueTerm_43));
    MR_hl_field(MR_mktag(0), FieldValueVTNC_66, 2) = ((MR_Box) (FieldArgNumber_54));
    MR_hl_field(MR_mktag(0), FieldValueVTNC_66, 3) = ((MR_Box) (FieldArgContext_55));
  }
  {
    TermInputVTNC_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TermInputVTNC_67, 0) = ((MR_Box) (TermInputVar_44));
    MR_hl_field(MR_mktag(0), TermInputVTNC_67, 1) = ((MR_Box) (TermInputTerm_45));
    MR_hl_field(MR_mktag(0), TermInputVTNC_67, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), TermInputVTNC_67, 3) = ((MR_Box) (InputTermArgContext_49));
  }
  {
    TermOutputVTNC_68 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TermOutputVTNC_68, 0) = ((MR_Box) (TermOutputVar_46));
    MR_hl_field(MR_mktag(0), TermOutputVTNC_68, 1) = ((MR_Box) (TermOutputTerm_47));
    MR_hl_field(MR_mktag(0), TermOutputVTNC_68, 2) = ((MR_Box) (OutputTermArgNumber_62));
    MR_hl_field(MR_mktag(0), TermOutputVTNC_68, 3) = ((MR_Box) (OutputTermArgContext_63));
  }
  {
    Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (TermOutputVTNC_68));
    MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (TermInputVTNC_67));
    MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) (Var_130));
  }
  {
    ArgVarsTermsNumsContexts_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), ArgVarsTermsNumsContexts_69, 0) = ((MR_Box) (FieldValueVTNC_66));
    MR_hl_field(MR_mktag(1), ArgVarsTermsNumsContexts_69, 1) = ((MR_Box) (Var_129));
  }
  hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_16_p_0(ArgVarsTermsNumsContexts_69, Context_21, HLDSGoal0_53, HLDSGoal_22, STATE_VARIABLE_SVarState_101_101, STATE_VARIABLE_SVarState_71, STATE_VARIABLE_SVarStore_102_102, STATE_VARIABLE_SVarStore_73, STATE_VARIABLE_VarSet_103_103, STATE_VARIABLE_VarSet_75, STATE_VARIABLE_ModuleInfo_104_104, STATE_VARIABLE_ModuleInfo_77, STATE_VARIABLE_QualInfo_105_105, STATE_VARIABLE_QualInfo_79, STATE_VARIABLE_Specs_106_106, STATE_VARIABLE_Specs_81);
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
