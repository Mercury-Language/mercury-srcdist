/*
** Automatically generated from `goal_expr_to_goal.m'
** by the Mercury compiler,
** version rotd-2019-08-20
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
  MR_Word STATE_VARIABLE_VarSet_0_21,
  MR_Word * STATE_VARIABLE_VarSet_22,
  MR_Word STATE_VARIABLE_SVarState_0_23,
  MR_Word * STATE_VARIABLE_SVarState_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

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
  MR_Word STATE_VARIABLE_SVarState_0_55,
  MR_Word * STATE_VARIABLE_SVarState_56,
  MR_Word STATE_VARIABLE_SVarStore_0_57,
  MR_Word * STATE_VARIABLE_SVarStore_58,
  MR_Word STATE_VARIABLE_VarSet_0_59,
  MR_Word * STATE_VARIABLE_VarSet_60,
  MR_Word STATE_VARIABLE_ModuleInfo_0_61,
  MR_Word * STATE_VARIABLE_ModuleInfo_62,
  MR_Word STATE_VARIABLE_QualInfo_0_63,
  MR_Word * STATE_VARIABLE_QualInfo_64,
  MR_Word STATE_VARIABLE_Specs_0_65,
  MR_Word * STATE_VARIABLE_Specs_66);

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

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_2[7][1];

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
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[6])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_2[7][1] = {
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
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 6 */
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
  MR_Word STATE_VARIABLE_SVarState_0_205,
  MR_Word * STATE_VARIABLE_SVarState_206,
  MR_Word STATE_VARIABLE_SVarStore_0_207,
  MR_Word * STATE_VARIABLE_SVarStore_208,
  MR_Word STATE_VARIABLE_VarSet_0_209,
  MR_Word * STATE_VARIABLE_VarSet_210,
  MR_Word STATE_VARIABLE_ModuleInfo_0_211,
  MR_Word * STATE_VARIABLE_ModuleInfo_212,
  MR_Word STATE_VARIABLE_QualInfo_0_213,
  MR_Word * STATE_VARIABLE_QualInfo_214,
  MR_Word STATE_VARIABLE_Specs_0_215,
  MR_Word * STATE_VARIABLE_Specs_216)
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
          MR_Word TermA0_193 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_18, (MR_Integer) 1))));
          MR_Word TermB0_194 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_18, (MR_Integer) 2))));
          MR_Word TermA_195;
          MR_Word TermB_196;
          MR_Word Context_799 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_18, (MR_Integer) 0))));
          MR_Word Purity_800 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Goal_18, (MR_Integer) 3))) & (MR_Integer) 3);
          MR_Word StateVarA_197;
          MR_Word Var_219;
          MR_String Var_220;
          MR_Word Var_221;
          MR_Word Var_222;
          MR_Word Var_223;

          parse_tree__prog_rename__rename_vars_in_term_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, TermA0_193, &TermA_195);
          parse_tree__prog_rename__rename_vars_in_term_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, TermB0_194, &TermB_196);
          succeeded = ((MR_tag((MR_Word) TermA_195)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_219 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermA_195, (MR_Integer) 0))));
            Var_221 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermA_195, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Var_219)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_220 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_219, (MR_Integer) 0))));
              succeeded = (strcmp(Var_220, (MR_String) "!") == 0);
              if (succeeded)
              {
                succeeded = (Var_221 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_222 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_221, (MR_Integer) 0))));
                  Var_223 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_221, (MR_Integer) 1))));
                  succeeded = (Var_223 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) Var_222)) == (MR_Integer) 1);
                    if (succeeded)
                      StateVarA_197 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_222, (MR_Integer) 0))));
                  }
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word STATE_VARIABLE_VarSet_224_224;
            MR_Word STATE_VARIABLE_SVarState_225_225;
            MR_Word STATE_VARIABLE_Specs_226_226;
            MR_Word StateVarB_200;
            MR_Word Var_227;
            MR_String Var_228;
            MR_Word Var_229;
            MR_Word Var_230;
            MR_Word Var_231;

            hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(Context_799, StateVarA_197, STATE_VARIABLE_VarSet_0_209, &STATE_VARIABLE_VarSet_224_224, STATE_VARIABLE_SVarState_0_205, &STATE_VARIABLE_SVarState_225_225, STATE_VARIABLE_Specs_0_215, &STATE_VARIABLE_Specs_226_226);
            succeeded = ((MR_tag((MR_Word) TermB_196)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_227 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermB_196, (MR_Integer) 0))));
              Var_229 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermB_196, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_227)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_228 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_227, (MR_Integer) 0))));
                succeeded = (strcmp(Var_228, (MR_String) "!") == 0);
                if (succeeded)
                {
                  succeeded = (Var_229 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_230 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_229, (MR_Integer) 0))));
                    Var_231 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_229, (MR_Integer) 1))));
                    succeeded = (Var_231 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) Var_230)) == (MR_Integer) 1);
                      if (succeeded)
                        StateVarB_200 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_230, (MR_Integer) 0))));
                    }
                  }
                }
              }
            }
            if (succeeded)
              hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(Context_799, StateVarB_200, STATE_VARIABLE_VarSet_224_224, STATE_VARIABLE_VarSet_210, STATE_VARIABLE_SVarState_225_225, STATE_VARIABLE_SVarState_206, STATE_VARIABLE_Specs_226_226, STATE_VARIABLE_Specs_216);
            else
            {
              *STATE_VARIABLE_Specs_216 = STATE_VARIABLE_Specs_226_226;
              *STATE_VARIABLE_VarSet_210 = STATE_VARIABLE_VarSet_224_224;
              *STATE_VARIABLE_SVarState_206 = STATE_VARIABLE_SVarState_225_225;
            }
            *HLDSGoal_20 = hlds__make_goal__true_goal_with_context_1_f_0(Context_799);
            *STATE_VARIABLE_QualInfo_214 = STATE_VARIABLE_QualInfo_0_213;
            *STATE_VARIABLE_ModuleInfo_212 = STATE_VARIABLE_ModuleInfo_0_211;
            *STATE_VARIABLE_SVarStore_208 = STATE_VARIABLE_SVarStore_0_207;
          }
          else
          {
            MR_Word StateVarB_798;
            MR_Word Var_235;
            MR_String Var_236;
            MR_Word Var_237;
            MR_Word Var_238;
            MR_Word Var_239;

            succeeded = ((MR_tag((MR_Word) TermB_196)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_235 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermB_196, (MR_Integer) 0))));
              Var_237 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermB_196, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_235)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_236 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_235, (MR_Integer) 0))));
                succeeded = (strcmp(Var_236, (MR_String) "!") == 0);
                if (succeeded)
                {
                  succeeded = (Var_237 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_238 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_237, (MR_Integer) 0))));
                    Var_239 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_237, (MR_Integer) 1))));
                    succeeded = (Var_239 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) Var_238)) == (MR_Integer) 1);
                      if (succeeded)
                        StateVarB_798 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_238, (MR_Integer) 0))));
                    }
                  }
                }
              }
            }
            if (succeeded)
            {
              hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(Context_799, StateVarB_798, STATE_VARIABLE_VarSet_0_209, STATE_VARIABLE_VarSet_210, STATE_VARIABLE_SVarState_0_205, STATE_VARIABLE_SVarState_206, STATE_VARIABLE_Specs_0_215, STATE_VARIABLE_Specs_216);
              *HLDSGoal_20 = hlds__make_goal__true_goal_0_f_0();
              *STATE_VARIABLE_QualInfo_214 = STATE_VARIABLE_QualInfo_0_213;
              *STATE_VARIABLE_ModuleInfo_212 = STATE_VARIABLE_ModuleInfo_0_211;
              *STATE_VARIABLE_SVarStore_208 = STATE_VARIABLE_SVarStore_0_207;
            }
            else
            {
              MR_Word STATE_VARIABLE_SVarState_245_245;

              hlds__make_hlds__superhomogeneous__unravel_unification_19_p_0(TermA_195, TermB_196, Context_799, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Purity_800, HLDSGoal_20, STATE_VARIABLE_SVarState_0_205, &STATE_VARIABLE_SVarState_245_245, STATE_VARIABLE_SVarStore_0_207, STATE_VARIABLE_SVarStore_208, STATE_VARIABLE_VarSet_0_209, STATE_VARIABLE_VarSet_210, STATE_VARIABLE_ModuleInfo_0_211, STATE_VARIABLE_ModuleInfo_212, STATE_VARIABLE_QualInfo_0_213, STATE_VARIABLE_QualInfo_214, STATE_VARIABLE_Specs_0_215, STATE_VARIABLE_Specs_216);
              hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(LocKind_17, STATE_VARIABLE_SVarState_245_245, STATE_VARIABLE_SVarState_206);
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Name_166 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal_18, (MR_Integer) 1))));
          MR_Word STATE_VARIABLE_SVarState_256_256;
          MR_Word Context_786 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal_18, (MR_Integer) 0))));
          MR_Word Purity_789 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Goal_18, (MR_Integer) 3))) & (MR_Integer) 3);
          MR_Word ArgTerms0_790 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal_18, (MR_Integer) 2))));
          MR_Word ArgTerms1_791;
          MR_Word LHSTerm_167;
          MR_Word RHSTerm_168;
          MR_String Var_252;
          MR_Word Var_253;
          MR_Word Var_254;

          hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(ArgTerms0_790, &ArgTerms1_791);
          succeeded = ((MR_tag((MR_Word) Name_166)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_252 = ((MR_String) ((MR_hl_field(MR_mktag(0), Name_166, (MR_Integer) 0))));
            succeeded = (strcmp(Var_252, (MR_String) "\\=") == 0);
            if (succeeded)
            {
              succeeded = (ArgTerms1_791 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                LHSTerm_167 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms1_791, (MR_Integer) 0))));
                Var_253 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms1_791, (MR_Integer) 1))));
                succeeded = (Var_253 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  RHSTerm_168 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_253, (MR_Integer) 0))));
                  Var_254 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_253, (MR_Integer) 1))));
                  succeeded = (Var_254 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word Var_255;
            MR_Word TransformedGoal_747;

            {
              Var_255 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_255, 0) = ((MR_Box) (Context_786));
              MR_hl_field(MR_mktag(0), Var_255, 1) = ((MR_Box) (LHSTerm_167));
              MR_hl_field(MR_mktag(0), Var_255, 2) = ((MR_Box) (RHSTerm_168));
              MR_hl_field(MR_mktag(0), Var_255, 3) = (MR_Box) ((MR_Unsigned) (Purity_789));
            }
            {
              TransformedGoal_747 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), TransformedGoal_747, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), TransformedGoal_747, 1) = ((MR_Box) (Context_786));
              MR_hl_field(MR_mktag(3), TransformedGoal_747, 2) = ((MR_Box) (Var_255));
            }
            hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, TransformedGoal_747, Renaming_19, HLDSGoal_20, STATE_VARIABLE_SVarState_0_205, &STATE_VARIABLE_SVarState_256_256, STATE_VARIABLE_SVarStore_0_207, STATE_VARIABLE_SVarStore_208, STATE_VARIABLE_VarSet_0_209, STATE_VARIABLE_VarSet_210, STATE_VARIABLE_ModuleInfo_0_211, STATE_VARIABLE_ModuleInfo_212, STATE_VARIABLE_QualInfo_0_213, STATE_VARIABLE_QualInfo_214, STATE_VARIABLE_Specs_0_215, STATE_VARIABLE_Specs_216);
          }
          else
          {
            MR_Word RHSTerm0_170;
            MR_Word Remainder_172;
            MR_Word FieldListContext_173;
            MR_Word StateVarNameTerms_174;
            MR_Word StateVarContext_175;
            MR_Word Var_265;
            MR_Word LHSTerm0_169;
            MR_Word StateVar0_171;
            MR_String Var_262;
            MR_Word Var_263;
            MR_Word Var_264;
            MR_String Var_266;
            MR_Word Var_267;
            MR_Word Var_268;
            MR_Word Var_269;
            MR_Word Var_270;
            MR_String Var_271;
            MR_Word Var_272;
            MR_Word Var_273;

            succeeded = ((MR_tag((MR_Word) Name_166)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_262 = ((MR_String) ((MR_hl_field(MR_mktag(0), Name_166, (MR_Integer) 0))));
              succeeded = (strcmp(Var_262, (MR_String) ":=") == 0);
              if (succeeded)
              {
                succeeded = (ArgTerms1_791 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  LHSTerm0_169 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms1_791, (MR_Integer) 0))));
                  Var_263 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms1_791, (MR_Integer) 1))));
                  succeeded = (Var_263 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    RHSTerm0_170 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_263, (MR_Integer) 0))));
                    Var_264 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_263, (MR_Integer) 1))));
                    succeeded = (Var_264 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) LHSTerm0_169)) == (MR_Integer) 0);
                      if (succeeded)
                      {
                        Var_265 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHSTerm0_169, (MR_Integer) 0))));
                        Var_267 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHSTerm0_169, (MR_Integer) 1))));
                        FieldListContext_173 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHSTerm0_169, (MR_Integer) 2))));
                        succeeded = ((MR_tag((MR_Word) Var_265)) == (MR_Integer) 0);
                        if (succeeded)
                        {
                          Var_266 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_265, (MR_Integer) 0))));
                          succeeded = (strcmp(Var_266, (MR_String) "^") == 0);
                          if (succeeded)
                          {
                            succeeded = (Var_267 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              StateVar0_171 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_267, (MR_Integer) 0))));
                              Var_268 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_267, (MR_Integer) 1))));
                              succeeded = (Var_268 != (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                Remainder_172 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_268, (MR_Integer) 0))));
                                Var_269 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_268, (MR_Integer) 1))));
                                succeeded = (Var_269 == (MR_Word) ((MR_Unsigned) 0U));
                                if (succeeded)
                                {
                                  succeeded = ((MR_tag((MR_Word) StateVar0_171)) == (MR_Integer) 0);
                                  if (succeeded)
                                  {
                                    Var_270 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StateVar0_171, (MR_Integer) 0))));
                                    StateVarNameTerms_174 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StateVar0_171, (MR_Integer) 1))));
                                    StateVarContext_175 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StateVar0_171, (MR_Integer) 2))));
                                    succeeded = ((MR_tag((MR_Word) Var_270)) == (MR_Integer) 0);
                                    if (succeeded)
                                    {
                                      Var_271 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_270, (MR_Integer) 0))));
                                      succeeded = (strcmp(Var_271, (MR_String) "!") == 0);
                                      if (succeeded)
                                      {
                                        succeeded = (StateVarNameTerms_174 != (MR_Word) ((MR_Unsigned) 0U));
                                        if (succeeded)
                                        {
                                          Var_272 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StateVarNameTerms_174, (MR_Integer) 0))));
                                          Var_273 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StateVarNameTerms_174, (MR_Integer) 1))));
                                          succeeded = ((MR_tag((MR_Word) Var_272)) == (MR_Integer) 1);
                                          if (succeeded)
                                          {
                                            succeeded = (Var_273 == (MR_Word) ((MR_Unsigned) 0U));
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
            }
            if (succeeded)
            {
              MR_Word StateVar_178;
              MR_Word FieldList_179;
              MR_Word Var_280;
              MR_Word Var_281;
              MR_Word Var_285;
              MR_Word Var_286;
              MR_Word TransformedGoal_748;
              MR_Word LHSTerm_749;
              MR_Word RHSTerm_750;

              {
                LHSTerm_749 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), LHSTerm_749, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[0]));
                MR_hl_field(MR_mktag(0), LHSTerm_749, 1) = ((MR_Box) (StateVarNameTerms_174));
                MR_hl_field(MR_mktag(0), LHSTerm_749, 2) = ((MR_Box) (StateVarContext_175));
              }
              {
                StateVar_178 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), StateVar_178, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[1]));
                MR_hl_field(MR_mktag(0), StateVar_178, 1) = ((MR_Box) (StateVarNameTerms_174));
                MR_hl_field(MR_mktag(0), StateVar_178, 2) = ((MR_Box) (StateVarContext_175));
              }
              {
                Var_281 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_281, 0) = ((MR_Box) (Remainder_172));
                MR_hl_field(MR_mktag(1), Var_281, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_280 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_280, 0) = ((MR_Box) (StateVar_178));
                MR_hl_field(MR_mktag(1), Var_280, 1) = ((MR_Box) (Var_281));
              }
              {
                FieldList_179 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), FieldList_179, 0) = ((MR_Box) (Var_265));
                MR_hl_field(MR_mktag(0), FieldList_179, 1) = ((MR_Box) (Var_280));
                MR_hl_field(MR_mktag(0), FieldList_179, 2) = ((MR_Box) (FieldListContext_173));
              }
              {
                Var_286 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_286, 0) = ((MR_Box) (RHSTerm0_170));
                MR_hl_field(MR_mktag(1), Var_286, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_285 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_285, 0) = ((MR_Box) (FieldList_179));
                MR_hl_field(MR_mktag(1), Var_285, 1) = ((MR_Box) (Var_286));
              }
              {
                RHSTerm_750 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), RHSTerm_750, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[4]));
                MR_hl_field(MR_mktag(0), RHSTerm_750, 1) = ((MR_Box) (Var_285));
                MR_hl_field(MR_mktag(0), RHSTerm_750, 2) = ((MR_Box) (Context_786));
              }
              {
                TransformedGoal_748 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TransformedGoal_748, 0) = ((MR_Box) (Context_786));
                MR_hl_field(MR_mktag(0), TransformedGoal_748, 1) = ((MR_Box) (LHSTerm_749));
                MR_hl_field(MR_mktag(0), TransformedGoal_748, 2) = ((MR_Box) (RHSTerm_750));
                MR_hl_field(MR_mktag(0), TransformedGoal_748, 3) = (MR_Box) ((MR_Unsigned) (Purity_789));
              }
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, TransformedGoal_748, Renaming_19, HLDSGoal_20, STATE_VARIABLE_SVarState_0_205, &STATE_VARIABLE_SVarState_256_256, STATE_VARIABLE_SVarStore_0_207, STATE_VARIABLE_SVarStore_208, STATE_VARIABLE_VarSet_0_209, STATE_VARIABLE_VarSet_210, STATE_VARIABLE_ModuleInfo_0_211, STATE_VARIABLE_ModuleInfo_212, STATE_VARIABLE_QualInfo_0_213, STATE_VARIABLE_QualInfo_214, STATE_VARIABLE_Specs_0_215, STATE_VARIABLE_Specs_216);
            }
            else
            {
              MR_Word AccessType_181;
              MR_String Operator_180;

              succeeded = ((MR_tag((MR_Word) Name_166)) == (MR_Integer) 0);
              if (succeeded)
              {
                Operator_180 = ((MR_String) ((MR_hl_field(MR_mktag(0), Name_166, (MR_Integer) 0))));
                if ((strcmp(Operator_180, (MR_String) ":=") == 0))
                {
                  AccessType_181 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                if ((strcmp(Operator_180, (MR_String) "=^") == 0))
                {
                  AccessType_181 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                else
                  succeeded = MR_FALSE;
              }
              if (succeeded)
              {
                MR_Word ArgTerms_751;

                parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, ArgTerms1_791, &ArgTerms_751);
                hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_p_0(LocKind_17, AccessType_181, ArgTerms_751, Context_786, HLDSGoal_20, STATE_VARIABLE_SVarState_0_205, &STATE_VARIABLE_SVarState_256_256, STATE_VARIABLE_SVarStore_0_207, STATE_VARIABLE_SVarStore_208, STATE_VARIABLE_VarSet_0_209, STATE_VARIABLE_VarSet_210, STATE_VARIABLE_ModuleInfo_0_211, STATE_VARIABLE_ModuleInfo_212, STATE_VARIABLE_QualInfo_0_213, STATE_VARIABLE_QualInfo_214, STATE_VARIABLE_Specs_0_215, STATE_VARIABLE_Specs_216);
              }
              else
              {
                MR_Word Call_187;
                MR_Word GoalInfo0_192;
                MR_Word STATE_VARIABLE_VarSet_302_302;
                MR_Word STATE_VARIABLE_SVarState_303_303;
                MR_Word STATE_VARIABLE_Specs_304_304;
                MR_Word STATE_VARIABLE_QualInfo_312_312;
                MR_Word Var_313;
                MR_Word GoalInfo_754;
                MR_Word ArgTerms_755;
                MR_Word HeadVars_756;
                MR_Integer Arity_757;
                MR_Word HLDSGoal0_759;
                MR_Word CallId_760;
                MR_Word PredVar_182;
                MR_Word RealHeadVars_183;
                MR_String Var_830;

                parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, ArgTerms1_791, &ArgTerms_755);
                hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(ArgTerms_755, &HeadVars_756, STATE_VARIABLE_VarSet_0_209, &STATE_VARIABLE_VarSet_302_302, STATE_VARIABLE_SVarState_0_205, &STATE_VARIABLE_SVarState_303_303, STATE_VARIABLE_Specs_0_215, &STATE_VARIABLE_Specs_304_304);
                mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[1]), ArgTerms_755, &Arity_757);
                succeeded = ((MR_tag((MR_Word) Name_166)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_830 = ((MR_String) ((MR_hl_field(MR_mktag(0), Name_166, (MR_Integer) 0))));
                  if ((strcmp(Var_830, (MR_String) "") == 0))
                    succeeded = MR_TRUE;
                  else
                  if ((strcmp(Var_830, (MR_String) "call") == 0))
                    succeeded = MR_TRUE;
                  else
                    succeeded = MR_FALSE;
                  if (succeeded)
                  {
                    succeeded = (HeadVars_756 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      PredVar_182 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVars_756, (MR_Integer) 0))));
                      RealHeadVars_183 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVars_756, (MR_Integer) 1))));
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Word GenericCall_186;
                  MR_Word GenericCallId_188;

                  {
                    GenericCall_186 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), GenericCall_186, 0) = ((MR_Box) (PredVar_182));
                    MR_hl_field(MR_mktag(0), GenericCall_186, 1) = (MR_Box) (((((MR_Unsigned) (Purity_789) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
                    MR_hl_field(MR_mktag(0), GenericCall_186, 2) = ((MR_Box) (Arity_757));
                  }
                  {
                    Call_187 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Call_187, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), Call_187, 1) = ((MR_Box) (GenericCall_186));
                    MR_hl_field(MR_mktag(3), Call_187, 2) = ((MR_Box) (RealHeadVars_183));
                    MR_hl_field(MR_mktag(3), Call_187, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), Call_187, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(3), Call_187, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 6));
                  }
                  hlds__hlds_goal__generic_call_to_id_2_p_0(GenericCall_186, &GenericCallId_188);
                  {
                    CallId_760 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), CallId_760, 0) = ((MR_Box) (GenericCallId_188));
                  }
                }
                else
                {
                  MR_Word PredId_189;
                  MR_Integer ModeId_190;
                  MR_Word Var_309;

                  PredId_189 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                  ModeId_190 = hlds__hlds_pred__invalid_proc_id_0_f_0();
                  {
                    Call_187 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Call_187, 0) = ((MR_Box) (PredId_189));
                    MR_hl_field(MR_mktag(2), Call_187, 1) = ((MR_Box) (ModeId_190));
                    MR_hl_field(MR_mktag(2), Call_187, 2) = ((MR_Box) (HeadVars_756));
                    MR_hl_field(MR_mktag(2), Call_187, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(2), Call_187, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(2), Call_187, 5) = ((MR_Box) (Name_166));
                  }
                  {
                    Var_309 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_309, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(0), Var_309, 1) = ((MR_Box) (Name_166));
                    MR_hl_field(MR_mktag(0), Var_309, 2) = ((MR_Box) (Arity_757));
                  }
                  {
                    CallId_760 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), CallId_760, 0) = ((MR_Box) (Var_309));
                  }
                }
                hlds__hlds_goal__goal_info_init_2_p_0(Context_786, &GoalInfo0_192);
                hlds__hlds_goal__goal_info_set_purity_3_p_0(Purity_789, GoalInfo0_192, &GoalInfo_754);
                {
                  HLDSGoal0_759 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), HLDSGoal0_759, 0) = ((MR_Box) (Call_187));
                  MR_hl_field(MR_mktag(0), HLDSGoal0_759, 1) = ((MR_Box) (GoalInfo_754));
                }
                hlds__make_hlds__qual_info__record_called_pred_or_func_5_p_0((MR_Integer) 0, Name_166, Arity_757, STATE_VARIABLE_QualInfo_0_213, &STATE_VARIABLE_QualInfo_312_312);
                {
                  Var_313 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_313, 0) = ((MR_Box) (CallId_760));
                }
                hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(HeadVars_756, ArgTerms_755, Context_786, Var_313, HLDSGoal0_759, HLDSGoal_20, STATE_VARIABLE_SVarState_303_303, &STATE_VARIABLE_SVarState_256_256, STATE_VARIABLE_SVarStore_0_207, STATE_VARIABLE_SVarStore_208, STATE_VARIABLE_VarSet_302_302, STATE_VARIABLE_VarSet_210, STATE_VARIABLE_ModuleInfo_0_211, STATE_VARIABLE_ModuleInfo_212, STATE_VARIABLE_QualInfo_312_312, STATE_VARIABLE_QualInfo_214, STATE_VARIABLE_Specs_304_304, STATE_VARIABLE_Specs_216);
              }
            }
          }
          hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(LocKind_17, STATE_VARIABLE_SVarState_256_256, STATE_VARIABLE_SVarState_206);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SubGoalA_140 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_18, (MR_Integer) 1))));
          MR_Word SubGoalB_141 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_18, (MR_Integer) 2))));
          MR_Word HLDSConjunctsCordA_142;
          MR_Word HLDSConjunctsCordAB_143;
          MR_Word HLDSConjuncts_144;
          MR_Word Var_385;
          MR_Word STATE_VARIABLE_SVarState_386_386;
          MR_Word STATE_VARIABLE_SVarStore_387_387;
          MR_Word STATE_VARIABLE_VarSet_388_388;
          MR_Word STATE_VARIABLE_ModuleInfo_389_389;
          MR_Word STATE_VARIABLE_QualInfo_390_390;
          MR_Word STATE_VARIABLE_Specs_391_391;
          MR_Word Context_724 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_18, (MR_Integer) 0))));
          MR_Word GoalInfo_725;

          Var_385 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
          hlds__make_hlds__goal_expr_to_goal__accumulate_plain_conjuncts_17_p_0(LocKind_17, SubGoalA_140, Renaming_19, Var_385, &HLDSConjunctsCordA_142, STATE_VARIABLE_SVarState_0_205, &STATE_VARIABLE_SVarState_386_386, STATE_VARIABLE_SVarStore_0_207, &STATE_VARIABLE_SVarStore_387_387, STATE_VARIABLE_VarSet_0_209, &STATE_VARIABLE_VarSet_388_388, STATE_VARIABLE_ModuleInfo_0_211, &STATE_VARIABLE_ModuleInfo_389_389, STATE_VARIABLE_QualInfo_0_213, &STATE_VARIABLE_QualInfo_390_390, STATE_VARIABLE_Specs_0_215, &STATE_VARIABLE_Specs_391_391);
          hlds__make_hlds__goal_expr_to_goal__accumulate_plain_conjuncts_17_p_0(LocKind_17, SubGoalB_141, Renaming_19, HLDSConjunctsCordA_142, &HLDSConjunctsCordAB_143, STATE_VARIABLE_SVarState_386_386, STATE_VARIABLE_SVarState_206, STATE_VARIABLE_SVarStore_387_387, STATE_VARIABLE_SVarStore_208, STATE_VARIABLE_VarSet_388_388, STATE_VARIABLE_VarSet_210, STATE_VARIABLE_ModuleInfo_389_389, STATE_VARIABLE_ModuleInfo_212, STATE_VARIABLE_QualInfo_390_390, STATE_VARIABLE_QualInfo_214, STATE_VARIABLE_Specs_391_391, STATE_VARIABLE_Specs_216);
          HLDSConjuncts_144 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HLDSConjunctsCordAB_143);
          hlds__hlds_goal__goal_info_init_2_p_0(Context_724, &GoalInfo_725);
          hlds__hlds_goal__conj_list_to_goal_3_p_0(HLDSConjuncts_144, GoalInfo_725, HLDSGoal_20);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Context_827 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalInfo_829;

              hlds__hlds_goal__goal_info_init_2_p_0(Context_827, &GoalInfo_829);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_5[0])));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_829));
              }
              *STATE_VARIABLE_SVarState_206 = STATE_VARIABLE_SVarState_0_205;
              *STATE_VARIABLE_SVarStore_208 = STATE_VARIABLE_SVarStore_0_207;
              *STATE_VARIABLE_VarSet_210 = STATE_VARIABLE_VarSet_0_209;
              *STATE_VARIABLE_ModuleInfo_212 = STATE_VARIABLE_ModuleInfo_0_211;
              *STATE_VARIABLE_QualInfo_214 = STATE_VARIABLE_QualInfo_0_213;
              *STATE_VARIABLE_Specs_216 = STATE_VARIABLE_Specs_0_215;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word StateVars0_124 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word Cond_125 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word Then_126 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 5))));
              MR_Word Else_127 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 6))));
              MR_Word BeforeCondSVarState_128;
              MR_Word HLDSCond_129;
              MR_Word AfterCondSVarState_130;
              MR_Word HLDSThen0_131;
              MR_Word AfterThenSVarState0_132;
              MR_Word AfterThenSVarState_133;
              MR_Word HLDSElse0_134;
              MR_Word AfterElseSVarState_135;
              MR_Word HLDSThen_136;
              MR_Word HLDSElse_137;
              MR_Word STATE_VARIABLE_Specs_406_406;
              MR_Word STATE_VARIABLE_SVarStore_407_407;
              MR_Word STATE_VARIABLE_VarSet_408_408;
              MR_Word STATE_VARIABLE_ModuleInfo_409_409;
              MR_Word STATE_VARIABLE_QualInfo_410_410;
              MR_Word STATE_VARIABLE_Specs_411_411;
              MR_Word STATE_VARIABLE_SVarStore_412_412;
              MR_Word STATE_VARIABLE_VarSet_413_413;
              MR_Word STATE_VARIABLE_ModuleInfo_414_414;
              MR_Word STATE_VARIABLE_QualInfo_415_415;
              MR_Word STATE_VARIABLE_Specs_416_416;
              MR_Word STATE_VARIABLE_SVarStore_417_417;
              MR_Word STATE_VARIABLE_VarSet_418_418;
              MR_Word STATE_VARIABLE_Specs_421_421;
              MR_Word Context_712 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_713;
              MR_Word GoalInfo_714;
              MR_Word Vars0_715 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word Vars_716;
              MR_Word StateVars_717;

              parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, Vars0_715, &Vars_716);
              parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, StateVars0_124, &StateVars_717);
              hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(Context_712, STATE_VARIABLE_VarSet_0_209, StateVars_717, STATE_VARIABLE_SVarState_0_205, &BeforeCondSVarState_128, STATE_VARIABLE_Specs_0_215, &STATE_VARIABLE_Specs_406_406);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Cond_125, Renaming_19, &HLDSCond_129, BeforeCondSVarState_128, &AfterCondSVarState_130, STATE_VARIABLE_SVarStore_0_207, &STATE_VARIABLE_SVarStore_407_407, STATE_VARIABLE_VarSet_0_209, &STATE_VARIABLE_VarSet_408_408, STATE_VARIABLE_ModuleInfo_0_211, &STATE_VARIABLE_ModuleInfo_409_409, STATE_VARIABLE_QualInfo_0_213, &STATE_VARIABLE_QualInfo_410_410, STATE_VARIABLE_Specs_406_406, &STATE_VARIABLE_Specs_411_411);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Then_126, Renaming_19, &HLDSThen0_131, AfterCondSVarState_130, &AfterThenSVarState0_132, STATE_VARIABLE_SVarStore_407_407, &STATE_VARIABLE_SVarStore_412_412, STATE_VARIABLE_VarSet_408_408, &STATE_VARIABLE_VarSet_413_413, STATE_VARIABLE_ModuleInfo_409_409, &STATE_VARIABLE_ModuleInfo_414_414, STATE_VARIABLE_QualInfo_410_410, &STATE_VARIABLE_QualInfo_415_415, STATE_VARIABLE_Specs_411_411, &STATE_VARIABLE_Specs_416_416);
              hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(StateVars_717, STATE_VARIABLE_SVarState_0_205, AfterThenSVarState0_132, &AfterThenSVarState_133);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, Else_127, Renaming_19, &HLDSElse0_134, STATE_VARIABLE_SVarState_0_205, &AfterElseSVarState_135, STATE_VARIABLE_SVarStore_412_412, &STATE_VARIABLE_SVarStore_417_417, STATE_VARIABLE_VarSet_413_413, &STATE_VARIABLE_VarSet_418_418, STATE_VARIABLE_ModuleInfo_414_414, STATE_VARIABLE_ModuleInfo_212, STATE_VARIABLE_QualInfo_415_415, STATE_VARIABLE_QualInfo_214, STATE_VARIABLE_Specs_416_416, &STATE_VARIABLE_Specs_421_421);
              hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0(LocKind_17, Context_712, StateVars_717, HLDSThen0_131, &HLDSThen_136, HLDSElse0_134, &HLDSElse_137, STATE_VARIABLE_SVarState_0_205, AfterCondSVarState_130, AfterThenSVarState_133, AfterElseSVarState_135, STATE_VARIABLE_SVarState_206, STATE_VARIABLE_VarSet_418_418, STATE_VARIABLE_VarSet_210, STATE_VARIABLE_SVarStore_417_417, STATE_VARIABLE_SVarStore_208, STATE_VARIABLE_Specs_421_421, STATE_VARIABLE_Specs_216);
              {
                GoalExpr_713 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_713, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), GoalExpr_713, 1) = ((MR_Box) (Vars_716));
                MR_hl_field(MR_mktag(3), GoalExpr_713, 2) = ((MR_Box) (HLDSCond_129));
                MR_hl_field(MR_mktag(3), GoalExpr_713, 3) = ((MR_Box) (HLDSThen_136));
                MR_hl_field(MR_mktag(3), GoalExpr_713, 4) = ((MR_Box) (HLDSElse_137));
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
          case (MR_Integer) 2:
            {
              MR_Word DisjunctsSVarStates1_146;
              MR_Word DisjunctsSVarStates_147;
              MR_Word Disjuncts_148;
              MR_Word STATE_VARIABLE_SVarStore_359_359;
              MR_Word STATE_VARIABLE_VarSet_360_360;
              MR_Word STATE_VARIABLE_ModuleInfo_361_361;
              MR_Word STATE_VARIABLE_QualInfo_362_362;
              MR_Word STATE_VARIABLE_Specs_363_363;
              MR_Word STATE_VARIABLE_SVarStore_364_364;
              MR_Word STATE_VARIABLE_VarSet_365_365;
              MR_Word Context_733 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalInfo_734;
              MR_Word SubGoalA_735 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word SubGoalB_736 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));

              hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(LocKind_17, SubGoalB_736, Renaming_19, (MR_Word) ((MR_Unsigned) 0U), &DisjunctsSVarStates1_146, STATE_VARIABLE_SVarState_0_205, STATE_VARIABLE_SVarStore_0_207, &STATE_VARIABLE_SVarStore_359_359, STATE_VARIABLE_VarSet_0_209, &STATE_VARIABLE_VarSet_360_360, STATE_VARIABLE_ModuleInfo_0_211, &STATE_VARIABLE_ModuleInfo_361_361, STATE_VARIABLE_QualInfo_0_213, &STATE_VARIABLE_QualInfo_362_362, STATE_VARIABLE_Specs_0_215, &STATE_VARIABLE_Specs_363_363);
              hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(LocKind_17, SubGoalA_735, Renaming_19, DisjunctsSVarStates1_146, &DisjunctsSVarStates_147, STATE_VARIABLE_SVarState_0_205, STATE_VARIABLE_SVarStore_359_359, &STATE_VARIABLE_SVarStore_364_364, STATE_VARIABLE_VarSet_360_360, &STATE_VARIABLE_VarSet_365_365, STATE_VARIABLE_ModuleInfo_361_361, STATE_VARIABLE_ModuleInfo_212, STATE_VARIABLE_QualInfo_362_362, STATE_VARIABLE_QualInfo_214, STATE_VARIABLE_Specs_363_363, STATE_VARIABLE_Specs_216);
              hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(Context_733, DisjunctsSVarStates_147, &Disjuncts_148, STATE_VARIABLE_VarSet_365_365, STATE_VARIABLE_VarSet_210, STATE_VARIABLE_SVarState_0_205, STATE_VARIABLE_SVarState_206, STATE_VARIABLE_SVarStore_364_364, STATE_VARIABLE_SVarStore_208);
              hlds__hlds_goal__goal_info_init_2_p_0(Context_733, &GoalInfo_734);
              hlds__hlds_goal__disj_list_to_goal_3_p_0(Disjuncts_148, GoalInfo_734, HLDSGoal_20);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Context_719 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_720;
              MR_Word GoalInfo_721;
              MR_Word SubGoal_722 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word HLDSSubGoal_723;
              MR_Word Var_139;

              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_722, Renaming_19, &HLDSSubGoal_723, STATE_VARIABLE_SVarState_0_205, &Var_139, STATE_VARIABLE_SVarStore_0_207, STATE_VARIABLE_SVarStore_208, STATE_VARIABLE_VarSet_0_209, STATE_VARIABLE_VarSet_210, STATE_VARIABLE_ModuleInfo_0_211, STATE_VARIABLE_ModuleInfo_212, STATE_VARIABLE_QualInfo_0_213, STATE_VARIABLE_QualInfo_214, STATE_VARIABLE_Specs_0_215, STATE_VARIABLE_Specs_216);
              *STATE_VARIABLE_SVarState_206 = STATE_VARIABLE_SVarState_0_205;
              GoalExpr_720 = (MR_Word) ((MR_Word) (HLDSSubGoal_723));
              hlds__hlds_goal__goal_info_init_2_p_0(Context_719, &GoalInfo_721);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_720));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_721));
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
              *STATE_VARIABLE_SVarState_206 = STATE_VARIABLE_SVarState_0_205;
              *STATE_VARIABLE_SVarStore_208 = STATE_VARIABLE_SVarStore_0_207;
              *STATE_VARIABLE_VarSet_210 = STATE_VARIABLE_VarSet_0_209;
              *STATE_VARIABLE_ModuleInfo_212 = STATE_VARIABLE_ModuleInfo_0_211;
              *STATE_VARIABLE_QualInfo_214 = STATE_VARIABLE_QualInfo_0_213;
              *STATE_VARIABLE_Specs_216 = STATE_VARIABLE_Specs_0_215;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Var_372;
              MR_Word STATE_VARIABLE_SVarState_373_373;
              MR_Word STATE_VARIABLE_SVarStore_374_374;
              MR_Word STATE_VARIABLE_VarSet_375_375;
              MR_Word STATE_VARIABLE_ModuleInfo_376_376;
              MR_Word STATE_VARIABLE_QualInfo_377_377;
              MR_Word STATE_VARIABLE_Specs_378_378;
              MR_Word Context_726 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalInfo_727;
              MR_Word SubGoalA_728 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word SubGoalB_729 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word HLDSConjunctsCordA_730;
              MR_Word HLDSConjunctsCordAB_731;
              MR_Word HLDSConjuncts_732;

              Var_372 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0));
              hlds__make_hlds__goal_expr_to_goal__accumulate_par_conjuncts_17_p_0(LocKind_17, SubGoalA_728, Renaming_19, Var_372, &HLDSConjunctsCordA_730, STATE_VARIABLE_SVarState_0_205, &STATE_VARIABLE_SVarState_373_373, STATE_VARIABLE_SVarStore_0_207, &STATE_VARIABLE_SVarStore_374_374, STATE_VARIABLE_VarSet_0_209, &STATE_VARIABLE_VarSet_375_375, STATE_VARIABLE_ModuleInfo_0_211, &STATE_VARIABLE_ModuleInfo_376_376, STATE_VARIABLE_QualInfo_0_213, &STATE_VARIABLE_QualInfo_377_377, STATE_VARIABLE_Specs_0_215, &STATE_VARIABLE_Specs_378_378);
              hlds__make_hlds__goal_expr_to_goal__accumulate_par_conjuncts_17_p_0(LocKind_17, SubGoalB_729, Renaming_19, HLDSConjunctsCordA_730, &HLDSConjunctsCordAB_731, STATE_VARIABLE_SVarState_373_373, STATE_VARIABLE_SVarState_206, STATE_VARIABLE_SVarStore_374_374, STATE_VARIABLE_SVarStore_208, STATE_VARIABLE_VarSet_375_375, STATE_VARIABLE_VarSet_210, STATE_VARIABLE_ModuleInfo_376_376, STATE_VARIABLE_ModuleInfo_212, STATE_VARIABLE_QualInfo_377_377, STATE_VARIABLE_QualInfo_214, STATE_VARIABLE_Specs_378_378, STATE_VARIABLE_Specs_216);
              HLDSConjuncts_732 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HLDSConjunctsCordAB_731);
              hlds__hlds_goal__goal_info_init_2_p_0(Context_726, &GoalInfo_727);
              hlds__hlds_goal__par_conj_list_to_goal_3_p_0(HLDSConjuncts_732, GoalInfo_727, HLDSGoal_20);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word QuantType_30 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              MR_Word VarsKind_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Vars0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word SubGoal_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word Context_624 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));

              switch (QuantType_30) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word TransformedGoal_34;
                    MR_Word Var_608;
                    MR_Word Var_610;
                    MR_Word next_value_of_Goal_18;

                    {
                      Var_610 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_610, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                      MR_hl_field(MR_mktag(3), Var_610, 1) = ((MR_Box) (Context_624));
                      MR_hl_field(MR_mktag(3), Var_610, 2) = ((MR_Box) (SubGoal_33));
                    }
                    {
                      Var_608 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_608, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(MR_mktag(3), Var_608, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) (VarsKind_31)));
                      MR_hl_field(MR_mktag(3), Var_608, 2) = ((MR_Box) (Context_624));
                      MR_hl_field(MR_mktag(3), Var_608, 3) = ((MR_Box) (Vars0_32));
                      MR_hl_field(MR_mktag(3), Var_608, 4) = ((MR_Box) (Var_610));
                    }
                    {
                      TransformedGoal_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), TransformedGoal_34, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                      MR_hl_field(MR_mktag(3), TransformedGoal_34, 1) = ((MR_Box) (Context_624));
                      MR_hl_field(MR_mktag(3), TransformedGoal_34, 2) = ((MR_Box) (Var_608));
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
                    MR_Word GoalExpr_620;
                    MR_Word GoalInfo_621;

                    parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, Vars0_32, &Vars_35);
                    switch (VarsKind_31) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_33, Renaming_19, &HLDSSubGoal_36, STATE_VARIABLE_SVarState_0_205, STATE_VARIABLE_SVarState_206, STATE_VARIABLE_SVarStore_0_207, STATE_VARIABLE_SVarStore_208, STATE_VARIABLE_VarSet_0_209, STATE_VARIABLE_VarSet_210, STATE_VARIABLE_ModuleInfo_0_211, STATE_VARIABLE_ModuleInfo_212, STATE_VARIABLE_QualInfo_0_213, STATE_VARIABLE_QualInfo_214, STATE_VARIABLE_Specs_0_215, STATE_VARIABLE_Specs_216);
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
                          MR_Word STATE_VARIABLE_Specs_594_594;

                          hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(Context_624, STATE_VARIABLE_VarSet_0_209, Vars_35, STATE_VARIABLE_SVarState_0_205, &BeforeInsideSVarState_40, STATE_VARIABLE_Specs_0_215, &STATE_VARIABLE_Specs_594_594);
                          hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_33, Renaming_19, &HLDSSubGoal_36, BeforeInsideSVarState_40, &AfterInsideSVarState_41, STATE_VARIABLE_SVarStore_0_207, STATE_VARIABLE_SVarStore_208, STATE_VARIABLE_VarSet_0_209, STATE_VARIABLE_VarSet_210, STATE_VARIABLE_ModuleInfo_0_211, STATE_VARIABLE_ModuleInfo_212, STATE_VARIABLE_QualInfo_0_213, STATE_VARIABLE_QualInfo_214, STATE_VARIABLE_Specs_594_594, STATE_VARIABLE_Specs_216);
                          hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(Vars_35, STATE_VARIABLE_SVarState_0_205, AfterInsideSVarState_41, STATE_VARIABLE_SVarState_206);
                          Reason_37 = (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[5]);
                        }
                        break;
                    }
                    {
                      GoalExpr_620 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_620, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(MR_mktag(3), GoalExpr_620, 1) = ((MR_Box) (Reason_37));
                      MR_hl_field(MR_mktag(3), GoalExpr_620, 2) = ((MR_Box) (HLDSSubGoal_36));
                    }
                    hlds__hlds_goal__goal_info_init_2_p_0(Context_624, &GoalInfo_621);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *HLDSGoal_20 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_620));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_621));
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Purity_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))) & (MR_Integer) 3);
              MR_Word Context_627 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_628;
              MR_Word GoalInfo_629;
              MR_Word SubGoal_630 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word HLDSSubGoal_631;
              MR_Word Reason_632;

              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_630, Renaming_19, &HLDSSubGoal_631, STATE_VARIABLE_SVarState_0_205, STATE_VARIABLE_SVarState_206, STATE_VARIABLE_SVarStore_0_207, STATE_VARIABLE_SVarStore_208, STATE_VARIABLE_VarSet_0_209, STATE_VARIABLE_VarSet_210, STATE_VARIABLE_ModuleInfo_0_211, STATE_VARIABLE_ModuleInfo_212, STATE_VARIABLE_QualInfo_0_213, STATE_VARIABLE_QualInfo_214, STATE_VARIABLE_Specs_0_215, STATE_VARIABLE_Specs_216);
              {
                Reason_632 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Reason_632, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Reason_632, 1) = (MR_Box) ((MR_Unsigned) (Purity_43));
              }
              {
                GoalExpr_628 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_628, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_628, 1) = ((MR_Box) (Reason_632));
                MR_hl_field(MR_mktag(3), GoalExpr_628, 2) = ((MR_Box) (HLDSSubGoal_631));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_627, &GoalInfo_629);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_628));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_629));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word DotSVars_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word ColonSVars_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 5))));
              MR_Word PromiseVars_46;
              MR_Word Context_633 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_634;
              MR_Word GoalInfo_635;
              MR_Word SubGoal_636 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 6))));
              MR_Word Vars_637 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word HLDSSubGoal_638;
              MR_Word Reason_639;
              MR_Word StateVars_640 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));

              hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(LocKind_17, Vars_637, StateVars_640, DotSVars_44, ColonSVars_45, Context_633, Renaming_19, &PromiseVars_46, SubGoal_636, &HLDSSubGoal_638, STATE_VARIABLE_SVarState_0_205, STATE_VARIABLE_SVarState_206, STATE_VARIABLE_SVarStore_0_207, STATE_VARIABLE_SVarStore_208, STATE_VARIABLE_VarSet_0_209, STATE_VARIABLE_VarSet_210, STATE_VARIABLE_ModuleInfo_0_211, STATE_VARIABLE_ModuleInfo_212, STATE_VARIABLE_QualInfo_0_213, STATE_VARIABLE_QualInfo_214, STATE_VARIABLE_Specs_0_215, STATE_VARIABLE_Specs_216);
              {
                Reason_639 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Reason_639, 0) = ((MR_Box) (PromiseVars_46));
                MR_hl_field(MR_mktag(2), Reason_639, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              {
                GoalExpr_634 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_634, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_634, 1) = ((MR_Box) (Reason_639));
                MR_hl_field(MR_mktag(3), GoalExpr_634, 2) = ((MR_Box) (HLDSSubGoal_638));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_633, &GoalInfo_635);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_634));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_635));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word Context_641 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_642;
              MR_Word GoalInfo_643;
              MR_Word SubGoal_644 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 6))));
              MR_Word Vars_645 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word HLDSSubGoal_646;
              MR_Word Reason_647;
              MR_Word StateVars_648 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word DotSVars_649 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word ColonSVars_650 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 5))));
              MR_Word PromiseVars_651;

              hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(LocKind_17, Vars_645, StateVars_648, DotSVars_649, ColonSVars_650, Context_641, Renaming_19, &PromiseVars_651, SubGoal_644, &HLDSSubGoal_646, STATE_VARIABLE_SVarState_0_205, STATE_VARIABLE_SVarState_206, STATE_VARIABLE_SVarStore_0_207, STATE_VARIABLE_SVarStore_208, STATE_VARIABLE_VarSet_0_209, STATE_VARIABLE_VarSet_210, STATE_VARIABLE_ModuleInfo_0_211, STATE_VARIABLE_ModuleInfo_212, STATE_VARIABLE_QualInfo_0_213, STATE_VARIABLE_QualInfo_214, STATE_VARIABLE_Specs_0_215, STATE_VARIABLE_Specs_216);
              {
                Reason_647 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Reason_647, 0) = ((MR_Box) (PromiseVars_651));
                MR_hl_field(MR_mktag(2), Reason_647, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              }
              {
                GoalExpr_642 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_642, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_642, 1) = ((MR_Box) (Reason_647));
                MR_hl_field(MR_mktag(3), GoalExpr_642, 2) = ((MR_Box) (HLDSSubGoal_646));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_641, &GoalInfo_643);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_642));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_643));
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Context_652 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_653;
              MR_Word GoalInfo_654;
              MR_Word SubGoal_655 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 6))));
              MR_Word Vars_656 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word HLDSSubGoal_657;
              MR_Word Reason_658;
              MR_Word StateVars_659 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word DotSVars_660 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word ColonSVars_661 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 5))));
              MR_Word PromiseVars_662;

              hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(LocKind_17, Vars_656, StateVars_659, DotSVars_660, ColonSVars_661, Context_652, Renaming_19, &PromiseVars_662, SubGoal_655, &HLDSSubGoal_657, STATE_VARIABLE_SVarState_0_205, STATE_VARIABLE_SVarState_206, STATE_VARIABLE_SVarStore_0_207, STATE_VARIABLE_SVarStore_208, STATE_VARIABLE_VarSet_0_209, STATE_VARIABLE_VarSet_210, STATE_VARIABLE_ModuleInfo_0_211, STATE_VARIABLE_ModuleInfo_212, STATE_VARIABLE_QualInfo_0_213, STATE_VARIABLE_QualInfo_214, STATE_VARIABLE_Specs_0_215, STATE_VARIABLE_Specs_216);
              {
                Reason_658 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Reason_658, 0) = ((MR_Box) (PromiseVars_662));
                MR_hl_field(MR_mktag(2), Reason_658, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
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
          case (MR_Integer) 11:
            {
              MR_Word Detism_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_Word Var_565;
              MR_Word Context_663 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_664;
              MR_Word GoalInfo_665;
              MR_Word SubGoal_666 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word HLDSSubGoal_667;

              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_666, Renaming_19, &HLDSSubGoal_667, STATE_VARIABLE_SVarState_0_205, STATE_VARIABLE_SVarState_206, STATE_VARIABLE_SVarStore_0_207, STATE_VARIABLE_SVarStore_208, STATE_VARIABLE_VarSet_0_209, STATE_VARIABLE_VarSet_210, STATE_VARIABLE_ModuleInfo_0_211, STATE_VARIABLE_ModuleInfo_212, STATE_VARIABLE_QualInfo_0_213, STATE_VARIABLE_QualInfo_214, STATE_VARIABLE_Specs_0_215, STATE_VARIABLE_Specs_216);
              {
                Var_565 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_565, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_565, 1) = (MR_Box) ((MR_Unsigned) (Detism_47));
              }
              {
                GoalExpr_664 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_664, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_664, 1) = ((MR_Box) (Var_565));
                MR_hl_field(MR_mktag(3), GoalExpr_664, 2) = ((MR_Box) (HLDSSubGoal_667));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_663, &GoalInfo_665);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_664));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_665));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word PODVar0_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word Var_51;
              MR_Word STATE_VARIABLE_SVarState_542_542;
              MR_Word STATE_VARIABLE_VarSet_543_543;
              MR_Word STATE_VARIABLE_Specs_544_544;
              MR_Word Var_551;
              MR_Word Context_673 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_674;
              MR_Word GoalInfo_675;
              MR_Word SubGoal_676 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word HLDSSubGoal_677;

              hlds__make_hlds__goal_expr_to_goal__rename_and_maybe_expand_dot_var_11_p_0(Context_673, (MR_Integer) 1, Renaming_19, PODVar0_50, &Var_51, STATE_VARIABLE_SVarState_0_205, &STATE_VARIABLE_SVarState_542_542, STATE_VARIABLE_VarSet_0_209, &STATE_VARIABLE_VarSet_543_543, STATE_VARIABLE_Specs_0_215, &STATE_VARIABLE_Specs_544_544);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_676, Renaming_19, &HLDSSubGoal_677, STATE_VARIABLE_SVarState_542_542, STATE_VARIABLE_SVarState_206, STATE_VARIABLE_SVarStore_0_207, STATE_VARIABLE_SVarStore_208, STATE_VARIABLE_VarSet_543_543, STATE_VARIABLE_VarSet_210, STATE_VARIABLE_ModuleInfo_0_211, STATE_VARIABLE_ModuleInfo_212, STATE_VARIABLE_QualInfo_0_213, STATE_VARIABLE_QualInfo_214, STATE_VARIABLE_Specs_544_544, STATE_VARIABLE_Specs_216);
              {
                Var_551 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_551, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), Var_551, 1) = ((MR_Box) (Var_51));
              }
              {
                GoalExpr_674 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_674, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_674, 1) = ((MR_Box) (Var_551));
                MR_hl_field(MR_mktag(3), GoalExpr_674, 2) = ((MR_Box) (HLDSSubGoal_677));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_673, &GoalInfo_675);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_674));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_675));
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word STATE_VARIABLE_SVarState_531_531;
              MR_Word STATE_VARIABLE_VarSet_532_532;
              MR_Word STATE_VARIABLE_Specs_533_533;
              MR_Word Var_540;
              MR_Word Context_678 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_679;
              MR_Word GoalInfo_680;
              MR_Word SubGoal_681 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word HLDSSubGoal_682;
              MR_Word Detism_683 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))) & (MR_Integer) 7);
              MR_Word PODVar0_684 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word Var_685;

              hlds__make_hlds__goal_expr_to_goal__rename_and_maybe_expand_dot_var_11_p_0(Context_678, (MR_Integer) 1, Renaming_19, PODVar0_684, &Var_685, STATE_VARIABLE_SVarState_0_205, &STATE_VARIABLE_SVarState_531_531, STATE_VARIABLE_VarSet_0_209, &STATE_VARIABLE_VarSet_532_532, STATE_VARIABLE_Specs_0_215, &STATE_VARIABLE_Specs_533_533);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_681, Renaming_19, &HLDSSubGoal_682, STATE_VARIABLE_SVarState_531_531, STATE_VARIABLE_SVarState_206, STATE_VARIABLE_SVarStore_0_207, STATE_VARIABLE_SVarStore_208, STATE_VARIABLE_VarSet_532_532, STATE_VARIABLE_VarSet_210, STATE_VARIABLE_ModuleInfo_0_211, STATE_VARIABLE_ModuleInfo_212, STATE_VARIABLE_QualInfo_0_213, STATE_VARIABLE_QualInfo_214, STATE_VARIABLE_Specs_533_533, STATE_VARIABLE_Specs_216);
              {
                Var_540 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_540, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), Var_540, 1) = ((MR_Box) (Var_685));
                MR_hl_field(MR_mktag(3), Var_540, 2) = (MR_Box) ((MR_Unsigned) (Detism_683));
              }
              {
                GoalExpr_679 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_679, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_679, 1) = ((MR_Box) (Var_540));
                MR_hl_field(MR_mktag(3), GoalExpr_679, 2) = ((MR_Box) (HLDSSubGoal_682));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_678, &GoalInfo_680);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_679));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_680));
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word HeadWarnings_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))) & (MR_Integer) 3);
              MR_Word TailWarnings_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word Var_558;
              MR_Word Context_668 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_669;
              MR_Word GoalInfo_670;
              MR_Word SubGoal_671 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word HLDSSubGoal_672;

              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal_671, Renaming_19, &HLDSSubGoal_672, STATE_VARIABLE_SVarState_0_205, STATE_VARIABLE_SVarState_206, STATE_VARIABLE_SVarStore_0_207, STATE_VARIABLE_SVarStore_208, STATE_VARIABLE_VarSet_0_209, STATE_VARIABLE_VarSet_210, STATE_VARIABLE_ModuleInfo_0_211, STATE_VARIABLE_ModuleInfo_212, STATE_VARIABLE_QualInfo_0_213, STATE_VARIABLE_QualInfo_214, STATE_VARIABLE_Specs_0_215, STATE_VARIABLE_Specs_216);
              {
                Var_558 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_558, 0) = (MR_Box) ((MR_Unsigned) (HeadWarnings_48));
                MR_hl_field(MR_mktag(1), Var_558, 1) = ((MR_Box) (TailWarnings_49));
              }
              {
                GoalExpr_669 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_669, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_669, 1) = ((MR_Box) (Var_558));
                MR_hl_field(MR_mktag(3), GoalExpr_669, 2) = ((MR_Box) (HLDSSubGoal_672));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_668, &GoalInfo_670);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_669));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_670));
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word MaybeCompileTime_96 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word MaybeRunTime_97 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word MaybeIO0_98 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word Mutables0_99 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 5))));
              MR_Word SubGoal0_100 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 6))));
              MR_Word MutableHLDSs_101;
              MR_Word MutableStateVars_102;
              MR_Word MutableGetGoals_103;
              MR_Word MutableSetGoals_104;
              MR_Word MaybeIOHLDS_110;
              MR_Word GetGoals_111;
              MR_Word SetGoals_112;
              MR_Word SubGoal1_113;
              MR_Word Var_470;
              MR_Word Var_471;
              MR_Word Var_472;
              MR_Word Var_473;
              MR_Word STATE_VARIABLE_Specs_475_475;
              MR_Word STATE_VARIABLE_QualInfo_479_479;
              MR_Word Context_693 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_694;
              MR_Word GoalInfo_695;
              MR_Word HLDSSubGoal_696;
              MR_Word Reason_697;
              MR_Word StateVars_698;
              MR_Word BeforeInsideSVarState_699;
              MR_Word AfterInsideSVarState_700;

              {
                Var_470 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_470, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), Var_470, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_1));
                MR_hl_field(MR_mktag(0), Var_470, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_470, 3) = ((MR_Box) (Context_693));
                MR_hl_field(MR_mktag(0), Var_470, 4) = ((MR_Box) (STATE_VARIABLE_VarSet_0_209));
                MR_hl_field(MR_mktag(0), Var_470, 5) = ((MR_Box) (Renaming_19));
              }
              mercury__list__map4_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0), (MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), Var_470, Mutables0_99, &MutableHLDSs_101, &MutableStateVars_102, &MutableGetGoals_103, &MutableSetGoals_104);
              if ((MaybeIO0_98 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MaybeIOHLDS_110 = (MR_Word) ((MR_Unsigned) 0U);
                StateVars_698 = MutableStateVars_102;
                GetGoals_111 = MutableGetGoals_103;
                SetGoals_112 = MutableSetGoals_104;
              }
              else
              {
                MR_Word IOStateVar0_105 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIO0_98, (MR_Integer) 0))));
                MR_Word IOStateVar_106;
                MR_String IOStateVarName_107;
                MR_Word IOGetGoal_108;
                MR_Word IOSetGoal_109;

                hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_8_p_0(Context_693, STATE_VARIABLE_VarSet_0_209, Renaming_19, IOStateVar0_105, &IOStateVar_106, &IOStateVarName_107, &IOGetGoal_108, &IOSetGoal_109);
                {
                  MaybeIOHLDS_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MaybeIOHLDS_110, 0) = ((MR_Box) (IOStateVarName_107));
                }
                {
                  StateVars_698 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), StateVars_698, 0) = ((MR_Box) (IOStateVar_106));
                  MR_hl_field(MR_mktag(1), StateVars_698, 1) = ((MR_Box) (MutableStateVars_102));
                }
                {
                  GetGoals_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), GetGoals_111, 0) = ((MR_Box) (IOGetGoal_108));
                  MR_hl_field(MR_mktag(1), GetGoals_111, 1) = ((MR_Box) (MutableGetGoals_103));
                }
                {
                  SetGoals_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), SetGoals_112, 0) = ((MR_Box) (IOSetGoal_109));
                  MR_hl_field(MR_mktag(1), SetGoals_112, 1) = ((MR_Box) (MutableSetGoals_104));
                }
              }
              {
                Var_473 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_473, 0) = ((MR_Box) (SubGoal0_100));
                MR_hl_field(MR_mktag(1), Var_473, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_472 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), Var_473, SetGoals_112);
              Var_471 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), GetGoals_111, Var_472);
              SubGoal1_113 = parse_tree__prog_util__goal_list_to_conj_2_f_0(Context_693, Var_471);
              hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(Context_693, STATE_VARIABLE_VarSet_0_209, StateVars_698, STATE_VARIABLE_SVarState_0_205, &BeforeInsideSVarState_699, STATE_VARIABLE_Specs_0_215, &STATE_VARIABLE_Specs_475_475);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoal1_113, Renaming_19, &HLDSSubGoal_696, BeforeInsideSVarState_699, &AfterInsideSVarState_700, STATE_VARIABLE_SVarStore_0_207, STATE_VARIABLE_SVarStore_208, STATE_VARIABLE_VarSet_0_209, STATE_VARIABLE_VarSet_210, STATE_VARIABLE_ModuleInfo_0_211, STATE_VARIABLE_ModuleInfo_212, STATE_VARIABLE_QualInfo_0_213, &STATE_VARIABLE_QualInfo_479_479, STATE_VARIABLE_Specs_475_475, STATE_VARIABLE_Specs_216);
              hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(StateVars_698, STATE_VARIABLE_SVarState_0_205, AfterInsideSVarState_700, STATE_VARIABLE_SVarState_206);
              hlds__make_hlds__qual_info__qual_info_set_found_trace_goal_3_p_0((MR_Integer) 1, STATE_VARIABLE_QualInfo_479_479, STATE_VARIABLE_QualInfo_214);
              {
                Reason_697 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Reason_697, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), Reason_697, 1) = ((MR_Box) (MaybeCompileTime_96));
                MR_hl_field(MR_mktag(3), Reason_697, 2) = ((MR_Box) (MaybeRunTime_97));
                MR_hl_field(MR_mktag(3), Reason_697, 3) = ((MR_Box) (MaybeIOHLDS_110));
                MR_hl_field(MR_mktag(3), Reason_697, 4) = ((MR_Box) (MutableHLDSs_101));
                MR_hl_field(MR_mktag(3), Reason_697, 5) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                GoalExpr_694 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_694, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_694, 1) = ((MR_Box) (Reason_697));
                MR_hl_field(MR_mktag(3), GoalExpr_694, 2) = ((MR_Box) (HLDSSubGoal_696));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_693, &GoalInfo_695);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_694));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_695));
              }
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word Outer0_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word Inner0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word MaybeOutputVars0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word MainGoal_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 5))));
              MR_Word OrElseGoals_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 6))));
              MR_Word MaybeOutputVars_57;
              MR_Word Outer_66;
              MR_Word HLDSGoals_81;
              MR_Word HLDSMainGoal_82;
              MR_Word HLDSOrElseGoals_83;
              MR_Word Inner_88;
              MR_Word ShortHand_92;
              MR_Word Context_690 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_691;
              MR_Word GoalInfo_692;

              if ((MaybeOutputVars0_54 == (MR_Word) ((MR_Unsigned) 0U)))
                MaybeOutputVars_57 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word OutputVars0_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOutputVars0_54, (MR_Integer) 0))));
                MR_Word OutputVars_59;

                parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, OutputVars0_58, &OutputVars_59);
                {
                  MaybeOutputVars_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MaybeOutputVars_57, 0) = ((MR_Box) (OutputVars_59));
                }
              }
              if (((MR_tag((MR_Word) Outer0_52)) == (MR_Integer) 0))
              {
                MR_Word OuterStateVar0_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Outer0_52, (MR_Integer) 0))));
                MR_Word OuterStateVar_61;
                MR_Word OuterDI_62;
                MR_Word OuterUO_63;
                MR_Word OuterScopeInfo2_91;
                MR_Word STATE_VARIABLE_SVarState_489_489;
                MR_Word STATE_VARIABLE_VarSet_490_490;
                MR_Word STATE_VARIABLE_Specs_491_491;
                MR_Word STATE_VARIABLE_SVarState_515_515;

                parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, OuterStateVar0_60, &OuterStateVar_61);
                hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_p_0(Context_690, OuterStateVar_61, &OuterDI_62, &OuterUO_63, &OuterScopeInfo2_91, STATE_VARIABLE_SVarState_0_205, &STATE_VARIABLE_SVarState_489_489, STATE_VARIABLE_VarSet_0_209, &STATE_VARIABLE_VarSet_490_490, STATE_VARIABLE_Specs_0_215, &STATE_VARIABLE_Specs_491_491);
                {
                  Outer_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Outer_66, 0) = ((MR_Box) (OuterDI_62));
                  MR_hl_field(MR_mktag(0), Outer_66, 1) = ((MR_Box) (OuterUO_63));
                }
                if (((MR_tag((MR_Word) Inner0_53)) == (MR_Integer) 0))
                {
                  MR_Word InnerStateVar0_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner0_53, (MR_Integer) 0))));
                  MR_Word InnerStateVar_70;
                  MR_Word BeforeDisjSVarState_75;
                  MR_Word HLDSMainGoal0_76;
                  MR_Word AfterMainSVarState_77;
                  MR_Word MainDisjState_78;
                  MR_Word OrElseDisjStates_79;
                  MR_Word AllDisjStates_80;
                  MR_Word InnerScopeInfo2_85;
                  MR_Word InnerDI_86;
                  MR_Word InnerUO_87;
                  MR_Word STATE_VARIABLE_VarSet_494_494;
                  MR_Word STATE_VARIABLE_Specs_495_495;
                  MR_Word STATE_VARIABLE_SVarStore_496_496;
                  MR_Word STATE_VARIABLE_VarSet_497_497;
                  MR_Word STATE_VARIABLE_ModuleInfo_498_498;
                  MR_Word STATE_VARIABLE_QualInfo_499_499;
                  MR_Word STATE_VARIABLE_Specs_500_500;
                  MR_Word STATE_VARIABLE_SVarStore_501_501;
                  MR_Word STATE_VARIABLE_VarSet_502_502;
                  MR_Word STATE_VARIABLE_Specs_505_505;
                  MR_Word STATE_VARIABLE_VarSet_506_506;
                  MR_Word STATE_VARIABLE_SVarState_507_507;

                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, InnerStateVar0_69, &InnerStateVar_70);
                  hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_p_0(Context_690, InnerStateVar_70, &InnerScopeInfo2_85, STATE_VARIABLE_SVarState_489_489, &BeforeDisjSVarState_75, STATE_VARIABLE_VarSet_490_490, &STATE_VARIABLE_VarSet_494_494, STATE_VARIABLE_Specs_491_491, &STATE_VARIABLE_Specs_495_495);
                  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, MainGoal_55, Renaming_19, &HLDSMainGoal0_76, BeforeDisjSVarState_75, &AfterMainSVarState_77, STATE_VARIABLE_SVarStore_0_207, &STATE_VARIABLE_SVarStore_496_496, STATE_VARIABLE_VarSet_494_494, &STATE_VARIABLE_VarSet_497_497, STATE_VARIABLE_ModuleInfo_0_211, &STATE_VARIABLE_ModuleInfo_498_498, STATE_VARIABLE_QualInfo_0_213, &STATE_VARIABLE_QualInfo_499_499, STATE_VARIABLE_Specs_495_495, &STATE_VARIABLE_Specs_500_500);
                  {
                    MainDisjState_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MainDisjState_78, 0) = ((MR_Box) (HLDSMainGoal0_76));
                    MR_hl_field(MR_mktag(0), MainDisjState_78, 1) = ((MR_Box) (AfterMainSVarState_77));
                  }
                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(LocKind_17, OrElseGoals_56, Renaming_19, &OrElseDisjStates_79, BeforeDisjSVarState_75, STATE_VARIABLE_SVarStore_496_496, &STATE_VARIABLE_SVarStore_501_501, STATE_VARIABLE_VarSet_497_497, &STATE_VARIABLE_VarSet_502_502, STATE_VARIABLE_ModuleInfo_498_498, STATE_VARIABLE_ModuleInfo_212, STATE_VARIABLE_QualInfo_499_499, STATE_VARIABLE_QualInfo_214, STATE_VARIABLE_Specs_500_500, &STATE_VARIABLE_Specs_505_505);
                  {
                    AllDisjStates_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), AllDisjStates_80, 0) = ((MR_Box) (MainDisjState_78));
                    MR_hl_field(MR_mktag(1), AllDisjStates_80, 1) = ((MR_Box) (OrElseDisjStates_79));
                  }
                  hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(Context_690, AllDisjStates_80, &HLDSGoals_81, STATE_VARIABLE_VarSet_502_502, &STATE_VARIABLE_VarSet_506_506, BeforeDisjSVarState_75, &STATE_VARIABLE_SVarState_507_507, STATE_VARIABLE_SVarStore_501_501, STATE_VARIABLE_SVarStore_208);
                  hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_p_0(Context_690, InnerScopeInfo2_85, &InnerDI_86, &InnerUO_87, STATE_VARIABLE_SVarState_507_507, &STATE_VARIABLE_SVarState_515_515, STATE_VARIABLE_VarSet_506_506, STATE_VARIABLE_VarSet_210, STATE_VARIABLE_Specs_505_505, STATE_VARIABLE_Specs_216);
                  {
                    Inner_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Inner_88, 0) = ((MR_Box) (InnerDI_86));
                    MR_hl_field(MR_mktag(0), Inner_88, 1) = ((MR_Box) (InnerUO_87));
                  }
                }
                else
                {
                  MR_Word InnerDI0_89;
                  MR_Word InnerUO0_90;
                  MR_Word InnerDI_688;
                  MR_Word InnerUO_689;
                  MR_Word HLDSMainGoal0_915;
                  MR_Word AfterMainSVarState_916;
                  MR_Word MainDisjState_917;
                  MR_Word OrElseDisjStates_918;
                  MR_Word AllDisjStates_919;
                  MR_Word STATE_VARIABLE_SVarStore_496_922;
                  MR_Word STATE_VARIABLE_VarSet_497_923;
                  MR_Word STATE_VARIABLE_ModuleInfo_498_924;
                  MR_Word STATE_VARIABLE_QualInfo_499_925;
                  MR_Word STATE_VARIABLE_Specs_500_926;
                  MR_Word STATE_VARIABLE_SVarStore_501_927;
                  MR_Word STATE_VARIABLE_VarSet_502_928;

                  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, MainGoal_55, Renaming_19, &HLDSMainGoal0_915, STATE_VARIABLE_SVarState_489_489, &AfterMainSVarState_916, STATE_VARIABLE_SVarStore_0_207, &STATE_VARIABLE_SVarStore_496_922, STATE_VARIABLE_VarSet_490_490, &STATE_VARIABLE_VarSet_497_923, STATE_VARIABLE_ModuleInfo_0_211, &STATE_VARIABLE_ModuleInfo_498_924, STATE_VARIABLE_QualInfo_0_213, &STATE_VARIABLE_QualInfo_499_925, STATE_VARIABLE_Specs_491_491, &STATE_VARIABLE_Specs_500_926);
                  {
                    MainDisjState_917 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MainDisjState_917, 0) = ((MR_Box) (HLDSMainGoal0_915));
                    MR_hl_field(MR_mktag(0), MainDisjState_917, 1) = ((MR_Box) (AfterMainSVarState_916));
                  }
                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(LocKind_17, OrElseGoals_56, Renaming_19, &OrElseDisjStates_918, STATE_VARIABLE_SVarState_489_489, STATE_VARIABLE_SVarStore_496_922, &STATE_VARIABLE_SVarStore_501_927, STATE_VARIABLE_VarSet_497_923, &STATE_VARIABLE_VarSet_502_928, STATE_VARIABLE_ModuleInfo_498_924, STATE_VARIABLE_ModuleInfo_212, STATE_VARIABLE_QualInfo_499_925, STATE_VARIABLE_QualInfo_214, STATE_VARIABLE_Specs_500_926, STATE_VARIABLE_Specs_216);
                  {
                    AllDisjStates_919 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), AllDisjStates_919, 0) = ((MR_Box) (MainDisjState_917));
                    MR_hl_field(MR_mktag(1), AllDisjStates_919, 1) = ((MR_Box) (OrElseDisjStates_918));
                  }
                  hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(Context_690, AllDisjStates_919, &HLDSGoals_81, STATE_VARIABLE_VarSet_502_928, STATE_VARIABLE_VarSet_210, STATE_VARIABLE_SVarState_489_489, &STATE_VARIABLE_SVarState_515_515, STATE_VARIABLE_SVarStore_501_927, STATE_VARIABLE_SVarStore_208);
                  InnerDI0_89 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Inner0_53, (MR_Integer) 0))));
                  InnerUO0_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Inner0_53, (MR_Integer) 1))));
                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, InnerDI0_89, &InnerDI_688);
                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, InnerUO0_90, &InnerUO_689);
                  {
                    Inner_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Inner_88, 0) = ((MR_Box) (InnerDI_688));
                    MR_hl_field(MR_mktag(0), Inner_88, 1) = ((MR_Box) (InnerUO_689));
                  }
                }
                hlds__make_hlds__state_var__svar_finish_outer_atomic_scope_3_p_0(OuterScopeInfo2_91, STATE_VARIABLE_SVarState_515_515, STATE_VARIABLE_SVarState_206);
              }
              else
              {
                MR_Word OuterDI0_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Outer0_52, (MR_Integer) 0))));
                MR_Word OuterUO0_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Outer0_52, (MR_Integer) 1))));
                MR_Word OuterDI_686;
                MR_Word OuterUO_687;

                parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, OuterDI0_67, &OuterDI_686);
                parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, OuterUO0_68, &OuterUO_687);
                {
                  Outer_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Outer_66, 0) = ((MR_Box) (OuterDI_686));
                  MR_hl_field(MR_mktag(0), Outer_66, 1) = ((MR_Box) (OuterUO_687));
                }
                if (((MR_tag((MR_Word) Inner0_53)) == (MR_Integer) 0))
                {
                  MR_Word InnerStateVar0_832 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner0_53, (MR_Integer) 0))));
                  MR_Word InnerStateVar_833;
                  MR_Word InnerScopeInfo2_844;
                  MR_Word InnerDI_845;
                  MR_Word InnerUO_846;
                  MR_Word BeforeDisjSVarState_876;
                  MR_Word HLDSMainGoal0_877;
                  MR_Word AfterMainSVarState_878;
                  MR_Word MainDisjState_879;
                  MR_Word OrElseDisjStates_880;
                  MR_Word AllDisjStates_881;
                  MR_Word STATE_VARIABLE_VarSet_494_891;
                  MR_Word STATE_VARIABLE_Specs_495_892;
                  MR_Word STATE_VARIABLE_SVarStore_496_893;
                  MR_Word STATE_VARIABLE_VarSet_497_894;
                  MR_Word STATE_VARIABLE_ModuleInfo_498_895;
                  MR_Word STATE_VARIABLE_QualInfo_499_896;
                  MR_Word STATE_VARIABLE_Specs_500_897;
                  MR_Word STATE_VARIABLE_SVarStore_501_898;
                  MR_Word STATE_VARIABLE_VarSet_502_899;
                  MR_Word STATE_VARIABLE_Specs_505_900;
                  MR_Word STATE_VARIABLE_VarSet_506_901;
                  MR_Word STATE_VARIABLE_SVarState_507_902;

                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, InnerStateVar0_832, &InnerStateVar_833);
                  hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_p_0(Context_690, InnerStateVar_833, &InnerScopeInfo2_844, STATE_VARIABLE_SVarState_0_205, &BeforeDisjSVarState_876, STATE_VARIABLE_VarSet_0_209, &STATE_VARIABLE_VarSet_494_891, STATE_VARIABLE_Specs_0_215, &STATE_VARIABLE_Specs_495_892);
                  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, MainGoal_55, Renaming_19, &HLDSMainGoal0_877, BeforeDisjSVarState_876, &AfterMainSVarState_878, STATE_VARIABLE_SVarStore_0_207, &STATE_VARIABLE_SVarStore_496_893, STATE_VARIABLE_VarSet_494_891, &STATE_VARIABLE_VarSet_497_894, STATE_VARIABLE_ModuleInfo_0_211, &STATE_VARIABLE_ModuleInfo_498_895, STATE_VARIABLE_QualInfo_0_213, &STATE_VARIABLE_QualInfo_499_896, STATE_VARIABLE_Specs_495_892, &STATE_VARIABLE_Specs_500_897);
                  {
                    MainDisjState_879 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MainDisjState_879, 0) = ((MR_Box) (HLDSMainGoal0_877));
                    MR_hl_field(MR_mktag(0), MainDisjState_879, 1) = ((MR_Box) (AfterMainSVarState_878));
                  }
                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(LocKind_17, OrElseGoals_56, Renaming_19, &OrElseDisjStates_880, BeforeDisjSVarState_876, STATE_VARIABLE_SVarStore_496_893, &STATE_VARIABLE_SVarStore_501_898, STATE_VARIABLE_VarSet_497_894, &STATE_VARIABLE_VarSet_502_899, STATE_VARIABLE_ModuleInfo_498_895, STATE_VARIABLE_ModuleInfo_212, STATE_VARIABLE_QualInfo_499_896, STATE_VARIABLE_QualInfo_214, STATE_VARIABLE_Specs_500_897, &STATE_VARIABLE_Specs_505_900);
                  {
                    AllDisjStates_881 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), AllDisjStates_881, 0) = ((MR_Box) (MainDisjState_879));
                    MR_hl_field(MR_mktag(1), AllDisjStates_881, 1) = ((MR_Box) (OrElseDisjStates_880));
                  }
                  hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(Context_690, AllDisjStates_881, &HLDSGoals_81, STATE_VARIABLE_VarSet_502_899, &STATE_VARIABLE_VarSet_506_901, BeforeDisjSVarState_876, &STATE_VARIABLE_SVarState_507_902, STATE_VARIABLE_SVarStore_501_898, STATE_VARIABLE_SVarStore_208);
                  hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_p_0(Context_690, InnerScopeInfo2_844, &InnerDI_845, &InnerUO_846, STATE_VARIABLE_SVarState_507_902, STATE_VARIABLE_SVarState_206, STATE_VARIABLE_VarSet_506_901, STATE_VARIABLE_VarSet_210, STATE_VARIABLE_Specs_505_900, STATE_VARIABLE_Specs_216);
                  {
                    Inner_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Inner_88, 0) = ((MR_Box) (InnerDI_845));
                    MR_hl_field(MR_mktag(0), Inner_88, 1) = ((MR_Box) (InnerUO_846));
                  }
                }
                else
                {
                  MR_Word InnerDI0_852;
                  MR_Word InnerUO0_853;
                  MR_Word InnerDI_856;
                  MR_Word InnerUO_857;
                  MR_Word HLDSMainGoal0_935;
                  MR_Word AfterMainSVarState_936;
                  MR_Word MainDisjState_937;
                  MR_Word OrElseDisjStates_938;
                  MR_Word AllDisjStates_939;
                  MR_Word STATE_VARIABLE_SVarStore_496_942;
                  MR_Word STATE_VARIABLE_VarSet_497_943;
                  MR_Word STATE_VARIABLE_ModuleInfo_498_944;
                  MR_Word STATE_VARIABLE_QualInfo_499_945;
                  MR_Word STATE_VARIABLE_Specs_500_946;
                  MR_Word STATE_VARIABLE_SVarStore_501_947;
                  MR_Word STATE_VARIABLE_VarSet_502_948;

                  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, MainGoal_55, Renaming_19, &HLDSMainGoal0_935, STATE_VARIABLE_SVarState_0_205, &AfterMainSVarState_936, STATE_VARIABLE_SVarStore_0_207, &STATE_VARIABLE_SVarStore_496_942, STATE_VARIABLE_VarSet_0_209, &STATE_VARIABLE_VarSet_497_943, STATE_VARIABLE_ModuleInfo_0_211, &STATE_VARIABLE_ModuleInfo_498_944, STATE_VARIABLE_QualInfo_0_213, &STATE_VARIABLE_QualInfo_499_945, STATE_VARIABLE_Specs_0_215, &STATE_VARIABLE_Specs_500_946);
                  {
                    MainDisjState_937 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), MainDisjState_937, 0) = ((MR_Box) (HLDSMainGoal0_935));
                    MR_hl_field(MR_mktag(0), MainDisjState_937, 1) = ((MR_Box) (AfterMainSVarState_936));
                  }
                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(LocKind_17, OrElseGoals_56, Renaming_19, &OrElseDisjStates_938, STATE_VARIABLE_SVarState_0_205, STATE_VARIABLE_SVarStore_496_942, &STATE_VARIABLE_SVarStore_501_947, STATE_VARIABLE_VarSet_497_943, &STATE_VARIABLE_VarSet_502_948, STATE_VARIABLE_ModuleInfo_498_944, STATE_VARIABLE_ModuleInfo_212, STATE_VARIABLE_QualInfo_499_945, STATE_VARIABLE_QualInfo_214, STATE_VARIABLE_Specs_500_946, STATE_VARIABLE_Specs_216);
                  {
                    AllDisjStates_939 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), AllDisjStates_939, 0) = ((MR_Box) (MainDisjState_937));
                    MR_hl_field(MR_mktag(1), AllDisjStates_939, 1) = ((MR_Box) (OrElseDisjStates_938));
                  }
                  hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(Context_690, AllDisjStates_939, &HLDSGoals_81, STATE_VARIABLE_VarSet_502_948, STATE_VARIABLE_VarSet_210, STATE_VARIABLE_SVarState_0_205, STATE_VARIABLE_SVarState_206, STATE_VARIABLE_SVarStore_501_947, STATE_VARIABLE_SVarStore_208);
                  InnerDI0_852 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Inner0_53, (MR_Integer) 0))));
                  InnerUO0_853 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Inner0_53, (MR_Integer) 1))));
                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, InnerDI0_852, &InnerDI_856);
                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, InnerUO0_853, &InnerUO_857);
                  {
                    Inner_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Inner_88, 0) = ((MR_Box) (InnerDI_856));
                    MR_hl_field(MR_mktag(0), Inner_88, 1) = ((MR_Box) (InnerUO_857));
                  }
                }
              }
              if ((HLDSGoals_81 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_parse_tree_goal_to_hlds\'/16", (MR_String) "atomic HLDSGoals = []");
                  return;
                }
              }
              else
              {
                HLDSMainGoal_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HLDSGoals_81, (MR_Integer) 0))));
                HLDSOrElseGoals_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HLDSGoals_81, (MR_Integer) 1))));
              }
              {
                ShortHand_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ShortHand_92, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(1), ShortHand_92, 1) = ((MR_Box) (Outer_66));
                MR_hl_field(MR_mktag(1), ShortHand_92, 2) = ((MR_Box) (Inner_88));
                MR_hl_field(MR_mktag(1), ShortHand_92, 3) = ((MR_Box) (MaybeOutputVars_57));
                MR_hl_field(MR_mktag(1), ShortHand_92, 4) = ((MR_Box) (HLDSMainGoal_82));
                MR_hl_field(MR_mktag(1), ShortHand_92, 5) = ((MR_Box) (HLDSOrElseGoals_83));
                MR_hl_field(MR_mktag(1), ShortHand_92, 6) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                GoalExpr_691 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_691, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), GoalExpr_691, 1) = ((MR_Box) (ShortHand_92));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_690, &GoalInfo_692);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *HLDSGoal_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_691));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_692));
              }
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word Then0_116 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 4))));
              MR_Word MaybeElse0_117 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 5))));
              MR_Word Catches0_118 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 6))));
              MR_Word MaybeCatchAny0_119 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 7))));
              MR_Word Context_707 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word MaybeIO0_708 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word SubGoal0_709 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));

              if ((MaybeIO0_708 == (MR_Word) ((MR_Unsigned) 0U)))
                hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_p_0(LocKind_17, SubGoal0_709, Then0_116, MaybeElse0_117, Catches0_118, MaybeCatchAny0_119, Context_707, Renaming_19, HLDSGoal_20, STATE_VARIABLE_SVarState_0_205, STATE_VARIABLE_SVarState_206, STATE_VARIABLE_SVarStore_0_207, STATE_VARIABLE_SVarStore_208, STATE_VARIABLE_VarSet_0_209, STATE_VARIABLE_VarSet_210, STATE_VARIABLE_ModuleInfo_0_211, STATE_VARIABLE_ModuleInfo_212, STATE_VARIABLE_QualInfo_0_213, STATE_VARIABLE_QualInfo_214, STATE_VARIABLE_Specs_0_215, STATE_VARIABLE_Specs_216);
              else
              {
                MR_Word IOStateVar0_703 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIO0_708, (MR_Integer) 0))));

                if ((MaybeElse0_117 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word IOStateVar_701;

                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, IOStateVar0_703, &IOStateVar_701);
                  hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_p_0(LocKind_17, IOStateVar0_703, IOStateVar_701, SubGoal0_709, Then0_116, Catches0_118, MaybeCatchAny0_119, Context_707, Renaming_19, HLDSGoal_20, STATE_VARIABLE_SVarState_0_205, STATE_VARIABLE_SVarState_206, STATE_VARIABLE_SVarStore_0_207, STATE_VARIABLE_SVarStore_208, STATE_VARIABLE_VarSet_0_209, STATE_VARIABLE_VarSet_210, STATE_VARIABLE_ModuleInfo_0_211, STATE_VARIABLE_ModuleInfo_212, STATE_VARIABLE_QualInfo_0_213, STATE_VARIABLE_QualInfo_214, STATE_VARIABLE_Specs_0_215, STATE_VARIABLE_Specs_216);
                }
                else
                {
                  MR_Word Msg_122;
                  MR_Word Spec_123;
                  MR_Word Var_460;

                  {
                    Msg_122 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Msg_122, 0) = ((MR_Box) (Context_707));
                    MR_hl_field(MR_mktag(0), Msg_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[35])));
                  }
                  {
                    Var_460 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_460, 0) = ((MR_Box) (Msg_122));
                    MR_hl_field(MR_mktag(1), Var_460, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Spec_123 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Spec_123, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(0), Spec_123, 1) = ((MR_Box) ((MR_Unsigned) 16U));
                    MR_hl_field(MR_mktag(0), Spec_123, 2) = ((MR_Box) (Var_460));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_Specs_216 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_123));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_215));
                  }
                  *HLDSGoal_20 = hlds__make_goal__true_goal_with_context_1_f_0(Context_707);
                  *STATE_VARIABLE_SVarState_206 = STATE_VARIABLE_SVarState_0_205;
                  *STATE_VARIABLE_SVarStore_208 = STATE_VARIABLE_SVarStore_0_207;
                  *STATE_VARIABLE_VarSet_210 = STATE_VARIABLE_VarSet_0_209;
                  *STATE_VARIABLE_ModuleInfo_212 = STATE_VARIABLE_ModuleInfo_0_211;
                  *STATE_VARIABLE_QualInfo_214 = STATE_VARIABLE_QualInfo_0_213;
                }
              }
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word P_150 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word Q_151 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word Var_350;
              MR_Word Var_351;
              MR_Word Context_737 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word TransformedGoal_738;
              MR_Word next_value_of_Goal_18;

              {
                Var_351 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_351, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), Var_351, 1) = ((MR_Box) (Context_737));
                MR_hl_field(MR_mktag(3), Var_351, 2) = ((MR_Box) (Q_151));
              }
              {
                Var_350 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_350, 0) = ((MR_Box) (Context_737));
                MR_hl_field(MR_mktag(2), Var_350, 1) = ((MR_Box) (P_150));
                MR_hl_field(MR_mktag(2), Var_350, 2) = ((MR_Box) (Var_351));
              }
              {
                TransformedGoal_738 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TransformedGoal_738, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), TransformedGoal_738, 1) = ((MR_Box) (Context_737));
                MR_hl_field(MR_mktag(3), TransformedGoal_738, 2) = ((MR_Box) (Var_350));
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_18 = TransformedGoal_738;
              Goal_18 = next_value_of_Goal_18;
              continue;
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word HLDSSubGoalA_152;
              MR_Word HLDSSubGoalB_153;
              MR_Word STATE_VARIABLE_SVarState_337_337;
              MR_Word STATE_VARIABLE_SVarStore_338_338;
              MR_Word STATE_VARIABLE_VarSet_339_339;
              MR_Word STATE_VARIABLE_ModuleInfo_340_340;
              MR_Word STATE_VARIABLE_QualInfo_341_341;
              MR_Word STATE_VARIABLE_Specs_342_342;
              MR_Word Var_349;
              MR_Word Context_739 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalExpr_740;
              MR_Word GoalInfo_741;
              MR_Word SubGoalA_742 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word SubGoalB_743 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word Var_154;

              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoalA_742, Renaming_19, &HLDSSubGoalA_152, STATE_VARIABLE_SVarState_0_205, &STATE_VARIABLE_SVarState_337_337, STATE_VARIABLE_SVarStore_0_207, &STATE_VARIABLE_SVarStore_338_338, STATE_VARIABLE_VarSet_0_209, &STATE_VARIABLE_VarSet_339_339, STATE_VARIABLE_ModuleInfo_0_211, &STATE_VARIABLE_ModuleInfo_340_340, STATE_VARIABLE_QualInfo_0_213, &STATE_VARIABLE_QualInfo_341_341, STATE_VARIABLE_Specs_0_215, &STATE_VARIABLE_Specs_342_342);
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(LocKind_17, SubGoalB_743, Renaming_19, &HLDSSubGoalB_153, STATE_VARIABLE_SVarState_337_337, &Var_154, STATE_VARIABLE_SVarStore_338_338, STATE_VARIABLE_SVarStore_208, STATE_VARIABLE_VarSet_339_339, STATE_VARIABLE_VarSet_210, STATE_VARIABLE_ModuleInfo_340_340, STATE_VARIABLE_ModuleInfo_212, STATE_VARIABLE_QualInfo_341_341, STATE_VARIABLE_QualInfo_214, STATE_VARIABLE_Specs_342_342, STATE_VARIABLE_Specs_216);
              *STATE_VARIABLE_SVarState_206 = STATE_VARIABLE_SVarState_0_205;
              {
                Var_349 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_349, 0) = ((MR_Box) (HLDSSubGoalA_152));
                MR_hl_field(MR_mktag(0), Var_349, 1) = ((MR_Box) (HLDSSubGoalB_153));
              }
              {
                GoalExpr_740 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_740, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), GoalExpr_740, 1) = ((MR_Box) (Var_349));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_739, &GoalInfo_741);
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
              MR_String EventName_155 = ((MR_String) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 2))));
              MR_Word ArgTerms0_156 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 3))));
              MR_Word ArgTerms1_157;
              MR_Word ArgTerms_158;
              MR_Word HeadVars_159;
              MR_Integer Arity_160;
              MR_Word Modes_161;
              MR_Word Details_162;
              MR_Word GoalExpr0_163;
              MR_Word HLDSGoal0_164;
              MR_Word CallId_165;
              MR_Word STATE_VARIABLE_VarSet_322_322;
              MR_Word STATE_VARIABLE_SVarState_323_323;
              MR_Word STATE_VARIABLE_Specs_324_324;
              MR_Word Var_325;
              MR_Word Var_328;
              MR_Word Var_329;
              MR_Word STATE_VARIABLE_SVarState_330_330;
              MR_Word Context_745 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_18, (MR_Integer) 1))));
              MR_Word GoalInfo_746;

              hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(ArgTerms0_156, &ArgTerms1_157);
              parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Integer) 1, Renaming_19, ArgTerms1_157, &ArgTerms_158);
              hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(ArgTerms_158, &HeadVars_159, STATE_VARIABLE_VarSet_0_209, &STATE_VARIABLE_VarSet_322_322, STATE_VARIABLE_SVarState_0_205, &STATE_VARIABLE_SVarState_323_323, STATE_VARIABLE_Specs_0_215, &STATE_VARIABLE_Specs_324_324);
              mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0]), HeadVars_159, &Arity_160);
              Var_325 = parse_tree__prog_mode__in_mode_0_f_0();
              mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Arity_160, ((MR_Box) (Var_325)), &Modes_161);
              {
                Details_162 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Details_162, 0) = ((MR_Box) (EventName_155));
              }
              {
                GoalExpr0_163 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr0_163, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), GoalExpr0_163, 1) = ((MR_Box) (Details_162));
                MR_hl_field(MR_mktag(3), GoalExpr0_163, 2) = ((MR_Box) (HeadVars_159));
                MR_hl_field(MR_mktag(3), GoalExpr0_163, 3) = ((MR_Box) (Modes_161));
                MR_hl_field(MR_mktag(3), GoalExpr0_163, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), GoalExpr0_163, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_745, &GoalInfo_746);
              {
                HLDSGoal0_164 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), HLDSGoal0_164, 0) = ((MR_Box) (GoalExpr0_163));
                MR_hl_field(MR_mktag(0), HLDSGoal0_164, 1) = ((MR_Box) (GoalInfo_746));
              }
              {
                Var_328 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_328, 0) = ((MR_Box) (EventName_155));
              }
              {
                CallId_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), CallId_165, 0) = ((MR_Box) (Var_328));
              }
              {
                Var_329 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_329, 0) = ((MR_Box) (CallId_165));
              }
              hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(HeadVars_159, ArgTerms_158, Context_745, Var_329, HLDSGoal0_164, HLDSGoal_20, STATE_VARIABLE_SVarState_323_323, &STATE_VARIABLE_SVarState_330_330, STATE_VARIABLE_SVarStore_0_207, STATE_VARIABLE_SVarStore_208, STATE_VARIABLE_VarSet_322_322, STATE_VARIABLE_VarSet_210, STATE_VARIABLE_ModuleInfo_0_211, STATE_VARIABLE_ModuleInfo_212, STATE_VARIABLE_QualInfo_0_213, STATE_VARIABLE_QualInfo_214, STATE_VARIABLE_Specs_324_324, STATE_VARIABLE_Specs_216);
              hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(LocKind_17, STATE_VARIABLE_SVarState_330_330, STATE_VARIABLE_SVarState_206);
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
      {
        *STATE_VARIABLE_HLDSConjunctsCord_36 = mercury__cord__snoc_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), STATE_VARIABLE_HLDSConjunctsCord_0_35, ((MR_Box) (HLDSGoal_31)));
      }
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
      {
        *STATE_VARIABLE_HLDSConjunctsCord_36 = mercury__cord__snoc_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), STATE_VARIABLE_HLDSConjunctsCord_0_35, ((MR_Box) (HLDSGoal_31)));
      }
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
        Msg_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_44, 0) = ((MR_Box) (Context_21));
        MR_hl_field(MR_mktag(0), Msg_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[33])));
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
  MR_Word STATE_VARIABLE_VarSet_0_21,
  MR_Word * STATE_VARIABLE_VarSet_22,
  MR_Word STATE_VARIABLE_SVarState_0_23,
  MR_Word * STATE_VARIABLE_SVarState_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  {
    MR_Word HeadVars_18;
    MR_Word GoalExpr_20;
    MR_Word Var_30;
    MR_Integer Var_31;
    MR_Word Var_33;

    hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(Args0_12, &HeadVars_18, STATE_VARIABLE_VarSet_0_21, STATE_VARIABLE_VarSet_22, STATE_VARIABLE_SVarState_0_23, STATE_VARIABLE_SVarState_24, STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
    Var_30 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    Var_31 = hlds__hlds_pred__invalid_proc_id_0_f_0();
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (UpdateStr_11));
    }
    {
      GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), GoalExpr_20, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(2), GoalExpr_20, 1) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(2), GoalExpr_20, 2) = ((MR_Box) (HeadVars_18));
      MR_hl_field(MR_mktag(2), GoalExpr_20, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), GoalExpr_20, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(2), GoalExpr_20, 5) = ((MR_Box) (Var_33));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_20));
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
  MR_Word STATE_VARIABLE_SVarState_0_55,
  MR_Word * STATE_VARIABLE_SVarState_56,
  MR_Word STATE_VARIABLE_SVarStore_0_57,
  MR_Word * STATE_VARIABLE_SVarStore_58,
  MR_Word STATE_VARIABLE_VarSet_0_59,
  MR_Word * STATE_VARIABLE_VarSet_60,
  MR_Word STATE_VARIABLE_ModuleInfo_0_61,
  MR_Word * STATE_VARIABLE_ModuleInfo_62,
  MR_Word STATE_VARIABLE_QualInfo_0_63,
  MR_Word * STATE_VARIABLE_QualInfo_64,
  MR_Word STATE_VARIABLE_Specs_0_65,
  MR_Word * STATE_VARIABLE_Specs_66)
{
  {
    MR_bool succeeded;
    MR_Word ArgVars_29;
    MR_Word FieldValueVar_33;
    MR_Word TermInputVar_34;
    MR_Word TermOutputVar_35;
    MR_Word STATE_VARIABLE_VarSet_67_67;
    MR_Word STATE_VARIABLE_SVarState_68_68;
    MR_Word STATE_VARIABLE_Specs_69_69;
    MR_Word FieldValueVarPrime_30;
    MR_Word TermInputVarPrime_31;
    MR_Word TermOutputVarPrime_32;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;

    hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(ArgTerms_20, &ArgVars_29, STATE_VARIABLE_VarSet_0_59, &STATE_VARIABLE_VarSet_67_67, STATE_VARIABLE_SVarState_0_55, &STATE_VARIABLE_SVarState_68_68, STATE_VARIABLE_Specs_0_65, &STATE_VARIABLE_Specs_69_69);
    succeeded = (ArgVars_29 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      FieldValueVarPrime_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_29, (MR_Integer) 0))));
      Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_29, (MR_Integer) 1))));
      succeeded = (Var_70 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TermInputVarPrime_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_70, (MR_Integer) 0))));
        Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_70, (MR_Integer) 1))));
        succeeded = (Var_71 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          TermOutputVarPrime_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_71, (MR_Integer) 0))));
          Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_71, (MR_Integer) 1))));
          succeeded = (Var_72 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      FieldValueVar_33 = FieldValueVarPrime_30;
      TermInputVar_34 = TermInputVarPrime_31;
      TermOutputVar_35 = TermOutputVarPrime_32;
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "arity != 3");
        return;
      }
    }
    switch (AccessType_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_77;
          MR_Word STATE_VARIABLE_SVarState_78_78;
          MR_Word STATE_VARIABLE_SVarStore_79_79;
          MR_Word STATE_VARIABLE_VarSet_80_80;
          MR_Word STATE_VARIABLE_ModuleInfo_81_81;
          MR_Word STATE_VARIABLE_QualInfo_82_82;
          MR_Word STATE_VARIABLE_Specs_83_83;
          MR_Word Var_89;
          MR_Word Var_92;
          MR_Word Var_93;
          MR_Word Var_94;
          MR_Word Var_95;
          MR_Word Functor_134;
          MR_Word InnermostFunctor_135;
          MR_Word HLDSGoal0_136;
          MR_Word FieldArgContext_138;
          MR_Word FuncName_143;
          MR_Integer FuncArity_144;
          MR_Word SimpleCallId_146;
          MR_Word OutputTermArgContext_147;
          MR_Word ArgContexts_148;
          MR_Word FuncNamePrime_132;
          MR_Integer FuncArityPrime_133;

          hlds__make_hlds__field_access__expand_dcg_field_extraction_goal_22_p_0(Context_21, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), FieldNames_19, FieldValueVar_33, TermInputVar_34, TermOutputVar_35, &Functor_134, &Var_77, &HLDSGoal0_136, STATE_VARIABLE_SVarState_68_68, &STATE_VARIABLE_SVarState_78_78, STATE_VARIABLE_SVarStore_0_57, &STATE_VARIABLE_SVarStore_79_79, STATE_VARIABLE_VarSet_67_67, &STATE_VARIABLE_VarSet_80_80, STATE_VARIABLE_ModuleInfo_0_61, &STATE_VARIABLE_ModuleInfo_81_81, STATE_VARIABLE_QualInfo_0_63, &STATE_VARIABLE_QualInfo_82_82, STATE_VARIABLE_Specs_69_69, &STATE_VARIABLE_Specs_83_83);
          InnermostFunctor_135 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_77, (MR_Integer) 0))));
          {
            OutputTermArgContext_147 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), OutputTermArgContext_147, 0) = ((MR_Box) (Functor_134));
            MR_hl_field(MR_mktag(2), OutputTermArgContext_147, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(2), OutputTermArgContext_147, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          succeeded = ((((MR_tag((MR_Word) InnermostFunctor_135)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InnermostFunctor_135, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            FuncNamePrime_132 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InnermostFunctor_135, (MR_Integer) 1))));
            FuncArityPrime_133 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), InnermostFunctor_135, (MR_Integer) 2))));
            FuncName_143 = FuncNamePrime_132;
            FuncArity_144 = FuncArityPrime_133;
          }
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "not cons");
              return;
            }
          }
          {
            SimpleCallId_146 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SimpleCallId_146, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), SimpleCallId_146, 1) = ((MR_Box) (FuncName_143));
            MR_hl_field(MR_mktag(0), SimpleCallId_146, 2) = ((MR_Box) (FuncArity_144));
          }
          {
            Var_89 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_89, 0) = ((MR_Box) (SimpleCallId_146));
          }
          {
            FieldArgContext_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), FieldArgContext_138, 0) = ((MR_Box) (Var_89));
          }
          {
            Var_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_92, 0) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_92, 1) = ((MR_Box) (FieldArgContext_138));
          }
          {
            Var_94 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_94, 1) = ((MR_Box) (OutputTermArgContext_147));
          }
          {
            Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Var_94));
            MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Var_94));
            MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_95));
          }
          {
            ArgContexts_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ArgContexts_148, 0) = ((MR_Box) (Var_92));
            MR_hl_field(MR_mktag(1), ArgContexts_148, 1) = ((MR_Box) (Var_93));
          }
          hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_p_0(ArgVars_29, ArgTerms_20, ArgContexts_148, Context_21, HLDSGoal0_136, HLDSGoal_22, STATE_VARIABLE_SVarState_78_78, STATE_VARIABLE_SVarState_56, STATE_VARIABLE_SVarStore_79_79, STATE_VARIABLE_SVarStore_58, STATE_VARIABLE_VarSet_80_80, STATE_VARIABLE_VarSet_60, STATE_VARIABLE_ModuleInfo_81_81, STATE_VARIABLE_ModuleInfo_62, STATE_VARIABLE_QualInfo_82_82, STATE_VARIABLE_QualInfo_64, STATE_VARIABLE_Specs_83_83, STATE_VARIABLE_Specs_66);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Functor_36;
          MR_Word InnermostFunctor_37;
          MR_Word InnermostSubContext_38;
          MR_Word HLDSGoal0_39;
          MR_Word FieldArgContext_41;
          MR_Word InputTermArgContext_43;
          MR_Word FuncName_47;
          MR_Integer FuncArity_48;
          MR_Word SimpleCallId_50;
          MR_Word OutputTermArgContext_51;
          MR_Word ArgContexts_52;
          MR_Word Var_106;
          MR_Word STATE_VARIABLE_SVarState_107_107;
          MR_Word STATE_VARIABLE_SVarStore_108_108;
          MR_Word STATE_VARIABLE_VarSet_109_109;
          MR_Word STATE_VARIABLE_ModuleInfo_110_110;
          MR_Word STATE_VARIABLE_QualInfo_111_111;
          MR_Word STATE_VARIABLE_Specs_112_112;
          MR_Word Var_119;
          MR_Word Var_120;
          MR_Word Var_121;
          MR_Word Var_122;
          MR_Word Var_123;
          MR_Word Var_124;
          MR_Word FuncNamePrime_44;
          MR_Integer FuncArityPrime_45;

          hlds__make_hlds__field_access__expand_set_field_function_call_22_p_0(Context_21, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), FieldNames_19, FieldValueVar_33, TermInputVar_34, TermOutputVar_35, &Functor_36, &Var_106, &HLDSGoal0_39, STATE_VARIABLE_SVarState_68_68, &STATE_VARIABLE_SVarState_107_107, STATE_VARIABLE_SVarStore_0_57, &STATE_VARIABLE_SVarStore_108_108, STATE_VARIABLE_VarSet_67_67, &STATE_VARIABLE_VarSet_109_109, STATE_VARIABLE_ModuleInfo_0_61, &STATE_VARIABLE_ModuleInfo_110_110, STATE_VARIABLE_QualInfo_0_63, &STATE_VARIABLE_QualInfo_111_111, STATE_VARIABLE_Specs_69_69, &STATE_VARIABLE_Specs_112_112);
          InnermostFunctor_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_106, (MR_Integer) 0))));
          InnermostSubContext_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_106, (MR_Integer) 1))));
          {
            FieldArgContext_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), FieldArgContext_41, 0) = ((MR_Box) (InnermostFunctor_37));
            MR_hl_field(MR_mktag(2), FieldArgContext_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(2), FieldArgContext_41, 2) = ((MR_Box) (InnermostSubContext_38));
          }
          {
            InputTermArgContext_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), InputTermArgContext_43, 0) = ((MR_Box) (Functor_36));
            MR_hl_field(MR_mktag(2), InputTermArgContext_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(2), InputTermArgContext_43, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          succeeded = ((((MR_tag((MR_Word) Functor_36)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_36, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            FuncNamePrime_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Functor_36, (MR_Integer) 1))));
            FuncArityPrime_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Functor_36, (MR_Integer) 2))));
            FuncName_47 = FuncNamePrime_44;
            FuncArity_48 = FuncArityPrime_45;
          }
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "not cons");
              return;
            }
          }
          {
            SimpleCallId_50 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SimpleCallId_50, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), SimpleCallId_50, 1) = ((MR_Box) (FuncName_47));
            MR_hl_field(MR_mktag(0), SimpleCallId_50, 2) = ((MR_Box) (FuncArity_48));
          }
          {
            Var_119 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_119, 0) = ((MR_Box) (SimpleCallId_50));
          }
          {
            OutputTermArgContext_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), OutputTermArgContext_51, 0) = ((MR_Box) (Var_119));
          }
          {
            Var_120 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_120, 0) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_120, 1) = ((MR_Box) (FieldArgContext_41));
          }
          {
            Var_122 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_122, 0) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_122, 1) = ((MR_Box) (InputTermArgContext_43));
          }
          {
            Var_124 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_124, 0) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_124, 1) = ((MR_Box) (OutputTermArgContext_51));
          }
          {
            Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (Var_124));
            MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (Var_122));
            MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) (Var_123));
          }
          {
            ArgContexts_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ArgContexts_52, 0) = ((MR_Box) (Var_120));
            MR_hl_field(MR_mktag(1), ArgContexts_52, 1) = ((MR_Box) (Var_121));
          }
          hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_p_0(ArgVars_29, ArgTerms_20, ArgContexts_52, Context_21, HLDSGoal0_39, HLDSGoal_22, STATE_VARIABLE_SVarState_107_107, STATE_VARIABLE_SVarState_56, STATE_VARIABLE_SVarStore_108_108, STATE_VARIABLE_SVarStore_58, STATE_VARIABLE_VarSet_109_109, STATE_VARIABLE_VarSet_60, STATE_VARIABLE_ModuleInfo_110_110, STATE_VARIABLE_ModuleInfo_62, STATE_VARIABLE_QualInfo_111_111, STATE_VARIABLE_QualInfo_64, STATE_VARIABLE_Specs_112_112, STATE_VARIABLE_Specs_66);
        }
        break;
    }
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
