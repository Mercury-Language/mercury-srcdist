/*
** Automatically generated from `goal_expr_to_goal.m'
** by the Mercury compiler,
** version rotd-2019-09-03
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
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
#include "array.mih"
#include "assoc_list.mih"
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
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
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

static const MR_EnumFunctorDescPtr hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_value_ordered_loc_kind_0[2];

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
hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(
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
  MR_Word STATE_VARIABLE_SVarState_0_46,
  MR_Word * STATE_VARIABLE_SVarState_47,
  MR_Word STATE_VARIABLE_SVarStore_0_48,
  MR_Word * STATE_VARIABLE_SVarStore_49,
  MR_Word STATE_VARIABLE_VarSet_0_50,
  MR_Word * STATE_VARIABLE_VarSet_51,
  MR_Word STATE_VARIABLE_ModuleInfo_0_52,
  MR_Word * STATE_VARIABLE_ModuleInfo_53,
  MR_Word STATE_VARIABLE_QualInfo_0_54,
  MR_Word * STATE_VARIABLE_QualInfo_55,
  MR_Word STATE_VARIABLE_Specs_0_56,
  MR_Word * STATE_VARIABLE_Specs_57);

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

static MR_bool MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Unify____loc_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Compare____loc_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_1[36][2];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_2[8][1];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_3[1][12];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_4[1][11];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_5[1][3];




static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_1[36][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
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
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "part."))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "else"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "parameter cannot have an"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "io"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "goal with an"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "try"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in DCG field access goal."))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[4])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "^ field1 ^ ... ^ fieldN := Field"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Field =^ field1 ^ ... ^ fieldN"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: expected"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In DCG field extraction goal:"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[4])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In DCG field update goal:"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[4])))
  },
  /* row 33 */
  {
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[2])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 35 */
  {
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[7])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_2[8][1] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[28])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) ":="))
  },
  /* row 5 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[18])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_3[1][12] = {
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

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_4[1][11] = {
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

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_5[1][3] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
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

static const MR_EnumFunctorDescPtr hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_value_ordered_loc_kind_0[2] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__goal_expr_to_goal____Unify____loc_kind_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__goal_expr_to_goal____Compare____loc_kind_0_0_10001)),
  (MR_String) "hlds.make_hlds.goal_expr_to_goal",
  (MR_String) "loc_kind",
  {     hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_name_ordered_loc_kind_0 },
  {     hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_value_ordered_loc_kind_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__functor_number_map_loc_kind_0
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
      MR_hl_field(MR_mktag(0), SetVar_22, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), SetVar_22, 1) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), SetVar_22, 2) = ((MR_Box) (Context_9));
    }
    {
      UseVar_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UseVar_23, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[1]));
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
  MR_Word STATE_VARIABLE_SVarState_0_210,
  MR_Word * STATE_VARIABLE_SVarState_211,
  MR_Word STATE_VARIABLE_SVarStore_0_212,
  MR_Word * STATE_VARIABLE_SVarStore_213,
  MR_Word STATE_VARIABLE_VarSet_0_214,
  MR_Word * STATE_VARIABLE_VarSet_215,
  MR_Word STATE_VARIABLE_ModuleInfo_0_216,
  MR_Word * STATE_VARIABLE_ModuleInfo_217,
  MR_Word STATE_VARIABLE_QualInfo_0_218,
  MR_Word * STATE_VARIABLE_QualInfo_219,
  MR_Word STATE_VARIABLE_Specs_0_220,
  MR_Word * STATE_VARIABLE_Specs_221)
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
          MR_Word TermA0_198 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_18, (MR_Integer) 1))));
          MR_Word TermB0_199 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_18, (MR_Integer) 2))));
          MR_Word TermA_200;
          MR_Word TermB_201;
          MR_Word Context_828 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_18, (MR_Integer) 0))));
          MR_Word Purity_829 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Goal_18, (MR_Integer) 3))) & (MR_Integer) 3);
          MR_Word StateVarA_202;
          MR_Word Var_224;
          MR_String Var_225;
          MR_Word Var_226;
          MR_Word Var_227;
          MR_Word Var_228;

          parse_tree__prog_rename__rename_vars_in_term_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, TermA0_198, &TermA_200);
          parse_tree__prog_rename__rename_vars_in_term_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, TermB0_199, &TermB_201);
          succeeded = ((MR_tag((MR_Word) TermA_200)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_224 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermA_200, (MR_Integer) 0))));
            Var_226 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermA_200, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Var_224)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_225 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_224, (MR_Integer) 0))));
              succeeded = (strcmp(Var_225, (MR_String) "!") == 0);
              if (succeeded)
              {
                succeeded = (Var_226 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_227 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_226, (MR_Integer) 0))));
                  Var_228 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_226, (MR_Integer) 1))));
                  succeeded = (Var_228 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) Var_227)) == (MR_Integer) 1);
                    if (succeeded)
                      StateVarA_202 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_227, (MR_Integer) 0))));
                  }
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word STATE_VARIABLE_VarSet_229_229;
            MR_Word STATE_VARIABLE_SVarState_230_230;
            MR_Word STATE_VARIABLE_Specs_231_231;
            MR_Word StateVarB_205;
            MR_Word Var_232;
            MR_String Var_233;
            MR_Word Var_234;
            MR_Word Var_235;
            MR_Word Var_236;

            hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(Context_828, StateVarA_202, STATE_VARIABLE_VarSet_0_214, &STATE_VARIABLE_VarSet_229_229, STATE_VARIABLE_SVarState_0_210, &STATE_VARIABLE_SVarState_230_230, STATE_VARIABLE_Specs_0_220, &STATE_VARIABLE_Specs_231_231);
            succeeded = ((MR_tag((MR_Word) TermB_201)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_232 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermB_201, (MR_Integer) 0))));
              Var_234 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermB_201, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_232)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_233 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_232, (MR_Integer) 0))));
                succeeded = (strcmp(Var_233, (MR_String) "!") == 0);
                if (succeeded)
                {
                  succeeded = (Var_234 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_235 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_234, (MR_Integer) 0))));
                    Var_236 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_234, (MR_Integer) 1))));
                    succeeded = (Var_236 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) Var_235)) == (MR_Integer) 1);
                      if (succeeded)
                        StateVarB_205 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_235, (MR_Integer) 0))));
                    }
                  }
                }
              }
            }
            if (succeeded)
              hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(Context_828, StateVarB_205, STATE_VARIABLE_VarSet_229_229, STATE_VARIABLE_VarSet_215, STATE_VARIABLE_SVarState_230_230, STATE_VARIABLE_SVarState_211, STATE_VARIABLE_Specs_231_231, STATE_VARIABLE_Specs_221);
            else
            {
              *STATE_VARIABLE_Specs_221 = STATE_VARIABLE_Specs_231_231;
              *STATE_VARIABLE_VarSet_215 = STATE_VARIABLE_VarSet_229_229;
              *STATE_VARIABLE_SVarState_211 = STATE_VARIABLE_SVarState_230_230;
            }
            *HLDSGoal_20 = hlds__make_goal__true_goal_with_context_1_f_0(Context_828);
            *STATE_VARIABLE_QualInfo_219 = STATE_VARIABLE_QualInfo_0_218;
            *STATE_VARIABLE_ModuleInfo_217 = STATE_VARIABLE_ModuleInfo_0_216;
            *STATE_VARIABLE_SVarStore_213 = STATE_VARIABLE_SVarStore_0_212;
          }
          else
          {
            MR_Word StateVarB_827;
            MR_Word Var_240;
            MR_String Var_241;
            MR_Word Var_242;
            MR_Word Var_243;
            MR_Word Var_244;

            succeeded = ((MR_tag((MR_Word) TermB_201)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_240 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermB_201, (MR_Integer) 0))));
              Var_242 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermB_201, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_240)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_241 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_240, (MR_Integer) 0))));
                succeeded = (strcmp(Var_241, (MR_String) "!") == 0);
                if (succeeded)
                {
                  succeeded = (Var_242 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_243 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_242, (MR_Integer) 0))));
                    Var_244 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_242, (MR_Integer) 1))));
                    succeeded = (Var_244 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) Var_243)) == (MR_Integer) 1);
                      if (succeeded)
                        StateVarB_827 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_243, (MR_Integer) 0))));
                    }
                  }
                }
              }
            }
            if (succeeded)
            {
              hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(Context_828, StateVarB_827, STATE_VARIABLE_VarSet_0_214, STATE_VARIABLE_VarSet_215, STATE_VARIABLE_SVarState_0_210, STATE_VARIABLE_SVarState_211, STATE_VARIABLE_Specs_0_220, STATE_VARIABLE_Specs_221);
              *HLDSGoal_20 = hlds__make_goal__true_goal_0_f_0();
              *STATE_VARIABLE_QualInfo_219 = STATE_VARIABLE_QualInfo_0_218;
              *STATE_VARIABLE_ModuleInfo_217 = STATE_VARIABLE_ModuleInfo_0_216;
              *STATE_VARIABLE_SVarStore_213 = STATE_VARIABLE_SVarStore_0_212;
            }
            else
            {
              MR_Word STATE_VARIABLE_SVarState_250_250;

              hlds__make_hlds__superhomogeneous__unravel_unification_19_p_0(TermA_200, TermB_201, Context_828, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Purity_829, HLDSGoal_20, STATE_VARIABLE_SVarState_0_210, &STATE_VARIABLE_SVarState_250_250, STATE_VARIABLE_SVarStore_0_212, STATE_VARIABLE_SVarStore_213, STATE_VARIABLE_VarSet_0_214, STATE_VARIABLE_VarSet_215, STATE_VARIABLE_ModuleInfo_0_216, STATE_VARIABLE_ModuleInfo_217, STATE_VARIABLE_QualInfo_0_218, STATE_VARIABLE_QualInfo_219, STATE_VARIABLE_Specs_0_220, STATE_VARIABLE_Specs_221);
              hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(LocKind_17, STATE_VARIABLE_SVarState_250_250, STATE_VARIABLE_SVarState_211);
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Name_172 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal_18, (MR_Integer) 1))));
          MR_Word STATE_VARIABLE_SVarState_261_261;
          MR_Word Context_813 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal_18, (MR_Integer) 0))));
          MR_Word Purity_817 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Goal_18, (MR_Integer) 3))) & (MR_Integer) 3);
          MR_Word ArgTerms0_818 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal_18, (MR_Integer) 2))));
          MR_Word ArgTerms1_819;
          MR_Word LHSTerm_173;
          MR_Word RHSTerm_174;
          MR_String Var_257;
          MR_Word Var_258;
          MR_Word Var_259;

          hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(ArgTerms0_818, &ArgTerms1_819);
          succeeded = ((MR_tag((MR_Word) Name_172)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_257 = ((MR_String) ((MR_hl_field(MR_mktag(0), Name_172, (MR_Integer) 0))));
            succeeded = (strcmp(Var_257, (MR_String) "\\=") == 0);
            if (succeeded)
            {
              succeeded = (ArgTerms1_819 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                LHSTerm_173 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms1_819, (MR_Integer) 0))));
                Var_258 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms1_819, (MR_Integer) 1))));
                succeeded = (Var_258 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  RHSTerm_174 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_258, (MR_Integer) 0))));
                  Var_259 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_258, (MR_Integer) 1))));
                  succeeded = (Var_259 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word Var_260;
            MR_Word TransformedGoal_766;

            {
              Var_260 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_260, 0) = ((MR_Box) (Context_813));
              MR_hl_field(MR_mktag(0), Var_260, 1) = ((MR_Box) (LHSTerm_173));
              MR_hl_field(MR_mktag(0), Var_260, 2) = ((MR_Box) (RHSTerm_174));
              MR_hl_field(MR_mktag(0), Var_260, 3) = (MR_Box) ((MR_Unsigned) (Purity_817));
            }
            {
              TransformedGoal_766 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), TransformedGoal_766, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), TransformedGoal_766, 1) = ((MR_Box) (Context_813));
              MR_hl_field(MR_mktag(3), TransformedGoal_766, 2) = ((MR_Box) (Var_260));
            }
            hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, TransformedGoal_766, Renaming_19, HLDSGoal_20, STATE_VARIABLE_SVarState_0_210, &STATE_VARIABLE_SVarState_261_261, STATE_VARIABLE_SVarStore_0_212, STATE_VARIABLE_SVarStore_213, STATE_VARIABLE_VarSet_0_214, STATE_VARIABLE_VarSet_215, STATE_VARIABLE_ModuleInfo_0_216, STATE_VARIABLE_ModuleInfo_217, STATE_VARIABLE_QualInfo_0_218, STATE_VARIABLE_QualInfo_219, STATE_VARIABLE_Specs_0_220, STATE_VARIABLE_Specs_221);
          }
          else
          {
            MR_Word RHSTerm0_176;
            MR_Word Remainder_178;
            MR_Word FieldListContext_179;
            MR_Word StateVarNameTerms_180;
            MR_Word StateVarContext_181;
            MR_Word Var_270;
            MR_Word LHSTerm0_175;
            MR_Word StateVar0_177;
            MR_String Var_267;
            MR_Word Var_268;
            MR_Word Var_269;
            MR_String Var_271;
            MR_Word Var_272;
            MR_Word Var_273;
            MR_Word Var_274;
            MR_Word Var_275;
            MR_String Var_276;
            MR_Word Var_277;
            MR_Word Var_278;

            succeeded = ((MR_tag((MR_Word) Name_172)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_267 = ((MR_String) ((MR_hl_field(MR_mktag(0), Name_172, (MR_Integer) 0))));
              succeeded = (strcmp(Var_267, (MR_String) ":=") == 0);
              if (succeeded)
              {
                succeeded = (ArgTerms1_819 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  LHSTerm0_175 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms1_819, (MR_Integer) 0))));
                  Var_268 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms1_819, (MR_Integer) 1))));
                  succeeded = (Var_268 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    RHSTerm0_176 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_268, (MR_Integer) 0))));
                    Var_269 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_268, (MR_Integer) 1))));
                    succeeded = (Var_269 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) LHSTerm0_175)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        Var_270 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHSTerm0_175, (MR_Integer) 0))));
                        Var_272 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHSTerm0_175, (MR_Integer) 1))));
                        FieldListContext_179 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHSTerm0_175, (MR_Integer) 2))));
                        succeeded = ((MR_tag((MR_Word) Var_270)) == (MR_Integer) 0);
                        if (succeeded)
                        {
                          Var_271 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_270, (MR_Integer) 0))));
                          succeeded = (strcmp(Var_271, (MR_String) "^") == 0);
                          if (succeeded)
                          {
                            succeeded = (Var_272 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              StateVar0_177 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_272, (MR_Integer) 0))));
                              Var_273 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_272, (MR_Integer) 1))));
                              succeeded = (Var_273 != (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                Remainder_178 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_273, (MR_Integer) 0))));
                                Var_274 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_273, (MR_Integer) 1))));
                                succeeded = (Var_274 == (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  succeeded = ((MR_tag((MR_Word) StateVar0_177)) == (MR_Integer) 0);
                                  if (succeeded)
                                  {
                                    Var_275 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StateVar0_177, (MR_Integer) 0))));
                                    StateVarNameTerms_180 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StateVar0_177, (MR_Integer) 1))));
                                    StateVarContext_181 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StateVar0_177, (MR_Integer) 2))));
                                    succeeded = ((MR_tag((MR_Word) Var_275)) == (MR_Integer) 0);
                                    if (succeeded)
                                    {
                                      Var_276 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_275, (MR_Integer) 0))));
                                      succeeded = (strcmp(Var_276, (MR_String) "!") == 0);
                                      if (succeeded)
                                      {
                                        succeeded = (StateVarNameTerms_180 != (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          Var_277 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StateVarNameTerms_180, (MR_Integer) 0))));
                                          Var_278 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StateVarNameTerms_180, (MR_Integer) 1))));
                                          succeeded = ((MR_tag((MR_Word) Var_277)) == (MR_Integer) 1);
                                          if (succeeded)
                                            succeeded = (Var_278 == (MR_Word) ((MR_Unsigned) 0U));
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
              MR_Word StateVar_184;
              MR_Word FieldList_185;
              MR_Word Var_285;
              MR_Word Var_286;
              MR_Word Var_290;
              MR_Word Var_291;
              MR_Word TransformedGoal_767;
              MR_Word LHSTerm_768;
              MR_Word RHSTerm_769;

              {
                LHSTerm_768 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), LHSTerm_768, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[0]));
                MR_hl_field(MR_mktag(0), LHSTerm_768, 1) = ((MR_Box) (StateVarNameTerms_180));
                MR_hl_field(MR_mktag(0), LHSTerm_768, 2) = ((MR_Box) (StateVarContext_181));
              }
              {
                StateVar_184 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), StateVar_184, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[1]));
                MR_hl_field(MR_mktag(0), StateVar_184, 1) = ((MR_Box) (StateVarNameTerms_180));
                MR_hl_field(MR_mktag(0), StateVar_184, 2) = ((MR_Box) (StateVarContext_181));
              }
              {
                Var_286 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_286, 0) = ((MR_Box) (Remainder_178));
                MR_hl_field(MR_mktag(1), Var_286, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_285 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_285, 0) = ((MR_Box) (StateVar_184));
                MR_hl_field(MR_mktag(1), Var_285, 1) = ((MR_Box) (Var_286));
              }
              {
                FieldList_185 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), FieldList_185, 0) = ((MR_Box) (Var_270));
                MR_hl_field(MR_mktag(0), FieldList_185, 1) = ((MR_Box) (Var_285));
                MR_hl_field(MR_mktag(0), FieldList_185, 2) = ((MR_Box) (FieldListContext_179));
              }
              {
                Var_291 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_291, 0) = ((MR_Box) (RHSTerm0_176));
                MR_hl_field(MR_mktag(1), Var_291, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_290 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_290, 0) = ((MR_Box) (FieldList_185));
                MR_hl_field(MR_mktag(1), Var_290, 1) = ((MR_Box) (Var_291));
              }
              {
                RHSTerm_769 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), RHSTerm_769, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[4]));
                MR_hl_field(MR_mktag(0), RHSTerm_769, 1) = ((MR_Box) (Var_290));
                MR_hl_field(MR_mktag(0), RHSTerm_769, 2) = ((MR_Box) (Context_813));
              }
              {
                TransformedGoal_767 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TransformedGoal_767, 0) = ((MR_Box) (Context_813));
                MR_hl_field(MR_mktag(0), TransformedGoal_767, 1) = ((MR_Box) (LHSTerm_768));
                MR_hl_field(MR_mktag(0), TransformedGoal_767, 2) = ((MR_Box) (RHSTerm_769));
                MR_hl_field(MR_mktag(0), TransformedGoal_767, 3) = (MR_Box) ((MR_Unsigned) (Purity_817));
              }
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, TransformedGoal_767, Renaming_19, HLDSGoal_20, STATE_VARIABLE_SVarState_0_210, &STATE_VARIABLE_SVarState_261_261, STATE_VARIABLE_SVarStore_0_212, STATE_VARIABLE_SVarStore_213, STATE_VARIABLE_VarSet_0_214, STATE_VARIABLE_VarSet_215, STATE_VARIABLE_ModuleInfo_0_216, STATE_VARIABLE_ModuleInfo_217, STATE_VARIABLE_QualInfo_0_218, STATE_VARIABLE_QualInfo_219, STATE_VARIABLE_Specs_0_220, STATE_VARIABLE_Specs_221);
            }
            else
            {
              MR_Word AccessType_187;
              MR_String Operator_186;

              succeeded = ((MR_tag((MR_Word) Name_172)) == (MR_Integer) 0);
              if (succeeded)
              {
                Operator_186 = ((MR_String) ((MR_hl_field(MR_mktag(0), Name_172, (MR_Integer) 0))));
                if ((strcmp(Operator_186, (MR_String) ":=") == 0))
                {
                  AccessType_187 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                if ((strcmp(Operator_186, (MR_String) "=^") == 0))
                {
                  AccessType_187 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                else
                  succeeded = MR_FALSE;
              }
              if (succeeded)
              {
                MR_Word ArgTerms_770;

                parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, ArgTerms1_819, &ArgTerms_770);
                hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_p_0(LocKind_17, AccessType_187, ArgTerms_770, Context_813, HLDSGoal_20, STATE_VARIABLE_SVarState_0_210, &STATE_VARIABLE_SVarState_261_261, STATE_VARIABLE_SVarStore_0_212, STATE_VARIABLE_SVarStore_213, STATE_VARIABLE_VarSet_0_214, STATE_VARIABLE_VarSet_215, STATE_VARIABLE_ModuleInfo_0_216, STATE_VARIABLE_ModuleInfo_217, STATE_VARIABLE_QualInfo_0_218, STATE_VARIABLE_QualInfo_219, STATE_VARIABLE_Specs_0_220, STATE_VARIABLE_Specs_221);
              }
              else
              {
                MR_Word STATE_VARIABLE_VarSet_307_307;
                MR_Word STATE_VARIABLE_SVarState_308_308;
                MR_Word STATE_VARIABLE_Specs_309_309;
                MR_Word STATE_VARIABLE_QualInfo_316_316;
                MR_Word Var_317;
                MR_Word GoalExpr_773;
                MR_Word GoalInfo_774;
                MR_Word ArgTerms_775;
                MR_Word HeadVars_776;
                MR_Word HeadVarsArgTerms_777;
                MR_Integer Arity_778;
                MR_Word HLDSGoal0_780;
                MR_Word CallId_781;
                MR_Word PredVar_188;
                MR_Word RealHeadVars_189;
                MR_String Var_860;

                parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, ArgTerms1_819, &ArgTerms_775);
                hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_9_p_0(ArgTerms_775, &HeadVars_776, &HeadVarsArgTerms_777, STATE_VARIABLE_VarSet_0_214, &STATE_VARIABLE_VarSet_307_307, STATE_VARIABLE_SVarState_0_210, &STATE_VARIABLE_SVarState_308_308, STATE_VARIABLE_Specs_0_220, &STATE_VARIABLE_Specs_309_309);
                mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[1]), ArgTerms_775, &Arity_778);
                succeeded = ((MR_tag((MR_Word) Name_172)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_860 = ((MR_String) ((MR_hl_field(MR_mktag(0), Name_172, (MR_Integer) 0))));
                  if ((strcmp(Var_860, (MR_String) "") == 0))
                    succeeded = MR_TRUE;
                  else
                  if ((strcmp(Var_860, (MR_String) "call") == 0))
                    succeeded = MR_TRUE;
                  else
                    succeeded = MR_FALSE;
                  if (succeeded)
                  {
                    succeeded = (HeadVars_776 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      PredVar_188 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVars_776, (MR_Integer) 0))));
                      RealHeadVars_189 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVars_776, (MR_Integer) 1))));
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Word GenericCall_192;
                  MR_Word GenericCallId_193;

                  {
                    GenericCall_192 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), GenericCall_192, 0) = ((MR_Box) (PredVar_188));
                    MR_hl_field(MR_mktag(0), GenericCall_192, 1) = (MR_Box) (((((MR_Unsigned) (Purity_817) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
                    MR_hl_field(MR_mktag(0), GenericCall_192, 2) = ((MR_Box) (Arity_778));
                  }
                  {
                    GoalExpr_773 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), GoalExpr_773, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), GoalExpr_773, 1) = ((MR_Box) (GenericCall_192));
                    MR_hl_field(MR_mktag(3), GoalExpr_773, 2) = ((MR_Box) (RealHeadVars_189));
                    MR_hl_field(MR_mktag(3), GoalExpr_773, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), GoalExpr_773, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), GoalExpr_773, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 6));
                  }
                  hlds__hlds_goal__generic_call_to_id_2_p_0(GenericCall_192, &GenericCallId_193);
                  {
                    CallId_781 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), CallId_781, 0) = ((MR_Box) (GenericCallId_193));
                  }
                }
                else
                {
                  MR_Word PredId_194;
                  MR_Integer ModeId_195;
                  MR_Word SimpleCallId_197;

                  PredId_194 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                  ModeId_195 = hlds__hlds_pred__invalid_proc_id_0_f_0();
                  {
                    GoalExpr_773 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), GoalExpr_773, 0) = ((MR_Box) (PredId_194));
                    MR_hl_field(MR_mktag(2), GoalExpr_773, 1) = ((MR_Box) (ModeId_195));
                    MR_hl_field(MR_mktag(2), GoalExpr_773, 2) = ((MR_Box) (HeadVars_776));
                    MR_hl_field(MR_mktag(2), GoalExpr_773, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(2), GoalExpr_773, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(2), GoalExpr_773, 5) = ((MR_Box) (Name_172));
                  }
                  {
                    SimpleCallId_197 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), SimpleCallId_197, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(0), SimpleCallId_197, 1) = ((MR_Box) (Name_172));
                    MR_hl_field(MR_mktag(0), SimpleCallId_197, 2) = ((MR_Box) (Arity_778));
                  }
                  {
                    CallId_781 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), CallId_781, 0) = ((MR_Box) (SimpleCallId_197));
                  }
                }
                hlds__hlds_goal__goal_info_init_context_purity_3_p_0(Context_813, Purity_817, &GoalInfo_774);
                {
                  HLDSGoal0_780 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), HLDSGoal0_780, 0) = ((MR_Box) (GoalExpr_773));
                  MR_hl_field(MR_mktag(0), HLDSGoal0_780, 1) = ((MR_Box) (GoalInfo_774));
                }
                hlds__make_hlds__qual_info__record_called_pred_or_func_5_p_0((MR_Integer) 0, Name_172, Arity_778, STATE_VARIABLE_QualInfo_0_218, &STATE_VARIABLE_QualInfo_316_316);
                {
                  Var_317 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_317, 0) = ((MR_Box) (CallId_781));
                }
                hlds__make_hlds__superhomogeneous__insert_arg_unifications_17_p_0(HeadVarsArgTerms_777, Context_813, Var_317, HLDSGoal0_780, HLDSGoal_20, STATE_VARIABLE_SVarState_308_308, &STATE_VARIABLE_SVarState_261_261, STATE_VARIABLE_SVarStore_0_212, STATE_VARIABLE_SVarStore_213, STATE_VARIABLE_VarSet_307_307, STATE_VARIABLE_VarSet_215, STATE_VARIABLE_ModuleInfo_0_216, STATE_VARIABLE_ModuleInfo_217, STATE_VARIABLE_QualInfo_316_316, STATE_VARIABLE_QualInfo_219, STATE_VARIABLE_Specs_309_309, STATE_VARIABLE_Specs_221);
              }
            }
          }
          hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(LocKind_17, STATE_VARIABLE_SVarState_261_261, STATE_VARIABLE_SVarState_211);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SubGoalA_145 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_18, (MR_Integer) 1))));
          MR_Word SubGoalB_146 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_18, (MR_Integer) 2))));
          MR_Word HLDSConjunctsCordA_147;
          MR_Word HLDSConjunctsCordAB_148;
          MR_Word HLDSConjuncts_149;
          MR_Word Var_389;
          MR_Word STATE_VARIABLE_SVarState_390_390;
          MR_Word STATE_VARIABLE_SVarStore_391_391;
          MR_Word STATE_VARIABLE_VarSet_392_392;
          MR_Word STATE_VARIABLE_ModuleInfo_393_393;
          MR_Word STATE_VARIABLE_QualInfo_394_394;
          MR_Word STATE_VARIABLE_Specs_395_395;
          MR_Word Context_743 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_18, (MR_Integer) 0))));
          MR_Word GoalInfo_744;

          Var_389 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
          hlds__make_hlds__goal_expr_to_goal__accumulate_plain_conjuncts_17_p_0(LocKind_17, SubGoalA_145, Renaming_19, Var_389, &HLDSConjunctsCordA_147, STATE_VARIABLE_SVarState_0_210, &STATE_VARIABLE_SVarState_390_390, STATE_VARIABLE_SVarStore_0_212, &STATE_VARIABLE_SVarStore_391_391, STATE_VARIABLE_VarSet_0_214, &STATE_VARIABLE_VarSet_392_392, STATE_VARIABLE_ModuleInfo_0_216, &STATE_VARIABLE_ModuleInfo_393_393, STATE_VARIABLE_QualInfo_0_218, &STATE_VARIABLE_QualInfo_394_394, STATE_VARIABLE_Specs_0_220, &STATE_VARIABLE_Specs_395_395);
          hlds__make_hlds__goal_expr_to_goal__accumulate_plain_conjuncts_17_p_0(LocKind_17, SubGoalB_146, Renaming_19, HLDSConjunctsCordA_147, &HLDSConjunctsCordAB_148, STATE_VARIABLE_SVarState_390_390, STATE_VARIABLE_SVarState_211, STATE_VARIABLE_SVarStore_391_391, STATE_VARIABLE_SVarStore_213, STATE_VARIABLE_VarSet_392_392, STATE_VARIABLE_VarSet_215, STATE_VARIABLE_ModuleInfo_393_393, STATE_VARIABLE_ModuleInfo_217, STATE_VARIABLE_QualInfo_394_394, STATE_VARIABLE_QualInfo_219, STATE_VARIABLE_Specs_395_395, STATE_VARIABLE_Specs_221);
          HLDSConjuncts_149 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HLDSConjunctsCordAB_148);
          hlds__hlds_goal__goal_info_init_2_p_0(Context_743, &GoalInfo_744);
          hlds__hlds_goal__conj_list_to_goal_3_p_0(HLDSConjuncts_149, GoalInfo_744, HLDSGoal_20);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Context_857 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalInfo_859;

              hlds__hlds_goal__goal_info_init_2_p_0(Context_857, &GoalInfo_859);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_5[0])));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_859));
              }
              *STATE_VARIABLE_SVarState_211 = STATE_VARIABLE_SVarState_0_210;
              *STATE_VARIABLE_SVarStore_213 = STATE_VARIABLE_SVarStore_0_212;
              *STATE_VARIABLE_VarSet_215 = STATE_VARIABLE_VarSet_0_214;
              *STATE_VARIABLE_ModuleInfo_217 = STATE_VARIABLE_ModuleInfo_0_216;
              *STATE_VARIABLE_QualInfo_219 = STATE_VARIABLE_QualInfo_0_218;
              *STATE_VARIABLE_Specs_221 = STATE_VARIABLE_Specs_0_220;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word StateVars0_129 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word Cond_130 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word Then_131 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 5))));
              MR_Word Else_132 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 6))));
              MR_Word BeforeCondSVarState_133;
              MR_Word HLDSCond_134;
              MR_Word AfterCondSVarState_135;
              MR_Word HLDSThen0_136;
              MR_Word AfterThenSVarState0_137;
              MR_Word AfterThenSVarState_138;
              MR_Word HLDSElse0_139;
              MR_Word AfterElseSVarState_140;
              MR_Word HLDSThen_141;
              MR_Word HLDSElse_142;
              MR_Word STATE_VARIABLE_Specs_410_410;
              MR_Word STATE_VARIABLE_SVarStore_411_411;
              MR_Word STATE_VARIABLE_VarSet_412_412;
              MR_Word STATE_VARIABLE_ModuleInfo_413_413;
              MR_Word STATE_VARIABLE_QualInfo_414_414;
              MR_Word STATE_VARIABLE_Specs_415_415;
              MR_Word STATE_VARIABLE_SVarStore_416_416;
              MR_Word STATE_VARIABLE_VarSet_417_417;
              MR_Word STATE_VARIABLE_ModuleInfo_418_418;
              MR_Word STATE_VARIABLE_QualInfo_419_419;
              MR_Word STATE_VARIABLE_Specs_420_420;
              MR_Word STATE_VARIABLE_SVarStore_421_421;
              MR_Word STATE_VARIABLE_VarSet_422_422;
              MR_Word STATE_VARIABLE_Specs_425_425;
              MR_Word Context_731 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_732;
              MR_Word GoalInfo_733;
              MR_Word Vars0_734 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word Vars_735;
              MR_Word StateVars_736;

              parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, Vars0_734, &Vars_735);
              parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, StateVars0_129, &StateVars_736);
              hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(Context_731, STATE_VARIABLE_VarSet_0_214, StateVars_736, STATE_VARIABLE_SVarState_0_210, &BeforeCondSVarState_133, STATE_VARIABLE_Specs_0_220, &STATE_VARIABLE_Specs_410_410);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Cond_130, Renaming_19, &HLDSCond_134, BeforeCondSVarState_133, &AfterCondSVarState_135, STATE_VARIABLE_SVarStore_0_212, &STATE_VARIABLE_SVarStore_411_411, STATE_VARIABLE_VarSet_0_214, &STATE_VARIABLE_VarSet_412_412, STATE_VARIABLE_ModuleInfo_0_216, &STATE_VARIABLE_ModuleInfo_413_413, STATE_VARIABLE_QualInfo_0_218, &STATE_VARIABLE_QualInfo_414_414, STATE_VARIABLE_Specs_410_410, &STATE_VARIABLE_Specs_415_415);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Then_131, Renaming_19, &HLDSThen0_136, AfterCondSVarState_135, &AfterThenSVarState0_137, STATE_VARIABLE_SVarStore_411_411, &STATE_VARIABLE_SVarStore_416_416, STATE_VARIABLE_VarSet_412_412, &STATE_VARIABLE_VarSet_417_417, STATE_VARIABLE_ModuleInfo_413_413, &STATE_VARIABLE_ModuleInfo_418_418, STATE_VARIABLE_QualInfo_414_414, &STATE_VARIABLE_QualInfo_419_419, STATE_VARIABLE_Specs_415_415, &STATE_VARIABLE_Specs_420_420);
              hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(StateVars_736, STATE_VARIABLE_SVarState_0_210, AfterThenSVarState0_137, &AfterThenSVarState_138);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Else_132, Renaming_19, &HLDSElse0_139, STATE_VARIABLE_SVarState_0_210, &AfterElseSVarState_140, STATE_VARIABLE_SVarStore_416_416, &STATE_VARIABLE_SVarStore_421_421, STATE_VARIABLE_VarSet_417_417, &STATE_VARIABLE_VarSet_422_422, STATE_VARIABLE_ModuleInfo_418_418, STATE_VARIABLE_ModuleInfo_217, STATE_VARIABLE_QualInfo_419_419, STATE_VARIABLE_QualInfo_219, STATE_VARIABLE_Specs_420_420, &STATE_VARIABLE_Specs_425_425);
              hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0(LocKind_17, Context_731, StateVars_736, HLDSThen0_136, &HLDSThen_141, HLDSElse0_139, &HLDSElse_142, STATE_VARIABLE_SVarState_0_210, AfterCondSVarState_135, AfterThenSVarState_138, AfterElseSVarState_140, STATE_VARIABLE_SVarState_211, STATE_VARIABLE_VarSet_422_422, STATE_VARIABLE_VarSet_215, STATE_VARIABLE_SVarStore_421_421, STATE_VARIABLE_SVarStore_213, STATE_VARIABLE_Specs_425_425, STATE_VARIABLE_Specs_221);
              {
                GoalExpr_732 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_732, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), GoalExpr_732, 1) = ((MR_Box) (Vars_735));
                MR_hl_field(MR_mktag(3), GoalExpr_732, 2) = ((MR_Box) (HLDSCond_134));
                MR_hl_field(MR_mktag(3), GoalExpr_732, 3) = ((MR_Box) (HLDSThen_141));
                MR_hl_field(MR_mktag(3), GoalExpr_732, 4) = ((MR_Box) (HLDSElse_142));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_731, &GoalInfo_733);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_732));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_733));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word DisjunctsSVarStates1_151;
              MR_Word DisjunctsSVarStates_152;
              MR_Word Disjuncts_153;
              MR_Word STATE_VARIABLE_SVarStore_363_363;
              MR_Word STATE_VARIABLE_VarSet_364_364;
              MR_Word STATE_VARIABLE_ModuleInfo_365_365;
              MR_Word STATE_VARIABLE_QualInfo_366_366;
              MR_Word STATE_VARIABLE_Specs_367_367;
              MR_Word STATE_VARIABLE_SVarStore_368_368;
              MR_Word STATE_VARIABLE_VarSet_369_369;
              MR_Word Context_752 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalInfo_753;
              MR_Word SubGoalA_754 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word SubGoalB_755 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));

              hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(LocKind_17, SubGoalB_755, Renaming_19, (MR_Word) ((MR_Unsigned) 0U), &DisjunctsSVarStates1_151, STATE_VARIABLE_SVarState_0_210, STATE_VARIABLE_SVarStore_0_212, &STATE_VARIABLE_SVarStore_363_363, STATE_VARIABLE_VarSet_0_214, &STATE_VARIABLE_VarSet_364_364, STATE_VARIABLE_ModuleInfo_0_216, &STATE_VARIABLE_ModuleInfo_365_365, STATE_VARIABLE_QualInfo_0_218, &STATE_VARIABLE_QualInfo_366_366, STATE_VARIABLE_Specs_0_220, &STATE_VARIABLE_Specs_367_367);
              hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(LocKind_17, SubGoalA_754, Renaming_19, DisjunctsSVarStates1_151, &DisjunctsSVarStates_152, STATE_VARIABLE_SVarState_0_210, STATE_VARIABLE_SVarStore_363_363, &STATE_VARIABLE_SVarStore_368_368, STATE_VARIABLE_VarSet_364_364, &STATE_VARIABLE_VarSet_369_369, STATE_VARIABLE_ModuleInfo_365_365, STATE_VARIABLE_ModuleInfo_217, STATE_VARIABLE_QualInfo_366_366, STATE_VARIABLE_QualInfo_219, STATE_VARIABLE_Specs_367_367, STATE_VARIABLE_Specs_221);
              hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(Context_752, DisjunctsSVarStates_152, &Disjuncts_153, STATE_VARIABLE_VarSet_369_369, STATE_VARIABLE_VarSet_215, STATE_VARIABLE_SVarState_0_210, STATE_VARIABLE_SVarState_211, STATE_VARIABLE_SVarStore_368_368, STATE_VARIABLE_SVarStore_213);
              hlds__hlds_goal__goal_info_init_2_p_0(Context_752, &GoalInfo_753);
              hlds__hlds_goal__disj_list_to_goal_3_p_0(Disjuncts_153, GoalInfo_753, HLDSGoal_20);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Context_738 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_739;
              MR_Word GoalInfo_740;
              MR_Word SubGoal_741 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word HLDSSubGoal_742;
              MR_Word Var_144;

              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_741, Renaming_19, &HLDSSubGoal_742, STATE_VARIABLE_SVarState_0_210, &Var_144, STATE_VARIABLE_SVarStore_0_212, STATE_VARIABLE_SVarStore_213, STATE_VARIABLE_VarSet_0_214, STATE_VARIABLE_VarSet_215, STATE_VARIABLE_ModuleInfo_0_216, STATE_VARIABLE_ModuleInfo_217, STATE_VARIABLE_QualInfo_0_218, STATE_VARIABLE_QualInfo_219, STATE_VARIABLE_Specs_0_220, STATE_VARIABLE_Specs_221);
              *STATE_VARIABLE_SVarState_211 = STATE_VARIABLE_SVarState_0_210;
              GoalExpr_739 = (MR_Word) ((MR_Word) (HLDSSubGoal_742));
              hlds__hlds_goal__goal_info_init_2_p_0(Context_738, &GoalInfo_740);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_739));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_740));
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
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[34])));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_29));
              }
              *STATE_VARIABLE_SVarState_211 = STATE_VARIABLE_SVarState_0_210;
              *STATE_VARIABLE_SVarStore_213 = STATE_VARIABLE_SVarStore_0_212;
              *STATE_VARIABLE_VarSet_215 = STATE_VARIABLE_VarSet_0_214;
              *STATE_VARIABLE_ModuleInfo_217 = STATE_VARIABLE_ModuleInfo_0_216;
              *STATE_VARIABLE_QualInfo_219 = STATE_VARIABLE_QualInfo_0_218;
              *STATE_VARIABLE_Specs_221 = STATE_VARIABLE_Specs_0_220;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Var_376;
              MR_Word STATE_VARIABLE_SVarState_377_377;
              MR_Word STATE_VARIABLE_SVarStore_378_378;
              MR_Word STATE_VARIABLE_VarSet_379_379;
              MR_Word STATE_VARIABLE_ModuleInfo_380_380;
              MR_Word STATE_VARIABLE_QualInfo_381_381;
              MR_Word STATE_VARIABLE_Specs_382_382;
              MR_Word Context_745 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalInfo_746;
              MR_Word SubGoalA_747 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word SubGoalB_748 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word HLDSConjunctsCordA_749;
              MR_Word HLDSConjunctsCordAB_750;
              MR_Word HLDSConjuncts_751;

              Var_376 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
              hlds__make_hlds__goal_expr_to_goal__accumulate_par_conjuncts_17_p_0(LocKind_17, SubGoalA_747, Renaming_19, Var_376, &HLDSConjunctsCordA_749, STATE_VARIABLE_SVarState_0_210, &STATE_VARIABLE_SVarState_377_377, STATE_VARIABLE_SVarStore_0_212, &STATE_VARIABLE_SVarStore_378_378, STATE_VARIABLE_VarSet_0_214, &STATE_VARIABLE_VarSet_379_379, STATE_VARIABLE_ModuleInfo_0_216, &STATE_VARIABLE_ModuleInfo_380_380, STATE_VARIABLE_QualInfo_0_218, &STATE_VARIABLE_QualInfo_381_381, STATE_VARIABLE_Specs_0_220, &STATE_VARIABLE_Specs_382_382);
              hlds__make_hlds__goal_expr_to_goal__accumulate_par_conjuncts_17_p_0(LocKind_17, SubGoalB_748, Renaming_19, HLDSConjunctsCordA_749, &HLDSConjunctsCordAB_750, STATE_VARIABLE_SVarState_377_377, STATE_VARIABLE_SVarState_211, STATE_VARIABLE_SVarStore_378_378, STATE_VARIABLE_SVarStore_213, STATE_VARIABLE_VarSet_379_379, STATE_VARIABLE_VarSet_215, STATE_VARIABLE_ModuleInfo_380_380, STATE_VARIABLE_ModuleInfo_217, STATE_VARIABLE_QualInfo_381_381, STATE_VARIABLE_QualInfo_219, STATE_VARIABLE_Specs_382_382, STATE_VARIABLE_Specs_221);
              HLDSConjuncts_751 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HLDSConjunctsCordAB_750);
              hlds__hlds_goal__goal_info_init_2_p_0(Context_745, &GoalInfo_746);
              hlds__hlds_goal__par_conj_list_to_goal_3_p_0(HLDSConjuncts_751, GoalInfo_746, HLDSGoal_20);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word QuantType_30 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              MR_Word VarsKind_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Vars0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word SubGoal_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word Context_643 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));

              switch (QuantType_30) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word TransformedGoal_34;
                    MR_Word Var_627;
                    MR_Word Var_629;
                    MR_Word next_value_of_Goal_18;

                    {
                      Var_629 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_629, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                      MR_hl_field(MR_mktag(3), Var_629, 1) = ((MR_Box) (Context_643));
                      MR_hl_field(MR_mktag(3), Var_629, 2) = ((MR_Box) (SubGoal_33));
                    }
                    {
                      Var_627 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_627, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), Var_627, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) (VarsKind_31)));
                      MR_hl_field(MR_mktag(3), Var_627, 2) = ((MR_Box) (Context_643));
                      MR_hl_field(MR_mktag(3), Var_627, 3) = ((MR_Box) (Vars0_32));
                      MR_hl_field(MR_mktag(3), Var_627, 4) = ((MR_Box) (Var_629));
                    }
                    {
                      TransformedGoal_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), TransformedGoal_34, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                      MR_hl_field(MR_mktag(3), TransformedGoal_34, 1) = ((MR_Box) (Context_643));
                      MR_hl_field(MR_mktag(3), TransformedGoal_34, 2) = ((MR_Box) (Var_627));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_Goal_18 = TransformedGoal_34;
                    Goal_18 = next_value_of_Goal_18;
                    continue;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word Vars_35;
                    MR_Word HLDSSubGoal_36;
                    MR_Word Reason_37;
                    MR_Word GoalExpr_639;
                    MR_Word GoalInfo_640;

                    parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, Vars0_32, &Vars_35);
                    switch (VarsKind_31) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_33, Renaming_19, &HLDSSubGoal_36, STATE_VARIABLE_SVarState_0_210, STATE_VARIABLE_SVarState_211, STATE_VARIABLE_SVarStore_0_212, STATE_VARIABLE_SVarStore_213, STATE_VARIABLE_VarSet_0_214, STATE_VARIABLE_VarSet_215, STATE_VARIABLE_ModuleInfo_0_216, STATE_VARIABLE_ModuleInfo_217, STATE_VARIABLE_QualInfo_0_218, STATE_VARIABLE_QualInfo_219, STATE_VARIABLE_Specs_0_220, STATE_VARIABLE_Specs_221);
                          {
                            Reason_37 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Reason_37, 0) = ((MR_Box) (Vars_35));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word BeforeInsideSVarState_40;
                          MR_Word AfterInsideSVarState_41;
                          MR_Word STATE_VARIABLE_Specs_613_613;

                          hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(Context_643, STATE_VARIABLE_VarSet_0_214, Vars_35, STATE_VARIABLE_SVarState_0_210, &BeforeInsideSVarState_40, STATE_VARIABLE_Specs_0_220, &STATE_VARIABLE_Specs_613_613);
                          hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_33, Renaming_19, &HLDSSubGoal_36, BeforeInsideSVarState_40, &AfterInsideSVarState_41, STATE_VARIABLE_SVarStore_0_212, STATE_VARIABLE_SVarStore_213, STATE_VARIABLE_VarSet_0_214, STATE_VARIABLE_VarSet_215, STATE_VARIABLE_ModuleInfo_0_216, STATE_VARIABLE_ModuleInfo_217, STATE_VARIABLE_QualInfo_0_218, STATE_VARIABLE_QualInfo_219, STATE_VARIABLE_Specs_613_613, STATE_VARIABLE_Specs_221);
                          hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(Vars_35, STATE_VARIABLE_SVarState_0_210, AfterInsideSVarState_41, STATE_VARIABLE_SVarState_211);
                          Reason_37 = (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[6]);
                        }
                        break;
                    }
                    {
                      GoalExpr_639 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_639, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(MR_mktag(3), GoalExpr_639, 1) = ((MR_Box) (Reason_37));
                      MR_hl_field(MR_mktag(3), GoalExpr_639, 2) = ((MR_Box) (HLDSSubGoal_36));
                    }
                    hlds__hlds_goal__goal_info_init_2_p_0(Context_643, &GoalInfo_640);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *HLDSGoal_20 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_639));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_640));
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Purity_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))) & (MR_Integer) 3);
              MR_Word Context_646 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_647;
              MR_Word GoalInfo_648;
              MR_Word SubGoal_649 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word HLDSSubGoal_650;
              MR_Word Reason_651;

              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_649, Renaming_19, &HLDSSubGoal_650, STATE_VARIABLE_SVarState_0_210, STATE_VARIABLE_SVarState_211, STATE_VARIABLE_SVarStore_0_212, STATE_VARIABLE_SVarStore_213, STATE_VARIABLE_VarSet_0_214, STATE_VARIABLE_VarSet_215, STATE_VARIABLE_ModuleInfo_0_216, STATE_VARIABLE_ModuleInfo_217, STATE_VARIABLE_QualInfo_0_218, STATE_VARIABLE_QualInfo_219, STATE_VARIABLE_Specs_0_220, STATE_VARIABLE_Specs_221);
              {
                Reason_651 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Reason_651, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Reason_651, 1) = (MR_Box) ((MR_Unsigned) (Purity_43));
              }
              {
                GoalExpr_647 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_647, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_647, 1) = ((MR_Box) (Reason_651));
                MR_hl_field(MR_mktag(3), GoalExpr_647, 2) = ((MR_Box) (HLDSSubGoal_650));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_646, &GoalInfo_648);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_647));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_648));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word DotSVars_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word ColonSVars_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 5))));
              MR_Word PromiseVars_46;
              MR_Word Context_652 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_653;
              MR_Word GoalInfo_654;
              MR_Word SubGoal_655 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 6))));
              MR_Word Vars_656 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word HLDSSubGoal_657;
              MR_Word Reason_658;
              MR_Word StateVars_659 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));

              hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(LocKind_17, Vars_656, StateVars_659, DotSVars_44, ColonSVars_45, Context_652, Renaming_19, &PromiseVars_46, SubGoal_655, &HLDSSubGoal_657, STATE_VARIABLE_SVarState_0_210, STATE_VARIABLE_SVarState_211, STATE_VARIABLE_SVarStore_0_212, STATE_VARIABLE_SVarStore_213, STATE_VARIABLE_VarSet_0_214, STATE_VARIABLE_VarSet_215, STATE_VARIABLE_ModuleInfo_0_216, STATE_VARIABLE_ModuleInfo_217, STATE_VARIABLE_QualInfo_0_218, STATE_VARIABLE_QualInfo_219, STATE_VARIABLE_Specs_0_220, STATE_VARIABLE_Specs_221);
              {
                Reason_658 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Reason_658, 0) = ((MR_Box) (PromiseVars_46));
                MR_hl_field(MR_mktag(2), Reason_658, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              {
                GoalExpr_653 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_653, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_653, 1) = ((MR_Box) (Reason_658));
                MR_hl_field(MR_mktag(3), GoalExpr_653, 2) = ((MR_Box) (HLDSSubGoal_657));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_652, &GoalInfo_654);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_653));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_654));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word Context_660 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_661;
              MR_Word GoalInfo_662;
              MR_Word SubGoal_663 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 6))));
              MR_Word Vars_664 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word HLDSSubGoal_665;
              MR_Word Reason_666;
              MR_Word StateVars_667 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word DotSVars_668 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word ColonSVars_669 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 5))));
              MR_Word PromiseVars_670;

              hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(LocKind_17, Vars_664, StateVars_667, DotSVars_668, ColonSVars_669, Context_660, Renaming_19, &PromiseVars_670, SubGoal_663, &HLDSSubGoal_665, STATE_VARIABLE_SVarState_0_210, STATE_VARIABLE_SVarState_211, STATE_VARIABLE_SVarStore_0_212, STATE_VARIABLE_SVarStore_213, STATE_VARIABLE_VarSet_0_214, STATE_VARIABLE_VarSet_215, STATE_VARIABLE_ModuleInfo_0_216, STATE_VARIABLE_ModuleInfo_217, STATE_VARIABLE_QualInfo_0_218, STATE_VARIABLE_QualInfo_219, STATE_VARIABLE_Specs_0_220, STATE_VARIABLE_Specs_221);
              {
                Reason_666 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Reason_666, 0) = ((MR_Box) (PromiseVars_670));
                MR_hl_field(MR_mktag(2), Reason_666, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              }
              {
                GoalExpr_661 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_661, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_661, 1) = ((MR_Box) (Reason_666));
                MR_hl_field(MR_mktag(3), GoalExpr_661, 2) = ((MR_Box) (HLDSSubGoal_665));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_660, &GoalInfo_662);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_661));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_662));
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Context_671 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_672;
              MR_Word GoalInfo_673;
              MR_Word SubGoal_674 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 6))));
              MR_Word Vars_675 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word HLDSSubGoal_676;
              MR_Word Reason_677;
              MR_Word StateVars_678 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word DotSVars_679 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word ColonSVars_680 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 5))));
              MR_Word PromiseVars_681;

              hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(LocKind_17, Vars_675, StateVars_678, DotSVars_679, ColonSVars_680, Context_671, Renaming_19, &PromiseVars_681, SubGoal_674, &HLDSSubGoal_676, STATE_VARIABLE_SVarState_0_210, STATE_VARIABLE_SVarState_211, STATE_VARIABLE_SVarStore_0_212, STATE_VARIABLE_SVarStore_213, STATE_VARIABLE_VarSet_0_214, STATE_VARIABLE_VarSet_215, STATE_VARIABLE_ModuleInfo_0_216, STATE_VARIABLE_ModuleInfo_217, STATE_VARIABLE_QualInfo_0_218, STATE_VARIABLE_QualInfo_219, STATE_VARIABLE_Specs_0_220, STATE_VARIABLE_Specs_221);
              {
                Reason_677 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Reason_677, 0) = ((MR_Box) (PromiseVars_681));
                MR_hl_field(MR_mktag(2), Reason_677, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
              }
              {
                GoalExpr_672 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_672, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_672, 1) = ((MR_Box) (Reason_677));
                MR_hl_field(MR_mktag(3), GoalExpr_672, 2) = ((MR_Box) (HLDSSubGoal_676));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_671, &GoalInfo_673);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_672));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_673));
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word Detism_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_Word Var_584;
              MR_Word Context_682 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_683;
              MR_Word GoalInfo_684;
              MR_Word SubGoal_685 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word HLDSSubGoal_686;

              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_685, Renaming_19, &HLDSSubGoal_686, STATE_VARIABLE_SVarState_0_210, STATE_VARIABLE_SVarState_211, STATE_VARIABLE_SVarStore_0_212, STATE_VARIABLE_SVarStore_213, STATE_VARIABLE_VarSet_0_214, STATE_VARIABLE_VarSet_215, STATE_VARIABLE_ModuleInfo_0_216, STATE_VARIABLE_ModuleInfo_217, STATE_VARIABLE_QualInfo_0_218, STATE_VARIABLE_QualInfo_219, STATE_VARIABLE_Specs_0_220, STATE_VARIABLE_Specs_221);
              {
                Var_584 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_584, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_584, 1) = (MR_Box) ((MR_Unsigned) (Detism_47));
              }
              {
                GoalExpr_683 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_683, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_683, 1) = ((MR_Box) (Var_584));
                MR_hl_field(MR_mktag(3), GoalExpr_683, 2) = ((MR_Box) (HLDSSubGoal_686));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_682, &GoalInfo_684);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_683));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_684));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word PODVar0_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word Var_56;
              MR_Word STATE_VARIABLE_SVarState_546_546;
              MR_Word STATE_VARIABLE_VarSet_547_547;
              MR_Word STATE_VARIABLE_Specs_548_548;
              MR_Word Var_555;
              MR_Word Context_692 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_693;
              MR_Word GoalInfo_694;
              MR_Word SubGoal_695 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word HLDSSubGoal_696;

              hlds__make_hlds__goal_expr_to_goal__rename_and_maybe_expand_dot_var_11_p_0(Context_692, (MR_Integer) 1, Renaming_19, PODVar0_55, &Var_56, STATE_VARIABLE_SVarState_0_210, &STATE_VARIABLE_SVarState_546_546, STATE_VARIABLE_VarSet_0_214, &STATE_VARIABLE_VarSet_547_547, STATE_VARIABLE_Specs_0_220, &STATE_VARIABLE_Specs_548_548);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_695, Renaming_19, &HLDSSubGoal_696, STATE_VARIABLE_SVarState_546_546, STATE_VARIABLE_SVarState_211, STATE_VARIABLE_SVarStore_0_212, STATE_VARIABLE_SVarStore_213, STATE_VARIABLE_VarSet_547_547, STATE_VARIABLE_VarSet_215, STATE_VARIABLE_ModuleInfo_0_216, STATE_VARIABLE_ModuleInfo_217, STATE_VARIABLE_QualInfo_0_218, STATE_VARIABLE_QualInfo_219, STATE_VARIABLE_Specs_548_548, STATE_VARIABLE_Specs_221);
              {
                Var_555 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_555, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), Var_555, 1) = ((MR_Box) (Var_56));
              }
              {
                GoalExpr_693 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_693, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_693, 1) = ((MR_Box) (Var_555));
                MR_hl_field(MR_mktag(3), GoalExpr_693, 2) = ((MR_Box) (HLDSSubGoal_696));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_692, &GoalInfo_694);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_693));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_694));
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word STATE_VARIABLE_SVarState_535_535;
              MR_Word STATE_VARIABLE_VarSet_536_536;
              MR_Word STATE_VARIABLE_Specs_537_537;
              MR_Word Var_544;
              MR_Word Context_697 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_698;
              MR_Word GoalInfo_699;
              MR_Word SubGoal_700 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word HLDSSubGoal_701;
              MR_Word Detism_702 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))) & (MR_Integer) 7);
              MR_Word PODVar0_703 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word Var_704;

              hlds__make_hlds__goal_expr_to_goal__rename_and_maybe_expand_dot_var_11_p_0(Context_697, (MR_Integer) 1, Renaming_19, PODVar0_703, &Var_704, STATE_VARIABLE_SVarState_0_210, &STATE_VARIABLE_SVarState_535_535, STATE_VARIABLE_VarSet_0_214, &STATE_VARIABLE_VarSet_536_536, STATE_VARIABLE_Specs_0_220, &STATE_VARIABLE_Specs_537_537);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_700, Renaming_19, &HLDSSubGoal_701, STATE_VARIABLE_SVarState_535_535, STATE_VARIABLE_SVarState_211, STATE_VARIABLE_SVarStore_0_212, STATE_VARIABLE_SVarStore_213, STATE_VARIABLE_VarSet_536_536, STATE_VARIABLE_VarSet_215, STATE_VARIABLE_ModuleInfo_0_216, STATE_VARIABLE_ModuleInfo_217, STATE_VARIABLE_QualInfo_0_218, STATE_VARIABLE_QualInfo_219, STATE_VARIABLE_Specs_537_537, STATE_VARIABLE_Specs_221);
              {
                Var_544 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_544, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), Var_544, 1) = ((MR_Box) (Var_704));
                MR_hl_field(MR_mktag(3), Var_544, 2) = (MR_Box) ((MR_Unsigned) (Detism_702));
              }
              {
                GoalExpr_698 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_698, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_698, 1) = ((MR_Box) (Var_544));
                MR_hl_field(MR_mktag(3), GoalExpr_698, 2) = ((MR_Box) (HLDSSubGoal_701));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_697, &GoalInfo_699);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_698));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_699));
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word HeadWarning_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))) & (MR_Integer) 3);
              MR_Word TailWarnings_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word Var_577;
              MR_Word Context_687 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_688;
              MR_Word GoalInfo_689;
              MR_Word SubGoal_690 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word HLDSSubGoal_691;

              succeeded = (HeadWarning_48 == (MR_Integer) 1);
              if (!(succeeded))
                succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), ((MR_Box) ((MR_Integer) 1)), TailWarnings_49);
              if (succeeded)
              {
                MR_Word Globals0_50;
                MR_Word WarnOccursCheck0_51;
                MR_Word Globals1_52;
                MR_Word Globals2_53;
                MR_Word Globals3_54;
                MR_Word STATE_VARIABLE_ModuleInfo_561_561;
                MR_Word STATE_VARIABLE_ModuleInfo_565_565;
                MR_Word Var_569;

                hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_216, &Globals0_50);
                libs__globals__lookup_bool_option_3_p_0(Globals0_50, (MR_Integer) 58, &WarnOccursCheck0_51);
                libs__globals__set_option_4_p_0((MR_Integer) 58, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_2[5])), Globals0_50, &Globals1_52);
                hlds__hlds_module__module_info_set_globals_3_p_0(Globals1_52, STATE_VARIABLE_ModuleInfo_0_216, &STATE_VARIABLE_ModuleInfo_561_561);
                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_690, Renaming_19, &HLDSSubGoal_691, STATE_VARIABLE_SVarState_0_210, STATE_VARIABLE_SVarState_211, STATE_VARIABLE_SVarStore_0_212, STATE_VARIABLE_SVarStore_213, STATE_VARIABLE_VarSet_0_214, STATE_VARIABLE_VarSet_215, STATE_VARIABLE_ModuleInfo_561_561, &STATE_VARIABLE_ModuleInfo_565_565, STATE_VARIABLE_QualInfo_0_218, STATE_VARIABLE_QualInfo_219, STATE_VARIABLE_Specs_0_220, STATE_VARIABLE_Specs_221);
                hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_565_565, &Globals2_53);
                {
                  Var_569 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_569, 0) = (MR_Box) ((MR_Unsigned) (WarnOccursCheck0_51));
                }
                libs__globals__set_option_4_p_0((MR_Integer) 58, Var_569, Globals2_53, &Globals3_54);
                hlds__hlds_module__module_info_set_globals_3_p_0(Globals3_54, STATE_VARIABLE_ModuleInfo_565_565, STATE_VARIABLE_ModuleInfo_217);
              }
              else
                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_690, Renaming_19, &HLDSSubGoal_691, STATE_VARIABLE_SVarState_0_210, STATE_VARIABLE_SVarState_211, STATE_VARIABLE_SVarStore_0_212, STATE_VARIABLE_SVarStore_213, STATE_VARIABLE_VarSet_0_214, STATE_VARIABLE_VarSet_215, STATE_VARIABLE_ModuleInfo_0_216, STATE_VARIABLE_ModuleInfo_217, STATE_VARIABLE_QualInfo_0_218, STATE_VARIABLE_QualInfo_219, STATE_VARIABLE_Specs_0_220, STATE_VARIABLE_Specs_221);
              {
                Var_577 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_577, 0) = (MR_Box) ((MR_Unsigned) (HeadWarning_48));
                MR_hl_field(MR_mktag(1), Var_577, 1) = ((MR_Box) (TailWarnings_49));
              }
              {
                GoalExpr_688 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_688, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_688, 1) = ((MR_Box) (Var_577));
                MR_hl_field(MR_mktag(3), GoalExpr_688, 2) = ((MR_Box) (HLDSSubGoal_691));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_687, &GoalInfo_689);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_688));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_689));
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word MaybeCompileTime_101 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word MaybeRunTime_102 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word MaybeIO0_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word Mutables0_104 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 5))));
              MR_Word SubGoal0_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 6))));
              MR_Word MutableHLDSs_106;
              MR_Word MutableStateVars_107;
              MR_Word MutableGetGoals_108;
              MR_Word MutableSetGoals_109;
              MR_Word MaybeIOHLDS_115;
              MR_Word GetGoals_116;
              MR_Word SetGoals_117;
              MR_Word SubGoal1_118;
              MR_Word Var_474;
              MR_Word Var_475;
              MR_Word Var_476;
              MR_Word Var_477;
              MR_Word STATE_VARIABLE_Specs_479_479;
              MR_Word STATE_VARIABLE_QualInfo_483_483;
              MR_Word Context_712 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_713;
              MR_Word GoalInfo_714;
              MR_Word HLDSSubGoal_715;
              MR_Word Reason_716;
              MR_Word StateVars_717;
              MR_Word BeforeInsideSVarState_718;
              MR_Word AfterInsideSVarState_719;

              {
                Var_474 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_474, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), Var_474, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_1));
                MR_hl_field(MR_mktag(0), Var_474, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_474, 3) = ((MR_Box) (Context_712));
                MR_hl_field(MR_mktag(0), Var_474, 4) = ((MR_Box) (STATE_VARIABLE_VarSet_0_214));
                MR_hl_field(MR_mktag(0), Var_474, 5) = ((MR_Box) (Renaming_19));
              }
              mercury__list__map4_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), Var_474, Mutables0_104, &MutableHLDSs_106, &MutableStateVars_107, &MutableGetGoals_108, &MutableSetGoals_109);
              if ((MaybeIO0_103 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MaybeIOHLDS_115 = (MR_Word) ((MR_Unsigned) 0U);
                StateVars_717 = MutableStateVars_107;
                GetGoals_116 = MutableGetGoals_108;
                SetGoals_117 = MutableSetGoals_109;
              }
              else
              {
                MR_Word IOStateVar0_110 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIO0_103, (MR_Integer) 0))));
                MR_Word IOStateVar_111;
                MR_String IOStateVarName_112;
                MR_Word IOGetGoal_113;
                MR_Word IOSetGoal_114;

                hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_8_p_0(Context_712, STATE_VARIABLE_VarSet_0_214, Renaming_19, IOStateVar0_110, &IOStateVar_111, &IOStateVarName_112, &IOGetGoal_113, &IOSetGoal_114);
                {
                  MaybeIOHLDS_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MaybeIOHLDS_115, 0) = ((MR_Box) (IOStateVarName_112));
                }
                {
                  StateVars_717 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), StateVars_717, 0) = ((MR_Box) (IOStateVar_111));
                  MR_hl_field(MR_mktag(1), StateVars_717, 1) = ((MR_Box) (MutableStateVars_107));
                }
                {
                  GetGoals_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), GetGoals_116, 0) = ((MR_Box) (IOGetGoal_113));
                  MR_hl_field(MR_mktag(1), GetGoals_116, 1) = ((MR_Box) (MutableGetGoals_108));
                }
                {
                  SetGoals_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), SetGoals_117, 0) = ((MR_Box) (IOSetGoal_114));
                  MR_hl_field(MR_mktag(1), SetGoals_117, 1) = ((MR_Box) (MutableSetGoals_109));
                }
              }
              {
                Var_477 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_477, 0) = ((MR_Box) (SubGoal0_105));
                MR_hl_field(MR_mktag(1), Var_477, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_476 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), Var_477, SetGoals_117);
              Var_475 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), GetGoals_116, Var_476);
              SubGoal1_118 = parse_tree__prog_util__goal_list_to_conj_2_f_0(Context_712, Var_475);
              hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(Context_712, STATE_VARIABLE_VarSet_0_214, StateVars_717, STATE_VARIABLE_SVarState_0_210, &BeforeInsideSVarState_718, STATE_VARIABLE_Specs_0_220, &STATE_VARIABLE_Specs_479_479);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal1_118, Renaming_19, &HLDSSubGoal_715, BeforeInsideSVarState_718, &AfterInsideSVarState_719, STATE_VARIABLE_SVarStore_0_212, STATE_VARIABLE_SVarStore_213, STATE_VARIABLE_VarSet_0_214, STATE_VARIABLE_VarSet_215, STATE_VARIABLE_ModuleInfo_0_216, STATE_VARIABLE_ModuleInfo_217, STATE_VARIABLE_QualInfo_0_218, &STATE_VARIABLE_QualInfo_483_483, STATE_VARIABLE_Specs_479_479, STATE_VARIABLE_Specs_221);
              hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(StateVars_717, STATE_VARIABLE_SVarState_0_210, AfterInsideSVarState_719, STATE_VARIABLE_SVarState_211);
              hlds__make_hlds__qual_info__qual_info_set_found_trace_goal_3_p_0((MR_Integer) 1, STATE_VARIABLE_QualInfo_483_483, STATE_VARIABLE_QualInfo_219);
              {
                Reason_716 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Reason_716, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), Reason_716, 1) = ((MR_Box) (MaybeCompileTime_101));
                MR_hl_field(MR_mktag(3), Reason_716, 2) = ((MR_Box) (MaybeRunTime_102));
                MR_hl_field(MR_mktag(3), Reason_716, 3) = ((MR_Box) (MaybeIOHLDS_115));
                MR_hl_field(MR_mktag(3), Reason_716, 4) = ((MR_Box) (MutableHLDSs_106));
                MR_hl_field(MR_mktag(3), Reason_716, 5) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                GoalExpr_713 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_713, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_713, 1) = ((MR_Box) (Reason_716));
                MR_hl_field(MR_mktag(3), GoalExpr_713, 2) = ((MR_Box) (HLDSSubGoal_715));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_712, &GoalInfo_714);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_713));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_714));
              }
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word Outer0_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word Inner0_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word MaybeOutputVars0_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word MainGoal_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 5))));
              MR_Word OrElseGoals_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 6))));
              MR_Word MaybeOutputVars_62;
              MR_Word Outer_71;
              MR_Word HLDSGoals_86;
              MR_Word HLDSMainGoal_87;
              MR_Word HLDSOrElseGoals_88;
              MR_Word Inner_93;
              MR_Word ShortHand_97;
              MR_Word Context_709 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_710;
              MR_Word GoalInfo_711;

              if ((MaybeOutputVars0_59 == (MR_Word) ((MR_Unsigned) 0U)))
                MaybeOutputVars_62 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word OutputVars0_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOutputVars0_59, (MR_Integer) 0))));
                MR_Word OutputVars_64;

                parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, OutputVars0_63, &OutputVars_64);
                {
                  MaybeOutputVars_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MaybeOutputVars_62, 0) = ((MR_Box) (OutputVars_64));
                }
              }
              if (((MR_tag((MR_Word) Outer0_57)) == (MR_Integer) 0))
              {
                MR_Word OuterStateVar0_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer0_57, (MR_Integer) 0))));
                MR_Word OuterStateVar_66;
                MR_Word OuterDI_67;
                MR_Word OuterUO_68;
                MR_Word OuterScopeInfo2_96;
                MR_Word STATE_VARIABLE_SVarState_493_493;
                MR_Word STATE_VARIABLE_VarSet_494_494;
                MR_Word STATE_VARIABLE_Specs_495_495;
                MR_Word STATE_VARIABLE_SVarState_519_519;

                parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, OuterStateVar0_65, &OuterStateVar_66);
                hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_p_0(Context_709, OuterStateVar_66, &OuterDI_67, &OuterUO_68, &OuterScopeInfo2_96, STATE_VARIABLE_SVarState_0_210, &STATE_VARIABLE_SVarState_493_493, STATE_VARIABLE_VarSet_0_214, &STATE_VARIABLE_VarSet_494_494, STATE_VARIABLE_Specs_0_220, &STATE_VARIABLE_Specs_495_495);
                {
                  Outer_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Outer_71, 0) = ((MR_Box) (OuterDI_67));
                  MR_hl_field(MR_mktag(0), Outer_71, 1) = ((MR_Box) (OuterUO_68));
                }
                if (((MR_tag((MR_Word) Inner0_58)) == (MR_Integer) 0))
                {
                  MR_Word InnerStateVar0_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner0_58, (MR_Integer) 0))));
                  MR_Word InnerStateVar_75;
                  MR_Word BeforeDisjSVarState_80;
                  MR_Word HLDSMainGoal0_81;
                  MR_Word AfterMainSVarState_82;
                  MR_Word MainDisjState_83;
                  MR_Word OrElseDisjStates_84;
                  MR_Word AllDisjStates_85;
                  MR_Word InnerScopeInfo2_90;
                  MR_Word InnerDI_91;
                  MR_Word InnerUO_92;
                  MR_Word STATE_VARIABLE_VarSet_498_498;
                  MR_Word STATE_VARIABLE_Specs_499_499;
                  MR_Word STATE_VARIABLE_SVarStore_500_500;
                  MR_Word STATE_VARIABLE_VarSet_501_501;
                  MR_Word STATE_VARIABLE_ModuleInfo_502_502;
                  MR_Word STATE_VARIABLE_QualInfo_503_503;
                  MR_Word STATE_VARIABLE_Specs_504_504;
                  MR_Word STATE_VARIABLE_SVarStore_505_505;
                  MR_Word STATE_VARIABLE_VarSet_506_506;
                  MR_Word STATE_VARIABLE_Specs_509_509;
                  MR_Word STATE_VARIABLE_VarSet_510_510;
                  MR_Word STATE_VARIABLE_SVarState_511_511;

                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, InnerStateVar0_74, &InnerStateVar_75);
                  hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_p_0(Context_709, InnerStateVar_75, &InnerScopeInfo2_90, STATE_VARIABLE_SVarState_493_493, &BeforeDisjSVarState_80, STATE_VARIABLE_VarSet_494_494, &STATE_VARIABLE_VarSet_498_498, STATE_VARIABLE_Specs_495_495, &STATE_VARIABLE_Specs_499_499);
                  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, MainGoal_60, Renaming_19, &HLDSMainGoal0_81, BeforeDisjSVarState_80, &AfterMainSVarState_82, STATE_VARIABLE_SVarStore_0_212, &STATE_VARIABLE_SVarStore_500_500, STATE_VARIABLE_VarSet_498_498, &STATE_VARIABLE_VarSet_501_501, STATE_VARIABLE_ModuleInfo_0_216, &STATE_VARIABLE_ModuleInfo_502_502, STATE_VARIABLE_QualInfo_0_218, &STATE_VARIABLE_QualInfo_503_503, STATE_VARIABLE_Specs_499_499, &STATE_VARIABLE_Specs_504_504);
                  {
                    MainDisjState_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MainDisjState_83, 0) = ((MR_Box) (HLDSMainGoal0_81));
                    MR_hl_field(MR_mktag(0), MainDisjState_83, 1) = ((MR_Box) (AfterMainSVarState_82));
                  }
                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(LocKind_17, OrElseGoals_61, Renaming_19, &OrElseDisjStates_84, BeforeDisjSVarState_80, STATE_VARIABLE_SVarStore_500_500, &STATE_VARIABLE_SVarStore_505_505, STATE_VARIABLE_VarSet_501_501, &STATE_VARIABLE_VarSet_506_506, STATE_VARIABLE_ModuleInfo_502_502, STATE_VARIABLE_ModuleInfo_217, STATE_VARIABLE_QualInfo_503_503, STATE_VARIABLE_QualInfo_219, STATE_VARIABLE_Specs_504_504, &STATE_VARIABLE_Specs_509_509);
                  {
                    AllDisjStates_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), AllDisjStates_85, 0) = ((MR_Box) (MainDisjState_83));
                    MR_hl_field(MR_mktag(1), AllDisjStates_85, 1) = ((MR_Box) (OrElseDisjStates_84));
                  }
                  hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(Context_709, AllDisjStates_85, &HLDSGoals_86, STATE_VARIABLE_VarSet_506_506, &STATE_VARIABLE_VarSet_510_510, BeforeDisjSVarState_80, &STATE_VARIABLE_SVarState_511_511, STATE_VARIABLE_SVarStore_505_505, STATE_VARIABLE_SVarStore_213);
                  hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_p_0(Context_709, InnerScopeInfo2_90, &InnerDI_91, &InnerUO_92, STATE_VARIABLE_SVarState_511_511, &STATE_VARIABLE_SVarState_519_519, STATE_VARIABLE_VarSet_510_510, STATE_VARIABLE_VarSet_215, STATE_VARIABLE_Specs_509_509, STATE_VARIABLE_Specs_221);
                  {
                    Inner_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Inner_93, 0) = ((MR_Box) (InnerDI_91));
                    MR_hl_field(MR_mktag(0), Inner_93, 1) = ((MR_Box) (InnerUO_92));
                  }
                }
                else
                {
                  MR_Word InnerDI0_94;
                  MR_Word InnerUO0_95;
                  MR_Word InnerDI_707;
                  MR_Word InnerUO_708;
                  MR_Word HLDSMainGoal0_945;
                  MR_Word AfterMainSVarState_946;
                  MR_Word MainDisjState_947;
                  MR_Word OrElseDisjStates_948;
                  MR_Word AllDisjStates_949;
                  MR_Word STATE_VARIABLE_SVarStore_500_952;
                  MR_Word STATE_VARIABLE_VarSet_501_953;
                  MR_Word STATE_VARIABLE_ModuleInfo_502_954;
                  MR_Word STATE_VARIABLE_QualInfo_503_955;
                  MR_Word STATE_VARIABLE_Specs_504_956;
                  MR_Word STATE_VARIABLE_SVarStore_505_957;
                  MR_Word STATE_VARIABLE_VarSet_506_958;

                  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, MainGoal_60, Renaming_19, &HLDSMainGoal0_945, STATE_VARIABLE_SVarState_493_493, &AfterMainSVarState_946, STATE_VARIABLE_SVarStore_0_212, &STATE_VARIABLE_SVarStore_500_952, STATE_VARIABLE_VarSet_494_494, &STATE_VARIABLE_VarSet_501_953, STATE_VARIABLE_ModuleInfo_0_216, &STATE_VARIABLE_ModuleInfo_502_954, STATE_VARIABLE_QualInfo_0_218, &STATE_VARIABLE_QualInfo_503_955, STATE_VARIABLE_Specs_495_495, &STATE_VARIABLE_Specs_504_956);
                  {
                    MainDisjState_947 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MainDisjState_947, 0) = ((MR_Box) (HLDSMainGoal0_945));
                    MR_hl_field(MR_mktag(0), MainDisjState_947, 1) = ((MR_Box) (AfterMainSVarState_946));
                  }
                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(LocKind_17, OrElseGoals_61, Renaming_19, &OrElseDisjStates_948, STATE_VARIABLE_SVarState_493_493, STATE_VARIABLE_SVarStore_500_952, &STATE_VARIABLE_SVarStore_505_957, STATE_VARIABLE_VarSet_501_953, &STATE_VARIABLE_VarSet_506_958, STATE_VARIABLE_ModuleInfo_502_954, STATE_VARIABLE_ModuleInfo_217, STATE_VARIABLE_QualInfo_503_955, STATE_VARIABLE_QualInfo_219, STATE_VARIABLE_Specs_504_956, STATE_VARIABLE_Specs_221);
                  {
                    AllDisjStates_949 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), AllDisjStates_949, 0) = ((MR_Box) (MainDisjState_947));
                    MR_hl_field(MR_mktag(1), AllDisjStates_949, 1) = ((MR_Box) (OrElseDisjStates_948));
                  }
                  hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(Context_709, AllDisjStates_949, &HLDSGoals_86, STATE_VARIABLE_VarSet_506_958, STATE_VARIABLE_VarSet_215, STATE_VARIABLE_SVarState_493_493, &STATE_VARIABLE_SVarState_519_519, STATE_VARIABLE_SVarStore_505_957, STATE_VARIABLE_SVarStore_213);
                  InnerDI0_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Inner0_58, (MR_Integer) 0))));
                  InnerUO0_95 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Inner0_58, (MR_Integer) 1))));
                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, InnerDI0_94, &InnerDI_707);
                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, InnerUO0_95, &InnerUO_708);
                  {
                    Inner_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Inner_93, 0) = ((MR_Box) (InnerDI_707));
                    MR_hl_field(MR_mktag(0), Inner_93, 1) = ((MR_Box) (InnerUO_708));
                  }
                }
                hlds__make_hlds__state_var__svar_finish_outer_atomic_scope_3_p_0(OuterScopeInfo2_96, STATE_VARIABLE_SVarState_519_519, STATE_VARIABLE_SVarState_211);
              }
              else
              {
                MR_Word OuterDI0_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Outer0_57, (MR_Integer) 0))));
                MR_Word OuterUO0_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Outer0_57, (MR_Integer) 1))));
                MR_Word OuterDI_705;
                MR_Word OuterUO_706;

                parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, OuterDI0_72, &OuterDI_705);
                parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, OuterUO0_73, &OuterUO_706);
                {
                  Outer_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Outer_71, 0) = ((MR_Box) (OuterDI_705));
                  MR_hl_field(MR_mktag(0), Outer_71, 1) = ((MR_Box) (OuterUO_706));
                }
                if (((MR_tag((MR_Word) Inner0_58)) == (MR_Integer) 0))
                {
                  MR_Word InnerStateVar0_862 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner0_58, (MR_Integer) 0))));
                  MR_Word InnerStateVar_863;
                  MR_Word InnerScopeInfo2_874;
                  MR_Word InnerDI_875;
                  MR_Word InnerUO_876;
                  MR_Word BeforeDisjSVarState_906;
                  MR_Word HLDSMainGoal0_907;
                  MR_Word AfterMainSVarState_908;
                  MR_Word MainDisjState_909;
                  MR_Word OrElseDisjStates_910;
                  MR_Word AllDisjStates_911;
                  MR_Word STATE_VARIABLE_VarSet_498_921;
                  MR_Word STATE_VARIABLE_Specs_499_922;
                  MR_Word STATE_VARIABLE_SVarStore_500_923;
                  MR_Word STATE_VARIABLE_VarSet_501_924;
                  MR_Word STATE_VARIABLE_ModuleInfo_502_925;
                  MR_Word STATE_VARIABLE_QualInfo_503_926;
                  MR_Word STATE_VARIABLE_Specs_504_927;
                  MR_Word STATE_VARIABLE_SVarStore_505_928;
                  MR_Word STATE_VARIABLE_VarSet_506_929;
                  MR_Word STATE_VARIABLE_Specs_509_930;
                  MR_Word STATE_VARIABLE_VarSet_510_931;
                  MR_Word STATE_VARIABLE_SVarState_511_932;

                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, InnerStateVar0_862, &InnerStateVar_863);
                  hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_p_0(Context_709, InnerStateVar_863, &InnerScopeInfo2_874, STATE_VARIABLE_SVarState_0_210, &BeforeDisjSVarState_906, STATE_VARIABLE_VarSet_0_214, &STATE_VARIABLE_VarSet_498_921, STATE_VARIABLE_Specs_0_220, &STATE_VARIABLE_Specs_499_922);
                  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, MainGoal_60, Renaming_19, &HLDSMainGoal0_907, BeforeDisjSVarState_906, &AfterMainSVarState_908, STATE_VARIABLE_SVarStore_0_212, &STATE_VARIABLE_SVarStore_500_923, STATE_VARIABLE_VarSet_498_921, &STATE_VARIABLE_VarSet_501_924, STATE_VARIABLE_ModuleInfo_0_216, &STATE_VARIABLE_ModuleInfo_502_925, STATE_VARIABLE_QualInfo_0_218, &STATE_VARIABLE_QualInfo_503_926, STATE_VARIABLE_Specs_499_922, &STATE_VARIABLE_Specs_504_927);
                  {
                    MainDisjState_909 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MainDisjState_909, 0) = ((MR_Box) (HLDSMainGoal0_907));
                    MR_hl_field(MR_mktag(0), MainDisjState_909, 1) = ((MR_Box) (AfterMainSVarState_908));
                  }
                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(LocKind_17, OrElseGoals_61, Renaming_19, &OrElseDisjStates_910, BeforeDisjSVarState_906, STATE_VARIABLE_SVarStore_500_923, &STATE_VARIABLE_SVarStore_505_928, STATE_VARIABLE_VarSet_501_924, &STATE_VARIABLE_VarSet_506_929, STATE_VARIABLE_ModuleInfo_502_925, STATE_VARIABLE_ModuleInfo_217, STATE_VARIABLE_QualInfo_503_926, STATE_VARIABLE_QualInfo_219, STATE_VARIABLE_Specs_504_927, &STATE_VARIABLE_Specs_509_930);
                  {
                    AllDisjStates_911 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), AllDisjStates_911, 0) = ((MR_Box) (MainDisjState_909));
                    MR_hl_field(MR_mktag(1), AllDisjStates_911, 1) = ((MR_Box) (OrElseDisjStates_910));
                  }
                  hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(Context_709, AllDisjStates_911, &HLDSGoals_86, STATE_VARIABLE_VarSet_506_929, &STATE_VARIABLE_VarSet_510_931, BeforeDisjSVarState_906, &STATE_VARIABLE_SVarState_511_932, STATE_VARIABLE_SVarStore_505_928, STATE_VARIABLE_SVarStore_213);
                  hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_p_0(Context_709, InnerScopeInfo2_874, &InnerDI_875, &InnerUO_876, STATE_VARIABLE_SVarState_511_932, STATE_VARIABLE_SVarState_211, STATE_VARIABLE_VarSet_510_931, STATE_VARIABLE_VarSet_215, STATE_VARIABLE_Specs_509_930, STATE_VARIABLE_Specs_221);
                  {
                    Inner_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Inner_93, 0) = ((MR_Box) (InnerDI_875));
                    MR_hl_field(MR_mktag(0), Inner_93, 1) = ((MR_Box) (InnerUO_876));
                  }
                }
                else
                {
                  MR_Word InnerDI0_882;
                  MR_Word InnerUO0_883;
                  MR_Word InnerDI_886;
                  MR_Word InnerUO_887;
                  MR_Word HLDSMainGoal0_965;
                  MR_Word AfterMainSVarState_966;
                  MR_Word MainDisjState_967;
                  MR_Word OrElseDisjStates_968;
                  MR_Word AllDisjStates_969;
                  MR_Word STATE_VARIABLE_SVarStore_500_972;
                  MR_Word STATE_VARIABLE_VarSet_501_973;
                  MR_Word STATE_VARIABLE_ModuleInfo_502_974;
                  MR_Word STATE_VARIABLE_QualInfo_503_975;
                  MR_Word STATE_VARIABLE_Specs_504_976;
                  MR_Word STATE_VARIABLE_SVarStore_505_977;
                  MR_Word STATE_VARIABLE_VarSet_506_978;

                  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, MainGoal_60, Renaming_19, &HLDSMainGoal0_965, STATE_VARIABLE_SVarState_0_210, &AfterMainSVarState_966, STATE_VARIABLE_SVarStore_0_212, &STATE_VARIABLE_SVarStore_500_972, STATE_VARIABLE_VarSet_0_214, &STATE_VARIABLE_VarSet_501_973, STATE_VARIABLE_ModuleInfo_0_216, &STATE_VARIABLE_ModuleInfo_502_974, STATE_VARIABLE_QualInfo_0_218, &STATE_VARIABLE_QualInfo_503_975, STATE_VARIABLE_Specs_0_220, &STATE_VARIABLE_Specs_504_976);
                  {
                    MainDisjState_967 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MainDisjState_967, 0) = ((MR_Box) (HLDSMainGoal0_965));
                    MR_hl_field(MR_mktag(0), MainDisjState_967, 1) = ((MR_Box) (AfterMainSVarState_966));
                  }
                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(LocKind_17, OrElseGoals_61, Renaming_19, &OrElseDisjStates_968, STATE_VARIABLE_SVarState_0_210, STATE_VARIABLE_SVarStore_500_972, &STATE_VARIABLE_SVarStore_505_977, STATE_VARIABLE_VarSet_501_973, &STATE_VARIABLE_VarSet_506_978, STATE_VARIABLE_ModuleInfo_502_974, STATE_VARIABLE_ModuleInfo_217, STATE_VARIABLE_QualInfo_503_975, STATE_VARIABLE_QualInfo_219, STATE_VARIABLE_Specs_504_976, STATE_VARIABLE_Specs_221);
                  {
                    AllDisjStates_969 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), AllDisjStates_969, 0) = ((MR_Box) (MainDisjState_967));
                    MR_hl_field(MR_mktag(1), AllDisjStates_969, 1) = ((MR_Box) (OrElseDisjStates_968));
                  }
                  hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(Context_709, AllDisjStates_969, &HLDSGoals_86, STATE_VARIABLE_VarSet_506_978, STATE_VARIABLE_VarSet_215, STATE_VARIABLE_SVarState_0_210, STATE_VARIABLE_SVarState_211, STATE_VARIABLE_SVarStore_505_977, STATE_VARIABLE_SVarStore_213);
                  InnerDI0_882 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Inner0_58, (MR_Integer) 0))));
                  InnerUO0_883 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Inner0_58, (MR_Integer) 1))));
                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, InnerDI0_882, &InnerDI_886);
                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, InnerUO0_883, &InnerUO_887);
                  {
                    Inner_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Inner_93, 0) = ((MR_Box) (InnerDI_886));
                    MR_hl_field(MR_mktag(0), Inner_93, 1) = ((MR_Box) (InnerUO_887));
                  }
                }
              }
              if ((HLDSGoals_86 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_parse_tree_goal_to_hlds\'/16", (MR_String) "atomic HLDSGoals = []");
                  return;
                }
              else
              {
                HLDSMainGoal_87 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HLDSGoals_86, (MR_Integer) 0))));
                HLDSOrElseGoals_88 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HLDSGoals_86, (MR_Integer) 1))));
              }
              {
                ShortHand_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ShortHand_97, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(1), ShortHand_97, 1) = ((MR_Box) (Outer_71));
                MR_hl_field(MR_mktag(1), ShortHand_97, 2) = ((MR_Box) (Inner_93));
                MR_hl_field(MR_mktag(1), ShortHand_97, 3) = ((MR_Box) (MaybeOutputVars_62));
                MR_hl_field(MR_mktag(1), ShortHand_97, 4) = ((MR_Box) (HLDSMainGoal_87));
                MR_hl_field(MR_mktag(1), ShortHand_97, 5) = ((MR_Box) (HLDSOrElseGoals_88));
                MR_hl_field(MR_mktag(1), ShortHand_97, 6) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                GoalExpr_710 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_710, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), GoalExpr_710, 1) = ((MR_Box) (ShortHand_97));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_709, &GoalInfo_711);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_710));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_711));
              }
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word Then0_121 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word MaybeElse0_122 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 5))));
              MR_Word Catches0_123 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 6))));
              MR_Word MaybeCatchAny0_124 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 7))));
              MR_Word Context_726 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word MaybeIO0_727 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word SubGoal0_728 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));

              if ((MaybeIO0_727 == (MR_Word) ((MR_Unsigned) 0U)))
                hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_p_0(LocKind_17, SubGoal0_728, Then0_121, MaybeElse0_122, Catches0_123, MaybeCatchAny0_124, Context_726, Renaming_19, HLDSGoal_20, STATE_VARIABLE_SVarState_0_210, STATE_VARIABLE_SVarState_211, STATE_VARIABLE_SVarStore_0_212, STATE_VARIABLE_SVarStore_213, STATE_VARIABLE_VarSet_0_214, STATE_VARIABLE_VarSet_215, STATE_VARIABLE_ModuleInfo_0_216, STATE_VARIABLE_ModuleInfo_217, STATE_VARIABLE_QualInfo_0_218, STATE_VARIABLE_QualInfo_219, STATE_VARIABLE_Specs_0_220, STATE_VARIABLE_Specs_221);
              else
              {
                MR_Word IOStateVar0_722 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIO0_727, (MR_Integer) 0))));

                if ((MaybeElse0_122 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word IOStateVar_720;

                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, IOStateVar0_722, &IOStateVar_720);
                  hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_p_0(LocKind_17, IOStateVar0_722, IOStateVar_720, SubGoal0_728, Then0_121, Catches0_123, MaybeCatchAny0_124, Context_726, Renaming_19, HLDSGoal_20, STATE_VARIABLE_SVarState_0_210, STATE_VARIABLE_SVarState_211, STATE_VARIABLE_SVarStore_0_212, STATE_VARIABLE_SVarStore_213, STATE_VARIABLE_VarSet_0_214, STATE_VARIABLE_VarSet_215, STATE_VARIABLE_ModuleInfo_0_216, STATE_VARIABLE_ModuleInfo_217, STATE_VARIABLE_QualInfo_0_218, STATE_VARIABLE_QualInfo_219, STATE_VARIABLE_Specs_0_220, STATE_VARIABLE_Specs_221);
                }
                else
                {
                  MR_Word Msg_127;
                  MR_Word Spec_128;
                  MR_Word Var_464;

                  {
                    Msg_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Msg_127, 0) = ((MR_Box) (Context_726));
                    MR_hl_field(MR_mktag(1), Msg_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[35])));
                  }
                  {
                    Var_464 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_464, 0) = ((MR_Box) (Msg_127));
                    MR_hl_field(MR_mktag(1), Var_464, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Spec_128 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Spec_128, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(0), Spec_128, 1) = ((MR_Box) ((MR_Unsigned) 16U));
                    MR_hl_field(MR_mktag(0), Spec_128, 2) = ((MR_Box) (Var_464));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_Specs_221 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_128));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_220));
                  }
                  *HLDSGoal_20 = hlds__make_goal__true_goal_with_context_1_f_0(Context_726);
                  *STATE_VARIABLE_SVarState_211 = STATE_VARIABLE_SVarState_0_210;
                  *STATE_VARIABLE_SVarStore_213 = STATE_VARIABLE_SVarStore_0_212;
                  *STATE_VARIABLE_VarSet_215 = STATE_VARIABLE_VarSet_0_214;
                  *STATE_VARIABLE_ModuleInfo_217 = STATE_VARIABLE_ModuleInfo_0_216;
                  *STATE_VARIABLE_QualInfo_219 = STATE_VARIABLE_QualInfo_0_218;
                }
              }
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word P_155 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word Q_156 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word Var_354;
              MR_Word Var_355;
              MR_Word Context_756 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word TransformedGoal_757;
              MR_Word next_value_of_Goal_18;

              {
                Var_355 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_355, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), Var_355, 1) = ((MR_Box) (Context_756));
                MR_hl_field(MR_mktag(3), Var_355, 2) = ((MR_Box) (Q_156));
              }
              {
                Var_354 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_354, 0) = ((MR_Box) (Context_756));
                MR_hl_field(MR_mktag(2), Var_354, 1) = ((MR_Box) (P_155));
                MR_hl_field(MR_mktag(2), Var_354, 2) = ((MR_Box) (Var_355));
              }
              {
                TransformedGoal_757 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TransformedGoal_757, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), TransformedGoal_757, 1) = ((MR_Box) (Context_756));
                MR_hl_field(MR_mktag(3), TransformedGoal_757, 2) = ((MR_Box) (Var_354));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_18 = TransformedGoal_757;
              Goal_18 = next_value_of_Goal_18;
              continue;
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word HLDSSubGoalA_157;
              MR_Word HLDSSubGoalB_158;
              MR_Word STATE_VARIABLE_SVarState_341_341;
              MR_Word STATE_VARIABLE_SVarStore_342_342;
              MR_Word STATE_VARIABLE_VarSet_343_343;
              MR_Word STATE_VARIABLE_ModuleInfo_344_344;
              MR_Word STATE_VARIABLE_QualInfo_345_345;
              MR_Word STATE_VARIABLE_Specs_346_346;
              MR_Word Var_353;
              MR_Word Context_758 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_759;
              MR_Word GoalInfo_760;
              MR_Word SubGoalA_761 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word SubGoalB_762 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word Var_159;

              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoalA_761, Renaming_19, &HLDSSubGoalA_157, STATE_VARIABLE_SVarState_0_210, &STATE_VARIABLE_SVarState_341_341, STATE_VARIABLE_SVarStore_0_212, &STATE_VARIABLE_SVarStore_342_342, STATE_VARIABLE_VarSet_0_214, &STATE_VARIABLE_VarSet_343_343, STATE_VARIABLE_ModuleInfo_0_216, &STATE_VARIABLE_ModuleInfo_344_344, STATE_VARIABLE_QualInfo_0_218, &STATE_VARIABLE_QualInfo_345_345, STATE_VARIABLE_Specs_0_220, &STATE_VARIABLE_Specs_346_346);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoalB_762, Renaming_19, &HLDSSubGoalB_158, STATE_VARIABLE_SVarState_341_341, &Var_159, STATE_VARIABLE_SVarStore_342_342, STATE_VARIABLE_SVarStore_213, STATE_VARIABLE_VarSet_343_343, STATE_VARIABLE_VarSet_215, STATE_VARIABLE_ModuleInfo_344_344, STATE_VARIABLE_ModuleInfo_217, STATE_VARIABLE_QualInfo_345_345, STATE_VARIABLE_QualInfo_219, STATE_VARIABLE_Specs_346_346, STATE_VARIABLE_Specs_221);
              *STATE_VARIABLE_SVarState_211 = STATE_VARIABLE_SVarState_0_210;
              {
                Var_353 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_353, 0) = ((MR_Box) (HLDSSubGoalA_157));
                MR_hl_field(MR_mktag(0), Var_353, 1) = ((MR_Box) (HLDSSubGoalB_158));
              }
              {
                GoalExpr_759 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_759, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), GoalExpr_759, 1) = ((MR_Box) (Var_353));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_758, &GoalInfo_760);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_759));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_760));
              }
            }
            break;
          case (MR_Integer) 20:
            {
              MR_String EventName_160 = ((MR_String) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word ArgTerms0_161 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word ArgTerms1_162;
              MR_Word ArgTerms_163;
              MR_Word HeadVars_164;
              MR_Word HeadVarsArgTerms_165;
              MR_Integer Arity_166;
              MR_Word Modes_167;
              MR_Word Details_168;
              MR_Word GoalExpr0_169;
              MR_Word HLDSGoal0_170;
              MR_Word CallId_171;
              MR_Word STATE_VARIABLE_VarSet_326_326;
              MR_Word STATE_VARIABLE_SVarState_327_327;
              MR_Word STATE_VARIABLE_Specs_328_328;
              MR_Word Var_329;
              MR_Word Var_332;
              MR_Word Var_333;
              MR_Word STATE_VARIABLE_SVarState_334_334;
              MR_Word Context_764 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalInfo_765;

              hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(ArgTerms0_161, &ArgTerms1_162);
              parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, ArgTerms1_162, &ArgTerms_163);
              hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_9_p_0(ArgTerms_163, &HeadVars_164, &HeadVarsArgTerms_165, STATE_VARIABLE_VarSet_0_214, &STATE_VARIABLE_VarSet_326_326, STATE_VARIABLE_SVarState_0_210, &STATE_VARIABLE_SVarState_327_327, STATE_VARIABLE_Specs_0_220, &STATE_VARIABLE_Specs_328_328);
              mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0]), HeadVars_164, &Arity_166);
              Var_329 = parse_tree__prog_mode__in_mode_0_f_0();
              mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Arity_166, ((MR_Box) (Var_329)), &Modes_167);
              {
                Details_168 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Details_168, 0) = ((MR_Box) (EventName_160));
              }
              {
                GoalExpr0_169 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr0_169, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), GoalExpr0_169, 1) = ((MR_Box) (Details_168));
                MR_hl_field(MR_mktag(3), GoalExpr0_169, 2) = ((MR_Box) (HeadVars_164));
                MR_hl_field(MR_mktag(3), GoalExpr0_169, 3) = ((MR_Box) (Modes_167));
                MR_hl_field(MR_mktag(3), GoalExpr0_169, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), GoalExpr0_169, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_764, &GoalInfo_765);
              {
                HLDSGoal0_170 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), HLDSGoal0_170, 0) = ((MR_Box) (GoalExpr0_169));
                MR_hl_field(MR_mktag(0), HLDSGoal0_170, 1) = ((MR_Box) (GoalInfo_765));
              }
              {
                Var_332 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_332, 0) = ((MR_Box) (EventName_160));
              }
              {
                CallId_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), CallId_171, 0) = ((MR_Box) (Var_332));
              }
              {
                Var_333 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_333, 0) = ((MR_Box) (CallId_171));
              }
              hlds__make_hlds__superhomogeneous__insert_arg_unifications_17_p_0(HeadVarsArgTerms_165, Context_764, Var_333, HLDSGoal0_170, HLDSGoal_20, STATE_VARIABLE_SVarState_327_327, &STATE_VARIABLE_SVarState_334_334, STATE_VARIABLE_SVarStore_0_212, STATE_VARIABLE_SVarStore_213, STATE_VARIABLE_VarSet_326_326, STATE_VARIABLE_VarSet_215, STATE_VARIABLE_ModuleInfo_0_216, STATE_VARIABLE_ModuleInfo_217, STATE_VARIABLE_QualInfo_0_218, STATE_VARIABLE_QualInfo_219, STATE_VARIABLE_Specs_328_328, STATE_VARIABLE_Specs_221);
              hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(LocKind_17, STATE_VARIABLE_SVarState_334_334, STATE_VARIABLE_SVarState_211);
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(
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

        hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(LocKind_17, SubGoalB_30, Renaming_19, DisjStates0_20, &DisjStates1_31, SVarStateBefore_22, STATE_VARIABLE_SVarStore_0_35, &STATE_VARIABLE_SVarStore_45_45, STATE_VARIABLE_VarSet_0_37, &STATE_VARIABLE_VarSet_46_46, STATE_VARIABLE_ModuleInfo_0_39, &STATE_VARIABLE_ModuleInfo_47_47, STATE_VARIABLE_QualInfo_0_41, &STATE_VARIABLE_QualInfo_48_48, STATE_VARIABLE_Specs_0_43, &STATE_VARIABLE_Specs_49_49);
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
      MR_hl_field(MR_mktag(0), NullTupleTerm_41, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[3]));
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
      MR_hl_field(MR_mktag(0), NullTupleTerm_43, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[3]));
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
      MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), Var_108, 1) = ((MR_Box) (Var_111));
      MR_hl_field(MR_mktag(0), Var_108, 2) = ((MR_Box) (Context_30));
    }
    {
      Var_114 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[1]));
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
      MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0_1));
      MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (Context_28));
    }
    mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[2]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), Var_63, StateVars1_40, &OldStateVars_43, ((MR_Box) (STATE_VARIABLE_VarSet_0_51)), &conv6_STATE_VARIABLE_VarSet_64_64, ((MR_Box) (STATE_VARIABLE_SVarState_0_47)), &conv5_STATE_VARIABLE_SVarState_65_65, ((MR_Box) (STATE_VARIABLE_Specs_0_57)), &conv4_STATE_VARIABLE_Specs_66_66);
    STATE_VARIABLE_VarSet_64_64 = ((MR_Word) (conv6_STATE_VARIABLE_VarSet_64_64));
    STATE_VARIABLE_SVarState_65_65 = ((MR_Word) (conv5_STATE_VARIABLE_SVarState_65_65));
    STATE_VARIABLE_Specs_66_66 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_66_66));
    mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[2]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), Var_63, DotSVars1_41, &DotSVars_44, ((MR_Box) (STATE_VARIABLE_VarSet_64_64)), &conv9_STATE_VARIABLE_VarSet_68_68, ((MR_Box) (STATE_VARIABLE_SVarState_65_65)), &conv8_STATE_VARIABLE_SVarState_69_69, ((MR_Box) (STATE_VARIABLE_Specs_66_66)), &conv7_STATE_VARIABLE_Specs_70_70);
    STATE_VARIABLE_VarSet_68_68 = ((MR_Word) (conv9_STATE_VARIABLE_VarSet_68_68));
    STATE_VARIABLE_SVarState_69_69 = ((MR_Word) (conv8_STATE_VARIABLE_SVarState_69_69));
    STATE_VARIABLE_Specs_70_70 = ((MR_Word) (conv7_STATE_VARIABLE_Specs_70_70));
    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_23, Goal_31, Renaming_29, HLDSGoal_32, STATE_VARIABLE_SVarState_69_69, &STATE_VARIABLE_SVarState_71_71, STATE_VARIABLE_SVarStore_0_49, STATE_VARIABLE_SVarStore_50, STATE_VARIABLE_VarSet_68_68, &STATE_VARIABLE_VarSet_73_73, STATE_VARIABLE_ModuleInfo_0_53, STATE_VARIABLE_ModuleInfo_54, STATE_VARIABLE_QualInfo_0_55, STATE_VARIABLE_QualInfo_56, STATE_VARIABLE_Specs_70_70, &STATE_VARIABLE_Specs_76_76);
    mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[2]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), Var_63, StateVars1_40, &NewStateVars_45, ((MR_Box) (STATE_VARIABLE_VarSet_73_73)), &conv12_STATE_VARIABLE_VarSet_78_78, ((MR_Box) (STATE_VARIABLE_SVarState_71_71)), &conv11_STATE_VARIABLE_SVarState_79_79, ((MR_Box) (STATE_VARIABLE_Specs_76_76)), &conv10_STATE_VARIABLE_Specs_80_80);
    STATE_VARIABLE_VarSet_78_78 = ((MR_Word) (conv12_STATE_VARIABLE_VarSet_78_78));
    STATE_VARIABLE_SVarState_79_79 = ((MR_Word) (conv11_STATE_VARIABLE_SVarState_79_79));
    STATE_VARIABLE_Specs_80_80 = ((MR_Word) (conv10_STATE_VARIABLE_Specs_80_80));
    mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[2]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3]), Var_63, ColonSVars1_42, &ColonSVars_46, ((MR_Box) (STATE_VARIABLE_VarSet_78_78)), &conv15_STATE_VARIABLE_VarSet_52, ((MR_Box) (STATE_VARIABLE_SVarState_79_79)), &conv14_STATE_VARIABLE_SVarState_48, ((MR_Box) (STATE_VARIABLE_Specs_80_80)), &conv13_STATE_VARIABLE_Specs_58);
    *STATE_VARIABLE_VarSet_52 = ((MR_Word) (conv15_STATE_VARIABLE_VarSet_52));
    *STATE_VARIABLE_SVarState_48 = ((MR_Word) (conv14_STATE_VARIABLE_SVarState_48));
    *STATE_VARIABLE_Specs_58 = ((MR_Word) (conv13_STATE_VARIABLE_Specs_58));
    Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0]), DotSVars_44, ColonSVars_46);
    Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0]), NewStateVars_45, Var_87);
    Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0]), OldStateVars_43, Var_86);
    *QuantVars_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0]), Vars_39, Var_85);
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
      Context_18 = parse_tree__prog_item__goal_get_context_1_f_0(CatchAnyGoal_17);
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
  MR_Word STATE_VARIABLE_SVarState_0_46,
  MR_Word * STATE_VARIABLE_SVarState_47,
  MR_Word STATE_VARIABLE_SVarStore_0_48,
  MR_Word * STATE_VARIABLE_SVarStore_49,
  MR_Word STATE_VARIABLE_VarSet_0_50,
  MR_Word * STATE_VARIABLE_VarSet_51,
  MR_Word STATE_VARIABLE_ModuleInfo_0_52,
  MR_Word * STATE_VARIABLE_ModuleInfo_53,
  MR_Word STATE_VARIABLE_QualInfo_0_54,
  MR_Word * STATE_VARIABLE_QualInfo_55,
  MR_Word STATE_VARIABLE_Specs_0_56,
  MR_Word * STATE_VARIABLE_Specs_57)
{
  {
    MR_bool succeeded;
    MR_Word GoalInfo_29;
    MR_Word FieldNameTerm_34;
    MR_Word FieldValueTerm_35;
    MR_Word Var_59;
    MR_Word LHSTerm_30;
    MR_Word RHSTerm_31;
    MR_Word Var_58;
    MR_Word Var_60;
    MR_Word Var_61;

    hlds__hlds_goal__goal_info_init_2_p_0(Context_21, &GoalInfo_29);
    succeeded = (ArgTerms0_20 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      LHSTerm_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms0_20, (MR_Integer) 0))));
      Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms0_20, (MR_Integer) 1))));
      succeeded = (Var_58 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        RHSTerm_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_58, (MR_Integer) 0))));
        Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_58, (MR_Integer) 1))));
        succeeded = (Var_59 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_59, (MR_Integer) 1))));
          succeeded = (Var_60 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_60, (MR_Integer) 1))));
            succeeded = (Var_61 == (MR_Word) ((MR_Unsigned) 0U));
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
                    MR_Word Var_62;
                    MR_String Var_63;
                    MR_Word Var_64;
                    MR_Word Var_65;

                    succeeded = ((MR_tag((MR_Word) LHSTerm_30)) == (MR_Integer) 0);
                    if (succeeded)
                    {
                      Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHSTerm_30, (MR_Integer) 0))));
                      Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHSTerm_30, (MR_Integer) 1))));
                      succeeded = ((MR_tag((MR_Word) Var_62)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        Var_63 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 0))));
                        succeeded = (strcmp(Var_63, (MR_String) "^") == 0);
                        if (succeeded)
                        {
                          succeeded = (Var_64 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            FieldNameTerm_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 0))));
                            Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 1))));
                            succeeded = (Var_65 == (MR_Word) ((MR_Unsigned) 0U));
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
      hlds__make_hlds__field_access__parse_field_list_4_p_0(FieldNameTerm_34, STATE_VARIABLE_VarSet_0_50, ContextPieces_38, &MaybeFieldNames_39);
      if (((MR_tag((MR_Word) MaybeFieldNames_39)) == (MR_Integer) 0))
      {
        MR_Word FieldNamesSpecs_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeFieldNames_39, (MR_Integer) 0))));
        MR_Word STATE_VARIABLE_Specs_66_66;

        STATE_VARIABLE_Specs_66_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), FieldNamesSpecs_42, STATE_VARIABLE_Specs_0_56);
        hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_p_0((MR_String) "^", ArgTerms0_20, GoalInfo_29, HLDSGoal_22, STATE_VARIABLE_VarSet_0_50, STATE_VARIABLE_VarSet_51, STATE_VARIABLE_SVarState_0_46, STATE_VARIABLE_SVarState_47, STATE_VARIABLE_Specs_66_66, STATE_VARIABLE_Specs_57);
        hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 1, STATE_VARIABLE_QualInfo_0_54, STATE_VARIABLE_QualInfo_55);
        *STATE_VARIABLE_SVarStore_49 = STATE_VARIABLE_SVarStore_0_48;
        *STATE_VARIABLE_ModuleInfo_53 = STATE_VARIABLE_ModuleInfo_0_52;
      }
      else
      {
        MR_Word FieldNames_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFieldNames_39, (MR_Integer) 0))));
        MR_Word ArgTerms_41;
        MR_Word STATE_VARIABLE_SVarState_76_76;

        {
          ArgTerms_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ArgTerms_41, 0) = ((MR_Box) (FieldValueTerm_35));
          MR_hl_field(MR_mktag(1), ArgTerms_41, 1) = ((MR_Box) (Var_59));
        }
        hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_p_0(AccessType_19, FieldNames_40, ArgTerms_41, Context_21, HLDSGoal_22, STATE_VARIABLE_SVarState_0_46, &STATE_VARIABLE_SVarState_76_76, STATE_VARIABLE_SVarStore_0_48, STATE_VARIABLE_SVarStore_49, STATE_VARIABLE_VarSet_0_50, STATE_VARIABLE_VarSet_51, STATE_VARIABLE_ModuleInfo_0_52, STATE_VARIABLE_ModuleInfo_53, STATE_VARIABLE_QualInfo_0_54, STATE_VARIABLE_QualInfo_55, STATE_VARIABLE_Specs_0_56, STATE_VARIABLE_Specs_57);
        hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(LocKind_18, STATE_VARIABLE_SVarState_76_76, STATE_VARIABLE_SVarState_47);
      }
    }
    else
    {
      MR_Word Msg_44;
      MR_Word Spec_45;
      MR_Word STATE_VARIABLE_Specs_86_86;
      MR_Word Var_111;

      hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_p_0((MR_String) "^", ArgTerms0_20, GoalInfo_29, HLDSGoal_22, STATE_VARIABLE_VarSet_0_50, STATE_VARIABLE_VarSet_51, STATE_VARIABLE_SVarState_0_46, STATE_VARIABLE_SVarState_47, STATE_VARIABLE_Specs_0_56, &STATE_VARIABLE_Specs_86_86);
      hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 1, STATE_VARIABLE_QualInfo_0_54, STATE_VARIABLE_QualInfo_55);
      {
        Msg_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Msg_44, 0) = ((MR_Box) (Context_21));
        MR_hl_field(MR_mktag(1), Msg_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[33])));
      }
      {
        Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Msg_44));
        MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_45 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_45, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), Spec_45, 2) = ((MR_Box) (Var_111));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_57 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_45));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_86_86));
      }
      *STATE_VARIABLE_ModuleInfo_53 = STATE_VARIABLE_ModuleInfo_0_52;
      *STATE_VARIABLE_SVarStore_49 = STATE_VARIABLE_SVarStore_0_48;
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
        ContextPieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[30]));
        break;
      case (MR_Integer) 1:
        ContextPieces_4 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[32]));
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
          MR_Word SimpleCallId_143;
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
            SimpleCallId_143 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SimpleCallId_143, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), SimpleCallId_143, 1) = ((MR_Box) (FuncName_141));
            MR_hl_field(MR_mktag(0), SimpleCallId_143, 2) = ((MR_Box) (FuncArity_142));
          }
          FieldArgNumber_54 = (MR_Integer) 2;
          {
            Var_110 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_110, 0) = ((MR_Box) (SimpleCallId_143));
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
          MR_Word SimpleCallId_61;
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
            SimpleCallId_61 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SimpleCallId_61, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), SimpleCallId_61, 1) = ((MR_Box) (FuncName_59));
            MR_hl_field(MR_mktag(0), SimpleCallId_61, 2) = ((MR_Box) (FuncArity_60));
          }
          OutputTermArgNumber_62 = (MR_Integer) 3;
          {
            Var_126 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_126, 0) = ((MR_Box) (SimpleCallId_61));
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
      MR_hl_field(MR_mktag(0), SetVar_20, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), SetVar_20, 1) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), SetVar_20, 2) = ((MR_Box) (Context_9));
    }
    {
      UseVar_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UseVar_21, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[1]));
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
