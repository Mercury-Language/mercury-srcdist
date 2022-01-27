/*
** Automatically generated from `goal_expr_to_goal.m'
** by the Mercury compiler,
** version rotd-2015-02-04
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
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
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
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.clause_to_proc.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_error_util.mih"
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
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
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
#include "hlds.make_hlds.make_hlds_warn.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "hlds.make_hlds.state_var.mih"
#include "hlds.make_hlds.superhomogeneous.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 160 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 163 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 166 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 169 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDesc hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_0;

#line 172 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDesc hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_1;

#line 175 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_value_ordered_loc_kind_0[2];

#line 178 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_name_ordered_loc_kind_0[2];

#line 181 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_Integer hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__functor_number_map_loc_kind_0[2];

#line 184 "hlds.make_hlds.goal_expr_to_goal.c"
static MR_bool MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Unify____loc_kind_0_0_10001(
#line 187 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 189 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2);

#line 192 "hlds.make_hlds.goal_expr_to_goal.c"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Compare____loc_kind_0_0_10001(
#line 195 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 197 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2,
#line 199 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3);

#line 1253 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_p_0(
#line 1253 "goal_expr_to_goal.m"
  MR_String hlds__make_hlds__goal_expr_to_goal__UpdateStr_11,
#line 1253 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Args0_12,
#line 1253 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_13,
#line 1253 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_14,
#line 1253 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_21,
#line 1253 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_22,
#line 1253 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_23,
#line 1253 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_24,
#line 1253 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_25,
#line 1253 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_26);

#line 1239 "goal_expr_to_goal.m"
static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__dcg_field_error_context_pieces_1_f_0(
#line 1239 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_3);

#line 1231 "goal_expr_to_goal.m"
static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__exception_functor_3_f_0(
#line 1231 "goal_expr_to_goal.m"
  MR_String hlds__make_hlds__goal_expr_to_goal__Atom_5,
#line 1231 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Arg_6,
#line 1231 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_7);

#line 1226 "goal_expr_to_goal.m"
static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_f_0(void);

#line 1182 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(
#line 1182 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_6,
#line 1182 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7,
#line 1182 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_8,
#line 1182 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9,
#line 1182 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_10);

#line 1168 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(
#line 1168 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_7,
#line 1168 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_8,
#line 1168 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_9,
#line 1168 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_10,
#line 1168 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_11,
#line 1168 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_12);

#line 1103 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_p_0(
#line 1103 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_22,
#line 1103 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_23,
#line 1103 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ThenGoal_24,
#line 1103 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeElseGoal_25,
#line 1103 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_26,
#line 1103 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_27,
#line 1103 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_28,
#line 1103 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_29,
#line 1103 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__TryGoal_30,
#line 1103 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_53,
#line 1103 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_54,
#line 1103 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_55,
#line 1103 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_56,
#line 1103 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_57,
#line 1103 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_58,
#line 1103 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_59,
#line 1103 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_60,
#line 1103 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_61,
#line 1103 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_62,
#line 1103 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_63,
#line 1103 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_64);

#line 966 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_p_0(
#line 966 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_23,
#line 966 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVarUnrenamed_24,
#line 966 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar_25,
#line 966 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal0_26,
#line 966 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Then0_27,
#line 966 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches0_28,
#line 966 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_29,
#line 966 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_30,
#line 966 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_31,
#line 966 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__TryGoal_32,
#line 966 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_68,
#line 966 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_69,
#line 966 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_70,
#line 966 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_71,
#line 966 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_72,
#line 966 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_73,
#line 966 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_74,
#line 966 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_75,
#line 966 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_76,
#line 966 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_77,
#line 966 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_78,
#line 966 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_79);

#line 920 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(
#line 920 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_1,
#line 920 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2,
#line 920 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_3,
#line 920 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HeadVar__4_4,
#line 920 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__5_5,
#line 920 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__6_6,
#line 920 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HeadVar__7_7,
#line 920 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_8,
#line 920 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_9,
#line 920 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_10,
#line 920 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_11,
#line 920 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_12,
#line 920 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_13,
#line 920 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_14,
#line 920 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_15);

#line 891 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(
#line 891 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_17,
#line 891 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_18,
#line 891 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_19,
#line 891 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__DisjStates0_20,
#line 891 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__DisjStates_21,
#line 891 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__SVarStateBefore_22,
#line 891 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_35,
#line 891 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_36,
#line 891 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_37,
#line 891 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_38,
#line 891 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_39,
#line 891 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_40,
#line 891 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_41,
#line 891 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_42,
#line 891 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_43,
#line 891 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_44);

#line 858 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__accumulate_par_conjuncts_17_p_0(
#line 858 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
#line 858 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_19,
#line 858 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_20,
#line 858 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35,
#line 858 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36,
#line 858 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37,
#line 858 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_38,
#line 858 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39,
#line 858 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_40,
#line 858 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41,
#line 858 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_42,
#line 858 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43,
#line 858 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_44,
#line 858 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45,
#line 858 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_46,
#line 858 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47,
#line 858 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_48);

#line 827 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__accumulate_plain_conjuncts_17_p_0(
#line 827 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
#line 827 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_19,
#line 827 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_20,
#line 827 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35,
#line 827 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36,
#line 827 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37,
#line 827 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_38,
#line 827 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39,
#line 827 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_40,
#line 827 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41,
#line 827 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_42,
#line 827 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43,
#line 827 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_44,
#line 827 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45,
#line 827 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_46,
#line 827 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47,
#line 827 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_48);

#line 737 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_p_0(
#line 737 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_18,
#line 737 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__FieldNames_19,
#line 737 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms_20,
#line 737 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_21,
#line 737 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22,
#line 737 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_55,
#line 737 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_56,
#line 737 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_57,
#line 737 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58,
#line 737 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_59,
#line 737 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_60,
#line 737 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_61,
#line 737 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_62,
#line 737 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_63,
#line 737 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_64,
#line 737 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_65,
#line 737 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66);

#line 684 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_p_0(
#line 684 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
#line 684 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_19,
#line 684 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20,
#line 684 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_21,
#line 684 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22,
#line 684 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_46,
#line 684 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_47,
#line 684 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_48,
#line 684 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_49,
#line 684 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_50,
#line 684 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_51,
#line 684 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_52,
#line 684 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53,
#line 684 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_54,
#line 684 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_55,
#line 684 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_56,
#line 684 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_57);

#line 672 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0_1(
#line 672 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__closure_arg,
#line 672 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 672 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2,
#line 672 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3,
#line 672 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_4,
#line 672 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_5,
#line 672 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_6,
#line 672 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_7,
#line 672 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_8);

#line 655 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(
#line 655 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_23,
#line 655 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars0_24,
#line 655 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars0_25,
#line 655 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars0_26,
#line 655 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars0_27,
#line 655 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_28,
#line 655 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_29,
#line 655 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__QuantVars_30,
#line 655 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_31,
#line 655 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HLDSGoal_32,
#line 655 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_47,
#line 655 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_48,
#line 655 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_49,
#line 655 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_50,
#line 655 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_51,
#line 655 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52,
#line 655 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_53,
#line 655 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_54,
#line 655 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_55,
#line 655 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_56,
#line 655 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_57,
#line 655 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_58);

#line 641 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_4_p_0(
#line 641 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_5,
#line 641 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVar_6,
#line 641 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__GetGoal_7,
#line 641 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__SetGoal_8);

#line 623 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__extract_trace_mutable_var_7_p_0(
#line 623 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_8,
#line 623 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__VarSet_9,
#line 623 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Mutable_10,
#line 623 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__MutableHLDS_11,
#line 623 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__StateVar_12,
#line 623 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__GetGoal_13,
#line 623 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__SetGoal_14);

#line 315 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_1(
#line 315 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__closure_arg,
#line 315 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 315 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2,
#line 315 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3,
#line 315 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_4,
#line 315 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_5);


static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_1[29][2];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_2[10][1];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_3[1][3];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_4[1][10];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_5[1][12];




static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_1[29][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "part."))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__goal_expr_to_goal_scalar_common_2[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "parameter cannot have an"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__goal_expr_to_goal_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[9])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "goal with an"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__goal_expr_to_goal_scalar_common_2[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[12])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in DCG field access goal."))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[4])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "or \140^ field1 ^ ... ^ fieldN := Field\'"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: expected \140Field =^ field1 ^ ... ^ fieldN\'"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In DCG field extraction goal:"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[4])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In DCG field update goal:"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[4])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 27 */
  {
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[7])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 28 */
  {
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[8])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_2[10][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "else"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "io"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "try"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "!:"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "!."))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) ":="))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[15])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[21])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
};

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_3[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_4[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0))
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "time.mh"
#include "time.mh"
#include "bitmap.mh"
#include "bitmap.mh"



#line 973 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 981 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 989 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 997 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDesc hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_0 = {
  (MR_String) "loc_whole_goal",
  (MR_Integer) 0
};

#line 1003 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDesc hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_1 = {
  (MR_String) "loc_inside_atomic_goal",
  (MR_Integer) 1
};

#line 1009 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_value_ordered_loc_kind_0[2] = {
  &hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_0,
  &hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_1
};

#line 1015 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_name_ordered_loc_kind_0[2] = {
  &hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_1,
  &hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_0
};

#line 1021 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_Integer hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__functor_number_map_loc_kind_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1027 "hlds.make_hlds.goal_expr_to_goal.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__type_ctor_info_loc_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__goal_expr_to_goal____Unify____loc_kind_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__goal_expr_to_goal____Compare____loc_kind_0_0_10001)),
  (MR_String) "hlds.make_hlds.goal_expr_to_goal",
  (MR_String) "loc_kind",
  {
    hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_name_ordered_loc_kind_0
  },
  {
    hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_value_ordered_loc_kind_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__functor_number_map_loc_kind_0
};

#line 1048 "hlds.make_hlds.goal_expr_to_goal.c"
static MR_bool MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Unify____loc_kind_0_0_10001(
#line 1051 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 1053 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2)
#line 1055 "hlds.make_hlds.goal_expr_to_goal.c"
{
#line 1057 "hlds.make_hlds.goal_expr_to_goal.c"
  {
#line 1059 "hlds.make_hlds.goal_expr_to_goal.c"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;

#line 1062 "hlds.make_hlds.goal_expr_to_goal.c"
    {
#line 1064 "hlds.make_hlds.goal_expr_to_goal.c"
      hlds__make_hlds__goal_expr_to_goal__succeeded = hlds__make_hlds__goal_expr_to_goal____Unify____loc_kind_0_0(((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1), ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2));
    }
#line 1067 "hlds.make_hlds.goal_expr_to_goal.c"
    return hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1069 "hlds.make_hlds.goal_expr_to_goal.c"
  }
#line 1071 "hlds.make_hlds.goal_expr_to_goal.c"
}

#line 1074 "hlds.make_hlds.goal_expr_to_goal.c"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Compare____loc_kind_0_0_10001(
#line 1077 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 1079 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2,
#line 1081 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3)
#line 1083 "hlds.make_hlds.goal_expr_to_goal.c"
{
#line 1085 "hlds.make_hlds.goal_expr_to_goal.c"
  {
#line 1087 "hlds.make_hlds.goal_expr_to_goal.c"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__1_1;

#line 1090 "hlds.make_hlds.goal_expr_to_goal.c"
    {
#line 1092 "hlds.make_hlds.goal_expr_to_goal.c"
      hlds__make_hlds__goal_expr_to_goal____Compare____loc_kind_0_0(&hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2), ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3));
    }
#line 1095 "hlds.make_hlds.goal_expr_to_goal.c"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__1_1));
#line 1097 "hlds.make_hlds.goal_expr_to_goal.c"
  }
#line 1099 "hlds.make_hlds.goal_expr_to_goal.c"
}

#line 23 "goal_expr_to_goal.m"
void MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Compare____loc_kind_0_0(
#line 23 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1,
#line 23 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2,
#line 23 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__3_3)
#line 23 "goal_expr_to_goal.m"
{
#line 23 "goal_expr_to_goal.m"
  {
#line 23 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 23 "goal_expr_to_goal.m"
    MR_Integer hlds__make_hlds__goal_expr_to_goal__Cast_HeadVar1_4 = (MR_Integer) hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2;
#line 23 "goal_expr_to_goal.m"
    MR_Integer hlds__make_hlds__goal_expr_to_goal__Cast_HeadVar2_5 = (MR_Integer) hlds__make_hlds__goal_expr_to_goal__HeadVar__3_3;

#line 23 "goal_expr_to_goal.m"
    {
#line 23 "goal_expr_to_goal.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1, hlds__make_hlds__goal_expr_to_goal__Cast_HeadVar1_4, hlds__make_hlds__goal_expr_to_goal__Cast_HeadVar2_5);
#line 23 "goal_expr_to_goal.m"
      return;
    }
#line 23 "goal_expr_to_goal.m"
  }
#line 23 "goal_expr_to_goal.m"
}

#line 23 "goal_expr_to_goal.m"
MR_bool MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Unify____loc_kind_0_0(
#line 23 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__2_1,
#line 23 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2)
#line 23 "goal_expr_to_goal.m"
{
#line 1143 "hlds.make_hlds.goal_expr_to_goal.c"
  {
#line 1145 "hlds.make_hlds.goal_expr_to_goal.c"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__HeadVar__2_1 == hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2);

#line 1148 "hlds.make_hlds.goal_expr_to_goal.c"
    return hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1150 "hlds.make_hlds.goal_expr_to_goal.c"
  }
#line 23 "goal_expr_to_goal.m"
}

#line 1253 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_p_0(
#line 1253 "goal_expr_to_goal.m"
  MR_String hlds__make_hlds__goal_expr_to_goal__UpdateStr_11,
#line 1253 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Args0_12,
#line 1253 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_13,
#line 1253 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_14,
#line 1253 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_21,
#line 1253 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_22,
#line 1253 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_23,
#line 1253 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_24,
#line 1253 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_25,
#line 1253 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_26)
#line 1253 "goal_expr_to_goal.m"
{
#line 1258 "goal_expr_to_goal.m"
  {
#line 1258 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1258 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVars_18;
#line 1258 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_20;
#line 1258 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_30_30;
#line 1258 "goal_expr_to_goal.m"
    MR_Integer hlds__make_hlds__goal_expr_to_goal__V_31_31;
#line 1258 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_33_33;

#line 1259 "goal_expr_to_goal.m"
    {
#line 1259 "goal_expr_to_goal.m"
      hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(hlds__make_hlds__goal_expr_to_goal__Args0_12, &hlds__make_hlds__goal_expr_to_goal__HeadVars_18, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_21, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_23, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_24, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_25, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_26);
    }
#line 1262 "goal_expr_to_goal.m"
    {
#line 1262 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_30_30 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    }
#line 1262 "goal_expr_to_goal.m"
    {
#line 1262 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_31_31 = hlds__hlds_pred__invalid_proc_id_0_f_0();
    }
#line 1263 "goal_expr_to_goal.m"
    {
#line 1263 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1263 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__UpdateStr_11));
#line 1263 "goal_expr_to_goal.m"
    }
#line 1262 "goal_expr_to_goal.m"
    {
#line 1262 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1262 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_30_30));
#line 1262 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_31_31));
#line 1262 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HeadVars_18));
#line 1262 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1262 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1262 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_33_33));
#line 1262 "goal_expr_to_goal.m"
    }
#line 1264 "goal_expr_to_goal.m"
    {
#line 1264 "goal_expr_to_goal.m"
      MR_Word base;
#line 1264 "goal_expr_to_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1264 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__Goal_14 = base;
#line 1264 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_20));
#line 1264 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_13));
#line 1264 "goal_expr_to_goal.m"
    }
#line 1258 "goal_expr_to_goal.m"
  }
#line 1253 "goal_expr_to_goal.m"
}

#line 1239 "goal_expr_to_goal.m"
static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__dcg_field_error_context_pieces_1_f_0(
#line 1239 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_3)
#line 1239 "goal_expr_to_goal.m"
{
#line 1244 "goal_expr_to_goal.m"
  {
#line 1244 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1244 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ContextPieces_4;

#line 1244 "goal_expr_to_goal.m"
    if ((hlds__make_hlds__goal_expr_to_goal__AccessType_3 == (MR_Integer) 0))
#line 1248 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ContextPieces_4 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[23]);
#line 1244 "goal_expr_to_goal.m"
    else
#line 1245 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ContextPieces_4 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[25]);
#line 1244 "goal_expr_to_goal.m"
    return hlds__make_hlds__goal_expr_to_goal__ContextPieces_4;
#line 1244 "goal_expr_to_goal.m"
  }
#line 1239 "goal_expr_to_goal.m"
}

#line 1231 "goal_expr_to_goal.m"
static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__exception_functor_3_f_0(
#line 1231 "goal_expr_to_goal.m"
  MR_String hlds__make_hlds__goal_expr_to_goal__Atom_5,
#line 1231 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Arg_6,
#line 1231 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_7)
#line 1231 "goal_expr_to_goal.m"
{
#line 1233 "goal_expr_to_goal.m"
  {
#line 1233 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1233 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__Term_8;
#line 1233 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SymName_9;
#line 1233 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_10_10;
#line 1233 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_11_11;

#line 1234 "goal_expr_to_goal.m"
    {
#line 1234 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_10_10 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 1234 "goal_expr_to_goal.m"
    {
#line 1234 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__SymName_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1234 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_9, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_10_10));
#line 1234 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_9, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Atom_5));
#line 1234 "goal_expr_to_goal.m"
    }
#line 1235 "goal_expr_to_goal.m"
    {
#line 1235 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1235 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_11_11, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Arg_6));
#line 1235 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1235 "goal_expr_to_goal.m"
    }
#line 1235 "goal_expr_to_goal.m"
    {
#line 1235 "goal_expr_to_goal.m"
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__SymName_9, hlds__make_hlds__goal_expr_to_goal__V_11_11, hlds__make_hlds__goal_expr_to_goal__Context_7, &hlds__make_hlds__goal_expr_to_goal__Term_8);
    }
#line 1233 "goal_expr_to_goal.m"
    return hlds__make_hlds__goal_expr_to_goal__Term_8;
#line 1233 "goal_expr_to_goal.m"
  }
#line 1231 "goal_expr_to_goal.m"
}

#line 1226 "goal_expr_to_goal.m"
static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_f_0(void)
#line 1226 "goal_expr_to_goal.m"
{
#line 1228 "goal_expr_to_goal.m"
  {
#line 1228 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1228 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1;
#line 1228 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_2_2;

#line 1229 "goal_expr_to_goal.m"
    {
#line 1229 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_2_2 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 1229 "goal_expr_to_goal.m"
    {
#line 1229 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1229 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_2_2));
#line 1229 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1, 1) = ((MR_Box) ((MR_String) "magic_exception_result"));
#line 1229 "goal_expr_to_goal.m"
    }
#line 1228 "goal_expr_to_goal.m"
    return hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1;
#line 1228 "goal_expr_to_goal.m"
  }
#line 1226 "goal_expr_to_goal.m"
}

#line 1182 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(
#line 1182 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_6,
#line 1182 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7,
#line 1182 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_8,
#line 1182 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9,
#line 1182 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_10)
#line 1182 "goal_expr_to_goal.m"
{
#line 1188 "goal_expr_to_goal.m"
  {
#line 1188 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;

#line 1188 "goal_expr_to_goal.m"
    if ((hlds__make_hlds__goal_expr_to_goal__Catches_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1208 "goal_expr_to_goal.m"
      if ((hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1209 "goal_expr_to_goal.m"
        {
#line 1209 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__Rethrow_20;
#line 1209 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_21_21;
#line 1209 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_23_23;
#line 1209 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_24_24;

#line 1212 "goal_expr_to_goal.m"
          {
#line 1212 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_21_21 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
          }
#line 1212 "goal_expr_to_goal.m"
          {
#line 1212 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__Rethrow_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1212 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Rethrow_20, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_21_21));
#line 1212 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Rethrow_20, 1) = ((MR_Box) ((MR_String) "rethrow"));
#line 1212 "goal_expr_to_goal.m"
          }
#line 1213 "goal_expr_to_goal.m"
          {
#line 1213 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_23_23 = mercury__term__get_term_context_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7);
          }
#line 1214 "goal_expr_to_goal.m"
          {
#line 1214 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1214 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_6));
#line 1214 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1214 "goal_expr_to_goal.m"
          }
#line 1213 "goal_expr_to_goal.m"
          {
#line 1213 "goal_expr_to_goal.m"
            MR_Word base;
#line 1213 "goal_expr_to_goal.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1213 "goal_expr_to_goal.m"
            *hlds__make_hlds__goal_expr_to_goal__Goal_10 = base;
#line 1213 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 1213 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_23_23));
#line 1213 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Rethrow_20));
#line 1213 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_24_24));
#line 1213 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1213 "goal_expr_to_goal.m"
          }
#line 1209 "goal_expr_to_goal.m"
        }
#line 1208 "goal_expr_to_goal.m"
      else
#line 1198 "goal_expr_to_goal.m"
        {
#line 1198 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__CatchAnyVar_16;
#line 1198 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__CatchAnyGoal_17;
#line 1198 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__Context_18;
#line 1198 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19;
#line 1198 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9, (MR_Integer) 0)));
#line 1198 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_28_28;
#line 1198 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_29_29;
#line 1198 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__SymName_42;
#line 1198 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_43_43;
#line 1198 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_44_44;

#line 1198 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__CatchAnyVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_27_27, (MR_Integer) 0)));
#line 1198 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__CatchAnyGoal_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_27_27, (MR_Integer) 1)));
#line 1202 "goal_expr_to_goal.m"
          {
#line 1202 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__Context_18 = parse_tree__prog_item__goal_get_context_1_f_0(hlds__make_hlds__goal_expr_to_goal__CatchAnyGoal_17);
          }
#line 1204 "goal_expr_to_goal.m"
          {
#line 1204 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1204 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_28_28, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CatchAnyVar_16));
#line 1204 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_28_28, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_18));
#line 1204 "goal_expr_to_goal.m"
          }
#line 1234 "goal_expr_to_goal.m"
          {
#line 1234 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_43_43 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
          }
#line 1234 "goal_expr_to_goal.m"
          {
#line 1234 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SymName_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1234 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_42, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_43_43));
#line 1234 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_42, 1) = ((MR_Box) ((MR_String) "exc_univ_value"));
#line 1234 "goal_expr_to_goal.m"
          }
#line 1235 "goal_expr_to_goal.m"
          {
#line 1235 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1235 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_44_44, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7));
#line 1235 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1235 "goal_expr_to_goal.m"
          }
#line 1235 "goal_expr_to_goal.m"
          {
#line 1235 "goal_expr_to_goal.m"
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__SymName_42, hlds__make_hlds__goal_expr_to_goal__V_44_44, hlds__make_hlds__goal_expr_to_goal__Context_18, &hlds__make_hlds__goal_expr_to_goal__V_29_29);
          }
#line 1203 "goal_expr_to_goal.m"
          {
#line 1203 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1203 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 1203 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_18));
#line 1203 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_28_28));
#line 1203 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_29_29));
#line 1203 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1203 "goal_expr_to_goal.m"
          }
#line 1207 "goal_expr_to_goal.m"
          {
#line 1207 "goal_expr_to_goal.m"
            MR_Word base;
#line 1207 "goal_expr_to_goal.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1207 "goal_expr_to_goal.m"
            *hlds__make_hlds__goal_expr_to_goal__Goal_10 = base;
#line 1207 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_18));
#line 1207 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GetUnivValue_19));
#line 1207 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CatchAnyGoal_17));
#line 1207 "goal_expr_to_goal.m"
          }
#line 1198 "goal_expr_to_goal.m"
        }
#line 1188 "goal_expr_to_goal.m"
    else
#line 1188 "goal_expr_to_goal.m"
      {
#line 1188 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__FirstPattern_11;
#line 1188 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__FirstGoal_12;
#line 1188 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__RestCatches_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Catches_8, (MR_Integer) 1)));
#line 1188 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__ElseGoal_14;
#line 1188 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15;
#line 1188 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Catches_8, (MR_Integer) 0)));
#line 1188 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_33_33;
#line 1188 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_50_50;
#line 1188 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_51_51;
#line 1188 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_52_52;
#line 1188 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_54_54;
#line 1188 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_55_55;

#line 1188 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__FirstPattern_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_32_32, (MR_Integer) 0)));
#line 1188 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__FirstGoal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_32_32, (MR_Integer) 1)));
#line 1189 "goal_expr_to_goal.m"
        {
#line 1189 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_6, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7, hlds__make_hlds__goal_expr_to_goal__RestCatches_13, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9, &hlds__make_hlds__goal_expr_to_goal__ElseGoal_14);
        }
#line 1222 "goal_expr_to_goal.m"
        {
#line 1222 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_50_50 = mercury__term__get_term_context_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__FirstPattern_11);
        }
#line 1223 "goal_expr_to_goal.m"
        {
#line 1223 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_52_52 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
        }
#line 1223 "goal_expr_to_goal.m"
        {
#line 1223 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1223 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_51_51, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_52_52));
#line 1223 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_51_51, 1) = ((MR_Box) ((MR_String) "exc_univ_to_type"));
#line 1223 "goal_expr_to_goal.m"
        }
#line 1224 "goal_expr_to_goal.m"
        {
#line 1224 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1224 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FirstPattern_11));
#line 1224 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1224 "goal_expr_to_goal.m"
        }
#line 1224 "goal_expr_to_goal.m"
        {
#line 1224 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1224 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_54_54, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7));
#line 1224 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_54_54, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_55_55));
#line 1224 "goal_expr_to_goal.m"
        }
#line 1222 "goal_expr_to_goal.m"
        {
#line 1222 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1222 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 1222 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_50_50));
#line 1222 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_51_51));
#line 1222 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_54_54));
#line 1222 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1222 "goal_expr_to_goal.m"
        }
#line 1193 "goal_expr_to_goal.m"
        {
#line 1193 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_33_33 = mercury__term__get_term_context_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__FirstPattern_11);
        }
#line 1193 "goal_expr_to_goal.m"
        {
#line 1193 "goal_expr_to_goal.m"
          MR_Word base;
#line 1193 "goal_expr_to_goal.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1193 "goal_expr_to_goal.m"
          *hlds__make_hlds__goal_expr_to_goal__Goal_10 = base;
#line 1193 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 1193 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_33_33));
#line 1193 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1193 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1193 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15));
#line 1193 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FirstGoal_12));
#line 1193 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ElseGoal_14));
#line 1193 "goal_expr_to_goal.m"
        }
#line 1188 "goal_expr_to_goal.m"
      }
#line 1188 "goal_expr_to_goal.m"
  }
#line 1182 "goal_expr_to_goal.m"
}

#line 1168 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(
#line 1168 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_7,
#line 1168 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_8,
#line 1168 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_9,
#line 1168 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_10,
#line 1168 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_11,
#line 1168 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_12)
#line 1168 "goal_expr_to_goal.m"
{
#line 1173 "goal_expr_to_goal.m"
  {
#line 1173 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1173 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13;
#line 1173 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__CatchChain_14;
#line 1173 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_15_15;
#line 1173 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SymName_22;
#line 1173 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_23_23;
#line 1173 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_24_24;

#line 1234 "goal_expr_to_goal.m"
    {
#line 1234 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_23_23 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 1234 "goal_expr_to_goal.m"
    {
#line 1234 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__SymName_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1234 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_22, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_23_23));
#line 1234 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_22, 1) = ((MR_Box) ((MR_String) "exception"));
#line 1234 "goal_expr_to_goal.m"
    }
#line 1235 "goal_expr_to_goal.m"
    {
#line 1235 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1235 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_8));
#line 1235 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1235 "goal_expr_to_goal.m"
    }
#line 1235 "goal_expr_to_goal.m"
    {
#line 1235 "goal_expr_to_goal.m"
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__SymName_22, hlds__make_hlds__goal_expr_to_goal__V_24_24, hlds__make_hlds__goal_expr_to_goal__Context_11, &hlds__make_hlds__goal_expr_to_goal__V_15_15);
    }
#line 1174 "goal_expr_to_goal.m"
    {
#line 1174 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1174 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 1174 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_11));
#line 1174 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_7));
#line 1174 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_15_15));
#line 1174 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1174 "goal_expr_to_goal.m"
    }
#line 1178 "goal_expr_to_goal.m"
    {
#line 1178 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_7, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_8, hlds__make_hlds__goal_expr_to_goal__Catches_9, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_10, &hlds__make_hlds__goal_expr_to_goal__CatchChain_14);
    }
#line 1180 "goal_expr_to_goal.m"
    {
#line 1180 "goal_expr_to_goal.m"
      MR_Word base;
#line 1180 "goal_expr_to_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1180 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__Goal_12 = base;
#line 1180 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_11));
#line 1180 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13));
#line 1180 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CatchChain_14));
#line 1180 "goal_expr_to_goal.m"
    }
#line 1173 "goal_expr_to_goal.m"
  }
#line 1168 "goal_expr_to_goal.m"
}

#line 1103 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_p_0(
#line 1103 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_22,
#line 1103 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_23,
#line 1103 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ThenGoal_24,
#line 1103 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeElseGoal_25,
#line 1103 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_26,
#line 1103 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_27,
#line 1103 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_28,
#line 1103 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_29,
#line 1103 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__TryGoal_30,
#line 1103 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_53,
#line 1103 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_54,
#line 1103 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_55,
#line 1103 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_56,
#line 1103 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_57,
#line 1103 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_58,
#line 1103 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_59,
#line 1103 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_60,
#line 1103 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_61,
#line 1103 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_62,
#line 1103 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_63,
#line 1103 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_64)
#line 1103 "goal_expr_to_goal.m"
{
#line 1113 "goal_expr_to_goal.m"
  {
#line 1113 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1113 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_92_92 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1113 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVar_37;
#line 1113 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVar_38;
#line 1113 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39;
#line 1113 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_40;
#line 1113 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41;
#line 1113 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_42;
#line 1113 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43;
#line 1113 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44;
#line 1113 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46;
#line 1113 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunctGoal_47;
#line 1113 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunctGoal_48;
#line 1113 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunctionGoal_49;
#line 1113 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSCallMagicThenDisjunctionGoal_50;
#line 1113 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ShortHand_51;
#line 1113 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_52;
#line 1113 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_66_66;
#line 1113 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_67_67;
#line 1113 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_71_71;
#line 1113 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_72_72;
#line 1113 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_75_75;
#line 1113 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_84_84;
#line 1113 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_93_93;

#line 1114 "goal_expr_to_goal.m"
    {
#line 1114 "goal_expr_to_goal.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_92_92, (MR_String) "TryResult", &hlds__make_hlds__goal_expr_to_goal__ResultVar_37, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_57, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_66_66);
    }
#line 1115 "goal_expr_to_goal.m"
    {
#line 1115 "goal_expr_to_goal.m"
      mercury__varset__new_var_3_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_92_92, &hlds__make_hlds__goal_expr_to_goal__ExcpVar_38, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_66_66, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_67_67);
    }
#line 1117 "goal_expr_to_goal.m"
    {
#line 1117 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1117 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVar_37));
#line 1117 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1117 "goal_expr_to_goal.m"
    }
#line 1118 "goal_expr_to_goal.m"
    {
#line 1118 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1118 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_40, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ExcpVar_38));
#line 1118 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_40, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1118 "goal_expr_to_goal.m"
    }
#line 1119 "goal_expr_to_goal.m"
    {
#line 1119 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1119 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[9]));
#line 1119 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1119 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1119 "goal_expr_to_goal.m"
    }
#line 1121 "goal_expr_to_goal.m"
    {
#line 1121 "goal_expr_to_goal.m"
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_28, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_42);
    }
#line 1229 "goal_expr_to_goal.m"
    {
#line 1229 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_93_93 = mdbcomp__builtin_modules__mercury_exception_module_0_f_0();
    }
#line 1229 "goal_expr_to_goal.m"
    {
#line 1229 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1229 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_71_71, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_93_93));
#line 1229 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_71_71, 1) = ((MR_Box) ((MR_String) "magic_exception_result"));
#line 1229 "goal_expr_to_goal.m"
    }
#line 1125 "goal_expr_to_goal.m"
    {
#line 1125 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1125 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_72_72, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39));
#line 1125 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1125 "goal_expr_to_goal.m"
    }
#line 1124 "goal_expr_to_goal.m"
    {
#line 1124 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1124 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 1124 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1124 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_71_71));
#line 1124 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_72_72));
#line 1124 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1124 "goal_expr_to_goal.m"
    }
#line 1130 "goal_expr_to_goal.m"
    {
#line 1130 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_75_75 = hlds__make_hlds__goal_expr_to_goal__exception_functor_3_f_0((MR_String) "succeeded", hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41, hlds__make_hlds__goal_expr_to_goal__Context_28);
    }
#line 1128 "goal_expr_to_goal.m"
    {
#line 1128 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1128 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 1128 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1128 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39));
#line 1128 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_75_75));
#line 1128 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1128 "goal_expr_to_goal.m"
    }
#line 1136 "goal_expr_to_goal.m"
    if ((hlds__make_hlds__goal_expr_to_goal__MaybeElseGoal_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1137 "goal_expr_to_goal.m"
      {
#line 1137 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_78_78;
#line 1137 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_80_80;

#line 1140 "goal_expr_to_goal.m"
        {
#line 1140 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_78_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1140 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_78_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1140 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_78_78, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1140 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_78_78, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1140 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_78_78, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal_23));
#line 1140 "goal_expr_to_goal.m"
        }
#line 1141 "goal_expr_to_goal.m"
        {
#line 1141 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_80_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1141 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_80_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1141 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_80_80, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1141 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_80_80, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1141 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_80_80, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ThenGoal_24));
#line 1141 "goal_expr_to_goal.m"
        }
#line 1139 "goal_expr_to_goal.m"
        {
#line 1139 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1139 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1139 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_78_78));
#line 1139 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_80_80));
#line 1139 "goal_expr_to_goal.m"
        }
#line 1137 "goal_expr_to_goal.m"
      }
#line 1136 "goal_expr_to_goal.m"
    else
#line 1133 "goal_expr_to_goal.m"
      {
#line 1133 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__ElseGoal_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeElseGoal_25, (MR_Integer) 0)));

#line 1134 "goal_expr_to_goal.m"
        {
#line 1134 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1134 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 1134 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1134 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1134 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1134 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal_23));
#line 1134 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ThenGoal_24));
#line 1134 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 6) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ElseGoal_45));
#line 1134 "goal_expr_to_goal.m"
        }
#line 1133 "goal_expr_to_goal.m"
      }
#line 1144 "goal_expr_to_goal.m"
    {
#line 1144 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunctGoal_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1144 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunctGoal_47, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1144 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunctGoal_47, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_44));
#line 1144 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunctGoal_47, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46));
#line 1144 "goal_expr_to_goal.m"
    }
#line 1148 "goal_expr_to_goal.m"
    {
#line 1148 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_40, hlds__make_hlds__goal_expr_to_goal__Catches_26, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_27, hlds__make_hlds__goal_expr_to_goal__Context_28, &hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunctGoal_48);
    }
#line 1155 "goal_expr_to_goal.m"
    {
#line 1155 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1155 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1155 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_84_84, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1155 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_84_84, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunctGoal_47));
#line 1155 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_84_84, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunctGoal_48));
#line 1155 "goal_expr_to_goal.m"
    }
#line 1153 "goal_expr_to_goal.m"
    {
#line 1153 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunctionGoal_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1153 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunctionGoal_49, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1153 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunctionGoal_49, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_43));
#line 1153 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunctionGoal_49, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_84_84));
#line 1153 "goal_expr_to_goal.m"
    }
#line 1160 "goal_expr_to_goal.m"
    {
#line 1160 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_22, hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunctionGoal_49, hlds__make_hlds__goal_expr_to_goal__Renaming_29, &hlds__make_hlds__goal_expr_to_goal__HLDSCallMagicThenDisjunctionGoal_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_55, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_67_67, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_58, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_59, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_61, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_62, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_63, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_64);
    }
#line 1164 "goal_expr_to_goal.m"
    {
#line 1164 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ShortHand_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1164 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__ShortHand_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1164 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__ShortHand_51, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVar_37));
#line 1164 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__ShortHand_51, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSCallMagicThenDisjunctionGoal_50));
#line 1164 "goal_expr_to_goal.m"
    }
#line 1165 "goal_expr_to_goal.m"
    {
#line 1165 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__GoalExpr_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1165 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1165 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_52, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ShortHand_51));
#line 1165 "goal_expr_to_goal.m"
    }
#line 1166 "goal_expr_to_goal.m"
    {
#line 1166 "goal_expr_to_goal.m"
      MR_Word base;
#line 1166 "goal_expr_to_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1166 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__TryGoal_30 = base;
#line 1166 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_52));
#line 1166 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_42));
#line 1166 "goal_expr_to_goal.m"
    }
#line 1113 "goal_expr_to_goal.m"
  }
#line 1103 "goal_expr_to_goal.m"
}

#line 966 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_p_0(
#line 966 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_23,
#line 966 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVarUnrenamed_24,
#line 966 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar_25,
#line 966 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal0_26,
#line 966 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Then0_27,
#line 966 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches0_28,
#line 966 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_29,
#line 966 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_30,
#line 966 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_31,
#line 966 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__TryGoal_32,
#line 966 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_68,
#line 966 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_69,
#line 966 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_70,
#line 966 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_71,
#line 966 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_72,
#line 966 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_73,
#line 966 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_74,
#line 966 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_75,
#line 966 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_76,
#line 966 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_77,
#line 966 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_78,
#line 966 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_79)
#line 966 "goal_expr_to_goal.m"
{
#line 976 "goal_expr_to_goal.m"
  {
#line 976 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_162_162 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVar_39;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVar_40;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_42;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_43;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_44;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSCallMagicGoal_46;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVarBefore_47;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSResultIsSucceededUnifyGoal_50;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__IOUnify_51;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSScopedGoal_53;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVarAfter_54;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSScopedThenGoal_56;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSResultIsSucceededDisjunctGoal_57;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsSucceededDisjunct_58;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunctGoal_59;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSResultIsExceptionDisjunctGoal_60;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsExceptionDisjunct_61;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__DisjunctSVarStates_62;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSDisjuncts_63;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSDisjunction_64;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunction_65;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVars_66;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_67;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_82_82;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_86_86;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_87_87;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_90_90;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_91_91;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_92_92;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_93_93;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_94_94;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_95_95;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_96_96;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_98_98;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_99_99;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_102_102;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_103_103;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_104_104;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_105_105;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_106_106;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_107_107;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_108_108;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_111_111;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_112_112;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_114_114;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_122_122;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_123_123;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_124_124;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_125_125;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_126_126;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_127_127;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_128_128;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_129_129;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_130_130;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_131_131;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_134_134;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_135_135;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_136_136;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_137_137;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_138_138;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_139_139;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_140_140;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_141_141;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_143_143;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_145_145;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_146_146;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_150_150;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_151_151;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_152_152;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_157_157;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_158_158;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_160_160;
#line 976 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_161_161;

#line 977 "goal_expr_to_goal.m"
    {
#line 977 "goal_expr_to_goal.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_162_162, (MR_String) "TryResult", &hlds__make_hlds__goal_expr_to_goal__ResultVar_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_72, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81);
    }
#line 978 "goal_expr_to_goal.m"
    {
#line 978 "goal_expr_to_goal.m"
      mercury__varset__new_var_3_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_162_162, &hlds__make_hlds__goal_expr_to_goal__ExcpVar_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_82_82);
    }
#line 980 "goal_expr_to_goal.m"
    {
#line 980 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 980 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVar_39));
#line 980 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 980 "goal_expr_to_goal.m"
    }
#line 981 "goal_expr_to_goal.m"
    {
#line 981 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 981 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_42, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ExcpVar_40));
#line 981 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_42, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 981 "goal_expr_to_goal.m"
    }
#line 982 "goal_expr_to_goal.m"
    {
#line 982 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 982 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_43, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[9]));
#line 982 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 982 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_43, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 982 "goal_expr_to_goal.m"
    }
#line 984 "goal_expr_to_goal.m"
    {
#line 984 "goal_expr_to_goal.m"
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_30, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_44);
    }
#line 987 "goal_expr_to_goal.m"
    {
#line 987 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_86_86 = hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_f_0();
    }
#line 988 "goal_expr_to_goal.m"
    {
#line 988 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 988 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_87_87, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41));
#line 988 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 988 "goal_expr_to_goal.m"
    }
#line 987 "goal_expr_to_goal.m"
    {
#line 987 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 987 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 987 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 987 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_86_86));
#line 987 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_87_87));
#line 987 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45, 4) = ((MR_Box) ((MR_Integer) 0));
#line 987 "goal_expr_to_goal.m"
    }
#line 989 "goal_expr_to_goal.m"
    {
#line 989 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__CallMagicGoal_45, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__HLDSCallMagicGoal_46, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_68, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_90_90, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_70, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_91_91, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_82_82, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_92_92, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_74, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_93_93, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_76, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_94_94, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_78, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_95_95);
    }
#line 994 "goal_expr_to_goal.m"
    {
#line 994 "goal_expr_to_goal.m"
      hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_30, hlds__make_hlds__goal_expr_to_goal__IOStateVar_25, &hlds__make_hlds__goal_expr_to_goal__IOStateVarBefore_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_92_92, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_96_96, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_90_90, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_143_143, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_95_95, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_98_98);
    }
#line 1002 "goal_expr_to_goal.m"
    {
#line 1002 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_99_99 = hlds__make_hlds__goal_expr_to_goal__exception_functor_3_f_0((MR_String) "succeeded", hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_43, hlds__make_hlds__goal_expr_to_goal__Context_30);
    }
#line 1000 "goal_expr_to_goal.m"
    {
#line 1000 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1000 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 1000 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1000 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41));
#line 1000 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_99_99));
#line 1000 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1000 "goal_expr_to_goal.m"
    }
#line 1004 "goal_expr_to_goal.m"
    {
#line 1004 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnifyGoal_49, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__HLDSResultIsSucceededUnifyGoal_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_143_143, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_102_102, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_91_91, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_103_103, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_96_96, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_104_104, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_93_93, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_105_105, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_94_94, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_106_106, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_98_98, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_107_107);
    }
#line 1014 "goal_expr_to_goal.m"
    {
#line 1014 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1014 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_112_112, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVarUnrenamed_24));
#line 1014 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_112_112, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1014 "goal_expr_to_goal.m"
    }
#line 1014 "goal_expr_to_goal.m"
    {
#line 1014 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1014 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_111_111, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_112_112));
#line 1014 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1014 "goal_expr_to_goal.m"
    }
#line 1014 "goal_expr_to_goal.m"
    {
#line 1014 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1014 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_108_108, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[3]));
#line 1014 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_108_108, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_111_111));
#line 1014 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_108_108, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1014 "goal_expr_to_goal.m"
    }
#line 1015 "goal_expr_to_goal.m"
    {
#line 1015 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1015 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_114_114, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[4]));
#line 1015 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_114_114, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_111_111));
#line 1015 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_114_114, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1015 "goal_expr_to_goal.m"
    }
#line 1013 "goal_expr_to_goal.m"
    {
#line 1013 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__IOUnify_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1013 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__IOUnify_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 1013 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__IOUnify_51, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1013 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__IOUnify_51, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_108_108));
#line 1013 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__IOUnify_51, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_114_114));
#line 1013 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__IOUnify_51, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1013 "goal_expr_to_goal.m"
    }
#line 1017 "goal_expr_to_goal.m"
    {
#line 1017 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1017 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_122_122, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1017 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_122_122, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOUnify_51));
#line 1017 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_122_122, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Goal0_26));
#line 1017 "goal_expr_to_goal.m"
    }
#line 1017 "goal_expr_to_goal.m"
    {
#line 1017 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1017 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1017 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1017 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1017 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_122_122));
#line 1017 "goal_expr_to_goal.m"
    }
#line 1018 "goal_expr_to_goal.m"
    {
#line 1018 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__ScopedGoal_52, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__HLDSScopedGoal_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_102_102, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_123_123, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_103_103, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_124_124, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_104_104, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_125_125, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_105_105, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_126_126, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_106_106, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_127_127, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_107_107, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_128_128);
    }
#line 1023 "goal_expr_to_goal.m"
    {
#line 1023 "goal_expr_to_goal.m"
      hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_30, hlds__make_hlds__goal_expr_to_goal__IOStateVar_25, &hlds__make_hlds__goal_expr_to_goal__IOStateVarAfter_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_125_125, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_129_129, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_123_123, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_130_130, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_128_128, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_131_131);
    }
#line 1027 "goal_expr_to_goal.m"
    {
#line 1027 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1027 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1027 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1027 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1027 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Then0_27));
#line 1027 "goal_expr_to_goal.m"
    }
#line 1028 "goal_expr_to_goal.m"
    {
#line 1028 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__ScopedThenGoal_55, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__HLDSScopedThenGoal_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_130_130, &hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsSucceededDisjunct_58, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_124_124, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_134_134, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_129_129, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_135_135, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_126_126, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_136_136, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_127_127, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_137_137, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_131_131, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_138_138);
    }
#line 1039 "goal_expr_to_goal.m"
    {
#line 1039 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1039 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_141_141, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSScopedThenGoal_56));
#line 1039 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_141_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1039 "goal_expr_to_goal.m"
    }
#line 1039 "goal_expr_to_goal.m"
    {
#line 1039 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1039 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_140_140, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSScopedGoal_53));
#line 1039 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_140_140, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_141_141));
#line 1039 "goal_expr_to_goal.m"
    }
#line 1039 "goal_expr_to_goal.m"
    {
#line 1039 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1039 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_139_139, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSResultIsSucceededUnifyGoal_50));
#line 1039 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_139_139, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_140_140));
#line 1039 "goal_expr_to_goal.m"
    }
#line 1038 "goal_expr_to_goal.m"
    {
#line 1038 "goal_expr_to_goal.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__V_139_139, hlds__make_hlds__goal_expr_to_goal__GoalInfo_44, &hlds__make_hlds__goal_expr_to_goal__HLDSResultIsSucceededDisjunctGoal_57);
    }
#line 1046 "goal_expr_to_goal.m"
    {
#line 1046 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_42, hlds__make_hlds__goal_expr_to_goal__Catches0_28, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_29, hlds__make_hlds__goal_expr_to_goal__Context_30, &hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunctGoal_59);
    }
#line 1048 "goal_expr_to_goal.m"
    {
#line 1048 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunctGoal_59, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__HLDSResultIsExceptionDisjunctGoal_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_143_143, &hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsExceptionDisjunct_61, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_134_134, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_145_145, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_135_135, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_146_146, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_136_136, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_75, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_137_137, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_77, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_138_138, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_79);
    }
#line 1056 "goal_expr_to_goal.m"
    {
#line 1056 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_150_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1056 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_150_150, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSResultIsSucceededDisjunctGoal_57));
#line 1056 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_150_150, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsSucceededDisjunct_58));
#line 1056 "goal_expr_to_goal.m"
    }
#line 1058 "goal_expr_to_goal.m"
    {
#line 1058 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_152_152 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1058 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_152_152, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSResultIsExceptionDisjunctGoal_60));
#line 1058 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_152_152, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsExceptionDisjunct_61));
#line 1058 "goal_expr_to_goal.m"
    }
#line 1060 "goal_expr_to_goal.m"
    {
#line 1060 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1060 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_151_151, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_152_152));
#line 1060 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_151_151, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1060 "goal_expr_to_goal.m"
    }
#line 1057 "goal_expr_to_goal.m"
    {
#line 1057 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__DisjunctSVarStates_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1057 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__DisjunctSVarStates_62, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_150_150));
#line 1057 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__DisjunctSVarStates_62, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_151_151));
#line 1057 "goal_expr_to_goal.m"
    }
#line 1061 "goal_expr_to_goal.m"
    {
#line 1061 "goal_expr_to_goal.m"
      hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_30, hlds__make_hlds__goal_expr_to_goal__DisjunctSVarStates_62, &hlds__make_hlds__goal_expr_to_goal__HLDSDisjuncts_63, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_146_146, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_143_143, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_69, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_145_145, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_71);
    }
#line 1063 "goal_expr_to_goal.m"
    {
#line 1063 "goal_expr_to_goal.m"
      hlds__hlds_goal__disj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__HLDSDisjuncts_63, hlds__make_hlds__goal_expr_to_goal__GoalInfo_44, &hlds__make_hlds__goal_expr_to_goal__HLDSDisjunction_64);
    }
#line 1066 "goal_expr_to_goal.m"
    {
#line 1066 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1066 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_158_158, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSDisjunction_64));
#line 1066 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_158_158, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1066 "goal_expr_to_goal.m"
    }
#line 1066 "goal_expr_to_goal.m"
    {
#line 1066 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1066 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_157_157, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSCallMagicGoal_46));
#line 1066 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_157_157, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_158_158));
#line 1066 "goal_expr_to_goal.m"
    }
#line 1066 "goal_expr_to_goal.m"
    {
#line 1066 "goal_expr_to_goal.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__V_157_157, hlds__make_hlds__goal_expr_to_goal__GoalInfo_44, &hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunction_65);
    }
#line 1069 "goal_expr_to_goal.m"
    {
#line 1069 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__IOStateVars_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1069 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__IOStateVars_66, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVarBefore_47));
#line 1069 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__IOStateVars_66, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVarAfter_54));
#line 1069 "goal_expr_to_goal.m"
    }
#line 1070 "goal_expr_to_goal.m"
    {
#line 1070 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1070 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_161_161, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVars_66));
#line 1070 "goal_expr_to_goal.m"
    }
#line 1070 "goal_expr_to_goal.m"
    {
#line 1070 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_160_160 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1070 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_160_160, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_161_161));
#line 1070 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_160_160, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVar_39));
#line 1070 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_160_160, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunction_65));
#line 1070 "goal_expr_to_goal.m"
    }
#line 1070 "goal_expr_to_goal.m"
    {
#line 1070 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__GoalExpr_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1070 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1070 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_67, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_160_160));
#line 1070 "goal_expr_to_goal.m"
    }
#line 1072 "goal_expr_to_goal.m"
    {
#line 1072 "goal_expr_to_goal.m"
      MR_Word base;
#line 1072 "goal_expr_to_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1072 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__TryGoal_32 = base;
#line 1072 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_67));
#line 1072 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_44));
#line 1072 "goal_expr_to_goal.m"
    }
#line 976 "goal_expr_to_goal.m"
  }
#line 966 "goal_expr_to_goal.m"
}

#line 920 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(
#line 920 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_1,
#line 920 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2,
#line 920 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_3,
#line 920 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HeadVar__4_4,
#line 920 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__5_5,
#line 920 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__6_6,
#line 920 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HeadVar__7_7,
#line 920 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_8,
#line 920 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_9,
#line 920 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_10,
#line 920 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_11,
#line 920 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_12,
#line 920 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_13,
#line 920 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_14,
#line 920 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_15)
#line 920 "goal_expr_to_goal.m"
{
#line 927 "goal_expr_to_goal.m"
  {
#line 927 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;

#line 927 "goal_expr_to_goal.m"
    if ((hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 927 "goal_expr_to_goal.m"
      {
#line 927 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 928 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_15 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_14;
#line 928 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_13 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_12;
#line 928 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_11 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_10;
#line 928 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_9 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_8;
#line 927 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__HeadVar__7_7 = hlds__make_hlds__goal_expr_to_goal__HeadVar__6_6;
#line 927 "goal_expr_to_goal.m"
      }
#line 927 "goal_expr_to_goal.m"
    else
#line 931 "goal_expr_to_goal.m"
      {
#line 931 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2, (MR_Integer) 0)));
#line 931 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__Goals_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2, (MR_Integer) 1)));
#line 931 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__DisjState_38;
#line 931 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__DisjStates_39;
#line 931 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal_46;
#line 931 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_47;
#line 931 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58_58;
#line 931 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_59_59;
#line 931 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_60_60;
#line 931 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_61_61;
#line 931 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_62_62;

#line 932 "goal_expr_to_goal.m"
        {
#line 932 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_1, hlds__make_hlds__goal_expr_to_goal__Goal_35, hlds__make_hlds__goal_expr_to_goal__Renaming_3, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal_46, hlds__make_hlds__goal_expr_to_goal__HeadVar__5_5, &hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_47, hlds__make_hlds__goal_expr_to_goal__HeadVar__6_6, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58_58, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_8, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_59_59, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_10, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_60_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_12, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_61_61, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_14, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_62_62);
        }
#line 935 "goal_expr_to_goal.m"
        {
#line 935 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__DisjState_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 935 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__DisjState_38, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSGoal_46));
#line 935 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__DisjState_38, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_47));
#line 935 "goal_expr_to_goal.m"
        }
#line 936 "goal_expr_to_goal.m"
        {
#line 936 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_1, hlds__make_hlds__goal_expr_to_goal__Goals_36, hlds__make_hlds__goal_expr_to_goal__Renaming_3, &hlds__make_hlds__goal_expr_to_goal__DisjStates_39, hlds__make_hlds__goal_expr_to_goal__HeadVar__5_5, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58_58, hlds__make_hlds__goal_expr_to_goal__HeadVar__7_7, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_59_59, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_9, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_60_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_11, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_61_61, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_13, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_62_62, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_15);
        }
#line 930 "goal_expr_to_goal.m"
        {
#line 930 "goal_expr_to_goal.m"
          MR_Word base;
#line 930 "goal_expr_to_goal.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 930 "goal_expr_to_goal.m"
          *hlds__make_hlds__goal_expr_to_goal__HeadVar__4_4 = base;
#line 930 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__DisjState_38));
#line 930 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__DisjStates_39));
#line 930 "goal_expr_to_goal.m"
        }
#line 931 "goal_expr_to_goal.m"
      }
#line 927 "goal_expr_to_goal.m"
  }
#line 920 "goal_expr_to_goal.m"
}

#line 891 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(
#line 891 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_17,
#line 891 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_18,
#line 891 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_19,
#line 891 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__DisjStates0_20,
#line 891 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__DisjStates_21,
#line 891 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__SVarStateBefore_22,
#line 891 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_35,
#line 891 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_36,
#line 891 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_37,
#line 891 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_38,
#line 891 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_39,
#line 891 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_40,
#line 891 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_41,
#line 891 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_42,
#line 891 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_43,
#line 891 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_44)
#line 891 "goal_expr_to_goal.m"
{
#line 912 "goal_expr_to_goal.m"
  while (MR_TRUE)
#line 912 "goal_expr_to_goal.m"
    {
#line 912 "goal_expr_to_goal.m"
      /* tailcall optimized into a loop */
#line 912 "goal_expr_to_goal.m"
      {
#line 912 "goal_expr_to_goal.m"
        MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 912 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalA_29;
#line 912 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalB_30;
#line 900 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal___Context_28;

#line 900 "goal_expr_to_goal.m"
        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 900 "goal_expr_to_goal.m"
          {
#line 900 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal___Context_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 900 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SubGoalA_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 900 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SubGoalB_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 908 "goal_expr_to_goal.m"
            {
#line 908 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__DisjStates1_31;
#line 908 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_45_45;
#line 908 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_46_46;
#line 908 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_47_47;
#line 908 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_48_48;
#line 908 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_49_49;

#line 906 "goal_expr_to_goal.m"
              {
#line 906 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalB_30, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__DisjStates0_20, &hlds__make_hlds__goal_expr_to_goal__DisjStates1_31, hlds__make_hlds__goal_expr_to_goal__SVarStateBefore_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_35, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_45_45, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_37, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_46_46, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_47_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_41, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_48_48, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_43, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_49_49);
              }
#line 909 "goal_expr_to_goal.m"
              /* direct tailcall eliminated */
#line 909 "goal_expr_to_goal.m"
              {
#line 909 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_18 = hlds__make_hlds__goal_expr_to_goal__SubGoalA_29;
#line 909 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__DisjStates0__tmp_copy_20 = hlds__make_hlds__goal_expr_to_goal__DisjStates1_31;
#line 909 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_45_45;
#line 909 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_46_46;
#line 909 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_47_47;
#line 909 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_48_48;
#line 909 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_49_49;

#line 909 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_43;
#line 909 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_41;
#line 909 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_39;
#line 909 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_37;
#line 909 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_35;
#line 909 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__DisjStates0_20 = hlds__make_hlds__goal_expr_to_goal__DisjStates0__tmp_copy_20;
#line 909 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__Goal_18 = hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_18;
#line 909 "goal_expr_to_goal.m"
              }
#line 909 "goal_expr_to_goal.m"
              continue;
#line 908 "goal_expr_to_goal.m"
            }
#line 900 "goal_expr_to_goal.m"
          }
#line 900 "goal_expr_to_goal.m"
        else
#line 915 "goal_expr_to_goal.m"
          {
#line 915 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal_32;
#line 915 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_33;
#line 915 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__DisjState_34;

#line 913 "goal_expr_to_goal.m"
            {
#line 913 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Goal_18, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal_32, hlds__make_hlds__goal_expr_to_goal__SVarStateBefore_22, &hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_33, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_35, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_36, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_37, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_38, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_41, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_42, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_43, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_44);
            }
#line 916 "goal_expr_to_goal.m"
            {
#line 916 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__DisjState_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 916 "goal_expr_to_goal.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__DisjState_34, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSGoal_32));
#line 916 "goal_expr_to_goal.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__DisjState_34, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_33));
#line 916 "goal_expr_to_goal.m"
            }
#line 917 "goal_expr_to_goal.m"
            {
#line 917 "goal_expr_to_goal.m"
              MR_Word base;
#line 917 "goal_expr_to_goal.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 917 "goal_expr_to_goal.m"
              *hlds__make_hlds__goal_expr_to_goal__DisjStates_21 = base;
#line 917 "goal_expr_to_goal.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__DisjState_34));
#line 917 "goal_expr_to_goal.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__DisjStates0_20));
#line 917 "goal_expr_to_goal.m"
            }
#line 915 "goal_expr_to_goal.m"
          }
#line 912 "goal_expr_to_goal.m"
      }
#line 912 "goal_expr_to_goal.m"
      break;
#line 912 "goal_expr_to_goal.m"
    }
#line 891 "goal_expr_to_goal.m"
}

#line 858 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__accumulate_par_conjuncts_17_p_0(
#line 858 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
#line 858 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_19,
#line 858 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_20,
#line 858 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35,
#line 858 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36,
#line 858 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37,
#line 858 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_38,
#line 858 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39,
#line 858 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_40,
#line 858 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41,
#line 858 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_42,
#line 858 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43,
#line 858 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_44,
#line 858 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45,
#line 858 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_46,
#line 858 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47,
#line 858 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_48)
#line 858 "goal_expr_to_goal.m"
{
#line 874 "goal_expr_to_goal.m"
  while (MR_TRUE)
#line 874 "goal_expr_to_goal.m"
    {
#line 874 "goal_expr_to_goal.m"
      /* tailcall optimized into a loop */
#line 874 "goal_expr_to_goal.m"
      {
#line 874 "goal_expr_to_goal.m"
        MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_19)) == (MR_mktag((MR_Integer) 1)));
#line 874 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalA_29;
#line 874 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalB_30;
#line 867 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal___Context_28;

#line 867 "goal_expr_to_goal.m"
        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 867 "goal_expr_to_goal.m"
          {
#line 867 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal___Context_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 0)));
#line 867 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SubGoalA_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 1)));
#line 867 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SubGoalB_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 2)));
#line 870 "goal_expr_to_goal.m"
            {
#line 870 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_49_49;
#line 870 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50_50;
#line 870 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_51_51;
#line 870 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52_52;
#line 870 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53_53;
#line 870 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_54_54;
#line 870 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_55_55;

#line 868 "goal_expr_to_goal.m"
              {
#line 868 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__accumulate_par_conjuncts_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__SubGoalA_29, hlds__make_hlds__goal_expr_to_goal__Renaming_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_49_49, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_51_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52_52, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_54_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_55_55);
              }
#line 871 "goal_expr_to_goal.m"
              /* direct tailcall eliminated */
#line 871 "goal_expr_to_goal.m"
              {
#line 871 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_19 = hlds__make_hlds__goal_expr_to_goal__SubGoalB_30;
#line 871 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0__tmp_copy_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_49_49;
#line 871 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0__tmp_copy_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50_50;
#line 871 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_51_51;
#line 871 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52_52;
#line 871 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53_53;
#line 871 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_45 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_54_54;
#line 871 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_47 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_55_55;

#line 871 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_47;
#line 871 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_45;
#line 871 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_43;
#line 871 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_41;
#line 871 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_39;
#line 871 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0__tmp_copy_37;
#line 871 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0__tmp_copy_35;
#line 871 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__Goal_19 = hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_19;
#line 871 "goal_expr_to_goal.m"
              }
#line 871 "goal_expr_to_goal.m"
              continue;
#line 870 "goal_expr_to_goal.m"
            }
#line 867 "goal_expr_to_goal.m"
          }
#line 867 "goal_expr_to_goal.m"
        else
#line 876 "goal_expr_to_goal.m"
          {
#line 876 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31;
#line 876 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32;
#line 877 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__V_33_33;
#line 881 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_34;
#line 878 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__V_69_69;

#line 875 "goal_expr_to_goal.m"
            {
#line 875 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__Goal_19, hlds__make_hlds__goal_expr_to_goal__Renaming_20, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_38, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_42, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_44, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_46, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_48);
            }
#line 877 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31, (MR_Integer) 0)));
#line 877 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31, (MR_Integer) 1)));
#line 878 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 878 "goal_expr_to_goal.m"
            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 878 "goal_expr_to_goal.m"
              {
#line 878 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32, (MR_Integer) 1)));
#line 878 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32, (MR_Integer) 2)));
#line 878 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_69_69 == (MR_Integer) 1);
#line 878 "goal_expr_to_goal.m"
              }
#line 881 "goal_expr_to_goal.m"
            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 879 "goal_expr_to_goal.m"
              {
#line 879 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_73_73 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 879 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__V_71_71;

#line 880 "goal_expr_to_goal.m"
                {
#line 880 "goal_expr_to_goal.m"
                  hlds__make_hlds__goal_expr_to_goal__V_71_71 = mercury__cord__from_list_1_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_73_73, hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_34);
                }
#line 879 "goal_expr_to_goal.m"
                {
#line 879 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36 = mercury__cord__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_73_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35, hlds__make_hlds__goal_expr_to_goal__V_71_71);
                }
#line 879 "goal_expr_to_goal.m"
              }
#line 881 "goal_expr_to_goal.m"
            else
#line 882 "goal_expr_to_goal.m"
              {
#line 882 "goal_expr_to_goal.m"
                {
#line 882 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31)));
                }
#line 882 "goal_expr_to_goal.m"
              }
#line 876 "goal_expr_to_goal.m"
          }
#line 874 "goal_expr_to_goal.m"
      }
#line 874 "goal_expr_to_goal.m"
      break;
#line 874 "goal_expr_to_goal.m"
    }
#line 858 "goal_expr_to_goal.m"
}

#line 827 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__accumulate_plain_conjuncts_17_p_0(
#line 827 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
#line 827 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_19,
#line 827 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_20,
#line 827 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35,
#line 827 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36,
#line 827 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37,
#line 827 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_38,
#line 827 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39,
#line 827 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_40,
#line 827 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41,
#line 827 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_42,
#line 827 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43,
#line 827 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_44,
#line 827 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45,
#line 827 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_46,
#line 827 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47,
#line 827 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_48)
#line 827 "goal_expr_to_goal.m"
{
#line 843 "goal_expr_to_goal.m"
  while (MR_TRUE)
#line 843 "goal_expr_to_goal.m"
    {
#line 843 "goal_expr_to_goal.m"
      /* tailcall optimized into a loop */
#line 843 "goal_expr_to_goal.m"
      {
#line 843 "goal_expr_to_goal.m"
        MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_19)) == (MR_mktag((MR_Integer) 0)));
#line 843 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalA_29;
#line 843 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalB_30;
#line 836 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal___Context_28;

#line 836 "goal_expr_to_goal.m"
        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 836 "goal_expr_to_goal.m"
          {
#line 836 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal___Context_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 0)));
#line 836 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SubGoalA_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 1)));
#line 836 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SubGoalB_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 2)));
#line 839 "goal_expr_to_goal.m"
            {
#line 839 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_49_49;
#line 839 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50_50;
#line 839 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_51_51;
#line 839 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52_52;
#line 839 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53_53;
#line 839 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_54_54;
#line 839 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_55_55;

#line 837 "goal_expr_to_goal.m"
              {
#line 837 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__accumulate_plain_conjuncts_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__SubGoalA_29, hlds__make_hlds__goal_expr_to_goal__Renaming_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_49_49, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_51_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52_52, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_54_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_55_55);
              }
#line 840 "goal_expr_to_goal.m"
              /* direct tailcall eliminated */
#line 840 "goal_expr_to_goal.m"
              {
#line 840 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_19 = hlds__make_hlds__goal_expr_to_goal__SubGoalB_30;
#line 840 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0__tmp_copy_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_49_49;
#line 840 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0__tmp_copy_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50_50;
#line 840 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_51_51;
#line 840 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52_52;
#line 840 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53_53;
#line 840 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_45 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_54_54;
#line 840 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_47 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_55_55;

#line 840 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_47;
#line 840 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_45;
#line 840 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_43;
#line 840 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_41;
#line 840 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_39;
#line 840 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0__tmp_copy_37;
#line 840 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0__tmp_copy_35;
#line 840 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__Goal_19 = hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_19;
#line 840 "goal_expr_to_goal.m"
              }
#line 840 "goal_expr_to_goal.m"
              continue;
#line 839 "goal_expr_to_goal.m"
            }
#line 836 "goal_expr_to_goal.m"
          }
#line 836 "goal_expr_to_goal.m"
        else
#line 845 "goal_expr_to_goal.m"
          {
#line 845 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31;
#line 845 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32;
#line 846 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__V_33_33;
#line 850 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_34;
#line 847 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__V_69_69;

#line 844 "goal_expr_to_goal.m"
            {
#line 844 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__Goal_19, hlds__make_hlds__goal_expr_to_goal__Renaming_20, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_37, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_38, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_41, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_42, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_43, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_44, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_45, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_46, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_48);
            }
#line 846 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31, (MR_Integer) 0)));
#line 846 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31, (MR_Integer) 1)));
#line 847 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 847 "goal_expr_to_goal.m"
            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 847 "goal_expr_to_goal.m"
              {
#line 847 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32, (MR_Integer) 1)));
#line 847 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__HLDSGoalExpr_32, (MR_Integer) 2)));
#line 847 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_69_69 == (MR_Integer) 0);
#line 847 "goal_expr_to_goal.m"
              }
#line 850 "goal_expr_to_goal.m"
            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 848 "goal_expr_to_goal.m"
              {
#line 848 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_73_73 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 848 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__V_71_71;

#line 849 "goal_expr_to_goal.m"
                {
#line 849 "goal_expr_to_goal.m"
                  hlds__make_hlds__goal_expr_to_goal__V_71_71 = mercury__cord__from_list_1_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_73_73, hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_34);
                }
#line 848 "goal_expr_to_goal.m"
                {
#line 848 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36 = mercury__cord__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_73_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35, hlds__make_hlds__goal_expr_to_goal__V_71_71);
                }
#line 848 "goal_expr_to_goal.m"
              }
#line 850 "goal_expr_to_goal.m"
            else
#line 851 "goal_expr_to_goal.m"
              {
#line 851 "goal_expr_to_goal.m"
                {
#line 851 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_36 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_HLDSConjunctsCord_0_35, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSGoal_31)));
                }
#line 851 "goal_expr_to_goal.m"
              }
#line 845 "goal_expr_to_goal.m"
          }
#line 843 "goal_expr_to_goal.m"
      }
#line 843 "goal_expr_to_goal.m"
      break;
#line 843 "goal_expr_to_goal.m"
    }
#line 827 "goal_expr_to_goal.m"
}

#line 737 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_p_0(
#line 737 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_18,
#line 737 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__FieldNames_19,
#line 737 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms_20,
#line 737 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_21,
#line 737 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22,
#line 737 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_55,
#line 737 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_56,
#line 737 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_57,
#line 737 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58,
#line 737 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_59,
#line 737 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_60,
#line 737 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_61,
#line 737 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_62,
#line 737 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_63,
#line 737 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_64,
#line 737 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_65,
#line 737 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66)
#line 737 "goal_expr_to_goal.m"
{
#line 746 "goal_expr_to_goal.m"
  {
#line 746 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 746 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ArgVars_29;
#line 746 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__FieldValueVar_33;
#line 746 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TermInputVar_34;
#line 746 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TermOutputVar_35;
#line 746 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_67_67;
#line 746 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_68_68;
#line 746 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_69_69;
#line 753 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__FieldValueVarPrime_30;
#line 753 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TermInputVarPrime_31;
#line 753 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TermOutputVarPrime_32;
#line 749 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_70_70;
#line 749 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_71_71;
#line 749 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_72_72;

#line 747 "goal_expr_to_goal.m"
    {
#line 747 "goal_expr_to_goal.m"
      hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(hlds__make_hlds__goal_expr_to_goal__ArgTerms_20, &hlds__make_hlds__goal_expr_to_goal__ArgVars_29, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_59, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_67_67, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_55, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_68_68, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_65, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_69_69);
    }
#line 749 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__ArgVars_29)) == (MR_mktag((MR_Integer) 1)));
#line 749 "goal_expr_to_goal.m"
    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 749 "goal_expr_to_goal.m"
      {
#line 749 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__FieldValueVarPrime_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgVars_29, (MR_Integer) 0)));
#line 749 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgVars_29, (MR_Integer) 1)));
#line 749 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_70_70)) == (MR_mktag((MR_Integer) 1)));
#line 749 "goal_expr_to_goal.m"
        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 749 "goal_expr_to_goal.m"
          {
#line 749 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__TermInputVarPrime_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_70_70, (MR_Integer) 0)));
#line 749 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_70_70, (MR_Integer) 1)));
#line 749 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_71_71)) == (MR_mktag((MR_Integer) 1)));
#line 749 "goal_expr_to_goal.m"
            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 749 "goal_expr_to_goal.m"
              {
#line 749 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__TermOutputVarPrime_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_71_71, (MR_Integer) 0)));
#line 749 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_71_71, (MR_Integer) 1)));
#line 749 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 749 "goal_expr_to_goal.m"
              }
#line 749 "goal_expr_to_goal.m"
          }
#line 749 "goal_expr_to_goal.m"
      }
#line 753 "goal_expr_to_goal.m"
    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 750 "goal_expr_to_goal.m"
      {
#line 750 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__FieldValueVar_33 = hlds__make_hlds__goal_expr_to_goal__FieldValueVarPrime_30;
#line 751 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__TermInputVar_34 = hlds__make_hlds__goal_expr_to_goal__TermInputVarPrime_31;
#line 752 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__TermOutputVar_35 = hlds__make_hlds__goal_expr_to_goal__TermOutputVarPrime_32;
#line 750 "goal_expr_to_goal.m"
      }
#line 753 "goal_expr_to_goal.m"
    else
#line 754 "goal_expr_to_goal.m"
      {
#line 754 "goal_expr_to_goal.m"
        {
#line 754 "goal_expr_to_goal.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.goal_expr_to_goal", (MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "arity != 3");
#line 754 "goal_expr_to_goal.m"
          return;
        }
#line 754 "goal_expr_to_goal.m"
      }
#line 788 "goal_expr_to_goal.m"
    if ((hlds__make_hlds__goal_expr_to_goal__AccessType_18 == (MR_Integer) 0))
#line 789 "goal_expr_to_goal.m"
      {
#line 789 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_78_78;
#line 789 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_79_79;
#line 789 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_80_80;
#line 789 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81;
#line 789 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_82_82;
#line 789 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_83_83;
#line 789 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_84_84;
#line 789 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_91_91;
#line 789 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_94_94;
#line 789 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_95_95;
#line 789 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_96_96;
#line 789 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_97_97;
#line 789 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__Functor_137;
#line 789 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_138;
#line 789 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_139;
#line 789 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__FieldArgContext_141;
#line 789 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__FuncName_146;
#line 789 "goal_expr_to_goal.m"
        MR_Integer hlds__make_hlds__goal_expr_to_goal__FuncArity_147;
#line 789 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__SimpleCallId_149;
#line 789 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_150;
#line 789 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__ArgContexts_151;
#line 792 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal___InnerSubContext_53;
#line 800 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_135;
#line 800 "goal_expr_to_goal.m"
        MR_Integer hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_136;
#line 797 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal___TC_54;

#line 790 "goal_expr_to_goal.m"
        {
#line 790 "goal_expr_to_goal.m"
          hlds__make_hlds__field_access__expand_dcg_field_extraction_goal_22_p_0(hlds__make_hlds__goal_expr_to_goal__Context_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__goal_expr_to_goal__FieldNames_19, hlds__make_hlds__goal_expr_to_goal__FieldValueVar_33, hlds__make_hlds__goal_expr_to_goal__TermInputVar_34, hlds__make_hlds__goal_expr_to_goal__TermOutputVar_35, &hlds__make_hlds__goal_expr_to_goal__Functor_137, &hlds__make_hlds__goal_expr_to_goal__V_78_78, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_139, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_68_68, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_79_79, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_57, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_80_80, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_67_67, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_82_82, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_63, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_83_83, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_69_69, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_84_84);
        }
#line 792 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_78_78, (MR_Integer) 0)));
#line 792 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal___InnerSubContext_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_78_78, (MR_Integer) 1)));
#line 795 "goal_expr_to_goal.m"
        {
#line 795 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_150 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 795 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_150, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Functor_137));
#line 795 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 795 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_150, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 795 "goal_expr_to_goal.m"
        }
#line 797 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_138)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_138, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 797 "goal_expr_to_goal.m"
        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 797 "goal_expr_to_goal.m"
          {
#line 797 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_138, (MR_Integer) 1)));
#line 797 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_136 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_138, (MR_Integer) 2)));
#line 797 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal___TC_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_138, (MR_Integer) 3)));
#line 798 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__FuncName_146 = hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_135;
#line 799 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__FuncArity_147 = hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_136;
#line 797 "goal_expr_to_goal.m"
          }
#line 797 "goal_expr_to_goal.m"
        else
#line 801 "goal_expr_to_goal.m"
          {
#line 801 "goal_expr_to_goal.m"
            {
#line 801 "goal_expr_to_goal.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.goal_expr_to_goal", (MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "not cons");
#line 801 "goal_expr_to_goal.m"
              return;
            }
#line 801 "goal_expr_to_goal.m"
          }
#line 804 "goal_expr_to_goal.m"
        {
#line 804 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__SimpleCallId_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 804 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_149, 0) = ((MR_Box) ((MR_Integer) 1));
#line 804 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_149, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FuncName_146));
#line 804 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_149, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FuncArity_147));
#line 804 "goal_expr_to_goal.m"
        }
#line 805 "goal_expr_to_goal.m"
        {
#line 805 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 805 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_91_91, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SimpleCallId_149));
#line 805 "goal_expr_to_goal.m"
        }
#line 805 "goal_expr_to_goal.m"
        {
#line 805 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__FieldArgContext_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 805 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__FieldArgContext_141, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_91_91));
#line 805 "goal_expr_to_goal.m"
        }
#line 812 "goal_expr_to_goal.m"
        {
#line 812 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 812 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_94_94, 0) = ((MR_Box) ((MR_Integer) 2));
#line 812 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_94_94, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FieldArgContext_141));
#line 812 "goal_expr_to_goal.m"
        }
#line 813 "goal_expr_to_goal.m"
        {
#line 813 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 813 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_96_96, 0) = ((MR_Box) ((MR_Integer) 1));
#line 813 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_96_96, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_150));
#line 813 "goal_expr_to_goal.m"
        }
#line 815 "goal_expr_to_goal.m"
        {
#line 815 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 815 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_97_97, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_96_96));
#line 815 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 815 "goal_expr_to_goal.m"
        }
#line 813 "goal_expr_to_goal.m"
        {
#line 813 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 813 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_95_95, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_96_96));
#line 813 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_95_95, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_97_97));
#line 813 "goal_expr_to_goal.m"
        }
#line 812 "goal_expr_to_goal.m"
        {
#line 812 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__ArgContexts_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 812 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgContexts_151, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_94_94));
#line 812 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgContexts_151, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_95_95));
#line 812 "goal_expr_to_goal.m"
        }
#line 816 "goal_expr_to_goal.m"
        {
#line 816 "goal_expr_to_goal.m"
          hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_p_0(hlds__make_hlds__goal_expr_to_goal__ArgVars_29, hlds__make_hlds__goal_expr_to_goal__ArgTerms_20, hlds__make_hlds__goal_expr_to_goal__ArgContexts_151, hlds__make_hlds__goal_expr_to_goal__Context_21, hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_139, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_79_79, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_80_80, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_82_82, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_62, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_83_83, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_64, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_84_84, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66);
#line 816 "goal_expr_to_goal.m"
          return;
        }
#line 789 "goal_expr_to_goal.m"
      }
#line 788 "goal_expr_to_goal.m"
    else
#line 757 "goal_expr_to_goal.m"
      {
#line 757 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__Functor_36;
#line 757 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_37;
#line 757 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__InnermostSubContext_38;
#line 757 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_39;
#line 757 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__FieldArgContext_41;
#line 757 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_43;
#line 757 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__FuncName_47;
#line 757 "goal_expr_to_goal.m"
        MR_Integer hlds__make_hlds__goal_expr_to_goal__FuncArity_48;
#line 757 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__SimpleCallId_50;
#line 757 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_51;
#line 757 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__ArgContexts_52;
#line 757 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_108_108;
#line 757 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_109_109;
#line 757 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_110_110;
#line 757 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_111_111;
#line 757 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_112_112;
#line 757 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_113_113;
#line 757 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_114_114;
#line 757 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_122_122;
#line 757 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_123_123;
#line 757 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_124_124;
#line 757 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_125_125;
#line 757 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_126_126;
#line 757 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_127_127;
#line 771 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_44;
#line 771 "goal_expr_to_goal.m"
        MR_Integer hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_45;
#line 768 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal___TypeCtor_46;

#line 758 "goal_expr_to_goal.m"
        {
#line 758 "goal_expr_to_goal.m"
          hlds__make_hlds__field_access__expand_set_field_function_call_22_p_0(hlds__make_hlds__goal_expr_to_goal__Context_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__goal_expr_to_goal__FieldNames_19, hlds__make_hlds__goal_expr_to_goal__FieldValueVar_33, hlds__make_hlds__goal_expr_to_goal__TermInputVar_34, hlds__make_hlds__goal_expr_to_goal__TermOutputVar_35, &hlds__make_hlds__goal_expr_to_goal__Functor_36, &hlds__make_hlds__goal_expr_to_goal__V_108_108, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_68_68, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_109_109, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_57, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_110_110, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_67_67, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_111_111, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_112_112, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_63, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_113_113, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_69_69, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_114_114);
        }
#line 760 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_108_108, (MR_Integer) 0)));
#line 760 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__InnermostSubContext_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_108_108, (MR_Integer) 1)));
#line 764 "goal_expr_to_goal.m"
        {
#line 764 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__FieldArgContext_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 764 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__FieldArgContext_41, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_37));
#line 764 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__FieldArgContext_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 764 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__FieldArgContext_41, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnermostSubContext_38));
#line 764 "goal_expr_to_goal.m"
        }
#line 767 "goal_expr_to_goal.m"
        {
#line 767 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 767 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_43, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Functor_36));
#line 767 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 767 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_43, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 767 "goal_expr_to_goal.m"
        }
#line 768 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Functor_36)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Functor_36, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 768 "goal_expr_to_goal.m"
        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 768 "goal_expr_to_goal.m"
          {
#line 768 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Functor_36, (MR_Integer) 1)));
#line 768 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_45 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Functor_36, (MR_Integer) 2)));
#line 768 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal___TypeCtor_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Functor_36, (MR_Integer) 3)));
#line 769 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__FuncName_47 = hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_44;
#line 770 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__FuncArity_48 = hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_45;
#line 768 "goal_expr_to_goal.m"
          }
#line 768 "goal_expr_to_goal.m"
        else
#line 772 "goal_expr_to_goal.m"
          {
#line 772 "goal_expr_to_goal.m"
            {
#line 772 "goal_expr_to_goal.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.goal_expr_to_goal", (MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "not cons");
#line 772 "goal_expr_to_goal.m"
              return;
            }
#line 772 "goal_expr_to_goal.m"
          }
#line 777 "goal_expr_to_goal.m"
        {
#line 777 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__SimpleCallId_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 777 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_50, 0) = ((MR_Box) ((MR_Integer) 1));
#line 777 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_50, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FuncName_47));
#line 777 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_50, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FuncArity_48));
#line 777 "goal_expr_to_goal.m"
        }
#line 778 "goal_expr_to_goal.m"
        {
#line 778 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 778 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_122_122, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SimpleCallId_50));
#line 778 "goal_expr_to_goal.m"
        }
#line 778 "goal_expr_to_goal.m"
        {
#line 778 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 778 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_51, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_122_122));
#line 778 "goal_expr_to_goal.m"
        }
#line 781 "goal_expr_to_goal.m"
        {
#line 781 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 781 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_123_123, 0) = ((MR_Box) ((MR_Integer) 2));
#line 781 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_123_123, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FieldArgContext_41));
#line 781 "goal_expr_to_goal.m"
        }
#line 782 "goal_expr_to_goal.m"
        {
#line 782 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_125_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 782 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_125_125, 0) = ((MR_Box) ((MR_Integer) 1));
#line 782 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_125_125, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_43));
#line 782 "goal_expr_to_goal.m"
        }
#line 783 "goal_expr_to_goal.m"
        {
#line 783 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 783 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_127_127, 0) = ((MR_Box) ((MR_Integer) 3));
#line 783 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_127_127, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_51));
#line 783 "goal_expr_to_goal.m"
        }
#line 784 "goal_expr_to_goal.m"
        {
#line 784 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 784 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_126_126, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_127_127));
#line 784 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_126_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 784 "goal_expr_to_goal.m"
        }
#line 782 "goal_expr_to_goal.m"
        {
#line 782 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 782 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_124_124, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_125_125));
#line 782 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_124_124, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_126_126));
#line 782 "goal_expr_to_goal.m"
        }
#line 781 "goal_expr_to_goal.m"
        {
#line 781 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__ArgContexts_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 781 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgContexts_52, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_123_123));
#line 781 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgContexts_52, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_124_124));
#line 781 "goal_expr_to_goal.m"
        }
#line 785 "goal_expr_to_goal.m"
        {
#line 785 "goal_expr_to_goal.m"
          hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_p_0(hlds__make_hlds__goal_expr_to_goal__ArgVars_29, hlds__make_hlds__goal_expr_to_goal__ArgTerms_20, hlds__make_hlds__goal_expr_to_goal__ArgContexts_52, hlds__make_hlds__goal_expr_to_goal__Context_21, hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_39, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_109_109, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_110_110, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_111_111, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_112_112, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_62, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_113_113, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_64, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_114_114, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66);
#line 785 "goal_expr_to_goal.m"
          return;
        }
#line 757 "goal_expr_to_goal.m"
      }
#line 746 "goal_expr_to_goal.m"
  }
#line 737 "goal_expr_to_goal.m"
}

#line 684 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_p_0(
#line 684 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
#line 684 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_19,
#line 684 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20,
#line 684 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_21,
#line 684 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22,
#line 684 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_46,
#line 684 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_47,
#line 684 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_48,
#line 684 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_49,
#line 684 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_50,
#line 684 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_51,
#line 684 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_52,
#line 684 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53,
#line 684 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_54,
#line 684 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_55,
#line 684 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_56,
#line 684 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_57)
#line 684 "goal_expr_to_goal.m"
{
#line 693 "goal_expr_to_goal.m"
  {
#line 693 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 693 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_29;
#line 725 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__FieldNameTerm_34;
#line 725 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__FieldValueTerm_35;
#line 725 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_59_59;
#line 696 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__LHSTerm_30;
#line 696 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__RHSTerm_31;
#line 696 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_58_58;
#line 696 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_60_60;
#line 696 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_61_61;
#line 696 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TermInputTerm_32;
#line 696 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TermOutputTerm_33;

#line 694 "goal_expr_to_goal.m"
    {
#line 694 "goal_expr_to_goal.m"
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_21, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_29);
    }
#line 696 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20)) == (MR_mktag((MR_Integer) 1)));
#line 696 "goal_expr_to_goal.m"
    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 696 "goal_expr_to_goal.m"
      {
#line 696 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__LHSTerm_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20, (MR_Integer) 0)));
#line 696 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20, (MR_Integer) 1)));
#line 696 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_58_58)) == (MR_mktag((MR_Integer) 1)));
#line 696 "goal_expr_to_goal.m"
        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 696 "goal_expr_to_goal.m"
          {
#line 696 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__RHSTerm_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_58_58, (MR_Integer) 0)));
#line 696 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_58_58, (MR_Integer) 1)));
#line 696 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_59_59)) == (MR_mktag((MR_Integer) 1)));
#line 696 "goal_expr_to_goal.m"
            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 696 "goal_expr_to_goal.m"
              {
#line 696 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__TermInputTerm_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_59_59, (MR_Integer) 0)));
#line 696 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_59_59, (MR_Integer) 1)));
#line 696 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_60_60)) == (MR_mktag((MR_Integer) 1)));
#line 696 "goal_expr_to_goal.m"
                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 696 "goal_expr_to_goal.m"
                  {
#line 696 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__TermOutputTerm_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_60_60, (MR_Integer) 0)));
#line 696 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_60_60, (MR_Integer) 1)));
#line 696 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_61_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 696 "goal_expr_to_goal.m"
                    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 701 "goal_expr_to_goal.m"
                      {
#line 701 "goal_expr_to_goal.m"
                        if ((hlds__make_hlds__goal_expr_to_goal__AccessType_19 == (MR_Integer) 0))
#line 698 "goal_expr_to_goal.m"
                          {
#line 699 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__FieldNameTerm_34 = hlds__make_hlds__goal_expr_to_goal__RHSTerm_31;
#line 700 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__FieldValueTerm_35 = hlds__make_hlds__goal_expr_to_goal__LHSTerm_30;
#line 698 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
#line 698 "goal_expr_to_goal.m"
                          }
#line 701 "goal_expr_to_goal.m"
                        else
#line 702 "goal_expr_to_goal.m"
                          {
#line 702 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_62_62;
#line 702 "goal_expr_to_goal.m"
                            MR_String hlds__make_hlds__goal_expr_to_goal__V_63_63;
#line 702 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_64_64;
#line 702 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_65_65;
#line 703 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_37_37;

#line 703 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__LHSTerm_30)) == (MR_mktag((MR_Integer) 0)));
#line 703 "goal_expr_to_goal.m"
                            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 703 "goal_expr_to_goal.m"
                              {
#line 703 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm_30, (MR_Integer) 0)));
#line 703 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm_30, (MR_Integer) 1)));
#line 703 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm_30, (MR_Integer) 2)));
#line 703 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_62_62)) == (MR_mktag((MR_Integer) 0)));
#line 703 "goal_expr_to_goal.m"
                                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 703 "goal_expr_to_goal.m"
                                  {
#line 703 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__V_63_63 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_62_62, (MR_Integer) 0)));
#line 703 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_63_63, (MR_String) "^") == 0);
#line 702 "goal_expr_to_goal.m"
                                    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 702 "goal_expr_to_goal.m"
                                      {
#line 703 "goal_expr_to_goal.m"
                                        hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_64_64)) == (MR_mktag((MR_Integer) 1)));
#line 703 "goal_expr_to_goal.m"
                                        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 703 "goal_expr_to_goal.m"
                                          {
#line 703 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__FieldNameTerm_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_64_64, (MR_Integer) 0)));
#line 703 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_64_64, (MR_Integer) 1)));
#line 703 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_65_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 702 "goal_expr_to_goal.m"
                                            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 702 "goal_expr_to_goal.m"
                                              {
#line 705 "goal_expr_to_goal.m"
                                                hlds__make_hlds__goal_expr_to_goal__FieldValueTerm_35 = hlds__make_hlds__goal_expr_to_goal__RHSTerm_31;
#line 705 "goal_expr_to_goal.m"
                                                hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
#line 702 "goal_expr_to_goal.m"
                                              }
#line 703 "goal_expr_to_goal.m"
                                          }
#line 702 "goal_expr_to_goal.m"
                                      }
#line 703 "goal_expr_to_goal.m"
                                  }
#line 703 "goal_expr_to_goal.m"
                              }
#line 702 "goal_expr_to_goal.m"
                          }
#line 701 "goal_expr_to_goal.m"
                      }
#line 696 "goal_expr_to_goal.m"
                  }
#line 696 "goal_expr_to_goal.m"
              }
#line 696 "goal_expr_to_goal.m"
          }
#line 696 "goal_expr_to_goal.m"
      }
#line 725 "goal_expr_to_goal.m"
    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 708 "goal_expr_to_goal.m"
      {
#line 708 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__ContextPieces_38;
#line 708 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeFieldNames_39;

#line 708 "goal_expr_to_goal.m"
        {
#line 708 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__ContextPieces_38 = hlds__make_hlds__goal_expr_to_goal__dcg_field_error_context_pieces_1_f_0(hlds__make_hlds__goal_expr_to_goal__AccessType_19);
        }
#line 709 "goal_expr_to_goal.m"
        {
#line 709 "goal_expr_to_goal.m"
          hlds__make_hlds__field_access__parse_field_list_4_p_0(hlds__make_hlds__goal_expr_to_goal__FieldNameTerm_34, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_50, hlds__make_hlds__goal_expr_to_goal__ContextPieces_38, &hlds__make_hlds__goal_expr_to_goal__MaybeFieldNames_39);
        }
#line 718 "goal_expr_to_goal.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__MaybeFieldNames_39)) == (MR_mktag((MR_Integer) 0))))
#line 719 "goal_expr_to_goal.m"
          {
#line 719 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__FieldNamesSpecs_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MaybeFieldNames_39, (MR_Integer) 0)));
#line 719 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66_66;

#line 720 "goal_expr_to_goal.m"
            {
#line 720 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66_66 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__goal_expr_to_goal__FieldNamesSpecs_42, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_56);
            }
#line 721 "goal_expr_to_goal.m"
            {
#line 721 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_p_0((MR_String) "^", hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20, hlds__make_hlds__goal_expr_to_goal__GoalInfo_29, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_46, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66_66, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_57);
            }
#line 723 "goal_expr_to_goal.m"
            {
#line 723 "goal_expr_to_goal.m"
              hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_55);
            }
#line 719 "goal_expr_to_goal.m"
            *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_49 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_48;
#line 719 "goal_expr_to_goal.m"
            *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_52;
#line 719 "goal_expr_to_goal.m"
          }
#line 718 "goal_expr_to_goal.m"
        else
#line 712 "goal_expr_to_goal.m"
          {
#line 712 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__FieldNames_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeFieldNames_39, (MR_Integer) 0)));
#line 712 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms_41;
#line 712 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_76_76;

#line 713 "goal_expr_to_goal.m"
            {
#line 713 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__ArgTerms_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 713 "goal_expr_to_goal.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms_41, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FieldValueTerm_35));
#line 713 "goal_expr_to_goal.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms_41, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_59_59));
#line 713 "goal_expr_to_goal.m"
            }
#line 714 "goal_expr_to_goal.m"
            {
#line 714 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_p_0(hlds__make_hlds__goal_expr_to_goal__AccessType_19, hlds__make_hlds__goal_expr_to_goal__FieldNames_40, hlds__make_hlds__goal_expr_to_goal__ArgTerms_41, hlds__make_hlds__goal_expr_to_goal__Context_21, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_46, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_76_76, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_48, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_49, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_52, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_55, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_57);
            }
#line 717 "goal_expr_to_goal.m"
            {
#line 717 "goal_expr_to_goal.m"
              hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_76_76, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_47);
#line 717 "goal_expr_to_goal.m"
              return;
            }
#line 712 "goal_expr_to_goal.m"
          }
#line 708 "goal_expr_to_goal.m"
      }
#line 725 "goal_expr_to_goal.m"
    else
#line 727 "goal_expr_to_goal.m"
      {
#line 727 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__Msg_44;
#line 727 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__Spec_45;
#line 727 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_86_86;
#line 727 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_105_105;

#line 726 "goal_expr_to_goal.m"
        {
#line 726 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_p_0((MR_String) "^", hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20, hlds__make_hlds__goal_expr_to_goal__GoalInfo_29, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_46, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_56, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_86_86);
        }
#line 728 "goal_expr_to_goal.m"
        {
#line 728 "goal_expr_to_goal.m"
          hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_55);
        }
#line 732 "goal_expr_to_goal.m"
        {
#line 732 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__Msg_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 732 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Msg_44, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_21));
#line 732 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Msg_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[28])));
#line 732 "goal_expr_to_goal.m"
        }
#line 733 "goal_expr_to_goal.m"
        {
#line 733 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 733 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_105_105, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Msg_44));
#line 733 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 733 "goal_expr_to_goal.m"
        }
#line 733 "goal_expr_to_goal.m"
        {
#line 733 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__Spec_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 733 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 733 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 733 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_45, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_105_105));
#line 733 "goal_expr_to_goal.m"
        }
#line 734 "goal_expr_to_goal.m"
        {
#line 734 "goal_expr_to_goal.m"
          MR_Word base;
#line 734 "goal_expr_to_goal.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 734 "goal_expr_to_goal.m"
          *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_57 = base;
#line 734 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Spec_45));
#line 734 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_86_86));
#line 734 "goal_expr_to_goal.m"
        }
#line 727 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_53 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_52;
#line 727 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_49 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_48;
#line 727 "goal_expr_to_goal.m"
      }
#line 693 "goal_expr_to_goal.m"
  }
#line 684 "goal_expr_to_goal.m"
}

#line 672 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0_1(
#line 672 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__closure_arg,
#line 672 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 672 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2,
#line 672 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3,
#line 672 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_4,
#line 672 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_5,
#line 672 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_6,
#line 672 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_7,
#line 672 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_8)
#line 672 "goal_expr_to_goal.m"
{
#line 672 "goal_expr_to_goal.m"
  {
#line 672 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__closure = hlds__make_hlds__goal_expr_to_goal__closure_arg;
#line 672 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv3_HeadVar__3_3;
#line 672 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv2_HeadVar__5_5;
#line 672 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv1_HeadVar__7_7;
#line 672 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__9_9;

#line 672 "goal_expr_to_goal.m"
    {
#line 672 "goal_expr_to_goal.m"
      hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1), &hlds__make_hlds__goal_expr_to_goal__conv3_HeadVar__3_3, ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3), &hlds__make_hlds__goal_expr_to_goal__conv2_HeadVar__5_5, ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_5), &hlds__make_hlds__goal_expr_to_goal__conv1_HeadVar__7_7, ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_7), &hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__9_9);
    }
#line 672 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv3_HeadVar__3_3));
#line 672 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv2_HeadVar__5_5));
#line 672 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_6 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv1_HeadVar__7_7));
#line 672 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_8 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__9_9));
#line 672 "goal_expr_to_goal.m"
  }
#line 672 "goal_expr_to_goal.m"
}

#line 655 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(
#line 655 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_23,
#line 655 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars0_24,
#line 655 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars0_25,
#line 655 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars0_26,
#line 655 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars0_27,
#line 655 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_28,
#line 655 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_29,
#line 655 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__QuantVars_30,
#line 655 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_31,
#line 655 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HLDSGoal_32,
#line 655 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_47,
#line 655 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_48,
#line 655 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_49,
#line 655 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_50,
#line 655 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_51,
#line 655 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52,
#line 655 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_53,
#line 655 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_54,
#line 655 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_55,
#line 655 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_56,
#line 655 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_57,
#line 655 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_58)
#line 655 "goal_expr_to_goal.m"
{
#line 667 "goal_expr_to_goal.m"
  {
#line 667 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_88_88 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeInfo_98_98;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_99_99;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_39;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars1_40;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars1_41;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars1_42;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__OldStateVars_43;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars_44;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__NewStateVars_45;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars_46;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_63_63;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_64_64;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_65_65;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66_66;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_68_68;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_69_69;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_70_70;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_71_71;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_73_73;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_76_76;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_78_78;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_79_79;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_80_80;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_85_85;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_86_86;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_87_87;
#line 672 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv6_STATE_VARIABLE_VarSet_64_64;
#line 672 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv5_STATE_VARIABLE_SVarState_65_65;
#line 672 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv4_STATE_VARIABLE_Specs_66_66;
#line 674 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv9_STATE_VARIABLE_VarSet_68_68;
#line 674 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv8_STATE_VARIABLE_SVarState_69_69;
#line 674 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv7_STATE_VARIABLE_Specs_70_70;
#line 678 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv12_STATE_VARIABLE_VarSet_78_78;
#line 678 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv11_STATE_VARIABLE_SVarState_79_79;
#line 678 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv10_STATE_VARIABLE_Specs_80_80;
#line 680 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv15_STATE_VARIABLE_VarSet_52;
#line 680 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv14_STATE_VARIABLE_SVarState_48;
#line 680 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv13_STATE_VARIABLE_Specs_58;

#line 668 "goal_expr_to_goal.m"
    {
#line 668 "goal_expr_to_goal.m"
      parse_tree__prog_data__rename_var_list_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_88_88, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_29, hlds__make_hlds__goal_expr_to_goal__Vars0_24, &hlds__make_hlds__goal_expr_to_goal__Vars_39);
    }
#line 669 "goal_expr_to_goal.m"
    {
#line 669 "goal_expr_to_goal.m"
      parse_tree__prog_data__rename_var_list_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_88_88, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_29, hlds__make_hlds__goal_expr_to_goal__StateVars0_25, &hlds__make_hlds__goal_expr_to_goal__StateVars1_40);
    }
#line 670 "goal_expr_to_goal.m"
    {
#line 670 "goal_expr_to_goal.m"
      parse_tree__prog_data__rename_var_list_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_88_88, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_29, hlds__make_hlds__goal_expr_to_goal__DotSVars0_26, &hlds__make_hlds__goal_expr_to_goal__DotSVars1_41);
    }
#line 671 "goal_expr_to_goal.m"
    {
#line 671 "goal_expr_to_goal.m"
      parse_tree__prog_data__rename_var_list_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_88_88, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_29, hlds__make_hlds__goal_expr_to_goal__ColonSVars0_27, &hlds__make_hlds__goal_expr_to_goal__ColonSVars1_42);
    }
#line 672 "goal_expr_to_goal.m"
    {
#line 672 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 672 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_63_63, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_5[0]));
#line 672 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_63_63, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0_1));
#line 672 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 672 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_63_63, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 672 "goal_expr_to_goal.m"
    }
#line 4699 "hlds.make_hlds.goal_expr_to_goal.c"
    hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97 = (MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0];
#line 4701 "hlds.make_hlds.goal_expr_to_goal.c"
    hlds__make_hlds__goal_expr_to_goal__TypeInfo_98_98 = (MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[2];
#line 4703 "hlds.make_hlds.goal_expr_to_goal.c"
    hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_99_99 = (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0;
#line 4705 "hlds.make_hlds.goal_expr_to_goal.c"
    hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100 = (MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3];
#line 672 "goal_expr_to_goal.m"
    {
#line 672 "goal_expr_to_goal.m"
      mercury__list__map_foldl3_9_p_1(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_98_98, hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_99_99, hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100, hlds__make_hlds__goal_expr_to_goal__V_63_63, hlds__make_hlds__goal_expr_to_goal__StateVars1_40, &hlds__make_hlds__goal_expr_to_goal__OldStateVars_43, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_51)), &hlds__make_hlds__goal_expr_to_goal__conv6_STATE_VARIABLE_VarSet_64_64, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_47)), &hlds__make_hlds__goal_expr_to_goal__conv5_STATE_VARIABLE_SVarState_65_65, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_57)), &hlds__make_hlds__goal_expr_to_goal__conv4_STATE_VARIABLE_Specs_66_66);
    }
#line 672 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_64_64 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv6_STATE_VARIABLE_VarSet_64_64);
#line 672 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_65_65 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv5_STATE_VARIABLE_SVarState_65_65);
#line 672 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66_66 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv4_STATE_VARIABLE_Specs_66_66);
#line 674 "goal_expr_to_goal.m"
    {
#line 674 "goal_expr_to_goal.m"
      mercury__list__map_foldl3_9_p_1(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_98_98, hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_99_99, hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100, hlds__make_hlds__goal_expr_to_goal__V_63_63, hlds__make_hlds__goal_expr_to_goal__DotSVars1_41, &hlds__make_hlds__goal_expr_to_goal__DotSVars_44, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_64_64)), &hlds__make_hlds__goal_expr_to_goal__conv9_STATE_VARIABLE_VarSet_68_68, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_65_65)), &hlds__make_hlds__goal_expr_to_goal__conv8_STATE_VARIABLE_SVarState_69_69, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66_66)), &hlds__make_hlds__goal_expr_to_goal__conv7_STATE_VARIABLE_Specs_70_70);
    }
#line 674 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_68_68 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv9_STATE_VARIABLE_VarSet_68_68);
#line 674 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_69_69 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv8_STATE_VARIABLE_SVarState_69_69);
#line 674 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_70_70 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv7_STATE_VARIABLE_Specs_70_70);
#line 676 "goal_expr_to_goal.m"
    {
#line 676 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__Goal_31, hlds__make_hlds__goal_expr_to_goal__Renaming_29, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_32, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_69_69, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_71_71, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_49, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_68_68, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_73_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_55, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_70_70, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_76_76);
    }
#line 678 "goal_expr_to_goal.m"
    {
#line 678 "goal_expr_to_goal.m"
      mercury__list__map_foldl3_9_p_1(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_98_98, hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_99_99, hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100, hlds__make_hlds__goal_expr_to_goal__V_63_63, hlds__make_hlds__goal_expr_to_goal__StateVars1_40, &hlds__make_hlds__goal_expr_to_goal__NewStateVars_45, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_73_73)), &hlds__make_hlds__goal_expr_to_goal__conv12_STATE_VARIABLE_VarSet_78_78, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_71_71)), &hlds__make_hlds__goal_expr_to_goal__conv11_STATE_VARIABLE_SVarState_79_79, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_76_76)), &hlds__make_hlds__goal_expr_to_goal__conv10_STATE_VARIABLE_Specs_80_80);
    }
#line 678 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_78_78 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv12_STATE_VARIABLE_VarSet_78_78);
#line 678 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_79_79 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv11_STATE_VARIABLE_SVarState_79_79);
#line 678 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_80_80 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv10_STATE_VARIABLE_Specs_80_80);
#line 680 "goal_expr_to_goal.m"
    {
#line 680 "goal_expr_to_goal.m"
      mercury__list__map_foldl3_9_p_1(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__TypeInfo_98_98, hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_99_99, hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100, hlds__make_hlds__goal_expr_to_goal__V_63_63, hlds__make_hlds__goal_expr_to_goal__ColonSVars1_42, &hlds__make_hlds__goal_expr_to_goal__ColonSVars_46, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_78_78)), &hlds__make_hlds__goal_expr_to_goal__conv15_STATE_VARIABLE_VarSet_52, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_79_79)), &hlds__make_hlds__goal_expr_to_goal__conv14_STATE_VARIABLE_SVarState_48, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_80_80)), &hlds__make_hlds__goal_expr_to_goal__conv13_STATE_VARIABLE_Specs_58);
    }
#line 680 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv15_STATE_VARIABLE_VarSet_52);
#line 680 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_48 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv14_STATE_VARIABLE_SVarState_48);
#line 680 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_58 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv13_STATE_VARIABLE_Specs_58);
#line 682 "goal_expr_to_goal.m"
    {
#line 682 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_87_87 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__DotSVars_44, hlds__make_hlds__goal_expr_to_goal__ColonSVars_46);
    }
#line 682 "goal_expr_to_goal.m"
    {
#line 682 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_86_86 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__NewStateVars_45, hlds__make_hlds__goal_expr_to_goal__V_87_87);
    }
#line 682 "goal_expr_to_goal.m"
    {
#line 682 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_85_85 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__OldStateVars_43, hlds__make_hlds__goal_expr_to_goal__V_86_86);
    }
#line 682 "goal_expr_to_goal.m"
    {
#line 682 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__QuantVars_30 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeInfo_97_97, hlds__make_hlds__goal_expr_to_goal__Vars_39, hlds__make_hlds__goal_expr_to_goal__V_85_85);
    }
#line 667 "goal_expr_to_goal.m"
  }
#line 655 "goal_expr_to_goal.m"
}

#line 641 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_4_p_0(
#line 641 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_5,
#line 641 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVar_6,
#line 641 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__GetGoal_7,
#line 641 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__SetGoal_8)
#line 641 "goal_expr_to_goal.m"
{
#line 644 "goal_expr_to_goal.m"
  {
#line 644 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 644 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__IO_9;
#line 644 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GetPredName_10;
#line 644 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SetPredName_11;
#line 644 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SetVar_12;
#line 644 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__UseVar_13;
#line 644 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_20_20;
#line 644 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_21_21;
#line 644 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_28_28;
#line 644 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_30_30;

#line 645 "goal_expr_to_goal.m"
    {
#line 645 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__IO_9 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
    }
#line 646 "goal_expr_to_goal.m"
    {
#line 646 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__GetPredName_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 646 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__GetPredName_10, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IO_9));
#line 646 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__GetPredName_10, 1) = ((MR_Box) ((MR_String) "unsafe_get_io_state"));
#line 646 "goal_expr_to_goal.m"
    }
#line 647 "goal_expr_to_goal.m"
    {
#line 647 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__SetPredName_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 647 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SetPredName_11, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IO_9));
#line 647 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SetPredName_11, 1) = ((MR_Box) ((MR_String) "unsafe_set_io_state"));
#line 647 "goal_expr_to_goal.m"
    }
#line 648 "goal_expr_to_goal.m"
    {
#line 648 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 648 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_21_21, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVar_6));
#line 648 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_21_21, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_5));
#line 648 "goal_expr_to_goal.m"
    }
#line 648 "goal_expr_to_goal.m"
    {
#line 648 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 648 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_20_20, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_21_21));
#line 648 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 648 "goal_expr_to_goal.m"
    }
#line 648 "goal_expr_to_goal.m"
    {
#line 648 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__SetVar_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 648 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_12, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[3]));
#line 648 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_12, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_20_20));
#line 648 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_12, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_5));
#line 648 "goal_expr_to_goal.m"
    }
#line 649 "goal_expr_to_goal.m"
    {
#line 649 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__UseVar_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 649 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_13, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[4]));
#line 649 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_13, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_20_20));
#line 649 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_13, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_5));
#line 649 "goal_expr_to_goal.m"
    }
#line 652 "goal_expr_to_goal.m"
    {
#line 652 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 652 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_28_28, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SetVar_12));
#line 652 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 652 "goal_expr_to_goal.m"
    }
#line 652 "goal_expr_to_goal.m"
    {
#line 652 "goal_expr_to_goal.m"
      MR_Word base;
#line 652 "goal_expr_to_goal.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 652 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__GetGoal_7 = base;
#line 652 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 652 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_5));
#line 652 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GetPredName_10));
#line 652 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_28_28));
#line 652 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) ((MR_Integer) 1));
#line 652 "goal_expr_to_goal.m"
    }
#line 653 "goal_expr_to_goal.m"
    {
#line 653 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 653 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_30_30, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__UseVar_13));
#line 653 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 653 "goal_expr_to_goal.m"
    }
#line 653 "goal_expr_to_goal.m"
    {
#line 653 "goal_expr_to_goal.m"
      MR_Word base;
#line 653 "goal_expr_to_goal.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 653 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__SetGoal_8 = base;
#line 653 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 653 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_5));
#line 653 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SetPredName_11));
#line 653 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_30_30));
#line 653 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) ((MR_Integer) 2));
#line 653 "goal_expr_to_goal.m"
    }
#line 644 "goal_expr_to_goal.m"
  }
#line 641 "goal_expr_to_goal.m"
}

#line 623 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__extract_trace_mutable_var_7_p_0(
#line 623 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_8,
#line 623 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__VarSet_9,
#line 623 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Mutable_10,
#line 623 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__MutableHLDS_11,
#line 623 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__StateVar_12,
#line 623 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__GetGoal_13,
#line 623 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__SetGoal_14)
#line 623 "goal_expr_to_goal.m"
{
#line 628 "goal_expr_to_goal.m"
  {
#line 628 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 628 "goal_expr_to_goal.m"
    MR_String hlds__make_hlds__goal_expr_to_goal__MutableName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Mutable_10, (MR_Integer) 0)));
#line 628 "goal_expr_to_goal.m"
    MR_String hlds__make_hlds__goal_expr_to_goal__StateVarName_16;
#line 628 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GetPredName_17;
#line 628 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SetPredName_18;
#line 628 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SetVar_19;
#line 628 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__UseVar_20;
#line 628 "goal_expr_to_goal.m"
    MR_String hlds__make_hlds__goal_expr_to_goal__V_23_23;
#line 628 "goal_expr_to_goal.m"
    MR_String hlds__make_hlds__goal_expr_to_goal__V_25_25;
#line 628 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_29_29;
#line 628 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_30_30;
#line 628 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_37_37;
#line 628 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_39_39;

#line 629 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__StateVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Mutable_10, (MR_Integer) 1)));
#line 630 "goal_expr_to_goal.m"
    {
#line 630 "goal_expr_to_goal.m"
      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__VarSet_9, *hlds__make_hlds__goal_expr_to_goal__StateVar_12, &hlds__make_hlds__goal_expr_to_goal__StateVarName_16);
    }
#line 631 "goal_expr_to_goal.m"
    {
#line 631 "goal_expr_to_goal.m"
      MR_Word base;
#line 631 "goal_expr_to_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 631 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__MutableHLDS_11 = base;
#line 631 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MutableName_15));
#line 631 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVarName_16));
#line 631 "goal_expr_to_goal.m"
    }
#line 632 "goal_expr_to_goal.m"
    {
#line 632 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) "get_", hlds__make_hlds__goal_expr_to_goal__MutableName_15);
    }
#line 632 "goal_expr_to_goal.m"
    {
#line 632 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__GetPredName_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 632 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GetPredName_17, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_23_23));
#line 632 "goal_expr_to_goal.m"
    }
#line 633 "goal_expr_to_goal.m"
    {
#line 633 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) "set_", hlds__make_hlds__goal_expr_to_goal__MutableName_15);
    }
#line 633 "goal_expr_to_goal.m"
    {
#line 633 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__SetPredName_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 633 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetPredName_18, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_25_25));
#line 633 "goal_expr_to_goal.m"
    }
#line 634 "goal_expr_to_goal.m"
    {
#line 634 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 634 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_30_30, 0) = ((MR_Box) (*hlds__make_hlds__goal_expr_to_goal__StateVar_12));
#line 634 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_30_30, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_8));
#line 634 "goal_expr_to_goal.m"
    }
#line 634 "goal_expr_to_goal.m"
    {
#line 634 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 634 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_29_29, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_30_30));
#line 634 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 634 "goal_expr_to_goal.m"
    }
#line 634 "goal_expr_to_goal.m"
    {
#line 634 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__SetVar_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 634 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_19, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[3]));
#line 634 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_19, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_29_29));
#line 634 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_19, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_8));
#line 634 "goal_expr_to_goal.m"
    }
#line 635 "goal_expr_to_goal.m"
    {
#line 635 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__UseVar_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 635 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_20, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[4]));
#line 635 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_20, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_29_29));
#line 635 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_20, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_8));
#line 635 "goal_expr_to_goal.m"
    }
#line 638 "goal_expr_to_goal.m"
    {
#line 638 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 638 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_37_37, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SetVar_19));
#line 638 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 638 "goal_expr_to_goal.m"
    }
#line 638 "goal_expr_to_goal.m"
    {
#line 638 "goal_expr_to_goal.m"
      MR_Word base;
#line 638 "goal_expr_to_goal.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 638 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__GetGoal_13 = base;
#line 638 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 638 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_8));
#line 638 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GetPredName_17));
#line 638 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_37_37));
#line 638 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) ((MR_Integer) 1));
#line 638 "goal_expr_to_goal.m"
    }
#line 639 "goal_expr_to_goal.m"
    {
#line 639 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_39_39, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__UseVar_20));
#line 639 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 639 "goal_expr_to_goal.m"
    }
#line 639 "goal_expr_to_goal.m"
    {
#line 639 "goal_expr_to_goal.m"
      MR_Word base;
#line 639 "goal_expr_to_goal.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 639 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__SetGoal_14 = base;
#line 639 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 639 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_8));
#line 639 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SetPredName_18));
#line 639 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_39_39));
#line 639 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) ((MR_Integer) 2));
#line 639 "goal_expr_to_goal.m"
    }
#line 628 "goal_expr_to_goal.m"
  }
#line 623 "goal_expr_to_goal.m"
}

#line 315 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_1(
#line 315 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__closure_arg,
#line 315 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 315 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2,
#line 315 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3,
#line 315 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_4,
#line 315 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_5)
#line 315 "goal_expr_to_goal.m"
{
#line 315 "goal_expr_to_goal.m"
  {
#line 315 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__closure = hlds__make_hlds__goal_expr_to_goal__closure_arg;
#line 315 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv3_MutableHLDS_11;
#line 315 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv2_StateVar_12;
#line 315 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv1_GetGoal_13;
#line 315 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv0_SetGoal_14;

#line 315 "goal_expr_to_goal.m"
    {
#line 315 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__extract_trace_mutable_var_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1), &hlds__make_hlds__goal_expr_to_goal__conv3_MutableHLDS_11, &hlds__make_hlds__goal_expr_to_goal__conv2_StateVar_12, &hlds__make_hlds__goal_expr_to_goal__conv1_GetGoal_13, &hlds__make_hlds__goal_expr_to_goal__conv0_SetGoal_14);
    }
#line 315 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv3_MutableHLDS_11));
#line 315 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv2_StateVar_12));
#line 315 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv1_GetGoal_13));
#line 315 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv0_SetGoal_14));
#line 315 "goal_expr_to_goal.m"
  }
#line 315 "goal_expr_to_goal.m"
}

#line 37 "goal_expr_to_goal.m"
void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(
#line 37 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_17,
#line 37 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_18,
#line 37 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_19,
#line 37 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20,
#line 37 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202,
#line 37 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203,
#line 37 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204,
#line 37 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205,
#line 37 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206,
#line 37 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207,
#line 37 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208,
#line 37 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209,
#line 37 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210,
#line 37 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211,
#line 37 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212,
#line 37 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213)
#line 37 "goal_expr_to_goal.m"
{
#line 103 "goal_expr_to_goal.m"
  while (MR_TRUE)
#line 103 "goal_expr_to_goal.m"
    {
#line 103 "goal_expr_to_goal.m"
      /* tailcall optimized into a loop */
#line 103 "goal_expr_to_goal.m"
      {
#line 103 "goal_expr_to_goal.m"
        MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;

#line 103 "goal_expr_to_goal.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_18)) == (MR_mktag((MR_Integer) 0))))
#line 418 "goal_expr_to_goal.m"
          {
#line 418 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_812_812 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 418 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalA_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 418 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalB_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 418 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordA_139;
#line 418 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordAB_140;
#line 418 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_141;
#line 418 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__V_382_382;
#line 418 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_383_383;
#line 418 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_384_384;
#line 418 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_385_385;
#line 418 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_386_386;
#line 418 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_387_387;
#line 418 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_388_388;
#line 418 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__Context_713 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)));
#line 418 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_714;

#line 420 "goal_expr_to_goal.m"
            {
#line 420 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__V_382_382 = mercury__cord__init_0_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_812_812);
            }
#line 419 "goal_expr_to_goal.m"
            {
#line 419 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__accumulate_plain_conjuncts_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalA_137, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__V_382_382, &hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordA_139, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_383_383, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_384_384, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_385_385, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_386_386, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_387_387, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_388_388);
            }
#line 422 "goal_expr_to_goal.m"
            {
#line 422 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__accumulate_plain_conjuncts_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalB_138, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordA_139, &hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordAB_140, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_383_383, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_384_384, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_385_385, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_386_386, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_387_387, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_388_388, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
            }
#line 425 "goal_expr_to_goal.m"
            {
#line 425 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_141 = mercury__cord__list_1_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_812_812, hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordAB_140);
            }
#line 426 "goal_expr_to_goal.m"
            {
#line 426 "goal_expr_to_goal.m"
              hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_713, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_714);
            }
#line 427 "goal_expr_to_goal.m"
            {
#line 427 "goal_expr_to_goal.m"
              hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_141, hlds__make_hlds__goal_expr_to_goal__GoalInfo_714, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20);
#line 427 "goal_expr_to_goal.m"
              return;
            }
#line 418 "goal_expr_to_goal.m"
          }
#line 103 "goal_expr_to_goal.m"
        else
#line 103 "goal_expr_to_goal.m"
          if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_18)) == (MR_mktag((MR_Integer) 1))))
#line 429 "goal_expr_to_goal.m"
            {
#line 429 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_813_813 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 429 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__V_369_369;
#line 429 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_370_370;
#line 429 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_371_371;
#line 429 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_372_372;
#line 429 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_373_373;
#line 429 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_374_374;
#line 429 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_375_375;
#line 429 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__Context_715 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)));
#line 429 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_716;
#line 429 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalA_717 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 429 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalB_718 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 429 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordA_719;
#line 429 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordAB_720;
#line 429 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_721;

#line 431 "goal_expr_to_goal.m"
              {
#line 431 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__V_369_369 = mercury__cord__init_0_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_813_813);
              }
#line 430 "goal_expr_to_goal.m"
              {
#line 430 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__accumulate_par_conjuncts_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalA_717, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__V_369_369, &hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordA_719, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_370_370, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_371_371, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_372_372, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_373_373, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_374_374, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_375_375);
              }
#line 433 "goal_expr_to_goal.m"
              {
#line 433 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__accumulate_par_conjuncts_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalB_718, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordA_719, &hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordAB_720, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_370_370, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_371_371, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_372_372, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_373_373, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_374_374, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_375_375, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
              }
#line 436 "goal_expr_to_goal.m"
              {
#line 436 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_721 = mercury__cord__list_1_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_813_813, hlds__make_hlds__goal_expr_to_goal__HLDSConjunctsCordAB_720);
              }
#line 437 "goal_expr_to_goal.m"
              {
#line 437 "goal_expr_to_goal.m"
                hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_715, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_716);
              }
#line 438 "goal_expr_to_goal.m"
              {
#line 438 "goal_expr_to_goal.m"
                hlds__hlds_goal__par_conj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__HLDSConjuncts_721, hlds__make_hlds__goal_expr_to_goal__GoalInfo_716, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20);
#line 438 "goal_expr_to_goal.m"
                return;
              }
#line 429 "goal_expr_to_goal.m"
            }
#line 103 "goal_expr_to_goal.m"
          else
#line 103 "goal_expr_to_goal.m"
            if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_18)) == (MR_mktag((MR_Integer) 2))))
#line 103 "goal_expr_to_goal.m"
              {
#line 103 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__Context_822 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)));
#line 103 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_824;

#line 104 "goal_expr_to_goal.m"
                {
#line 104 "goal_expr_to_goal.m"
                  hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_822, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_824);
                }
#line 105 "goal_expr_to_goal.m"
                {
#line 105 "goal_expr_to_goal.m"
                  MR_Word base;
#line 105 "goal_expr_to_goal.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 105 "goal_expr_to_goal.m"
                  *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 105 "goal_expr_to_goal.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_3[0])));
#line 105 "goal_expr_to_goal.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_824));
#line 105 "goal_expr_to_goal.m"
                }
#line 103 "goal_expr_to_goal.m"
                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202;
#line 103 "goal_expr_to_goal.m"
                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204;
#line 103 "goal_expr_to_goal.m"
                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206;
#line 103 "goal_expr_to_goal.m"
                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208;
#line 103 "goal_expr_to_goal.m"
                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210;
#line 103 "goal_expr_to_goal.m"
                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212;
#line 103 "goal_expr_to_goal.m"
              }
#line 103 "goal_expr_to_goal.m"
            else
#line 103 "goal_expr_to_goal.m"
              if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 120 "goal_expr_to_goal.m"
                {
#line 120 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 120 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 120 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__TransformedGoal_32;
#line 120 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_595_595;
#line 120 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_596_596;
#line 120 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_606 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));

#line 113 "goal_expr_to_goal.m"
                  {
#line 113 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_596_596 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 113 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_596_596, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 113 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_596_596, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_606));
#line 113 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_596_596, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal_31));
#line 113 "goal_expr_to_goal.m"
                  }
#line 112 "goal_expr_to_goal.m"
                  {
#line 112 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_595_595 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 112 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_595_595, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 112 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_595_595, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_606));
#line 112 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_595_595, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Vars_30));
#line 112 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_595_595, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_596_596));
#line 112 "goal_expr_to_goal.m"
                  }
#line 111 "goal_expr_to_goal.m"
                  {
#line 111 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__TransformedGoal_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 111 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 111 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_32, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_606));
#line 111 "goal_expr_to_goal.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_32, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_595_595));
#line 111 "goal_expr_to_goal.m"
                  }
#line 121 "goal_expr_to_goal.m"
                  /* direct tailcall eliminated */
#line 121 "goal_expr_to_goal.m"
                  {
#line 121 "goal_expr_to_goal.m"
                    MR_Word hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_18 = hlds__make_hlds__goal_expr_to_goal__TransformedGoal_32;

#line 121 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__Goal_18 = hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_18;
#line 121 "goal_expr_to_goal.m"
                  }
#line 121 "goal_expr_to_goal.m"
                  continue;
#line 120 "goal_expr_to_goal.m"
                }
#line 103 "goal_expr_to_goal.m"
              else
#line 103 "goal_expr_to_goal.m"
                if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 120 "goal_expr_to_goal.m"
                  {
#line 120 "goal_expr_to_goal.m"
                    MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 120 "goal_expr_to_goal.m"
                    MR_Word hlds__make_hlds__goal_expr_to_goal__V_593_593;
#line 120 "goal_expr_to_goal.m"
                    MR_Word hlds__make_hlds__goal_expr_to_goal__V_594_594;
#line 120 "goal_expr_to_goal.m"
                    MR_Word hlds__make_hlds__goal_expr_to_goal__Context_607 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 120 "goal_expr_to_goal.m"
                    MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_608 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 120 "goal_expr_to_goal.m"
                    MR_Word hlds__make_hlds__goal_expr_to_goal__TransformedGoal_821;

#line 119 "goal_expr_to_goal.m"
                    {
#line 119 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__V_594_594 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 119 "goal_expr_to_goal.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_594_594, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 119 "goal_expr_to_goal.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_594_594, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_607));
#line 119 "goal_expr_to_goal.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_594_594, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal_608));
#line 119 "goal_expr_to_goal.m"
                    }
#line 118 "goal_expr_to_goal.m"
                    {
#line 118 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__V_593_593 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 118 "goal_expr_to_goal.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_593_593, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 118 "goal_expr_to_goal.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_593_593, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_607));
#line 118 "goal_expr_to_goal.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_593_593, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVars_33));
#line 118 "goal_expr_to_goal.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_593_593, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_594_594));
#line 118 "goal_expr_to_goal.m"
                    }
#line 117 "goal_expr_to_goal.m"
                    {
#line 117 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__TransformedGoal_821 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 117 "goal_expr_to_goal.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_821, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 117 "goal_expr_to_goal.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_821, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_607));
#line 117 "goal_expr_to_goal.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_821, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_593_593));
#line 117 "goal_expr_to_goal.m"
                    }
#line 121 "goal_expr_to_goal.m"
                    /* direct tailcall eliminated */
#line 121 "goal_expr_to_goal.m"
                    {
#line 121 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_18 = hlds__make_hlds__goal_expr_to_goal__TransformedGoal_821;

#line 121 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__Goal_18 = hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_18;
#line 121 "goal_expr_to_goal.m"
                    }
#line 121 "goal_expr_to_goal.m"
                    continue;
#line 120 "goal_expr_to_goal.m"
                  }
#line 103 "goal_expr_to_goal.m"
                else
#line 103 "goal_expr_to_goal.m"
                  if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 222 "goal_expr_to_goal.m"
                    {
#line 222 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__Outer0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 222 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__Inner0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 222 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
#line 222 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__MainGoal_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
#line 222 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__OrElseGoals_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
#line 222 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars_55;
#line 222 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__Outer_64;
#line 222 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoals_79;
#line 222 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal_80;
#line 222 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSOrElseGoals_81;
#line 222 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__Inner_86;
#line 222 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__ShortHand_90;
#line 222 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__Context_680 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 222 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_681;
#line 222 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_682;

#line 226 "goal_expr_to_goal.m"
                      if ((hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars0_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 224 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 226 "goal_expr_to_goal.m"
                      else
#line 227 "goal_expr_to_goal.m"
                        {
#line 227 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__OutputVars0_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars0_52, (MR_Integer) 0)));
#line 227 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__OutputVars_57;

#line 228 "goal_expr_to_goal.m"
                          {
#line 228 "goal_expr_to_goal.m"
                            parse_tree__prog_data__rename_var_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__OutputVars0_56, &hlds__make_hlds__goal_expr_to_goal__OutputVars_57);
                          }
#line 230 "goal_expr_to_goal.m"
                          {
#line 230 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 230 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars_55, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OutputVars_57));
#line 230 "goal_expr_to_goal.m"
                          }
#line 227 "goal_expr_to_goal.m"
                        }
#line 5644 "hlds.make_hlds.goal_expr_to_goal.c"
                      if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Outer0_50)) == (MR_mktag((MR_Integer) 0))))
#line 5646 "hlds.make_hlds.goal_expr_to_goal.c"
                        {
#line 5648 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__OuterStateVar0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Outer0_50, (MR_Integer) 0)));
#line 5650 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__OuterStateVar_59;
#line 5652 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__OuterDI_60;
#line 5654 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__OuterUO_61;
#line 5656 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__OuterScopeInfo2_89;
#line 5658 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_485_485;
#line 5660 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_486_486;
#line 5662 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_487_487;
#line 5664 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_513_513;

#line 234 "goal_expr_to_goal.m"
                          {
#line 234 "goal_expr_to_goal.m"
                            parse_tree__prog_data__rename_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__OuterStateVar0_58, &hlds__make_hlds__goal_expr_to_goal__OuterStateVar_59);
                          }
#line 236 "goal_expr_to_goal.m"
                          {
#line 236 "goal_expr_to_goal.m"
                            hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_p_0(hlds__make_hlds__goal_expr_to_goal__Context_680, hlds__make_hlds__goal_expr_to_goal__OuterStateVar_59, &hlds__make_hlds__goal_expr_to_goal__OuterDI_60, &hlds__make_hlds__goal_expr_to_goal__OuterUO_61, &hlds__make_hlds__goal_expr_to_goal__OuterScopeInfo2_89, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_485_485, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_486_486, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_487_487);
                          }
#line 239 "goal_expr_to_goal.m"
                          {
#line 239 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__Outer_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 239 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Outer_64, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OuterDI_60));
#line 239 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Outer_64, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OuterUO_61));
#line 239 "goal_expr_to_goal.m"
                          }
#line 5687 "hlds.make_hlds.goal_expr_to_goal.c"
                          if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Inner0_51)) == (MR_mktag((MR_Integer) 0))))
#line 5689 "hlds.make_hlds.goal_expr_to_goal.c"
                            {
#line 5691 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__InnerStateVar0_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner0_51, (MR_Integer) 0)));
#line 5693 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__InnerStateVar_68;
#line 5695 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_73;
#line 5697 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_74;
#line 5699 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_75;
#line 5701 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__MainDisjState_76;
#line 5703 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_77;
#line 5705 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__AllDisjStates_78;
#line 5707 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_83;
#line 5709 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI_84;
#line 5711 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO_85;
#line 5713 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_490_490;
#line 5715 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_491_491;
#line 5717 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_492;
#line 5719 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_493;
#line 5721 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_494;
#line 5723 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_495;
#line 5725 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_496;
#line 5727 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_497;
#line 5729 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_498;
#line 5731 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_501_501;
#line 5733 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_502_502;
#line 5735 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_503_503;

#line 249 "goal_expr_to_goal.m"
                              {
#line 249 "goal_expr_to_goal.m"
                                parse_tree__prog_data__rename_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__InnerStateVar0_67, &hlds__make_hlds__goal_expr_to_goal__InnerStateVar_68);
                              }
#line 251 "goal_expr_to_goal.m"
                              {
#line 251 "goal_expr_to_goal.m"
                                hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_680, hlds__make_hlds__goal_expr_to_goal__InnerStateVar_68, &hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_83, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_485_485, &hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_486_486, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_490_490, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_487_487, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_491_491);
                              }
#line 259 "goal_expr_to_goal.m"
                              {
#line 259 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__MainGoal_53, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_74, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_73, &hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_75, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_492, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_490_490, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_493, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_494, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_495, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_491_491, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_496);
                              }
#line 262 "goal_expr_to_goal.m"
                              {
#line 262 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__MainDisjState_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 262 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_76, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_74));
#line 262 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_76, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_75));
#line 262 "goal_expr_to_goal.m"
                              }
#line 264 "goal_expr_to_goal.m"
                              {
#line 264 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__OrElseGoals_54, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_77, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_492, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_497, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_493, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_498, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_494, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_495, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_496, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_501_501);
                              }
#line 267 "goal_expr_to_goal.m"
                              {
#line 267 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__AllDisjStates_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_78, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MainDisjState_76));
#line 267 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_78, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_77));
#line 267 "goal_expr_to_goal.m"
                              }
#line 268 "goal_expr_to_goal.m"
                              {
#line 268 "goal_expr_to_goal.m"
                                hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_680, hlds__make_hlds__goal_expr_to_goal__AllDisjStates_78, &hlds__make_hlds__goal_expr_to_goal__HLDSGoals_79, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_498, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_502_502, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_73, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_503_503, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_497, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205);
                              }
#line 280 "goal_expr_to_goal.m"
                              {
#line 280 "goal_expr_to_goal.m"
                                hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_p_0(hlds__make_hlds__goal_expr_to_goal__Context_680, hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_83, &hlds__make_hlds__goal_expr_to_goal__InnerDI_84, &hlds__make_hlds__goal_expr_to_goal__InnerUO_85, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_503_503, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_513_513, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_502_502, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_501_501, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                              }
#line 282 "goal_expr_to_goal.m"
                              {
#line 282 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__Inner_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 282 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_86, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerDI_84));
#line 282 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_86, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerUO_85));
#line 282 "goal_expr_to_goal.m"
                              }
#line 5798 "hlds.make_hlds.goal_expr_to_goal.c"
                            }
#line 5800 "hlds.make_hlds.goal_expr_to_goal.c"
                          else
#line 5802 "hlds.make_hlds.goal_expr_to_goal.c"
                            {
#line 5804 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_798_798;
#line 5806 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI0_87;
#line 5808 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO0_88;
#line 5810 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI_678;
#line 5812 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO_679;
#line 5814 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_914;
#line 5816 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_915;
#line 5818 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__MainDisjState_916;
#line 5820 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_917;
#line 5822 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__AllDisjStates_918;
#line 5824 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_921;
#line 5826 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_922;
#line 5828 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_923;
#line 5830 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_924;
#line 5832 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_925;
#line 5834 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_926;
#line 5836 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_927;

#line 259 "goal_expr_to_goal.m"
                              {
#line 259 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__MainGoal_53, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_914, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_485_485, &hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_915, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_921, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_486_486, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_922, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_923, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_924, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_487_487, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_925);
                              }
#line 262 "goal_expr_to_goal.m"
                              {
#line 262 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__MainDisjState_916 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 262 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_916, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_914));
#line 262 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_916, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_915));
#line 262 "goal_expr_to_goal.m"
                              }
#line 264 "goal_expr_to_goal.m"
                              {
#line 264 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__OrElseGoals_54, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_917, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_485_485, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_921, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_926, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_922, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_927, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_923, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_924, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_925, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                              }
#line 267 "goal_expr_to_goal.m"
                              {
#line 267 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__AllDisjStates_918 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_918, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MainDisjState_916));
#line 267 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_918, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_917));
#line 267 "goal_expr_to_goal.m"
                              }
#line 268 "goal_expr_to_goal.m"
                              {
#line 268 "goal_expr_to_goal.m"
                                hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_680, hlds__make_hlds__goal_expr_to_goal__AllDisjStates_918, &hlds__make_hlds__goal_expr_to_goal__HLDSGoals_79, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_927, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_485_485, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_513_513, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_926, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205);
                              }
#line 288 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__InnerDI0_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Inner0_51, (MR_Integer) 0)));
#line 288 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__InnerUO0_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Inner0_51, (MR_Integer) 1)));
#line 5878 "hlds.make_hlds.goal_expr_to_goal.c"
                              hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_798_798 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 289 "goal_expr_to_goal.m"
                              {
#line 289 "goal_expr_to_goal.m"
                                parse_tree__prog_data__rename_var_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_798_798, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__InnerDI0_87, &hlds__make_hlds__goal_expr_to_goal__InnerDI_678);
                              }
#line 290 "goal_expr_to_goal.m"
                              {
#line 290 "goal_expr_to_goal.m"
                                parse_tree__prog_data__rename_var_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_798_798, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__InnerUO0_88, &hlds__make_hlds__goal_expr_to_goal__InnerUO_679);
                              }
#line 291 "goal_expr_to_goal.m"
                              {
#line 291 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__Inner_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 291 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_86, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerDI_678));
#line 291 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_86, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerUO_679));
#line 291 "goal_expr_to_goal.m"
                              }
#line 5900 "hlds.make_hlds.goal_expr_to_goal.c"
                            }
#line 295 "goal_expr_to_goal.m"
                          {
#line 295 "goal_expr_to_goal.m"
                            hlds__make_hlds__state_var__svar_finish_outer_atomic_scope_3_p_0(hlds__make_hlds__goal_expr_to_goal__OuterScopeInfo2_89, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_513_513, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203);
                          }
#line 5907 "hlds.make_hlds.goal_expr_to_goal.c"
                        }
#line 5909 "hlds.make_hlds.goal_expr_to_goal.c"
                      else
#line 5911 "hlds.make_hlds.goal_expr_to_goal.c"
                        {
#line 5913 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_796_796 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 5915 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__OuterDI0_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Outer0_50, (MR_Integer) 0)));
#line 5917 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__OuterUO0_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Outer0_50, (MR_Integer) 1)));
#line 5919 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__OuterDI_676;
#line 5921 "hlds.make_hlds.goal_expr_to_goal.c"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__OuterUO_677;

#line 242 "goal_expr_to_goal.m"
                          {
#line 242 "goal_expr_to_goal.m"
                            parse_tree__prog_data__rename_var_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_796_796, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__OuterDI0_65, &hlds__make_hlds__goal_expr_to_goal__OuterDI_676);
                          }
#line 243 "goal_expr_to_goal.m"
                          {
#line 243 "goal_expr_to_goal.m"
                            parse_tree__prog_data__rename_var_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_796_796, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__OuterUO0_66, &hlds__make_hlds__goal_expr_to_goal__OuterUO_677);
                          }
#line 244 "goal_expr_to_goal.m"
                          {
#line 244 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__Outer_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 244 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Outer_64, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OuterDI_676));
#line 244 "goal_expr_to_goal.m"
                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Outer_64, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OuterUO_677));
#line 244 "goal_expr_to_goal.m"
                          }
#line 5944 "hlds.make_hlds.goal_expr_to_goal.c"
                          if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Inner0_51)) == (MR_mktag((MR_Integer) 0))))
#line 5946 "hlds.make_hlds.goal_expr_to_goal.c"
                            {
#line 5948 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__InnerStateVar0_827 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner0_51, (MR_Integer) 0)));
#line 5950 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__InnerStateVar_828;
#line 5952 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_840;
#line 5954 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI_841;
#line 5956 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO_842;
#line 5958 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_874;
#line 5960 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_875;
#line 5962 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_876;
#line 5964 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__MainDisjState_877;
#line 5966 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_878;
#line 5968 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__AllDisjStates_879;
#line 5970 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_490_889;
#line 5972 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_491_890;
#line 5974 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_891;
#line 5976 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_892;
#line 5978 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_893;
#line 5980 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_894;
#line 5982 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_895;
#line 5984 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_896;
#line 5986 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_897;
#line 5988 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_501_898;
#line 5990 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_502_899;
#line 5992 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_503_900;

#line 249 "goal_expr_to_goal.m"
                              {
#line 249 "goal_expr_to_goal.m"
                                parse_tree__prog_data__rename_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__InnerStateVar0_827, &hlds__make_hlds__goal_expr_to_goal__InnerStateVar_828);
                              }
#line 251 "goal_expr_to_goal.m"
                              {
#line 251 "goal_expr_to_goal.m"
                                hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_680, hlds__make_hlds__goal_expr_to_goal__InnerStateVar_828, &hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_840, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, &hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_874, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_490_889, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_491_890);
                              }
#line 259 "goal_expr_to_goal.m"
                              {
#line 259 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__MainGoal_53, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_875, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_874, &hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_876, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_891, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_490_889, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_892, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_893, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_894, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_491_890, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_895);
                              }
#line 262 "goal_expr_to_goal.m"
                              {
#line 262 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__MainDisjState_877 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 262 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_877, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_875));
#line 262 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_877, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_876));
#line 262 "goal_expr_to_goal.m"
                              }
#line 264 "goal_expr_to_goal.m"
                              {
#line 264 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__OrElseGoals_54, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_878, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_874, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_891, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_896, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_892, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_897, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_893, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_894, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_895, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_501_898);
                              }
#line 267 "goal_expr_to_goal.m"
                              {
#line 267 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__AllDisjStates_879 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_879, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MainDisjState_877));
#line 267 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_879, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_878));
#line 267 "goal_expr_to_goal.m"
                              }
#line 268 "goal_expr_to_goal.m"
                              {
#line 268 "goal_expr_to_goal.m"
                                hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_680, hlds__make_hlds__goal_expr_to_goal__AllDisjStates_879, &hlds__make_hlds__goal_expr_to_goal__HLDSGoals_79, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_897, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_502_899, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_874, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_503_900, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_896, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205);
                              }
#line 280 "goal_expr_to_goal.m"
                              {
#line 280 "goal_expr_to_goal.m"
                                hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_p_0(hlds__make_hlds__goal_expr_to_goal__Context_680, hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_840, &hlds__make_hlds__goal_expr_to_goal__InnerDI_841, &hlds__make_hlds__goal_expr_to_goal__InnerUO_842, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_503_900, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_502_899, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_501_898, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                              }
#line 282 "goal_expr_to_goal.m"
                              {
#line 282 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__Inner_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 282 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_86, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerDI_841));
#line 282 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_86, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerUO_842));
#line 282 "goal_expr_to_goal.m"
                              }
#line 6055 "hlds.make_hlds.goal_expr_to_goal.c"
                            }
#line 6057 "hlds.make_hlds.goal_expr_to_goal.c"
                          else
#line 6059 "hlds.make_hlds.goal_expr_to_goal.c"
                            {
#line 6061 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_798_855;
#line 6063 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI0_849;
#line 6065 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO0_850;
#line 6067 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI_853;
#line 6069 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO_854;
#line 6071 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_934;
#line 6073 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_935;
#line 6075 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__MainDisjState_936;
#line 6077 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_937;
#line 6079 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__AllDisjStates_938;
#line 6081 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_941;
#line 6083 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_942;
#line 6085 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_943;
#line 6087 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_944;
#line 6089 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_945;
#line 6091 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_946;
#line 6093 "hlds.make_hlds.goal_expr_to_goal.c"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_947;

#line 259 "goal_expr_to_goal.m"
                              {
#line 259 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__MainGoal_53, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_934, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, &hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_935, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_941, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_942, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_943, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_944, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_945);
                              }
#line 262 "goal_expr_to_goal.m"
                              {
#line 262 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__MainDisjState_936 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 262 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_936, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_934));
#line 262 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_936, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_935));
#line 262 "goal_expr_to_goal.m"
                              }
#line 264 "goal_expr_to_goal.m"
                              {
#line 264 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__OrElseGoals_54, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_937, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_492_941, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_946, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_493_942, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_947, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_494_943, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_495_944, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_496_945, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                              }
#line 267 "goal_expr_to_goal.m"
                              {
#line 267 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__AllDisjStates_938 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_938, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MainDisjState_936));
#line 267 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_938, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_937));
#line 267 "goal_expr_to_goal.m"
                              }
#line 268 "goal_expr_to_goal.m"
                              {
#line 268 "goal_expr_to_goal.m"
                                hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_680, hlds__make_hlds__goal_expr_to_goal__AllDisjStates_938, &hlds__make_hlds__goal_expr_to_goal__HLDSGoals_79, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_498_947, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_497_946, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205);
                              }
#line 288 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__InnerDI0_849 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Inner0_51, (MR_Integer) 0)));
#line 288 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__InnerUO0_850 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Inner0_51, (MR_Integer) 1)));
#line 6135 "hlds.make_hlds.goal_expr_to_goal.c"
                              hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_798_855 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 289 "goal_expr_to_goal.m"
                              {
#line 289 "goal_expr_to_goal.m"
                                parse_tree__prog_data__rename_var_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_798_855, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__InnerDI0_849, &hlds__make_hlds__goal_expr_to_goal__InnerDI_853);
                              }
#line 290 "goal_expr_to_goal.m"
                              {
#line 290 "goal_expr_to_goal.m"
                                parse_tree__prog_data__rename_var_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_798_855, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__InnerUO0_850, &hlds__make_hlds__goal_expr_to_goal__InnerUO_854);
                              }
#line 291 "goal_expr_to_goal.m"
                              {
#line 291 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__Inner_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 291 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_86, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerDI_853));
#line 291 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_86, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerUO_854));
#line 291 "goal_expr_to_goal.m"
                              }
#line 6157 "hlds.make_hlds.goal_expr_to_goal.c"
                            }
#line 6159 "hlds.make_hlds.goal_expr_to_goal.c"
                        }
#line 272 "goal_expr_to_goal.m"
                      if ((hlds__make_hlds__goal_expr_to_goal__HLDSGoals_79 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 273 "goal_expr_to_goal.m"
                        {
#line 274 "goal_expr_to_goal.m"
                          {
#line 274 "goal_expr_to_goal.m"
                            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.goal_expr_to_goal", (MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_parse_tree_goal_to_hlds\'/16", (MR_String) "atomic HLDSGoals = []");
#line 274 "goal_expr_to_goal.m"
                            return;
                          }
#line 273 "goal_expr_to_goal.m"
                        }
#line 272 "goal_expr_to_goal.m"
                      else
#line 271 "goal_expr_to_goal.m"
                        {
#line 271 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HLDSGoals_79, (MR_Integer) 0)));
#line 271 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__HLDSOrElseGoals_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HLDSGoals_79, (MR_Integer) 1)));
#line 271 "goal_expr_to_goal.m"
                        }
#line 299 "goal_expr_to_goal.m"
                      {
#line 299 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__ShortHand_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 299 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_90, 0) = ((MR_Box) ((MR_Integer) 0));
#line 299 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_90, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Outer_64));
#line 299 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_90, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Inner_86));
#line 299 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_90, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars_55));
#line 299 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_90, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal_80));
#line 299 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_90, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSOrElseGoals_81));
#line 299 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_90, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 299 "goal_expr_to_goal.m"
                      }
#line 301 "goal_expr_to_goal.m"
                      {
#line 301 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__GoalExpr_681 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 301 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_681, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 301 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_681, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ShortHand_90));
#line 301 "goal_expr_to_goal.m"
                      }
#line 302 "goal_expr_to_goal.m"
                      {
#line 302 "goal_expr_to_goal.m"
                        hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_680, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_682);
                      }
#line 303 "goal_expr_to_goal.m"
                      {
#line 303 "goal_expr_to_goal.m"
                        MR_Word base;
#line 303 "goal_expr_to_goal.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 303 "goal_expr_to_goal.m"
                        *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 303 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_681));
#line 303 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_682));
#line 303 "goal_expr_to_goal.m"
                      }
#line 222 "goal_expr_to_goal.m"
                    }
#line 103 "goal_expr_to_goal.m"
                  else
#line 103 "goal_expr_to_goal.m"
                    if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)))) == (MR_Integer) 21))))
#line 501 "goal_expr_to_goal.m"
                      {
#line 501 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__Name_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 501 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_253_253;
#line 501 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__Context_775 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 501 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__Purity_778 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
#line 501 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms0_779 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 501 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms1_780;
#line 513 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__LHSTerm_164;
#line 513 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__RHSTerm_165;
#line 504 "goal_expr_to_goal.m"
                        MR_String hlds__make_hlds__goal_expr_to_goal__V_249_249;
#line 504 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__V_250_250;
#line 504 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__V_251_251;

#line 502 "goal_expr_to_goal.m"
                        {
#line 502 "goal_expr_to_goal.m"
                          hlds__make_hlds__state_var__expand_bang_states_2_p_0(hlds__make_hlds__goal_expr_to_goal__ArgTerms0_779, &hlds__make_hlds__goal_expr_to_goal__ArgTerms1_780);
                        }
#line 504 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Name_163)) == (MR_mktag((MR_Integer) 0)));
#line 504 "goal_expr_to_goal.m"
                        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 504 "goal_expr_to_goal.m"
                          {
#line 504 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__V_249_249 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Name_163, (MR_Integer) 0)));
#line 504 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_249_249, (MR_String) "\\=") == 0);
#line 504 "goal_expr_to_goal.m"
                            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 504 "goal_expr_to_goal.m"
                              {
#line 505 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__ArgTerms1_780)) == (MR_mktag((MR_Integer) 1)));
#line 505 "goal_expr_to_goal.m"
                                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 505 "goal_expr_to_goal.m"
                                  {
#line 505 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__LHSTerm_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms1_780, (MR_Integer) 0)));
#line 505 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms1_780, (MR_Integer) 1)));
#line 505 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_250_250)) == (MR_mktag((MR_Integer) 1)));
#line 505 "goal_expr_to_goal.m"
                                    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 505 "goal_expr_to_goal.m"
                                      {
#line 505 "goal_expr_to_goal.m"
                                        hlds__make_hlds__goal_expr_to_goal__RHSTerm_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_250_250, (MR_Integer) 0)));
#line 505 "goal_expr_to_goal.m"
                                        hlds__make_hlds__goal_expr_to_goal__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_250_250, (MR_Integer) 1)));
#line 505 "goal_expr_to_goal.m"
                                        hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_251_251 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 505 "goal_expr_to_goal.m"
                                      }
#line 505 "goal_expr_to_goal.m"
                                  }
#line 504 "goal_expr_to_goal.m"
                              }
#line 504 "goal_expr_to_goal.m"
                          }
#line 513 "goal_expr_to_goal.m"
                        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 509 "goal_expr_to_goal.m"
                          {
#line 509 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_252_252;
#line 509 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__TransformedGoal_736;

#line 509 "goal_expr_to_goal.m"
                            {
#line 509 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__V_252_252 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 509 "goal_expr_to_goal.m"
                              MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_252_252, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 509 "goal_expr_to_goal.m"
                              MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_252_252, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_775));
#line 509 "goal_expr_to_goal.m"
                              MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_252_252, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__LHSTerm_164));
#line 509 "goal_expr_to_goal.m"
                              MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_252_252, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__RHSTerm_165));
#line 509 "goal_expr_to_goal.m"
                              MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_252_252, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Purity_778));
#line 509 "goal_expr_to_goal.m"
                            }
#line 508 "goal_expr_to_goal.m"
                            {
#line 508 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__TransformedGoal_736 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 508 "goal_expr_to_goal.m"
                              MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_736, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 508 "goal_expr_to_goal.m"
                              MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_736, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_775));
#line 508 "goal_expr_to_goal.m"
                              MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_736, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_252_252));
#line 508 "goal_expr_to_goal.m"
                            }
#line 510 "goal_expr_to_goal.m"
                            {
#line 510 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__TransformedGoal_736, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_253_253, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                            }
#line 509 "goal_expr_to_goal.m"
                          }
#line 513 "goal_expr_to_goal.m"
                        else
#line 534 "goal_expr_to_goal.m"
                          {
#line 534 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__RHSTerm0_167;
#line 534 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__Remainder_169;
#line 534 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__FieldListContext_170;
#line 534 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_171;
#line 534 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__StateVarContext_172;
#line 534 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_262_262;
#line 516 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__LHSTerm0_166;
#line 516 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__StateVar0_168;
#line 516 "goal_expr_to_goal.m"
                            MR_String hlds__make_hlds__goal_expr_to_goal__V_259_259;
#line 516 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_260_260;
#line 516 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_261_261;
#line 516 "goal_expr_to_goal.m"
                            MR_String hlds__make_hlds__goal_expr_to_goal__V_263_263;
#line 516 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_264_264;
#line 516 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_265_265;
#line 516 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_266_266;
#line 516 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_267_267;
#line 516 "goal_expr_to_goal.m"
                            MR_String hlds__make_hlds__goal_expr_to_goal__V_268_268;
#line 516 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_269_269;
#line 516 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_270_270;
#line 521 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_173_173;
#line 521 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_174_174;

#line 516 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Name_163)) == (MR_mktag((MR_Integer) 0)));
#line 516 "goal_expr_to_goal.m"
                            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 516 "goal_expr_to_goal.m"
                              {
#line 516 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__V_259_259 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Name_163, (MR_Integer) 0)));
#line 516 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_259_259, (MR_String) ":=") == 0);
#line 516 "goal_expr_to_goal.m"
                                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 516 "goal_expr_to_goal.m"
                                  {
#line 517 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__ArgTerms1_780)) == (MR_mktag((MR_Integer) 1)));
#line 517 "goal_expr_to_goal.m"
                                    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 517 "goal_expr_to_goal.m"
                                      {
#line 517 "goal_expr_to_goal.m"
                                        hlds__make_hlds__goal_expr_to_goal__LHSTerm0_166 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms1_780, (MR_Integer) 0)));
#line 517 "goal_expr_to_goal.m"
                                        hlds__make_hlds__goal_expr_to_goal__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms1_780, (MR_Integer) 1)));
#line 517 "goal_expr_to_goal.m"
                                        hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_260_260)) == (MR_mktag((MR_Integer) 1)));
#line 517 "goal_expr_to_goal.m"
                                        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 517 "goal_expr_to_goal.m"
                                          {
#line 517 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__RHSTerm0_167 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_260_260, (MR_Integer) 0)));
#line 517 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_260_260, (MR_Integer) 1)));
#line 517 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_261_261 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 516 "goal_expr_to_goal.m"
                                            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 516 "goal_expr_to_goal.m"
                                              {
#line 518 "goal_expr_to_goal.m"
                                                hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__LHSTerm0_166)) == (MR_mktag((MR_Integer) 0)));
#line 518 "goal_expr_to_goal.m"
                                                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 518 "goal_expr_to_goal.m"
                                                  {
#line 518 "goal_expr_to_goal.m"
                                                    hlds__make_hlds__goal_expr_to_goal__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm0_166, (MR_Integer) 0)));
#line 518 "goal_expr_to_goal.m"
                                                    hlds__make_hlds__goal_expr_to_goal__V_264_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm0_166, (MR_Integer) 1)));
#line 518 "goal_expr_to_goal.m"
                                                    hlds__make_hlds__goal_expr_to_goal__FieldListContext_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm0_166, (MR_Integer) 2)));
#line 518 "goal_expr_to_goal.m"
                                                    hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_262_262)) == (MR_mktag((MR_Integer) 0)));
#line 518 "goal_expr_to_goal.m"
                                                    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 518 "goal_expr_to_goal.m"
                                                      {
#line 518 "goal_expr_to_goal.m"
                                                        hlds__make_hlds__goal_expr_to_goal__V_263_263 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_262_262, (MR_Integer) 0)));
#line 518 "goal_expr_to_goal.m"
                                                        hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_263_263, (MR_String) "^") == 0);
#line 516 "goal_expr_to_goal.m"
                                                        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 516 "goal_expr_to_goal.m"
                                                          {
#line 518 "goal_expr_to_goal.m"
                                                            hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_264_264)) == (MR_mktag((MR_Integer) 1)));
#line 518 "goal_expr_to_goal.m"
                                                            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 518 "goal_expr_to_goal.m"
                                                              {
#line 518 "goal_expr_to_goal.m"
                                                                hlds__make_hlds__goal_expr_to_goal__StateVar0_168 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_264_264, (MR_Integer) 0)));
#line 518 "goal_expr_to_goal.m"
                                                                hlds__make_hlds__goal_expr_to_goal__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_264_264, (MR_Integer) 1)));
#line 518 "goal_expr_to_goal.m"
                                                                hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_265_265)) == (MR_mktag((MR_Integer) 1)));
#line 518 "goal_expr_to_goal.m"
                                                                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 518 "goal_expr_to_goal.m"
                                                                  {
#line 518 "goal_expr_to_goal.m"
                                                                    hlds__make_hlds__goal_expr_to_goal__Remainder_169 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_265_265, (MR_Integer) 0)));
#line 518 "goal_expr_to_goal.m"
                                                                    hlds__make_hlds__goal_expr_to_goal__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_265_265, (MR_Integer) 1)));
#line 518 "goal_expr_to_goal.m"
                                                                    hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_266_266 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 516 "goal_expr_to_goal.m"
                                                                    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 516 "goal_expr_to_goal.m"
                                                                      {
#line 520 "goal_expr_to_goal.m"
                                                                        hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__StateVar0_168)) == (MR_mktag((MR_Integer) 0)));
#line 520 "goal_expr_to_goal.m"
                                                                        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 520 "goal_expr_to_goal.m"
                                                                          {
#line 520 "goal_expr_to_goal.m"
                                                                            hlds__make_hlds__goal_expr_to_goal__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar0_168, (MR_Integer) 0)));
#line 520 "goal_expr_to_goal.m"
                                                                            hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar0_168, (MR_Integer) 1)));
#line 520 "goal_expr_to_goal.m"
                                                                            hlds__make_hlds__goal_expr_to_goal__StateVarContext_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar0_168, (MR_Integer) 2)));
#line 520 "goal_expr_to_goal.m"
                                                                            hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_267_267)) == (MR_mktag((MR_Integer) 0)));
#line 520 "goal_expr_to_goal.m"
                                                                            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 520 "goal_expr_to_goal.m"
                                                                              {
#line 520 "goal_expr_to_goal.m"
                                                                                hlds__make_hlds__goal_expr_to_goal__V_268_268 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_267_267, (MR_Integer) 0)));
#line 520 "goal_expr_to_goal.m"
                                                                                hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_268_268, (MR_String) "!") == 0);
#line 516 "goal_expr_to_goal.m"
                                                                                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 516 "goal_expr_to_goal.m"
                                                                                  {
#line 521 "goal_expr_to_goal.m"
                                                                                    hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_171)) == (MR_mktag((MR_Integer) 1)));
#line 521 "goal_expr_to_goal.m"
                                                                                    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 521 "goal_expr_to_goal.m"
                                                                                      {
#line 521 "goal_expr_to_goal.m"
                                                                                        hlds__make_hlds__goal_expr_to_goal__V_269_269 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_171, (MR_Integer) 0)));
#line 521 "goal_expr_to_goal.m"
                                                                                        hlds__make_hlds__goal_expr_to_goal__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_171, (MR_Integer) 1)));
#line 521 "goal_expr_to_goal.m"
                                                                                        hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_269_269)) == (MR_mktag((MR_Integer) 1)));
#line 521 "goal_expr_to_goal.m"
                                                                                        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 521 "goal_expr_to_goal.m"
                                                                                          {
#line 521 "goal_expr_to_goal.m"
                                                                                            hlds__make_hlds__goal_expr_to_goal__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_269_269, (MR_Integer) 0)));
#line 521 "goal_expr_to_goal.m"
                                                                                            hlds__make_hlds__goal_expr_to_goal__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_269_269, (MR_Integer) 1)));
#line 521 "goal_expr_to_goal.m"
                                                                                            hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_270_270 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 521 "goal_expr_to_goal.m"
                                                                                          }
#line 521 "goal_expr_to_goal.m"
                                                                                      }
#line 516 "goal_expr_to_goal.m"
                                                                                  }
#line 520 "goal_expr_to_goal.m"
                                                                              }
#line 520 "goal_expr_to_goal.m"
                                                                          }
#line 516 "goal_expr_to_goal.m"
                                                                      }
#line 518 "goal_expr_to_goal.m"
                                                                  }
#line 518 "goal_expr_to_goal.m"
                                                              }
#line 516 "goal_expr_to_goal.m"
                                                          }
#line 518 "goal_expr_to_goal.m"
                                                      }
#line 518 "goal_expr_to_goal.m"
                                                  }
#line 516 "goal_expr_to_goal.m"
                                              }
#line 517 "goal_expr_to_goal.m"
                                          }
#line 517 "goal_expr_to_goal.m"
                                      }
#line 516 "goal_expr_to_goal.m"
                                  }
#line 516 "goal_expr_to_goal.m"
                              }
#line 534 "goal_expr_to_goal.m"
                            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 525 "goal_expr_to_goal.m"
                              {
#line 525 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__StateVar_175;
#line 525 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__FieldList_176;
#line 525 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__V_277_277;
#line 525 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__V_278_278;
#line 525 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__V_282_282;
#line 525 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__V_283_283;
#line 525 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__TransformedGoal_737;
#line 525 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__LHSTerm_738;
#line 525 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__RHSTerm_739;

#line 525 "goal_expr_to_goal.m"
                                {
#line 525 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__LHSTerm_738 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 525 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm_738, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[3]));
#line 525 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm_738, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_171));
#line 525 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm_738, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVarContext_172));
#line 525 "goal_expr_to_goal.m"
                                }
#line 526 "goal_expr_to_goal.m"
                                {
#line 526 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__StateVar_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 526 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar_175, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[4]));
#line 526 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar_175, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVarNameTerms_171));
#line 526 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar_175, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVarContext_172));
#line 526 "goal_expr_to_goal.m"
                                }
#line 527 "goal_expr_to_goal.m"
                                {
#line 527 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__V_278_278 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 527 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_278_278, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Remainder_169));
#line 527 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_278_278, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 527 "goal_expr_to_goal.m"
                                }
#line 527 "goal_expr_to_goal.m"
                                {
#line 527 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__V_277_277 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 527 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_277_277, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVar_175));
#line 527 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_277_277, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_278_278));
#line 527 "goal_expr_to_goal.m"
                                }
#line 527 "goal_expr_to_goal.m"
                                {
#line 527 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__FieldList_176 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 527 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__FieldList_176, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_262_262));
#line 527 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__FieldList_176, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_277_277));
#line 527 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__FieldList_176, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FieldListContext_170));
#line 527 "goal_expr_to_goal.m"
                                }
#line 529 "goal_expr_to_goal.m"
                                {
#line 529 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__V_283_283 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 529 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_283_283, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__RHSTerm0_167));
#line 529 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_283_283, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 529 "goal_expr_to_goal.m"
                                }
#line 529 "goal_expr_to_goal.m"
                                {
#line 529 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__V_282_282 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 529 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_282_282, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FieldList_176));
#line 529 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_282_282, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_283_283));
#line 529 "goal_expr_to_goal.m"
                                }
#line 529 "goal_expr_to_goal.m"
                                {
#line 529 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__RHSTerm_739 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 529 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__RHSTerm_739, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[5]));
#line 529 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__RHSTerm_739, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_282_282));
#line 529 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__RHSTerm_739, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_775));
#line 529 "goal_expr_to_goal.m"
                                }
#line 530 "goal_expr_to_goal.m"
                                {
#line 530 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__TransformedGoal_737 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 530 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_737, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 530 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_737, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_775));
#line 530 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_737, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__LHSTerm_738));
#line 530 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_737, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__RHSTerm_739));
#line 530 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_737, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Purity_778));
#line 530 "goal_expr_to_goal.m"
                                }
#line 531 "goal_expr_to_goal.m"
                                {
#line 531 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__TransformedGoal_737, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_253_253, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                                }
#line 525 "goal_expr_to_goal.m"
                              }
#line 534 "goal_expr_to_goal.m"
                            else
#line 548 "goal_expr_to_goal.m"
                              {
#line 548 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_178;
#line 538 "goal_expr_to_goal.m"
                                MR_String hlds__make_hlds__goal_expr_to_goal__Operator_177;

#line 538 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Name_163)) == (MR_mktag((MR_Integer) 0)));
#line 538 "goal_expr_to_goal.m"
                                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 538 "goal_expr_to_goal.m"
                                  {
#line 538 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__Operator_177 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Name_163, (MR_Integer) 0)));
#line 540 "goal_expr_to_goal.m"
                                    if ((strcmp(hlds__make_hlds__goal_expr_to_goal__Operator_177, (MR_String) ":=") == 0))
#line 540 "goal_expr_to_goal.m"
                                      {
#line 540 "goal_expr_to_goal.m"
                                        hlds__make_hlds__goal_expr_to_goal__AccessType_178 = (MR_Integer) 1;
#line 540 "goal_expr_to_goal.m"
                                        hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
#line 540 "goal_expr_to_goal.m"
                                      }
#line 540 "goal_expr_to_goal.m"
                                    else
#line 540 "goal_expr_to_goal.m"
                                      if ((strcmp(hlds__make_hlds__goal_expr_to_goal__Operator_177, (MR_String) "=^") == 0))
#line 539 "goal_expr_to_goal.m"
                                        {
#line 539 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__AccessType_178 = (MR_Integer) 0;
#line 539 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
#line 539 "goal_expr_to_goal.m"
                                        }
#line 540 "goal_expr_to_goal.m"
                                      else
#line 540 "goal_expr_to_goal.m"
                                        hlds__make_hlds__goal_expr_to_goal__succeeded = MR_FALSE;
#line 538 "goal_expr_to_goal.m"
                                  }
#line 548 "goal_expr_to_goal.m"
                                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 544 "goal_expr_to_goal.m"
                                  {
#line 544 "goal_expr_to_goal.m"
                                    MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms_740;

#line 543 "goal_expr_to_goal.m"
                                    {
#line 543 "goal_expr_to_goal.m"
                                      parse_tree__prog_data__rename_vars_in_term_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__ArgTerms1_780, &hlds__make_hlds__goal_expr_to_goal__ArgTerms_740);
                                    }
#line 545 "goal_expr_to_goal.m"
                                    {
#line 545 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__AccessType_178, hlds__make_hlds__goal_expr_to_goal__ArgTerms_740, hlds__make_hlds__goal_expr_to_goal__Context_775, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_253_253, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                                    }
#line 544 "goal_expr_to_goal.m"
                                  }
#line 548 "goal_expr_to_goal.m"
                                else
#line 550 "goal_expr_to_goal.m"
                                  {
#line 550 "goal_expr_to_goal.m"
                                    MR_Word hlds__make_hlds__goal_expr_to_goal__Call_184;
#line 550 "goal_expr_to_goal.m"
                                    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo0_189;
#line 550 "goal_expr_to_goal.m"
                                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_299_299;
#line 550 "goal_expr_to_goal.m"
                                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_300_300;
#line 550 "goal_expr_to_goal.m"
                                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_301_301;
#line 550 "goal_expr_to_goal.m"
                                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_309_309;
#line 550 "goal_expr_to_goal.m"
                                    MR_Word hlds__make_hlds__goal_expr_to_goal__V_310_310;
#line 550 "goal_expr_to_goal.m"
                                    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_743;
#line 550 "goal_expr_to_goal.m"
                                    MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms_744;
#line 550 "goal_expr_to_goal.m"
                                    MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVars_745;
#line 550 "goal_expr_to_goal.m"
                                    MR_Integer hlds__make_hlds__goal_expr_to_goal__Arity_746;
#line 550 "goal_expr_to_goal.m"
                                    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_748;
#line 550 "goal_expr_to_goal.m"
                                    MR_Word hlds__make_hlds__goal_expr_to_goal__CallId_749;
#line 574 "goal_expr_to_goal.m"
                                    MR_Word hlds__make_hlds__goal_expr_to_goal__PredVar_179;
#line 574 "goal_expr_to_goal.m"
                                    MR_Word hlds__make_hlds__goal_expr_to_goal__RealHeadVars_180;
#line 559 "goal_expr_to_goal.m"
                                    MR_String hlds__make_hlds__goal_expr_to_goal__V_825_825;

#line 549 "goal_expr_to_goal.m"
                                    {
#line 549 "goal_expr_to_goal.m"
                                      parse_tree__prog_data__rename_vars_in_term_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__ArgTerms1_780, &hlds__make_hlds__goal_expr_to_goal__ArgTerms_744);
                                    }
#line 551 "goal_expr_to_goal.m"
                                    {
#line 551 "goal_expr_to_goal.m"
                                      hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(hlds__make_hlds__goal_expr_to_goal__ArgTerms_744, &hlds__make_hlds__goal_expr_to_goal__HeadVars_745, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_299_299, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_300_300, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_301_301);
                                    }
#line 553 "goal_expr_to_goal.m"
                                    {
#line 553 "goal_expr_to_goal.m"
                                      mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[1], hlds__make_hlds__goal_expr_to_goal__ArgTerms_744, &hlds__make_hlds__goal_expr_to_goal__Arity_746);
                                    }
#line 557 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Name_163)) == (MR_mktag((MR_Integer) 0)));
#line 557 "goal_expr_to_goal.m"
                                    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 557 "goal_expr_to_goal.m"
                                      {
#line 557 "goal_expr_to_goal.m"
                                        hlds__make_hlds__goal_expr_to_goal__V_825_825 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Name_163, (MR_Integer) 0)));
#line 558 "goal_expr_to_goal.m"
                                        if ((strcmp(hlds__make_hlds__goal_expr_to_goal__V_825_825, (MR_String) "") == 0))
#line 558 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
#line 558 "goal_expr_to_goal.m"
                                        else
#line 558 "goal_expr_to_goal.m"
                                          if ((strcmp(hlds__make_hlds__goal_expr_to_goal__V_825_825, (MR_String) "call") == 0))
#line 557 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
#line 558 "goal_expr_to_goal.m"
                                          else
#line 558 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__succeeded = MR_FALSE;
#line 559 "goal_expr_to_goal.m"
                                        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 559 "goal_expr_to_goal.m"
                                          {
#line 560 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__HeadVars_745)) == (MR_mktag((MR_Integer) 1)));
#line 560 "goal_expr_to_goal.m"
                                            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 560 "goal_expr_to_goal.m"
                                              {
#line 560 "goal_expr_to_goal.m"
                                                hlds__make_hlds__goal_expr_to_goal__PredVar_179 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVars_745, (MR_Integer) 0)));
#line 560 "goal_expr_to_goal.m"
                                                hlds__make_hlds__goal_expr_to_goal__RealHeadVars_180 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVars_745, (MR_Integer) 1)));
#line 560 "goal_expr_to_goal.m"
                                              }
#line 559 "goal_expr_to_goal.m"
                                          }
#line 557 "goal_expr_to_goal.m"
                                      }
#line 574 "goal_expr_to_goal.m"
                                    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 563 "goal_expr_to_goal.m"
                                      {
#line 563 "goal_expr_to_goal.m"
                                        MR_Word hlds__make_hlds__goal_expr_to_goal__GenericCall_183;
#line 563 "goal_expr_to_goal.m"
                                        MR_Word hlds__make_hlds__goal_expr_to_goal__GenericCallId_185;

#line 567 "goal_expr_to_goal.m"
                                        {
#line 567 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__GenericCall_183 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 567 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GenericCall_183, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__PredVar_179));
#line 567 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GenericCall_183, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Purity_778));
#line 567 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GenericCall_183, 2) = ((MR_Box) ((MR_Integer) 0));
#line 567 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GenericCall_183, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Arity_746));
#line 567 "goal_expr_to_goal.m"
                                        }
#line 569 "goal_expr_to_goal.m"
                                        {
#line 569 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__Call_184 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 569 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_184, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 569 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_184, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GenericCall_183));
#line 569 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_184, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__RealHeadVars_180));
#line 569 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_184, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 569 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_184, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 569 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_184, 5) = ((MR_Box) ((MR_Integer) 6));
#line 569 "goal_expr_to_goal.m"
                                        }
#line 572 "goal_expr_to_goal.m"
                                        {
#line 572 "goal_expr_to_goal.m"
                                          hlds__hlds_goal__generic_call_to_id_2_p_0(hlds__make_hlds__goal_expr_to_goal__GenericCall_183, &hlds__make_hlds__goal_expr_to_goal__GenericCallId_185);
                                        }
#line 573 "goal_expr_to_goal.m"
                                        {
#line 573 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__CallId_749 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 573 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallId_749, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GenericCallId_185));
#line 573 "goal_expr_to_goal.m"
                                        }
#line 563 "goal_expr_to_goal.m"
                                      }
#line 574 "goal_expr_to_goal.m"
                                    else
#line 576 "goal_expr_to_goal.m"
                                      {
#line 576 "goal_expr_to_goal.m"
                                        MR_Word hlds__make_hlds__goal_expr_to_goal__PredId_186;
#line 576 "goal_expr_to_goal.m"
                                        MR_Integer hlds__make_hlds__goal_expr_to_goal__ModeId_187;
#line 576 "goal_expr_to_goal.m"
                                        MR_Word hlds__make_hlds__goal_expr_to_goal__V_306_306;

#line 576 "goal_expr_to_goal.m"
                                        {
#line 576 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__PredId_186 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                                        }
#line 577 "goal_expr_to_goal.m"
                                        {
#line 577 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__ModeId_187 = hlds__hlds_pred__invalid_proc_id_0_f_0();
                                        }
#line 580 "goal_expr_to_goal.m"
                                        {
#line 580 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__Call_184 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 580 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_184, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__PredId_186));
#line 580 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_184, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ModeId_187));
#line 580 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_184, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HeadVars_745));
#line 580 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_184, 3) = ((MR_Box) ((MR_Integer) 2));
#line 580 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_184, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 580 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_184, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Name_163));
#line 580 "goal_expr_to_goal.m"
                                        }
#line 583 "goal_expr_to_goal.m"
                                        {
#line 583 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__V_306_306 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 583 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_306_306, 0) = ((MR_Box) ((MR_Integer) 0));
#line 583 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_306_306, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Name_163));
#line 583 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_306_306, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Arity_746));
#line 583 "goal_expr_to_goal.m"
                                        }
#line 583 "goal_expr_to_goal.m"
                                        {
#line 583 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__CallId_749 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 583 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__CallId_749, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_306_306));
#line 583 "goal_expr_to_goal.m"
                                        }
#line 576 "goal_expr_to_goal.m"
                                      }
#line 585 "goal_expr_to_goal.m"
                                    {
#line 585 "goal_expr_to_goal.m"
                                      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_775, &hlds__make_hlds__goal_expr_to_goal__GoalInfo0_189);
                                    }
#line 586 "goal_expr_to_goal.m"
                                    {
#line 586 "goal_expr_to_goal.m"
                                      hlds__hlds_goal__goal_info_set_purity_3_p_0(hlds__make_hlds__goal_expr_to_goal__Purity_778, hlds__make_hlds__goal_expr_to_goal__GoalInfo0_189, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_743);
                                    }
#line 587 "goal_expr_to_goal.m"
                                    {
#line 587 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_748 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 587 "goal_expr_to_goal.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_748, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Call_184));
#line 587 "goal_expr_to_goal.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_748, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_743));
#line 587 "goal_expr_to_goal.m"
                                    }
#line 589 "goal_expr_to_goal.m"
                                    {
#line 589 "goal_expr_to_goal.m"
                                      hlds__make_hlds__qual_info__record_called_pred_or_func_5_p_0((MR_Integer) 0, hlds__make_hlds__goal_expr_to_goal__Name_163, hlds__make_hlds__goal_expr_to_goal__Arity_746, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_309_309);
                                    }
#line 591 "goal_expr_to_goal.m"
                                    {
#line 591 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__V_310_310 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 591 "goal_expr_to_goal.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_310_310, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CallId_749));
#line 591 "goal_expr_to_goal.m"
                                    }
#line 590 "goal_expr_to_goal.m"
                                    {
#line 590 "goal_expr_to_goal.m"
                                      hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(hlds__make_hlds__goal_expr_to_goal__HeadVars_745, hlds__make_hlds__goal_expr_to_goal__ArgTerms_744, hlds__make_hlds__goal_expr_to_goal__Context_775, hlds__make_hlds__goal_expr_to_goal__V_310_310, hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_748, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_300_300, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_253_253, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_299_299, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_309_309, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_301_301, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                                    }
#line 550 "goal_expr_to_goal.m"
                                  }
#line 548 "goal_expr_to_goal.m"
                              }
#line 534 "goal_expr_to_goal.m"
                          }
#line 594 "goal_expr_to_goal.m"
                        {
#line 594 "goal_expr_to_goal.m"
                          hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_253_253, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203);
#line 594 "goal_expr_to_goal.m"
                          return;
                        }
#line 501 "goal_expr_to_goal.m"
                      }
#line 103 "goal_expr_to_goal.m"
                    else
#line 103 "goal_expr_to_goal.m"
                      if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 440 "goal_expr_to_goal.m"
                        {
#line 440 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates1_143;
#line 440 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates_144;
#line 440 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__Disjuncts_145;
#line 440 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_356_356;
#line 440 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_357_357;
#line 440 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_358_358;
#line 440 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_359_359;
#line 440 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_360_360;
#line 440 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_361_361;
#line 440 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_362_362;
#line 440 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__Context_722 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 440 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_723;
#line 440 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalA_724 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 440 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalB_725 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));

#line 442 "goal_expr_to_goal.m"
                          {
#line 442 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalB_725, hlds__make_hlds__goal_expr_to_goal__Renaming_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates1_143, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_356_356, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_357_357, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_358_358, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_359_359, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_360_360);
                          }
#line 445 "goal_expr_to_goal.m"
                          {
#line 445 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalA_724, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates1_143, &hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates_144, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_356_356, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_361_361, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_357_357, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_362_362, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_358_358, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_359_359, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_360_360, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                          }
#line 449 "goal_expr_to_goal.m"
                          {
#line 449 "goal_expr_to_goal.m"
                            hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_722, hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates_144, &hlds__make_hlds__goal_expr_to_goal__Disjuncts_145, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_362_362, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_361_361, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205);
                          }
#line 452 "goal_expr_to_goal.m"
                          {
#line 452 "goal_expr_to_goal.m"
                            hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_722, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_723);
                          }
#line 453 "goal_expr_to_goal.m"
                          {
#line 453 "goal_expr_to_goal.m"
                            hlds__hlds_goal__disj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__Disjuncts_145, hlds__make_hlds__goal_expr_to_goal__GoalInfo_723, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20);
#line 453 "goal_expr_to_goal.m"
                            return;
                          }
#line 440 "goal_expr_to_goal.m"
                        }
#line 103 "goal_expr_to_goal.m"
                      else
#line 103 "goal_expr_to_goal.m"
                        if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)))) == (MR_Integer) 17))))
#line 464 "goal_expr_to_goal.m"
                          {
#line 464 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoalA_149;
#line 464 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoalB_150;
#line 464 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_334_334;
#line 464 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_335_335;
#line 464 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_336_336;
#line 464 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_337_337;
#line 464 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_338_338;
#line 464 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_339_339;
#line 464 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_346_346;
#line 464 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__Context_728 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 464 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_729;
#line 464 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_730;
#line 464 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalA_731 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 464 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoalB_732 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 474 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_151_151;

#line 471 "goal_expr_to_goal.m"
                            {
#line 471 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalA_731, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoalA_149, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_334_334, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_335_335, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_336_336, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_337_337, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_338_338, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_339_339);
                            }
#line 474 "goal_expr_to_goal.m"
                            {
#line 474 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoalB_732, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoalB_150, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_334_334, &hlds__make_hlds__goal_expr_to_goal__V_151_151, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_335_335, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_336_336, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_337_337, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_338_338, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_339_339, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                            }
#line 477 "goal_expr_to_goal.m"
                            *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202;
#line 478 "goal_expr_to_goal.m"
                            {
#line 478 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__V_346_346 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 478 "goal_expr_to_goal.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_346_346, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoalA_149));
#line 478 "goal_expr_to_goal.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_346_346, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoalB_150));
#line 478 "goal_expr_to_goal.m"
                            }
#line 478 "goal_expr_to_goal.m"
                            {
#line 478 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__GoalExpr_729 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 478 "goal_expr_to_goal.m"
                              MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_729, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 478 "goal_expr_to_goal.m"
                              MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_729, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_346_346));
#line 478 "goal_expr_to_goal.m"
                            }
#line 479 "goal_expr_to_goal.m"
                            {
#line 479 "goal_expr_to_goal.m"
                              hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_728, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_730);
                            }
#line 480 "goal_expr_to_goal.m"
                            {
#line 480 "goal_expr_to_goal.m"
                              MR_Word base;
#line 480 "goal_expr_to_goal.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 480 "goal_expr_to_goal.m"
                              *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 480 "goal_expr_to_goal.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_729));
#line 480 "goal_expr_to_goal.m"
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_730));
#line 480 "goal_expr_to_goal.m"
                            }
#line 464 "goal_expr_to_goal.m"
                          }
#line 103 "goal_expr_to_goal.m"
                        else
#line 103 "goal_expr_to_goal.m"
                          if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 482 "goal_expr_to_goal.m"
                            {
#line 482 "goal_expr_to_goal.m"
                              MR_String hlds__make_hlds__goal_expr_to_goal__EventName_152 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 482 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms0_153 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 482 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms1_154;
#line 482 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms_155;
#line 482 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVars_156;
#line 482 "goal_expr_to_goal.m"
                              MR_Integer hlds__make_hlds__goal_expr_to_goal__Arity_157;
#line 482 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__Modes_158;
#line 482 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__Details_159;
#line 482 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr0_160;
#line 482 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_161;
#line 482 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__CallId_162;
#line 482 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_319_319;
#line 482 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_320_320;
#line 482 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_321_321;
#line 482 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_322_322;
#line 482 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_325_325;
#line 482 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_326_326;
#line 482 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_327_327;
#line 482 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__Context_734 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 482 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_735;

#line 483 "goal_expr_to_goal.m"
                              {
#line 483 "goal_expr_to_goal.m"
                                hlds__make_hlds__state_var__expand_bang_states_2_p_0(hlds__make_hlds__goal_expr_to_goal__ArgTerms0_153, &hlds__make_hlds__goal_expr_to_goal__ArgTerms1_154);
                              }
#line 484 "goal_expr_to_goal.m"
                              {
#line 484 "goal_expr_to_goal.m"
                                parse_tree__prog_data__rename_vars_in_term_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__ArgTerms1_154, &hlds__make_hlds__goal_expr_to_goal__ArgTerms_155);
                              }
#line 486 "goal_expr_to_goal.m"
                              {
#line 486 "goal_expr_to_goal.m"
                                hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(hlds__make_hlds__goal_expr_to_goal__ArgTerms_155, &hlds__make_hlds__goal_expr_to_goal__HeadVars_156, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_319_319, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_320_320, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_321_321);
                              }
#line 488 "goal_expr_to_goal.m"
                              {
#line 488 "goal_expr_to_goal.m"
                                mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0], hlds__make_hlds__goal_expr_to_goal__HeadVars_156, &hlds__make_hlds__goal_expr_to_goal__Arity_157);
                              }
#line 489 "goal_expr_to_goal.m"
                              {
#line 489 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__V_322_322 = parse_tree__prog_mode__in_mode_0_f_0();
                              }
#line 489 "goal_expr_to_goal.m"
                              {
#line 489 "goal_expr_to_goal.m"
                                mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__make_hlds__goal_expr_to_goal__Arity_157, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_322_322)), &hlds__make_hlds__goal_expr_to_goal__Modes_158);
                              }
#line 490 "goal_expr_to_goal.m"
                              {
#line 490 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__Details_159 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 490 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Details_159, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__EventName_152));
#line 490 "goal_expr_to_goal.m"
                              }
#line 491 "goal_expr_to_goal.m"
                              {
#line 491 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__GoalExpr0_160 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 491 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_160, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 491 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_160, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Details_159));
#line 491 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_160, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HeadVars_156));
#line 491 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_160, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Modes_158));
#line 491 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_160, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 491 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_160, 5) = ((MR_Box) ((MR_Integer) 0));
#line 491 "goal_expr_to_goal.m"
                              }
#line 493 "goal_expr_to_goal.m"
                              {
#line 493 "goal_expr_to_goal.m"
                                hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_734, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_735);
                              }
#line 494 "goal_expr_to_goal.m"
                              {
#line 494 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 494 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_161, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr0_160));
#line 494 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_161, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_735));
#line 494 "goal_expr_to_goal.m"
                              }
#line 495 "goal_expr_to_goal.m"
                              {
#line 495 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__V_325_325 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 495 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_325_325, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__EventName_152));
#line 495 "goal_expr_to_goal.m"
                              }
#line 495 "goal_expr_to_goal.m"
                              {
#line 495 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__CallId_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 495 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallId_162, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_325_325));
#line 495 "goal_expr_to_goal.m"
                              }
#line 496 "goal_expr_to_goal.m"
                              {
#line 496 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__V_326_326 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 496 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_326_326, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CallId_162));
#line 496 "goal_expr_to_goal.m"
                              }
#line 496 "goal_expr_to_goal.m"
                              {
#line 496 "goal_expr_to_goal.m"
                                hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(hlds__make_hlds__goal_expr_to_goal__HeadVars_156, hlds__make_hlds__goal_expr_to_goal__ArgTerms_155, hlds__make_hlds__goal_expr_to_goal__Context_734, hlds__make_hlds__goal_expr_to_goal__V_326_326, hlds__make_hlds__goal_expr_to_goal__HLDSGoal0_161, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_320_320, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_327_327, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_319_319, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_321_321, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                              }
#line 499 "goal_expr_to_goal.m"
                              {
#line 499 "goal_expr_to_goal.m"
                                hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_327_327, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203);
#line 499 "goal_expr_to_goal.m"
                                return;
                              }
#line 482 "goal_expr_to_goal.m"
                            }
#line 103 "goal_expr_to_goal.m"
                          else
#line 103 "goal_expr_to_goal.m"
                            if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 103 "goal_expr_to_goal.m"
                              {
#line 103 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 103 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_29;

#line 104 "goal_expr_to_goal.m"
                                {
#line 104 "goal_expr_to_goal.m"
                                  hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_27, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_29);
                                }
#line 105 "goal_expr_to_goal.m"
                                {
#line 105 "goal_expr_to_goal.m"
                                  MR_Word base;
#line 105 "goal_expr_to_goal.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 105 "goal_expr_to_goal.m"
                                  *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 105 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[26])));
#line 105 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_29));
#line 105 "goal_expr_to_goal.m"
                                }
#line 103 "goal_expr_to_goal.m"
                                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202;
#line 103 "goal_expr_to_goal.m"
                                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204;
#line 103 "goal_expr_to_goal.m"
                                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206;
#line 103 "goal_expr_to_goal.m"
                                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208;
#line 103 "goal_expr_to_goal.m"
                                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210;
#line 103 "goal_expr_to_goal.m"
                                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212;
#line 103 "goal_expr_to_goal.m"
                              }
#line 103 "goal_expr_to_goal.m"
                            else
#line 103 "goal_expr_to_goal.m"
                              if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)))) == (MR_Integer) 19))))
#line 383 "goal_expr_to_goal.m"
                                {
#line 383 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_811_811 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 383 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__Cond_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
#line 383 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__Then_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
#line 383 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__Else_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
#line 383 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__BeforeCondSVarState_125;
#line 383 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSCond_126;
#line 383 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__AfterCondSVarState_127;
#line 383 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSThen0_128;
#line 383 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState0_129;
#line 383 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState_130;
#line 383 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSElse0_131;
#line 383 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__AfterElseSVarState_132;
#line 383 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSThen_133;
#line 383 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSElse_134;
#line 383 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_403_403;
#line 383 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_404_404;
#line 383 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_405_405;
#line 383 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_406_406;
#line 383 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_407_407;
#line 383 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_408_408;
#line 383 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_409_409;
#line 383 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_410_410;
#line 383 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_411_411;
#line 383 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_412_412;
#line 383 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_413_413;
#line 383 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_414_414;
#line 383 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_415_415;
#line 383 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_418_418;
#line 383 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_700 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 383 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_701;
#line 383 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_702;
#line 383 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_703;
#line 383 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_704;
#line 383 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars0_705 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 383 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars0_706 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));

#line 385 "goal_expr_to_goal.m"
                                  {
#line 385 "goal_expr_to_goal.m"
                                    parse_tree__prog_data__rename_var_list_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_811_811, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__Vars0_705, &hlds__make_hlds__goal_expr_to_goal__Vars_703);
                                  }
#line 386 "goal_expr_to_goal.m"
                                  {
#line 386 "goal_expr_to_goal.m"
                                    parse_tree__prog_data__rename_var_list_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_811_811, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__StateVars0_706, &hlds__make_hlds__goal_expr_to_goal__StateVars_704);
                                  }
#line 387 "goal_expr_to_goal.m"
                                  {
#line 387 "goal_expr_to_goal.m"
                                    hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(hlds__make_hlds__goal_expr_to_goal__Context_700, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__StateVars_704, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, &hlds__make_hlds__goal_expr_to_goal__BeforeCondSVarState_125, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_403_403);
                                  }
#line 389 "goal_expr_to_goal.m"
                                  {
#line 389 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Cond_122, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSCond_126, hlds__make_hlds__goal_expr_to_goal__BeforeCondSVarState_125, &hlds__make_hlds__goal_expr_to_goal__AfterCondSVarState_127, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_404_404, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_405_405, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_406_406, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_407_407, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_403_403, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_408_408);
                                  }
#line 392 "goal_expr_to_goal.m"
                                  {
#line 392 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Then_123, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSThen0_128, hlds__make_hlds__goal_expr_to_goal__AfterCondSVarState_127, &hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState0_129, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_404_404, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_409_409, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_405_405, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_410_410, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_406_406, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_411_411, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_407_407, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_412_412, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_408_408, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_413_413);
                                  }
#line 395 "goal_expr_to_goal.m"
                                  {
#line 395 "goal_expr_to_goal.m"
                                    hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(hlds__make_hlds__goal_expr_to_goal__StateVars_704, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState0_129, &hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState_130);
                                  }
#line 397 "goal_expr_to_goal.m"
                                  {
#line 397 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Else_124, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSElse0_131, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, &hlds__make_hlds__goal_expr_to_goal__AfterElseSVarState_132, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_409_409, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_414_414, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_410_410, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_415_415, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_411_411, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_412_412, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_413_413, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_418_418);
                                  }
#line 400 "goal_expr_to_goal.m"
                                  {
#line 400 "goal_expr_to_goal.m"
                                    hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Context_700, hlds__make_hlds__goal_expr_to_goal__StateVars_704, hlds__make_hlds__goal_expr_to_goal__HLDSThen0_128, &hlds__make_hlds__goal_expr_to_goal__HLDSThen_133, hlds__make_hlds__goal_expr_to_goal__HLDSElse0_131, &hlds__make_hlds__goal_expr_to_goal__HLDSElse_134, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__AfterCondSVarState_127, hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState_130, hlds__make_hlds__goal_expr_to_goal__AfterElseSVarState_132, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_415_415, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_414_414, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_418_418, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                                  }
#line 404 "goal_expr_to_goal.m"
                                  {
#line 404 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_701 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 404 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_701, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 404 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_701, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Vars_703));
#line 404 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_701, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSCond_126));
#line 404 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_701, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSThen_133));
#line 404 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_701, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSElse_134));
#line 404 "goal_expr_to_goal.m"
                                  }
#line 405 "goal_expr_to_goal.m"
                                  {
#line 405 "goal_expr_to_goal.m"
                                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_700, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_702);
                                  }
#line 406 "goal_expr_to_goal.m"
                                  {
#line 406 "goal_expr_to_goal.m"
                                    MR_Word base;
#line 406 "goal_expr_to_goal.m"
                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 406 "goal_expr_to_goal.m"
                                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 406 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_701));
#line 406 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_702));
#line 406 "goal_expr_to_goal.m"
                                  }
#line 383 "goal_expr_to_goal.m"
                                }
#line 103 "goal_expr_to_goal.m"
                              else
#line 103 "goal_expr_to_goal.m"
                                if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 455 "goal_expr_to_goal.m"
                                  {
#line 455 "goal_expr_to_goal.m"
                                    MR_Word hlds__make_hlds__goal_expr_to_goal__P_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 455 "goal_expr_to_goal.m"
                                    MR_Word hlds__make_hlds__goal_expr_to_goal__Q_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 455 "goal_expr_to_goal.m"
                                    MR_Word hlds__make_hlds__goal_expr_to_goal__V_347_347;
#line 455 "goal_expr_to_goal.m"
                                    MR_Word hlds__make_hlds__goal_expr_to_goal__V_348_348;
#line 455 "goal_expr_to_goal.m"
                                    MR_Word hlds__make_hlds__goal_expr_to_goal__Context_726 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 455 "goal_expr_to_goal.m"
                                    MR_Word hlds__make_hlds__goal_expr_to_goal__TransformedGoal_727;

#line 459 "goal_expr_to_goal.m"
                                    {
#line 459 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__V_348_348 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 459 "goal_expr_to_goal.m"
                                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_348_348, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 459 "goal_expr_to_goal.m"
                                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_348_348, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_726));
#line 459 "goal_expr_to_goal.m"
                                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_348_348, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Q_148));
#line 459 "goal_expr_to_goal.m"
                                    }
#line 459 "goal_expr_to_goal.m"
                                    {
#line 459 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__V_347_347 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 459 "goal_expr_to_goal.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_347_347, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_726));
#line 459 "goal_expr_to_goal.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_347_347, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__P_147));
#line 459 "goal_expr_to_goal.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_347_347, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_348_348));
#line 459 "goal_expr_to_goal.m"
                                    }
#line 458 "goal_expr_to_goal.m"
                                    {
#line 458 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__TransformedGoal_727 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 458 "goal_expr_to_goal.m"
                                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_727, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 458 "goal_expr_to_goal.m"
                                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_727, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_726));
#line 458 "goal_expr_to_goal.m"
                                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedGoal_727, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_347_347));
#line 458 "goal_expr_to_goal.m"
                                    }
#line 460 "goal_expr_to_goal.m"
                                    /* direct tailcall eliminated */
#line 460 "goal_expr_to_goal.m"
                                    {
#line 460 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_18 = hlds__make_hlds__goal_expr_to_goal__TransformedGoal_727;

#line 460 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__Goal_18 = hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_18;
#line 460 "goal_expr_to_goal.m"
                                    }
#line 460 "goal_expr_to_goal.m"
                                    continue;
#line 455 "goal_expr_to_goal.m"
                                  }
#line 103 "goal_expr_to_goal.m"
                                else
#line 103 "goal_expr_to_goal.m"
                                  if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)))) == (MR_Integer) 18))))
#line 408 "goal_expr_to_goal.m"
                                    {
#line 408 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__Context_708 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 408 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_709;
#line 408 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_710;
#line 408 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_711 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 408 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_712;
#line 410 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_136_136;

#line 410 "goal_expr_to_goal.m"
                                      {
#line 410 "goal_expr_to_goal.m"
                                        hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_711, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_712, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, &hlds__make_hlds__goal_expr_to_goal__V_136_136, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                                      }
#line 413 "goal_expr_to_goal.m"
                                      *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202;
#line 414 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__GoalExpr_709 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_712);
#line 415 "goal_expr_to_goal.m"
                                      {
#line 415 "goal_expr_to_goal.m"
                                        hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_708, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_710);
                                      }
#line 416 "goal_expr_to_goal.m"
                                      {
#line 416 "goal_expr_to_goal.m"
                                        MR_Word base;
#line 416 "goal_expr_to_goal.m"
                                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 416 "goal_expr_to_goal.m"
                                        *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 416 "goal_expr_to_goal.m"
                                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_709));
#line 416 "goal_expr_to_goal.m"
                                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_710));
#line 416 "goal_expr_to_goal.m"
                                      }
#line 408 "goal_expr_to_goal.m"
                                    }
#line 103 "goal_expr_to_goal.m"
                                  else
#line 103 "goal_expr_to_goal.m"
                                    if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 183 "goal_expr_to_goal.m"
                                      {
#line 183 "goal_expr_to_goal.m"
                                        MR_Word hlds__make_hlds__goal_expr_to_goal__Context_647 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 183 "goal_expr_to_goal.m"
                                        MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_648;
#line 183 "goal_expr_to_goal.m"
                                        MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_649;
#line 183 "goal_expr_to_goal.m"
                                        MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_650 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 183 "goal_expr_to_goal.m"
                                        MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_651 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
#line 183 "goal_expr_to_goal.m"
                                        MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_652 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 183 "goal_expr_to_goal.m"
                                        MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_653;
#line 183 "goal_expr_to_goal.m"
                                        MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_654;
#line 183 "goal_expr_to_goal.m"
                                        MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars_655 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
#line 183 "goal_expr_to_goal.m"
                                        MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars_656 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
#line 183 "goal_expr_to_goal.m"
                                        MR_Word hlds__make_hlds__goal_expr_to_goal__PromiseVars_657;

#line 184 "goal_expr_to_goal.m"
                                        {
#line 184 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Vars_650, hlds__make_hlds__goal_expr_to_goal__StateVars_652, hlds__make_hlds__goal_expr_to_goal__DotSVars_655, hlds__make_hlds__goal_expr_to_goal__ColonSVars_656, hlds__make_hlds__goal_expr_to_goal__Context_647, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__PromiseVars_657, hlds__make_hlds__goal_expr_to_goal__SubGoal_651, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_653, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                                        }
#line 189 "goal_expr_to_goal.m"
                                        {
#line 189 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__Reason_654 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 189 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Reason_654, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__PromiseVars_657));
#line 189 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Reason_654, 1) = ((MR_Box) ((MR_Integer) 2));
#line 189 "goal_expr_to_goal.m"
                                        }
#line 190 "goal_expr_to_goal.m"
                                        {
#line 190 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__GoalExpr_648 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 190 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_648, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 190 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_648, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_654));
#line 190 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_648, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_653));
#line 190 "goal_expr_to_goal.m"
                                        }
#line 191 "goal_expr_to_goal.m"
                                        {
#line 191 "goal_expr_to_goal.m"
                                          hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_647, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_649);
                                        }
#line 192 "goal_expr_to_goal.m"
                                        {
#line 192 "goal_expr_to_goal.m"
                                          MR_Word base;
#line 192 "goal_expr_to_goal.m"
                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 192 "goal_expr_to_goal.m"
                                          *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 192 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_648));
#line 192 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_649));
#line 192 "goal_expr_to_goal.m"
                                        }
#line 183 "goal_expr_to_goal.m"
                                      }
#line 103 "goal_expr_to_goal.m"
                                    else
#line 103 "goal_expr_to_goal.m"
                                      if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 172 "goal_expr_to_goal.m"
                                        {
#line 172 "goal_expr_to_goal.m"
                                          MR_Word hlds__make_hlds__goal_expr_to_goal__Context_636 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 172 "goal_expr_to_goal.m"
                                          MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_637;
#line 172 "goal_expr_to_goal.m"
                                          MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_638;
#line 172 "goal_expr_to_goal.m"
                                          MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_639 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 172 "goal_expr_to_goal.m"
                                          MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_640 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
#line 172 "goal_expr_to_goal.m"
                                          MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_641 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 172 "goal_expr_to_goal.m"
                                          MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_642;
#line 172 "goal_expr_to_goal.m"
                                          MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_643;
#line 172 "goal_expr_to_goal.m"
                                          MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars_644 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
#line 172 "goal_expr_to_goal.m"
                                          MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars_645 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
#line 172 "goal_expr_to_goal.m"
                                          MR_Word hlds__make_hlds__goal_expr_to_goal__PromiseVars_646;

#line 173 "goal_expr_to_goal.m"
                                          {
#line 173 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Vars_639, hlds__make_hlds__goal_expr_to_goal__StateVars_641, hlds__make_hlds__goal_expr_to_goal__DotSVars_644, hlds__make_hlds__goal_expr_to_goal__ColonSVars_645, hlds__make_hlds__goal_expr_to_goal__Context_636, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__PromiseVars_646, hlds__make_hlds__goal_expr_to_goal__SubGoal_640, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_642, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                                          }
#line 177 "goal_expr_to_goal.m"
                                          {
#line 177 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__Reason_643 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 177 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Reason_643, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__PromiseVars_646));
#line 177 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Reason_643, 1) = ((MR_Box) ((MR_Integer) 1));
#line 177 "goal_expr_to_goal.m"
                                          }
#line 178 "goal_expr_to_goal.m"
                                          {
#line 178 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__GoalExpr_637 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 178 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_637, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 178 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_637, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_643));
#line 178 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_637, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_642));
#line 178 "goal_expr_to_goal.m"
                                          }
#line 179 "goal_expr_to_goal.m"
                                          {
#line 179 "goal_expr_to_goal.m"
                                            hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_636, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_638);
                                          }
#line 180 "goal_expr_to_goal.m"
                                          {
#line 180 "goal_expr_to_goal.m"
                                            MR_Word base;
#line 180 "goal_expr_to_goal.m"
                                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 180 "goal_expr_to_goal.m"
                                            *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 180 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_637));
#line 180 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_638));
#line 180 "goal_expr_to_goal.m"
                                          }
#line 172 "goal_expr_to_goal.m"
                                        }
#line 103 "goal_expr_to_goal.m"
                                      else
#line 103 "goal_expr_to_goal.m"
                                        if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 161 "goal_expr_to_goal.m"
                                          {
#line 161 "goal_expr_to_goal.m"
                                            MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
#line 161 "goal_expr_to_goal.m"
                                            MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
#line 161 "goal_expr_to_goal.m"
                                            MR_Word hlds__make_hlds__goal_expr_to_goal__PromiseVars_46;
#line 161 "goal_expr_to_goal.m"
                                            MR_Word hlds__make_hlds__goal_expr_to_goal__Context_628 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 161 "goal_expr_to_goal.m"
                                            MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_629;
#line 161 "goal_expr_to_goal.m"
                                            MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_630;
#line 161 "goal_expr_to_goal.m"
                                            MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_631 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 161 "goal_expr_to_goal.m"
                                            MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_632 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
#line 161 "goal_expr_to_goal.m"
                                            MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_633 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 161 "goal_expr_to_goal.m"
                                            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_634;
#line 161 "goal_expr_to_goal.m"
                                            MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_635;

#line 162 "goal_expr_to_goal.m"
                                            {
#line 162 "goal_expr_to_goal.m"
                                              hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_22_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Vars_631, hlds__make_hlds__goal_expr_to_goal__StateVars_633, hlds__make_hlds__goal_expr_to_goal__DotSVars_44, hlds__make_hlds__goal_expr_to_goal__ColonSVars_45, hlds__make_hlds__goal_expr_to_goal__Context_628, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__PromiseVars_46, hlds__make_hlds__goal_expr_to_goal__SubGoal_632, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_634, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                                            }
#line 166 "goal_expr_to_goal.m"
                                            {
#line 166 "goal_expr_to_goal.m"
                                              hlds__make_hlds__goal_expr_to_goal__Reason_635 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 166 "goal_expr_to_goal.m"
                                              MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Reason_635, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__PromiseVars_46));
#line 166 "goal_expr_to_goal.m"
                                              MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Reason_635, 1) = ((MR_Box) ((MR_Integer) 0));
#line 166 "goal_expr_to_goal.m"
                                            }
#line 167 "goal_expr_to_goal.m"
                                            {
#line 167 "goal_expr_to_goal.m"
                                              hlds__make_hlds__goal_expr_to_goal__GoalExpr_629 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 167 "goal_expr_to_goal.m"
                                              MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_629, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 167 "goal_expr_to_goal.m"
                                              MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_629, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_635));
#line 167 "goal_expr_to_goal.m"
                                              MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_629, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_634));
#line 167 "goal_expr_to_goal.m"
                                            }
#line 168 "goal_expr_to_goal.m"
                                            {
#line 168 "goal_expr_to_goal.m"
                                              hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_628, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_630);
                                            }
#line 169 "goal_expr_to_goal.m"
                                            {
#line 169 "goal_expr_to_goal.m"
                                              MR_Word base;
#line 169 "goal_expr_to_goal.m"
                                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 169 "goal_expr_to_goal.m"
                                              *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 169 "goal_expr_to_goal.m"
                                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_629));
#line 169 "goal_expr_to_goal.m"
                                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_630));
#line 169 "goal_expr_to_goal.m"
                                            }
#line 161 "goal_expr_to_goal.m"
                                          }
#line 103 "goal_expr_to_goal.m"
                                        else
#line 103 "goal_expr_to_goal.m"
                                          if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 151 "goal_expr_to_goal.m"
                                            {
#line 151 "goal_expr_to_goal.m"
                                              MR_Word hlds__make_hlds__goal_expr_to_goal__Purity_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 151 "goal_expr_to_goal.m"
                                              MR_Word hlds__make_hlds__goal_expr_to_goal__Context_622 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 151 "goal_expr_to_goal.m"
                                              MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_623;
#line 151 "goal_expr_to_goal.m"
                                              MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_624;
#line 151 "goal_expr_to_goal.m"
                                              MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_625 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 151 "goal_expr_to_goal.m"
                                              MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_626;
#line 151 "goal_expr_to_goal.m"
                                              MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_627;

#line 152 "goal_expr_to_goal.m"
                                              {
#line 152 "goal_expr_to_goal.m"
                                                hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_625, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_626, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                                              }
#line 155 "goal_expr_to_goal.m"
                                              {
#line 155 "goal_expr_to_goal.m"
                                                hlds__make_hlds__goal_expr_to_goal__Reason_627 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 155 "goal_expr_to_goal.m"
                                                MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Reason_627, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Purity_43));
#line 155 "goal_expr_to_goal.m"
                                              }
#line 156 "goal_expr_to_goal.m"
                                              {
#line 156 "goal_expr_to_goal.m"
                                                hlds__make_hlds__goal_expr_to_goal__GoalExpr_623 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 156 "goal_expr_to_goal.m"
                                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_623, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 156 "goal_expr_to_goal.m"
                                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_623, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_627));
#line 156 "goal_expr_to_goal.m"
                                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_623, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_626));
#line 156 "goal_expr_to_goal.m"
                                              }
#line 157 "goal_expr_to_goal.m"
                                              {
#line 157 "goal_expr_to_goal.m"
                                                hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_622, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_624);
                                              }
#line 158 "goal_expr_to_goal.m"
                                              {
#line 158 "goal_expr_to_goal.m"
                                                MR_Word base;
#line 158 "goal_expr_to_goal.m"
                                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 158 "goal_expr_to_goal.m"
                                                *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 158 "goal_expr_to_goal.m"
                                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_623));
#line 158 "goal_expr_to_goal.m"
                                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_624));
#line 158 "goal_expr_to_goal.m"
                                              }
#line 151 "goal_expr_to_goal.m"
                                            }
#line 103 "goal_expr_to_goal.m"
                                          else
#line 103 "goal_expr_to_goal.m"
                                            if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 202 "goal_expr_to_goal.m"
                                              {
#line 202 "goal_expr_to_goal.m"
                                                MR_Word hlds__make_hlds__goal_expr_to_goal__Var0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 202 "goal_expr_to_goal.m"
                                                MR_Word hlds__make_hlds__goal_expr_to_goal__Var_49;
#line 202 "goal_expr_to_goal.m"
                                                MR_Word hlds__make_hlds__goal_expr_to_goal__V_542_542;
#line 202 "goal_expr_to_goal.m"
                                                MR_Word hlds__make_hlds__goal_expr_to_goal__Context_663 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 202 "goal_expr_to_goal.m"
                                                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_664;
#line 202 "goal_expr_to_goal.m"
                                                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_665;
#line 202 "goal_expr_to_goal.m"
                                                MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_666 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 202 "goal_expr_to_goal.m"
                                                MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_667;

#line 203 "goal_expr_to_goal.m"
                                                {
#line 203 "goal_expr_to_goal.m"
                                                  parse_tree__prog_data__rename_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__Var0_48, &hlds__make_hlds__goal_expr_to_goal__Var_49);
                                                }
#line 204 "goal_expr_to_goal.m"
                                                {
#line 204 "goal_expr_to_goal.m"
                                                  hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_666, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_667, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                                                }
#line 207 "goal_expr_to_goal.m"
                                                {
#line 207 "goal_expr_to_goal.m"
                                                  hlds__make_hlds__goal_expr_to_goal__V_542_542 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 207 "goal_expr_to_goal.m"
                                                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_542_542, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 207 "goal_expr_to_goal.m"
                                                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_542_542, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_49));
#line 207 "goal_expr_to_goal.m"
                                                }
#line 207 "goal_expr_to_goal.m"
                                                {
#line 207 "goal_expr_to_goal.m"
                                                  hlds__make_hlds__goal_expr_to_goal__GoalExpr_664 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 207 "goal_expr_to_goal.m"
                                                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_664, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 207 "goal_expr_to_goal.m"
                                                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_664, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_542_542));
#line 207 "goal_expr_to_goal.m"
                                                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_664, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_667));
#line 207 "goal_expr_to_goal.m"
                                                }
#line 208 "goal_expr_to_goal.m"
                                                {
#line 208 "goal_expr_to_goal.m"
                                                  hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_663, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_665);
                                                }
#line 209 "goal_expr_to_goal.m"
                                                {
#line 209 "goal_expr_to_goal.m"
                                                  MR_Word base;
#line 209 "goal_expr_to_goal.m"
                                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 209 "goal_expr_to_goal.m"
                                                  *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 209 "goal_expr_to_goal.m"
                                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_664));
#line 209 "goal_expr_to_goal.m"
                                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_665));
#line 209 "goal_expr_to_goal.m"
                                                }
#line 202 "goal_expr_to_goal.m"
                                              }
#line 103 "goal_expr_to_goal.m"
                                            else
#line 103 "goal_expr_to_goal.m"
                                              if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 194 "goal_expr_to_goal.m"
                                                {
#line 194 "goal_expr_to_goal.m"
                                                  MR_Word hlds__make_hlds__goal_expr_to_goal__Detism_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 194 "goal_expr_to_goal.m"
                                                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_549_549;
#line 194 "goal_expr_to_goal.m"
                                                  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_658 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 194 "goal_expr_to_goal.m"
                                                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_659;
#line 194 "goal_expr_to_goal.m"
                                                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_660;
#line 194 "goal_expr_to_goal.m"
                                                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_661 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 194 "goal_expr_to_goal.m"
                                                  MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_662;

#line 195 "goal_expr_to_goal.m"
                                                  {
#line 195 "goal_expr_to_goal.m"
                                                    hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_661, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_662, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                                                  }
#line 198 "goal_expr_to_goal.m"
                                                  {
#line 198 "goal_expr_to_goal.m"
                                                    hlds__make_hlds__goal_expr_to_goal__V_549_549 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 198 "goal_expr_to_goal.m"
                                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_549_549, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 198 "goal_expr_to_goal.m"
                                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_549_549, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Detism_47));
#line 198 "goal_expr_to_goal.m"
                                                  }
#line 198 "goal_expr_to_goal.m"
                                                  {
#line 198 "goal_expr_to_goal.m"
                                                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_659 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 198 "goal_expr_to_goal.m"
                                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_659, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 198 "goal_expr_to_goal.m"
                                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_659, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_549_549));
#line 198 "goal_expr_to_goal.m"
                                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_659, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_662));
#line 198 "goal_expr_to_goal.m"
                                                  }
#line 199 "goal_expr_to_goal.m"
                                                  {
#line 199 "goal_expr_to_goal.m"
                                                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_658, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_660);
                                                  }
#line 200 "goal_expr_to_goal.m"
                                                  {
#line 200 "goal_expr_to_goal.m"
                                                    MR_Word base;
#line 200 "goal_expr_to_goal.m"
                                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 200 "goal_expr_to_goal.m"
                                                    *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 200 "goal_expr_to_goal.m"
                                                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_659));
#line 200 "goal_expr_to_goal.m"
                                                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_660));
#line 200 "goal_expr_to_goal.m"
                                                  }
#line 194 "goal_expr_to_goal.m"
                                                }
#line 103 "goal_expr_to_goal.m"
                                              else
#line 103 "goal_expr_to_goal.m"
                                                if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 212 "goal_expr_to_goal.m"
                                                  {
#line 212 "goal_expr_to_goal.m"
                                                    MR_Word hlds__make_hlds__goal_expr_to_goal__V_534_534;
#line 212 "goal_expr_to_goal.m"
                                                    MR_Word hlds__make_hlds__goal_expr_to_goal__Context_668 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 212 "goal_expr_to_goal.m"
                                                    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_669;
#line 212 "goal_expr_to_goal.m"
                                                    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_670;
#line 212 "goal_expr_to_goal.m"
                                                    MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_671 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
#line 212 "goal_expr_to_goal.m"
                                                    MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_672;
#line 212 "goal_expr_to_goal.m"
                                                    MR_Word hlds__make_hlds__goal_expr_to_goal__Detism_673 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 212 "goal_expr_to_goal.m"
                                                    MR_Word hlds__make_hlds__goal_expr_to_goal__Var0_674 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 212 "goal_expr_to_goal.m"
                                                    MR_Word hlds__make_hlds__goal_expr_to_goal__Var_675;

#line 213 "goal_expr_to_goal.m"
                                                    {
#line 213 "goal_expr_to_goal.m"
                                                      parse_tree__prog_data__rename_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__Var0_674, &hlds__make_hlds__goal_expr_to_goal__Var_675);
                                                    }
#line 214 "goal_expr_to_goal.m"
                                                    {
#line 214 "goal_expr_to_goal.m"
                                                      hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_671, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_672, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                                                    }
#line 217 "goal_expr_to_goal.m"
                                                    {
#line 217 "goal_expr_to_goal.m"
                                                      hlds__make_hlds__goal_expr_to_goal__V_534_534 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 217 "goal_expr_to_goal.m"
                                                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_534_534, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 217 "goal_expr_to_goal.m"
                                                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_534_534, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_675));
#line 217 "goal_expr_to_goal.m"
                                                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_534_534, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Detism_673));
#line 217 "goal_expr_to_goal.m"
                                                    }
#line 217 "goal_expr_to_goal.m"
                                                    {
#line 217 "goal_expr_to_goal.m"
                                                      hlds__make_hlds__goal_expr_to_goal__GoalExpr_669 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 217 "goal_expr_to_goal.m"
                                                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_669, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 217 "goal_expr_to_goal.m"
                                                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_669, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_534_534));
#line 217 "goal_expr_to_goal.m"
                                                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_669, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_672));
#line 217 "goal_expr_to_goal.m"
                                                    }
#line 218 "goal_expr_to_goal.m"
                                                    {
#line 218 "goal_expr_to_goal.m"
                                                      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_668, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_670);
                                                    }
#line 219 "goal_expr_to_goal.m"
                                                    {
#line 219 "goal_expr_to_goal.m"
                                                      MR_Word base;
#line 219 "goal_expr_to_goal.m"
                                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 219 "goal_expr_to_goal.m"
                                                      *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 219 "goal_expr_to_goal.m"
                                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_669));
#line 219 "goal_expr_to_goal.m"
                                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_670));
#line 219 "goal_expr_to_goal.m"
                                                    }
#line 212 "goal_expr_to_goal.m"
                                                  }
#line 103 "goal_expr_to_goal.m"
                                                else
#line 103 "goal_expr_to_goal.m"
                                                  if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 125 "goal_expr_to_goal.m"
                                                    {
#line 125 "goal_expr_to_goal.m"
                                                      MR_Word hlds__make_hlds__goal_expr_to_goal__Vars0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 125 "goal_expr_to_goal.m"
                                                      MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_35;
#line 125 "goal_expr_to_goal.m"
                                                      MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_36;
#line 125 "goal_expr_to_goal.m"
                                                      MR_Word hlds__make_hlds__goal_expr_to_goal__Context_611 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 125 "goal_expr_to_goal.m"
                                                      MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_612;
#line 125 "goal_expr_to_goal.m"
                                                      MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_613;
#line 125 "goal_expr_to_goal.m"
                                                      MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_614;
#line 125 "goal_expr_to_goal.m"
                                                      MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_615 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));

#line 126 "goal_expr_to_goal.m"
                                                      {
#line 126 "goal_expr_to_goal.m"
                                                        parse_tree__prog_data__rename_var_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__Vars0_34, &hlds__make_hlds__goal_expr_to_goal__Vars_614);
                                                      }
#line 127 "goal_expr_to_goal.m"
                                                      {
#line 127 "goal_expr_to_goal.m"
                                                        hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal_615, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_35, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                                                      }
#line 130 "goal_expr_to_goal.m"
                                                      {
#line 130 "goal_expr_to_goal.m"
                                                        hlds__make_hlds__goal_expr_to_goal__Reason_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 130 "goal_expr_to_goal.m"
                                                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Reason_36, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Vars_614));
#line 130 "goal_expr_to_goal.m"
                                                      }
#line 131 "goal_expr_to_goal.m"
                                                      {
#line 131 "goal_expr_to_goal.m"
                                                        hlds__make_hlds__goal_expr_to_goal__GoalExpr_612 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 131 "goal_expr_to_goal.m"
                                                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_612, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 131 "goal_expr_to_goal.m"
                                                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_612, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_36));
#line 131 "goal_expr_to_goal.m"
                                                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_612, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_35));
#line 131 "goal_expr_to_goal.m"
                                                      }
#line 132 "goal_expr_to_goal.m"
                                                      {
#line 132 "goal_expr_to_goal.m"
                                                        hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_611, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_613);
                                                      }
#line 133 "goal_expr_to_goal.m"
                                                      {
#line 133 "goal_expr_to_goal.m"
                                                        MR_Word base;
#line 133 "goal_expr_to_goal.m"
                                                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 133 "goal_expr_to_goal.m"
                                                        *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 133 "goal_expr_to_goal.m"
                                                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_612));
#line 133 "goal_expr_to_goal.m"
                                                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_613));
#line 133 "goal_expr_to_goal.m"
                                                      }
#line 125 "goal_expr_to_goal.m"
                                                    }
#line 103 "goal_expr_to_goal.m"
                                                  else
#line 103 "goal_expr_to_goal.m"
                                                    if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 135 "goal_expr_to_goal.m"
                                                      {
#line 135 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 135 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 135 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_40;
#line 135 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_41;
#line 135 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_578_578;
#line 135 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__Context_616 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 135 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_617;
#line 135 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_618;
#line 135 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_619;
#line 135 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_620;

#line 137 "goal_expr_to_goal.m"
                                                        {
#line 137 "goal_expr_to_goal.m"
                                                          parse_tree__prog_data__rename_var_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__StateVars0_37, &hlds__make_hlds__goal_expr_to_goal__StateVars_619);
                                                        }
#line 138 "goal_expr_to_goal.m"
                                                        {
#line 138 "goal_expr_to_goal.m"
                                                          hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(hlds__make_hlds__goal_expr_to_goal__Context_616, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__StateVars_619, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, &hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_578_578);
                                                        }
#line 140 "goal_expr_to_goal.m"
                                                        {
#line 140 "goal_expr_to_goal.m"
                                                          hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal0_38, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_620, hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_40, &hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_41, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_578_578, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                                                        }
#line 143 "goal_expr_to_goal.m"
                                                        {
#line 143 "goal_expr_to_goal.m"
                                                          hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(hlds__make_hlds__goal_expr_to_goal__StateVars_619, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_41, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203);
                                                        }
#line 147 "goal_expr_to_goal.m"
                                                        {
#line 147 "goal_expr_to_goal.m"
                                                          hlds__make_hlds__goal_expr_to_goal__GoalExpr_617 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 147 "goal_expr_to_goal.m"
                                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_617, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 147 "goal_expr_to_goal.m"
                                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_617, 1) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_2[6]));
#line 147 "goal_expr_to_goal.m"
                                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_617, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_620));
#line 147 "goal_expr_to_goal.m"
                                                        }
#line 148 "goal_expr_to_goal.m"
                                                        {
#line 148 "goal_expr_to_goal.m"
                                                          hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_616, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_618);
                                                        }
#line 149 "goal_expr_to_goal.m"
                                                        {
#line 149 "goal_expr_to_goal.m"
                                                          MR_Word base;
#line 149 "goal_expr_to_goal.m"
                                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 149 "goal_expr_to_goal.m"
                                                          *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 149 "goal_expr_to_goal.m"
                                                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_617));
#line 149 "goal_expr_to_goal.m"
                                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_618));
#line 149 "goal_expr_to_goal.m"
                                                        }
#line 135 "goal_expr_to_goal.m"
                                                      }
#line 103 "goal_expr_to_goal.m"
                                                    else
#line 103 "goal_expr_to_goal.m"
                                                      if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 314 "goal_expr_to_goal.m"
                                                        {
#line 314 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_807_807;
#line 314 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCompileTime_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 314 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeRunTime_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 314 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeIO_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
#line 314 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__Mutables_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
#line 314 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__MutableHLDSs_98;
#line 314 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__MutableStateVars_99;
#line 314 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__MutableGetGoals_100;
#line 314 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__MutableSetGoals_101;
#line 314 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_104;
#line 314 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__GetGoals_107;
#line 314 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__SetGoals_108;
#line 314 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal1_109;
#line 314 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__V_467_467;
#line 314 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__V_468_468;
#line 314 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__V_469_469;
#line 314 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__V_470_470;
#line 314 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_473_473;
#line 314 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__Context_683 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 314 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_684;
#line 314 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_685;
#line 314 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_686;
#line 314 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_687;
#line 314 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_688;
#line 314 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars0_689;
#line 314 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal0_690 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
#line 314 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_691;
#line 314 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_692;

#line 315 "goal_expr_to_goal.m"
                                                          {
#line 315 "goal_expr_to_goal.m"
                                                            hlds__make_hlds__goal_expr_to_goal__V_467_467 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 315 "goal_expr_to_goal.m"
                                                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_467_467, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_4[0]));
#line 315 "goal_expr_to_goal.m"
                                                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_467_467, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0_1));
#line 315 "goal_expr_to_goal.m"
                                                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_467_467, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 315 "goal_expr_to_goal.m"
                                                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_467_467, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_683));
#line 315 "goal_expr_to_goal.m"
                                                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_467_467, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206));
#line 315 "goal_expr_to_goal.m"
                                                          }
#line 8421 "hlds.make_hlds.goal_expr_to_goal.c"
                                                          hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_807_807 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0;
#line 315 "goal_expr_to_goal.m"
                                                          {
#line 315 "goal_expr_to_goal.m"
                                                            mercury__list__map4_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0, (MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0], hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_807_807, hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_807_807, hlds__make_hlds__goal_expr_to_goal__V_467_467, hlds__make_hlds__goal_expr_to_goal__Mutables_97, &hlds__make_hlds__goal_expr_to_goal__MutableHLDSs_98, &hlds__make_hlds__goal_expr_to_goal__MutableStateVars_99, &hlds__make_hlds__goal_expr_to_goal__MutableGetGoals_100, &hlds__make_hlds__goal_expr_to_goal__MutableSetGoals_101);
                                                          }
#line 325 "goal_expr_to_goal.m"
                                                          if ((hlds__make_hlds__goal_expr_to_goal__MaybeIO_96 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 326 "goal_expr_to_goal.m"
                                                            {
#line 327 "goal_expr_to_goal.m"
                                                              hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_104 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 328 "goal_expr_to_goal.m"
                                                              hlds__make_hlds__goal_expr_to_goal__StateVars0_689 = hlds__make_hlds__goal_expr_to_goal__MutableStateVars_99;
#line 329 "goal_expr_to_goal.m"
                                                              hlds__make_hlds__goal_expr_to_goal__GetGoals_107 = hlds__make_hlds__goal_expr_to_goal__MutableGetGoals_100;
#line 330 "goal_expr_to_goal.m"
                                                              hlds__make_hlds__goal_expr_to_goal__SetGoals_108 = hlds__make_hlds__goal_expr_to_goal__MutableSetGoals_101;
#line 326 "goal_expr_to_goal.m"
                                                            }
#line 325 "goal_expr_to_goal.m"
                                                          else
#line 318 "goal_expr_to_goal.m"
                                                            {
#line 318 "goal_expr_to_goal.m"
                                                              MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeIO_96, (MR_Integer) 0)));
#line 318 "goal_expr_to_goal.m"
                                                              MR_String hlds__make_hlds__goal_expr_to_goal__IOStateVarName_103;
#line 318 "goal_expr_to_goal.m"
                                                              MR_Word hlds__make_hlds__goal_expr_to_goal__IOGetGoal_105;
#line 318 "goal_expr_to_goal.m"
                                                              MR_Word hlds__make_hlds__goal_expr_to_goal__IOSetGoal_106;

#line 319 "goal_expr_to_goal.m"
                                                              {
#line 319 "goal_expr_to_goal.m"
                                                                mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__IOStateVar_102, &hlds__make_hlds__goal_expr_to_goal__IOStateVarName_103);
                                                              }
#line 320 "goal_expr_to_goal.m"
                                                              {
#line 320 "goal_expr_to_goal.m"
                                                                hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 320 "goal_expr_to_goal.m"
                                                                MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_104, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVarName_103));
#line 320 "goal_expr_to_goal.m"
                                                              }
#line 321 "goal_expr_to_goal.m"
                                                              {
#line 321 "goal_expr_to_goal.m"
                                                                hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_4_p_0(hlds__make_hlds__goal_expr_to_goal__Context_683, hlds__make_hlds__goal_expr_to_goal__IOStateVar_102, &hlds__make_hlds__goal_expr_to_goal__IOGetGoal_105, &hlds__make_hlds__goal_expr_to_goal__IOSetGoal_106);
                                                              }
#line 322 "goal_expr_to_goal.m"
                                                              {
#line 322 "goal_expr_to_goal.m"
                                                                hlds__make_hlds__goal_expr_to_goal__StateVars0_689 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 322 "goal_expr_to_goal.m"
                                                                MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__StateVars0_689, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVar_102));
#line 322 "goal_expr_to_goal.m"
                                                                MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__StateVars0_689, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MutableStateVars_99));
#line 322 "goal_expr_to_goal.m"
                                                              }
#line 323 "goal_expr_to_goal.m"
                                                              {
#line 323 "goal_expr_to_goal.m"
                                                                hlds__make_hlds__goal_expr_to_goal__GetGoals_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "goal_expr_to_goal.m"
                                                                MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__GetGoals_107, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOGetGoal_105));
#line 323 "goal_expr_to_goal.m"
                                                                MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__GetGoals_107, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MutableGetGoals_100));
#line 323 "goal_expr_to_goal.m"
                                                              }
#line 324 "goal_expr_to_goal.m"
                                                              {
#line 324 "goal_expr_to_goal.m"
                                                                hlds__make_hlds__goal_expr_to_goal__SetGoals_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "goal_expr_to_goal.m"
                                                                MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SetGoals_108, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOSetGoal_106));
#line 324 "goal_expr_to_goal.m"
                                                                MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SetGoals_108, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MutableSetGoals_101));
#line 324 "goal_expr_to_goal.m"
                                                              }
#line 318 "goal_expr_to_goal.m"
                                                            }
#line 333 "goal_expr_to_goal.m"
                                                          {
#line 333 "goal_expr_to_goal.m"
                                                            hlds__make_hlds__goal_expr_to_goal__V_470_470 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "goal_expr_to_goal.m"
                                                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_470_470, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal0_690));
#line 333 "goal_expr_to_goal.m"
                                                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_470_470, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 333 "goal_expr_to_goal.m"
                                                          }
#line 333 "goal_expr_to_goal.m"
                                                          {
#line 333 "goal_expr_to_goal.m"
                                                            hlds__make_hlds__goal_expr_to_goal__V_469_469 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_807_807, hlds__make_hlds__goal_expr_to_goal__V_470_470, hlds__make_hlds__goal_expr_to_goal__SetGoals_108);
                                                          }
#line 333 "goal_expr_to_goal.m"
                                                          {
#line 333 "goal_expr_to_goal.m"
                                                            hlds__make_hlds__goal_expr_to_goal__V_468_468 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_807_807, hlds__make_hlds__goal_expr_to_goal__GetGoals_107, hlds__make_hlds__goal_expr_to_goal__V_469_469);
                                                          }
#line 333 "goal_expr_to_goal.m"
                                                          {
#line 333 "goal_expr_to_goal.m"
                                                            hlds__make_hlds__goal_expr_to_goal__SubGoal1_109 = parse_tree__prog_util__goal_list_to_conj_2_f_0(hlds__make_hlds__goal_expr_to_goal__Context_683, hlds__make_hlds__goal_expr_to_goal__V_468_468);
                                                          }
#line 335 "goal_expr_to_goal.m"
                                                          {
#line 335 "goal_expr_to_goal.m"
                                                            parse_tree__prog_data__rename_var_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__StateVars0_689, &hlds__make_hlds__goal_expr_to_goal__StateVars_686);
                                                          }
#line 336 "goal_expr_to_goal.m"
                                                          {
#line 336 "goal_expr_to_goal.m"
                                                            hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(hlds__make_hlds__goal_expr_to_goal__Context_683, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__StateVars_686, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, &hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_691, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_473_473);
                                                          }
#line 338 "goal_expr_to_goal.m"
                                                          {
#line 338 "goal_expr_to_goal.m"
                                                            hlds__make_hlds__goal_expr_to_goal__transform_parse_tree_goal_to_hlds_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal1_109, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_687, hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_691, &hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_692, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_473_473, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                                                          }
#line 341 "goal_expr_to_goal.m"
                                                          {
#line 341 "goal_expr_to_goal.m"
                                                            hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(hlds__make_hlds__goal_expr_to_goal__StateVars_686, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_692, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203);
                                                          }
#line 345 "goal_expr_to_goal.m"
                                                          {
#line 345 "goal_expr_to_goal.m"
                                                            hlds__make_hlds__goal_expr_to_goal__Reason_688 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 345 "goal_expr_to_goal.m"
                                                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_688, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 345 "goal_expr_to_goal.m"
                                                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_688, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MaybeCompileTime_94));
#line 345 "goal_expr_to_goal.m"
                                                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_688, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MaybeRunTime_95));
#line 345 "goal_expr_to_goal.m"
                                                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_688, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_104));
#line 345 "goal_expr_to_goal.m"
                                                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_688, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MutableHLDSs_98));
#line 345 "goal_expr_to_goal.m"
                                                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_688, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 345 "goal_expr_to_goal.m"
                                                          }
#line 347 "goal_expr_to_goal.m"
                                                          {
#line 347 "goal_expr_to_goal.m"
                                                            hlds__make_hlds__goal_expr_to_goal__GoalExpr_684 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 347 "goal_expr_to_goal.m"
                                                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_684, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 347 "goal_expr_to_goal.m"
                                                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_684, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_688));
#line 347 "goal_expr_to_goal.m"
                                                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_684, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSSubGoal_687));
#line 347 "goal_expr_to_goal.m"
                                                          }
#line 348 "goal_expr_to_goal.m"
                                                          {
#line 348 "goal_expr_to_goal.m"
                                                            hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_683, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_685);
                                                          }
#line 349 "goal_expr_to_goal.m"
                                                          {
#line 349 "goal_expr_to_goal.m"
                                                            MR_Word base;
#line 349 "goal_expr_to_goal.m"
                                                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 349 "goal_expr_to_goal.m"
                                                            *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = base;
#line 349 "goal_expr_to_goal.m"
                                                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_684));
#line 349 "goal_expr_to_goal.m"
                                                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_685));
#line 349 "goal_expr_to_goal.m"
                                                          }
#line 314 "goal_expr_to_goal.m"
                                                        }
#line 103 "goal_expr_to_goal.m"
                                                      else
#line 103 "goal_expr_to_goal.m"
                                                        if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Goal_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 352 "goal_expr_to_goal.m"
                                                          {
#line 352 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeIO0_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 352 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__Then0_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
#line 352 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeElse0_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 5)));
#line 352 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__Catches0_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 6)));
#line 352 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 7)));
#line 352 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__Context_697 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 352 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal0_698 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));

#line 374 "goal_expr_to_goal.m"
                                                            if ((hlds__make_hlds__goal_expr_to_goal__MaybeIO0_112 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 375 "goal_expr_to_goal.m"
                                                              {
#line 375 "goal_expr_to_goal.m"
                                                                hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__SubGoal0_698, hlds__make_hlds__goal_expr_to_goal__Then0_113, hlds__make_hlds__goal_expr_to_goal__MaybeElse0_114, hlds__make_hlds__goal_expr_to_goal__Catches0_115, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_116, hlds__make_hlds__goal_expr_to_goal__Context_697, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
#line 375 "goal_expr_to_goal.m"
                                                                return;
                                                              }
#line 374 "goal_expr_to_goal.m"
                                                            else
#line 354 "goal_expr_to_goal.m"
                                                              {
#line 354 "goal_expr_to_goal.m"
                                                                MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar0_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeIO0_112, (MR_Integer) 0)));

#line 362 "goal_expr_to_goal.m"
                                                                if ((hlds__make_hlds__goal_expr_to_goal__MaybeElse0_114 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 356 "goal_expr_to_goal.m"
                                                                  {
#line 356 "goal_expr_to_goal.m"
                                                                    MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar_693;

#line 357 "goal_expr_to_goal.m"
                                                                    {
#line 357 "goal_expr_to_goal.m"
                                                                      parse_tree__prog_data__rename_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__IOStateVar0_117, &hlds__make_hlds__goal_expr_to_goal__IOStateVar_693);
                                                                    }
#line 358 "goal_expr_to_goal.m"
                                                                    {
#line 358 "goal_expr_to_goal.m"
                                                                      hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__IOStateVar0_117, hlds__make_hlds__goal_expr_to_goal__IOStateVar_693, hlds__make_hlds__goal_expr_to_goal__SubGoal0_698, hlds__make_hlds__goal_expr_to_goal__Then0_113, hlds__make_hlds__goal_expr_to_goal__Catches0_115, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_116, hlds__make_hlds__goal_expr_to_goal__Context_697, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
#line 358 "goal_expr_to_goal.m"
                                                                      return;
                                                                    }
#line 356 "goal_expr_to_goal.m"
                                                                  }
#line 362 "goal_expr_to_goal.m"
                                                                else
#line 363 "goal_expr_to_goal.m"
                                                                  {
#line 363 "goal_expr_to_goal.m"
                                                                    MR_Word hlds__make_hlds__goal_expr_to_goal__Msg_120;
#line 363 "goal_expr_to_goal.m"
                                                                    MR_Word hlds__make_hlds__goal_expr_to_goal__Spec_121;
#line 363 "goal_expr_to_goal.m"
                                                                    MR_Word hlds__make_hlds__goal_expr_to_goal__V_457_457;

#line 368 "goal_expr_to_goal.m"
                                                                    {
#line 368 "goal_expr_to_goal.m"
                                                                      hlds__make_hlds__goal_expr_to_goal__Msg_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 368 "goal_expr_to_goal.m"
                                                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Msg_120, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_697));
#line 368 "goal_expr_to_goal.m"
                                                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Msg_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[27])));
#line 368 "goal_expr_to_goal.m"
                                                                    }
#line 370 "goal_expr_to_goal.m"
                                                                    {
#line 370 "goal_expr_to_goal.m"
                                                                      hlds__make_hlds__goal_expr_to_goal__V_457_457 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 370 "goal_expr_to_goal.m"
                                                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_457_457, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Msg_120));
#line 370 "goal_expr_to_goal.m"
                                                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_457_457, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 370 "goal_expr_to_goal.m"
                                                                    }
#line 369 "goal_expr_to_goal.m"
                                                                    {
#line 369 "goal_expr_to_goal.m"
                                                                      hlds__make_hlds__goal_expr_to_goal__Spec_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 369 "goal_expr_to_goal.m"
                                                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_121, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 369 "goal_expr_to_goal.m"
                                                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 369 "goal_expr_to_goal.m"
                                                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_121, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_457_457));
#line 369 "goal_expr_to_goal.m"
                                                                    }
#line 371 "goal_expr_to_goal.m"
                                                                    {
#line 371 "goal_expr_to_goal.m"
                                                                      MR_Word base;
#line 371 "goal_expr_to_goal.m"
                                                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 371 "goal_expr_to_goal.m"
                                                                      *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213 = base;
#line 371 "goal_expr_to_goal.m"
                                                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Spec_121));
#line 371 "goal_expr_to_goal.m"
                                                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212));
#line 371 "goal_expr_to_goal.m"
                                                                    }
#line 372 "goal_expr_to_goal.m"
                                                                    {
#line 372 "goal_expr_to_goal.m"
                                                                      *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = hlds__make_goal__true_goal_with_context_1_f_0(hlds__make_hlds__goal_expr_to_goal__Context_697);
                                                                    }
#line 363 "goal_expr_to_goal.m"
                                                                    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202;
#line 363 "goal_expr_to_goal.m"
                                                                    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204;
#line 363 "goal_expr_to_goal.m"
                                                                    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206;
#line 363 "goal_expr_to_goal.m"
                                                                    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208;
#line 363 "goal_expr_to_goal.m"
                                                                    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210;
#line 363 "goal_expr_to_goal.m"
                                                                  }
#line 354 "goal_expr_to_goal.m"
                                                              }
#line 352 "goal_expr_to_goal.m"
                                                          }
#line 103 "goal_expr_to_goal.m"
                                                        else
#line 596 "goal_expr_to_goal.m"
                                                          {
#line 596 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_820_820 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 596 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__TermA0_190 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 2)));
#line 596 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__TermB0_191 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 3)));
#line 596 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__TermA_192;
#line 596 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__TermB_193;
#line 596 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__Context_788 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));
#line 596 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__Purity_789 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 4)));
#line 611 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__StateVarA_194;
#line 601 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_216_216;
#line 601 "goal_expr_to_goal.m"
                                                            MR_String hlds__make_hlds__goal_expr_to_goal__V_217_217;
#line 601 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_218_218;
#line 601 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_219_219;
#line 601 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_220_220;
#line 601 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_196_196;
#line 601 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_195_195;

#line 597 "goal_expr_to_goal.m"
                                                            {
#line 597 "goal_expr_to_goal.m"
                                                              parse_tree__prog_data__rename_vars_in_term_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_820_820, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__TermA0_190, &hlds__make_hlds__goal_expr_to_goal__TermA_192);
                                                            }
#line 598 "goal_expr_to_goal.m"
                                                            {
#line 598 "goal_expr_to_goal.m"
                                                              parse_tree__prog_data__rename_vars_in_term_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_820_820, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__TermB0_191, &hlds__make_hlds__goal_expr_to_goal__TermB_193);
                                                            }
#line 601 "goal_expr_to_goal.m"
                                                            hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__TermA_192)) == (MR_mktag((MR_Integer) 0)));
#line 601 "goal_expr_to_goal.m"
                                                            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 601 "goal_expr_to_goal.m"
                                                              {
#line 601 "goal_expr_to_goal.m"
                                                                hlds__make_hlds__goal_expr_to_goal__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermA_192, (MR_Integer) 0)));
#line 601 "goal_expr_to_goal.m"
                                                                hlds__make_hlds__goal_expr_to_goal__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermA_192, (MR_Integer) 1)));
#line 601 "goal_expr_to_goal.m"
                                                                hlds__make_hlds__goal_expr_to_goal__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermA_192, (MR_Integer) 2)));
#line 601 "goal_expr_to_goal.m"
                                                                hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_216_216)) == (MR_mktag((MR_Integer) 0)));
#line 601 "goal_expr_to_goal.m"
                                                                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 601 "goal_expr_to_goal.m"
                                                                  {
#line 601 "goal_expr_to_goal.m"
                                                                    hlds__make_hlds__goal_expr_to_goal__V_217_217 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_216_216, (MR_Integer) 0)));
#line 601 "goal_expr_to_goal.m"
                                                                    hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_217_217, (MR_String) "!") == 0);
#line 601 "goal_expr_to_goal.m"
                                                                    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 601 "goal_expr_to_goal.m"
                                                                      {
#line 601 "goal_expr_to_goal.m"
                                                                        hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_218_218)) == (MR_mktag((MR_Integer) 1)));
#line 601 "goal_expr_to_goal.m"
                                                                        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 601 "goal_expr_to_goal.m"
                                                                          {
#line 601 "goal_expr_to_goal.m"
                                                                            hlds__make_hlds__goal_expr_to_goal__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_218_218, (MR_Integer) 0)));
#line 601 "goal_expr_to_goal.m"
                                                                            hlds__make_hlds__goal_expr_to_goal__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_218_218, (MR_Integer) 1)));
#line 601 "goal_expr_to_goal.m"
                                                                            hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_220_220 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 601 "goal_expr_to_goal.m"
                                                                            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 601 "goal_expr_to_goal.m"
                                                                              {
#line 601 "goal_expr_to_goal.m"
                                                                                hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_219_219)) == (MR_mktag((MR_Integer) 1)));
#line 601 "goal_expr_to_goal.m"
                                                                                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 601 "goal_expr_to_goal.m"
                                                                                  {
#line 601 "goal_expr_to_goal.m"
                                                                                    hlds__make_hlds__goal_expr_to_goal__StateVarA_194 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_219_219, (MR_Integer) 0)));
#line 601 "goal_expr_to_goal.m"
                                                                                    hlds__make_hlds__goal_expr_to_goal__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_219_219, (MR_Integer) 1)));
#line 601 "goal_expr_to_goal.m"
                                                                                  }
#line 601 "goal_expr_to_goal.m"
                                                                              }
#line 601 "goal_expr_to_goal.m"
                                                                          }
#line 601 "goal_expr_to_goal.m"
                                                                      }
#line 601 "goal_expr_to_goal.m"
                                                                  }
#line 601 "goal_expr_to_goal.m"
                                                              }
#line 611 "goal_expr_to_goal.m"
                                                            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 603 "goal_expr_to_goal.m"
                                                              {
#line 603 "goal_expr_to_goal.m"
                                                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_221_221;
#line 603 "goal_expr_to_goal.m"
                                                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_222_222;
#line 603 "goal_expr_to_goal.m"
                                                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_223_223;
#line 607 "goal_expr_to_goal.m"
                                                                MR_Word hlds__make_hlds__goal_expr_to_goal__StateVarB_197;
#line 604 "goal_expr_to_goal.m"
                                                                MR_Word hlds__make_hlds__goal_expr_to_goal__V_224_224;
#line 604 "goal_expr_to_goal.m"
                                                                MR_String hlds__make_hlds__goal_expr_to_goal__V_225_225;
#line 604 "goal_expr_to_goal.m"
                                                                MR_Word hlds__make_hlds__goal_expr_to_goal__V_226_226;
#line 604 "goal_expr_to_goal.m"
                                                                MR_Word hlds__make_hlds__goal_expr_to_goal__V_227_227;
#line 604 "goal_expr_to_goal.m"
                                                                MR_Word hlds__make_hlds__goal_expr_to_goal__V_228_228;
#line 604 "goal_expr_to_goal.m"
                                                                MR_Word hlds__make_hlds__goal_expr_to_goal__V_199_199;
#line 604 "goal_expr_to_goal.m"
                                                                MR_Word hlds__make_hlds__goal_expr_to_goal__V_198_198;

#line 602 "goal_expr_to_goal.m"
                                                                {
#line 602 "goal_expr_to_goal.m"
                                                                  hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(hlds__make_hlds__goal_expr_to_goal__Context_788, hlds__make_hlds__goal_expr_to_goal__StateVarA_194, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_221_221, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_222_222, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_223_223);
                                                                }
#line 604 "goal_expr_to_goal.m"
                                                                hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__TermB_193)) == (MR_mktag((MR_Integer) 0)));
#line 604 "goal_expr_to_goal.m"
                                                                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 604 "goal_expr_to_goal.m"
                                                                  {
#line 604 "goal_expr_to_goal.m"
                                                                    hlds__make_hlds__goal_expr_to_goal__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermB_193, (MR_Integer) 0)));
#line 604 "goal_expr_to_goal.m"
                                                                    hlds__make_hlds__goal_expr_to_goal__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermB_193, (MR_Integer) 1)));
#line 604 "goal_expr_to_goal.m"
                                                                    hlds__make_hlds__goal_expr_to_goal__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermB_193, (MR_Integer) 2)));
#line 604 "goal_expr_to_goal.m"
                                                                    hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_224_224)) == (MR_mktag((MR_Integer) 0)));
#line 604 "goal_expr_to_goal.m"
                                                                    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 604 "goal_expr_to_goal.m"
                                                                      {
#line 604 "goal_expr_to_goal.m"
                                                                        hlds__make_hlds__goal_expr_to_goal__V_225_225 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_224_224, (MR_Integer) 0)));
#line 604 "goal_expr_to_goal.m"
                                                                        hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_225_225, (MR_String) "!") == 0);
#line 604 "goal_expr_to_goal.m"
                                                                        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 604 "goal_expr_to_goal.m"
                                                                          {
#line 604 "goal_expr_to_goal.m"
                                                                            hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_226_226)) == (MR_mktag((MR_Integer) 1)));
#line 604 "goal_expr_to_goal.m"
                                                                            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 604 "goal_expr_to_goal.m"
                                                                              {
#line 604 "goal_expr_to_goal.m"
                                                                                hlds__make_hlds__goal_expr_to_goal__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_226_226, (MR_Integer) 0)));
#line 604 "goal_expr_to_goal.m"
                                                                                hlds__make_hlds__goal_expr_to_goal__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_226_226, (MR_Integer) 1)));
#line 604 "goal_expr_to_goal.m"
                                                                                hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_228_228 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 604 "goal_expr_to_goal.m"
                                                                                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 604 "goal_expr_to_goal.m"
                                                                                  {
#line 604 "goal_expr_to_goal.m"
                                                                                    hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_227_227)) == (MR_mktag((MR_Integer) 1)));
#line 604 "goal_expr_to_goal.m"
                                                                                    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 604 "goal_expr_to_goal.m"
                                                                                      {
#line 604 "goal_expr_to_goal.m"
                                                                                        hlds__make_hlds__goal_expr_to_goal__StateVarB_197 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_227_227, (MR_Integer) 0)));
#line 604 "goal_expr_to_goal.m"
                                                                                        hlds__make_hlds__goal_expr_to_goal__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_227_227, (MR_Integer) 1)));
#line 604 "goal_expr_to_goal.m"
                                                                                      }
#line 604 "goal_expr_to_goal.m"
                                                                                  }
#line 604 "goal_expr_to_goal.m"
                                                                              }
#line 604 "goal_expr_to_goal.m"
                                                                          }
#line 604 "goal_expr_to_goal.m"
                                                                      }
#line 604 "goal_expr_to_goal.m"
                                                                  }
#line 607 "goal_expr_to_goal.m"
                                                                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 605 "goal_expr_to_goal.m"
                                                                  {
#line 605 "goal_expr_to_goal.m"
                                                                    hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(hlds__make_hlds__goal_expr_to_goal__Context_788, hlds__make_hlds__goal_expr_to_goal__StateVarB_197, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_221_221, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_222_222, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_223_223, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                                                                  }
#line 607 "goal_expr_to_goal.m"
                                                                else
#line 608 "goal_expr_to_goal.m"
                                                                  {
#line 608 "goal_expr_to_goal.m"
                                                                    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_223_223;
#line 608 "goal_expr_to_goal.m"
                                                                    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_221_221;
#line 608 "goal_expr_to_goal.m"
                                                                    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_222_222;
#line 608 "goal_expr_to_goal.m"
                                                                  }
#line 610 "goal_expr_to_goal.m"
                                                                {
#line 610 "goal_expr_to_goal.m"
                                                                  *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = hlds__make_goal__true_goal_with_context_1_f_0(hlds__make_hlds__goal_expr_to_goal__Context_788);
                                                                }
#line 603 "goal_expr_to_goal.m"
                                                                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210;
#line 603 "goal_expr_to_goal.m"
                                                                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208;
#line 603 "goal_expr_to_goal.m"
                                                                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204;
#line 603 "goal_expr_to_goal.m"
                                                              }
#line 611 "goal_expr_to_goal.m"
                                                            else
#line 615 "goal_expr_to_goal.m"
                                                              {
#line 615 "goal_expr_to_goal.m"
                                                                MR_Word hlds__make_hlds__goal_expr_to_goal__StateVarB_787;
#line 611 "goal_expr_to_goal.m"
                                                                MR_Word hlds__make_hlds__goal_expr_to_goal__V_232_232;
#line 611 "goal_expr_to_goal.m"
                                                                MR_String hlds__make_hlds__goal_expr_to_goal__V_233_233;
#line 611 "goal_expr_to_goal.m"
                                                                MR_Word hlds__make_hlds__goal_expr_to_goal__V_234_234;
#line 611 "goal_expr_to_goal.m"
                                                                MR_Word hlds__make_hlds__goal_expr_to_goal__V_235_235;
#line 611 "goal_expr_to_goal.m"
                                                                MR_Word hlds__make_hlds__goal_expr_to_goal__V_236_236;
#line 611 "goal_expr_to_goal.m"
                                                                MR_Word hlds__make_hlds__goal_expr_to_goal__V_201_201;
#line 611 "goal_expr_to_goal.m"
                                                                MR_Word hlds__make_hlds__goal_expr_to_goal__V_200_200;

#line 611 "goal_expr_to_goal.m"
                                                                hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__TermB_193)) == (MR_mktag((MR_Integer) 0)));
#line 611 "goal_expr_to_goal.m"
                                                                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 611 "goal_expr_to_goal.m"
                                                                  {
#line 611 "goal_expr_to_goal.m"
                                                                    hlds__make_hlds__goal_expr_to_goal__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermB_193, (MR_Integer) 0)));
#line 611 "goal_expr_to_goal.m"
                                                                    hlds__make_hlds__goal_expr_to_goal__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermB_193, (MR_Integer) 1)));
#line 611 "goal_expr_to_goal.m"
                                                                    hlds__make_hlds__goal_expr_to_goal__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__TermB_193, (MR_Integer) 2)));
#line 611 "goal_expr_to_goal.m"
                                                                    hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_232_232)) == (MR_mktag((MR_Integer) 0)));
#line 611 "goal_expr_to_goal.m"
                                                                    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 611 "goal_expr_to_goal.m"
                                                                      {
#line 611 "goal_expr_to_goal.m"
                                                                        hlds__make_hlds__goal_expr_to_goal__V_233_233 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_232_232, (MR_Integer) 0)));
#line 611 "goal_expr_to_goal.m"
                                                                        hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_233_233, (MR_String) "!") == 0);
#line 611 "goal_expr_to_goal.m"
                                                                        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 611 "goal_expr_to_goal.m"
                                                                          {
#line 611 "goal_expr_to_goal.m"
                                                                            hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_234_234)) == (MR_mktag((MR_Integer) 1)));
#line 611 "goal_expr_to_goal.m"
                                                                            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 611 "goal_expr_to_goal.m"
                                                                              {
#line 611 "goal_expr_to_goal.m"
                                                                                hlds__make_hlds__goal_expr_to_goal__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_234_234, (MR_Integer) 0)));
#line 611 "goal_expr_to_goal.m"
                                                                                hlds__make_hlds__goal_expr_to_goal__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_234_234, (MR_Integer) 1)));
#line 611 "goal_expr_to_goal.m"
                                                                                hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_236_236 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 611 "goal_expr_to_goal.m"
                                                                                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 611 "goal_expr_to_goal.m"
                                                                                  {
#line 611 "goal_expr_to_goal.m"
                                                                                    hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_235_235)) == (MR_mktag((MR_Integer) 1)));
#line 611 "goal_expr_to_goal.m"
                                                                                    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 611 "goal_expr_to_goal.m"
                                                                                      {
#line 611 "goal_expr_to_goal.m"
                                                                                        hlds__make_hlds__goal_expr_to_goal__StateVarB_787 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_235_235, (MR_Integer) 0)));
#line 611 "goal_expr_to_goal.m"
                                                                                        hlds__make_hlds__goal_expr_to_goal__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_235_235, (MR_Integer) 1)));
#line 611 "goal_expr_to_goal.m"
                                                                                      }
#line 611 "goal_expr_to_goal.m"
                                                                                  }
#line 611 "goal_expr_to_goal.m"
                                                                              }
#line 611 "goal_expr_to_goal.m"
                                                                          }
#line 611 "goal_expr_to_goal.m"
                                                                      }
#line 611 "goal_expr_to_goal.m"
                                                                  }
#line 615 "goal_expr_to_goal.m"
                                                                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 613 "goal_expr_to_goal.m"
                                                                  {
#line 612 "goal_expr_to_goal.m"
                                                                    {
#line 612 "goal_expr_to_goal.m"
                                                                      hlds__make_hlds__state_var__report_svar_unify_error_8_p_0(hlds__make_hlds__goal_expr_to_goal__Context_788, hlds__make_hlds__goal_expr_to_goal__StateVarB_787, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                                                                    }
#line 614 "goal_expr_to_goal.m"
                                                                    {
#line 614 "goal_expr_to_goal.m"
                                                                      *hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20 = hlds__make_goal__true_goal_0_f_0();
                                                                    }
#line 613 "goal_expr_to_goal.m"
                                                                    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210;
#line 613 "goal_expr_to_goal.m"
                                                                    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208;
#line 613 "goal_expr_to_goal.m"
                                                                    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204;
#line 613 "goal_expr_to_goal.m"
                                                                  }
#line 615 "goal_expr_to_goal.m"
                                                                else
#line 618 "goal_expr_to_goal.m"
                                                                  {
#line 618 "goal_expr_to_goal.m"
                                                                    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_242_242;

#line 616 "goal_expr_to_goal.m"
                                                                    {
#line 616 "goal_expr_to_goal.m"
                                                                      hlds__make_hlds__superhomogeneous__unravel_unification_19_p_0(hlds__make_hlds__goal_expr_to_goal__TermA_192, hlds__make_hlds__goal_expr_to_goal__TermB_193, hlds__make_hlds__goal_expr_to_goal__Context_788, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__goal_expr_to_goal__Purity_789, hlds__make_hlds__goal_expr_to_goal__HLDSGoal_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_202, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_242_242, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_208, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_209, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_210, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_211, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_212, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_213);
                                                                    }
#line 619 "goal_expr_to_goal.m"
                                                                    {
#line 619 "goal_expr_to_goal.m"
                                                                      hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_242_242, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_203);
#line 619 "goal_expr_to_goal.m"
                                                                      return;
                                                                    }
#line 618 "goal_expr_to_goal.m"
                                                                  }
#line 615 "goal_expr_to_goal.m"
                                                              }
#line 596 "goal_expr_to_goal.m"
                                                          }
#line 103 "goal_expr_to_goal.m"
      }
#line 103 "goal_expr_to_goal.m"
      break;
#line 103 "goal_expr_to_goal.m"
    }
#line 37 "goal_expr_to_goal.m"
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
