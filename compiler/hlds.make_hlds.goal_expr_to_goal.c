/*
** Automatically generated from `goal_expr_to_goal.m'
** by the Mercury compiler,
** version rotd-2024-03-29
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


static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_1[41][2];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_2[1][3];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_3[6][1];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_4[1][12];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_5[1][21];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_6[1][19];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_7[1][11];




static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_1[41][2] = {
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
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in DCG field access goal."))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[7])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    ((MR_Box) ((MR_String) "^ field1 ^ ... ^ fieldN := Field"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[9])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[11])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    ((MR_Box) ((MR_String) "Field =^ field1 ^ ... ^ fieldN"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[13])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: expected"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[15])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In DCG field extraction goal:"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[7])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In DCG field update goal:"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[7])))
  },
  /* row  22 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "part."))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[7])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "else"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[24])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "cannot have an"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[26])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "parameter"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[28])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "io"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[30])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "with an"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[32])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "goal"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[34])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "try"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[36])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[38])))
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
  { ((MR_Box) ((MR_String) ":=")) },
  /* row   3 */
  { ((MR_Box) ((MR_String) "{}")) },
  /* row   4 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   5 */
  { ((MR_Box) ((MR_String) "^")) },
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
  MR_Word VarSet_10,
  MR_Word Renaming_11,
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

  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_11, StateVar0_18, StateVar_14);
  mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_10, *StateVar_14, &StateVarName_19);
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
          MR_Word Context_780 = ((MR_Word) ((MR_hl_field(0, Goal_18, (MR_Integer) 0))));
          MR_Word TermA0_781 = ((MR_Word) ((MR_hl_field(0, Goal_18, (MR_Integer) 1))));
          MR_Word TermB0_782 = ((MR_Word) ((MR_hl_field(0, Goal_18, (MR_Integer) 2))));
          MR_Word Purity_783 = ((MR_Unsigned) ((MR_hl_field(0, Goal_18, (MR_Integer) 3))) & (MR_Integer) 3);
          MR_Word TermA_784;
          MR_Word TermB_785;
          MR_Word StateVarA_786;
          MR_Word Var_796;
          MR_String Var_797;
          MR_Word Var_798;
          MR_Word Var_799;
          MR_Word Var_800;

          parse_tree__prog_rename__rename_vars_in_term_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, TermA0_781, &TermA_784);
          parse_tree__prog_rename__rename_vars_in_term_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, TermB0_782, &TermB_785);
          succeeded = ((MR_tag((MR_Word) TermA_784)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_796 = ((MR_Word) ((MR_hl_field(0, TermA_784, (MR_Integer) 0))));
            Var_798 = ((MR_Word) ((MR_hl_field(0, TermA_784, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Var_796)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_797 = ((MR_String) ((MR_hl_field(0, Var_796, (MR_Integer) 0))));
              succeeded = (strcmp(Var_797, (MR_String) "!") == 0);
              if (succeeded)
              {
                succeeded = (Var_798 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_799 = ((MR_Word) ((MR_hl_field(1, Var_798, (MR_Integer) 0))));
                  Var_800 = ((MR_Word) ((MR_hl_field(1, Var_798, (MR_Integer) 1))));
                  succeeded = (Var_800 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) Var_799)) == (MR_Integer) 1);
                    if (succeeded)
                      StateVarA_786 = ((MR_Word) ((MR_hl_field(1, Var_799, (MR_Integer) 0))));
                  }
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word STATE_VARIABLE_VarSet_60_801;
            MR_Word STATE_VARIABLE_SVarState_61_802;
            MR_Word STATE_VARIABLE_Specs_62_803;
            MR_Word StateVarB_789;
            MR_Word Var_804;
            MR_String Var_805;
            MR_Word Var_806;
            MR_Word Var_807;
            MR_Word Var_808;

            hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(Context_780, StateVarA_786, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_60_801, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_61_802, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_62_803);
            succeeded = ((MR_tag((MR_Word) TermB_785)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_804 = ((MR_Word) ((MR_hl_field(0, TermB_785, (MR_Integer) 0))));
              Var_806 = ((MR_Word) ((MR_hl_field(0, TermB_785, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_804)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_805 = ((MR_String) ((MR_hl_field(0, Var_804, (MR_Integer) 0))));
                succeeded = (strcmp(Var_805, (MR_String) "!") == 0);
                if (succeeded)
                {
                  succeeded = (Var_806 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_807 = ((MR_Word) ((MR_hl_field(1, Var_806, (MR_Integer) 0))));
                    Var_808 = ((MR_Word) ((MR_hl_field(1, Var_806, (MR_Integer) 1))));
                    succeeded = (Var_808 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) Var_807)) == (MR_Integer) 1);
                      if (succeeded)
                        StateVarB_789 = ((MR_Word) ((MR_hl_field(1, Var_807, (MR_Integer) 0))));
                    }
                  }
                }
              }
            }
            if (succeeded)
              hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(Context_780, StateVarB_789, STATE_VARIABLE_VarSet_60_801, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_SVarState_61_802, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_Specs_62_803, STATE_VARIABLE_Specs_117);
            else
            {
              *STATE_VARIABLE_Specs_117 = STATE_VARIABLE_Specs_62_803;
              *STATE_VARIABLE_VarSet_111 = STATE_VARIABLE_VarSet_60_801;
              *STATE_VARIABLE_SVarState_107 = STATE_VARIABLE_SVarState_61_802;
            }
            *HLDSGoal_20 = hlds__make_goal__true_goal_with_context_1_f_0(Context_780);
            *STATE_VARIABLE_QualInfo_115 = STATE_VARIABLE_QualInfo_0_114;
            *STATE_VARIABLE_ModuleInfo_113 = STATE_VARIABLE_ModuleInfo_0_112;
            *STATE_VARIABLE_SVarStore_109 = STATE_VARIABLE_SVarStore_0_108;
          }
          else
          {
            MR_Word StateVarB_817;
            MR_Word Var_809;
            MR_String Var_810;
            MR_Word Var_811;
            MR_Word Var_812;
            MR_Word Var_813;

            succeeded = ((MR_tag((MR_Word) TermB_785)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_809 = ((MR_Word) ((MR_hl_field(0, TermB_785, (MR_Integer) 0))));
              Var_811 = ((MR_Word) ((MR_hl_field(0, TermB_785, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_809)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_810 = ((MR_String) ((MR_hl_field(0, Var_809, (MR_Integer) 0))));
                succeeded = (strcmp(Var_810, (MR_String) "!") == 0);
                if (succeeded)
                {
                  succeeded = (Var_811 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_812 = ((MR_Word) ((MR_hl_field(1, Var_811, (MR_Integer) 0))));
                    Var_813 = ((MR_Word) ((MR_hl_field(1, Var_811, (MR_Integer) 1))));
                    succeeded = (Var_813 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) Var_812)) == (MR_Integer) 1);
                      if (succeeded)
                        StateVarB_817 = ((MR_Word) ((MR_hl_field(1, Var_812, (MR_Integer) 0))));
                    }
                  }
                }
              }
            }
            if (succeeded)
            {
              hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(Context_780, StateVarB_817, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              *HLDSGoal_20 = hlds__make_goal__true_goal_with_context_1_f_0(Context_780);
              *STATE_VARIABLE_QualInfo_115 = STATE_VARIABLE_QualInfo_0_114;
              *STATE_VARIABLE_ModuleInfo_113 = STATE_VARIABLE_ModuleInfo_0_112;
              *STATE_VARIABLE_SVarStore_109 = STATE_VARIABLE_SVarStore_0_108;
            }
            else
            {
              MR_Word STATE_VARIABLE_SVarState_81_816;

              hlds__make_hlds__superhomogeneous__unravel_unification_19_p_0(TermA_784, TermB_785, Context_780, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Purity_783, HLDSGoal_20, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_81_816, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(LocKind_17, STATE_VARIABLE_SVarState_81_816, STATE_VARIABLE_SVarState_107);
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Context_404 = ((MR_Word) ((MR_hl_field(1, Goal_18, (MR_Integer) 0))));
          MR_Word SymName_405 = ((MR_Word) ((MR_hl_field(1, Goal_18, (MR_Integer) 1))));
          MR_Word ArgTerms0_406 = ((MR_Word) ((MR_hl_field(1, Goal_18, (MR_Integer) 2))));
          MR_Word Purity_407 = ((MR_Unsigned) ((MR_hl_field(1, Goal_18, (MR_Integer) 3))) & (MR_Integer) 3);
          MR_Word ArgTerms1_408;
          MR_Word STATE_VARIABLE_SVarState_84_449;
          MR_Word LHSTerm_409;
          MR_Word RHSTerm_410;
          MR_String Var_445;
          MR_Word Var_446;
          MR_Word Var_447;

          hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(ArgTerms0_406, &ArgTerms1_408);
          succeeded = ((MR_tag((MR_Word) SymName_405)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_445 = ((MR_String) ((MR_hl_field(0, SymName_405, (MR_Integer) 0))));
            succeeded = (strcmp(Var_445, (MR_String) "\\=") == 0);
            if (succeeded)
            {
              succeeded = (ArgTerms1_408 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                LHSTerm_409 = ((MR_Word) ((MR_hl_field(1, ArgTerms1_408, (MR_Integer) 0))));
                Var_446 = ((MR_Word) ((MR_hl_field(1, ArgTerms1_408, (MR_Integer) 1))));
                succeeded = (Var_446 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  RHSTerm_410 = ((MR_Word) ((MR_hl_field(1, Var_446, (MR_Integer) 0))));
                  Var_447 = ((MR_Word) ((MR_hl_field(1, Var_446, (MR_Integer) 1))));
                  succeeded = (Var_447 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word TransformedGoal_411;
            MR_Word Var_448;

            {
              Var_448 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_448, 0) = ((MR_Box) (Context_404));
              MR_hl_field(0, Var_448, 1) = ((MR_Box) (LHSTerm_409));
              MR_hl_field(0, Var_448, 2) = ((MR_Box) (RHSTerm_410));
              MR_hl_field(0, Var_448, 3) = (MR_Box) ((MR_Unsigned) (Purity_407));
            }
            {
              TransformedGoal_411 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, TransformedGoal_411, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, TransformedGoal_411, 1) = ((MR_Box) (Context_404));
              MR_hl_field(3, TransformedGoal_411, 2) = ((MR_Box) (Var_448));
            }
            hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, TransformedGoal_411, Renaming_19, HLDSGoal_20, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_84_449, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
          }
          else
          {
            MR_Word RHSTerm0_413;
            MR_Word Remainder_415;
            MR_Word FieldListContext_416;
            MR_Word StateVarNameTerms_417;
            MR_Word StateVarContext_418;
            MR_Word Var_453;
            MR_Word Var_461;
            MR_Word LHSTerm0_412;
            MR_Word StateVar0_414;
            MR_String Var_450;
            MR_Word Var_451;
            MR_Word Var_452;
            MR_String Var_454;
            MR_Word Var_455;
            MR_Word Var_456;
            MR_Word Var_457;
            MR_Word Var_458;
            MR_String Var_459;
            MR_Word Var_460;

            succeeded = ((MR_tag((MR_Word) SymName_405)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_450 = ((MR_String) ((MR_hl_field(0, SymName_405, (MR_Integer) 0))));
              succeeded = (strcmp(Var_450, (MR_String) ":=") == 0);
              if (succeeded)
              {
                succeeded = (ArgTerms1_408 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  LHSTerm0_412 = ((MR_Word) ((MR_hl_field(1, ArgTerms1_408, (MR_Integer) 0))));
                  Var_451 = ((MR_Word) ((MR_hl_field(1, ArgTerms1_408, (MR_Integer) 1))));
                  succeeded = (Var_451 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    RHSTerm0_413 = ((MR_Word) ((MR_hl_field(1, Var_451, (MR_Integer) 0))));
                    Var_452 = ((MR_Word) ((MR_hl_field(1, Var_451, (MR_Integer) 1))));
                    succeeded = (Var_452 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) LHSTerm0_412)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        Var_453 = ((MR_Word) ((MR_hl_field(0, LHSTerm0_412, (MR_Integer) 0))));
                        Var_455 = ((MR_Word) ((MR_hl_field(0, LHSTerm0_412, (MR_Integer) 1))));
                        FieldListContext_416 = ((MR_Word) ((MR_hl_field(0, LHSTerm0_412, (MR_Integer) 2))));
                        succeeded = ((MR_tag((MR_Word) Var_453)) == (MR_Integer) 0);
                        if (succeeded)
                        {
                          Var_454 = ((MR_String) ((MR_hl_field(0, Var_453, (MR_Integer) 0))));
                          succeeded = (strcmp(Var_454, (MR_String) "^") == 0);
                          if (succeeded)
                          {
                            succeeded = (Var_455 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              StateVar0_414 = ((MR_Word) ((MR_hl_field(1, Var_455, (MR_Integer) 0))));
                              Var_456 = ((MR_Word) ((MR_hl_field(1, Var_455, (MR_Integer) 1))));
                              succeeded = (Var_456 != (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                Remainder_415 = ((MR_Word) ((MR_hl_field(1, Var_456, (MR_Integer) 0))));
                                Var_457 = ((MR_Word) ((MR_hl_field(1, Var_456, (MR_Integer) 1))));
                                succeeded = (Var_457 == (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  succeeded = ((MR_tag((MR_Word) StateVar0_414)) == (MR_Integer) 0);
                                  if (succeeded)
                                  {
                                    Var_458 = ((MR_Word) ((MR_hl_field(0, StateVar0_414, (MR_Integer) 0))));
                                    StateVarNameTerms_417 = ((MR_Word) ((MR_hl_field(0, StateVar0_414, (MR_Integer) 1))));
                                    StateVarContext_418 = ((MR_Word) ((MR_hl_field(0, StateVar0_414, (MR_Integer) 2))));
                                    succeeded = ((MR_tag((MR_Word) Var_458)) == (MR_Integer) 0);
                                    if (succeeded)
                                    {
                                      Var_459 = ((MR_String) ((MR_hl_field(0, Var_458, (MR_Integer) 0))));
                                      succeeded = (strcmp(Var_459, (MR_String) "!") == 0);
                                      if (succeeded)
                                      {
                                        succeeded = (StateVarNameTerms_417 != (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          Var_460 = ((MR_Word) ((MR_hl_field(1, StateVarNameTerms_417, (MR_Integer) 0))));
                                          Var_461 = ((MR_Word) ((MR_hl_field(1, StateVarNameTerms_417, (MR_Integer) 1))));
                                          succeeded = ((MR_tag((MR_Word) Var_460)) == (MR_Integer) 1);
                                          if (succeeded)
                                            succeeded = (Var_461 == (MR_Word) ((MR_Unsigned) 0U));
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
              MR_Word StateVar_421;
              MR_Word FieldList_422;
              MR_Word Var_468;
              MR_Word Var_469;
              MR_Word Var_473;
              MR_Word Var_474;
              MR_Word LHSTerm_490;
              MR_Word RHSTerm_491;
              MR_Word TransformedGoal_492;

              {
                LHSTerm_490 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, LHSTerm_490, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[0]));
                MR_hl_field(0, LHSTerm_490, 1) = ((MR_Box) (StateVarNameTerms_417));
                MR_hl_field(0, LHSTerm_490, 2) = ((MR_Box) (StateVarContext_418));
              }
              {
                StateVar_421 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, StateVar_421, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[1]));
                MR_hl_field(0, StateVar_421, 1) = ((MR_Box) (StateVarNameTerms_417));
                MR_hl_field(0, StateVar_421, 2) = ((MR_Box) (StateVarContext_418));
              }
              {
                Var_469 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_469, 0) = ((MR_Box) (Remainder_415));
                MR_hl_field(1, Var_469, 1) = ((MR_Box) (Var_461));
              }
              {
                Var_468 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_468, 0) = ((MR_Box) (StateVar_421));
                MR_hl_field(1, Var_468, 1) = ((MR_Box) (Var_469));
              }
              {
                FieldList_422 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, FieldList_422, 0) = ((MR_Box) (Var_453));
                MR_hl_field(0, FieldList_422, 1) = ((MR_Box) (Var_468));
                MR_hl_field(0, FieldList_422, 2) = ((MR_Box) (FieldListContext_416));
              }
              {
                Var_474 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_474, 0) = ((MR_Box) (RHSTerm0_413));
                MR_hl_field(1, Var_474, 1) = ((MR_Box) (Var_461));
              }
              {
                Var_473 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_473, 0) = ((MR_Box) (FieldList_422));
                MR_hl_field(1, Var_473, 1) = ((MR_Box) (Var_474));
              }
              {
                RHSTerm_491 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, RHSTerm_491, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[2]));
                MR_hl_field(0, RHSTerm_491, 1) = ((MR_Box) (Var_473));
                MR_hl_field(0, RHSTerm_491, 2) = ((MR_Box) (Context_404));
              }
              {
                TransformedGoal_492 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TransformedGoal_492, 0) = ((MR_Box) (Context_404));
                MR_hl_field(0, TransformedGoal_492, 1) = ((MR_Box) (LHSTerm_490));
                MR_hl_field(0, TransformedGoal_492, 2) = ((MR_Box) (RHSTerm_491));
                MR_hl_field(0, TransformedGoal_492, 3) = (MR_Box) ((MR_Unsigned) (Purity_407));
              }
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, TransformedGoal_492, Renaming_19, HLDSGoal_20, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_84_449, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
            }
            else
            {
              MR_Word AccessType_424;
              MR_String Operator_423;

              succeeded = ((MR_tag((MR_Word) SymName_405)) == (MR_Integer) 0);
              if (succeeded)
              {
                Operator_423 = ((MR_String) ((MR_hl_field(0, SymName_405, (MR_Integer) 0))));
                if ((strcmp(Operator_423, (MR_String) ":=") == 0))
                {
                  AccessType_424 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                if ((strcmp(Operator_423, (MR_String) "=^") == 0))
                {
                  AccessType_424 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                else
                  succeeded = MR_FALSE;
              }
              if (succeeded)
              {
                MR_Word ArgTerms_425;

                parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, ArgTerms1_408, &ArgTerms_425);
                hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_p_0(LocKind_17, AccessType_424, ArgTerms_425, Context_404, HLDSGoal_20, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_84_449, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              }
              else
              {
                MR_Word HeadVars_426;
                MR_Word HeadVarsArgTerms_427;
                MR_Word PredFormArity_428;
                MR_Word GoalExpr_435;
                MR_Word CallId_437;
                MR_Word GoalInfo_442;
                MR_Word HLDSGoal0_443;
                MR_Word UserArity_444;
                MR_Word STATE_VARIABLE_VarSet_130_478;
                MR_Word STATE_VARIABLE_SVarState_131_479;
                MR_Word STATE_VARIABLE_Specs_132_480;
                MR_Word STATE_VARIABLE_QualInfo_140_488;
                MR_Word Var_489;
                MR_Word ArgTerms_493;
                MR_Word PredVar_429;
                MR_Word RealHeadVars_430;
                MR_String Var_497;

                parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, ArgTerms1_408, &ArgTerms_493);
                hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_9_p_0(ArgTerms_493, &HeadVars_426, &HeadVarsArgTerms_427, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_130_478, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_131_479, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_132_480);
                PredFormArity_428 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0]), ArgTerms_493);
                succeeded = ((MR_tag((MR_Word) SymName_405)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_497 = ((MR_String) ((MR_hl_field(0, SymName_405, (MR_Integer) 0))));
                  if ((strcmp(Var_497, (MR_String) "") == 0))
                    succeeded = MR_TRUE;
                  else
                  if ((strcmp(Var_497, (MR_String) "call") == 0))
                    succeeded = MR_TRUE;
                  else
                    succeeded = MR_FALSE;
                  if (succeeded)
                  {
                    succeeded = (HeadVars_426 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      PredVar_429 = ((MR_Word) ((MR_hl_field(1, HeadVars_426, (MR_Integer) 0))));
                      RealHeadVars_430 = ((MR_Word) ((MR_hl_field(1, HeadVars_426, (MR_Integer) 1))));
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Word GenericCall_434;
                  MR_Word GenericCallId_436;

                  {
                    GenericCall_434 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, GenericCall_434, 0) = ((MR_Box) (PredVar_429));
                    MR_hl_field(0, GenericCall_434, 1) = (MR_Box) (((((MR_Unsigned) (Purity_407) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
                    MR_hl_field(0, GenericCall_434, 2) = ((MR_Box) (PredFormArity_428));
                  }
                  {
                    GoalExpr_435 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, GoalExpr_435, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, GoalExpr_435, 1) = ((MR_Box) (GenericCall_434));
                    MR_hl_field(3, GoalExpr_435, 2) = ((MR_Box) (RealHeadVars_430));
                    MR_hl_field(3, GoalExpr_435, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, GoalExpr_435, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, GoalExpr_435, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 6));
                  }
                  hlds__hlds_goal__generic_call_to_id_2_p_0(GenericCall_434, &GenericCallId_436);
                  {
                    CallId_437 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, CallId_437, 0) = ((MR_Box) (GenericCallId_436));
                  }
                }
                else
                {
                  MR_Word PredId_438;
                  MR_Integer ModeId_439;
                  MR_Word PFSymNameArity_441;

                  PredId_438 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                  ModeId_439 = hlds__hlds_pred__invalid_proc_id_0_f_0();
                  {
                    GoalExpr_435 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, GoalExpr_435, 0) = ((MR_Box) (PredId_438));
                    MR_hl_field(2, GoalExpr_435, 1) = ((MR_Box) (ModeId_439));
                    MR_hl_field(2, GoalExpr_435, 2) = ((MR_Box) (HeadVars_426));
                    MR_hl_field(2, GoalExpr_435, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                    MR_hl_field(2, GoalExpr_435, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(2, GoalExpr_435, 5) = ((MR_Box) (SymName_405));
                  }
                  {
                    PFSymNameArity_441 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, PFSymNameArity_441, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(0, PFSymNameArity_441, 1) = ((MR_Box) (SymName_405));
                    MR_hl_field(0, PFSymNameArity_441, 2) = ((MR_Box) (PredFormArity_428));
                  }
                  {
                    CallId_437 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, CallId_437, 0) = ((MR_Box) (PFSymNameArity_441));
                  }
                }
                hlds__hlds_goal__goal_info_init_context_purity_3_p_0(Context_404, Purity_407, &GoalInfo_442);
                {
                  HLDSGoal0_443 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, HLDSGoal0_443, 0) = ((MR_Box) (GoalExpr_435));
                  MR_hl_field(0, HLDSGoal0_443, 1) = ((MR_Box) (GoalInfo_442));
                }
                parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 0, &UserArity_444, PredFormArity_428);
                hlds__make_hlds__qual_info__record_called_pred_or_func_5_p_0((MR_Integer) 0, SymName_405, UserArity_444, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_140_488);
                {
                  Var_489 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_489, 0) = ((MR_Box) (CallId_437));
                }
                hlds__make_hlds__superhomogeneous__insert_arg_unifications_17_p_0(HeadVarsArgTerms_427, Context_404, Var_489, HLDSGoal0_443, HLDSGoal_20, STATE_VARIABLE_SVarState_131_479, &STATE_VARIABLE_SVarState_84_449, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_130_478, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_140_488, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_132_480, STATE_VARIABLE_Specs_117);
              }
            }
          }
          hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(LocKind_17, STATE_VARIABLE_SVarState_84_449, STATE_VARIABLE_SVarState_107);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Context_498 = ((MR_Word) ((MR_hl_field(2, Goal_18, (MR_Integer) 0))));
          MR_Word ConjunctA_499 = ((MR_Word) ((MR_hl_field(2, Goal_18, (MR_Integer) 1))));
          MR_Word ConjunctsB_500 = ((MR_Word) ((MR_hl_field(2, Goal_18, (MR_Integer) 2))));
          MR_Word HLDSConjunctsCordA_501;
          MR_Word HLDSConjunctsCord_502;
          MR_Word HLDSConjuncts_503;
          MR_Word GoalInfo_504;
          MR_Word Var_506;
          MR_Word STATE_VARIABLE_SVarState_48_507;
          MR_Word STATE_VARIABLE_SVarStore_49_508;
          MR_Word STATE_VARIABLE_VarSet_50_509;
          MR_Word STATE_VARIABLE_ModuleInfo_51_510;
          MR_Word STATE_VARIABLE_QualInfo_52_511;
          MR_Word STATE_VARIABLE_Specs_53_512;
          MR_Word Var_513;
          MR_Box conv13_HLDSConjunctsCord_502;
          MR_Box conv12_STATE_VARIABLE_SVarState_107;
          MR_Box conv11_STATE_VARIABLE_SVarStore_109;
          MR_Box conv10_STATE_VARIABLE_VarSet_111;
          MR_Box conv9_STATE_VARIABLE_ModuleInfo_113;
          MR_Box conv8_STATE_VARIABLE_QualInfo_115;
          MR_Box conv7_STATE_VARIABLE_Specs_117;

          Var_506 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
          hlds__make_hlds__goal_expr_to_goal__accumulate_plain_or_par_conjunct_18_p_0(LocKind_17, (MR_Integer) 0, Renaming_19, ConjunctA_499, Var_506, &HLDSConjunctsCordA_501, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_48_507, STATE_VARIABLE_SVarStore_0_108, &STATE_VARIABLE_SVarStore_49_508, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_50_509, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_51_510, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_52_511, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_53_512);
          {
            Var_513 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_513, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_5[0]));
            MR_hl_field(0, Var_513, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_1));
            MR_hl_field(0, Var_513, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, Var_513, 3) = ((MR_Box) (LocKind_17));
            MR_hl_field(0, Var_513, 4) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(0, Var_513, 5) = ((MR_Box) (Renaming_19));
          }
          mercury__list__foldl7_16_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_store_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[2]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), Var_513, ConjunctsB_500, ((MR_Box) (HLDSConjunctsCordA_501)), &conv13_HLDSConjunctsCord_502, ((MR_Box) (STATE_VARIABLE_SVarState_48_507)), &conv12_STATE_VARIABLE_SVarState_107, ((MR_Box) (STATE_VARIABLE_SVarStore_49_508)), &conv11_STATE_VARIABLE_SVarStore_109, ((MR_Box) (STATE_VARIABLE_VarSet_50_509)), &conv10_STATE_VARIABLE_VarSet_111, ((MR_Box) (STATE_VARIABLE_ModuleInfo_51_510)), &conv9_STATE_VARIABLE_ModuleInfo_113, ((MR_Box) (STATE_VARIABLE_QualInfo_52_511)), &conv8_STATE_VARIABLE_QualInfo_115, ((MR_Box) (STATE_VARIABLE_Specs_53_512)), &conv7_STATE_VARIABLE_Specs_117);
          HLDSConjunctsCord_502 = ((MR_Word) (conv13_HLDSConjunctsCord_502));
          *STATE_VARIABLE_SVarState_107 = ((MR_Word) (conv12_STATE_VARIABLE_SVarState_107));
          *STATE_VARIABLE_SVarStore_109 = ((MR_Word) (conv11_STATE_VARIABLE_SVarStore_109));
          *STATE_VARIABLE_VarSet_111 = ((MR_Word) (conv10_STATE_VARIABLE_VarSet_111));
          *STATE_VARIABLE_ModuleInfo_113 = ((MR_Word) (conv9_STATE_VARIABLE_ModuleInfo_113));
          *STATE_VARIABLE_QualInfo_115 = ((MR_Word) (conv8_STATE_VARIABLE_QualInfo_115));
          *STATE_VARIABLE_Specs_117 = ((MR_Word) (conv7_STATE_VARIABLE_Specs_117));
          HLDSConjuncts_503 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HLDSConjunctsCord_502);
          hlds__hlds_goal__goal_info_init_2_p_0(Context_498, &GoalInfo_504);
          hlds__hlds_goal__conj_list_to_goal_3_p_0(HLDSConjuncts_503, GoalInfo_504, HLDSGoal_20);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Goal_18, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Context_301 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 1))));
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
              MR_Word Context_622 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 1))));
              MR_Word Vars0_623 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 2))));
              MR_Word StateVars0_624 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 3))));
              MR_Word Cond_625 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 4))));
              MR_Word Then_626 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 5))));
              MR_Word Else_627 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 6))));
              MR_Word Vars_629;
              MR_Word StateVars_630;
              MR_Word BeforeCondSVarState_631;
              MR_Word HLDSCond_632;
              MR_Word AfterCondSVarState_633;
              MR_Word HLDSThen0_634;
              MR_Word AfterThenSVarState0_635;
              MR_Word Globals_636;
              MR_Word ModuleName_637;
              MR_Word AfterThenSVarState_638;
              MR_Word HLDSElse0_639;
              MR_Word AfterElseSVarState_640;
              MR_Word HLDSThen_641;
              MR_Word HLDSElse_642;
              MR_Word GoalExpr_643;
              MR_Word GoalInfo_644;
              MR_Word STATE_VARIABLE_Specs_64_647;
              MR_Word STATE_VARIABLE_SVarStore_65_648;
              MR_Word STATE_VARIABLE_VarSet_66_649;
              MR_Word STATE_VARIABLE_ModuleInfo_67_650;
              MR_Word STATE_VARIABLE_QualInfo_68_651;
              MR_Word STATE_VARIABLE_Specs_69_652;
              MR_Word STATE_VARIABLE_SVarStore_70_653;
              MR_Word STATE_VARIABLE_VarSet_71_654;
              MR_Word STATE_VARIABLE_ModuleInfo_72_655;
              MR_Word STATE_VARIABLE_QualInfo_73_656;
              MR_Word STATE_VARIABLE_Specs_74_657;
              MR_Word STATE_VARIABLE_SVarStore_75_658;
              MR_Word STATE_VARIABLE_VarSet_76_659;
              MR_Word STATE_VARIABLE_Specs_79_660;

              parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, Vars0_623, &Vars_629);
              parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, StateVars0_624, &StateVars_630);
              hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(Context_622, STATE_VARIABLE_VarSet_0_110, StateVars_630, STATE_VARIABLE_SVarState_0_106, &BeforeCondSVarState_631, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_64_647);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Cond_625, Renaming_19, &HLDSCond_632, BeforeCondSVarState_631, &AfterCondSVarState_633, STATE_VARIABLE_SVarStore_0_108, &STATE_VARIABLE_SVarStore_65_648, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_66_649, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_67_650, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_68_651, STATE_VARIABLE_Specs_64_647, &STATE_VARIABLE_Specs_69_652);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Then_626, Renaming_19, &HLDSThen0_634, AfterCondSVarState_633, &AfterThenSVarState0_635, STATE_VARIABLE_SVarStore_65_648, &STATE_VARIABLE_SVarStore_70_653, STATE_VARIABLE_VarSet_66_649, &STATE_VARIABLE_VarSet_71_654, STATE_VARIABLE_ModuleInfo_67_650, &STATE_VARIABLE_ModuleInfo_72_655, STATE_VARIABLE_QualInfo_68_651, &STATE_VARIABLE_QualInfo_73_656, STATE_VARIABLE_Specs_69_652, &STATE_VARIABLE_Specs_74_657);
              hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_72_655, &Globals_636);
              hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_72_655, &ModuleName_637);
              hlds__make_hlds__state_var__svar_finish_local_state_vars_6_p_0(Globals_636, ModuleName_637, StateVars_630, STATE_VARIABLE_SVarState_0_106, AfterThenSVarState0_635, &AfterThenSVarState_638);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Else_627, Renaming_19, &HLDSElse0_639, STATE_VARIABLE_SVarState_0_106, &AfterElseSVarState_640, STATE_VARIABLE_SVarStore_70_653, &STATE_VARIABLE_SVarStore_75_658, STATE_VARIABLE_VarSet_71_654, &STATE_VARIABLE_VarSet_76_659, STATE_VARIABLE_ModuleInfo_72_655, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_73_656, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_74_657, &STATE_VARIABLE_Specs_79_660);
              hlds__make_hlds__state_var__svar_finish_if_then_else_20_p_0(Globals_636, ModuleName_637, LocKind_17, Context_622, StateVars_630, HLDSThen0_634, &HLDSThen_641, HLDSElse0_639, &HLDSElse_642, STATE_VARIABLE_SVarState_0_106, AfterCondSVarState_633, AfterThenSVarState_638, AfterElseSVarState_640, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_VarSet_76_659, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_SVarStore_75_658, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_Specs_79_660, STATE_VARIABLE_Specs_117);
              {
                GoalExpr_643 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_643, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, GoalExpr_643, 1) = ((MR_Box) (Vars_629));
                MR_hl_field(3, GoalExpr_643, 2) = ((MR_Box) (HLDSCond_632));
                MR_hl_field(3, GoalExpr_643, 3) = ((MR_Box) (HLDSThen_641));
                MR_hl_field(3, GoalExpr_643, 4) = ((MR_Box) (HLDSElse_642));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_622, &GoalInfo_644);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_643));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_644));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Context_547 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 1))));
              MR_Word Disjunct1_548 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 2))));
              MR_Word Disjunct2_549 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 3))));
              MR_Word Disjuncts3plus_550 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 4))));
              MR_Word RevDisjunctsSVarStates1_551;
              MR_Word RevDisjunctsSVarStates2_552;
              MR_Word RevDisjunctsSVarStates_553;
              MR_Word DisjunctsSVarStates_554;
              MR_Word Disjuncts_555;
              MR_Word GoalInfo_556;
              MR_Word STATE_VARIABLE_SVarStore_52_558;
              MR_Word STATE_VARIABLE_VarSet_53_559;
              MR_Word STATE_VARIABLE_ModuleInfo_54_560;
              MR_Word STATE_VARIABLE_QualInfo_55_561;
              MR_Word STATE_VARIABLE_Specs_56_562;
              MR_Word STATE_VARIABLE_SVarStore_57_563;
              MR_Word STATE_VARIABLE_VarSet_58_564;
              MR_Word STATE_VARIABLE_ModuleInfo_59_565;
              MR_Word STATE_VARIABLE_QualInfo_60_566;
              MR_Word STATE_VARIABLE_Specs_61_567;
              MR_Word Var_568;
              MR_Word STATE_VARIABLE_SVarStore_63_569;
              MR_Word STATE_VARIABLE_VarSet_64_570;
              MR_Box conv25_RevDisjunctsSVarStates_553;
              MR_Box conv24_STATE_VARIABLE_SVarStore_63_569;
              MR_Box conv23_STATE_VARIABLE_VarSet_64_570;
              MR_Box conv22_STATE_VARIABLE_ModuleInfo_113;
              MR_Box conv21_STATE_VARIABLE_QualInfo_115;
              MR_Box conv20_STATE_VARIABLE_Specs_117;

              hlds__make_hlds__goal_expr_to_goal__accumulate_disjunct_16_p_0(LocKind_17, Renaming_19, STATE_VARIABLE_SVarState_0_106, Disjunct1_548, (MR_Word) ((MR_Unsigned) 0U), &RevDisjunctsSVarStates1_551, STATE_VARIABLE_SVarStore_0_108, &STATE_VARIABLE_SVarStore_52_558, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_53_559, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_54_560, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_55_561, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_56_562);
              hlds__make_hlds__goal_expr_to_goal__accumulate_disjunct_16_p_0(LocKind_17, Renaming_19, STATE_VARIABLE_SVarState_0_106, Disjunct2_549, RevDisjunctsSVarStates1_551, &RevDisjunctsSVarStates2_552, STATE_VARIABLE_SVarStore_52_558, &STATE_VARIABLE_SVarStore_57_563, STATE_VARIABLE_VarSet_53_559, &STATE_VARIABLE_VarSet_58_564, STATE_VARIABLE_ModuleInfo_54_560, &STATE_VARIABLE_ModuleInfo_59_565, STATE_VARIABLE_QualInfo_55_561, &STATE_VARIABLE_QualInfo_60_566, STATE_VARIABLE_Specs_56_562, &STATE_VARIABLE_Specs_61_567);
              {
                Var_568 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_568, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_6[0]));
                MR_hl_field(0, Var_568, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_2));
                MR_hl_field(0, Var_568, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, Var_568, 3) = ((MR_Box) (LocKind_17));
                MR_hl_field(0, Var_568, 4) = ((MR_Box) (Renaming_19));
                MR_hl_field(0, Var_568, 5) = ((MR_Box) (STATE_VARIABLE_SVarState_0_106));
              }
              mercury__list__foldl6_14_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[4]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_store_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[2]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), Var_568, Disjuncts3plus_550, ((MR_Box) (RevDisjunctsSVarStates2_552)), &conv25_RevDisjunctsSVarStates_553, ((MR_Box) (STATE_VARIABLE_SVarStore_57_563)), &conv24_STATE_VARIABLE_SVarStore_63_569, ((MR_Box) (STATE_VARIABLE_VarSet_58_564)), &conv23_STATE_VARIABLE_VarSet_64_570, ((MR_Box) (STATE_VARIABLE_ModuleInfo_59_565)), &conv22_STATE_VARIABLE_ModuleInfo_113, ((MR_Box) (STATE_VARIABLE_QualInfo_60_566)), &conv21_STATE_VARIABLE_QualInfo_115, ((MR_Box) (STATE_VARIABLE_Specs_61_567)), &conv20_STATE_VARIABLE_Specs_117);
              RevDisjunctsSVarStates_553 = ((MR_Word) (conv25_RevDisjunctsSVarStates_553));
              STATE_VARIABLE_SVarStore_63_569 = ((MR_Word) (conv24_STATE_VARIABLE_SVarStore_63_569));
              STATE_VARIABLE_VarSet_64_570 = ((MR_Word) (conv23_STATE_VARIABLE_VarSet_64_570));
              *STATE_VARIABLE_ModuleInfo_113 = ((MR_Word) (conv22_STATE_VARIABLE_ModuleInfo_113));
              *STATE_VARIABLE_QualInfo_115 = ((MR_Word) (conv21_STATE_VARIABLE_QualInfo_115));
              *STATE_VARIABLE_Specs_117 = ((MR_Word) (conv20_STATE_VARIABLE_Specs_117));
              mercury__list__reverse_2_p_0((MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_hlds_goal_svar_state_0), RevDisjunctsSVarStates_553, &DisjunctsSVarStates_554);
              hlds__make_hlds__state_var__svar_finish_disjunction_8_p_0(DisjunctsSVarStates_554, &Disjuncts_555, STATE_VARIABLE_VarSet_64_570, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_63_569, STATE_VARIABLE_SVarStore_109);
              hlds__hlds_goal__goal_info_init_2_p_0(Context_547, &GoalInfo_556);
              hlds__hlds_goal__disj_list_to_goal_3_p_0(Disjuncts_555, GoalInfo_556, HLDSGoal_20);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Context_662 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 1))));
              MR_Word SubGoal_663 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 2))));
              MR_Word HLDSSubGoal_665;
              MR_Word GoalExpr_667;
              MR_Word GoalInfo_668;
              MR_Word Var_666;

              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_663, Renaming_19, &HLDSSubGoal_665, STATE_VARIABLE_SVarState_0_106, &Var_666, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              *STATE_VARIABLE_SVarState_107 = STATE_VARIABLE_SVarState_0_106;
              GoalExpr_667 = (MR_Word) ((MR_Word) (HLDSSubGoal_665));
              hlds__hlds_goal__goal_info_init_2_p_0(Context_662, &GoalInfo_668);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_667));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_668));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Context_27 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 1))));
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
              MR_Word Context_669 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 1))));
              MR_Word ConjunctA_670 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 2))));
              MR_Word ConjunctsB_671 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 3))));
              MR_Word HLDSConjunctsCordA_672;
              MR_Word HLDSConjunctsCord_673;
              MR_Word HLDSConjuncts_674;
              MR_Word GoalInfo_675;
              MR_Word Var_677;
              MR_Word STATE_VARIABLE_SVarState_48_678;
              MR_Word STATE_VARIABLE_SVarStore_49_679;
              MR_Word STATE_VARIABLE_VarSet_50_680;
              MR_Word STATE_VARIABLE_ModuleInfo_51_681;
              MR_Word STATE_VARIABLE_QualInfo_52_682;
              MR_Word STATE_VARIABLE_Specs_53_683;
              MR_Word Var_684;
              MR_Box conv39_HLDSConjunctsCord_673;
              MR_Box conv38_STATE_VARIABLE_SVarState_107;
              MR_Box conv37_STATE_VARIABLE_SVarStore_109;
              MR_Box conv36_STATE_VARIABLE_VarSet_111;
              MR_Box conv35_STATE_VARIABLE_ModuleInfo_113;
              MR_Box conv34_STATE_VARIABLE_QualInfo_115;
              MR_Box conv33_STATE_VARIABLE_Specs_117;

              Var_677 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
              hlds__make_hlds__goal_expr_to_goal__accumulate_plain_or_par_conjunct_18_p_0(LocKind_17, (MR_Integer) 1, Renaming_19, ConjunctA_670, Var_677, &HLDSConjunctsCordA_672, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_48_678, STATE_VARIABLE_SVarStore_0_108, &STATE_VARIABLE_SVarStore_49_679, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_50_680, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_51_681, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_52_682, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_53_683);
              {
                Var_684 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_684, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_5[0]));
                MR_hl_field(0, Var_684, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_3));
                MR_hl_field(0, Var_684, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, Var_684, 3) = ((MR_Box) (LocKind_17));
                MR_hl_field(0, Var_684, 4) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_684, 5) = ((MR_Box) (Renaming_19));
              }
              mercury__list__foldl7_16_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_store_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[2]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), Var_684, ConjunctsB_671, ((MR_Box) (HLDSConjunctsCordA_672)), &conv39_HLDSConjunctsCord_673, ((MR_Box) (STATE_VARIABLE_SVarState_48_678)), &conv38_STATE_VARIABLE_SVarState_107, ((MR_Box) (STATE_VARIABLE_SVarStore_49_679)), &conv37_STATE_VARIABLE_SVarStore_109, ((MR_Box) (STATE_VARIABLE_VarSet_50_680)), &conv36_STATE_VARIABLE_VarSet_111, ((MR_Box) (STATE_VARIABLE_ModuleInfo_51_681)), &conv35_STATE_VARIABLE_ModuleInfo_113, ((MR_Box) (STATE_VARIABLE_QualInfo_52_682)), &conv34_STATE_VARIABLE_QualInfo_115, ((MR_Box) (STATE_VARIABLE_Specs_53_683)), &conv33_STATE_VARIABLE_Specs_117);
              HLDSConjunctsCord_673 = ((MR_Word) (conv39_HLDSConjunctsCord_673));
              *STATE_VARIABLE_SVarState_107 = ((MR_Word) (conv38_STATE_VARIABLE_SVarState_107));
              *STATE_VARIABLE_SVarStore_109 = ((MR_Word) (conv37_STATE_VARIABLE_SVarStore_109));
              *STATE_VARIABLE_VarSet_111 = ((MR_Word) (conv36_STATE_VARIABLE_VarSet_111));
              *STATE_VARIABLE_ModuleInfo_113 = ((MR_Word) (conv35_STATE_VARIABLE_ModuleInfo_113));
              *STATE_VARIABLE_QualInfo_115 = ((MR_Word) (conv34_STATE_VARIABLE_QualInfo_115));
              *STATE_VARIABLE_Specs_117 = ((MR_Word) (conv33_STATE_VARIABLE_Specs_117));
              HLDSConjuncts_674 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HLDSConjunctsCord_673);
              hlds__hlds_goal__goal_info_init_2_p_0(Context_669, &GoalInfo_675);
              hlds__hlds_goal__par_conj_list_to_goal_3_p_0(HLDSConjuncts_674, GoalInfo_675, HLDSGoal_20);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word QuantType_695 = ((((MR_Unsigned) ((MR_hl_field(3, Goal_18, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              MR_Word VarsKind_696 = ((MR_Unsigned) ((MR_hl_field(3, Goal_18, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Context_697 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 2))));
              MR_Word Vars0_698 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 3))));
              MR_Word SubGoal_699 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 4))));

              switch (QuantType_695) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word TransformedGoal_700;
                    MR_Word Var_713;
                    MR_Word Var_715;
                    MR_Word next_value_of_Goal_18;

                    {
                      Var_715 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_715, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                      MR_hl_field(3, Var_715, 1) = ((MR_Box) (Context_697));
                      MR_hl_field(3, Var_715, 2) = ((MR_Box) (SubGoal_699));
                    }
                    {
                      Var_713 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_713, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(3, Var_713, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) (VarsKind_696)));
                      MR_hl_field(3, Var_713, 2) = ((MR_Box) (Context_697));
                      MR_hl_field(3, Var_713, 3) = ((MR_Box) (Vars0_698));
                      MR_hl_field(3, Var_713, 4) = ((MR_Box) (Var_715));
                    }
                    {
                      TransformedGoal_700 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, TransformedGoal_700, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                      MR_hl_field(3, TransformedGoal_700, 1) = ((MR_Box) (Context_697));
                      MR_hl_field(3, TransformedGoal_700, 2) = ((MR_Box) (Var_713));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_Goal_18 = TransformedGoal_700;
                    Goal_18 = next_value_of_Goal_18;
                    continue;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word Vars_701;
                    MR_Word HLDSSubGoal_702;
                    MR_Word Reason_703;
                    MR_Word GoalExpr_711;
                    MR_Word GoalInfo_712;

                    parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, Vars0_698, &Vars_701);
                    switch (VarsKind_696) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_699, Renaming_19, &HLDSSubGoal_702, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
                          {
                            Reason_703 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, Reason_703, 0) = ((MR_Box) (Vars_701));
                            MR_hl_field(0, Reason_703, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word BeforeInsideSVarState_706;
                          MR_Word AfterInsideSVarState_707;
                          MR_Word Globals_708;
                          MR_Word ModuleName_709;
                          MR_Word STATE_VARIABLE_Specs_74_718;

                          hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(Context_697, STATE_VARIABLE_VarSet_0_110, Vars_701, STATE_VARIABLE_SVarState_0_106, &BeforeInsideSVarState_706, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_74_718);
                          hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_699, Renaming_19, &HLDSSubGoal_702, BeforeInsideSVarState_706, &AfterInsideSVarState_707, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_74_718, STATE_VARIABLE_Specs_117);
                          hlds__hlds_module__module_info_get_globals_2_p_0(*STATE_VARIABLE_ModuleInfo_113, &Globals_708);
                          hlds__hlds_module__module_info_get_name_2_p_0(*STATE_VARIABLE_ModuleInfo_113, &ModuleName_709);
                          hlds__make_hlds__state_var__svar_finish_local_state_vars_6_p_0(Globals_708, ModuleName_709, Vars_701, STATE_VARIABLE_SVarState_0_106, AfterInsideSVarState_707, STATE_VARIABLE_SVarState_107);
                          Reason_703 = (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[22]);
                        }
                        break;
                    }
                    {
                      GoalExpr_711 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, GoalExpr_711, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(3, GoalExpr_711, 1) = ((MR_Box) (Reason_703));
                      MR_hl_field(3, GoalExpr_711, 2) = ((MR_Box) (HLDSSubGoal_702));
                    }
                    hlds__hlds_goal__goal_info_init_2_p_0(Context_697, &GoalInfo_712);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *HLDSGoal_20 = base;
                      MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_711));
                      MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_712));
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Purity_67 = ((MR_Unsigned) ((MR_hl_field(3, Goal_18, (MR_Integer) 2))) & (MR_Integer) 3);
              MR_Word SubGoal_68 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 3))));
              MR_Word Reason_69;
              MR_Word HLDSSubGoal_71;
              MR_Word Context_242 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_243;
              MR_Word GoalInfo_244;

              {
                Reason_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Reason_69, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Reason_69, 1) = (MR_Box) ((MR_Unsigned) (Purity_67));
              }
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_68, Renaming_19, &HLDSSubGoal_71, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
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
              MR_Word Vars_274 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 2))));
              MR_Word StateVars_275 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 3))));
              MR_Word DotSVars_276 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 4))));
              MR_Word ColonSVars_277 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 5))));
              MR_Word PromiseVars_279;
              MR_Word Context_280 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_281;
              MR_Word GoalInfo_282;
              MR_Word SubGoal_283 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 6))));
              MR_Word Reason_284;
              MR_Word HLDSSubGoal_285;

              hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(LocKind_17, Vars_274, StateVars_275, DotSVars_276, ColonSVars_277, Context_280, Renaming_19, &PromiseVars_279, SubGoal_283, &HLDSSubGoal_285, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
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
              MR_Word Vars_262 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 2))));
              MR_Word StateVars_263 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 3))));
              MR_Word DotSVars_264 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 4))));
              MR_Word ColonSVars_265 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 5))));
              MR_Word PromiseVars_267;
              MR_Word Context_268 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_269;
              MR_Word GoalInfo_270;
              MR_Word SubGoal_271 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 6))));
              MR_Word Reason_272;
              MR_Word HLDSSubGoal_273;

              hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(LocKind_17, Vars_262, StateVars_263, DotSVars_264, ColonSVars_265, Context_268, Renaming_19, &PromiseVars_267, SubGoal_271, &HLDSSubGoal_273, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
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
              MR_Word Vars_74 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 2))));
              MR_Word StateVars_75 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 3))));
              MR_Word DotSVars_76 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 4))));
              MR_Word ColonSVars_77 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 5))));
              MR_Word PromiseVars_79;
              MR_Word Context_256 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_257;
              MR_Word GoalInfo_258;
              MR_Word SubGoal_259 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 6))));
              MR_Word Reason_260;
              MR_Word HLDSSubGoal_261;

              hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(LocKind_17, Vars_74, StateVars_75, DotSVars_76, ColonSVars_77, Context_256, Renaming_19, &PromiseVars_79, SubGoal_259, &HLDSSubGoal_261, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
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
              MR_Word Detism_70 = ((MR_Unsigned) ((MR_hl_field(3, Goal_18, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_Word SubGoal_286 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 3))));
              MR_Word Reason_287;
              MR_Word HLDSSubGoal_288;
              MR_Word Context_289 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_290;
              MR_Word GoalInfo_291;

              {
                Reason_287 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Reason_287, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Reason_287, 1) = (MR_Box) ((MR_Unsigned) (Detism_70));
              }
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_286, Renaming_19, &HLDSSubGoal_288, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
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
              MR_Word PODVar0_72 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 2))));
              MR_Word Var_73;
              MR_Word STATE_VARIABLE_SVarState_192_192;
              MR_Word STATE_VARIABLE_VarSet_193_193;
              MR_Word STATE_VARIABLE_Specs_194_194;
              MR_Word Context_249 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_250;
              MR_Word GoalInfo_251;
              MR_Word SubGoal_252 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 3))));
              MR_Word Reason_253;
              MR_Word HLDSSubGoal_255;

              hlds__make_hlds__goal_expr_to_goal__rename_and_maybe_expand_dot_var_11_p_0(Context_249, (MR_Integer) 1, Renaming_19, PODVar0_72, &Var_73, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_192_192, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_193_193, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_194_194);
              {
                Reason_253 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Reason_253, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, Reason_253, 1) = ((MR_Box) (Var_73));
              }
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_252, Renaming_19, &HLDSSubGoal_255, STATE_VARIABLE_SVarState_192_192, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_193_193, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_194_194, STATE_VARIABLE_Specs_117);
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
              MR_Word Detism_245 = ((MR_Unsigned) ((MR_hl_field(3, Goal_18, (MR_Integer) 3))) & (MR_Integer) 7);
              MR_Word PODVar0_246 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 2))));
              MR_Word Var_247;
              MR_Word STATE_VARIABLE_SVarState_192_292;
              MR_Word STATE_VARIABLE_VarSet_193_293;
              MR_Word STATE_VARIABLE_Specs_194_294;
              MR_Word Context_295 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_296;
              MR_Word GoalInfo_297;
              MR_Word SubGoal_298 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 4))));
              MR_Word Reason_299;
              MR_Word HLDSSubGoal_300;

              hlds__make_hlds__goal_expr_to_goal__rename_and_maybe_expand_dot_var_11_p_0(Context_295, (MR_Integer) 1, Renaming_19, PODVar0_246, &Var_247, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_192_292, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_193_293, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_194_294);
              {
                Reason_299 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Reason_299, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, Reason_299, 1) = ((MR_Box) (Var_247));
                MR_hl_field(3, Reason_299, 2) = (MR_Box) ((MR_Unsigned) (Detism_245));
              }
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_298, Renaming_19, &HLDSSubGoal_300, STATE_VARIABLE_SVarState_192_292, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_193_293, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_194_294, STATE_VARIABLE_Specs_117);
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
              MR_Word Context_524 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 1))));
              MR_Word HeadWarning_525 = ((MR_Unsigned) ((MR_hl_field(3, Goal_18, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_Word TailWarnings_526 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 3))));
              MR_Word SubGoal_527 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 4))));
              MR_Word HLDSSubGoal_531;
              MR_Word GoalExpr_534;
              MR_Word GoalInfo_535;
              MR_Word Var_545;

              succeeded = (HeadWarning_525 == (MR_Integer) 1);
              if (!(succeeded))
                succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), ((MR_Box) ((MR_Integer) 1)), TailWarnings_526);
              if (succeeded)
              {
                MR_Word Globals0_528;
                MR_Word WarnOccursCheck0_529;
                MR_Word Globals1_530;
                MR_Word Globals2_532;
                MR_Word Globals3_533;
                MR_Word STATE_VARIABLE_ModuleInfo_56_541;
                MR_Word STATE_VARIABLE_ModuleInfo_60_542;
                MR_Word Var_544;

                hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_112, &Globals0_528);
                libs__globals__lookup_bool_option_3_p_0(Globals0_528, (MR_Integer) 62, &WarnOccursCheck0_529);
                libs__globals__set_option_4_p_0((MR_Integer) 62, (MR_Word) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_3[4])), Globals0_528, &Globals1_530);
                hlds__hlds_module__module_info_set_globals_3_p_0(Globals1_530, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_56_541);
                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_527, Renaming_19, &HLDSSubGoal_531, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_56_541, &STATE_VARIABLE_ModuleInfo_60_542, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
                hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_60_542, &Globals2_532);
                {
                  Var_544 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_544, 0) = (MR_Box) ((MR_Unsigned) (WarnOccursCheck0_529));
                }
                libs__globals__set_option_4_p_0((MR_Integer) 62, Var_544, Globals2_532, &Globals3_533);
                hlds__hlds_module__module_info_set_globals_3_p_0(Globals3_533, STATE_VARIABLE_ModuleInfo_60_542, STATE_VARIABLE_ModuleInfo_113);
              }
              else
                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_527, Renaming_19, &HLDSSubGoal_531, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              {
                Var_545 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_545, 0) = (MR_Box) ((MR_Unsigned) (HeadWarning_525));
                MR_hl_field(1, Var_545, 1) = ((MR_Box) (TailWarnings_526));
              }
              {
                GoalExpr_534 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_534, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_534, 1) = ((MR_Box) (Var_545));
                MR_hl_field(3, GoalExpr_534, 2) = ((MR_Box) (HLDSSubGoal_531));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_524, &GoalInfo_535);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_534));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_535));
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word Context_722 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 1))));
              MR_Word MaybeCompileTime_723 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 2))));
              MR_Word MaybeRunTime_724 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 3))));
              MR_Word MaybeIO0_725 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 4))));
              MR_Word Mutables0_726 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 5))));
              MR_Word SubGoal0_727 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 6))));
              MR_Word MutableHLDSs_728;
              MR_Word MutableStateVars_729;
              MR_Word MutableGetGoals_730;
              MR_Word MutableSetGoals_731;
              MR_Word MaybeIOHLDS_737;
              MR_Word StateVars_738;
              MR_Word GetGoals_739;
              MR_Word SetGoals_740;
              MR_Word SubGoal1_741;
              MR_Word BeforeInsideSVarState_742;
              MR_Word HLDSSubGoal_743;
              MR_Word AfterInsideSVarState_744;
              MR_Word Globals_745;
              MR_Word ModuleName_746;
              MR_Word Reason_747;
              MR_Word GoalExpr_748;
              MR_Word GoalInfo_749;
              MR_Word Var_750;
              MR_Word Var_751;
              MR_Word Var_752;
              MR_Word Var_753;
              MR_Word STATE_VARIABLE_Specs_74_755;
              MR_Word STATE_VARIABLE_QualInfo_78_756;

              {
                Var_750 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_750, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_7[0]));
                MR_hl_field(0, Var_750, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_4));
                MR_hl_field(0, Var_750, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, Var_750, 3) = ((MR_Box) (Context_722));
                MR_hl_field(0, Var_750, 4) = ((MR_Box) (STATE_VARIABLE_VarSet_0_110));
                MR_hl_field(0, Var_750, 5) = ((MR_Box) (Renaming_19));
              }
              mercury__list__map4_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[5]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), Var_750, Mutables0_726, &MutableHLDSs_728, &MutableStateVars_729, &MutableGetGoals_730, &MutableSetGoals_731);
              if ((MaybeIO0_725 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MaybeIOHLDS_737 = (MR_Word) ((MR_Unsigned) 0U);
                StateVars_738 = MutableStateVars_729;
                GetGoals_739 = MutableGetGoals_730;
                SetGoals_740 = MutableSetGoals_731;
              }
              else
              {
                MR_Word IOStateVar0_732 = ((MR_Word) ((MR_hl_field(1, MaybeIO0_725, (MR_Integer) 0))));
                MR_Word IOStateVar_733;
                MR_String IOStateVarName_734;
                MR_Word IOGetGoal_735;
                MR_Word IOSetGoal_736;

                hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_8_p_0(Context_722, STATE_VARIABLE_VarSet_0_110, Renaming_19, IOStateVar0_732, &IOStateVar_733, &IOStateVarName_734, &IOGetGoal_735, &IOSetGoal_736);
                {
                  MaybeIOHLDS_737 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MaybeIOHLDS_737, 0) = ((MR_Box) (IOStateVarName_734));
                }
                {
                  StateVars_738 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, StateVars_738, 0) = ((MR_Box) (IOStateVar_733));
                  MR_hl_field(1, StateVars_738, 1) = ((MR_Box) (MutableStateVars_729));
                }
                {
                  GetGoals_739 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, GetGoals_739, 0) = ((MR_Box) (IOGetGoal_735));
                  MR_hl_field(1, GetGoals_739, 1) = ((MR_Box) (MutableGetGoals_730));
                }
                {
                  SetGoals_740 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, SetGoals_740, 0) = ((MR_Box) (IOSetGoal_736));
                  MR_hl_field(1, SetGoals_740, 1) = ((MR_Box) (MutableSetGoals_731));
                }
              }
              {
                Var_753 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_753, 0) = ((MR_Box) (SubGoal0_727));
                MR_hl_field(1, Var_753, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_752 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), Var_753, SetGoals_740);
              Var_751 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), GetGoals_739, Var_752);
              SubGoal1_741 = parse_tree__prog_util__goal_list_to_conj_2_f_0(Context_722, Var_751);
              hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(Context_722, STATE_VARIABLE_VarSet_0_110, StateVars_738, STATE_VARIABLE_SVarState_0_106, &BeforeInsideSVarState_742, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_74_755);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal1_741, Renaming_19, &HLDSSubGoal_743, BeforeInsideSVarState_742, &AfterInsideSVarState_744, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_78_756, STATE_VARIABLE_Specs_74_755, STATE_VARIABLE_Specs_117);
              hlds__hlds_module__module_info_get_globals_2_p_0(*STATE_VARIABLE_ModuleInfo_113, &Globals_745);
              hlds__hlds_module__module_info_get_name_2_p_0(*STATE_VARIABLE_ModuleInfo_113, &ModuleName_746);
              hlds__make_hlds__state_var__svar_finish_local_state_vars_6_p_0(Globals_745, ModuleName_746, StateVars_738, STATE_VARIABLE_SVarState_0_106, AfterInsideSVarState_744, STATE_VARIABLE_SVarState_107);
              hlds__make_hlds__qual_info__qual_info_set_found_trace_goal_3_p_0((MR_Integer) 1, STATE_VARIABLE_QualInfo_78_756, STATE_VARIABLE_QualInfo_115);
              {
                Reason_747 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Reason_747, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(3, Reason_747, 1) = ((MR_Box) (MaybeCompileTime_723));
                MR_hl_field(3, Reason_747, 2) = ((MR_Box) (MaybeRunTime_724));
                MR_hl_field(3, Reason_747, 3) = ((MR_Box) (MaybeIOHLDS_737));
                MR_hl_field(3, Reason_747, 4) = ((MR_Box) (MutableHLDSs_728));
                MR_hl_field(3, Reason_747, 5) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                GoalExpr_748 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_748, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_748, 1) = ((MR_Box) (Reason_747));
                MR_hl_field(3, GoalExpr_748, 2) = ((MR_Box) (HLDSSubGoal_743));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_722, &GoalInfo_749);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_748));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_749));
              }
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word Context_304 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 1))));
              MR_Word Outer0_305 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 2))));
              MR_Word Inner0_306 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 3))));
              MR_Word MaybeOutputVars0_307 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 4))));
              MR_Word MainGoal_308 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 5))));
              MR_Word OrElseGoals_309 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 6))));
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

                parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, OutputVars0_311, &OutputVars_312);
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

                parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, OuterStateVar0_313, &OuterStateVar_314);
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

                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, InnerStateVar0_322, &InnerStateVar_323);
                  hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_p_0(Context_304, InnerStateVar_323, &InnerScopeInfo2_338, STATE_VARIABLE_SVarState_91_355, &BeforeDisjSVarState_328, STATE_VARIABLE_VarSet_92_356, &STATE_VARIABLE_VarSet_98_362, STATE_VARIABLE_Specs_93_357, &STATE_VARIABLE_Specs_99_363);
                  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, MainGoal_308, Renaming_19, &HLDSMainGoal0_329, BeforeDisjSVarState_328, &AfterMainSVarState_330, STATE_VARIABLE_SVarStore_0_108, &STATE_VARIABLE_SVarStore_100_364, STATE_VARIABLE_VarSet_98_362, &STATE_VARIABLE_VarSet_101_365, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_102_366, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_103_367, STATE_VARIABLE_Specs_99_363, &STATE_VARIABLE_Specs_104_368);
                  {
                    MainDisjState_331 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, MainDisjState_331, 0) = ((MR_Box) (HLDSMainGoal0_329));
                    MR_hl_field(0, MainDisjState_331, 1) = ((MR_Box) (AfterMainSVarState_330));
                  }
                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(LocKind_17, OrElseGoals_309, Renaming_19, &OrElseDisjStates_332, BeforeDisjSVarState_328, STATE_VARIABLE_SVarStore_100_364, &STATE_VARIABLE_SVarStore_105_369, STATE_VARIABLE_VarSet_101_365, &STATE_VARIABLE_VarSet_106_370, STATE_VARIABLE_ModuleInfo_102_366, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_103_367, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_104_368, &STATE_VARIABLE_Specs_109_371);
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
                  MR_Word HLDSMainGoal0_903;
                  MR_Word AfterMainSVarState_904;
                  MR_Word MainDisjState_905;
                  MR_Word OrElseDisjStates_906;
                  MR_Word AllDisjStates_907;
                  MR_Word STATE_VARIABLE_SVarStore_100_910;
                  MR_Word STATE_VARIABLE_VarSet_101_911;
                  MR_Word STATE_VARIABLE_ModuleInfo_102_912;
                  MR_Word STATE_VARIABLE_QualInfo_103_913;
                  MR_Word STATE_VARIABLE_Specs_104_914;
                  MR_Word STATE_VARIABLE_SVarStore_105_915;
                  MR_Word STATE_VARIABLE_VarSet_106_916;

                  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, MainGoal_308, Renaming_19, &HLDSMainGoal0_903, STATE_VARIABLE_SVarState_91_355, &AfterMainSVarState_904, STATE_VARIABLE_SVarStore_0_108, &STATE_VARIABLE_SVarStore_100_910, STATE_VARIABLE_VarSet_92_356, &STATE_VARIABLE_VarSet_101_911, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_102_912, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_103_913, STATE_VARIABLE_Specs_93_357, &STATE_VARIABLE_Specs_104_914);
                  {
                    MainDisjState_905 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, MainDisjState_905, 0) = ((MR_Box) (HLDSMainGoal0_903));
                    MR_hl_field(0, MainDisjState_905, 1) = ((MR_Box) (AfterMainSVarState_904));
                  }
                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(LocKind_17, OrElseGoals_309, Renaming_19, &OrElseDisjStates_906, STATE_VARIABLE_SVarState_91_355, STATE_VARIABLE_SVarStore_100_910, &STATE_VARIABLE_SVarStore_105_915, STATE_VARIABLE_VarSet_101_911, &STATE_VARIABLE_VarSet_106_916, STATE_VARIABLE_ModuleInfo_102_912, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_103_913, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_104_914, STATE_VARIABLE_Specs_117);
                  {
                    AllDisjStates_907 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, AllDisjStates_907, 0) = ((MR_Box) (MainDisjState_905));
                    MR_hl_field(1, AllDisjStates_907, 1) = ((MR_Box) (OrElseDisjStates_906));
                  }
                  hlds__make_hlds__state_var__svar_finish_disjunction_8_p_0(AllDisjStates_907, &HLDSGoals_334, STATE_VARIABLE_VarSet_106_916, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_SVarState_91_355, &STATE_VARIABLE_SVarState_115_376, STATE_VARIABLE_SVarStore_105_915, STATE_VARIABLE_SVarStore_109);
                  InnerDI0_342 = ((MR_Word) ((MR_hl_field(1, Inner0_306, (MR_Integer) 0))));
                  InnerUO0_343 = ((MR_Word) ((MR_hl_field(1, Inner0_306, (MR_Integer) 1))));
                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, InnerDI0_342, &InnerDI_395);
                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, InnerUO0_343, &InnerUO_396);
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

                parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, OuterDI0_320, &OuterDI_393);
                parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, OuterUO0_321, &OuterUO_394);
                {
                  Outer_319 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Outer_319, 0) = ((MR_Box) (OuterDI_393));
                  MR_hl_field(0, Outer_319, 1) = ((MR_Box) (OuterUO_394));
                }
                if (((MR_tag((MR_Word) Inner0_306)) == (MR_Integer) 0))
                {
                  MR_Word InnerStateVar0_820 = ((MR_Word) ((MR_hl_field(0, Inner0_306, (MR_Integer) 0))));
                  MR_Word InnerStateVar_821;
                  MR_Word InnerScopeInfo2_832;
                  MR_Word InnerDI_833;
                  MR_Word InnerUO_834;
                  MR_Word BeforeDisjSVarState_864;
                  MR_Word HLDSMainGoal0_865;
                  MR_Word AfterMainSVarState_866;
                  MR_Word MainDisjState_867;
                  MR_Word OrElseDisjStates_868;
                  MR_Word AllDisjStates_869;
                  MR_Word STATE_VARIABLE_VarSet_98_879;
                  MR_Word STATE_VARIABLE_Specs_99_880;
                  MR_Word STATE_VARIABLE_SVarStore_100_881;
                  MR_Word STATE_VARIABLE_VarSet_101_882;
                  MR_Word STATE_VARIABLE_ModuleInfo_102_883;
                  MR_Word STATE_VARIABLE_QualInfo_103_884;
                  MR_Word STATE_VARIABLE_Specs_104_885;
                  MR_Word STATE_VARIABLE_SVarStore_105_886;
                  MR_Word STATE_VARIABLE_VarSet_106_887;
                  MR_Word STATE_VARIABLE_Specs_109_888;
                  MR_Word STATE_VARIABLE_VarSet_110_889;
                  MR_Word STATE_VARIABLE_SVarState_111_890;

                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, InnerStateVar0_820, &InnerStateVar_821);
                  hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_p_0(Context_304, InnerStateVar_821, &InnerScopeInfo2_832, STATE_VARIABLE_SVarState_0_106, &BeforeDisjSVarState_864, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_98_879, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_99_880);
                  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, MainGoal_308, Renaming_19, &HLDSMainGoal0_865, BeforeDisjSVarState_864, &AfterMainSVarState_866, STATE_VARIABLE_SVarStore_0_108, &STATE_VARIABLE_SVarStore_100_881, STATE_VARIABLE_VarSet_98_879, &STATE_VARIABLE_VarSet_101_882, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_102_883, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_103_884, STATE_VARIABLE_Specs_99_880, &STATE_VARIABLE_Specs_104_885);
                  {
                    MainDisjState_867 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, MainDisjState_867, 0) = ((MR_Box) (HLDSMainGoal0_865));
                    MR_hl_field(0, MainDisjState_867, 1) = ((MR_Box) (AfterMainSVarState_866));
                  }
                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(LocKind_17, OrElseGoals_309, Renaming_19, &OrElseDisjStates_868, BeforeDisjSVarState_864, STATE_VARIABLE_SVarStore_100_881, &STATE_VARIABLE_SVarStore_105_886, STATE_VARIABLE_VarSet_101_882, &STATE_VARIABLE_VarSet_106_887, STATE_VARIABLE_ModuleInfo_102_883, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_103_884, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_104_885, &STATE_VARIABLE_Specs_109_888);
                  {
                    AllDisjStates_869 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, AllDisjStates_869, 0) = ((MR_Box) (MainDisjState_867));
                    MR_hl_field(1, AllDisjStates_869, 1) = ((MR_Box) (OrElseDisjStates_868));
                  }
                  hlds__make_hlds__state_var__svar_finish_disjunction_8_p_0(AllDisjStates_869, &HLDSGoals_334, STATE_VARIABLE_VarSet_106_887, &STATE_VARIABLE_VarSet_110_889, BeforeDisjSVarState_864, &STATE_VARIABLE_SVarState_111_890, STATE_VARIABLE_SVarStore_105_886, STATE_VARIABLE_SVarStore_109);
                  hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_p_0(Context_304, InnerScopeInfo2_832, &InnerDI_833, &InnerUO_834, STATE_VARIABLE_SVarState_111_890, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_VarSet_110_889, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_Specs_109_888, STATE_VARIABLE_Specs_117);
                  {
                    Inner_341 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Inner_341, 0) = ((MR_Box) (InnerDI_833));
                    MR_hl_field(0, Inner_341, 1) = ((MR_Box) (InnerUO_834));
                  }
                }
                else
                {
                  MR_Word InnerDI0_840;
                  MR_Word InnerUO0_841;
                  MR_Word InnerDI_844;
                  MR_Word InnerUO_845;
                  MR_Word HLDSMainGoal0_923;
                  MR_Word AfterMainSVarState_924;
                  MR_Word MainDisjState_925;
                  MR_Word OrElseDisjStates_926;
                  MR_Word AllDisjStates_927;
                  MR_Word STATE_VARIABLE_SVarStore_100_930;
                  MR_Word STATE_VARIABLE_VarSet_101_931;
                  MR_Word STATE_VARIABLE_ModuleInfo_102_932;
                  MR_Word STATE_VARIABLE_QualInfo_103_933;
                  MR_Word STATE_VARIABLE_Specs_104_934;
                  MR_Word STATE_VARIABLE_SVarStore_105_935;
                  MR_Word STATE_VARIABLE_VarSet_106_936;

                  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, MainGoal_308, Renaming_19, &HLDSMainGoal0_923, STATE_VARIABLE_SVarState_0_106, &AfterMainSVarState_924, STATE_VARIABLE_SVarStore_0_108, &STATE_VARIABLE_SVarStore_100_930, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_101_931, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_102_932, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_103_933, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_104_934);
                  {
                    MainDisjState_925 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, MainDisjState_925, 0) = ((MR_Box) (HLDSMainGoal0_923));
                    MR_hl_field(0, MainDisjState_925, 1) = ((MR_Box) (AfterMainSVarState_924));
                  }
                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(LocKind_17, OrElseGoals_309, Renaming_19, &OrElseDisjStates_926, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarStore_100_930, &STATE_VARIABLE_SVarStore_105_935, STATE_VARIABLE_VarSet_101_931, &STATE_VARIABLE_VarSet_106_936, STATE_VARIABLE_ModuleInfo_102_932, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_103_933, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_104_934, STATE_VARIABLE_Specs_117);
                  {
                    AllDisjStates_927 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, AllDisjStates_927, 0) = ((MR_Box) (MainDisjState_925));
                    MR_hl_field(1, AllDisjStates_927, 1) = ((MR_Box) (OrElseDisjStates_926));
                  }
                  hlds__make_hlds__state_var__svar_finish_disjunction_8_p_0(AllDisjStates_927, &HLDSGoals_334, STATE_VARIABLE_VarSet_106_936, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_105_935, STATE_VARIABLE_SVarStore_109);
                  InnerDI0_840 = ((MR_Word) ((MR_hl_field(1, Inner0_306, (MR_Integer) 0))));
                  InnerUO0_841 = ((MR_Word) ((MR_hl_field(1, Inner0_306, (MR_Integer) 1))));
                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, InnerDI0_840, &InnerDI_844);
                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, InnerUO0_841, &InnerUO_845);
                  {
                    Inner_341 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Inner_341, 0) = ((MR_Box) (InnerDI_844));
                    MR_hl_field(0, Inner_341, 1) = ((MR_Box) (InnerUO_845));
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
              MR_Word Context_763 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 1))));
              MR_Word MaybeIO0_764 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 2))));
              MR_Word SubGoal0_765 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 3))));
              MR_Word Then0_766 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 4))));
              MR_Word MaybeElse0_767 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 5))));
              MR_Word Catches0_768 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 6))));
              MR_Word MaybeCatchAny0_769 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 7))));

              if ((MaybeIO0_764 == (MR_Word) ((MR_Unsigned) 0U)))
                hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_p_0(LocKind_17, SubGoal0_765, Then0_766, MaybeElse0_767, Catches0_768, MaybeCatchAny0_769, Context_763, Renaming_19, HLDSGoal_20, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              else
              {
                MR_Word IOStateVar0_770 = ((MR_Word) ((MR_hl_field(1, MaybeIO0_764, (MR_Integer) 0))));

                if ((MaybeElse0_767 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word IOStateVar_771;

                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, IOStateVar0_770, &IOStateVar_771);
                  hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_p_0(LocKind_17, IOStateVar0_770, IOStateVar_771, SubGoal0_765, Then0_766, Catches0_768, MaybeCatchAny0_769, Context_763, Renaming_19, HLDSGoal_20, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
                }
                else
                {
                  MR_Word Spec_774;

                  {
                    Spec_774 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Spec_774, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_parse_tree_goal_to_hlds_try\'/16"));
                    MR_hl_field(1, Spec_774, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(1, Spec_774, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                    MR_hl_field(1, Spec_774, 3) = ((MR_Box) (Context_763));
                    MR_hl_field(1, Spec_774, 4) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[40])));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_Specs_117 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_774));
                    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_116));
                  }
                  *HLDSGoal_20 = hlds__make_goal__true_goal_with_context_1_f_0(Context_763);
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
              MR_Word P_56 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 2))));
              MR_Word Q_57 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 3))));
              MR_Word TransformedGoal_58;
              MR_Word Var_163;
              MR_Word Var_164;
              MR_Word Var_165;
              MR_Word Context_241 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 1))));
              MR_Word next_value_of_Goal_18;

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
              next_value_of_Goal_18 = TransformedGoal_58;
              Goal_18 = next_value_of_Goal_18;
              continue;
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word Context_579 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 1))));
              MR_Word SubGoalA_580 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 2))));
              MR_Word SubGoalB_581 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 3))));
              MR_Word HLDSSubGoalA_583;
              MR_Word HLDSSubGoalB_584;
              MR_Word GoalExpr_586;
              MR_Word GoalInfo_587;
              MR_Word STATE_VARIABLE_SVarState_48_588;
              MR_Word STATE_VARIABLE_SVarStore_49_589;
              MR_Word STATE_VARIABLE_VarSet_50_590;
              MR_Word STATE_VARIABLE_ModuleInfo_51_591;
              MR_Word STATE_VARIABLE_QualInfo_52_592;
              MR_Word STATE_VARIABLE_Specs_53_593;
              MR_Word Var_594;
              MR_Word Var_585;

              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoalA_580, Renaming_19, &HLDSSubGoalA_583, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_48_588, STATE_VARIABLE_SVarStore_0_108, &STATE_VARIABLE_SVarStore_49_589, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_50_590, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_51_591, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_52_592, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_53_593);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoalB_581, Renaming_19, &HLDSSubGoalB_584, STATE_VARIABLE_SVarState_48_588, &Var_585, STATE_VARIABLE_SVarStore_49_589, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_50_590, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_51_591, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_52_592, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_53_593, STATE_VARIABLE_Specs_117);
              *STATE_VARIABLE_SVarState_107 = STATE_VARIABLE_SVarState_0_106;
              {
                Var_594 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_594, 0) = ((MR_Box) (HLDSSubGoalA_583));
                MR_hl_field(0, Var_594, 1) = ((MR_Box) (HLDSSubGoalB_584));
              }
              {
                GoalExpr_586 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_586, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(3, GoalExpr_586, 1) = ((MR_Box) (Var_594));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_579, &GoalInfo_587);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_586));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_587));
              }
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Word Context_595 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 1))));
              MR_String EventName_596 = ((MR_String) ((MR_hl_field(3, Goal_18, (MR_Integer) 2))));
              MR_Word ArgTerms0_597 = ((MR_Word) ((MR_hl_field(3, Goal_18, (MR_Integer) 3))));
              MR_Word ArgTerms1_598;
              MR_Word ArgTerms_599;
              MR_Word HeadVars_600;
              MR_Word HeadVarsArgTerms_601;
              MR_Integer Arity_602;
              MR_Word Modes_603;
              MR_Word Details_604;
              MR_Word GoalExpr0_605;
              MR_Word GoalInfo_606;
              MR_Word HLDSGoal0_607;
              MR_Word CallId_608;
              MR_Word STATE_VARIABLE_VarSet_54_610;
              MR_Word STATE_VARIABLE_SVarState_55_611;
              MR_Word STATE_VARIABLE_Specs_56_612;
              MR_Word Var_613;
              MR_Word Var_616;
              MR_Word Var_617;
              MR_Word STATE_VARIABLE_SVarState_62_618;

              hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(ArgTerms0_597, &ArgTerms1_598);
              parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, ArgTerms1_598, &ArgTerms_599);
              hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_9_p_0(ArgTerms_599, &HeadVars_600, &HeadVarsArgTerms_601, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_54_610, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_55_611, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_56_612);
              mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[5]), HeadVars_600, &Arity_602);
              Var_613 = parse_tree__prog_mode__in_mode_0_f_0();
              mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Arity_602, ((MR_Box) (Var_613)), &Modes_603);
              {
                Details_604 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Details_604, 0) = ((MR_Box) (EventName_596));
              }
              {
                GoalExpr0_605 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr0_605, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, GoalExpr0_605, 1) = ((MR_Box) (Details_604));
                MR_hl_field(3, GoalExpr0_605, 2) = ((MR_Box) (HeadVars_600));
                MR_hl_field(3, GoalExpr0_605, 3) = ((MR_Box) (Modes_603));
                MR_hl_field(3, GoalExpr0_605, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, GoalExpr0_605, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_595, &GoalInfo_606);
              {
                HLDSGoal0_607 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, HLDSGoal0_607, 0) = ((MR_Box) (GoalExpr0_605));
                MR_hl_field(0, HLDSGoal0_607, 1) = ((MR_Box) (GoalInfo_606));
              }
              {
                Var_616 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_616, 0) = ((MR_Box) (EventName_596));
              }
              {
                CallId_608 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, CallId_608, 0) = ((MR_Box) (Var_616));
              }
              {
                Var_617 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_617, 0) = ((MR_Box) (CallId_608));
              }
              hlds__make_hlds__superhomogeneous__insert_arg_unifications_17_p_0(HeadVarsArgTerms_601, Context_595, Var_617, HLDSGoal0_607, HLDSGoal_20, STATE_VARIABLE_SVarState_55_611, &STATE_VARIABLE_SVarState_62_618, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_54_610, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_56_612, STATE_VARIABLE_Specs_117);
              hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(LocKind_17, STATE_VARIABLE_SVarState_62_618, STATE_VARIABLE_SVarState_107);
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
    MR_hl_field(0, Var_63, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_4[0]));
    MR_hl_field(0, Var_63, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0_1));
    MR_hl_field(0, Var_63, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_63, 3) = ((MR_Box) (Context_28));
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
    MR_Word Goal_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals_36 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
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
      MR_hl_field(0, DisjState_38, 0) = ((MR_Box) (HLDSGoal_46));
      MR_hl_field(0, DisjState_38, 1) = ((MR_Box) (SVarStateAfterDisjunct_47));
    }
    hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(LocKind_1, Goals_36, Renaming_3, &DisjStates_39, HeadVar__5_5, STATE_VARIABLE_SVarStore_58_58, HeadVar__7_7, STATE_VARIABLE_VarSet_59_59, STATE_VARIABLE_VarSet_9, STATE_VARIABLE_ModuleInfo_60_60, STATE_VARIABLE_ModuleInfo_11, STATE_VARIABLE_QualInfo_61_61, STATE_VARIABLE_QualInfo_13, STATE_VARIABLE_Specs_62_62, STATE_VARIABLE_Specs_15);
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
    MR_hl_field(1, ResultVarTerm_39, 1) = ((MR_Box) (Context_28));
  }
  {
    ExcpVarTerm_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ExcpVarTerm_40, 0) = ((MR_Box) (ExcpVar_38));
    MR_hl_field(1, ExcpVarTerm_40, 1) = ((MR_Box) (Context_28));
  }
  {
    NullTupleTerm_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, NullTupleTerm_41, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[3]));
    MR_hl_field(0, NullTupleTerm_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, NullTupleTerm_41, 2) = ((MR_Box) (Context_28));
  }
  hlds__hlds_goal__goal_info_init_2_p_0(Context_28, &GoalInfo_42);
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
    MR_hl_field(1, CallMagicGoal_43, 0) = ((MR_Box) (Context_28));
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
  parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SymName_106, Var_108, Context_28, &Var_75);
  {
    ResultIsSucceededUnifyGoal_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ResultIsSucceededUnifyGoal_44, 0) = ((MR_Box) (Context_28));
    MR_hl_field(0, ResultIsSucceededUnifyGoal_44, 1) = ((MR_Box) (ResultVarTerm_39));
    MR_hl_field(0, ResultIsSucceededUnifyGoal_44, 2) = ((MR_Box) (Var_75));
    MR_hl_field(0, ResultIsSucceededUnifyGoal_44, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  if ((MaybeElseGoal_25 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_80;
    MR_Word Var_84;
    MR_Word Var_85;

    {
      Var_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_80, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_80, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
      MR_hl_field(3, Var_80, 2) = ((MR_Box) (Context_28));
      MR_hl_field(3, Var_80, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_80, 4) = ((MR_Box) (SubGoal_23));
    }
    {
      Var_85 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_85, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_85, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
      MR_hl_field(3, Var_85, 2) = ((MR_Box) (Context_28));
      MR_hl_field(3, Var_85, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_85, 4) = ((MR_Box) (ThenGoal_24));
    }
    {
      Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_84, 0) = ((MR_Box) (Var_85));
      MR_hl_field(1, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      SucceededSubGoal_46 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, SucceededSubGoal_46, 0) = ((MR_Box) (Context_28));
      MR_hl_field(2, SucceededSubGoal_46, 1) = ((MR_Box) (Var_80));
      MR_hl_field(2, SucceededSubGoal_46, 2) = ((MR_Box) (Var_84));
    }
  }
  else
  {
    MR_Word ElseGoal_45 = ((MR_Word) ((MR_hl_field(1, MaybeElseGoal_25, (MR_Integer) 0))));

    {
      SucceededSubGoal_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, SucceededSubGoal_46, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, SucceededSubGoal_46, 1) = ((MR_Box) (Context_28));
      MR_hl_field(3, SucceededSubGoal_46, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, SucceededSubGoal_46, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, SucceededSubGoal_46, 4) = ((MR_Box) (SubGoal_23));
      MR_hl_field(3, SucceededSubGoal_46, 5) = ((MR_Box) (ThenGoal_24));
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
    MR_hl_field(2, ResultIsSucceededDisjunctGoal_47, 0) = ((MR_Box) (Context_28));
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
  parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SymName_118, Var_120, Context_28, &Var_113);
  {
    ResultIsExceptionUnify_111 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ResultIsExceptionUnify_111, 0) = ((MR_Box) (Context_28));
    MR_hl_field(0, ResultIsExceptionUnify_111, 1) = ((MR_Box) (ResultVarTerm_39));
    MR_hl_field(0, ResultIsExceptionUnify_111, 2) = ((MR_Box) (Var_113));
    MR_hl_field(0, ResultIsExceptionUnify_111, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(ResultVarTerm_39, ExcpVarTerm_40, Catches_26, MaybeCatchAny_27, &CatchChain_112);
  {
    Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_116, 0) = ((MR_Box) (CatchChain_112));
    MR_hl_field(1, Var_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    ResultIsExceptionDisjunctGoal_48 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, ResultIsExceptionDisjunctGoal_48, 0) = ((MR_Box) (Context_28));
    MR_hl_field(2, ResultIsExceptionDisjunctGoal_48, 1) = ((MR_Box) (ResultIsExceptionUnify_111));
    MR_hl_field(2, ResultIsExceptionDisjunctGoal_48, 2) = ((MR_Box) (Var_116));
  }
  {
    Var_93 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_93, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_93, 1) = ((MR_Box) (Context_28));
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
    MR_hl_field(2, CallMagicThenDisjunctionGoal_49, 0) = ((MR_Box) (Context_28));
    MR_hl_field(2, CallMagicThenDisjunctionGoal_49, 1) = ((MR_Box) (CallMagicGoal_43));
    MR_hl_field(2, CallMagicThenDisjunctionGoal_49, 2) = ((MR_Box) (Var_92));
  }
  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_22, CallMagicThenDisjunctionGoal_49, Renaming_29, &HLDSCallMagicThenDisjunctionGoal_50, STATE_VARIABLE_SVarState_0_53, STATE_VARIABLE_SVarState_54, STATE_VARIABLE_SVarStore_0_55, STATE_VARIABLE_SVarStore_56, STATE_VARIABLE_VarSet_67_67, STATE_VARIABLE_VarSet_58, STATE_VARIABLE_ModuleInfo_0_59, STATE_VARIABLE_ModuleInfo_60, STATE_VARIABLE_QualInfo_0_61, STATE_VARIABLE_QualInfo_62, STATE_VARIABLE_Specs_0_63, STATE_VARIABLE_Specs_64);
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
    ResultVarTerm_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ResultVarTerm_41, 0) = ((MR_Box) (ResultVar_39));
    MR_hl_field(1, ResultVarTerm_41, 1) = ((MR_Box) (Context_30));
  }
  {
    ExcpVarTerm_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ExcpVarTerm_42, 0) = ((MR_Box) (ExcpVar_40));
    MR_hl_field(1, ExcpVarTerm_42, 1) = ((MR_Box) (Context_30));
  }
  {
    NullTupleTerm_43 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, NullTupleTerm_43, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[3]));
    MR_hl_field(0, NullTupleTerm_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, NullTupleTerm_43, 2) = ((MR_Box) (Context_30));
  }
  hlds__hlds_goal__goal_info_init_2_p_0(Context_30, &GoalInfo_44);
  Var_86 = hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_f_0();
  {
    Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_87, 0) = ((MR_Box) (ResultVarTerm_41));
    MR_hl_field(1, Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    CallMagicGoal_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, CallMagicGoal_45, 0) = ((MR_Box) (Context_30));
    MR_hl_field(1, CallMagicGoal_45, 1) = ((MR_Box) (Var_86));
    MR_hl_field(1, CallMagicGoal_45, 2) = ((MR_Box) (Var_87));
    MR_hl_field(1, CallMagicGoal_45, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_23, CallMagicGoal_45, Renaming_31, &HLDSCallMagicGoal_46, STATE_VARIABLE_SVarState_0_68, &STATE_VARIABLE_SVarState_90_90, STATE_VARIABLE_SVarStore_0_70, &STATE_VARIABLE_SVarStore_91_91, STATE_VARIABLE_VarSet_82_82, &STATE_VARIABLE_VarSet_92_92, STATE_VARIABLE_ModuleInfo_0_74, &STATE_VARIABLE_ModuleInfo_93_93, STATE_VARIABLE_QualInfo_0_76, &STATE_VARIABLE_QualInfo_94_94, STATE_VARIABLE_Specs_0_78, &STATE_VARIABLE_Specs_95_95);
  hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(Context_30, IOStateVar_25, &IOStateVarBefore_47, STATE_VARIABLE_VarSet_92_92, &STATE_VARIABLE_VarSet_96_96, STATE_VARIABLE_SVarState_90_90, &STATE_VARIABLE_SVarState_149_149, STATE_VARIABLE_Specs_95_95, &STATE_VARIABLE_Specs_98_98);
  Var_99 = hlds__make_hlds__goal_expr_to_goal__exception_functor_3_f_0((MR_String) "succeeded", NullTupleTerm_43, Context_30);
  {
    ResultIsSucceededUnifyGoal_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ResultIsSucceededUnifyGoal_49, 0) = ((MR_Box) (Context_30));
    MR_hl_field(0, ResultIsSucceededUnifyGoal_49, 1) = ((MR_Box) (ResultVarTerm_41));
    MR_hl_field(0, ResultIsSucceededUnifyGoal_49, 2) = ((MR_Box) (Var_99));
    MR_hl_field(0, ResultIsSucceededUnifyGoal_49, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_23, ResultIsSucceededUnifyGoal_49, Renaming_31, &HLDSResultIsSucceededUnifyGoal_50, STATE_VARIABLE_SVarState_149_149, &STATE_VARIABLE_SVarState_102_102, STATE_VARIABLE_SVarStore_91_91, &STATE_VARIABLE_SVarStore_103_103, STATE_VARIABLE_VarSet_96_96, &STATE_VARIABLE_VarSet_104_104, STATE_VARIABLE_ModuleInfo_93_93, &STATE_VARIABLE_ModuleInfo_105_105, STATE_VARIABLE_QualInfo_94_94, &STATE_VARIABLE_QualInfo_106_106, STATE_VARIABLE_Specs_98_98, &STATE_VARIABLE_Specs_107_107);
  {
    Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_112, 0) = ((MR_Box) (IOStateVarUnrenamed_24));
    MR_hl_field(1, Var_112, 1) = ((MR_Box) (Context_30));
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
    MR_hl_field(0, Var_108, 2) = ((MR_Box) (Context_30));
  }
  {
    Var_114 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_114, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[1]));
    MR_hl_field(0, Var_114, 1) = ((MR_Box) (Var_111));
    MR_hl_field(0, Var_114, 2) = ((MR_Box) (Context_30));
  }
  {
    IOUnify_51 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, IOUnify_51, 0) = ((MR_Box) (Context_30));
    MR_hl_field(0, IOUnify_51, 1) = ((MR_Box) (Var_108));
    MR_hl_field(0, IOUnify_51, 2) = ((MR_Box) (Var_114));
    MR_hl_field(0, IOUnify_51, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_125, 0) = ((MR_Box) (Goal0_26));
    MR_hl_field(1, Var_125, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_124 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_124, 0) = ((MR_Box) (Context_30));
    MR_hl_field(2, Var_124, 1) = ((MR_Box) (IOUnify_51));
    MR_hl_field(2, Var_124, 2) = ((MR_Box) (Var_125));
  }
  {
    ScopedGoal_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ScopedGoal_52, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, ScopedGoal_52, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
    MR_hl_field(3, ScopedGoal_52, 2) = ((MR_Box) (Context_30));
    MR_hl_field(3, ScopedGoal_52, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, ScopedGoal_52, 4) = ((MR_Box) (Var_124));
  }
  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_23, ScopedGoal_52, Renaming_31, &HLDSScopedGoal_53, STATE_VARIABLE_SVarState_102_102, &STATE_VARIABLE_SVarState_127_127, STATE_VARIABLE_SVarStore_103_103, &STATE_VARIABLE_SVarStore_128_128, STATE_VARIABLE_VarSet_104_104, &STATE_VARIABLE_VarSet_129_129, STATE_VARIABLE_ModuleInfo_105_105, &STATE_VARIABLE_ModuleInfo_130_130, STATE_VARIABLE_QualInfo_106_106, &STATE_VARIABLE_QualInfo_131_131, STATE_VARIABLE_Specs_107_107, &STATE_VARIABLE_Specs_132_132);
  hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(Context_30, IOStateVar_25, &IOStateVarAfter_54, STATE_VARIABLE_VarSet_129_129, &STATE_VARIABLE_VarSet_133_133, STATE_VARIABLE_SVarState_127_127, &STATE_VARIABLE_SVarState_134_134, STATE_VARIABLE_Specs_132_132, &STATE_VARIABLE_Specs_135_135);
  {
    ScopedThenGoal_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ScopedThenGoal_55, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, ScopedThenGoal_55, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
    MR_hl_field(3, ScopedThenGoal_55, 2) = ((MR_Box) (Context_30));
    MR_hl_field(3, ScopedThenGoal_55, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, ScopedThenGoal_55, 4) = ((MR_Box) (Then0_27));
  }
  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_23, ScopedThenGoal_55, Renaming_31, &HLDSScopedThenGoal_56, STATE_VARIABLE_SVarState_134_134, &SVarStateAfterResultIsSucceededDisjunct_58, STATE_VARIABLE_SVarStore_128_128, &STATE_VARIABLE_SVarStore_140_140, STATE_VARIABLE_VarSet_133_133, &STATE_VARIABLE_VarSet_141_141, STATE_VARIABLE_ModuleInfo_130_130, &STATE_VARIABLE_ModuleInfo_142_142, STATE_VARIABLE_QualInfo_131_131, &STATE_VARIABLE_QualInfo_143_143, STATE_VARIABLE_Specs_135_135, &STATE_VARIABLE_Specs_144_144);
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
  hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(ResultVarTerm_41, ExcpVarTerm_42, Catches0_28, MaybeCatchAny0_29, Context_30, &ResultIsExceptionDisjunctGoal_59);
  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_23, ResultIsExceptionDisjunctGoal_59, Renaming_31, &HLDSResultIsExceptionDisjunctGoal_60, STATE_VARIABLE_SVarState_149_149, &SVarStateAfterResultIsExceptionDisjunct_61, STATE_VARIABLE_SVarStore_140_140, &STATE_VARIABLE_SVarStore_151_151, STATE_VARIABLE_VarSet_141_141, &STATE_VARIABLE_VarSet_152_152, STATE_VARIABLE_ModuleInfo_142_142, STATE_VARIABLE_ModuleInfo_75, STATE_VARIABLE_QualInfo_143_143, STATE_VARIABLE_QualInfo_77, STATE_VARIABLE_Specs_144_144, STATE_VARIABLE_Specs_79);
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

  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Goal_20, Renaming_18, &HLDSGoal_27, SVarStateBefore_19, &SVarStateAfterDisjunct_28, STATE_VARIABLE_SVarStore_0_32, STATE_VARIABLE_SVarStore_33, STATE_VARIABLE_VarSet_0_34, STATE_VARIABLE_VarSet_35, STATE_VARIABLE_ModuleInfo_0_36, STATE_VARIABLE_ModuleInfo_37, STATE_VARIABLE_QualInfo_0_38, STATE_VARIABLE_QualInfo_39, STATE_VARIABLE_Specs_0_40, STATE_VARIABLE_Specs_41);
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
  HLDSGoalExpr_31 = ((MR_Word) ((MR_hl_field(0, HLDSGoal_30, (MR_Integer) 0))));
  succeeded = ((((MR_tag((MR_Word) HLDSGoalExpr_31)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HLDSGoalExpr_31, (MR_Integer) 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Var_58 = ((MR_Unsigned) ((MR_hl_field(3, HLDSGoalExpr_31, (MR_Integer) 1))) & (MR_Integer) 1);
    HLDSConjuncts_33 = ((MR_Word) ((MR_hl_field(3, HLDSGoalExpr_31, (MR_Integer) 2))));
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
    LHSTerm_30 = ((MR_Word) ((MR_hl_field(1, ArgTerms0_20, (MR_Integer) 0))));
    Var_57 = ((MR_Word) ((MR_hl_field(1, ArgTerms0_20, (MR_Integer) 1))));
    succeeded = (Var_57 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      RHSTerm_31 = ((MR_Word) ((MR_hl_field(1, Var_57, (MR_Integer) 0))));
      Var_58 = ((MR_Word) ((MR_hl_field(1, Var_57, (MR_Integer) 1))));
      succeeded = (Var_58 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_59 = ((MR_Word) ((MR_hl_field(1, Var_58, (MR_Integer) 1))));
        succeeded = (Var_59 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_60 = ((MR_Word) ((MR_hl_field(1, Var_59, (MR_Integer) 1))));
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
                    Var_61 = ((MR_Word) ((MR_hl_field(0, LHSTerm_30, (MR_Integer) 0))));
                    Var_63 = ((MR_Word) ((MR_hl_field(0, LHSTerm_30, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_61)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_62 = ((MR_String) ((MR_hl_field(0, Var_61, (MR_Integer) 0))));
                      succeeded = (strcmp(Var_62, (MR_String) "^") == 0);
                      if (succeeded)
                      {
                        succeeded = (Var_63 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          FieldNameTerm_34 = ((MR_Word) ((MR_hl_field(1, Var_63, (MR_Integer) 0))));
                          Var_64 = ((MR_Word) ((MR_hl_field(1, Var_63, (MR_Integer) 1))));
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

    switch (AccessType_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ContextPieces_38 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[19]));
        break;
      case (MR_Integer) 1:
        ContextPieces_38 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[21]));
        break;
    }
    hlds__make_hlds__field_access__parse_field_list_4_p_0(FieldNameTerm_34, STATE_VARIABLE_VarSet_0_49, ContextPieces_38, &MaybeFieldNames_39);
    if (((MR_tag((MR_Word) MaybeFieldNames_39)) == (MR_Integer) 0))
    {
      MR_Word FieldNamesSpecs_42 = ((MR_Word) ((MR_hl_field(0, MaybeFieldNames_39, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_Specs_75_75;
      MR_Word HeadVars_109;
      MR_Word GoalExpr_112;
      MR_Word Var_113;
      MR_Integer Var_114;
      MR_Word _HeadVarsArgs0_110;

      STATE_VARIABLE_Specs_75_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), FieldNamesSpecs_42, STATE_VARIABLE_Specs_0_55);
      hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_9_p_0(ArgTerms0_20, &HeadVars_109, &_HeadVarsArgs0_110, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_SVarState_0_45, STATE_VARIABLE_SVarState_46, STATE_VARIABLE_Specs_75_75, STATE_VARIABLE_Specs_56);
      Var_113 = hlds__hlds_pred__invalid_pred_id_0_f_0();
      Var_114 = hlds__hlds_pred__invalid_proc_id_0_f_0();
      {
        GoalExpr_112 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, GoalExpr_112, 0) = ((MR_Box) (Var_113));
        MR_hl_field(2, GoalExpr_112, 1) = ((MR_Box) (Var_114));
        MR_hl_field(2, GoalExpr_112, 2) = ((MR_Box) (HeadVars_109));
        MR_hl_field(2, GoalExpr_112, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(2, GoalExpr_112, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(2, GoalExpr_112, 5) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[5]));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *HLDSGoal_22 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_112));
        MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_29));
      }
      hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 1, STATE_VARIABLE_QualInfo_0_53, STATE_VARIABLE_QualInfo_54);
      *STATE_VARIABLE_SVarStore_48 = STATE_VARIABLE_SVarStore_0_47;
      *STATE_VARIABLE_ModuleInfo_52 = STATE_VARIABLE_ModuleInfo_0_51;
    }
    else
    {
      MR_Word FieldNames_40 = ((MR_Word) ((MR_hl_field(1, MaybeFieldNames_39, (MR_Integer) 0))));
      MR_Word ArgTerms_41;
      MR_Word STATE_VARIABLE_SVarState_68_68;

      {
        ArgTerms_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ArgTerms_41, 0) = ((MR_Box) (FieldValueTerm_35));
        MR_hl_field(1, ArgTerms_41, 1) = ((MR_Box) (Var_58));
      }
      hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_p_0(AccessType_19, FieldNames_40, ArgTerms_41, Context_21, HLDSGoal_22, STATE_VARIABLE_SVarState_0_45, &STATE_VARIABLE_SVarState_68_68, STATE_VARIABLE_SVarStore_0_47, STATE_VARIABLE_SVarStore_48, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_ModuleInfo_0_51, STATE_VARIABLE_ModuleInfo_52, STATE_VARIABLE_QualInfo_0_53, STATE_VARIABLE_QualInfo_54, STATE_VARIABLE_Specs_0_55, STATE_VARIABLE_Specs_56);
      hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(LocKind_18, STATE_VARIABLE_SVarState_68_68, STATE_VARIABLE_SVarState_46);
    }
  }
  else
  {
    MR_Word Spec_44;
    MR_Word STATE_VARIABLE_Specs_85_85;
    MR_Word HeadVars_117;
    MR_Word GoalExpr_120;
    MR_Word Var_121;
    MR_Integer Var_122;
    MR_Word _HeadVarsArgs0_118;

    hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_9_p_0(ArgTerms0_20, &HeadVars_117, &_HeadVarsArgs0_118, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_SVarState_0_45, STATE_VARIABLE_SVarState_46, STATE_VARIABLE_Specs_0_55, &STATE_VARIABLE_Specs_85_85);
    Var_121 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    Var_122 = hlds__hlds_pred__invalid_proc_id_0_f_0();
    {
      GoalExpr_120 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, GoalExpr_120, 0) = ((MR_Box) (Var_121));
      MR_hl_field(2, GoalExpr_120, 1) = ((MR_Box) (Var_122));
      MR_hl_field(2, GoalExpr_120, 2) = ((MR_Box) (HeadVars_117));
      MR_hl_field(2, GoalExpr_120, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(2, GoalExpr_120, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, GoalExpr_120, 5) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[5]));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HLDSGoal_22 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_120));
      MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_29));
    }
    hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 1, STATE_VARIABLE_QualInfo_0_53, STATE_VARIABLE_QualInfo_54);
    {
      Spec_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_44, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax\'/17"));
      MR_hl_field(1, Spec_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_44, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(1, Spec_44, 3) = ((MR_Box) (Context_21));
      MR_hl_field(1, Spec_44, 4) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[17])));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_56 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_44));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_85_85));
    }
    *STATE_VARIABLE_ModuleInfo_52 = STATE_VARIABLE_ModuleInfo_0_51;
    *STATE_VARIABLE_SVarStore_48 = STATE_VARIABLE_SVarStore_0_47;
  }
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
    MR_Word Var_154 = ((MR_Word) ((MR_hl_field(1, ArgVarsTerms_30, (MR_Integer) 1))));
    MR_Word Var_155 = ((MR_Word) ((MR_hl_field(1, ArgVarsTerms_30, (MR_Integer) 0))));

    if ((Var_154 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "arity != 3");
        return;
      }
    else
    {
      MR_Word Var_156 = ((MR_Word) ((MR_hl_field(1, Var_154, (MR_Integer) 1))));
      MR_Word Var_157 = ((MR_Word) ((MR_hl_field(1, Var_154, (MR_Integer) 0))));

      if ((Var_156 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "arity != 3");
          return;
        }
      else
      {
        MR_Word Var_158 = ((MR_Word) ((MR_hl_field(1, Var_156, (MR_Integer) 1))));
        MR_Word Var_159 = ((MR_Word) ((MR_hl_field(1, Var_156, (MR_Integer) 0))));

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
        InnermostFunctor_140 = ((MR_Word) ((MR_hl_field(0, Var_115, (MR_Integer) 0))));
        succeeded = ((((MR_tag((MR_Word) InnermostFunctor_140)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, InnermostFunctor_140, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (succeeded)
        {
          ConsNamePrime_138 = ((MR_Word) ((MR_hl_field(3, InnermostFunctor_140, (MR_Integer) 1))));
          ConsArityPrime_139 = ((MR_Integer) ((MR_hl_field(3, InnermostFunctor_140, (MR_Integer) 2))));
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
          MR_hl_field(0, PFSymNameArity_145, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(0, PFSymNameArity_145, 1) = ((MR_Box) (ConsName_143));
          MR_hl_field(0, PFSymNameArity_145, 2) = ((MR_Box) (Var_125));
        }
        FieldArgNumber_54 = (MR_Integer) 2;
        {
          Var_126 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_126, 0) = ((MR_Box) (PFSymNameArity_145));
        }
        {
          FieldArgContext_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, FieldArgContext_55, 0) = ((MR_Box) (Var_126));
        }
        OutputTermArgNumber_62 = (MR_Integer) 3;
        {
          OutputTermArgContext_63 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, OutputTermArgContext_63, 0) = ((MR_Box) (Functor_50));
          MR_hl_field(2, OutputTermArgContext_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, OutputTermArgContext_63, 2) = ((MR_Box) ((MR_Unsigned) 0U));
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
        InnermostFunctor_51 = ((MR_Word) ((MR_hl_field(0, Var_100, (MR_Integer) 0))));
        InnermostSubContext_52 = ((MR_Word) ((MR_hl_field(0, Var_100, (MR_Integer) 1))));
        FieldArgNumber_54 = (MR_Integer) 2;
        {
          FieldArgContext_55 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, FieldArgContext_55, 0) = ((MR_Box) (InnermostFunctor_51));
          MR_hl_field(2, FieldArgContext_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, FieldArgContext_55, 2) = ((MR_Box) (InnermostSubContext_52));
        }
        succeeded = ((((MR_tag((MR_Word) Functor_50)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Functor_50, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (succeeded)
        {
          ConsNamePrime_56 = ((MR_Word) ((MR_hl_field(3, Functor_50, (MR_Integer) 1))));
          ConsArityPrime_57 = ((MR_Integer) ((MR_hl_field(3, Functor_50, (MR_Integer) 2))));
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
          MR_hl_field(0, PFSymNameArity_61, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(0, PFSymNameArity_61, 1) = ((MR_Box) (ConsName_59));
          MR_hl_field(0, PFSymNameArity_61, 2) = ((MR_Box) (Var_111));
        }
        OutputTermArgNumber_62 = (MR_Integer) 3;
        {
          Var_112 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_112, 0) = ((MR_Box) (PFSymNameArity_61));
        }
        {
          OutputTermArgContext_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, OutputTermArgContext_63, 0) = ((MR_Box) (Var_112));
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
    FieldValueVTNC_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FieldValueVTNC_66, 0) = ((MR_Box) (FieldValueVar_42));
    MR_hl_field(0, FieldValueVTNC_66, 1) = ((MR_Box) (FieldValueTerm_43));
    MR_hl_field(0, FieldValueVTNC_66, 2) = ((MR_Box) (FieldArgNumber_54));
    MR_hl_field(0, FieldValueVTNC_66, 3) = ((MR_Box) (FieldArgContext_55));
  }
  {
    TermInputVTNC_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TermInputVTNC_67, 0) = ((MR_Box) (TermInputVar_44));
    MR_hl_field(0, TermInputVTNC_67, 1) = ((MR_Box) (TermInputTerm_45));
    MR_hl_field(0, TermInputVTNC_67, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, TermInputVTNC_67, 3) = ((MR_Box) (InputTermArgContext_49));
  }
  {
    TermOutputVTNC_68 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TermOutputVTNC_68, 0) = ((MR_Box) (TermOutputVar_46));
    MR_hl_field(0, TermOutputVTNC_68, 1) = ((MR_Box) (TermOutputTerm_47));
    MR_hl_field(0, TermOutputVTNC_68, 2) = ((MR_Box) (OutputTermArgNumber_62));
    MR_hl_field(0, TermOutputVTNC_68, 3) = ((MR_Box) (OutputTermArgContext_63));
  }
  {
    Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_130, 0) = ((MR_Box) (TermOutputVTNC_68));
    MR_hl_field(1, Var_130, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_129, 0) = ((MR_Box) (TermInputVTNC_67));
    MR_hl_field(1, Var_129, 1) = ((MR_Box) (Var_130));
  }
  {
    ArgVarsTermsNumsContexts_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArgVarsTermsNumsContexts_69, 0) = ((MR_Box) (FieldValueVTNC_66));
    MR_hl_field(1, ArgVarsTermsNumsContexts_69, 1) = ((MR_Box) (Var_129));
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
