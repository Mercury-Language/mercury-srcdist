/*
** Automatically generated from `goal_expr_to_goal.m'
** by the Mercury compiler,
** version rotd-2022-05-06
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
hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box * wrapper_arg_5);

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
  MR_Box * wrapper_arg_13);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__accumulate_par_conjuncts_17_p_0(
  MR_Word LocKind_18,
  MR_Word Goal_19,
  MR_Word Renaming_20,
  MR_Word STATE_VARIABLE_HLDSConjunctsCord_0_35,
  MR_Word * STATE_VARIABLE_HLDSConjunctsCord_36,
  MR_Word STATE_VARIABLE_SVarState_0_37,
  MR_Word * STATE_VARIABLE_SVarState_38,
  MR_Word STATE_VARIABLE_SVarStore_0_39,
  MR_Word * STATE_VARIABLE_SVarStore_40,
  MR_Word STATE_VARIABLE_VarSet_0_41,
  MR_Word * STATE_VARIABLE_VarSet_42,
  MR_Word STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word * STATE_VARIABLE_ModuleInfo_44,
  MR_Word STATE_VARIABLE_QualInfo_0_45,
  MR_Word * STATE_VARIABLE_QualInfo_46,
  MR_Word STATE_VARIABLE_Specs_0_47,
  MR_Word * STATE_VARIABLE_Specs_48);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__accumulate_plain_conjuncts_17_p_0(
  MR_Word LocKind_18,
  MR_Word Goal_19,
  MR_Word Renaming_20,
  MR_Word STATE_VARIABLE_HLDSConjunctsCord_0_35,
  MR_Word * STATE_VARIABLE_HLDSConjunctsCord_36,
  MR_Word STATE_VARIABLE_SVarState_0_37,
  MR_Word * STATE_VARIABLE_SVarState_38,
  MR_Word STATE_VARIABLE_SVarStore_0_39,
  MR_Word * STATE_VARIABLE_SVarStore_40,
  MR_Word STATE_VARIABLE_VarSet_0_41,
  MR_Word * STATE_VARIABLE_VarSet_42,
  MR_Word STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word * STATE_VARIABLE_ModuleInfo_44,
  MR_Word STATE_VARIABLE_QualInfo_0_45,
  MR_Word * STATE_VARIABLE_QualInfo_46,
  MR_Word STATE_VARIABLE_Specs_0_47,
  MR_Word * STATE_VARIABLE_Specs_48);

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


static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_1[35][2];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_2[1][3];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_3[7][1];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_4[1][12];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_5[1][19];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_6[1][11];




static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_1[35][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_hlds_goal_svar_state_0))
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
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in DCG field access goal."))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[6])))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "^ field1 ^ ... ^ fieldN := Field"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[8])))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[10])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Field =^ field1 ^ ... ^ fieldN"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[12])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[14])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In DCG field extraction goal:"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[6])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In DCG field update goal:"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[6])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "part."))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[6])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "else"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[22])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "parameter cannot have an"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[24])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "io"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[26])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "goal with an"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[28])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "try"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[30])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[32])))
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

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_3[7][1] = {
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
  /* row   6 */
  {
    ((MR_Box) ((MR_String) "^"))
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

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_5[1][19] = {
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

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_6[1][11] = {
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
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

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
hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv15_MutableHLDS_13;
  MR_Word conv14_StateVar_14;
  MR_Word conv13_GetGoal_15;
  MR_Word conv12_SetGoal_16;

  hlds__make_hlds__goal_expr_to_goal__extract_trace_mutable_var_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv15_MutableHLDS_13, &conv14_StateVar_14, &conv13_GetGoal_15, &conv12_SetGoal_16);
  *wrapper_arg_2 = ((MR_Box) (conv15_MutableHLDS_13));
  *wrapper_arg_3 = ((MR_Box) (conv14_StateVar_14));
  *wrapper_arg_4 = ((MR_Box) (conv13_GetGoal_15));
  *wrapper_arg_5 = ((MR_Box) (conv12_SetGoal_16));
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
  MR_Box * wrapper_arg_13)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_RevDisjStates_31;
  MR_Word conv4_STATE_VARIABLE_SVarStore_33;
  MR_Word conv3_STATE_VARIABLE_VarSet_35;
  MR_Word conv2_STATE_VARIABLE_ModuleInfo_37;
  MR_Word conv1_STATE_VARIABLE_QualInfo_39;
  MR_Word conv0_STATE_VARIABLE_Specs_41;

  hlds__make_hlds__goal_expr_to_goal__accumulate_disjunct_16_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_RevDisjStates_31, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_SVarStore_33, ((MR_Word) (wrapper_arg_6)), &conv3_STATE_VARIABLE_VarSet_35, ((MR_Word) (wrapper_arg_8)), &conv2_STATE_VARIABLE_ModuleInfo_37, ((MR_Word) (wrapper_arg_10)), &conv1_STATE_VARIABLE_QualInfo_39, ((MR_Word) (wrapper_arg_12)), &conv0_STATE_VARIABLE_Specs_41);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_RevDisjStates_31));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_SVarStore_33));
  *wrapper_arg_7 = ((MR_Box) (conv3_STATE_VARIABLE_VarSet_35));
  *wrapper_arg_9 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_37));
  *wrapper_arg_11 = ((MR_Box) (conv1_STATE_VARIABLE_QualInfo_39));
  *wrapper_arg_13 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_41));
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
          MR_Word Context_750 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_18, (MR_Integer) 0))));
          MR_Word TermA0_751 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_18, (MR_Integer) 1))));
          MR_Word TermB0_752 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_18, (MR_Integer) 2))));
          MR_Word Purity_753 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Goal_18, (MR_Integer) 3))) & (MR_Integer) 3);
          MR_Word TermA_754;
          MR_Word TermB_755;
          MR_Word StateVarA_756;
          MR_Word Var_766;
          MR_String Var_767;
          MR_Word Var_768;
          MR_Word Var_769;
          MR_Word Var_770;

          parse_tree__prog_rename__rename_vars_in_term_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, TermA0_751, &TermA_754);
          parse_tree__prog_rename__rename_vars_in_term_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, TermB0_752, &TermB_755);
          succeeded = ((MR_tag((MR_Word) TermA_754)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_766 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermA_754, (MR_Integer) 0))));
            Var_768 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermA_754, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Var_766)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_767 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_766, (MR_Integer) 0))));
              succeeded = (strcmp(Var_767, (MR_String) "!") == 0);
              if (succeeded)
              {
                succeeded = (Var_768 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_769 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_768, (MR_Integer) 0))));
                  Var_770 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_768, (MR_Integer) 1))));
                  succeeded = (Var_770 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) Var_769)) == (MR_Integer) 1);
                    if (succeeded)
                      StateVarA_756 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_769, (MR_Integer) 0))));
                  }
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word STATE_VARIABLE_VarSet_60_771;
            MR_Word STATE_VARIABLE_SVarState_61_772;
            MR_Word STATE_VARIABLE_Specs_62_773;
            MR_Word StateVarB_759;
            MR_Word Var_774;
            MR_String Var_775;
            MR_Word Var_776;
            MR_Word Var_777;
            MR_Word Var_778;

            hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(Context_750, StateVarA_756, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_60_771, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_61_772, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_62_773);
            succeeded = ((MR_tag((MR_Word) TermB_755)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_774 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermB_755, (MR_Integer) 0))));
              Var_776 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermB_755, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_774)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_775 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_774, (MR_Integer) 0))));
                succeeded = (strcmp(Var_775, (MR_String) "!") == 0);
                if (succeeded)
                {
                  succeeded = (Var_776 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_777 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_776, (MR_Integer) 0))));
                    Var_778 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_776, (MR_Integer) 1))));
                    succeeded = (Var_778 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) Var_777)) == (MR_Integer) 1);
                      if (succeeded)
                        StateVarB_759 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_777, (MR_Integer) 0))));
                    }
                  }
                }
              }
            }
            if (succeeded)
              hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(Context_750, StateVarB_759, STATE_VARIABLE_VarSet_60_771, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_SVarState_61_772, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_Specs_62_773, STATE_VARIABLE_Specs_117);
            else
            {
              *STATE_VARIABLE_Specs_117 = STATE_VARIABLE_Specs_62_773;
              *STATE_VARIABLE_VarSet_111 = STATE_VARIABLE_VarSet_60_771;
              *STATE_VARIABLE_SVarState_107 = STATE_VARIABLE_SVarState_61_772;
            }
            *HLDSGoal_20 = hlds__make_goal__true_goal_with_context_1_f_0(Context_750);
            *STATE_VARIABLE_QualInfo_115 = STATE_VARIABLE_QualInfo_0_114;
            *STATE_VARIABLE_ModuleInfo_113 = STATE_VARIABLE_ModuleInfo_0_112;
            *STATE_VARIABLE_SVarStore_109 = STATE_VARIABLE_SVarStore_0_108;
          }
          else
          {
            MR_Word StateVarB_787;
            MR_Word Var_779;
            MR_String Var_780;
            MR_Word Var_781;
            MR_Word Var_782;
            MR_Word Var_783;

            succeeded = ((MR_tag((MR_Word) TermB_755)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_779 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermB_755, (MR_Integer) 0))));
              Var_781 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermB_755, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_779)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_780 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_779, (MR_Integer) 0))));
                succeeded = (strcmp(Var_780, (MR_String) "!") == 0);
                if (succeeded)
                {
                  succeeded = (Var_781 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_782 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_781, (MR_Integer) 0))));
                    Var_783 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_781, (MR_Integer) 1))));
                    succeeded = (Var_783 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) Var_782)) == (MR_Integer) 1);
                      if (succeeded)
                        StateVarB_787 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_782, (MR_Integer) 0))));
                    }
                  }
                }
              }
            }
            if (succeeded)
            {
              hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(Context_750, StateVarB_787, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              *HLDSGoal_20 = hlds__make_goal__true_goal_0_f_0();
              *STATE_VARIABLE_QualInfo_115 = STATE_VARIABLE_QualInfo_0_114;
              *STATE_VARIABLE_ModuleInfo_113 = STATE_VARIABLE_ModuleInfo_0_112;
              *STATE_VARIABLE_SVarStore_109 = STATE_VARIABLE_SVarStore_0_108;
            }
            else
            {
              MR_Word STATE_VARIABLE_SVarState_81_786;

              hlds__make_hlds__superhomogeneous__unravel_unification_19_p_0(TermA_754, TermB_755, Context_750, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Purity_753, HLDSGoal_20, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_81_786, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(LocKind_17, STATE_VARIABLE_SVarState_81_786, STATE_VARIABLE_SVarState_107);
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Context_398 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal_18, (MR_Integer) 0))));
          MR_Word SymName_399 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal_18, (MR_Integer) 1))));
          MR_Word ArgTerms0_400 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal_18, (MR_Integer) 2))));
          MR_Word Purity_401 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Goal_18, (MR_Integer) 3))) & (MR_Integer) 3);
          MR_Word ArgTerms1_402;
          MR_Word STATE_VARIABLE_SVarState_84_443;
          MR_Word LHSTerm_403;
          MR_Word RHSTerm_404;
          MR_String Var_439;
          MR_Word Var_440;
          MR_Word Var_441;

          hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(ArgTerms0_400, &ArgTerms1_402);
          succeeded = ((MR_tag((MR_Word) SymName_399)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_439 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_399, (MR_Integer) 0))));
            succeeded = (strcmp(Var_439, (MR_String) "\\=") == 0);
            if (succeeded)
            {
              succeeded = (ArgTerms1_402 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                LHSTerm_403 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms1_402, (MR_Integer) 0))));
                Var_440 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms1_402, (MR_Integer) 1))));
                succeeded = (Var_440 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  RHSTerm_404 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_440, (MR_Integer) 0))));
                  Var_441 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_440, (MR_Integer) 1))));
                  succeeded = (Var_441 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word TransformedGoal_405;
            MR_Word Var_442;

            {
              Var_442 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_442, 0) = ((MR_Box) (Context_398));
              MR_hl_field(MR_mktag(0), Var_442, 1) = ((MR_Box) (LHSTerm_403));
              MR_hl_field(MR_mktag(0), Var_442, 2) = ((MR_Box) (RHSTerm_404));
              MR_hl_field(MR_mktag(0), Var_442, 3) = (MR_Box) ((MR_Unsigned) (Purity_401));
            }
            {
              TransformedGoal_405 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), TransformedGoal_405, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), TransformedGoal_405, 1) = ((MR_Box) (Context_398));
              MR_hl_field(MR_mktag(3), TransformedGoal_405, 2) = ((MR_Box) (Var_442));
            }
            hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, TransformedGoal_405, Renaming_19, HLDSGoal_20, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_84_443, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
          }
          else
          {
            MR_Word RHSTerm0_407;
            MR_Word Remainder_409;
            MR_Word FieldListContext_410;
            MR_Word StateVarNameTerms_411;
            MR_Word StateVarContext_412;
            MR_Word Var_447;
            MR_Word Var_455;
            MR_Word LHSTerm0_406;
            MR_Word StateVar0_408;
            MR_String Var_444;
            MR_Word Var_445;
            MR_Word Var_446;
            MR_String Var_448;
            MR_Word Var_449;
            MR_Word Var_450;
            MR_Word Var_451;
            MR_Word Var_452;
            MR_String Var_453;
            MR_Word Var_454;

            succeeded = ((MR_tag((MR_Word) SymName_399)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_444 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_399, (MR_Integer) 0))));
              succeeded = (strcmp(Var_444, (MR_String) ":=") == 0);
              if (succeeded)
              {
                succeeded = (ArgTerms1_402 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  LHSTerm0_406 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms1_402, (MR_Integer) 0))));
                  Var_445 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms1_402, (MR_Integer) 1))));
                  succeeded = (Var_445 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    RHSTerm0_407 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_445, (MR_Integer) 0))));
                    Var_446 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_445, (MR_Integer) 1))));
                    succeeded = (Var_446 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) LHSTerm0_406)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        Var_447 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHSTerm0_406, (MR_Integer) 0))));
                        Var_449 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHSTerm0_406, (MR_Integer) 1))));
                        FieldListContext_410 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHSTerm0_406, (MR_Integer) 2))));
                        succeeded = ((MR_tag((MR_Word) Var_447)) == (MR_Integer) 0);
                        if (succeeded)
                        {
                          Var_448 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_447, (MR_Integer) 0))));
                          succeeded = (strcmp(Var_448, (MR_String) "^") == 0);
                          if (succeeded)
                          {
                            succeeded = (Var_449 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              StateVar0_408 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_449, (MR_Integer) 0))));
                              Var_450 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_449, (MR_Integer) 1))));
                              succeeded = (Var_450 != (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                Remainder_409 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_450, (MR_Integer) 0))));
                                Var_451 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_450, (MR_Integer) 1))));
                                succeeded = (Var_451 == (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  succeeded = ((MR_tag((MR_Word) StateVar0_408)) == (MR_Integer) 0);
                                  if (succeeded)
                                  {
                                    Var_452 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StateVar0_408, (MR_Integer) 0))));
                                    StateVarNameTerms_411 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StateVar0_408, (MR_Integer) 1))));
                                    StateVarContext_412 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StateVar0_408, (MR_Integer) 2))));
                                    succeeded = ((MR_tag((MR_Word) Var_452)) == (MR_Integer) 0);
                                    if (succeeded)
                                    {
                                      Var_453 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_452, (MR_Integer) 0))));
                                      succeeded = (strcmp(Var_453, (MR_String) "!") == 0);
                                      if (succeeded)
                                      {
                                        succeeded = (StateVarNameTerms_411 != (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          Var_454 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StateVarNameTerms_411, (MR_Integer) 0))));
                                          Var_455 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StateVarNameTerms_411, (MR_Integer) 1))));
                                          succeeded = ((MR_tag((MR_Word) Var_454)) == (MR_Integer) 1);
                                          if (succeeded)
                                            succeeded = (Var_455 == (MR_Word) ((MR_Unsigned) 0U));
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
              MR_Word StateVar_415;
              MR_Word FieldList_416;
              MR_Word Var_462;
              MR_Word Var_463;
              MR_Word Var_467;
              MR_Word Var_468;
              MR_Word LHSTerm_484;
              MR_Word RHSTerm_485;
              MR_Word TransformedGoal_486;

              {
                LHSTerm_484 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), LHSTerm_484, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[0]));
                MR_hl_field(MR_mktag(0), LHSTerm_484, 1) = ((MR_Box) (StateVarNameTerms_411));
                MR_hl_field(MR_mktag(0), LHSTerm_484, 2) = ((MR_Box) (StateVarContext_412));
              }
              {
                StateVar_415 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), StateVar_415, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[1]));
                MR_hl_field(MR_mktag(0), StateVar_415, 1) = ((MR_Box) (StateVarNameTerms_411));
                MR_hl_field(MR_mktag(0), StateVar_415, 2) = ((MR_Box) (StateVarContext_412));
              }
              {
                Var_463 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_463, 0) = ((MR_Box) (Remainder_409));
                MR_hl_field(MR_mktag(1), Var_463, 1) = ((MR_Box) (Var_455));
              }
              {
                Var_462 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_462, 0) = ((MR_Box) (StateVar_415));
                MR_hl_field(MR_mktag(1), Var_462, 1) = ((MR_Box) (Var_463));
              }
              {
                FieldList_416 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), FieldList_416, 0) = ((MR_Box) (Var_447));
                MR_hl_field(MR_mktag(0), FieldList_416, 1) = ((MR_Box) (Var_462));
                MR_hl_field(MR_mktag(0), FieldList_416, 2) = ((MR_Box) (FieldListContext_410));
              }
              {
                Var_468 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_468, 0) = ((MR_Box) (RHSTerm0_407));
                MR_hl_field(MR_mktag(1), Var_468, 1) = ((MR_Box) (Var_455));
              }
              {
                Var_467 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_467, 0) = ((MR_Box) (FieldList_416));
                MR_hl_field(MR_mktag(1), Var_467, 1) = ((MR_Box) (Var_468));
              }
              {
                RHSTerm_485 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), RHSTerm_485, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[2]));
                MR_hl_field(MR_mktag(0), RHSTerm_485, 1) = ((MR_Box) (Var_467));
                MR_hl_field(MR_mktag(0), RHSTerm_485, 2) = ((MR_Box) (Context_398));
              }
              {
                TransformedGoal_486 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TransformedGoal_486, 0) = ((MR_Box) (Context_398));
                MR_hl_field(MR_mktag(0), TransformedGoal_486, 1) = ((MR_Box) (LHSTerm_484));
                MR_hl_field(MR_mktag(0), TransformedGoal_486, 2) = ((MR_Box) (RHSTerm_485));
                MR_hl_field(MR_mktag(0), TransformedGoal_486, 3) = (MR_Box) ((MR_Unsigned) (Purity_401));
              }
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, TransformedGoal_486, Renaming_19, HLDSGoal_20, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_84_443, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
            }
            else
            {
              MR_Word AccessType_418;
              MR_String Operator_417;

              succeeded = ((MR_tag((MR_Word) SymName_399)) == (MR_Integer) 0);
              if (succeeded)
              {
                Operator_417 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_399, (MR_Integer) 0))));
                if ((strcmp(Operator_417, (MR_String) ":=") == 0))
                {
                  AccessType_418 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                if ((strcmp(Operator_417, (MR_String) "=^") == 0))
                {
                  AccessType_418 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                else
                  succeeded = MR_FALSE;
              }
              if (succeeded)
              {
                MR_Word ArgTerms_419;

                parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, ArgTerms1_402, &ArgTerms_419);
                hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_p_0(LocKind_17, AccessType_418, ArgTerms_419, Context_398, HLDSGoal_20, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_84_443, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              }
              else
              {
                MR_Word HeadVars_420;
                MR_Word HeadVarsArgTerms_421;
                MR_Word PredFormArity_422;
                MR_Word GoalExpr_429;
                MR_Word CallId_431;
                MR_Word GoalInfo_436;
                MR_Word HLDSGoal0_437;
                MR_Word UserArity_438;
                MR_Word STATE_VARIABLE_VarSet_130_472;
                MR_Word STATE_VARIABLE_SVarState_131_473;
                MR_Word STATE_VARIABLE_Specs_132_474;
                MR_Word STATE_VARIABLE_QualInfo_140_482;
                MR_Word Var_483;
                MR_Word ArgTerms_487;
                MR_Word PredVar_423;
                MR_Word RealHeadVars_424;
                MR_String Var_491;

                parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, ArgTerms1_402, &ArgTerms_487);
                hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_9_p_0(ArgTerms_487, &HeadVars_420, &HeadVarsArgTerms_421, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_130_472, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_131_473, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_132_474);
                PredFormArity_422 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0]), ArgTerms_487);
                succeeded = ((MR_tag((MR_Word) SymName_399)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_491 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_399, (MR_Integer) 0))));
                  if ((strcmp(Var_491, (MR_String) "") == 0))
                    succeeded = MR_TRUE;
                  else
                  if ((strcmp(Var_491, (MR_String) "call") == 0))
                    succeeded = MR_TRUE;
                  else
                    succeeded = MR_FALSE;
                  if (succeeded)
                  {
                    succeeded = (HeadVars_420 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      PredVar_423 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVars_420, (MR_Integer) 0))));
                      RealHeadVars_424 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVars_420, (MR_Integer) 1))));
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Word GenericCall_428;
                  MR_Word GenericCallId_430;

                  {
                    GenericCall_428 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), GenericCall_428, 0) = ((MR_Box) (PredVar_423));
                    MR_hl_field(MR_mktag(0), GenericCall_428, 1) = (MR_Box) (((((MR_Unsigned) (Purity_401) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
                    MR_hl_field(MR_mktag(0), GenericCall_428, 2) = ((MR_Box) (PredFormArity_422));
                  }
                  {
                    GoalExpr_429 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), GoalExpr_429, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), GoalExpr_429, 1) = ((MR_Box) (GenericCall_428));
                    MR_hl_field(MR_mktag(3), GoalExpr_429, 2) = ((MR_Box) (RealHeadVars_424));
                    MR_hl_field(MR_mktag(3), GoalExpr_429, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), GoalExpr_429, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), GoalExpr_429, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 6));
                  }
                  hlds__hlds_goal__generic_call_to_id_2_p_0(GenericCall_428, &GenericCallId_430);
                  {
                    CallId_431 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), CallId_431, 0) = ((MR_Box) (GenericCallId_430));
                  }
                }
                else
                {
                  MR_Word PredId_432;
                  MR_Integer ModeId_433;
                  MR_Word PFSymNameArity_435;

                  PredId_432 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                  ModeId_433 = hlds__hlds_pred__invalid_proc_id_0_f_0();
                  {
                    GoalExpr_429 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), GoalExpr_429, 0) = ((MR_Box) (PredId_432));
                    MR_hl_field(MR_mktag(2), GoalExpr_429, 1) = ((MR_Box) (ModeId_433));
                    MR_hl_field(MR_mktag(2), GoalExpr_429, 2) = ((MR_Box) (HeadVars_420));
                    MR_hl_field(MR_mktag(2), GoalExpr_429, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(2), GoalExpr_429, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(2), GoalExpr_429, 5) = ((MR_Box) (SymName_399));
                  }
                  {
                    PFSymNameArity_435 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), PFSymNameArity_435, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(0), PFSymNameArity_435, 1) = ((MR_Box) (SymName_399));
                    MR_hl_field(MR_mktag(0), PFSymNameArity_435, 2) = ((MR_Box) (PredFormArity_422));
                  }
                  {
                    CallId_431 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), CallId_431, 0) = ((MR_Box) (PFSymNameArity_435));
                  }
                }
                hlds__hlds_goal__goal_info_init_context_purity_3_p_0(Context_398, Purity_401, &GoalInfo_436);
                {
                  HLDSGoal0_437 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), HLDSGoal0_437, 0) = ((MR_Box) (GoalExpr_429));
                  MR_hl_field(MR_mktag(0), HLDSGoal0_437, 1) = ((MR_Box) (GoalInfo_436));
                }
                parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 0, &UserArity_438, PredFormArity_422);
                hlds__make_hlds__qual_info__record_called_pred_or_func_5_p_0((MR_Integer) 0, SymName_399, UserArity_438, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_140_482);
                {
                  Var_483 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_483, 0) = ((MR_Box) (CallId_431));
                }
                hlds__make_hlds__superhomogeneous__insert_arg_unifications_17_p_0(HeadVarsArgTerms_421, Context_398, Var_483, HLDSGoal0_437, HLDSGoal_20, STATE_VARIABLE_SVarState_131_473, &STATE_VARIABLE_SVarState_84_443, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_130_472, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_140_482, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_132_474, STATE_VARIABLE_Specs_117);
              }
            }
          }
          hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(LocKind_17, STATE_VARIABLE_SVarState_84_443, STATE_VARIABLE_SVarState_107);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Context_492 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_18, (MR_Integer) 0))));
          MR_Word SubGoalA_493 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_18, (MR_Integer) 1))));
          MR_Word SubGoalB_494 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_18, (MR_Integer) 2))));
          MR_Word HLDSConjunctsCordA_495;
          MR_Word HLDSConjunctsCordAB_496;
          MR_Word HLDSConjuncts_497;
          MR_Word GoalInfo_498;
          MR_Word Var_499;
          MR_Word STATE_VARIABLE_SVarState_47_500;
          MR_Word STATE_VARIABLE_SVarStore_48_501;
          MR_Word STATE_VARIABLE_VarSet_49_502;
          MR_Word STATE_VARIABLE_ModuleInfo_50_503;
          MR_Word STATE_VARIABLE_QualInfo_51_504;
          MR_Word STATE_VARIABLE_Specs_52_505;

          Var_499 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
          hlds__make_hlds__goal_expr_to_goal__accumulate_plain_conjuncts_17_p_0(LocKind_17, SubGoalA_493, Renaming_19, Var_499, &HLDSConjunctsCordA_495, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_47_500, STATE_VARIABLE_SVarStore_0_108, &STATE_VARIABLE_SVarStore_48_501, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_49_502, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_50_503, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_51_504, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_52_505);
          hlds__make_hlds__goal_expr_to_goal__accumulate_plain_conjuncts_17_p_0(LocKind_17, SubGoalB_494, Renaming_19, HLDSConjunctsCordA_495, &HLDSConjunctsCordAB_496, STATE_VARIABLE_SVarState_47_500, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_48_501, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_49_502, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_50_503, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_51_504, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_52_505, STATE_VARIABLE_Specs_117);
          HLDSConjuncts_497 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HLDSConjunctsCordAB_496);
          hlds__hlds_goal__goal_info_init_2_p_0(Context_492, &GoalInfo_498);
          hlds__hlds_goal__conj_list_to_goal_3_p_0(HLDSConjuncts_497, GoalInfo_498, HLDSGoal_20);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Context_299 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalInfo_301;

              hlds__hlds_goal__goal_info_init_2_p_0(Context_299, &GoalInfo_301);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_2[0])));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_301));
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
              MR_Word Context_605 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word Vars0_606 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word StateVars0_607 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word Cond_608 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word Then_609 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 5))));
              MR_Word Else_610 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 6))));
              MR_Word Vars_612;
              MR_Word StateVars_613;
              MR_Word BeforeCondSVarState_614;
              MR_Word HLDSCond_615;
              MR_Word AfterCondSVarState_616;
              MR_Word HLDSThen0_617;
              MR_Word AfterThenSVarState0_618;
              MR_Word Globals_619;
              MR_Word ModuleName_620;
              MR_Word AfterThenSVarState_621;
              MR_Word HLDSElse0_622;
              MR_Word AfterElseSVarState_623;
              MR_Word HLDSThen_624;
              MR_Word HLDSElse_625;
              MR_Word GoalExpr_626;
              MR_Word GoalInfo_627;
              MR_Word STATE_VARIABLE_Specs_64_630;
              MR_Word STATE_VARIABLE_SVarStore_65_631;
              MR_Word STATE_VARIABLE_VarSet_66_632;
              MR_Word STATE_VARIABLE_ModuleInfo_67_633;
              MR_Word STATE_VARIABLE_QualInfo_68_634;
              MR_Word STATE_VARIABLE_Specs_69_635;
              MR_Word STATE_VARIABLE_SVarStore_70_636;
              MR_Word STATE_VARIABLE_VarSet_71_637;
              MR_Word STATE_VARIABLE_ModuleInfo_72_638;
              MR_Word STATE_VARIABLE_QualInfo_73_639;
              MR_Word STATE_VARIABLE_Specs_74_640;
              MR_Word STATE_VARIABLE_SVarStore_75_641;
              MR_Word STATE_VARIABLE_VarSet_76_642;
              MR_Word STATE_VARIABLE_Specs_79_643;

              parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, Vars0_606, &Vars_612);
              parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, StateVars0_607, &StateVars_613);
              hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(Context_605, STATE_VARIABLE_VarSet_0_110, StateVars_613, STATE_VARIABLE_SVarState_0_106, &BeforeCondSVarState_614, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_64_630);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Cond_608, Renaming_19, &HLDSCond_615, BeforeCondSVarState_614, &AfterCondSVarState_616, STATE_VARIABLE_SVarStore_0_108, &STATE_VARIABLE_SVarStore_65_631, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_66_632, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_67_633, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_68_634, STATE_VARIABLE_Specs_64_630, &STATE_VARIABLE_Specs_69_635);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Then_609, Renaming_19, &HLDSThen0_617, AfterCondSVarState_616, &AfterThenSVarState0_618, STATE_VARIABLE_SVarStore_65_631, &STATE_VARIABLE_SVarStore_70_636, STATE_VARIABLE_VarSet_66_632, &STATE_VARIABLE_VarSet_71_637, STATE_VARIABLE_ModuleInfo_67_633, &STATE_VARIABLE_ModuleInfo_72_638, STATE_VARIABLE_QualInfo_68_634, &STATE_VARIABLE_QualInfo_73_639, STATE_VARIABLE_Specs_69_635, &STATE_VARIABLE_Specs_74_640);
              hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_72_638, &Globals_619);
              hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_72_638, &ModuleName_620);
              hlds__make_hlds__state_var__svar_finish_local_state_vars_6_p_0(Globals_619, ModuleName_620, StateVars_613, STATE_VARIABLE_SVarState_0_106, AfterThenSVarState0_618, &AfterThenSVarState_621);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Else_610, Renaming_19, &HLDSElse0_622, STATE_VARIABLE_SVarState_0_106, &AfterElseSVarState_623, STATE_VARIABLE_SVarStore_70_636, &STATE_VARIABLE_SVarStore_75_641, STATE_VARIABLE_VarSet_71_637, &STATE_VARIABLE_VarSet_76_642, STATE_VARIABLE_ModuleInfo_72_638, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_73_639, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_74_640, &STATE_VARIABLE_Specs_79_643);
              hlds__make_hlds__state_var__svar_finish_if_then_else_20_p_0(Globals_619, ModuleName_620, LocKind_17, Context_605, StateVars_613, HLDSThen0_617, &HLDSThen_624, HLDSElse0_622, &HLDSElse_625, STATE_VARIABLE_SVarState_0_106, AfterCondSVarState_616, AfterThenSVarState_621, AfterElseSVarState_623, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_VarSet_76_642, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_SVarStore_75_641, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_Specs_79_643, STATE_VARIABLE_Specs_117);
              {
                GoalExpr_626 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_626, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), GoalExpr_626, 1) = ((MR_Box) (Vars_612));
                MR_hl_field(MR_mktag(3), GoalExpr_626, 2) = ((MR_Box) (HLDSCond_615));
                MR_hl_field(MR_mktag(3), GoalExpr_626, 3) = ((MR_Box) (HLDSThen_624));
                MR_hl_field(MR_mktag(3), GoalExpr_626, 4) = ((MR_Box) (HLDSElse_625));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_605, &GoalInfo_627);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_626));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_627));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Context_530 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word Disjunct1_531 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word Disjunct2_532 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word Disjuncts3plus_533 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word RevDisjunctsSVarStates1_534;
              MR_Word RevDisjunctsSVarStates2_535;
              MR_Word RevDisjunctsSVarStates_536;
              MR_Word DisjunctsSVarStates_537;
              MR_Word Disjuncts_538;
              MR_Word GoalInfo_539;
              MR_Word STATE_VARIABLE_SVarStore_52_541;
              MR_Word STATE_VARIABLE_VarSet_53_542;
              MR_Word STATE_VARIABLE_ModuleInfo_54_543;
              MR_Word STATE_VARIABLE_QualInfo_55_544;
              MR_Word STATE_VARIABLE_Specs_56_545;
              MR_Word STATE_VARIABLE_SVarStore_57_546;
              MR_Word STATE_VARIABLE_VarSet_58_547;
              MR_Word STATE_VARIABLE_ModuleInfo_59_548;
              MR_Word STATE_VARIABLE_QualInfo_60_549;
              MR_Word STATE_VARIABLE_Specs_61_550;
              MR_Word Var_551;
              MR_Word STATE_VARIABLE_SVarStore_63_552;
              MR_Word STATE_VARIABLE_VarSet_64_553;
              MR_Box conv11_RevDisjunctsSVarStates_536;
              MR_Box conv10_STATE_VARIABLE_SVarStore_63_552;
              MR_Box conv9_STATE_VARIABLE_VarSet_64_553;
              MR_Box conv8_STATE_VARIABLE_ModuleInfo_113;
              MR_Box conv7_STATE_VARIABLE_QualInfo_115;
              MR_Box conv6_STATE_VARIABLE_Specs_117;

              hlds__make_hlds__goal_expr_to_goal__accumulate_disjunct_16_p_0(LocKind_17, Renaming_19, STATE_VARIABLE_SVarState_0_106, Disjunct1_531, (MR_Word) ((MR_Unsigned) 0U), &RevDisjunctsSVarStates1_534, STATE_VARIABLE_SVarStore_0_108, &STATE_VARIABLE_SVarStore_52_541, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_53_542, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_54_543, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_55_544, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_56_545);
              hlds__make_hlds__goal_expr_to_goal__accumulate_disjunct_16_p_0(LocKind_17, Renaming_19, STATE_VARIABLE_SVarState_0_106, Disjunct2_532, RevDisjunctsSVarStates1_534, &RevDisjunctsSVarStates2_535, STATE_VARIABLE_SVarStore_52_541, &STATE_VARIABLE_SVarStore_57_546, STATE_VARIABLE_VarSet_53_542, &STATE_VARIABLE_VarSet_58_547, STATE_VARIABLE_ModuleInfo_54_543, &STATE_VARIABLE_ModuleInfo_59_548, STATE_VARIABLE_QualInfo_55_544, &STATE_VARIABLE_QualInfo_60_549, STATE_VARIABLE_Specs_56_545, &STATE_VARIABLE_Specs_61_550);
              {
                Var_551 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_551, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_5[0]));
                MR_hl_field(MR_mktag(0), Var_551, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_1));
                MR_hl_field(MR_mktag(0), Var_551, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_551, 3) = ((MR_Box) (LocKind_17));
                MR_hl_field(MR_mktag(0), Var_551, 4) = ((MR_Box) (Renaming_19));
                MR_hl_field(MR_mktag(0), Var_551, 5) = ((MR_Box) (STATE_VARIABLE_SVarState_0_106));
              }
              mercury__list__foldl6_14_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_store_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[2]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), Var_551, Disjuncts3plus_533, ((MR_Box) (RevDisjunctsSVarStates2_535)), &conv11_RevDisjunctsSVarStates_536, ((MR_Box) (STATE_VARIABLE_SVarStore_57_546)), &conv10_STATE_VARIABLE_SVarStore_63_552, ((MR_Box) (STATE_VARIABLE_VarSet_58_547)), &conv9_STATE_VARIABLE_VarSet_64_553, ((MR_Box) (STATE_VARIABLE_ModuleInfo_59_548)), &conv8_STATE_VARIABLE_ModuleInfo_113, ((MR_Box) (STATE_VARIABLE_QualInfo_60_549)), &conv7_STATE_VARIABLE_QualInfo_115, ((MR_Box) (STATE_VARIABLE_Specs_61_550)), &conv6_STATE_VARIABLE_Specs_117);
              RevDisjunctsSVarStates_536 = ((MR_Word) (conv11_RevDisjunctsSVarStates_536));
              STATE_VARIABLE_SVarStore_63_552 = ((MR_Word) (conv10_STATE_VARIABLE_SVarStore_63_552));
              STATE_VARIABLE_VarSet_64_553 = ((MR_Word) (conv9_STATE_VARIABLE_VarSet_64_553));
              *STATE_VARIABLE_ModuleInfo_113 = ((MR_Word) (conv8_STATE_VARIABLE_ModuleInfo_113));
              *STATE_VARIABLE_QualInfo_115 = ((MR_Word) (conv7_STATE_VARIABLE_QualInfo_115));
              *STATE_VARIABLE_Specs_117 = ((MR_Word) (conv6_STATE_VARIABLE_Specs_117));
              mercury__list__reverse_2_p_0((MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_hlds_goal_svar_state_0), RevDisjunctsSVarStates_536, &DisjunctsSVarStates_537);
              hlds__make_hlds__state_var__svar_finish_disjunction_8_p_0(DisjunctsSVarStates_537, &Disjuncts_538, STATE_VARIABLE_VarSet_64_553, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_63_552, STATE_VARIABLE_SVarStore_109);
              hlds__hlds_goal__goal_info_init_2_p_0(Context_530, &GoalInfo_539);
              hlds__hlds_goal__disj_list_to_goal_3_p_0(Disjuncts_538, GoalInfo_539, HLDSGoal_20);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Context_645 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word SubGoal_646 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word HLDSSubGoal_648;
              MR_Word GoalExpr_650;
              MR_Word GoalInfo_651;
              MR_Word Var_649;

              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_646, Renaming_19, &HLDSSubGoal_648, STATE_VARIABLE_SVarState_0_106, &Var_649, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              *STATE_VARIABLE_SVarState_107 = STATE_VARIABLE_SVarState_0_106;
              GoalExpr_650 = (MR_Word) ((MR_Word) (HLDSSubGoal_648));
              hlds__hlds_goal__goal_info_init_2_p_0(Context_645, &GoalInfo_651);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_650));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_651));
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
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[5])));
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
              MR_Word Context_652 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word SubGoalA_653 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word SubGoalB_654 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word HLDSConjunctsCordA_655;
              MR_Word HLDSConjunctsCordAB_656;
              MR_Word HLDSConjuncts_657;
              MR_Word GoalInfo_658;
              MR_Word Var_659;
              MR_Word STATE_VARIABLE_SVarState_47_660;
              MR_Word STATE_VARIABLE_SVarStore_48_661;
              MR_Word STATE_VARIABLE_VarSet_49_662;
              MR_Word STATE_VARIABLE_ModuleInfo_50_663;
              MR_Word STATE_VARIABLE_QualInfo_51_664;
              MR_Word STATE_VARIABLE_Specs_52_665;

              Var_659 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
              hlds__make_hlds__goal_expr_to_goal__accumulate_par_conjuncts_17_p_0(LocKind_17, SubGoalA_653, Renaming_19, Var_659, &HLDSConjunctsCordA_655, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_47_660, STATE_VARIABLE_SVarStore_0_108, &STATE_VARIABLE_SVarStore_48_661, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_49_662, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_50_663, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_51_664, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_52_665);
              hlds__make_hlds__goal_expr_to_goal__accumulate_par_conjuncts_17_p_0(LocKind_17, SubGoalB_654, Renaming_19, HLDSConjunctsCordA_655, &HLDSConjunctsCordAB_656, STATE_VARIABLE_SVarState_47_660, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_48_661, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_49_662, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_50_663, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_51_664, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_52_665, STATE_VARIABLE_Specs_117);
              HLDSConjuncts_657 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HLDSConjunctsCordAB_656);
              hlds__hlds_goal__goal_info_init_2_p_0(Context_652, &GoalInfo_658);
              hlds__hlds_goal__par_conj_list_to_goal_3_p_0(HLDSConjuncts_657, GoalInfo_658, HLDSGoal_20);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word QuantType_667 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              MR_Word VarsKind_668 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Context_669 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word Vars0_670 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word SubGoal_671 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));

              switch (QuantType_667) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word TransformedGoal_672;
                    MR_Word Var_685;
                    MR_Word Var_687;
                    MR_Word next_value_of_Goal_18;

                    {
                      Var_687 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_687, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                      MR_hl_field(MR_mktag(3), Var_687, 1) = ((MR_Box) (Context_669));
                      MR_hl_field(MR_mktag(3), Var_687, 2) = ((MR_Box) (SubGoal_671));
                    }
                    {
                      Var_685 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_685, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), Var_685, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) (VarsKind_668)));
                      MR_hl_field(MR_mktag(3), Var_685, 2) = ((MR_Box) (Context_669));
                      MR_hl_field(MR_mktag(3), Var_685, 3) = ((MR_Box) (Vars0_670));
                      MR_hl_field(MR_mktag(3), Var_685, 4) = ((MR_Box) (Var_687));
                    }
                    {
                      TransformedGoal_672 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), TransformedGoal_672, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                      MR_hl_field(MR_mktag(3), TransformedGoal_672, 1) = ((MR_Box) (Context_669));
                      MR_hl_field(MR_mktag(3), TransformedGoal_672, 2) = ((MR_Box) (Var_685));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_Goal_18 = TransformedGoal_672;
                    Goal_18 = next_value_of_Goal_18;
                    continue;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word Vars_673;
                    MR_Word HLDSSubGoal_674;
                    MR_Word Reason_675;
                    MR_Word GoalExpr_683;
                    MR_Word GoalInfo_684;

                    parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, Vars0_670, &Vars_673);
                    switch (VarsKind_668) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_671, Renaming_19, &HLDSSubGoal_674, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
                          {
                            Reason_675 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Reason_675, 0) = ((MR_Box) (Vars_673));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word BeforeInsideSVarState_678;
                          MR_Word AfterInsideSVarState_679;
                          MR_Word Globals_680;
                          MR_Word ModuleName_681;
                          MR_Word STATE_VARIABLE_Specs_73_689;

                          hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(Context_669, STATE_VARIABLE_VarSet_0_110, Vars_673, STATE_VARIABLE_SVarState_0_106, &BeforeInsideSVarState_678, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_73_689);
                          hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_671, Renaming_19, &HLDSSubGoal_674, BeforeInsideSVarState_678, &AfterInsideSVarState_679, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_73_689, STATE_VARIABLE_Specs_117);
                          hlds__hlds_module__module_info_get_globals_2_p_0(*STATE_VARIABLE_ModuleInfo_113, &Globals_680);
                          hlds__hlds_module__module_info_get_name_2_p_0(*STATE_VARIABLE_ModuleInfo_113, &ModuleName_681);
                          hlds__make_hlds__state_var__svar_finish_local_state_vars_6_p_0(Globals_680, ModuleName_681, Vars_673, STATE_VARIABLE_SVarState_0_106, AfterInsideSVarState_679, STATE_VARIABLE_SVarState_107);
                          Reason_675 = (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[3]);
                        }
                        break;
                    }
                    {
                      GoalExpr_683 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_683, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(MR_mktag(3), GoalExpr_683, 1) = ((MR_Box) (Reason_675));
                      MR_hl_field(MR_mktag(3), GoalExpr_683, 2) = ((MR_Box) (HLDSSubGoal_674));
                    }
                    hlds__hlds_goal__goal_info_init_2_p_0(Context_669, &GoalInfo_684);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *HLDSGoal_20 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_683));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_684));
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
              MR_Word Context_240 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_241;
              MR_Word GoalInfo_242;

              {
                Reason_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Reason_69, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Reason_69, 1) = (MR_Box) ((MR_Unsigned) (Purity_67));
              }
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_68, Renaming_19, &HLDSSubGoal_71, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              {
                GoalExpr_241 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_241, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_241, 1) = ((MR_Box) (Reason_69));
                MR_hl_field(MR_mktag(3), GoalExpr_241, 2) = ((MR_Box) (HLDSSubGoal_71));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_240, &GoalInfo_242);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_241));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_242));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word Vars_272 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word StateVars_273 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word DotSVars_274 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word ColonSVars_275 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 5))));
              MR_Word PromiseVars_277;
              MR_Word Context_278 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_279;
              MR_Word GoalInfo_280;
              MR_Word SubGoal_281 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 6))));
              MR_Word Reason_282;
              MR_Word HLDSSubGoal_283;

              hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(LocKind_17, Vars_272, StateVars_273, DotSVars_274, ColonSVars_275, Context_278, Renaming_19, &PromiseVars_277, SubGoal_281, &HLDSSubGoal_283, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              {
                Reason_282 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Reason_282, 0) = ((MR_Box) (PromiseVars_277));
                MR_hl_field(MR_mktag(2), Reason_282, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              {
                GoalExpr_279 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_279, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_279, 1) = ((MR_Box) (Reason_282));
                MR_hl_field(MR_mktag(3), GoalExpr_279, 2) = ((MR_Box) (HLDSSubGoal_283));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_278, &GoalInfo_280);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_279));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_280));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word Vars_260 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word StateVars_261 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word DotSVars_262 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word ColonSVars_263 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 5))));
              MR_Word PromiseVars_265;
              MR_Word Context_266 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_267;
              MR_Word GoalInfo_268;
              MR_Word SubGoal_269 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 6))));
              MR_Word Reason_270;
              MR_Word HLDSSubGoal_271;

              hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(LocKind_17, Vars_260, StateVars_261, DotSVars_262, ColonSVars_263, Context_266, Renaming_19, &PromiseVars_265, SubGoal_269, &HLDSSubGoal_271, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              {
                Reason_270 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Reason_270, 0) = ((MR_Box) (PromiseVars_265));
                MR_hl_field(MR_mktag(2), Reason_270, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              }
              {
                GoalExpr_267 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_267, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_267, 1) = ((MR_Box) (Reason_270));
                MR_hl_field(MR_mktag(3), GoalExpr_267, 2) = ((MR_Box) (HLDSSubGoal_271));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_266, &GoalInfo_268);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_267));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_268));
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
              MR_Word Context_254 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_255;
              MR_Word GoalInfo_256;
              MR_Word SubGoal_257 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 6))));
              MR_Word Reason_258;
              MR_Word HLDSSubGoal_259;

              hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(LocKind_17, Vars_74, StateVars_75, DotSVars_76, ColonSVars_77, Context_254, Renaming_19, &PromiseVars_79, SubGoal_257, &HLDSSubGoal_259, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              {
                Reason_258 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Reason_258, 0) = ((MR_Box) (PromiseVars_79));
                MR_hl_field(MR_mktag(2), Reason_258, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
              }
              {
                GoalExpr_255 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_255, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_255, 1) = ((MR_Box) (Reason_258));
                MR_hl_field(MR_mktag(3), GoalExpr_255, 2) = ((MR_Box) (HLDSSubGoal_259));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_254, &GoalInfo_256);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_255));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_256));
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word Detism_70 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_Word SubGoal_284 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word Reason_285;
              MR_Word HLDSSubGoal_286;
              MR_Word Context_287 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_288;
              MR_Word GoalInfo_289;

              {
                Reason_285 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Reason_285, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Reason_285, 1) = (MR_Box) ((MR_Unsigned) (Detism_70));
              }
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_284, Renaming_19, &HLDSSubGoal_286, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              {
                GoalExpr_288 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_288, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_288, 1) = ((MR_Box) (Reason_285));
                MR_hl_field(MR_mktag(3), GoalExpr_288, 2) = ((MR_Box) (HLDSSubGoal_286));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_287, &GoalInfo_289);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_288));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_289));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word PODVar0_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word Var_73;
              MR_Word STATE_VARIABLE_SVarState_190_190;
              MR_Word STATE_VARIABLE_VarSet_191_191;
              MR_Word STATE_VARIABLE_Specs_192_192;
              MR_Word Context_247 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_248;
              MR_Word GoalInfo_249;
              MR_Word SubGoal_250 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word Reason_251;
              MR_Word HLDSSubGoal_253;

              hlds__make_hlds__goal_expr_to_goal__rename_and_maybe_expand_dot_var_11_p_0(Context_247, (MR_Integer) 1, Renaming_19, PODVar0_72, &Var_73, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_190_190, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_191_191, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_192_192);
              {
                Reason_251 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Reason_251, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), Reason_251, 1) = ((MR_Box) (Var_73));
              }
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_250, Renaming_19, &HLDSSubGoal_253, STATE_VARIABLE_SVarState_190_190, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_191_191, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_192_192, STATE_VARIABLE_Specs_117);
              {
                GoalExpr_248 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_248, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_248, 1) = ((MR_Box) (Reason_251));
                MR_hl_field(MR_mktag(3), GoalExpr_248, 2) = ((MR_Box) (HLDSSubGoal_253));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_247, &GoalInfo_249);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_248));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_249));
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word Detism_243 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))) & (MR_Integer) 7);
              MR_Word PODVar0_244 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word Var_245;
              MR_Word STATE_VARIABLE_SVarState_190_290;
              MR_Word STATE_VARIABLE_VarSet_191_291;
              MR_Word STATE_VARIABLE_Specs_192_292;
              MR_Word Context_293 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_294;
              MR_Word GoalInfo_295;
              MR_Word SubGoal_296 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word Reason_297;
              MR_Word HLDSSubGoal_298;

              hlds__make_hlds__goal_expr_to_goal__rename_and_maybe_expand_dot_var_11_p_0(Context_293, (MR_Integer) 1, Renaming_19, PODVar0_244, &Var_245, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_190_290, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_191_291, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_192_292);
              {
                Reason_297 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Reason_297, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), Reason_297, 1) = ((MR_Box) (Var_245));
                MR_hl_field(MR_mktag(3), Reason_297, 2) = (MR_Box) ((MR_Unsigned) (Detism_243));
              }
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_296, Renaming_19, &HLDSSubGoal_298, STATE_VARIABLE_SVarState_190_290, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_191_291, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_192_292, STATE_VARIABLE_Specs_117);
              {
                GoalExpr_294 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_294, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_294, 1) = ((MR_Box) (Reason_297));
                MR_hl_field(MR_mktag(3), GoalExpr_294, 2) = ((MR_Box) (HLDSSubGoal_298));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_293, &GoalInfo_295);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_294));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_295));
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word Context_507 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word HeadWarning_508 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_Word TailWarnings_509 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word SubGoal_510 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word HLDSSubGoal_514;
              MR_Word GoalExpr_517;
              MR_Word GoalInfo_518;
              MR_Word Var_528;

              succeeded = (HeadWarning_508 == (MR_Integer) 1);
              if (!(succeeded))
                succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), ((MR_Box) ((MR_Integer) 1)), TailWarnings_509);
              if (succeeded)
              {
                MR_Word Globals0_511;
                MR_Word WarnOccursCheck0_512;
                MR_Word Globals1_513;
                MR_Word Globals2_515;
                MR_Word Globals3_516;
                MR_Word STATE_VARIABLE_ModuleInfo_56_524;
                MR_Word STATE_VARIABLE_ModuleInfo_60_525;
                MR_Word Var_527;

                hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_112, &Globals0_511);
                libs__globals__lookup_bool_option_3_p_0(Globals0_511, (MR_Integer) 62, &WarnOccursCheck0_512);
                libs__globals__set_option_4_p_0((MR_Integer) 62, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_3[5])), Globals0_511, &Globals1_513);
                hlds__hlds_module__module_info_set_globals_3_p_0(Globals1_513, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_56_524);
                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_510, Renaming_19, &HLDSSubGoal_514, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_56_524, &STATE_VARIABLE_ModuleInfo_60_525, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
                hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_60_525, &Globals2_515);
                {
                  Var_527 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_527, 0) = (MR_Box) ((MR_Unsigned) (WarnOccursCheck0_512));
                }
                libs__globals__set_option_4_p_0((MR_Integer) 62, Var_527, Globals2_515, &Globals3_516);
                hlds__hlds_module__module_info_set_globals_3_p_0(Globals3_516, STATE_VARIABLE_ModuleInfo_60_525, STATE_VARIABLE_ModuleInfo_113);
              }
              else
                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_510, Renaming_19, &HLDSSubGoal_514, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              {
                Var_528 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_528, 0) = (MR_Box) ((MR_Unsigned) (HeadWarning_508));
                MR_hl_field(MR_mktag(1), Var_528, 1) = ((MR_Box) (TailWarnings_509));
              }
              {
                GoalExpr_517 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_517, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_517, 1) = ((MR_Box) (Var_528));
                MR_hl_field(MR_mktag(3), GoalExpr_517, 2) = ((MR_Box) (HLDSSubGoal_514));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_507, &GoalInfo_518);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_517));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_518));
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word Context_692 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word MaybeCompileTime_693 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word MaybeRunTime_694 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word MaybeIO0_695 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word Mutables0_696 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 5))));
              MR_Word SubGoal0_697 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 6))));
              MR_Word MutableHLDSs_698;
              MR_Word MutableStateVars_699;
              MR_Word MutableGetGoals_700;
              MR_Word MutableSetGoals_701;
              MR_Word MaybeIOHLDS_707;
              MR_Word StateVars_708;
              MR_Word GetGoals_709;
              MR_Word SetGoals_710;
              MR_Word SubGoal1_711;
              MR_Word BeforeInsideSVarState_712;
              MR_Word HLDSSubGoal_713;
              MR_Word AfterInsideSVarState_714;
              MR_Word Globals_715;
              MR_Word ModuleName_716;
              MR_Word Reason_717;
              MR_Word GoalExpr_718;
              MR_Word GoalInfo_719;
              MR_Word Var_720;
              MR_Word Var_721;
              MR_Word Var_722;
              MR_Word Var_723;
              MR_Word STATE_VARIABLE_Specs_74_725;
              MR_Word STATE_VARIABLE_QualInfo_78_726;

              {
                Var_720 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_720, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_6[0]));
                MR_hl_field(MR_mktag(0), Var_720, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_2));
                MR_hl_field(MR_mktag(0), Var_720, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_720, 3) = ((MR_Box) (Context_692));
                MR_hl_field(MR_mktag(0), Var_720, 4) = ((MR_Box) (STATE_VARIABLE_VarSet_0_110));
                MR_hl_field(MR_mktag(0), Var_720, 5) = ((MR_Box) (Renaming_19));
              }
              mercury__list__map4_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[4]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), Var_720, Mutables0_696, &MutableHLDSs_698, &MutableStateVars_699, &MutableGetGoals_700, &MutableSetGoals_701);
              if ((MaybeIO0_695 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MaybeIOHLDS_707 = (MR_Word) ((MR_Unsigned) 0U);
                StateVars_708 = MutableStateVars_699;
                GetGoals_709 = MutableGetGoals_700;
                SetGoals_710 = MutableSetGoals_701;
              }
              else
              {
                MR_Word IOStateVar0_702 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIO0_695, (MR_Integer) 0))));
                MR_Word IOStateVar_703;
                MR_String IOStateVarName_704;
                MR_Word IOGetGoal_705;
                MR_Word IOSetGoal_706;

                hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_8_p_0(Context_692, STATE_VARIABLE_VarSet_0_110, Renaming_19, IOStateVar0_702, &IOStateVar_703, &IOStateVarName_704, &IOGetGoal_705, &IOSetGoal_706);
                {
                  MaybeIOHLDS_707 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MaybeIOHLDS_707, 0) = ((MR_Box) (IOStateVarName_704));
                }
                {
                  StateVars_708 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), StateVars_708, 0) = ((MR_Box) (IOStateVar_703));
                  MR_hl_field(MR_mktag(1), StateVars_708, 1) = ((MR_Box) (MutableStateVars_699));
                }
                {
                  GetGoals_709 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), GetGoals_709, 0) = ((MR_Box) (IOGetGoal_705));
                  MR_hl_field(MR_mktag(1), GetGoals_709, 1) = ((MR_Box) (MutableGetGoals_700));
                }
                {
                  SetGoals_710 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), SetGoals_710, 0) = ((MR_Box) (IOSetGoal_706));
                  MR_hl_field(MR_mktag(1), SetGoals_710, 1) = ((MR_Box) (MutableSetGoals_701));
                }
              }
              {
                Var_723 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_723, 0) = ((MR_Box) (SubGoal0_697));
                MR_hl_field(MR_mktag(1), Var_723, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_722 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), Var_723, SetGoals_710);
              Var_721 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), GetGoals_709, Var_722);
              SubGoal1_711 = parse_tree__prog_util__goal_list_to_conj_2_f_0(Context_692, Var_721);
              hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(Context_692, STATE_VARIABLE_VarSet_0_110, StateVars_708, STATE_VARIABLE_SVarState_0_106, &BeforeInsideSVarState_712, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_74_725);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal1_711, Renaming_19, &HLDSSubGoal_713, BeforeInsideSVarState_712, &AfterInsideSVarState_714, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_78_726, STATE_VARIABLE_Specs_74_725, STATE_VARIABLE_Specs_117);
              hlds__hlds_module__module_info_get_globals_2_p_0(*STATE_VARIABLE_ModuleInfo_113, &Globals_715);
              hlds__hlds_module__module_info_get_name_2_p_0(*STATE_VARIABLE_ModuleInfo_113, &ModuleName_716);
              hlds__make_hlds__state_var__svar_finish_local_state_vars_6_p_0(Globals_715, ModuleName_716, StateVars_708, STATE_VARIABLE_SVarState_0_106, AfterInsideSVarState_714, STATE_VARIABLE_SVarState_107);
              hlds__make_hlds__qual_info__qual_info_set_found_trace_goal_3_p_0((MR_Integer) 1, STATE_VARIABLE_QualInfo_78_726, STATE_VARIABLE_QualInfo_115);
              {
                Reason_717 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Reason_717, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), Reason_717, 1) = ((MR_Box) (MaybeCompileTime_693));
                MR_hl_field(MR_mktag(3), Reason_717, 2) = ((MR_Box) (MaybeRunTime_694));
                MR_hl_field(MR_mktag(3), Reason_717, 3) = ((MR_Box) (MaybeIOHLDS_707));
                MR_hl_field(MR_mktag(3), Reason_717, 4) = ((MR_Box) (MutableHLDSs_698));
                MR_hl_field(MR_mktag(3), Reason_717, 5) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                GoalExpr_718 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_718, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_718, 1) = ((MR_Box) (Reason_717));
                MR_hl_field(MR_mktag(3), GoalExpr_718, 2) = ((MR_Box) (HLDSSubGoal_713));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_692, &GoalInfo_719);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_718));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_719));
              }
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word Context_302 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word Outer0_303 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word Inner0_304 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word MaybeOutputVars0_305 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word MainGoal_306 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 5))));
              MR_Word OrElseGoals_307 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 6))));
              MR_Word MaybeOutputVars_308;
              MR_Word Outer_317;
              MR_Word HLDSGoals_332;
              MR_Word HLDSMainGoal_333;
              MR_Word HLDSOrElseGoals_334;
              MR_Word Inner_339;
              MR_Word ShortHand_343;
              MR_Word GoalExpr_344;
              MR_Word GoalInfo_345;

              if ((MaybeOutputVars0_305 == (MR_Word) ((MR_Unsigned) 0U)))
                MaybeOutputVars_308 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word OutputVars0_309 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOutputVars0_305, (MR_Integer) 0))));
                MR_Word OutputVars_310;

                parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, OutputVars0_309, &OutputVars_310);
                {
                  MaybeOutputVars_308 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MaybeOutputVars_308, 0) = ((MR_Box) (OutputVars_310));
                }
              }
              if (((MR_tag((MR_Word) Outer0_303)) == (MR_Integer) 0))
              {
                MR_Word OuterStateVar0_311 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer0_303, (MR_Integer) 0))));
                MR_Word OuterStateVar_312;
                MR_Word OuterDI_313;
                MR_Word OuterUO_314;
                MR_Word OuterScopeInfo2_342;
                MR_Word STATE_VARIABLE_SVarState_89_351;
                MR_Word STATE_VARIABLE_VarSet_90_352;
                MR_Word STATE_VARIABLE_Specs_91_353;
                MR_Word STATE_VARIABLE_SVarState_113_372;

                parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, OuterStateVar0_311, &OuterStateVar_312);
                hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_p_0(Context_302, OuterStateVar_312, &OuterDI_313, &OuterUO_314, &OuterScopeInfo2_342, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_89_351, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_90_352, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_91_353);
                {
                  Outer_317 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Outer_317, 0) = ((MR_Box) (OuterDI_313));
                  MR_hl_field(MR_mktag(0), Outer_317, 1) = ((MR_Box) (OuterUO_314));
                }
                if (((MR_tag((MR_Word) Inner0_304)) == (MR_Integer) 0))
                {
                  MR_Word InnerStateVar0_320 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner0_304, (MR_Integer) 0))));
                  MR_Word InnerStateVar_321;
                  MR_Word BeforeDisjSVarState_326;
                  MR_Word HLDSMainGoal0_327;
                  MR_Word AfterMainSVarState_328;
                  MR_Word MainDisjState_329;
                  MR_Word OrElseDisjStates_330;
                  MR_Word AllDisjStates_331;
                  MR_Word InnerScopeInfo2_336;
                  MR_Word InnerDI_337;
                  MR_Word InnerUO_338;
                  MR_Word STATE_VARIABLE_VarSet_96_358;
                  MR_Word STATE_VARIABLE_Specs_97_359;
                  MR_Word STATE_VARIABLE_SVarStore_98_360;
                  MR_Word STATE_VARIABLE_VarSet_99_361;
                  MR_Word STATE_VARIABLE_ModuleInfo_100_362;
                  MR_Word STATE_VARIABLE_QualInfo_101_363;
                  MR_Word STATE_VARIABLE_Specs_102_364;
                  MR_Word STATE_VARIABLE_SVarStore_103_365;
                  MR_Word STATE_VARIABLE_VarSet_104_366;
                  MR_Word STATE_VARIABLE_Specs_107_367;
                  MR_Word STATE_VARIABLE_VarSet_108_368;
                  MR_Word STATE_VARIABLE_SVarState_109_369;

                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, InnerStateVar0_320, &InnerStateVar_321);
                  hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_p_0(Context_302, InnerStateVar_321, &InnerScopeInfo2_336, STATE_VARIABLE_SVarState_89_351, &BeforeDisjSVarState_326, STATE_VARIABLE_VarSet_90_352, &STATE_VARIABLE_VarSet_96_358, STATE_VARIABLE_Specs_91_353, &STATE_VARIABLE_Specs_97_359);
                  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, MainGoal_306, Renaming_19, &HLDSMainGoal0_327, BeforeDisjSVarState_326, &AfterMainSVarState_328, STATE_VARIABLE_SVarStore_0_108, &STATE_VARIABLE_SVarStore_98_360, STATE_VARIABLE_VarSet_96_358, &STATE_VARIABLE_VarSet_99_361, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_100_362, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_101_363, STATE_VARIABLE_Specs_97_359, &STATE_VARIABLE_Specs_102_364);
                  {
                    MainDisjState_329 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MainDisjState_329, 0) = ((MR_Box) (HLDSMainGoal0_327));
                    MR_hl_field(MR_mktag(0), MainDisjState_329, 1) = ((MR_Box) (AfterMainSVarState_328));
                  }
                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(LocKind_17, OrElseGoals_307, Renaming_19, &OrElseDisjStates_330, BeforeDisjSVarState_326, STATE_VARIABLE_SVarStore_98_360, &STATE_VARIABLE_SVarStore_103_365, STATE_VARIABLE_VarSet_99_361, &STATE_VARIABLE_VarSet_104_366, STATE_VARIABLE_ModuleInfo_100_362, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_101_363, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_102_364, &STATE_VARIABLE_Specs_107_367);
                  {
                    AllDisjStates_331 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), AllDisjStates_331, 0) = ((MR_Box) (MainDisjState_329));
                    MR_hl_field(MR_mktag(1), AllDisjStates_331, 1) = ((MR_Box) (OrElseDisjStates_330));
                  }
                  hlds__make_hlds__state_var__svar_finish_disjunction_8_p_0(AllDisjStates_331, &HLDSGoals_332, STATE_VARIABLE_VarSet_104_366, &STATE_VARIABLE_VarSet_108_368, BeforeDisjSVarState_326, &STATE_VARIABLE_SVarState_109_369, STATE_VARIABLE_SVarStore_103_365, STATE_VARIABLE_SVarStore_109);
                  hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_p_0(Context_302, InnerScopeInfo2_336, &InnerDI_337, &InnerUO_338, STATE_VARIABLE_SVarState_109_369, &STATE_VARIABLE_SVarState_113_372, STATE_VARIABLE_VarSet_108_368, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_Specs_107_367, STATE_VARIABLE_Specs_117);
                  {
                    Inner_339 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Inner_339, 0) = ((MR_Box) (InnerDI_337));
                    MR_hl_field(MR_mktag(0), Inner_339, 1) = ((MR_Box) (InnerUO_338));
                  }
                }
                else
                {
                  MR_Word InnerDI0_340;
                  MR_Word InnerUO0_341;
                  MR_Word InnerDI_391;
                  MR_Word InnerUO_392;
                  MR_Word HLDSMainGoal0_873;
                  MR_Word AfterMainSVarState_874;
                  MR_Word MainDisjState_875;
                  MR_Word OrElseDisjStates_876;
                  MR_Word AllDisjStates_877;
                  MR_Word STATE_VARIABLE_SVarStore_98_880;
                  MR_Word STATE_VARIABLE_VarSet_99_881;
                  MR_Word STATE_VARIABLE_ModuleInfo_100_882;
                  MR_Word STATE_VARIABLE_QualInfo_101_883;
                  MR_Word STATE_VARIABLE_Specs_102_884;
                  MR_Word STATE_VARIABLE_SVarStore_103_885;
                  MR_Word STATE_VARIABLE_VarSet_104_886;

                  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, MainGoal_306, Renaming_19, &HLDSMainGoal0_873, STATE_VARIABLE_SVarState_89_351, &AfterMainSVarState_874, STATE_VARIABLE_SVarStore_0_108, &STATE_VARIABLE_SVarStore_98_880, STATE_VARIABLE_VarSet_90_352, &STATE_VARIABLE_VarSet_99_881, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_100_882, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_101_883, STATE_VARIABLE_Specs_91_353, &STATE_VARIABLE_Specs_102_884);
                  {
                    MainDisjState_875 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MainDisjState_875, 0) = ((MR_Box) (HLDSMainGoal0_873));
                    MR_hl_field(MR_mktag(0), MainDisjState_875, 1) = ((MR_Box) (AfterMainSVarState_874));
                  }
                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(LocKind_17, OrElseGoals_307, Renaming_19, &OrElseDisjStates_876, STATE_VARIABLE_SVarState_89_351, STATE_VARIABLE_SVarStore_98_880, &STATE_VARIABLE_SVarStore_103_885, STATE_VARIABLE_VarSet_99_881, &STATE_VARIABLE_VarSet_104_886, STATE_VARIABLE_ModuleInfo_100_882, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_101_883, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_102_884, STATE_VARIABLE_Specs_117);
                  {
                    AllDisjStates_877 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), AllDisjStates_877, 0) = ((MR_Box) (MainDisjState_875));
                    MR_hl_field(MR_mktag(1), AllDisjStates_877, 1) = ((MR_Box) (OrElseDisjStates_876));
                  }
                  hlds__make_hlds__state_var__svar_finish_disjunction_8_p_0(AllDisjStates_877, &HLDSGoals_332, STATE_VARIABLE_VarSet_104_886, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_SVarState_89_351, &STATE_VARIABLE_SVarState_113_372, STATE_VARIABLE_SVarStore_103_885, STATE_VARIABLE_SVarStore_109);
                  InnerDI0_340 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Inner0_304, (MR_Integer) 0))));
                  InnerUO0_341 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Inner0_304, (MR_Integer) 1))));
                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, InnerDI0_340, &InnerDI_391);
                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, InnerUO0_341, &InnerUO_392);
                  {
                    Inner_339 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Inner_339, 0) = ((MR_Box) (InnerDI_391));
                    MR_hl_field(MR_mktag(0), Inner_339, 1) = ((MR_Box) (InnerUO_392));
                  }
                }
                hlds__make_hlds__state_var__svar_finish_outer_atomic_scope_3_p_0(OuterScopeInfo2_342, STATE_VARIABLE_SVarState_113_372, STATE_VARIABLE_SVarState_107);
              }
              else
              {
                MR_Word OuterDI0_318 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Outer0_303, (MR_Integer) 0))));
                MR_Word OuterUO0_319 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Outer0_303, (MR_Integer) 1))));
                MR_Word OuterDI_389;
                MR_Word OuterUO_390;

                parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, OuterDI0_318, &OuterDI_389);
                parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, OuterUO0_319, &OuterUO_390);
                {
                  Outer_317 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Outer_317, 0) = ((MR_Box) (OuterDI_389));
                  MR_hl_field(MR_mktag(0), Outer_317, 1) = ((MR_Box) (OuterUO_390));
                }
                if (((MR_tag((MR_Word) Inner0_304)) == (MR_Integer) 0))
                {
                  MR_Word InnerStateVar0_790 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner0_304, (MR_Integer) 0))));
                  MR_Word InnerStateVar_791;
                  MR_Word InnerScopeInfo2_802;
                  MR_Word InnerDI_803;
                  MR_Word InnerUO_804;
                  MR_Word BeforeDisjSVarState_834;
                  MR_Word HLDSMainGoal0_835;
                  MR_Word AfterMainSVarState_836;
                  MR_Word MainDisjState_837;
                  MR_Word OrElseDisjStates_838;
                  MR_Word AllDisjStates_839;
                  MR_Word STATE_VARIABLE_VarSet_96_849;
                  MR_Word STATE_VARIABLE_Specs_97_850;
                  MR_Word STATE_VARIABLE_SVarStore_98_851;
                  MR_Word STATE_VARIABLE_VarSet_99_852;
                  MR_Word STATE_VARIABLE_ModuleInfo_100_853;
                  MR_Word STATE_VARIABLE_QualInfo_101_854;
                  MR_Word STATE_VARIABLE_Specs_102_855;
                  MR_Word STATE_VARIABLE_SVarStore_103_856;
                  MR_Word STATE_VARIABLE_VarSet_104_857;
                  MR_Word STATE_VARIABLE_Specs_107_858;
                  MR_Word STATE_VARIABLE_VarSet_108_859;
                  MR_Word STATE_VARIABLE_SVarState_109_860;

                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, InnerStateVar0_790, &InnerStateVar_791);
                  hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_p_0(Context_302, InnerStateVar_791, &InnerScopeInfo2_802, STATE_VARIABLE_SVarState_0_106, &BeforeDisjSVarState_834, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_96_849, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_97_850);
                  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, MainGoal_306, Renaming_19, &HLDSMainGoal0_835, BeforeDisjSVarState_834, &AfterMainSVarState_836, STATE_VARIABLE_SVarStore_0_108, &STATE_VARIABLE_SVarStore_98_851, STATE_VARIABLE_VarSet_96_849, &STATE_VARIABLE_VarSet_99_852, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_100_853, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_101_854, STATE_VARIABLE_Specs_97_850, &STATE_VARIABLE_Specs_102_855);
                  {
                    MainDisjState_837 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MainDisjState_837, 0) = ((MR_Box) (HLDSMainGoal0_835));
                    MR_hl_field(MR_mktag(0), MainDisjState_837, 1) = ((MR_Box) (AfterMainSVarState_836));
                  }
                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(LocKind_17, OrElseGoals_307, Renaming_19, &OrElseDisjStates_838, BeforeDisjSVarState_834, STATE_VARIABLE_SVarStore_98_851, &STATE_VARIABLE_SVarStore_103_856, STATE_VARIABLE_VarSet_99_852, &STATE_VARIABLE_VarSet_104_857, STATE_VARIABLE_ModuleInfo_100_853, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_101_854, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_102_855, &STATE_VARIABLE_Specs_107_858);
                  {
                    AllDisjStates_839 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), AllDisjStates_839, 0) = ((MR_Box) (MainDisjState_837));
                    MR_hl_field(MR_mktag(1), AllDisjStates_839, 1) = ((MR_Box) (OrElseDisjStates_838));
                  }
                  hlds__make_hlds__state_var__svar_finish_disjunction_8_p_0(AllDisjStates_839, &HLDSGoals_332, STATE_VARIABLE_VarSet_104_857, &STATE_VARIABLE_VarSet_108_859, BeforeDisjSVarState_834, &STATE_VARIABLE_SVarState_109_860, STATE_VARIABLE_SVarStore_103_856, STATE_VARIABLE_SVarStore_109);
                  hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_p_0(Context_302, InnerScopeInfo2_802, &InnerDI_803, &InnerUO_804, STATE_VARIABLE_SVarState_109_860, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_VarSet_108_859, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_Specs_107_858, STATE_VARIABLE_Specs_117);
                  {
                    Inner_339 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Inner_339, 0) = ((MR_Box) (InnerDI_803));
                    MR_hl_field(MR_mktag(0), Inner_339, 1) = ((MR_Box) (InnerUO_804));
                  }
                }
                else
                {
                  MR_Word InnerDI0_810;
                  MR_Word InnerUO0_811;
                  MR_Word InnerDI_814;
                  MR_Word InnerUO_815;
                  MR_Word HLDSMainGoal0_893;
                  MR_Word AfterMainSVarState_894;
                  MR_Word MainDisjState_895;
                  MR_Word OrElseDisjStates_896;
                  MR_Word AllDisjStates_897;
                  MR_Word STATE_VARIABLE_SVarStore_98_900;
                  MR_Word STATE_VARIABLE_VarSet_99_901;
                  MR_Word STATE_VARIABLE_ModuleInfo_100_902;
                  MR_Word STATE_VARIABLE_QualInfo_101_903;
                  MR_Word STATE_VARIABLE_Specs_102_904;
                  MR_Word STATE_VARIABLE_SVarStore_103_905;
                  MR_Word STATE_VARIABLE_VarSet_104_906;

                  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, MainGoal_306, Renaming_19, &HLDSMainGoal0_893, STATE_VARIABLE_SVarState_0_106, &AfterMainSVarState_894, STATE_VARIABLE_SVarStore_0_108, &STATE_VARIABLE_SVarStore_98_900, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_99_901, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_100_902, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_101_903, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_102_904);
                  {
                    MainDisjState_895 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MainDisjState_895, 0) = ((MR_Box) (HLDSMainGoal0_893));
                    MR_hl_field(MR_mktag(0), MainDisjState_895, 1) = ((MR_Box) (AfterMainSVarState_894));
                  }
                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(LocKind_17, OrElseGoals_307, Renaming_19, &OrElseDisjStates_896, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarStore_98_900, &STATE_VARIABLE_SVarStore_103_905, STATE_VARIABLE_VarSet_99_901, &STATE_VARIABLE_VarSet_104_906, STATE_VARIABLE_ModuleInfo_100_902, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_101_903, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_102_904, STATE_VARIABLE_Specs_117);
                  {
                    AllDisjStates_897 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), AllDisjStates_897, 0) = ((MR_Box) (MainDisjState_895));
                    MR_hl_field(MR_mktag(1), AllDisjStates_897, 1) = ((MR_Box) (OrElseDisjStates_896));
                  }
                  hlds__make_hlds__state_var__svar_finish_disjunction_8_p_0(AllDisjStates_897, &HLDSGoals_332, STATE_VARIABLE_VarSet_104_906, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_103_905, STATE_VARIABLE_SVarStore_109);
                  InnerDI0_810 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Inner0_304, (MR_Integer) 0))));
                  InnerUO0_811 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Inner0_304, (MR_Integer) 1))));
                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, InnerDI0_810, &InnerDI_814);
                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, InnerUO0_811, &InnerUO_815);
                  {
                    Inner_339 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Inner_339, 0) = ((MR_Box) (InnerDI_814));
                    MR_hl_field(MR_mktag(0), Inner_339, 1) = ((MR_Box) (InnerUO_815));
                  }
                }
              }
              if ((HLDSGoals_332 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_parse_tree_goal_to_hlds_atomic\'/16", (MR_String) "atomic HLDSGoals = []");
                  return;
                }
              else
              {
                HLDSMainGoal_333 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HLDSGoals_332, (MR_Integer) 0))));
                HLDSOrElseGoals_334 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HLDSGoals_332, (MR_Integer) 1))));
              }
              {
                ShortHand_343 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ShortHand_343, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(1), ShortHand_343, 1) = ((MR_Box) (Outer_317));
                MR_hl_field(MR_mktag(1), ShortHand_343, 2) = ((MR_Box) (Inner_339));
                MR_hl_field(MR_mktag(1), ShortHand_343, 3) = ((MR_Box) (MaybeOutputVars_308));
                MR_hl_field(MR_mktag(1), ShortHand_343, 4) = ((MR_Box) (HLDSMainGoal_333));
                MR_hl_field(MR_mktag(1), ShortHand_343, 5) = ((MR_Box) (HLDSOrElseGoals_334));
                MR_hl_field(MR_mktag(1), ShortHand_343, 6) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                GoalExpr_344 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_344, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), GoalExpr_344, 1) = ((MR_Box) (ShortHand_343));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_302, &GoalInfo_345);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_344));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_345));
              }
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word Context_733 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word MaybeIO0_734 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word SubGoal0_735 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word Then0_736 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word MaybeElse0_737 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 5))));
              MR_Word Catches0_738 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 6))));
              MR_Word MaybeCatchAny0_739 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 7))));

              if ((MaybeIO0_734 == (MR_Word) ((MR_Unsigned) 0U)))
                hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_p_0(LocKind_17, SubGoal0_735, Then0_736, MaybeElse0_737, Catches0_738, MaybeCatchAny0_739, Context_733, Renaming_19, HLDSGoal_20, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
              else
              {
                MR_Word IOStateVar0_740 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIO0_734, (MR_Integer) 0))));

                if ((MaybeElse0_737 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word IOStateVar_741;

                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, IOStateVar0_740, &IOStateVar_741);
                  hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_p_0(LocKind_17, IOStateVar0_740, IOStateVar_741, SubGoal0_735, Then0_736, Catches0_738, MaybeCatchAny0_739, Context_733, Renaming_19, HLDSGoal_20, STATE_VARIABLE_SVarState_0_106, STATE_VARIABLE_SVarState_107, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_0_110, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_0_116, STATE_VARIABLE_Specs_117);
                }
                else
                {
                  MR_Word Spec_744;

                  {
                    Spec_744 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Spec_744, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_parse_tree_goal_to_hlds_try\'/16"));
                    MR_hl_field(MR_mktag(1), Spec_744, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(1), Spec_744, 2) = ((MR_Box) ((MR_Unsigned) 40U));
                    MR_hl_field(MR_mktag(1), Spec_744, 3) = ((MR_Box) (Context_733));
                    MR_hl_field(MR_mktag(1), Spec_744, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[34])));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_Specs_117 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_744));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_116));
                  }
                  *HLDSGoal_20 = hlds__make_goal__true_goal_with_context_1_f_0(Context_733);
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
              MR_Word Context_239 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word next_value_of_Goal_18;

              {
                Var_164 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_164, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), Var_164, 1) = ((MR_Box) (Context_239));
                MR_hl_field(MR_mktag(3), Var_164, 2) = ((MR_Box) (Q_57));
              }
              {
                Var_163 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_163, 0) = ((MR_Box) (Context_239));
                MR_hl_field(MR_mktag(2), Var_163, 1) = ((MR_Box) (P_56));
                MR_hl_field(MR_mktag(2), Var_163, 2) = ((MR_Box) (Var_164));
              }
              {
                TransformedGoal_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TransformedGoal_58, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), TransformedGoal_58, 1) = ((MR_Box) (Context_239));
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
              MR_Word Context_562 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word SubGoalA_563 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word SubGoalB_564 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word HLDSSubGoalA_566;
              MR_Word HLDSSubGoalB_567;
              MR_Word GoalExpr_569;
              MR_Word GoalInfo_570;
              MR_Word STATE_VARIABLE_SVarState_48_571;
              MR_Word STATE_VARIABLE_SVarStore_49_572;
              MR_Word STATE_VARIABLE_VarSet_50_573;
              MR_Word STATE_VARIABLE_ModuleInfo_51_574;
              MR_Word STATE_VARIABLE_QualInfo_52_575;
              MR_Word STATE_VARIABLE_Specs_53_576;
              MR_Word Var_577;
              MR_Word Var_568;

              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoalA_563, Renaming_19, &HLDSSubGoalA_566, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_48_571, STATE_VARIABLE_SVarStore_0_108, &STATE_VARIABLE_SVarStore_49_572, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_50_573, STATE_VARIABLE_ModuleInfo_0_112, &STATE_VARIABLE_ModuleInfo_51_574, STATE_VARIABLE_QualInfo_0_114, &STATE_VARIABLE_QualInfo_52_575, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_53_576);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoalB_564, Renaming_19, &HLDSSubGoalB_567, STATE_VARIABLE_SVarState_48_571, &Var_568, STATE_VARIABLE_SVarStore_49_572, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_50_573, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_51_574, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_52_575, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_53_576, STATE_VARIABLE_Specs_117);
              *STATE_VARIABLE_SVarState_107 = STATE_VARIABLE_SVarState_0_106;
              {
                Var_577 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_577, 0) = ((MR_Box) (HLDSSubGoalA_566));
                MR_hl_field(MR_mktag(0), Var_577, 1) = ((MR_Box) (HLDSSubGoalB_567));
              }
              {
                GoalExpr_569 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_569, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), GoalExpr_569, 1) = ((MR_Box) (Var_577));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_562, &GoalInfo_570);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_569));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_570));
              }
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Word Context_578 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_String EventName_579 = ((MR_String) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word ArgTerms0_580 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word ArgTerms1_581;
              MR_Word ArgTerms_582;
              MR_Word HeadVars_583;
              MR_Word HeadVarsArgTerms_584;
              MR_Integer Arity_585;
              MR_Word Modes_586;
              MR_Word Details_587;
              MR_Word GoalExpr0_588;
              MR_Word GoalInfo_589;
              MR_Word HLDSGoal0_590;
              MR_Word CallId_591;
              MR_Word STATE_VARIABLE_VarSet_54_593;
              MR_Word STATE_VARIABLE_SVarState_55_594;
              MR_Word STATE_VARIABLE_Specs_56_595;
              MR_Word Var_596;
              MR_Word Var_599;
              MR_Word Var_600;
              MR_Word STATE_VARIABLE_SVarState_62_601;

              hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(ArgTerms0_580, &ArgTerms1_581);
              parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, ArgTerms1_581, &ArgTerms_582);
              hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_9_p_0(ArgTerms_582, &HeadVars_583, &HeadVarsArgTerms_584, STATE_VARIABLE_VarSet_0_110, &STATE_VARIABLE_VarSet_54_593, STATE_VARIABLE_SVarState_0_106, &STATE_VARIABLE_SVarState_55_594, STATE_VARIABLE_Specs_0_116, &STATE_VARIABLE_Specs_56_595);
              mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[4]), HeadVars_583, &Arity_585);
              Var_596 = parse_tree__prog_mode__in_mode_0_f_0();
              mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Arity_585, ((MR_Box) (Var_596)), &Modes_586);
              {
                Details_587 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Details_587, 0) = ((MR_Box) (EventName_579));
              }
              {
                GoalExpr0_588 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr0_588, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), GoalExpr0_588, 1) = ((MR_Box) (Details_587));
                MR_hl_field(MR_mktag(3), GoalExpr0_588, 2) = ((MR_Box) (HeadVars_583));
                MR_hl_field(MR_mktag(3), GoalExpr0_588, 3) = ((MR_Box) (Modes_586));
                MR_hl_field(MR_mktag(3), GoalExpr0_588, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), GoalExpr0_588, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_578, &GoalInfo_589);
              {
                HLDSGoal0_590 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), HLDSGoal0_590, 0) = ((MR_Box) (GoalExpr0_588));
                MR_hl_field(MR_mktag(0), HLDSGoal0_590, 1) = ((MR_Box) (GoalInfo_589));
              }
              {
                Var_599 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_599, 0) = ((MR_Box) (EventName_579));
              }
              {
                CallId_591 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), CallId_591, 0) = ((MR_Box) (Var_599));
              }
              {
                Var_600 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_600, 0) = ((MR_Box) (CallId_591));
              }
              hlds__make_hlds__superhomogeneous__insert_arg_unifications_17_p_0(HeadVarsArgTerms_584, Context_578, Var_600, HLDSGoal0_590, HLDSGoal_20, STATE_VARIABLE_SVarState_55_594, &STATE_VARIABLE_SVarState_62_601, STATE_VARIABLE_SVarStore_0_108, STATE_VARIABLE_SVarStore_109, STATE_VARIABLE_VarSet_54_593, STATE_VARIABLE_VarSet_111, STATE_VARIABLE_ModuleInfo_0_112, STATE_VARIABLE_ModuleInfo_113, STATE_VARIABLE_QualInfo_0_114, STATE_VARIABLE_QualInfo_115, STATE_VARIABLE_Specs_56_595, STATE_VARIABLE_Specs_117);
              hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(LocKind_17, STATE_VARIABLE_SVarState_62_601, STATE_VARIABLE_SVarState_107);
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__accumulate_par_conjuncts_17_p_0(
  MR_Word LocKind_18,
  MR_Word Goal_19,
  MR_Word Renaming_20,
  MR_Word STATE_VARIABLE_HLDSConjunctsCord_0_35,
  MR_Word * STATE_VARIABLE_HLDSConjunctsCord_36,
  MR_Word STATE_VARIABLE_SVarState_0_37,
  MR_Word * STATE_VARIABLE_SVarState_38,
  MR_Word STATE_VARIABLE_SVarStore_0_39,
  MR_Word * STATE_VARIABLE_SVarStore_40,
  MR_Word STATE_VARIABLE_VarSet_0_41,
  MR_Word * STATE_VARIABLE_VarSet_42,
  MR_Word STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word * STATE_VARIABLE_ModuleInfo_44,
  MR_Word STATE_VARIABLE_QualInfo_0_45,
  MR_Word * STATE_VARIABLE_QualInfo_46,
  MR_Word STATE_VARIABLE_Specs_0_47,
  MR_Word * STATE_VARIABLE_Specs_48)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Goal_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Goal_19, (MR_Integer) 0)))) == (MR_Integer) 5)));
    MR_Word SubGoalA_29;
    MR_Word SubGoalB_30;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      SubGoalA_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_19, (MR_Integer) 2))));
      SubGoalB_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_19, (MR_Integer) 3))));
      {
        MR_Word STATE_VARIABLE_HLDSConjunctsCord_49_49;
        MR_Word STATE_VARIABLE_SVarState_50_50;
        MR_Word STATE_VARIABLE_SVarStore_51_51;
        MR_Word STATE_VARIABLE_VarSet_52_52;
        MR_Word STATE_VARIABLE_ModuleInfo_53_53;
        MR_Word STATE_VARIABLE_QualInfo_54_54;
        MR_Word STATE_VARIABLE_Specs_55_55;
        MR_Word next_value_of_Goal_19;
        MR_Word next_value_of_STATE_VARIABLE_HLDSConjunctsCord_0_35;
        MR_Word next_value_of_STATE_VARIABLE_SVarState_0_37;
        MR_Word next_value_of_STATE_VARIABLE_SVarStore_0_39;
        MR_Word next_value_of_STATE_VARIABLE_VarSet_0_41;
        MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_43;
        MR_Word next_value_of_STATE_VARIABLE_QualInfo_0_45;
        MR_Word next_value_of_STATE_VARIABLE_Specs_0_47;

        hlds__make_hlds__goal_expr_to_goal__accumulate_par_conjuncts_17_p_0(LocKind_18, SubGoalA_29, Renaming_20, STATE_VARIABLE_HLDSConjunctsCord_0_35, &STATE_VARIABLE_HLDSConjunctsCord_49_49, STATE_VARIABLE_SVarState_0_37, &STATE_VARIABLE_SVarState_50_50, STATE_VARIABLE_SVarStore_0_39, &STATE_VARIABLE_SVarStore_51_51, STATE_VARIABLE_VarSet_0_41, &STATE_VARIABLE_VarSet_52_52, STATE_VARIABLE_ModuleInfo_0_43, &STATE_VARIABLE_ModuleInfo_53_53, STATE_VARIABLE_QualInfo_0_45, &STATE_VARIABLE_QualInfo_54_54, STATE_VARIABLE_Specs_0_47, &STATE_VARIABLE_Specs_55_55);
        // direct tailcall eliminated
        ;
        next_value_of_Goal_19 = SubGoalB_30;
        next_value_of_STATE_VARIABLE_HLDSConjunctsCord_0_35 = STATE_VARIABLE_HLDSConjunctsCord_49_49;
        next_value_of_STATE_VARIABLE_SVarState_0_37 = STATE_VARIABLE_SVarState_50_50;
        next_value_of_STATE_VARIABLE_SVarStore_0_39 = STATE_VARIABLE_SVarStore_51_51;
        next_value_of_STATE_VARIABLE_VarSet_0_41 = STATE_VARIABLE_VarSet_52_52;
        next_value_of_STATE_VARIABLE_ModuleInfo_0_43 = STATE_VARIABLE_ModuleInfo_53_53;
        next_value_of_STATE_VARIABLE_QualInfo_0_45 = STATE_VARIABLE_QualInfo_54_54;
        next_value_of_STATE_VARIABLE_Specs_0_47 = STATE_VARIABLE_Specs_55_55;
        Goal_19 = next_value_of_Goal_19;
        STATE_VARIABLE_HLDSConjunctsCord_0_35 = next_value_of_STATE_VARIABLE_HLDSConjunctsCord_0_35;
        STATE_VARIABLE_SVarState_0_37 = next_value_of_STATE_VARIABLE_SVarState_0_37;
        STATE_VARIABLE_SVarStore_0_39 = next_value_of_STATE_VARIABLE_SVarStore_0_39;
        STATE_VARIABLE_VarSet_0_41 = next_value_of_STATE_VARIABLE_VarSet_0_41;
        STATE_VARIABLE_ModuleInfo_0_43 = next_value_of_STATE_VARIABLE_ModuleInfo_0_43;
        STATE_VARIABLE_QualInfo_0_45 = next_value_of_STATE_VARIABLE_QualInfo_0_45;
        STATE_VARIABLE_Specs_0_47 = next_value_of_STATE_VARIABLE_Specs_0_47;
        continue;
      }
    }
    else
    {
      MR_Word HLDSGoal_31;
      MR_Word HLDSGoalExpr_32;
      MR_Word HLDSConjuncts_34;
      MR_Word Var_69;

      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_18, Goal_19, Renaming_20, &HLDSGoal_31, STATE_VARIABLE_SVarState_0_37, STATE_VARIABLE_SVarState_38, STATE_VARIABLE_SVarStore_0_39, STATE_VARIABLE_SVarStore_40, STATE_VARIABLE_VarSet_0_41, STATE_VARIABLE_VarSet_42, STATE_VARIABLE_ModuleInfo_0_43, STATE_VARIABLE_ModuleInfo_44, STATE_VARIABLE_QualInfo_0_45, STATE_VARIABLE_QualInfo_46, STATE_VARIABLE_Specs_0_47, STATE_VARIABLE_Specs_48);
      HLDSGoalExpr_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HLDSGoal_31, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) HLDSGoalExpr_32)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HLDSGoalExpr_32, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_69 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HLDSGoalExpr_32, (MR_Integer) 1))) & (MR_Integer) 1);
        HLDSConjuncts_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HLDSGoalExpr_32, (MR_Integer) 2))));
        succeeded = (Var_69 == (MR_Integer) 1);
      }
      if (succeeded)
      {
        MR_Word Var_71;

        Var_71 = mercury__cord__from_list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HLDSConjuncts_34);
        *STATE_VARIABLE_HLDSConjunctsCord_36 = mercury__cord__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), STATE_VARIABLE_HLDSConjunctsCord_0_35, Var_71);
      }
      else
        *STATE_VARIABLE_HLDSConjunctsCord_36 = mercury__cord__snoc_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), STATE_VARIABLE_HLDSConjunctsCord_0_35, ((MR_Box) (HLDSGoal_31)));
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__accumulate_plain_conjuncts_17_p_0(
  MR_Word LocKind_18,
  MR_Word Goal_19,
  MR_Word Renaming_20,
  MR_Word STATE_VARIABLE_HLDSConjunctsCord_0_35,
  MR_Word * STATE_VARIABLE_HLDSConjunctsCord_36,
  MR_Word STATE_VARIABLE_SVarState_0_37,
  MR_Word * STATE_VARIABLE_SVarState_38,
  MR_Word STATE_VARIABLE_SVarStore_0_39,
  MR_Word * STATE_VARIABLE_SVarStore_40,
  MR_Word STATE_VARIABLE_VarSet_0_41,
  MR_Word * STATE_VARIABLE_VarSet_42,
  MR_Word STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word * STATE_VARIABLE_ModuleInfo_44,
  MR_Word STATE_VARIABLE_QualInfo_0_45,
  MR_Word * STATE_VARIABLE_QualInfo_46,
  MR_Word STATE_VARIABLE_Specs_0_47,
  MR_Word * STATE_VARIABLE_Specs_48)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Goal_19)) == (MR_Integer) 2);
    MR_Word SubGoalA_29;
    MR_Word SubGoalB_30;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      SubGoalA_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_19, (MR_Integer) 1))));
      SubGoalB_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_19, (MR_Integer) 2))));
      {
        MR_Word STATE_VARIABLE_HLDSConjunctsCord_49_49;
        MR_Word STATE_VARIABLE_SVarState_50_50;
        MR_Word STATE_VARIABLE_SVarStore_51_51;
        MR_Word STATE_VARIABLE_VarSet_52_52;
        MR_Word STATE_VARIABLE_ModuleInfo_53_53;
        MR_Word STATE_VARIABLE_QualInfo_54_54;
        MR_Word STATE_VARIABLE_Specs_55_55;
        MR_Word next_value_of_Goal_19;
        MR_Word next_value_of_STATE_VARIABLE_HLDSConjunctsCord_0_35;
        MR_Word next_value_of_STATE_VARIABLE_SVarState_0_37;
        MR_Word next_value_of_STATE_VARIABLE_SVarStore_0_39;
        MR_Word next_value_of_STATE_VARIABLE_VarSet_0_41;
        MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_43;
        MR_Word next_value_of_STATE_VARIABLE_QualInfo_0_45;
        MR_Word next_value_of_STATE_VARIABLE_Specs_0_47;

        hlds__make_hlds__goal_expr_to_goal__accumulate_plain_conjuncts_17_p_0(LocKind_18, SubGoalA_29, Renaming_20, STATE_VARIABLE_HLDSConjunctsCord_0_35, &STATE_VARIABLE_HLDSConjunctsCord_49_49, STATE_VARIABLE_SVarState_0_37, &STATE_VARIABLE_SVarState_50_50, STATE_VARIABLE_SVarStore_0_39, &STATE_VARIABLE_SVarStore_51_51, STATE_VARIABLE_VarSet_0_41, &STATE_VARIABLE_VarSet_52_52, STATE_VARIABLE_ModuleInfo_0_43, &STATE_VARIABLE_ModuleInfo_53_53, STATE_VARIABLE_QualInfo_0_45, &STATE_VARIABLE_QualInfo_54_54, STATE_VARIABLE_Specs_0_47, &STATE_VARIABLE_Specs_55_55);
        // direct tailcall eliminated
        ;
        next_value_of_Goal_19 = SubGoalB_30;
        next_value_of_STATE_VARIABLE_HLDSConjunctsCord_0_35 = STATE_VARIABLE_HLDSConjunctsCord_49_49;
        next_value_of_STATE_VARIABLE_SVarState_0_37 = STATE_VARIABLE_SVarState_50_50;
        next_value_of_STATE_VARIABLE_SVarStore_0_39 = STATE_VARIABLE_SVarStore_51_51;
        next_value_of_STATE_VARIABLE_VarSet_0_41 = STATE_VARIABLE_VarSet_52_52;
        next_value_of_STATE_VARIABLE_ModuleInfo_0_43 = STATE_VARIABLE_ModuleInfo_53_53;
        next_value_of_STATE_VARIABLE_QualInfo_0_45 = STATE_VARIABLE_QualInfo_54_54;
        next_value_of_STATE_VARIABLE_Specs_0_47 = STATE_VARIABLE_Specs_55_55;
        Goal_19 = next_value_of_Goal_19;
        STATE_VARIABLE_HLDSConjunctsCord_0_35 = next_value_of_STATE_VARIABLE_HLDSConjunctsCord_0_35;
        STATE_VARIABLE_SVarState_0_37 = next_value_of_STATE_VARIABLE_SVarState_0_37;
        STATE_VARIABLE_SVarStore_0_39 = next_value_of_STATE_VARIABLE_SVarStore_0_39;
        STATE_VARIABLE_VarSet_0_41 = next_value_of_STATE_VARIABLE_VarSet_0_41;
        STATE_VARIABLE_ModuleInfo_0_43 = next_value_of_STATE_VARIABLE_ModuleInfo_0_43;
        STATE_VARIABLE_QualInfo_0_45 = next_value_of_STATE_VARIABLE_QualInfo_0_45;
        STATE_VARIABLE_Specs_0_47 = next_value_of_STATE_VARIABLE_Specs_0_47;
        continue;
      }
    }
    else
    {
      MR_Word HLDSGoal_31;
      MR_Word HLDSGoalExpr_32;
      MR_Word HLDSConjuncts_34;
      MR_Word Var_69;

      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_18, Goal_19, Renaming_20, &HLDSGoal_31, STATE_VARIABLE_SVarState_0_37, STATE_VARIABLE_SVarState_38, STATE_VARIABLE_SVarStore_0_39, STATE_VARIABLE_SVarStore_40, STATE_VARIABLE_VarSet_0_41, STATE_VARIABLE_VarSet_42, STATE_VARIABLE_ModuleInfo_0_43, STATE_VARIABLE_ModuleInfo_44, STATE_VARIABLE_QualInfo_0_45, STATE_VARIABLE_QualInfo_46, STATE_VARIABLE_Specs_0_47, STATE_VARIABLE_Specs_48);
      HLDSGoalExpr_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HLDSGoal_31, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) HLDSGoalExpr_32)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HLDSGoalExpr_32, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_69 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HLDSGoalExpr_32, (MR_Integer) 1))) & (MR_Integer) 1);
        HLDSConjuncts_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HLDSGoalExpr_32, (MR_Integer) 2))));
        succeeded = (Var_69 == (MR_Integer) 0);
      }
      if (succeeded)
      {
        MR_Word Var_71;

        Var_71 = mercury__cord__from_list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HLDSConjuncts_34);
        *STATE_VARIABLE_HLDSConjunctsCord_36 = mercury__cord__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), STATE_VARIABLE_HLDSConjunctsCord_0_35, Var_71);
      }
      else
        *STATE_VARIABLE_HLDSConjunctsCord_36 = mercury__cord__snoc_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), STATE_VARIABLE_HLDSConjunctsCord_0_35, ((MR_Box) (HLDSGoal_31)));
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
  mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[4]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[4]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[2]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), Var_63, StateVars1_40, &OldStateVars_43, ((MR_Box) (STATE_VARIABLE_VarSet_0_51)), &conv6_STATE_VARIABLE_VarSet_64_64, ((MR_Box) (STATE_VARIABLE_SVarState_0_47)), &conv5_STATE_VARIABLE_SVarState_65_65, ((MR_Box) (STATE_VARIABLE_Specs_0_57)), &conv4_STATE_VARIABLE_Specs_66_66);
  STATE_VARIABLE_VarSet_64_64 = ((MR_Word) (conv6_STATE_VARIABLE_VarSet_64_64));
  STATE_VARIABLE_SVarState_65_65 = ((MR_Word) (conv5_STATE_VARIABLE_SVarState_65_65));
  STATE_VARIABLE_Specs_66_66 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_66_66));
  mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[4]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[4]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[2]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), Var_63, DotSVars1_41, &DotSVars_44, ((MR_Box) (STATE_VARIABLE_VarSet_64_64)), &conv9_STATE_VARIABLE_VarSet_68_68, ((MR_Box) (STATE_VARIABLE_SVarState_65_65)), &conv8_STATE_VARIABLE_SVarState_69_69, ((MR_Box) (STATE_VARIABLE_Specs_66_66)), &conv7_STATE_VARIABLE_Specs_70_70);
  STATE_VARIABLE_VarSet_68_68 = ((MR_Word) (conv9_STATE_VARIABLE_VarSet_68_68));
  STATE_VARIABLE_SVarState_69_69 = ((MR_Word) (conv8_STATE_VARIABLE_SVarState_69_69));
  STATE_VARIABLE_Specs_70_70 = ((MR_Word) (conv7_STATE_VARIABLE_Specs_70_70));
  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_23, Goal_31, Renaming_29, HLDSGoal_32, STATE_VARIABLE_SVarState_69_69, &STATE_VARIABLE_SVarState_71_71, STATE_VARIABLE_SVarStore_0_49, STATE_VARIABLE_SVarStore_50, STATE_VARIABLE_VarSet_68_68, &STATE_VARIABLE_VarSet_73_73, STATE_VARIABLE_ModuleInfo_0_53, STATE_VARIABLE_ModuleInfo_54, STATE_VARIABLE_QualInfo_0_55, STATE_VARIABLE_QualInfo_56, STATE_VARIABLE_Specs_70_70, &STATE_VARIABLE_Specs_76_76);
  mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[4]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[4]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[2]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), Var_63, StateVars1_40, &NewStateVars_45, ((MR_Box) (STATE_VARIABLE_VarSet_73_73)), &conv12_STATE_VARIABLE_VarSet_78_78, ((MR_Box) (STATE_VARIABLE_SVarState_71_71)), &conv11_STATE_VARIABLE_SVarState_79_79, ((MR_Box) (STATE_VARIABLE_Specs_76_76)), &conv10_STATE_VARIABLE_Specs_80_80);
  STATE_VARIABLE_VarSet_78_78 = ((MR_Word) (conv12_STATE_VARIABLE_VarSet_78_78));
  STATE_VARIABLE_SVarState_79_79 = ((MR_Word) (conv11_STATE_VARIABLE_SVarState_79_79));
  STATE_VARIABLE_Specs_80_80 = ((MR_Word) (conv10_STATE_VARIABLE_Specs_80_80));
  mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[4]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[4]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[2]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), Var_63, ColonSVars1_42, &ColonSVars_46, ((MR_Box) (STATE_VARIABLE_VarSet_78_78)), &conv15_STATE_VARIABLE_VarSet_52, ((MR_Box) (STATE_VARIABLE_SVarState_79_79)), &conv14_STATE_VARIABLE_SVarState_48, ((MR_Box) (STATE_VARIABLE_Specs_80_80)), &conv13_STATE_VARIABLE_Specs_58);
  *STATE_VARIABLE_VarSet_52 = ((MR_Word) (conv15_STATE_VARIABLE_VarSet_52));
  *STATE_VARIABLE_SVarState_48 = ((MR_Word) (conv14_STATE_VARIABLE_SVarState_48));
  *STATE_VARIABLE_Specs_58 = ((MR_Word) (conv13_STATE_VARIABLE_Specs_58));
  Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[4]), DotSVars_44, ColonSVars_46);
  Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[4]), NewStateVars_45, Var_87);
  Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[4]), OldStateVars_43, Var_86);
  *QuantVars_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[4]), Vars_39, Var_85);
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
  MR_Word Var_88;
  MR_Word Var_98;
  MR_Word SymName_100;
  MR_Word Var_101;
  MR_Word Var_102;
  MR_Word ResultIsExceptionUnify_105;
  MR_Word CatchChain_106;
  MR_Word Var_107;
  MR_Word SymName_110;
  MR_Word Var_111;
  MR_Word Var_112;

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
  Var_98 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
  {
    Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_98));
    MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_String) "magic_exception_result"));
  }
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
  Var_101 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
  {
    SymName_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), SymName_100, 0) = ((MR_Box) (Var_101));
    MR_hl_field(MR_mktag(1), SymName_100, 1) = ((MR_Box) ((MR_String) "succeeded"));
  }
  {
    Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (NullTupleTerm_41));
    MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SymName_100, Var_102, Context_28, &Var_75);
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

    {
      Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_80, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), Var_80, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
      MR_hl_field(MR_mktag(3), Var_80, 2) = ((MR_Box) (Context_28));
      MR_hl_field(MR_mktag(3), Var_80, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_80, 4) = ((MR_Box) (SubGoal_23));
    }
    {
      Var_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_84, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), Var_84, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
      MR_hl_field(MR_mktag(3), Var_84, 2) = ((MR_Box) (Context_28));
      MR_hl_field(MR_mktag(3), Var_84, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_84, 4) = ((MR_Box) (ThenGoal_24));
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
    ResultIsSucceededDisjunctGoal_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), ResultIsSucceededDisjunctGoal_47, 0) = ((MR_Box) (Context_28));
    MR_hl_field(MR_mktag(2), ResultIsSucceededDisjunctGoal_47, 1) = ((MR_Box) (ResultIsSucceededUnifyGoal_44));
    MR_hl_field(MR_mktag(2), ResultIsSucceededDisjunctGoal_47, 2) = ((MR_Box) (SucceededSubGoal_46));
  }
  Var_111 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
  {
    SymName_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), SymName_110, 0) = ((MR_Box) (Var_111));
    MR_hl_field(MR_mktag(1), SymName_110, 1) = ((MR_Box) ((MR_String) "exception"));
  }
  {
    Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (ExcpVarTerm_40));
    MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SymName_110, Var_112, Context_28, &Var_107);
  {
    ResultIsExceptionUnify_105 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ResultIsExceptionUnify_105, 0) = ((MR_Box) (Context_28));
    MR_hl_field(MR_mktag(0), ResultIsExceptionUnify_105, 1) = ((MR_Box) (ResultVarTerm_39));
    MR_hl_field(MR_mktag(0), ResultIsExceptionUnify_105, 2) = ((MR_Box) (Var_107));
    MR_hl_field(MR_mktag(0), ResultIsExceptionUnify_105, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(ResultVarTerm_39, ExcpVarTerm_40, Catches_26, MaybeCatchAny_27, &CatchChain_106);
  {
    ResultIsExceptionDisjunctGoal_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), ResultIsExceptionDisjunctGoal_48, 0) = ((MR_Box) (Context_28));
    MR_hl_field(MR_mktag(2), ResultIsExceptionDisjunctGoal_48, 1) = ((MR_Box) (ResultIsExceptionUnify_105));
    MR_hl_field(MR_mktag(2), ResultIsExceptionDisjunctGoal_48, 2) = ((MR_Box) (CatchChain_106));
  }
  {
    Var_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_88, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(MR_mktag(3), Var_88, 1) = ((MR_Box) (Context_28));
    MR_hl_field(MR_mktag(3), Var_88, 2) = ((MR_Box) (ResultIsSucceededDisjunctGoal_47));
    MR_hl_field(MR_mktag(3), Var_88, 3) = ((MR_Box) (ResultIsExceptionDisjunctGoal_48));
    MR_hl_field(MR_mktag(3), Var_88, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    CallMagicThenDisjunctionGoal_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), CallMagicThenDisjunctionGoal_49, 0) = ((MR_Box) (Context_28));
    MR_hl_field(MR_mktag(2), CallMagicThenDisjunctionGoal_49, 1) = ((MR_Box) (CallMagicGoal_43));
    MR_hl_field(MR_mktag(2), CallMagicThenDisjunctionGoal_49, 2) = ((MR_Box) (Var_88));
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
  MR_Word STATE_VARIABLE_SVarState_125_125;
  MR_Word STATE_VARIABLE_SVarStore_126_126;
  MR_Word STATE_VARIABLE_VarSet_127_127;
  MR_Word STATE_VARIABLE_ModuleInfo_128_128;
  MR_Word STATE_VARIABLE_QualInfo_129_129;
  MR_Word STATE_VARIABLE_Specs_130_130;
  MR_Word STATE_VARIABLE_VarSet_131_131;
  MR_Word STATE_VARIABLE_SVarState_132_132;
  MR_Word STATE_VARIABLE_Specs_133_133;
  MR_Word STATE_VARIABLE_SVarStore_138_138;
  MR_Word STATE_VARIABLE_VarSet_139_139;
  MR_Word STATE_VARIABLE_ModuleInfo_140_140;
  MR_Word STATE_VARIABLE_QualInfo_141_141;
  MR_Word STATE_VARIABLE_Specs_142_142;
  MR_Word Var_143;
  MR_Word Var_144;
  MR_Word Var_145;
  MR_Word STATE_VARIABLE_SVarState_147_147;
  MR_Word STATE_VARIABLE_SVarStore_149_149;
  MR_Word STATE_VARIABLE_VarSet_150_150;
  MR_Word Var_154;
  MR_Word Var_155;
  MR_Word Var_156;
  MR_Word Var_161;
  MR_Word Var_162;
  MR_Word Var_164;
  MR_Word Var_165;

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
  hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(Context_30, IOStateVar_25, &IOStateVarBefore_47, STATE_VARIABLE_VarSet_92_92, &STATE_VARIABLE_VarSet_96_96, STATE_VARIABLE_SVarState_90_90, &STATE_VARIABLE_SVarState_147_147, STATE_VARIABLE_Specs_95_95, &STATE_VARIABLE_Specs_98_98);
  Var_99 = hlds__make_hlds__goal_expr_to_goal__exception_functor_3_f_0((MR_String) "succeeded", NullTupleTerm_43, Context_30);
  {
    ResultIsSucceededUnifyGoal_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ResultIsSucceededUnifyGoal_49, 0) = ((MR_Box) (Context_30));
    MR_hl_field(MR_mktag(0), ResultIsSucceededUnifyGoal_49, 1) = ((MR_Box) (ResultVarTerm_41));
    MR_hl_field(MR_mktag(0), ResultIsSucceededUnifyGoal_49, 2) = ((MR_Box) (Var_99));
    MR_hl_field(MR_mktag(0), ResultIsSucceededUnifyGoal_49, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_23, ResultIsSucceededUnifyGoal_49, Renaming_31, &HLDSResultIsSucceededUnifyGoal_50, STATE_VARIABLE_SVarState_147_147, &STATE_VARIABLE_SVarState_102_102, STATE_VARIABLE_SVarStore_91_91, &STATE_VARIABLE_SVarStore_103_103, STATE_VARIABLE_VarSet_96_96, &STATE_VARIABLE_VarSet_104_104, STATE_VARIABLE_ModuleInfo_93_93, &STATE_VARIABLE_ModuleInfo_105_105, STATE_VARIABLE_QualInfo_94_94, &STATE_VARIABLE_QualInfo_106_106, STATE_VARIABLE_Specs_98_98, &STATE_VARIABLE_Specs_107_107);
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
    Var_124 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), Var_124, 0) = ((MR_Box) (Context_30));
    MR_hl_field(MR_mktag(2), Var_124, 1) = ((MR_Box) (IOUnify_51));
    MR_hl_field(MR_mktag(2), Var_124, 2) = ((MR_Box) (Goal0_26));
  }
  {
    ScopedGoal_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), ScopedGoal_52, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(MR_mktag(3), ScopedGoal_52, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
    MR_hl_field(MR_mktag(3), ScopedGoal_52, 2) = ((MR_Box) (Context_30));
    MR_hl_field(MR_mktag(3), ScopedGoal_52, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), ScopedGoal_52, 4) = ((MR_Box) (Var_124));
  }
  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_23, ScopedGoal_52, Renaming_31, &HLDSScopedGoal_53, STATE_VARIABLE_SVarState_102_102, &STATE_VARIABLE_SVarState_125_125, STATE_VARIABLE_SVarStore_103_103, &STATE_VARIABLE_SVarStore_126_126, STATE_VARIABLE_VarSet_104_104, &STATE_VARIABLE_VarSet_127_127, STATE_VARIABLE_ModuleInfo_105_105, &STATE_VARIABLE_ModuleInfo_128_128, STATE_VARIABLE_QualInfo_106_106, &STATE_VARIABLE_QualInfo_129_129, STATE_VARIABLE_Specs_107_107, &STATE_VARIABLE_Specs_130_130);
  hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(Context_30, IOStateVar_25, &IOStateVarAfter_54, STATE_VARIABLE_VarSet_127_127, &STATE_VARIABLE_VarSet_131_131, STATE_VARIABLE_SVarState_125_125, &STATE_VARIABLE_SVarState_132_132, STATE_VARIABLE_Specs_130_130, &STATE_VARIABLE_Specs_133_133);
  {
    ScopedThenGoal_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), ScopedThenGoal_55, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(MR_mktag(3), ScopedThenGoal_55, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
    MR_hl_field(MR_mktag(3), ScopedThenGoal_55, 2) = ((MR_Box) (Context_30));
    MR_hl_field(MR_mktag(3), ScopedThenGoal_55, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), ScopedThenGoal_55, 4) = ((MR_Box) (Then0_27));
  }
  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_23, ScopedThenGoal_55, Renaming_31, &HLDSScopedThenGoal_56, STATE_VARIABLE_SVarState_132_132, &SVarStateAfterResultIsSucceededDisjunct_58, STATE_VARIABLE_SVarStore_126_126, &STATE_VARIABLE_SVarStore_138_138, STATE_VARIABLE_VarSet_131_131, &STATE_VARIABLE_VarSet_139_139, STATE_VARIABLE_ModuleInfo_128_128, &STATE_VARIABLE_ModuleInfo_140_140, STATE_VARIABLE_QualInfo_129_129, &STATE_VARIABLE_QualInfo_141_141, STATE_VARIABLE_Specs_133_133, &STATE_VARIABLE_Specs_142_142);
  {
    Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) (HLDSScopedThenGoal_56));
    MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_144, 0) = ((MR_Box) (HLDSScopedGoal_53));
    MR_hl_field(MR_mktag(1), Var_144, 1) = ((MR_Box) (Var_145));
  }
  {
    Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) (HLDSResultIsSucceededUnifyGoal_50));
    MR_hl_field(MR_mktag(1), Var_143, 1) = ((MR_Box) (Var_144));
  }
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_143, GoalInfo_44, &HLDSResultIsSucceededDisjunctGoal_57);
  hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(ResultVarTerm_41, ExcpVarTerm_42, Catches0_28, MaybeCatchAny0_29, Context_30, &ResultIsExceptionDisjunctGoal_59);
  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_23, ResultIsExceptionDisjunctGoal_59, Renaming_31, &HLDSResultIsExceptionDisjunctGoal_60, STATE_VARIABLE_SVarState_147_147, &SVarStateAfterResultIsExceptionDisjunct_61, STATE_VARIABLE_SVarStore_138_138, &STATE_VARIABLE_SVarStore_149_149, STATE_VARIABLE_VarSet_139_139, &STATE_VARIABLE_VarSet_150_150, STATE_VARIABLE_ModuleInfo_140_140, STATE_VARIABLE_ModuleInfo_75, STATE_VARIABLE_QualInfo_141_141, STATE_VARIABLE_QualInfo_77, STATE_VARIABLE_Specs_142_142, STATE_VARIABLE_Specs_79);
  {
    Var_154 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_154, 0) = ((MR_Box) (HLDSResultIsSucceededDisjunctGoal_57));
    MR_hl_field(MR_mktag(0), Var_154, 1) = ((MR_Box) (SVarStateAfterResultIsSucceededDisjunct_58));
  }
  {
    Var_156 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_156, 0) = ((MR_Box) (HLDSResultIsExceptionDisjunctGoal_60));
    MR_hl_field(MR_mktag(0), Var_156, 1) = ((MR_Box) (SVarStateAfterResultIsExceptionDisjunct_61));
  }
  {
    Var_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_155, 0) = ((MR_Box) (Var_156));
    MR_hl_field(MR_mktag(1), Var_155, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    DisjunctSVarStates_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), DisjunctSVarStates_62, 0) = ((MR_Box) (Var_154));
    MR_hl_field(MR_mktag(1), DisjunctSVarStates_62, 1) = ((MR_Box) (Var_155));
  }
  hlds__make_hlds__state_var__svar_finish_disjunction_8_p_0(DisjunctSVarStates_62, &HLDSDisjuncts_63, STATE_VARIABLE_VarSet_150_150, STATE_VARIABLE_VarSet_73, STATE_VARIABLE_SVarState_147_147, STATE_VARIABLE_SVarState_69, STATE_VARIABLE_SVarStore_149_149, STATE_VARIABLE_SVarStore_71);
  hlds__hlds_goal__disj_list_to_goal_3_p_0(HLDSDisjuncts_63, GoalInfo_44, &HLDSDisjunction_64);
  {
    Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_162, 0) = ((MR_Box) (HLDSDisjunction_64));
    MR_hl_field(MR_mktag(1), Var_162, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_161, 0) = ((MR_Box) (HLDSCallMagicGoal_46));
    MR_hl_field(MR_mktag(1), Var_161, 1) = ((MR_Box) (Var_162));
  }
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_161, GoalInfo_44, &CallMagicThenDisjunction_65);
  {
    IOStateVars_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), IOStateVars_66, 0) = ((MR_Box) (IOStateVarBefore_47));
    MR_hl_field(MR_mktag(0), IOStateVars_66, 1) = ((MR_Box) (IOStateVarAfter_54));
  }
  {
    Var_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_165, 0) = ((MR_Box) (IOStateVars_66));
  }
  {
    Var_164 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), Var_164, 0) = ((MR_Box) (Var_165));
    MR_hl_field(MR_mktag(2), Var_164, 1) = ((MR_Box) (ResultVar_39));
    MR_hl_field(MR_mktag(2), Var_164, 2) = ((MR_Box) (CallMagicThenDisjunction_65));
  }
  {
    GoalExpr_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), GoalExpr_67, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(MR_mktag(3), GoalExpr_67, 1) = ((MR_Box) (Var_164));
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
  MR_Word SymName_18;
  MR_Word Var_19;
  MR_Word Var_20;

  Var_19 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
  {
    SymName_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), SymName_18, 0) = ((MR_Box) (Var_19));
    MR_hl_field(MR_mktag(1), SymName_18, 1) = ((MR_Box) ((MR_String) "exception"));
  }
  {
    Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (ExcpVarTerm_8));
    MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SymName_18, Var_20, Context_11, &Var_15);
  {
    ResultIsExceptionUnify_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ResultIsExceptionUnify_13, 0) = ((MR_Box) (Context_11));
    MR_hl_field(MR_mktag(0), ResultIsExceptionUnify_13, 1) = ((MR_Box) (ResultVarTerm_7));
    MR_hl_field(MR_mktag(0), ResultIsExceptionUnify_13, 2) = ((MR_Box) (Var_15));
    MR_hl_field(MR_mktag(0), ResultIsExceptionUnify_13, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(ResultVarTerm_7, ExcpVarTerm_8, Catches_9, MaybeCatchAny_10, &CatchChain_14);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    *Goal_12 = base;
    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Context_11));
    MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ResultIsExceptionUnify_13));
    MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (CatchChain_14));
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
      MR_Word Var_30;
      MR_Word Var_32;
      MR_Word Var_33;

      Var_30 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
      {
        Rethrow_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Rethrow_20, 0) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(1), Rethrow_20, 1) = ((MR_Box) ((MR_String) "rethrow"));
      }
      Var_32 = mercury__term__get_term_context_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ExcpVarTerm_7);
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (ResultVarTerm_6));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        *Goal_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Rethrow_20));
        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Var_33));
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
      MR_Word SymName_38;
      MR_Word Var_39;
      MR_Word Var_40;

      CatchAnyVar_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))));
      CatchAnyGoal_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1))));
      Context_18 = parse_tree__prog_item__get_goal_context_1_f_0(CatchAnyGoal_17);
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (CatchAnyVar_16));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Context_18));
      }
      Var_39 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
      {
        SymName_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SymName_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(1), SymName_38, 1) = ((MR_Box) ((MR_String) "exc_univ_value"));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (ExcpVarTerm_7));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SymName_38, Var_40, Context_18, &Var_27);
      {
        GetUnivValue_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), GetUnivValue_19, 0) = ((MR_Box) (Context_18));
        MR_hl_field(MR_mktag(0), GetUnivValue_19, 1) = ((MR_Box) (Var_26));
        MR_hl_field(MR_mktag(0), GetUnivValue_19, 2) = ((MR_Box) (Var_27));
        MR_hl_field(MR_mktag(0), GetUnivValue_19, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *Goal_10 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Context_18));
        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (GetUnivValue_19));
        MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (CatchAnyGoal_17));
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
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_47;
    MR_Word Var_48;

    FirstPattern_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0))));
    FirstGoal_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 1))));
    hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(ResultVarTerm_6, ExcpVarTerm_7, RestCatches_13, MaybeCatchAny_9, &ElseGoal_14);
    Var_43 = mercury__term__get_term_context_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), FirstPattern_11);
    Var_45 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_String) "exc_univ_to_type"));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (FirstPattern_11));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (ExcpVarTerm_7));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_48));
    }
    {
      FirstPatternGoal_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), FirstPatternGoal_15, 0) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(1), FirstPatternGoal_15, 1) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(1), FirstPatternGoal_15, 2) = ((MR_Box) (Var_47));
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

    switch (AccessType_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ContextPieces_38 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[18]));
        break;
      case (MR_Integer) 1:
        ContextPieces_38 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[20]));
        break;
    }
    hlds__make_hlds__field_access__parse_field_list_4_p_0(FieldNameTerm_34, STATE_VARIABLE_VarSet_0_49, ContextPieces_38, &MaybeFieldNames_39);
    if (((MR_tag((MR_Word) MaybeFieldNames_39)) == (MR_Integer) 0))
    {
      MR_Word FieldNamesSpecs_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeFieldNames_39, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_Specs_75_75;
      MR_Word HeadVars_109;
      MR_Word GoalExpr_112;
      MR_Word Var_113;
      MR_Integer Var_114;
      MR_Word _HeadVarsArgs0_110;

      STATE_VARIABLE_Specs_75_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), FieldNamesSpecs_42, STATE_VARIABLE_Specs_0_55);
      hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_9_p_0(ArgTerms0_20, &HeadVars_109, &_HeadVarsArgs0_110, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_SVarState_0_45, STATE_VARIABLE_SVarState_46, STATE_VARIABLE_Specs_75_75, STATE_VARIABLE_Specs_56);
      Var_113 = hlds__hlds_pred__invalid_pred_id_0_f_0();
      Var_114 = hlds__hlds_pred__invalid_proc_id_0_f_0();
      {
        GoalExpr_112 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), GoalExpr_112, 0) = ((MR_Box) (Var_113));
        MR_hl_field(MR_mktag(2), GoalExpr_112, 1) = ((MR_Box) (Var_114));
        MR_hl_field(MR_mktag(2), GoalExpr_112, 2) = ((MR_Box) (HeadVars_109));
        MR_hl_field(MR_mktag(2), GoalExpr_112, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(2), GoalExpr_112, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(2), GoalExpr_112, 5) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[6]));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *HLDSGoal_22 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_112));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_29));
      }
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
    MR_Word HeadVars_117;
    MR_Word GoalExpr_120;
    MR_Word Var_121;
    MR_Integer Var_122;
    MR_Word _HeadVarsArgs0_118;

    hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_9_p_0(ArgTerms0_20, &HeadVars_117, &_HeadVarsArgs0_118, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_SVarState_0_45, STATE_VARIABLE_SVarState_46, STATE_VARIABLE_Specs_0_55, &STATE_VARIABLE_Specs_85_85);
    Var_121 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    Var_122 = hlds__hlds_pred__invalid_proc_id_0_f_0();
    {
      GoalExpr_120 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), GoalExpr_120, 0) = ((MR_Box) (Var_121));
      MR_hl_field(MR_mktag(2), GoalExpr_120, 1) = ((MR_Box) (Var_122));
      MR_hl_field(MR_mktag(2), GoalExpr_120, 2) = ((MR_Box) (HeadVars_117));
      MR_hl_field(MR_mktag(2), GoalExpr_120, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), GoalExpr_120, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(2), GoalExpr_120, 5) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[6]));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HLDSGoal_22 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_120));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_29));
    }
    hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 1, STATE_VARIABLE_QualInfo_0_53, STATE_VARIABLE_QualInfo_54);
    {
      Spec_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_44, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax\'/17"));
      MR_hl_field(MR_mktag(1), Spec_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_44, 2) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(MR_mktag(1), Spec_44, 3) = ((MR_Box) (Context_21));
      MR_hl_field(MR_mktag(1), Spec_44, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[16])));
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
