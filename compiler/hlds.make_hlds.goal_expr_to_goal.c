/*
** Automatically generated from `goal_expr_to_goal.m'
** by the Mercury compiler,
** version rotd-2025-03-12
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
#include "hlds.hlds_markers.mih"
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

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__goal_expr_to_goal__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__list__pti_list_1__plain_hlds__make_hlds__state_var__type_ctor_info_hlds_goal_svar_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

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
hlds__make_hlds__goal_expr_to_goal__transform_state_var_field_assign_14_p_0(
  MR_Word LocKind_15,
  MR_Word Renaming_16,
  MR_Word Purity_17,
  MR_Word RHSTerm0_18,
  MR_Word StateVarNameTerms_19,
  MR_Word Remainder_20,
  MR_Word FieldListContext_21,
  MR_Word StateVarContext_22,
  MR_Word Context_23,
  MR_Word * HLDSGoal_24,
  MR_Word STATE_VARIABLE_SVarState_0_32,
  MR_Word * STATE_VARIABLE_SVarState_33,
  MR_Word STATE_VARIABLE_UrInfo_0_34,
  MR_Word * STATE_VARIABLE_UrInfo_35);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_14_p_0(
  MR_Word LocKind_15,
  MR_Word Renaming_16,
  MR_Word Vars0_17,
  MR_Word StateVars0_18,
  MR_Word DotSVars0_19,
  MR_Word ColonSVars0_20,
  MR_Word Context_21,
  MR_Word * QuantVars_22,
  MR_Word Goal_23,
  MR_Word * HLDSGoal_24,
  MR_Word STATE_VARIABLE_SVarState_0_35,
  MR_Word * STATE_VARIABLE_SVarState_36,
  MR_Word STATE_VARIABLE_UrInfo_0_37,
  MR_Word * STATE_VARIABLE_UrInfo_38);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_7_p_0(
  MR_Word LocKind_1,
  MR_Word Renaming_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_UrInfo_0_6,
  MR_Word * STATE_VARIABLE_UrInfo_7);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_13_p_0(
  MR_Word LocKind_14,
  MR_Word Renaming_15,
  MR_Word SubGoal_16,
  MR_Word ThenGoal_17,
  MR_Word MaybeElseGoal_18,
  MR_Word Catches_19,
  MR_Word MaybeCatchAny_20,
  MR_Word Context_21,
  MR_Word * TryGoal_22,
  MR_Word STATE_VARIABLE_SVarState_0_41,
  MR_Word * STATE_VARIABLE_SVarState_42,
  MR_Word STATE_VARIABLE_UrInfo_0_43,
  MR_Word * STATE_VARIABLE_UrInfo_44);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_14_p_0(
  MR_Word LocKind_15,
  MR_Word Renaming_16,
  MR_Word IOStateVarUnrenamed_17,
  MR_Word IOStateVar_18,
  MR_Word Goal0_19,
  MR_Word Then0_20,
  MR_Word Catches0_21,
  MR_Word MaybeCatchAny0_22,
  MR_Word Context_23,
  MR_Word * TryGoal_24,
  MR_Word STATE_VARIABLE_SVarState_0_56,
  MR_Word * STATE_VARIABLE_SVarState_57,
  MR_Word STATE_VARIABLE_UrInfo_0_58,
  MR_Word * STATE_VARIABLE_UrInfo_59);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__accumulate_disjunct_8_p_0(
  MR_Word LocKind_9,
  MR_Word Renaming_10,
  MR_Word SVarStateBefore_11,
  MR_Word Goal_12,
  MR_Word STATE_VARIABLE_RevDisjStates_0_18,
  MR_Word * STATE_VARIABLE_RevDisjStates_19,
  MR_Word STATE_VARIABLE_UrInfo_0_20,
  MR_Word * STATE_VARIABLE_UrInfo_21);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__accumulate_plain_or_par_conjunct_10_p_0(
  MR_Word LocKind_11,
  MR_Word Renaming_12,
  MR_Word ConjType_13,
  MR_Word Goal_14,
  MR_Word STATE_VARIABLE_HLDSConjunctsCord_0_22,
  MR_Word * STATE_VARIABLE_HLDSConjunctsCord_23,
  MR_Word STATE_VARIABLE_SVarState_0_24,
  MR_Word * STATE_VARIABLE_SVarState_25,
  MR_Word STATE_VARIABLE_UrInfo_0_26,
  MR_Word * STATE_VARIABLE_UrInfo_27);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__rename_and_maybe_expand_dot_var_9_p_0(
  MR_Word Context_10,
  MR_Word MustRename_11,
  MR_Word Renaming_12,
  MR_Word PODVar0_13,
  MR_Word * Var_14,
  MR_Word STATE_VARIABLE_SVarState_0_20,
  MR_Word * STATE_VARIABLE_SVarState_21,
  MR_Word STATE_VARIABLE_UrInfo_0_22,
  MR_Word * STATE_VARIABLE_UrInfo_23);

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
hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_10_p_0(
  MR_Word LocKind_11,
  MR_Word Renaming_12,
  MR_Word AccessType_13,
  MR_Word ArgTerms0_14,
  MR_Word Context_15,
  MR_Word * HLDSGoal_16,
  MR_Word STATE_VARIABLE_SVarState_0_44,
  MR_Word * STATE_VARIABLE_SVarState_45,
  MR_Word STATE_VARIABLE_UrInfo_0_46,
  MR_Word * STATE_VARIABLE_UrInfo_47);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__invalid_goal_8_p_0(
  MR_String UpdateStr_9,
  MR_Word Args0_10,
  MR_Word GoalInfo_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_SVarState_0_19,
  MR_Word * STATE_VARIABLE_SVarState_20,
  MR_Word STATE_VARIABLE_UrInfo_0_21,
  MR_Word * STATE_VARIABLE_UrInfo_22);

static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__dcg_field_error_context_pieces_1_f_0(
  MR_Word AccessType_3);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_9_p_0(
  MR_Word AccessType_10,
  MR_Word FieldNames_11,
  MR_Word ArgTerms_12,
  MR_Word Context_13,
  MR_Word * HLDSGoal_14,
  MR_Word STATE_VARIABLE_SVarState_0_56,
  MR_Word * STATE_VARIABLE_SVarState_57,
  MR_Word STATE_VARIABLE_UrInfo_0_58,
  MR_Word * STATE_VARIABLE_UrInfo_59);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_call_std_10_p_0(
  MR_Word Context_11,
  MR_Word Renaming_12,
  MR_Word SymName_13,
  MR_Word ArgTerms1_14,
  MR_Word Purity_15,
  MR_Word * HLDSGoal_16,
  MR_Word STATE_VARIABLE_SVarState_0_42,
  MR_Word * STATE_VARIABLE_SVarState_43,
  MR_Word STATE_VARIABLE_UrInfo_0_44,
  MR_Word * STATE_VARIABLE_UrInfo_45);

static MR_bool MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Unify____loc_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Compare____loc_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_1[51][2];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_2[1][3];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_3[6][1];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_4[1][10];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_5[1][13];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_6[2][11];




static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_1[51][2] = {
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
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_hlds_goal_svar_state_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "to have the form"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: expected DCG field selection goal"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[6])))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    ((MR_Box) ((MR_String) "FieldValue =^ field1 ^ ... ^ fieldN"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[10])))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: expected"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    ((MR_Box) ((MR_String) "^ field1 ^ ... ^ fieldN"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in DCG field update goal, got"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ":="))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[19])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "on the left hand side of"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[21])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: expected DCG field update goal"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[6])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    ((MR_Box) ((MR_String) "^ field1 ^ ... ^ fieldN := FieldValue"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[10])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In DCG field extraction goal:"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[13])))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In DCG field update goal:"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[13])))
  },
  /* row  32 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[33]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "parameter"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[35]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "io"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[36])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "with an"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[38])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "goal"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[40])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "try"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[42])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "part."))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[45]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "else"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[46])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "cannot have an"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[48])))
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

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_4[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_unravel_info_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_unravel_info_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_5[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__type_ctor_info_loc_kind_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_conj_type_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__cord__pti_cord_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_unravel_info_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_unravel_info_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_6[2][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__type_ctor_info_loc_kind_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__list__pti_list_1__plain_hlds__make_hlds__state_var__type_ctor_info_hlds_goal_svar_state_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__list__pti_list_1__plain_hlds__make_hlds__state_var__type_ctor_info_hlds_goal_svar_state_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_unravel_info_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_unravel_info_0))
  },
  /* row   1 */
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

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
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
hlds__make_hlds__goal_expr_to_goal__transform_state_var_field_assign_14_p_0(
  MR_Word LocKind_15,
  MR_Word Renaming_16,
  MR_Word Purity_17,
  MR_Word RHSTerm0_18,
  MR_Word StateVarNameTerms_19,
  MR_Word Remainder_20,
  MR_Word FieldListContext_21,
  MR_Word StateVarContext_22,
  MR_Word Context_23,
  MR_Word * HLDSGoal_24,
  MR_Word STATE_VARIABLE_SVarState_0_32,
  MR_Word * STATE_VARIABLE_SVarState_33,
  MR_Word STATE_VARIABLE_UrInfo_0_34,
  MR_Word * STATE_VARIABLE_UrInfo_35)
{
  MR_Word LHSTerm_27;
  MR_Word StateVar_28;
  MR_Word FieldList_29;
  MR_Word RHSTerm_30;
  MR_Word TransformedGoal_31;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_47;
  MR_Word Var_48;

  {
    LHSTerm_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LHSTerm_27, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[0]));
    MR_hl_field(0, LHSTerm_27, 1) = ((MR_Box) (StateVarNameTerms_19));
    MR_hl_field(0, LHSTerm_27, 2) = ((MR_Box) (StateVarContext_22));
  }
  {
    StateVar_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, StateVar_28, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[1]));
    MR_hl_field(0, StateVar_28, 1) = ((MR_Box) (StateVarNameTerms_19));
    MR_hl_field(0, StateVar_28, 2) = ((MR_Box) (StateVarContext_22));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (Remainder_20));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) (StateVar_28));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_43));
  }
  {
    FieldList_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FieldList_29, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[2]));
    MR_hl_field(0, FieldList_29, 1) = ((MR_Box) (Var_42));
    MR_hl_field(0, FieldList_29, 2) = ((MR_Box) (FieldListContext_21));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (RHSTerm0_18));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (FieldList_29));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_48));
  }
  {
    RHSTerm_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RHSTerm_30, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[3]));
    MR_hl_field(0, RHSTerm_30, 1) = ((MR_Box) (Var_47));
    MR_hl_field(0, RHSTerm_30, 2) = ((MR_Box) (Context_23));
  }
  {
    TransformedGoal_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TransformedGoal_31, 0) = ((MR_Box) (Context_23));
    MR_hl_field(0, TransformedGoal_31, 1) = ((MR_Box) (LHSTerm_27));
    MR_hl_field(0, TransformedGoal_31, 2) = ((MR_Box) (RHSTerm_30));
    MR_hl_field(0, TransformedGoal_31, 3) = (MR_Box) ((MR_Unsigned) (Purity_17));
  }
  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0(LocKind_15, Renaming_16, TransformedGoal_31, HLDSGoal_24, STATE_VARIABLE_SVarState_0_32, STATE_VARIABLE_SVarState_33, STATE_VARIABLE_UrInfo_0_34, STATE_VARIABLE_UrInfo_35);
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv19_MutableHLDS_13;
  MR_Word conv18_StateVar_14;
  MR_Word conv17_GetGoal_15;
  MR_Word conv16_SetGoal_16;

  hlds__make_hlds__goal_expr_to_goal__extract_trace_mutable_var_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv19_MutableHLDS_13, &conv18_StateVar_14, &conv17_GetGoal_15, &conv16_SetGoal_16);
  *wrapper_arg_2 = ((MR_Box) (conv19_MutableHLDS_13));
  *wrapper_arg_3 = ((MR_Box) (conv18_StateVar_14));
  *wrapper_arg_4 = ((MR_Box) (conv17_GetGoal_15));
  *wrapper_arg_5 = ((MR_Box) (conv16_SetGoal_16));
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_STATE_VARIABLE_HLDSConjunctsCord_23;
  MR_Word conv11_STATE_VARIABLE_SVarState_25;
  MR_Word conv10_STATE_VARIABLE_UrInfo_27;

  hlds__make_hlds__goal_expr_to_goal__accumulate_plain_or_par_conjunct_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_HLDSConjunctsCord_23, ((MR_Word) (wrapper_arg_4)), &conv11_STATE_VARIABLE_SVarState_25, ((MR_Word) (wrapper_arg_6)), &conv10_STATE_VARIABLE_UrInfo_27);
  *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_HLDSConjunctsCord_23));
  *wrapper_arg_5 = ((MR_Box) (conv11_STATE_VARIABLE_SVarState_25));
  *wrapper_arg_7 = ((MR_Box) (conv10_STATE_VARIABLE_UrInfo_27));
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_RevDisjStates_19;
  MR_Word conv6_STATE_VARIABLE_UrInfo_21;

  hlds__make_hlds__goal_expr_to_goal__accumulate_disjunct_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_RevDisjStates_19, ((MR_Word) (wrapper_arg_4)), &conv6_STATE_VARIABLE_UrInfo_21);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_RevDisjStates_19));
  *wrapper_arg_5 = ((MR_Box) (conv6_STATE_VARIABLE_UrInfo_21));
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_HLDSConjunctsCord_23;
  MR_Word conv1_STATE_VARIABLE_SVarState_25;
  MR_Word conv0_STATE_VARIABLE_UrInfo_27;

  hlds__make_hlds__goal_expr_to_goal__accumulate_plain_or_par_conjunct_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_HLDSConjunctsCord_23, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_SVarState_25, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_UrInfo_27);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_HLDSConjunctsCord_23));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_SVarState_25));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_UrInfo_27));
}

void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0(
  MR_Word LocKind_9,
  MR_Word Renaming_10,
  MR_Word Goal_11,
  MR_Word * HLDSGoal_12,
  MR_Word STATE_VARIABLE_SVarState_0_94,
  MR_Word * STATE_VARIABLE_SVarState_95,
  MR_Word STATE_VARIABLE_UrInfo_0_96,
  MR_Word * STATE_VARIABLE_UrInfo_97)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Goal_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Context_646 = ((MR_Word) ((MR_hl_field(0, Goal_11, (MR_Integer) 0))));
          MR_Word TermA0_647 = ((MR_Word) ((MR_hl_field(0, Goal_11, (MR_Integer) 1))));
          MR_Word TermB0_648 = ((MR_Word) ((MR_hl_field(0, Goal_11, (MR_Integer) 2))));
          MR_Word Purity_649 = ((MR_Unsigned) ((MR_hl_field(0, Goal_11, (MR_Integer) 3))) & (MR_Integer) 3);
          MR_Word TermA_650;
          MR_Word TermB_651;
          MR_Word StateVarA_652;
          MR_Word Var_662;
          MR_String Var_663;
          MR_Word Var_664;
          MR_Word Var_665;
          MR_Word Var_666;

          parse_tree__prog_rename__rename_vars_in_term_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_10, TermA0_647, &TermA_650);
          parse_tree__prog_rename__rename_vars_in_term_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_10, TermB0_648, &TermB_651);
          succeeded = ((MR_tag((MR_Word) TermA_650)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_662 = ((MR_Word) ((MR_hl_field(0, TermA_650, (MR_Integer) 0))));
            Var_664 = ((MR_Word) ((MR_hl_field(0, TermA_650, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Var_662)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_663 = ((MR_String) ((MR_hl_field(0, Var_662, (MR_Integer) 0))));
              succeeded = (strcmp(Var_663, (MR_String) "!") == 0);
              if (succeeded)
              {
                succeeded = (Var_664 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_665 = ((MR_Word) ((MR_hl_field(1, Var_664, (MR_Integer) 0))));
                  Var_666 = ((MR_Word) ((MR_hl_field(1, Var_664, (MR_Integer) 1))));
                  succeeded = (Var_666 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) Var_665)) == (MR_Integer) 1);
                    if (succeeded)
                      StateVarA_652 = ((MR_Word) ((MR_hl_field(1, Var_665, (MR_Integer) 0))));
                  }
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word STATE_VARIABLE_SVarState_40_667;
            MR_Word STATE_VARIABLE_UrInfo_41_668;
            MR_Word StateVarB_655;
            MR_Word Var_669;
            MR_String Var_670;
            MR_Word Var_671;
            MR_Word Var_672;
            MR_Word Var_673;

            hlds__make_hlds__state_var__report_svar_unify_error_6_p_0(Context_646, StateVarA_652, STATE_VARIABLE_SVarState_0_94, &STATE_VARIABLE_SVarState_40_667, STATE_VARIABLE_UrInfo_0_96, &STATE_VARIABLE_UrInfo_41_668);
            succeeded = ((MR_tag((MR_Word) TermB_651)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_669 = ((MR_Word) ((MR_hl_field(0, TermB_651, (MR_Integer) 0))));
              Var_671 = ((MR_Word) ((MR_hl_field(0, TermB_651, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_669)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_670 = ((MR_String) ((MR_hl_field(0, Var_669, (MR_Integer) 0))));
                succeeded = (strcmp(Var_670, (MR_String) "!") == 0);
                if (succeeded)
                {
                  succeeded = (Var_671 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_672 = ((MR_Word) ((MR_hl_field(1, Var_671, (MR_Integer) 0))));
                    Var_673 = ((MR_Word) ((MR_hl_field(1, Var_671, (MR_Integer) 1))));
                    succeeded = (Var_673 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) Var_672)) == (MR_Integer) 1);
                      if (succeeded)
                        StateVarB_655 = ((MR_Word) ((MR_hl_field(1, Var_672, (MR_Integer) 0))));
                    }
                  }
                }
              }
            }
            if (succeeded)
              hlds__make_hlds__state_var__report_svar_unify_error_6_p_0(Context_646, StateVarB_655, STATE_VARIABLE_SVarState_40_667, STATE_VARIABLE_SVarState_95, STATE_VARIABLE_UrInfo_41_668, STATE_VARIABLE_UrInfo_97);
            else
            {
              *STATE_VARIABLE_UrInfo_97 = STATE_VARIABLE_UrInfo_41_668;
              *STATE_VARIABLE_SVarState_95 = STATE_VARIABLE_SVarState_40_667;
            }
            *HLDSGoal_12 = hlds__make_goal__true_goal_with_context_1_f_0(Context_646);
          }
          else
          {
            MR_Word StateVarB_682;
            MR_Word Var_674;
            MR_String Var_675;
            MR_Word Var_676;
            MR_Word Var_677;
            MR_Word Var_678;

            succeeded = ((MR_tag((MR_Word) TermB_651)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_674 = ((MR_Word) ((MR_hl_field(0, TermB_651, (MR_Integer) 0))));
              Var_676 = ((MR_Word) ((MR_hl_field(0, TermB_651, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_674)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_675 = ((MR_String) ((MR_hl_field(0, Var_674, (MR_Integer) 0))));
                succeeded = (strcmp(Var_675, (MR_String) "!") == 0);
                if (succeeded)
                {
                  succeeded = (Var_676 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_677 = ((MR_Word) ((MR_hl_field(1, Var_676, (MR_Integer) 0))));
                    Var_678 = ((MR_Word) ((MR_hl_field(1, Var_676, (MR_Integer) 1))));
                    succeeded = (Var_678 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) Var_677)) == (MR_Integer) 1);
                      if (succeeded)
                        StateVarB_682 = ((MR_Word) ((MR_hl_field(1, Var_677, (MR_Integer) 0))));
                    }
                  }
                }
              }
            }
            if (succeeded)
            {
              hlds__make_hlds__state_var__report_svar_unify_error_6_p_0(Context_646, StateVarB_682, STATE_VARIABLE_SVarState_0_94, STATE_VARIABLE_SVarState_95, STATE_VARIABLE_UrInfo_0_96, STATE_VARIABLE_UrInfo_97);
              *HLDSGoal_12 = hlds__make_goal__true_goal_with_context_1_f_0(Context_646);
            }
            else
            {
              MR_Word STATE_VARIABLE_SVarState_58_681;

              hlds__make_hlds__superhomogeneous__unravel_unification_11_p_0(TermA_650, TermB_651, Context_646, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Purity_649, HLDSGoal_12, STATE_VARIABLE_SVarState_0_94, &STATE_VARIABLE_SVarState_58_681, STATE_VARIABLE_UrInfo_0_96, STATE_VARIABLE_UrInfo_97);
              hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(LocKind_9, STATE_VARIABLE_SVarState_58_681, STATE_VARIABLE_SVarState_95);
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Context_313 = ((MR_Word) ((MR_hl_field(1, Goal_11, (MR_Integer) 0))));
          MR_Word SymName_314 = ((MR_Word) ((MR_hl_field(1, Goal_11, (MR_Integer) 1))));
          MR_Word ArgTerms0_315 = ((MR_Word) ((MR_hl_field(1, Goal_11, (MR_Integer) 2))));
          MR_Word Purity_316 = ((MR_Unsigned) ((MR_hl_field(1, Goal_11, (MR_Integer) 3))) & (MR_Integer) 3);
          MR_Word ArgTerms1_317;
          MR_Word STATE_VARIABLE_SVarState_40_334;
          MR_String Name_318;

          hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(ArgTerms0_315, &ArgTerms1_317);
          succeeded = ((MR_tag((MR_Word) SymName_314)) == (MR_Integer) 0);
          if (succeeded)
          {
            Name_318 = ((MR_String) ((MR_hl_field(0, SymName_314, (MR_Integer) 0))));
            if ((strcmp(Name_318, (MR_String) ":=") == 0))
              succeeded = MR_TRUE;
            else
            if ((strcmp(Name_318, (MR_String) "=^") == 0))
              succeeded = MR_TRUE;
            else
            if ((strcmp(Name_318, (MR_String) "\\=") == 0))
              succeeded = MR_TRUE;
            else
              succeeded = MR_FALSE;
          }
          if (succeeded)
            if ((strcmp(Name_318, (MR_String) ":=") == 0))
            {
              MR_Word RHSTerm0_323;
              MR_Word Remainder_325;
              MR_Word FieldListContext_326;
              MR_Word StateVarNameTerms_327;
              MR_Word StateVarContext_328;
              MR_Word LHSTerm0_322;
              MR_Word StateVar0_324;
              MR_Word Var_335;
              MR_Word Var_336;
              MR_Word Var_337;
              MR_String Var_338;
              MR_Word Var_339;
              MR_Word Var_340;
              MR_Word Var_341;
              MR_Word Var_342;
              MR_String Var_343;
              MR_Word Var_344;
              MR_Word Var_345;

              succeeded = (ArgTerms1_317 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                LHSTerm0_322 = ((MR_Word) ((MR_hl_field(1, ArgTerms1_317, (MR_Integer) 0))));
                Var_335 = ((MR_Word) ((MR_hl_field(1, ArgTerms1_317, (MR_Integer) 1))));
                succeeded = (Var_335 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  RHSTerm0_323 = ((MR_Word) ((MR_hl_field(1, Var_335, (MR_Integer) 0))));
                  Var_336 = ((MR_Word) ((MR_hl_field(1, Var_335, (MR_Integer) 1))));
                  succeeded = (Var_336 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) LHSTerm0_322)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_337 = ((MR_Word) ((MR_hl_field(0, LHSTerm0_322, (MR_Integer) 0))));
                      Var_339 = ((MR_Word) ((MR_hl_field(0, LHSTerm0_322, (MR_Integer) 1))));
                      FieldListContext_326 = ((MR_Word) ((MR_hl_field(0, LHSTerm0_322, (MR_Integer) 2))));
                      succeeded = ((MR_tag((MR_Word) Var_337)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        Var_338 = ((MR_String) ((MR_hl_field(0, Var_337, (MR_Integer) 0))));
                        succeeded = (strcmp(Var_338, (MR_String) "^") == 0);
                        if (succeeded)
                        {
                          succeeded = (Var_339 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            StateVar0_324 = ((MR_Word) ((MR_hl_field(1, Var_339, (MR_Integer) 0))));
                            Var_340 = ((MR_Word) ((MR_hl_field(1, Var_339, (MR_Integer) 1))));
                            succeeded = (Var_340 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              Remainder_325 = ((MR_Word) ((MR_hl_field(1, Var_340, (MR_Integer) 0))));
                              Var_341 = ((MR_Word) ((MR_hl_field(1, Var_340, (MR_Integer) 1))));
                              succeeded = (Var_341 == (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                succeeded = ((MR_tag((MR_Word) StateVar0_324)) == (MR_Integer) 0);
                                if (succeeded)
                                {
                                  Var_342 = ((MR_Word) ((MR_hl_field(0, StateVar0_324, (MR_Integer) 0))));
                                  StateVarNameTerms_327 = ((MR_Word) ((MR_hl_field(0, StateVar0_324, (MR_Integer) 1))));
                                  StateVarContext_328 = ((MR_Word) ((MR_hl_field(0, StateVar0_324, (MR_Integer) 2))));
                                  succeeded = ((MR_tag((MR_Word) Var_342)) == (MR_Integer) 0);
                                  if (succeeded)
                                  {
                                    Var_343 = ((MR_String) ((MR_hl_field(0, Var_342, (MR_Integer) 0))));
                                    succeeded = (strcmp(Var_343, (MR_String) "!") == 0);
                                    if (succeeded)
                                    {
                                      succeeded = (StateVarNameTerms_327 != (MR_Word) ((MR_Unsigned) 0U));
                                      if (succeeded)
                                      {
                                        Var_344 = ((MR_Word) ((MR_hl_field(1, StateVarNameTerms_327, (MR_Integer) 0))));
                                        Var_345 = ((MR_Word) ((MR_hl_field(1, StateVarNameTerms_327, (MR_Integer) 1))));
                                        succeeded = ((MR_tag((MR_Word) Var_344)) == (MR_Integer) 1);
                                        if (succeeded)
                                          succeeded = (Var_345 == (MR_Word) ((MR_Unsigned) 0U));
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
                hlds__make_hlds__goal_expr_to_goal__transform_state_var_field_assign_14_p_0(LocKind_9, Renaming_10, Purity_316, RHSTerm0_323, StateVarNameTerms_327, Remainder_325, FieldListContext_326, StateVarContext_328, Context_313, HLDSGoal_12, STATE_VARIABLE_SVarState_0_94, &STATE_VARIABLE_SVarState_40_334, STATE_VARIABLE_UrInfo_0_96, STATE_VARIABLE_UrInfo_97);
              else
                hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_10_p_0(LocKind_9, Renaming_10, (MR_Integer) 1, ArgTerms1_317, Context_313, HLDSGoal_12, STATE_VARIABLE_SVarState_0_94, &STATE_VARIABLE_SVarState_40_334, STATE_VARIABLE_UrInfo_0_96, STATE_VARIABLE_UrInfo_97);
            }
            else
            if ((strcmp(Name_318, (MR_String) "=^") == 0))
              hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_10_p_0(LocKind_9, Renaming_10, (MR_Integer) 0, ArgTerms1_317, Context_313, HLDSGoal_12, STATE_VARIABLE_SVarState_0_94, &STATE_VARIABLE_SVarState_40_334, STATE_VARIABLE_UrInfo_0_96, STATE_VARIABLE_UrInfo_97);
            else
            {
              MR_Word LHSTerm_319;
              MR_Word RHSTerm_320;
              MR_Word Var_331;
              MR_Word Var_332;

              succeeded = (ArgTerms1_317 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                LHSTerm_319 = ((MR_Word) ((MR_hl_field(1, ArgTerms1_317, (MR_Integer) 0))));
                Var_331 = ((MR_Word) ((MR_hl_field(1, ArgTerms1_317, (MR_Integer) 1))));
                succeeded = (Var_331 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  RHSTerm_320 = ((MR_Word) ((MR_hl_field(1, Var_331, (MR_Integer) 0))));
                  Var_332 = ((MR_Word) ((MR_hl_field(1, Var_331, (MR_Integer) 1))));
                  succeeded = (Var_332 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word TransformedGoal_321;
                MR_Word Var_333;

                {
                  Var_333 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_333, 0) = ((MR_Box) (Context_313));
                  MR_hl_field(0, Var_333, 1) = ((MR_Box) (LHSTerm_319));
                  MR_hl_field(0, Var_333, 2) = ((MR_Box) (RHSTerm_320));
                  MR_hl_field(0, Var_333, 3) = (MR_Box) ((MR_Unsigned) (Purity_316));
                }
                {
                  TransformedGoal_321 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, TransformedGoal_321, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(3, TransformedGoal_321, 1) = ((MR_Box) (Context_313));
                  MR_hl_field(3, TransformedGoal_321, 2) = ((MR_Box) (Var_333));
                }
                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0(LocKind_9, Renaming_10, TransformedGoal_321, HLDSGoal_12, STATE_VARIABLE_SVarState_0_94, &STATE_VARIABLE_SVarState_40_334, STATE_VARIABLE_UrInfo_0_96, STATE_VARIABLE_UrInfo_97);
              }
              else
                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_call_std_10_p_0(Context_313, Renaming_10, SymName_314, ArgTerms1_317, Purity_316, HLDSGoal_12, STATE_VARIABLE_SVarState_0_94, &STATE_VARIABLE_SVarState_40_334, STATE_VARIABLE_UrInfo_0_96, STATE_VARIABLE_UrInfo_97);
            }
          else
            hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_call_std_10_p_0(Context_313, Renaming_10, SymName_314, ArgTerms1_317, Purity_316, HLDSGoal_12, STATE_VARIABLE_SVarState_0_94, &STATE_VARIABLE_SVarState_40_334, STATE_VARIABLE_UrInfo_0_96, STATE_VARIABLE_UrInfo_97);
          hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(LocKind_9, STATE_VARIABLE_SVarState_40_334, STATE_VARIABLE_SVarState_95);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Context_348 = ((MR_Word) ((MR_hl_field(2, Goal_11, (MR_Integer) 0))));
          MR_Word ConjunctA_349 = ((MR_Word) ((MR_hl_field(2, Goal_11, (MR_Integer) 1))));
          MR_Word ConjunctsB_350 = ((MR_Word) ((MR_hl_field(2, Goal_11, (MR_Integer) 2))));
          MR_Word HLDSConjunctsCordA_351;
          MR_Word HLDSConjunctsCord_352;
          MR_Word HLDSConjuncts_353;
          MR_Word GoalInfo_354;
          MR_Word Var_356;
          MR_Word STATE_VARIABLE_SVarState_28_357;
          MR_Word STATE_VARIABLE_UrInfo_29_358;
          MR_Word Var_359;
          MR_Box conv5_HLDSConjunctsCord_352;
          MR_Box conv4_STATE_VARIABLE_SVarState_95;
          MR_Box conv3_STATE_VARIABLE_UrInfo_97;

          Var_356 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
          hlds__make_hlds__goal_expr_to_goal__accumulate_plain_or_par_conjunct_10_p_0(LocKind_9, Renaming_10, (MR_Integer) 0, ConjunctA_349, Var_356, &HLDSConjunctsCordA_351, STATE_VARIABLE_SVarState_0_94, &STATE_VARIABLE_SVarState_28_357, STATE_VARIABLE_UrInfo_0_96, &STATE_VARIABLE_UrInfo_29_358);
          {
            Var_359 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_359, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_5[0]));
            MR_hl_field(0, Var_359, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0_1));
            MR_hl_field(0, Var_359, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, Var_359, 3) = ((MR_Box) (LocKind_9));
            MR_hl_field(0, Var_359, 4) = ((MR_Box) (Renaming_10));
            MR_hl_field(0, Var_359, 5) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_unravel_info_0), Var_359, ConjunctsB_350, ((MR_Box) (HLDSConjunctsCordA_351)), &conv5_HLDSConjunctsCord_352, ((MR_Box) (STATE_VARIABLE_SVarState_28_357)), &conv4_STATE_VARIABLE_SVarState_95, ((MR_Box) (STATE_VARIABLE_UrInfo_29_358)), &conv3_STATE_VARIABLE_UrInfo_97);
          HLDSConjunctsCord_352 = ((MR_Word) (conv5_HLDSConjunctsCord_352));
          *STATE_VARIABLE_SVarState_95 = ((MR_Word) (conv4_STATE_VARIABLE_SVarState_95));
          *STATE_VARIABLE_UrInfo_97 = ((MR_Word) (conv3_STATE_VARIABLE_UrInfo_97));
          HLDSConjuncts_353 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HLDSConjunctsCord_352);
          hlds__hlds_goal__goal_info_init_2_p_0(Context_348, &GoalInfo_354);
          hlds__hlds_goal__conj_list_to_goal_3_p_0(HLDSConjuncts_353, GoalInfo_354, HLDSGoal_12);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Goal_11, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Context_206 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 1))));
              MR_Word GoalInfo_208;

              hlds__hlds_goal__goal_info_init_2_p_0(Context_206, &GoalInfo_208);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_12 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_2[0])));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_208));
              }
              *STATE_VARIABLE_SVarState_95 = STATE_VARIABLE_SVarState_0_94;
              *STATE_VARIABLE_UrInfo_97 = STATE_VARIABLE_UrInfo_0_96;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Context_479 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 1))));
              MR_Word Vars0_480 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 2))));
              MR_Word StateVars0_481 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 3))));
              MR_Word Cond_482 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 4))));
              MR_Word Then_483 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 5))));
              MR_Word Else_484 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 6))));
              MR_Word Vars_486;
              MR_Word StateVars_487;
              MR_Word BeforeCondSVarState_488;
              MR_Word HLDSCond_489;
              MR_Word AfterCondSVarState_490;
              MR_Word HLDSThen0_491;
              MR_Word AfterThenSVarState0_492;
              MR_Word AfterThenSVarState_493;
              MR_Word HLDSElse0_494;
              MR_Word AfterElseSVarState_495;
              MR_Word HLDSThen_496;
              MR_Word HLDSElse_497;
              MR_Word GoalExpr_498;
              MR_Word GoalInfo_499;
              MR_Word STATE_VARIABLE_UrInfo_42_502;
              MR_Word STATE_VARIABLE_UrInfo_43_503;
              MR_Word STATE_VARIABLE_UrInfo_44_504;
              MR_Word STATE_VARIABLE_UrInfo_45_505;

              parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_10, Vars0_480, &Vars_486);
              parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_10, StateVars0_481, &StateVars_487);
              hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_6_p_0(Context_479, StateVars_487, STATE_VARIABLE_SVarState_0_94, &BeforeCondSVarState_488, STATE_VARIABLE_UrInfo_0_96, &STATE_VARIABLE_UrInfo_42_502);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0(LocKind_9, Renaming_10, Cond_482, &HLDSCond_489, BeforeCondSVarState_488, &AfterCondSVarState_490, STATE_VARIABLE_UrInfo_42_502, &STATE_VARIABLE_UrInfo_43_503);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0(LocKind_9, Renaming_10, Then_483, &HLDSThen0_491, AfterCondSVarState_490, &AfterThenSVarState0_492, STATE_VARIABLE_UrInfo_43_503, &STATE_VARIABLE_UrInfo_44_504);
              hlds__make_hlds__state_var__svar_finish_local_state_vars_5_p_0(STATE_VARIABLE_UrInfo_44_504, StateVars_487, STATE_VARIABLE_SVarState_0_94, AfterThenSVarState0_492, &AfterThenSVarState_493);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0(LocKind_9, Renaming_10, Else_484, &HLDSElse0_494, STATE_VARIABLE_SVarState_0_94, &AfterElseSVarState_495, STATE_VARIABLE_UrInfo_44_504, &STATE_VARIABLE_UrInfo_45_505);
              hlds__make_hlds__state_var__svar_finish_if_then_else_14_p_0(LocKind_9, Context_479, StateVars_487, HLDSThen0_491, &HLDSThen_496, HLDSElse0_494, &HLDSElse_497, STATE_VARIABLE_SVarState_0_94, AfterCondSVarState_490, AfterThenSVarState_493, AfterElseSVarState_495, STATE_VARIABLE_SVarState_95, STATE_VARIABLE_UrInfo_45_505, STATE_VARIABLE_UrInfo_97);
              {
                GoalExpr_498 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_498, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, GoalExpr_498, 1) = ((MR_Box) (Vars_486));
                MR_hl_field(3, GoalExpr_498, 2) = ((MR_Box) (HLDSCond_489));
                MR_hl_field(3, GoalExpr_498, 3) = ((MR_Box) (HLDSThen_496));
                MR_hl_field(3, GoalExpr_498, 4) = ((MR_Box) (HLDSElse_497));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_479, &GoalInfo_499);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_12 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_498));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_499));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Context_415 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 1))));
              MR_Word Disjunct1_416 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 2))));
              MR_Word Disjunct2_417 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 3))));
              MR_Word Disjuncts3plus_418 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 4))));
              MR_Word RevDisjunctsSVarStates1_419;
              MR_Word RevDisjunctsSVarStates2_420;
              MR_Word RevDisjunctsSVarStates_421;
              MR_Word DisjunctsSVarStates_422;
              MR_Word Disjuncts_423;
              MR_Word GoalInfo_424;
              MR_Word STATE_VARIABLE_UrInfo_32_426;
              MR_Word STATE_VARIABLE_UrInfo_33_427;
              MR_Word Var_428;
              MR_Word STATE_VARIABLE_UrInfo_35_429;
              MR_Box conv9_RevDisjunctsSVarStates_421;
              MR_Box conv8_STATE_VARIABLE_UrInfo_35_429;

              hlds__make_hlds__goal_expr_to_goal__accumulate_disjunct_8_p_0(LocKind_9, Renaming_10, STATE_VARIABLE_SVarState_0_94, Disjunct1_416, (MR_Word) ((MR_Unsigned) 0U), &RevDisjunctsSVarStates1_419, STATE_VARIABLE_UrInfo_0_96, &STATE_VARIABLE_UrInfo_32_426);
              hlds__make_hlds__goal_expr_to_goal__accumulate_disjunct_8_p_0(LocKind_9, Renaming_10, STATE_VARIABLE_SVarState_0_94, Disjunct2_417, RevDisjunctsSVarStates1_419, &RevDisjunctsSVarStates2_420, STATE_VARIABLE_UrInfo_32_426, &STATE_VARIABLE_UrInfo_33_427);
              {
                Var_428 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_428, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_6[0]));
                MR_hl_field(0, Var_428, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0_2));
                MR_hl_field(0, Var_428, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, Var_428, 3) = ((MR_Box) (LocKind_9));
                MR_hl_field(0, Var_428, 4) = ((MR_Box) (Renaming_10));
                MR_hl_field(0, Var_428, 5) = ((MR_Box) (STATE_VARIABLE_SVarState_0_94));
              }
              mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[2]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_unravel_info_0), Var_428, Disjuncts3plus_418, ((MR_Box) (RevDisjunctsSVarStates2_420)), &conv9_RevDisjunctsSVarStates_421, ((MR_Box) (STATE_VARIABLE_UrInfo_33_427)), &conv8_STATE_VARIABLE_UrInfo_35_429);
              RevDisjunctsSVarStates_421 = ((MR_Word) (conv9_RevDisjunctsSVarStates_421));
              STATE_VARIABLE_UrInfo_35_429 = ((MR_Word) (conv8_STATE_VARIABLE_UrInfo_35_429));
              mercury__list__reverse_2_p_0((MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_hlds_goal_svar_state_0), RevDisjunctsSVarStates_421, &DisjunctsSVarStates_422);
              hlds__make_hlds__state_var__svar_finish_disjunction_6_p_0(DisjunctsSVarStates_422, &Disjuncts_423, STATE_VARIABLE_SVarState_0_94, STATE_VARIABLE_SVarState_95, STATE_VARIABLE_UrInfo_35_429, STATE_VARIABLE_UrInfo_97);
              hlds__hlds_goal__goal_info_init_2_p_0(Context_415, &GoalInfo_424);
              hlds__hlds_goal__disj_list_to_goal_3_p_0(Disjuncts_423, GoalInfo_424, HLDSGoal_12);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Context_507 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 1))));
              MR_Word SubGoal_508 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 2))));
              MR_Word HLDSSubGoal_510;
              MR_Word GoalExpr_512;
              MR_Word GoalInfo_513;
              MR_Word Var_511;

              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0(LocKind_9, Renaming_10, SubGoal_508, &HLDSSubGoal_510, STATE_VARIABLE_SVarState_0_94, &Var_511, STATE_VARIABLE_UrInfo_0_96, STATE_VARIABLE_UrInfo_97);
              *STATE_VARIABLE_SVarState_95 = STATE_VARIABLE_SVarState_0_94;
              GoalExpr_512 = (MR_Word) ((MR_Word) (HLDSSubGoal_510));
              hlds__hlds_goal__goal_info_init_2_p_0(Context_507, &GoalInfo_513);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_12 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_512));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_513));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Context_15 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 1))));
              MR_Word GoalInfo_17;

              hlds__hlds_goal__goal_info_init_2_p_0(Context_15, &GoalInfo_17);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_12 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[4])));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_17));
              }
              *STATE_VARIABLE_SVarState_95 = STATE_VARIABLE_SVarState_0_94;
              *STATE_VARIABLE_UrInfo_97 = STATE_VARIABLE_UrInfo_0_96;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Context_514 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 1))));
              MR_Word ConjunctA_515 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 2))));
              MR_Word ConjunctsB_516 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 3))));
              MR_Word HLDSConjunctsCordA_517;
              MR_Word HLDSConjunctsCord_518;
              MR_Word HLDSConjuncts_519;
              MR_Word GoalInfo_520;
              MR_Word Var_522;
              MR_Word STATE_VARIABLE_SVarState_28_523;
              MR_Word STATE_VARIABLE_UrInfo_29_524;
              MR_Word Var_525;
              MR_Box conv15_HLDSConjunctsCord_518;
              MR_Box conv14_STATE_VARIABLE_SVarState_95;
              MR_Box conv13_STATE_VARIABLE_UrInfo_97;

              Var_522 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
              hlds__make_hlds__goal_expr_to_goal__accumulate_plain_or_par_conjunct_10_p_0(LocKind_9, Renaming_10, (MR_Integer) 1, ConjunctA_515, Var_522, &HLDSConjunctsCordA_517, STATE_VARIABLE_SVarState_0_94, &STATE_VARIABLE_SVarState_28_523, STATE_VARIABLE_UrInfo_0_96, &STATE_VARIABLE_UrInfo_29_524);
              {
                Var_525 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_525, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_5[0]));
                MR_hl_field(0, Var_525, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0_3));
                MR_hl_field(0, Var_525, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, Var_525, 3) = ((MR_Box) (LocKind_9));
                MR_hl_field(0, Var_525, 4) = ((MR_Box) (Renaming_10));
                MR_hl_field(0, Var_525, 5) = ((MR_Box) ((MR_Integer) 1));
              }
              mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_unravel_info_0), Var_525, ConjunctsB_516, ((MR_Box) (HLDSConjunctsCordA_517)), &conv15_HLDSConjunctsCord_518, ((MR_Box) (STATE_VARIABLE_SVarState_28_523)), &conv14_STATE_VARIABLE_SVarState_95, ((MR_Box) (STATE_VARIABLE_UrInfo_29_524)), &conv13_STATE_VARIABLE_UrInfo_97);
              HLDSConjunctsCord_518 = ((MR_Word) (conv15_HLDSConjunctsCord_518));
              *STATE_VARIABLE_SVarState_95 = ((MR_Word) (conv14_STATE_VARIABLE_SVarState_95));
              *STATE_VARIABLE_UrInfo_97 = ((MR_Word) (conv13_STATE_VARIABLE_UrInfo_97));
              HLDSConjuncts_519 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HLDSConjunctsCord_518);
              hlds__hlds_goal__goal_info_init_2_p_0(Context_514, &GoalInfo_520);
              hlds__hlds_goal__par_conj_list_to_goal_3_p_0(HLDSConjuncts_519, GoalInfo_520, HLDSGoal_12);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word QuantType_532 = ((((MR_Unsigned) ((MR_hl_field(3, Goal_11, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              MR_Word VarsKind_533 = ((MR_Unsigned) ((MR_hl_field(3, Goal_11, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Context_534 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 2))));
              MR_Word Vars0_535 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 3))));
              MR_Word SubGoal_536 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 4))));

              switch (QuantType_532) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word TransformedGoal_537;
                    MR_Word Var_548;
                    MR_Word Var_550;
                    MR_Word next_value_of_Goal_11;

                    {
                      Var_550 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_550, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                      MR_hl_field(3, Var_550, 1) = ((MR_Box) (Context_534));
                      MR_hl_field(3, Var_550, 2) = ((MR_Box) (SubGoal_536));
                    }
                    {
                      Var_548 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_548, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(3, Var_548, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) (VarsKind_533)));
                      MR_hl_field(3, Var_548, 2) = ((MR_Box) (Context_534));
                      MR_hl_field(3, Var_548, 3) = ((MR_Box) (Vars0_535));
                      MR_hl_field(3, Var_548, 4) = ((MR_Box) (Var_550));
                    }
                    {
                      TransformedGoal_537 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, TransformedGoal_537, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                      MR_hl_field(3, TransformedGoal_537, 1) = ((MR_Box) (Context_534));
                      MR_hl_field(3, TransformedGoal_537, 2) = ((MR_Box) (Var_548));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_Goal_11 = TransformedGoal_537;
                    Goal_11 = next_value_of_Goal_11;
                    continue;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word Vars_538;
                    MR_Word HLDSSubGoal_539;
                    MR_Word Reason_540;
                    MR_Word GoalExpr_546;
                    MR_Word GoalInfo_547;

                    parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_10, Vars0_535, &Vars_538);
                    switch (VarsKind_533) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0(LocKind_9, Renaming_10, SubGoal_536, &HLDSSubGoal_539, STATE_VARIABLE_SVarState_0_94, STATE_VARIABLE_SVarState_95, STATE_VARIABLE_UrInfo_0_96, STATE_VARIABLE_UrInfo_97);
                          {
                            Reason_540 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, Reason_540, 0) = ((MR_Box) (Vars_538));
                            MR_hl_field(0, Reason_540, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word BeforeInsideSVarState_543;
                          MR_Word AfterInsideSVarState_544;
                          MR_Word STATE_VARIABLE_UrInfo_44_553;

                          hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_6_p_0(Context_534, Vars_538, STATE_VARIABLE_SVarState_0_94, &BeforeInsideSVarState_543, STATE_VARIABLE_UrInfo_0_96, &STATE_VARIABLE_UrInfo_44_553);
                          hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0(LocKind_9, Renaming_10, SubGoal_536, &HLDSSubGoal_539, BeforeInsideSVarState_543, &AfterInsideSVarState_544, STATE_VARIABLE_UrInfo_44_553, STATE_VARIABLE_UrInfo_97);
                          hlds__make_hlds__state_var__svar_finish_local_state_vars_5_p_0(*STATE_VARIABLE_UrInfo_97, Vars_538, STATE_VARIABLE_SVarState_0_94, AfterInsideSVarState_544, STATE_VARIABLE_SVarState_95);
                          Reason_540 = (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[32]);
                        }
                        break;
                    }
                    {
                      GoalExpr_546 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, GoalExpr_546, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(3, GoalExpr_546, 1) = ((MR_Box) (Reason_540));
                      MR_hl_field(3, GoalExpr_546, 2) = ((MR_Box) (HLDSSubGoal_539));
                    }
                    hlds__hlds_goal__goal_info_init_2_p_0(Context_534, &GoalInfo_547);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *HLDSGoal_12 = base;
                      MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_546));
                      MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_547));
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Purity_55 = ((MR_Unsigned) ((MR_hl_field(3, Goal_11, (MR_Integer) 2))) & (MR_Integer) 3);
              MR_Word SubGoal_56 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 3))));
              MR_Word Reason_57;
              MR_Word HLDSSubGoal_59;
              MR_Word Context_148 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 1))));
              MR_Word GoalExpr_149;
              MR_Word GoalInfo_150;

              {
                Reason_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Reason_57, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Reason_57, 1) = (MR_Box) ((MR_Unsigned) (Purity_55));
              }
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0(LocKind_9, Renaming_10, SubGoal_56, &HLDSSubGoal_59, STATE_VARIABLE_SVarState_0_94, STATE_VARIABLE_SVarState_95, STATE_VARIABLE_UrInfo_0_96, STATE_VARIABLE_UrInfo_97);
              {
                GoalExpr_149 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_149, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_149, 1) = ((MR_Box) (Reason_57));
                MR_hl_field(3, GoalExpr_149, 2) = ((MR_Box) (HLDSSubGoal_59));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_148, &GoalInfo_150);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_12 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_149));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_150));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word Vars_180 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 2))));
              MR_Word StateVars_181 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 3))));
              MR_Word DotSVars_182 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 4))));
              MR_Word ColonSVars_183 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 5))));
              MR_Word PromiseVars_185;
              MR_Word Context_186 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 1))));
              MR_Word GoalExpr_187;
              MR_Word GoalInfo_188;
              MR_Word SubGoal_189 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 6))));
              MR_Word Reason_190;
              MR_Word HLDSSubGoal_191;

              hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_14_p_0(LocKind_9, Renaming_10, Vars_180, StateVars_181, DotSVars_182, ColonSVars_183, Context_186, &PromiseVars_185, SubGoal_189, &HLDSSubGoal_191, STATE_VARIABLE_SVarState_0_94, STATE_VARIABLE_SVarState_95, STATE_VARIABLE_UrInfo_0_96, STATE_VARIABLE_UrInfo_97);
              {
                Reason_190 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Reason_190, 0) = ((MR_Box) (PromiseVars_185));
                MR_hl_field(2, Reason_190, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              {
                GoalExpr_187 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_187, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_187, 1) = ((MR_Box) (Reason_190));
                MR_hl_field(3, GoalExpr_187, 2) = ((MR_Box) (HLDSSubGoal_191));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_186, &GoalInfo_188);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_12 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_187));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_188));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word Vars_168 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 2))));
              MR_Word StateVars_169 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 3))));
              MR_Word DotSVars_170 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 4))));
              MR_Word ColonSVars_171 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 5))));
              MR_Word PromiseVars_173;
              MR_Word Context_174 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 1))));
              MR_Word GoalExpr_175;
              MR_Word GoalInfo_176;
              MR_Word SubGoal_177 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 6))));
              MR_Word Reason_178;
              MR_Word HLDSSubGoal_179;

              hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_14_p_0(LocKind_9, Renaming_10, Vars_168, StateVars_169, DotSVars_170, ColonSVars_171, Context_174, &PromiseVars_173, SubGoal_177, &HLDSSubGoal_179, STATE_VARIABLE_SVarState_0_94, STATE_VARIABLE_SVarState_95, STATE_VARIABLE_UrInfo_0_96, STATE_VARIABLE_UrInfo_97);
              {
                Reason_178 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Reason_178, 0) = ((MR_Box) (PromiseVars_173));
                MR_hl_field(2, Reason_178, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              }
              {
                GoalExpr_175 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_175, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_175, 1) = ((MR_Box) (Reason_178));
                MR_hl_field(3, GoalExpr_175, 2) = ((MR_Box) (HLDSSubGoal_179));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_174, &GoalInfo_176);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_12 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_175));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_176));
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Vars_62 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 2))));
              MR_Word StateVars_63 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 3))));
              MR_Word DotSVars_64 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 4))));
              MR_Word ColonSVars_65 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 5))));
              MR_Word PromiseVars_67;
              MR_Word Context_162 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 1))));
              MR_Word GoalExpr_163;
              MR_Word GoalInfo_164;
              MR_Word SubGoal_165 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 6))));
              MR_Word Reason_166;
              MR_Word HLDSSubGoal_167;

              hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_14_p_0(LocKind_9, Renaming_10, Vars_62, StateVars_63, DotSVars_64, ColonSVars_65, Context_162, &PromiseVars_67, SubGoal_165, &HLDSSubGoal_167, STATE_VARIABLE_SVarState_0_94, STATE_VARIABLE_SVarState_95, STATE_VARIABLE_UrInfo_0_96, STATE_VARIABLE_UrInfo_97);
              {
                Reason_166 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Reason_166, 0) = ((MR_Box) (PromiseVars_67));
                MR_hl_field(2, Reason_166, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
              }
              {
                GoalExpr_163 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_163, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_163, 1) = ((MR_Box) (Reason_166));
                MR_hl_field(3, GoalExpr_163, 2) = ((MR_Box) (HLDSSubGoal_167));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_162, &GoalInfo_164);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_12 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_163));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_164));
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word Detism_58 = ((MR_Unsigned) ((MR_hl_field(3, Goal_11, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_Word SubGoal_192 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 3))));
              MR_Word Reason_193;
              MR_Word HLDSSubGoal_194;
              MR_Word Context_195 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 1))));
              MR_Word GoalExpr_196;
              MR_Word GoalInfo_197;

              {
                Reason_193 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Reason_193, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Reason_193, 1) = (MR_Box) ((MR_Unsigned) (Detism_58));
              }
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0(LocKind_9, Renaming_10, SubGoal_192, &HLDSSubGoal_194, STATE_VARIABLE_SVarState_0_94, STATE_VARIABLE_SVarState_95, STATE_VARIABLE_UrInfo_0_96, STATE_VARIABLE_UrInfo_97);
              {
                GoalExpr_196 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_196, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_196, 1) = ((MR_Box) (Reason_193));
                MR_hl_field(3, GoalExpr_196, 2) = ((MR_Box) (HLDSSubGoal_194));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_195, &GoalInfo_197);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_12 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_196));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_197));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word PODVar0_60 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 2))));
              MR_Word Var_61;
              MR_Word STATE_VARIABLE_SVarState_128_128;
              MR_Word STATE_VARIABLE_UrInfo_129_129;
              MR_Word Context_155 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 1))));
              MR_Word GoalExpr_156;
              MR_Word GoalInfo_157;
              MR_Word SubGoal_158 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 3))));
              MR_Word Reason_159;
              MR_Word HLDSSubGoal_161;

              hlds__make_hlds__goal_expr_to_goal__rename_and_maybe_expand_dot_var_9_p_0(Context_155, (MR_Integer) 1, Renaming_10, PODVar0_60, &Var_61, STATE_VARIABLE_SVarState_0_94, &STATE_VARIABLE_SVarState_128_128, STATE_VARIABLE_UrInfo_0_96, &STATE_VARIABLE_UrInfo_129_129);
              {
                Reason_159 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Reason_159, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, Reason_159, 1) = ((MR_Box) (Var_61));
              }
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0(LocKind_9, Renaming_10, SubGoal_158, &HLDSSubGoal_161, STATE_VARIABLE_SVarState_128_128, STATE_VARIABLE_SVarState_95, STATE_VARIABLE_UrInfo_129_129, STATE_VARIABLE_UrInfo_97);
              {
                GoalExpr_156 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_156, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_156, 1) = ((MR_Box) (Reason_159));
                MR_hl_field(3, GoalExpr_156, 2) = ((MR_Box) (HLDSSubGoal_161));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_155, &GoalInfo_157);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_12 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_156));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_157));
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word Detism_151 = ((MR_Unsigned) ((MR_hl_field(3, Goal_11, (MR_Integer) 3))) & (MR_Integer) 7);
              MR_Word PODVar0_152 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 2))));
              MR_Word Var_153;
              MR_Word STATE_VARIABLE_SVarState_128_198;
              MR_Word STATE_VARIABLE_UrInfo_129_199;
              MR_Word Context_200 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 1))));
              MR_Word GoalExpr_201;
              MR_Word GoalInfo_202;
              MR_Word SubGoal_203 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 4))));
              MR_Word Reason_204;
              MR_Word HLDSSubGoal_205;

              hlds__make_hlds__goal_expr_to_goal__rename_and_maybe_expand_dot_var_9_p_0(Context_200, (MR_Integer) 1, Renaming_10, PODVar0_152, &Var_153, STATE_VARIABLE_SVarState_0_94, &STATE_VARIABLE_SVarState_128_198, STATE_VARIABLE_UrInfo_0_96, &STATE_VARIABLE_UrInfo_129_199);
              {
                Reason_204 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Reason_204, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, Reason_204, 1) = ((MR_Box) (Var_153));
                MR_hl_field(3, Reason_204, 2) = (MR_Box) ((MR_Unsigned) (Detism_151));
              }
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0(LocKind_9, Renaming_10, SubGoal_203, &HLDSSubGoal_205, STATE_VARIABLE_SVarState_128_198, STATE_VARIABLE_SVarState_95, STATE_VARIABLE_UrInfo_129_199, STATE_VARIABLE_UrInfo_97);
              {
                GoalExpr_201 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_201, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_201, 1) = ((MR_Box) (Reason_204));
                MR_hl_field(3, GoalExpr_201, 2) = ((MR_Box) (HLDSSubGoal_205));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_200, &GoalInfo_202);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_12 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_201));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_202));
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word Context_366 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 1))));
              MR_Word HeadWarning_367 = ((MR_Unsigned) ((MR_hl_field(3, Goal_11, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_Word TailWarnings_368 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 3))));
              MR_Word SubGoal_369 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 4))));
              MR_Word HLDSSubGoal_375;
              MR_Word GoalExpr_380;
              MR_Word GoalInfo_381;
              MR_Word Var_391;

              succeeded = (HeadWarning_367 == (MR_Integer) 2);
              if (!(succeeded))
                succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), ((MR_Box) ((MR_Integer) 2)), TailWarnings_368);
              if (succeeded)
              {
                MR_Word ModuleInfo0_370 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_96, (MR_Integer) 0))));
                MR_Word Globals0_371;
                MR_Word WarnOccursCheck0_372;
                MR_Word Globals1_373;
                MR_Word ModuleInfo1_374;
                MR_Word ModuleInfo2_376;
                MR_Word Globals2_377;
                MR_Word Globals3_378;
                MR_Word ModuleInfo_379;
                MR_Word STATE_VARIABLE_UrInfo_40_387;
                MR_Word STATE_VARIABLE_UrInfo_42_388;
                MR_Word Var_390;
                MR_Integer Var_398;
                MR_Word Var_399;
                MR_Word Var_400;
                MR_Word Var_401;
                MR_Word Var_402;
                MR_Integer Var_409;
                MR_Word Var_410;
                MR_Word Var_411;
                MR_Word Var_412;
                MR_Word Var_413;

                hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo0_370, &Globals0_371);
                libs__globals__lookup_bool_option_3_p_0(Globals0_371, (MR_Integer) 63, &WarnOccursCheck0_372);
                libs__globals__set_option_4_p_0((MR_Integer) 63, (MR_Word) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_3[5])), Globals0_371, &Globals1_373);
                hlds__hlds_module__module_info_set_globals_3_p_0(Globals1_373, ModuleInfo0_370, &ModuleInfo1_374);
                Var_398 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_96, (MR_Integer) 1))));
                Var_399 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_96, (MR_Integer) 2))));
                Var_400 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_96, (MR_Integer) 3))));
                Var_401 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_96, (MR_Integer) 4))));
                Var_402 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_96, (MR_Integer) 5))));
                {
                  STATE_VARIABLE_UrInfo_40_387 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, STATE_VARIABLE_UrInfo_40_387, 0) = ((MR_Box) (ModuleInfo1_374));
                  MR_hl_field(0, STATE_VARIABLE_UrInfo_40_387, 1) = ((MR_Box) (Var_398));
                  MR_hl_field(0, STATE_VARIABLE_UrInfo_40_387, 2) = ((MR_Box) (Var_399));
                  MR_hl_field(0, STATE_VARIABLE_UrInfo_40_387, 3) = ((MR_Box) (Var_400));
                  MR_hl_field(0, STATE_VARIABLE_UrInfo_40_387, 4) = ((MR_Box) (Var_401));
                  MR_hl_field(0, STATE_VARIABLE_UrInfo_40_387, 5) = ((MR_Box) (Var_402));
                }
                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0(LocKind_9, Renaming_10, SubGoal_369, &HLDSSubGoal_375, STATE_VARIABLE_SVarState_0_94, STATE_VARIABLE_SVarState_95, STATE_VARIABLE_UrInfo_40_387, &STATE_VARIABLE_UrInfo_42_388);
                ModuleInfo2_376 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_42_388, (MR_Integer) 0))));
                hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo2_376, &Globals2_377);
                {
                  Var_390 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_390, 0) = (MR_Box) ((MR_Unsigned) (WarnOccursCheck0_372));
                }
                libs__globals__set_option_4_p_0((MR_Integer) 63, Var_390, Globals2_377, &Globals3_378);
                hlds__hlds_module__module_info_set_globals_3_p_0(Globals3_378, ModuleInfo2_376, &ModuleInfo_379);
                Var_409 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_42_388, (MR_Integer) 1))));
                Var_410 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_42_388, (MR_Integer) 2))));
                Var_411 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_42_388, (MR_Integer) 3))));
                Var_412 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_42_388, (MR_Integer) 4))));
                Var_413 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_42_388, (MR_Integer) 5))));
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  *STATE_VARIABLE_UrInfo_97 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (ModuleInfo_379));
                  MR_hl_field(0, base, 1) = ((MR_Box) (Var_409));
                  MR_hl_field(0, base, 2) = ((MR_Box) (Var_410));
                  MR_hl_field(0, base, 3) = ((MR_Box) (Var_411));
                  MR_hl_field(0, base, 4) = ((MR_Box) (Var_412));
                  MR_hl_field(0, base, 5) = ((MR_Box) (Var_413));
                }
              }
              else
                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0(LocKind_9, Renaming_10, SubGoal_369, &HLDSSubGoal_375, STATE_VARIABLE_SVarState_0_94, STATE_VARIABLE_SVarState_95, STATE_VARIABLE_UrInfo_0_96, STATE_VARIABLE_UrInfo_97);
              {
                Var_391 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_391, 0) = (MR_Box) ((MR_Unsigned) (HeadWarning_367));
                MR_hl_field(1, Var_391, 1) = ((MR_Box) (TailWarnings_368));
              }
              {
                GoalExpr_380 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_380, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_380, 1) = ((MR_Box) (Var_391));
                MR_hl_field(3, GoalExpr_380, 2) = ((MR_Box) (HLDSSubGoal_375));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_366, &GoalInfo_381);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_12 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_380));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_381));
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word Context_557 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 1))));
              MR_Word MaybeCompileTime_558 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 2))));
              MR_Word MaybeRunTime_559 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 3))));
              MR_Word MaybeIO0_560 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 4))));
              MR_Word Mutables0_561 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 5))));
              MR_Word SubGoal0_562 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 6))));
              MR_Word VarSet0_563 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_96, (MR_Integer) 3))));
              MR_Word MutableHLDSs_564;
              MR_Word MutableStateVars_565;
              MR_Word MutableGetGoals_566;
              MR_Word MutableSetGoals_567;
              MR_Word MaybeIOHLDS_573;
              MR_Word StateVars_574;
              MR_Word GetGoals_575;
              MR_Word SetGoals_576;
              MR_Word SubGoal1_577;
              MR_Word BeforeInsideSVarState_578;
              MR_Word HLDSSubGoal_579;
              MR_Word AfterInsideSVarState_580;
              MR_Word QualInfo0_581;
              MR_Word QualInfo_582;
              MR_Word Reason_583;
              MR_Word GoalExpr_584;
              MR_Word GoalInfo_585;
              MR_Word Var_586;
              MR_Word Var_587;
              MR_Word Var_588;
              MR_Word Var_589;
              MR_Word STATE_VARIABLE_UrInfo_55_591;
              MR_Word STATE_VARIABLE_UrInfo_56_592;
              MR_Word Var_605;
              MR_Integer Var_606;
              MR_Word Var_608;
              MR_Word Var_609;
              MR_Word Var_610;

              {
                Var_586 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_586, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_6[1]));
                MR_hl_field(0, Var_586, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0_4));
                MR_hl_field(0, Var_586, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, Var_586, 3) = ((MR_Box) (Context_557));
                MR_hl_field(0, Var_586, 4) = ((MR_Box) (Renaming_10));
                MR_hl_field(0, Var_586, 5) = ((MR_Box) (VarSet0_563));
              }
              mercury__list__map4_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), Var_586, Mutables0_561, &MutableHLDSs_564, &MutableStateVars_565, &MutableGetGoals_566, &MutableSetGoals_567);
              if ((MaybeIO0_560 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MaybeIOHLDS_573 = (MR_Word) ((MR_Unsigned) 0U);
                StateVars_574 = MutableStateVars_565;
                GetGoals_575 = MutableGetGoals_566;
                SetGoals_576 = MutableSetGoals_567;
              }
              else
              {
                MR_Word IOStateVar0_568 = ((MR_Word) ((MR_hl_field(1, MaybeIO0_560, (MR_Integer) 0))));
                MR_Word IOStateVar_569;
                MR_String IOStateVarName_570;
                MR_Word IOGetGoal_571;
                MR_Word IOSetGoal_572;

                hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_8_p_0(Context_557, Renaming_10, VarSet0_563, IOStateVar0_568, &IOStateVar_569, &IOStateVarName_570, &IOGetGoal_571, &IOSetGoal_572);
                {
                  MaybeIOHLDS_573 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MaybeIOHLDS_573, 0) = ((MR_Box) (IOStateVarName_570));
                }
                {
                  StateVars_574 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, StateVars_574, 0) = ((MR_Box) (IOStateVar_569));
                  MR_hl_field(1, StateVars_574, 1) = ((MR_Box) (MutableStateVars_565));
                }
                {
                  GetGoals_575 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, GetGoals_575, 0) = ((MR_Box) (IOGetGoal_571));
                  MR_hl_field(1, GetGoals_575, 1) = ((MR_Box) (MutableGetGoals_566));
                }
                {
                  SetGoals_576 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, SetGoals_576, 0) = ((MR_Box) (IOSetGoal_572));
                  MR_hl_field(1, SetGoals_576, 1) = ((MR_Box) (MutableSetGoals_567));
                }
              }
              {
                Var_589 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_589, 0) = ((MR_Box) (SubGoal0_562));
                MR_hl_field(1, Var_589, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_588 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), Var_589, SetGoals_576);
              Var_587 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), GetGoals_575, Var_588);
              SubGoal1_577 = parse_tree__prog_util__goal_list_to_conj_2_f_0(Context_557, Var_587);
              hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_6_p_0(Context_557, StateVars_574, STATE_VARIABLE_SVarState_0_94, &BeforeInsideSVarState_578, STATE_VARIABLE_UrInfo_0_96, &STATE_VARIABLE_UrInfo_55_591);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0(LocKind_9, Renaming_10, SubGoal1_577, &HLDSSubGoal_579, BeforeInsideSVarState_578, &AfterInsideSVarState_580, STATE_VARIABLE_UrInfo_55_591, &STATE_VARIABLE_UrInfo_56_592);
              hlds__make_hlds__state_var__svar_finish_local_state_vars_5_p_0(STATE_VARIABLE_UrInfo_56_592, StateVars_574, STATE_VARIABLE_SVarState_0_94, AfterInsideSVarState_580, STATE_VARIABLE_SVarState_95);
              QualInfo0_581 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_56_592, (MR_Integer) 2))));
              hlds__make_hlds__qual_info__qual_info_set_found_trace_goal_3_p_0((MR_Integer) 1, QualInfo0_581, &QualInfo_582);
              Var_605 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_56_592, (MR_Integer) 0))));
              Var_606 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_56_592, (MR_Integer) 1))));
              Var_608 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_56_592, (MR_Integer) 3))));
              Var_609 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_56_592, (MR_Integer) 4))));
              Var_610 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_56_592, (MR_Integer) 5))));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_UrInfo_97 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_605));
                MR_hl_field(0, base, 1) = ((MR_Box) (Var_606));
                MR_hl_field(0, base, 2) = ((MR_Box) (QualInfo_582));
                MR_hl_field(0, base, 3) = ((MR_Box) (Var_608));
                MR_hl_field(0, base, 4) = ((MR_Box) (Var_609));
                MR_hl_field(0, base, 5) = ((MR_Box) (Var_610));
              }
              {
                Reason_583 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Reason_583, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(3, Reason_583, 1) = ((MR_Box) (MaybeCompileTime_558));
                MR_hl_field(3, Reason_583, 2) = ((MR_Box) (MaybeRunTime_559));
                MR_hl_field(3, Reason_583, 3) = ((MR_Box) (MaybeIOHLDS_573));
                MR_hl_field(3, Reason_583, 4) = ((MR_Box) (MutableHLDSs_564));
                MR_hl_field(3, Reason_583, 5) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                GoalExpr_584 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_584, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_584, 1) = ((MR_Box) (Reason_583));
                MR_hl_field(3, GoalExpr_584, 2) = ((MR_Box) (HLDSSubGoal_579));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_557, &GoalInfo_585);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_12 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_584));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_585));
              }
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word Context_209 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 1))));
              MR_Word Outer0_210 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 2))));
              MR_Word Inner0_211 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 3))));
              MR_Word MaybeOutputVars0_212 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 4))));
              MR_Word MainGoal_213 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 5))));
              MR_Word OrElseGoals_214 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 6))));
              MR_Word MaybeOutputVars_215;
              MR_Word Outer_224;
              MR_Word HLDSGoals_239;
              MR_Word HLDSMainGoal_240;
              MR_Word HLDSOrElseGoals_241;
              MR_Word Inner_246;
              MR_Word ShortHand_250;
              MR_Word GoalExpr_251;
              MR_Word GoalInfo_252;

              if ((MaybeOutputVars0_212 == (MR_Word) ((MR_Unsigned) 0U)))
                MaybeOutputVars_215 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word OutputVars0_216 = ((MR_Word) ((MR_hl_field(1, MaybeOutputVars0_212, (MR_Integer) 0))));
                MR_Word OutputVars_217;

                parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_10, OutputVars0_216, &OutputVars_217);
                {
                  MaybeOutputVars_215 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MaybeOutputVars_215, 0) = ((MR_Box) (OutputVars_217));
                }
              }
              if (((MR_tag((MR_Word) Outer0_210)) == (MR_Integer) 0))
              {
                MR_Word OuterStateVar0_218 = ((MR_Word) ((MR_hl_field(0, Outer0_210, (MR_Integer) 0))));
                MR_Word OuterStateVar_219;
                MR_Word OuterDI_220;
                MR_Word OuterUO_221;
                MR_Word OuterScopeInfo2_249;
                MR_Word STATE_VARIABLE_SVarState_73_262;
                MR_Word STATE_VARIABLE_UrInfo_74_263;
                MR_Word STATE_VARIABLE_SVarState_86_275;

                parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_10, OuterStateVar0_218, &OuterStateVar_219);
                hlds__make_hlds__state_var__svar_start_outer_atomic_scope_9_p_0(Context_209, OuterStateVar_219, &OuterDI_220, &OuterUO_221, &OuterScopeInfo2_249, STATE_VARIABLE_SVarState_0_94, &STATE_VARIABLE_SVarState_73_262, STATE_VARIABLE_UrInfo_0_96, &STATE_VARIABLE_UrInfo_74_263);
                {
                  Outer_224 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Outer_224, 0) = ((MR_Box) (OuterDI_220));
                  MR_hl_field(0, Outer_224, 1) = ((MR_Box) (OuterUO_221));
                }
                if (((MR_tag((MR_Word) Inner0_211)) == (MR_Integer) 0))
                {
                  MR_Word InnerStateVar0_227 = ((MR_Word) ((MR_hl_field(0, Inner0_211, (MR_Integer) 0))));
                  MR_Word InnerStateVar_228;
                  MR_Word BeforeDisjSVarState_233;
                  MR_Word HLDSMainGoal0_234;
                  MR_Word AfterMainSVarState_235;
                  MR_Word MainDisjState_236;
                  MR_Word OrElseDisjStates_237;
                  MR_Word AllDisjStates_238;
                  MR_Word InnerScopeInfo2_243;
                  MR_Word InnerDI_244;
                  MR_Word InnerUO_245;
                  MR_Word STATE_VARIABLE_UrInfo_79_268;
                  MR_Word STATE_VARIABLE_UrInfo_80_269;
                  MR_Word STATE_VARIABLE_UrInfo_81_270;
                  MR_Word STATE_VARIABLE_SVarState_82_271;
                  MR_Word STATE_VARIABLE_UrInfo_83_272;

                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_10, InnerStateVar0_227, &InnerStateVar_228);
                  hlds__make_hlds__state_var__svar_start_inner_atomic_scope_7_p_0(Context_209, InnerStateVar_228, &InnerScopeInfo2_243, STATE_VARIABLE_SVarState_73_262, &BeforeDisjSVarState_233, STATE_VARIABLE_UrInfo_74_263, &STATE_VARIABLE_UrInfo_79_268);
                  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0(LocKind_9, Renaming_10, MainGoal_213, &HLDSMainGoal0_234, BeforeDisjSVarState_233, &AfterMainSVarState_235, STATE_VARIABLE_UrInfo_79_268, &STATE_VARIABLE_UrInfo_80_269);
                  {
                    MainDisjState_236 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, MainDisjState_236, 0) = ((MR_Box) (HLDSMainGoal0_234));
                    MR_hl_field(0, MainDisjState_236, 1) = ((MR_Box) (AfterMainSVarState_235));
                  }
                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_7_p_0(LocKind_9, Renaming_10, OrElseGoals_214, &OrElseDisjStates_237, BeforeDisjSVarState_233, STATE_VARIABLE_UrInfo_80_269, &STATE_VARIABLE_UrInfo_81_270);
                  {
                    AllDisjStates_238 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, AllDisjStates_238, 0) = ((MR_Box) (MainDisjState_236));
                    MR_hl_field(1, AllDisjStates_238, 1) = ((MR_Box) (OrElseDisjStates_237));
                  }
                  hlds__make_hlds__state_var__svar_finish_disjunction_6_p_0(AllDisjStates_238, &HLDSGoals_239, BeforeDisjSVarState_233, &STATE_VARIABLE_SVarState_82_271, STATE_VARIABLE_UrInfo_81_270, &STATE_VARIABLE_UrInfo_83_272);
                  hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_8_p_0(Context_209, InnerScopeInfo2_243, &InnerDI_244, &InnerUO_245, STATE_VARIABLE_SVarState_82_271, &STATE_VARIABLE_SVarState_86_275, STATE_VARIABLE_UrInfo_83_272, STATE_VARIABLE_UrInfo_97);
                  {
                    Inner_246 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Inner_246, 0) = ((MR_Box) (InnerDI_244));
                    MR_hl_field(0, Inner_246, 1) = ((MR_Box) (InnerUO_245));
                  }
                }
                else
                {
                  MR_Word InnerDI0_247;
                  MR_Word InnerUO0_248;
                  MR_Word InnerDI_294;
                  MR_Word InnerUO_295;
                  MR_Word HLDSMainGoal0_760;
                  MR_Word AfterMainSVarState_761;
                  MR_Word MainDisjState_762;
                  MR_Word OrElseDisjStates_763;
                  MR_Word AllDisjStates_764;
                  MR_Word STATE_VARIABLE_UrInfo_80_766;
                  MR_Word STATE_VARIABLE_UrInfo_81_767;

                  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0(LocKind_9, Renaming_10, MainGoal_213, &HLDSMainGoal0_760, STATE_VARIABLE_SVarState_73_262, &AfterMainSVarState_761, STATE_VARIABLE_UrInfo_74_263, &STATE_VARIABLE_UrInfo_80_766);
                  {
                    MainDisjState_762 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, MainDisjState_762, 0) = ((MR_Box) (HLDSMainGoal0_760));
                    MR_hl_field(0, MainDisjState_762, 1) = ((MR_Box) (AfterMainSVarState_761));
                  }
                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_7_p_0(LocKind_9, Renaming_10, OrElseGoals_214, &OrElseDisjStates_763, STATE_VARIABLE_SVarState_73_262, STATE_VARIABLE_UrInfo_80_766, &STATE_VARIABLE_UrInfo_81_767);
                  {
                    AllDisjStates_764 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, AllDisjStates_764, 0) = ((MR_Box) (MainDisjState_762));
                    MR_hl_field(1, AllDisjStates_764, 1) = ((MR_Box) (OrElseDisjStates_763));
                  }
                  hlds__make_hlds__state_var__svar_finish_disjunction_6_p_0(AllDisjStates_764, &HLDSGoals_239, STATE_VARIABLE_SVarState_73_262, &STATE_VARIABLE_SVarState_86_275, STATE_VARIABLE_UrInfo_81_767, STATE_VARIABLE_UrInfo_97);
                  InnerDI0_247 = ((MR_Word) ((MR_hl_field(1, Inner0_211, (MR_Integer) 0))));
                  InnerUO0_248 = ((MR_Word) ((MR_hl_field(1, Inner0_211, (MR_Integer) 1))));
                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_10, InnerDI0_247, &InnerDI_294);
                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_10, InnerUO0_248, &InnerUO_295);
                  {
                    Inner_246 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Inner_246, 0) = ((MR_Box) (InnerDI_294));
                    MR_hl_field(0, Inner_246, 1) = ((MR_Box) (InnerUO_295));
                  }
                }
                hlds__make_hlds__state_var__svar_finish_outer_atomic_scope_3_p_0(OuterScopeInfo2_249, STATE_VARIABLE_SVarState_86_275, STATE_VARIABLE_SVarState_95);
              }
              else
              {
                MR_Word OuterDI0_225 = ((MR_Word) ((MR_hl_field(1, Outer0_210, (MR_Integer) 0))));
                MR_Word OuterUO0_226 = ((MR_Word) ((MR_hl_field(1, Outer0_210, (MR_Integer) 1))));
                MR_Word OuterDI_292;
                MR_Word OuterUO_293;

                parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_10, OuterDI0_225, &OuterDI_292);
                parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_10, OuterUO0_226, &OuterUO_293);
                {
                  Outer_224 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Outer_224, 0) = ((MR_Box) (OuterDI_292));
                  MR_hl_field(0, Outer_224, 1) = ((MR_Box) (OuterUO_293));
                }
                if (((MR_tag((MR_Word) Inner0_211)) == (MR_Integer) 0))
                {
                  MR_Word InnerStateVar0_685 = ((MR_Word) ((MR_hl_field(0, Inner0_211, (MR_Integer) 0))));
                  MR_Word InnerStateVar_686;
                  MR_Word InnerScopeInfo2_697;
                  MR_Word InnerDI_698;
                  MR_Word InnerUO_699;
                  MR_Word BeforeDisjSVarState_729;
                  MR_Word HLDSMainGoal0_730;
                  MR_Word AfterMainSVarState_731;
                  MR_Word MainDisjState_732;
                  MR_Word OrElseDisjStates_733;
                  MR_Word AllDisjStates_734;
                  MR_Word STATE_VARIABLE_UrInfo_79_743;
                  MR_Word STATE_VARIABLE_UrInfo_80_744;
                  MR_Word STATE_VARIABLE_UrInfo_81_745;
                  MR_Word STATE_VARIABLE_SVarState_82_746;
                  MR_Word STATE_VARIABLE_UrInfo_83_747;

                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_10, InnerStateVar0_685, &InnerStateVar_686);
                  hlds__make_hlds__state_var__svar_start_inner_atomic_scope_7_p_0(Context_209, InnerStateVar_686, &InnerScopeInfo2_697, STATE_VARIABLE_SVarState_0_94, &BeforeDisjSVarState_729, STATE_VARIABLE_UrInfo_0_96, &STATE_VARIABLE_UrInfo_79_743);
                  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0(LocKind_9, Renaming_10, MainGoal_213, &HLDSMainGoal0_730, BeforeDisjSVarState_729, &AfterMainSVarState_731, STATE_VARIABLE_UrInfo_79_743, &STATE_VARIABLE_UrInfo_80_744);
                  {
                    MainDisjState_732 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, MainDisjState_732, 0) = ((MR_Box) (HLDSMainGoal0_730));
                    MR_hl_field(0, MainDisjState_732, 1) = ((MR_Box) (AfterMainSVarState_731));
                  }
                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_7_p_0(LocKind_9, Renaming_10, OrElseGoals_214, &OrElseDisjStates_733, BeforeDisjSVarState_729, STATE_VARIABLE_UrInfo_80_744, &STATE_VARIABLE_UrInfo_81_745);
                  {
                    AllDisjStates_734 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, AllDisjStates_734, 0) = ((MR_Box) (MainDisjState_732));
                    MR_hl_field(1, AllDisjStates_734, 1) = ((MR_Box) (OrElseDisjStates_733));
                  }
                  hlds__make_hlds__state_var__svar_finish_disjunction_6_p_0(AllDisjStates_734, &HLDSGoals_239, BeforeDisjSVarState_729, &STATE_VARIABLE_SVarState_82_746, STATE_VARIABLE_UrInfo_81_745, &STATE_VARIABLE_UrInfo_83_747);
                  hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_8_p_0(Context_209, InnerScopeInfo2_697, &InnerDI_698, &InnerUO_699, STATE_VARIABLE_SVarState_82_746, STATE_VARIABLE_SVarState_95, STATE_VARIABLE_UrInfo_83_747, STATE_VARIABLE_UrInfo_97);
                  {
                    Inner_246 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Inner_246, 0) = ((MR_Box) (InnerDI_698));
                    MR_hl_field(0, Inner_246, 1) = ((MR_Box) (InnerUO_699));
                  }
                }
                else
                {
                  MR_Word InnerDI0_705;
                  MR_Word InnerUO0_706;
                  MR_Word InnerDI_709;
                  MR_Word InnerUO_710;
                  MR_Word HLDSMainGoal0_773;
                  MR_Word AfterMainSVarState_774;
                  MR_Word MainDisjState_775;
                  MR_Word OrElseDisjStates_776;
                  MR_Word AllDisjStates_777;
                  MR_Word STATE_VARIABLE_UrInfo_80_779;
                  MR_Word STATE_VARIABLE_UrInfo_81_780;

                  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0(LocKind_9, Renaming_10, MainGoal_213, &HLDSMainGoal0_773, STATE_VARIABLE_SVarState_0_94, &AfterMainSVarState_774, STATE_VARIABLE_UrInfo_0_96, &STATE_VARIABLE_UrInfo_80_779);
                  {
                    MainDisjState_775 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, MainDisjState_775, 0) = ((MR_Box) (HLDSMainGoal0_773));
                    MR_hl_field(0, MainDisjState_775, 1) = ((MR_Box) (AfterMainSVarState_774));
                  }
                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_7_p_0(LocKind_9, Renaming_10, OrElseGoals_214, &OrElseDisjStates_776, STATE_VARIABLE_SVarState_0_94, STATE_VARIABLE_UrInfo_80_779, &STATE_VARIABLE_UrInfo_81_780);
                  {
                    AllDisjStates_777 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, AllDisjStates_777, 0) = ((MR_Box) (MainDisjState_775));
                    MR_hl_field(1, AllDisjStates_777, 1) = ((MR_Box) (OrElseDisjStates_776));
                  }
                  hlds__make_hlds__state_var__svar_finish_disjunction_6_p_0(AllDisjStates_777, &HLDSGoals_239, STATE_VARIABLE_SVarState_0_94, STATE_VARIABLE_SVarState_95, STATE_VARIABLE_UrInfo_81_780, STATE_VARIABLE_UrInfo_97);
                  InnerDI0_705 = ((MR_Word) ((MR_hl_field(1, Inner0_211, (MR_Integer) 0))));
                  InnerUO0_706 = ((MR_Word) ((MR_hl_field(1, Inner0_211, (MR_Integer) 1))));
                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_10, InnerDI0_705, &InnerDI_709);
                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_10, InnerUO0_706, &InnerUO_710);
                  {
                    Inner_246 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Inner_246, 0) = ((MR_Box) (InnerDI_709));
                    MR_hl_field(0, Inner_246, 1) = ((MR_Box) (InnerUO_710));
                  }
                }
              }
              if ((HLDSGoals_239 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_parse_tree_goal_to_hlds_atomic\'/8", (MR_String) "atomic HLDSGoals = []");
                  return;
                }
              else
              {
                HLDSMainGoal_240 = ((MR_Word) ((MR_hl_field(1, HLDSGoals_239, (MR_Integer) 0))));
                HLDSOrElseGoals_241 = ((MR_Word) ((MR_hl_field(1, HLDSGoals_239, (MR_Integer) 1))));
              }
              {
                ShortHand_250 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, ShortHand_250, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(1, ShortHand_250, 1) = ((MR_Box) (Outer_224));
                MR_hl_field(1, ShortHand_250, 2) = ((MR_Box) (Inner_246));
                MR_hl_field(1, ShortHand_250, 3) = ((MR_Box) (MaybeOutputVars_215));
                MR_hl_field(1, ShortHand_250, 4) = ((MR_Box) (HLDSMainGoal_240));
                MR_hl_field(1, ShortHand_250, 5) = ((MR_Box) (HLDSOrElseGoals_241));
                MR_hl_field(1, ShortHand_250, 6) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                GoalExpr_251 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_251, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(3, GoalExpr_251, 1) = ((MR_Box) (ShortHand_250));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_209, &GoalInfo_252);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_12 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_251));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_252));
              }
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word Context_615 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 1))));
              MR_Word MaybeIO0_616 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 2))));
              MR_Word SubGoal0_617 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 3))));
              MR_Word Then0_618 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 4))));
              MR_Word MaybeElse0_619 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 5))));
              MR_Word Catches0_620 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 6))));
              MR_Word MaybeCatchAny0_621 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 7))));

              if ((MaybeIO0_616 == (MR_Word) ((MR_Unsigned) 0U)))
                hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_13_p_0(LocKind_9, Renaming_10, SubGoal0_617, Then0_618, MaybeElse0_619, Catches0_620, MaybeCatchAny0_621, Context_615, HLDSGoal_12, STATE_VARIABLE_SVarState_0_94, STATE_VARIABLE_SVarState_95, STATE_VARIABLE_UrInfo_0_96, STATE_VARIABLE_UrInfo_97);
              else
              {
                MR_Word IOStateVar0_622 = ((MR_Word) ((MR_hl_field(1, MaybeIO0_616, (MR_Integer) 0))));

                if ((MaybeElse0_619 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word IOStateVar_623;

                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_10, IOStateVar0_622, &IOStateVar_623);
                  hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_14_p_0(LocKind_9, Renaming_10, IOStateVar0_622, IOStateVar_623, SubGoal0_617, Then0_618, Catches0_620, MaybeCatchAny0_621, Context_615, HLDSGoal_12, STATE_VARIABLE_SVarState_0_94, STATE_VARIABLE_SVarState_95, STATE_VARIABLE_UrInfo_0_96, STATE_VARIABLE_UrInfo_97);
                }
                else
                {
                  MR_Word Pieces_625;
                  MR_Word Spec_626;
                  MR_Word Var_632;
                  MR_Word Var_633;
                  MR_Word Var_635;
                  MR_Word Var_636;

                  Var_633 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[44])));
                  Var_636 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[50])));
                  Var_635 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_636, (MR_Word) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[13])));
                  Var_632 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_633, Var_635);
                  Pieces_625 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[34])), Var_632);
                  {
                    Spec_626 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Spec_626, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_parse_tree_goal_to_hlds_try\'/8"));
                    MR_hl_field(0, Spec_626, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, Spec_626, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                    MR_hl_field(0, Spec_626, 3) = ((MR_Box) (Context_615));
                    MR_hl_field(0, Spec_626, 4) = ((MR_Box) (Pieces_625));
                  }
                  hlds__make_hlds__state_var__add_unravel_error_3_p_0(Spec_626, STATE_VARIABLE_UrInfo_0_96, STATE_VARIABLE_UrInfo_97);
                  *HLDSGoal_12 = hlds__make_goal__true_goal_with_context_1_f_0(Context_615);
                  *STATE_VARIABLE_SVarState_95 = STATE_VARIABLE_SVarState_0_94;
                }
              }
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word P_44 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 2))));
              MR_Word Q_45 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 3))));
              MR_Word TransformedGoal_46;
              MR_Word Var_115;
              MR_Word Var_116;
              MR_Word Var_117;
              MR_Word Context_147 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 1))));
              MR_Word next_value_of_Goal_11;

              {
                Var_117 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_117, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, Var_117, 1) = ((MR_Box) (Context_147));
                MR_hl_field(3, Var_117, 2) = ((MR_Box) (Q_45));
              }
              {
                Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_116, 0) = ((MR_Box) (Var_117));
                MR_hl_field(1, Var_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_115 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_115, 0) = ((MR_Box) (Context_147));
                MR_hl_field(2, Var_115, 1) = ((MR_Box) (P_44));
                MR_hl_field(2, Var_115, 2) = ((MR_Box) (Var_116));
              }
              {
                TransformedGoal_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, TransformedGoal_46, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, TransformedGoal_46, 1) = ((MR_Box) (Context_147));
                MR_hl_field(3, TransformedGoal_46, 2) = ((MR_Box) (Var_115));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_11 = TransformedGoal_46;
              Goal_11 = next_value_of_Goal_11;
              continue;
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word Context_434 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 1))));
              MR_Word SubGoalA_435 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 2))));
              MR_Word SubGoalB_436 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 3))));
              MR_Word HLDSSubGoalA_438;
              MR_Word HLDSSubGoalB_439;
              MR_Word GoalExpr_441;
              MR_Word GoalInfo_442;
              MR_Word STATE_VARIABLE_SVarState_28_443;
              MR_Word STATE_VARIABLE_UrInfo_29_444;
              MR_Word Var_445;
              MR_Word Var_440;

              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0(LocKind_9, Renaming_10, SubGoalA_435, &HLDSSubGoalA_438, STATE_VARIABLE_SVarState_0_94, &STATE_VARIABLE_SVarState_28_443, STATE_VARIABLE_UrInfo_0_96, &STATE_VARIABLE_UrInfo_29_444);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0(LocKind_9, Renaming_10, SubGoalB_436, &HLDSSubGoalB_439, STATE_VARIABLE_SVarState_28_443, &Var_440, STATE_VARIABLE_UrInfo_29_444, STATE_VARIABLE_UrInfo_97);
              *STATE_VARIABLE_SVarState_95 = STATE_VARIABLE_SVarState_0_94;
              {
                Var_445 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_445, 0) = ((MR_Box) (HLDSSubGoalA_438));
                MR_hl_field(0, Var_445, 1) = ((MR_Box) (HLDSSubGoalB_439));
              }
              {
                GoalExpr_441 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_441, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(3, GoalExpr_441, 1) = ((MR_Box) (Var_445));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_434, &GoalInfo_442);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_12 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_441));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_442));
              }
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Word Context_446 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 1))));
              MR_String EventName_447 = ((MR_String) ((MR_hl_field(3, Goal_11, (MR_Integer) 2))));
              MR_Word ArgTerms0_448 = ((MR_Word) ((MR_hl_field(3, Goal_11, (MR_Integer) 3))));
              MR_Word ArgTerms1_449;
              MR_Word ArgTerms_450;
              MR_Word HeadVars_451;
              MR_Word HeadVarsArgTerms_452;
              MR_Integer Arity_453;
              MR_Word Modes_454;
              MR_Word Details_455;
              MR_Word GoalExpr0_456;
              MR_Word GoalInfo_457;
              MR_Word HLDSGoal0_458;
              MR_Word VarSet1_459;
              MR_Word CallId_460;
              MR_Word STATE_VARIABLE_SVarState_35_462;
              MR_Word STATE_VARIABLE_UrInfo_36_463;
              MR_Word Var_464;
              MR_Word Var_467;
              MR_Word Var_469;
              MR_Word STATE_VARIABLE_SVarState_43_470;

              hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(ArgTerms0_448, &ArgTerms1_449);
              parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_10, ArgTerms1_449, &ArgTerms_450);
              hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_7_p_0(ArgTerms_450, &HeadVars_451, &HeadVarsArgTerms_452, STATE_VARIABLE_SVarState_0_94, &STATE_VARIABLE_SVarState_35_462, STATE_VARIABLE_UrInfo_0_96, &STATE_VARIABLE_UrInfo_36_463);
              mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), HeadVars_451, &Arity_453);
              Var_464 = parse_tree__prog_mode__in_mode_0_f_0();
              mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Arity_453, ((MR_Box) (Var_464)), &Modes_454);
              {
                Details_455 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Details_455, 0) = ((MR_Box) (EventName_447));
              }
              {
                GoalExpr0_456 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr0_456, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, GoalExpr0_456, 1) = ((MR_Box) (Details_455));
                MR_hl_field(3, GoalExpr0_456, 2) = ((MR_Box) (HeadVars_451));
                MR_hl_field(3, GoalExpr0_456, 3) = ((MR_Box) (Modes_454));
                MR_hl_field(3, GoalExpr0_456, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, GoalExpr0_456, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_446, &GoalInfo_457);
              {
                HLDSGoal0_458 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, HLDSGoal0_458, 0) = ((MR_Box) (GoalExpr0_456));
                MR_hl_field(0, HLDSGoal0_458, 1) = ((MR_Box) (GoalInfo_457));
              }
              VarSet1_459 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_36_463, (MR_Integer) 3))));
              {
                Var_467 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_467, 0) = ((MR_Box) (VarSet1_459));
              }
              {
                CallId_460 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, CallId_460, 0) = ((MR_Box) (Var_467));
                MR_hl_field(1, CallId_460, 1) = ((MR_Box) (Details_455));
              }
              {
                Var_469 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_469, 0) = ((MR_Box) (CallId_460));
              }
              hlds__make_hlds__superhomogeneous__insert_arg_unifications_9_p_0(HeadVarsArgTerms_452, Context_446, Var_469, HLDSGoal0_458, HLDSGoal_12, STATE_VARIABLE_SVarState_35_462, &STATE_VARIABLE_SVarState_43_470, STATE_VARIABLE_UrInfo_36_463, STATE_VARIABLE_UrInfo_97);
              hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(LocKind_9, STATE_VARIABLE_SVarState_43_470, STATE_VARIABLE_SVarState_95);
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_3;
  MR_Word conv1_HeadVar__5_5;
  MR_Word conv0_HeadVar__7_7;

  hlds__make_hlds__state_var__lookup_dot_state_var_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__3_3, ((MR_Word) (wrapper_arg_3)), &conv1_HeadVar__5_5, ((MR_Word) (wrapper_arg_5)), &conv0_HeadVar__7_7);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_3));
  *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__5_5));
  *wrapper_arg_6 = ((MR_Box) (conv0_HeadVar__7_7));
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_14_p_0(
  MR_Word LocKind_15,
  MR_Word Renaming_16,
  MR_Word Vars0_17,
  MR_Word StateVars0_18,
  MR_Word DotSVars0_19,
  MR_Word ColonSVars0_20,
  MR_Word Context_21,
  MR_Word * QuantVars_22,
  MR_Word Goal_23,
  MR_Word * HLDSGoal_24,
  MR_Word STATE_VARIABLE_SVarState_0_35,
  MR_Word * STATE_VARIABLE_SVarState_36,
  MR_Word STATE_VARIABLE_UrInfo_0_37,
  MR_Word * STATE_VARIABLE_UrInfo_38)
{
  MR_Word Vars_27;
  MR_Word StateVars1_28;
  MR_Word DotSVars1_29;
  MR_Word ColonSVars1_30;
  MR_Word OldStateVars_31;
  MR_Word DotSVars_32;
  MR_Word NewStateVars_33;
  MR_Word ColonSVars_34;
  MR_Word Var_43;
  MR_Word STATE_VARIABLE_SVarState_44_44;
  MR_Word STATE_VARIABLE_UrInfo_45_45;
  MR_Word STATE_VARIABLE_SVarState_47_47;
  MR_Word STATE_VARIABLE_UrInfo_48_48;
  MR_Word STATE_VARIABLE_SVarState_49_49;
  MR_Word STATE_VARIABLE_UrInfo_50_50;
  MR_Word STATE_VARIABLE_SVarState_52_52;
  MR_Word STATE_VARIABLE_UrInfo_53_53;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Box conv4_STATE_VARIABLE_SVarState_44_44;
  MR_Box conv3_STATE_VARIABLE_UrInfo_45_45;
  MR_Box conv6_STATE_VARIABLE_SVarState_47_47;
  MR_Box conv5_STATE_VARIABLE_UrInfo_48_48;
  MR_Box conv8_STATE_VARIABLE_SVarState_52_52;
  MR_Box conv7_STATE_VARIABLE_UrInfo_53_53;
  MR_Box conv10_STATE_VARIABLE_SVarState_36;
  MR_Box conv9_STATE_VARIABLE_UrInfo_38;

  parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_16, Vars0_17, &Vars_27);
  parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_16, StateVars0_18, &StateVars1_28);
  parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_16, DotSVars0_19, &DotSVars1_29);
  parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_16, ColonSVars0_20, &ColonSVars1_30);
  {
    Var_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_43, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_4[0]));
    MR_hl_field(0, Var_43, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_14_p_0_1));
    MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_43, 3) = ((MR_Box) (Context_21));
  }
  mercury__list__map_foldl2_7_p_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_unravel_info_0), Var_43, StateVars1_28, &OldStateVars_31, ((MR_Box) (STATE_VARIABLE_SVarState_0_35)), &conv4_STATE_VARIABLE_SVarState_44_44, ((MR_Box) (STATE_VARIABLE_UrInfo_0_37)), &conv3_STATE_VARIABLE_UrInfo_45_45);
  STATE_VARIABLE_SVarState_44_44 = ((MR_Word) (conv4_STATE_VARIABLE_SVarState_44_44));
  STATE_VARIABLE_UrInfo_45_45 = ((MR_Word) (conv3_STATE_VARIABLE_UrInfo_45_45));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_unravel_info_0), Var_43, DotSVars1_29, &DotSVars_32, ((MR_Box) (STATE_VARIABLE_SVarState_44_44)), &conv6_STATE_VARIABLE_SVarState_47_47, ((MR_Box) (STATE_VARIABLE_UrInfo_45_45)), &conv5_STATE_VARIABLE_UrInfo_48_48);
  STATE_VARIABLE_SVarState_47_47 = ((MR_Word) (conv6_STATE_VARIABLE_SVarState_47_47));
  STATE_VARIABLE_UrInfo_48_48 = ((MR_Word) (conv5_STATE_VARIABLE_UrInfo_48_48));
  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0(LocKind_15, Renaming_16, Goal_23, HLDSGoal_24, STATE_VARIABLE_SVarState_47_47, &STATE_VARIABLE_SVarState_49_49, STATE_VARIABLE_UrInfo_48_48, &STATE_VARIABLE_UrInfo_50_50);
  mercury__list__map_foldl2_7_p_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_unravel_info_0), Var_43, StateVars1_28, &NewStateVars_33, ((MR_Box) (STATE_VARIABLE_SVarState_49_49)), &conv8_STATE_VARIABLE_SVarState_52_52, ((MR_Box) (STATE_VARIABLE_UrInfo_50_50)), &conv7_STATE_VARIABLE_UrInfo_53_53);
  STATE_VARIABLE_SVarState_52_52 = ((MR_Word) (conv8_STATE_VARIABLE_SVarState_52_52));
  STATE_VARIABLE_UrInfo_53_53 = ((MR_Word) (conv7_STATE_VARIABLE_UrInfo_53_53));
  mercury__list__map_foldl2_7_p_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_unravel_info_0), Var_43, ColonSVars1_30, &ColonSVars_34, ((MR_Box) (STATE_VARIABLE_SVarState_52_52)), &conv10_STATE_VARIABLE_SVarState_36, ((MR_Box) (STATE_VARIABLE_UrInfo_53_53)), &conv9_STATE_VARIABLE_UrInfo_38);
  *STATE_VARIABLE_SVarState_36 = ((MR_Word) (conv10_STATE_VARIABLE_SVarState_36));
  *STATE_VARIABLE_UrInfo_38 = ((MR_Word) (conv9_STATE_VARIABLE_UrInfo_38));
  Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), DotSVars_32, ColonSVars_34);
  Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), NewStateVars_33, Var_59);
  Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), OldStateVars_31, Var_58);
  *QuantVars_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), Vars_27, Var_57);
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_7_p_0(
  MR_Word LocKind_1,
  MR_Word Renaming_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_UrInfo_0_6,
  MR_Word * STATE_VARIABLE_UrInfo_7)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_UrInfo_7 = STATE_VARIABLE_UrInfo_0_6;
  }
  else
  {
    MR_Word Goal_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Goals_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word DisjState_18;
    MR_Word DisjStates_19;
    MR_Word HLDSGoal_22;
    MR_Word SVarStateAfterDisjunct_23;
    MR_Word STATE_VARIABLE_UrInfo_26_26;

    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0(LocKind_1, Renaming_2, Goal_16, &HLDSGoal_22, HeadVar__5_5, &SVarStateAfterDisjunct_23, STATE_VARIABLE_UrInfo_0_6, &STATE_VARIABLE_UrInfo_26_26);
    {
      DisjState_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, DisjState_18, 0) = ((MR_Box) (HLDSGoal_22));
      MR_hl_field(0, DisjState_18, 1) = ((MR_Box) (SVarStateAfterDisjunct_23));
    }
    hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_7_p_0(LocKind_1, Renaming_2, Goals_17, &DisjStates_19, HeadVar__5_5, STATE_VARIABLE_UrInfo_26_26, STATE_VARIABLE_UrInfo_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (DisjState_18));
      MR_hl_field(1, base, 1) = ((MR_Box) (DisjStates_19));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_13_p_0(
  MR_Word LocKind_14,
  MR_Word Renaming_15,
  MR_Word SubGoal_16,
  MR_Word ThenGoal_17,
  MR_Word MaybeElseGoal_18,
  MR_Word Catches_19,
  MR_Word MaybeCatchAny_20,
  MR_Word Context_21,
  MR_Word * TryGoal_22,
  MR_Word STATE_VARIABLE_SVarState_0_41,
  MR_Word * STATE_VARIABLE_SVarState_42,
  MR_Word STATE_VARIABLE_UrInfo_0_43,
  MR_Word * STATE_VARIABLE_UrInfo_44)
{
  MR_Word ResultVar_25;
  MR_Word ExcpVar_26;
  MR_Word ResultVarTerm_27;
  MR_Word ExcpVarTerm_28;
  MR_Word NullTupleTerm_29;
  MR_Word GoalInfo_30;
  MR_Word CallMagicGoal_31;
  MR_Word ResultIsSucceededUnifyGoal_32;
  MR_Word SucceededSubGoal_34;
  MR_Word ResultIsSucceededDisjunctGoal_35;
  MR_Word ResultIsExceptionDisjunctGoal_36;
  MR_Word CallMagicThenDisjunctionGoal_37;
  MR_Word HLDSCallMagicThenDisjunctionGoal_38;
  MR_Word ShortHand_39;
  MR_Word GoalExpr_40;
  MR_Word STATE_VARIABLE_UrInfo_46_46;
  MR_Word STATE_VARIABLE_UrInfo_47_47;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_55;
  MR_Word Var_70;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word Var_79;
  MR_Word SymName_81;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word ResultIsExceptionUnify_86;
  MR_Word CatchChain_87;
  MR_Word Var_88;
  MR_Word Var_91;
  MR_Word SymName_93;
  MR_Word Var_94;
  MR_Word Var_95;

  hlds__make_hlds__state_var__create_new_named_unravel_var_4_p_0((MR_String) "TryResult", &ResultVar_25, STATE_VARIABLE_UrInfo_0_43, &STATE_VARIABLE_UrInfo_46_46);
  hlds__make_hlds__state_var__create_new_unravel_var_3_p_0(&ExcpVar_26, STATE_VARIABLE_UrInfo_46_46, &STATE_VARIABLE_UrInfo_47_47);
  {
    ResultVarTerm_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ResultVarTerm_27, 0) = ((MR_Box) (ResultVar_25));
    MR_hl_field(1, ResultVarTerm_27, 1) = ((MR_Box) (Context_21));
  }
  {
    ExcpVarTerm_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ExcpVarTerm_28, 0) = ((MR_Box) (ExcpVar_26));
    MR_hl_field(1, ExcpVarTerm_28, 1) = ((MR_Box) (Context_21));
  }
  {
    NullTupleTerm_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, NullTupleTerm_29, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[4]));
    MR_hl_field(0, NullTupleTerm_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, NullTupleTerm_29, 2) = ((MR_Box) (Context_21));
  }
  hlds__hlds_goal__goal_info_init_2_p_0(Context_21, &GoalInfo_30);
  Var_79 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_79));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_String) "magic_exception_result"));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (ResultVarTerm_27));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    CallMagicGoal_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, CallMagicGoal_31, 0) = ((MR_Box) (Context_21));
    MR_hl_field(1, CallMagicGoal_31, 1) = ((MR_Box) (Var_51));
    MR_hl_field(1, CallMagicGoal_31, 2) = ((MR_Box) (Var_52));
    MR_hl_field(1, CallMagicGoal_31, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  Var_82 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
  {
    SymName_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_81, 0) = ((MR_Box) (Var_82));
    MR_hl_field(1, SymName_81, 1) = ((MR_Box) ((MR_String) "succeeded"));
  }
  {
    Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_83, 0) = ((MR_Box) (NullTupleTerm_29));
    MR_hl_field(1, Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SymName_81, Var_83, Context_21, &Var_55);
  {
    ResultIsSucceededUnifyGoal_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ResultIsSucceededUnifyGoal_32, 0) = ((MR_Box) (Context_21));
    MR_hl_field(0, ResultIsSucceededUnifyGoal_32, 1) = ((MR_Box) (ResultVarTerm_27));
    MR_hl_field(0, ResultIsSucceededUnifyGoal_32, 2) = ((MR_Box) (Var_55));
    MR_hl_field(0, ResultIsSucceededUnifyGoal_32, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  if ((MaybeElseGoal_18 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_60;
    MR_Word Var_64;
    MR_Word Var_65;

    {
      Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_60, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
      MR_hl_field(3, Var_60, 2) = ((MR_Box) (Context_21));
      MR_hl_field(3, Var_60, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_60, 4) = ((MR_Box) (SubGoal_16));
    }
    {
      Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_65, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
      MR_hl_field(3, Var_65, 2) = ((MR_Box) (Context_21));
      MR_hl_field(3, Var_65, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_65, 4) = ((MR_Box) (ThenGoal_17));
    }
    {
      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
      MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      SucceededSubGoal_34 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, SucceededSubGoal_34, 0) = ((MR_Box) (Context_21));
      MR_hl_field(2, SucceededSubGoal_34, 1) = ((MR_Box) (Var_60));
      MR_hl_field(2, SucceededSubGoal_34, 2) = ((MR_Box) (Var_64));
    }
  }
  else
  {
    MR_Word ElseGoal_33 = ((MR_Word) ((MR_hl_field(1, MaybeElseGoal_18, (MR_Integer) 0))));

    {
      SucceededSubGoal_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, SucceededSubGoal_34, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, SucceededSubGoal_34, 1) = ((MR_Box) (Context_21));
      MR_hl_field(3, SucceededSubGoal_34, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, SucceededSubGoal_34, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, SucceededSubGoal_34, 4) = ((MR_Box) (SubGoal_16));
      MR_hl_field(3, SucceededSubGoal_34, 5) = ((MR_Box) (ThenGoal_17));
      MR_hl_field(3, SucceededSubGoal_34, 6) = ((MR_Box) (ElseGoal_33));
    }
  }
  {
    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_70, 0) = ((MR_Box) (SucceededSubGoal_34));
    MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    ResultIsSucceededDisjunctGoal_35 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, ResultIsSucceededDisjunctGoal_35, 0) = ((MR_Box) (Context_21));
    MR_hl_field(2, ResultIsSucceededDisjunctGoal_35, 1) = ((MR_Box) (ResultIsSucceededUnifyGoal_32));
    MR_hl_field(2, ResultIsSucceededDisjunctGoal_35, 2) = ((MR_Box) (Var_70));
  }
  Var_94 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
  {
    SymName_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_93, 0) = ((MR_Box) (Var_94));
    MR_hl_field(1, SymName_93, 1) = ((MR_Box) ((MR_String) "exception"));
  }
  {
    Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_95, 0) = ((MR_Box) (ExcpVarTerm_28));
    MR_hl_field(1, Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SymName_93, Var_95, Context_21, &Var_88);
  {
    ResultIsExceptionUnify_86 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ResultIsExceptionUnify_86, 0) = ((MR_Box) (Context_21));
    MR_hl_field(0, ResultIsExceptionUnify_86, 1) = ((MR_Box) (ResultVarTerm_27));
    MR_hl_field(0, ResultIsExceptionUnify_86, 2) = ((MR_Box) (Var_88));
    MR_hl_field(0, ResultIsExceptionUnify_86, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(ResultVarTerm_27, ExcpVarTerm_28, Catches_19, MaybeCatchAny_20, &CatchChain_87);
  {
    Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_91, 0) = ((MR_Box) (CatchChain_87));
    MR_hl_field(1, Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    ResultIsExceptionDisjunctGoal_36 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, ResultIsExceptionDisjunctGoal_36, 0) = ((MR_Box) (Context_21));
    MR_hl_field(2, ResultIsExceptionDisjunctGoal_36, 1) = ((MR_Box) (ResultIsExceptionUnify_86));
    MR_hl_field(2, ResultIsExceptionDisjunctGoal_36, 2) = ((MR_Box) (Var_91));
  }
  {
    Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_73, 1) = ((MR_Box) (Context_21));
    MR_hl_field(3, Var_73, 2) = ((MR_Box) (ResultIsSucceededDisjunctGoal_35));
    MR_hl_field(3, Var_73, 3) = ((MR_Box) (ResultIsExceptionDisjunctGoal_36));
    MR_hl_field(3, Var_73, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
    MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    CallMagicThenDisjunctionGoal_37 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, CallMagicThenDisjunctionGoal_37, 0) = ((MR_Box) (Context_21));
    MR_hl_field(2, CallMagicThenDisjunctionGoal_37, 1) = ((MR_Box) (CallMagicGoal_31));
    MR_hl_field(2, CallMagicThenDisjunctionGoal_37, 2) = ((MR_Box) (Var_72));
  }
  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0(LocKind_14, Renaming_15, CallMagicThenDisjunctionGoal_37, &HLDSCallMagicThenDisjunctionGoal_38, STATE_VARIABLE_SVarState_0_41, STATE_VARIABLE_SVarState_42, STATE_VARIABLE_UrInfo_47_47, STATE_VARIABLE_UrInfo_44);
  {
    ShortHand_39 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, ShortHand_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, ShortHand_39, 1) = ((MR_Box) (ResultVar_25));
    MR_hl_field(2, ShortHand_39, 2) = ((MR_Box) (HLDSCallMagicThenDisjunctionGoal_38));
  }
  {
    GoalExpr_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, GoalExpr_40, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(3, GoalExpr_40, 1) = ((MR_Box) (ShortHand_39));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *TryGoal_22 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_40));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_30));
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_14_p_0(
  MR_Word LocKind_15,
  MR_Word Renaming_16,
  MR_Word IOStateVarUnrenamed_17,
  MR_Word IOStateVar_18,
  MR_Word Goal0_19,
  MR_Word Then0_20,
  MR_Word Catches0_21,
  MR_Word MaybeCatchAny0_22,
  MR_Word Context_23,
  MR_Word * TryGoal_24,
  MR_Word STATE_VARIABLE_SVarState_0_56,
  MR_Word * STATE_VARIABLE_SVarState_57,
  MR_Word STATE_VARIABLE_UrInfo_0_58,
  MR_Word * STATE_VARIABLE_UrInfo_59)
{
  MR_Word ResultVar_27;
  MR_Word ExcpVar_28;
  MR_Word ResultVarTerm_29;
  MR_Word ExcpVarTerm_30;
  MR_Word NullTupleTerm_31;
  MR_Word GoalInfo_32;
  MR_Word CallMagicGoal_33;
  MR_Word HLDSCallMagicGoal_34;
  MR_Word IOStateVarBefore_35;
  MR_Word ResultIsSucceededUnifyGoal_37;
  MR_Word HLDSResultIsSucceededUnifyGoal_38;
  MR_Word IOUnify_39;
  MR_Word ScopedGoal_40;
  MR_Word HLDSScopedGoal_41;
  MR_Word IOStateVarAfter_42;
  MR_Word ScopedThenGoal_43;
  MR_Word HLDSScopedThenGoal_44;
  MR_Word HLDSResultIsSucceededDisjunctGoal_45;
  MR_Word SVarStateAfterResultIsSucceededDisjunct_46;
  MR_Word ResultIsExceptionDisjunctGoal_47;
  MR_Word HLDSResultIsExceptionDisjunctGoal_48;
  MR_Word SVarStateAfterResultIsExceptionDisjunct_49;
  MR_Word DisjunctSVarStates_50;
  MR_Word HLDSDisjuncts_51;
  MR_Word HLDSDisjunction_52;
  MR_Word CallMagicThenDisjunction_53;
  MR_Word IOStateVars_54;
  MR_Word GoalExpr_55;
  MR_Word STATE_VARIABLE_UrInfo_61_61;
  MR_Word STATE_VARIABLE_UrInfo_62_62;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word STATE_VARIABLE_SVarState_70_70;
  MR_Word STATE_VARIABLE_UrInfo_71_71;
  MR_Word STATE_VARIABLE_UrInfo_73_73;
  MR_Word Var_74;
  MR_Word STATE_VARIABLE_SVarState_77_77;
  MR_Word STATE_VARIABLE_UrInfo_78_78;
  MR_Word Var_79;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_85;
  MR_Word Var_95;
  MR_Word Var_96;
  MR_Word STATE_VARIABLE_SVarState_98_98;
  MR_Word STATE_VARIABLE_UrInfo_99_99;
  MR_Word STATE_VARIABLE_SVarState_100_100;
  MR_Word STATE_VARIABLE_UrInfo_101_101;
  MR_Word STATE_VARIABLE_UrInfo_106_106;
  MR_Word Var_107;
  MR_Word Var_108;
  MR_Word Var_109;
  MR_Word STATE_VARIABLE_SVarState_111_111;
  MR_Word STATE_VARIABLE_UrInfo_113_113;
  MR_Word Var_114;
  MR_Word Var_115;
  MR_Word Var_116;
  MR_Word Var_120;
  MR_Word Var_121;
  MR_Word Var_123;
  MR_Word Var_124;

  hlds__make_hlds__state_var__create_new_named_unravel_var_4_p_0((MR_String) "TryResult", &ResultVar_27, STATE_VARIABLE_UrInfo_0_58, &STATE_VARIABLE_UrInfo_61_61);
  hlds__make_hlds__state_var__create_new_unravel_var_3_p_0(&ExcpVar_28, STATE_VARIABLE_UrInfo_61_61, &STATE_VARIABLE_UrInfo_62_62);
  {
    ResultVarTerm_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ResultVarTerm_29, 0) = ((MR_Box) (ResultVar_27));
    MR_hl_field(1, ResultVarTerm_29, 1) = ((MR_Box) (Context_23));
  }
  {
    ExcpVarTerm_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ExcpVarTerm_30, 0) = ((MR_Box) (ExcpVar_28));
    MR_hl_field(1, ExcpVarTerm_30, 1) = ((MR_Box) (Context_23));
  }
  {
    NullTupleTerm_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, NullTupleTerm_31, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[4]));
    MR_hl_field(0, NullTupleTerm_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, NullTupleTerm_31, 2) = ((MR_Box) (Context_23));
  }
  hlds__hlds_goal__goal_info_init_2_p_0(Context_23, &GoalInfo_32);
  Var_66 = hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_f_0();
  {
    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_67, 0) = ((MR_Box) (ResultVarTerm_29));
    MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    CallMagicGoal_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, CallMagicGoal_33, 0) = ((MR_Box) (Context_23));
    MR_hl_field(1, CallMagicGoal_33, 1) = ((MR_Box) (Var_66));
    MR_hl_field(1, CallMagicGoal_33, 2) = ((MR_Box) (Var_67));
    MR_hl_field(1, CallMagicGoal_33, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0(LocKind_15, Renaming_16, CallMagicGoal_33, &HLDSCallMagicGoal_34, STATE_VARIABLE_SVarState_0_56, &STATE_VARIABLE_SVarState_70_70, STATE_VARIABLE_UrInfo_62_62, &STATE_VARIABLE_UrInfo_71_71);
  hlds__make_hlds__state_var__lookup_dot_state_var_7_p_0(Context_23, IOStateVar_18, &IOStateVarBefore_35, STATE_VARIABLE_SVarState_70_70, &STATE_VARIABLE_SVarState_111_111, STATE_VARIABLE_UrInfo_71_71, &STATE_VARIABLE_UrInfo_73_73);
  Var_74 = hlds__make_hlds__goal_expr_to_goal__exception_functor_3_f_0((MR_String) "succeeded", NullTupleTerm_31, Context_23);
  {
    ResultIsSucceededUnifyGoal_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ResultIsSucceededUnifyGoal_37, 0) = ((MR_Box) (Context_23));
    MR_hl_field(0, ResultIsSucceededUnifyGoal_37, 1) = ((MR_Box) (ResultVarTerm_29));
    MR_hl_field(0, ResultIsSucceededUnifyGoal_37, 2) = ((MR_Box) (Var_74));
    MR_hl_field(0, ResultIsSucceededUnifyGoal_37, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0(LocKind_15, Renaming_16, ResultIsSucceededUnifyGoal_37, &HLDSResultIsSucceededUnifyGoal_38, STATE_VARIABLE_SVarState_111_111, &STATE_VARIABLE_SVarState_77_77, STATE_VARIABLE_UrInfo_73_73, &STATE_VARIABLE_UrInfo_78_78);
  {
    Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_83, 0) = ((MR_Box) (IOStateVarUnrenamed_17));
    MR_hl_field(1, Var_83, 1) = ((MR_Box) (Context_23));
  }
  {
    Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_82, 0) = ((MR_Box) (Var_83));
    MR_hl_field(1, Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_79 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_79, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[0]));
    MR_hl_field(0, Var_79, 1) = ((MR_Box) (Var_82));
    MR_hl_field(0, Var_79, 2) = ((MR_Box) (Context_23));
  }
  {
    Var_85 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_85, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[1]));
    MR_hl_field(0, Var_85, 1) = ((MR_Box) (Var_82));
    MR_hl_field(0, Var_85, 2) = ((MR_Box) (Context_23));
  }
  {
    IOUnify_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, IOUnify_39, 0) = ((MR_Box) (Context_23));
    MR_hl_field(0, IOUnify_39, 1) = ((MR_Box) (Var_79));
    MR_hl_field(0, IOUnify_39, 2) = ((MR_Box) (Var_85));
    MR_hl_field(0, IOUnify_39, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_96, 0) = ((MR_Box) (Goal0_19));
    MR_hl_field(1, Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_95 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_95, 0) = ((MR_Box) (Context_23));
    MR_hl_field(2, Var_95, 1) = ((MR_Box) (IOUnify_39));
    MR_hl_field(2, Var_95, 2) = ((MR_Box) (Var_96));
  }
  {
    ScopedGoal_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ScopedGoal_40, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, ScopedGoal_40, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
    MR_hl_field(3, ScopedGoal_40, 2) = ((MR_Box) (Context_23));
    MR_hl_field(3, ScopedGoal_40, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, ScopedGoal_40, 4) = ((MR_Box) (Var_95));
  }
  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0(LocKind_15, Renaming_16, ScopedGoal_40, &HLDSScopedGoal_41, STATE_VARIABLE_SVarState_77_77, &STATE_VARIABLE_SVarState_98_98, STATE_VARIABLE_UrInfo_78_78, &STATE_VARIABLE_UrInfo_99_99);
  hlds__make_hlds__state_var__lookup_dot_state_var_7_p_0(Context_23, IOStateVar_18, &IOStateVarAfter_42, STATE_VARIABLE_SVarState_98_98, &STATE_VARIABLE_SVarState_100_100, STATE_VARIABLE_UrInfo_99_99, &STATE_VARIABLE_UrInfo_101_101);
  {
    ScopedThenGoal_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ScopedThenGoal_43, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, ScopedThenGoal_43, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
    MR_hl_field(3, ScopedThenGoal_43, 2) = ((MR_Box) (Context_23));
    MR_hl_field(3, ScopedThenGoal_43, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, ScopedThenGoal_43, 4) = ((MR_Box) (Then0_20));
  }
  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0(LocKind_15, Renaming_16, ScopedThenGoal_43, &HLDSScopedThenGoal_44, STATE_VARIABLE_SVarState_100_100, &SVarStateAfterResultIsSucceededDisjunct_46, STATE_VARIABLE_UrInfo_101_101, &STATE_VARIABLE_UrInfo_106_106);
  {
    Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_109, 0) = ((MR_Box) (HLDSScopedThenGoal_44));
    MR_hl_field(1, Var_109, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_108, 0) = ((MR_Box) (HLDSScopedGoal_41));
    MR_hl_field(1, Var_108, 1) = ((MR_Box) (Var_109));
  }
  {
    Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_107, 0) = ((MR_Box) (HLDSResultIsSucceededUnifyGoal_38));
    MR_hl_field(1, Var_107, 1) = ((MR_Box) (Var_108));
  }
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_107, GoalInfo_32, &HLDSResultIsSucceededDisjunctGoal_45);
  hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(ResultVarTerm_29, ExcpVarTerm_30, Catches0_21, MaybeCatchAny0_22, Context_23, &ResultIsExceptionDisjunctGoal_47);
  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0(LocKind_15, Renaming_16, ResultIsExceptionDisjunctGoal_47, &HLDSResultIsExceptionDisjunctGoal_48, STATE_VARIABLE_SVarState_111_111, &SVarStateAfterResultIsExceptionDisjunct_49, STATE_VARIABLE_UrInfo_106_106, &STATE_VARIABLE_UrInfo_113_113);
  {
    Var_114 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_114, 0) = ((MR_Box) (HLDSResultIsSucceededDisjunctGoal_45));
    MR_hl_field(0, Var_114, 1) = ((MR_Box) (SVarStateAfterResultIsSucceededDisjunct_46));
  }
  {
    Var_116 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_116, 0) = ((MR_Box) (HLDSResultIsExceptionDisjunctGoal_48));
    MR_hl_field(0, Var_116, 1) = ((MR_Box) (SVarStateAfterResultIsExceptionDisjunct_49));
  }
  {
    Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_115, 0) = ((MR_Box) (Var_116));
    MR_hl_field(1, Var_115, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    DisjunctSVarStates_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, DisjunctSVarStates_50, 0) = ((MR_Box) (Var_114));
    MR_hl_field(1, DisjunctSVarStates_50, 1) = ((MR_Box) (Var_115));
  }
  hlds__make_hlds__state_var__svar_finish_disjunction_6_p_0(DisjunctSVarStates_50, &HLDSDisjuncts_51, STATE_VARIABLE_SVarState_111_111, STATE_VARIABLE_SVarState_57, STATE_VARIABLE_UrInfo_113_113, STATE_VARIABLE_UrInfo_59);
  hlds__hlds_goal__disj_list_to_goal_3_p_0(HLDSDisjuncts_51, GoalInfo_32, &HLDSDisjunction_52);
  {
    Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_121, 0) = ((MR_Box) (HLDSDisjunction_52));
    MR_hl_field(1, Var_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_120, 0) = ((MR_Box) (HLDSCallMagicGoal_34));
    MR_hl_field(1, Var_120, 1) = ((MR_Box) (Var_121));
  }
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_120, GoalInfo_32, &CallMagicThenDisjunction_53);
  {
    IOStateVars_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, IOStateVars_54, 0) = ((MR_Box) (IOStateVarBefore_35));
    MR_hl_field(0, IOStateVars_54, 1) = ((MR_Box) (IOStateVarAfter_42));
  }
  {
    Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_124, 0) = ((MR_Box) (IOStateVars_54));
  }
  {
    Var_123 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_123, 0) = ((MR_Box) (Var_124));
    MR_hl_field(2, Var_123, 1) = ((MR_Box) (ResultVar_27));
    MR_hl_field(2, Var_123, 2) = ((MR_Box) (CallMagicThenDisjunction_53));
  }
  {
    GoalExpr_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, GoalExpr_55, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(3, GoalExpr_55, 1) = ((MR_Box) (Var_123));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *TryGoal_24 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_55));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_32));
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__accumulate_disjunct_8_p_0(
  MR_Word LocKind_9,
  MR_Word Renaming_10,
  MR_Word SVarStateBefore_11,
  MR_Word Goal_12,
  MR_Word STATE_VARIABLE_RevDisjStates_0_18,
  MR_Word * STATE_VARIABLE_RevDisjStates_19,
  MR_Word STATE_VARIABLE_UrInfo_0_20,
  MR_Word * STATE_VARIABLE_UrInfo_21)
{
  MR_Word HLDSGoal_15;
  MR_Word SVarStateAfterDisjunct_16;
  MR_Word DisjState_17;

  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0(LocKind_9, Renaming_10, Goal_12, &HLDSGoal_15, SVarStateBefore_11, &SVarStateAfterDisjunct_16, STATE_VARIABLE_UrInfo_0_20, STATE_VARIABLE_UrInfo_21);
  {
    DisjState_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, DisjState_17, 0) = ((MR_Box) (HLDSGoal_15));
    MR_hl_field(0, DisjState_17, 1) = ((MR_Box) (SVarStateAfterDisjunct_16));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_RevDisjStates_19 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (DisjState_17));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevDisjStates_0_18));
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__accumulate_plain_or_par_conjunct_10_p_0(
  MR_Word LocKind_11,
  MR_Word Renaming_12,
  MR_Word ConjType_13,
  MR_Word Goal_14,
  MR_Word STATE_VARIABLE_HLDSConjunctsCord_0_22,
  MR_Word * STATE_VARIABLE_HLDSConjunctsCord_23,
  MR_Word STATE_VARIABLE_SVarState_0_24,
  MR_Word * STATE_VARIABLE_SVarState_25,
  MR_Word STATE_VARIABLE_UrInfo_0_26,
  MR_Word * STATE_VARIABLE_UrInfo_27)
{
  MR_bool succeeded;
  MR_Word HLDSGoal_18;
  MR_Word HLDSGoalExpr_19;
  MR_Word HLDSConjuncts_21;
  MR_Word Var_34;

  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_8_p_0(LocKind_11, Renaming_12, Goal_14, &HLDSGoal_18, STATE_VARIABLE_SVarState_0_24, STATE_VARIABLE_SVarState_25, STATE_VARIABLE_UrInfo_0_26, STATE_VARIABLE_UrInfo_27);
  HLDSGoalExpr_19 = ((MR_Word) ((MR_hl_field(0, HLDSGoal_18, (MR_Integer) 0))));
  succeeded = ((((MR_tag((MR_Word) HLDSGoalExpr_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HLDSGoalExpr_19, (MR_Integer) 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Var_34 = ((MR_Unsigned) ((MR_hl_field(3, HLDSGoalExpr_19, (MR_Integer) 1))) & (MR_Integer) 1);
    HLDSConjuncts_21 = ((MR_Word) ((MR_hl_field(3, HLDSGoalExpr_19, (MR_Integer) 2))));
    succeeded = (ConjType_13 == Var_34);
  }
  if (succeeded)
  {
    MR_Word Var_31;

    Var_31 = mercury__cord__from_list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HLDSConjuncts_21);
    *STATE_VARIABLE_HLDSConjunctsCord_23 = mercury__cord__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), STATE_VARIABLE_HLDSConjunctsCord_0_22, Var_31);
  }
  else
    mercury__cord__snoc_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ((MR_Box) (HLDSGoal_18)), STATE_VARIABLE_HLDSConjunctsCord_0_22, STATE_VARIABLE_HLDSConjunctsCord_23);
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__rename_and_maybe_expand_dot_var_9_p_0(
  MR_Word Context_10,
  MR_Word MustRename_11,
  MR_Word Renaming_12,
  MR_Word PODVar0_13,
  MR_Word * Var_14,
  MR_Word STATE_VARIABLE_SVarState_0_20,
  MR_Word * STATE_VARIABLE_SVarState_21,
  MR_Word STATE_VARIABLE_UrInfo_0_22,
  MR_Word * STATE_VARIABLE_UrInfo_23)
{
  if (((MR_tag((MR_Word) PODVar0_13)) == (MR_Integer) 1))
  {
    MR_Word DotVar0_18 = ((MR_Word) ((MR_hl_field(1, PODVar0_13, (MR_Integer) 0))));
    MR_Word DotVar_19;

    parse_tree__prog_rename__rename_var_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MustRename_11, Renaming_12, DotVar0_18, &DotVar_19);
    hlds__make_hlds__state_var__lookup_dot_state_var_7_p_0(Context_10, DotVar_19, Var_14, STATE_VARIABLE_SVarState_0_20, STATE_VARIABLE_SVarState_21, STATE_VARIABLE_UrInfo_0_22, STATE_VARIABLE_UrInfo_23);
  }
  else
  {
    MR_Word Var0_17 = ((MR_Word) ((MR_hl_field(0, PODVar0_13, (MR_Integer) 0))));

    parse_tree__prog_rename__rename_var_4_p_2((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MustRename_11, Renaming_12, Var0_17, Var_14);
    *STATE_VARIABLE_SVarState_21 = STATE_VARIABLE_SVarState_0_20;
    *STATE_VARIABLE_UrInfo_23 = STATE_VARIABLE_UrInfo_0_22;
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
hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_10_p_0(
  MR_Word LocKind_11,
  MR_Word Renaming_12,
  MR_Word AccessType_13,
  MR_Word ArgTerms0_14,
  MR_Word Context_15,
  MR_Word * HLDSGoal_16,
  MR_Word STATE_VARIABLE_SVarState_0_44,
  MR_Word * STATE_VARIABLE_SVarState_45,
  MR_Word STATE_VARIABLE_UrInfo_0_46,
  MR_Word * STATE_VARIABLE_UrInfo_47)
{
  MR_bool succeeded;
  MR_Word ArgTerms1_19;
  MR_Word GoalInfo_20;
  MR_Word FieldNameTerm_25;
  MR_Word FieldValueTerm_26;
  MR_Word Var_50;
  MR_Word LHSTerm_21;
  MR_Word RHSTerm_22;
  MR_Word Var_49;
  MR_Word Var_51;
  MR_Word Var_52;

  parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_12, ArgTerms0_14, &ArgTerms1_19);
  hlds__hlds_goal__goal_info_init_2_p_0(Context_15, &GoalInfo_20);
  succeeded = (ArgTerms1_19 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    LHSTerm_21 = ((MR_Word) ((MR_hl_field(1, ArgTerms1_19, (MR_Integer) 0))));
    Var_49 = ((MR_Word) ((MR_hl_field(1, ArgTerms1_19, (MR_Integer) 1))));
    succeeded = (Var_49 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      RHSTerm_22 = ((MR_Word) ((MR_hl_field(1, Var_49, (MR_Integer) 0))));
      Var_50 = ((MR_Word) ((MR_hl_field(1, Var_49, (MR_Integer) 1))));
      succeeded = (Var_50 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_51 = ((MR_Word) ((MR_hl_field(1, Var_50, (MR_Integer) 1))));
        succeeded = (Var_51 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_52 = ((MR_Word) ((MR_hl_field(1, Var_51, (MR_Integer) 1))));
          succeeded = (Var_52 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            switch (AccessType_13) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  FieldNameTerm_25 = RHSTerm_22;
                  FieldValueTerm_26 = LHSTerm_21;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_53;
                  MR_String Var_54;
                  MR_Word Var_55;
                  MR_Word Var_56;

                  succeeded = ((MR_tag((MR_Word) LHSTerm_21)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_53 = ((MR_Word) ((MR_hl_field(0, LHSTerm_21, (MR_Integer) 0))));
                    Var_55 = ((MR_Word) ((MR_hl_field(0, LHSTerm_21, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_53)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_54 = ((MR_String) ((MR_hl_field(0, Var_53, (MR_Integer) 0))));
                      succeeded = (strcmp(Var_54, (MR_String) "^") == 0);
                      if (succeeded)
                      {
                        succeeded = (Var_55 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          FieldNameTerm_25 = ((MR_Word) ((MR_hl_field(1, Var_55, (MR_Integer) 0))));
                          Var_56 = ((MR_Word) ((MR_hl_field(1, Var_55, (MR_Integer) 1))));
                          succeeded = (Var_56 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            FieldValueTerm_26 = RHSTerm_22;
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
    MR_Word ContextPieces_29;
    MR_Word VarSet0_30;
    MR_Word MaybeFieldNames_31;

    ContextPieces_29 = hlds__make_hlds__goal_expr_to_goal__dcg_field_error_context_pieces_1_f_0(AccessType_13);
    VarSet0_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_46, (MR_Integer) 3))));
    hlds__make_hlds__field_access__parse_field_list_4_p_0(FieldNameTerm_25, VarSet0_30, ContextPieces_29, &MaybeFieldNames_31);
    if (((MR_tag((MR_Word) MaybeFieldNames_31)) == (MR_Integer) 0))
    {
      MR_Word FieldNamesSpecs_34 = ((MR_Word) ((MR_hl_field(0, MaybeFieldNames_31, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_UrInfo_63_63;
      MR_Word STATE_VARIABLE_UrInfo_66_66;

      hlds__make_hlds__state_var__add_unravel_errors_3_p_0(FieldNamesSpecs_34, STATE_VARIABLE_UrInfo_0_46, &STATE_VARIABLE_UrInfo_63_63);
      hlds__make_hlds__goal_expr_to_goal__invalid_goal_8_p_0((MR_String) "^", ArgTerms1_19, GoalInfo_20, HLDSGoal_16, STATE_VARIABLE_SVarState_0_44, STATE_VARIABLE_SVarState_45, STATE_VARIABLE_UrInfo_63_63, &STATE_VARIABLE_UrInfo_66_66);
      hlds__make_hlds__state_var__record_unravel_found_syntax_error_2_p_0(STATE_VARIABLE_UrInfo_66_66, STATE_VARIABLE_UrInfo_47);
    }
    else
    {
      MR_Word FieldNames_32 = ((MR_Word) ((MR_hl_field(1, MaybeFieldNames_31, (MR_Integer) 0))));
      MR_Word ArgTerms_33;
      MR_Word STATE_VARIABLE_SVarState_60_60;

      {
        ArgTerms_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ArgTerms_33, 0) = ((MR_Box) (FieldValueTerm_26));
        MR_hl_field(1, ArgTerms_33, 1) = ((MR_Box) (Var_50));
      }
      hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_9_p_0(AccessType_13, FieldNames_32, ArgTerms_33, Context_15, HLDSGoal_16, STATE_VARIABLE_SVarState_0_44, &STATE_VARIABLE_SVarState_60_60, STATE_VARIABLE_UrInfo_0_46, STATE_VARIABLE_UrInfo_47);
      hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(LocKind_11, STATE_VARIABLE_SVarState_60_60, STATE_VARIABLE_SVarState_45);
    }
  }
  else
  {
    MR_Word Pieces_35;
    MR_Word Spec_43;
    MR_Word STATE_VARIABLE_UrInfo_70_70;
    MR_Word STATE_VARIABLE_UrInfo_71_71;

    hlds__make_hlds__goal_expr_to_goal__invalid_goal_8_p_0((MR_String) "^", ArgTerms1_19, GoalInfo_20, HLDSGoal_16, STATE_VARIABLE_SVarState_0_44, STATE_VARIABLE_SVarState_45, STATE_VARIABLE_UrInfo_0_46, &STATE_VARIABLE_UrInfo_70_70);
    hlds__make_hlds__state_var__record_unravel_found_syntax_error_2_p_0(STATE_VARIABLE_UrInfo_70_70, &STATE_VARIABLE_UrInfo_71_71);
    switch (AccessType_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_79;
          MR_Word Var_80;

          Var_80 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[12])));
          Var_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_80, (MR_Word) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[13])));
          Pieces_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[8])), Var_79);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHSTerm_156;
          MR_Word Var_91;
          MR_Word Var_92;
          MR_Word Var_93;
          MR_Word Var_94;
          MR_Word Var_95;
          MR_String Var_96;
          MR_Word Var_97;
          MR_Word Var_98;

          succeeded = (ArgTerms1_19 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            LHSTerm_156 = ((MR_Word) ((MR_hl_field(1, ArgTerms1_19, (MR_Integer) 0))));
            Var_91 = ((MR_Word) ((MR_hl_field(1, ArgTerms1_19, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) LHSTerm_156)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_95 = ((MR_Word) ((MR_hl_field(0, LHSTerm_156, (MR_Integer) 0))));
              Var_97 = ((MR_Word) ((MR_hl_field(0, LHSTerm_156, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_95)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_96 = ((MR_String) ((MR_hl_field(0, Var_95, (MR_Integer) 0))));
                succeeded = (strcmp(Var_96, (MR_String) "^") == 0);
                if (succeeded)
                {
                  succeeded = (Var_97 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_98 = ((MR_Word) ((MR_hl_field(1, Var_97, (MR_Integer) 1))));
                    succeeded = (Var_98 == (MR_Word) ((MR_Unsigned) 0U));
                  }
                }
              }
            }
            succeeded = !(succeeded);
            if (succeeded)
            {
              succeeded = (Var_91 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_92 = ((MR_Word) ((MR_hl_field(1, Var_91, (MR_Integer) 1))));
                succeeded = (Var_92 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_93 = ((MR_Word) ((MR_hl_field(1, Var_92, (MR_Integer) 1))));
                  succeeded = (Var_93 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_94 = ((MR_Word) ((MR_hl_field(1, Var_93, (MR_Integer) 1))));
                    succeeded = (Var_94 == (MR_Word) ((MR_Unsigned) 0U));
                  }
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word VarSet_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_71_71, (MR_Integer) 3))));
            MR_String LHSTermStr_42;
            MR_Word Var_105;
            MR_Word Var_106;
            MR_Word Var_111;
            MR_Word Var_122;
            MR_Word Var_123;
            MR_Word Var_124;
            MR_Word Var_125;

            LHSTermStr_42 = parse_tree__parse_tree_out_term__mercury_limited_term_to_string_vs_4_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_41, (MR_Integer) 0, (MR_Integer) 70, LHSTerm_156);
            Var_106 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[17])));
            {
              Var_125 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_125, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_125, 1) = ((MR_Box) (LHSTermStr_42));
            }
            {
              Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_124, 0) = ((MR_Box) (Var_125));
              MR_hl_field(1, Var_124, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[10])));
            }
            Var_123 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_124);
            Var_122 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_123, (MR_Word) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[13])));
            Var_111 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[23])), Var_122);
            Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_106, Var_111);
            Pieces_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[15])), Var_105);
          }
          else
          {
            MR_Word Var_140;
            MR_Word Var_141;

            Var_141 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[27])));
            Var_140 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_141, (MR_Word) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[13])));
            Pieces_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[25])), Var_140);
          }
        }
        break;
    }
    {
      Spec_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_43, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax\'/10"));
      MR_hl_field(0, Spec_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_43, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_43, 3) = ((MR_Box) (Context_15));
      MR_hl_field(0, Spec_43, 4) = ((MR_Box) (Pieces_35));
    }
    hlds__make_hlds__state_var__add_unravel_error_3_p_0(Spec_43, STATE_VARIABLE_UrInfo_71_71, STATE_VARIABLE_UrInfo_47);
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__invalid_goal_8_p_0(
  MR_String UpdateStr_9,
  MR_Word Args0_10,
  MR_Word GoalInfo_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_SVarState_0_19,
  MR_Word * STATE_VARIABLE_SVarState_20,
  MR_Word STATE_VARIABLE_UrInfo_0_21,
  MR_Word * STATE_VARIABLE_UrInfo_22)
{
  MR_Word HeadVars_15;
  MR_Word GoalExpr_18;
  MR_Word Var_25;
  MR_Integer Var_26;
  MR_Word Var_28;
  MR_Word _HeadVarsArgs0_16;

  hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_7_p_0(Args0_10, &HeadVars_15, &_HeadVarsArgs0_16, STATE_VARIABLE_SVarState_0_19, STATE_VARIABLE_SVarState_20, STATE_VARIABLE_UrInfo_0_21, STATE_VARIABLE_UrInfo_22);
  Var_25 = hlds__hlds_pred__invalid_pred_id_0_f_0();
  Var_26 = hlds__hlds_pred__invalid_proc_id_0_f_0();
  {
    Var_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_28, 0) = ((MR_Box) (UpdateStr_9));
  }
  {
    GoalExpr_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, GoalExpr_18, 0) = ((MR_Box) (Var_25));
    MR_hl_field(2, GoalExpr_18, 1) = ((MR_Box) (Var_26));
    MR_hl_field(2, GoalExpr_18, 2) = ((MR_Box) (HeadVars_15));
    MR_hl_field(2, GoalExpr_18, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(2, GoalExpr_18, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, GoalExpr_18, 5) = ((MR_Box) (Var_28));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_18));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_11));
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
      ContextPieces_4 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[29]));
      break;
    case (MR_Integer) 1:
      ContextPieces_4 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[31]));
      break;
  }
  return ContextPieces_4;
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_9_p_0(
  MR_Word AccessType_10,
  MR_Word FieldNames_11,
  MR_Word ArgTerms_12,
  MR_Word Context_13,
  MR_Word * HLDSGoal_14,
  MR_Word STATE_VARIABLE_SVarState_0_56,
  MR_Word * STATE_VARIABLE_SVarState_57,
  MR_Word STATE_VARIABLE_UrInfo_0_58,
  MR_Word * STATE_VARIABLE_UrInfo_59)
{
  MR_bool succeeded;
  MR_Word ArgVarsTerms_18;
  MR_Word FieldValueVarTerm_19;
  MR_Word TermInputVarTerm_20;
  MR_Word TermOutputVarTerm_21;
  MR_Word FieldValueVar_30;
  MR_Word FieldValueTerm_31;
  MR_Word TermInputVar_32;
  MR_Word TermInputTerm_33;
  MR_Word TermOutputVar_34;
  MR_Word TermOutputTerm_35;
  MR_Word InputTermArgContext_37;
  MR_Word Functor_38;
  MR_Word HLDSGoal0_41;
  MR_Integer FieldArgNumber_42;
  MR_Word FieldArgContext_43;
  MR_Integer OutputTermArgNumber_49;
  MR_Word OutputTermArgContext_50;
  MR_Word FieldValueVTNC_52;
  MR_Word TermInputVTNC_53;
  MR_Word TermOutputVTNC_54;
  MR_Word ArgVarsTermsNumsContexts_55;
  MR_Word STATE_VARIABLE_SVarState_60_60;
  MR_Word STATE_VARIABLE_UrInfo_61_61;
  MR_Word STATE_VARIABLE_SVarState_78_78;
  MR_Word STATE_VARIABLE_UrInfo_79_79;
  MR_Word Var_98;
  MR_Word Var_99;
  MR_Word _ArgVars_17;

  hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_7_p_0(ArgTerms_12, &_ArgVars_17, &ArgVarsTerms_18, STATE_VARIABLE_SVarState_0_56, &STATE_VARIABLE_SVarState_60_60, STATE_VARIABLE_UrInfo_0_58, &STATE_VARIABLE_UrInfo_61_61);
  if ((ArgVarsTerms_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/9", (MR_String) "arity != 3");
      return;
    }
  else
  {
    MR_Word Var_120 = ((MR_Word) ((MR_hl_field(1, ArgVarsTerms_18, (MR_Integer) 1))));
    MR_Word Var_121 = ((MR_Word) ((MR_hl_field(1, ArgVarsTerms_18, (MR_Integer) 0))));

    if ((Var_120 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/9", (MR_String) "arity != 3");
        return;
      }
    else
    {
      MR_Word Var_122 = ((MR_Word) ((MR_hl_field(1, Var_120, (MR_Integer) 1))));
      MR_Word Var_123 = ((MR_Word) ((MR_hl_field(1, Var_120, (MR_Integer) 0))));

      if ((Var_122 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/9", (MR_String) "arity != 3");
          return;
        }
      else
      {
        MR_Word Var_124 = ((MR_Word) ((MR_hl_field(1, Var_122, (MR_Integer) 1))));
        MR_Word Var_125 = ((MR_Word) ((MR_hl_field(1, Var_122, (MR_Integer) 0))));

        if ((Var_124 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          FieldValueVarTerm_19 = Var_121;
          TermInputVarTerm_20 = Var_123;
          TermOutputVarTerm_21 = Var_125;
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/9", (MR_String) "arity != 3");
            return;
          }
      }
    }
  }
  FieldValueVar_30 = ((MR_Word) ((MR_hl_field(0, FieldValueVarTerm_19, (MR_Integer) 0))));
  FieldValueTerm_31 = ((MR_Word) ((MR_hl_field(0, FieldValueVarTerm_19, (MR_Integer) 1))));
  TermInputVar_32 = ((MR_Word) ((MR_hl_field(0, TermInputVarTerm_20, (MR_Integer) 0))));
  TermInputTerm_33 = ((MR_Word) ((MR_hl_field(0, TermInputVarTerm_20, (MR_Integer) 1))));
  TermOutputVar_34 = ((MR_Word) ((MR_hl_field(0, TermOutputVarTerm_21, (MR_Integer) 0))));
  TermOutputTerm_35 = ((MR_Word) ((MR_hl_field(0, TermOutputVarTerm_21, (MR_Integer) 1))));
  switch (AccessType_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_88;
        MR_Word Var_94;
        MR_Word Var_95;
        MR_Word InnermostFunctor_106;
        MR_Word ConsName_108;
        MR_Integer ConsArity_109;
        MR_Word PFSymNameArity_111;
        MR_Word DuCtor_104;

        hlds__make_hlds__field_access__expand_dcg_field_extraction_goal_14_p_0(Context_13, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), FieldNames_11, FieldValueVar_30, TermInputVar_32, TermOutputVar_34, &Functor_38, &Var_88, &HLDSGoal0_41, STATE_VARIABLE_SVarState_60_60, &STATE_VARIABLE_SVarState_78_78, STATE_VARIABLE_UrInfo_61_61, &STATE_VARIABLE_UrInfo_79_79);
        InnermostFunctor_106 = ((MR_Word) ((MR_hl_field(0, Var_88, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) InnermostFunctor_106)) == (MR_Integer) 1);
        if (succeeded)
        {
          DuCtor_104 = (MR_Word) (MR_body((MR_Word) (InnermostFunctor_106), (MR_Integer) 1));
          ConsName_108 = ((MR_Word) ((MR_hl_field(0, DuCtor_104, (MR_Integer) 0))));
          ConsArity_109 = ((MR_Integer) ((MR_hl_field(0, DuCtor_104, (MR_Integer) 1))));
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/9", (MR_String) "not cons");
            return;
          }
        Var_94 = (MR_Word) (ConsArity_109);
        {
          PFSymNameArity_111 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PFSymNameArity_111, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(0, PFSymNameArity_111, 1) = ((MR_Box) (ConsName_108));
          MR_hl_field(0, PFSymNameArity_111, 2) = ((MR_Box) (Var_94));
        }
        FieldArgNumber_42 = (MR_Integer) 2;
        {
          Var_95 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_95, 0) = ((MR_Box) (PFSymNameArity_111));
        }
        {
          FieldArgContext_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, FieldArgContext_43, 0) = ((MR_Box) (Var_95));
        }
        OutputTermArgNumber_49 = (MR_Integer) 3;
        {
          OutputTermArgContext_50 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, OutputTermArgContext_50, 0) = ((MR_Box) (Functor_38));
          MR_hl_field(2, OutputTermArgContext_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, OutputTermArgContext_50, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word InnermostFunctor_39;
        MR_Word InnermostSubContext_40;
        MR_Word ConsName_45;
        MR_Integer ConsArity_46;
        MR_Word PFSymNameArity_48;
        MR_Word Var_77;
        MR_Word Var_84;
        MR_Word Var_85;
        MR_Word DuCtor_44;

        hlds__make_hlds__field_access__expand_set_field_function_call_14_p_0(Context_13, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), FieldNames_11, FieldValueVar_30, TermInputVar_32, TermOutputVar_34, &Functor_38, &Var_77, &HLDSGoal0_41, STATE_VARIABLE_SVarState_60_60, &STATE_VARIABLE_SVarState_78_78, STATE_VARIABLE_UrInfo_61_61, &STATE_VARIABLE_UrInfo_79_79);
        InnermostFunctor_39 = ((MR_Word) ((MR_hl_field(0, Var_77, (MR_Integer) 0))));
        InnermostSubContext_40 = ((MR_Word) ((MR_hl_field(0, Var_77, (MR_Integer) 1))));
        FieldArgNumber_42 = (MR_Integer) 2;
        {
          FieldArgContext_43 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, FieldArgContext_43, 0) = ((MR_Box) (InnermostFunctor_39));
          MR_hl_field(2, FieldArgContext_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, FieldArgContext_43, 2) = ((MR_Box) (InnermostSubContext_40));
        }
        succeeded = ((MR_tag((MR_Word) Functor_38)) == (MR_Integer) 1);
        if (succeeded)
        {
          DuCtor_44 = (MR_Word) (MR_body((MR_Word) (Functor_38), (MR_Integer) 1));
          ConsName_45 = ((MR_Word) ((MR_hl_field(0, DuCtor_44, (MR_Integer) 0))));
          ConsArity_46 = ((MR_Integer) ((MR_hl_field(0, DuCtor_44, (MR_Integer) 1))));
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/9", (MR_String) "not cons");
            return;
          }
        Var_84 = (MR_Word) (ConsArity_46);
        {
          PFSymNameArity_48 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PFSymNameArity_48, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(0, PFSymNameArity_48, 1) = ((MR_Box) (ConsName_45));
          MR_hl_field(0, PFSymNameArity_48, 2) = ((MR_Box) (Var_84));
        }
        OutputTermArgNumber_49 = (MR_Integer) 3;
        {
          Var_85 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_85, 0) = ((MR_Box) (PFSymNameArity_48));
        }
        {
          OutputTermArgContext_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, OutputTermArgContext_50, 0) = ((MR_Box) (Var_85));
        }
      }
      break;
  }
  {
    InputTermArgContext_37 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, InputTermArgContext_37, 0) = ((MR_Box) (Functor_38));
    MR_hl_field(2, InputTermArgContext_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, InputTermArgContext_37, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    FieldValueVTNC_52 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FieldValueVTNC_52, 0) = ((MR_Box) (FieldValueVar_30));
    MR_hl_field(0, FieldValueVTNC_52, 1) = ((MR_Box) (FieldValueTerm_31));
    MR_hl_field(0, FieldValueVTNC_52, 2) = ((MR_Box) (FieldArgNumber_42));
    MR_hl_field(0, FieldValueVTNC_52, 3) = ((MR_Box) (FieldArgContext_43));
  }
  {
    TermInputVTNC_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TermInputVTNC_53, 0) = ((MR_Box) (TermInputVar_32));
    MR_hl_field(0, TermInputVTNC_53, 1) = ((MR_Box) (TermInputTerm_33));
    MR_hl_field(0, TermInputVTNC_53, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, TermInputVTNC_53, 3) = ((MR_Box) (InputTermArgContext_37));
  }
  {
    TermOutputVTNC_54 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TermOutputVTNC_54, 0) = ((MR_Box) (TermOutputVar_34));
    MR_hl_field(0, TermOutputVTNC_54, 1) = ((MR_Box) (TermOutputTerm_35));
    MR_hl_field(0, TermOutputVTNC_54, 2) = ((MR_Box) (OutputTermArgNumber_49));
    MR_hl_field(0, TermOutputVTNC_54, 3) = ((MR_Box) (OutputTermArgContext_50));
  }
  {
    Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_99, 0) = ((MR_Box) (TermOutputVTNC_54));
    MR_hl_field(1, Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_98, 0) = ((MR_Box) (TermInputVTNC_53));
    MR_hl_field(1, Var_98, 1) = ((MR_Box) (Var_99));
  }
  {
    ArgVarsTermsNumsContexts_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArgVarsTermsNumsContexts_55, 0) = ((MR_Box) (FieldValueVTNC_52));
    MR_hl_field(1, ArgVarsTermsNumsContexts_55, 1) = ((MR_Box) (Var_98));
  }
  hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_8_p_0(ArgVarsTermsNumsContexts_55, Context_13, HLDSGoal0_41, HLDSGoal_14, STATE_VARIABLE_SVarState_78_78, STATE_VARIABLE_SVarState_57, STATE_VARIABLE_UrInfo_79_79, STATE_VARIABLE_UrInfo_59);
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_call_std_10_p_0(
  MR_Word Context_11,
  MR_Word Renaming_12,
  MR_Word SymName_13,
  MR_Word ArgTerms1_14,
  MR_Word Purity_15,
  MR_Word * HLDSGoal_16,
  MR_Word STATE_VARIABLE_SVarState_0_42,
  MR_Word * STATE_VARIABLE_SVarState_43,
  MR_Word STATE_VARIABLE_UrInfo_0_44,
  MR_Word * STATE_VARIABLE_UrInfo_45)
{
  MR_bool succeeded;
  MR_Word ArgTerms_19;
  MR_Word HeadVars_20;
  MR_Word HeadVarsArgTerms_21;
  MR_Word PredFormArity_22;
  MR_Word GoalExpr_30;
  MR_Word CallId_32;
  MR_Word GoalInfo_37;
  MR_Word HLDSGoal0_38;
  MR_Word UserArity_39;
  MR_Word QualInfo0_40;
  MR_Word QualInfo_41;
  MR_Word STATE_VARIABLE_SVarState_47_47;
  MR_Word STATE_VARIABLE_UrInfo_48_48;
  MR_Word STATE_VARIABLE_UrInfo_57_57;
  MR_Word Var_58;
  MR_Word Syntax_23;
  MR_Word PredVar_24;
  MR_Word RealHeadVars_25;
  MR_String Var_77;
  MR_Word Var_69;
  MR_Integer Var_70;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word Var_74;

  parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_12, ArgTerms1_14, &ArgTerms_19);
  hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_7_p_0(ArgTerms_19, &HeadVars_20, &HeadVarsArgTerms_21, STATE_VARIABLE_SVarState_0_42, &STATE_VARIABLE_SVarState_47_47, STATE_VARIABLE_UrInfo_0_44, &STATE_VARIABLE_UrInfo_48_48);
  PredFormArity_22 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0]), ArgTerms_19);
  succeeded = ((MR_tag((MR_Word) SymName_13)) == (MR_Integer) 0);
  if (succeeded)
  {
    Var_77 = ((MR_String) ((MR_hl_field(0, SymName_13, (MR_Integer) 0))));
    if ((strcmp(Var_77, (MR_String) "") == 0))
    {
      Syntax_23 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    if ((strcmp(Var_77, (MR_String) "call") == 0))
    {
      Syntax_23 = (MR_Integer) 0;
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      succeeded = (HeadVars_20 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        PredVar_24 = ((MR_Word) ((MR_hl_field(1, HeadVars_20, (MR_Integer) 0))));
        RealHeadVars_25 = ((MR_Word) ((MR_hl_field(1, HeadVars_20, (MR_Integer) 1))));
      }
    }
  }
  if (succeeded)
  {
    MR_Word GenericCall_29;
    MR_Word VarSet0_31;
    MR_Word Var_52;

    {
      GenericCall_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, GenericCall_29, 0) = ((MR_Box) (PredVar_24));
      MR_hl_field(0, GenericCall_29, 1) = (MR_Box) (((((MR_Unsigned) (Purity_15) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
      MR_hl_field(0, GenericCall_29, 2) = ((MR_Box) (PredFormArity_22));
      MR_hl_field(0, GenericCall_29, 3) = (MR_Box) ((MR_Unsigned) (Syntax_23));
    }
    {
      GoalExpr_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, GoalExpr_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, GoalExpr_30, 1) = ((MR_Box) (GenericCall_29));
      MR_hl_field(3, GoalExpr_30, 2) = ((MR_Box) (RealHeadVars_25));
      MR_hl_field(3, GoalExpr_30, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, GoalExpr_30, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, GoalExpr_30, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 6));
    }
    VarSet0_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_48_48, (MR_Integer) 3))));
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_52, 0) = ((MR_Box) (VarSet0_31));
    }
    {
      CallId_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, CallId_32, 0) = ((MR_Box) (Var_52));
      MR_hl_field(1, CallId_32, 1) = ((MR_Box) (GenericCall_29));
    }
  }
  else
  {
    MR_Word PredId_33;
    MR_Integer ModeId_34;
    MR_Word PFSymNameArity_36;

    PredId_33 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    ModeId_34 = hlds__hlds_pred__invalid_proc_id_0_f_0();
    {
      GoalExpr_30 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, GoalExpr_30, 0) = ((MR_Box) (PredId_33));
      MR_hl_field(2, GoalExpr_30, 1) = ((MR_Box) (ModeId_34));
      MR_hl_field(2, GoalExpr_30, 2) = ((MR_Box) (HeadVars_20));
      MR_hl_field(2, GoalExpr_30, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(2, GoalExpr_30, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, GoalExpr_30, 5) = ((MR_Box) (SymName_13));
    }
    {
      PFSymNameArity_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PFSymNameArity_36, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(0, PFSymNameArity_36, 1) = ((MR_Box) (SymName_13));
      MR_hl_field(0, PFSymNameArity_36, 2) = ((MR_Box) (PredFormArity_22));
    }
    {
      CallId_32 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, CallId_32, 0) = ((MR_Box) (PFSymNameArity_36));
    }
  }
  hlds__hlds_goal__goal_info_init_context_purity_3_p_0(Context_11, Purity_15, &GoalInfo_37);
  {
    HLDSGoal0_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HLDSGoal0_38, 0) = ((MR_Box) (GoalExpr_30));
    MR_hl_field(0, HLDSGoal0_38, 1) = ((MR_Box) (GoalInfo_37));
  }
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 0, &UserArity_39, PredFormArity_22);
  QualInfo0_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_48_48, (MR_Integer) 2))));
  hlds__make_hlds__qual_info__record_called_pred_or_func_5_p_0((MR_Integer) 0, SymName_13, UserArity_39, QualInfo0_40, &QualInfo_41);
  Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_48_48, (MR_Integer) 0))));
  Var_70 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_48_48, (MR_Integer) 1))));
  Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_48_48, (MR_Integer) 3))));
  Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_48_48, (MR_Integer) 4))));
  Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_48_48, (MR_Integer) 5))));
  {
    STATE_VARIABLE_UrInfo_57_57 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_UrInfo_57_57, 0) = ((MR_Box) (Var_69));
    MR_hl_field(0, STATE_VARIABLE_UrInfo_57_57, 1) = ((MR_Box) (Var_70));
    MR_hl_field(0, STATE_VARIABLE_UrInfo_57_57, 2) = ((MR_Box) (QualInfo_41));
    MR_hl_field(0, STATE_VARIABLE_UrInfo_57_57, 3) = ((MR_Box) (Var_72));
    MR_hl_field(0, STATE_VARIABLE_UrInfo_57_57, 4) = ((MR_Box) (Var_73));
    MR_hl_field(0, STATE_VARIABLE_UrInfo_57_57, 5) = ((MR_Box) (Var_74));
  }
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (CallId_32));
  }
  hlds__make_hlds__superhomogeneous__insert_arg_unifications_9_p_0(HeadVarsArgTerms_21, Context_11, Var_58, HLDSGoal0_38, HLDSGoal_16, STATE_VARIABLE_SVarState_47_47, STATE_VARIABLE_SVarState_43, STATE_VARIABLE_UrInfo_57_57, STATE_VARIABLE_UrInfo_45);
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
