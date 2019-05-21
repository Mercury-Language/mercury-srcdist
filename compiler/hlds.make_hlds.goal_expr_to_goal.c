/*
** Automatically generated from `goal_expr_to_goal.m'
** by the Mercury compiler,
** version rotd-2017-08-08
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
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "libs.dependency_graph.mih"
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
hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_1(
  MR_Box hlds__make_hlds__goal_expr_to_goal__closure_arg,
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2,
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3,
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_4,
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_5);

static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__exception_functor_3_f_0(
  MR_String hlds__make_hlds__goal_expr_to_goal__Atom_5,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Arg_6,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_7);

static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_f_0(void);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(
  MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_7,
  MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_8,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_9,
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_10,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_11,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_12);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(
  MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_6,
  MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_8,
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_10);

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

static MR_bool MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Unify____loc_kind_0_0_10001(
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Compare____loc_kind_0_0_10001(
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2,
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3);


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
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[28])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) ":="))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[18])))
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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

void MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Compare____loc_kind_0_0(
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1,
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2,
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__3_3)
{
  {
    MR_Integer hlds__make_hlds__goal_expr_to_goal__Cast_HeadVar1_4 = (MR_Integer) hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2;
    MR_Integer hlds__make_hlds__goal_expr_to_goal__Cast_HeadVar2_5 = (MR_Integer) hlds__make_hlds__goal_expr_to_goal__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1, hlds__make_hlds__goal_expr_to_goal__Cast_HeadVar1_4, hlds__make_hlds__goal_expr_to_goal__Cast_HeadVar2_5);
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
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_45_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_String hlds__make_hlds__goal_expr_to_goal__MutableName_17 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Mutable_12, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__goal_expr_to_goal__StateVar0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Mutable_12, (MR_Integer) 1)));
    MR_String hlds__make_hlds__goal_expr_to_goal__StateVarName_19;
    MR_Word hlds__make_hlds__goal_expr_to_goal__GetPredName_20;
    MR_Word hlds__make_hlds__goal_expr_to_goal__SetPredName_21;
    MR_Word hlds__make_hlds__goal_expr_to_goal__SetVar_22;
    MR_Word hlds__make_hlds__goal_expr_to_goal__UseVar_23;
    MR_String hlds__make_hlds__goal_expr_to_goal__Var_27;
    MR_String hlds__make_hlds__goal_expr_to_goal__Var_29;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_33;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_34;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_41;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_43;

    parse_tree__prog_rename__rename_var_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_45_45, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_11, hlds__make_hlds__goal_expr_to_goal__StateVar0_18, hlds__make_hlds__goal_expr_to_goal__StateVar_14);
    mercury__varset__lookup_name_3_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_45_45, hlds__make_hlds__goal_expr_to_goal__VarSet_10, *hlds__make_hlds__goal_expr_to_goal__StateVar_14, &hlds__make_hlds__goal_expr_to_goal__StateVarName_19);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__make_hlds__goal_expr_to_goal__MutableHLDS_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MutableName_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVarName_19));
    }
    hlds__make_hlds__goal_expr_to_goal__Var_27 = mercury__string__f_43_43_2_f_0((MR_String) "get_", hlds__make_hlds__goal_expr_to_goal__MutableName_17);
    {
      hlds__make_hlds__goal_expr_to_goal__GetPredName_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GetPredName_20, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_27));
    }
    hlds__make_hlds__goal_expr_to_goal__Var_29 = mercury__string__f_43_43_2_f_0((MR_String) "set_", hlds__make_hlds__goal_expr_to_goal__MutableName_17);
    {
      hlds__make_hlds__goal_expr_to_goal__SetPredName_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetPredName_21, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_29));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_34, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVar0_18));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_34, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_9));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_33, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_34));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__SetVar_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_22, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_22, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_33));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_22, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_9));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__UseVar_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_23, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[1]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_23, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_33));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_23, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_9));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_41, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SetVar_22));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__goal_expr_to_goal__GetGoal_15 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_9));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GetPredName_20));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_41));
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_43, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__UseVar_23));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__goal_expr_to_goal__SetGoal_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_9));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SetPredName_21));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_43));
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) ((MR_Integer) 2));
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
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_71;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_72;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_75;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_88;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_97;

    mercury__varset__new_named_var_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_96_96, (MR_String) "TryResult", &hlds__make_hlds__goal_expr_to_goal__ResultVar_37, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_57, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_66_66);
    mercury__varset__new_var_3_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_96_96, &hlds__make_hlds__goal_expr_to_goal__ExcpVar_38, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_66_66, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_67_67);
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
    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_28, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_42);
    hlds__make_hlds__goal_expr_to_goal__Var_97 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    {
      hlds__make_hlds__goal_expr_to_goal__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_71, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_97));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_71, 1) = ((MR_Box) ((MR_String) "magic_exception_result"));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_72, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_71));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_72));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    hlds__make_hlds__goal_expr_to_goal__Var_75 = hlds__make_hlds__goal_expr_to_goal__exception_functor_3_f_0((MR_String) "succeeded", hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41, hlds__make_hlds__goal_expr_to_goal__Context_28);
    {
      hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_75));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    if ((hlds__make_hlds__goal_expr_to_goal__MaybeElseGoal_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word hlds__make_hlds__goal_expr_to_goal__Var_78;
      MR_Word hlds__make_hlds__goal_expr_to_goal__Var_82;

      {
        hlds__make_hlds__goal_expr_to_goal__Var_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Var_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Var_78, 1) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1)))));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Var_78, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Var_78, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Var_78, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal_23));
      }
      {
        hlds__make_hlds__goal_expr_to_goal__Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Var_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Var_82, 1) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1)))));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Var_82, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Var_82, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Var_82, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ThenGoal_24));
      }
      {
        hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
        MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_78));
        MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_82));
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
    hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_40, hlds__make_hlds__goal_expr_to_goal__Catches_26, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_27, hlds__make_hlds__goal_expr_to_goal__Context_28, &hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunctGoal_48);
    {
      hlds__make_hlds__goal_expr_to_goal__Var_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Var_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Var_88, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Var_88, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunctGoal_47));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Var_88, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunctGoal_48));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunctionGoal_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunctionGoal_49, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunctionGoal_49, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunctionGoal_49, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_88));
    }
    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_22, hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunctionGoal_49, hlds__make_hlds__goal_expr_to_goal__Renaming_29, &hlds__make_hlds__goal_expr_to_goal__HLDSCallMagicThenDisjunctionGoal_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_55, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_67_67, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_58, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_59, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_61, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_62, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_63, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_64);
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
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_86;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_87;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_90_90;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_91_91;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_92_92;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_93_93;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_94_94;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_95_95;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_96_96;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_98_98;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_99;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_102_102;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_103_103;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_104_104;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_105_105;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_106_106;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_107_107;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_108;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_111;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_112;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_114;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_124;
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
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_143;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_144;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_145;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_147_147;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_149_149;
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_150_150;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_154;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_155;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_156;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_161;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_162;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_164;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_165;

    mercury__varset__new_named_var_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_166_166, (MR_String) "TryResult", &hlds__make_hlds__goal_expr_to_goal__ResultVar_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_72, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81);
    mercury__varset__new_var_3_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_166_166, &hlds__make_hlds__goal_expr_to_goal__ExcpVar_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_82_82);
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
    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_30, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_44);
    hlds__make_hlds__goal_expr_to_goal__Var_86 = hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_f_0();
    {
      hlds__make_hlds__goal_expr_to_goal__Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_87, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_86));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_87));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__HLDSCallMagicGoal_46, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_68, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_90_90, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_70, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_91_91, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_82_82, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_92_92, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_74, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_93_93, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_76, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_94_94, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_78, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_95_95);
    hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_30, hlds__make_hlds__goal_expr_to_goal__IOStateVar_25, &hlds__make_hlds__goal_expr_to_goal__IOStateVarBefore_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_92_92, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_96_96, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_90_90, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_147_147, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_95_95, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_98_98);
    hlds__make_hlds__goal_expr_to_goal__Var_99 = hlds__make_hlds__goal_expr_to_goal__exception_functor_3_f_0((MR_String) "succeeded", hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_43, hlds__make_hlds__goal_expr_to_goal__Context_30);
    {
      hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_99));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__HLDSResultIsSucceededUnifyGoal_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_147_147, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_102_102, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_91_91, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_103_103, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_96_96, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_104_104, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_93_93, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_105_105, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_94_94, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_106_106, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_98_98, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_107_107);
    {
      hlds__make_hlds__goal_expr_to_goal__Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_112, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVarUnrenamed_24));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_112, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_111, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_112));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__Var_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_108, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_108, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_111));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_108, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__Var_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_114, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[1]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_114, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_111));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_114, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__IOUnify_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__IOUnify_51, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__IOUnify_51, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_108));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__IOUnify_51, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_114));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__IOUnify_51, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__Var_124 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Var_124, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Var_124, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOUnify_51));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Var_124, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Goal0_26));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52, 1) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_124));
    }
    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__HLDSScopedGoal_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_102_102, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_125_125, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_103_103, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_126_126, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_104_104, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_127_127, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_105_105, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_128_128, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_106_106, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_129_129, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_107_107, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_130_130);
    hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_30, hlds__make_hlds__goal_expr_to_goal__IOStateVar_25, &hlds__make_hlds__goal_expr_to_goal__IOStateVarAfter_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_127_127, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_131_131, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_125_125, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_132_132, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_130_130, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_133_133);
    {
      hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55, 1) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Then0_27));
    }
    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__HLDSScopedThenGoal_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_132_132, &hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsSucceededDisjunct_58, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_126_126, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_138_138, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_131_131, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_139_139, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_128_128, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_140_140, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_129_129, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_141_141, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_133_133, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_142_142);
    {
      hlds__make_hlds__goal_expr_to_goal__Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_145, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSScopedThenGoal_56));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_145, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_144, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSScopedGoal_53));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_144, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_145));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_143, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSResultIsSucceededUnifyGoal_50));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_143, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_144));
    }
    hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__Var_143, hlds__make_hlds__goal_expr_to_goal__GoalInfo_44, &hlds__make_hlds__goal_expr_to_goal__HLDSResultIsSucceededDisjunctGoal_57);
    hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_42, hlds__make_hlds__goal_expr_to_goal__Catches0_28, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_29, hlds__make_hlds__goal_expr_to_goal__Context_30, &hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunctGoal_59);
    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunctGoal_59, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__HLDSResultIsExceptionDisjunctGoal_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_147_147, &hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsExceptionDisjunct_61, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_138_138, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_149_149, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_139_139, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_150_150, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_140_140, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_75, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_141_141, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_77, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_142_142, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_79);
    {
      hlds__make_hlds__goal_expr_to_goal__Var_154 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_154, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSResultIsSucceededDisjunctGoal_57));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_154, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsSucceededDisjunct_58));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__Var_156 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_156, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSResultIsExceptionDisjunctGoal_60));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_156, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsExceptionDisjunct_61));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__Var_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_155, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_156));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_155, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__DisjunctSVarStates_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__DisjunctSVarStates_62, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_154));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__DisjunctSVarStates_62, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_155));
    }
    hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_30, hlds__make_hlds__goal_expr_to_goal__DisjunctSVarStates_62, &hlds__make_hlds__goal_expr_to_goal__HLDSDisjuncts_63, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_150_150, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_147_147, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_69, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_149_149, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_71);
    hlds__hlds_goal__disj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__HLDSDisjuncts_63, hlds__make_hlds__goal_expr_to_goal__GoalInfo_44, &hlds__make_hlds__goal_expr_to_goal__HLDSDisjunction_64);
    {
      hlds__make_hlds__goal_expr_to_goal__Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_162, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSDisjunction_64));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_162, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__Var_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_161, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSCallMagicGoal_46));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_161, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_162));
    }
    hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__Var_161, hlds__make_hlds__goal_expr_to_goal__GoalInfo_44, &hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunction_65);
    {
      hlds__make_hlds__goal_expr_to_goal__IOStateVars_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__IOStateVars_66, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVarBefore_47));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__IOStateVars_66, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVarAfter_54));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__Var_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_165, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVars_66));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__Var_164 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Var_164, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_165));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Var_164, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVar_39));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Var_164, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunction_65));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__GoalExpr_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_67, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_164));
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

    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_1, hlds__make_hlds__goal_expr_to_goal__Goal_35, hlds__make_hlds__goal_expr_to_goal__Renaming_3, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal_46, hlds__make_hlds__goal_expr_to_goal__HeadVar__5_5, &hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_47, hlds__make_hlds__goal_expr_to_goal__HeadVar__6_6, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58_58, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_8, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_59_59, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_10, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_60_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_12, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_61_61, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_14, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_62_62);
    {
      hlds__make_hlds__goal_expr_to_goal__DisjState_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__DisjState_38, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSGoal_46));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__DisjState_38, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_47));
    }
    hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_1, hlds__make_hlds__goal_expr_to_goal__Goals_36, hlds__make_hlds__goal_expr_to_goal__Renaming_3, &hlds__make_hlds__goal_expr_to_goal__DisjStates_39, hlds__make_hlds__goal_expr_to_goal__HeadVar__5_5, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58_58, hlds__make_hlds__goal_expr_to_goal__HeadVar__7_7, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_59_59, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_9, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_60_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_11, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_61_61, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_13, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_62_62, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__goal_expr_to_goal__HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__DisjState_38));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__DisjStates_39));
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

          hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalB_30, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__DisjStates0_20, &hlds__make_hlds__goal_expr_to_goal__DisjStates1_31, hlds__make_hlds__goal_expr_to_goal__SVarStateBefore_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_35, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_45_45, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_37, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_46_46, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_47_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_41, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_48_48, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_43, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_49_49);
          /* direct tailcall eliminated */
          {
            MR_Word hlds__make_hlds__goal_expr_to_goal__next_value_of_Goal_18 = hlds__make_hlds__goal_expr_to_goal__SubGoalA_29;
            MR_Word hlds__make_hlds__goal_expr_to_goal__next_value_of_DisjStates0_20 = hlds__make_hlds__goal_expr_to_goal__DisjStates1_31;
            MR_Word hlds__make_hlds__goal_expr_to_goal__next_value_of_STATE_VARIABLE_SVarStore_0_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_45_45;
            MR_Word hlds__make_hlds__goal_expr_to_goal__next_value_of_STATE_VARIABLE_VarSet_0_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_46_46;
            MR_Word hlds__make_hlds__goal_expr_to_goal__next_value_of_STATE_VARIABLE_ModuleInfo_0_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_47_47;
            MR_Word hlds__make_hlds__goal_expr_to_goal__next_value_of_STATE_VARIABLE_QualInfo_0_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_48_48;
            MR_Word hlds__make_hlds__goal_expr_to_goal__next_value_of_STATE_VARIABLE_Specs_0_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_49_49;

            hlds__make_hlds__goal_expr_to_goal__Goal_18 = hlds__make_hlds__goal_expr_to_goal__next_value_of_Goal_18;
            hlds__make_hlds__goal_expr_to_goal__DisjStates0_20 = hlds__make_hlds__goal_expr_to_goal__next_value_of_DisjStates0_20;
            hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_35 = hlds__make_hlds__goal_expr_to_goal__next_value_of_STATE_VARIABLE_SVarStore_0_35;
            hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_37 = hlds__make_hlds__goal_expr_to_goal__next_value_of_STATE_VARIABLE_VarSet_0_37;
            hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_39 = hlds__make_hlds__goal_expr_to_goal__next_value_of_STATE_VARIABLE_ModuleInfo_0_39;
            hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_41 = hlds__make_hlds__goal_expr_to_goal__next_value_of_STATE_VARIABLE_QualInfo_0_41;
            hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_43 = hlds__make_hlds__goal_expr_to_goal__next_value_of_STATE_VARIABLE_Specs_0_43;
          }
          continue;
        }
      }
      else
      {
        MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal_32;
        MR_Word hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_33;
        MR_Word hlds__make_hlds__goal_expr_to_goal__DisjState_34;

        hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Goal_18, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal_32, hlds__make_hlds__goal_expr_to_goal__SVarStateBefore_22, &hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_33, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_35, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_36, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_37, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_38, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_41, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_42, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_43, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_44);
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

          hlds__make_hlds__goal_expr_to_goal__accumulate_par_conjuncts_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__SubGoalA_29, hlds__make_hlds__goal_expr_to_goal__Renaming_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_49_49, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_51_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52_52, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_54_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_55_55);
          /* direct tailcall eliminated */
          {
            MR_Word hlds__make_hlds__goal_expr_to_goal__next_value_of_Goal_19 = hlds__make_hlds__goal_expr_to_goal__SubGoalB_30;
            MR_Word hlds__make_hlds__goal_expr_to_goal__next_value_of_STATE_VARIABLE_HLDSConjunctsCord_0_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_49_49;
            MR_Word hlds__make_hlds__goal_expr_to_goal__next_value_of_STATE_VARIABLE_SVarState_0_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50_50;
            MR_Word hlds__make_hlds__goal_expr_to_goal__next_value_of_STATE_VARIABLE_SVarStore_0_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_51_51;
            MR_Word hlds__make_hlds__goal_expr_to_goal__next_value_of_STATE_VARIABLE_VarSet_0_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52_52;
            MR_Word hlds__make_hlds__goal_expr_to_goal__next_value_of_STATE_VARIABLE_ModuleInfo_0_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53_53;
            MR_Word hlds__make_hlds__goal_expr_to_goal__next_value_of_STATE_VARIABLE_QualInfo_0_45 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_54_54;
            MR_Word hlds__make_hlds__goal_expr_to_goal__next_value_of_STATE_VARIABLE_Specs_0_47 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_55_55;

            hlds__make_hlds__goal_expr_to_goal__Goal_19 = hlds__make_hlds__goal_expr_to_goal__next_value_of_Goal_19;
            hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35 = hlds__make_hlds__goal_expr_to_goal__next_value_of_STATE_VARIABLE_HLDSConjunctsCord_0_35;
            hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37 = hlds__make_hlds__goal_expr_to_goal__next_value_of_STATE_VARIABLE_SVarState_0_37;
            hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39 = hlds__make_hlds__goal_expr_to_goal__next_value_of_STATE_VARIABLE_SVarStore_0_39;
            hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41 = hlds__make_hlds__goal_expr_to_goal__next_value_of_STATE_VARIABLE_VarSet_0_41;
            hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43 = hlds__make_hlds__goal_expr_to_goal__next_value_of_STATE_VARIABLE_ModuleInfo_0_43;
            hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45 = hlds__make_hlds__goal_expr_to_goal__next_value_of_STATE_VARIABLE_QualInfo_0_45;
            hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47 = hlds__make_hlds__goal_expr_to_goal__next_value_of_STATE_VARIABLE_Specs_0_47;
          }
          continue;
        }
      }
      else
      {
        MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31;
        MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32;
        MR_Word hlds__make_hlds__goal_expr_to_goal__Var_33;
        MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_34;
        MR_Word hlds__make_hlds__goal_expr_to_goal__Var_69;

        hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__Goal_19, hlds__make_hlds__goal_expr_to_goal__Renaming_20, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_38, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_42, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_44, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_46, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_48);
        hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31, (MR_Integer) 0)));
        hlds__make_hlds__goal_expr_to_goal__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31, (MR_Integer) 1)));
        hlds__make_hlds__goal_expr_to_goal__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
        {
          hlds__make_hlds__goal_expr_to_goal__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32, (MR_Integer) 1)));
          hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32, (MR_Integer) 2)));
          hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__Var_69 == (MR_Integer) 1);
        }
        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
        {
          MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_73_73 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
          MR_Word hlds__make_hlds__goal_expr_to_goal__Var_71;

          hlds__make_hlds__goal_expr_to_goal__Var_71 = mercury__cord__from_list_1_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_73_73, hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_34);
          *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36 = mercury__cord__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_73_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35, hlds__make_hlds__goal_expr_to_goal__Var_71);
        }
        else
        {
          *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31)));
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

          hlds__make_hlds__goal_expr_to_goal__accumulate_plain_conjuncts_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__SubGoalA_29, hlds__make_hlds__goal_expr_to_goal__Renaming_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_49_49, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_51_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52_52, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_54_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_55_55);
          /* direct tailcall eliminated */
          {
            MR_Word hlds__make_hlds__goal_expr_to_goal__next_value_of_Goal_19 = hlds__make_hlds__goal_expr_to_goal__SubGoalB_30;
            MR_Word hlds__make_hlds__goal_expr_to_goal__next_value_of_STATE_VARIABLE_HLDSConjunctsCord_0_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_49_49;
            MR_Word hlds__make_hlds__goal_expr_to_goal__next_value_of_STATE_VARIABLE_SVarState_0_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50_50;
            MR_Word hlds__make_hlds__goal_expr_to_goal__next_value_of_STATE_VARIABLE_SVarStore_0_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_51_51;
            MR_Word hlds__make_hlds__goal_expr_to_goal__next_value_of_STATE_VARIABLE_VarSet_0_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52_52;
            MR_Word hlds__make_hlds__goal_expr_to_goal__next_value_of_STATE_VARIABLE_ModuleInfo_0_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53_53;
            MR_Word hlds__make_hlds__goal_expr_to_goal__next_value_of_STATE_VARIABLE_QualInfo_0_45 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_54_54;
            MR_Word hlds__make_hlds__goal_expr_to_goal__next_value_of_STATE_VARIABLE_Specs_0_47 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_55_55;

            hlds__make_hlds__goal_expr_to_goal__Goal_19 = hlds__make_hlds__goal_expr_to_goal__next_value_of_Goal_19;
            hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35 = hlds__make_hlds__goal_expr_to_goal__next_value_of_STATE_VARIABLE_HLDSConjunctsCord_0_35;
            hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37 = hlds__make_hlds__goal_expr_to_goal__next_value_of_STATE_VARIABLE_SVarState_0_37;
            hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39 = hlds__make_hlds__goal_expr_to_goal__next_value_of_STATE_VARIABLE_SVarStore_0_39;
            hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41 = hlds__make_hlds__goal_expr_to_goal__next_value_of_STATE_VARIABLE_VarSet_0_41;
            hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43 = hlds__make_hlds__goal_expr_to_goal__next_value_of_STATE_VARIABLE_ModuleInfo_0_43;
            hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45 = hlds__make_hlds__goal_expr_to_goal__next_value_of_STATE_VARIABLE_QualInfo_0_45;
            hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47 = hlds__make_hlds__goal_expr_to_goal__next_value_of_STATE_VARIABLE_Specs_0_47;
          }
          continue;
        }
      }
      else
      {
        MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31;
        MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32;
        MR_Word hlds__make_hlds__goal_expr_to_goal__Var_33;
        MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_34;
        MR_Word hlds__make_hlds__goal_expr_to_goal__Var_69;

        hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__Goal_19, hlds__make_hlds__goal_expr_to_goal__Renaming_20, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_38, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_42, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_44, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_46, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_48);
        hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31, (MR_Integer) 0)));
        hlds__make_hlds__goal_expr_to_goal__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31, (MR_Integer) 1)));
        hlds__make_hlds__goal_expr_to_goal__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
        {
          hlds__make_hlds__goal_expr_to_goal__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32, (MR_Integer) 1)));
          hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32, (MR_Integer) 2)));
          hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__Var_69 == (MR_Integer) 0);
        }
        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
        {
          MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_73_73 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
          MR_Word hlds__make_hlds__goal_expr_to_goal__Var_71;

          hlds__make_hlds__goal_expr_to_goal__Var_71 = mercury__cord__from_list_1_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_73_73, hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_34);
          *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36 = mercury__cord__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_73_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35, hlds__make_hlds__goal_expr_to_goal__Var_71);
        }
        else
        {
          *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31)));
        }
      }
    }
    break;
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

    hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1), &hlds__make_hlds__goal_expr_to_goal__conv3_HeadVar__3_3, ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3), &hlds__make_hlds__goal_expr_to_goal__conv2_HeadVar__5_5, ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_5), &hlds__make_hlds__goal_expr_to_goal__conv1_HeadVar__7_7, ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_7), &hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__9_9);
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
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_63;
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
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_85;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_86;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_87;
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

    parse_tree__prog_rename__rename_var_list_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_88_88, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_29, hlds__make_hlds__goal_expr_to_goal__Vars0_24, &hlds__make_hlds__goal_expr_to_goal__Vars_39);
    parse_tree__prog_rename__rename_var_list_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_88_88, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_29, hlds__make_hlds__goal_expr_to_goal__StateVars0_25, &hlds__make_hlds__goal_expr_to_goal__StateVars1_40);
    parse_tree__prog_rename__rename_var_list_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_88_88, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_29, hlds__make_hlds__goal_expr_to_goal__DotSVars0_26, &hlds__make_hlds__goal_expr_to_goal__DotSVars1_41);
    parse_tree__prog_rename__rename_var_list_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_88_88, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_29, hlds__make_hlds__goal_expr_to_goal__ColonSVars0_27, &hlds__make_hlds__goal_expr_to_goal__ColonSVars1_42);
    {
      hlds__make_hlds__goal_expr_to_goal__Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_63, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_63, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_63, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
    }
    hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97 = (MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0];
    hlds__make_hlds__goal_expr_to_goal__TypeInfo_98_98 = (MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[2];
    hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_99_99 = (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0;
    hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100 = (MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3];
    mercury__list__map_foldl3_9_p_1(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_98_98, hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_99_99, hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100, hlds__make_hlds__goal_expr_to_goal__Var_63, hlds__make_hlds__goal_expr_to_goal__StateVars1_40, &hlds__make_hlds__goal_expr_to_goal__OldStateVars_43, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_51)), &hlds__make_hlds__goal_expr_to_goal__conv6_STATE_VARIABLE_VarSet_64_64, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_47)), &hlds__make_hlds__goal_expr_to_goal__conv5_STATE_VARIABLE_SVarState_65_65, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_57)), &hlds__make_hlds__goal_expr_to_goal__conv4_STATE_VARIABLE_Specs_66_66);
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_64_64 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv6_STATE_VARIABLE_VarSet_64_64);
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_65_65 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv5_STATE_VARIABLE_SVarState_65_65);
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66_66 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv4_STATE_VARIABLE_Specs_66_66);
    mercury__list__map_foldl3_9_p_1(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_98_98, hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_99_99, hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100, hlds__make_hlds__goal_expr_to_goal__Var_63, hlds__make_hlds__goal_expr_to_goal__DotSVars1_41, &hlds__make_hlds__goal_expr_to_goal__DotSVars_44, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_64_64)), &hlds__make_hlds__goal_expr_to_goal__conv9_STATE_VARIABLE_VarSet_68_68, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_65_65)), &hlds__make_hlds__goal_expr_to_goal__conv8_STATE_VARIABLE_SVarState_69_69, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66_66)), &hlds__make_hlds__goal_expr_to_goal__conv7_STATE_VARIABLE_Specs_70_70);
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_68_68 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv9_STATE_VARIABLE_VarSet_68_68);
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_69_69 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv8_STATE_VARIABLE_SVarState_69_69);
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_70_70 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv7_STATE_VARIABLE_Specs_70_70);
    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__Goal_31, hlds__make_hlds__goal_expr_to_goal__Renaming_29, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_32, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_69_69, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_71_71, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_49, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_68_68, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_73_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_55, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_70_70, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_76_76);
    mercury__list__map_foldl3_9_p_1(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_98_98, hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_99_99, hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100, hlds__make_hlds__goal_expr_to_goal__Var_63, hlds__make_hlds__goal_expr_to_goal__StateVars1_40, &hlds__make_hlds__goal_expr_to_goal__NewStateVars_45, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_73_73)), &hlds__make_hlds__goal_expr_to_goal__conv12_STATE_VARIABLE_VarSet_78_78, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_71_71)), &hlds__make_hlds__goal_expr_to_goal__conv11_STATE_VARIABLE_SVarState_79_79, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_76_76)), &hlds__make_hlds__goal_expr_to_goal__conv10_STATE_VARIABLE_Specs_80_80);
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_78_78 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv12_STATE_VARIABLE_VarSet_78_78);
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_79_79 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv11_STATE_VARIABLE_SVarState_79_79);
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_80_80 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv10_STATE_VARIABLE_Specs_80_80);
    mercury__list__map_foldl3_9_p_1(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_98_98, hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_99_99, hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100, hlds__make_hlds__goal_expr_to_goal__Var_63, hlds__make_hlds__goal_expr_to_goal__ColonSVars1_42, &hlds__make_hlds__goal_expr_to_goal__ColonSVars_46, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_78_78)), &hlds__make_hlds__goal_expr_to_goal__conv15_STATE_VARIABLE_VarSet_52, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_79_79)), &hlds__make_hlds__goal_expr_to_goal__conv14_STATE_VARIABLE_SVarState_48, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_80_80)), &hlds__make_hlds__goal_expr_to_goal__conv13_STATE_VARIABLE_Specs_58);
    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv15_STATE_VARIABLE_VarSet_52);
    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_48 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv14_STATE_VARIABLE_SVarState_48);
    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_58 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv13_STATE_VARIABLE_Specs_58);
    hlds__make_hlds__goal_expr_to_goal__Var_87 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__DotSVars_44, hlds__make_hlds__goal_expr_to_goal__ColonSVars_46);
    hlds__make_hlds__goal_expr_to_goal__Var_86 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__NewStateVars_45, hlds__make_hlds__goal_expr_to_goal__Var_87);
    hlds__make_hlds__goal_expr_to_goal__Var_85 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__OldStateVars_43, hlds__make_hlds__goal_expr_to_goal__Var_86);
    *hlds__make_hlds__goal_expr_to_goal__QuantVars_30 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__Vars_39, hlds__make_hlds__goal_expr_to_goal__Var_85);
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

    hlds__make_hlds__goal_expr_to_goal__extract_trace_mutable_var_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__closure, (MR_Integer) 5))), ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1), &hlds__make_hlds__goal_expr_to_goal__conv3_MutableHLDS_13, &hlds__make_hlds__goal_expr_to_goal__conv2_StateVar_14, &hlds__make_hlds__goal_expr_to_goal__conv1_GetGoal_15, &hlds__make_hlds__goal_expr_to_goal__conv0_SetGoal_16);
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
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_206,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_207,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_208,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_209,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_210,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_211,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_212,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_213,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_214,
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_215,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216)
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
            MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_828_828 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            MR_Word hlds__make_hlds__goal_expr_to_goal__TermA0_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__goal_expr_to_goal__TermB0_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
            MR_Word hlds__make_hlds__goal_expr_to_goal__TermA_195;
            MR_Word hlds__make_hlds__goal_expr_to_goal__TermB_196;
            MR_Word hlds__make_hlds__goal_expr_to_goal__Context_801 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__goal_expr_to_goal__Purity_802 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
            MR_Word hlds__make_hlds__goal_expr_to_goal__StateVarA_197;
            MR_Word hlds__make_hlds__goal_expr_to_goal__Var_219;
            MR_String hlds__make_hlds__goal_expr_to_goal__Var_220;
            MR_Word hlds__make_hlds__goal_expr_to_goal__Var_221;
            MR_Word hlds__make_hlds__goal_expr_to_goal__Var_222;
            MR_Word hlds__make_hlds__goal_expr_to_goal__Var_223;
            MR_Word hlds__make_hlds__goal_expr_to_goal__Var_199;
            MR_Word hlds__make_hlds__goal_expr_to_goal__Var_198;

            parse_tree__prog_rename__rename_vars_in_term_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_828_828, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__TermA0_193, &hlds__make_hlds__goal_expr_to_goal__TermA_195);
            parse_tree__prog_rename__rename_vars_in_term_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_828_828, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__TermB0_194, &hlds__make_hlds__goal_expr_to_goal__TermB_196);
            hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__TermA_195)) == (MR_mktag((MR_Integer) 0)));
            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
            {
              hlds__make_hlds__goal_expr_to_goal__Var_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermA_195, (MR_Integer) 0)));
              hlds__make_hlds__goal_expr_to_goal__Var_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermA_195, (MR_Integer) 1)));
              hlds__make_hlds__goal_expr_to_goal__Var_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermA_195, (MR_Integer) 2)));
              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Var_219)) == (MR_mktag((MR_Integer) 0)));
              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
              {
                hlds__make_hlds__goal_expr_to_goal__Var_220 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_219, (MR_Integer) 0)));
                hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__Var_220, (MR_String) "!") == 0);
                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                {
                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Var_221)) == (MR_mktag((MR_Integer) 1)));
                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                  {
                    hlds__make_hlds__goal_expr_to_goal__Var_222 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_221, (MR_Integer) 0)));
                    hlds__make_hlds__goal_expr_to_goal__Var_223 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_221, (MR_Integer) 1)));
                    hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__Var_223 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                    {
                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Var_222)) == (MR_mktag((MR_Integer) 1)));
                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                      {
                        hlds__make_hlds__goal_expr_to_goal__StateVarA_197 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_222, (MR_Integer) 0)));
                        hlds__make_hlds__goal_expr_to_goal__Var_198 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_222, (MR_Integer) 1)));
                      }
                    }
                  }
                }
              }
            }
            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
            {
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_224_224;
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_225_225;
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_226_226;
              MR_Word hlds__make_hlds__goal_expr_to_goal__StateVarB_200;
              MR_Word hlds__make_hlds__goal_expr_to_goal__Var_227;
              MR_String hlds__make_hlds__goal_expr_to_goal__Var_228;
              MR_Word hlds__make_hlds__goal_expr_to_goal__Var_229;
              MR_Word hlds__make_hlds__goal_expr_to_goal__Var_230;
              MR_Word hlds__make_hlds__goal_expr_to_goal__Var_231;
              MR_Word hlds__make_hlds__goal_expr_to_goal__Var_202;
              MR_Word hlds__make_hlds__goal_expr_to_goal__Var_201;

              hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(hlds__make_hlds__goal_expr_to_goal__Context_801, hlds__make_hlds__goal_expr_to_goal__StateVarA_197, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_224_224, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_225_225, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_215, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_226_226);
              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__TermB_196)) == (MR_mktag((MR_Integer) 0)));
              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
              {
                hlds__make_hlds__goal_expr_to_goal__Var_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermB_196, (MR_Integer) 0)));
                hlds__make_hlds__goal_expr_to_goal__Var_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermB_196, (MR_Integer) 1)));
                hlds__make_hlds__goal_expr_to_goal__Var_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermB_196, (MR_Integer) 2)));
                hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Var_227)) == (MR_mktag((MR_Integer) 0)));
                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                {
                  hlds__make_hlds__goal_expr_to_goal__Var_228 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_227, (MR_Integer) 0)));
                  hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__Var_228, (MR_String) "!") == 0);
                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                  {
                    hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Var_229)) == (MR_mktag((MR_Integer) 1)));
                    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                    {
                      hlds__make_hlds__goal_expr_to_goal__Var_230 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_229, (MR_Integer) 0)));
                      hlds__make_hlds__goal_expr_to_goal__Var_231 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_229, (MR_Integer) 1)));
                      hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__Var_231 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                      {
                        hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Var_230)) == (MR_mktag((MR_Integer) 1)));
                        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                        {
                          hlds__make_hlds__goal_expr_to_goal__StateVarB_200 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_230, (MR_Integer) 0)));
                          hlds__make_hlds__goal_expr_to_goal__Var_201 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_230, (MR_Integer) 1)));
                        }
                      }
                    }
                  }
                }
              }
              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(hlds__make_hlds__goal_expr_to_goal__Context_801, hlds__make_hlds__goal_expr_to_goal__StateVarB_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_224_224, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_225_225, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_226_226, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216);
              else
              {
                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_226_226;
                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_210 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_224_224;
                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_206 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_225_225;
              }
              *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = hlds__make_goal__true_goal_with_context_1_f_0(hlds__make_hlds__goal_expr_to_goal__Context_801);
              *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_214 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_213;
              *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_212 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_211;
              *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_208 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_207;
            }
            else
            {
              MR_Word hlds__make_hlds__goal_expr_to_goal__StateVarB_800;
              MR_Word hlds__make_hlds__goal_expr_to_goal__Var_235;
              MR_String hlds__make_hlds__goal_expr_to_goal__Var_236;
              MR_Word hlds__make_hlds__goal_expr_to_goal__Var_237;
              MR_Word hlds__make_hlds__goal_expr_to_goal__Var_238;
              MR_Word hlds__make_hlds__goal_expr_to_goal__Var_239;
              MR_Word hlds__make_hlds__goal_expr_to_goal__Var_204;
              MR_Word hlds__make_hlds__goal_expr_to_goal__Var_203;

              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__TermB_196)) == (MR_mktag((MR_Integer) 0)));
              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
              {
                hlds__make_hlds__goal_expr_to_goal__Var_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermB_196, (MR_Integer) 0)));
                hlds__make_hlds__goal_expr_to_goal__Var_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermB_196, (MR_Integer) 1)));
                hlds__make_hlds__goal_expr_to_goal__Var_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermB_196, (MR_Integer) 2)));
                hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Var_235)) == (MR_mktag((MR_Integer) 0)));
                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                {
                  hlds__make_hlds__goal_expr_to_goal__Var_236 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_235, (MR_Integer) 0)));
                  hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__Var_236, (MR_String) "!") == 0);
                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                  {
                    hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Var_237)) == (MR_mktag((MR_Integer) 1)));
                    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                    {
                      hlds__make_hlds__goal_expr_to_goal__Var_238 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_237, (MR_Integer) 0)));
                      hlds__make_hlds__goal_expr_to_goal__Var_239 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_237, (MR_Integer) 1)));
                      hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__Var_239 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                      {
                        hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Var_238)) == (MR_mktag((MR_Integer) 1)));
                        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                        {
                          hlds__make_hlds__goal_expr_to_goal__StateVarB_800 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_238, (MR_Integer) 0)));
                          hlds__make_hlds__goal_expr_to_goal__Var_203 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_238, (MR_Integer) 1)));
                        }
                      }
                    }
                  }
                }
              }
              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
              {
                hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(hlds__make_hlds__goal_expr_to_goal__Context_801, hlds__make_hlds__goal_expr_to_goal__StateVarB_800, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_215, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216);
                *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = hlds__make_goal__true_goal_0_f_0();
                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_214 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_213;
                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_212 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_211;
                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_208 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_207;
              }
              else
              {
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_245_245;

                hlds__make_hlds__superhomogeneous__unravel_unification_19_p_0(hlds__make_hlds__goal_expr_to_goal__TermA_195, hlds__make_hlds__goal_expr_to_goal__TermB_196, hlds__make_hlds__goal_expr_to_goal__Context_801, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__goal_expr_to_goal__Purity_802, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_245_245, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_214, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_215, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216);
                hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_245_245, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_206);
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word hlds__make_hlds__goal_expr_to_goal__Name_166 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_256_256;
            MR_Word hlds__make_hlds__goal_expr_to_goal__Context_788 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__goal_expr_to_goal__Purity_791 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
            MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms0_792 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
            MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms1_793;
            MR_Word hlds__make_hlds__goal_expr_to_goal__LHSTerm_167;
            MR_Word hlds__make_hlds__goal_expr_to_goal__RHSTerm_168;
            MR_String hlds__make_hlds__goal_expr_to_goal__Var_252;
            MR_Word hlds__make_hlds__goal_expr_to_goal__Var_253;
            MR_Word hlds__make_hlds__goal_expr_to_goal__Var_254;

            hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(hlds__make_hlds__goal_expr_to_goal__ArgTerms0_792, &hlds__make_hlds__goal_expr_to_goal__ArgTerms1_793);
            hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Name_166)) == (MR_mktag((MR_Integer) 0)));
            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
            {
              hlds__make_hlds__goal_expr_to_goal__Var_252 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Name_166, (MR_Integer) 0)));
              hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__Var_252, (MR_String) "\\=") == 0);
              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
              {
                hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__ArgTerms1_793)) == (MR_mktag((MR_Integer) 1)));
                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                {
                  hlds__make_hlds__goal_expr_to_goal__LHSTerm_167 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms1_793, (MR_Integer) 0)));
                  hlds__make_hlds__goal_expr_to_goal__Var_253 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms1_793, (MR_Integer) 1)));
                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Var_253)) == (MR_mktag((MR_Integer) 1)));
                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                  {
                    hlds__make_hlds__goal_expr_to_goal__RHSTerm_168 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_253, (MR_Integer) 0)));
                    hlds__make_hlds__goal_expr_to_goal__Var_254 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_253, (MR_Integer) 1)));
                    hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__Var_254 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              }
            }
            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
            {
              MR_Word hlds__make_hlds__goal_expr_to_goal__Var_255;
              MR_Word hlds__make_hlds__goal_expr_to_goal__TransformedGoal_749;

              {
                hlds__make_hlds__goal_expr_to_goal__Var_255 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_255, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_788));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_255, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__LHSTerm_167));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_255, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__RHSTerm_168));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_255, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Purity_791));
              }
              {
                hlds__make_hlds__goal_expr_to_goal__TransformedGoal_749 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_749, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_749, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_788));
                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_749, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_255));
              }
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__TransformedGoal_749, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_256_256, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_214, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_215, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216);
            }
            else
            {
              MR_Word hlds__make_hlds__goal_expr_to_goal__RHSTerm0_170;
              MR_Word hlds__make_hlds__goal_expr_to_goal__Remainder_172;
              MR_Word hlds__make_hlds__goal_expr_to_goal__FieldListContext_173;
              MR_Word hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_174;
              MR_Word hlds__make_hlds__goal_expr_to_goal__StateVarContext_175;
              MR_Word hlds__make_hlds__goal_expr_to_goal__Var_265;
              MR_Word hlds__make_hlds__goal_expr_to_goal__LHSTerm0_169;
              MR_Word hlds__make_hlds__goal_expr_to_goal__StateVar0_171;
              MR_String hlds__make_hlds__goal_expr_to_goal__Var_262;
              MR_Word hlds__make_hlds__goal_expr_to_goal__Var_263;
              MR_Word hlds__make_hlds__goal_expr_to_goal__Var_264;
              MR_String hlds__make_hlds__goal_expr_to_goal__Var_266;
              MR_Word hlds__make_hlds__goal_expr_to_goal__Var_267;
              MR_Word hlds__make_hlds__goal_expr_to_goal__Var_268;
              MR_Word hlds__make_hlds__goal_expr_to_goal__Var_269;
              MR_Word hlds__make_hlds__goal_expr_to_goal__Var_270;
              MR_String hlds__make_hlds__goal_expr_to_goal__Var_271;
              MR_Word hlds__make_hlds__goal_expr_to_goal__Var_272;
              MR_Word hlds__make_hlds__goal_expr_to_goal__Var_273;
              MR_Word hlds__make_hlds__goal_expr_to_goal__Var_176;
              MR_Word hlds__make_hlds__goal_expr_to_goal__Var_177;

              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Name_166)) == (MR_mktag((MR_Integer) 0)));
              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
              {
                hlds__make_hlds__goal_expr_to_goal__Var_262 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Name_166, (MR_Integer) 0)));
                hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__Var_262, (MR_String) ":=") == 0);
                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                {
                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__ArgTerms1_793)) == (MR_mktag((MR_Integer) 1)));
                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                  {
                    hlds__make_hlds__goal_expr_to_goal__LHSTerm0_169 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms1_793, (MR_Integer) 0)));
                    hlds__make_hlds__goal_expr_to_goal__Var_263 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms1_793, (MR_Integer) 1)));
                    hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Var_263)) == (MR_mktag((MR_Integer) 1)));
                    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                    {
                      hlds__make_hlds__goal_expr_to_goal__RHSTerm0_170 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_263, (MR_Integer) 0)));
                      hlds__make_hlds__goal_expr_to_goal__Var_264 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_263, (MR_Integer) 1)));
                      hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__Var_264 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                      {
                        hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__LHSTerm0_169)) == (MR_mktag((MR_Integer) 0)));
                        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                        {
                          hlds__make_hlds__goal_expr_to_goal__Var_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm0_169, (MR_Integer) 0)));
                          hlds__make_hlds__goal_expr_to_goal__Var_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm0_169, (MR_Integer) 1)));
                          hlds__make_hlds__goal_expr_to_goal__FieldListContext_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm0_169, (MR_Integer) 2)));
                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Var_265)) == (MR_mktag((MR_Integer) 0)));
                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                          {
                            hlds__make_hlds__goal_expr_to_goal__Var_266 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_265, (MR_Integer) 0)));
                            hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__Var_266, (MR_String) "^") == 0);
                            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                            {
                              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Var_267)) == (MR_mktag((MR_Integer) 1)));
                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                              {
                                hlds__make_hlds__goal_expr_to_goal__StateVar0_171 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_267, (MR_Integer) 0)));
                                hlds__make_hlds__goal_expr_to_goal__Var_268 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_267, (MR_Integer) 1)));
                                hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Var_268)) == (MR_mktag((MR_Integer) 1)));
                                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                                {
                                  hlds__make_hlds__goal_expr_to_goal__Remainder_172 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_268, (MR_Integer) 0)));
                                  hlds__make_hlds__goal_expr_to_goal__Var_269 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_268, (MR_Integer) 1)));
                                  hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__Var_269 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                                  {
                                    hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__StateVar0_171)) == (MR_mktag((MR_Integer) 0)));
                                    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                                    {
                                      hlds__make_hlds__goal_expr_to_goal__Var_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar0_171, (MR_Integer) 0)));
                                      hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar0_171, (MR_Integer) 1)));
                                      hlds__make_hlds__goal_expr_to_goal__StateVarContext_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar0_171, (MR_Integer) 2)));
                                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Var_270)) == (MR_mktag((MR_Integer) 0)));
                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                                      {
                                        hlds__make_hlds__goal_expr_to_goal__Var_271 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_270, (MR_Integer) 0)));
                                        hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__Var_271, (MR_String) "!") == 0);
                                        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                                        {
                                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_174)) == (MR_mktag((MR_Integer) 1)));
                                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                                          {
                                            hlds__make_hlds__goal_expr_to_goal__Var_272 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_174, (MR_Integer) 0)));
                                            hlds__make_hlds__goal_expr_to_goal__Var_273 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_174, (MR_Integer) 1)));
                                            hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Var_272)) == (MR_mktag((MR_Integer) 1)));
                                            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                                            {
                                              hlds__make_hlds__goal_expr_to_goal__Var_176 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_272, (MR_Integer) 0)));
                                              hlds__make_hlds__goal_expr_to_goal__Var_177 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_272, (MR_Integer) 1)));
                                              hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__Var_273 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                MR_Word hlds__make_hlds__goal_expr_to_goal__StateVar_178;
                MR_Word hlds__make_hlds__goal_expr_to_goal__FieldList_179;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Var_280;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Var_281;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Var_285;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Var_286;
                MR_Word hlds__make_hlds__goal_expr_to_goal__TransformedGoal_750;
                MR_Word hlds__make_hlds__goal_expr_to_goal__LHSTerm_751;
                MR_Word hlds__make_hlds__goal_expr_to_goal__RHSTerm_752;

                {
                  hlds__make_hlds__goal_expr_to_goal__LHSTerm_751 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm_751, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[0]));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm_751, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_174));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm_751, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVarContext_175));
                }
                {
                  hlds__make_hlds__goal_expr_to_goal__StateVar_178 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar_178, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[1]));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar_178, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_174));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar_178, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVarContext_175));
                }
                {
                  hlds__make_hlds__goal_expr_to_goal__Var_281 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_281, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Remainder_172));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_281, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  hlds__make_hlds__goal_expr_to_goal__Var_280 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_280, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVar_178));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_280, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_281));
                }
                {
                  hlds__make_hlds__goal_expr_to_goal__FieldList_179 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__FieldList_179, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_265));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__FieldList_179, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_280));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__FieldList_179, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FieldListContext_173));
                }
                {
                  hlds__make_hlds__goal_expr_to_goal__Var_286 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_286, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__RHSTerm0_170));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_286, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  hlds__make_hlds__goal_expr_to_goal__Var_285 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_285, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FieldList_179));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_285, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_286));
                }
                {
                  hlds__make_hlds__goal_expr_to_goal__RHSTerm_752 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__RHSTerm_752, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[3]));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__RHSTerm_752, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_285));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__RHSTerm_752, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_788));
                }
                {
                  hlds__make_hlds__goal_expr_to_goal__TransformedGoal_750 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_750, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_788));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_750, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__LHSTerm_751));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_750, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__RHSTerm_752));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_750, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Purity_791));
                }
                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__TransformedGoal_750, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_256_256, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_214, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_215, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216);
              }
              else
              {
                MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_181;
                MR_String hlds__make_hlds__goal_expr_to_goal__Operator_180;

                hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Name_166)) == (MR_mktag((MR_Integer) 0)));
                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                {
                  hlds__make_hlds__goal_expr_to_goal__Operator_180 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Name_166, (MR_Integer) 0)));
                  if ((strcmp(hlds__make_hlds__goal_expr_to_goal__Operator_180, (MR_String) ":=") == 0))
                  {
                    hlds__make_hlds__goal_expr_to_goal__AccessType_181 = (MR_Integer) 1;
                    hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
                  }
                  else
                  if ((strcmp(hlds__make_hlds__goal_expr_to_goal__Operator_180, (MR_String) "=^") == 0))
                  {
                    hlds__make_hlds__goal_expr_to_goal__AccessType_181 = (MR_Integer) 0;
                    hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
                  }
                  else
                    hlds__make_hlds__goal_expr_to_goal__succeeded = MR_FALSE;
                }
                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                {
                  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms_753;

                  parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__ArgTerms1_793, &hlds__make_hlds__goal_expr_to_goal__ArgTerms_753);
                  hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__AccessType_181, hlds__make_hlds__goal_expr_to_goal__ArgTerms_753, hlds__make_hlds__goal_expr_to_goal__Context_788, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_256_256, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_214, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_215, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216);
                }
                else
                {
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Call_187;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo0_192;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_302_302;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_303_303;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_304_304;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_312_312;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Var_313;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_756;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms_757;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVars_758;
                  MR_Integer hlds__make_hlds__goal_expr_to_goal__Arity_759;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_761;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__CallId_762;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__PredVar_182;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__RealHeadVars_183;
                  MR_String hlds__make_hlds__goal_expr_to_goal__Var_832;

                  parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__ArgTerms1_793, &hlds__make_hlds__goal_expr_to_goal__ArgTerms_757);
                  hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(hlds__make_hlds__goal_expr_to_goal__ArgTerms_757, &hlds__make_hlds__goal_expr_to_goal__HeadVars_758, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_302_302, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_303_303, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_215, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_304_304);
                  mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[1], hlds__make_hlds__goal_expr_to_goal__ArgTerms_757, &hlds__make_hlds__goal_expr_to_goal__Arity_759);
                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Name_166)) == (MR_mktag((MR_Integer) 0)));
                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                  {
                    hlds__make_hlds__goal_expr_to_goal__Var_832 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Name_166, (MR_Integer) 0)));
                    if ((strcmp(hlds__make_hlds__goal_expr_to_goal__Var_832, (MR_String) "") == 0))
                      hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
                    else
                    if ((strcmp(hlds__make_hlds__goal_expr_to_goal__Var_832, (MR_String) "call") == 0))
                      hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
                    else
                      hlds__make_hlds__goal_expr_to_goal__succeeded = MR_FALSE;
                    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                    {
                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__HeadVars_758)) == (MR_mktag((MR_Integer) 1)));
                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                      {
                        hlds__make_hlds__goal_expr_to_goal__PredVar_182 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVars_758, (MR_Integer) 0)));
                        hlds__make_hlds__goal_expr_to_goal__RealHeadVars_183 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVars_758, (MR_Integer) 1)));
                      }
                    }
                  }
                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                  {
                    MR_Word hlds__make_hlds__goal_expr_to_goal__GenericCall_186;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__GenericCallId_188;

                    {
                      hlds__make_hlds__goal_expr_to_goal__GenericCall_186 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GenericCall_186, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__PredVar_182));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GenericCall_186, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Purity_791));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GenericCall_186, 2) = ((MR_Box) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GenericCall_186, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Arity_759));
                    }
                    {
                      hlds__make_hlds__goal_expr_to_goal__Call_187 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_187, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_187, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GenericCall_186));
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_187, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__RealHeadVars_183));
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_187, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_187, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_187, 5) = ((MR_Box) ((MR_Integer) 6));
                    }
                    hlds__hlds_goal__generic_call_to_id_2_p_0(hlds__make_hlds__goal_expr_to_goal__GenericCall_186, &hlds__make_hlds__goal_expr_to_goal__GenericCallId_188);
                    {
                      hlds__make_hlds__goal_expr_to_goal__CallId_762 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallId_762, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GenericCallId_188));
                    }
                  }
                  else
                  {
                    MR_Word hlds__make_hlds__goal_expr_to_goal__PredId_189;
                    MR_Integer hlds__make_hlds__goal_expr_to_goal__ModeId_190;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_309;

                    hlds__make_hlds__goal_expr_to_goal__PredId_189 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                    hlds__make_hlds__goal_expr_to_goal__ModeId_190 = hlds__hlds_pred__invalid_proc_id_0_f_0();
                    {
                      hlds__make_hlds__goal_expr_to_goal__Call_187 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_187, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__PredId_189));
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_187, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ModeId_190));
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_187, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HeadVars_758));
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_187, 3) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_187, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_187, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Name_166));
                    }
                    {
                      hlds__make_hlds__goal_expr_to_goal__Var_309 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_309, 0) = ((MR_Box) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_309, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Name_166));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_309, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Arity_759));
                    }
                    {
                      hlds__make_hlds__goal_expr_to_goal__CallId_762 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__CallId_762, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_309));
                    }
                  }
                  hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_788, &hlds__make_hlds__goal_expr_to_goal__GoalInfo0_192);
                  hlds__hlds_goal__goal_info_set_purity_3_p_0(hlds__make_hlds__goal_expr_to_goal__Purity_791, hlds__make_hlds__goal_expr_to_goal__GoalInfo0_192, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_756);
                  {
                    hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_761 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_761, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Call_187));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_761, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_756));
                  }
                  hlds__make_hlds__qual_info__record_called_pred_or_func_5_p_0((MR_Integer) 0, hlds__make_hlds__goal_expr_to_goal__Name_166, hlds__make_hlds__goal_expr_to_goal__Arity_759, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_213, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_312_312);
                  {
                    hlds__make_hlds__goal_expr_to_goal__Var_313 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_313, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CallId_762));
                  }
                  hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(hlds__make_hlds__goal_expr_to_goal__HeadVars_758, hlds__make_hlds__goal_expr_to_goal__ArgTerms_757, hlds__make_hlds__goal_expr_to_goal__Context_788, hlds__make_hlds__goal_expr_to_goal__Var_313, hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_761, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_303_303, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_256_256, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_302_302, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_312_312, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_214, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_304_304, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216);
                }
              }
            }
            hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_256_256, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_206);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_820_820 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
            MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalA_140 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalB_141 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordA_142;
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordAB_143;
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_144;
            MR_Word hlds__make_hlds__goal_expr_to_goal__Var_385;
            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_386_386;
            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_387_387;
            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_388_388;
            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_389_389;
            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_390_390;
            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_391_391;
            MR_Word hlds__make_hlds__goal_expr_to_goal__Context_726 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_727;

            hlds__make_hlds__goal_expr_to_goal__Var_385 = mercury__cord__init_0_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_820_820);
            hlds__make_hlds__goal_expr_to_goal__accumulate_plain_conjuncts_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalA_140, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__Var_385, &hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordA_142, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_386_386, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_387_387, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_388_388, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_389_389, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_213, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_390_390, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_215, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_391_391);
            hlds__make_hlds__goal_expr_to_goal__accumulate_plain_conjuncts_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalB_141, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordA_142, &hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordAB_143, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_386_386, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_387_387, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_388_388, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_389_389, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_390_390, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_214, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_391_391, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216);
            hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_144 = mercury__cord__list_1_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_820_820, hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordAB_143);
            hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_726, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_727);
            hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_144, hlds__make_hlds__goal_expr_to_goal__GoalInfo_727, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word hlds__make_hlds__goal_expr_to_goal__Context_829 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_831;

                hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_829, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_831);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_4[0])));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_831));
                }
                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_206 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205;
                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_208 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_207;
                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_210 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_209;
                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_212 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_211;
                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_214 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_213;
                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_215;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_819_819 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars0_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__Cond_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__Then_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__Else_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__BeforeCondSVarState_128;
                MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSCond_129;
                MR_Word hlds__make_hlds__goal_expr_to_goal__AfterCondSVarState_130;
                MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSThen0_131;
                MR_Word hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState0_132;
                MR_Word hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState_133;
                MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSElse0_134;
                MR_Word hlds__make_hlds__goal_expr_to_goal__AfterElseSVarState_135;
                MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSThen_136;
                MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSElse_137;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_406_406;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_407_407;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_408_408;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_409_409;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_410_410;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_411_411;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_412_412;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_413_413;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_414_414;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_415_415;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_416_416;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_417_417;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_418_418;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_421_421;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Context_714 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_715;
                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_716;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Vars0_717 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_718;
                MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_719;

                parse_tree__prog_rename__rename_var_list_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_819_819, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__Vars0_717, &hlds__make_hlds__goal_expr_to_goal__Vars_718);
                parse_tree__prog_rename__rename_var_list_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_819_819, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__StateVars0_124, &hlds__make_hlds__goal_expr_to_goal__StateVars_719);
                hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(hlds__make_hlds__goal_expr_to_goal__Context_714, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_209, hlds__make_hlds__goal_expr_to_goal__StateVars_719, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205, &hlds__make_hlds__goal_expr_to_goal__BeforeCondSVarState_128, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_215, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_406_406);
                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Cond_125, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSCond_129, hlds__make_hlds__goal_expr_to_goal__BeforeCondSVarState_128, &hlds__make_hlds__goal_expr_to_goal__AfterCondSVarState_130, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_407_407, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_408_408, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_409_409, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_213, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_410_410, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_406_406, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_411_411);
                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Then_126, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSThen0_131, hlds__make_hlds__goal_expr_to_goal__AfterCondSVarState_130, &hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState0_132, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_407_407, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_412_412, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_408_408, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_413_413, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_409_409, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_414_414, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_410_410, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_415_415, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_411_411, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_416_416);
                hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(hlds__make_hlds__goal_expr_to_goal__StateVars_719, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205, hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState0_132, &hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState_133);
                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Else_127, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSElse0_134, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205, &hlds__make_hlds__goal_expr_to_goal__AfterElseSVarState_135, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_412_412, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_417_417, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_413_413, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_418_418, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_414_414, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_415_415, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_214, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_416_416, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_421_421);
                hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Context_714, hlds__make_hlds__goal_expr_to_goal__StateVars_719, hlds__make_hlds__goal_expr_to_goal__HLDSThen0_131, &hlds__make_hlds__goal_expr_to_goal__HLDSThen_136, hlds__make_hlds__goal_expr_to_goal__HLDSElse0_134, &hlds__make_hlds__goal_expr_to_goal__HLDSElse_137, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205, hlds__make_hlds__goal_expr_to_goal__AfterCondSVarState_130, hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState_133, hlds__make_hlds__goal_expr_to_goal__AfterElseSVarState_135, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_418_418, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_417_417, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_421_421, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216);
                {
                  hlds__make_hlds__goal_expr_to_goal__GoalExpr_715 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_715, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_715, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Vars_718));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_715, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSCond_129));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_715, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSThen_136));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_715, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSElse_137));
                }
                hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_714, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_716);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_715));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_716));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates1_146;
                MR_Word hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates_147;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Disjuncts_148;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_359_359;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_360_360;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_361_361;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_362_362;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_363_363;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_364_364;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_365_365;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Context_735 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_736;
                MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalA_737 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalB_738 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));

                hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalB_738, hlds__make_hlds__goal_expr_to_goal__Renaming_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates1_146, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_359_359, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_360_360, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_361_361, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_213, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_362_362, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_215, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_363_363);
                hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalA_737, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates1_146, &hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates_147, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_359_359, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_364_364, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_360_360, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_365_365, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_361_361, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_362_362, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_214, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_363_363, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216);
                hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_735, hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates_147, &hlds__make_hlds__goal_expr_to_goal__Disjuncts_148, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_365_365, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_364_364, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_208);
                hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_735, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_736);
                hlds__hlds_goal__disj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__Disjuncts_148, hlds__make_hlds__goal_expr_to_goal__GoalInfo_736, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word hlds__make_hlds__goal_expr_to_goal__Context_721 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_722;
                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_723;
                MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_724 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_725;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Var_139;

                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_724, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_725, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205, &hlds__make_hlds__goal_expr_to_goal__Var_139, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_214, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_215, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216);
                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_206 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205;
                hlds__make_hlds__goal_expr_to_goal__GoalExpr_722 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_725);
                hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_721, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_723);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_722));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_723));
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word hlds__make_hlds__goal_expr_to_goal__Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_29;

                hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_27, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_29);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[34])));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_29));
                }
                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_206 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205;
                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_208 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_207;
                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_210 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_209;
                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_212 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_211;
                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_214 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_213;
                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_215;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_821_821 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Var_372;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_373_373;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_374_374;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_375_375;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_376_376;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_377_377;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_378_378;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Context_728 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_729;
                MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalA_730 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalB_731 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordA_732;
                MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordAB_733;
                MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_734;

                hlds__make_hlds__goal_expr_to_goal__Var_372 = mercury__cord__init_0_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_821_821);
                hlds__make_hlds__goal_expr_to_goal__accumulate_par_conjuncts_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalA_730, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__Var_372, &hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordA_732, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_373_373, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_374_374, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_375_375, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_376_376, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_213, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_377_377, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_215, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_378_378);
                hlds__make_hlds__goal_expr_to_goal__accumulate_par_conjuncts_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalB_731, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordA_732, &hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordAB_733, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_373_373, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_374_374, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_375_375, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_376_376, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_377_377, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_214, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_378_378, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216);
                hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_734 = mercury__cord__list_1_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_821_821, hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordAB_733);
                hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_728, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_729);
                hlds__hlds_goal__par_conj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_734, hlds__make_hlds__goal_expr_to_goal__GoalInfo_729, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word hlds__make_hlds__goal_expr_to_goal__QuantType_30 = ((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)))) & (MR_Integer) 1);
                MR_Word hlds__make_hlds__goal_expr_to_goal__VarsKind_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                MR_Word hlds__make_hlds__goal_expr_to_goal__Vars0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__Context_626 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));

                switch (hlds__make_hlds__goal_expr_to_goal__QuantType_30) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word hlds__make_hlds__goal_expr_to_goal__TransformedGoal_34;
                      MR_Word hlds__make_hlds__goal_expr_to_goal__Var_610;
                      MR_Word hlds__make_hlds__goal_expr_to_goal__Var_612;

                      {
                        hlds__make_hlds__goal_expr_to_goal__Var_612 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Var_612, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Var_612, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_626));
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Var_612, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal_33));
                      }
                      {
                        hlds__make_hlds__goal_expr_to_goal__Var_610 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Var_610, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Var_610, 1) = ((MR_Box) (((MR_Integer) 0 | ((hlds__make_hlds__goal_expr_to_goal__VarsKind_31 << (MR_Integer) 1)))));
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Var_610, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_626));
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Var_610, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Vars0_32));
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Var_610, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_612));
                      }
                      {
                        hlds__make_hlds__goal_expr_to_goal__TransformedGoal_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_34, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_626));
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_34, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_610));
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Word hlds__make_hlds__goal_expr_to_goal__next_value_of_Goal_18 = hlds__make_hlds__goal_expr_to_goal__TransformedGoal_34;

                        hlds__make_hlds__goal_expr_to_goal__Goal_18 = hlds__make_hlds__goal_expr_to_goal__next_value_of_Goal_18;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_35;
                      MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_36;
                      MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_37;
                      MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_622;
                      MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_623;

                      parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__Vars0_32, &hlds__make_hlds__goal_expr_to_goal__Vars_35);
                      switch (hlds__make_hlds__goal_expr_to_goal__VarsKind_31) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_33, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_36, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_214, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_215, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216);
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
                            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_596_596;

                            hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(hlds__make_hlds__goal_expr_to_goal__Context_626, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_209, hlds__make_hlds__goal_expr_to_goal__Vars_35, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205, &hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_215, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_596_596);
                            hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_33, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_36, hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_40, &hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_41, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_214, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_596_596, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216);
                            hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(hlds__make_hlds__goal_expr_to_goal__Vars_35, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205, hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_41, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_206);
                            hlds__make_hlds__goal_expr_to_goal__Reason_37 = (MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_2[4];
                          }
                          break;
                      }
                      {
                        hlds__make_hlds__goal_expr_to_goal__GoalExpr_622 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_622, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_622, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_37));
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_622, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_36));
                      }
                      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_626, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_623);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_622));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_623));
                      }
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word hlds__make_hlds__goal_expr_to_goal__Purity_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__Context_629 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_630;
                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_631;
                MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_632 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_633;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_634;

                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_632, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_633, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_214, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_215, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216);
                {
                  hlds__make_hlds__goal_expr_to_goal__Reason_634 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_634, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_634, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Purity_43));
                }
                {
                  hlds__make_hlds__goal_expr_to_goal__GoalExpr_630 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_630, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_630, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_634));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_630, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_633));
                }
                hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_629, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_631);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_630));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_631));
                }
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__PromiseVars_46;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Context_635 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_636;
                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_637;
                MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_638 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_639 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_640;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_641;
                MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_642 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));

                hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Vars_639, hlds__make_hlds__goal_expr_to_goal__StateVars_642, hlds__make_hlds__goal_expr_to_goal__DotSVars_44, hlds__make_hlds__goal_expr_to_goal__ColonSVars_45, hlds__make_hlds__goal_expr_to_goal__Context_635, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__PromiseVars_46, hlds__make_hlds__goal_expr_to_goal__SubGoal_638, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_640, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_214, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_215, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216);
                {
                  hlds__make_hlds__goal_expr_to_goal__Reason_641 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Reason_641, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__PromiseVars_46));
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Reason_641, 1) = ((MR_Box) ((MR_Integer) 0));
                }
                {
                  hlds__make_hlds__goal_expr_to_goal__GoalExpr_636 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_636, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_636, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_641));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_636, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_640));
                }
                hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_635, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_637);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_636));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_637));
                }
              }
              break;
            case (MR_Integer) 9:
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

                hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Vars_647, hlds__make_hlds__goal_expr_to_goal__StateVars_650, hlds__make_hlds__goal_expr_to_goal__DotSVars_651, hlds__make_hlds__goal_expr_to_goal__ColonSVars_652, hlds__make_hlds__goal_expr_to_goal__Context_643, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__PromiseVars_653, hlds__make_hlds__goal_expr_to_goal__SubGoal_646, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_648, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_214, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_215, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216);
                {
                  hlds__make_hlds__goal_expr_to_goal__Reason_649 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Reason_649, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__PromiseVars_653));
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Reason_649, 1) = ((MR_Box) ((MR_Integer) 1));
                }
                {
                  hlds__make_hlds__goal_expr_to_goal__GoalExpr_644 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_644, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_644, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_649));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_644, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_648));
                }
                hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_643, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_645);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_644));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_645));
                }
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word hlds__make_hlds__goal_expr_to_goal__Context_654 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_655;
                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_656;
                MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_657 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_658 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_659;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_660;
                MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_661 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars_662 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars_663 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__PromiseVars_664;

                hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Vars_658, hlds__make_hlds__goal_expr_to_goal__StateVars_661, hlds__make_hlds__goal_expr_to_goal__DotSVars_662, hlds__make_hlds__goal_expr_to_goal__ColonSVars_663, hlds__make_hlds__goal_expr_to_goal__Context_654, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__PromiseVars_664, hlds__make_hlds__goal_expr_to_goal__SubGoal_657, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_659, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_214, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_215, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216);
                {
                  hlds__make_hlds__goal_expr_to_goal__Reason_660 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Reason_660, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__PromiseVars_664));
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Reason_660, 1) = ((MR_Box) ((MR_Integer) 2));
                }
                {
                  hlds__make_hlds__goal_expr_to_goal__GoalExpr_655 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_655, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_655, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_660));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_655, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_659));
                }
                hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_654, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_656);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_655));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_656));
                }
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word hlds__make_hlds__goal_expr_to_goal__Detism_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__Var_567;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Context_665 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_666;
                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_667;
                MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_668 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_669;

                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_668, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_669, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_214, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_215, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216);
                {
                  hlds__make_hlds__goal_expr_to_goal__Var_567 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Var_567, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Var_567, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Detism_47));
                }
                {
                  hlds__make_hlds__goal_expr_to_goal__GoalExpr_666 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_666, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_666, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_567));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_666, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_669));
                }
                hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_665, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_667);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_666));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_667));
                }
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word hlds__make_hlds__goal_expr_to_goal__PODVar0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__Var_51;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_544_544;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_545_545;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_546_546;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Var_553;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Context_675 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_676;
                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_677;
                MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_678 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_679;

                hlds__make_hlds__goal_expr_to_goal__rename_and_maybe_expand_dot_var_11_p_0(hlds__make_hlds__goal_expr_to_goal__Context_675, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__PODVar0_50, &hlds__make_hlds__goal_expr_to_goal__Var_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_544_544, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_545_545, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_215, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_546_546);
                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_678, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_679, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_544_544, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_545_545, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_214, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_546_546, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216);
                {
                  hlds__make_hlds__goal_expr_to_goal__Var_553 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Var_553, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Var_553, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_51));
                }
                {
                  hlds__make_hlds__goal_expr_to_goal__GoalExpr_676 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_676, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_676, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_553));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_676, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_679));
                }
                hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_675, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_677);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_676));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_677));
                }
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_533_533;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_534_534;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_535_535;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Var_542;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Context_680 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_681;
                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_682;
                MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_683 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_684;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Detism_685 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__PODVar0_686 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__Var_687;

                hlds__make_hlds__goal_expr_to_goal__rename_and_maybe_expand_dot_var_11_p_0(hlds__make_hlds__goal_expr_to_goal__Context_680, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__PODVar0_686, &hlds__make_hlds__goal_expr_to_goal__Var_687, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_533_533, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_534_534, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_215, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_535_535);
                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_683, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_684, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_533_533, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_534_534, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_214, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_535_535, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216);
                {
                  hlds__make_hlds__goal_expr_to_goal__Var_542 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Var_542, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Var_542, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_687));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Var_542, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Detism_685));
                }
                {
                  hlds__make_hlds__goal_expr_to_goal__GoalExpr_681 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_681, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_681, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_542));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_681, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_684));
                }
                hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_680, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_682);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_681));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_682));
                }
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word hlds__make_hlds__goal_expr_to_goal__HeadWarnings_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__TailWarnings_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__Var_560;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Context_670 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_671;
                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_672;
                MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_673 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_674;

                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_673, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_674, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_214, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_215, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216);
                {
                  hlds__make_hlds__goal_expr_to_goal__Var_560 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_560, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HeadWarnings_48));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_560, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__TailWarnings_49));
                }
                {
                  hlds__make_hlds__goal_expr_to_goal__GoalExpr_671 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_671, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_671, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_560));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_671, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_674));
                }
                hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_670, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_672);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_671));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_672));
                }
              }
              break;
            case (MR_Integer) 15:
              {
                MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_817_817;
                MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCompileTime_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeRunTime_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeIO0_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__Mutables0_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal0_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__MutableHLDSs_101;
                MR_Word hlds__make_hlds__goal_expr_to_goal__MutableStateVars_102;
                MR_Word hlds__make_hlds__goal_expr_to_goal__MutableGetGoals_103;
                MR_Word hlds__make_hlds__goal_expr_to_goal__MutableSetGoals_104;
                MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_110;
                MR_Word hlds__make_hlds__goal_expr_to_goal__GetGoals_111;
                MR_Word hlds__make_hlds__goal_expr_to_goal__SetGoals_112;
                MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal1_113;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Var_470;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Var_471;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Var_472;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Var_473;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_475_475;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_479_479;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Context_695 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_696;
                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_697;
                MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_698;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_699;
                MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_700;
                MR_Word hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_701;
                MR_Word hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_702;

                {
                  hlds__make_hlds__goal_expr_to_goal__Var_470 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_470, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[0]));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_470, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_1));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_470, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_470, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_695));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_470, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_209));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_470, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Renaming_19));
                }
                hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_817_817 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0;
                mercury__list__map4_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0, (MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0], hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_817_817, hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_817_817, hlds__make_hlds__goal_expr_to_goal__Var_470, hlds__make_hlds__goal_expr_to_goal__Mutables0_99, &hlds__make_hlds__goal_expr_to_goal__MutableHLDSs_101, &hlds__make_hlds__goal_expr_to_goal__MutableStateVars_102, &hlds__make_hlds__goal_expr_to_goal__MutableGetGoals_103, &hlds__make_hlds__goal_expr_to_goal__MutableSetGoals_104);
                if ((hlds__make_hlds__goal_expr_to_goal__MaybeIO0_98 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_110 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  hlds__make_hlds__goal_expr_to_goal__StateVars_700 = hlds__make_hlds__goal_expr_to_goal__MutableStateVars_102;
                  hlds__make_hlds__goal_expr_to_goal__GetGoals_111 = hlds__make_hlds__goal_expr_to_goal__MutableGetGoals_103;
                  hlds__make_hlds__goal_expr_to_goal__SetGoals_112 = hlds__make_hlds__goal_expr_to_goal__MutableSetGoals_104;
                }
                else
                {
                  MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar0_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeIO0_98, (MR_Integer) 0)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar_106;
                  MR_String hlds__make_hlds__goal_expr_to_goal__IOStateVarName_107;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__IOGetGoal_108;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__IOSetGoal_109;

                  hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_8_p_0(hlds__make_hlds__goal_expr_to_goal__Context_695, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_209, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__IOStateVar0_105, &hlds__make_hlds__goal_expr_to_goal__IOStateVar_106, &hlds__make_hlds__goal_expr_to_goal__IOStateVarName_107, &hlds__make_hlds__goal_expr_to_goal__IOGetGoal_108, &hlds__make_hlds__goal_expr_to_goal__IOSetGoal_109);
                  {
                    hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_110, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVarName_107));
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__StateVars_700 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__StateVars_700, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVar_106));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__StateVars_700, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MutableStateVars_102));
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__GetGoals_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__GetGoals_111, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOGetGoal_108));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__GetGoals_111, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MutableGetGoals_103));
                  }
                  {
                    hlds__make_hlds__goal_expr_to_goal__SetGoals_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SetGoals_112, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOSetGoal_109));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SetGoals_112, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MutableSetGoals_104));
                  }
                }
                {
                  hlds__make_hlds__goal_expr_to_goal__Var_473 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_473, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal0_100));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_473, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                hlds__make_hlds__goal_expr_to_goal__Var_472 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_817_817, hlds__make_hlds__goal_expr_to_goal__Var_473, hlds__make_hlds__goal_expr_to_goal__SetGoals_112);
                hlds__make_hlds__goal_expr_to_goal__Var_471 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_817_817, hlds__make_hlds__goal_expr_to_goal__GetGoals_111, hlds__make_hlds__goal_expr_to_goal__Var_472);
                hlds__make_hlds__goal_expr_to_goal__SubGoal1_113 = parse_tree__prog_util__goal_list_to_conj_2_f_0(hlds__make_hlds__goal_expr_to_goal__Context_695, hlds__make_hlds__goal_expr_to_goal__Var_471);
                hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(hlds__make_hlds__goal_expr_to_goal__Context_695, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_209, hlds__make_hlds__goal_expr_to_goal__StateVars_700, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205, &hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_701, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_215, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_475_475);
                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal1_113, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_698, hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_701, &hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_702, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_213, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_479_479, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_475_475, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216);
                hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(hlds__make_hlds__goal_expr_to_goal__StateVars_700, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205, hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_702, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_206);
                hlds__make_hlds__qual_info__qual_info_set_found_trace_goal_3_p_0((MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_479_479, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_214);
                {
                  hlds__make_hlds__goal_expr_to_goal__Reason_699 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_699, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_699, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MaybeCompileTime_96));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_699, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MaybeRunTime_97));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_699, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_110));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_699, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MutableHLDSs_101));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_699, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  hlds__make_hlds__goal_expr_to_goal__GoalExpr_696 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_696, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_696, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_699));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_696, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_698));
                }
                hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_695, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_697);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_696));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_697));
                }
              }
              break;
            case (MR_Integer) 16:
              {
                MR_Word hlds__make_hlds__goal_expr_to_goal__Outer0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__Inner0_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__MainGoal_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__OrElseGoals_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars_57;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Outer_66;
                MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoals_81;
                MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal_82;
                MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSOrElseGoals_83;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Inner_88;
                MR_Word hlds__make_hlds__goal_expr_to_goal__ShortHand_92;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Context_692 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_693;
                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_694;

                if ((hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars0_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                else
                {
                  MR_Word hlds__make_hlds__goal_expr_to_goal__OutputVars0_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars0_54, (MR_Integer) 0)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__OutputVars_59;

                  parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__OutputVars0_58, &hlds__make_hlds__goal_expr_to_goal__OutputVars_59);
                  {
                    hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars_57, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OutputVars_59));
                  }
                }
                if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Outer0_52)) == (MR_mktag((MR_Integer) 0))))
                {
                  MR_Word hlds__make_hlds__goal_expr_to_goal__OuterStateVar0_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Outer0_52, (MR_Integer) 0)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__OuterStateVar_61;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__OuterDI_62;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__OuterUO_63;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__OuterScopeInfo2_91;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_489_489;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_490_490;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_491_491;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_517_517;

                  parse_tree__prog_rename__rename_var_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__OuterStateVar0_60, &hlds__make_hlds__goal_expr_to_goal__OuterStateVar_61);
                  hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_p_0(hlds__make_hlds__goal_expr_to_goal__Context_692, hlds__make_hlds__goal_expr_to_goal__OuterStateVar_61, &hlds__make_hlds__goal_expr_to_goal__OuterDI_62, &hlds__make_hlds__goal_expr_to_goal__OuterUO_63, &hlds__make_hlds__goal_expr_to_goal__OuterScopeInfo2_91, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_489_489, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_490_490, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_215, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_491_491);
                  {
                    hlds__make_hlds__goal_expr_to_goal__Outer_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Outer_66, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OuterDI_62));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Outer_66, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OuterUO_63));
                  }
                  if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Inner0_53)) == (MR_mktag((MR_Integer) 0))))
                  {
                    MR_Word hlds__make_hlds__goal_expr_to_goal__InnerStateVar0_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner0_53, (MR_Integer) 0)));
                    MR_Word hlds__make_hlds__goal_expr_to_goal__InnerStateVar_70;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_75;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_76;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_77;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__MainDisjState_78;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_79;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__AllDisjStates_80;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_85;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI_86;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO_87;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_494_494;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_495_495;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_496_496;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_497_497;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_498_498;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_499_499;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_500_500;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_501_501;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_502_502;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_505_505;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_506_506;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_507_507;

                    parse_tree__prog_rename__rename_var_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__InnerStateVar0_69, &hlds__make_hlds__goal_expr_to_goal__InnerStateVar_70);
                    hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_692, hlds__make_hlds__goal_expr_to_goal__InnerStateVar_70, &hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_85, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_489_489, &hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_75, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_490_490, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_494_494, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_491_491, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_495_495);
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__MainGoal_55, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_76, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_75, &hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_77, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_496_496, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_494_494, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_497_497, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_498_498, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_213, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_499_499, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_495_495, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_500_500);
                    {
                      hlds__make_hlds__goal_expr_to_goal__MainDisjState_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_78, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_76));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_78, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_77));
                    }
                    hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__OrElseGoals_56, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_79, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_75, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_496_496, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_501_501, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_497_497, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_502_502, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_498_498, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_499_499, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_214, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_500_500, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_505_505);
                    {
                      hlds__make_hlds__goal_expr_to_goal__AllDisjStates_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_80, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MainDisjState_78));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_80, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_79));
                    }
                    hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_692, hlds__make_hlds__goal_expr_to_goal__AllDisjStates_80, &hlds__make_hlds__goal_expr_to_goal__HLDSGoals_81, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_502_502, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_506_506, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_75, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_507_507, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_501_501, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_208);
                    hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_p_0(hlds__make_hlds__goal_expr_to_goal__Context_692, hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_85, &hlds__make_hlds__goal_expr_to_goal__InnerDI_86, &hlds__make_hlds__goal_expr_to_goal__InnerUO_87, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_507_507, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_517_517, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_506_506, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_505_505, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216);
                    {
                      hlds__make_hlds__goal_expr_to_goal__Inner_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_88, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerDI_86));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_88, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerUO_87));
                    }
                  }
                  else
                  {
                    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_808_808;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI0_89;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO0_90;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI_690;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO_691;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_921;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_922;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__MainDisjState_923;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_924;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__AllDisjStates_925;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_496_928;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_497_929;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_498_930;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_499_931;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_500_932;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_501_933;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_502_934;

                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__MainGoal_55, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_921, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_489_489, &hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_922, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_496_928, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_490_490, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_497_929, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_498_930, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_213, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_499_931, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_491_491, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_500_932);
                    {
                      hlds__make_hlds__goal_expr_to_goal__MainDisjState_923 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_923, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_921));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_923, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_922));
                    }
                    hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__OrElseGoals_56, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_924, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_489_489, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_496_928, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_501_933, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_497_929, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_502_934, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_498_930, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_499_931, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_214, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_500_932, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216);
                    {
                      hlds__make_hlds__goal_expr_to_goal__AllDisjStates_925 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_925, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MainDisjState_923));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_925, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_924));
                    }
                    hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_692, hlds__make_hlds__goal_expr_to_goal__AllDisjStates_925, &hlds__make_hlds__goal_expr_to_goal__HLDSGoals_81, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_502_934, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_489_489, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_517_517, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_501_933, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_208);
                    hlds__make_hlds__goal_expr_to_goal__InnerDI0_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Inner0_53, (MR_Integer) 0)));
                    hlds__make_hlds__goal_expr_to_goal__InnerUO0_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Inner0_53, (MR_Integer) 1)));
                    hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_808_808 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                    parse_tree__prog_rename__rename_var_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_808_808, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__InnerDI0_89, &hlds__make_hlds__goal_expr_to_goal__InnerDI_690);
                    parse_tree__prog_rename__rename_var_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_808_808, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__InnerUO0_90, &hlds__make_hlds__goal_expr_to_goal__InnerUO_691);
                    {
                      hlds__make_hlds__goal_expr_to_goal__Inner_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_88, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerDI_690));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_88, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerUO_691));
                    }
                  }
                  hlds__make_hlds__state_var__svar_finish_outer_atomic_scope_3_p_0(hlds__make_hlds__goal_expr_to_goal__OuterScopeInfo2_91, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_517_517, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_206);
                }
                else
                {
                  MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_806_806 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__OuterDI0_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Outer0_52, (MR_Integer) 0)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__OuterUO0_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Outer0_52, (MR_Integer) 1)));
                  MR_Word hlds__make_hlds__goal_expr_to_goal__OuterDI_688;
                  MR_Word hlds__make_hlds__goal_expr_to_goal__OuterUO_689;

                  parse_tree__prog_rename__rename_var_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_806_806, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__OuterDI0_67, &hlds__make_hlds__goal_expr_to_goal__OuterDI_688);
                  parse_tree__prog_rename__rename_var_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_806_806, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__OuterUO0_68, &hlds__make_hlds__goal_expr_to_goal__OuterUO_689);
                  {
                    hlds__make_hlds__goal_expr_to_goal__Outer_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Outer_66, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OuterDI_688));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Outer_66, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OuterUO_689));
                  }
                  if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Inner0_53)) == (MR_mktag((MR_Integer) 0))))
                  {
                    MR_Word hlds__make_hlds__goal_expr_to_goal__InnerStateVar0_834 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner0_53, (MR_Integer) 0)));
                    MR_Word hlds__make_hlds__goal_expr_to_goal__InnerStateVar_835;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_847;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI_848;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO_849;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_881;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_882;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_883;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__MainDisjState_884;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_885;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__AllDisjStates_886;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_494_896;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_495_897;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_496_898;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_497_899;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_498_900;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_499_901;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_500_902;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_501_903;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_502_904;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_505_905;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_506_906;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_507_907;

                    parse_tree__prog_rename__rename_var_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__InnerStateVar0_834, &hlds__make_hlds__goal_expr_to_goal__InnerStateVar_835);
                    hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_692, hlds__make_hlds__goal_expr_to_goal__InnerStateVar_835, &hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_847, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205, &hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_881, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_494_896, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_215, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_495_897);
                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__MainGoal_55, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_882, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_881, &hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_883, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_496_898, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_494_896, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_497_899, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_498_900, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_213, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_499_901, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_495_897, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_500_902);
                    {
                      hlds__make_hlds__goal_expr_to_goal__MainDisjState_884 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_884, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_882));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_884, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_883));
                    }
                    hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__OrElseGoals_56, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_885, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_881, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_496_898, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_501_903, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_497_899, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_502_904, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_498_900, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_499_901, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_214, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_500_902, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_505_905);
                    {
                      hlds__make_hlds__goal_expr_to_goal__AllDisjStates_886 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_886, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MainDisjState_884));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_886, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_885));
                    }
                    hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_692, hlds__make_hlds__goal_expr_to_goal__AllDisjStates_886, &hlds__make_hlds__goal_expr_to_goal__HLDSGoals_81, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_502_904, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_506_906, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_881, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_507_907, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_501_903, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_208);
                    hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_p_0(hlds__make_hlds__goal_expr_to_goal__Context_692, hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_847, &hlds__make_hlds__goal_expr_to_goal__InnerDI_848, &hlds__make_hlds__goal_expr_to_goal__InnerUO_849, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_507_907, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_506_906, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_505_905, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216);
                    {
                      hlds__make_hlds__goal_expr_to_goal__Inner_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_88, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerDI_848));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_88, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerUO_849));
                    }
                  }
                  else
                  {
                    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_808_862;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI0_856;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO0_857;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI_860;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO_861;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_941;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_942;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__MainDisjState_943;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_944;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__AllDisjStates_945;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_496_948;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_497_949;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_498_950;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_499_951;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_500_952;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_501_953;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_502_954;

                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__MainGoal_55, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_941, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205, &hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_942, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_496_948, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_497_949, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_498_950, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_213, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_499_951, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_215, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_500_952);
                    {
                      hlds__make_hlds__goal_expr_to_goal__MainDisjState_943 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_943, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_941));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_943, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_942));
                    }
                    hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__OrElseGoals_56, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_944, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_496_948, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_501_953, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_497_949, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_502_954, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_498_950, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_499_951, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_214, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_500_952, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216);
                    {
                      hlds__make_hlds__goal_expr_to_goal__AllDisjStates_945 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_945, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MainDisjState_943));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_945, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_944));
                    }
                    hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_692, hlds__make_hlds__goal_expr_to_goal__AllDisjStates_945, &hlds__make_hlds__goal_expr_to_goal__HLDSGoals_81, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_502_954, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_501_953, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_208);
                    hlds__make_hlds__goal_expr_to_goal__InnerDI0_856 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Inner0_53, (MR_Integer) 0)));
                    hlds__make_hlds__goal_expr_to_goal__InnerUO0_857 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Inner0_53, (MR_Integer) 1)));
                    hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_808_862 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                    parse_tree__prog_rename__rename_var_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_808_862, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__InnerDI0_856, &hlds__make_hlds__goal_expr_to_goal__InnerDI_860);
                    parse_tree__prog_rename__rename_var_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_808_862, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__InnerUO0_857, &hlds__make_hlds__goal_expr_to_goal__InnerUO_861);
                    {
                      hlds__make_hlds__goal_expr_to_goal__Inner_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_88, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerDI_860));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_88, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerUO_861));
                    }
                  }
                }
                if ((hlds__make_hlds__goal_expr_to_goal__HLDSGoals_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.goal_expr_to_goal", (MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_parse_tree_goal_to_hlds\'/16", (MR_String) "atomic HLDSGoals = []");
                    return;
                  }
                }
                else
                {
                  hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HLDSGoals_81, (MR_Integer) 0)));
                  hlds__make_hlds__goal_expr_to_goal__HLDSOrElseGoals_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HLDSGoals_81, (MR_Integer) 1)));
                }
                {
                  hlds__make_hlds__goal_expr_to_goal__ShortHand_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_92, 0) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_92, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Outer_66));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_92, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Inner_88));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_92, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars_57));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_92, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal_82));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_92, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSOrElseGoals_83));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_92, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  hlds__make_hlds__goal_expr_to_goal__GoalExpr_693 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_693, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_693, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ShortHand_92));
                }
                hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_692, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_694);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_693));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_694));
                }
              }
              break;
            case (MR_Integer) 17:
              {
                MR_Word hlds__make_hlds__goal_expr_to_goal__Then0_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeElse0_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__Catches0_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 7)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__Context_709 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeIO0_710 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal0_711 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));

                if ((hlds__make_hlds__goal_expr_to_goal__MaybeIO0_710 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal0_711, hlds__make_hlds__goal_expr_to_goal__Then0_116, hlds__make_hlds__goal_expr_to_goal__MaybeElse0_117, hlds__make_hlds__goal_expr_to_goal__Catches0_118, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_119, hlds__make_hlds__goal_expr_to_goal__Context_709, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_214, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_215, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216);
                else
                {
                  MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar0_705 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeIO0_710, (MR_Integer) 0)));

                  if ((hlds__make_hlds__goal_expr_to_goal__MaybeElse0_117 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar_703;

                    parse_tree__prog_rename__rename_var_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__IOStateVar0_705, &hlds__make_hlds__goal_expr_to_goal__IOStateVar_703);
                    hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__IOStateVar0_705, hlds__make_hlds__goal_expr_to_goal__IOStateVar_703, hlds__make_hlds__goal_expr_to_goal__SubGoal0_711, hlds__make_hlds__goal_expr_to_goal__Then0_116, hlds__make_hlds__goal_expr_to_goal__Catches0_118, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_119, hlds__make_hlds__goal_expr_to_goal__Context_709, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_214, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_215, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216);
                  }
                  else
                  {
                    MR_Word hlds__make_hlds__goal_expr_to_goal__Msg_122;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__Spec_123;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_460;

                    {
                      hlds__make_hlds__goal_expr_to_goal__Msg_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Msg_122, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_709));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Msg_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[35])));
                    }
                    {
                      hlds__make_hlds__goal_expr_to_goal__Var_460 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_460, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Msg_122));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_460, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      hlds__make_hlds__goal_expr_to_goal__Spec_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_123, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_123, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_460));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Spec_123));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_215));
                    }
                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = hlds__make_goal__true_goal_with_context_1_f_0(hlds__make_hlds__goal_expr_to_goal__Context_709);
                    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_206 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205;
                    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_208 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_207;
                    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_210 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_209;
                    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_212 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_211;
                    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_214 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_213;
                  }
                }
              }
              break;
            case (MR_Integer) 18:
              {
                MR_Word hlds__make_hlds__goal_expr_to_goal__P_150 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__Q_151 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__Var_350;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Var_351;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Context_739 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__TransformedGoal_740;

                {
                  hlds__make_hlds__goal_expr_to_goal__Var_351 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Var_351, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Var_351, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_739));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Var_351, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Q_151));
                }
                {
                  hlds__make_hlds__goal_expr_to_goal__Var_350 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Var_350, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_739));
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Var_350, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__P_150));
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Var_350, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_351));
                }
                {
                  hlds__make_hlds__goal_expr_to_goal__TransformedGoal_740 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_740, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_740, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_739));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_740, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_350));
                }
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__make_hlds__goal_expr_to_goal__next_value_of_Goal_18 = hlds__make_hlds__goal_expr_to_goal__TransformedGoal_740;

                  hlds__make_hlds__goal_expr_to_goal__Goal_18 = hlds__make_hlds__goal_expr_to_goal__next_value_of_Goal_18;
                }
                continue;
              }
              break;
            case (MR_Integer) 19:
              {
                MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoalA_152;
                MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoalB_153;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_337_337;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_338_338;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_339_339;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_340_340;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_341_341;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_342_342;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Var_349;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Context_741 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_742;
                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_743;
                MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalA_744 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalB_745 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__Var_154;

                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalA_744, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoalA_152, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_337_337, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_338_338, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_339_339, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_211, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_340_340, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_213, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_341_341, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_215, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_342_342);
                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalB_745, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoalB_153, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_337_337, &hlds__make_hlds__goal_expr_to_goal__Var_154, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_338_338, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_339_339, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_340_340, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_341_341, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_214, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_342_342, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216);
                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_206 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205;
                {
                  hlds__make_hlds__goal_expr_to_goal__Var_349 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_349, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoalA_152));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_349, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoalB_153));
                }
                {
                  hlds__make_hlds__goal_expr_to_goal__GoalExpr_742 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_742, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_742, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_349));
                }
                hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_741, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_743);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_742));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_743));
                }
              }
              break;
            case (MR_Integer) 20:
              {
                MR_String hlds__make_hlds__goal_expr_to_goal__EventName_155 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms0_156 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms1_157;
                MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms_158;
                MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVars_159;
                MR_Integer hlds__make_hlds__goal_expr_to_goal__Arity_160;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Modes_161;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Details_162;
                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr0_163;
                MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_164;
                MR_Word hlds__make_hlds__goal_expr_to_goal__CallId_165;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_322_322;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_323_323;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_324_324;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Var_325;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Var_328;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Var_329;
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_330_330;
                MR_Word hlds__make_hlds__goal_expr_to_goal__Context_747 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_748;

                hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(hlds__make_hlds__goal_expr_to_goal__ArgTerms0_156, &hlds__make_hlds__goal_expr_to_goal__ArgTerms1_157);
                parse_tree__prog_rename__rename_vars_in_term_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__ArgTerms1_157, &hlds__make_hlds__goal_expr_to_goal__ArgTerms_158);
                hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(hlds__make_hlds__goal_expr_to_goal__ArgTerms_158, &hlds__make_hlds__goal_expr_to_goal__HeadVars_159, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_209, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_322_322, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_323_323, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_215, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_324_324);
                mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0], hlds__make_hlds__goal_expr_to_goal__HeadVars_159, &hlds__make_hlds__goal_expr_to_goal__Arity_160);
                hlds__make_hlds__goal_expr_to_goal__Var_325 = parse_tree__prog_mode__in_mode_0_f_0();
                mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__make_hlds__goal_expr_to_goal__Arity_160, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_325)), &hlds__make_hlds__goal_expr_to_goal__Modes_161);
                {
                  hlds__make_hlds__goal_expr_to_goal__Details_162 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Details_162, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__EventName_155));
                }
                {
                  hlds__make_hlds__goal_expr_to_goal__GoalExpr0_163 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_163, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_163, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Details_162));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_163, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HeadVars_159));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_163, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Modes_161));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_163, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_163, 5) = ((MR_Box) ((MR_Integer) 0));
                }
                hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_747, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_748);
                {
                  hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_164 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_164, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr0_163));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_164, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_748));
                }
                {
                  hlds__make_hlds__goal_expr_to_goal__Var_328 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Var_328, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__EventName_155));
                }
                {
                  hlds__make_hlds__goal_expr_to_goal__CallId_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallId_165, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_328));
                }
                {
                  hlds__make_hlds__goal_expr_to_goal__Var_329 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_329, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CallId_165));
                }
                hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(hlds__make_hlds__goal_expr_to_goal__HeadVars_159, hlds__make_hlds__goal_expr_to_goal__ArgTerms_158, hlds__make_hlds__goal_expr_to_goal__Context_747, hlds__make_hlds__goal_expr_to_goal__Var_329, hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_164, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_323_323, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_330_330, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_322_322, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_213, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_214, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_324_324, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216);
                hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_330_330, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_206);
              }
              break;
          }
          break;
      }
    }
    break;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__exception_functor_3_f_0(
  MR_String hlds__make_hlds__goal_expr_to_goal__Atom_5,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Arg_6,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_7)
{
  {
    MR_Word hlds__make_hlds__goal_expr_to_goal__Term_8;
    MR_Word hlds__make_hlds__goal_expr_to_goal__SymName_9;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_10;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_11;

    hlds__make_hlds__goal_expr_to_goal__Var_10 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    {
      hlds__make_hlds__goal_expr_to_goal__SymName_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_9, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_10));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_9, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Atom_5));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_11, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Arg_6));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__SymName_9, hlds__make_hlds__goal_expr_to_goal__Var_11, hlds__make_hlds__goal_expr_to_goal__Context_7, &hlds__make_hlds__goal_expr_to_goal__Term_8);
    return hlds__make_hlds__goal_expr_to_goal__Term_8;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_f_0(void)
{
  {
    MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_2;

    hlds__make_hlds__goal_expr_to_goal__Var_2 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    {
      hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_2));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1, 1) = ((MR_Box) ((MR_String) "magic_exception_result"));
    }
    return hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1;
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
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13;
    MR_Word hlds__make_hlds__goal_expr_to_goal__CatchChain_14;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_15;
    MR_Word hlds__make_hlds__goal_expr_to_goal__SymName_22;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_23;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_24;

    hlds__make_hlds__goal_expr_to_goal__Var_23 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    {
      hlds__make_hlds__goal_expr_to_goal__SymName_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_22, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_23));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_22, 1) = ((MR_Box) ((MR_String) "exception"));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_24, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_8));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__SymName_22, hlds__make_hlds__goal_expr_to_goal__Var_24, hlds__make_hlds__goal_expr_to_goal__Context_11, &hlds__make_hlds__goal_expr_to_goal__Var_15);
    {
      hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_11));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_7));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_15));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_7, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_8, hlds__make_hlds__goal_expr_to_goal__Catches_9, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_10, &hlds__make_hlds__goal_expr_to_goal__CatchChain_14);
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
hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(
  MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_6,
  MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7,
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_8,
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9,
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_10)
{
  if ((hlds__make_hlds__goal_expr_to_goal__Catches_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    if ((hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word hlds__make_hlds__goal_expr_to_goal__Rethrow_20;
      MR_Word hlds__make_hlds__goal_expr_to_goal__Var_21;
      MR_Word hlds__make_hlds__goal_expr_to_goal__Var_23;
      MR_Word hlds__make_hlds__goal_expr_to_goal__Var_24;

      hlds__make_hlds__goal_expr_to_goal__Var_21 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
      {
        hlds__make_hlds__goal_expr_to_goal__Rethrow_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Rethrow_20, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_21));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Rethrow_20, 1) = ((MR_Box) ((MR_String) "rethrow"));
      }
      hlds__make_hlds__goal_expr_to_goal__Var_23 = mercury__term__get_term_context_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7);
      {
        hlds__make_hlds__goal_expr_to_goal__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_24, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_6));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        *hlds__make_hlds__goal_expr_to_goal__Goal_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_23));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Rethrow_20));
        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_24));
        MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) ((MR_Integer) 0));
      }
    }
    else
    {
      MR_Word hlds__make_hlds__goal_expr_to_goal__CatchAnyVar_16;
      MR_Word hlds__make_hlds__goal_expr_to_goal__CatchAnyGoal_17;
      MR_Word hlds__make_hlds__goal_expr_to_goal__Context_18;
      MR_Word hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19;
      MR_Word hlds__make_hlds__goal_expr_to_goal__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9, (MR_Integer) 0)));
      MR_Word hlds__make_hlds__goal_expr_to_goal__Var_28;
      MR_Word hlds__make_hlds__goal_expr_to_goal__Var_29;
      MR_Word hlds__make_hlds__goal_expr_to_goal__SymName_42;
      MR_Word hlds__make_hlds__goal_expr_to_goal__Var_43;
      MR_Word hlds__make_hlds__goal_expr_to_goal__Var_44;

      hlds__make_hlds__goal_expr_to_goal__CatchAnyVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_27, (MR_Integer) 0)));
      hlds__make_hlds__goal_expr_to_goal__CatchAnyGoal_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_27, (MR_Integer) 1)));
      hlds__make_hlds__goal_expr_to_goal__Context_18 = parse_tree__prog_item__goal_get_context_1_f_0(hlds__make_hlds__goal_expr_to_goal__CatchAnyGoal_17);
      {
        hlds__make_hlds__goal_expr_to_goal__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_28, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CatchAnyVar_16));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_28, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_18));
      }
      hlds__make_hlds__goal_expr_to_goal__Var_43 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
      {
        hlds__make_hlds__goal_expr_to_goal__SymName_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_42, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_43));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_42, 1) = ((MR_Box) ((MR_String) "exc_univ_value"));
      }
      {
        hlds__make_hlds__goal_expr_to_goal__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_44, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__SymName_42, hlds__make_hlds__goal_expr_to_goal__Var_44, hlds__make_hlds__goal_expr_to_goal__Context_18, &hlds__make_hlds__goal_expr_to_goal__Var_29);
      {
        hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_18));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_28));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_29));
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
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Catches_8, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_33;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_50;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_51;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_52;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_54;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_55;

    hlds__make_hlds__goal_expr_to_goal__FirstPattern_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_32, (MR_Integer) 0)));
    hlds__make_hlds__goal_expr_to_goal__FirstGoal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_32, (MR_Integer) 1)));
    hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_6, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7, hlds__make_hlds__goal_expr_to_goal__RestCatches_13, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9, &hlds__make_hlds__goal_expr_to_goal__ElseGoal_14);
    hlds__make_hlds__goal_expr_to_goal__Var_50 = mercury__term__get_term_context_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__FirstPattern_11);
    hlds__make_hlds__goal_expr_to_goal__Var_52 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    {
      hlds__make_hlds__goal_expr_to_goal__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_51, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_52));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_51, 1) = ((MR_Box) ((MR_String) "exc_univ_to_type"));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_55, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FirstPattern_11));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_54, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_54, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_55));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_50));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_51));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_54));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    hlds__make_hlds__goal_expr_to_goal__Var_33 = mercury__term__get_term_context_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__FirstPattern_11);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__goal_expr_to_goal__Goal_10 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_33));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15));
      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FirstGoal_12));
      MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ElseGoal_14));
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
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_59;
    MR_Word hlds__make_hlds__goal_expr_to_goal__LHSTerm_30;
    MR_Word hlds__make_hlds__goal_expr_to_goal__RHSTerm_31;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_58;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_60;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_61;
    MR_Word hlds__make_hlds__goal_expr_to_goal__TermInputTerm_32;
    MR_Word hlds__make_hlds__goal_expr_to_goal__TermOutputTerm_33;

    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_21, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_29);
    hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
    {
      hlds__make_hlds__goal_expr_to_goal__LHSTerm_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20, (MR_Integer) 0)));
      hlds__make_hlds__goal_expr_to_goal__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20, (MR_Integer) 1)));
      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Var_58)) == (MR_mktag((MR_Integer) 1)));
      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
      {
        hlds__make_hlds__goal_expr_to_goal__RHSTerm_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_58, (MR_Integer) 0)));
        hlds__make_hlds__goal_expr_to_goal__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_58, (MR_Integer) 1)));
        hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Var_59)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
        {
          hlds__make_hlds__goal_expr_to_goal__TermInputTerm_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_59, (MR_Integer) 0)));
          hlds__make_hlds__goal_expr_to_goal__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_59, (MR_Integer) 1)));
          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Var_60)) == (MR_mktag((MR_Integer) 1)));
          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
          {
            hlds__make_hlds__goal_expr_to_goal__TermOutputTerm_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_60, (MR_Integer) 0)));
            hlds__make_hlds__goal_expr_to_goal__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_60, (MR_Integer) 1)));
            hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__Var_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_62;
                    MR_String hlds__make_hlds__goal_expr_to_goal__Var_63;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_64;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_65;
                    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_37;

                    hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__LHSTerm_30)) == (MR_mktag((MR_Integer) 0)));
                    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                    {
                      hlds__make_hlds__goal_expr_to_goal__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm_30, (MR_Integer) 0)));
                      hlds__make_hlds__goal_expr_to_goal__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm_30, (MR_Integer) 1)));
                      hlds__make_hlds__goal_expr_to_goal__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm_30, (MR_Integer) 2)));
                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Var_62)) == (MR_mktag((MR_Integer) 0)));
                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                      {
                        hlds__make_hlds__goal_expr_to_goal__Var_63 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_62, (MR_Integer) 0)));
                        hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__Var_63, (MR_String) "^") == 0);
                        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                        {
                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Var_64)) == (MR_mktag((MR_Integer) 1)));
                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
                          {
                            hlds__make_hlds__goal_expr_to_goal__FieldNameTerm_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_64, (MR_Integer) 0)));
                            hlds__make_hlds__goal_expr_to_goal__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_64, (MR_Integer) 1)));
                            hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__Var_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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

      hlds__make_hlds__goal_expr_to_goal__ContextPieces_38 = hlds__make_hlds__goal_expr_to_goal__dcg_field_error_context_pieces_1_f_0(hlds__make_hlds__goal_expr_to_goal__AccessType_19);
      hlds__make_hlds__field_access__parse_field_list_4_p_0(hlds__make_hlds__goal_expr_to_goal__FieldNameTerm_34, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_50, hlds__make_hlds__goal_expr_to_goal__ContextPieces_38, &hlds__make_hlds__goal_expr_to_goal__MaybeFieldNames_39);
      if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__MaybeFieldNames_39)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word hlds__make_hlds__goal_expr_to_goal__FieldNamesSpecs_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MaybeFieldNames_39, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66_66;

        hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66_66 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__goal_expr_to_goal__FieldNamesSpecs_42, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_56);
        hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_p_0((MR_String) "^", hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20, hlds__make_hlds__goal_expr_to_goal__GoalInfo_29, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_46, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66_66, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_57);
        hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_55);
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
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms_41, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_59));
        }
        hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_p_0(hlds__make_hlds__goal_expr_to_goal__AccessType_19, hlds__make_hlds__goal_expr_to_goal__FieldNames_40, hlds__make_hlds__goal_expr_to_goal__ArgTerms_41, hlds__make_hlds__goal_expr_to_goal__Context_21, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_46, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_76_76, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_48, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_49, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_52, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_55, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_57);
        hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_76_76, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_47);
      }
    }
    else
    {
      MR_Word hlds__make_hlds__goal_expr_to_goal__Msg_44;
      MR_Word hlds__make_hlds__goal_expr_to_goal__Spec_45;
      MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_86_86;
      MR_Word hlds__make_hlds__goal_expr_to_goal__Var_111;

      hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_p_0((MR_String) "^", hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20, hlds__make_hlds__goal_expr_to_goal__GoalInfo_29, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_46, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_56, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_86_86);
      hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_55);
      {
        hlds__make_hlds__goal_expr_to_goal__Msg_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Msg_44, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_21));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Msg_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[33])));
      }
      {
        hlds__make_hlds__goal_expr_to_goal__Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_111, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Msg_44));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        hlds__make_hlds__goal_expr_to_goal__Spec_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_45, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_111));
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
    MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVars_18;
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_20;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_30;
    MR_Integer hlds__make_hlds__goal_expr_to_goal__Var_31;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_33;

    hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(hlds__make_hlds__goal_expr_to_goal__Args0_12, &hlds__make_hlds__goal_expr_to_goal__HeadVars_18, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_21, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_23, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_24, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_25, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_26);
    hlds__make_hlds__goal_expr_to_goal__Var_30 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    hlds__make_hlds__goal_expr_to_goal__Var_31 = hlds__hlds_pred__invalid_proc_id_0_f_0();
    {
      hlds__make_hlds__goal_expr_to_goal__Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_33, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__UpdateStr_11));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_30));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_31));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HeadVars_18));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 3) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_33));
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
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_70;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_71;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_72;

    hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(hlds__make_hlds__goal_expr_to_goal__ArgTerms_20, &hlds__make_hlds__goal_expr_to_goal__ArgVars_29, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_59, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_67_67, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_55, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_68_68, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_65, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_69_69);
    hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__ArgVars_29)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
    {
      hlds__make_hlds__goal_expr_to_goal__FieldValueVarPrime_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgVars_29, (MR_Integer) 0)));
      hlds__make_hlds__goal_expr_to_goal__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgVars_29, (MR_Integer) 1)));
      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Var_70)) == (MR_mktag((MR_Integer) 1)));
      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
      {
        hlds__make_hlds__goal_expr_to_goal__TermInputVarPrime_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_70, (MR_Integer) 0)));
        hlds__make_hlds__goal_expr_to_goal__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_70, (MR_Integer) 1)));
        hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Var_71)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
        {
          hlds__make_hlds__goal_expr_to_goal__TermOutputVarPrime_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_71, (MR_Integer) 0)));
          hlds__make_hlds__goal_expr_to_goal__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_71, (MR_Integer) 1)));
          hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__Var_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
          MR_Word hlds__make_hlds__goal_expr_to_goal__Var_78;
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_79_79;
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_80_80;
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81;
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_82_82;
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_83_83;
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_84_84;
          MR_Word hlds__make_hlds__goal_expr_to_goal__Var_91;
          MR_Word hlds__make_hlds__goal_expr_to_goal__Var_94;
          MR_Word hlds__make_hlds__goal_expr_to_goal__Var_95;
          MR_Word hlds__make_hlds__goal_expr_to_goal__Var_96;
          MR_Word hlds__make_hlds__goal_expr_to_goal__Var_97;
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

          hlds__make_hlds__field_access__expand_dcg_field_extraction_goal_22_p_0(hlds__make_hlds__goal_expr_to_goal__Context_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__goal_expr_to_goal__FieldNames_19, hlds__make_hlds__goal_expr_to_goal__FieldValueVar_33, hlds__make_hlds__goal_expr_to_goal__TermInputVar_34, hlds__make_hlds__goal_expr_to_goal__TermOutputVar_35, &hlds__make_hlds__goal_expr_to_goal__Functor_137, &hlds__make_hlds__goal_expr_to_goal__Var_78, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_139, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_68_68, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_79_79, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_57, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_80_80, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_67_67, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_82_82, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_63, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_83_83, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_69_69, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_84_84);
          hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_78, (MR_Integer) 0)));
          hlds__make_hlds__goal_expr_to_goal___InnerSubContext_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_78, (MR_Integer) 1)));
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
            hlds__make_hlds__goal_expr_to_goal__Var_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_91, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SimpleCallId_149));
          }
          {
            hlds__make_hlds__goal_expr_to_goal__FieldArgContext_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__FieldArgContext_141, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_91));
          }
          {
            hlds__make_hlds__goal_expr_to_goal__Var_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_94, 0) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_94, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FieldArgContext_141));
          }
          {
            hlds__make_hlds__goal_expr_to_goal__Var_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_96, 0) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_96, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_150));
          }
          {
            hlds__make_hlds__goal_expr_to_goal__Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_97, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_96));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__goal_expr_to_goal__Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_95, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_96));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_95, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_97));
          }
          {
            hlds__make_hlds__goal_expr_to_goal__ArgContexts_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgContexts_151, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_94));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgContexts_151, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_95));
          }
          hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_p_0(hlds__make_hlds__goal_expr_to_goal__ArgVars_29, hlds__make_hlds__goal_expr_to_goal__ArgTerms_20, hlds__make_hlds__goal_expr_to_goal__ArgContexts_151, hlds__make_hlds__goal_expr_to_goal__Context_21, hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_139, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_79_79, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_80_80, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_82_82, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_62, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_83_83, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_64, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_84_84, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66);
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
          MR_Word hlds__make_hlds__goal_expr_to_goal__Var_108;
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_109_109;
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_110_110;
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_111_111;
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_112_112;
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_113_113;
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_114_114;
          MR_Word hlds__make_hlds__goal_expr_to_goal__Var_122;
          MR_Word hlds__make_hlds__goal_expr_to_goal__Var_123;
          MR_Word hlds__make_hlds__goal_expr_to_goal__Var_124;
          MR_Word hlds__make_hlds__goal_expr_to_goal__Var_125;
          MR_Word hlds__make_hlds__goal_expr_to_goal__Var_126;
          MR_Word hlds__make_hlds__goal_expr_to_goal__Var_127;
          MR_Word hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_44;
          MR_Integer hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_45;
          MR_Word hlds__make_hlds__goal_expr_to_goal___TypeCtor_46;

          hlds__make_hlds__field_access__expand_set_field_function_call_22_p_0(hlds__make_hlds__goal_expr_to_goal__Context_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__goal_expr_to_goal__FieldNames_19, hlds__make_hlds__goal_expr_to_goal__FieldValueVar_33, hlds__make_hlds__goal_expr_to_goal__TermInputVar_34, hlds__make_hlds__goal_expr_to_goal__TermOutputVar_35, &hlds__make_hlds__goal_expr_to_goal__Functor_36, &hlds__make_hlds__goal_expr_to_goal__Var_108, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_68_68, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_109_109, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_57, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_110_110, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_67_67, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_111_111, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_112_112, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_63, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_113_113, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_69_69, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_114_114);
          hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_108, (MR_Integer) 0)));
          hlds__make_hlds__goal_expr_to_goal__InnermostSubContext_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_108, (MR_Integer) 1)));
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
            hlds__make_hlds__goal_expr_to_goal__Var_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_122, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SimpleCallId_50));
          }
          {
            hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_51, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_122));
          }
          {
            hlds__make_hlds__goal_expr_to_goal__Var_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_123, 0) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_123, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FieldArgContext_41));
          }
          {
            hlds__make_hlds__goal_expr_to_goal__Var_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_125, 0) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_125, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_43));
          }
          {
            hlds__make_hlds__goal_expr_to_goal__Var_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_127, 0) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Var_127, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_51));
          }
          {
            hlds__make_hlds__goal_expr_to_goal__Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_126, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_127));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__goal_expr_to_goal__Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_124, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_125));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_124, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_126));
          }
          {
            hlds__make_hlds__goal_expr_to_goal__ArgContexts_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgContexts_52, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_123));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgContexts_52, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_124));
          }
          hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_p_0(hlds__make_hlds__goal_expr_to_goal__ArgVars_29, hlds__make_hlds__goal_expr_to_goal__ArgTerms_20, hlds__make_hlds__goal_expr_to_goal__ArgContexts_52, hlds__make_hlds__goal_expr_to_goal__Context_21, hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_39, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_109_109, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_110_110, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_111_111, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_112_112, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_62, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_113_113, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_64, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_114_114, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66);
        }
        break;
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
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_41_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word hlds__make_hlds__goal_expr_to_goal__IO_17;
    MR_Word hlds__make_hlds__goal_expr_to_goal__GetPredName_18;
    MR_Word hlds__make_hlds__goal_expr_to_goal__SetPredName_19;
    MR_Word hlds__make_hlds__goal_expr_to_goal__SetVar_20;
    MR_Word hlds__make_hlds__goal_expr_to_goal__UseVar_21;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_29;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_30;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_37;
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_39;

    parse_tree__prog_rename__rename_var_4_p_1(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_41_41, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_11, hlds__make_hlds__goal_expr_to_goal__StateVar0_12, hlds__make_hlds__goal_expr_to_goal__StateVar_13);
    mercury__varset__lookup_name_3_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_41_41, hlds__make_hlds__goal_expr_to_goal__VarSet_10, *hlds__make_hlds__goal_expr_to_goal__StateVar_13, hlds__make_hlds__goal_expr_to_goal__StateVarName_14);
    hlds__make_hlds__goal_expr_to_goal__IO_17 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
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
      hlds__make_hlds__goal_expr_to_goal__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_30, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVar0_12));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_30, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_9));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_29, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_30));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__SetVar_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_20, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_20, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_29));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_20, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_9));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__UseVar_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_21, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[1]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_21, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_29));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_21, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_9));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_37, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SetVar_20));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__goal_expr_to_goal__GetGoal_15 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_9));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GetPredName_18));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_37));
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      hlds__make_hlds__goal_expr_to_goal__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_39, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__UseVar_21));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__goal_expr_to_goal__SetGoal_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_9));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SetPredName_19));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_39));
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
  if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__PODVar0_15)) == (MR_mktag((MR_Integer) 1))))
  {
    MR_Word hlds__make_hlds__goal_expr_to_goal__DotVar0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__PODVar0_15, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__goal_expr_to_goal__DotVar_22;

    parse_tree__prog_rename__rename_var_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__MustRename_13, hlds__make_hlds__goal_expr_to_goal__Renaming_14, hlds__make_hlds__goal_expr_to_goal__DotVar0_21, &hlds__make_hlds__goal_expr_to_goal__DotVar_22);
    hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_12, hlds__make_hlds__goal_expr_to_goal__DotVar_22, hlds__make_hlds__goal_expr_to_goal__Var_16, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_25, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_26, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_23, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_24, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_27, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_28);
  }
  else
  {
    MR_Word hlds__make_hlds__goal_expr_to_goal__Var0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__PODVar0_15, (MR_Integer) 0)));

    parse_tree__prog_rename__rename_var_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__MustRename_13, hlds__make_hlds__goal_expr_to_goal__Renaming_14, hlds__make_hlds__goal_expr_to_goal__Var0_20, hlds__make_hlds__goal_expr_to_goal__Var_16);
    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_24 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_23;
    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_26 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_25;
    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_28 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_27;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Unify____loc_kind_0_0_10001(
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2)
{
  {
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;

    hlds__make_hlds__goal_expr_to_goal__succeeded = hlds__make_hlds__goal_expr_to_goal____Unify____loc_kind_0_0(((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1), ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2));
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

    hlds__make_hlds__goal_expr_to_goal____Compare____loc_kind_0_0(&hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2), ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3));
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__1_1));
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

/* :- end_module hlds.make_hlds.goal_expr_to_goal. */
