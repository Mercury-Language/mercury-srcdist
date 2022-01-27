/*
** Automatically generated from `goal_expr_to_goal.m'
** by the Mercury compiler,
** version rotd-2016-02-18
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module hlds.make_hlds.goal_expr_to_goal. */
/* :- implementation. */

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
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.make_hlds.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
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
#include "random.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
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
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.field_access.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "hlds.make_hlds.state_var.mih"
#include "hlds.make_hlds.superhomogeneous.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__goal_expr_to_goal__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_EnumFunctorDesc hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_value_ordered_loc_kind_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_name_ordered_loc_kind_0[2];

static const MR_Integer hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__functor_number_map_loc_kind_0[2];

static MR_bool MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Unify____loc_kind_0_0_10001(
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Compare____loc_kind_0_0_10001(
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2,
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_p_0(
  MR_String hlds__make_hlds__goal_expr_to_goal__UpdateStr_11,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Args0_12,
  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_13,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_14,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_21,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_22,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_23,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_24,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_25,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_26);

static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__dcg_field_error_context_pieces_1_f_0(
  MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_3);

static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__exception_functor_3_f_0(
  MR_String hlds__make_hlds__goal_expr_to_goal__Atom_5,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Arg_6,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_7);

static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_f_0(void);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(
  MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_6,
  MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_8,
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_10);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(
  MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_7,
  MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_8,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_9,
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_10,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_11,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_12);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_p_0(
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_22,
  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_23,
  MR_Word hlds__make_hlds__goal_expr_to_goal__ThenGoal_24,
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeElseGoal_25,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_26,
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_27,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_28,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_29,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__TryGoal_30,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_53,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_54,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_55,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_56,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_57,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_58,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_59,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_60,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_61,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_62,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_63,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_64);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_p_0(
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_23,
  MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVarUnrenamed_24,
  MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar_25,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal0_26,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Then0_27,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches0_28,
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_29,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_30,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_31,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__TryGoal_32,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_68,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_69,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_70,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_71,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_72,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_73,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_74,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_75,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_76,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_77,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_78,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_79);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_1,
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_3,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HeadVar__4_4,
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__5_5,
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__6_6,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HeadVar__7_7,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_8,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_9,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_11,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_12,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_13,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_14,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_15);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_17,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_18,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_19,
  MR_Word hlds__make_hlds__goal_expr_to_goal__DisjStates0_20,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__DisjStates_21,
  MR_Word hlds__make_hlds__goal_expr_to_goal__SVarStateBefore_22,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_35,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_36,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_37,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_38,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_40,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_41,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_42,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_43,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_44);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__accumulate_par_conjuncts_17_p_0(
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_19,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_20,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_38,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_40,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_42,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_44,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_46,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_48);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__accumulate_plain_conjuncts_17_p_0(
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_19,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_20,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_38,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_40,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_42,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_44,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_46,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_48);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_p_0(
  MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_18,
  MR_Word hlds__make_hlds__goal_expr_to_goal__FieldNames_19,
  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms_20,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_21,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_55,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_56,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_57,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_59,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_60,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_61,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_62,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_63,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_64,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_65,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_p_0(
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
  MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_19,
  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_21,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_46,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_47,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_48,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_49,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_50,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_51,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_52,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_54,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_55,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_56,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_57);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0_1(
  MR_Box hlds__make_hlds__goal_expr_to_goal__closure_arg,
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2,
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3,
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_4,
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_5,
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_6,
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_7,
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_8);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_23,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars0_24,
  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars0_25,
  MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars0_26,
  MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars0_27,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_28,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_29,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__QuantVars_30,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_31,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HLDSGoal_32,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_47,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_48,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_49,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_50,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_51,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_53,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_54,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_55,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_56,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_57,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_58);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_8_p_0(
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_9,
  MR_Word hlds__make_hlds__goal_expr_to_goal__VarSet_10,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_11,
  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVar0_12,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__StateVar_13,
  MR_String * hlds__make_hlds__goal_expr_to_goal__StateVarName_14,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__GetGoal_15,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__SetGoal_16);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__extract_trace_mutable_var_8_p_0(
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_9,
  MR_Word hlds__make_hlds__goal_expr_to_goal__VarSet_10,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_11,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Mutable_12,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__MutableHLDS_13,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__StateVar_14,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__GetGoal_15,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__SetGoal_16);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__rename_and_maybe_expand_dot_var_11_p_0(
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_12,
  MR_Word hlds__make_hlds__goal_expr_to_goal__MustRename_13,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_14,
  MR_Word hlds__make_hlds__goal_expr_to_goal__PODVar0_15,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Var_16,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_23,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_24,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_25,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_26,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_27,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_28);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_1(
  MR_Box hlds__make_hlds__goal_expr_to_goal__closure_arg,
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2,
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3,
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_4,
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_5);


static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_1[36][2];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_2[7][1];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_3[1][11];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_4[1][3];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_5[1][12];




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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "part."))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "else"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "parameter cannot have an"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "io"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "goal with an"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "try"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in DCG field access goal."))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[4])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "^ field1 ^ ... ^ fieldN := Field"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "Field =^ field1 ^ ... ^ fieldN"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In DCG field extraction goal:"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[4])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In DCG field update goal:"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[4])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 34 */
  {
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 35 */
  {
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[5])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) ((MR_String) ":="))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[18])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[28])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
};

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_3[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
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

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_4[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_5[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
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



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__goal_expr_to_goal__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__goal_expr_to_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__make_hlds__goal_expr_to_goal__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_EnumFunctorDesc hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_0 = {
  (MR_String) "loc_whole_goal",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_1 = {
  (MR_String) "loc_inside_atomic_goal",
  (MR_Integer) 1
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__goal_expr_to_goal____Unify____loc_kind_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__goal_expr_to_goal____Compare____loc_kind_0_0_10001)),
  (MR_String) "hlds.make_hlds.goal_expr_to_goal",
  (MR_String) "loc_kind",
  {     hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_name_ordered_loc_kind_0 },
  {     hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_value_ordered_loc_kind_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__functor_number_map_loc_kind_0
};

static MR_bool MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Unify____loc_kind_0_0_10001(
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2)
{
  {
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;

    {
      hlds__make_hlds__goal_expr_to_goal__succeeded = hlds__make_hlds__goal_expr_to_goal____Unify____loc_kind_0_0(((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1), ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2));
    }
    return hlds__make_hlds__goal_expr_to_goal__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Compare____loc_kind_0_0_10001(
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2,
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3)
{
  {
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__1_1;

    {
      hlds__make_hlds__goal_expr_to_goal____Compare____loc_kind_0_0(&hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2), ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3));
    }
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Compare____loc_kind_0_0(
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1,
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2,
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__3_3)
{
  {
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
    MR_Integer hlds__make_hlds__goal_expr_to_goal__Cast_HeadVar1_4 = (MR_Integer) hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2;
    MR_Integer hlds__make_hlds__goal_expr_to_goal__Cast_HeadVar2_5 = (MR_Integer) hlds__make_hlds__goal_expr_to_goal__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1, hlds__make_hlds__goal_expr_to_goal__Cast_HeadVar1_4, hlds__make_hlds__goal_expr_to_goal__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Unify____loc_kind_0_0(
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__2_1,
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2)
{
  {
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__HeadVar__2_1 == hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2);

    return hlds__make_hlds__goal_expr_to_goal__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_p_0(
  MR_String hlds__make_hlds__goal_expr_to_goal__UpdateStr_11,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Args0_12,
  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_13,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_14,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_21,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_22,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_23,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_24,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_25,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_26)
{
  {
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
    MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVars_18;
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_20;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_30_30;
    MR_Integer hlds__make_hlds__goal_expr_to_goal__V_31_31;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_33_33;

    {
      hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(hlds__make_hlds__goal_expr_to_goal__Args0_12, &hlds__make_hlds__goal_expr_to_goal__HeadVars_18, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_21, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_23, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_24, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_25, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_26);
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_30_30 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_31_31 = hlds__hlds_pred__invalid_proc_id_0_f_0();
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__UpdateStr_11));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_30_30));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_31_31));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HeadVars_18));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 3) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_33_33));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__make_hlds__goal_expr_to_goal__Goal_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_13));
    }
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__dcg_field_error_context_pieces_1_f_0(
  MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_3)
{
  {
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
    MR_Word hlds__make_hlds__goal_expr_to_goal__ContextPieces_4;

    switch (hlds__make_hlds__goal_expr_to_goal__AccessType_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        hlds__make_hlds__goal_expr_to_goal__ContextPieces_4 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[30]);
        break;
      case (MR_Integer) 1:
        hlds__make_hlds__goal_expr_to_goal__ContextPieces_4 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[32]);
        break;
    }
    return hlds__make_hlds__goal_expr_to_goal__ContextPieces_4;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__exception_functor_3_f_0(
  MR_String hlds__make_hlds__goal_expr_to_goal__Atom_5,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Arg_6,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_7)
{
  {
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Term_8;
    MR_Word hlds__make_hlds__goal_expr_to_goal__SymName_9;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_10_10;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_11_11;

    {
      hlds__make_hlds__goal_expr_to_goal__V_10_10 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
    {
      hlds__make_hlds__goal_expr_to_goal__SymName_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_9, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_10_10));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_9, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Atom_5));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_11_11, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Arg_6));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__SymName_9, hlds__make_hlds__goal_expr_to_goal__V_11_11, hlds__make_hlds__goal_expr_to_goal__Context_7, &hlds__make_hlds__goal_expr_to_goal__Term_8);
    }
    return hlds__make_hlds__goal_expr_to_goal__Term_8;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_f_0(void)
{
  {
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
    MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_2_2;

    {
      hlds__make_hlds__goal_expr_to_goal__V_2_2 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
    {
      hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_2_2));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1, 1) = ((MR_Box) ((MR_String) "magic_exception_result"));
    }
    return hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1;
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(
  MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_6,
  MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_8,
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_10)
{
  {
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;

    if ((hlds__make_hlds__goal_expr_to_goal__Catches_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word hlds__make_hlds__goal_expr_to_goal__Rethrow_20;
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_21_21;
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_23_23;
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_24_24;

          {
            hlds__make_hlds__goal_expr_to_goal__V_21_21 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
          }
          {
            hlds__make_hlds__goal_expr_to_goal__Rethrow_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Rethrow_20, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_21_21));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Rethrow_20, 1) = ((MR_Box) ((MR_String) "rethrow"));
          }
          {
            hlds__make_hlds__goal_expr_to_goal__V_23_23 = mercury__term__get_term_context_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7);
          }
          {
            hlds__make_hlds__goal_expr_to_goal__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_6));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *hlds__make_hlds__goal_expr_to_goal__Goal_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_23_23));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Rethrow_20));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_24_24));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) ((MR_Integer) 0));
          }
        }
      else
        {
          MR_Word hlds__make_hlds__goal_expr_to_goal__CatchAnyVar_16;
          MR_Word hlds__make_hlds__goal_expr_to_goal__CatchAnyGoal_17;
          MR_Word hlds__make_hlds__goal_expr_to_goal__Context_18;
          MR_Word hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19;
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9, (MR_Integer) 0)));
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_28_28;
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_29_29;
          MR_Word hlds__make_hlds__goal_expr_to_goal__SymName_42;
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_43_43;
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_44_44;

          hlds__make_hlds__goal_expr_to_goal__CatchAnyVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_27_27, (MR_Integer) 0)));
          hlds__make_hlds__goal_expr_to_goal__CatchAnyGoal_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_27_27, (MR_Integer) 1)));
          {
            hlds__make_hlds__goal_expr_to_goal__Context_18 = parse_tree__prog_item__goal_get_context_1_f_0(hlds__make_hlds__goal_expr_to_goal__CatchAnyGoal_17);
          }
          {
            hlds__make_hlds__goal_expr_to_goal__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_28_28, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CatchAnyVar_16));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_28_28, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_18));
          }
          {
            hlds__make_hlds__goal_expr_to_goal__V_43_43 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
          }
          {
            hlds__make_hlds__goal_expr_to_goal__SymName_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_42, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_43_43));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_42, 1) = ((MR_Box) ((MR_String) "exc_univ_value"));
          }
          {
            hlds__make_hlds__goal_expr_to_goal__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_44_44, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__SymName_42, hlds__make_hlds__goal_expr_to_goal__V_44_44, hlds__make_hlds__goal_expr_to_goal__Context_18, &hlds__make_hlds__goal_expr_to_goal__V_29_29);
          }
          {
            hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_18));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_28_28));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_29_29));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19, 3) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *hlds__make_hlds__goal_expr_to_goal__Goal_10 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_18));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19));
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CatchAnyGoal_17));
          }
        }
    else
      {
        MR_Word hlds__make_hlds__goal_expr_to_goal__FirstPattern_11;
        MR_Word hlds__make_hlds__goal_expr_to_goal__FirstGoal_12;
        MR_Word hlds__make_hlds__goal_expr_to_goal__RestCatches_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Catches_8, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__goal_expr_to_goal__ElseGoal_14;
        MR_Word hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15;
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Catches_8, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_33_33;
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_50_50;
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_51_51;
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_52_52;
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_54_54;
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_55_55;

        hlds__make_hlds__goal_expr_to_goal__FirstPattern_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_32_32, (MR_Integer) 0)));
        hlds__make_hlds__goal_expr_to_goal__FirstGoal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_32_32, (MR_Integer) 1)));
        {
          hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_6, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7, hlds__make_hlds__goal_expr_to_goal__RestCatches_13, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9, &hlds__make_hlds__goal_expr_to_goal__ElseGoal_14);
        }
        {
          hlds__make_hlds__goal_expr_to_goal__V_50_50 = mercury__term__get_term_context_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__FirstPattern_11);
        }
        {
          hlds__make_hlds__goal_expr_to_goal__V_52_52 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
        }
        {
          hlds__make_hlds__goal_expr_to_goal__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_51_51, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_52_52));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_51_51, 1) = ((MR_Box) ((MR_String) "exc_univ_to_type"));
        }
        {
          hlds__make_hlds__goal_expr_to_goal__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FirstPattern_11));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__goal_expr_to_goal__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_54_54, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_54_54, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_55_55));
        }
        {
          hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_50_50));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_51_51));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_54_54));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15, 3) = ((MR_Box) ((MR_Integer) 0));
        }
        {
          hlds__make_hlds__goal_expr_to_goal__V_33_33 = mercury__term__get_term_context_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__FirstPattern_11);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__goal_expr_to_goal__Goal_10 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_33_33));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15));
          MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FirstGoal_12));
          MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ElseGoal_14));
        }
      }
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(
  MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_7,
  MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_8,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_9,
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_10,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_11,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_12)
{
  {
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13;
    MR_Word hlds__make_hlds__goal_expr_to_goal__CatchChain_14;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_15_15;
    MR_Word hlds__make_hlds__goal_expr_to_goal__SymName_22;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_23_23;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_24_24;

    {
      hlds__make_hlds__goal_expr_to_goal__V_23_23 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
    {
      hlds__make_hlds__goal_expr_to_goal__SymName_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_22, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_23_23));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_22, 1) = ((MR_Box) ((MR_String) "exception"));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_8));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__SymName_22, hlds__make_hlds__goal_expr_to_goal__V_24_24, hlds__make_hlds__goal_expr_to_goal__Context_11, &hlds__make_hlds__goal_expr_to_goal__V_15_15);
    }
    {
      hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_11));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_7));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_15_15));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_7, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_8, hlds__make_hlds__goal_expr_to_goal__Catches_9, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_10, &hlds__make_hlds__goal_expr_to_goal__CatchChain_14);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__goal_expr_to_goal__Goal_12 = base;
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_11));
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13));
      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CatchChain_14));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_p_0(
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_22,
  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_23,
  MR_Word hlds__make_hlds__goal_expr_to_goal__ThenGoal_24,
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeElseGoal_25,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_26,
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_27,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_28,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_29,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__TryGoal_30,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_53,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_54,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_55,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_56,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_57,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_58,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_59,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_60,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_61,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_62,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_63,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_64)
{
  {
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_96_96 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVar_37;
    MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVar_38;
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39;
    MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_40;
    MR_Word hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41;
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_42;
    MR_Word hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43;
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44;
    MR_Word hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46;
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunctGoal_47;
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunctGoal_48;
    MR_Word hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunctionGoal_49;
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSCallMagicThenDisjunctionGoal_50;
    MR_Word hlds__make_hlds__goal_expr_to_goal__ShortHand_51;
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_52;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_66_66;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_67_67;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_71_71;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_72_72;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_75_75;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_88_88;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_97_97;

    {
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_96_96, (MR_String) "TryResult", &hlds__make_hlds__goal_expr_to_goal__ResultVar_37, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_57, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_66_66);
    }
    {
      mercury__varset__new_var_3_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_96_96, &hlds__make_hlds__goal_expr_to_goal__ExcpVar_38, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_66_66, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_67_67);
    }
    {
      hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVar_37));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_40, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ExcpVar_38));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_40, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[6]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
    }
    {
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_28, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_42);
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_97_97 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_71_71, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_97_97));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_71_71, 1) = ((MR_Box) ((MR_String) "magic_exception_result"));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_72_72, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_71_71));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_72_72));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_75_75 = hlds__make_hlds__goal_expr_to_goal__exception_functor_3_f_0((MR_String) "succeeded", hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41, hlds__make_hlds__goal_expr_to_goal__Context_28);
    }
    {
      hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_75_75));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    if ((hlds__make_hlds__goal_expr_to_goal__MaybeElseGoal_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_78_78;
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_82_82;

        {
          hlds__make_hlds__goal_expr_to_goal__V_78_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_78_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_78_78, 1) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1)))));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_78_78, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_78_78, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_78_78, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal_23));
        }
        {
          hlds__make_hlds__goal_expr_to_goal__V_82_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_82_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_82_82, 1) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1)))));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_82_82, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_82_82, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_82_82, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ThenGoal_24));
        }
        {
          hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
          MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_78_78));
          MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_82_82));
        }
      }
    else
      {
        MR_Word hlds__make_hlds__goal_expr_to_goal__ElseGoal_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeElseGoal_25, (MR_Integer) 0)));

        {
          hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal_23));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ThenGoal_24));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 6) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ElseGoal_45));
        }
      }
    {
      hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunctGoal_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunctGoal_47, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunctGoal_47, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunctGoal_47, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_40, hlds__make_hlds__goal_expr_to_goal__Catches_26, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_27, hlds__make_hlds__goal_expr_to_goal__Context_28, &hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunctGoal_48);
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_88_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_88_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_88_88, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_88_88, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunctGoal_47));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_88_88, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunctGoal_48));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunctionGoal_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunctionGoal_49, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunctionGoal_49, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunctionGoal_49, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_88_88));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_22, hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunctionGoal_49, hlds__make_hlds__goal_expr_to_goal__Renaming_29, &hlds__make_hlds__goal_expr_to_goal__HLDSCallMagicThenDisjunctionGoal_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_55, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_67_67, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_58, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_59, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_61, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_62, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_63, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_64);
    }
    {
      hlds__make_hlds__goal_expr_to_goal__ShortHand_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__ShortHand_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__ShortHand_51, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVar_37));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__ShortHand_51, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSCallMagicThenDisjunctionGoal_50));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__GoalExpr_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_52, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ShortHand_51));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__make_hlds__goal_expr_to_goal__TryGoal_30 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_52));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_42));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_p_0(
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_23,
  MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVarUnrenamed_24,
  MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar_25,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal0_26,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Then0_27,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches0_28,
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_29,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_30,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_31,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__TryGoal_32,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_68,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_69,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_70,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_71,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_72,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_73,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_74,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_75,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_76,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_77,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_78,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_79)
{
  {
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_166_166 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVar_39;
    MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVar_40;
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41;
    MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_42;
    MR_Word hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_43;
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_44;
    MR_Word hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45;
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSCallMagicGoal_46;
    MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVarBefore_47;
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49;
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSResultIsSucceededUnifyGoal_50;
    MR_Word hlds__make_hlds__goal_expr_to_goal__IOUnify_51;
    MR_Word hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52;
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSScopedGoal_53;
    MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVarAfter_54;
    MR_Word hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55;
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSScopedThenGoal_56;
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSResultIsSucceededDisjunctGoal_57;
    MR_Word hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsSucceededDisjunct_58;
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunctGoal_59;
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSResultIsExceptionDisjunctGoal_60;
    MR_Word hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsExceptionDisjunct_61;
    MR_Word hlds__make_hlds__goal_expr_to_goal__DisjunctSVarStates_62;
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSDisjuncts_63;
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSDisjunction_64;
    MR_Word hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunction_65;
    MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVars_66;
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_67;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_82_82;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_86_86;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_87_87;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_90_90;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_91_91;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_92_92;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_93_93;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_94_94;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_95_95;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_96_96;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_98_98;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_99_99;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_102_102;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_103_103;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_104_104;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_105_105;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_106_106;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_107_107;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_108_108;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_111_111;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_112_112;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_114_114;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_124_124;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_125_125;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_126_126;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_127_127;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_128_128;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_129_129;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_130_130;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_131_131;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_132_132;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_133_133;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_138_138;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_139_139;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_140_140;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_141_141;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_142_142;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_143_143;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_144_144;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_145_145;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_147_147;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_149_149;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_150_150;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_154_154;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_155_155;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_156_156;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_161_161;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_162_162;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_164_164;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_165_165;

    {
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_166_166, (MR_String) "TryResult", &hlds__make_hlds__goal_expr_to_goal__ResultVar_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_72, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81);
    }
    {
      mercury__varset__new_var_3_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_166_166, &hlds__make_hlds__goal_expr_to_goal__ExcpVar_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_82_82);
    }
    {
      hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVar_39));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_42, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ExcpVar_40));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_42, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_43, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[6]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_43, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
    }
    {
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_30, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_44);
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_86_86 = hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_f_0();
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_87_87, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_86_86));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_87_87));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__HLDSCallMagicGoal_46, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_68, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_90_90, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_70, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_91_91, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_82_82, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_92_92, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_74, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_93_93, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_76, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_94_94, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_78, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_95_95);
    }
    {
      hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_30, hlds__make_hlds__goal_expr_to_goal__IOStateVar_25, &hlds__make_hlds__goal_expr_to_goal__IOStateVarBefore_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_92_92, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_96_96, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_90_90, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_147_147, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_95_95, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_98_98);
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_99_99 = hlds__make_hlds__goal_expr_to_goal__exception_functor_3_f_0((MR_String) "succeeded", hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_43, hlds__make_hlds__goal_expr_to_goal__Context_30);
    }
    {
      hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_99_99));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__HLDSResultIsSucceededUnifyGoal_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_147_147, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_102_102, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_91_91, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_103_103, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_96_96, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_104_104, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_93_93, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_105_105, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_94_94, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_106_106, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_98_98, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_107_107);
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_112_112, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVarUnrenamed_24));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_112_112, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_111_111, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_112_112));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_108_108, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_108_108, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_111_111));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_108_108, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_114_114, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[1]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_114_114, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_111_111));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_114_114, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__IOUnify_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__IOUnify_51, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__IOUnify_51, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_108_108));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__IOUnify_51, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_114_114));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__IOUnify_51, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_124_124 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_124_124, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_124_124, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOUnify_51));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_124_124, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Goal0_26));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52, 1) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_124_124));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__HLDSScopedGoal_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_102_102, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_125_125, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_103_103, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_126_126, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_104_104, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_127_127, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_105_105, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_128_128, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_106_106, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_129_129, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_107_107, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_130_130);
    }
    {
      hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_30, hlds__make_hlds__goal_expr_to_goal__IOStateVar_25, &hlds__make_hlds__goal_expr_to_goal__IOStateVarAfter_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_127_127, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_131_131, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_125_125, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_132_132, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_130_130, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_133_133);
    }
    {
      hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55, 1) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Then0_27));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__HLDSScopedThenGoal_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_132_132, &hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsSucceededDisjunct_58, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_126_126, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_138_138, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_131_131, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_139_139, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_128_128, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_140_140, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_129_129, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_141_141, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_133_133, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_142_142);
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_145_145, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSScopedThenGoal_56));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_145_145, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_144_144, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSScopedGoal_53));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_144_144, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_145_145));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_143_143, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSResultIsSucceededUnifyGoal_50));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_143_143, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_144_144));
    }
    {
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__V_143_143, hlds__make_hlds__goal_expr_to_goal__GoalInfo_44, &hlds__make_hlds__goal_expr_to_goal__HLDSResultIsSucceededDisjunctGoal_57);
    }
    {
      hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_42, hlds__make_hlds__goal_expr_to_goal__Catches0_28, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_29, hlds__make_hlds__goal_expr_to_goal__Context_30, &hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunctGoal_59);
    }
    {
      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunctGoal_59, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__HLDSResultIsExceptionDisjunctGoal_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_147_147, &hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsExceptionDisjunct_61, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_138_138, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_149_149, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_139_139, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_150_150, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_140_140, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_75, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_141_141, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_77, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_142_142, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_79);
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_154_154 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_154_154, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSResultIsSucceededDisjunctGoal_57));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_154_154, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsSucceededDisjunct_58));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_156_156 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_156_156, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSResultIsExceptionDisjunctGoal_60));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_156_156, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsExceptionDisjunct_61));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_155_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_155_155, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_156_156));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_155_155, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__DisjunctSVarStates_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__DisjunctSVarStates_62, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_154_154));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__DisjunctSVarStates_62, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_155_155));
    }
    {
      hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_30, hlds__make_hlds__goal_expr_to_goal__DisjunctSVarStates_62, &hlds__make_hlds__goal_expr_to_goal__HLDSDisjuncts_63, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_150_150, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_147_147, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_69, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_149_149, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_71);
    }
    {
      hlds__hlds_goal__disj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__HLDSDisjuncts_63, hlds__make_hlds__goal_expr_to_goal__GoalInfo_44, &hlds__make_hlds__goal_expr_to_goal__HLDSDisjunction_64);
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_162_162, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSDisjunction_64));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_162_162, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_161_161, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSCallMagicGoal_46));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_161_161, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_162_162));
    }
    {
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__V_161_161, hlds__make_hlds__goal_expr_to_goal__GoalInfo_44, &hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunction_65);
    }
    {
      hlds__make_hlds__goal_expr_to_goal__IOStateVars_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__IOStateVars_66, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVarBefore_47));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__IOStateVars_66, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVarAfter_54));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_165_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_165_165, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVars_66));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_164_164 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_164_164, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_165_165));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_164_164, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVar_39));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_164_164, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunction_65));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__GoalExpr_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_67, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_164_164));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__make_hlds__goal_expr_to_goal__TryGoal_32 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_67));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_44));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_1,
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_3,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HeadVar__4_4,
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__5_5,
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__6_6,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HeadVar__7_7,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_8,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_9,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_11,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_12,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_13,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_14,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_15)
{
  {
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;

    if ((hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *hlds__make_hlds__goal_expr_to_goal__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_15 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_14;
        *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_13 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_12;
        *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_11 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_10;
        *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_9 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_8;
        *hlds__make_hlds__goal_expr_to_goal__HeadVar__7_7 = hlds__make_hlds__goal_expr_to_goal__HeadVar__6_6;
      }
    else
      {
        MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__goal_expr_to_goal__Goals_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__goal_expr_to_goal__DisjState_38;
        MR_Word hlds__make_hlds__goal_expr_to_goal__DisjStates_39;
        MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal_46;
        MR_Word hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_47;
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58_58;
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_59_59;
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_60_60;
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_61_61;
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_62_62;

        {
          hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_1, hlds__make_hlds__goal_expr_to_goal__Goal_35, hlds__make_hlds__goal_expr_to_goal__Renaming_3, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal_46, hlds__make_hlds__goal_expr_to_goal__HeadVar__5_5, &hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_47, hlds__make_hlds__goal_expr_to_goal__HeadVar__6_6, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58_58, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_8, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_59_59, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_10, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_60_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_12, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_61_61, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_14, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_62_62);
        }
        {
          hlds__make_hlds__goal_expr_to_goal__DisjState_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__DisjState_38, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSGoal_46));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__DisjState_38, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_47));
        }
        {
          hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_1, hlds__make_hlds__goal_expr_to_goal__Goals_36, hlds__make_hlds__goal_expr_to_goal__Renaming_3, &hlds__make_hlds__goal_expr_to_goal__DisjStates_39, hlds__make_hlds__goal_expr_to_goal__HeadVar__5_5, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58_58, hlds__make_hlds__goal_expr_to_goal__HeadVar__7_7, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_59_59, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_9, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_60_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_11, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_61_61, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_13, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_62_62, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_15);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__goal_expr_to_goal__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__DisjState_38));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__DisjStates_39));
        }
      }
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_17,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_18,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_19,
  MR_Word hlds__make_hlds__goal_expr_to_goal__DisjStates0_20,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__DisjStates_21,
  MR_Word hlds__make_hlds__goal_expr_to_goal__SVarStateBefore_22,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_35,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_36,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_37,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_38,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_40,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_41,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_42,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_43,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_44)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)))) == (MR_Integer) 2)));
        MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalA_29;
        MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalB_30;
        MR_Word hlds__make_hlds__goal_expr_to_goal___Context_28;

        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
          {
            hlds__make_hlds__goal_expr_to_goal___Context_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
            hlds__make_hlds__goal_expr_to_goal__SubGoalA_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
            hlds__make_hlds__goal_expr_to_goal__SubGoalB_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
            {
              MR_Word hlds__make_hlds__goal_expr_to_goal__DisjStates1_31;
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_45_45;
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_46_46;
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_47_47;
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_48_48;
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_49_49;

              {
                hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalB_30, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__DisjStates0_20, &hlds__make_hlds__goal_expr_to_goal__DisjStates1_31, hlds__make_hlds__goal_expr_to_goal__SVarStateBefore_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_35, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_45_45, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_37, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_46_46, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_47_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_41, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_48_48, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_43, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_49_49);
              }
              /* direct tailcall eliminated */
              {
                MR_Word hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_18 = hlds__make_hlds__goal_expr_to_goal__SubGoalA_29;
                MR_Word hlds__make_hlds__goal_expr_to_goal__DisjStates0__tmp_copy_20 = hlds__make_hlds__goal_expr_to_goal__DisjStates1_31;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_45_45;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_46_46;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_47_47;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_48_48;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_49_49;

                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_43;
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_41;
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_39;
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_37;
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_35;
                hlds__make_hlds__goal_expr_to_goal__DisjStates0_20 = hlds__make_hlds__goal_expr_to_goal__DisjStates0__tmp_copy_20;
                hlds__make_hlds__goal_expr_to_goal__Goal_18 = hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_18;
              }
              continue;
            }
          }
        else
          {
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal_32;
            MR_Word hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_33;
            MR_Word hlds__make_hlds__goal_expr_to_goal__DisjState_34;

            {
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Goal_18, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal_32, hlds__make_hlds__goal_expr_to_goal__SVarStateBefore_22, &hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_33, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_35, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_36, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_37, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_38, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_41, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_42, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_43, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_44);
            }
            {
              hlds__make_hlds__goal_expr_to_goal__DisjState_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__DisjState_34, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSGoal_32));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__DisjState_34, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_33));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__make_hlds__goal_expr_to_goal__DisjStates_21 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__DisjState_34));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__DisjStates0_20));
            }
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__accumulate_par_conjuncts_17_p_0(
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_19,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_20,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_38,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_40,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_42,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_44,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_46,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_48)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 0)))) == (MR_Integer) 5)));
        MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalA_29;
        MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalB_30;
        MR_Word hlds__make_hlds__goal_expr_to_goal___Context_28;

        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
          {
            hlds__make_hlds__goal_expr_to_goal___Context_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 1)));
            hlds__make_hlds__goal_expr_to_goal__SubGoalA_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 2)));
            hlds__make_hlds__goal_expr_to_goal__SubGoalB_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 3)));
            {
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_49_49;
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50_50;
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_51_51;
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52_52;
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53_53;
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_54_54;
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_55_55;

              {
                hlds__make_hlds__goal_expr_to_goal__accumulate_par_conjuncts_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__SubGoalA_29, hlds__make_hlds__goal_expr_to_goal__Renaming_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_49_49, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_51_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52_52, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_54_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_55_55);
              }
              /* direct tailcall eliminated */
              {
                MR_Word hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_19 = hlds__make_hlds__goal_expr_to_goal__SubGoalB_30;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0__tmp_copy_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_49_49;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0__tmp_copy_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50_50;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_51_51;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52_52;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53_53;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_45 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_54_54;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_47 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_55_55;

                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_47;
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_45;
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_43;
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_41;
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_39;
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0__tmp_copy_37;
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0__tmp_copy_35;
                hlds__make_hlds__goal_expr_to_goal__Goal_19 = hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_19;
              }
              continue;
            }
          }
        else
          {
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31;
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32;
            MR_Word hlds__make_hlds__goal_expr_to_goal__V_33_33;
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_34;
            MR_Word hlds__make_hlds__goal_expr_to_goal__V_69_69;

            {
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__Goal_19, hlds__make_hlds__goal_expr_to_goal__Renaming_20, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_38, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_42, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_44, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_46, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_48);
            }
            hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31, (MR_Integer) 0)));
            hlds__make_hlds__goal_expr_to_goal__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31, (MR_Integer) 1)));
            hlds__make_hlds__goal_expr_to_goal__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
              {
                hlds__make_hlds__goal_expr_to_goal__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32, (MR_Integer) 1)));
                hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32, (MR_Integer) 2)));
                hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_69_69 == (MR_Integer) 1);
              }
            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
              {
                MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_73_73 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                MR_Word hlds__make_hlds__goal_expr_to_goal__V_71_71;

                {
                  hlds__make_hlds__goal_expr_to_goal__V_71_71 = mercury__cord__from_list_1_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_73_73, hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_34);
                }
                {
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36 = mercury__cord__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_73_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35, hlds__make_hlds__goal_expr_to_goal__V_71_71);
                }
              }
            else
              {
                {
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31)));
                }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__accumulate_plain_conjuncts_17_p_0(
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_19,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_20,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_38,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_40,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_42,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_44,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_46,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_48)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_19)) == (MR_mktag((MR_Integer) 2)));
        MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalA_29;
        MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalB_30;
        MR_Word hlds__make_hlds__goal_expr_to_goal___Context_28;

        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
          {
            hlds__make_hlds__goal_expr_to_goal___Context_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 0)));
            hlds__make_hlds__goal_expr_to_goal__SubGoalA_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 1)));
            hlds__make_hlds__goal_expr_to_goal__SubGoalB_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 2)));
            {
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_49_49;
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50_50;
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_51_51;
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52_52;
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53_53;
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_54_54;
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_55_55;

              {
                hlds__make_hlds__goal_expr_to_goal__accumulate_plain_conjuncts_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__SubGoalA_29, hlds__make_hlds__goal_expr_to_goal__Renaming_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_49_49, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_51_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52_52, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_54_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_55_55);
              }
              /* direct tailcall eliminated */
              {
                MR_Word hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_19 = hlds__make_hlds__goal_expr_to_goal__SubGoalB_30;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0__tmp_copy_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_49_49;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0__tmp_copy_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50_50;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_51_51;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52_52;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53_53;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_45 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_54_54;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_47 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_55_55;

                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_47;
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_45;
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_43;
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_41;
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_39;
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0__tmp_copy_37;
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0__tmp_copy_35;
                hlds__make_hlds__goal_expr_to_goal__Goal_19 = hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_19;
              }
              continue;
            }
          }
        else
          {
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31;
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32;
            MR_Word hlds__make_hlds__goal_expr_to_goal__V_33_33;
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_34;
            MR_Word hlds__make_hlds__goal_expr_to_goal__V_69_69;

            {
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__Goal_19, hlds__make_hlds__goal_expr_to_goal__Renaming_20, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_38, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_42, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_44, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_46, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_48);
            }
            hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31, (MR_Integer) 0)));
            hlds__make_hlds__goal_expr_to_goal__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31, (MR_Integer) 1)));
            hlds__make_hlds__goal_expr_to_goal__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
              {
                hlds__make_hlds__goal_expr_to_goal__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32, (MR_Integer) 1)));
                hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32, (MR_Integer) 2)));
                hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_69_69 == (MR_Integer) 0);
              }
            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
              {
                MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_73_73 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                MR_Word hlds__make_hlds__goal_expr_to_goal__V_71_71;

                {
                  hlds__make_hlds__goal_expr_to_goal__V_71_71 = mercury__cord__from_list_1_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_73_73, hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_34);
                }
                {
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36 = mercury__cord__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_73_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35, hlds__make_hlds__goal_expr_to_goal__V_71_71);
                }
              }
            else
              {
                {
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31)));
                }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_p_0(
  MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_18,
  MR_Word hlds__make_hlds__goal_expr_to_goal__FieldNames_19,
  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms_20,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_21,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_55,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_56,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_57,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_59,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_60,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_61,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_62,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_63,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_64,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_65,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66)
{
  {
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
    MR_Word hlds__make_hlds__goal_expr_to_goal__ArgVars_29;
    MR_Word hlds__make_hlds__goal_expr_to_goal__FieldValueVar_33;
    MR_Word hlds__make_hlds__goal_expr_to_goal__TermInputVar_34;
    MR_Word hlds__make_hlds__goal_expr_to_goal__TermOutputVar_35;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_67_67;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_68_68;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_69_69;
    MR_Word hlds__make_hlds__goal_expr_to_goal__FieldValueVarPrime_30;
    MR_Word hlds__make_hlds__goal_expr_to_goal__TermInputVarPrime_31;
    MR_Word hlds__make_hlds__goal_expr_to_goal__TermOutputVarPrime_32;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_70_70;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_71_71;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_72_72;

    {
      hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(hlds__make_hlds__goal_expr_to_goal__ArgTerms_20, &hlds__make_hlds__goal_expr_to_goal__ArgVars_29, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_59, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_67_67, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_55, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_68_68, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_65, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_69_69);
    }
    hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__ArgVars_29)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
      {
        hlds__make_hlds__goal_expr_to_goal__FieldValueVarPrime_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgVars_29, (MR_Integer) 0)));
        hlds__make_hlds__goal_expr_to_goal__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgVars_29, (MR_Integer) 1)));
        hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_70_70)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
          {
            hlds__make_hlds__goal_expr_to_goal__TermInputVarPrime_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_70_70, (MR_Integer) 0)));
            hlds__make_hlds__goal_expr_to_goal__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_70_70, (MR_Integer) 1)));
            hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_71_71)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
              {
                hlds__make_hlds__goal_expr_to_goal__TermOutputVarPrime_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_71_71, (MR_Integer) 0)));
                hlds__make_hlds__goal_expr_to_goal__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_71_71, (MR_Integer) 1)));
                hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
          }
      }
    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
      {
        hlds__make_hlds__goal_expr_to_goal__FieldValueVar_33 = hlds__make_hlds__goal_expr_to_goal__FieldValueVarPrime_30;
        hlds__make_hlds__goal_expr_to_goal__TermInputVar_34 = hlds__make_hlds__goal_expr_to_goal__TermInputVarPrime_31;
        hlds__make_hlds__goal_expr_to_goal__TermOutputVar_35 = hlds__make_hlds__goal_expr_to_goal__TermOutputVarPrime_32;
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.goal_expr_to_goal", (MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "arity != 3");
          return;
        }
      }
    switch (hlds__make_hlds__goal_expr_to_goal__AccessType_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_78_78;
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_79_79;
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_80_80;
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81;
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_82_82;
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_83_83;
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_84_84;
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_91_91;
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_94_94;
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_95_95;
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_96_96;
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_97_97;
          MR_Word hlds__make_hlds__goal_expr_to_goal__Functor_137;
          MR_Word hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_138;
          MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_139;
          MR_Word hlds__make_hlds__goal_expr_to_goal__FieldArgContext_141;
          MR_Word hlds__make_hlds__goal_expr_to_goal__FuncName_146;
          MR_Integer hlds__make_hlds__goal_expr_to_goal__FuncArity_147;
          MR_Word hlds__make_hlds__goal_expr_to_goal__SimpleCallId_149;
          MR_Word hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_150;
          MR_Word hlds__make_hlds__goal_expr_to_goal__ArgContexts_151;
          MR_Word hlds__make_hlds__goal_expr_to_goal___InnerSubContext_53;
          MR_Word hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_135;
          MR_Integer hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_136;
          MR_Word hlds__make_hlds__goal_expr_to_goal___TC_54;

          {
            hlds__make_hlds__field_access__expand_dcg_field_extraction_goal_22_p_0(hlds__make_hlds__goal_expr_to_goal__Context_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__goal_expr_to_goal__FieldNames_19, hlds__make_hlds__goal_expr_to_goal__FieldValueVar_33, hlds__make_hlds__goal_expr_to_goal__TermInputVar_34, hlds__make_hlds__goal_expr_to_goal__TermOutputVar_35, &hlds__make_hlds__goal_expr_to_goal__Functor_137, &hlds__make_hlds__goal_expr_to_goal__V_78_78, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_139, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_68_68, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_79_79, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_57, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_80_80, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_67_67, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_82_82, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_63, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_83_83, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_69_69, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_84_84);
          }
          hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_78_78, (MR_Integer) 0)));
          hlds__make_hlds__goal_expr_to_goal___InnerSubContext_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_78_78, (MR_Integer) 1)));
          {
            hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_150 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_150, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Functor_137));
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_150, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          hlds__make_hlds__goal_expr_to_goal__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_138)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_138, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
            {
              hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_138, (MR_Integer) 1)));
              hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_136 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_138, (MR_Integer) 2)));
              hlds__make_hlds__goal_expr_to_goal___TC_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_138, (MR_Integer) 3)));
              hlds__make_hlds__goal_expr_to_goal__FuncName_146 = hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_135;
              hlds__make_hlds__goal_expr_to_goal__FuncArity_147 = hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_136;
            }
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.goal_expr_to_goal", (MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "not cons");
                return;
              }
            }
          {
            hlds__make_hlds__goal_expr_to_goal__SimpleCallId_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_149, 0) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_149, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FuncName_146));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_149, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FuncArity_147));
          }
          {
            hlds__make_hlds__goal_expr_to_goal__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_91_91, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SimpleCallId_149));
          }
          {
            hlds__make_hlds__goal_expr_to_goal__FieldArgContext_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__FieldArgContext_141, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_91_91));
          }
          {
            hlds__make_hlds__goal_expr_to_goal__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_94_94, 0) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_94_94, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FieldArgContext_141));
          }
          {
            hlds__make_hlds__goal_expr_to_goal__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_96_96, 0) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_96_96, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_150));
          }
          {
            hlds__make_hlds__goal_expr_to_goal__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_97_97, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_96_96));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__goal_expr_to_goal__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_95_95, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_96_96));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_95_95, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_97_97));
          }
          {
            hlds__make_hlds__goal_expr_to_goal__ArgContexts_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgContexts_151, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_94_94));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgContexts_151, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_95_95));
          }
          {
            hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_p_0(hlds__make_hlds__goal_expr_to_goal__ArgVars_29, hlds__make_hlds__goal_expr_to_goal__ArgTerms_20, hlds__make_hlds__goal_expr_to_goal__ArgContexts_151, hlds__make_hlds__goal_expr_to_goal__Context_21, hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_139, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_79_79, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_80_80, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_82_82, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_62, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_83_83, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_64, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_84_84, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__make_hlds__goal_expr_to_goal__Functor_36;
          MR_Word hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_37;
          MR_Word hlds__make_hlds__goal_expr_to_goal__InnermostSubContext_38;
          MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_39;
          MR_Word hlds__make_hlds__goal_expr_to_goal__FieldArgContext_41;
          MR_Word hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_43;
          MR_Word hlds__make_hlds__goal_expr_to_goal__FuncName_47;
          MR_Integer hlds__make_hlds__goal_expr_to_goal__FuncArity_48;
          MR_Word hlds__make_hlds__goal_expr_to_goal__SimpleCallId_50;
          MR_Word hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_51;
          MR_Word hlds__make_hlds__goal_expr_to_goal__ArgContexts_52;
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_108_108;
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_109_109;
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_110_110;
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_111_111;
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_112_112;
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_113_113;
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_114_114;
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_122_122;
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_123_123;
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_124_124;
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_125_125;
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_126_126;
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_127_127;
          MR_Word hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_44;
          MR_Integer hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_45;
          MR_Word hlds__make_hlds__goal_expr_to_goal___TypeCtor_46;

          {
            hlds__make_hlds__field_access__expand_set_field_function_call_22_p_0(hlds__make_hlds__goal_expr_to_goal__Context_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__goal_expr_to_goal__FieldNames_19, hlds__make_hlds__goal_expr_to_goal__FieldValueVar_33, hlds__make_hlds__goal_expr_to_goal__TermInputVar_34, hlds__make_hlds__goal_expr_to_goal__TermOutputVar_35, &hlds__make_hlds__goal_expr_to_goal__Functor_36, &hlds__make_hlds__goal_expr_to_goal__V_108_108, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_68_68, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_109_109, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_57, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_110_110, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_67_67, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_111_111, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_112_112, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_63, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_113_113, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_69_69, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_114_114);
          }
          hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_108_108, (MR_Integer) 0)));
          hlds__make_hlds__goal_expr_to_goal__InnermostSubContext_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_108_108, (MR_Integer) 1)));
          {
            hlds__make_hlds__goal_expr_to_goal__FieldArgContext_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__FieldArgContext_41, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_37));
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__FieldArgContext_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__FieldArgContext_41, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnermostSubContext_38));
          }
          {
            hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_43, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Functor_36));
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_43, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          hlds__make_hlds__goal_expr_to_goal__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Functor_36)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Functor_36, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
            {
              hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Functor_36, (MR_Integer) 1)));
              hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_45 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Functor_36, (MR_Integer) 2)));
              hlds__make_hlds__goal_expr_to_goal___TypeCtor_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Functor_36, (MR_Integer) 3)));
              hlds__make_hlds__goal_expr_to_goal__FuncName_47 = hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_44;
              hlds__make_hlds__goal_expr_to_goal__FuncArity_48 = hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_45;
            }
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.goal_expr_to_goal", (MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "not cons");
                return;
              }
            }
          {
            hlds__make_hlds__goal_expr_to_goal__SimpleCallId_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_50, 0) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_50, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FuncName_47));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_50, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FuncArity_48));
          }
          {
            hlds__make_hlds__goal_expr_to_goal__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_122_122, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SimpleCallId_50));
          }
          {
            hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_51, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_122_122));
          }
          {
            hlds__make_hlds__goal_expr_to_goal__V_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_123_123, 0) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_123_123, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FieldArgContext_41));
          }
          {
            hlds__make_hlds__goal_expr_to_goal__V_125_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_125_125, 0) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_125_125, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_43));
          }
          {
            hlds__make_hlds__goal_expr_to_goal__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_127_127, 0) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_127_127, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_51));
          }
          {
            hlds__make_hlds__goal_expr_to_goal__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_126_126, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_127_127));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_126_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__goal_expr_to_goal__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_124_124, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_125_125));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_124_124, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_126_126));
          }
          {
            hlds__make_hlds__goal_expr_to_goal__ArgContexts_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgContexts_52, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_123_123));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgContexts_52, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_124_124));
          }
          {
            hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_p_0(hlds__make_hlds__goal_expr_to_goal__ArgVars_29, hlds__make_hlds__goal_expr_to_goal__ArgTerms_20, hlds__make_hlds__goal_expr_to_goal__ArgContexts_52, hlds__make_hlds__goal_expr_to_goal__Context_21, hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_39, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_109_109, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_110_110, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_111_111, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_112_112, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_62, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_113_113, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_64, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_114_114, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_p_0(
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
  MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_19,
  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_21,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_46,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_47,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_48,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_49,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_50,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_51,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_52,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_54,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_55,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_56,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_57)
{
  {
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_29;
    MR_Word hlds__make_hlds__goal_expr_to_goal__FieldNameTerm_34;
    MR_Word hlds__make_hlds__goal_expr_to_goal__FieldValueTerm_35;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_59_59;
    MR_Word hlds__make_hlds__goal_expr_to_goal__LHSTerm_30;
    MR_Word hlds__make_hlds__goal_expr_to_goal__RHSTerm_31;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_58_58;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_60_60;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_61_61;
    MR_Word hlds__make_hlds__goal_expr_to_goal__TermInputTerm_32;
    MR_Word hlds__make_hlds__goal_expr_to_goal__TermOutputTerm_33;

    {
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_21, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_29);
    }
    hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
      {
        hlds__make_hlds__goal_expr_to_goal__LHSTerm_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20, (MR_Integer) 0)));
        hlds__make_hlds__goal_expr_to_goal__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20, (MR_Integer) 1)));
        hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_58_58)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
          {
            hlds__make_hlds__goal_expr_to_goal__RHSTerm_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_58_58, (MR_Integer) 0)));
            hlds__make_hlds__goal_expr_to_goal__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_58_58, (MR_Integer) 1)));
            hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_59_59)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
              {
                hlds__make_hlds__goal_expr_to_goal__TermInputTerm_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_59_59, (MR_Integer) 0)));
                hlds__make_hlds__goal_expr_to_goal__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_59_59, (MR_Integer) 1)));
                hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_60_60)) == (MR_mktag((MR_Integer) 1)));
                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                  {
                    hlds__make_hlds__goal_expr_to_goal__TermOutputTerm_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_60_60, (MR_Integer) 0)));
                    hlds__make_hlds__goal_expr_to_goal__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_60_60, (MR_Integer) 1)));
                    hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_61_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                      switch (hlds__make_hlds__goal_expr_to_goal__AccessType_19) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            hlds__make_hlds__goal_expr_to_goal__FieldNameTerm_34 = hlds__make_hlds__goal_expr_to_goal__RHSTerm_31;
                            hlds__make_hlds__goal_expr_to_goal__FieldValueTerm_35 = hlds__make_hlds__goal_expr_to_goal__LHSTerm_30;
                            hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_62_62;
                            MR_String hlds__make_hlds__goal_expr_to_goal__V_63_63;
                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_64_64;
                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_65_65;
                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_37_37;

                            hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__LHSTerm_30)) == (MR_mktag((MR_Integer) 0)));
                            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                              {
                                hlds__make_hlds__goal_expr_to_goal__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm_30, (MR_Integer) 0)));
                                hlds__make_hlds__goal_expr_to_goal__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm_30, (MR_Integer) 1)));
                                hlds__make_hlds__goal_expr_to_goal__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm_30, (MR_Integer) 2)));
                                hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_62_62)) == (MR_mktag((MR_Integer) 0)));
                                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                                  {
                                    hlds__make_hlds__goal_expr_to_goal__V_63_63 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_62_62, (MR_Integer) 0)));
                                    hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_63_63, (MR_String) "^") == 0);
                                    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                                      {
                                        hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_64_64)) == (MR_mktag((MR_Integer) 1)));
                                        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                                          {
                                            hlds__make_hlds__goal_expr_to_goal__FieldNameTerm_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_64_64, (MR_Integer) 0)));
                                            hlds__make_hlds__goal_expr_to_goal__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_64_64, (MR_Integer) 1)));
                                            hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_65_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                                              {
                                                hlds__make_hlds__goal_expr_to_goal__FieldValueTerm_35 = hlds__make_hlds__goal_expr_to_goal__RHSTerm_31;
                                                hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
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
    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
      {
        MR_Word hlds__make_hlds__goal_expr_to_goal__ContextPieces_38;
        MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeFieldNames_39;

        {
          hlds__make_hlds__goal_expr_to_goal__ContextPieces_38 = hlds__make_hlds__goal_expr_to_goal__dcg_field_error_context_pieces_1_f_0(hlds__make_hlds__goal_expr_to_goal__AccessType_19);
        }
        {
          hlds__make_hlds__field_access__parse_field_list_4_p_0(hlds__make_hlds__goal_expr_to_goal__FieldNameTerm_34, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_50, hlds__make_hlds__goal_expr_to_goal__ContextPieces_38, &hlds__make_hlds__goal_expr_to_goal__MaybeFieldNames_39);
        }
        if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__MaybeFieldNames_39)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word hlds__make_hlds__goal_expr_to_goal__FieldNamesSpecs_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MaybeFieldNames_39, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66_66;

            {
              hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66_66 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__goal_expr_to_goal__FieldNamesSpecs_42, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_56);
            }
            {
              hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_p_0((MR_String) "^", hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20, hlds__make_hlds__goal_expr_to_goal__GoalInfo_29, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_46, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66_66, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_57);
            }
            {
              hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_55);
            }
            *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_49 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_48;
            *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_52;
          }
        else
          {
            MR_Word hlds__make_hlds__goal_expr_to_goal__FieldNames_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeFieldNames_39, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms_41;
            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_76_76;

            {
              hlds__make_hlds__goal_expr_to_goal__ArgTerms_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms_41, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FieldValueTerm_35));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms_41, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_59_59));
            }
            {
              hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_p_0(hlds__make_hlds__goal_expr_to_goal__AccessType_19, hlds__make_hlds__goal_expr_to_goal__FieldNames_40, hlds__make_hlds__goal_expr_to_goal__ArgTerms_41, hlds__make_hlds__goal_expr_to_goal__Context_21, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_46, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_76_76, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_48, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_49, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_52, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_55, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_57);
            }
            {
              hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_76_76, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_47);
            }
          }
      }
    else
      {
        MR_Word hlds__make_hlds__goal_expr_to_goal__Msg_44;
        MR_Word hlds__make_hlds__goal_expr_to_goal__Spec_45;
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_86_86;
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_111_111;

        {
          hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_p_0((MR_String) "^", hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20, hlds__make_hlds__goal_expr_to_goal__GoalInfo_29, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_46, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_56, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_86_86);
        }
        {
          hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_55);
        }
        {
          hlds__make_hlds__goal_expr_to_goal__Msg_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Msg_44, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_21));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Msg_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[35])));
        }
        {
          hlds__make_hlds__goal_expr_to_goal__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_111_111, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Msg_44));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__goal_expr_to_goal__Spec_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_45, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_111_111));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_57 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Spec_45));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_86_86));
        }
        *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_52;
        *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_49 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_48;
      }
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0_1(
  MR_Box hlds__make_hlds__goal_expr_to_goal__closure_arg,
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2,
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3,
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_4,
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_5,
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_6,
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_7,
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_8)
{
  {
    MR_Box hlds__make_hlds__goal_expr_to_goal__closure = hlds__make_hlds__goal_expr_to_goal__closure_arg;
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv3_HeadVar__3_3;
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv2_HeadVar__5_5;
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv1_HeadVar__7_7;
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__9_9;

    {
      hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1), &hlds__make_hlds__goal_expr_to_goal__conv3_HeadVar__3_3, ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3), &hlds__make_hlds__goal_expr_to_goal__conv2_HeadVar__5_5, ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_5), &hlds__make_hlds__goal_expr_to_goal__conv1_HeadVar__7_7, ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_7), &hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__9_9);
    }
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv3_HeadVar__3_3));
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv2_HeadVar__5_5));
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_6 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv1_HeadVar__7_7));
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_8 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__9_9));
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_23,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars0_24,
  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars0_25,
  MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars0_26,
  MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars0_27,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_28,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_29,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__QuantVars_30,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_31,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HLDSGoal_32,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_47,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_48,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_49,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_50,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_51,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_53,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_54,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_55,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_56,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_57,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_58)
{
  {
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_88_88 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97;
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeInfo_98_98;
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_99_99;
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_39;
    MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars1_40;
    MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars1_41;
    MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars1_42;
    MR_Word hlds__make_hlds__goal_expr_to_goal__OldStateVars_43;
    MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars_44;
    MR_Word hlds__make_hlds__goal_expr_to_goal__NewStateVars_45;
    MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars_46;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_63_63;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_64_64;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_65_65;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66_66;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_68_68;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_69_69;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_70_70;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_71_71;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_73_73;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_76_76;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_78_78;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_79_79;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_80_80;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_85_85;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_86_86;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_87_87;
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv6_STATE_VARIABLE_VarSet_64_64;
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv5_STATE_VARIABLE_SVarState_65_65;
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv4_STATE_VARIABLE_Specs_66_66;
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv9_STATE_VARIABLE_VarSet_68_68;
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv8_STATE_VARIABLE_SVarState_69_69;
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv7_STATE_VARIABLE_Specs_70_70;
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv12_STATE_VARIABLE_VarSet_78_78;
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv11_STATE_VARIABLE_SVarState_79_79;
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv10_STATE_VARIABLE_Specs_80_80;
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv15_STATE_VARIABLE_VarSet_52;
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv14_STATE_VARIABLE_SVarState_48;
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv13_STATE_VARIABLE_Specs_58;

    {
      parse_tree__prog_rename__rename_var_list_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_88_88, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_29, hlds__make_hlds__goal_expr_to_goal__Vars0_24, &hlds__make_hlds__goal_expr_to_goal__Vars_39);
    }
    {
      parse_tree__prog_rename__rename_var_list_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_88_88, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_29, hlds__make_hlds__goal_expr_to_goal__StateVars0_25, &hlds__make_hlds__goal_expr_to_goal__StateVars1_40);
    }
    {
      parse_tree__prog_rename__rename_var_list_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_88_88, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_29, hlds__make_hlds__goal_expr_to_goal__DotSVars0_26, &hlds__make_hlds__goal_expr_to_goal__DotSVars1_41);
    }
    {
      parse_tree__prog_rename__rename_var_list_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_88_88, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_29, hlds__make_hlds__goal_expr_to_goal__ColonSVars0_27, &hlds__make_hlds__goal_expr_to_goal__ColonSVars1_42);
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_63_63, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_63_63, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_63_63, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
    }
    hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97 = (MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0];
    hlds__make_hlds__goal_expr_to_goal__TypeInfo_98_98 = (MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[2];
    hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_99_99 = (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0;
    hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100 = (MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3];
    {
      mercury__list__map_foldl3_9_p_1(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_98_98, hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_99_99, hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100, hlds__make_hlds__goal_expr_to_goal__V_63_63, hlds__make_hlds__goal_expr_to_goal__StateVars1_40, &hlds__make_hlds__goal_expr_to_goal__OldStateVars_43, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_51)), &hlds__make_hlds__goal_expr_to_goal__conv6_STATE_VARIABLE_VarSet_64_64, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_47)), &hlds__make_hlds__goal_expr_to_goal__conv5_STATE_VARIABLE_SVarState_65_65, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_57)), &hlds__make_hlds__goal_expr_to_goal__conv4_STATE_VARIABLE_Specs_66_66);
    }
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_64_64 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv6_STATE_VARIABLE_VarSet_64_64);
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_65_65 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv5_STATE_VARIABLE_SVarState_65_65);
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66_66 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv4_STATE_VARIABLE_Specs_66_66);
    {
      mercury__list__map_foldl3_9_p_1(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_98_98, hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_99_99, hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100, hlds__make_hlds__goal_expr_to_goal__V_63_63, hlds__make_hlds__goal_expr_to_goal__DotSVars1_41, &hlds__make_hlds__goal_expr_to_goal__DotSVars_44, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_64_64)), &hlds__make_hlds__goal_expr_to_goal__conv9_STATE_VARIABLE_VarSet_68_68, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_65_65)), &hlds__make_hlds__goal_expr_to_goal__conv8_STATE_VARIABLE_SVarState_69_69, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66_66)), &hlds__make_hlds__goal_expr_to_goal__conv7_STATE_VARIABLE_Specs_70_70);
    }
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_68_68 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv9_STATE_VARIABLE_VarSet_68_68);
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_69_69 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv8_STATE_VARIABLE_SVarState_69_69);
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_70_70 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv7_STATE_VARIABLE_Specs_70_70);
    {
      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__Goal_31, hlds__make_hlds__goal_expr_to_goal__Renaming_29, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_32, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_69_69, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_71_71, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_49, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_68_68, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_73_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_55, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_70_70, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_76_76);
    }
    {
      mercury__list__map_foldl3_9_p_1(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_98_98, hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_99_99, hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100, hlds__make_hlds__goal_expr_to_goal__V_63_63, hlds__make_hlds__goal_expr_to_goal__StateVars1_40, &hlds__make_hlds__goal_expr_to_goal__NewStateVars_45, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_73_73)), &hlds__make_hlds__goal_expr_to_goal__conv12_STATE_VARIABLE_VarSet_78_78, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_71_71)), &hlds__make_hlds__goal_expr_to_goal__conv11_STATE_VARIABLE_SVarState_79_79, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_76_76)), &hlds__make_hlds__goal_expr_to_goal__conv10_STATE_VARIABLE_Specs_80_80);
    }
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_78_78 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv12_STATE_VARIABLE_VarSet_78_78);
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_79_79 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv11_STATE_VARIABLE_SVarState_79_79);
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_80_80 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv10_STATE_VARIABLE_Specs_80_80);
    {
      mercury__list__map_foldl3_9_p_1(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_98_98, hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_99_99, hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100, hlds__make_hlds__goal_expr_to_goal__V_63_63, hlds__make_hlds__goal_expr_to_goal__ColonSVars1_42, &hlds__make_hlds__goal_expr_to_goal__ColonSVars_46, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_78_78)), &hlds__make_hlds__goal_expr_to_goal__conv15_STATE_VARIABLE_VarSet_52, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_79_79)), &hlds__make_hlds__goal_expr_to_goal__conv14_STATE_VARIABLE_SVarState_48, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_80_80)), &hlds__make_hlds__goal_expr_to_goal__conv13_STATE_VARIABLE_Specs_58);
    }
    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv15_STATE_VARIABLE_VarSet_52);
    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_48 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv14_STATE_VARIABLE_SVarState_48);
    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_58 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv13_STATE_VARIABLE_Specs_58);
    {
      hlds__make_hlds__goal_expr_to_goal__V_87_87 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__DotSVars_44, hlds__make_hlds__goal_expr_to_goal__ColonSVars_46);
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_86_86 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__NewStateVars_45, hlds__make_hlds__goal_expr_to_goal__V_87_87);
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_85_85 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__OldStateVars_43, hlds__make_hlds__goal_expr_to_goal__V_86_86);
    }
    {
      *hlds__make_hlds__goal_expr_to_goal__QuantVars_30 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__Vars_39, hlds__make_hlds__goal_expr_to_goal__V_85_85);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_8_p_0(
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_9,
  MR_Word hlds__make_hlds__goal_expr_to_goal__VarSet_10,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_11,
  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVar0_12,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__StateVar_13,
  MR_String * hlds__make_hlds__goal_expr_to_goal__StateVarName_14,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__GetGoal_15,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__SetGoal_16)
{
  {
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_41_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word hlds__make_hlds__goal_expr_to_goal__IO_17;
    MR_Word hlds__make_hlds__goal_expr_to_goal__GetPredName_18;
    MR_Word hlds__make_hlds__goal_expr_to_goal__SetPredName_19;
    MR_Word hlds__make_hlds__goal_expr_to_goal__SetVar_20;
    MR_Word hlds__make_hlds__goal_expr_to_goal__UseVar_21;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_29_29;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_30_30;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_37_37;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_39_39;

    {
      parse_tree__prog_rename__rename_var_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_41_41, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_11, hlds__make_hlds__goal_expr_to_goal__StateVar0_12, hlds__make_hlds__goal_expr_to_goal__StateVar_13);
    }
    {
      mercury__varset__lookup_name_3_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_41_41, hlds__make_hlds__goal_expr_to_goal__VarSet_10, *hlds__make_hlds__goal_expr_to_goal__StateVar_13, hlds__make_hlds__goal_expr_to_goal__StateVarName_14);
    }
    {
      hlds__make_hlds__goal_expr_to_goal__IO_17 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
    }
    {
      hlds__make_hlds__goal_expr_to_goal__GetPredName_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__GetPredName_18, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IO_17));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__GetPredName_18, 1) = ((MR_Box) ((MR_String) "unsafe_get_io_state"));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__SetPredName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SetPredName_19, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IO_17));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SetPredName_19, 1) = ((MR_Box) ((MR_String) "unsafe_set_io_state"));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_30_30, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVar0_12));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_30_30, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_9));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_29_29, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_30_30));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__SetVar_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_20, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_20, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_29_29));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_20, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_9));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__UseVar_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_21, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[1]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_21, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_29_29));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_21, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_9));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_37_37, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SetVar_20));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__goal_expr_to_goal__GetGoal_15 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_9));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GetPredName_18));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_37_37));
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_39_39, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__UseVar_21));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__goal_expr_to_goal__SetGoal_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_9));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SetPredName_19));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_39_39));
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) ((MR_Integer) 2));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__extract_trace_mutable_var_8_p_0(
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_9,
  MR_Word hlds__make_hlds__goal_expr_to_goal__VarSet_10,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_11,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Mutable_12,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__MutableHLDS_13,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__StateVar_14,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__GetGoal_15,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__SetGoal_16)
{
  {
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_45_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_String hlds__make_hlds__goal_expr_to_goal__MutableName_17 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Mutable_12, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__goal_expr_to_goal__StateVar0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Mutable_12, (MR_Integer) 1)));
    MR_String hlds__make_hlds__goal_expr_to_goal__StateVarName_19;
    MR_Word hlds__make_hlds__goal_expr_to_goal__GetPredName_20;
    MR_Word hlds__make_hlds__goal_expr_to_goal__SetPredName_21;
    MR_Word hlds__make_hlds__goal_expr_to_goal__SetVar_22;
    MR_Word hlds__make_hlds__goal_expr_to_goal__UseVar_23;
    MR_String hlds__make_hlds__goal_expr_to_goal__V_27_27;
    MR_String hlds__make_hlds__goal_expr_to_goal__V_29_29;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_33_33;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_34_34;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_41_41;
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_43_43;

    {
      parse_tree__prog_rename__rename_var_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_45_45, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_11, hlds__make_hlds__goal_expr_to_goal__StateVar0_18, hlds__make_hlds__goal_expr_to_goal__StateVar_14);
    }
    {
      mercury__varset__lookup_name_3_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_45_45, hlds__make_hlds__goal_expr_to_goal__VarSet_10, *hlds__make_hlds__goal_expr_to_goal__StateVar_14, &hlds__make_hlds__goal_expr_to_goal__StateVarName_19);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__make_hlds__goal_expr_to_goal__MutableHLDS_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MutableName_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVarName_19));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_27_27 = mercury__string__f_43_43_2_f_0((MR_String) "get_", hlds__make_hlds__goal_expr_to_goal__MutableName_17);
    }
    {
      hlds__make_hlds__goal_expr_to_goal__GetPredName_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GetPredName_20, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_27_27));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_29_29 = mercury__string__f_43_43_2_f_0((MR_String) "set_", hlds__make_hlds__goal_expr_to_goal__MutableName_17);
    }
    {
      hlds__make_hlds__goal_expr_to_goal__SetPredName_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetPredName_21, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_29_29));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_34_34, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVar0_18));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_34_34, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_9));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_34_34));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__SetVar_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_22, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_22, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_33_33));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_22, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_9));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__UseVar_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_23, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[1]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_23, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_33_33));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_23, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_9));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_41_41, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SetVar_22));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__goal_expr_to_goal__GetGoal_15 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_9));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GetPredName_20));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_41_41));
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_43_43, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__UseVar_23));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__goal_expr_to_goal__SetGoal_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_9));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SetPredName_21));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_43_43));
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) ((MR_Integer) 2));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__rename_and_maybe_expand_dot_var_11_p_0(
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_12,
  MR_Word hlds__make_hlds__goal_expr_to_goal__MustRename_13,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_14,
  MR_Word hlds__make_hlds__goal_expr_to_goal__PODVar0_15,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Var_16,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_23,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_24,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_25,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_26,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_27,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_28)
{
  {
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;

    if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__PODVar0_15)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word hlds__make_hlds__goal_expr_to_goal__DotVar0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__PODVar0_15, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__goal_expr_to_goal__DotVar_22;

        {
          parse_tree__prog_rename__rename_var_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__MustRename_13, hlds__make_hlds__goal_expr_to_goal__Renaming_14, hlds__make_hlds__goal_expr_to_goal__DotVar0_21, &hlds__make_hlds__goal_expr_to_goal__DotVar_22);
        }
        {
          hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_12, hlds__make_hlds__goal_expr_to_goal__DotVar_22, hlds__make_hlds__goal_expr_to_goal__Var_16, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_25, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_26, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_23, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_24, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_27, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_28);
        }
      }
    else
      {
        MR_Word hlds__make_hlds__goal_expr_to_goal__Var0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__PODVar0_15, (MR_Integer) 0)));

        {
          parse_tree__prog_rename__rename_var_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__MustRename_13, hlds__make_hlds__goal_expr_to_goal__Renaming_14, hlds__make_hlds__goal_expr_to_goal__Var0_20, hlds__make_hlds__goal_expr_to_goal__Var_16);
        }
        *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_24 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_23;
        *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_26 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_25;
        *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_28 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_27;
      }
  }
}

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_1(
  MR_Box hlds__make_hlds__goal_expr_to_goal__closure_arg,
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2,
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3,
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_4,
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_5)
{
  {
    MR_Box hlds__make_hlds__goal_expr_to_goal__closure = hlds__make_hlds__goal_expr_to_goal__closure_arg;
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv3_MutableHLDS_13;
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv2_StateVar_14;
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv1_GetGoal_15;
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv0_SetGoal_16;

    {
      hlds__make_hlds__goal_expr_to_goal__extract_trace_mutable_var_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__closure, (MR_Integer) 5))), ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1), &hlds__make_hlds__goal_expr_to_goal__conv3_MutableHLDS_13, &hlds__make_hlds__goal_expr_to_goal__conv2_StateVar_14, &hlds__make_hlds__goal_expr_to_goal__conv1_GetGoal_15, &hlds__make_hlds__goal_expr_to_goal__conv0_SetGoal_16);
    }
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv3_MutableHLDS_13));
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv2_StateVar_14));
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv1_GetGoal_15));
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv0_SetGoal_16));
  }
}

void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_17,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_18,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_19,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;

        switch (MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_18)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_812_812 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
              MR_Word hlds__make_hlds__goal_expr_to_goal__TermA0_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
              MR_Word hlds__make_hlds__goal_expr_to_goal__TermB0_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
              MR_Word hlds__make_hlds__goal_expr_to_goal__TermA_193;
              MR_Word hlds__make_hlds__goal_expr_to_goal__TermB_194;
              MR_Word hlds__make_hlds__goal_expr_to_goal__Context_785 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)));
              MR_Word hlds__make_hlds__goal_expr_to_goal__Purity_786 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
              MR_Word hlds__make_hlds__goal_expr_to_goal__StateVarA_195;
              MR_Word hlds__make_hlds__goal_expr_to_goal__V_217_217;
              MR_String hlds__make_hlds__goal_expr_to_goal__V_218_218;
              MR_Word hlds__make_hlds__goal_expr_to_goal__V_219_219;
              MR_Word hlds__make_hlds__goal_expr_to_goal__V_220_220;
              MR_Word hlds__make_hlds__goal_expr_to_goal__V_221_221;
              MR_Word hlds__make_hlds__goal_expr_to_goal__V_197_197;
              MR_Word hlds__make_hlds__goal_expr_to_goal__V_196_196;

              {
                parse_tree__prog_rename__rename_vars_in_term_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_812_812, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__TermA0_191, &hlds__make_hlds__goal_expr_to_goal__TermA_193);
              }
              {
                parse_tree__prog_rename__rename_vars_in_term_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_812_812, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__TermB0_192, &hlds__make_hlds__goal_expr_to_goal__TermB_194);
              }
              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__TermA_193)) == (MR_mktag((MR_Integer) 0)));
              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                {
                  hlds__make_hlds__goal_expr_to_goal__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermA_193, (MR_Integer) 0)));
                  hlds__make_hlds__goal_expr_to_goal__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermA_193, (MR_Integer) 1)));
                  hlds__make_hlds__goal_expr_to_goal__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermA_193, (MR_Integer) 2)));
                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_217_217)) == (MR_mktag((MR_Integer) 0)));
                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                    {
                      hlds__make_hlds__goal_expr_to_goal__V_218_218 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_217_217, (MR_Integer) 0)));
                      hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_218_218, (MR_String) "!") == 0);
                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                        {
                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_219_219)) == (MR_mktag((MR_Integer) 1)));
                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                            {
                              hlds__make_hlds__goal_expr_to_goal__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_219_219, (MR_Integer) 0)));
                              hlds__make_hlds__goal_expr_to_goal__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_219_219, (MR_Integer) 1)));
                              hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_221_221 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                                {
                                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_220_220)) == (MR_mktag((MR_Integer) 1)));
                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                                    {
                                      hlds__make_hlds__goal_expr_to_goal__StateVarA_195 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_220_220, (MR_Integer) 0)));
                                      hlds__make_hlds__goal_expr_to_goal__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_220_220, (MR_Integer) 1)));
                                    }
                                }
                            }
                        }
                    }
                }
              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                {
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_222_222;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_223_223;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_224_224;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVarB_198;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_225_225;
                  MR_String hlds__make_hlds__goal_expr_to_goal__V_226_226;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_227_227;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_228_228;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_229_229;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_200_200;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_199_199;

                  {
                    hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(hlds__make_hlds__goal_expr_to_goal__Context_785, hlds__make_hlds__goal_expr_to_goal__StateVarA_195, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_222_222, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_223_223, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_224_224);
                  }
                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__TermB_194)) == (MR_mktag((MR_Integer) 0)));
                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                    {
                      hlds__make_hlds__goal_expr_to_goal__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermB_194, (MR_Integer) 0)));
                      hlds__make_hlds__goal_expr_to_goal__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermB_194, (MR_Integer) 1)));
                      hlds__make_hlds__goal_expr_to_goal__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermB_194, (MR_Integer) 2)));
                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_225_225)) == (MR_mktag((MR_Integer) 0)));
                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                        {
                          hlds__make_hlds__goal_expr_to_goal__V_226_226 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_225_225, (MR_Integer) 0)));
                          hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_226_226, (MR_String) "!") == 0);
                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                            {
                              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_227_227)) == (MR_mktag((MR_Integer) 1)));
                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                                {
                                  hlds__make_hlds__goal_expr_to_goal__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_227_227, (MR_Integer) 0)));
                                  hlds__make_hlds__goal_expr_to_goal__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_227_227, (MR_Integer) 1)));
                                  hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_229_229 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                                    {
                                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_228_228)) == (MR_mktag((MR_Integer) 1)));
                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                                        {
                                          hlds__make_hlds__goal_expr_to_goal__StateVarB_198 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_228_228, (MR_Integer) 0)));
                                          hlds__make_hlds__goal_expr_to_goal__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_228_228, (MR_Integer) 1)));
                                        }
                                    }
                                }
                            }
                        }
                    }
                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                    {
                      hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(hlds__make_hlds__goal_expr_to_goal__Context_785, hlds__make_hlds__goal_expr_to_goal__StateVarB_198, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_222_222, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_223_223, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_224_224, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                    }
                  else
                    {
                      *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_224_224;
                      *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_222_222;
                      *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_223_223;
                    }
                  {
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = hlds__make_goal__true_goal_with_context_1_f_0(hlds__make_hlds__goal_expr_to_goal__Context_785);
                  }
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211;
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209;
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205;
                }
              else
                {
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVarB_784;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_233_233;
                  MR_String hlds__make_hlds__goal_expr_to_goal__V_234_234;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_235_235;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_236_236;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_237_237;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_202_202;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_201_201;

                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__TermB_194)) == (MR_mktag((MR_Integer) 0)));
                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                    {
                      hlds__make_hlds__goal_expr_to_goal__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermB_194, (MR_Integer) 0)));
                      hlds__make_hlds__goal_expr_to_goal__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermB_194, (MR_Integer) 1)));
                      hlds__make_hlds__goal_expr_to_goal__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermB_194, (MR_Integer) 2)));
                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_233_233)) == (MR_mktag((MR_Integer) 0)));
                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                        {
                          hlds__make_hlds__goal_expr_to_goal__V_234_234 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_233_233, (MR_Integer) 0)));
                          hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_234_234, (MR_String) "!") == 0);
                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                            {
                              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_235_235)) == (MR_mktag((MR_Integer) 1)));
                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                                {
                                  hlds__make_hlds__goal_expr_to_goal__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_235_235, (MR_Integer) 0)));
                                  hlds__make_hlds__goal_expr_to_goal__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_235_235, (MR_Integer) 1)));
                                  hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_237_237 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                                    {
                                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_236_236)) == (MR_mktag((MR_Integer) 1)));
                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                                        {
                                          hlds__make_hlds__goal_expr_to_goal__StateVarB_784 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_236_236, (MR_Integer) 0)));
                                          hlds__make_hlds__goal_expr_to_goal__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_236_236, (MR_Integer) 1)));
                                        }
                                    }
                                }
                            }
                        }
                    }
                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                    {
                      {
                        hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(hlds__make_hlds__goal_expr_to_goal__Context_785, hlds__make_hlds__goal_expr_to_goal__StateVarB_784, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                      }
                      {
                        *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = hlds__make_goal__true_goal_0_f_0();
                      }
                      *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211;
                      *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209;
                      *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205;
                    }
                  else
                    {
                      MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_243_243;

                      {
                        hlds__make_hlds__superhomogeneous__unravel_unification_19_p_0(hlds__make_hlds__goal_expr_to_goal__TermA_193, hlds__make_hlds__goal_expr_to_goal__TermB_194, hlds__make_hlds__goal_expr_to_goal__Context_785, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__goal_expr_to_goal__Purity_786, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_243_243, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                      }
                      {
                        hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_243_243, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204);
                      }
                    }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__make_hlds__goal_expr_to_goal__Name_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_254_254;
              MR_Word hlds__make_hlds__goal_expr_to_goal__Context_772 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)));
              MR_Word hlds__make_hlds__goal_expr_to_goal__Purity_775 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
              MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms0_776 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
              MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms1_777;
              MR_Word hlds__make_hlds__goal_expr_to_goal__LHSTerm_165;
              MR_Word hlds__make_hlds__goal_expr_to_goal__RHSTerm_166;
              MR_String hlds__make_hlds__goal_expr_to_goal__V_250_250;
              MR_Word hlds__make_hlds__goal_expr_to_goal__V_251_251;
              MR_Word hlds__make_hlds__goal_expr_to_goal__V_252_252;

              {
                hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(hlds__make_hlds__goal_expr_to_goal__ArgTerms0_776, &hlds__make_hlds__goal_expr_to_goal__ArgTerms1_777);
              }
              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Name_164)) == (MR_mktag((MR_Integer) 0)));
              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                {
                  hlds__make_hlds__goal_expr_to_goal__V_250_250 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Name_164, (MR_Integer) 0)));
                  hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_250_250, (MR_String) "\\=") == 0);
                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                    {
                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__ArgTerms1_777)) == (MR_mktag((MR_Integer) 1)));
                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                        {
                          hlds__make_hlds__goal_expr_to_goal__LHSTerm_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms1_777, (MR_Integer) 0)));
                          hlds__make_hlds__goal_expr_to_goal__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms1_777, (MR_Integer) 1)));
                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_251_251)) == (MR_mktag((MR_Integer) 1)));
                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                            {
                              hlds__make_hlds__goal_expr_to_goal__RHSTerm_166 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_251_251, (MR_Integer) 0)));
                              hlds__make_hlds__goal_expr_to_goal__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_251_251, (MR_Integer) 1)));
                              hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_252_252 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            }
                        }
                    }
                }
              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                {
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_253_253;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__TransformedGoal_733;

                  {
                    hlds__make_hlds__goal_expr_to_goal__V_253_253 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_253_253, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_772));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_253_253, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__LHSTerm_165));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_253_253, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__RHSTerm_166));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_253_253, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Purity_775));
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__TransformedGoal_733 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_733, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_733, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_772));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_733, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_253_253));
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__TransformedGoal_733, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_254_254, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                  }
                }
              else
                {
                  MR_Word hlds__make_hlds__goal_expr_to_goal__RHSTerm0_168;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Remainder_170;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__FieldListContext_171;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_172;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVarContext_173;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_263_263;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__LHSTerm0_167;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVar0_169;
                  MR_String hlds__make_hlds__goal_expr_to_goal__V_260_260;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_261_261;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_262_262;
                  MR_String hlds__make_hlds__goal_expr_to_goal__V_264_264;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_265_265;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_266_266;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_267_267;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_268_268;
                  MR_String hlds__make_hlds__goal_expr_to_goal__V_269_269;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_270_270;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_271_271;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_174_174;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_175_175;

                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Name_164)) == (MR_mktag((MR_Integer) 0)));
                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                    {
                      hlds__make_hlds__goal_expr_to_goal__V_260_260 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Name_164, (MR_Integer) 0)));
                      hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_260_260, (MR_String) ":=") == 0);
                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                        {
                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__ArgTerms1_777)) == (MR_mktag((MR_Integer) 1)));
                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                            {
                              hlds__make_hlds__goal_expr_to_goal__LHSTerm0_167 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms1_777, (MR_Integer) 0)));
                              hlds__make_hlds__goal_expr_to_goal__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms1_777, (MR_Integer) 1)));
                              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_261_261)) == (MR_mktag((MR_Integer) 1)));
                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                                {
                                  hlds__make_hlds__goal_expr_to_goal__RHSTerm0_168 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_261_261, (MR_Integer) 0)));
                                  hlds__make_hlds__goal_expr_to_goal__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_261_261, (MR_Integer) 1)));
                                  hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_262_262 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                                    {
                                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__LHSTerm0_167)) == (MR_mktag((MR_Integer) 0)));
                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                                        {
                                          hlds__make_hlds__goal_expr_to_goal__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm0_167, (MR_Integer) 0)));
                                          hlds__make_hlds__goal_expr_to_goal__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm0_167, (MR_Integer) 1)));
                                          hlds__make_hlds__goal_expr_to_goal__FieldListContext_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm0_167, (MR_Integer) 2)));
                                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_263_263)) == (MR_mktag((MR_Integer) 0)));
                                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                                            {
                                              hlds__make_hlds__goal_expr_to_goal__V_264_264 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_263_263, (MR_Integer) 0)));
                                              hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_264_264, (MR_String) "^") == 0);
                                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                                                {
                                                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_265_265)) == (MR_mktag((MR_Integer) 1)));
                                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                                                    {
                                                      hlds__make_hlds__goal_expr_to_goal__StateVar0_169 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_265_265, (MR_Integer) 0)));
                                                      hlds__make_hlds__goal_expr_to_goal__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_265_265, (MR_Integer) 1)));
                                                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_266_266)) == (MR_mktag((MR_Integer) 1)));
                                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                                                        {
                                                          hlds__make_hlds__goal_expr_to_goal__Remainder_170 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_266_266, (MR_Integer) 0)));
                                                          hlds__make_hlds__goal_expr_to_goal__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_266_266, (MR_Integer) 1)));
                                                          hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_267_267 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                                                            {
                                                              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__StateVar0_169)) == (MR_mktag((MR_Integer) 0)));
                                                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                                                                {
                                                                  hlds__make_hlds__goal_expr_to_goal__V_268_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar0_169, (MR_Integer) 0)));
                                                                  hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar0_169, (MR_Integer) 1)));
                                                                  hlds__make_hlds__goal_expr_to_goal__StateVarContext_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar0_169, (MR_Integer) 2)));
                                                                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_268_268)) == (MR_mktag((MR_Integer) 0)));
                                                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                                                                    {
                                                                      hlds__make_hlds__goal_expr_to_goal__V_269_269 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_268_268, (MR_Integer) 0)));
                                                                      hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_269_269, (MR_String) "!") == 0);
                                                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                                                                        {
                                                                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_172)) == (MR_mktag((MR_Integer) 1)));
                                                                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                                                                            {
                                                                              hlds__make_hlds__goal_expr_to_goal__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_172, (MR_Integer) 0)));
                                                                              hlds__make_hlds__goal_expr_to_goal__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_172, (MR_Integer) 1)));
                                                                              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_270_270)) == (MR_mktag((MR_Integer) 1)));
                                                                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                                                                                {
                                                                                  hlds__make_hlds__goal_expr_to_goal__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_270_270, (MR_Integer) 0)));
                                                                                  hlds__make_hlds__goal_expr_to_goal__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_270_270, (MR_Integer) 1)));
                                                                                  hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_271_271 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                    {
                      MR_Word hlds__make_hlds__goal_expr_to_goal__StateVar_176;
                      MR_Word hlds__make_hlds__goal_expr_to_goal__FieldList_177;
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_278_278;
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_279_279;
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_283_283;
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_284_284;
                      MR_Word hlds__make_hlds__goal_expr_to_goal__TransformedGoal_734;
                      MR_Word hlds__make_hlds__goal_expr_to_goal__LHSTerm_735;
                      MR_Word hlds__make_hlds__goal_expr_to_goal__RHSTerm_736;

                      {
                        hlds__make_hlds__goal_expr_to_goal__LHSTerm_735 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm_735, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[0]));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm_735, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_172));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm_735, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVarContext_173));
                      }
                      {
                        hlds__make_hlds__goal_expr_to_goal__StateVar_176 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar_176, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[1]));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar_176, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_172));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar_176, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVarContext_173));
                      }
                      {
                        hlds__make_hlds__goal_expr_to_goal__V_279_279 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_279_279, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Remainder_170));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_279_279, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        hlds__make_hlds__goal_expr_to_goal__V_278_278 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_278_278, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVar_176));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_278_278, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_279_279));
                      }
                      {
                        hlds__make_hlds__goal_expr_to_goal__FieldList_177 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__FieldList_177, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_263_263));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__FieldList_177, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_278_278));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__FieldList_177, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FieldListContext_171));
                      }
                      {
                        hlds__make_hlds__goal_expr_to_goal__V_284_284 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_284_284, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__RHSTerm0_168));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_284_284, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        hlds__make_hlds__goal_expr_to_goal__V_283_283 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_283_283, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FieldList_177));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_283_283, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_284_284));
                      }
                      {
                        hlds__make_hlds__goal_expr_to_goal__RHSTerm_736 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__RHSTerm_736, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[2]));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__RHSTerm_736, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_283_283));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__RHSTerm_736, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_772));
                      }
                      {
                        hlds__make_hlds__goal_expr_to_goal__TransformedGoal_734 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_734, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_772));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_734, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__LHSTerm_735));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_734, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__RHSTerm_736));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_734, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Purity_775));
                      }
                      {
                        hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__TransformedGoal_734, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_254_254, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                      }
                    }
                  else
                    {
                      MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_179;
                      MR_String hlds__make_hlds__goal_expr_to_goal__Operator_178;

                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Name_164)) == (MR_mktag((MR_Integer) 0)));
                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                        {
                          hlds__make_hlds__goal_expr_to_goal__Operator_178 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Name_164, (MR_Integer) 0)));
                          if ((strcmp(hlds__make_hlds__goal_expr_to_goal__Operator_178, (MR_String) ":=") == 0))
                            {
                              hlds__make_hlds__goal_expr_to_goal__AccessType_179 = (MR_Integer) 1;
                              hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
                            }
                          else
                          if ((strcmp(hlds__make_hlds__goal_expr_to_goal__Operator_178, (MR_String) "=^") == 0))
                            {
                              hlds__make_hlds__goal_expr_to_goal__AccessType_179 = (MR_Integer) 0;
                              hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
                            }
                          else
                            hlds__make_hlds__goal_expr_to_goal__succeeded = MR_FALSE;
                        }
                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                        {
                          MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms_737;

                          {
                            parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__ArgTerms1_777, &hlds__make_hlds__goal_expr_to_goal__ArgTerms_737);
                          }
                          {
                            hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__AccessType_179, hlds__make_hlds__goal_expr_to_goal__ArgTerms_737, hlds__make_hlds__goal_expr_to_goal__Context_772, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_254_254, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                          }
                        }
                      else
                        {
                          MR_Word hlds__make_hlds__goal_expr_to_goal__Call_185;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo0_190;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_300_300;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_301_301;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_302_302;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_310_310;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__V_311_311;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_740;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms_741;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVars_742;
                          MR_Integer hlds__make_hlds__goal_expr_to_goal__Arity_743;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_745;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__CallId_746;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__PredVar_180;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__RealHeadVars_181;
                          MR_String hlds__make_hlds__goal_expr_to_goal__V_816_816;

                          {
                            parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__ArgTerms1_777, &hlds__make_hlds__goal_expr_to_goal__ArgTerms_741);
                          }
                          {
                            hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(hlds__make_hlds__goal_expr_to_goal__ArgTerms_741, &hlds__make_hlds__goal_expr_to_goal__HeadVars_742, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_300_300, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_301_301, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_302_302);
                          }
                          {
                            mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[1], hlds__make_hlds__goal_expr_to_goal__ArgTerms_741, &hlds__make_hlds__goal_expr_to_goal__Arity_743);
                          }
                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Name_164)) == (MR_mktag((MR_Integer) 0)));
                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                            {
                              hlds__make_hlds__goal_expr_to_goal__V_816_816 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Name_164, (MR_Integer) 0)));
                              if ((strcmp(hlds__make_hlds__goal_expr_to_goal__V_816_816, (MR_String) "") == 0))
                                hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
                              else
                              if ((strcmp(hlds__make_hlds__goal_expr_to_goal__V_816_816, (MR_String) "call") == 0))
                                hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
                              else
                                hlds__make_hlds__goal_expr_to_goal__succeeded = MR_FALSE;
                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                                {
                                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__HeadVars_742)) == (MR_mktag((MR_Integer) 1)));
                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                                    {
                                      hlds__make_hlds__goal_expr_to_goal__PredVar_180 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVars_742, (MR_Integer) 0)));
                                      hlds__make_hlds__goal_expr_to_goal__RealHeadVars_181 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVars_742, (MR_Integer) 1)));
                                    }
                                }
                            }
                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                            {
                              MR_Word hlds__make_hlds__goal_expr_to_goal__GenericCall_184;
                              MR_Word hlds__make_hlds__goal_expr_to_goal__GenericCallId_186;

                              {
                                hlds__make_hlds__goal_expr_to_goal__GenericCall_184 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GenericCall_184, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__PredVar_180));
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GenericCall_184, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Purity_775));
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GenericCall_184, 2) = ((MR_Box) ((MR_Integer) 0));
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GenericCall_184, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Arity_743));
                              }
                              {
                                hlds__make_hlds__goal_expr_to_goal__Call_185 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_185, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_185, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GenericCall_184));
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_185, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__RealHeadVars_181));
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_185, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_185, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_185, 5) = ((MR_Box) ((MR_Integer) 6));
                              }
                              {
                                hlds__hlds_goal__generic_call_to_id_2_p_0(hlds__make_hlds__goal_expr_to_goal__GenericCall_184, &hlds__make_hlds__goal_expr_to_goal__GenericCallId_186);
                              }
                              {
                                hlds__make_hlds__goal_expr_to_goal__CallId_746 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallId_746, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GenericCallId_186));
                              }
                            }
                          else
                            {
                              MR_Word hlds__make_hlds__goal_expr_to_goal__PredId_187;
                              MR_Integer hlds__make_hlds__goal_expr_to_goal__ModeId_188;
                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_307_307;

                              {
                                hlds__make_hlds__goal_expr_to_goal__PredId_187 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                              }
                              {
                                hlds__make_hlds__goal_expr_to_goal__ModeId_188 = hlds__hlds_pred__invalid_proc_id_0_f_0();
                              }
                              {
                                hlds__make_hlds__goal_expr_to_goal__Call_185 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_185, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__PredId_187));
                                MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_185, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ModeId_188));
                                MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_185, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HeadVars_742));
                                MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_185, 3) = ((MR_Box) ((MR_Integer) 2));
                                MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_185, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_185, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Name_164));
                              }
                              {
                                hlds__make_hlds__goal_expr_to_goal__V_307_307 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_307_307, 0) = ((MR_Box) ((MR_Integer) 0));
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_307_307, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Name_164));
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_307_307, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Arity_743));
                              }
                              {
                                hlds__make_hlds__goal_expr_to_goal__CallId_746 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__CallId_746, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_307_307));
                              }
                            }
                          {
                            hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_772, &hlds__make_hlds__goal_expr_to_goal__GoalInfo0_190);
                          }
                          {
                            hlds__hlds_goal__goal_info_set_purity_3_p_0(hlds__make_hlds__goal_expr_to_goal__Purity_775, hlds__make_hlds__goal_expr_to_goal__GoalInfo0_190, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_740);
                          }
                          {
                            hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_745 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_745, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Call_185));
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_745, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_740));
                          }
                          {
                            hlds__make_hlds__qual_info__record_called_pred_or_func_5_p_0((MR_Integer) 0, hlds__make_hlds__goal_expr_to_goal__Name_164, hlds__make_hlds__goal_expr_to_goal__Arity_743, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_310_310);
                          }
                          {
                            hlds__make_hlds__goal_expr_to_goal__V_311_311 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_311_311, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CallId_746));
                          }
                          {
                            hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(hlds__make_hlds__goal_expr_to_goal__HeadVars_742, hlds__make_hlds__goal_expr_to_goal__ArgTerms_741, hlds__make_hlds__goal_expr_to_goal__Context_772, hlds__make_hlds__goal_expr_to_goal__V_311_311, hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_745, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_301_301, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_254_254, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_300_300, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_310_310, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_302_302, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                          }
                        }
                    }
                }
              {
                hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_254_254, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_804_804 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalA_138 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
              MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalB_139 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
              MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordA_140;
              MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordAB_141;
              MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_142;
              MR_Word hlds__make_hlds__goal_expr_to_goal__V_383_383;
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_384_384;
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_385_385;
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_386_386;
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_387_387;
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_388_388;
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_389_389;
              MR_Word hlds__make_hlds__goal_expr_to_goal__Context_710 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)));
              MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_711;

              {
                hlds__make_hlds__goal_expr_to_goal__V_383_383 = mercury__cord__init_0_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_804_804);
              }
              {
                hlds__make_hlds__goal_expr_to_goal__accumulate_plain_conjuncts_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalA_138, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__V_383_383, &hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordA_140, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_384_384, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_385_385, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_386_386, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_387_387, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_388_388, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_389_389);
              }
              {
                hlds__make_hlds__goal_expr_to_goal__accumulate_plain_conjuncts_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalB_139, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordA_140, &hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordAB_141, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_384_384, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_385_385, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_386_386, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_387_387, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_388_388, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_389_389, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
              }
              {
                hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_142 = mercury__cord__list_1_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_804_804, hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordAB_141);
              }
              {
                hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_710, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_711);
              }
              {
                hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_142, hlds__make_hlds__goal_expr_to_goal__GoalInfo_711, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20);
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_813 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_815;

                  {
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_813, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_815);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_4[0])));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_815));
                  }
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203;
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205;
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207;
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209;
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211;
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_803_803 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars0_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Cond_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Then_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Else_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__BeforeCondSVarState_126;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSCond_127;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__AfterCondSVarState_128;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSThen0_129;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState0_130;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState_131;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSElse0_132;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__AfterElseSVarState_133;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSThen_134;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSElse_135;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_404_404;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_405_405;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_406_406;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_407_407;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_408_408;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_409_409;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_410_410;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_411_411;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_412_412;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_413_413;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_414_414;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_415_415;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_416_416;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_419_419;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_698 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_699;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_700;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars0_701 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_702;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_703;

                  {
                    parse_tree__prog_rename__rename_var_list_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_803_803, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__Vars0_701, &hlds__make_hlds__goal_expr_to_goal__Vars_702);
                  }
                  {
                    parse_tree__prog_rename__rename_var_list_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_803_803, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__StateVars0_122, &hlds__make_hlds__goal_expr_to_goal__StateVars_703);
                  }
                  {
                    hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(hlds__make_hlds__goal_expr_to_goal__Context_698, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__StateVars_703, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, &hlds__make_hlds__goal_expr_to_goal__BeforeCondSVarState_126, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_404_404);
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Cond_123, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSCond_127, hlds__make_hlds__goal_expr_to_goal__BeforeCondSVarState_126, &hlds__make_hlds__goal_expr_to_goal__AfterCondSVarState_128, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_405_405, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_406_406, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_407_407, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_408_408, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_404_404, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_409_409);
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Then_124, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSThen0_129, hlds__make_hlds__goal_expr_to_goal__AfterCondSVarState_128, &hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState0_130, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_405_405, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_410_410, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_406_406, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_411_411, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_407_407, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_412_412, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_408_408, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_413_413, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_409_409, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_414_414);
                  }
                  {
                    hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(hlds__make_hlds__goal_expr_to_goal__StateVars_703, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState0_130, &hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState_131);
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Else_125, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSElse0_132, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, &hlds__make_hlds__goal_expr_to_goal__AfterElseSVarState_133, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_410_410, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_415_415, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_411_411, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_416_416, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_412_412, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_413_413, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_414_414, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_419_419);
                  }
                  {
                    hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Context_698, hlds__make_hlds__goal_expr_to_goal__StateVars_703, hlds__make_hlds__goal_expr_to_goal__HLDSThen0_129, &hlds__make_hlds__goal_expr_to_goal__HLDSThen_134, hlds__make_hlds__goal_expr_to_goal__HLDSElse0_132, &hlds__make_hlds__goal_expr_to_goal__HLDSElse_135, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, hlds__make_hlds__goal_expr_to_goal__AfterCondSVarState_128, hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState_131, hlds__make_hlds__goal_expr_to_goal__AfterElseSVarState_133, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_416_416, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_415_415, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_419_419, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_699 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_699, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_699, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Vars_702));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_699, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSCond_127));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_699, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSThen_134));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_699, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSElse_135));
                  }
                  {
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_698, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_700);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_699));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_700));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates1_144;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates_145;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Disjuncts_146;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_357_357;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_358_358;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_359_359;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_360_360;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_361_361;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_362_362;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_363_363;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_719 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_720;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalA_721 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalB_722 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));

                  {
                    hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalB_722, hlds__make_hlds__goal_expr_to_goal__Renaming_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates1_144, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_357_357, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_358_358, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_359_359, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_360_360, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_361_361);
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalA_721, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates1_144, &hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates_145, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_357_357, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_362_362, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_358_358, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_363_363, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_359_359, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_360_360, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_361_361, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                  }
                  {
                    hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_719, hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates_145, &hlds__make_hlds__goal_expr_to_goal__Disjuncts_146, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_363_363, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_362_362, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206);
                  }
                  {
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_719, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_720);
                  }
                  {
                    hlds__hlds_goal__disj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__Disjuncts_146, hlds__make_hlds__goal_expr_to_goal__GoalInfo_720, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_705 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_706;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_707;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_708 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_709;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_137_137;

                  {
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_708, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_709, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, &hlds__make_hlds__goal_expr_to_goal__V_137_137, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                  }
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203;
                  hlds__make_hlds__goal_expr_to_goal__GoalExpr_706 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_709);
                  {
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_705, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_707);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_706));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_707));
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_29;

                  {
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_27, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_29);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[33])));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_29));
                  }
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203;
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205;
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207;
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209;
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211;
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213;
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_805_805 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_370_370;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_371_371;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_372_372;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_373_373;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_374_374;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_375_375;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_376_376;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_712 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_713;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalA_714 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalB_715 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordA_716;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordAB_717;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_718;

                  {
                    hlds__make_hlds__goal_expr_to_goal__V_370_370 = mercury__cord__init_0_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_805_805);
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__accumulate_par_conjuncts_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalA_714, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__V_370_370, &hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordA_716, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_371_371, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_372_372, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_373_373, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_374_374, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_375_375, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_376_376);
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__accumulate_par_conjuncts_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalB_715, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordA_716, &hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordAB_717, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_371_371, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_372_372, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_373_373, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_374_374, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_375_375, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_376_376, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_718 = mercury__cord__list_1_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_805_805, hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordAB_717);
                  }
                  {
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_712, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_713);
                  }
                  {
                    hlds__hlds_goal__par_conj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_718, hlds__make_hlds__goal_expr_to_goal__GoalInfo_713, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20);
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word hlds__make_hlds__goal_expr_to_goal__QuantType_30 = ((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)))) & (MR_Integer) 1);
                  MR_Word hlds__make_hlds__goal_expr_to_goal__VarsKind_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_615 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));

                  switch (hlds__make_hlds__goal_expr_to_goal__QuantType_30) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Word hlds__make_hlds__goal_expr_to_goal__TransformedGoal_34;
                        MR_Word hlds__make_hlds__goal_expr_to_goal__V_599_599;
                        MR_Word hlds__make_hlds__goal_expr_to_goal__V_601_601;

                        {
                          hlds__make_hlds__goal_expr_to_goal__V_601_601 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_601_601, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_601_601, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_615));
                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_601_601, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal_33));
                        }
                        {
                          hlds__make_hlds__goal_expr_to_goal__V_599_599 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_599_599, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_599_599, 1) = ((MR_Box) (((MR_Integer) 0 | ((hlds__make_hlds__goal_expr_to_goal__VarsKind_31 << (MR_Integer) 1)))));
                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_599_599, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_615));
                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_599_599, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Vars0_32));
                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_599_599, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_601_601));
                        }
                        {
                          hlds__make_hlds__goal_expr_to_goal__TransformedGoal_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_34, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_615));
                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_34, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_599_599));
                        }
                        /* direct tailcall eliminated */
                        {
                          MR_Word hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_18 = hlds__make_hlds__goal_expr_to_goal__TransformedGoal_34;

                          hlds__make_hlds__goal_expr_to_goal__Goal_18 = hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_18;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_35;
                        MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_36;
                        MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_37;
                        MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_611;
                        MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_612;

                        {
                          parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__Vars0_32, &hlds__make_hlds__goal_expr_to_goal__Vars_35);
                        }
                        switch (hlds__make_hlds__goal_expr_to_goal__VarsKind_31) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              {
                                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_33, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_36, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                              }
                              {
                                hlds__make_hlds__goal_expr_to_goal__Reason_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Reason_37, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Vars_35));
                              }
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_40;
                              MR_Word hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_41;
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_585_585;

                              {
                                hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(hlds__make_hlds__goal_expr_to_goal__Context_615, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__Vars_35, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, &hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_585_585);
                              }
                              {
                                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_33, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_36, hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_40, &hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_41, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_585_585, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                              }
                              {
                                hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(hlds__make_hlds__goal_expr_to_goal__Vars_35, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_41, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204);
                              }
                              hlds__make_hlds__goal_expr_to_goal__Reason_37 = (MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_2[3];
                            }
                            break;
                        }
                        {
                          hlds__make_hlds__goal_expr_to_goal__GoalExpr_611 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_611, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_611, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_37));
                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_611, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_36));
                        }
                        {
                          hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_615, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_612);
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_611));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_612));
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Purity_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_618 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_619;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_620;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_621 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_622;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_623;

                  {
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_621, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_622, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__Reason_623 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Reason_623, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Purity_43));
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_619 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_619, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_619, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_623));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_619, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_622));
                  }
                  {
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_618, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_620);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_619));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_620));
                  }
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__PromiseVars_46;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_624 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_625;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_626;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_627 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_628 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_629;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_630;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_631 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));

                  {
                    hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Vars_628, hlds__make_hlds__goal_expr_to_goal__StateVars_631, hlds__make_hlds__goal_expr_to_goal__DotSVars_44, hlds__make_hlds__goal_expr_to_goal__ColonSVars_45, hlds__make_hlds__goal_expr_to_goal__Context_624, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__PromiseVars_46, hlds__make_hlds__goal_expr_to_goal__SubGoal_627, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_629, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__Reason_630 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Reason_630, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__PromiseVars_46));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Reason_630, 1) = ((MR_Box) ((MR_Integer) 0));
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_625 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_625, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_625, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_630));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_625, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_629));
                  }
                  {
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_624, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_626);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_625));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_626));
                  }
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_632 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_633;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_634;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_635 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_636 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_637;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_638;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_639 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars_640 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars_641 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__PromiseVars_642;

                  {
                    hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Vars_636, hlds__make_hlds__goal_expr_to_goal__StateVars_639, hlds__make_hlds__goal_expr_to_goal__DotSVars_640, hlds__make_hlds__goal_expr_to_goal__ColonSVars_641, hlds__make_hlds__goal_expr_to_goal__Context_632, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__PromiseVars_642, hlds__make_hlds__goal_expr_to_goal__SubGoal_635, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_637, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__Reason_638 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Reason_638, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__PromiseVars_642));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Reason_638, 1) = ((MR_Box) ((MR_Integer) 1));
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_633 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_633, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_633, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_638));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_633, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_637));
                  }
                  {
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_632, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_634);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_633));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_634));
                  }
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_643 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_644;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_645;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_646 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_647 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_648;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_649;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_650 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars_651 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars_652 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__PromiseVars_653;

                  {
                    hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Vars_647, hlds__make_hlds__goal_expr_to_goal__StateVars_650, hlds__make_hlds__goal_expr_to_goal__DotSVars_651, hlds__make_hlds__goal_expr_to_goal__ColonSVars_652, hlds__make_hlds__goal_expr_to_goal__Context_643, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__PromiseVars_653, hlds__make_hlds__goal_expr_to_goal__SubGoal_646, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_648, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__Reason_649 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Reason_649, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__PromiseVars_653));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Reason_649, 1) = ((MR_Box) ((MR_Integer) 2));
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_644 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_644, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_644, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_649));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_644, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_648));
                  }
                  {
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_643, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_645);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_644));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_645));
                  }
                }
                break;
              case (MR_Integer) 11:
                {
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Detism_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_556_556;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_654 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_655;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_656;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_657 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_658;

                  {
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_657, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_658, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__V_556_556 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_556_556, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_556_556, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Detism_47));
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_655 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_655, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_655, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_556_556));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_655, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_658));
                  }
                  {
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_654, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_656);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_655));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_656));
                  }
                }
                break;
              case (MR_Integer) 12:
                {
                  MR_Word hlds__make_hlds__goal_expr_to_goal__PODVar0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Var_49;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_540_540;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_541_541;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_542_542;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_549_549;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_659 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_660;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_661;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_662 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_663;

                  {
                    hlds__make_hlds__goal_expr_to_goal__rename_and_maybe_expand_dot_var_11_p_0(hlds__make_hlds__goal_expr_to_goal__Context_659, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__PODVar0_48, &hlds__make_hlds__goal_expr_to_goal__Var_49, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_540_540, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_541_541, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_542_542);
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_662, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_663, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_540_540, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_541_541, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_542_542, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__V_549_549 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_549_549, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_549_549, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_49));
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_660 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_660, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_660, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_549_549));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_660, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_663));
                  }
                  {
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_659, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_661);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_660));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_661));
                  }
                }
                break;
              case (MR_Integer) 13:
                {
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_529_529;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_530_530;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_531_531;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_538_538;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_664 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_665;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_666;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_667 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_668;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Detism_669 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__PODVar0_670 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Var_671;

                  {
                    hlds__make_hlds__goal_expr_to_goal__rename_and_maybe_expand_dot_var_11_p_0(hlds__make_hlds__goal_expr_to_goal__Context_664, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__PODVar0_670, &hlds__make_hlds__goal_expr_to_goal__Var_671, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_529_529, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_530_530, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_531_531);
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_667, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_668, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_529_529, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_530_530, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_531_531, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__V_538_538 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_538_538, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_538_538, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_671));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_538_538, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Detism_669));
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_665 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_665, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_665, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_538_538));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_665, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_668));
                  }
                  {
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_664, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_666);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_665));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_666));
                  }
                }
                break;
              case (MR_Integer) 14:
                {
                  MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_801_801;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCompileTime_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeRunTime_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeIO0_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Mutables0_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal0_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MutableHLDSs_99;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MutableStateVars_100;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MutableGetGoals_101;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MutableSetGoals_102;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_108;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GetGoals_109;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SetGoals_110;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal1_111;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_468_468;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_469_469;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_470_470;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_471_471;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_473_473;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_679 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_680;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_681;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_682;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_683;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_684;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_685;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_686;

                  {
                    hlds__make_hlds__goal_expr_to_goal__V_468_468 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_468_468, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[0]));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_468_468, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_1));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_468_468, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_468_468, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_679));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_468_468, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_468_468, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Renaming_19));
                  }
                  hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_801_801 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0;
                  {
                    mercury__list__map4_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0, (MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0], hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_801_801, hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_801_801, hlds__make_hlds__goal_expr_to_goal__V_468_468, hlds__make_hlds__goal_expr_to_goal__Mutables0_97, &hlds__make_hlds__goal_expr_to_goal__MutableHLDSs_99, &hlds__make_hlds__goal_expr_to_goal__MutableStateVars_100, &hlds__make_hlds__goal_expr_to_goal__MutableGetGoals_101, &hlds__make_hlds__goal_expr_to_goal__MutableSetGoals_102);
                  }
                  if ((hlds__make_hlds__goal_expr_to_goal__MaybeIO0_96 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_108 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      hlds__make_hlds__goal_expr_to_goal__StateVars_684 = hlds__make_hlds__goal_expr_to_goal__MutableStateVars_100;
                      hlds__make_hlds__goal_expr_to_goal__GetGoals_109 = hlds__make_hlds__goal_expr_to_goal__MutableGetGoals_101;
                      hlds__make_hlds__goal_expr_to_goal__SetGoals_110 = hlds__make_hlds__goal_expr_to_goal__MutableSetGoals_102;
                    }
                  else
                    {
                      MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar0_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeIO0_96, (MR_Integer) 0)));
                      MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar_104;
                      MR_String hlds__make_hlds__goal_expr_to_goal__IOStateVarName_105;
                      MR_Word hlds__make_hlds__goal_expr_to_goal__IOGetGoal_106;
                      MR_Word hlds__make_hlds__goal_expr_to_goal__IOSetGoal_107;

                      {
                        hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_8_p_0(hlds__make_hlds__goal_expr_to_goal__Context_679, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__IOStateVar0_103, &hlds__make_hlds__goal_expr_to_goal__IOStateVar_104, &hlds__make_hlds__goal_expr_to_goal__IOStateVarName_105, &hlds__make_hlds__goal_expr_to_goal__IOGetGoal_106, &hlds__make_hlds__goal_expr_to_goal__IOSetGoal_107);
                      }
                      {
                        hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_108, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVarName_105));
                      }
                      {
                        hlds__make_hlds__goal_expr_to_goal__StateVars_684 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__StateVars_684, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVar_104));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__StateVars_684, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MutableStateVars_100));
                      }
                      {
                        hlds__make_hlds__goal_expr_to_goal__GetGoals_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__GetGoals_109, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOGetGoal_106));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__GetGoals_109, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MutableGetGoals_101));
                      }
                      {
                        hlds__make_hlds__goal_expr_to_goal__SetGoals_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SetGoals_110, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOSetGoal_107));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SetGoals_110, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MutableSetGoals_102));
                      }
                    }
                  {
                    hlds__make_hlds__goal_expr_to_goal__V_471_471 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_471_471, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal0_98));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_471_471, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__V_470_470 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_801_801, hlds__make_hlds__goal_expr_to_goal__V_471_471, hlds__make_hlds__goal_expr_to_goal__SetGoals_110);
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__V_469_469 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_801_801, hlds__make_hlds__goal_expr_to_goal__GetGoals_109, hlds__make_hlds__goal_expr_to_goal__V_470_470);
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__SubGoal1_111 = parse_tree__prog_util__goal_list_to_conj_2_f_0(hlds__make_hlds__goal_expr_to_goal__Context_679, hlds__make_hlds__goal_expr_to_goal__V_469_469);
                  }
                  {
                    hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(hlds__make_hlds__goal_expr_to_goal__Context_679, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__StateVars_684, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, &hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_685, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_473_473);
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal1_111, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_682, hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_685, &hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_686, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_473_473, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                  }
                  {
                    hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(hlds__make_hlds__goal_expr_to_goal__StateVars_684, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_686, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204);
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__Reason_683 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_683, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_683, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MaybeCompileTime_94));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_683, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MaybeRunTime_95));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_683, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_108));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_683, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MutableHLDSs_99));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_683, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_680 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_680, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_680, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_683));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_680, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_682));
                  }
                  {
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_679, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_681);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_680));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_681));
                  }
                }
                break;
              case (MR_Integer) 15:
                {
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Outer0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Inner0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MainGoal_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__OrElseGoals_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars_55;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Outer_64;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoals_79;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal_80;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSOrElseGoals_81;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Inner_86;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__ShortHand_90;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_676 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_677;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_678;

                  if ((hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars0_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  else
                    {
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OutputVars0_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars0_52, (MR_Integer) 0)));
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OutputVars_57;

                      {
                        parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__OutputVars0_56, &hlds__make_hlds__goal_expr_to_goal__OutputVars_57);
                      }
                      {
                        hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars_55, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OutputVars_57));
                      }
                    }
                  if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Outer0_50)) == (MR_mktag((MR_Integer) 0))))
                    {
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OuterStateVar0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Outer0_50, (MR_Integer) 0)));
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OuterStateVar_59;
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OuterDI_60;
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OuterUO_61;
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OuterScopeInfo2_89;
                      MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_485_485;
                      MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_486_486;
                      MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_487_487;
                      MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_513_513;

                      {
                        parse_tree__prog_rename__rename_var_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__OuterStateVar0_58, &hlds__make_hlds__goal_expr_to_goal__OuterStateVar_59);
                      }
                      {
                        hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_p_0(hlds__make_hlds__goal_expr_to_goal__Context_676, hlds__make_hlds__goal_expr_to_goal__OuterStateVar_59, &hlds__make_hlds__goal_expr_to_goal__OuterDI_60, &hlds__make_hlds__goal_expr_to_goal__OuterUO_61, &hlds__make_hlds__goal_expr_to_goal__OuterScopeInfo2_89, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_485_485, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_486_486, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_487_487);
                      }
                      {
                        hlds__make_hlds__goal_expr_to_goal__Outer_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Outer_64, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OuterDI_60));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Outer_64, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OuterUO_61));
                      }
                      if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Inner0_51)) == (MR_mktag((MR_Integer) 0))))
                        {
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerStateVar0_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner0_51, (MR_Integer) 0)));
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerStateVar_68;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_73;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_74;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_75;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__MainDisjState_76;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_77;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__AllDisjStates_78;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_83;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI_84;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO_85;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_490_490;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_491_491;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_492;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_493;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_494;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_495;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_496;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_497;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_498;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_501_501;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_502_502;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_503_503;

                          {
                            parse_tree__prog_rename__rename_var_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__InnerStateVar0_67, &hlds__make_hlds__goal_expr_to_goal__InnerStateVar_68);
                          }
                          {
                            hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_676, hlds__make_hlds__goal_expr_to_goal__InnerStateVar_68, &hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_83, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_485_485, &hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_486_486, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_490_490, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_487_487, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_491_491);
                          }
                          {
                            hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__MainGoal_53, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_74, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_73, &hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_75, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_492, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_490_490, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_493, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_494, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_495, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_491_491, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_496);
                          }
                          {
                            hlds__make_hlds__goal_expr_to_goal__MainDisjState_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_76, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_74));
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_76, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_75));
                          }
                          {
                            hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__OrElseGoals_54, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_77, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_492, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_497, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_493, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_498, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_494, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_495, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_496, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_501_501);
                          }
                          {
                            hlds__make_hlds__goal_expr_to_goal__AllDisjStates_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_78, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MainDisjState_76));
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_78, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_77));
                          }
                          {
                            hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_676, hlds__make_hlds__goal_expr_to_goal__AllDisjStates_78, &hlds__make_hlds__goal_expr_to_goal__HLDSGoals_79, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_498, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_502_502, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_73, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_503_503, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_497, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206);
                          }
                          {
                            hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_p_0(hlds__make_hlds__goal_expr_to_goal__Context_676, hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_83, &hlds__make_hlds__goal_expr_to_goal__InnerDI_84, &hlds__make_hlds__goal_expr_to_goal__InnerUO_85, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_503_503, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_513_513, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_502_502, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_501_501, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                          }
                          {
                            hlds__make_hlds__goal_expr_to_goal__Inner_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_86, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerDI_84));
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_86, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerUO_85));
                          }
                        }
                      else
                        {
                          MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_792_792;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI0_87;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO0_88;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI_674;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO_675;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_905;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_906;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__MainDisjState_907;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_908;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__AllDisjStates_909;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_912;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_913;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_914;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_915;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_916;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_917;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_918;

                          {
                            hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__MainGoal_53, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_905, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_485_485, &hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_906, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_912, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_486_486, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_913, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_914, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_915, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_487_487, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_916);
                          }
                          {
                            hlds__make_hlds__goal_expr_to_goal__MainDisjState_907 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_907, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_905));
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_907, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_906));
                          }
                          {
                            hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__OrElseGoals_54, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_908, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_485_485, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_912, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_917, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_913, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_918, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_914, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_915, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_916, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                          }
                          {
                            hlds__make_hlds__goal_expr_to_goal__AllDisjStates_909 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_909, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MainDisjState_907));
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_909, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_908));
                          }
                          {
                            hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_676, hlds__make_hlds__goal_expr_to_goal__AllDisjStates_909, &hlds__make_hlds__goal_expr_to_goal__HLDSGoals_79, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_918, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_485_485, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_513_513, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_917, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206);
                          }
                          hlds__make_hlds__goal_expr_to_goal__InnerDI0_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Inner0_51, (MR_Integer) 0)));
                          hlds__make_hlds__goal_expr_to_goal__InnerUO0_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Inner0_51, (MR_Integer) 1)));
                          hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_792_792 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                          {
                            parse_tree__prog_rename__rename_var_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_792_792, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__InnerDI0_87, &hlds__make_hlds__goal_expr_to_goal__InnerDI_674);
                          }
                          {
                            parse_tree__prog_rename__rename_var_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_792_792, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__InnerUO0_88, &hlds__make_hlds__goal_expr_to_goal__InnerUO_675);
                          }
                          {
                            hlds__make_hlds__goal_expr_to_goal__Inner_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_86, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerDI_674));
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_86, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerUO_675));
                          }
                        }
                      {
                        hlds__make_hlds__state_var__svar_finish_outer_atomic_scope_3_p_0(hlds__make_hlds__goal_expr_to_goal__OuterScopeInfo2_89, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_513_513, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204);
                      }
                    }
                  else
                    {
                      MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_790_790 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OuterDI0_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Outer0_50, (MR_Integer) 0)));
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OuterUO0_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Outer0_50, (MR_Integer) 1)));
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OuterDI_672;
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OuterUO_673;

                      {
                        parse_tree__prog_rename__rename_var_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_790_790, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__OuterDI0_65, &hlds__make_hlds__goal_expr_to_goal__OuterDI_672);
                      }
                      {
                        parse_tree__prog_rename__rename_var_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_790_790, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__OuterUO0_66, &hlds__make_hlds__goal_expr_to_goal__OuterUO_673);
                      }
                      {
                        hlds__make_hlds__goal_expr_to_goal__Outer_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Outer_64, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OuterDI_672));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Outer_64, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OuterUO_673));
                      }
                      if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Inner0_51)) == (MR_mktag((MR_Integer) 0))))
                        {
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerStateVar0_818 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner0_51, (MR_Integer) 0)));
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerStateVar_819;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_831;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI_832;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO_833;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_865;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_866;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_867;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__MainDisjState_868;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_869;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__AllDisjStates_870;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_490_880;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_491_881;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_882;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_883;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_884;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_885;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_886;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_887;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_888;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_501_889;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_502_890;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_503_891;

                          {
                            parse_tree__prog_rename__rename_var_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__InnerStateVar0_818, &hlds__make_hlds__goal_expr_to_goal__InnerStateVar_819);
                          }
                          {
                            hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_676, hlds__make_hlds__goal_expr_to_goal__InnerStateVar_819, &hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_831, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, &hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_865, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_490_880, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_491_881);
                          }
                          {
                            hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__MainGoal_53, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_866, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_865, &hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_867, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_882, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_490_880, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_883, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_884, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_885, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_491_881, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_886);
                          }
                          {
                            hlds__make_hlds__goal_expr_to_goal__MainDisjState_868 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_868, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_866));
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_868, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_867));
                          }
                          {
                            hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__OrElseGoals_54, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_869, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_865, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_882, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_887, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_883, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_888, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_884, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_885, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_886, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_501_889);
                          }
                          {
                            hlds__make_hlds__goal_expr_to_goal__AllDisjStates_870 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_870, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MainDisjState_868));
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_870, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_869));
                          }
                          {
                            hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_676, hlds__make_hlds__goal_expr_to_goal__AllDisjStates_870, &hlds__make_hlds__goal_expr_to_goal__HLDSGoals_79, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_888, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_502_890, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_865, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_503_891, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_887, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206);
                          }
                          {
                            hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_p_0(hlds__make_hlds__goal_expr_to_goal__Context_676, hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_831, &hlds__make_hlds__goal_expr_to_goal__InnerDI_832, &hlds__make_hlds__goal_expr_to_goal__InnerUO_833, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_503_891, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_502_890, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_501_889, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                          }
                          {
                            hlds__make_hlds__goal_expr_to_goal__Inner_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_86, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerDI_832));
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_86, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerUO_833));
                          }
                        }
                      else
                        {
                          MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_792_846;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI0_840;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO0_841;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI_844;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO_845;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_925;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_926;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__MainDisjState_927;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_928;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__AllDisjStates_929;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_932;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_933;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_934;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_935;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_936;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_937;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_938;

                          {
                            hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__MainGoal_53, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_925, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, &hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_926, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_932, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_933, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_934, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_935, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_936);
                          }
                          {
                            hlds__make_hlds__goal_expr_to_goal__MainDisjState_927 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_927, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_925));
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_927, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_926));
                          }
                          {
                            hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__OrElseGoals_54, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_928, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_932, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_937, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_933, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_938, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_934, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_935, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_936, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                          }
                          {
                            hlds__make_hlds__goal_expr_to_goal__AllDisjStates_929 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_929, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MainDisjState_927));
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_929, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_928));
                          }
                          {
                            hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_676, hlds__make_hlds__goal_expr_to_goal__AllDisjStates_929, &hlds__make_hlds__goal_expr_to_goal__HLDSGoals_79, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_938, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_937, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206);
                          }
                          hlds__make_hlds__goal_expr_to_goal__InnerDI0_840 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Inner0_51, (MR_Integer) 0)));
                          hlds__make_hlds__goal_expr_to_goal__InnerUO0_841 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Inner0_51, (MR_Integer) 1)));
                          hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_792_846 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                          {
                            parse_tree__prog_rename__rename_var_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_792_846, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__InnerDI0_840, &hlds__make_hlds__goal_expr_to_goal__InnerDI_844);
                          }
                          {
                            parse_tree__prog_rename__rename_var_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_792_846, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__InnerUO0_841, &hlds__make_hlds__goal_expr_to_goal__InnerUO_845);
                          }
                          {
                            hlds__make_hlds__goal_expr_to_goal__Inner_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_86, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerDI_844));
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_86, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerUO_845));
                          }
                        }
                    }
                  if ((hlds__make_hlds__goal_expr_to_goal__HLDSGoals_79 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.goal_expr_to_goal", (MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_parse_tree_goal_to_hlds\'/16", (MR_String) "atomic HLDSGoals = []");
                        return;
                      }
                    }
                  else
                    {
                      hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HLDSGoals_79, (MR_Integer) 0)));
                      hlds__make_hlds__goal_expr_to_goal__HLDSOrElseGoals_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HLDSGoals_79, (MR_Integer) 1)));
                    }
                  {
                    hlds__make_hlds__goal_expr_to_goal__ShortHand_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_90, 0) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_90, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Outer_64));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_90, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Inner_86));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_90, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars_55));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_90, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal_80));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_90, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSOrElseGoals_81));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_90, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_677 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_677, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_677, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ShortHand_90));
                  }
                  {
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_676, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_678);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_677));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_678));
                  }
                }
                break;
              case (MR_Integer) 16:
                {
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Then0_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeElse0_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches0_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 7)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_693 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeIO0_694 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal0_695 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));

                  if ((hlds__make_hlds__goal_expr_to_goal__MaybeIO0_694 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal0_695, hlds__make_hlds__goal_expr_to_goal__Then0_114, hlds__make_hlds__goal_expr_to_goal__MaybeElse0_115, hlds__make_hlds__goal_expr_to_goal__Catches0_116, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_117, hlds__make_hlds__goal_expr_to_goal__Context_693, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                    }
                  else
                    {
                      MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar0_689 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeIO0_694, (MR_Integer) 0)));

                      if ((hlds__make_hlds__goal_expr_to_goal__MaybeElse0_115 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar_687;

                          {
                            parse_tree__prog_rename__rename_var_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__IOStateVar0_689, &hlds__make_hlds__goal_expr_to_goal__IOStateVar_687);
                          }
                          {
                            hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__IOStateVar0_689, hlds__make_hlds__goal_expr_to_goal__IOStateVar_687, hlds__make_hlds__goal_expr_to_goal__SubGoal0_695, hlds__make_hlds__goal_expr_to_goal__Then0_114, hlds__make_hlds__goal_expr_to_goal__Catches0_116, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_117, hlds__make_hlds__goal_expr_to_goal__Context_693, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                          }
                        }
                      else
                        {
                          MR_Word hlds__make_hlds__goal_expr_to_goal__Msg_120;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__Spec_121;
                          MR_Word hlds__make_hlds__goal_expr_to_goal__V_458_458;

                          {
                            hlds__make_hlds__goal_expr_to_goal__Msg_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Msg_120, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_693));
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Msg_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[34])));
                          }
                          {
                            hlds__make_hlds__goal_expr_to_goal__V_458_458 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_458_458, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Msg_120));
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_458_458, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                          {
                            hlds__make_hlds__goal_expr_to_goal__Spec_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_121, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_121, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_458_458));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Spec_121));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213));
                          }
                          {
                            *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = hlds__make_goal__true_goal_with_context_1_f_0(hlds__make_hlds__goal_expr_to_goal__Context_693);
                          }
                          *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203;
                          *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205;
                          *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207;
                          *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209;
                          *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211;
                        }
                    }
                }
                break;
              case (MR_Integer) 17:
                {
                  MR_Word hlds__make_hlds__goal_expr_to_goal__P_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Q_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_348_348;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_349_349;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_723 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__TransformedGoal_724;

                  {
                    hlds__make_hlds__goal_expr_to_goal__V_349_349 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_349_349, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_349_349, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_723));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_349_349, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Q_149));
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__V_348_348 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_348_348, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_723));
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_348_348, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__P_148));
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_348_348, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_349_349));
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__TransformedGoal_724 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_724, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_724, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_723));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_724, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_348_348));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_18 = hlds__make_hlds__goal_expr_to_goal__TransformedGoal_724;

                    hlds__make_hlds__goal_expr_to_goal__Goal_18 = hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_18;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 18:
                {
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoalA_150;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoalB_151;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_335_335;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_336_336;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_337_337;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_338_338;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_339_339;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_340_340;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_347_347;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_725 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_726;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_727;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalA_728 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalB_729 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_152_152;

                  {
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalA_728, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoalA_150, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_335_335, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_336_336, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_337_337, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_338_338, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_339_339, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_340_340);
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalB_729, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoalB_151, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_335_335, &hlds__make_hlds__goal_expr_to_goal__V_152_152, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_336_336, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_337_337, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_338_338, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_339_339, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_340_340, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                  }
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203;
                  {
                    hlds__make_hlds__goal_expr_to_goal__V_347_347 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_347_347, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoalA_150));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_347_347, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoalB_151));
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_726 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_726, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_726, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_347_347));
                  }
                  {
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_725, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_727);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_726));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_727));
                  }
                }
                break;
              case (MR_Integer) 19:
                {
                  MR_String hlds__make_hlds__goal_expr_to_goal__EventName_153 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms0_154 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms1_155;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms_156;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVars_157;
                  MR_Integer hlds__make_hlds__goal_expr_to_goal__Arity_158;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Modes_159;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Details_160;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr0_161;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_162;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__CallId_163;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_320_320;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_321_321;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_322_322;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_323_323;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_326_326;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_327_327;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_328_328;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_731 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_732;

                  {
                    hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(hlds__make_hlds__goal_expr_to_goal__ArgTerms0_154, &hlds__make_hlds__goal_expr_to_goal__ArgTerms1_155);
                  }
                  {
                    parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__ArgTerms1_155, &hlds__make_hlds__goal_expr_to_goal__ArgTerms_156);
                  }
                  {
                    hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(hlds__make_hlds__goal_expr_to_goal__ArgTerms_156, &hlds__make_hlds__goal_expr_to_goal__HeadVars_157, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_320_320, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_321_321, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_213, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_322_322);
                  }
                  {
                    mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0], hlds__make_hlds__goal_expr_to_goal__HeadVars_157, &hlds__make_hlds__goal_expr_to_goal__Arity_158);
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__V_323_323 = parse_tree__prog_mode__in_mode_0_f_0();
                  }
                  {
                    mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__make_hlds__goal_expr_to_goal__Arity_158, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_323_323)), &hlds__make_hlds__goal_expr_to_goal__Modes_159);
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__Details_160 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Details_160, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__EventName_153));
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__GoalExpr0_161 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_161, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_161, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Details_160));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_161, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HeadVars_157));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_161, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Modes_159));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_161, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_161, 5) = ((MR_Box) ((MR_Integer) 0));
                  }
                  {
                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_731, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_732);
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_162, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr0_161));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_162, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_732));
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__V_326_326 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_326_326, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__EventName_153));
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__CallId_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallId_163, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_326_326));
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__V_327_327 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_327_327, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CallId_163));
                  }
                  {
                    hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(hlds__make_hlds__goal_expr_to_goal__HeadVars_157, hlds__make_hlds__goal_expr_to_goal__ArgTerms_156, hlds__make_hlds__goal_expr_to_goal__Context_731, hlds__make_hlds__goal_expr_to_goal__V_327_327, hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_162, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_321_321, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_328_328, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_320_320, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_322_322, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_214);
                  }
                  {
                    hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_328_328, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_204);
                  }
                }
                break;
            }
            break;
        }
      }
      break;
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.make_hlds.goal_expr_to_goal. */
