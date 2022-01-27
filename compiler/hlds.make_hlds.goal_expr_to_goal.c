/*
** Automatically generated from `goal_expr_to_goal.m'
** by the Mercury compiler,
** version rotd-2021-10-13
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
#include "hlds.hlds_args.mih"
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
#include "hlds.vartypes.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.field_access.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "hlds.make_hlds.state_var.mih"
#include "hlds.make_hlds.superhomogeneous.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__goal_expr_to_goal__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

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
hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__accumulate_disjuncts_16_p_0(
  MR_Word LocKind_17,
  MR_Word Goal_18,
  MR_Word Renaming_19,
  MR_Word DisjStates0_20,
  MR_Word * DisjStates_21,
  MR_Word SVarStateBefore_22,
  MR_Word STATE_VARIABLE_SVarStore_0_35,
  MR_Word * STATE_VARIABLE_SVarStore_36,
  MR_Word STATE_VARIABLE_VarSet_0_37,
  MR_Word * STATE_VARIABLE_VarSet_38,
  MR_Word STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * STATE_VARIABLE_ModuleInfo_40,
  MR_Word STATE_VARIABLE_QualInfo_0_41,
  MR_Word * STATE_VARIABLE_QualInfo_42,
  MR_Word STATE_VARIABLE_Specs_0_43,
  MR_Word * STATE_VARIABLE_Specs_44);

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


static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_1[34][2];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_2[1][3];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_3[6][1];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_4[1][12];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_5[1][11];




static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_1[34][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in DCG field access goal."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "^ field1 ^ ... ^ fieldN := Field"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Field =^ field1 ^ ... ^ fieldN"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In DCG field extraction goal:"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[5])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In DCG field update goal:"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[5])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "part."))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[5])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "else"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "parameter cannot have an"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "io"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[25])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "goal with an"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "try"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[29])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[31])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_3[6][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "!:"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "!."))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) ":="))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row 5 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_4[1][12] = {
  /* row 0 */
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

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_5[1][11] = {
  /* row 0 */
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
  {     hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_name_ordered_loc_kind_0 },
  {     hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_ordinal_ordered_loc_kind_0 },
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
}

MR_bool MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Unify____loc_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
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
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_MutableHLDS_13;
    MR_Word conv2_StateVar_14;
    MR_Word conv1_GetGoal_15;
    MR_Word conv0_SetGoal_16;

    hlds__make_hlds__goal_expr_to_goal__extract_trace_mutable_var_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv3_MutableHLDS_13, &conv2_StateVar_14, &conv1_GetGoal_15, &conv0_SetGoal_16);
    *wrapper_arg_2 = ((MR_Box) (conv3_MutableHLDS_13));
    *wrapper_arg_3 = ((MR_Box) (conv2_StateVar_14));
    *wrapper_arg_4 = ((MR_Box) (conv1_GetGoal_15));
    *wrapper_arg_5 = ((MR_Box) (conv0_SetGoal_16));
  }
}

void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(
  MR_Word LocKind_17,
  MR_Word Goal_18,
  MR_Word Renaming_19,
  MR_Word * HLDSGoal_20,
  MR_Word STATE_VARIABLE_SVarState_0_105,
  MR_Word * STATE_VARIABLE_SVarState_106,
  MR_Word STATE_VARIABLE_SVarStore_0_107,
  MR_Word * STATE_VARIABLE_SVarStore_108,
  MR_Word STATE_VARIABLE_VarSet_0_109,
  MR_Word * STATE_VARIABLE_VarSet_110,
  MR_Word STATE_VARIABLE_ModuleInfo_0_111,
  MR_Word * STATE_VARIABLE_ModuleInfo_112,
  MR_Word STATE_VARIABLE_QualInfo_0_113,
  MR_Word * STATE_VARIABLE_QualInfo_114,
  MR_Word STATE_VARIABLE_Specs_0_115,
  MR_Word * STATE_VARIABLE_Specs_116)
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
          MR_Word Context_1194 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_18, (MR_Integer) 0))));
          MR_Word TermA0_1195 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_18, (MR_Integer) 1))));
          MR_Word TermB0_1196 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_18, (MR_Integer) 2))));
          MR_Word Purity_1197 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Goal_18, (MR_Integer) 3))) & (MR_Integer) 3);
          MR_Word TermA_1198;
          MR_Word TermB_1199;
          MR_Word StateVarA_1200;
          MR_Word Var_1210;
          MR_String Var_1211;
          MR_Word Var_1212;
          MR_Word Var_1213;
          MR_Word Var_1214;

          parse_tree__prog_rename__rename_vars_in_term_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, TermA0_1195, &TermA_1198);
          parse_tree__prog_rename__rename_vars_in_term_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, TermB0_1196, &TermB_1199);
          succeeded = ((MR_tag((MR_Word) TermA_1198)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_1210 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermA_1198, (MR_Integer) 0))));
            Var_1212 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermA_1198, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Var_1210)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_1211 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_1210, (MR_Integer) 0))));
              succeeded = (strcmp(Var_1211, (MR_String) "!") == 0);
              if (succeeded)
              {
                succeeded = (Var_1212 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_1213 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1212, (MR_Integer) 0))));
                  Var_1214 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1212, (MR_Integer) 1))));
                  succeeded = (Var_1214 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) Var_1213)) == (MR_Integer) 1);
                    if (succeeded)
                      StateVarA_1200 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1213, (MR_Integer) 0))));
                  }
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word STATE_VARIABLE_VarSet_60_1215;
            MR_Word STATE_VARIABLE_SVarState_61_1216;
            MR_Word STATE_VARIABLE_Specs_62_1217;
            MR_Word StateVarB_1203;
            MR_Word Var_1218;
            MR_String Var_1219;
            MR_Word Var_1220;
            MR_Word Var_1221;
            MR_Word Var_1222;

            hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(Context_1194, StateVarA_1200, STATE_VARIABLE_VarSet_0_109, &STATE_VARIABLE_VarSet_60_1215, STATE_VARIABLE_SVarState_0_105, &STATE_VARIABLE_SVarState_61_1216, STATE_VARIABLE_Specs_0_115, &STATE_VARIABLE_Specs_62_1217);
            succeeded = ((MR_tag((MR_Word) TermB_1199)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_1218 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermB_1199, (MR_Integer) 0))));
              Var_1220 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermB_1199, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_1218)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_1219 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_1218, (MR_Integer) 0))));
                succeeded = (strcmp(Var_1219, (MR_String) "!") == 0);
                if (succeeded)
                {
                  succeeded = (Var_1220 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_1221 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1220, (MR_Integer) 0))));
                    Var_1222 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1220, (MR_Integer) 1))));
                    succeeded = (Var_1222 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) Var_1221)) == (MR_Integer) 1);
                      if (succeeded)
                        StateVarB_1203 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1221, (MR_Integer) 0))));
                    }
                  }
                }
              }
            }
            if (succeeded)
              hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(Context_1194, StateVarB_1203, STATE_VARIABLE_VarSet_60_1215, STATE_VARIABLE_VarSet_110, STATE_VARIABLE_SVarState_61_1216, STATE_VARIABLE_SVarState_106, STATE_VARIABLE_Specs_62_1217, STATE_VARIABLE_Specs_116);
            else
            {
              *STATE_VARIABLE_Specs_116 = STATE_VARIABLE_Specs_62_1217;
              *STATE_VARIABLE_VarSet_110 = STATE_VARIABLE_VarSet_60_1215;
              *STATE_VARIABLE_SVarState_106 = STATE_VARIABLE_SVarState_61_1216;
            }
            *HLDSGoal_20 = hlds__make_goal__true_goal_with_context_1_f_0(Context_1194);
            *STATE_VARIABLE_QualInfo_114 = STATE_VARIABLE_QualInfo_0_113;
            *STATE_VARIABLE_ModuleInfo_112 = STATE_VARIABLE_ModuleInfo_0_111;
            *STATE_VARIABLE_SVarStore_108 = STATE_VARIABLE_SVarStore_0_107;
          }
          else
          {
            MR_Word StateVarB_1243;
            MR_Word Var_1226;
            MR_String Var_1227;
            MR_Word Var_1228;
            MR_Word Var_1229;
            MR_Word Var_1230;

            succeeded = ((MR_tag((MR_Word) TermB_1199)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_1226 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermB_1199, (MR_Integer) 0))));
              Var_1228 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermB_1199, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_1226)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_1227 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_1226, (MR_Integer) 0))));
                succeeded = (strcmp(Var_1227, (MR_String) "!") == 0);
                if (succeeded)
                {
                  succeeded = (Var_1228 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_1229 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1228, (MR_Integer) 0))));
                    Var_1230 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1228, (MR_Integer) 1))));
                    succeeded = (Var_1230 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) Var_1229)) == (MR_Integer) 1);
                      if (succeeded)
                        StateVarB_1243 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_1229, (MR_Integer) 0))));
                    }
                  }
                }
              }
            }
            if (succeeded)
            {
              hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(Context_1194, StateVarB_1243, STATE_VARIABLE_VarSet_0_109, STATE_VARIABLE_VarSet_110, STATE_VARIABLE_SVarState_0_105, STATE_VARIABLE_SVarState_106, STATE_VARIABLE_Specs_0_115, STATE_VARIABLE_Specs_116);
              *HLDSGoal_20 = hlds__make_goal__true_goal_0_f_0();
              *STATE_VARIABLE_QualInfo_114 = STATE_VARIABLE_QualInfo_0_113;
              *STATE_VARIABLE_ModuleInfo_112 = STATE_VARIABLE_ModuleInfo_0_111;
              *STATE_VARIABLE_SVarStore_108 = STATE_VARIABLE_SVarStore_0_107;
            }
            else
            {
              MR_Word STATE_VARIABLE_SVarState_81_1236;

              hlds__make_hlds__superhomogeneous__unravel_unification_19_p_0(TermA_1198, TermB_1199, Context_1194, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Purity_1197, HLDSGoal_20, STATE_VARIABLE_SVarState_0_105, &STATE_VARIABLE_SVarState_81_1236, STATE_VARIABLE_SVarStore_0_107, STATE_VARIABLE_SVarStore_108, STATE_VARIABLE_VarSet_0_109, STATE_VARIABLE_VarSet_110, STATE_VARIABLE_ModuleInfo_0_111, STATE_VARIABLE_ModuleInfo_112, STATE_VARIABLE_QualInfo_0_113, STATE_VARIABLE_QualInfo_114, STATE_VARIABLE_Specs_0_115, STATE_VARIABLE_Specs_116);
              hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(LocKind_17, STATE_VARIABLE_SVarState_81_1236, STATE_VARIABLE_SVarState_106);
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Context_447 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal_18, (MR_Integer) 0))));
          MR_Word Name_448 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal_18, (MR_Integer) 1))));
          MR_Word ArgTerms0_449 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal_18, (MR_Integer) 2))));
          MR_Word Purity_450 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Goal_18, (MR_Integer) 3))) & (MR_Integer) 3);
          MR_Word ArgTerms1_451;
          MR_Word STATE_VARIABLE_SVarState_83_491;
          MR_Word LHSTerm_452;
          MR_Word RHSTerm_453;
          MR_String Var_487;
          MR_Word Var_488;
          MR_Word Var_489;

          hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(ArgTerms0_449, &ArgTerms1_451);
          succeeded = ((MR_tag((MR_Word) Name_448)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_487 = ((MR_String) ((MR_hl_field(MR_mktag(0), Name_448, (MR_Integer) 0))));
            succeeded = (strcmp(Var_487, (MR_String) "\\=") == 0);
            if (succeeded)
            {
              succeeded = (ArgTerms1_451 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                LHSTerm_452 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms1_451, (MR_Integer) 0))));
                Var_488 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms1_451, (MR_Integer) 1))));
                succeeded = (Var_488 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  RHSTerm_453 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_488, (MR_Integer) 0))));
                  Var_489 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_488, (MR_Integer) 1))));
                  succeeded = (Var_489 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word TransformedGoal_454;
            MR_Word Var_490;

            {
              Var_490 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_490, 0) = ((MR_Box) (Context_447));
              MR_hl_field(MR_mktag(0), Var_490, 1) = ((MR_Box) (LHSTerm_452));
              MR_hl_field(MR_mktag(0), Var_490, 2) = ((MR_Box) (RHSTerm_453));
              MR_hl_field(MR_mktag(0), Var_490, 3) = (MR_Box) ((MR_Unsigned) (Purity_450));
            }
            {
              TransformedGoal_454 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), TransformedGoal_454, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), TransformedGoal_454, 1) = ((MR_Box) (Context_447));
              MR_hl_field(MR_mktag(3), TransformedGoal_454, 2) = ((MR_Box) (Var_490));
            }
            hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, TransformedGoal_454, Renaming_19, HLDSGoal_20, STATE_VARIABLE_SVarState_0_105, &STATE_VARIABLE_SVarState_83_491, STATE_VARIABLE_SVarStore_0_107, STATE_VARIABLE_SVarStore_108, STATE_VARIABLE_VarSet_0_109, STATE_VARIABLE_VarSet_110, STATE_VARIABLE_ModuleInfo_0_111, STATE_VARIABLE_ModuleInfo_112, STATE_VARIABLE_QualInfo_0_113, STATE_VARIABLE_QualInfo_114, STATE_VARIABLE_Specs_0_115, STATE_VARIABLE_Specs_116);
          }
          else
          {
            MR_Word RHSTerm0_456;
            MR_Word Remainder_458;
            MR_Word FieldListContext_459;
            MR_Word StateVarNameTerms_460;
            MR_Word StateVarContext_461;
            MR_Word Var_500;
            MR_Word Var_508;
            MR_Word LHSTerm0_455;
            MR_Word StateVar0_457;
            MR_String Var_497;
            MR_Word Var_498;
            MR_Word Var_499;
            MR_String Var_501;
            MR_Word Var_502;
            MR_Word Var_503;
            MR_Word Var_504;
            MR_Word Var_505;
            MR_String Var_506;
            MR_Word Var_507;

            succeeded = ((MR_tag((MR_Word) Name_448)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_497 = ((MR_String) ((MR_hl_field(MR_mktag(0), Name_448, (MR_Integer) 0))));
              succeeded = (strcmp(Var_497, (MR_String) ":=") == 0);
              if (succeeded)
              {
                succeeded = (ArgTerms1_451 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  LHSTerm0_455 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms1_451, (MR_Integer) 0))));
                  Var_498 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms1_451, (MR_Integer) 1))));
                  succeeded = (Var_498 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    RHSTerm0_456 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_498, (MR_Integer) 0))));
                    Var_499 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_498, (MR_Integer) 1))));
                    succeeded = (Var_499 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) LHSTerm0_455)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        Var_500 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHSTerm0_455, (MR_Integer) 0))));
                        Var_502 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHSTerm0_455, (MR_Integer) 1))));
                        FieldListContext_459 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHSTerm0_455, (MR_Integer) 2))));
                        succeeded = ((MR_tag((MR_Word) Var_500)) == (MR_Integer) 0);
                        if (succeeded)
                        {
                          Var_501 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_500, (MR_Integer) 0))));
                          succeeded = (strcmp(Var_501, (MR_String) "^") == 0);
                          if (succeeded)
                          {
                            succeeded = (Var_502 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              StateVar0_457 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_502, (MR_Integer) 0))));
                              Var_503 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_502, (MR_Integer) 1))));
                              succeeded = (Var_503 != (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                Remainder_458 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_503, (MR_Integer) 0))));
                                Var_504 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_503, (MR_Integer) 1))));
                                succeeded = (Var_504 == (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  succeeded = ((MR_tag((MR_Word) StateVar0_457)) == (MR_Integer) 0);
                                  if (succeeded)
                                  {
                                    Var_505 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StateVar0_457, (MR_Integer) 0))));
                                    StateVarNameTerms_460 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StateVar0_457, (MR_Integer) 1))));
                                    StateVarContext_461 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StateVar0_457, (MR_Integer) 2))));
                                    succeeded = ((MR_tag((MR_Word) Var_505)) == (MR_Integer) 0);
                                    if (succeeded)
                                    {
                                      Var_506 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_505, (MR_Integer) 0))));
                                      succeeded = (strcmp(Var_506, (MR_String) "!") == 0);
                                      if (succeeded)
                                      {
                                        succeeded = (StateVarNameTerms_460 != (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          Var_507 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StateVarNameTerms_460, (MR_Integer) 0))));
                                          Var_508 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StateVarNameTerms_460, (MR_Integer) 1))));
                                          succeeded = ((MR_tag((MR_Word) Var_507)) == (MR_Integer) 1);
                                          if (succeeded)
                                            succeeded = (Var_508 == (MR_Word) ((MR_Unsigned) 0U));
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
              MR_Word StateVar_464;
              MR_Word FieldList_465;
              MR_Word Var_515;
              MR_Word Var_516;
              MR_Word Var_520;
              MR_Word Var_521;
              MR_Word LHSTerm_555;
              MR_Word RHSTerm_556;
              MR_Word TransformedGoal_557;

              {
                LHSTerm_555 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), LHSTerm_555, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[0]));
                MR_hl_field(MR_mktag(0), LHSTerm_555, 1) = ((MR_Box) (StateVarNameTerms_460));
                MR_hl_field(MR_mktag(0), LHSTerm_555, 2) = ((MR_Box) (StateVarContext_461));
              }
              {
                StateVar_464 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), StateVar_464, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[1]));
                MR_hl_field(MR_mktag(0), StateVar_464, 1) = ((MR_Box) (StateVarNameTerms_460));
                MR_hl_field(MR_mktag(0), StateVar_464, 2) = ((MR_Box) (StateVarContext_461));
              }
              {
                Var_516 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_516, 0) = ((MR_Box) (Remainder_458));
                MR_hl_field(MR_mktag(1), Var_516, 1) = ((MR_Box) (Var_508));
              }
              {
                Var_515 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_515, 0) = ((MR_Box) (StateVar_464));
                MR_hl_field(MR_mktag(1), Var_515, 1) = ((MR_Box) (Var_516));
              }
              {
                FieldList_465 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), FieldList_465, 0) = ((MR_Box) (Var_500));
                MR_hl_field(MR_mktag(0), FieldList_465, 1) = ((MR_Box) (Var_515));
                MR_hl_field(MR_mktag(0), FieldList_465, 2) = ((MR_Box) (FieldListContext_459));
              }
              {
                Var_521 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_521, 0) = ((MR_Box) (RHSTerm0_456));
                MR_hl_field(MR_mktag(1), Var_521, 1) = ((MR_Box) (Var_508));
              }
              {
                Var_520 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_520, 0) = ((MR_Box) (FieldList_465));
                MR_hl_field(MR_mktag(1), Var_520, 1) = ((MR_Box) (Var_521));
              }
              {
                RHSTerm_556 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), RHSTerm_556, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[2]));
                MR_hl_field(MR_mktag(0), RHSTerm_556, 1) = ((MR_Box) (Var_520));
                MR_hl_field(MR_mktag(0), RHSTerm_556, 2) = ((MR_Box) (Context_447));
              }
              {
                TransformedGoal_557 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TransformedGoal_557, 0) = ((MR_Box) (Context_447));
                MR_hl_field(MR_mktag(0), TransformedGoal_557, 1) = ((MR_Box) (LHSTerm_555));
                MR_hl_field(MR_mktag(0), TransformedGoal_557, 2) = ((MR_Box) (RHSTerm_556));
                MR_hl_field(MR_mktag(0), TransformedGoal_557, 3) = (MR_Box) ((MR_Unsigned) (Purity_450));
              }
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, TransformedGoal_557, Renaming_19, HLDSGoal_20, STATE_VARIABLE_SVarState_0_105, &STATE_VARIABLE_SVarState_83_491, STATE_VARIABLE_SVarStore_0_107, STATE_VARIABLE_SVarStore_108, STATE_VARIABLE_VarSet_0_109, STATE_VARIABLE_VarSet_110, STATE_VARIABLE_ModuleInfo_0_111, STATE_VARIABLE_ModuleInfo_112, STATE_VARIABLE_QualInfo_0_113, STATE_VARIABLE_QualInfo_114, STATE_VARIABLE_Specs_0_115, STATE_VARIABLE_Specs_116);
            }
            else
            {
              MR_Word AccessType_467;
              MR_String Operator_466;

              succeeded = ((MR_tag((MR_Word) Name_448)) == (MR_Integer) 0);
              if (succeeded)
              {
                Operator_466 = ((MR_String) ((MR_hl_field(MR_mktag(0), Name_448, (MR_Integer) 0))));
                if ((strcmp(Operator_466, (MR_String) ":=") == 0))
                {
                  AccessType_467 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                if ((strcmp(Operator_466, (MR_String) "=^") == 0))
                {
                  AccessType_467 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                else
                  succeeded = MR_FALSE;
              }
              if (succeeded)
              {
                MR_Word ArgTerms_468;

                parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, ArgTerms1_451, &ArgTerms_468);
                hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_p_0(LocKind_17, AccessType_467, ArgTerms_468, Context_447, HLDSGoal_20, STATE_VARIABLE_SVarState_0_105, &STATE_VARIABLE_SVarState_83_491, STATE_VARIABLE_SVarStore_0_107, STATE_VARIABLE_SVarStore_108, STATE_VARIABLE_VarSet_0_109, STATE_VARIABLE_VarSet_110, STATE_VARIABLE_ModuleInfo_0_111, STATE_VARIABLE_ModuleInfo_112, STATE_VARIABLE_QualInfo_0_113, STATE_VARIABLE_QualInfo_114, STATE_VARIABLE_Specs_0_115, STATE_VARIABLE_Specs_116);
              }
              else
              {
                MR_Word HeadVars_469;
                MR_Word HeadVarsArgTerms_470;
                MR_Integer Arity_471;
                MR_Word GoalExpr_478;
                MR_Word CallId_480;
                MR_Word GoalInfo_485;
                MR_Word HLDSGoal0_486;
                MR_Word STATE_VARIABLE_VarSet_129_537;
                MR_Word STATE_VARIABLE_SVarState_130_538;
                MR_Word STATE_VARIABLE_Specs_131_539;
                MR_Word STATE_VARIABLE_QualInfo_138_546;
                MR_Word Var_547;
                MR_Word ArgTerms_558;
                MR_Word PredVar_472;
                MR_Word RealHeadVars_473;
                MR_String Var_565;

                parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, ArgTerms1_451, &ArgTerms_558);
                hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_9_p_0(ArgTerms_558, &HeadVars_469, &HeadVarsArgTerms_470, STATE_VARIABLE_VarSet_0_109, &STATE_VARIABLE_VarSet_129_537, STATE_VARIABLE_SVarState_0_105, &STATE_VARIABLE_SVarState_130_538, STATE_VARIABLE_Specs_0_115, &STATE_VARIABLE_Specs_131_539);
                mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0]), ArgTerms_558, &Arity_471);
                succeeded = ((MR_tag((MR_Word) Name_448)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_565 = ((MR_String) ((MR_hl_field(MR_mktag(0), Name_448, (MR_Integer) 0))));
                  if ((strcmp(Var_565, (MR_String) "") == 0))
                    succeeded = MR_TRUE;
                  else
                  if ((strcmp(Var_565, (MR_String) "call") == 0))
                    succeeded = MR_TRUE;
                  else
                    succeeded = MR_FALSE;
                  if (succeeded)
                  {
                    succeeded = (HeadVars_469 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      PredVar_472 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVars_469, (MR_Integer) 0))));
                      RealHeadVars_473 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVars_469, (MR_Integer) 1))));
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Word GenericCall_477;
                  MR_Word GenericCallId_479;

                  {
                    GenericCall_477 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), GenericCall_477, 0) = ((MR_Box) (PredVar_472));
                    MR_hl_field(MR_mktag(0), GenericCall_477, 1) = (MR_Box) (((((MR_Unsigned) (Purity_450) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
                    MR_hl_field(MR_mktag(0), GenericCall_477, 2) = ((MR_Box) (Arity_471));
                  }
                  {
                    GoalExpr_478 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), GoalExpr_478, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), GoalExpr_478, 1) = ((MR_Box) (GenericCall_477));
                    MR_hl_field(MR_mktag(3), GoalExpr_478, 2) = ((MR_Box) (RealHeadVars_473));
                    MR_hl_field(MR_mktag(3), GoalExpr_478, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), GoalExpr_478, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), GoalExpr_478, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 6));
                  }
                  hlds__hlds_goal__generic_call_to_id_2_p_0(GenericCall_477, &GenericCallId_479);
                  {
                    CallId_480 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), CallId_480, 0) = ((MR_Box) (GenericCallId_479));
                  }
                }
                else
                {
                  MR_Word PredId_481;
                  MR_Integer ModeId_482;
                  MR_Word PFSymNameArity_484;

                  PredId_481 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                  ModeId_482 = hlds__hlds_pred__invalid_proc_id_0_f_0();
                  {
                    GoalExpr_478 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), GoalExpr_478, 0) = ((MR_Box) (PredId_481));
                    MR_hl_field(MR_mktag(2), GoalExpr_478, 1) = ((MR_Box) (ModeId_482));
                    MR_hl_field(MR_mktag(2), GoalExpr_478, 2) = ((MR_Box) (HeadVars_469));
                    MR_hl_field(MR_mktag(2), GoalExpr_478, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(2), GoalExpr_478, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(2), GoalExpr_478, 5) = ((MR_Box) (Name_448));
                  }
                  {
                    PFSymNameArity_484 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), PFSymNameArity_484, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(0), PFSymNameArity_484, 1) = ((MR_Box) (Name_448));
                    MR_hl_field(MR_mktag(0), PFSymNameArity_484, 2) = ((MR_Box) (Arity_471));
                  }
                  {
                    CallId_480 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), CallId_480, 0) = ((MR_Box) (PFSymNameArity_484));
                  }
                }
                hlds__hlds_goal__goal_info_init_context_purity_3_p_0(Context_447, Purity_450, &GoalInfo_485);
                {
                  HLDSGoal0_486 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), HLDSGoal0_486, 0) = ((MR_Box) (GoalExpr_478));
                  MR_hl_field(MR_mktag(0), HLDSGoal0_486, 1) = ((MR_Box) (GoalInfo_485));
                }
                hlds__make_hlds__qual_info__record_called_pred_or_func_5_p_0((MR_Integer) 0, Name_448, Arity_471, STATE_VARIABLE_QualInfo_0_113, &STATE_VARIABLE_QualInfo_138_546);
                {
                  Var_547 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_547, 0) = ((MR_Box) (CallId_480));
                }
                hlds__make_hlds__superhomogeneous__insert_arg_unifications_17_p_0(HeadVarsArgTerms_470, Context_447, Var_547, HLDSGoal0_486, HLDSGoal_20, STATE_VARIABLE_SVarState_130_538, &STATE_VARIABLE_SVarState_83_491, STATE_VARIABLE_SVarStore_0_107, STATE_VARIABLE_SVarStore_108, STATE_VARIABLE_VarSet_129_537, STATE_VARIABLE_VarSet_110, STATE_VARIABLE_ModuleInfo_0_111, STATE_VARIABLE_ModuleInfo_112, STATE_VARIABLE_QualInfo_138_546, STATE_VARIABLE_QualInfo_114, STATE_VARIABLE_Specs_131_539, STATE_VARIABLE_Specs_116);
              }
            }
          }
          hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(LocKind_17, STATE_VARIABLE_SVarState_83_491, STATE_VARIABLE_SVarState_106);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Context_588 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_18, (MR_Integer) 0))));
          MR_Word SubGoalA_589 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_18, (MR_Integer) 1))));
          MR_Word SubGoalB_590 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_18, (MR_Integer) 2))));
          MR_Word HLDSConjunctsCordA_591;
          MR_Word HLDSConjunctsCordAB_592;
          MR_Word HLDSConjuncts_593;
          MR_Word GoalInfo_594;
          MR_Word Var_595;
          MR_Word STATE_VARIABLE_SVarState_47_596;
          MR_Word STATE_VARIABLE_SVarStore_48_597;
          MR_Word STATE_VARIABLE_VarSet_49_598;
          MR_Word STATE_VARIABLE_ModuleInfo_50_599;
          MR_Word STATE_VARIABLE_QualInfo_51_600;
          MR_Word STATE_VARIABLE_Specs_52_601;

          Var_595 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
          hlds__make_hlds__goal_expr_to_goal__accumulate_plain_conjuncts_17_p_0(LocKind_17, SubGoalA_589, Renaming_19, Var_595, &HLDSConjunctsCordA_591, STATE_VARIABLE_SVarState_0_105, &STATE_VARIABLE_SVarState_47_596, STATE_VARIABLE_SVarStore_0_107, &STATE_VARIABLE_SVarStore_48_597, STATE_VARIABLE_VarSet_0_109, &STATE_VARIABLE_VarSet_49_598, STATE_VARIABLE_ModuleInfo_0_111, &STATE_VARIABLE_ModuleInfo_50_599, STATE_VARIABLE_QualInfo_0_113, &STATE_VARIABLE_QualInfo_51_600, STATE_VARIABLE_Specs_0_115, &STATE_VARIABLE_Specs_52_601);
          hlds__make_hlds__goal_expr_to_goal__accumulate_plain_conjuncts_17_p_0(LocKind_17, SubGoalB_590, Renaming_19, HLDSConjunctsCordA_591, &HLDSConjunctsCordAB_592, STATE_VARIABLE_SVarState_47_596, STATE_VARIABLE_SVarState_106, STATE_VARIABLE_SVarStore_48_597, STATE_VARIABLE_SVarStore_108, STATE_VARIABLE_VarSet_49_598, STATE_VARIABLE_VarSet_110, STATE_VARIABLE_ModuleInfo_50_599, STATE_VARIABLE_ModuleInfo_112, STATE_VARIABLE_QualInfo_51_600, STATE_VARIABLE_QualInfo_114, STATE_VARIABLE_Specs_52_601, STATE_VARIABLE_Specs_116);
          HLDSConjuncts_593 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HLDSConjunctsCordAB_592);
          hlds__hlds_goal__goal_info_init_2_p_0(Context_588, &GoalInfo_594);
          hlds__hlds_goal__conj_list_to_goal_3_p_0(HLDSConjuncts_593, GoalInfo_594, HLDSGoal_20);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Context_298 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalInfo_300;

              hlds__hlds_goal__goal_info_init_2_p_0(Context_298, &GoalInfo_300);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_2[0])));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_300));
              }
              *STATE_VARIABLE_SVarState_106 = STATE_VARIABLE_SVarState_0_105;
              *STATE_VARIABLE_SVarStore_108 = STATE_VARIABLE_SVarStore_0_107;
              *STATE_VARIABLE_VarSet_110 = STATE_VARIABLE_VarSet_0_109;
              *STATE_VARIABLE_ModuleInfo_112 = STATE_VARIABLE_ModuleInfo_0_111;
              *STATE_VARIABLE_QualInfo_114 = STATE_VARIABLE_QualInfo_0_113;
              *STATE_VARIABLE_Specs_116 = STATE_VARIABLE_Specs_0_115;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Context_832 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word Vars0_833 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word StateVars0_834 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word Cond_835 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word Then_836 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 5))));
              MR_Word Else_837 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 6))));
              MR_Word Vars_839;
              MR_Word StateVars_840;
              MR_Word BeforeCondSVarState_841;
              MR_Word HLDSCond_842;
              MR_Word AfterCondSVarState_843;
              MR_Word HLDSThen0_844;
              MR_Word AfterThenSVarState0_845;
              MR_Word Globals_846;
              MR_Word ModuleName_847;
              MR_Word AfterThenSVarState_848;
              MR_Word HLDSElse0_849;
              MR_Word AfterElseSVarState_850;
              MR_Word HLDSThen_851;
              MR_Word HLDSElse_852;
              MR_Word GoalExpr_853;
              MR_Word GoalInfo_854;
              MR_Word STATE_VARIABLE_Specs_64_857;
              MR_Word STATE_VARIABLE_SVarStore_65_858;
              MR_Word STATE_VARIABLE_VarSet_66_859;
              MR_Word STATE_VARIABLE_ModuleInfo_67_860;
              MR_Word STATE_VARIABLE_QualInfo_68_861;
              MR_Word STATE_VARIABLE_Specs_69_862;
              MR_Word STATE_VARIABLE_SVarStore_70_863;
              MR_Word STATE_VARIABLE_VarSet_71_864;
              MR_Word STATE_VARIABLE_ModuleInfo_72_865;
              MR_Word STATE_VARIABLE_QualInfo_73_866;
              MR_Word STATE_VARIABLE_Specs_74_867;
              MR_Word STATE_VARIABLE_SVarStore_75_868;
              MR_Word STATE_VARIABLE_VarSet_76_869;
              MR_Word STATE_VARIABLE_Specs_79_872;

              parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, Vars0_833, &Vars_839);
              parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, StateVars0_834, &StateVars_840);
              hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(Context_832, STATE_VARIABLE_VarSet_0_109, StateVars_840, STATE_VARIABLE_SVarState_0_105, &BeforeCondSVarState_841, STATE_VARIABLE_Specs_0_115, &STATE_VARIABLE_Specs_64_857);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Cond_835, Renaming_19, &HLDSCond_842, BeforeCondSVarState_841, &AfterCondSVarState_843, STATE_VARIABLE_SVarStore_0_107, &STATE_VARIABLE_SVarStore_65_858, STATE_VARIABLE_VarSet_0_109, &STATE_VARIABLE_VarSet_66_859, STATE_VARIABLE_ModuleInfo_0_111, &STATE_VARIABLE_ModuleInfo_67_860, STATE_VARIABLE_QualInfo_0_113, &STATE_VARIABLE_QualInfo_68_861, STATE_VARIABLE_Specs_64_857, &STATE_VARIABLE_Specs_69_862);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Then_836, Renaming_19, &HLDSThen0_844, AfterCondSVarState_843, &AfterThenSVarState0_845, STATE_VARIABLE_SVarStore_65_858, &STATE_VARIABLE_SVarStore_70_863, STATE_VARIABLE_VarSet_66_859, &STATE_VARIABLE_VarSet_71_864, STATE_VARIABLE_ModuleInfo_67_860, &STATE_VARIABLE_ModuleInfo_72_865, STATE_VARIABLE_QualInfo_68_861, &STATE_VARIABLE_QualInfo_73_866, STATE_VARIABLE_Specs_69_862, &STATE_VARIABLE_Specs_74_867);
              hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_72_865, &Globals_846);
              hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_72_865, &ModuleName_847);
              hlds__make_hlds__state_var__svar_finish_local_state_vars_6_p_0(Globals_846, ModuleName_847, StateVars_840, STATE_VARIABLE_SVarState_0_105, AfterThenSVarState0_845, &AfterThenSVarState_848);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Else_837, Renaming_19, &HLDSElse0_849, STATE_VARIABLE_SVarState_0_105, &AfterElseSVarState_850, STATE_VARIABLE_SVarStore_70_863, &STATE_VARIABLE_SVarStore_75_868, STATE_VARIABLE_VarSet_71_864, &STATE_VARIABLE_VarSet_76_869, STATE_VARIABLE_ModuleInfo_72_865, STATE_VARIABLE_ModuleInfo_112, STATE_VARIABLE_QualInfo_73_866, STATE_VARIABLE_QualInfo_114, STATE_VARIABLE_Specs_74_867, &STATE_VARIABLE_Specs_79_872);
              hlds__make_hlds__state_var__svar_finish_if_then_else_20_p_0(Globals_846, ModuleName_847, LocKind_17, Context_832, StateVars_840, HLDSThen0_844, &HLDSThen_851, HLDSElse0_849, &HLDSElse_852, STATE_VARIABLE_SVarState_0_105, AfterCondSVarState_843, AfterThenSVarState_848, AfterElseSVarState_850, STATE_VARIABLE_SVarState_106, STATE_VARIABLE_VarSet_76_869, STATE_VARIABLE_VarSet_110, STATE_VARIABLE_SVarStore_75_868, STATE_VARIABLE_SVarStore_108, STATE_VARIABLE_Specs_79_872, STATE_VARIABLE_Specs_116);
              {
                GoalExpr_853 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_853, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), GoalExpr_853, 1) = ((MR_Box) (Vars_839));
                MR_hl_field(MR_mktag(3), GoalExpr_853, 2) = ((MR_Box) (HLDSCond_842));
                MR_hl_field(MR_mktag(3), GoalExpr_853, 3) = ((MR_Box) (HLDSThen_851));
                MR_hl_field(MR_mktag(3), GoalExpr_853, 4) = ((MR_Box) (HLDSElse_852));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_832, &GoalInfo_854);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_853));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_854));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Context_688 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word SubGoalA_689 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word SubGoalB_690 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word DisjunctsSVarStates1_692;
              MR_Word DisjunctsSVarStates_693;
              MR_Word Disjuncts_694;
              MR_Word GoalInfo_696;
              MR_Word STATE_VARIABLE_SVarStore_49_698;
              MR_Word STATE_VARIABLE_VarSet_50_699;
              MR_Word STATE_VARIABLE_ModuleInfo_51_700;
              MR_Word STATE_VARIABLE_QualInfo_52_701;
              MR_Word STATE_VARIABLE_Specs_53_702;
              MR_Word STATE_VARIABLE_SVarStore_54_703;
              MR_Word STATE_VARIABLE_VarSet_55_704;

              hlds__make_hlds__goal_expr_to_goal__accumulate_disjuncts_16_p_0(LocKind_17, SubGoalB_690, Renaming_19, (MR_Word) ((MR_Unsigned) 0U), &DisjunctsSVarStates1_692, STATE_VARIABLE_SVarState_0_105, STATE_VARIABLE_SVarStore_0_107, &STATE_VARIABLE_SVarStore_49_698, STATE_VARIABLE_VarSet_0_109, &STATE_VARIABLE_VarSet_50_699, STATE_VARIABLE_ModuleInfo_0_111, &STATE_VARIABLE_ModuleInfo_51_700, STATE_VARIABLE_QualInfo_0_113, &STATE_VARIABLE_QualInfo_52_701, STATE_VARIABLE_Specs_0_115, &STATE_VARIABLE_Specs_53_702);
              hlds__make_hlds__goal_expr_to_goal__accumulate_disjuncts_16_p_0(LocKind_17, SubGoalA_689, Renaming_19, DisjunctsSVarStates1_692, &DisjunctsSVarStates_693, STATE_VARIABLE_SVarState_0_105, STATE_VARIABLE_SVarStore_49_698, &STATE_VARIABLE_SVarStore_54_703, STATE_VARIABLE_VarSet_50_699, &STATE_VARIABLE_VarSet_55_704, STATE_VARIABLE_ModuleInfo_51_700, STATE_VARIABLE_ModuleInfo_112, STATE_VARIABLE_QualInfo_52_701, STATE_VARIABLE_QualInfo_114, STATE_VARIABLE_Specs_53_702, STATE_VARIABLE_Specs_116);
              hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(Context_688, DisjunctsSVarStates_693, &Disjuncts_694, STATE_VARIABLE_VarSet_55_704, STATE_VARIABLE_VarSet_110, STATE_VARIABLE_SVarState_0_105, STATE_VARIABLE_SVarState_106, STATE_VARIABLE_SVarStore_54_703, STATE_VARIABLE_SVarStore_108);
              hlds__hlds_goal__goal_info_init_2_p_0(Context_688, &GoalInfo_696);
              hlds__hlds_goal__disj_list_to_goal_3_p_0(Disjuncts_694, GoalInfo_696, HLDSGoal_20);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Context_900 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word SubGoal_901 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word HLDSSubGoal_903;
              MR_Word GoalExpr_905;
              MR_Word GoalInfo_906;
              MR_Word Var_904;

              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_901, Renaming_19, &HLDSSubGoal_903, STATE_VARIABLE_SVarState_0_105, &Var_904, STATE_VARIABLE_SVarStore_0_107, STATE_VARIABLE_SVarStore_108, STATE_VARIABLE_VarSet_0_109, STATE_VARIABLE_VarSet_110, STATE_VARIABLE_ModuleInfo_0_111, STATE_VARIABLE_ModuleInfo_112, STATE_VARIABLE_QualInfo_0_113, STATE_VARIABLE_QualInfo_114, STATE_VARIABLE_Specs_0_115, STATE_VARIABLE_Specs_116);
              *STATE_VARIABLE_SVarState_106 = STATE_VARIABLE_SVarState_0_105;
              GoalExpr_905 = (MR_Word) ((MR_Word) (HLDSSubGoal_903));
              hlds__hlds_goal__goal_info_init_2_p_0(Context_900, &GoalInfo_906);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_905));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_906));
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
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[4])));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_29));
              }
              *STATE_VARIABLE_SVarState_106 = STATE_VARIABLE_SVarState_0_105;
              *STATE_VARIABLE_SVarStore_108 = STATE_VARIABLE_SVarStore_0_107;
              *STATE_VARIABLE_VarSet_110 = STATE_VARIABLE_VarSet_0_109;
              *STATE_VARIABLE_ModuleInfo_112 = STATE_VARIABLE_ModuleInfo_0_111;
              *STATE_VARIABLE_QualInfo_114 = STATE_VARIABLE_QualInfo_0_113;
              *STATE_VARIABLE_Specs_116 = STATE_VARIABLE_Specs_0_115;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Context_935 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word SubGoalA_936 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word SubGoalB_937 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word HLDSConjunctsCordA_938;
              MR_Word HLDSConjunctsCordAB_939;
              MR_Word HLDSConjuncts_940;
              MR_Word GoalInfo_941;
              MR_Word Var_942;
              MR_Word STATE_VARIABLE_SVarState_47_943;
              MR_Word STATE_VARIABLE_SVarStore_48_944;
              MR_Word STATE_VARIABLE_VarSet_49_945;
              MR_Word STATE_VARIABLE_ModuleInfo_50_946;
              MR_Word STATE_VARIABLE_QualInfo_51_947;
              MR_Word STATE_VARIABLE_Specs_52_948;

              Var_942 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
              hlds__make_hlds__goal_expr_to_goal__accumulate_par_conjuncts_17_p_0(LocKind_17, SubGoalA_936, Renaming_19, Var_942, &HLDSConjunctsCordA_938, STATE_VARIABLE_SVarState_0_105, &STATE_VARIABLE_SVarState_47_943, STATE_VARIABLE_SVarStore_0_107, &STATE_VARIABLE_SVarStore_48_944, STATE_VARIABLE_VarSet_0_109, &STATE_VARIABLE_VarSet_49_945, STATE_VARIABLE_ModuleInfo_0_111, &STATE_VARIABLE_ModuleInfo_50_946, STATE_VARIABLE_QualInfo_0_113, &STATE_VARIABLE_QualInfo_51_947, STATE_VARIABLE_Specs_0_115, &STATE_VARIABLE_Specs_52_948);
              hlds__make_hlds__goal_expr_to_goal__accumulate_par_conjuncts_17_p_0(LocKind_17, SubGoalB_937, Renaming_19, HLDSConjunctsCordA_938, &HLDSConjunctsCordAB_939, STATE_VARIABLE_SVarState_47_943, STATE_VARIABLE_SVarState_106, STATE_VARIABLE_SVarStore_48_944, STATE_VARIABLE_SVarStore_108, STATE_VARIABLE_VarSet_49_945, STATE_VARIABLE_VarSet_110, STATE_VARIABLE_ModuleInfo_50_946, STATE_VARIABLE_ModuleInfo_112, STATE_VARIABLE_QualInfo_51_947, STATE_VARIABLE_QualInfo_114, STATE_VARIABLE_Specs_52_948, STATE_VARIABLE_Specs_116);
              HLDSConjuncts_940 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HLDSConjunctsCordAB_939);
              hlds__hlds_goal__goal_info_init_2_p_0(Context_935, &GoalInfo_941);
              hlds__hlds_goal__par_conj_list_to_goal_3_p_0(HLDSConjuncts_940, GoalInfo_941, HLDSGoal_20);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word QuantType_978 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              MR_Word VarsKind_979 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Context_980 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word Vars0_981 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word SubGoal_982 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));

              switch (QuantType_978) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word TransformedGoal_983;
                    MR_Word Var_1011;
                    MR_Word Var_1013;
                    MR_Word next_value_of_Goal_18;

                    {
                      Var_1013 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_1013, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                      MR_hl_field(MR_mktag(3), Var_1013, 1) = ((MR_Box) (Context_980));
                      MR_hl_field(MR_mktag(3), Var_1013, 2) = ((MR_Box) (SubGoal_982));
                    }
                    {
                      Var_1011 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_1011, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), Var_1011, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) (VarsKind_979)));
                      MR_hl_field(MR_mktag(3), Var_1011, 2) = ((MR_Box) (Context_980));
                      MR_hl_field(MR_mktag(3), Var_1011, 3) = ((MR_Box) (Vars0_981));
                      MR_hl_field(MR_mktag(3), Var_1011, 4) = ((MR_Box) (Var_1013));
                    }
                    {
                      TransformedGoal_983 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), TransformedGoal_983, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                      MR_hl_field(MR_mktag(3), TransformedGoal_983, 1) = ((MR_Box) (Context_980));
                      MR_hl_field(MR_mktag(3), TransformedGoal_983, 2) = ((MR_Box) (Var_1011));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_Goal_18 = TransformedGoal_983;
                    Goal_18 = next_value_of_Goal_18;
                    continue;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word Vars_984;
                    MR_Word HLDSSubGoal_985;
                    MR_Word Reason_986;
                    MR_Word GoalExpr_994;
                    MR_Word GoalInfo_995;

                    parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, Vars0_981, &Vars_984);
                    switch (VarsKind_979) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_982, Renaming_19, &HLDSSubGoal_985, STATE_VARIABLE_SVarState_0_105, STATE_VARIABLE_SVarState_106, STATE_VARIABLE_SVarStore_0_107, STATE_VARIABLE_SVarStore_108, STATE_VARIABLE_VarSet_0_109, STATE_VARIABLE_VarSet_110, STATE_VARIABLE_ModuleInfo_0_111, STATE_VARIABLE_ModuleInfo_112, STATE_VARIABLE_QualInfo_0_113, STATE_VARIABLE_QualInfo_114, STATE_VARIABLE_Specs_0_115, STATE_VARIABLE_Specs_116);
                          {
                            Reason_986 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Reason_986, 0) = ((MR_Box) (Vars_984));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word BeforeInsideSVarState_989;
                          MR_Word AfterInsideSVarState_990;
                          MR_Word Globals_991;
                          MR_Word ModuleName_992;
                          MR_Word STATE_VARIABLE_Specs_58_997;

                          hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(Context_980, STATE_VARIABLE_VarSet_0_109, Vars_984, STATE_VARIABLE_SVarState_0_105, &BeforeInsideSVarState_989, STATE_VARIABLE_Specs_0_115, &STATE_VARIABLE_Specs_58_997);
                          hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_982, Renaming_19, &HLDSSubGoal_985, BeforeInsideSVarState_989, &AfterInsideSVarState_990, STATE_VARIABLE_SVarStore_0_107, STATE_VARIABLE_SVarStore_108, STATE_VARIABLE_VarSet_0_109, STATE_VARIABLE_VarSet_110, STATE_VARIABLE_ModuleInfo_0_111, STATE_VARIABLE_ModuleInfo_112, STATE_VARIABLE_QualInfo_0_113, STATE_VARIABLE_QualInfo_114, STATE_VARIABLE_Specs_58_997, STATE_VARIABLE_Specs_116);
                          hlds__hlds_module__module_info_get_globals_2_p_0(*STATE_VARIABLE_ModuleInfo_112, &Globals_991);
                          hlds__hlds_module__module_info_get_name_2_p_0(*STATE_VARIABLE_ModuleInfo_112, &ModuleName_992);
                          hlds__make_hlds__state_var__svar_finish_local_state_vars_6_p_0(Globals_991, ModuleName_992, Vars_984, STATE_VARIABLE_SVarState_0_105, AfterInsideSVarState_990, STATE_VARIABLE_SVarState_106);
                          Reason_986 = (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[3]);
                        }
                        break;
                    }
                    {
                      GoalExpr_994 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_994, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(MR_mktag(3), GoalExpr_994, 1) = ((MR_Box) (Reason_986));
                      MR_hl_field(MR_mktag(3), GoalExpr_994, 2) = ((MR_Box) (HLDSSubGoal_985));
                    }
                    hlds__hlds_goal__goal_info_init_2_p_0(Context_980, &GoalInfo_995);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *HLDSGoal_20 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_994));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_995));
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Purity_66 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))) & (MR_Integer) 3);
              MR_Word SubGoal_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word Reason_68;
              MR_Word HLDSSubGoal_70;
              MR_Word Context_239 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_240;
              MR_Word GoalInfo_241;

              {
                Reason_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Reason_68, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Reason_68, 1) = (MR_Box) ((MR_Unsigned) (Purity_66));
              }
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_67, Renaming_19, &HLDSSubGoal_70, STATE_VARIABLE_SVarState_0_105, STATE_VARIABLE_SVarState_106, STATE_VARIABLE_SVarStore_0_107, STATE_VARIABLE_SVarStore_108, STATE_VARIABLE_VarSet_0_109, STATE_VARIABLE_VarSet_110, STATE_VARIABLE_ModuleInfo_0_111, STATE_VARIABLE_ModuleInfo_112, STATE_VARIABLE_QualInfo_0_113, STATE_VARIABLE_QualInfo_114, STATE_VARIABLE_Specs_0_115, STATE_VARIABLE_Specs_116);
              {
                GoalExpr_240 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_240, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_240, 1) = ((MR_Box) (Reason_68));
                MR_hl_field(MR_mktag(3), GoalExpr_240, 2) = ((MR_Box) (HLDSSubGoal_70));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_239, &GoalInfo_241);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_240));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_241));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word Vars_271 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word StateVars_272 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word DotSVars_273 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word ColonSVars_274 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 5))));
              MR_Word PromiseVars_276;
              MR_Word Context_277 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_278;
              MR_Word GoalInfo_279;
              MR_Word SubGoal_280 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 6))));
              MR_Word Reason_281;
              MR_Word HLDSSubGoal_282;

              hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(LocKind_17, Vars_271, StateVars_272, DotSVars_273, ColonSVars_274, Context_277, Renaming_19, &PromiseVars_276, SubGoal_280, &HLDSSubGoal_282, STATE_VARIABLE_SVarState_0_105, STATE_VARIABLE_SVarState_106, STATE_VARIABLE_SVarStore_0_107, STATE_VARIABLE_SVarStore_108, STATE_VARIABLE_VarSet_0_109, STATE_VARIABLE_VarSet_110, STATE_VARIABLE_ModuleInfo_0_111, STATE_VARIABLE_ModuleInfo_112, STATE_VARIABLE_QualInfo_0_113, STATE_VARIABLE_QualInfo_114, STATE_VARIABLE_Specs_0_115, STATE_VARIABLE_Specs_116);
              {
                Reason_281 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Reason_281, 0) = ((MR_Box) (PromiseVars_276));
                MR_hl_field(MR_mktag(2), Reason_281, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              {
                GoalExpr_278 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_278, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_278, 1) = ((MR_Box) (Reason_281));
                MR_hl_field(MR_mktag(3), GoalExpr_278, 2) = ((MR_Box) (HLDSSubGoal_282));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_277, &GoalInfo_279);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_278));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_279));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word Vars_259 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word StateVars_260 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word DotSVars_261 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word ColonSVars_262 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 5))));
              MR_Word PromiseVars_264;
              MR_Word Context_265 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_266;
              MR_Word GoalInfo_267;
              MR_Word SubGoal_268 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 6))));
              MR_Word Reason_269;
              MR_Word HLDSSubGoal_270;

              hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(LocKind_17, Vars_259, StateVars_260, DotSVars_261, ColonSVars_262, Context_265, Renaming_19, &PromiseVars_264, SubGoal_268, &HLDSSubGoal_270, STATE_VARIABLE_SVarState_0_105, STATE_VARIABLE_SVarState_106, STATE_VARIABLE_SVarStore_0_107, STATE_VARIABLE_SVarStore_108, STATE_VARIABLE_VarSet_0_109, STATE_VARIABLE_VarSet_110, STATE_VARIABLE_ModuleInfo_0_111, STATE_VARIABLE_ModuleInfo_112, STATE_VARIABLE_QualInfo_0_113, STATE_VARIABLE_QualInfo_114, STATE_VARIABLE_Specs_0_115, STATE_VARIABLE_Specs_116);
              {
                Reason_269 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Reason_269, 0) = ((MR_Box) (PromiseVars_264));
                MR_hl_field(MR_mktag(2), Reason_269, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              }
              {
                GoalExpr_266 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_266, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_266, 1) = ((MR_Box) (Reason_269));
                MR_hl_field(MR_mktag(3), GoalExpr_266, 2) = ((MR_Box) (HLDSSubGoal_270));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_265, &GoalInfo_267);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_266));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_267));
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Vars_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word StateVars_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word DotSVars_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word ColonSVars_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 5))));
              MR_Word PromiseVars_78;
              MR_Word Context_253 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_254;
              MR_Word GoalInfo_255;
              MR_Word SubGoal_256 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 6))));
              MR_Word Reason_257;
              MR_Word HLDSSubGoal_258;

              hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(LocKind_17, Vars_73, StateVars_74, DotSVars_75, ColonSVars_76, Context_253, Renaming_19, &PromiseVars_78, SubGoal_256, &HLDSSubGoal_258, STATE_VARIABLE_SVarState_0_105, STATE_VARIABLE_SVarState_106, STATE_VARIABLE_SVarStore_0_107, STATE_VARIABLE_SVarStore_108, STATE_VARIABLE_VarSet_0_109, STATE_VARIABLE_VarSet_110, STATE_VARIABLE_ModuleInfo_0_111, STATE_VARIABLE_ModuleInfo_112, STATE_VARIABLE_QualInfo_0_113, STATE_VARIABLE_QualInfo_114, STATE_VARIABLE_Specs_0_115, STATE_VARIABLE_Specs_116);
              {
                Reason_257 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Reason_257, 0) = ((MR_Box) (PromiseVars_78));
                MR_hl_field(MR_mktag(2), Reason_257, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
              }
              {
                GoalExpr_254 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_254, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_254, 1) = ((MR_Box) (Reason_257));
                MR_hl_field(MR_mktag(3), GoalExpr_254, 2) = ((MR_Box) (HLDSSubGoal_258));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_253, &GoalInfo_255);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_254));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_255));
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word Detism_69 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_Word SubGoal_283 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word Reason_284;
              MR_Word HLDSSubGoal_285;
              MR_Word Context_286 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_287;
              MR_Word GoalInfo_288;

              {
                Reason_284 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Reason_284, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Reason_284, 1) = (MR_Box) ((MR_Unsigned) (Detism_69));
              }
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_283, Renaming_19, &HLDSSubGoal_285, STATE_VARIABLE_SVarState_0_105, STATE_VARIABLE_SVarState_106, STATE_VARIABLE_SVarStore_0_107, STATE_VARIABLE_SVarStore_108, STATE_VARIABLE_VarSet_0_109, STATE_VARIABLE_VarSet_110, STATE_VARIABLE_ModuleInfo_0_111, STATE_VARIABLE_ModuleInfo_112, STATE_VARIABLE_QualInfo_0_113, STATE_VARIABLE_QualInfo_114, STATE_VARIABLE_Specs_0_115, STATE_VARIABLE_Specs_116);
              {
                GoalExpr_287 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_287, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_287, 1) = ((MR_Box) (Reason_284));
                MR_hl_field(MR_mktag(3), GoalExpr_287, 2) = ((MR_Box) (HLDSSubGoal_285));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_286, &GoalInfo_288);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_287));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_288));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word PODVar0_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word Var_72;
              MR_Word STATE_VARIABLE_SVarState_158_158;
              MR_Word STATE_VARIABLE_VarSet_159_159;
              MR_Word STATE_VARIABLE_Specs_160_160;
              MR_Word Context_246 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_247;
              MR_Word GoalInfo_248;
              MR_Word SubGoal_249 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word Reason_250;
              MR_Word HLDSSubGoal_252;

              hlds__make_hlds__goal_expr_to_goal__rename_and_maybe_expand_dot_var_11_p_0(Context_246, (MR_Integer) 1, Renaming_19, PODVar0_71, &Var_72, STATE_VARIABLE_SVarState_0_105, &STATE_VARIABLE_SVarState_158_158, STATE_VARIABLE_VarSet_0_109, &STATE_VARIABLE_VarSet_159_159, STATE_VARIABLE_Specs_0_115, &STATE_VARIABLE_Specs_160_160);
              {
                Reason_250 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Reason_250, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), Reason_250, 1) = ((MR_Box) (Var_72));
              }
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_249, Renaming_19, &HLDSSubGoal_252, STATE_VARIABLE_SVarState_158_158, STATE_VARIABLE_SVarState_106, STATE_VARIABLE_SVarStore_0_107, STATE_VARIABLE_SVarStore_108, STATE_VARIABLE_VarSet_159_159, STATE_VARIABLE_VarSet_110, STATE_VARIABLE_ModuleInfo_0_111, STATE_VARIABLE_ModuleInfo_112, STATE_VARIABLE_QualInfo_0_113, STATE_VARIABLE_QualInfo_114, STATE_VARIABLE_Specs_160_160, STATE_VARIABLE_Specs_116);
              {
                GoalExpr_247 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_247, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_247, 1) = ((MR_Box) (Reason_250));
                MR_hl_field(MR_mktag(3), GoalExpr_247, 2) = ((MR_Box) (HLDSSubGoal_252));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_246, &GoalInfo_248);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_247));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_248));
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word Detism_242 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))) & (MR_Integer) 7);
              MR_Word PODVar0_243 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word Var_244;
              MR_Word STATE_VARIABLE_SVarState_158_289;
              MR_Word STATE_VARIABLE_VarSet_159_290;
              MR_Word STATE_VARIABLE_Specs_160_291;
              MR_Word Context_292 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_293;
              MR_Word GoalInfo_294;
              MR_Word SubGoal_295 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word Reason_296;
              MR_Word HLDSSubGoal_297;

              hlds__make_hlds__goal_expr_to_goal__rename_and_maybe_expand_dot_var_11_p_0(Context_292, (MR_Integer) 1, Renaming_19, PODVar0_243, &Var_244, STATE_VARIABLE_SVarState_0_105, &STATE_VARIABLE_SVarState_158_289, STATE_VARIABLE_VarSet_0_109, &STATE_VARIABLE_VarSet_159_290, STATE_VARIABLE_Specs_0_115, &STATE_VARIABLE_Specs_160_291);
              {
                Reason_296 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Reason_296, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), Reason_296, 1) = ((MR_Box) (Var_244));
                MR_hl_field(MR_mktag(3), Reason_296, 2) = (MR_Box) ((MR_Unsigned) (Detism_242));
              }
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_295, Renaming_19, &HLDSSubGoal_297, STATE_VARIABLE_SVarState_158_289, STATE_VARIABLE_SVarState_106, STATE_VARIABLE_SVarStore_0_107, STATE_VARIABLE_SVarStore_108, STATE_VARIABLE_VarSet_159_290, STATE_VARIABLE_VarSet_110, STATE_VARIABLE_ModuleInfo_0_111, STATE_VARIABLE_ModuleInfo_112, STATE_VARIABLE_QualInfo_0_113, STATE_VARIABLE_QualInfo_114, STATE_VARIABLE_Specs_160_291, STATE_VARIABLE_Specs_116);
              {
                GoalExpr_293 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_293, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_293, 1) = ((MR_Box) (Reason_296));
                MR_hl_field(MR_mktag(3), GoalExpr_293, 2) = ((MR_Box) (HLDSSubGoal_297));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_292, &GoalInfo_294);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_293));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_294));
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word Context_631 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word HeadWarning_632 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_Word TailWarnings_633 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word SubGoal_634 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word HLDSSubGoal_638;
              MR_Word GoalExpr_641;
              MR_Word GoalInfo_642;
              MR_Word Var_664;

              succeeded = (HeadWarning_632 == (MR_Integer) 1);
              if (!(succeeded))
                succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), ((MR_Box) ((MR_Integer) 1)), TailWarnings_633);
              if (succeeded)
              {
                MR_Word Globals0_635;
                MR_Word WarnOccursCheck0_636;
                MR_Word Globals1_637;
                MR_Word Globals2_639;
                MR_Word Globals3_640;
                MR_Word STATE_VARIABLE_ModuleInfo_56_648;
                MR_Word STATE_VARIABLE_ModuleInfo_60_652;
                MR_Word Var_656;

                hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_111, &Globals0_635);
                libs__globals__lookup_bool_option_3_p_0(Globals0_635, (MR_Integer) 59, &WarnOccursCheck0_636);
                libs__globals__set_option_4_p_0((MR_Integer) 59, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_3[5])), Globals0_635, &Globals1_637);
                hlds__hlds_module__module_info_set_globals_3_p_0(Globals1_637, STATE_VARIABLE_ModuleInfo_0_111, &STATE_VARIABLE_ModuleInfo_56_648);
                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_634, Renaming_19, &HLDSSubGoal_638, STATE_VARIABLE_SVarState_0_105, STATE_VARIABLE_SVarState_106, STATE_VARIABLE_SVarStore_0_107, STATE_VARIABLE_SVarStore_108, STATE_VARIABLE_VarSet_0_109, STATE_VARIABLE_VarSet_110, STATE_VARIABLE_ModuleInfo_56_648, &STATE_VARIABLE_ModuleInfo_60_652, STATE_VARIABLE_QualInfo_0_113, STATE_VARIABLE_QualInfo_114, STATE_VARIABLE_Specs_0_115, STATE_VARIABLE_Specs_116);
                hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_60_652, &Globals2_639);
                {
                  Var_656 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_656, 0) = (MR_Box) ((MR_Unsigned) (WarnOccursCheck0_636));
                }
                libs__globals__set_option_4_p_0((MR_Integer) 59, Var_656, Globals2_639, &Globals3_640);
                hlds__hlds_module__module_info_set_globals_3_p_0(Globals3_640, STATE_VARIABLE_ModuleInfo_60_652, STATE_VARIABLE_ModuleInfo_112);
              }
              else
                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_634, Renaming_19, &HLDSSubGoal_638, STATE_VARIABLE_SVarState_0_105, STATE_VARIABLE_SVarState_106, STATE_VARIABLE_SVarStore_0_107, STATE_VARIABLE_SVarStore_108, STATE_VARIABLE_VarSet_0_109, STATE_VARIABLE_VarSet_110, STATE_VARIABLE_ModuleInfo_0_111, STATE_VARIABLE_ModuleInfo_112, STATE_VARIABLE_QualInfo_0_113, STATE_VARIABLE_QualInfo_114, STATE_VARIABLE_Specs_0_115, STATE_VARIABLE_Specs_116);
              {
                Var_664 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_664, 0) = (MR_Box) ((MR_Unsigned) (HeadWarning_632));
                MR_hl_field(MR_mktag(1), Var_664, 1) = ((MR_Box) (TailWarnings_633));
              }
              {
                GoalExpr_641 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_641, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_641, 1) = ((MR_Box) (Var_664));
                MR_hl_field(MR_mktag(3), GoalExpr_641, 2) = ((MR_Box) (HLDSSubGoal_638));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_631, &GoalInfo_642);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_641));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_642));
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word Context_1043 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word MaybeCompileTime_1044 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word MaybeRunTime_1045 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word MaybeIO0_1046 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word Mutables0_1047 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 5))));
              MR_Word SubGoal0_1048 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 6))));
              MR_Word MutableHLDSs_1049;
              MR_Word MutableStateVars_1050;
              MR_Word MutableGetGoals_1051;
              MR_Word MutableSetGoals_1052;
              MR_Word MaybeIOHLDS_1058;
              MR_Word StateVars_1059;
              MR_Word GetGoals_1060;
              MR_Word SetGoals_1061;
              MR_Word SubGoal1_1062;
              MR_Word BeforeInsideSVarState_1064;
              MR_Word HLDSSubGoal_1065;
              MR_Word AfterInsideSVarState_1066;
              MR_Word Globals_1067;
              MR_Word ModuleName_1068;
              MR_Word Reason_1070;
              MR_Word GoalExpr_1071;
              MR_Word GoalInfo_1072;
              MR_Word Var_1073;
              MR_Word Var_1074;
              MR_Word Var_1075;
              MR_Word Var_1076;
              MR_Word STATE_VARIABLE_Specs_74_1078;
              MR_Word STATE_VARIABLE_QualInfo_78_1082;

              {
                Var_1073 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_1073, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_5[0]));
                MR_hl_field(MR_mktag(0), Var_1073, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_1));
                MR_hl_field(MR_mktag(0), Var_1073, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_1073, 3) = ((MR_Box) (Context_1043));
                MR_hl_field(MR_mktag(0), Var_1073, 4) = ((MR_Box) (STATE_VARIABLE_VarSet_0_109));
                MR_hl_field(MR_mktag(0), Var_1073, 5) = ((MR_Box) (Renaming_19));
              }
              mercury__list__map4_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), Var_1073, Mutables0_1047, &MutableHLDSs_1049, &MutableStateVars_1050, &MutableGetGoals_1051, &MutableSetGoals_1052);
              if ((MaybeIO0_1046 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MaybeIOHLDS_1058 = (MR_Word) ((MR_Unsigned) 0U);
                StateVars_1059 = MutableStateVars_1050;
                GetGoals_1060 = MutableGetGoals_1051;
                SetGoals_1061 = MutableSetGoals_1052;
              }
              else
              {
                MR_Word IOStateVar0_1053 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIO0_1046, (MR_Integer) 0))));
                MR_Word IOStateVar_1054;
                MR_String IOStateVarName_1055;
                MR_Word IOGetGoal_1056;
                MR_Word IOSetGoal_1057;

                hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_8_p_0(Context_1043, STATE_VARIABLE_VarSet_0_109, Renaming_19, IOStateVar0_1053, &IOStateVar_1054, &IOStateVarName_1055, &IOGetGoal_1056, &IOSetGoal_1057);
                {
                  MaybeIOHLDS_1058 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MaybeIOHLDS_1058, 0) = ((MR_Box) (IOStateVarName_1055));
                }
                {
                  StateVars_1059 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), StateVars_1059, 0) = ((MR_Box) (IOStateVar_1054));
                  MR_hl_field(MR_mktag(1), StateVars_1059, 1) = ((MR_Box) (MutableStateVars_1050));
                }
                {
                  GetGoals_1060 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), GetGoals_1060, 0) = ((MR_Box) (IOGetGoal_1056));
                  MR_hl_field(MR_mktag(1), GetGoals_1060, 1) = ((MR_Box) (MutableGetGoals_1051));
                }
                {
                  SetGoals_1061 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), SetGoals_1061, 0) = ((MR_Box) (IOSetGoal_1057));
                  MR_hl_field(MR_mktag(1), SetGoals_1061, 1) = ((MR_Box) (MutableSetGoals_1052));
                }
              }
              {
                Var_1076 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_1076, 0) = ((MR_Box) (SubGoal0_1048));
                MR_hl_field(MR_mktag(1), Var_1076, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_1075 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), Var_1076, SetGoals_1061);
              Var_1074 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), GetGoals_1060, Var_1075);
              SubGoal1_1062 = parse_tree__prog_util__goal_list_to_conj_2_f_0(Context_1043, Var_1074);
              hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(Context_1043, STATE_VARIABLE_VarSet_0_109, StateVars_1059, STATE_VARIABLE_SVarState_0_105, &BeforeInsideSVarState_1064, STATE_VARIABLE_Specs_0_115, &STATE_VARIABLE_Specs_74_1078);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal1_1062, Renaming_19, &HLDSSubGoal_1065, BeforeInsideSVarState_1064, &AfterInsideSVarState_1066, STATE_VARIABLE_SVarStore_0_107, STATE_VARIABLE_SVarStore_108, STATE_VARIABLE_VarSet_0_109, STATE_VARIABLE_VarSet_110, STATE_VARIABLE_ModuleInfo_0_111, STATE_VARIABLE_ModuleInfo_112, STATE_VARIABLE_QualInfo_0_113, &STATE_VARIABLE_QualInfo_78_1082, STATE_VARIABLE_Specs_74_1078, STATE_VARIABLE_Specs_116);
              hlds__hlds_module__module_info_get_globals_2_p_0(*STATE_VARIABLE_ModuleInfo_112, &Globals_1067);
              hlds__hlds_module__module_info_get_name_2_p_0(*STATE_VARIABLE_ModuleInfo_112, &ModuleName_1068);
              hlds__make_hlds__state_var__svar_finish_local_state_vars_6_p_0(Globals_1067, ModuleName_1068, StateVars_1059, STATE_VARIABLE_SVarState_0_105, AfterInsideSVarState_1066, STATE_VARIABLE_SVarState_106);
              hlds__make_hlds__qual_info__qual_info_set_found_trace_goal_3_p_0((MR_Integer) 1, STATE_VARIABLE_QualInfo_78_1082, STATE_VARIABLE_QualInfo_114);
              {
                Reason_1070 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Reason_1070, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), Reason_1070, 1) = ((MR_Box) (MaybeCompileTime_1044));
                MR_hl_field(MR_mktag(3), Reason_1070, 2) = ((MR_Box) (MaybeRunTime_1045));
                MR_hl_field(MR_mktag(3), Reason_1070, 3) = ((MR_Box) (MaybeIOHLDS_1058));
                MR_hl_field(MR_mktag(3), Reason_1070, 4) = ((MR_Box) (MutableHLDSs_1049));
                MR_hl_field(MR_mktag(3), Reason_1070, 5) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                GoalExpr_1071 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_1071, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_1071, 1) = ((MR_Box) (Reason_1070));
                MR_hl_field(MR_mktag(3), GoalExpr_1071, 2) = ((MR_Box) (HLDSSubGoal_1065));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_1043, &GoalInfo_1072);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_1071));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_1072));
              }
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word Context_323 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word Outer0_324 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word Inner0_325 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word MaybeOutputVars0_326 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word MainGoal_327 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 5))));
              MR_Word OrElseGoals_328 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 6))));
              MR_Word MaybeOutputVars_329;
              MR_Word Outer_338;
              MR_Word HLDSGoals_353;
              MR_Word HLDSMainGoal_354;
              MR_Word HLDSOrElseGoals_355;
              MR_Word Inner_360;
              MR_Word ShortHand_364;
              MR_Word GoalExpr_365;
              MR_Word GoalInfo_366;

              if ((MaybeOutputVars0_326 == (MR_Word) ((MR_Unsigned) 0U)))
                MaybeOutputVars_329 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word OutputVars0_330 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOutputVars0_326, (MR_Integer) 0))));
                MR_Word OutputVars_331;

                parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, OutputVars0_330, &OutputVars_331);
                {
                  MaybeOutputVars_329 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MaybeOutputVars_329, 0) = ((MR_Box) (OutputVars_331));
                }
              }
              if (((MR_tag((MR_Word) Outer0_324)) == (MR_Integer) 0))
              {
                MR_Word OuterStateVar0_332 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer0_324, (MR_Integer) 0))));
                MR_Word OuterStateVar_333;
                MR_Word OuterDI_334;
                MR_Word OuterUO_335;
                MR_Word OuterScopeInfo2_363;
                MR_Word STATE_VARIABLE_SVarState_91_375;
                MR_Word STATE_VARIABLE_VarSet_92_376;
                MR_Word STATE_VARIABLE_Specs_93_377;
                MR_Word STATE_VARIABLE_SVarState_117_401;

                parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, OuterStateVar0_332, &OuterStateVar_333);
                hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_p_0(Context_323, OuterStateVar_333, &OuterDI_334, &OuterUO_335, &OuterScopeInfo2_363, STATE_VARIABLE_SVarState_0_105, &STATE_VARIABLE_SVarState_91_375, STATE_VARIABLE_VarSet_0_109, &STATE_VARIABLE_VarSet_92_376, STATE_VARIABLE_Specs_0_115, &STATE_VARIABLE_Specs_93_377);
                {
                  Outer_338 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Outer_338, 0) = ((MR_Box) (OuterDI_334));
                  MR_hl_field(MR_mktag(0), Outer_338, 1) = ((MR_Box) (OuterUO_335));
                }
                if (((MR_tag((MR_Word) Inner0_325)) == (MR_Integer) 0))
                {
                  MR_Word InnerStateVar0_341 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner0_325, (MR_Integer) 0))));
                  MR_Word InnerStateVar_342;
                  MR_Word BeforeDisjSVarState_347;
                  MR_Word HLDSMainGoal0_348;
                  MR_Word AfterMainSVarState_349;
                  MR_Word MainDisjState_350;
                  MR_Word OrElseDisjStates_351;
                  MR_Word AllDisjStates_352;
                  MR_Word InnerScopeInfo2_357;
                  MR_Word InnerDI_358;
                  MR_Word InnerUO_359;
                  MR_Word STATE_VARIABLE_VarSet_96_380;
                  MR_Word STATE_VARIABLE_Specs_97_381;
                  MR_Word STATE_VARIABLE_SVarStore_98_382;
                  MR_Word STATE_VARIABLE_VarSet_99_383;
                  MR_Word STATE_VARIABLE_ModuleInfo_100_384;
                  MR_Word STATE_VARIABLE_QualInfo_101_385;
                  MR_Word STATE_VARIABLE_Specs_102_386;
                  MR_Word STATE_VARIABLE_SVarStore_103_387;
                  MR_Word STATE_VARIABLE_VarSet_104_388;
                  MR_Word STATE_VARIABLE_Specs_107_391;
                  MR_Word STATE_VARIABLE_VarSet_108_392;
                  MR_Word STATE_VARIABLE_SVarState_109_393;

                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, InnerStateVar0_341, &InnerStateVar_342);
                  hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_p_0(Context_323, InnerStateVar_342, &InnerScopeInfo2_357, STATE_VARIABLE_SVarState_91_375, &BeforeDisjSVarState_347, STATE_VARIABLE_VarSet_92_376, &STATE_VARIABLE_VarSet_96_380, STATE_VARIABLE_Specs_93_377, &STATE_VARIABLE_Specs_97_381);
                  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, MainGoal_327, Renaming_19, &HLDSMainGoal0_348, BeforeDisjSVarState_347, &AfterMainSVarState_349, STATE_VARIABLE_SVarStore_0_107, &STATE_VARIABLE_SVarStore_98_382, STATE_VARIABLE_VarSet_96_380, &STATE_VARIABLE_VarSet_99_383, STATE_VARIABLE_ModuleInfo_0_111, &STATE_VARIABLE_ModuleInfo_100_384, STATE_VARIABLE_QualInfo_0_113, &STATE_VARIABLE_QualInfo_101_385, STATE_VARIABLE_Specs_97_381, &STATE_VARIABLE_Specs_102_386);
                  {
                    MainDisjState_350 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MainDisjState_350, 0) = ((MR_Box) (HLDSMainGoal0_348));
                    MR_hl_field(MR_mktag(0), MainDisjState_350, 1) = ((MR_Box) (AfterMainSVarState_349));
                  }
                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(LocKind_17, OrElseGoals_328, Renaming_19, &OrElseDisjStates_351, BeforeDisjSVarState_347, STATE_VARIABLE_SVarStore_98_382, &STATE_VARIABLE_SVarStore_103_387, STATE_VARIABLE_VarSet_99_383, &STATE_VARIABLE_VarSet_104_388, STATE_VARIABLE_ModuleInfo_100_384, STATE_VARIABLE_ModuleInfo_112, STATE_VARIABLE_QualInfo_101_385, STATE_VARIABLE_QualInfo_114, STATE_VARIABLE_Specs_102_386, &STATE_VARIABLE_Specs_107_391);
                  {
                    AllDisjStates_352 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), AllDisjStates_352, 0) = ((MR_Box) (MainDisjState_350));
                    MR_hl_field(MR_mktag(1), AllDisjStates_352, 1) = ((MR_Box) (OrElseDisjStates_351));
                  }
                  hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(Context_323, AllDisjStates_352, &HLDSGoals_353, STATE_VARIABLE_VarSet_104_388, &STATE_VARIABLE_VarSet_108_392, BeforeDisjSVarState_347, &STATE_VARIABLE_SVarState_109_393, STATE_VARIABLE_SVarStore_103_387, STATE_VARIABLE_SVarStore_108);
                  hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_p_0(Context_323, InnerScopeInfo2_357, &InnerDI_358, &InnerUO_359, STATE_VARIABLE_SVarState_109_393, &STATE_VARIABLE_SVarState_117_401, STATE_VARIABLE_VarSet_108_392, STATE_VARIABLE_VarSet_110, STATE_VARIABLE_Specs_107_391, STATE_VARIABLE_Specs_116);
                  {
                    Inner_360 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Inner_360, 0) = ((MR_Box) (InnerDI_358));
                    MR_hl_field(MR_mktag(0), Inner_360, 1) = ((MR_Box) (InnerUO_359));
                  }
                }
                else
                {
                  MR_Word InnerDI0_361;
                  MR_Word InnerUO0_362;
                  MR_Word InnerDI_418;
                  MR_Word InnerUO_419;
                  MR_Word HLDSMainGoal0_1329;
                  MR_Word AfterMainSVarState_1330;
                  MR_Word MainDisjState_1331;
                  MR_Word OrElseDisjStates_1332;
                  MR_Word AllDisjStates_1333;
                  MR_Word STATE_VARIABLE_SVarStore_98_1336;
                  MR_Word STATE_VARIABLE_VarSet_99_1337;
                  MR_Word STATE_VARIABLE_ModuleInfo_100_1338;
                  MR_Word STATE_VARIABLE_QualInfo_101_1339;
                  MR_Word STATE_VARIABLE_Specs_102_1340;
                  MR_Word STATE_VARIABLE_SVarStore_103_1341;
                  MR_Word STATE_VARIABLE_VarSet_104_1342;

                  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, MainGoal_327, Renaming_19, &HLDSMainGoal0_1329, STATE_VARIABLE_SVarState_91_375, &AfterMainSVarState_1330, STATE_VARIABLE_SVarStore_0_107, &STATE_VARIABLE_SVarStore_98_1336, STATE_VARIABLE_VarSet_92_376, &STATE_VARIABLE_VarSet_99_1337, STATE_VARIABLE_ModuleInfo_0_111, &STATE_VARIABLE_ModuleInfo_100_1338, STATE_VARIABLE_QualInfo_0_113, &STATE_VARIABLE_QualInfo_101_1339, STATE_VARIABLE_Specs_93_377, &STATE_VARIABLE_Specs_102_1340);
                  {
                    MainDisjState_1331 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MainDisjState_1331, 0) = ((MR_Box) (HLDSMainGoal0_1329));
                    MR_hl_field(MR_mktag(0), MainDisjState_1331, 1) = ((MR_Box) (AfterMainSVarState_1330));
                  }
                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(LocKind_17, OrElseGoals_328, Renaming_19, &OrElseDisjStates_1332, STATE_VARIABLE_SVarState_91_375, STATE_VARIABLE_SVarStore_98_1336, &STATE_VARIABLE_SVarStore_103_1341, STATE_VARIABLE_VarSet_99_1337, &STATE_VARIABLE_VarSet_104_1342, STATE_VARIABLE_ModuleInfo_100_1338, STATE_VARIABLE_ModuleInfo_112, STATE_VARIABLE_QualInfo_101_1339, STATE_VARIABLE_QualInfo_114, STATE_VARIABLE_Specs_102_1340, STATE_VARIABLE_Specs_116);
                  {
                    AllDisjStates_1333 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), AllDisjStates_1333, 0) = ((MR_Box) (MainDisjState_1331));
                    MR_hl_field(MR_mktag(1), AllDisjStates_1333, 1) = ((MR_Box) (OrElseDisjStates_1332));
                  }
                  hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(Context_323, AllDisjStates_1333, &HLDSGoals_353, STATE_VARIABLE_VarSet_104_1342, STATE_VARIABLE_VarSet_110, STATE_VARIABLE_SVarState_91_375, &STATE_VARIABLE_SVarState_117_401, STATE_VARIABLE_SVarStore_103_1341, STATE_VARIABLE_SVarStore_108);
                  InnerDI0_361 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Inner0_325, (MR_Integer) 0))));
                  InnerUO0_362 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Inner0_325, (MR_Integer) 1))));
                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, InnerDI0_361, &InnerDI_418);
                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, InnerUO0_362, &InnerUO_419);
                  {
                    Inner_360 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Inner_360, 0) = ((MR_Box) (InnerDI_418));
                    MR_hl_field(MR_mktag(0), Inner_360, 1) = ((MR_Box) (InnerUO_419));
                  }
                }
                hlds__make_hlds__state_var__svar_finish_outer_atomic_scope_3_p_0(OuterScopeInfo2_363, STATE_VARIABLE_SVarState_117_401, STATE_VARIABLE_SVarState_106);
              }
              else
              {
                MR_Word OuterDI0_339 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Outer0_324, (MR_Integer) 0))));
                MR_Word OuterUO0_340 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Outer0_324, (MR_Integer) 1))));
                MR_Word OuterDI_416;
                MR_Word OuterUO_417;

                parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, OuterDI0_339, &OuterDI_416);
                parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, OuterUO0_340, &OuterUO_417);
                {
                  Outer_338 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Outer_338, 0) = ((MR_Box) (OuterDI_416));
                  MR_hl_field(MR_mktag(0), Outer_338, 1) = ((MR_Box) (OuterUO_417));
                }
                if (((MR_tag((MR_Word) Inner0_325)) == (MR_Integer) 0))
                {
                  MR_Word InnerStateVar0_1246 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner0_325, (MR_Integer) 0))));
                  MR_Word InnerStateVar_1247;
                  MR_Word InnerScopeInfo2_1258;
                  MR_Word InnerDI_1259;
                  MR_Word InnerUO_1260;
                  MR_Word BeforeDisjSVarState_1290;
                  MR_Word HLDSMainGoal0_1291;
                  MR_Word AfterMainSVarState_1292;
                  MR_Word MainDisjState_1293;
                  MR_Word OrElseDisjStates_1294;
                  MR_Word AllDisjStates_1295;
                  MR_Word STATE_VARIABLE_VarSet_96_1305;
                  MR_Word STATE_VARIABLE_Specs_97_1306;
                  MR_Word STATE_VARIABLE_SVarStore_98_1307;
                  MR_Word STATE_VARIABLE_VarSet_99_1308;
                  MR_Word STATE_VARIABLE_ModuleInfo_100_1309;
                  MR_Word STATE_VARIABLE_QualInfo_101_1310;
                  MR_Word STATE_VARIABLE_Specs_102_1311;
                  MR_Word STATE_VARIABLE_SVarStore_103_1312;
                  MR_Word STATE_VARIABLE_VarSet_104_1313;
                  MR_Word STATE_VARIABLE_Specs_107_1314;
                  MR_Word STATE_VARIABLE_VarSet_108_1315;
                  MR_Word STATE_VARIABLE_SVarState_109_1316;

                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, InnerStateVar0_1246, &InnerStateVar_1247);
                  hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_p_0(Context_323, InnerStateVar_1247, &InnerScopeInfo2_1258, STATE_VARIABLE_SVarState_0_105, &BeforeDisjSVarState_1290, STATE_VARIABLE_VarSet_0_109, &STATE_VARIABLE_VarSet_96_1305, STATE_VARIABLE_Specs_0_115, &STATE_VARIABLE_Specs_97_1306);
                  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, MainGoal_327, Renaming_19, &HLDSMainGoal0_1291, BeforeDisjSVarState_1290, &AfterMainSVarState_1292, STATE_VARIABLE_SVarStore_0_107, &STATE_VARIABLE_SVarStore_98_1307, STATE_VARIABLE_VarSet_96_1305, &STATE_VARIABLE_VarSet_99_1308, STATE_VARIABLE_ModuleInfo_0_111, &STATE_VARIABLE_ModuleInfo_100_1309, STATE_VARIABLE_QualInfo_0_113, &STATE_VARIABLE_QualInfo_101_1310, STATE_VARIABLE_Specs_97_1306, &STATE_VARIABLE_Specs_102_1311);
                  {
                    MainDisjState_1293 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MainDisjState_1293, 0) = ((MR_Box) (HLDSMainGoal0_1291));
                    MR_hl_field(MR_mktag(0), MainDisjState_1293, 1) = ((MR_Box) (AfterMainSVarState_1292));
                  }
                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(LocKind_17, OrElseGoals_328, Renaming_19, &OrElseDisjStates_1294, BeforeDisjSVarState_1290, STATE_VARIABLE_SVarStore_98_1307, &STATE_VARIABLE_SVarStore_103_1312, STATE_VARIABLE_VarSet_99_1308, &STATE_VARIABLE_VarSet_104_1313, STATE_VARIABLE_ModuleInfo_100_1309, STATE_VARIABLE_ModuleInfo_112, STATE_VARIABLE_QualInfo_101_1310, STATE_VARIABLE_QualInfo_114, STATE_VARIABLE_Specs_102_1311, &STATE_VARIABLE_Specs_107_1314);
                  {
                    AllDisjStates_1295 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), AllDisjStates_1295, 0) = ((MR_Box) (MainDisjState_1293));
                    MR_hl_field(MR_mktag(1), AllDisjStates_1295, 1) = ((MR_Box) (OrElseDisjStates_1294));
                  }
                  hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(Context_323, AllDisjStates_1295, &HLDSGoals_353, STATE_VARIABLE_VarSet_104_1313, &STATE_VARIABLE_VarSet_108_1315, BeforeDisjSVarState_1290, &STATE_VARIABLE_SVarState_109_1316, STATE_VARIABLE_SVarStore_103_1312, STATE_VARIABLE_SVarStore_108);
                  hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_p_0(Context_323, InnerScopeInfo2_1258, &InnerDI_1259, &InnerUO_1260, STATE_VARIABLE_SVarState_109_1316, STATE_VARIABLE_SVarState_106, STATE_VARIABLE_VarSet_108_1315, STATE_VARIABLE_VarSet_110, STATE_VARIABLE_Specs_107_1314, STATE_VARIABLE_Specs_116);
                  {
                    Inner_360 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Inner_360, 0) = ((MR_Box) (InnerDI_1259));
                    MR_hl_field(MR_mktag(0), Inner_360, 1) = ((MR_Box) (InnerUO_1260));
                  }
                }
                else
                {
                  MR_Word InnerDI0_1266;
                  MR_Word InnerUO0_1267;
                  MR_Word InnerDI_1270;
                  MR_Word InnerUO_1271;
                  MR_Word HLDSMainGoal0_1349;
                  MR_Word AfterMainSVarState_1350;
                  MR_Word MainDisjState_1351;
                  MR_Word OrElseDisjStates_1352;
                  MR_Word AllDisjStates_1353;
                  MR_Word STATE_VARIABLE_SVarStore_98_1356;
                  MR_Word STATE_VARIABLE_VarSet_99_1357;
                  MR_Word STATE_VARIABLE_ModuleInfo_100_1358;
                  MR_Word STATE_VARIABLE_QualInfo_101_1359;
                  MR_Word STATE_VARIABLE_Specs_102_1360;
                  MR_Word STATE_VARIABLE_SVarStore_103_1361;
                  MR_Word STATE_VARIABLE_VarSet_104_1362;

                  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, MainGoal_327, Renaming_19, &HLDSMainGoal0_1349, STATE_VARIABLE_SVarState_0_105, &AfterMainSVarState_1350, STATE_VARIABLE_SVarStore_0_107, &STATE_VARIABLE_SVarStore_98_1356, STATE_VARIABLE_VarSet_0_109, &STATE_VARIABLE_VarSet_99_1357, STATE_VARIABLE_ModuleInfo_0_111, &STATE_VARIABLE_ModuleInfo_100_1358, STATE_VARIABLE_QualInfo_0_113, &STATE_VARIABLE_QualInfo_101_1359, STATE_VARIABLE_Specs_0_115, &STATE_VARIABLE_Specs_102_1360);
                  {
                    MainDisjState_1351 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MainDisjState_1351, 0) = ((MR_Box) (HLDSMainGoal0_1349));
                    MR_hl_field(MR_mktag(0), MainDisjState_1351, 1) = ((MR_Box) (AfterMainSVarState_1350));
                  }
                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(LocKind_17, OrElseGoals_328, Renaming_19, &OrElseDisjStates_1352, STATE_VARIABLE_SVarState_0_105, STATE_VARIABLE_SVarStore_98_1356, &STATE_VARIABLE_SVarStore_103_1361, STATE_VARIABLE_VarSet_99_1357, &STATE_VARIABLE_VarSet_104_1362, STATE_VARIABLE_ModuleInfo_100_1358, STATE_VARIABLE_ModuleInfo_112, STATE_VARIABLE_QualInfo_101_1359, STATE_VARIABLE_QualInfo_114, STATE_VARIABLE_Specs_102_1360, STATE_VARIABLE_Specs_116);
                  {
                    AllDisjStates_1353 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), AllDisjStates_1353, 0) = ((MR_Box) (MainDisjState_1351));
                    MR_hl_field(MR_mktag(1), AllDisjStates_1353, 1) = ((MR_Box) (OrElseDisjStates_1352));
                  }
                  hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(Context_323, AllDisjStates_1353, &HLDSGoals_353, STATE_VARIABLE_VarSet_104_1362, STATE_VARIABLE_VarSet_110, STATE_VARIABLE_SVarState_0_105, STATE_VARIABLE_SVarState_106, STATE_VARIABLE_SVarStore_103_1361, STATE_VARIABLE_SVarStore_108);
                  InnerDI0_1266 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Inner0_325, (MR_Integer) 0))));
                  InnerUO0_1267 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Inner0_325, (MR_Integer) 1))));
                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, InnerDI0_1266, &InnerDI_1270);
                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, InnerUO0_1267, &InnerUO_1271);
                  {
                    Inner_360 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Inner_360, 0) = ((MR_Box) (InnerDI_1270));
                    MR_hl_field(MR_mktag(0), Inner_360, 1) = ((MR_Box) (InnerUO_1271));
                  }
                }
              }
              if ((HLDSGoals_353 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_parse_tree_goal_to_hlds_atomic\'/16", (MR_String) "atomic HLDSGoals = []");
                  return;
                }
              else
              {
                HLDSMainGoal_354 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HLDSGoals_353, (MR_Integer) 0))));
                HLDSOrElseGoals_355 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HLDSGoals_353, (MR_Integer) 1))));
              }
              {
                ShortHand_364 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ShortHand_364, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(1), ShortHand_364, 1) = ((MR_Box) (Outer_338));
                MR_hl_field(MR_mktag(1), ShortHand_364, 2) = ((MR_Box) (Inner_360));
                MR_hl_field(MR_mktag(1), ShortHand_364, 3) = ((MR_Box) (MaybeOutputVars_329));
                MR_hl_field(MR_mktag(1), ShortHand_364, 4) = ((MR_Box) (HLDSMainGoal_354));
                MR_hl_field(MR_mktag(1), ShortHand_364, 5) = ((MR_Box) (HLDSOrElseGoals_355));
                MR_hl_field(MR_mktag(1), ShortHand_364, 6) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                GoalExpr_365 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_365, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), GoalExpr_365, 1) = ((MR_Box) (ShortHand_364));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_323, &GoalInfo_366);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_365));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_366));
              }
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word Context_1119 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word MaybeIO0_1120 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word SubGoal0_1121 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word Then0_1122 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word MaybeElse0_1123 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 5))));
              MR_Word Catches0_1124 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 6))));
              MR_Word MaybeCatchAny0_1125 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 7))));

              if ((MaybeIO0_1120 == (MR_Word) ((MR_Unsigned) 0U)))
                hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_p_0(LocKind_17, SubGoal0_1121, Then0_1122, MaybeElse0_1123, Catches0_1124, MaybeCatchAny0_1125, Context_1119, Renaming_19, HLDSGoal_20, STATE_VARIABLE_SVarState_0_105, STATE_VARIABLE_SVarState_106, STATE_VARIABLE_SVarStore_0_107, STATE_VARIABLE_SVarStore_108, STATE_VARIABLE_VarSet_0_109, STATE_VARIABLE_VarSet_110, STATE_VARIABLE_ModuleInfo_0_111, STATE_VARIABLE_ModuleInfo_112, STATE_VARIABLE_QualInfo_0_113, STATE_VARIABLE_QualInfo_114, STATE_VARIABLE_Specs_0_115, STATE_VARIABLE_Specs_116);
              else
              {
                MR_Word IOStateVar0_1126 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIO0_1120, (MR_Integer) 0))));

                if ((MaybeElse0_1123 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word IOStateVar_1127;

                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, IOStateVar0_1126, &IOStateVar_1127);
                  hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_p_0(LocKind_17, IOStateVar0_1126, IOStateVar_1127, SubGoal0_1121, Then0_1122, Catches0_1124, MaybeCatchAny0_1125, Context_1119, Renaming_19, HLDSGoal_20, STATE_VARIABLE_SVarState_0_105, STATE_VARIABLE_SVarState_106, STATE_VARIABLE_SVarStore_0_107, STATE_VARIABLE_SVarStore_108, STATE_VARIABLE_VarSet_0_109, STATE_VARIABLE_VarSet_110, STATE_VARIABLE_ModuleInfo_0_111, STATE_VARIABLE_ModuleInfo_112, STATE_VARIABLE_QualInfo_0_113, STATE_VARIABLE_QualInfo_114, STATE_VARIABLE_Specs_0_115, STATE_VARIABLE_Specs_116);
                }
                else
                {
                  MR_Word Spec_1130;

                  {
                    Spec_1130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Spec_1130, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_parse_tree_goal_to_hlds_try\'/16"));
                    MR_hl_field(MR_mktag(1), Spec_1130, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(1), Spec_1130, 2) = ((MR_Box) ((MR_Unsigned) 24U));
                    MR_hl_field(MR_mktag(1), Spec_1130, 3) = ((MR_Box) (Context_1119));
                    MR_hl_field(MR_mktag(1), Spec_1130, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[33])));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_Specs_116 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_1130));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_115));
                  }
                  *HLDSGoal_20 = hlds__make_goal__true_goal_with_context_1_f_0(Context_1119);
                  *STATE_VARIABLE_SVarState_106 = STATE_VARIABLE_SVarState_0_105;
                  *STATE_VARIABLE_SVarStore_108 = STATE_VARIABLE_SVarStore_0_107;
                  *STATE_VARIABLE_VarSet_110 = STATE_VARIABLE_VarSet_0_109;
                  *STATE_VARIABLE_ModuleInfo_112 = STATE_VARIABLE_ModuleInfo_0_111;
                  *STATE_VARIABLE_QualInfo_114 = STATE_VARIABLE_QualInfo_0_113;
                }
              }
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word P_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word Q_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word TransformedGoal_57;
              MR_Word Var_185;
              MR_Word Var_186;
              MR_Word Context_238 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word next_value_of_Goal_18;

              {
                Var_186 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_186, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), Var_186, 1) = ((MR_Box) (Context_238));
                MR_hl_field(MR_mktag(3), Var_186, 2) = ((MR_Box) (Q_56));
              }
              {
                Var_185 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_185, 0) = ((MR_Box) (Context_238));
                MR_hl_field(MR_mktag(2), Var_185, 1) = ((MR_Box) (P_55));
                MR_hl_field(MR_mktag(2), Var_185, 2) = ((MR_Box) (Var_186));
              }
              {
                TransformedGoal_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TransformedGoal_57, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), TransformedGoal_57, 1) = ((MR_Box) (Context_238));
                MR_hl_field(MR_mktag(3), TransformedGoal_57, 2) = ((MR_Box) (Var_185));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_18 = TransformedGoal_57;
              Goal_18 = next_value_of_Goal_18;
              continue;
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word Context_733 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word SubGoalA_734 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word SubGoalB_735 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word HLDSSubGoalA_737;
              MR_Word HLDSSubGoalB_738;
              MR_Word GoalExpr_740;
              MR_Word GoalInfo_741;
              MR_Word STATE_VARIABLE_SVarState_48_742;
              MR_Word STATE_VARIABLE_SVarStore_49_743;
              MR_Word STATE_VARIABLE_VarSet_50_744;
              MR_Word STATE_VARIABLE_ModuleInfo_51_745;
              MR_Word STATE_VARIABLE_QualInfo_52_746;
              MR_Word STATE_VARIABLE_Specs_53_747;
              MR_Word Var_754;
              MR_Word Var_739;

              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoalA_734, Renaming_19, &HLDSSubGoalA_737, STATE_VARIABLE_SVarState_0_105, &STATE_VARIABLE_SVarState_48_742, STATE_VARIABLE_SVarStore_0_107, &STATE_VARIABLE_SVarStore_49_743, STATE_VARIABLE_VarSet_0_109, &STATE_VARIABLE_VarSet_50_744, STATE_VARIABLE_ModuleInfo_0_111, &STATE_VARIABLE_ModuleInfo_51_745, STATE_VARIABLE_QualInfo_0_113, &STATE_VARIABLE_QualInfo_52_746, STATE_VARIABLE_Specs_0_115, &STATE_VARIABLE_Specs_53_747);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoalB_735, Renaming_19, &HLDSSubGoalB_738, STATE_VARIABLE_SVarState_48_742, &Var_739, STATE_VARIABLE_SVarStore_49_743, STATE_VARIABLE_SVarStore_108, STATE_VARIABLE_VarSet_50_744, STATE_VARIABLE_VarSet_110, STATE_VARIABLE_ModuleInfo_51_745, STATE_VARIABLE_ModuleInfo_112, STATE_VARIABLE_QualInfo_52_746, STATE_VARIABLE_QualInfo_114, STATE_VARIABLE_Specs_53_747, STATE_VARIABLE_Specs_116);
              *STATE_VARIABLE_SVarState_106 = STATE_VARIABLE_SVarState_0_105;
              {
                Var_754 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_754, 0) = ((MR_Box) (HLDSSubGoalA_737));
                MR_hl_field(MR_mktag(0), Var_754, 1) = ((MR_Box) (HLDSSubGoalB_738));
              }
              {
                GoalExpr_740 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_740, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), GoalExpr_740, 1) = ((MR_Box) (Var_754));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_733, &GoalInfo_741);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_740));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_741));
              }
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Word Context_777 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_String EventName_778 = ((MR_String) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word ArgTerms0_779 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word ArgTerms1_780;
              MR_Word ArgTerms_781;
              MR_Word HeadVars_782;
              MR_Word HeadVarsArgTerms_783;
              MR_Integer Arity_784;
              MR_Word Modes_785;
              MR_Word Details_786;
              MR_Word GoalExpr0_787;
              MR_Word GoalInfo_788;
              MR_Word HLDSGoal0_789;
              MR_Word CallId_790;
              MR_Word STATE_VARIABLE_VarSet_54_792;
              MR_Word STATE_VARIABLE_SVarState_55_793;
              MR_Word STATE_VARIABLE_Specs_56_794;
              MR_Word Var_795;
              MR_Word Var_798;
              MR_Word Var_799;
              MR_Word STATE_VARIABLE_SVarState_62_800;

              hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(ArgTerms0_779, &ArgTerms1_780);
              parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, ArgTerms1_780, &ArgTerms_781);
              hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_9_p_0(ArgTerms_781, &HeadVars_782, &HeadVarsArgTerms_783, STATE_VARIABLE_VarSet_0_109, &STATE_VARIABLE_VarSet_54_792, STATE_VARIABLE_SVarState_0_105, &STATE_VARIABLE_SVarState_55_793, STATE_VARIABLE_Specs_0_115, &STATE_VARIABLE_Specs_56_794);
              mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[1]), HeadVars_782, &Arity_784);
              Var_795 = parse_tree__prog_mode__in_mode_0_f_0();
              mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Arity_784, ((MR_Box) (Var_795)), &Modes_785);
              {
                Details_786 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Details_786, 0) = ((MR_Box) (EventName_778));
              }
              {
                GoalExpr0_787 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr0_787, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), GoalExpr0_787, 1) = ((MR_Box) (Details_786));
                MR_hl_field(MR_mktag(3), GoalExpr0_787, 2) = ((MR_Box) (HeadVars_782));
                MR_hl_field(MR_mktag(3), GoalExpr0_787, 3) = ((MR_Box) (Modes_785));
                MR_hl_field(MR_mktag(3), GoalExpr0_787, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), GoalExpr0_787, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_777, &GoalInfo_788);
              {
                HLDSGoal0_789 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), HLDSGoal0_789, 0) = ((MR_Box) (GoalExpr0_787));
                MR_hl_field(MR_mktag(0), HLDSGoal0_789, 1) = ((MR_Box) (GoalInfo_788));
              }
              {
                Var_798 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_798, 0) = ((MR_Box) (EventName_778));
              }
              {
                CallId_790 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), CallId_790, 0) = ((MR_Box) (Var_798));
              }
              {
                Var_799 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_799, 0) = ((MR_Box) (CallId_790));
              }
              hlds__make_hlds__superhomogeneous__insert_arg_unifications_17_p_0(HeadVarsArgTerms_783, Context_777, Var_799, HLDSGoal0_789, HLDSGoal_20, STATE_VARIABLE_SVarState_55_793, &STATE_VARIABLE_SVarState_62_800, STATE_VARIABLE_SVarStore_0_107, STATE_VARIABLE_SVarStore_108, STATE_VARIABLE_VarSet_54_792, STATE_VARIABLE_VarSet_110, STATE_VARIABLE_ModuleInfo_0_111, STATE_VARIABLE_ModuleInfo_112, STATE_VARIABLE_QualInfo_0_113, STATE_VARIABLE_QualInfo_114, STATE_VARIABLE_Specs_56_794, STATE_VARIABLE_Specs_116);
              hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(LocKind_17, STATE_VARIABLE_SVarState_62_800, STATE_VARIABLE_SVarState_106);
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__accumulate_disjuncts_16_p_0(
  MR_Word LocKind_17,
  MR_Word Goal_18,
  MR_Word Renaming_19,
  MR_Word DisjStates0_20,
  MR_Word * DisjStates_21,
  MR_Word SVarStateBefore_22,
  MR_Word STATE_VARIABLE_SVarStore_0_35,
  MR_Word * STATE_VARIABLE_SVarStore_36,
  MR_Word STATE_VARIABLE_VarSet_0_37,
  MR_Word * STATE_VARIABLE_VarSet_38,
  MR_Word STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * STATE_VARIABLE_ModuleInfo_40,
  MR_Word STATE_VARIABLE_QualInfo_0_41,
  MR_Word * STATE_VARIABLE_QualInfo_42,
  MR_Word STATE_VARIABLE_Specs_0_43,
  MR_Word * STATE_VARIABLE_Specs_44)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Goal_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word SubGoalA_29;
    MR_Word SubGoalB_30;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      SubGoalA_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
      SubGoalB_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
      {
        MR_Word DisjStates1_31;
        MR_Word STATE_VARIABLE_SVarStore_45_45;
        MR_Word STATE_VARIABLE_VarSet_46_46;
        MR_Word STATE_VARIABLE_ModuleInfo_47_47;
        MR_Word STATE_VARIABLE_QualInfo_48_48;
        MR_Word STATE_VARIABLE_Specs_49_49;
        MR_Word next_value_of_Goal_18;
        MR_Word next_value_of_DisjStates0_20;
        MR_Word next_value_of_STATE_VARIABLE_SVarStore_0_35;
        MR_Word next_value_of_STATE_VARIABLE_VarSet_0_37;
        MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_39;
        MR_Word next_value_of_STATE_VARIABLE_QualInfo_0_41;
        MR_Word next_value_of_STATE_VARIABLE_Specs_0_43;

        hlds__make_hlds__goal_expr_to_goal__accumulate_disjuncts_16_p_0(LocKind_17, SubGoalB_30, Renaming_19, DisjStates0_20, &DisjStates1_31, SVarStateBefore_22, STATE_VARIABLE_SVarStore_0_35, &STATE_VARIABLE_SVarStore_45_45, STATE_VARIABLE_VarSet_0_37, &STATE_VARIABLE_VarSet_46_46, STATE_VARIABLE_ModuleInfo_0_39, &STATE_VARIABLE_ModuleInfo_47_47, STATE_VARIABLE_QualInfo_0_41, &STATE_VARIABLE_QualInfo_48_48, STATE_VARIABLE_Specs_0_43, &STATE_VARIABLE_Specs_49_49);
        // direct tailcall eliminated
        ;
        next_value_of_Goal_18 = SubGoalA_29;
        next_value_of_DisjStates0_20 = DisjStates1_31;
        next_value_of_STATE_VARIABLE_SVarStore_0_35 = STATE_VARIABLE_SVarStore_45_45;
        next_value_of_STATE_VARIABLE_VarSet_0_37 = STATE_VARIABLE_VarSet_46_46;
        next_value_of_STATE_VARIABLE_ModuleInfo_0_39 = STATE_VARIABLE_ModuleInfo_47_47;
        next_value_of_STATE_VARIABLE_QualInfo_0_41 = STATE_VARIABLE_QualInfo_48_48;
        next_value_of_STATE_VARIABLE_Specs_0_43 = STATE_VARIABLE_Specs_49_49;
        Goal_18 = next_value_of_Goal_18;
        DisjStates0_20 = next_value_of_DisjStates0_20;
        STATE_VARIABLE_SVarStore_0_35 = next_value_of_STATE_VARIABLE_SVarStore_0_35;
        STATE_VARIABLE_VarSet_0_37 = next_value_of_STATE_VARIABLE_VarSet_0_37;
        STATE_VARIABLE_ModuleInfo_0_39 = next_value_of_STATE_VARIABLE_ModuleInfo_0_39;
        STATE_VARIABLE_QualInfo_0_41 = next_value_of_STATE_VARIABLE_QualInfo_0_41;
        STATE_VARIABLE_Specs_0_43 = next_value_of_STATE_VARIABLE_Specs_0_43;
        continue;
      }
    }
    else
    {
      MR_Word HLDSGoal_32;
      MR_Word SVarStateAfterDisjunct_33;
      MR_Word DisjState_34;

      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Goal_18, Renaming_19, &HLDSGoal_32, SVarStateBefore_22, &SVarStateAfterDisjunct_33, STATE_VARIABLE_SVarStore_0_35, STATE_VARIABLE_SVarStore_36, STATE_VARIABLE_VarSet_0_37, STATE_VARIABLE_VarSet_38, STATE_VARIABLE_ModuleInfo_0_39, STATE_VARIABLE_ModuleInfo_40, STATE_VARIABLE_QualInfo_0_41, STATE_VARIABLE_QualInfo_42, STATE_VARIABLE_Specs_0_43, STATE_VARIABLE_Specs_44);
      {
        DisjState_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DisjState_34, 0) = ((MR_Box) (HLDSGoal_32));
        MR_hl_field(MR_mktag(0), DisjState_34, 1) = ((MR_Box) (SVarStateAfterDisjunct_33));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *DisjStates_21 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DisjState_34));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (DisjStates0_20));
      }
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
    mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[2]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), Var_63, StateVars1_40, &OldStateVars_43, ((MR_Box) (STATE_VARIABLE_VarSet_0_51)), &conv6_STATE_VARIABLE_VarSet_64_64, ((MR_Box) (STATE_VARIABLE_SVarState_0_47)), &conv5_STATE_VARIABLE_SVarState_65_65, ((MR_Box) (STATE_VARIABLE_Specs_0_57)), &conv4_STATE_VARIABLE_Specs_66_66);
    STATE_VARIABLE_VarSet_64_64 = ((MR_Word) (conv6_STATE_VARIABLE_VarSet_64_64));
    STATE_VARIABLE_SVarState_65_65 = ((MR_Word) (conv5_STATE_VARIABLE_SVarState_65_65));
    STATE_VARIABLE_Specs_66_66 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_66_66));
    mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[2]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), Var_63, DotSVars1_41, &DotSVars_44, ((MR_Box) (STATE_VARIABLE_VarSet_64_64)), &conv9_STATE_VARIABLE_VarSet_68_68, ((MR_Box) (STATE_VARIABLE_SVarState_65_65)), &conv8_STATE_VARIABLE_SVarState_69_69, ((MR_Box) (STATE_VARIABLE_Specs_66_66)), &conv7_STATE_VARIABLE_Specs_70_70);
    STATE_VARIABLE_VarSet_68_68 = ((MR_Word) (conv9_STATE_VARIABLE_VarSet_68_68));
    STATE_VARIABLE_SVarState_69_69 = ((MR_Word) (conv8_STATE_VARIABLE_SVarState_69_69));
    STATE_VARIABLE_Specs_70_70 = ((MR_Word) (conv7_STATE_VARIABLE_Specs_70_70));
    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_23, Goal_31, Renaming_29, HLDSGoal_32, STATE_VARIABLE_SVarState_69_69, &STATE_VARIABLE_SVarState_71_71, STATE_VARIABLE_SVarStore_0_49, STATE_VARIABLE_SVarStore_50, STATE_VARIABLE_VarSet_68_68, &STATE_VARIABLE_VarSet_73_73, STATE_VARIABLE_ModuleInfo_0_53, STATE_VARIABLE_ModuleInfo_54, STATE_VARIABLE_QualInfo_0_55, STATE_VARIABLE_QualInfo_56, STATE_VARIABLE_Specs_70_70, &STATE_VARIABLE_Specs_76_76);
    mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[2]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), Var_63, StateVars1_40, &NewStateVars_45, ((MR_Box) (STATE_VARIABLE_VarSet_73_73)), &conv12_STATE_VARIABLE_VarSet_78_78, ((MR_Box) (STATE_VARIABLE_SVarState_71_71)), &conv11_STATE_VARIABLE_SVarState_79_79, ((MR_Box) (STATE_VARIABLE_Specs_76_76)), &conv10_STATE_VARIABLE_Specs_80_80);
    STATE_VARIABLE_VarSet_78_78 = ((MR_Word) (conv12_STATE_VARIABLE_VarSet_78_78));
    STATE_VARIABLE_SVarState_79_79 = ((MR_Word) (conv11_STATE_VARIABLE_SVarState_79_79));
    STATE_VARIABLE_Specs_80_80 = ((MR_Word) (conv10_STATE_VARIABLE_Specs_80_80));
    mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[2]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), Var_63, ColonSVars1_42, &ColonSVars_46, ((MR_Box) (STATE_VARIABLE_VarSet_78_78)), &conv15_STATE_VARIABLE_VarSet_52, ((MR_Box) (STATE_VARIABLE_SVarState_79_79)), &conv14_STATE_VARIABLE_SVarState_48, ((MR_Box) (STATE_VARIABLE_Specs_80_80)), &conv13_STATE_VARIABLE_Specs_58);
    *STATE_VARIABLE_VarSet_52 = ((MR_Word) (conv15_STATE_VARIABLE_VarSet_52));
    *STATE_VARIABLE_SVarState_48 = ((MR_Word) (conv14_STATE_VARIABLE_SVarState_48));
    *STATE_VARIABLE_Specs_58 = ((MR_Word) (conv13_STATE_VARIABLE_Specs_58));
    Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[1]), DotSVars_44, ColonSVars_46);
    Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[1]), NewStateVars_45, Var_87);
    Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[1]), OldStateVars_43, Var_86);
    *QuantVars_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[1]), Vars_39, Var_85);
  }
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
    MR_Word Var_97;

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
    Var_97 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_97));
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
      MR_Word Var_78;
      MR_Word Var_82;

      {
        Var_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_78, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(MR_mktag(3), Var_78, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
        MR_hl_field(MR_mktag(3), Var_78, 2) = ((MR_Box) (Context_28));
        MR_hl_field(MR_mktag(3), Var_78, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_78, 4) = ((MR_Box) (SubGoal_23));
      }
      {
        Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_82, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(MR_mktag(3), Var_82, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
        MR_hl_field(MR_mktag(3), Var_82, 2) = ((MR_Box) (Context_28));
        MR_hl_field(MR_mktag(3), Var_82, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_82, 4) = ((MR_Box) (ThenGoal_24));
      }
      {
        SucceededSubGoal_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), SucceededSubGoal_46, 0) = ((MR_Box) (Context_28));
        MR_hl_field(MR_mktag(2), SucceededSubGoal_46, 1) = ((MR_Box) (Var_78));
        MR_hl_field(MR_mktag(2), SucceededSubGoal_46, 2) = ((MR_Box) (Var_82));
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
    hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(ResultVarTerm_39, ExcpVarTerm_40, Catches_26, MaybeCatchAny_27, Context_28, &ResultIsExceptionDisjunctGoal_48);
    {
      Var_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_88, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), Var_88, 1) = ((MR_Box) (Context_28));
      MR_hl_field(MR_mktag(3), Var_88, 2) = ((MR_Box) (ResultIsSucceededDisjunctGoal_47));
      MR_hl_field(MR_mktag(3), Var_88, 3) = ((MR_Box) (ResultIsExceptionDisjunctGoal_48));
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
    hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(Context_30, DisjunctSVarStates_62, &HLDSDisjuncts_63, STATE_VARIABLE_VarSet_150_150, STATE_VARIABLE_VarSet_73, STATE_VARIABLE_SVarState_147_147, STATE_VARIABLE_SVarState_69, STATE_VARIABLE_SVarStore_149_149, STATE_VARIABLE_SVarStore_71);
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
}

static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__exception_functor_3_f_0(
  MR_String Atom_5,
  MR_Word Arg_6,
  MR_Word Context_7)
{
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
}

static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_f_0(void)
{
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
  {
    MR_Word ResultIsExceptionUnify_13;
    MR_Word CatchChain_14;
    MR_Word Var_15;
    MR_Word SymName_22;
    MR_Word Var_23;
    MR_Word Var_24;

    Var_23 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    {
      SymName_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SymName_22, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(1), SymName_22, 1) = ((MR_Box) ((MR_String) "exception"));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (ExcpVarTerm_8));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SymName_22, Var_24, Context_11, &Var_15);
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
      MR_Word Var_21;
      MR_Word Var_23;
      MR_Word Var_24;

      Var_21 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
      {
        Rethrow_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Rethrow_20, 0) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(1), Rethrow_20, 1) = ((MR_Box) ((MR_String) "rethrow"));
      }
      Var_23 = mercury__term__get_term_context_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ExcpVarTerm_7);
      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (ResultVarTerm_6));
        MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        *Goal_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Rethrow_20));
        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(1), base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
    }
    else
    {
      MR_Word CatchAnyVar_16;
      MR_Word CatchAnyGoal_17;
      MR_Word Context_18;
      MR_Word GetUnivValue_19;
      MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCatchAny_9, (MR_Integer) 0))));
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word SymName_42;
      MR_Word Var_43;
      MR_Word Var_44;

      CatchAnyVar_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 0))));
      CatchAnyGoal_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 1))));
      Context_18 = parse_tree__prog_item__get_goal_context_1_f_0(CatchAnyGoal_17);
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (CatchAnyVar_16));
        MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Context_18));
      }
      Var_43 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
      {
        SymName_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SymName_42, 0) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(1), SymName_42, 1) = ((MR_Box) ((MR_String) "exc_univ_value"));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (ExcpVarTerm_7));
        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SymName_42, Var_44, Context_18, &Var_29);
      {
        GetUnivValue_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), GetUnivValue_19, 0) = ((MR_Box) (Context_18));
        MR_hl_field(MR_mktag(0), GetUnivValue_19, 1) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(0), GetUnivValue_19, 2) = ((MR_Box) (Var_29));
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
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Catches_8, (MR_Integer) 0))));
    MR_Word Var_33;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_54;
    MR_Word Var_55;

    FirstPattern_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 0))));
    FirstGoal_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 1))));
    hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(ResultVarTerm_6, ExcpVarTerm_7, RestCatches_13, MaybeCatchAny_9, &ElseGoal_14);
    Var_50 = mercury__term__get_term_context_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), FirstPattern_11);
    Var_52 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_String) "exc_univ_to_type"));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (FirstPattern_11));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (ExcpVarTerm_7));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_55));
    }
    {
      FirstPatternGoal_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), FirstPatternGoal_15, 0) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(1), FirstPatternGoal_15, 1) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(1), FirstPatternGoal_15, 2) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(1), FirstPatternGoal_15, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    Var_33 = mercury__term__get_term_context_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), FirstPattern_11);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
      *Goal_10 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_33));
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
        MR_Word STATE_VARIABLE_Specs_65_65;

        STATE_VARIABLE_Specs_65_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), FieldNamesSpecs_42, STATE_VARIABLE_Specs_0_55);
        hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_p_0((MR_String) "^", ArgTerms0_20, GoalInfo_29, HLDSGoal_22, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_SVarState_0_45, STATE_VARIABLE_SVarState_46, STATE_VARIABLE_Specs_65_65, STATE_VARIABLE_Specs_56);
        hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 1, STATE_VARIABLE_QualInfo_0_53, STATE_VARIABLE_QualInfo_54);
        *STATE_VARIABLE_SVarStore_48 = STATE_VARIABLE_SVarStore_0_47;
        *STATE_VARIABLE_ModuleInfo_52 = STATE_VARIABLE_ModuleInfo_0_51;
      }
      else
      {
        MR_Word FieldNames_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFieldNames_39, (MR_Integer) 0))));
        MR_Word ArgTerms_41;
        MR_Word STATE_VARIABLE_SVarState_75_75;

        {
          ArgTerms_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ArgTerms_41, 0) = ((MR_Box) (FieldValueTerm_35));
          MR_hl_field(MR_mktag(1), ArgTerms_41, 1) = ((MR_Box) (Var_58));
        }
        hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_p_0(AccessType_19, FieldNames_40, ArgTerms_41, Context_21, HLDSGoal_22, STATE_VARIABLE_SVarState_0_45, &STATE_VARIABLE_SVarState_75_75, STATE_VARIABLE_SVarStore_0_47, STATE_VARIABLE_SVarStore_48, STATE_VARIABLE_VarSet_0_49, STATE_VARIABLE_VarSet_50, STATE_VARIABLE_ModuleInfo_0_51, STATE_VARIABLE_ModuleInfo_52, STATE_VARIABLE_QualInfo_0_53, STATE_VARIABLE_QualInfo_54, STATE_VARIABLE_Specs_0_55, STATE_VARIABLE_Specs_56);
        hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(LocKind_18, STATE_VARIABLE_SVarState_75_75, STATE_VARIABLE_SVarState_46);
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
        MR_hl_field(MR_mktag(1), Spec_44, 2) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(MR_mktag(1), Spec_44, 3) = ((MR_Box) (Context_21));
        MR_hl_field(MR_mktag(1), Spec_44, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[15])));
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
}

static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__dcg_field_error_context_pieces_1_f_0(
  MR_Word AccessType_3)
{
  {
    MR_Word ContextPieces_4;

    switch (AccessType_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ContextPieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[17]));
        break;
      case (MR_Integer) 1:
        ContextPieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[19]));
        break;
    }
    return ContextPieces_4;
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
    MR_Word STATE_VARIABLE_SVarState_116_116;
    MR_Word STATE_VARIABLE_SVarStore_117_117;
    MR_Word STATE_VARIABLE_VarSet_118_118;
    MR_Word STATE_VARIABLE_ModuleInfo_119_119;
    MR_Word STATE_VARIABLE_QualInfo_120_120;
    MR_Word STATE_VARIABLE_Specs_121_121;
    MR_Word Var_127;
    MR_Word Var_128;
    MR_Word _ArgVars_29;

    hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_9_p_0(ArgTerms_20, &_ArgVars_29, &ArgVarsTerms_30, STATE_VARIABLE_VarSet_0_74, &STATE_VARIABLE_VarSet_82_82, STATE_VARIABLE_SVarState_0_70, &STATE_VARIABLE_SVarState_83_83, STATE_VARIABLE_Specs_0_80, &STATE_VARIABLE_Specs_84_84);
    if ((ArgVarsTerms_30 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "arity != 3");
        return;
      }
    else
    {
      MR_Word Var_152 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVarsTerms_30, (MR_Integer) 1))));
      MR_Word Var_153 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVarsTerms_30, (MR_Integer) 0))));

      if ((Var_152 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "arity != 3");
          return;
        }
      else
      {
        MR_Word Var_154 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_152, (MR_Integer) 1))));
        MR_Word Var_155 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_152, (MR_Integer) 0))));

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
            FieldValueVarTerm_31 = Var_153;
            TermInputVarTerm_32 = Var_155;
            TermOutputVarTerm_33 = Var_157;
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
          MR_Word Var_100;
          MR_Word Var_110;
          MR_Word InnermostFunctor_138;
          MR_Word FuncName_141;
          MR_Integer FuncArity_142;
          MR_Word PFSymNameArity_143;
          MR_Word FuncNamePrime_136;
          MR_Integer FuncArityPrime_137;

          hlds__make_hlds__field_access__expand_dcg_field_extraction_goal_22_p_0(Context_21, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), FieldNames_19, FieldValueVar_42, TermInputVar_44, TermOutputVar_46, &Functor_50, &Var_100, &HLDSGoal0_53, STATE_VARIABLE_SVarState_83_83, &STATE_VARIABLE_SVarState_116_116, STATE_VARIABLE_SVarStore_0_72, &STATE_VARIABLE_SVarStore_117_117, STATE_VARIABLE_VarSet_82_82, &STATE_VARIABLE_VarSet_118_118, STATE_VARIABLE_ModuleInfo_0_76, &STATE_VARIABLE_ModuleInfo_119_119, STATE_VARIABLE_QualInfo_0_78, &STATE_VARIABLE_QualInfo_120_120, STATE_VARIABLE_Specs_84_84, &STATE_VARIABLE_Specs_121_121);
          InnermostFunctor_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_100, (MR_Integer) 0))));
          succeeded = ((((MR_tag((MR_Word) InnermostFunctor_138)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InnermostFunctor_138, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            FuncNamePrime_136 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InnermostFunctor_138, (MR_Integer) 1))));
            FuncArityPrime_137 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), InnermostFunctor_138, (MR_Integer) 2))));
            FuncName_141 = FuncNamePrime_136;
            FuncArity_142 = FuncArityPrime_137;
          }
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "not cons");
              return;
            }
          {
            PFSymNameArity_143 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), PFSymNameArity_143, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), PFSymNameArity_143, 1) = ((MR_Box) (FuncName_141));
            MR_hl_field(MR_mktag(0), PFSymNameArity_143, 2) = ((MR_Box) (FuncArity_142));
          }
          FieldArgNumber_54 = (MR_Integer) 2;
          {
            Var_110 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_110, 0) = ((MR_Box) (PFSymNameArity_143));
          }
          {
            FieldArgContext_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), FieldArgContext_55, 0) = ((MR_Box) (Var_110));
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
          MR_Word FuncName_59;
          MR_Integer FuncArity_60;
          MR_Word PFSymNameArity_61;
          MR_Word Var_115;
          MR_Word Var_126;
          MR_Word FuncNamePrime_56;
          MR_Integer FuncArityPrime_57;

          hlds__make_hlds__field_access__expand_set_field_function_call_22_p_0(Context_21, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), FieldNames_19, FieldValueVar_42, TermInputVar_44, TermOutputVar_46, &Functor_50, &Var_115, &HLDSGoal0_53, STATE_VARIABLE_SVarState_83_83, &STATE_VARIABLE_SVarState_116_116, STATE_VARIABLE_SVarStore_0_72, &STATE_VARIABLE_SVarStore_117_117, STATE_VARIABLE_VarSet_82_82, &STATE_VARIABLE_VarSet_118_118, STATE_VARIABLE_ModuleInfo_0_76, &STATE_VARIABLE_ModuleInfo_119_119, STATE_VARIABLE_QualInfo_0_78, &STATE_VARIABLE_QualInfo_120_120, STATE_VARIABLE_Specs_84_84, &STATE_VARIABLE_Specs_121_121);
          InnermostFunctor_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_115, (MR_Integer) 0))));
          InnermostSubContext_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_115, (MR_Integer) 1))));
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
            FuncNamePrime_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Functor_50, (MR_Integer) 1))));
            FuncArityPrime_57 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_50, (MR_Integer) 2))));
            FuncName_59 = FuncNamePrime_56;
            FuncArity_60 = FuncArityPrime_57;
          }
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "not cons");
              return;
            }
          {
            PFSymNameArity_61 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), PFSymNameArity_61, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), PFSymNameArity_61, 1) = ((MR_Box) (FuncName_59));
            MR_hl_field(MR_mktag(0), PFSymNameArity_61, 2) = ((MR_Box) (FuncArity_60));
          }
          OutputTermArgNumber_62 = (MR_Integer) 3;
          {
            Var_126 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_126, 0) = ((MR_Box) (PFSymNameArity_61));
          }
          {
            OutputTermArgContext_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), OutputTermArgContext_63, 0) = ((MR_Box) (Var_126));
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
      Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) (TermOutputVTNC_68));
      MR_hl_field(MR_mktag(1), Var_128, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (TermInputVTNC_67));
      MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) (Var_128));
    }
    {
      ArgVarsTermsNumsContexts_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ArgVarsTermsNumsContexts_69, 0) = ((MR_Box) (FieldValueVTNC_66));
      MR_hl_field(MR_mktag(1), ArgVarsTermsNumsContexts_69, 1) = ((MR_Box) (Var_127));
    }
    hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_16_p_0(ArgVarsTermsNumsContexts_69, Context_21, HLDSGoal0_53, HLDSGoal_22, STATE_VARIABLE_SVarState_116_116, STATE_VARIABLE_SVarState_71, STATE_VARIABLE_SVarStore_117_117, STATE_VARIABLE_SVarStore_73, STATE_VARIABLE_VarSet_118_118, STATE_VARIABLE_VarSet_75, STATE_VARIABLE_ModuleInfo_119_119, STATE_VARIABLE_ModuleInfo_77, STATE_VARIABLE_QualInfo_120_120, STATE_VARIABLE_QualInfo_79, STATE_VARIABLE_Specs_121_121, STATE_VARIABLE_Specs_81);
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Unify____loc_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds__goal_expr_to_goal____Unify____loc_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Compare____loc_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds__goal_expr_to_goal____Compare____loc_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
