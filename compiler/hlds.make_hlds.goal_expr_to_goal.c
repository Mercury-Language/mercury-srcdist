/*
** Automatically generated from `goal_expr_to_goal.m'
** by the Mercury compiler,
** version 13.05.2-beta-2013-10-31, configured for x86_64-apple-darwin12.4.0.
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
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
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




#line 154 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 157 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 160 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__goal_expr_to_goal__pair__pti_pair_2__plain_parse_tree__prog_item__type_ctor_info_goal_expr_0__plain_term__type_ctor_info_context_0;

#line 163 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 166 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDesc hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_0;

#line 169 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDesc hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_1;

#line 172 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_value_ordered_loc_kind_0[2];

#line 175 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_name_ordered_loc_kind_0[2];

#line 178 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_Integer hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__functor_number_map_loc_kind_0[2];

#line 181 "hlds.make_hlds.goal_expr_to_goal.c"
static MR_bool MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Unify____loc_kind_0_0_10001(
#line 184 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 186 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2);

#line 189 "hlds.make_hlds.goal_expr_to_goal.c"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Compare____loc_kind_0_0_10001(
#line 192 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 194 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2,
#line 196 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3);

#line 1246 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_p_0(
#line 1246 "goal_expr_to_goal.m"
  MR_String hlds__make_hlds__goal_expr_to_goal__UpdateStr_11,
#line 1246 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Args0_12,
#line 1246 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_13,
#line 1246 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_14,
#line 1246 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_21,
#line 1246 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_22,
#line 1246 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_23,
#line 1246 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_24,
#line 1246 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_25,
#line 1246 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_26);

#line 1232 "goal_expr_to_goal.m"
static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__dcg_field_error_context_pieces_1_f_0(
#line 1232 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_3);

#line 1224 "goal_expr_to_goal.m"
static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__exception_functor_3_f_0(
#line 1224 "goal_expr_to_goal.m"
  MR_String hlds__make_hlds__goal_expr_to_goal__Atom_5,
#line 1224 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Arg_6,
#line 1224 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_7);

#line 1219 "goal_expr_to_goal.m"
static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_f_0(void);

#line 1174 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(
#line 1174 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_6,
#line 1174 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7,
#line 1174 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_8,
#line 1174 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9,
#line 1174 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_10);

#line 1158 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(
#line 1158 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_7,
#line 1158 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_8,
#line 1158 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_9,
#line 1158 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_10,
#line 1158 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_11,
#line 1158 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_12);

#line 1092 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_p_0(
#line 1092 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_22,
#line 1092 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal0_23,
#line 1092 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Then0_24,
#line 1092 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeElse0_25,
#line 1092 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches0_26,
#line 1092 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_27,
#line 1092 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_28,
#line 1092 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_29,
#line 1092 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__TryGoal_30,
#line 1092 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_52,
#line 1092 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_53,
#line 1092 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_54,
#line 1092 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_55,
#line 1092 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_56,
#line 1092 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_57,
#line 1092 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_58,
#line 1092 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_59,
#line 1092 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_60,
#line 1092 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_61,
#line 1092 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_62,
#line 1092 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_63);

#line 953 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_p_0(
#line 953 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_23,
#line 953 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVarUnrenamed_24,
#line 953 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar_25,
#line 953 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal0_26,
#line 953 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Then0_27,
#line 953 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches0_28,
#line 953 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_29,
#line 953 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_30,
#line 953 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_31,
#line 953 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__TryGoal_32,
#line 953 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_68,
#line 953 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_69,
#line 953 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_70,
#line 953 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_71,
#line 953 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_72,
#line 953 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_73,
#line 953 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_74,
#line 953 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_75,
#line 953 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_76,
#line 953 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_77,
#line 953 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_78,
#line 953 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_79);

#line 907 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(
#line 907 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_1,
#line 907 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2,
#line 907 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_3,
#line 907 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HeadVar__4_4,
#line 907 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__5_5,
#line 907 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__6_6,
#line 907 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HeadVar__7_7,
#line 907 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_8,
#line 907 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_9,
#line 907 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_10,
#line 907 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_11,
#line 907 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_12,
#line 907 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_13,
#line 907 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_14,
#line 907 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_15);

#line 878 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(
#line 878 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_17,
#line 878 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_18,
#line 878 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_19,
#line 878 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__DisjStates0_20,
#line 878 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__DisjStates_21,
#line 878 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__SVarStateBefore_22,
#line 878 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_35,
#line 878 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_36,
#line 878 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_37,
#line 878 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_38,
#line 878 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_39,
#line 878 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_40,
#line 878 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_41,
#line 878 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_42,
#line 878 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_43,
#line 878 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_44);

#line 849 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__get_rev_par_conj_17_p_0(
#line 849 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
#line 849 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_19,
#line 849 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_20,
#line 849 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__RevParConj0_21,
#line 849 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__RevParConj_22,
#line 849 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_35,
#line 849 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_36,
#line 849 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_37,
#line 849 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_38,
#line 849 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_39,
#line 849 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_40,
#line 849 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_41,
#line 849 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_42,
#line 849 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_43,
#line 849 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_44,
#line 849 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_45,
#line 849 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_46);

#line 823 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__get_rev_conj_17_p_0(
#line 823 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
#line 823 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_19,
#line 823 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_20,
#line 823 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__RevConj0_21,
#line 823 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__RevConj_22,
#line 823 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_35,
#line 823 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_36,
#line 823 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_37,
#line 823 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_38,
#line 823 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_39,
#line 823 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_40,
#line 823 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_41,
#line 823 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_42,
#line 823 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_43,
#line 823 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_44,
#line 823 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_45,
#line 823 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_46);

#line 735 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_p_0(
#line 735 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_18,
#line 735 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__FieldNames_19,
#line 735 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms_20,
#line 735 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_21,
#line 735 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_22,
#line 735 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_52,
#line 735 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_53,
#line 735 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_54,
#line 735 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_55,
#line 735 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_56,
#line 735 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_57,
#line 735 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_58,
#line 735 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_59,
#line 735 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_60,
#line 735 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_61,
#line 735 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_62,
#line 735 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_63);

#line 679 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_p_0(
#line 679 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
#line 679 "goal_expr_to_goal.m"
  MR_String hlds__make_hlds__goal_expr_to_goal__Operator_19,
#line 679 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20,
#line 679 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_21,
#line 679 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_22,
#line 679 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_47,
#line 679 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_48,
#line 679 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_49,
#line 679 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_50,
#line 679 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_51,
#line 679 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52,
#line 679 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_53,
#line 679 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_54,
#line 679 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_55,
#line 679 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_56,
#line 679 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_57,
#line 679 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_58);

#line 664 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__report_svar_unify_error_5_p_0(
#line 664 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_6,
#line 664 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__VarSet_7,
#line 664 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVar_8,
#line 664 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_14,
#line 664 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_15);

#line 651 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_p_0_1(
#line 651 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__closure_arg,
#line 651 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 651 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2,
#line 651 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3,
#line 651 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_4,
#line 651 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_5,
#line 651 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_6,
#line 651 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_7,
#line 651 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_8);

#line 634 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_p_0(
#line 634 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_24,
#line 634 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars0_25,
#line 634 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars0_26,
#line 634 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars0_27,
#line 634 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars0_28,
#line 634 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_29,
#line 634 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_30,
#line 634 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__QuantVars_31,
#line 634 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal0_32,
#line 634 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_33,
#line 634 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__GoalInfo_34,
#line 634 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_49,
#line 634 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50,
#line 634 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_51,
#line 634 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_52,
#line 634 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_53,
#line 634 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_54,
#line 634 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_55,
#line 634 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_56,
#line 634 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_57,
#line 634 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_58,
#line 634 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_59,
#line 634 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_60);

#line 620 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_4_p_0(
#line 620 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_5,
#line 620 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVar_6,
#line 620 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__GetGoal_7,
#line 620 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__SetGoal_8);

#line 602 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__extract_trace_mutable_var_7_p_0(
#line 602 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_8,
#line 602 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__VarSet_9,
#line 602 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Mutable_10,
#line 602 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__MutableHLDS_11,
#line 602 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__StateVar_12,
#line 602 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__GetGoal_13,
#line 602 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__SetGoal_14);

#line 310 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_p_0_1(
#line 310 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__closure_arg,
#line 310 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 310 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2,
#line 310 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3,
#line 310 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_4,
#line 310 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_5);

#line 100 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_p_0(
#line 100 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
#line 100 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Expr_19,
#line 100 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_20,
#line 100 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_21,
#line 100 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_22,
#line 100 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197,
#line 100 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198,
#line 100 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199,
#line 100 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200,
#line 100 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201,
#line 100 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202,
#line 100 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203,
#line 100 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204,
#line 100 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205,
#line 100 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206,
#line 100 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207,
#line 100 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);


static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_1[28][2];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_2[2][3];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_3[7][1];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_4[1][10];

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_5[1][12];




static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_1[28][2] = {
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
    ((MR_Box) ((MR_String) "cannot have an else part."))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: a \140try\' goal with an \140io\' parameter"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in DCG field access goal."))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[4])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "or \140^ field1 ^ ... ^ fieldN := Field\'"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: expected \140Field =^ field1 ^ ... ^ fieldN\'"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In DCG field extraction goal:"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[4])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In DCG field update goal:"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[4])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "cannot appear as a unification argument."))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "You probably meant"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 27 */
  {
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[5])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_expr_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__make_hlds__goal_expr_to_goal_scalar_common_3[7][1] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[8])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[14])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "{}"))
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
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__pair__pti_pair_2__plain_parse_tree__prog_item__type_ctor_info_goal_expr_0__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal__pair__pti_pair_2__plain_parse_tree__prog_item__type_ctor_info_goal_expr_0__plain_term__type_ctor_info_context_0))
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
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 1013 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1021 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1029 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__goal_expr_to_goal__pair__pti_pair_2__plain_parse_tree__prog_item__type_ctor_info_goal_expr_0__plain_term__type_ctor_info_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_expr_0,
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 1038 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__goal_expr_to_goal__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1046 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDesc hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_0 = {
  (MR_String) "loc_whole_goal",
  (MR_Integer) 0
};

#line 1052 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDesc hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_1 = {
  (MR_String) "loc_inside_atomic_goal",
  (MR_Integer) 1
};

#line 1058 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_value_ordered_loc_kind_0[2] = {
  &hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_0,
  &hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_1
};

#line 1064 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_name_ordered_loc_kind_0[2] = {
  &hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_1,
  &hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__enum_functor_desc_loc_kind_0_0
};

#line 1070 "hlds.make_hlds.goal_expr_to_goal.c"
static const MR_Integer hlds__make_hlds__goal_expr_to_goal__hlds__make_hlds__goal_expr_to_goal__functor_number_map_loc_kind_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1076 "hlds.make_hlds.goal_expr_to_goal.c"
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

#line 1097 "hlds.make_hlds.goal_expr_to_goal.c"
static MR_bool MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Unify____loc_kind_0_0_10001(
#line 1100 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 1102 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2)
#line 1104 "hlds.make_hlds.goal_expr_to_goal.c"
{
#line 1106 "hlds.make_hlds.goal_expr_to_goal.c"
  {
#line 1108 "hlds.make_hlds.goal_expr_to_goal.c"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;

#line 1111 "hlds.make_hlds.goal_expr_to_goal.c"
    {
#line 1113 "hlds.make_hlds.goal_expr_to_goal.c"
      hlds__make_hlds__goal_expr_to_goal__succeeded = hlds__make_hlds__goal_expr_to_goal____Unify____loc_kind_0_0(((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1), ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2));
    }
#line 1116 "hlds.make_hlds.goal_expr_to_goal.c"
    return hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1118 "hlds.make_hlds.goal_expr_to_goal.c"
  }
#line 1120 "hlds.make_hlds.goal_expr_to_goal.c"
}

#line 1123 "hlds.make_hlds.goal_expr_to_goal.c"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal____Compare____loc_kind_0_0_10001(
#line 1126 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 1128 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2,
#line 1130 "hlds.make_hlds.goal_expr_to_goal.c"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3)
#line 1132 "hlds.make_hlds.goal_expr_to_goal.c"
{
#line 1134 "hlds.make_hlds.goal_expr_to_goal.c"
  {
#line 1136 "hlds.make_hlds.goal_expr_to_goal.c"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__1_1;

#line 1139 "hlds.make_hlds.goal_expr_to_goal.c"
    {
#line 1141 "hlds.make_hlds.goal_expr_to_goal.c"
      hlds__make_hlds__goal_expr_to_goal____Compare____loc_kind_0_0(&hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2), ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3));
    }
#line 1144 "hlds.make_hlds.goal_expr_to_goal.c"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__1_1));
#line 1146 "hlds.make_hlds.goal_expr_to_goal.c"
  }
#line 1148 "hlds.make_hlds.goal_expr_to_goal.c"
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
#line 1192 "hlds.make_hlds.goal_expr_to_goal.c"
  {
#line 1194 "hlds.make_hlds.goal_expr_to_goal.c"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__HeadVar__2_1 == hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2);

#line 1197 "hlds.make_hlds.goal_expr_to_goal.c"
    return hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1199 "hlds.make_hlds.goal_expr_to_goal.c"
  }
#line 23 "goal_expr_to_goal.m"
}

#line 1246 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_p_0(
#line 1246 "goal_expr_to_goal.m"
  MR_String hlds__make_hlds__goal_expr_to_goal__UpdateStr_11,
#line 1246 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Args0_12,
#line 1246 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_13,
#line 1246 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_14,
#line 1246 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_21,
#line 1246 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_22,
#line 1246 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_23,
#line 1246 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_24,
#line 1246 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_25,
#line 1246 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_26)
#line 1246 "goal_expr_to_goal.m"
{
#line 1251 "goal_expr_to_goal.m"
  {
#line 1251 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1251 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVars_18;
#line 1251 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_20;
#line 1251 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_30_30;
#line 1251 "goal_expr_to_goal.m"
    MR_Integer hlds__make_hlds__goal_expr_to_goal__V_31_31;
#line 1251 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_33_33;

#line 1252 "goal_expr_to_goal.m"
    {
#line 1252 "goal_expr_to_goal.m"
      hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(hlds__make_hlds__goal_expr_to_goal__Args0_12, &hlds__make_hlds__goal_expr_to_goal__HeadVars_18, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_21, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_23, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_24, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_25, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_26);
    }
#line 1255 "goal_expr_to_goal.m"
    {
#line 1255 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_30_30 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    }
#line 1255 "goal_expr_to_goal.m"
    {
#line 1255 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_31_31 = hlds__hlds_pred__invalid_proc_id_0_f_0();
    }
#line 1255 "goal_expr_to_goal.m"
    {
#line 1255 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1255 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__UpdateStr_11));
#line 1255 "goal_expr_to_goal.m"
    }
#line 1255 "goal_expr_to_goal.m"
    {
#line 1255 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1255 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_30_30));
#line 1255 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_31_31));
#line 1255 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HeadVars_18));
#line 1255 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1255 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1255 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__GoalExpr_20, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_33_33));
#line 1255 "goal_expr_to_goal.m"
    }
#line 1257 "goal_expr_to_goal.m"
    {
#line 1257 "goal_expr_to_goal.m"
      MR_Word base;
#line 1257 "goal_expr_to_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1257 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__Goal_14 = base;
#line 1257 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_20));
#line 1257 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_13));
#line 1257 "goal_expr_to_goal.m"
    }
#line 1251 "goal_expr_to_goal.m"
  }
#line 1246 "goal_expr_to_goal.m"
}

#line 1232 "goal_expr_to_goal.m"
static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__dcg_field_error_context_pieces_1_f_0(
#line 1232 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_3)
#line 1232 "goal_expr_to_goal.m"
{
#line 1237 "goal_expr_to_goal.m"
  {
#line 1237 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1237 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ContextPieces_4;

#line 1237 "goal_expr_to_goal.m"
    if ((hlds__make_hlds__goal_expr_to_goal__AccessType_3 == (MR_Integer) 0))
#line 1241 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ContextPieces_4 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[16]);
#line 1237 "goal_expr_to_goal.m"
    else
#line 1238 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ContextPieces_4 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[18]);
#line 1237 "goal_expr_to_goal.m"
    return hlds__make_hlds__goal_expr_to_goal__ContextPieces_4;
#line 1237 "goal_expr_to_goal.m"
  }
#line 1232 "goal_expr_to_goal.m"
}

#line 1224 "goal_expr_to_goal.m"
static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__exception_functor_3_f_0(
#line 1224 "goal_expr_to_goal.m"
  MR_String hlds__make_hlds__goal_expr_to_goal__Atom_5,
#line 1224 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Arg_6,
#line 1224 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_7)
#line 1224 "goal_expr_to_goal.m"
{
#line 1226 "goal_expr_to_goal.m"
  {
#line 1226 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1226 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__Term_8;
#line 1226 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SymName_9;
#line 1226 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_10_10;
#line 1226 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_11_11;

#line 1227 "goal_expr_to_goal.m"
    {
#line 1227 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_10_10 = mdbcomp__prim_data__mercury_exception_module_0_f_0();
    }
#line 1227 "goal_expr_to_goal.m"
    {
#line 1227 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__SymName_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1227 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_9, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_10_10));
#line 1227 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_9, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Atom_5));
#line 1227 "goal_expr_to_goal.m"
    }
#line 1228 "goal_expr_to_goal.m"
    {
#line 1228 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1228 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_11_11, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Arg_6));
#line 1228 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1228 "goal_expr_to_goal.m"
    }
#line 1228 "goal_expr_to_goal.m"
    {
#line 1228 "goal_expr_to_goal.m"
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__SymName_9, hlds__make_hlds__goal_expr_to_goal__V_11_11, hlds__make_hlds__goal_expr_to_goal__Context_7, &hlds__make_hlds__goal_expr_to_goal__Term_8);
    }
#line 1226 "goal_expr_to_goal.m"
    return hlds__make_hlds__goal_expr_to_goal__Term_8;
#line 1226 "goal_expr_to_goal.m"
  }
#line 1224 "goal_expr_to_goal.m"
}

#line 1219 "goal_expr_to_goal.m"
static MR_Word MR_CALL 
hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_f_0(void)
#line 1219 "goal_expr_to_goal.m"
{
#line 1221 "goal_expr_to_goal.m"
  {
#line 1221 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1221 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1;
#line 1221 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_2_2;

#line 1222 "goal_expr_to_goal.m"
    {
#line 1222 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_2_2 = mdbcomp__prim_data__mercury_exception_module_0_f_0();
    }
#line 1221 "goal_expr_to_goal.m"
    {
#line 1221 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1221 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_2_2));
#line 1221 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1, 1) = ((MR_Box) ((MR_String) "magic_exception_result"));
#line 1221 "goal_expr_to_goal.m"
    }
#line 1221 "goal_expr_to_goal.m"
    return hlds__make_hlds__goal_expr_to_goal__HeadVar__1_1;
#line 1221 "goal_expr_to_goal.m"
  }
#line 1219 "goal_expr_to_goal.m"
}

#line 1174 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(
#line 1174 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_6,
#line 1174 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7,
#line 1174 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_8,
#line 1174 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9,
#line 1174 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_10)
#line 1174 "goal_expr_to_goal.m"
{
#line 1180 "goal_expr_to_goal.m"
  {
#line 1180 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;

#line 1180 "goal_expr_to_goal.m"
    if ((hlds__make_hlds__goal_expr_to_goal__Catches_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1200 "goal_expr_to_goal.m"
      if ((hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1201 "goal_expr_to_goal.m"
        {
#line 1201 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__Rethrow_21;
#line 1201 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_22_22;
#line 1201 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_24_24;
#line 1201 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_25_25;
#line 1201 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_28_28;

#line 1204 "goal_expr_to_goal.m"
          {
#line 1204 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_22_22 = mdbcomp__prim_data__mercury_exception_module_0_f_0();
          }
#line 1204 "goal_expr_to_goal.m"
          {
#line 1204 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__Rethrow_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1204 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Rethrow_21, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_22_22));
#line 1204 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Rethrow_21, 1) = ((MR_Box) ((MR_String) "rethrow"));
#line 1204 "goal_expr_to_goal.m"
          }
#line 1205 "goal_expr_to_goal.m"
          {
#line 1205 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1205 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_25_25, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_6));
#line 1205 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1205 "goal_expr_to_goal.m"
          }
#line 1206 "goal_expr_to_goal.m"
          {
#line 1206 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1206 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 1206 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_24_24, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Rethrow_21));
#line 1206 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_24_24, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_25_25));
#line 1206 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_24_24, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1206 "goal_expr_to_goal.m"
          }
#line 1206 "goal_expr_to_goal.m"
          {
#line 1206 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_28_28 = mercury__term__get_term_context_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7);
          }
#line 1205 "goal_expr_to_goal.m"
          {
#line 1205 "goal_expr_to_goal.m"
            MR_Word base;
#line 1205 "goal_expr_to_goal.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1205 "goal_expr_to_goal.m"
            *hlds__make_hlds__goal_expr_to_goal__Goal_10 = base;
#line 1205 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_24_24));
#line 1205 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_28_28));
#line 1205 "goal_expr_to_goal.m"
          }
#line 1201 "goal_expr_to_goal.m"
        }
#line 1200 "goal_expr_to_goal.m"
      else
#line 1190 "goal_expr_to_goal.m"
        {
#line 1190 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__CatchAnyVar_16;
#line 1190 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__CatchAnyGoal_17;
#line 1190 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__Context_19;
#line 1190 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__GetUnivValue_20;
#line 1190 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9, (MR_Integer) 0)));
#line 1190 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_30_30;
#line 1190 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_31_31;
#line 1190 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_32_32;
#line 1190 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_35_35;
#line 1190 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__SymName_47;
#line 1190 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_48_48;
#line 1190 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_49_49;
#line 1194 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_18_18;

#line 1190 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__CatchAnyVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_29_29, (MR_Integer) 0)));
#line 1190 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__CatchAnyGoal_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_29_29, (MR_Integer) 1)));
#line 1194 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__CatchAnyGoal_17, (MR_Integer) 0)));
#line 1194 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__CatchAnyGoal_17, (MR_Integer) 1)));
#line 1195 "goal_expr_to_goal.m"
          {
#line 1195 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1195 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CatchAnyVar_16));
#line 1195 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_31_31, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_19));
#line 1195 "goal_expr_to_goal.m"
          }
#line 1227 "goal_expr_to_goal.m"
          {
#line 1227 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_48_48 = mdbcomp__prim_data__mercury_exception_module_0_f_0();
          }
#line 1227 "goal_expr_to_goal.m"
          {
#line 1227 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SymName_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1227 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_47, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_48_48));
#line 1227 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_47, 1) = ((MR_Box) ((MR_String) "exc_univ_value"));
#line 1227 "goal_expr_to_goal.m"
          }
#line 1228 "goal_expr_to_goal.m"
          {
#line 1228 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1228 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_49_49, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7));
#line 1228 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1228 "goal_expr_to_goal.m"
          }
#line 1228 "goal_expr_to_goal.m"
          {
#line 1228 "goal_expr_to_goal.m"
            parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__SymName_47, hlds__make_hlds__goal_expr_to_goal__V_49_49, hlds__make_hlds__goal_expr_to_goal__Context_19, &hlds__make_hlds__goal_expr_to_goal__V_32_32);
          }
#line 1198 "goal_expr_to_goal.m"
          {
#line 1198 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1198 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 1198 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_30_30, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_31_31));
#line 1198 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_30_30, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_32_32));
#line 1198 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_30_30, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1198 "goal_expr_to_goal.m"
          }
#line 1195 "goal_expr_to_goal.m"
          {
#line 1195 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__GetUnivValue_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1195 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GetUnivValue_20, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_30_30));
#line 1195 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GetUnivValue_20, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_19));
#line 1195 "goal_expr_to_goal.m"
          }
#line 1199 "goal_expr_to_goal.m"
          {
#line 1199 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1199 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_35_35, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GetUnivValue_20));
#line 1199 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_35_35, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CatchAnyGoal_17));
#line 1199 "goal_expr_to_goal.m"
          }
#line 1199 "goal_expr_to_goal.m"
          {
#line 1199 "goal_expr_to_goal.m"
            MR_Word base;
#line 1199 "goal_expr_to_goal.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1199 "goal_expr_to_goal.m"
            *hlds__make_hlds__goal_expr_to_goal__Goal_10 = base;
#line 1199 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_35_35));
#line 1199 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_19));
#line 1199 "goal_expr_to_goal.m"
          }
#line 1190 "goal_expr_to_goal.m"
        }
#line 1180 "goal_expr_to_goal.m"
    else
#line 1180 "goal_expr_to_goal.m"
      {
#line 1180 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__FirstPattern_11;
#line 1180 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__FirstGoal_12;
#line 1180 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__RestCatches_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Catches_8, (MR_Integer) 1)));
#line 1180 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__ElseGoal_14;
#line 1180 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15;
#line 1180 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Catches_8, (MR_Integer) 0)));
#line 1180 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_37_37;
#line 1180 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_40_40;
#line 1180 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_55;
#line 1180 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_56_56;
#line 1180 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_57_57;
#line 1180 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_59_59;
#line 1180 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_60_60;
#line 1180 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_63_63;

#line 1180 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__FirstPattern_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_36_36, (MR_Integer) 0)));
#line 1180 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__FirstGoal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_36_36, (MR_Integer) 1)));
#line 1181 "goal_expr_to_goal.m"
        {
#line 1181 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_6, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7, hlds__make_hlds__goal_expr_to_goal__RestCatches_13, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_9, &hlds__make_hlds__goal_expr_to_goal__ElseGoal_14);
        }
#line 1215 "goal_expr_to_goal.m"
        {
#line 1215 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_57_57 = mdbcomp__prim_data__mercury_exception_module_0_f_0();
        }
#line 1214 "goal_expr_to_goal.m"
        {
#line 1214 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1214 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_56_56, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_57_57));
#line 1214 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_56_56, 1) = ((MR_Box) ((MR_String) "exc_univ_to_type"));
#line 1214 "goal_expr_to_goal.m"
        }
#line 1216 "goal_expr_to_goal.m"
        {
#line 1216 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1216 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_60_60, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FirstPattern_11));
#line 1216 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1216 "goal_expr_to_goal.m"
        }
#line 1214 "goal_expr_to_goal.m"
        {
#line 1214 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1214 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_59_59, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_7));
#line 1214 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_59_59, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_60_60));
#line 1214 "goal_expr_to_goal.m"
        }
#line 1214 "goal_expr_to_goal.m"
        {
#line 1214 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__GoalExpr_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1214 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 1214 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_55, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_56_56));
#line 1214 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_55, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_59_59));
#line 1214 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_55, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1214 "goal_expr_to_goal.m"
        }
#line 1217 "goal_expr_to_goal.m"
        {
#line 1217 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_63_63 = mercury__term__get_term_context_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__FirstPattern_11);
        }
#line 1217 "goal_expr_to_goal.m"
        {
#line 1217 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1217 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_55));
#line 1217 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_63_63));
#line 1217 "goal_expr_to_goal.m"
        }
#line 1186 "goal_expr_to_goal.m"
        {
#line 1186 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1186 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
#line 1186 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1186 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_37_37, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1186 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_37_37, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FirstPatternGoal_15));
#line 1186 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_37_37, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FirstGoal_12));
#line 1186 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_37_37, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ElseGoal_14));
#line 1186 "goal_expr_to_goal.m"
        }
#line 1186 "goal_expr_to_goal.m"
        {
#line 1186 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_40_40 = mercury__term__get_term_context_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__FirstPattern_11);
        }
#line 1185 "goal_expr_to_goal.m"
        {
#line 1185 "goal_expr_to_goal.m"
          MR_Word base;
#line 1185 "goal_expr_to_goal.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1185 "goal_expr_to_goal.m"
          *hlds__make_hlds__goal_expr_to_goal__Goal_10 = base;
#line 1185 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_37_37));
#line 1185 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_40_40));
#line 1185 "goal_expr_to_goal.m"
        }
#line 1180 "goal_expr_to_goal.m"
      }
#line 1180 "goal_expr_to_goal.m"
  }
#line 1174 "goal_expr_to_goal.m"
}

#line 1158 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(
#line 1158 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_7,
#line 1158 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_8,
#line 1158 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches_9,
#line 1158 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_10,
#line 1158 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_11,
#line 1158 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_12)
#line 1158 "goal_expr_to_goal.m"
{
#line 1163 "goal_expr_to_goal.m"
  {
#line 1163 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1163 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13;
#line 1163 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__CatchChain_14;
#line 1163 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_15_15;
#line 1163 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_16_16;
#line 1163 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_19_19;
#line 1163 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SymName_24;
#line 1163 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_25_25;
#line 1163 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_26_26;

#line 1227 "goal_expr_to_goal.m"
    {
#line 1227 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_25_25 = mdbcomp__prim_data__mercury_exception_module_0_f_0();
    }
#line 1227 "goal_expr_to_goal.m"
    {
#line 1227 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__SymName_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1227 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_24, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_25_25));
#line 1227 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SymName_24, 1) = ((MR_Box) ((MR_String) "exception"));
#line 1227 "goal_expr_to_goal.m"
    }
#line 1228 "goal_expr_to_goal.m"
    {
#line 1228 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1228 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_26_26, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_8));
#line 1228 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1228 "goal_expr_to_goal.m"
    }
#line 1228 "goal_expr_to_goal.m"
    {
#line 1228 "goal_expr_to_goal.m"
      parse_tree__prog_util__construct_qualified_term_with_context_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__SymName_24, hlds__make_hlds__goal_expr_to_goal__V_26_26, hlds__make_hlds__goal_expr_to_goal__Context_11, &hlds__make_hlds__goal_expr_to_goal__V_16_16);
    }
#line 1169 "goal_expr_to_goal.m"
    {
#line 1169 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_15_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1169 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 1169 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_15_15, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_7));
#line 1169 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_15_15, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_16_16));
#line 1169 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_15_15, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1169 "goal_expr_to_goal.m"
    }
#line 1164 "goal_expr_to_goal.m"
    {
#line 1164 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1164 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_15_15));
#line 1164 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_11));
#line 1164 "goal_expr_to_goal.m"
    }
#line 1170 "goal_expr_to_goal.m"
    {
#line 1170 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__make_catch_ite_chain_5_p_0(hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_7, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_8, hlds__make_hlds__goal_expr_to_goal__Catches_9, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny_10, &hlds__make_hlds__goal_expr_to_goal__CatchChain_14);
    }
#line 1172 "goal_expr_to_goal.m"
    {
#line 1172 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1172 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionUnify_13));
#line 1172 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CatchChain_14));
#line 1172 "goal_expr_to_goal.m"
    }
#line 1172 "goal_expr_to_goal.m"
    {
#line 1172 "goal_expr_to_goal.m"
      MR_Word base;
#line 1172 "goal_expr_to_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1172 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__Goal_12 = base;
#line 1172 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_19_19));
#line 1172 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_11));
#line 1172 "goal_expr_to_goal.m"
    }
#line 1163 "goal_expr_to_goal.m"
  }
#line 1158 "goal_expr_to_goal.m"
}

#line 1092 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_p_0(
#line 1092 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_22,
#line 1092 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal0_23,
#line 1092 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Then0_24,
#line 1092 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeElse0_25,
#line 1092 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches0_26,
#line 1092 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_27,
#line 1092 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_28,
#line 1092 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_29,
#line 1092 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__TryGoal_30,
#line 1092 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_52,
#line 1092 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_53,
#line 1092 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_54,
#line 1092 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_55,
#line 1092 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_56,
#line 1092 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_57,
#line 1092 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_58,
#line 1092 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_59,
#line 1092 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_60,
#line 1092 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_61,
#line 1092 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_62,
#line 1092 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_63)
#line 1092 "goal_expr_to_goal.m"
{
#line 1102 "goal_expr_to_goal.m"
  {
#line 1102 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 1102 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_101_101 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1102 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVar_37;
#line 1102 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVar_38;
#line 1102 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39;
#line 1102 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_40;
#line 1102 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41;
#line 1102 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_42;
#line 1102 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__CallMagic0_43;
#line 1102 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnify0_44;
#line 1102 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46;
#line 1102 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunct0_47;
#line 1102 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunct0_48;
#line 1102 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunction0_49;
#line 1102 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunction_50;
#line 1102 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_51;
#line 1102 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_65_65;
#line 1102 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_66_66;
#line 1102 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_70_70;
#line 1102 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_71_71;
#line 1102 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_72_72;
#line 1102 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_75_75;
#line 1102 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_76_76;
#line 1102 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_89_89;
#line 1102 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_90_90;
#line 1102 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_91_91;
#line 1102 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_92_92;
#line 1102 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_99_99;

#line 1103 "goal_expr_to_goal.m"
    {
#line 1103 "goal_expr_to_goal.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_101_101, (MR_String) "TryResult", &hlds__make_hlds__goal_expr_to_goal__ResultVar_37, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_56, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_65_65);
    }
#line 1104 "goal_expr_to_goal.m"
    {
#line 1104 "goal_expr_to_goal.m"
      mercury__varset__new_var_3_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_101_101, &hlds__make_hlds__goal_expr_to_goal__ExcpVar_38, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_65_65, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_66_66);
    }
#line 1106 "goal_expr_to_goal.m"
    {
#line 1106 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1106 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVar_37));
#line 1106 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1106 "goal_expr_to_goal.m"
    }
#line 1107 "goal_expr_to_goal.m"
    {
#line 1107 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1107 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_40, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ExcpVar_38));
#line 1107 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_40, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1107 "goal_expr_to_goal.m"
    }
#line 1108 "goal_expr_to_goal.m"
    {
#line 1108 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1108 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[6]));
#line 1108 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1108 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1108 "goal_expr_to_goal.m"
    }
#line 1110 "goal_expr_to_goal.m"
    {
#line 1110 "goal_expr_to_goal.m"
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_28, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_42);
    }
#line 1113 "goal_expr_to_goal.m"
    {
#line 1113 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_71_71 = hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_f_0();
    }
#line 1113 "goal_expr_to_goal.m"
    {
#line 1113 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1113 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_72_72, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39));
#line 1113 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1113 "goal_expr_to_goal.m"
    }
#line 1114 "goal_expr_to_goal.m"
    {
#line 1114 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1114 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_70_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 1114 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_70_70, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_71_71));
#line 1114 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_70_70, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_72_72));
#line 1114 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_70_70, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1114 "goal_expr_to_goal.m"
    }
#line 1113 "goal_expr_to_goal.m"
    {
#line 1113 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__CallMagic0_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1113 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__CallMagic0_43, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_70_70));
#line 1113 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__CallMagic0_43, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1113 "goal_expr_to_goal.m"
    }
#line 1118 "goal_expr_to_goal.m"
    {
#line 1118 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_76_76 = hlds__make_hlds__goal_expr_to_goal__exception_functor_3_f_0((MR_String) "succeeded", hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_41, hlds__make_hlds__goal_expr_to_goal__Context_28);
    }
#line 1122 "goal_expr_to_goal.m"
    {
#line 1122 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1122 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 1122 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_75_75, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39));
#line 1122 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_75_75, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_76_76));
#line 1122 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_75_75, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1122 "goal_expr_to_goal.m"
    }
#line 1117 "goal_expr_to_goal.m"
    {
#line 1117 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnify0_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1117 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnify0_44, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_75_75));
#line 1117 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnify0_44, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1117 "goal_expr_to_goal.m"
    }
#line 1127 "goal_expr_to_goal.m"
    if ((hlds__make_hlds__goal_expr_to_goal__MaybeElse0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1128 "goal_expr_to_goal.m"
      {
#line 1128 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_79_79;
#line 1128 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_80_80;
#line 1128 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_81_81;
#line 1128 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_83_83;
#line 1128 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_84_84;

#line 1131 "goal_expr_to_goal.m"
        {
#line 1131 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1131 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1131 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1131 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_81_81, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Goal0_23));
#line 1131 "goal_expr_to_goal.m"
        }
#line 1130 "goal_expr_to_goal.m"
        {
#line 1130 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1130 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_80_80, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_81_81));
#line 1130 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_80_80, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1130 "goal_expr_to_goal.m"
        }
#line 1132 "goal_expr_to_goal.m"
        {
#line 1132 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1132 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1132 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1132 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_84_84, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Then0_24));
#line 1132 "goal_expr_to_goal.m"
        }
#line 1130 "goal_expr_to_goal.m"
        {
#line 1130 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1130 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_83_83, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_84_84));
#line 1130 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_83_83, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1130 "goal_expr_to_goal.m"
        }
#line 1133 "goal_expr_to_goal.m"
        {
#line 1133 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1133 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_79_79, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_80_80));
#line 1133 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_79_79, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_83_83));
#line 1133 "goal_expr_to_goal.m"
        }
#line 1129 "goal_expr_to_goal.m"
        {
#line 1129 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1129 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_79_79));
#line 1129 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1129 "goal_expr_to_goal.m"
        }
#line 1128 "goal_expr_to_goal.m"
      }
#line 1127 "goal_expr_to_goal.m"
    else
#line 1124 "goal_expr_to_goal.m"
      {
#line 1124 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__Else0_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeElse0_25, (MR_Integer) 0)));
#line 1124 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_86_86;

#line 1126 "goal_expr_to_goal.m"
        {
#line 1126 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_86_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1126 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_86_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
#line 1126 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1126 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_86_86, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1126 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_86_86, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Goal0_23));
#line 1126 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_86_86, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Then0_24));
#line 1126 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_86_86, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Else0_45));
#line 1126 "goal_expr_to_goal.m"
        }
#line 1125 "goal_expr_to_goal.m"
        {
#line 1125 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1125 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_86_86));
#line 1125 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1125 "goal_expr_to_goal.m"
        }
#line 1124 "goal_expr_to_goal.m"
      }
#line 1136 "goal_expr_to_goal.m"
    {
#line 1136 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1136 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_89_89, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnify0_44));
#line 1136 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_89_89, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SucceededSubGoal_46));
#line 1136 "goal_expr_to_goal.m"
    }
#line 1135 "goal_expr_to_goal.m"
    {
#line 1135 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunct0_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1135 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunct0_47, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_89_89));
#line 1135 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunct0_47, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1135 "goal_expr_to_goal.m"
    }
#line 1139 "goal_expr_to_goal.m"
    {
#line 1139 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_39, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_40, hlds__make_hlds__goal_expr_to_goal__Catches0_26, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_27, hlds__make_hlds__goal_expr_to_goal__Context_28, &hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunct0_48);
    }
#line 1149 "goal_expr_to_goal.m"
    {
#line 1149 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_92_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1149 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_92_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1149 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_92_92, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunct0_47));
#line 1149 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_92_92, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunct0_48));
#line 1149 "goal_expr_to_goal.m"
    }
#line 1144 "goal_expr_to_goal.m"
    {
#line 1144 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1144 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_91_91, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_92_92));
#line 1144 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_91_91, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1144 "goal_expr_to_goal.m"
    }
#line 1150 "goal_expr_to_goal.m"
    {
#line 1150 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1150 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_90_90, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CallMagic0_43));
#line 1150 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_90_90, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_91_91));
#line 1150 "goal_expr_to_goal.m"
    }
#line 1143 "goal_expr_to_goal.m"
    {
#line 1143 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunction0_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1143 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunction0_49, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_90_90));
#line 1143 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunction0_49, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_28));
#line 1143 "goal_expr_to_goal.m"
    }
#line 1151 "goal_expr_to_goal.m"
    {
#line 1151 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_22, hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunction0_49, hlds__make_hlds__goal_expr_to_goal__Renaming_29, &hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunction_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_52, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_55, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_66_66, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_57, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_58, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_59, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_61, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_62, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_63);
    }
#line 1155 "goal_expr_to_goal.m"
    {
#line 1155 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_99_99 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1155 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_99_99, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1155 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_99_99, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVar_37));
#line 1155 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_99_99, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunction_50));
#line 1155 "goal_expr_to_goal.m"
    }
#line 1155 "goal_expr_to_goal.m"
    {
#line 1155 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__GoalExpr_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1155 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1155 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_51, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_99_99));
#line 1155 "goal_expr_to_goal.m"
    }
#line 1156 "goal_expr_to_goal.m"
    {
#line 1156 "goal_expr_to_goal.m"
      MR_Word base;
#line 1156 "goal_expr_to_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1156 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__TryGoal_30 = base;
#line 1156 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_51));
#line 1156 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_42));
#line 1156 "goal_expr_to_goal.m"
    }
#line 1102 "goal_expr_to_goal.m"
  }
#line 1092 "goal_expr_to_goal.m"
}

#line 953 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_p_0(
#line 953 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_23,
#line 953 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVarUnrenamed_24,
#line 953 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar_25,
#line 953 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal0_26,
#line 953 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Then0_27,
#line 953 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Catches0_28,
#line 953 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_29,
#line 953 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_30,
#line 953 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_31,
#line 953 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__TryGoal_32,
#line 953 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_68,
#line 953 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_69,
#line 953 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_70,
#line 953 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_71,
#line 953 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_72,
#line 953 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_73,
#line 953 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_74,
#line 953 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_75,
#line 953 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_76,
#line 953 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_77,
#line 953 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_78,
#line 953 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_79)
#line 953 "goal_expr_to_goal.m"
{
#line 963 "goal_expr_to_goal.m"
  {
#line 963 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_168_168 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVar_39;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVar_40;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_42;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_43;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_44;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__CallMagic0_45;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__CallMagic_46;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVarBefore_47;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnify0_49;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnify_50;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__IOUnify_51;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ScopedGoal0_52;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ScopedGoal_53;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVarAfter_54;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ScopedThen0_55;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ScopedThen_56;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunct_57;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsSucceededDisjunct_58;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunct0_59;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunct_60;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsExceptionDisjunct_61;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__DisjunctSVarStates_62;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__Disjuncts_63;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__Disjunction_64;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunction_65;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVars_66;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_67;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_82_82;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_86_86;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_87_87;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_88_88;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_91_91;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_92_92;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_93_93;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_94_94;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_95_95;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_96_96;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_97_97;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_99_99;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_100_100;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_101_101;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_104_104;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_105_105;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_106_106;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_107_107;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_108_108;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_109_109;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_110_110;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_111_111;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_114_114;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_115_115;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_117_117;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_124_124;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_126_126;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_127_127;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_128_128;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_129_129;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_130_130;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_131_131;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_132_132;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_133_133;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_134_134;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_135_135;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_136_136;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_137_137;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_140_140;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_141_141;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_142_142;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_143_143;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_144_144;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_145_145;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_146_146;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_147_147;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_149_149;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_151_151;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_152_152;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_156_156;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_157_157;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_158_158;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_163_163;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_164_164;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_166_166;
#line 963 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_167_167;

#line 964 "goal_expr_to_goal.m"
    {
#line 964 "goal_expr_to_goal.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_168_168, (MR_String) "TryResult", &hlds__make_hlds__goal_expr_to_goal__ResultVar_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_72, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81);
    }
#line 965 "goal_expr_to_goal.m"
    {
#line 965 "goal_expr_to_goal.m"
      mercury__varset__new_var_3_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_168_168, &hlds__make_hlds__goal_expr_to_goal__ExcpVar_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_81_81, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_82_82);
    }
#line 967 "goal_expr_to_goal.m"
    {
#line 967 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 967 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVar_39));
#line 967 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 967 "goal_expr_to_goal.m"
    }
#line 968 "goal_expr_to_goal.m"
    {
#line 968 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 968 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_42, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ExcpVar_40));
#line 968 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_42, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 968 "goal_expr_to_goal.m"
    }
#line 969 "goal_expr_to_goal.m"
    {
#line 969 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 969 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_43, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[6]));
#line 969 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 969 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_43, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 969 "goal_expr_to_goal.m"
    }
#line 971 "goal_expr_to_goal.m"
    {
#line 971 "goal_expr_to_goal.m"
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_30, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_44);
    }
#line 974 "goal_expr_to_goal.m"
    {
#line 974 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_87_87 = hlds__make_hlds__goal_expr_to_goal__magic_exception_result_sym_name_0_f_0();
    }
#line 974 "goal_expr_to_goal.m"
    {
#line 974 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 974 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_88_88, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41));
#line 974 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 974 "goal_expr_to_goal.m"
    }
#line 975 "goal_expr_to_goal.m"
    {
#line 975 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_86_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 975 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_86_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 975 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_86_86, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_87_87));
#line 975 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_86_86, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_88_88));
#line 975 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_86_86, 3) = ((MR_Box) ((MR_Integer) 0));
#line 975 "goal_expr_to_goal.m"
    }
#line 974 "goal_expr_to_goal.m"
    {
#line 974 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__CallMagic0_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 974 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__CallMagic0_45, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_86_86));
#line 974 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__CallMagic0_45, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 974 "goal_expr_to_goal.m"
    }
#line 976 "goal_expr_to_goal.m"
    {
#line 976 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__CallMagic0_45, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__CallMagic_46, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_68, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_91_91, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_70, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_92_92, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_82_82, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_93_93, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_74, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_94_94, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_76, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_95_95, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_78, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_96_96);
    }
#line 981 "goal_expr_to_goal.m"
    {
#line 981 "goal_expr_to_goal.m"
      hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_30, hlds__make_hlds__goal_expr_to_goal__IOStateVar_25, &hlds__make_hlds__goal_expr_to_goal__IOStateVarBefore_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_93_93, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_97_97, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_91_91, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_149_149, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_96_96, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_99_99);
    }
#line 988 "goal_expr_to_goal.m"
    {
#line 988 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_101_101 = hlds__make_hlds__goal_expr_to_goal__exception_functor_3_f_0((MR_String) "succeeded", hlds__make_hlds__goal_expr_to_goal__NullTupleTerm_43, hlds__make_hlds__goal_expr_to_goal__Context_30);
    }
#line 992 "goal_expr_to_goal.m"
    {
#line 992 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_100_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 992 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_100_100, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 992 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_100_100, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41));
#line 992 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_100_100, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_101_101));
#line 992 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_100_100, 3) = ((MR_Box) ((MR_Integer) 0));
#line 992 "goal_expr_to_goal.m"
    }
#line 987 "goal_expr_to_goal.m"
    {
#line 987 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnify0_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 987 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnify0_49, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_100_100));
#line 987 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnify0_49, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 987 "goal_expr_to_goal.m"
    }
#line 993 "goal_expr_to_goal.m"
    {
#line 993 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnify0_49, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnify_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_149_149, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_104_104, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_92_92, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_105_105, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_97_97, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_106_106, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_94_94, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_107_107, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_95_95, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_108_108, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_99_99, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_109_109);
    }
#line 1003 "goal_expr_to_goal.m"
    {
#line 1003 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1003 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_115_115, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVarUnrenamed_24));
#line 1003 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_115_115, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1003 "goal_expr_to_goal.m"
    }
#line 1003 "goal_expr_to_goal.m"
    {
#line 1003 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1003 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_114_114, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_115_115));
#line 1003 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_114_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1003 "goal_expr_to_goal.m"
    }
#line 1002 "goal_expr_to_goal.m"
    {
#line 1002 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1002 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_111_111, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[0]));
#line 1002 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_111_111, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_114_114));
#line 1002 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_111_111, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1002 "goal_expr_to_goal.m"
    }
#line 1002 "goal_expr_to_goal.m"
    {
#line 1002 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1002 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_117_117, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[1]));
#line 1002 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_117_117, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_114_114));
#line 1002 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_117_117, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1002 "goal_expr_to_goal.m"
    }
#line 1006 "goal_expr_to_goal.m"
    {
#line 1006 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_110_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1006 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_110_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 1006 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_110_110, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_111_111));
#line 1006 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_110_110, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_117_117));
#line 1006 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_110_110, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1006 "goal_expr_to_goal.m"
    }
#line 1002 "goal_expr_to_goal.m"
    {
#line 1002 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__IOUnify_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1002 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__IOUnify_51, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_110_110));
#line 1002 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__IOUnify_51, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1002 "goal_expr_to_goal.m"
    }
#line 1007 "goal_expr_to_goal.m"
    {
#line 1007 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1007 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_127_127, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOUnify_51));
#line 1007 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_127_127, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Goal0_26));
#line 1007 "goal_expr_to_goal.m"
    }
#line 1007 "goal_expr_to_goal.m"
    {
#line 1007 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1007 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_126_126, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_127_127));
#line 1007 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_126_126, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1007 "goal_expr_to_goal.m"
    }
#line 1007 "goal_expr_to_goal.m"
    {
#line 1007 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_124_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1007 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_124_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1007 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1007 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_124_124, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_126_126));
#line 1007 "goal_expr_to_goal.m"
    }
#line 1007 "goal_expr_to_goal.m"
    {
#line 1007 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ScopedGoal0_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1007 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ScopedGoal0_52, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_124_124));
#line 1007 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ScopedGoal0_52, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1007 "goal_expr_to_goal.m"
    }
#line 1008 "goal_expr_to_goal.m"
    {
#line 1008 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__ScopedGoal0_52, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__ScopedGoal_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_104_104, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_128_128, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_105_105, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_129_129, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_106_106, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_130_130, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_107_107, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_131_131, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_108_108, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_132_132, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_109_109, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_133_133);
    }
#line 1013 "goal_expr_to_goal.m"
    {
#line 1013 "goal_expr_to_goal.m"
      hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_30, hlds__make_hlds__goal_expr_to_goal__IOStateVar_25, &hlds__make_hlds__goal_expr_to_goal__IOStateVarAfter_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_130_130, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_134_134, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_128_128, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_135_135, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_133_133, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_136_136);
    }
#line 1017 "goal_expr_to_goal.m"
    {
#line 1017 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_137_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1017 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_137_137, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1017 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_137_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1017 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_137_137, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Then0_27));
#line 1017 "goal_expr_to_goal.m"
    }
#line 1017 "goal_expr_to_goal.m"
    {
#line 1017 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__ScopedThen0_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1017 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ScopedThen0_55, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_137_137));
#line 1017 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__ScopedThen0_55, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_30));
#line 1017 "goal_expr_to_goal.m"
    }
#line 1018 "goal_expr_to_goal.m"
    {
#line 1018 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__ScopedThen0_55, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__ScopedThen_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_135_135, &hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsSucceededDisjunct_58, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_129_129, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_140_140, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_134_134, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_141_141, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_131_131, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_142_142, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_132_132, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_143_143, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_136_136, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_144_144);
    }
#line 1028 "goal_expr_to_goal.m"
    {
#line 1028 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1028 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_147_147, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ScopedThen_56));
#line 1028 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_147_147, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1028 "goal_expr_to_goal.m"
    }
#line 1028 "goal_expr_to_goal.m"
    {
#line 1028 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1028 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_146_146, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ScopedGoal_53));
#line 1028 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_146_146, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_147_147));
#line 1028 "goal_expr_to_goal.m"
    }
#line 1028 "goal_expr_to_goal.m"
    {
#line 1028 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1028 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_145_145, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededUnify_50));
#line 1028 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_145_145, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_146_146));
#line 1028 "goal_expr_to_goal.m"
    }
#line 1028 "goal_expr_to_goal.m"
    {
#line 1028 "goal_expr_to_goal.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__V_145_145, hlds__make_hlds__goal_expr_to_goal__GoalInfo_44, &hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunct_57);
    }
#line 1035 "goal_expr_to_goal.m"
    {
#line 1035 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__make_exception_handling_disjunct_6_p_0(hlds__make_hlds__goal_expr_to_goal__ResultVarTerm_41, hlds__make_hlds__goal_expr_to_goal__ExcpVarTerm_42, hlds__make_hlds__goal_expr_to_goal__Catches0_28, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_29, hlds__make_hlds__goal_expr_to_goal__Context_30, &hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunct0_59);
    }
#line 1037 "goal_expr_to_goal.m"
    {
#line 1037 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_23, hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunct0_59, hlds__make_hlds__goal_expr_to_goal__Renaming_31, &hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunct_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_149_149, &hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsExceptionDisjunct_61, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_140_140, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_151_151, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_141_141, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_152_152, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_142_142, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_75, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_143_143, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_77, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_144_144, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_79);
    }
#line 1046 "goal_expr_to_goal.m"
    {
#line 1046 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_156_156 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1046 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_156_156, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultIsSucceededDisjunct_57));
#line 1046 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_156_156, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsSucceededDisjunct_58));
#line 1046 "goal_expr_to_goal.m"
    }
#line 1049 "goal_expr_to_goal.m"
    {
#line 1049 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_158_158 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1049 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_158_158, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultIsExceptionDisjunct_60));
#line 1049 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_158_158, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SVarStateAfterResultIsExceptionDisjunct_61));
#line 1049 "goal_expr_to_goal.m"
    }
#line 1046 "goal_expr_to_goal.m"
    {
#line 1046 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1046 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_157_157, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_158_158));
#line 1046 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_157_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1046 "goal_expr_to_goal.m"
    }
#line 1044 "goal_expr_to_goal.m"
    {
#line 1044 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__DisjunctSVarStates_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1044 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__DisjunctSVarStates_62, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_156_156));
#line 1044 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__DisjunctSVarStates_62, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_157_157));
#line 1044 "goal_expr_to_goal.m"
    }
#line 1050 "goal_expr_to_goal.m"
    {
#line 1050 "goal_expr_to_goal.m"
      hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_30, hlds__make_hlds__goal_expr_to_goal__DisjunctSVarStates_62, &hlds__make_hlds__goal_expr_to_goal__Disjuncts_63, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_152_152, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_149_149, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_69, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_151_151, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_71);
    }
#line 1052 "goal_expr_to_goal.m"
    {
#line 1052 "goal_expr_to_goal.m"
      hlds__hlds_goal__disj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__Disjuncts_63, hlds__make_hlds__goal_expr_to_goal__GoalInfo_44, &hlds__make_hlds__goal_expr_to_goal__Disjunction_64);
    }
#line 1055 "goal_expr_to_goal.m"
    {
#line 1055 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1055 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_164_164, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Disjunction_64));
#line 1055 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_164_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1055 "goal_expr_to_goal.m"
    }
#line 1055 "goal_expr_to_goal.m"
    {
#line 1055 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_163_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1055 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_163_163, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CallMagic_46));
#line 1055 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_163_163, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_164_164));
#line 1055 "goal_expr_to_goal.m"
    }
#line 1055 "goal_expr_to_goal.m"
    {
#line 1055 "goal_expr_to_goal.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__V_163_163, hlds__make_hlds__goal_expr_to_goal__GoalInfo_44, &hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunction_65);
    }
#line 1058 "goal_expr_to_goal.m"
    {
#line 1058 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__IOStateVars_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1058 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__IOStateVars_66, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVarBefore_47));
#line 1058 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__IOStateVars_66, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVarAfter_54));
#line 1058 "goal_expr_to_goal.m"
    }
#line 1059 "goal_expr_to_goal.m"
    {
#line 1059 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1059 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_167_167, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVars_66));
#line 1059 "goal_expr_to_goal.m"
    }
#line 1059 "goal_expr_to_goal.m"
    {
#line 1059 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_166_166 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1059 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_166_166, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_167_167));
#line 1059 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_166_166, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ResultVar_39));
#line 1059 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_166_166, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CallMagicThenDisjunction_65));
#line 1059 "goal_expr_to_goal.m"
    }
#line 1059 "goal_expr_to_goal.m"
    {
#line 1059 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__GoalExpr_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1059 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1059 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_67, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_166_166));
#line 1059 "goal_expr_to_goal.m"
    }
#line 1061 "goal_expr_to_goal.m"
    {
#line 1061 "goal_expr_to_goal.m"
      MR_Word base;
#line 1061 "goal_expr_to_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1061 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__TryGoal_32 = base;
#line 1061 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_67));
#line 1061 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_44));
#line 1061 "goal_expr_to_goal.m"
    }
#line 963 "goal_expr_to_goal.m"
  }
#line 953 "goal_expr_to_goal.m"
}

#line 907 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(
#line 907 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_1,
#line 907 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2,
#line 907 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_3,
#line 907 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HeadVar__4_4,
#line 907 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__5_5,
#line 907 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__6_6,
#line 907 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__HeadVar__7_7,
#line 907 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_8,
#line 907 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_9,
#line 907 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_10,
#line 907 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_11,
#line 907 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_12,
#line 907 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_13,
#line 907 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_14,
#line 907 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_15)
#line 907 "goal_expr_to_goal.m"
{
#line 914 "goal_expr_to_goal.m"
  {
#line 914 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;

#line 914 "goal_expr_to_goal.m"
    if ((hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 914 "goal_expr_to_goal.m"
      {
#line 914 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 914 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_15 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_14;
#line 914 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_13 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_12;
#line 914 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_11 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_10;
#line 914 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_9 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_8;
#line 914 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__HeadVar__7_7 = hlds__make_hlds__goal_expr_to_goal__HeadVar__6_6;
#line 914 "goal_expr_to_goal.m"
      }
#line 914 "goal_expr_to_goal.m"
    else
#line 918 "goal_expr_to_goal.m"
      {
#line 918 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2, (MR_Integer) 0)));
#line 918 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__Goals_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2, (MR_Integer) 1)));
#line 918 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__DisjState_38;
#line 918 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__DisjStates_39;
#line 918 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal_46;
#line 918 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_47;
#line 918 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58_58;
#line 918 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_59_59;
#line 918 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_60_60;
#line 918 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_61_61;
#line 918 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_62_62;

#line 919 "goal_expr_to_goal.m"
        {
#line 919 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_1, hlds__make_hlds__goal_expr_to_goal__Goal_35, hlds__make_hlds__goal_expr_to_goal__Renaming_3, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal_46, hlds__make_hlds__goal_expr_to_goal__HeadVar__5_5, &hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_47, hlds__make_hlds__goal_expr_to_goal__HeadVar__6_6, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58_58, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_8, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_59_59, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_10, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_60_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_12, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_61_61, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_14, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_62_62);
        }
#line 922 "goal_expr_to_goal.m"
        {
#line 922 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__DisjState_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 922 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__DisjState_38, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSGoal_46));
#line 922 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__DisjState_38, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_47));
#line 922 "goal_expr_to_goal.m"
        }
#line 923 "goal_expr_to_goal.m"
        {
#line 923 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_1, hlds__make_hlds__goal_expr_to_goal__Goals_36, hlds__make_hlds__goal_expr_to_goal__Renaming_3, &hlds__make_hlds__goal_expr_to_goal__DisjStates_39, hlds__make_hlds__goal_expr_to_goal__HeadVar__5_5, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_58_58, hlds__make_hlds__goal_expr_to_goal__HeadVar__7_7, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_59_59, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_9, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_60_60, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_11, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_61_61, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_13, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_62_62, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_15);
        }
#line 918 "goal_expr_to_goal.m"
        {
#line 918 "goal_expr_to_goal.m"
          MR_Word base;
#line 918 "goal_expr_to_goal.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 918 "goal_expr_to_goal.m"
          *hlds__make_hlds__goal_expr_to_goal__HeadVar__4_4 = base;
#line 918 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__DisjState_38));
#line 918 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__DisjStates_39));
#line 918 "goal_expr_to_goal.m"
        }
#line 918 "goal_expr_to_goal.m"
      }
#line 914 "goal_expr_to_goal.m"
  }
#line 907 "goal_expr_to_goal.m"
}

#line 878 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(
#line 878 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_17,
#line 878 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_18,
#line 878 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_19,
#line 878 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__DisjStates0_20,
#line 878 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__DisjStates_21,
#line 878 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__SVarStateBefore_22,
#line 878 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_35,
#line 878 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_36,
#line 878 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_37,
#line 878 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_38,
#line 878 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_39,
#line 878 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_40,
#line 878 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_41,
#line 878 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_42,
#line 878 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_43,
#line 878 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_44)
#line 878 "goal_expr_to_goal.m"
{
#line 899 "goal_expr_to_goal.m"
  while (MR_TRUE)
#line 899 "goal_expr_to_goal.m"
    {
#line 899 "goal_expr_to_goal.m"
      /* tailcall optimized into a loop */
#line 899 "goal_expr_to_goal.m"
      {
#line 899 "goal_expr_to_goal.m"
        MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 899 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__A_28;
#line 899 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__B_29;
#line 887 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 0)));
#line 887 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal___Context_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_18, (MR_Integer) 1)));

#line 887 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_45_45)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_45_45, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 887 "goal_expr_to_goal.m"
        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 887 "goal_expr_to_goal.m"
          {
#line 887 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__A_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_45_45, (MR_Integer) 1)));
#line 887 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__B_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_45_45, (MR_Integer) 2)));
#line 895 "goal_expr_to_goal.m"
            {
#line 895 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__DisjStates1_31;
#line 895 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_46_46;
#line 895 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_47_47;
#line 895 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_48_48;
#line 895 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_49_49;
#line 895 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_50_50;

#line 893 "goal_expr_to_goal.m"
              {
#line 893 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__B_29, hlds__make_hlds__goal_expr_to_goal__Renaming_19, hlds__make_hlds__goal_expr_to_goal__DisjStates0_20, &hlds__make_hlds__goal_expr_to_goal__DisjStates1_31, hlds__make_hlds__goal_expr_to_goal__SVarStateBefore_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_35, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_46_46, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_37, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_47_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_48_48, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_41, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_49_49, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_43, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_50_50);
              }
#line 896 "goal_expr_to_goal.m"
              /* direct tailcall eliminated */
#line 896 "goal_expr_to_goal.m"
              {
#line 896 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_18 = hlds__make_hlds__goal_expr_to_goal__A_28;
#line 896 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__DisjStates0__tmp_copy_20 = hlds__make_hlds__goal_expr_to_goal__DisjStates1_31;
#line 896 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_46_46;
#line 896 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_47_47;
#line 896 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_48_48;
#line 896 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_49_49;
#line 896 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_50_50;

#line 896 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_43;
#line 896 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_41;
#line 896 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_39;
#line 896 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_37;
#line 896 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_35;
#line 896 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__DisjStates0_20 = hlds__make_hlds__goal_expr_to_goal__DisjStates0__tmp_copy_20;
#line 896 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__Goal_18 = hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_18;
#line 896 "goal_expr_to_goal.m"
              }
#line 896 "goal_expr_to_goal.m"
              continue;
#line 895 "goal_expr_to_goal.m"
            }
#line 887 "goal_expr_to_goal.m"
          }
#line 887 "goal_expr_to_goal.m"
        else
#line 902 "goal_expr_to_goal.m"
          {
#line 902 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoal_32;
#line 902 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_33;
#line 902 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__DisjState_34;

#line 900 "goal_expr_to_goal.m"
            {
#line 900 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Goal_18, hlds__make_hlds__goal_expr_to_goal__Renaming_19, &hlds__make_hlds__goal_expr_to_goal__HLDSGoal_32, hlds__make_hlds__goal_expr_to_goal__SVarStateBefore_22, &hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_33, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_35, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_36, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_37, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_38, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_41, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_42, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_43, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_44);
            }
#line 903 "goal_expr_to_goal.m"
            {
#line 903 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__DisjState_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 903 "goal_expr_to_goal.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__DisjState_34, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSGoal_32));
#line 903 "goal_expr_to_goal.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__DisjState_34, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SVarStateAfterDisjunct_33));
#line 903 "goal_expr_to_goal.m"
            }
#line 904 "goal_expr_to_goal.m"
            {
#line 904 "goal_expr_to_goal.m"
              MR_Word base;
#line 904 "goal_expr_to_goal.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "goal_expr_to_goal.m"
              *hlds__make_hlds__goal_expr_to_goal__DisjStates_21 = base;
#line 904 "goal_expr_to_goal.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__DisjState_34));
#line 904 "goal_expr_to_goal.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__DisjStates0_20));
#line 904 "goal_expr_to_goal.m"
            }
#line 902 "goal_expr_to_goal.m"
          }
#line 899 "goal_expr_to_goal.m"
      }
#line 899 "goal_expr_to_goal.m"
      break;
#line 899 "goal_expr_to_goal.m"
    }
#line 878 "goal_expr_to_goal.m"
}

#line 849 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__get_rev_par_conj_17_p_0(
#line 849 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
#line 849 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_19,
#line 849 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_20,
#line 849 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__RevParConj0_21,
#line 849 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__RevParConj_22,
#line 849 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_35,
#line 849 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_36,
#line 849 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_37,
#line 849 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_38,
#line 849 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_39,
#line 849 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_40,
#line 849 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_41,
#line 849 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_42,
#line 849 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_43,
#line 849 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_44,
#line 849 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_45,
#line 849 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_46)
#line 849 "goal_expr_to_goal.m"
{
#line 865 "goal_expr_to_goal.m"
  while (MR_TRUE)
#line 865 "goal_expr_to_goal.m"
    {
#line 865 "goal_expr_to_goal.m"
      /* tailcall optimized into a loop */
#line 865 "goal_expr_to_goal.m"
      {
#line 865 "goal_expr_to_goal.m"
        MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 865 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__A_29;
#line 865 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__B_30;
#line 858 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 0)));
#line 858 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal___Context_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 1)));

#line 858 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_47_47)) == (MR_mktag((MR_Integer) 2)));
#line 858 "goal_expr_to_goal.m"
        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 858 "goal_expr_to_goal.m"
          {
#line 858 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__A_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_47_47, (MR_Integer) 0)));
#line 858 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__B_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_47_47, (MR_Integer) 1)));
#line 861 "goal_expr_to_goal.m"
            {
#line 861 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__RevParConj1_32;
#line 861 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_48_48;
#line 861 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_49_49;
#line 861 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_50_50;
#line 861 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_51_51;
#line 861 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_52_52;
#line 861 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_53_53;

#line 859 "goal_expr_to_goal.m"
              {
#line 859 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__get_rev_par_conj_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__A_29, hlds__make_hlds__goal_expr_to_goal__Renaming_20, hlds__make_hlds__goal_expr_to_goal__RevParConj0_21, &hlds__make_hlds__goal_expr_to_goal__RevParConj1_32, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_35, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_48_48, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_37, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_49_49, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_39, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_50_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_41, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_51_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_43, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_52_52, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_45, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_53_53);
              }
#line 862 "goal_expr_to_goal.m"
              /* direct tailcall eliminated */
#line 862 "goal_expr_to_goal.m"
              {
#line 862 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_19 = hlds__make_hlds__goal_expr_to_goal__B_30;
#line 862 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__RevParConj0__tmp_copy_21 = hlds__make_hlds__goal_expr_to_goal__RevParConj1_32;
#line 862 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0__tmp_copy_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_48_48;
#line 862 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_49_49;
#line 862 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_50_50;
#line 862 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_51_51;
#line 862 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_52_52;
#line 862 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_45 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_53_53;

#line 862 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_45 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_45;
#line 862 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_43;
#line 862 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_41;
#line 862 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_39;
#line 862 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_37;
#line 862 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0__tmp_copy_35;
#line 862 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__RevParConj0_21 = hlds__make_hlds__goal_expr_to_goal__RevParConj0__tmp_copy_21;
#line 862 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__Goal_19 = hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_19;
#line 862 "goal_expr_to_goal.m"
              }
#line 862 "goal_expr_to_goal.m"
              continue;
#line 861 "goal_expr_to_goal.m"
            }
#line 858 "goal_expr_to_goal.m"
          }
#line 858 "goal_expr_to_goal.m"
        else
#line 868 "goal_expr_to_goal.m"
          {
#line 868 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_67_67;
#line 868 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__Goal1_33;
#line 868 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__ParConjList_34;
#line 868 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__V_66_66;

#line 866 "goal_expr_to_goal.m"
            {
#line 866 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__Goal_19, hlds__make_hlds__goal_expr_to_goal__Renaming_20, &hlds__make_hlds__goal_expr_to_goal__Goal1_33, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_35, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_36, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_37, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_38, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_41, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_42, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_43, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_44, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_45, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_46);
            }
#line 869 "goal_expr_to_goal.m"
            {
#line 869 "goal_expr_to_goal.m"
              hlds__hlds_goal__goal_to_par_conj_list_2_p_0(hlds__make_hlds__goal_expr_to_goal__Goal1_33, &hlds__make_hlds__goal_expr_to_goal__ParConjList_34);
            }
#line 3530 "hlds.make_hlds.goal_expr_to_goal.c"
            hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_67_67 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 870 "goal_expr_to_goal.m"
            {
#line 870 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__V_66_66 = mercury__list__reverse_1_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_67_67, hlds__make_hlds__goal_expr_to_goal__ParConjList_34);
            }
#line 870 "goal_expr_to_goal.m"
            {
#line 870 "goal_expr_to_goal.m"
              *hlds__make_hlds__goal_expr_to_goal__RevParConj_22 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_67_67, hlds__make_hlds__goal_expr_to_goal__V_66_66, hlds__make_hlds__goal_expr_to_goal__RevParConj0_21);
            }
#line 868 "goal_expr_to_goal.m"
          }
#line 865 "goal_expr_to_goal.m"
      }
#line 865 "goal_expr_to_goal.m"
      break;
#line 865 "goal_expr_to_goal.m"
    }
#line 849 "goal_expr_to_goal.m"
}

#line 823 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__get_rev_conj_17_p_0(
#line 823 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
#line 823 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal_19,
#line 823 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_20,
#line 823 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__RevConj0_21,
#line 823 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__RevConj_22,
#line 823 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_35,
#line 823 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_36,
#line 823 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_37,
#line 823 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_38,
#line 823 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_39,
#line 823 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_40,
#line 823 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_41,
#line 823 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_42,
#line 823 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_43,
#line 823 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_44,
#line 823 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_45,
#line 823 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_46)
#line 823 "goal_expr_to_goal.m"
{
#line 837 "goal_expr_to_goal.m"
  while (MR_TRUE)
#line 837 "goal_expr_to_goal.m"
    {
#line 837 "goal_expr_to_goal.m"
      /* tailcall optimized into a loop */
#line 837 "goal_expr_to_goal.m"
      {
#line 837 "goal_expr_to_goal.m"
        MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 837 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__A_29;
#line 837 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__B_30;
#line 832 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 0)));
#line 832 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal___Context_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal_19, (MR_Integer) 1)));

#line 832 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_47_47)) == (MR_mktag((MR_Integer) 1)));
#line 832 "goal_expr_to_goal.m"
        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 832 "goal_expr_to_goal.m"
          {
#line 832 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__A_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_47_47, (MR_Integer) 0)));
#line 832 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__B_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_47_47, (MR_Integer) 1)));
#line 834 "goal_expr_to_goal.m"
            {
#line 834 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__RevConj1_32;
#line 834 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_48_48;
#line 834 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_49_49;
#line 834 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_50_50;
#line 834 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_51_51;
#line 834 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_52_52;
#line 834 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_53_53;

#line 833 "goal_expr_to_goal.m"
              {
#line 833 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__get_rev_conj_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__A_29, hlds__make_hlds__goal_expr_to_goal__Renaming_20, hlds__make_hlds__goal_expr_to_goal__RevConj0_21, &hlds__make_hlds__goal_expr_to_goal__RevConj1_32, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_35, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_48_48, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_37, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_49_49, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_39, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_50_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_41, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_51_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_43, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_52_52, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_45, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_53_53);
              }
#line 835 "goal_expr_to_goal.m"
              /* direct tailcall eliminated */
#line 835 "goal_expr_to_goal.m"
              {
#line 835 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_19 = hlds__make_hlds__goal_expr_to_goal__B_30;
#line 835 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__RevConj0__tmp_copy_21 = hlds__make_hlds__goal_expr_to_goal__RevConj1_32;
#line 835 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0__tmp_copy_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_48_48;
#line 835 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_49_49;
#line 835 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_50_50;
#line 835 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_51_51;
#line 835 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_52_52;
#line 835 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_45 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_53_53;

#line 835 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_45 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0__tmp_copy_45;
#line 835 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_43 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0__tmp_copy_43;
#line 835 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_41 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0__tmp_copy_41;
#line 835 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_39 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0__tmp_copy_39;
#line 835 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_37 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0__tmp_copy_37;
#line 835 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_35 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0__tmp_copy_35;
#line 835 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__RevConj0_21 = hlds__make_hlds__goal_expr_to_goal__RevConj0__tmp_copy_21;
#line 835 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__Goal_19 = hlds__make_hlds__goal_expr_to_goal__Goal__tmp_copy_19;
#line 835 "goal_expr_to_goal.m"
              }
#line 835 "goal_expr_to_goal.m"
              continue;
#line 834 "goal_expr_to_goal.m"
            }
#line 832 "goal_expr_to_goal.m"
          }
#line 832 "goal_expr_to_goal.m"
        else
#line 839 "goal_expr_to_goal.m"
          {
#line 839 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_67_67;
#line 839 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__Goal1_33;
#line 839 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__ConjList_34;
#line 839 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__V_66_66;

#line 838 "goal_expr_to_goal.m"
            {
#line 838 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__Goal_19, hlds__make_hlds__goal_expr_to_goal__Renaming_20, &hlds__make_hlds__goal_expr_to_goal__Goal1_33, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_35, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_36, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_37, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_38, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_41, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_42, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_43, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_44, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_45, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_46);
            }
#line 840 "goal_expr_to_goal.m"
            {
#line 840 "goal_expr_to_goal.m"
              hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__make_hlds__goal_expr_to_goal__Goal1_33, &hlds__make_hlds__goal_expr_to_goal__ConjList_34);
            }
#line 3711 "hlds.make_hlds.goal_expr_to_goal.c"
            hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_67_67 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 841 "goal_expr_to_goal.m"
            {
#line 841 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__V_66_66 = mercury__list__reverse_1_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_67_67, hlds__make_hlds__goal_expr_to_goal__ConjList_34);
            }
#line 841 "goal_expr_to_goal.m"
            {
#line 841 "goal_expr_to_goal.m"
              *hlds__make_hlds__goal_expr_to_goal__RevConj_22 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_67_67, hlds__make_hlds__goal_expr_to_goal__V_66_66, hlds__make_hlds__goal_expr_to_goal__RevConj0_21);
            }
#line 839 "goal_expr_to_goal.m"
          }
#line 837 "goal_expr_to_goal.m"
      }
#line 837 "goal_expr_to_goal.m"
      break;
#line 837 "goal_expr_to_goal.m"
    }
#line 823 "goal_expr_to_goal.m"
}

#line 735 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_p_0(
#line 735 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_18,
#line 735 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__FieldNames_19,
#line 735 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms_20,
#line 735 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_21,
#line 735 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_22,
#line 735 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_52,
#line 735 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_53,
#line 735 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_54,
#line 735 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_55,
#line 735 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_56,
#line 735 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_57,
#line 735 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_58,
#line 735 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_59,
#line 735 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_60,
#line 735 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_61,
#line 735 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_62,
#line 735 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_63)
#line 735 "goal_expr_to_goal.m"
{
#line 744 "goal_expr_to_goal.m"
  {
#line 744 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 744 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ArgVars_29;
#line 744 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_64_64;
#line 744 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_65_65;
#line 744 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66_66;
#line 814 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__FieldValueVar_30;
#line 814 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TermInputVar_31;
#line 814 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TermOutputVar_32;
#line 747 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_67_67;
#line 747 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_68_68;
#line 747 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_69_69;

#line 745 "goal_expr_to_goal.m"
    {
#line 745 "goal_expr_to_goal.m"
      hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(hlds__make_hlds__goal_expr_to_goal__ArgTerms_20, &hlds__make_hlds__goal_expr_to_goal__ArgVars_29, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_56, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_64_64, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_52, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_65_65, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_62, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66_66);
    }
#line 747 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__ArgVars_29)) == (MR_mktag((MR_Integer) 1)));
#line 747 "goal_expr_to_goal.m"
    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 747 "goal_expr_to_goal.m"
      {
#line 747 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__FieldValueVar_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgVars_29, (MR_Integer) 0)));
#line 747 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgVars_29, (MR_Integer) 1)));
#line 747 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_67_67)) == (MR_mktag((MR_Integer) 1)));
#line 747 "goal_expr_to_goal.m"
        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 747 "goal_expr_to_goal.m"
          {
#line 747 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__TermInputVar_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_67_67, (MR_Integer) 0)));
#line 747 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_67_67, (MR_Integer) 1)));
#line 747 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_68_68)) == (MR_mktag((MR_Integer) 1)));
#line 747 "goal_expr_to_goal.m"
            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 747 "goal_expr_to_goal.m"
              {
#line 747 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__TermOutputVar_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_68_68, (MR_Integer) 0)));
#line 747 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_68_68, (MR_Integer) 1)));
#line 747 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_69_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 747 "goal_expr_to_goal.m"
              }
#line 747 "goal_expr_to_goal.m"
          }
#line 747 "goal_expr_to_goal.m"
      }
#line 814 "goal_expr_to_goal.m"
    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 781 "goal_expr_to_goal.m"
      if ((hlds__make_hlds__goal_expr_to_goal__AccessType_18 == (MR_Integer) 0))
#line 782 "goal_expr_to_goal.m"
        {
#line 782 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_72_72;
#line 782 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_73_73;
#line 782 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_74_74;
#line 782 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_75_75;
#line 782 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_76_76;
#line 782 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_77_77;
#line 782 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_78_78;
#line 782 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_85_85;
#line 782 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_88_88;
#line 782 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_89_89;
#line 782 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_90_90;
#line 782 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_91_91;
#line 782 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__Functor_134;
#line 782 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_135;
#line 782 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__Goal0_136;
#line 782 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__FieldArgContext_138;
#line 782 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__FuncName_143;
#line 782 "goal_expr_to_goal.m"
          MR_Integer hlds__make_hlds__goal_expr_to_goal__FuncArity_144;
#line 782 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__SimpleCallId_146;
#line 782 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_147;
#line 782 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__ArgContexts_148;
#line 783 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal___InnerSubContext_50;
#line 794 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_132;
#line 794 "goal_expr_to_goal.m"
          MR_Integer hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_133;
#line 791 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal___TC_51;

#line 783 "goal_expr_to_goal.m"
          {
#line 783 "goal_expr_to_goal.m"
            hlds__make_hlds__field_access__expand_dcg_field_extraction_goal_22_p_0(hlds__make_hlds__goal_expr_to_goal__Context_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__goal_expr_to_goal__FieldNames_19, hlds__make_hlds__goal_expr_to_goal__FieldValueVar_30, hlds__make_hlds__goal_expr_to_goal__TermInputVar_31, hlds__make_hlds__goal_expr_to_goal__TermOutputVar_32, &hlds__make_hlds__goal_expr_to_goal__Functor_134, &hlds__make_hlds__goal_expr_to_goal__V_72_72, &hlds__make_hlds__goal_expr_to_goal__Goal0_136, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_65_65, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_73_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_54, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_74_74, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_64_64, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_75_75, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_58, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_76_76, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_60, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_77_77, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66_66, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_78_78);
          }
#line 783 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_72_72, (MR_Integer) 0)));
#line 783 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal___InnerSubContext_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_72_72, (MR_Integer) 1)));
#line 789 "goal_expr_to_goal.m"
          {
#line 789 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_147 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 789 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_147, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Functor_134));
#line 789 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_147, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 789 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_147, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 789 "goal_expr_to_goal.m"
          }
#line 791 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_135)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_135, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 791 "goal_expr_to_goal.m"
          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 791 "goal_expr_to_goal.m"
            {
#line 791 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_135, (MR_Integer) 1)));
#line 791 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_133 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_135, (MR_Integer) 2)));
#line 791 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal___TC_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_135, (MR_Integer) 3)));
#line 792 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncName_143 = hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_132;
#line 793 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncArity_144 = hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_133;
#line 791 "goal_expr_to_goal.m"
            }
#line 791 "goal_expr_to_goal.m"
          else
#line 795 "goal_expr_to_goal.m"
            {
#line 795 "goal_expr_to_goal.m"
              {
#line 795 "goal_expr_to_goal.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.goal_expr_to_goal", (MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "not cons");
#line 795 "goal_expr_to_goal.m"
                return;
              }
#line 795 "goal_expr_to_goal.m"
            }
#line 798 "goal_expr_to_goal.m"
          {
#line 798 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SimpleCallId_146 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 798 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_146, 0) = ((MR_Box) ((MR_Integer) 1));
#line 798 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_146, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FuncName_143));
#line 798 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_146, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FuncArity_144));
#line 798 "goal_expr_to_goal.m"
          }
#line 799 "goal_expr_to_goal.m"
          {
#line 799 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 799 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_85_85, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SimpleCallId_146));
#line 799 "goal_expr_to_goal.m"
          }
#line 799 "goal_expr_to_goal.m"
          {
#line 799 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__FieldArgContext_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 799 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__FieldArgContext_138, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_85_85));
#line 799 "goal_expr_to_goal.m"
          }
#line 806 "goal_expr_to_goal.m"
          {
#line 806 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 806 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_88_88, 0) = ((MR_Box) ((MR_Integer) 2));
#line 806 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_88_88, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FieldArgContext_138));
#line 806 "goal_expr_to_goal.m"
          }
#line 807 "goal_expr_to_goal.m"
          {
#line 807 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 807 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_90_90, 0) = ((MR_Box) ((MR_Integer) 1));
#line 807 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_90_90, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_147));
#line 807 "goal_expr_to_goal.m"
          }
#line 807 "goal_expr_to_goal.m"
          {
#line 807 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 807 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_91_91, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_90_90));
#line 807 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 807 "goal_expr_to_goal.m"
          }
#line 806 "goal_expr_to_goal.m"
          {
#line 806 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 806 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_89_89, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_90_90));
#line 806 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_89_89, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_91_91));
#line 806 "goal_expr_to_goal.m"
          }
#line 805 "goal_expr_to_goal.m"
          {
#line 805 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__ArgContexts_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 805 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgContexts_148, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_88_88));
#line 805 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgContexts_148, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_89_89));
#line 805 "goal_expr_to_goal.m"
          }
#line 810 "goal_expr_to_goal.m"
          {
#line 810 "goal_expr_to_goal.m"
            hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_p_0(hlds__make_hlds__goal_expr_to_goal__ArgVars_29, hlds__make_hlds__goal_expr_to_goal__ArgTerms_20, hlds__make_hlds__goal_expr_to_goal__ArgContexts_148, hlds__make_hlds__goal_expr_to_goal__Context_21, hlds__make_hlds__goal_expr_to_goal__Goal0_136, hlds__make_hlds__goal_expr_to_goal__Goal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_73_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_74_74, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_55, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_75_75, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_57, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_76_76, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_59, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_77_77, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_61, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_78_78, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_63);
#line 810 "goal_expr_to_goal.m"
            return;
          }
#line 782 "goal_expr_to_goal.m"
        }
#line 781 "goal_expr_to_goal.m"
      else
#line 749 "goal_expr_to_goal.m"
        {
#line 749 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__Functor_33;
#line 749 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_34;
#line 749 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__InnermostSubContext_35;
#line 749 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__Goal0_36;
#line 749 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__FieldArgContext_38;
#line 749 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_40;
#line 749 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__FuncName_44;
#line 749 "goal_expr_to_goal.m"
          MR_Integer hlds__make_hlds__goal_expr_to_goal__FuncArity_45;
#line 749 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__SimpleCallId_47;
#line 749 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_48;
#line 749 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__ArgContexts_49;
#line 749 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_102_102;
#line 749 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_103_103;
#line 749 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_104_104;
#line 749 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_105_105;
#line 749 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_106_106;
#line 749 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_107_107;
#line 749 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_108_108;
#line 749 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_116_116;
#line 749 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_117_117;
#line 749 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_118_118;
#line 749 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_119_119;
#line 749 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_120_120;
#line 749 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__V_121_121;
#line 764 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_41;
#line 764 "goal_expr_to_goal.m"
          MR_Integer hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_42;
#line 761 "goal_expr_to_goal.m"
          MR_Word hlds__make_hlds__goal_expr_to_goal___TypeCtor_43;

#line 750 "goal_expr_to_goal.m"
          {
#line 750 "goal_expr_to_goal.m"
            hlds__make_hlds__field_access__expand_set_field_function_call_22_p_0(hlds__make_hlds__goal_expr_to_goal__Context_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__goal_expr_to_goal__FieldNames_19, hlds__make_hlds__goal_expr_to_goal__FieldValueVar_30, hlds__make_hlds__goal_expr_to_goal__TermInputVar_31, hlds__make_hlds__goal_expr_to_goal__TermOutputVar_32, &hlds__make_hlds__goal_expr_to_goal__Functor_33, &hlds__make_hlds__goal_expr_to_goal__V_102_102, &hlds__make_hlds__goal_expr_to_goal__Goal0_36, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_65_65, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_103_103, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_54, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_104_104, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_64_64, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_105_105, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_58, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_106_106, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_60, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_107_107, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_66_66, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_108_108);
          }
#line 750 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_102_102, (MR_Integer) 0)));
#line 750 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__InnermostSubContext_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_102_102, (MR_Integer) 1)));
#line 757 "goal_expr_to_goal.m"
          {
#line 757 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__FieldArgContext_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 757 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__FieldArgContext_38, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnermostFunctor_34));
#line 757 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__FieldArgContext_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 757 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__FieldArgContext_38, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnermostSubContext_35));
#line 757 "goal_expr_to_goal.m"
          }
#line 760 "goal_expr_to_goal.m"
          {
#line 760 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 760 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_40, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Functor_33));
#line 760 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 760 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_40, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 760 "goal_expr_to_goal.m"
          }
#line 761 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Functor_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Functor_33, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 761 "goal_expr_to_goal.m"
          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 761 "goal_expr_to_goal.m"
            {
#line 761 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Functor_33, (MR_Integer) 1)));
#line 761 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Functor_33, (MR_Integer) 2)));
#line 761 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal___TypeCtor_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Functor_33, (MR_Integer) 3)));
#line 762 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncName_44 = hlds__make_hlds__goal_expr_to_goal__FuncNamePrime_41;
#line 763 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__FuncArity_45 = hlds__make_hlds__goal_expr_to_goal__FuncArityPrime_42;
#line 761 "goal_expr_to_goal.m"
            }
#line 761 "goal_expr_to_goal.m"
          else
#line 765 "goal_expr_to_goal.m"
            {
#line 765 "goal_expr_to_goal.m"
              {
#line 765 "goal_expr_to_goal.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.goal_expr_to_goal", (MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "not cons");
#line 765 "goal_expr_to_goal.m"
                return;
              }
#line 765 "goal_expr_to_goal.m"
            }
#line 770 "goal_expr_to_goal.m"
          {
#line 770 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__SimpleCallId_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 770 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_47, 0) = ((MR_Box) ((MR_Integer) 1));
#line 770 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_47, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FuncName_44));
#line 770 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SimpleCallId_47, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FuncArity_45));
#line 770 "goal_expr_to_goal.m"
          }
#line 771 "goal_expr_to_goal.m"
          {
#line 771 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 771 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_116_116, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SimpleCallId_47));
#line 771 "goal_expr_to_goal.m"
          }
#line 771 "goal_expr_to_goal.m"
          {
#line 771 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 771 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_48, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_116_116));
#line 771 "goal_expr_to_goal.m"
          }
#line 774 "goal_expr_to_goal.m"
          {
#line 774 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 774 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_117_117, 0) = ((MR_Box) ((MR_Integer) 2));
#line 774 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_117_117, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FieldArgContext_38));
#line 774 "goal_expr_to_goal.m"
          }
#line 775 "goal_expr_to_goal.m"
          {
#line 775 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_119_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 775 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_119_119, 0) = ((MR_Box) ((MR_Integer) 1));
#line 775 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_119_119, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InputTermArgContext_40));
#line 775 "goal_expr_to_goal.m"
          }
#line 777 "goal_expr_to_goal.m"
          {
#line 777 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 777 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_121_121, 0) = ((MR_Box) ((MR_Integer) 3));
#line 777 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_121_121, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OutputTermArgContext_48));
#line 777 "goal_expr_to_goal.m"
          }
#line 775 "goal_expr_to_goal.m"
          {
#line 775 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_120_120, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_121_121));
#line 775 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 775 "goal_expr_to_goal.m"
          }
#line 774 "goal_expr_to_goal.m"
          {
#line 774 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 774 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_118_118, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_119_119));
#line 774 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_118_118, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_120_120));
#line 774 "goal_expr_to_goal.m"
          }
#line 773 "goal_expr_to_goal.m"
          {
#line 773 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__ArgContexts_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 773 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgContexts_49, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_117_117));
#line 773 "goal_expr_to_goal.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgContexts_49, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_118_118));
#line 773 "goal_expr_to_goal.m"
          }
#line 778 "goal_expr_to_goal.m"
          {
#line 778 "goal_expr_to_goal.m"
            hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_contexts_18_p_0(hlds__make_hlds__goal_expr_to_goal__ArgVars_29, hlds__make_hlds__goal_expr_to_goal__ArgTerms_20, hlds__make_hlds__goal_expr_to_goal__ArgContexts_49, hlds__make_hlds__goal_expr_to_goal__Context_21, hlds__make_hlds__goal_expr_to_goal__Goal0_36, hlds__make_hlds__goal_expr_to_goal__Goal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_103_103, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_104_104, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_55, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_105_105, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_57, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_106_106, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_59, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_107_107, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_61, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_108_108, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_63);
#line 778 "goal_expr_to_goal.m"
            return;
          }
#line 749 "goal_expr_to_goal.m"
        }
#line 814 "goal_expr_to_goal.m"
    else
#line 815 "goal_expr_to_goal.m"
      {
#line 815 "goal_expr_to_goal.m"
        {
#line 815 "goal_expr_to_goal.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.goal_expr_to_goal", (MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_dcg_record_syntax_2\'/17", (MR_String) "arity != 3");
#line 815 "goal_expr_to_goal.m"
          return;
        }
#line 815 "goal_expr_to_goal.m"
      }
#line 744 "goal_expr_to_goal.m"
  }
#line 735 "goal_expr_to_goal.m"
}

#line 679 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_p_0(
#line 679 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
#line 679 "goal_expr_to_goal.m"
  MR_String hlds__make_hlds__goal_expr_to_goal__Operator_19,
#line 679 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20,
#line 679 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_21,
#line 679 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_22,
#line 679 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_47,
#line 679 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_48,
#line 679 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_49,
#line 679 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_50,
#line 679 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_51,
#line 679 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52,
#line 679 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_53,
#line 679 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_54,
#line 679 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_55,
#line 679 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_56,
#line 679 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_57,
#line 679 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_58)
#line 679 "goal_expr_to_goal.m"
{
#line 689 "goal_expr_to_goal.m"
  {
#line 689 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 689 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_29;
#line 723 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__AccessType_34;
#line 723 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__FieldNameTerm_35;
#line 723 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__FieldValueTerm_36;
#line 723 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_60_60;
#line 692 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__LHSTerm_30;
#line 692 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__RHSTerm_31;
#line 692 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_59_59;
#line 692 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_61_61;
#line 692 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_62_62;
#line 692 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TermInputTerm_32;
#line 692 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TermOutputTerm_33;

#line 690 "goal_expr_to_goal.m"
    {
#line 690 "goal_expr_to_goal.m"
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_21, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_29);
    }
#line 692 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20)) == (MR_mktag((MR_Integer) 1)));
#line 692 "goal_expr_to_goal.m"
    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 692 "goal_expr_to_goal.m"
      {
#line 692 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__LHSTerm_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20, (MR_Integer) 0)));
#line 692 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20, (MR_Integer) 1)));
#line 692 "goal_expr_to_goal.m"
        hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_59_59)) == (MR_mktag((MR_Integer) 1)));
#line 692 "goal_expr_to_goal.m"
        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 692 "goal_expr_to_goal.m"
          {
#line 692 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__RHSTerm_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_59_59, (MR_Integer) 0)));
#line 692 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_59_59, (MR_Integer) 1)));
#line 692 "goal_expr_to_goal.m"
            hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_60_60)) == (MR_mktag((MR_Integer) 1)));
#line 692 "goal_expr_to_goal.m"
            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 692 "goal_expr_to_goal.m"
              {
#line 692 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__TermInputTerm_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_60_60, (MR_Integer) 0)));
#line 692 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_60_60, (MR_Integer) 1)));
#line 692 "goal_expr_to_goal.m"
                hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_61_61)) == (MR_mktag((MR_Integer) 1)));
#line 692 "goal_expr_to_goal.m"
                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 692 "goal_expr_to_goal.m"
                  {
#line 692 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__TermOutputTerm_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_61_61, (MR_Integer) 0)));
#line 692 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_61_61, (MR_Integer) 1)));
#line 692 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_62_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 692 "goal_expr_to_goal.m"
                    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 698 "goal_expr_to_goal.m"
                      {
#line 698 "goal_expr_to_goal.m"
                        if ((strcmp(hlds__make_hlds__goal_expr_to_goal__Operator_19, (MR_String) ":=") == 0))
#line 699 "goal_expr_to_goal.m"
                          {
#line 699 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_63_63;
#line 699 "goal_expr_to_goal.m"
                            MR_String hlds__make_hlds__goal_expr_to_goal__V_64_64;
#line 699 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_65_65;
#line 699 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_66_66;
#line 701 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__V_38_38;

#line 700 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__AccessType_34 = (MR_Integer) 1;
#line 701 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__LHSTerm_30)) == (MR_mktag((MR_Integer) 0)));
#line 701 "goal_expr_to_goal.m"
                            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 701 "goal_expr_to_goal.m"
                              {
#line 701 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm_30, (MR_Integer) 0)));
#line 701 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm_30, (MR_Integer) 1)));
#line 701 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHSTerm_30, (MR_Integer) 2)));
#line 701 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_63_63)) == (MR_mktag((MR_Integer) 0)));
#line 701 "goal_expr_to_goal.m"
                                if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 701 "goal_expr_to_goal.m"
                                  {
#line 701 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__V_64_64 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_63_63, (MR_Integer) 0)));
#line 701 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_64_64, (MR_String) "^") == 0);
#line 699 "goal_expr_to_goal.m"
                                    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 699 "goal_expr_to_goal.m"
                                      {
#line 701 "goal_expr_to_goal.m"
                                        hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_65_65)) == (MR_mktag((MR_Integer) 1)));
#line 701 "goal_expr_to_goal.m"
                                        if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 701 "goal_expr_to_goal.m"
                                          {
#line 701 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__FieldNameTerm_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_65_65, (MR_Integer) 0)));
#line 701 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_65_65, (MR_Integer) 1)));
#line 701 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_66_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 699 "goal_expr_to_goal.m"
                                            if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 699 "goal_expr_to_goal.m"
                                              {
#line 703 "goal_expr_to_goal.m"
                                                hlds__make_hlds__goal_expr_to_goal__FieldValueTerm_36 = hlds__make_hlds__goal_expr_to_goal__RHSTerm_31;
#line 703 "goal_expr_to_goal.m"
                                                hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
#line 699 "goal_expr_to_goal.m"
                                              }
#line 701 "goal_expr_to_goal.m"
                                          }
#line 699 "goal_expr_to_goal.m"
                                      }
#line 701 "goal_expr_to_goal.m"
                                  }
#line 701 "goal_expr_to_goal.m"
                              }
#line 699 "goal_expr_to_goal.m"
                          }
#line 698 "goal_expr_to_goal.m"
                        else
#line 694 "goal_expr_to_goal.m"
                          {
#line 695 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__AccessType_34 = (MR_Integer) 0;
#line 696 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__FieldNameTerm_35 = hlds__make_hlds__goal_expr_to_goal__RHSTerm_31;
#line 697 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__FieldValueTerm_36 = hlds__make_hlds__goal_expr_to_goal__LHSTerm_30;
#line 694 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
#line 694 "goal_expr_to_goal.m"
                          }
#line 698 "goal_expr_to_goal.m"
                      }
#line 692 "goal_expr_to_goal.m"
                  }
#line 692 "goal_expr_to_goal.m"
              }
#line 692 "goal_expr_to_goal.m"
          }
#line 692 "goal_expr_to_goal.m"
      }
#line 723 "goal_expr_to_goal.m"
    if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 706 "goal_expr_to_goal.m"
      {
#line 706 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__ContextPieces_39;
#line 706 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeFieldNames_40;

#line 706 "goal_expr_to_goal.m"
        {
#line 706 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__ContextPieces_39 = hlds__make_hlds__goal_expr_to_goal__dcg_field_error_context_pieces_1_f_0(hlds__make_hlds__goal_expr_to_goal__AccessType_34);
        }
#line 707 "goal_expr_to_goal.m"
        {
#line 707 "goal_expr_to_goal.m"
          hlds__make_hlds__field_access__parse_field_list_4_p_0(hlds__make_hlds__goal_expr_to_goal__FieldNameTerm_35, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_51, hlds__make_hlds__goal_expr_to_goal__ContextPieces_39, &hlds__make_hlds__goal_expr_to_goal__MaybeFieldNames_40);
        }
#line 716 "goal_expr_to_goal.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__MaybeFieldNames_40)) == (MR_mktag((MR_Integer) 0))))
#line 717 "goal_expr_to_goal.m"
          {
#line 717 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__FieldNamesSpecs_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MaybeFieldNames_40, (MR_Integer) 0)));
#line 717 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_67_67;

#line 718 "goal_expr_to_goal.m"
            {
#line 718 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_67_67 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__goal_expr_to_goal__FieldNamesSpecs_43, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_57);
            }
#line 719 "goal_expr_to_goal.m"
            {
#line 719 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_p_0((MR_String) "^", hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20, hlds__make_hlds__goal_expr_to_goal__GoalInfo_29, hlds__make_hlds__goal_expr_to_goal__Goal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_48, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_67_67, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_58);
            }
#line 721 "goal_expr_to_goal.m"
            {
#line 721 "goal_expr_to_goal.m"
              hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_55, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_56);
            }
#line 721 "goal_expr_to_goal.m"
            *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_50 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_49;
#line 721 "goal_expr_to_goal.m"
            *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_54 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_53;
#line 717 "goal_expr_to_goal.m"
          }
#line 716 "goal_expr_to_goal.m"
        else
#line 710 "goal_expr_to_goal.m"
          {
#line 710 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__FieldNames_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeFieldNames_40, (MR_Integer) 0)));
#line 710 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__ArgTerms_42;
#line 710 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_77_77;

#line 711 "goal_expr_to_goal.m"
            {
#line 711 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__ArgTerms_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 711 "goal_expr_to_goal.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms_42, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FieldValueTerm_36));
#line 711 "goal_expr_to_goal.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ArgTerms_42, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_60_60));
#line 711 "goal_expr_to_goal.m"
            }
#line 712 "goal_expr_to_goal.m"
            {
#line 712 "goal_expr_to_goal.m"
              hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_2_17_p_0(hlds__make_hlds__goal_expr_to_goal__AccessType_34, hlds__make_hlds__goal_expr_to_goal__FieldNames_41, hlds__make_hlds__goal_expr_to_goal__ArgTerms_42, hlds__make_hlds__goal_expr_to_goal__Context_21, hlds__make_hlds__goal_expr_to_goal__Goal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_47, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_77_77, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_49, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_50, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_53, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_54, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_55, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_57, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_58);
            }
#line 715 "goal_expr_to_goal.m"
            {
#line 715 "goal_expr_to_goal.m"
              hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_77_77, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_48);
#line 715 "goal_expr_to_goal.m"
              return;
            }
#line 710 "goal_expr_to_goal.m"
          }
#line 706 "goal_expr_to_goal.m"
      }
#line 723 "goal_expr_to_goal.m"
    else
#line 725 "goal_expr_to_goal.m"
      {
#line 725 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__Msg_45;
#line 725 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__Spec_46;
#line 725 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_87_87;
#line 725 "goal_expr_to_goal.m"
        MR_Word hlds__make_hlds__goal_expr_to_goal__V_106_106;

#line 724 "goal_expr_to_goal.m"
        {
#line 724 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__invalid_goal_10_p_0((MR_String) "^", hlds__make_hlds__goal_expr_to_goal__ArgTerms0_20, hlds__make_hlds__goal_expr_to_goal__GoalInfo_29, hlds__make_hlds__goal_expr_to_goal__Goal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_52, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_47, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_48, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_57, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_87_87);
        }
#line 726 "goal_expr_to_goal.m"
        {
#line 726 "goal_expr_to_goal.m"
          hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_55, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_56);
        }
#line 730 "goal_expr_to_goal.m"
        {
#line 730 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__Msg_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 730 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Msg_45, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_21));
#line 730 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Msg_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[27])));
#line 730 "goal_expr_to_goal.m"
        }
#line 731 "goal_expr_to_goal.m"
        {
#line 731 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 731 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_106_106, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Msg_45));
#line 731 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_106_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 731 "goal_expr_to_goal.m"
        }
#line 731 "goal_expr_to_goal.m"
        {
#line 731 "goal_expr_to_goal.m"
          hlds__make_hlds__goal_expr_to_goal__Spec_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 731 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 731 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 731 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_46, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_106_106));
#line 731 "goal_expr_to_goal.m"
        }
#line 732 "goal_expr_to_goal.m"
        {
#line 732 "goal_expr_to_goal.m"
          MR_Word base;
#line 732 "goal_expr_to_goal.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 732 "goal_expr_to_goal.m"
          *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_58 = base;
#line 732 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Spec_46));
#line 732 "goal_expr_to_goal.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_87_87));
#line 732 "goal_expr_to_goal.m"
        }
#line 732 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_54 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_53;
#line 732 "goal_expr_to_goal.m"
        *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_50 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_49;
#line 725 "goal_expr_to_goal.m"
      }
#line 689 "goal_expr_to_goal.m"
  }
#line 679 "goal_expr_to_goal.m"
}

#line 664 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__report_svar_unify_error_5_p_0(
#line 664 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_6,
#line 664 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__VarSet_7,
#line 664 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVar_8,
#line 664 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_14,
#line 664 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_15)
#line 664 "goal_expr_to_goal.m"
{
#line 667 "goal_expr_to_goal.m"
  {
#line 667 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 667 "goal_expr_to_goal.m"
    MR_String hlds__make_hlds__goal_expr_to_goal__Name_10;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__Pieces_11;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__Msg_12;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__Spec_13;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_18_18;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_19_19;
#line 667 "goal_expr_to_goal.m"
    MR_String hlds__make_hlds__goal_expr_to_goal__V_20_20;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_22_22;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_25_25;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_27_27;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_30_30;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_31_31;
#line 667 "goal_expr_to_goal.m"
    MR_String hlds__make_hlds__goal_expr_to_goal__V_32_32;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_34_34;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_37_37;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_38_38;
#line 667 "goal_expr_to_goal.m"
    MR_String hlds__make_hlds__goal_expr_to_goal__V_39_39;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_45_45;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_46_46;
#line 667 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_50_50;

#line 668 "goal_expr_to_goal.m"
    {
#line 668 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__Name_10 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__VarSet_7, hlds__make_hlds__goal_expr_to_goal__StateVar_8);
    }
#line 669 "goal_expr_to_goal.m"
    {
#line 669 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) "!", hlds__make_hlds__goal_expr_to_goal__Name_10);
    }
#line 669 "goal_expr_to_goal.m"
    {
#line 669 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 669 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_20_20));
#line 669 "goal_expr_to_goal.m"
    }
#line 671 "goal_expr_to_goal.m"
    {
#line 671 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) "!.", hlds__make_hlds__goal_expr_to_goal__Name_10);
    }
#line 671 "goal_expr_to_goal.m"
    {
#line 671 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 671 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_32_32));
#line 671 "goal_expr_to_goal.m"
    }
#line 672 "goal_expr_to_goal.m"
    {
#line 672 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) "!:", hlds__make_hlds__goal_expr_to_goal__Name_10);
    }
#line 672 "goal_expr_to_goal.m"
    {
#line 672 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 672 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_38_38, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_39_39));
#line 672 "goal_expr_to_goal.m"
    }
#line 672 "goal_expr_to_goal.m"
    {
#line 672 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 672 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_37_37, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_38_38));
#line 672 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[26])));
#line 672 "goal_expr_to_goal.m"
    }
#line 671 "goal_expr_to_goal.m"
    {
#line 671 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 671 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[24])));
#line 671 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_34_34, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_37_37));
#line 671 "goal_expr_to_goal.m"
    }
#line 671 "goal_expr_to_goal.m"
    {
#line 671 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 671 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_30_30, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_31_31));
#line 671 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_30_30, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_34_34));
#line 671 "goal_expr_to_goal.m"
    }
#line 670 "goal_expr_to_goal.m"
    {
#line 670 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_27_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[23])));
#line 670 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_27_27, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_30_30));
#line 670 "goal_expr_to_goal.m"
    }
#line 670 "goal_expr_to_goal.m"
    {
#line 670 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 670 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_25_25, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_27_27));
#line 670 "goal_expr_to_goal.m"
    }
#line 669 "goal_expr_to_goal.m"
    {
#line 669 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 669 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_22_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[22])));
#line 669 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_22_22, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_25_25));
#line 669 "goal_expr_to_goal.m"
    }
#line 669 "goal_expr_to_goal.m"
    {
#line 669 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 669 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_18_18, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_19_19));
#line 669 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_18_18, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_22_22));
#line 669 "goal_expr_to_goal.m"
    }
#line 669 "goal_expr_to_goal.m"
    {
#line 669 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 669 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[21])));
#line 669 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Pieces_11, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_18_18));
#line 669 "goal_expr_to_goal.m"
    }
#line 673 "goal_expr_to_goal.m"
    {
#line 673 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 673 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_46_46, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Pieces_11));
#line 673 "goal_expr_to_goal.m"
    }
#line 673 "goal_expr_to_goal.m"
    {
#line 673 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 673 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_45_45, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_46_46));
#line 673 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 673 "goal_expr_to_goal.m"
    }
#line 673 "goal_expr_to_goal.m"
    {
#line 673 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__Msg_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 673 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Msg_12, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_6));
#line 673 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Msg_12, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_45_45));
#line 673 "goal_expr_to_goal.m"
    }
#line 674 "goal_expr_to_goal.m"
    {
#line 674 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 674 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_50_50, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Msg_12));
#line 674 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 674 "goal_expr_to_goal.m"
    }
#line 674 "goal_expr_to_goal.m"
    {
#line 674 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 674 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 674 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 674 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_13, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_50_50));
#line 674 "goal_expr_to_goal.m"
    }
#line 675 "goal_expr_to_goal.m"
    {
#line 675 "goal_expr_to_goal.m"
      MR_Word base;
#line 675 "goal_expr_to_goal.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 675 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_15 = base;
#line 675 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Spec_13));
#line 675 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_14));
#line 675 "goal_expr_to_goal.m"
    }
#line 667 "goal_expr_to_goal.m"
  }
#line 664 "goal_expr_to_goal.m"
}

#line 651 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_p_0_1(
#line 651 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__closure_arg,
#line 651 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 651 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2,
#line 651 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3,
#line 651 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_4,
#line 651 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_5,
#line 651 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_6,
#line 651 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_7,
#line 651 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_8)
#line 651 "goal_expr_to_goal.m"
{
#line 651 "goal_expr_to_goal.m"
  {
#line 651 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__closure = hlds__make_hlds__goal_expr_to_goal__closure_arg;
#line 651 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv3_HeadVar__3_3;
#line 651 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv2_HeadVar__5_5;
#line 651 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv1_HeadVar__7_7;
#line 651 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__9_9;

#line 651 "goal_expr_to_goal.m"
    {
#line 651 "goal_expr_to_goal.m"
      hlds__make_hlds__state_var__lookup_dot_state_var_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1), &hlds__make_hlds__goal_expr_to_goal__conv3_HeadVar__3_3, ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3), &hlds__make_hlds__goal_expr_to_goal__conv2_HeadVar__5_5, ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_5), &hlds__make_hlds__goal_expr_to_goal__conv1_HeadVar__7_7, ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_7), &hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__9_9);
    }
#line 651 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv3_HeadVar__3_3));
#line 651 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv2_HeadVar__5_5));
#line 651 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_6 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv1_HeadVar__7_7));
#line 651 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_8 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv0_HeadVar__9_9));
#line 651 "goal_expr_to_goal.m"
  }
#line 651 "goal_expr_to_goal.m"
}

#line 634 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_p_0(
#line 634 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_24,
#line 634 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars0_25,
#line 634 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars0_26,
#line 634 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars0_27,
#line 634 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars0_28,
#line 634 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_29,
#line 634 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_30,
#line 634 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__QuantVars_31,
#line 634 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Goal0_32,
#line 634 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_33,
#line 634 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__GoalInfo_34,
#line 634 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_49,
#line 634 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50,
#line 634 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_51,
#line 634 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_52,
#line 634 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_53,
#line 634 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_54,
#line 634 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_55,
#line 634 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_56,
#line 634 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_57,
#line 634 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_58,
#line 634 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_59,
#line 634 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_60)
#line 634 "goal_expr_to_goal.m"
{
#line 646 "goal_expr_to_goal.m"
  {
#line 646 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 646 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_90_90 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 646 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeInfo_99_99;
#line 646 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100;
#line 646 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_101_101;
#line 646 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__TypeInfo_102_102;
#line 646 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_41;
#line 646 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars1_42;
#line 646 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars1_43;
#line 646 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars1_44;
#line 646 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__OldStateVars_45;
#line 646 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars_46;
#line 646 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__NewStateVars_47;
#line 646 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars_48;
#line 646 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_65_65;
#line 646 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_66_66;
#line 646 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_67_67;
#line 646 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_68_68;
#line 646 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_70_70;
#line 646 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_71_71;
#line 646 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_72_72;
#line 646 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_73_73;
#line 646 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_75_75;
#line 646 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_78_78;
#line 646 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_80_80;
#line 646 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_81_81;
#line 646 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_82_82;
#line 646 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_87_87;
#line 646 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_88_88;
#line 646 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_89_89;
#line 651 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv6_STATE_VARIABLE_VarSet_66_66;
#line 651 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv5_STATE_VARIABLE_SVarState_67_67;
#line 651 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv4_STATE_VARIABLE_Specs_68_68;
#line 653 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv9_STATE_VARIABLE_VarSet_70_70;
#line 653 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv8_STATE_VARIABLE_SVarState_71_71;
#line 653 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv7_STATE_VARIABLE_Specs_72_72;
#line 658 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv12_STATE_VARIABLE_VarSet_80_80;
#line 658 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv11_STATE_VARIABLE_SVarState_81_81;
#line 658 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv10_STATE_VARIABLE_Specs_82_82;
#line 660 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv15_STATE_VARIABLE_VarSet_54;
#line 660 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv14_STATE_VARIABLE_SVarState_50;
#line 660 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__conv13_STATE_VARIABLE_Specs_60;

#line 647 "goal_expr_to_goal.m"
    {
#line 647 "goal_expr_to_goal.m"
      parse_tree__prog_data__rename_var_list_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_90_90, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_30, hlds__make_hlds__goal_expr_to_goal__Vars0_25, &hlds__make_hlds__goal_expr_to_goal__Vars_41);
    }
#line 648 "goal_expr_to_goal.m"
    {
#line 648 "goal_expr_to_goal.m"
      parse_tree__prog_data__rename_var_list_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_90_90, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_30, hlds__make_hlds__goal_expr_to_goal__StateVars0_26, &hlds__make_hlds__goal_expr_to_goal__StateVars1_42);
    }
#line 649 "goal_expr_to_goal.m"
    {
#line 649 "goal_expr_to_goal.m"
      parse_tree__prog_data__rename_var_list_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_90_90, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_30, hlds__make_hlds__goal_expr_to_goal__DotSVars0_27, &hlds__make_hlds__goal_expr_to_goal__DotSVars1_43);
    }
#line 650 "goal_expr_to_goal.m"
    {
#line 650 "goal_expr_to_goal.m"
      parse_tree__prog_data__rename_var_list_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_90_90, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_30, hlds__make_hlds__goal_expr_to_goal__ColonSVars0_28, &hlds__make_hlds__goal_expr_to_goal__ColonSVars1_44);
    }
#line 651 "goal_expr_to_goal.m"
    {
#line 651 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 651 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_65_65, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_5[0]));
#line 651 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_65_65, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_p_0_1));
#line 651 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 651 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_65_65, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_29));
#line 651 "goal_expr_to_goal.m"
    }
#line 5138 "hlds.make_hlds.goal_expr_to_goal.c"
    hlds__make_hlds__goal_expr_to_goal__TypeInfo_99_99 = (MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0];
#line 5140 "hlds.make_hlds.goal_expr_to_goal.c"
    hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100 = (MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[2];
#line 5142 "hlds.make_hlds.goal_expr_to_goal.c"
    hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_101_101 = (MR_Word) &hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0;
#line 5144 "hlds.make_hlds.goal_expr_to_goal.c"
    hlds__make_hlds__goal_expr_to_goal__TypeInfo_102_102 = (MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[3];
#line 651 "goal_expr_to_goal.m"
    {
#line 651 "goal_expr_to_goal.m"
      mercury__list__map_foldl3_9_p_1(hlds__make_hlds__goal_expr_to_goal__TypeInfo_99_99, hlds__make_hlds__goal_expr_to_goal__TypeInfo_99_99, hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100, hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_101_101, hlds__make_hlds__goal_expr_to_goal__TypeInfo_102_102, hlds__make_hlds__goal_expr_to_goal__V_65_65, hlds__make_hlds__goal_expr_to_goal__StateVars1_42, &hlds__make_hlds__goal_expr_to_goal__OldStateVars_45, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_53)), &hlds__make_hlds__goal_expr_to_goal__conv6_STATE_VARIABLE_VarSet_66_66, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_49)), &hlds__make_hlds__goal_expr_to_goal__conv5_STATE_VARIABLE_SVarState_67_67, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_59)), &hlds__make_hlds__goal_expr_to_goal__conv4_STATE_VARIABLE_Specs_68_68);
    }
#line 651 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_66_66 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv6_STATE_VARIABLE_VarSet_66_66);
#line 651 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_67_67 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv5_STATE_VARIABLE_SVarState_67_67);
#line 651 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_68_68 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv4_STATE_VARIABLE_Specs_68_68);
#line 653 "goal_expr_to_goal.m"
    {
#line 653 "goal_expr_to_goal.m"
      mercury__list__map_foldl3_9_p_1(hlds__make_hlds__goal_expr_to_goal__TypeInfo_99_99, hlds__make_hlds__goal_expr_to_goal__TypeInfo_99_99, hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100, hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_101_101, hlds__make_hlds__goal_expr_to_goal__TypeInfo_102_102, hlds__make_hlds__goal_expr_to_goal__V_65_65, hlds__make_hlds__goal_expr_to_goal__DotSVars1_43, &hlds__make_hlds__goal_expr_to_goal__DotSVars_46, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_66_66)), &hlds__make_hlds__goal_expr_to_goal__conv9_STATE_VARIABLE_VarSet_70_70, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_67_67)), &hlds__make_hlds__goal_expr_to_goal__conv8_STATE_VARIABLE_SVarState_71_71, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_68_68)), &hlds__make_hlds__goal_expr_to_goal__conv7_STATE_VARIABLE_Specs_72_72);
    }
#line 653 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_70_70 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv9_STATE_VARIABLE_VarSet_70_70);
#line 653 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_71_71 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv8_STATE_VARIABLE_SVarState_71_71);
#line 653 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_72_72 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv7_STATE_VARIABLE_Specs_72_72);
#line 655 "goal_expr_to_goal.m"
    {
#line 655 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_24, hlds__make_hlds__goal_expr_to_goal__Goal0_32, hlds__make_hlds__goal_expr_to_goal__Renaming_30, hlds__make_hlds__goal_expr_to_goal__Goal_33, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_71_71, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_73_73, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_51, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_52, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_70_70, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_75_75, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_55, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_56, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_57, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_58, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_72_72, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_78_78);
    }
#line 657 "goal_expr_to_goal.m"
    {
#line 657 "goal_expr_to_goal.m"
      hlds__hlds_goal__goal_info_init_1_p_0(hlds__make_hlds__goal_expr_to_goal__GoalInfo_34);
    }
#line 658 "goal_expr_to_goal.m"
    {
#line 658 "goal_expr_to_goal.m"
      mercury__list__map_foldl3_9_p_1(hlds__make_hlds__goal_expr_to_goal__TypeInfo_99_99, hlds__make_hlds__goal_expr_to_goal__TypeInfo_99_99, hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100, hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_101_101, hlds__make_hlds__goal_expr_to_goal__TypeInfo_102_102, hlds__make_hlds__goal_expr_to_goal__V_65_65, hlds__make_hlds__goal_expr_to_goal__StateVars1_42, &hlds__make_hlds__goal_expr_to_goal__NewStateVars_47, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_75_75)), &hlds__make_hlds__goal_expr_to_goal__conv12_STATE_VARIABLE_VarSet_80_80, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_73_73)), &hlds__make_hlds__goal_expr_to_goal__conv11_STATE_VARIABLE_SVarState_81_81, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_78_78)), &hlds__make_hlds__goal_expr_to_goal__conv10_STATE_VARIABLE_Specs_82_82);
    }
#line 658 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_80_80 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv12_STATE_VARIABLE_VarSet_80_80);
#line 658 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_81_81 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv11_STATE_VARIABLE_SVarState_81_81);
#line 658 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_82_82 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv10_STATE_VARIABLE_Specs_82_82);
#line 660 "goal_expr_to_goal.m"
    {
#line 660 "goal_expr_to_goal.m"
      mercury__list__map_foldl3_9_p_1(hlds__make_hlds__goal_expr_to_goal__TypeInfo_99_99, hlds__make_hlds__goal_expr_to_goal__TypeInfo_99_99, hlds__make_hlds__goal_expr_to_goal__TypeInfo_100_100, hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_101_101, hlds__make_hlds__goal_expr_to_goal__TypeInfo_102_102, hlds__make_hlds__goal_expr_to_goal__V_65_65, hlds__make_hlds__goal_expr_to_goal__ColonSVars1_44, &hlds__make_hlds__goal_expr_to_goal__ColonSVars_48, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_80_80)), &hlds__make_hlds__goal_expr_to_goal__conv15_STATE_VARIABLE_VarSet_54, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_81_81)), &hlds__make_hlds__goal_expr_to_goal__conv14_STATE_VARIABLE_SVarState_50, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_82_82)), &hlds__make_hlds__goal_expr_to_goal__conv13_STATE_VARIABLE_Specs_60);
    }
#line 660 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_54 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv15_STATE_VARIABLE_VarSet_54);
#line 660 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_50 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv14_STATE_VARIABLE_SVarState_50);
#line 660 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_60 = ((MR_Word) hlds__make_hlds__goal_expr_to_goal__conv13_STATE_VARIABLE_Specs_60);
#line 662 "goal_expr_to_goal.m"
    {
#line 662 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_89_89 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeInfo_99_99, hlds__make_hlds__goal_expr_to_goal__DotSVars_46, hlds__make_hlds__goal_expr_to_goal__ColonSVars_48);
    }
#line 662 "goal_expr_to_goal.m"
    {
#line 662 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_88_88 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeInfo_99_99, hlds__make_hlds__goal_expr_to_goal__NewStateVars_47, hlds__make_hlds__goal_expr_to_goal__V_89_89);
    }
#line 662 "goal_expr_to_goal.m"
    {
#line 662 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_87_87 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeInfo_99_99, hlds__make_hlds__goal_expr_to_goal__OldStateVars_45, hlds__make_hlds__goal_expr_to_goal__V_88_88);
    }
#line 662 "goal_expr_to_goal.m"
    {
#line 662 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__QuantVars_31 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeInfo_99_99, hlds__make_hlds__goal_expr_to_goal__Vars_41, hlds__make_hlds__goal_expr_to_goal__V_87_87);
    }
#line 646 "goal_expr_to_goal.m"
  }
#line 634 "goal_expr_to_goal.m"
}

#line 620 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_4_p_0(
#line 620 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_5,
#line 620 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVar_6,
#line 620 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__GetGoal_7,
#line 620 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__SetGoal_8)
#line 620 "goal_expr_to_goal.m"
{
#line 623 "goal_expr_to_goal.m"
  {
#line 623 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 623 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__Builtin_9;
#line 623 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GetPredName_10;
#line 623 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SetPredName_11;
#line 623 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SetVar_12;
#line 623 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__UseVar_13;
#line 623 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_20_20;
#line 623 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_21_21;
#line 623 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_28_28;
#line 623 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_29_29;
#line 623 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_31_31;
#line 623 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_32_32;

#line 624 "goal_expr_to_goal.m"
    {
#line 624 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__Builtin_9 = mdbcomp__prim_data__mercury_private_builtin_module_0_f_0();
    }
#line 625 "goal_expr_to_goal.m"
    {
#line 625 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__GetPredName_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__GetPredName_10, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Builtin_9));
#line 625 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__GetPredName_10, 1) = ((MR_Box) ((MR_String) "trace_get_io_state"));
#line 625 "goal_expr_to_goal.m"
    }
#line 626 "goal_expr_to_goal.m"
    {
#line 626 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__SetPredName_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 626 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SetPredName_11, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Builtin_9));
#line 626 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SetPredName_11, 1) = ((MR_Box) ((MR_String) "trace_set_io_state"));
#line 626 "goal_expr_to_goal.m"
    }
#line 627 "goal_expr_to_goal.m"
    {
#line 627 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 627 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_21_21, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVar_6));
#line 627 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_21_21, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_5));
#line 627 "goal_expr_to_goal.m"
    }
#line 627 "goal_expr_to_goal.m"
    {
#line 627 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 627 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_20_20, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_21_21));
#line 627 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 627 "goal_expr_to_goal.m"
    }
#line 627 "goal_expr_to_goal.m"
    {
#line 627 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__SetVar_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 627 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_12, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[0]));
#line 627 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_12, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_20_20));
#line 627 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_12, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_5));
#line 627 "goal_expr_to_goal.m"
    }
#line 628 "goal_expr_to_goal.m"
    {
#line 628 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__UseVar_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 628 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_13, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[1]));
#line 628 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_13, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_20_20));
#line 628 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_13, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_5));
#line 628 "goal_expr_to_goal.m"
    }
#line 631 "goal_expr_to_goal.m"
    {
#line 631 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 631 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_29_29, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SetVar_12));
#line 631 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 631 "goal_expr_to_goal.m"
    }
#line 631 "goal_expr_to_goal.m"
    {
#line 631 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_28_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 631 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_28_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 631 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_28_28, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GetPredName_10));
#line 631 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_28_28, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_29_29));
#line 631 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_28_28, 3) = ((MR_Box) ((MR_Integer) 1));
#line 631 "goal_expr_to_goal.m"
    }
#line 631 "goal_expr_to_goal.m"
    {
#line 631 "goal_expr_to_goal.m"
      MR_Word base;
#line 631 "goal_expr_to_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 631 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__GetGoal_7 = base;
#line 631 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_28_28));
#line 631 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_5));
#line 631 "goal_expr_to_goal.m"
    }
#line 632 "goal_expr_to_goal.m"
    {
#line 632 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 632 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_32_32, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__UseVar_13));
#line 632 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 632 "goal_expr_to_goal.m"
    }
#line 632 "goal_expr_to_goal.m"
    {
#line 632 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 632 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 632 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_31_31, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SetPredName_11));
#line 632 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_31_31, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_32_32));
#line 632 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_31_31, 3) = ((MR_Box) ((MR_Integer) 2));
#line 632 "goal_expr_to_goal.m"
    }
#line 632 "goal_expr_to_goal.m"
    {
#line 632 "goal_expr_to_goal.m"
      MR_Word base;
#line 632 "goal_expr_to_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 632 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__SetGoal_8 = base;
#line 632 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_31_31));
#line 632 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_5));
#line 632 "goal_expr_to_goal.m"
    }
#line 623 "goal_expr_to_goal.m"
  }
#line 620 "goal_expr_to_goal.m"
}

#line 602 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__extract_trace_mutable_var_7_p_0(
#line 602 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_8,
#line 602 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__VarSet_9,
#line 602 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Mutable_10,
#line 602 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__MutableHLDS_11,
#line 602 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__StateVar_12,
#line 602 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__GetGoal_13,
#line 602 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__SetGoal_14)
#line 602 "goal_expr_to_goal.m"
{
#line 607 "goal_expr_to_goal.m"
  {
#line 607 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 607 "goal_expr_to_goal.m"
    MR_String hlds__make_hlds__goal_expr_to_goal__MutableName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Mutable_10, (MR_Integer) 0)));
#line 607 "goal_expr_to_goal.m"
    MR_String hlds__make_hlds__goal_expr_to_goal__StateVarName_16;
#line 607 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GetPredName_17;
#line 607 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SetPredName_18;
#line 607 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__SetVar_19;
#line 607 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__UseVar_20;
#line 607 "goal_expr_to_goal.m"
    MR_String hlds__make_hlds__goal_expr_to_goal__V_23_23;
#line 607 "goal_expr_to_goal.m"
    MR_String hlds__make_hlds__goal_expr_to_goal__V_25_25;
#line 607 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_29_29;
#line 607 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_30_30;
#line 607 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_37_37;
#line 607 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_38_38;
#line 607 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_40_40;
#line 607 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__V_41_41;

#line 608 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__StateVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Mutable_10, (MR_Integer) 1)));
#line 609 "goal_expr_to_goal.m"
    {
#line 609 "goal_expr_to_goal.m"
      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__VarSet_9, *hlds__make_hlds__goal_expr_to_goal__StateVar_12, &hlds__make_hlds__goal_expr_to_goal__StateVarName_16);
    }
#line 610 "goal_expr_to_goal.m"
    {
#line 610 "goal_expr_to_goal.m"
      MR_Word base;
#line 610 "goal_expr_to_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 610 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__MutableHLDS_11 = base;
#line 610 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MutableName_15));
#line 610 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVarName_16));
#line 610 "goal_expr_to_goal.m"
    }
#line 611 "goal_expr_to_goal.m"
    {
#line 611 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) "get_", hlds__make_hlds__goal_expr_to_goal__MutableName_15);
    }
#line 611 "goal_expr_to_goal.m"
    {
#line 611 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__GetPredName_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 611 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GetPredName_17, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_23_23));
#line 611 "goal_expr_to_goal.m"
    }
#line 612 "goal_expr_to_goal.m"
    {
#line 612 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) "set_", hlds__make_hlds__goal_expr_to_goal__MutableName_15);
    }
#line 612 "goal_expr_to_goal.m"
    {
#line 612 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__SetPredName_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 612 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetPredName_18, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_25_25));
#line 612 "goal_expr_to_goal.m"
    }
#line 613 "goal_expr_to_goal.m"
    {
#line 613 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 613 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_30_30, 0) = ((MR_Box) (*hlds__make_hlds__goal_expr_to_goal__StateVar_12));
#line 613 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_30_30, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_8));
#line 613 "goal_expr_to_goal.m"
    }
#line 613 "goal_expr_to_goal.m"
    {
#line 613 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 613 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_29_29, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_30_30));
#line 613 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 613 "goal_expr_to_goal.m"
    }
#line 613 "goal_expr_to_goal.m"
    {
#line 613 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__SetVar_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 613 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_19, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[0]));
#line 613 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_19, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_29_29));
#line 613 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__SetVar_19, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_8));
#line 613 "goal_expr_to_goal.m"
    }
#line 614 "goal_expr_to_goal.m"
    {
#line 614 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__UseVar_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 614 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_20, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[1]));
#line 614 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_20, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_29_29));
#line 614 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__UseVar_20, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_8));
#line 614 "goal_expr_to_goal.m"
    }
#line 617 "goal_expr_to_goal.m"
    {
#line 617 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 617 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_38_38, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SetVar_19));
#line 617 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 617 "goal_expr_to_goal.m"
    }
#line 617 "goal_expr_to_goal.m"
    {
#line 617 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 617 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 617 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_37_37, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GetPredName_17));
#line 617 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_37_37, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_38_38));
#line 617 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_37_37, 3) = ((MR_Box) ((MR_Integer) 1));
#line 617 "goal_expr_to_goal.m"
    }
#line 617 "goal_expr_to_goal.m"
    {
#line 617 "goal_expr_to_goal.m"
      MR_Word base;
#line 617 "goal_expr_to_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 617 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__GetGoal_13 = base;
#line 617 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_37_37));
#line 617 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_8));
#line 617 "goal_expr_to_goal.m"
    }
#line 618 "goal_expr_to_goal.m"
    {
#line 618 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 618 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_41_41, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__UseVar_20));
#line 618 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 618 "goal_expr_to_goal.m"
    }
#line 618 "goal_expr_to_goal.m"
    {
#line 618 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 618 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 618 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_40_40, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SetPredName_18));
#line 618 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_40_40, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_41_41));
#line 618 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_40_40, 3) = ((MR_Box) ((MR_Integer) 2));
#line 618 "goal_expr_to_goal.m"
    }
#line 618 "goal_expr_to_goal.m"
    {
#line 618 "goal_expr_to_goal.m"
      MR_Word base;
#line 618 "goal_expr_to_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 618 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__SetGoal_14 = base;
#line 618 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_40_40));
#line 618 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_8));
#line 618 "goal_expr_to_goal.m"
    }
#line 607 "goal_expr_to_goal.m"
  }
#line 602 "goal_expr_to_goal.m"
}

#line 310 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_p_0_1(
#line 310 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__closure_arg,
#line 310 "goal_expr_to_goal.m"
  MR_Box hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1,
#line 310 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2,
#line 310 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3,
#line 310 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_4,
#line 310 "goal_expr_to_goal.m"
  MR_Box * hlds__make_hlds__goal_expr_to_goal__wrapper_arg_5)
#line 310 "goal_expr_to_goal.m"
{
#line 310 "goal_expr_to_goal.m"
  {
#line 310 "goal_expr_to_goal.m"
    MR_Box hlds__make_hlds__goal_expr_to_goal__closure = hlds__make_hlds__goal_expr_to_goal__closure_arg;
#line 310 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv3_MutableHLDS_11;
#line 310 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv2_StateVar_12;
#line 310 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv1_GetGoal_13;
#line 310 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__conv0_SetGoal_14;

#line 310 "goal_expr_to_goal.m"
    {
#line 310 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__extract_trace_mutable_var_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__goal_expr_to_goal__wrapper_arg_1), &hlds__make_hlds__goal_expr_to_goal__conv3_MutableHLDS_11, &hlds__make_hlds__goal_expr_to_goal__conv2_StateVar_12, &hlds__make_hlds__goal_expr_to_goal__conv1_GetGoal_13, &hlds__make_hlds__goal_expr_to_goal__conv0_SetGoal_14);
    }
#line 310 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv3_MutableHLDS_11));
#line 310 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv2_StateVar_12));
#line 310 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv1_GetGoal_13));
#line 310 "goal_expr_to_goal.m"
    *hlds__make_hlds__goal_expr_to_goal__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__conv0_SetGoal_14));
#line 310 "goal_expr_to_goal.m"
  }
#line 310 "goal_expr_to_goal.m"
}

#line 100 "goal_expr_to_goal.m"
static void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_p_0(
#line 100 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_18,
#line 100 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Expr_19,
#line 100 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Context_20,
#line 100 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_21,
#line 100 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_22,
#line 100 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197,
#line 100 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198,
#line 100 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199,
#line 100 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200,
#line 100 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201,
#line 100 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202,
#line 100 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203,
#line 100 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204,
#line 100 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205,
#line 100 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206,
#line 100 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207,
#line 100 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208)
#line 100 "goal_expr_to_goal.m"
{
#line 116 "goal_expr_to_goal.m"
  while (MR_TRUE)
#line 116 "goal_expr_to_goal.m"
    {
#line 116 "goal_expr_to_goal.m"
      /* tailcall optimized into a loop */
#line 116 "goal_expr_to_goal.m"
      {
#line 116 "goal_expr_to_goal.m"
        MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;

#line 116 "goal_expr_to_goal.m"
        if ((hlds__make_hlds__goal_expr_to_goal__Expr_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 116 "goal_expr_to_goal.m"
          {
#line 116 "goal_expr_to_goal.m"
            MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_30;

#line 117 "goal_expr_to_goal.m"
            {
#line 117 "goal_expr_to_goal.m"
              hlds__hlds_goal__goal_info_init_1_p_0(&hlds__make_hlds__goal_expr_to_goal__GoalInfo_30);
            }
#line 118 "goal_expr_to_goal.m"
            {
#line 118 "goal_expr_to_goal.m"
              MR_Word base;
#line 118 "goal_expr_to_goal.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 118 "goal_expr_to_goal.m"
              *hlds__make_hlds__goal_expr_to_goal__Goal_22 = base;
#line 118 "goal_expr_to_goal.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[19])));
#line 118 "goal_expr_to_goal.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_30));
#line 118 "goal_expr_to_goal.m"
            }
#line 118 "goal_expr_to_goal.m"
            *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197;
#line 118 "goal_expr_to_goal.m"
            *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199;
#line 118 "goal_expr_to_goal.m"
            *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201;
#line 118 "goal_expr_to_goal.m"
            *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203;
#line 118 "goal_expr_to_goal.m"
            *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205;
#line 118 "goal_expr_to_goal.m"
            *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207;
#line 116 "goal_expr_to_goal.m"
          }
#line 116 "goal_expr_to_goal.m"
        else
#line 116 "goal_expr_to_goal.m"
          if ((hlds__make_hlds__goal_expr_to_goal__Expr_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 116 "goal_expr_to_goal.m"
            {
#line 116 "goal_expr_to_goal.m"
              MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_766;

#line 117 "goal_expr_to_goal.m"
              {
#line 117 "goal_expr_to_goal.m"
                hlds__hlds_goal__goal_info_init_1_p_0(&hlds__make_hlds__goal_expr_to_goal__GoalInfo_766);
              }
#line 118 "goal_expr_to_goal.m"
              {
#line 118 "goal_expr_to_goal.m"
                MR_Word base;
#line 118 "goal_expr_to_goal.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 118 "goal_expr_to_goal.m"
                *hlds__make_hlds__goal_expr_to_goal__Goal_22 = base;
#line 118 "goal_expr_to_goal.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__goal_expr_to_goal_scalar_common_2[1])));
#line 118 "goal_expr_to_goal.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_766));
#line 118 "goal_expr_to_goal.m"
              }
#line 118 "goal_expr_to_goal.m"
              *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197;
#line 118 "goal_expr_to_goal.m"
              *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199;
#line 118 "goal_expr_to_goal.m"
              *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201;
#line 118 "goal_expr_to_goal.m"
              *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203;
#line 118 "goal_expr_to_goal.m"
              *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205;
#line 118 "goal_expr_to_goal.m"
              *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207;
#line 116 "goal_expr_to_goal.m"
            }
#line 116 "goal_expr_to_goal.m"
          else
#line 116 "goal_expr_to_goal.m"
            if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 1))))
#line 410 "goal_expr_to_goal.m"
              {
#line 410 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__A0_137 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)));
#line 410 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__B0_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 410 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__R0_139;
#line 410 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__R_140;
#line 410 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__L_141;
#line 410 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_376_376;
#line 410 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_377_377;
#line 410 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_378_378;
#line 410 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_379_379;
#line 410 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_380_380;
#line 410 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_381_381;
#line 410 "goal_expr_to_goal.m"
                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_663;

#line 411 "goal_expr_to_goal.m"
                {
#line 411 "goal_expr_to_goal.m"
                  hlds__make_hlds__goal_expr_to_goal__get_rev_conj_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__A0_137, hlds__make_hlds__goal_expr_to_goal__Renaming_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__goal_expr_to_goal__R0_139, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_376_376, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_377_377, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_378_378, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_379_379, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_380_380, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_381_381);
                }
#line 413 "goal_expr_to_goal.m"
                {
#line 413 "goal_expr_to_goal.m"
                  hlds__make_hlds__goal_expr_to_goal__get_rev_conj_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__B0_138, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__R0_139, &hlds__make_hlds__goal_expr_to_goal__R_140, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_376_376, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_377_377, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_378_378, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_379_379, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_380_380, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_381_381, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                }
#line 415 "goal_expr_to_goal.m"
                {
#line 415 "goal_expr_to_goal.m"
                  hlds__make_hlds__goal_expr_to_goal__L_141 = mercury__list__reverse_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__goal_expr_to_goal__R_140);
                }
#line 416 "goal_expr_to_goal.m"
                {
#line 416 "goal_expr_to_goal.m"
                  hlds__hlds_goal__goal_info_init_1_p_0(&hlds__make_hlds__goal_expr_to_goal__GoalInfo_663);
                }
#line 417 "goal_expr_to_goal.m"
                {
#line 417 "goal_expr_to_goal.m"
                  hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__L_141, hlds__make_hlds__goal_expr_to_goal__GoalInfo_663, hlds__make_hlds__goal_expr_to_goal__Goal_22);
#line 417 "goal_expr_to_goal.m"
                  return;
                }
#line 410 "goal_expr_to_goal.m"
              }
#line 116 "goal_expr_to_goal.m"
            else
#line 116 "goal_expr_to_goal.m"
              if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 2))))
#line 419 "goal_expr_to_goal.m"
                {
#line 419 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_363_363;
#line 419 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_364_364;
#line 419 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_365_365;
#line 419 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_366_366;
#line 419 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_367_367;
#line 419 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_368_368;
#line 419 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_664;
#line 419 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__A0_665 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)));
#line 419 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__B0_666 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 419 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__R0_667;
#line 419 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__R_668;
#line 419 "goal_expr_to_goal.m"
                  MR_Word hlds__make_hlds__goal_expr_to_goal__L_669;

#line 420 "goal_expr_to_goal.m"
                  {
#line 420 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__get_rev_par_conj_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__A0_665, hlds__make_hlds__goal_expr_to_goal__Renaming_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__goal_expr_to_goal__R0_667, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_363_363, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_364_364, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_365_365, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_366_366, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_367_367, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_368_368);
                  }
#line 422 "goal_expr_to_goal.m"
                  {
#line 422 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__get_rev_par_conj_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__B0_666, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__R0_667, &hlds__make_hlds__goal_expr_to_goal__R_668, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_363_363, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_364_364, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_365_365, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_366_366, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_367_367, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_368_368, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                  }
#line 424 "goal_expr_to_goal.m"
                  {
#line 424 "goal_expr_to_goal.m"
                    hlds__make_hlds__goal_expr_to_goal__L_669 = mercury__list__reverse_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__goal_expr_to_goal__R_668);
                  }
#line 425 "goal_expr_to_goal.m"
                  {
#line 425 "goal_expr_to_goal.m"
                    hlds__hlds_goal__goal_info_init_1_p_0(&hlds__make_hlds__goal_expr_to_goal__GoalInfo_664);
                  }
#line 426 "goal_expr_to_goal.m"
                  {
#line 426 "goal_expr_to_goal.m"
                    hlds__hlds_goal__par_conj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__L_669, hlds__make_hlds__goal_expr_to_goal__GoalInfo_664, hlds__make_hlds__goal_expr_to_goal__Goal_22);
#line 426 "goal_expr_to_goal.m"
                    return;
                  }
#line 419 "goal_expr_to_goal.m"
                }
#line 116 "goal_expr_to_goal.m"
              else
#line 116 "goal_expr_to_goal.m"
                if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 129 "goal_expr_to_goal.m"
                  {
#line 129 "goal_expr_to_goal.m"
                    MR_Word hlds__make_hlds__goal_expr_to_goal__Vars0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 129 "goal_expr_to_goal.m"
                    MR_Word hlds__make_hlds__goal_expr_to_goal__Goal0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));
#line 129 "goal_expr_to_goal.m"
                    MR_Word hlds__make_hlds__goal_expr_to_goal__TransformedExpr_33;
#line 129 "goal_expr_to_goal.m"
                    MR_Word hlds__make_hlds__goal_expr_to_goal__V_569_569;
#line 129 "goal_expr_to_goal.m"
                    MR_Word hlds__make_hlds__goal_expr_to_goal__V_570_570;
#line 129 "goal_expr_to_goal.m"
                    MR_Word hlds__make_hlds__goal_expr_to_goal__V_571_571;
#line 129 "goal_expr_to_goal.m"
                    MR_Word hlds__make_hlds__goal_expr_to_goal__V_572_572;

#line 124 "goal_expr_to_goal.m"
                    {
#line 124 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__V_572_572 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 124 "goal_expr_to_goal.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_572_572, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
#line 124 "goal_expr_to_goal.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_572_572, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Goal0_32));
#line 124 "goal_expr_to_goal.m"
                    }
#line 123 "goal_expr_to_goal.m"
                    {
#line 123 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__V_571_571 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 123 "goal_expr_to_goal.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_571_571, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_572_572));
#line 123 "goal_expr_to_goal.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_571_571, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_20));
#line 123 "goal_expr_to_goal.m"
                    }
#line 124 "goal_expr_to_goal.m"
                    {
#line 124 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__V_570_570 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 124 "goal_expr_to_goal.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_570_570, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 124 "goal_expr_to_goal.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_570_570, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Vars0_31));
#line 124 "goal_expr_to_goal.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_570_570, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_571_571));
#line 124 "goal_expr_to_goal.m"
                    }
#line 123 "goal_expr_to_goal.m"
                    {
#line 123 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__V_569_569 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 123 "goal_expr_to_goal.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_569_569, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_570_570));
#line 123 "goal_expr_to_goal.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_569_569, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_20));
#line 123 "goal_expr_to_goal.m"
                    }
#line 123 "goal_expr_to_goal.m"
                    {
#line 123 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__TransformedExpr_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 123 "goal_expr_to_goal.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedExpr_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
#line 123 "goal_expr_to_goal.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedExpr_33, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_569_569));
#line 123 "goal_expr_to_goal.m"
                    }
#line 130 "goal_expr_to_goal.m"
                    /* direct tailcall eliminated */
#line 130 "goal_expr_to_goal.m"
                    {
#line 130 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__Expr__tmp_copy_19 = hlds__make_hlds__goal_expr_to_goal__TransformedExpr_33;

#line 130 "goal_expr_to_goal.m"
                      hlds__make_hlds__goal_expr_to_goal__Expr_19 = hlds__make_hlds__goal_expr_to_goal__Expr__tmp_copy_19;
#line 130 "goal_expr_to_goal.m"
                    }
#line 130 "goal_expr_to_goal.m"
                    continue;
#line 129 "goal_expr_to_goal.m"
                  }
#line 116 "goal_expr_to_goal.m"
                else
#line 116 "goal_expr_to_goal.m"
                  if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 129 "goal_expr_to_goal.m"
                    {
#line 129 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 129 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_565_565;
#line 129 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_566_566;
#line 129 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_567_567;
#line 129 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_568_568;
#line 129 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__Goal0_582 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));
#line 129 "goal_expr_to_goal.m"
                      MR_Word hlds__make_hlds__goal_expr_to_goal__TransformedExpr_764;

#line 128 "goal_expr_to_goal.m"
                      {
#line 128 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__V_568_568 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 128 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_568_568, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
#line 128 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_568_568, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Goal0_582));
#line 128 "goal_expr_to_goal.m"
                      }
#line 127 "goal_expr_to_goal.m"
                      {
#line 127 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__V_567_567 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 127 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_567_567, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_568_568));
#line 127 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_567_567, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_20));
#line 127 "goal_expr_to_goal.m"
                      }
#line 128 "goal_expr_to_goal.m"
                      {
#line 128 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__V_566_566 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 128 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_566_566, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 128 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_566_566, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVars_34));
#line 128 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_566_566, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_567_567));
#line 128 "goal_expr_to_goal.m"
                      }
#line 127 "goal_expr_to_goal.m"
                      {
#line 127 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__V_565_565 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 127 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_565_565, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_566_566));
#line 127 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_565_565, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_20));
#line 127 "goal_expr_to_goal.m"
                      }
#line 127 "goal_expr_to_goal.m"
                      {
#line 127 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__TransformedExpr_764 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 127 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedExpr_764, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
#line 127 "goal_expr_to_goal.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedExpr_764, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_565_565));
#line 127 "goal_expr_to_goal.m"
                      }
#line 130 "goal_expr_to_goal.m"
                      /* direct tailcall eliminated */
#line 130 "goal_expr_to_goal.m"
                      {
#line 130 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__Expr__tmp_copy_19 = hlds__make_hlds__goal_expr_to_goal__TransformedExpr_764;

#line 130 "goal_expr_to_goal.m"
                        hlds__make_hlds__goal_expr_to_goal__Expr_19 = hlds__make_hlds__goal_expr_to_goal__Expr__tmp_copy_19;
#line 130 "goal_expr_to_goal.m"
                      }
#line 130 "goal_expr_to_goal.m"
                      continue;
#line 129 "goal_expr_to_goal.m"
                    }
#line 116 "goal_expr_to_goal.m"
                  else
#line 116 "goal_expr_to_goal.m"
                    if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 217 "goal_expr_to_goal.m"
                      {
#line 217 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__Outer0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 217 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__Inner0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));
#line 217 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars0_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 3)));
#line 217 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__MainExpr_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 4)));
#line 217 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__OrElseExprs_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 5)));
#line 217 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars_56;
#line 217 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__Outer_65;
#line 217 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSGoals_80;
#line 217 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal_81;
#line 217 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSOrElseGoals_82;
#line 217 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__Inner_87;
#line 217 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__ShortHand_91;
#line 217 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_634;
#line 217 "goal_expr_to_goal.m"
                        MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_635;

#line 221 "goal_expr_to_goal.m"
                        if ((hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars0_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 219 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 221 "goal_expr_to_goal.m"
                        else
#line 222 "goal_expr_to_goal.m"
                          {
#line 222 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__OutputVars0_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars0_53, (MR_Integer) 0)));
#line 222 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__OutputVars_58;

#line 223 "goal_expr_to_goal.m"
                            {
#line 223 "goal_expr_to_goal.m"
                              parse_tree__prog_data__rename_var_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__OutputVars0_57, &hlds__make_hlds__goal_expr_to_goal__OutputVars_58);
                            }
#line 225 "goal_expr_to_goal.m"
                            {
#line 225 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 225 "goal_expr_to_goal.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars_56, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OutputVars_58));
#line 225 "goal_expr_to_goal.m"
                            }
#line 222 "goal_expr_to_goal.m"
                          }
#line 6178 "hlds.make_hlds.goal_expr_to_goal.c"
                        if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Outer0_51)) == (MR_mktag((MR_Integer) 0))))
#line 6180 "hlds.make_hlds.goal_expr_to_goal.c"
                          {
#line 6182 "hlds.make_hlds.goal_expr_to_goal.c"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__OuterStateVar0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Outer0_51, (MR_Integer) 0)));
#line 6184 "hlds.make_hlds.goal_expr_to_goal.c"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__OuterStateVar_60;
#line 6186 "hlds.make_hlds.goal_expr_to_goal.c"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__OuterDI_61;
#line 6188 "hlds.make_hlds.goal_expr_to_goal.c"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__OuterUO_62;
#line 6190 "hlds.make_hlds.goal_expr_to_goal.c"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__OuterScopeInfo2_90;
#line 6192 "hlds.make_hlds.goal_expr_to_goal.c"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_463_463;
#line 6194 "hlds.make_hlds.goal_expr_to_goal.c"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_464_464;
#line 6196 "hlds.make_hlds.goal_expr_to_goal.c"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_465_465;
#line 6198 "hlds.make_hlds.goal_expr_to_goal.c"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_491_491;

#line 229 "goal_expr_to_goal.m"
                            {
#line 229 "goal_expr_to_goal.m"
                              parse_tree__prog_data__rename_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__OuterStateVar0_59, &hlds__make_hlds__goal_expr_to_goal__OuterStateVar_60);
                            }
#line 231 "goal_expr_to_goal.m"
                            {
#line 231 "goal_expr_to_goal.m"
                              hlds__make_hlds__state_var__svar_start_outer_atomic_scope_11_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__OuterStateVar_60, &hlds__make_hlds__goal_expr_to_goal__OuterDI_61, &hlds__make_hlds__goal_expr_to_goal__OuterUO_62, &hlds__make_hlds__goal_expr_to_goal__OuterScopeInfo2_90, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_463_463, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_464_464, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_465_465);
                            }
#line 234 "goal_expr_to_goal.m"
                            {
#line 234 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__Outer_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 234 "goal_expr_to_goal.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Outer_65, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OuterDI_61));
#line 234 "goal_expr_to_goal.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Outer_65, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OuterUO_62));
#line 234 "goal_expr_to_goal.m"
                            }
#line 6221 "hlds.make_hlds.goal_expr_to_goal.c"
                            if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Inner0_52)) == (MR_mktag((MR_Integer) 0))))
#line 6223 "hlds.make_hlds.goal_expr_to_goal.c"
                              {
#line 6225 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__InnerStateVar0_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner0_52, (MR_Integer) 0)));
#line 6227 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__InnerStateVar_69;
#line 6229 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_74;
#line 6231 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_75;
#line 6233 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_76;
#line 6235 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__MainDisjState_77;
#line 6237 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_78;
#line 6239 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__AllDisjStates_79;
#line 6241 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_84;
#line 6243 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI_85;
#line 6245 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO_86;
#line 6247 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_468_468;
#line 6249 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_469_469;
#line 6251 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_470_470;
#line 6253 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_471_471;
#line 6255 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_472_472;
#line 6257 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_473_473;
#line 6259 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_474_474;
#line 6261 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_475_475;
#line 6263 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_476_476;
#line 6265 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_479_479;
#line 6267 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_480_480;
#line 6269 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_481_481;

#line 244 "goal_expr_to_goal.m"
                                {
#line 244 "goal_expr_to_goal.m"
                                  parse_tree__prog_data__rename_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__InnerStateVar0_68, &hlds__make_hlds__goal_expr_to_goal__InnerStateVar_69);
                                }
#line 246 "goal_expr_to_goal.m"
                                {
#line 246 "goal_expr_to_goal.m"
                                  hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__InnerStateVar_69, &hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_84, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_463_463, &hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_74, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_464_464, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_468_468, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_465_465, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_469_469);
                                }
#line 254 "goal_expr_to_goal.m"
                                {
#line 254 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__MainExpr_54, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_75, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_74, &hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_76, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_470_470, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_468_468, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_471_471, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_472_472, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_473_473, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_469_469, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_474_474);
                                }
#line 257 "goal_expr_to_goal.m"
                                {
#line 257 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__MainDisjState_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 257 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_77, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_75));
#line 257 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_77, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_76));
#line 257 "goal_expr_to_goal.m"
                                }
#line 259 "goal_expr_to_goal.m"
                                {
#line 259 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__OrElseExprs_55, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_78, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_74, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_470_470, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_475_475, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_471_471, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_476_476, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_472_472, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_473_473, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_474_474, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_479_479);
                                }
#line 262 "goal_expr_to_goal.m"
                                {
#line 262 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__AllDisjStates_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 262 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_79, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MainDisjState_77));
#line 262 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_79, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_78));
#line 262 "goal_expr_to_goal.m"
                                }
#line 263 "goal_expr_to_goal.m"
                                {
#line 263 "goal_expr_to_goal.m"
                                  hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__AllDisjStates_79, &hlds__make_hlds__goal_expr_to_goal__HLDSGoals_80, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_476_476, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_480_480, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_74, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_481_481, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_475_475, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200);
                                }
#line 275 "goal_expr_to_goal.m"
                                {
#line 275 "goal_expr_to_goal.m"
                                  hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_84, &hlds__make_hlds__goal_expr_to_goal__InnerDI_85, &hlds__make_hlds__goal_expr_to_goal__InnerUO_86, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_481_481, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_491_491, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_480_480, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_479_479, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                }
#line 277 "goal_expr_to_goal.m"
                                {
#line 277 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__Inner_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 277 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_87, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerDI_85));
#line 277 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_87, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerUO_86));
#line 277 "goal_expr_to_goal.m"
                                }
#line 6332 "hlds.make_hlds.goal_expr_to_goal.c"
                              }
#line 6334 "hlds.make_hlds.goal_expr_to_goal.c"
                            else
#line 6336 "hlds.make_hlds.goal_expr_to_goal.c"
                              {
#line 6338 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_741_741;
#line 6340 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI0_88;
#line 6342 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO0_89;
#line 6344 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI_632;
#line 6346 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO_633;
#line 6348 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_856;
#line 6350 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_857;
#line 6352 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__MainDisjState_858;
#line 6354 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_859;
#line 6356 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__AllDisjStates_860;
#line 6358 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_470_863;
#line 6360 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_471_864;
#line 6362 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_472_865;
#line 6364 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_473_866;
#line 6366 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_474_867;
#line 6368 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_475_868;
#line 6370 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_476_869;

#line 254 "goal_expr_to_goal.m"
                                {
#line 254 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__MainExpr_54, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_856, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_463_463, &hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_857, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_470_863, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_464_464, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_471_864, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_472_865, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_473_866, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_465_465, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_474_867);
                                }
#line 257 "goal_expr_to_goal.m"
                                {
#line 257 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__MainDisjState_858 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 257 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_858, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_856));
#line 257 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_858, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_857));
#line 257 "goal_expr_to_goal.m"
                                }
#line 259 "goal_expr_to_goal.m"
                                {
#line 259 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__OrElseExprs_55, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_859, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_463_463, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_470_863, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_475_868, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_471_864, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_476_869, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_472_865, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_473_866, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_474_867, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                }
#line 262 "goal_expr_to_goal.m"
                                {
#line 262 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__AllDisjStates_860 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 262 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_860, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MainDisjState_858));
#line 262 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_860, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_859));
#line 262 "goal_expr_to_goal.m"
                                }
#line 263 "goal_expr_to_goal.m"
                                {
#line 263 "goal_expr_to_goal.m"
                                  hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__AllDisjStates_860, &hlds__make_hlds__goal_expr_to_goal__HLDSGoals_80, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_476_869, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_463_463, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_491_491, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_475_868, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200);
                                }
#line 283 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__InnerDI0_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Inner0_52, (MR_Integer) 0)));
#line 283 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__InnerUO0_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Inner0_52, (MR_Integer) 1)));
#line 6412 "hlds.make_hlds.goal_expr_to_goal.c"
                                hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_741_741 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 284 "goal_expr_to_goal.m"
                                {
#line 284 "goal_expr_to_goal.m"
                                  parse_tree__prog_data__rename_var_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_741_741, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__InnerDI0_88, &hlds__make_hlds__goal_expr_to_goal__InnerDI_632);
                                }
#line 285 "goal_expr_to_goal.m"
                                {
#line 285 "goal_expr_to_goal.m"
                                  parse_tree__prog_data__rename_var_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_741_741, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__InnerUO0_89, &hlds__make_hlds__goal_expr_to_goal__InnerUO_633);
                                }
#line 286 "goal_expr_to_goal.m"
                                {
#line 286 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__Inner_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 286 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_87, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerDI_632));
#line 286 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_87, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerUO_633));
#line 286 "goal_expr_to_goal.m"
                                }
#line 6434 "hlds.make_hlds.goal_expr_to_goal.c"
                              }
#line 290 "goal_expr_to_goal.m"
                            {
#line 290 "goal_expr_to_goal.m"
                              hlds__make_hlds__state_var__svar_finish_outer_atomic_scope_3_p_0(hlds__make_hlds__goal_expr_to_goal__OuterScopeInfo2_90, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_491_491, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198);
                            }
#line 6441 "hlds.make_hlds.goal_expr_to_goal.c"
                          }
#line 6443 "hlds.make_hlds.goal_expr_to_goal.c"
                        else
#line 6445 "hlds.make_hlds.goal_expr_to_goal.c"
                          {
#line 6447 "hlds.make_hlds.goal_expr_to_goal.c"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_739_739 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 6449 "hlds.make_hlds.goal_expr_to_goal.c"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__OuterDI0_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Outer0_51, (MR_Integer) 0)));
#line 6451 "hlds.make_hlds.goal_expr_to_goal.c"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__OuterUO0_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Outer0_51, (MR_Integer) 1)));
#line 6453 "hlds.make_hlds.goal_expr_to_goal.c"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__OuterDI_630;
#line 6455 "hlds.make_hlds.goal_expr_to_goal.c"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__OuterUO_631;

#line 237 "goal_expr_to_goal.m"
                            {
#line 237 "goal_expr_to_goal.m"
                              parse_tree__prog_data__rename_var_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_739_739, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__OuterDI0_66, &hlds__make_hlds__goal_expr_to_goal__OuterDI_630);
                            }
#line 238 "goal_expr_to_goal.m"
                            {
#line 238 "goal_expr_to_goal.m"
                              parse_tree__prog_data__rename_var_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_739_739, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__OuterUO0_67, &hlds__make_hlds__goal_expr_to_goal__OuterUO_631);
                            }
#line 239 "goal_expr_to_goal.m"
                            {
#line 239 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__Outer_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 239 "goal_expr_to_goal.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Outer_65, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OuterDI_630));
#line 239 "goal_expr_to_goal.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Outer_65, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OuterUO_631));
#line 239 "goal_expr_to_goal.m"
                            }
#line 6478 "hlds.make_hlds.goal_expr_to_goal.c"
                            if (((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Inner0_52)) == (MR_mktag((MR_Integer) 0))))
#line 6480 "hlds.make_hlds.goal_expr_to_goal.c"
                              {
#line 6482 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__InnerStateVar0_769 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner0_52, (MR_Integer) 0)));
#line 6484 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__InnerStateVar_770;
#line 6486 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_782;
#line 6488 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI_783;
#line 6490 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO_784;
#line 6492 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_816;
#line 6494 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_817;
#line 6496 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_818;
#line 6498 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__MainDisjState_819;
#line 6500 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_820;
#line 6502 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__AllDisjStates_821;
#line 6504 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_468_831;
#line 6506 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_469_832;
#line 6508 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_470_833;
#line 6510 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_471_834;
#line 6512 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_472_835;
#line 6514 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_473_836;
#line 6516 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_474_837;
#line 6518 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_475_838;
#line 6520 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_476_839;
#line 6522 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_479_840;
#line 6524 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_480_841;
#line 6526 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_481_842;

#line 244 "goal_expr_to_goal.m"
                                {
#line 244 "goal_expr_to_goal.m"
                                  parse_tree__prog_data__rename_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__InnerStateVar0_769, &hlds__make_hlds__goal_expr_to_goal__InnerStateVar_770);
                                }
#line 246 "goal_expr_to_goal.m"
                                {
#line 246 "goal_expr_to_goal.m"
                                  hlds__make_hlds__state_var__svar_start_inner_atomic_scope_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__InnerStateVar_770, &hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_782, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, &hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_816, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_468_831, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_469_832);
                                }
#line 254 "goal_expr_to_goal.m"
                                {
#line 254 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__MainExpr_54, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_817, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_816, &hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_818, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_470_833, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_468_831, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_471_834, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_472_835, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_473_836, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_469_832, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_474_837);
                                }
#line 257 "goal_expr_to_goal.m"
                                {
#line 257 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__MainDisjState_819 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 257 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_819, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_817));
#line 257 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_819, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_818));
#line 257 "goal_expr_to_goal.m"
                                }
#line 259 "goal_expr_to_goal.m"
                                {
#line 259 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__OrElseExprs_55, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_820, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_816, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_470_833, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_475_838, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_471_834, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_476_839, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_472_835, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_473_836, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_474_837, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_479_840);
                                }
#line 262 "goal_expr_to_goal.m"
                                {
#line 262 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__AllDisjStates_821 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 262 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_821, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MainDisjState_819));
#line 262 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_821, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_820));
#line 262 "goal_expr_to_goal.m"
                                }
#line 263 "goal_expr_to_goal.m"
                                {
#line 263 "goal_expr_to_goal.m"
                                  hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__AllDisjStates_821, &hlds__make_hlds__goal_expr_to_goal__HLDSGoals_80, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_476_839, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_480_841, hlds__make_hlds__goal_expr_to_goal__BeforeDisjSVarState_816, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_481_842, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_475_838, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200);
                                }
#line 275 "goal_expr_to_goal.m"
                                {
#line 275 "goal_expr_to_goal.m"
                                  hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_10_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__InnerScopeInfo2_782, &hlds__make_hlds__goal_expr_to_goal__InnerDI_783, &hlds__make_hlds__goal_expr_to_goal__InnerUO_784, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_481_842, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_480_841, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_479_840, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                }
#line 277 "goal_expr_to_goal.m"
                                {
#line 277 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__Inner_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 277 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_87, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerDI_783));
#line 277 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_87, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerUO_784));
#line 277 "goal_expr_to_goal.m"
                                }
#line 6589 "hlds.make_hlds.goal_expr_to_goal.c"
                              }
#line 6591 "hlds.make_hlds.goal_expr_to_goal.c"
                            else
#line 6593 "hlds.make_hlds.goal_expr_to_goal.c"
                              {
#line 6595 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_741_797;
#line 6597 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI0_791;
#line 6599 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO0_792;
#line 6601 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__InnerDI_795;
#line 6603 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__InnerUO_796;
#line 6605 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_876;
#line 6607 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_877;
#line 6609 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__MainDisjState_878;
#line 6611 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_879;
#line 6613 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__AllDisjStates_880;
#line 6615 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_470_883;
#line 6617 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_471_884;
#line 6619 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_472_885;
#line 6621 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_473_886;
#line 6623 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_474_887;
#line 6625 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_475_888;
#line 6627 "hlds.make_hlds.goal_expr_to_goal.c"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_476_889;

#line 254 "goal_expr_to_goal.m"
                                {
#line 254 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__MainExpr_54, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_876, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, &hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_877, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_470_883, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_471_884, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_472_885, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_473_886, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_474_887);
                                }
#line 257 "goal_expr_to_goal.m"
                                {
#line 257 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__MainDisjState_878 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 257 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_878, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal0_876));
#line 257 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__MainDisjState_878, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__AfterMainSVarState_877));
#line 257 "goal_expr_to_goal.m"
                                }
#line 259 "goal_expr_to_goal.m"
                                {
#line 259 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__transform_orelse_goals_15_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__OrElseExprs_55, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_879, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_470_883, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_475_888, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_471_884, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_476_889, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_472_885, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_473_886, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_474_887, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                }
#line 262 "goal_expr_to_goal.m"
                                {
#line 262 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__AllDisjStates_880 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 262 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_880, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MainDisjState_878));
#line 262 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__AllDisjStates_880, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__OrElseDisjStates_879));
#line 262 "goal_expr_to_goal.m"
                                }
#line 263 "goal_expr_to_goal.m"
                                {
#line 263 "goal_expr_to_goal.m"
                                  hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__AllDisjStates_880, &hlds__make_hlds__goal_expr_to_goal__HLDSGoals_80, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_476_889, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_475_888, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200);
                                }
#line 283 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__InnerDI0_791 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Inner0_52, (MR_Integer) 0)));
#line 283 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__InnerUO0_792 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Inner0_52, (MR_Integer) 1)));
#line 6669 "hlds.make_hlds.goal_expr_to_goal.c"
                                hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_741_797 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 284 "goal_expr_to_goal.m"
                                {
#line 284 "goal_expr_to_goal.m"
                                  parse_tree__prog_data__rename_var_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_741_797, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__InnerDI0_791, &hlds__make_hlds__goal_expr_to_goal__InnerDI_795);
                                }
#line 285 "goal_expr_to_goal.m"
                                {
#line 285 "goal_expr_to_goal.m"
                                  parse_tree__prog_data__rename_var_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_741_797, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__InnerUO0_792, &hlds__make_hlds__goal_expr_to_goal__InnerUO_796);
                                }
#line 286 "goal_expr_to_goal.m"
                                {
#line 286 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__Inner_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 286 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_87, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerDI_795));
#line 286 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Inner_87, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__InnerUO_796));
#line 286 "goal_expr_to_goal.m"
                                }
#line 6691 "hlds.make_hlds.goal_expr_to_goal.c"
                              }
#line 6693 "hlds.make_hlds.goal_expr_to_goal.c"
                          }
#line 267 "goal_expr_to_goal.m"
                        if ((hlds__make_hlds__goal_expr_to_goal__HLDSGoals_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 268 "goal_expr_to_goal.m"
                          {
#line 269 "goal_expr_to_goal.m"
                            {
#line 269 "goal_expr_to_goal.m"
                              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.goal_expr_to_goal", (MR_String) "predicate \140hlds.make_hlds.goal_expr_to_goal.transform_goal_expr_to_goal\'/17", (MR_String) "atomic HLDSGoals = []");
#line 269 "goal_expr_to_goal.m"
                              return;
                            }
#line 268 "goal_expr_to_goal.m"
                          }
#line 267 "goal_expr_to_goal.m"
                        else
#line 266 "goal_expr_to_goal.m"
                          {
#line 266 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HLDSGoals_80, (MR_Integer) 0)));
#line 266 "goal_expr_to_goal.m"
                            hlds__make_hlds__goal_expr_to_goal__HLDSOrElseGoals_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HLDSGoals_80, (MR_Integer) 1)));
#line 266 "goal_expr_to_goal.m"
                          }
#line 294 "goal_expr_to_goal.m"
                        {
#line 294 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__ShortHand_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 294 "goal_expr_to_goal.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_91, 0) = ((MR_Box) ((MR_Integer) 0));
#line 294 "goal_expr_to_goal.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_91, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Outer_65));
#line 294 "goal_expr_to_goal.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_91, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Inner_87));
#line 294 "goal_expr_to_goal.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_91, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MaybeOutputVars_56));
#line 294 "goal_expr_to_goal.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_91, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSMainGoal_81));
#line 294 "goal_expr_to_goal.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_91, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HLDSOrElseGoals_82));
#line 294 "goal_expr_to_goal.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__ShortHand_91, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 294 "goal_expr_to_goal.m"
                        }
#line 296 "goal_expr_to_goal.m"
                        {
#line 296 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__GoalExpr_634 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "goal_expr_to_goal.m"
                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_634, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 296 "goal_expr_to_goal.m"
                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_634, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ShortHand_91));
#line 296 "goal_expr_to_goal.m"
                        }
#line 297 "goal_expr_to_goal.m"
                        {
#line 297 "goal_expr_to_goal.m"
                          hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_635);
                        }
#line 298 "goal_expr_to_goal.m"
                        {
#line 298 "goal_expr_to_goal.m"
                          MR_Word base;
#line 298 "goal_expr_to_goal.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 298 "goal_expr_to_goal.m"
                          *hlds__make_hlds__goal_expr_to_goal__Goal_22 = base;
#line 298 "goal_expr_to_goal.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_634));
#line 298 "goal_expr_to_goal.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_635));
#line 298 "goal_expr_to_goal.m"
                        }
#line 217 "goal_expr_to_goal.m"
                      }
#line 116 "goal_expr_to_goal.m"
                    else
#line 116 "goal_expr_to_goal.m"
                      if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 19))))
#line 487 "goal_expr_to_goal.m"
                        {
#line 487 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__Name_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 487 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_243_243;
#line 487 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__Purity_722 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 3)));
#line 487 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__Args0_723 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));
#line 487 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__Args1_724;
#line 498 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__LHS_163;
#line 498 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__RHS_164;
#line 490 "goal_expr_to_goal.m"
                          MR_String hlds__make_hlds__goal_expr_to_goal__V_238_238;
#line 490 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__V_239_239;
#line 490 "goal_expr_to_goal.m"
                          MR_Word hlds__make_hlds__goal_expr_to_goal__V_240_240;

#line 488 "goal_expr_to_goal.m"
                          {
#line 488 "goal_expr_to_goal.m"
                            hlds__make_hlds__state_var__expand_bang_states_2_p_0(hlds__make_hlds__goal_expr_to_goal__Args0_723, &hlds__make_hlds__goal_expr_to_goal__Args1_724);
                          }
#line 490 "goal_expr_to_goal.m"
                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Name_162)) == (MR_mktag((MR_Integer) 0)));
#line 490 "goal_expr_to_goal.m"
                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 490 "goal_expr_to_goal.m"
                            {
#line 490 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__V_238_238 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Name_162, (MR_Integer) 0)));
#line 490 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_238_238, (MR_String) "\\=") == 0);
#line 490 "goal_expr_to_goal.m"
                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 490 "goal_expr_to_goal.m"
                                {
#line 491 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Args1_724)) == (MR_mktag((MR_Integer) 1)));
#line 491 "goal_expr_to_goal.m"
                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 491 "goal_expr_to_goal.m"
                                    {
#line 491 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__LHS_163 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Args1_724, (MR_Integer) 0)));
#line 491 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Args1_724, (MR_Integer) 1)));
#line 491 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_239_239)) == (MR_mktag((MR_Integer) 1)));
#line 491 "goal_expr_to_goal.m"
                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 491 "goal_expr_to_goal.m"
                                        {
#line 491 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__RHS_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_239_239, (MR_Integer) 0)));
#line 491 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_239_239, (MR_Integer) 1)));
#line 491 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_240_240 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 491 "goal_expr_to_goal.m"
                                        }
#line 491 "goal_expr_to_goal.m"
                                    }
#line 490 "goal_expr_to_goal.m"
                                }
#line 490 "goal_expr_to_goal.m"
                            }
#line 498 "goal_expr_to_goal.m"
                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 494 "goal_expr_to_goal.m"
                            {
#line 494 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_241_241;
#line 494 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_242_242;
#line 494 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__TransformedExpr_681;

#line 494 "goal_expr_to_goal.m"
                              {
#line 494 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__V_242_242 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 494 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_242_242, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 494 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_242_242, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__LHS_163));
#line 494 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_242_242, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__RHS_164));
#line 494 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_242_242, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Purity_722));
#line 494 "goal_expr_to_goal.m"
                              }
#line 494 "goal_expr_to_goal.m"
                              {
#line 494 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__V_241_241 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 494 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_241_241, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_242_242));
#line 494 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_241_241, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_20));
#line 494 "goal_expr_to_goal.m"
                              }
#line 494 "goal_expr_to_goal.m"
                              {
#line 494 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__TransformedExpr_681 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 494 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedExpr_681, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
#line 494 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedExpr_681, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_241_241));
#line 494 "goal_expr_to_goal.m"
                              }
#line 495 "goal_expr_to_goal.m"
                              {
#line 495 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__TransformedExpr_681, hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__Goal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_243_243, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                              }
#line 494 "goal_expr_to_goal.m"
                            }
#line 498 "goal_expr_to_goal.m"
                          else
#line 519 "goal_expr_to_goal.m"
                            {
#line 519 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__RHS0_166;
#line 519 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__Remainder_168;
#line 519 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__FieldListContext_169;
#line 519 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__StateVarContext_172;
#line 519 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_252_252;
#line 519 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__Args_704;
#line 501 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__LHS0_165;
#line 501 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__StateVar0_167;
#line 501 "goal_expr_to_goal.m"
                              MR_String hlds__make_hlds__goal_expr_to_goal__V_249_249;
#line 501 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_250_250;
#line 501 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_251_251;
#line 501 "goal_expr_to_goal.m"
                              MR_String hlds__make_hlds__goal_expr_to_goal__V_253_253;
#line 501 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_254_254;
#line 501 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_255_255;
#line 501 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_256_256;
#line 501 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_257_257;
#line 501 "goal_expr_to_goal.m"
                              MR_String hlds__make_hlds__goal_expr_to_goal__V_258_258;
#line 501 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_260_260;
#line 501 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_261_261;
#line 505 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_170_170;
#line 505 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_171_171;

#line 501 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Name_162)) == (MR_mktag((MR_Integer) 0)));
#line 501 "goal_expr_to_goal.m"
                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 501 "goal_expr_to_goal.m"
                                {
#line 501 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__V_249_249 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Name_162, (MR_Integer) 0)));
#line 501 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_249_249, (MR_String) ":=") == 0);
#line 501 "goal_expr_to_goal.m"
                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 501 "goal_expr_to_goal.m"
                                    {
#line 502 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Args1_724)) == (MR_mktag((MR_Integer) 1)));
#line 502 "goal_expr_to_goal.m"
                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 502 "goal_expr_to_goal.m"
                                        {
#line 502 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__LHS0_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Args1_724, (MR_Integer) 0)));
#line 502 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Args1_724, (MR_Integer) 1)));
#line 502 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_250_250)) == (MR_mktag((MR_Integer) 1)));
#line 502 "goal_expr_to_goal.m"
                                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 502 "goal_expr_to_goal.m"
                                            {
#line 502 "goal_expr_to_goal.m"
                                              hlds__make_hlds__goal_expr_to_goal__RHS0_166 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_250_250, (MR_Integer) 0)));
#line 502 "goal_expr_to_goal.m"
                                              hlds__make_hlds__goal_expr_to_goal__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_250_250, (MR_Integer) 1)));
#line 502 "goal_expr_to_goal.m"
                                              hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_251_251 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 501 "goal_expr_to_goal.m"
                                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 501 "goal_expr_to_goal.m"
                                                {
#line 503 "goal_expr_to_goal.m"
                                                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__LHS0_165)) == (MR_mktag((MR_Integer) 0)));
#line 503 "goal_expr_to_goal.m"
                                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 503 "goal_expr_to_goal.m"
                                                    {
#line 503 "goal_expr_to_goal.m"
                                                      hlds__make_hlds__goal_expr_to_goal__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHS0_165, (MR_Integer) 0)));
#line 503 "goal_expr_to_goal.m"
                                                      hlds__make_hlds__goal_expr_to_goal__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHS0_165, (MR_Integer) 1)));
#line 503 "goal_expr_to_goal.m"
                                                      hlds__make_hlds__goal_expr_to_goal__FieldListContext_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHS0_165, (MR_Integer) 2)));
#line 503 "goal_expr_to_goal.m"
                                                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_252_252)) == (MR_mktag((MR_Integer) 0)));
#line 503 "goal_expr_to_goal.m"
                                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 503 "goal_expr_to_goal.m"
                                                        {
#line 503 "goal_expr_to_goal.m"
                                                          hlds__make_hlds__goal_expr_to_goal__V_253_253 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_252_252, (MR_Integer) 0)));
#line 503 "goal_expr_to_goal.m"
                                                          hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_253_253, (MR_String) "^") == 0);
#line 501 "goal_expr_to_goal.m"
                                                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 501 "goal_expr_to_goal.m"
                                                            {
#line 503 "goal_expr_to_goal.m"
                                                              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_254_254)) == (MR_mktag((MR_Integer) 1)));
#line 503 "goal_expr_to_goal.m"
                                                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 503 "goal_expr_to_goal.m"
                                                                {
#line 503 "goal_expr_to_goal.m"
                                                                  hlds__make_hlds__goal_expr_to_goal__StateVar0_167 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_254_254, (MR_Integer) 0)));
#line 503 "goal_expr_to_goal.m"
                                                                  hlds__make_hlds__goal_expr_to_goal__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_254_254, (MR_Integer) 1)));
#line 503 "goal_expr_to_goal.m"
                                                                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_255_255)) == (MR_mktag((MR_Integer) 1)));
#line 503 "goal_expr_to_goal.m"
                                                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 503 "goal_expr_to_goal.m"
                                                                    {
#line 503 "goal_expr_to_goal.m"
                                                                      hlds__make_hlds__goal_expr_to_goal__Remainder_168 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_255_255, (MR_Integer) 0)));
#line 503 "goal_expr_to_goal.m"
                                                                      hlds__make_hlds__goal_expr_to_goal__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_255_255, (MR_Integer) 1)));
#line 503 "goal_expr_to_goal.m"
                                                                      hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_256_256 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 501 "goal_expr_to_goal.m"
                                                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 501 "goal_expr_to_goal.m"
                                                                        {
#line 505 "goal_expr_to_goal.m"
                                                                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__StateVar0_167)) == (MR_mktag((MR_Integer) 0)));
#line 505 "goal_expr_to_goal.m"
                                                                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 505 "goal_expr_to_goal.m"
                                                                            {
#line 505 "goal_expr_to_goal.m"
                                                                              hlds__make_hlds__goal_expr_to_goal__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar0_167, (MR_Integer) 0)));
#line 505 "goal_expr_to_goal.m"
                                                                              hlds__make_hlds__goal_expr_to_goal__Args_704 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar0_167, (MR_Integer) 1)));
#line 505 "goal_expr_to_goal.m"
                                                                              hlds__make_hlds__goal_expr_to_goal__StateVarContext_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar0_167, (MR_Integer) 2)));
#line 505 "goal_expr_to_goal.m"
                                                                              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_257_257)) == (MR_mktag((MR_Integer) 0)));
#line 505 "goal_expr_to_goal.m"
                                                                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 505 "goal_expr_to_goal.m"
                                                                                {
#line 505 "goal_expr_to_goal.m"
                                                                                  hlds__make_hlds__goal_expr_to_goal__V_258_258 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_257_257, (MR_Integer) 0)));
#line 505 "goal_expr_to_goal.m"
                                                                                  hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_258_258, (MR_String) "!") == 0);
#line 501 "goal_expr_to_goal.m"
                                                                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 501 "goal_expr_to_goal.m"
                                                                                    {
#line 505 "goal_expr_to_goal.m"
                                                                                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Args_704)) == (MR_mktag((MR_Integer) 1)));
#line 505 "goal_expr_to_goal.m"
                                                                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 505 "goal_expr_to_goal.m"
                                                                                        {
#line 505 "goal_expr_to_goal.m"
                                                                                          hlds__make_hlds__goal_expr_to_goal__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Args_704, (MR_Integer) 0)));
#line 505 "goal_expr_to_goal.m"
                                                                                          hlds__make_hlds__goal_expr_to_goal__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Args_704, (MR_Integer) 1)));
#line 505 "goal_expr_to_goal.m"
                                                                                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_260_260)) == (MR_mktag((MR_Integer) 1)));
#line 505 "goal_expr_to_goal.m"
                                                                                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 505 "goal_expr_to_goal.m"
                                                                                            {
#line 505 "goal_expr_to_goal.m"
                                                                                              hlds__make_hlds__goal_expr_to_goal__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_260_260, (MR_Integer) 0)));
#line 505 "goal_expr_to_goal.m"
                                                                                              hlds__make_hlds__goal_expr_to_goal__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_260_260, (MR_Integer) 1)));
#line 505 "goal_expr_to_goal.m"
                                                                                              hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_261_261 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 505 "goal_expr_to_goal.m"
                                                                                            }
#line 505 "goal_expr_to_goal.m"
                                                                                        }
#line 501 "goal_expr_to_goal.m"
                                                                                    }
#line 505 "goal_expr_to_goal.m"
                                                                                }
#line 505 "goal_expr_to_goal.m"
                                                                            }
#line 501 "goal_expr_to_goal.m"
                                                                        }
#line 503 "goal_expr_to_goal.m"
                                                                    }
#line 503 "goal_expr_to_goal.m"
                                                                }
#line 501 "goal_expr_to_goal.m"
                                                            }
#line 503 "goal_expr_to_goal.m"
                                                        }
#line 503 "goal_expr_to_goal.m"
                                                    }
#line 501 "goal_expr_to_goal.m"
                                                }
#line 502 "goal_expr_to_goal.m"
                                            }
#line 502 "goal_expr_to_goal.m"
                                        }
#line 501 "goal_expr_to_goal.m"
                                    }
#line 501 "goal_expr_to_goal.m"
                                }
#line 519 "goal_expr_to_goal.m"
                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 510 "goal_expr_to_goal.m"
                                {
#line 510 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVar_173;
#line 510 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__FieldList_174;
#line 510 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_268_268;
#line 510 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_269_269;
#line 510 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_273_273;
#line 510 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_274_274;
#line 510 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__TransformedExpr_682;
#line 510 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__LHS_683;
#line 510 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__RHS_684;

#line 510 "goal_expr_to_goal.m"
                                  {
#line 510 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__LHS_683 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 510 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHS_683, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[0]));
#line 510 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHS_683, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Args_704));
#line 510 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__LHS_683, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVarContext_172));
#line 510 "goal_expr_to_goal.m"
                                  }
#line 511 "goal_expr_to_goal.m"
                                  {
#line 511 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__StateVar_173 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 511 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar_173, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[1]));
#line 511 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar_173, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Args_704));
#line 511 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__StateVar_173, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVarContext_172));
#line 511 "goal_expr_to_goal.m"
                                  }
#line 512 "goal_expr_to_goal.m"
                                  {
#line 512 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__V_269_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_269_269, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Remainder_168));
#line 512 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_269_269, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 512 "goal_expr_to_goal.m"
                                  }
#line 512 "goal_expr_to_goal.m"
                                  {
#line 512 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__V_268_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_268_268, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__StateVar_173));
#line 512 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_268_268, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_269_269));
#line 512 "goal_expr_to_goal.m"
                                  }
#line 512 "goal_expr_to_goal.m"
                                  {
#line 512 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__FieldList_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 512 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__FieldList_174, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_252_252));
#line 512 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__FieldList_174, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_268_268));
#line 512 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__FieldList_174, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FieldListContext_169));
#line 512 "goal_expr_to_goal.m"
                                  }
#line 514 "goal_expr_to_goal.m"
                                  {
#line 514 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__V_274_274 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 514 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_274_274, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__RHS0_166));
#line 514 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_274_274, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 514 "goal_expr_to_goal.m"
                                  }
#line 514 "goal_expr_to_goal.m"
                                  {
#line 514 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__V_273_273 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 514 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_273_273, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__FieldList_174));
#line 514 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_273_273, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_274_274));
#line 514 "goal_expr_to_goal.m"
                                  }
#line 514 "goal_expr_to_goal.m"
                                  {
#line 514 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__RHS_684 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 514 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__RHS_684, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[2]));
#line 514 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__RHS_684, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_273_273));
#line 514 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__RHS_684, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_20));
#line 514 "goal_expr_to_goal.m"
                                  }
#line 515 "goal_expr_to_goal.m"
                                  {
#line 515 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__TransformedExpr_682 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 515 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedExpr_682, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 515 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedExpr_682, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__LHS_683));
#line 515 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedExpr_682, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__RHS_684));
#line 515 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedExpr_682, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Purity_722));
#line 515 "goal_expr_to_goal.m"
                                  }
#line 516 "goal_expr_to_goal.m"
                                  {
#line 516 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__TransformedExpr_682, hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__Goal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_243_243, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                  }
#line 510 "goal_expr_to_goal.m"
                                }
#line 519 "goal_expr_to_goal.m"
                              else
#line 532 "goal_expr_to_goal.m"
                                {
#line 532 "goal_expr_to_goal.m"
                                  MR_String hlds__make_hlds__goal_expr_to_goal__Operator_175;

#line 523 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Name_162)) == (MR_mktag((MR_Integer) 0)));
#line 523 "goal_expr_to_goal.m"
                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 523 "goal_expr_to_goal.m"
                                    {
#line 523 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__Operator_175 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Name_162, (MR_Integer) 0)));
#line 525 "goal_expr_to_goal.m"
                                      if ((strcmp(hlds__make_hlds__goal_expr_to_goal__Operator_175, (MR_String) ":=") == 0))
#line 525 "goal_expr_to_goal.m"
                                        hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
#line 525 "goal_expr_to_goal.m"
                                      else
#line 525 "goal_expr_to_goal.m"
                                        if ((strcmp(hlds__make_hlds__goal_expr_to_goal__Operator_175, (MR_String) "=^") == 0))
#line 524 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
#line 525 "goal_expr_to_goal.m"
                                        else
#line 525 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__succeeded = MR_FALSE;
#line 523 "goal_expr_to_goal.m"
                                    }
#line 532 "goal_expr_to_goal.m"
                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 528 "goal_expr_to_goal.m"
                                    {
#line 528 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__Args2_176;

#line 528 "goal_expr_to_goal.m"
                                      {
#line 528 "goal_expr_to_goal.m"
                                        parse_tree__prog_data__rename_vars_in_term_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__Args1_724, &hlds__make_hlds__goal_expr_to_goal__Args2_176);
                                      }
#line 529 "goal_expr_to_goal.m"
                                      {
#line 529 "goal_expr_to_goal.m"
                                        hlds__make_hlds__goal_expr_to_goal__transform_dcg_record_syntax_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__Operator_175, hlds__make_hlds__goal_expr_to_goal__Args2_176, hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__Goal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_243_243, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                      }
#line 528 "goal_expr_to_goal.m"
                                    }
#line 532 "goal_expr_to_goal.m"
                                  else
#line 533 "goal_expr_to_goal.m"
                                    {
#line 533 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__Call_182;
#line 533 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo0_186;
#line 533 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_290_290;
#line 533 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_291_291;
#line 533 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_292_292;
#line 533 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_300_300;
#line 533 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_301_301;
#line 533 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_687;
#line 533 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__Goal0_688;
#line 533 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__Args_689;
#line 533 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVars_690;
#line 533 "goal_expr_to_goal.m"
                                      MR_Integer hlds__make_hlds__goal_expr_to_goal__Arity_691;
#line 533 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__CallId_693;
#line 556 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__PredVar_177;
#line 556 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__RealHeadVars_178;
#line 542 "goal_expr_to_goal.m"
                                      MR_String hlds__make_hlds__goal_expr_to_goal__V_767_767;

#line 533 "goal_expr_to_goal.m"
                                      {
#line 533 "goal_expr_to_goal.m"
                                        parse_tree__prog_data__rename_vars_in_term_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__Args1_724, &hlds__make_hlds__goal_expr_to_goal__Args_689);
                                      }
#line 534 "goal_expr_to_goal.m"
                                      {
#line 534 "goal_expr_to_goal.m"
                                        hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(hlds__make_hlds__goal_expr_to_goal__Args_689, &hlds__make_hlds__goal_expr_to_goal__HeadVars_690, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_290_290, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_291_291, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_292_292);
                                      }
#line 536 "goal_expr_to_goal.m"
                                      {
#line 536 "goal_expr_to_goal.m"
                                        mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[1], hlds__make_hlds__goal_expr_to_goal__Args_689, &hlds__make_hlds__goal_expr_to_goal__Arity_691);
                                      }
#line 540 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Name_162)) == (MR_mktag((MR_Integer) 0)));
#line 540 "goal_expr_to_goal.m"
                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 540 "goal_expr_to_goal.m"
                                        {
#line 540 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__V_767_767 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Name_162, (MR_Integer) 0)));
#line 541 "goal_expr_to_goal.m"
                                          if ((strcmp(hlds__make_hlds__goal_expr_to_goal__V_767_767, (MR_String) "") == 0))
#line 541 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
#line 541 "goal_expr_to_goal.m"
                                          else
#line 541 "goal_expr_to_goal.m"
                                            if ((strcmp(hlds__make_hlds__goal_expr_to_goal__V_767_767, (MR_String) "call") == 0))
#line 540 "goal_expr_to_goal.m"
                                              hlds__make_hlds__goal_expr_to_goal__succeeded = MR_TRUE;
#line 541 "goal_expr_to_goal.m"
                                            else
#line 541 "goal_expr_to_goal.m"
                                              hlds__make_hlds__goal_expr_to_goal__succeeded = MR_FALSE;
#line 542 "goal_expr_to_goal.m"
                                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 542 "goal_expr_to_goal.m"
                                            {
#line 543 "goal_expr_to_goal.m"
                                              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__HeadVars_690)) == (MR_mktag((MR_Integer) 1)));
#line 543 "goal_expr_to_goal.m"
                                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 543 "goal_expr_to_goal.m"
                                                {
#line 543 "goal_expr_to_goal.m"
                                                  hlds__make_hlds__goal_expr_to_goal__PredVar_177 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVars_690, (MR_Integer) 0)));
#line 543 "goal_expr_to_goal.m"
                                                  hlds__make_hlds__goal_expr_to_goal__RealHeadVars_178 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__HeadVars_690, (MR_Integer) 1)));
#line 543 "goal_expr_to_goal.m"
                                                }
#line 542 "goal_expr_to_goal.m"
                                            }
#line 540 "goal_expr_to_goal.m"
                                        }
#line 556 "goal_expr_to_goal.m"
                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 546 "goal_expr_to_goal.m"
                                        {
#line 546 "goal_expr_to_goal.m"
                                          MR_Word hlds__make_hlds__goal_expr_to_goal__GenericCall_181;

#line 550 "goal_expr_to_goal.m"
                                          {
#line 550 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__GenericCall_181 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 550 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GenericCall_181, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__PredVar_177));
#line 550 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GenericCall_181, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Purity_722));
#line 550 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GenericCall_181, 2) = ((MR_Box) ((MR_Integer) 0));
#line 550 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__GenericCall_181, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Arity_691));
#line 550 "goal_expr_to_goal.m"
                                          }
#line 552 "goal_expr_to_goal.m"
                                          {
#line 552 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__Call_182 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 552 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_182, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 552 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_182, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GenericCall_181));
#line 552 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_182, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__RealHeadVars_178));
#line 552 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_182, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 552 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_182, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 552 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Call_182, 5) = ((MR_Box) ((MR_Integer) 6));
#line 552 "goal_expr_to_goal.m"
                                          }
#line 555 "goal_expr_to_goal.m"
                                          {
#line 555 "goal_expr_to_goal.m"
                                            hlds__hlds_goal__generic_call_id_2_p_0(hlds__make_hlds__goal_expr_to_goal__GenericCall_181, &hlds__make_hlds__goal_expr_to_goal__CallId_693);
                                          }
#line 546 "goal_expr_to_goal.m"
                                        }
#line 556 "goal_expr_to_goal.m"
                                      else
#line 558 "goal_expr_to_goal.m"
                                        {
#line 558 "goal_expr_to_goal.m"
                                          MR_Word hlds__make_hlds__goal_expr_to_goal__PredId_183;
#line 558 "goal_expr_to_goal.m"
                                          MR_Integer hlds__make_hlds__goal_expr_to_goal__ModeId_184;
#line 558 "goal_expr_to_goal.m"
                                          MR_Word hlds__make_hlds__goal_expr_to_goal__V_297_297;

#line 558 "goal_expr_to_goal.m"
                                          {
#line 558 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__PredId_183 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                                          }
#line 559 "goal_expr_to_goal.m"
                                          {
#line 559 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__ModeId_184 = hlds__hlds_pred__invalid_proc_id_0_f_0();
                                          }
#line 562 "goal_expr_to_goal.m"
                                          {
#line 562 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__Call_182 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 562 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_182, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__PredId_183));
#line 562 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_182, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__ModeId_184));
#line 562 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_182, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HeadVars_690));
#line 562 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_182, 3) = ((MR_Box) ((MR_Integer) 2));
#line 562 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_182, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 562 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Call_182, 5) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Name_162));
#line 562 "goal_expr_to_goal.m"
                                          }
#line 565 "goal_expr_to_goal.m"
                                          {
#line 565 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__V_297_297 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 565 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_297_297, 0) = ((MR_Box) ((MR_Integer) 0));
#line 565 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_297_297, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Name_162));
#line 565 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_297_297, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Arity_691));
#line 565 "goal_expr_to_goal.m"
                                          }
#line 564 "goal_expr_to_goal.m"
                                          {
#line 564 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__CallId_693 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 564 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__CallId_693, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_297_297));
#line 564 "goal_expr_to_goal.m"
                                          }
#line 558 "goal_expr_to_goal.m"
                                        }
#line 567 "goal_expr_to_goal.m"
                                      {
#line 567 "goal_expr_to_goal.m"
                                        hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, &hlds__make_hlds__goal_expr_to_goal__GoalInfo0_186);
                                      }
#line 568 "goal_expr_to_goal.m"
                                      {
#line 568 "goal_expr_to_goal.m"
                                        hlds__hlds_goal__goal_info_set_purity_3_p_0(hlds__make_hlds__goal_expr_to_goal__Purity_722, hlds__make_hlds__goal_expr_to_goal__GoalInfo0_186, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_687);
                                      }
#line 569 "goal_expr_to_goal.m"
                                      {
#line 569 "goal_expr_to_goal.m"
                                        hlds__make_hlds__goal_expr_to_goal__Goal0_688 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 569 "goal_expr_to_goal.m"
                                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal0_688, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Call_182));
#line 569 "goal_expr_to_goal.m"
                                        MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal0_688, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_687));
#line 569 "goal_expr_to_goal.m"
                                      }
#line 571 "goal_expr_to_goal.m"
                                      {
#line 571 "goal_expr_to_goal.m"
                                        hlds__make_hlds__qual_info__record_called_pred_or_func_5_p_0((MR_Integer) 0, hlds__make_hlds__goal_expr_to_goal__Name_162, hlds__make_hlds__goal_expr_to_goal__Arity_691, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_300_300);
                                      }
#line 572 "goal_expr_to_goal.m"
                                      {
#line 572 "goal_expr_to_goal.m"
                                        hlds__make_hlds__goal_expr_to_goal__V_301_301 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 572 "goal_expr_to_goal.m"
                                        MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_301_301, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CallId_693));
#line 572 "goal_expr_to_goal.m"
                                      }
#line 572 "goal_expr_to_goal.m"
                                      {
#line 572 "goal_expr_to_goal.m"
                                        hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(hlds__make_hlds__goal_expr_to_goal__HeadVars_690, hlds__make_hlds__goal_expr_to_goal__Args_689, hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__V_301_301, hlds__make_hlds__goal_expr_to_goal__Goal0_688, hlds__make_hlds__goal_expr_to_goal__Goal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_291_291, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_243_243, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_290_290, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_300_300, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_292_292, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                      }
#line 533 "goal_expr_to_goal.m"
                                    }
#line 532 "goal_expr_to_goal.m"
                                }
#line 519 "goal_expr_to_goal.m"
                            }
#line 576 "goal_expr_to_goal.m"
                          {
#line 576 "goal_expr_to_goal.m"
                            hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_243_243, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198);
#line 576 "goal_expr_to_goal.m"
                            return;
                          }
#line 487 "goal_expr_to_goal.m"
                        }
#line 116 "goal_expr_to_goal.m"
                      else
#line 116 "goal_expr_to_goal.m"
                        if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 428 "goal_expr_to_goal.m"
                          {
#line 428 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates1_143;
#line 428 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates_144;
#line 428 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__Disjuncts_145;
#line 428 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_349_349;
#line 428 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_350_350;
#line 428 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_351_351;
#line 428 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_352_352;
#line 428 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_353_353;
#line 428 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_354_354;
#line 428 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_355_355;
#line 428 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_670;
#line 428 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__A0_671 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 428 "goal_expr_to_goal.m"
                            MR_Word hlds__make_hlds__goal_expr_to_goal__B0_672 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));

#line 430 "goal_expr_to_goal.m"
                            {
#line 430 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__B0_672, hlds__make_hlds__goal_expr_to_goal__Renaming_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates1_143, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_349_349, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_350_350, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_351_351, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_352_352, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_353_353);
                            }
#line 433 "goal_expr_to_goal.m"
                            {
#line 433 "goal_expr_to_goal.m"
                              hlds__make_hlds__goal_expr_to_goal__get_disj_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__A0_671, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates1_143, &hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates_144, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_349_349, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_354_354, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_350_350, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_355_355, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_351_351, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_352_352, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_353_353, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                            }
#line 437 "goal_expr_to_goal.m"
                            {
#line 437 "goal_expr_to_goal.m"
                              hlds__make_hlds__state_var__svar_finish_disjunction_9_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__DisjunctsSVarStates_144, &hlds__make_hlds__goal_expr_to_goal__Disjuncts_145, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_355_355, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_354_354, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200);
                            }
#line 440 "goal_expr_to_goal.m"
                            {
#line 440 "goal_expr_to_goal.m"
                              hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_670);
                            }
#line 441 "goal_expr_to_goal.m"
                            {
#line 441 "goal_expr_to_goal.m"
                              hlds__hlds_goal__disj_list_to_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__Disjuncts_145, hlds__make_hlds__goal_expr_to_goal__GoalInfo_670, hlds__make_hlds__goal_expr_to_goal__Goal_22);
#line 441 "goal_expr_to_goal.m"
                              return;
                            }
#line 428 "goal_expr_to_goal.m"
                          }
#line 116 "goal_expr_to_goal.m"
                        else
#line 116 "goal_expr_to_goal.m"
                          if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 451 "goal_expr_to_goal.m"
                            {
#line 451 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__P0_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 451 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__Q0_150 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));
#line 451 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_325_325;
#line 451 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_326_326;
#line 451 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_327_327;
#line 451 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_328_328;
#line 451 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_329_329;
#line 451 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_330_330;
#line 451 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_337_337;
#line 451 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_674;
#line 451 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_675;
#line 451 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__P_677;
#line 451 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__Q_678;
#line 461 "goal_expr_to_goal.m"
                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_151_151;

#line 458 "goal_expr_to_goal.m"
                              {
#line 458 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__P0_149, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__P_677, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_325_325, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_326_326, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_327_327, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_328_328, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_329_329, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_330_330);
                              }
#line 461 "goal_expr_to_goal.m"
                              {
#line 461 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__Q0_150, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__Q_678, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_325_325, &hlds__make_hlds__goal_expr_to_goal__V_151_151, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_326_326, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_327_327, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_328_328, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_329_329, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_330_330, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                              }
#line 464 "goal_expr_to_goal.m"
                              *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197;
#line 465 "goal_expr_to_goal.m"
                              {
#line 465 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__V_337_337 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 465 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_337_337, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__P_677));
#line 465 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_337_337, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Q_678));
#line 465 "goal_expr_to_goal.m"
                              }
#line 465 "goal_expr_to_goal.m"
                              {
#line 465 "goal_expr_to_goal.m"
                                hlds__make_hlds__goal_expr_to_goal__GoalExpr_674 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 465 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_674, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 465 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_674, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_337_337));
#line 465 "goal_expr_to_goal.m"
                              }
#line 466 "goal_expr_to_goal.m"
                              {
#line 466 "goal_expr_to_goal.m"
                                hlds__hlds_goal__goal_info_init_1_p_0(&hlds__make_hlds__goal_expr_to_goal__GoalInfo_675);
                              }
#line 467 "goal_expr_to_goal.m"
                              {
#line 467 "goal_expr_to_goal.m"
                                MR_Word base;
#line 467 "goal_expr_to_goal.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 467 "goal_expr_to_goal.m"
                                *hlds__make_hlds__goal_expr_to_goal__Goal_22 = base;
#line 467 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_674));
#line 467 "goal_expr_to_goal.m"
                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_675));
#line 467 "goal_expr_to_goal.m"
                              }
#line 451 "goal_expr_to_goal.m"
                            }
#line 116 "goal_expr_to_goal.m"
                          else
#line 116 "goal_expr_to_goal.m"
                            if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 18))))
#line 469 "goal_expr_to_goal.m"
                              {
#line 469 "goal_expr_to_goal.m"
                                MR_String hlds__make_hlds__goal_expr_to_goal__EventName_152 = ((MR_String) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 469 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__Args0_153 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));
#line 469 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__Args1_154;
#line 469 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__Args_155;
#line 469 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVars_156;
#line 469 "goal_expr_to_goal.m"
                                MR_Integer hlds__make_hlds__goal_expr_to_goal__Arity_157;
#line 469 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__Modes_158;
#line 469 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__Details_159;
#line 469 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr0_160;
#line 469 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__CallId_161;
#line 469 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_310_310;
#line 469 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_311_311;
#line 469 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_312_312;
#line 469 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__V_313_313;
#line 469 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__V_316_316;
#line 469 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__V_317_317;
#line 469 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_318_318;
#line 469 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_679;
#line 469 "goal_expr_to_goal.m"
                                MR_Word hlds__make_hlds__goal_expr_to_goal__Goal0_680;

#line 470 "goal_expr_to_goal.m"
                                {
#line 470 "goal_expr_to_goal.m"
                                  hlds__make_hlds__state_var__expand_bang_states_2_p_0(hlds__make_hlds__goal_expr_to_goal__Args0_153, &hlds__make_hlds__goal_expr_to_goal__Args1_154);
                                }
#line 471 "goal_expr_to_goal.m"
                                {
#line 471 "goal_expr_to_goal.m"
                                  parse_tree__prog_data__rename_vars_in_term_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__Args1_154, &hlds__make_hlds__goal_expr_to_goal__Args_155);
                                }
#line 472 "goal_expr_to_goal.m"
                                {
#line 472 "goal_expr_to_goal.m"
                                  hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(hlds__make_hlds__goal_expr_to_goal__Args_155, &hlds__make_hlds__goal_expr_to_goal__HeadVars_156, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_310_310, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_311_311, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_312_312);
                                }
#line 474 "goal_expr_to_goal.m"
                                {
#line 474 "goal_expr_to_goal.m"
                                  mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0], hlds__make_hlds__goal_expr_to_goal__HeadVars_156, &hlds__make_hlds__goal_expr_to_goal__Arity_157);
                                }
#line 475 "goal_expr_to_goal.m"
                                {
#line 475 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__V_313_313 = parse_tree__prog_mode__in_mode_0_f_0();
                                }
#line 475 "goal_expr_to_goal.m"
                                {
#line 475 "goal_expr_to_goal.m"
                                  mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__make_hlds__goal_expr_to_goal__Arity_157, ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_313_313)), &hlds__make_hlds__goal_expr_to_goal__Modes_158);
                                }
#line 476 "goal_expr_to_goal.m"
                                {
#line 476 "goal_expr_to_goal.m"
                                  hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_679);
                                }
#line 477 "goal_expr_to_goal.m"
                                {
#line 477 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__Details_159 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 477 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Details_159, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__EventName_152));
#line 477 "goal_expr_to_goal.m"
                                }
#line 478 "goal_expr_to_goal.m"
                                {
#line 478 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__GoalExpr0_160 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 478 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_160, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 478 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_160, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Details_159));
#line 478 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_160, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__HeadVars_156));
#line 478 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_160, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Modes_158));
#line 478 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_160, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 478 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr0_160, 5) = ((MR_Box) ((MR_Integer) 0));
#line 478 "goal_expr_to_goal.m"
                                }
#line 480 "goal_expr_to_goal.m"
                                {
#line 480 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__Goal0_680 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 480 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal0_680, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr0_160));
#line 480 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal0_680, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_679));
#line 480 "goal_expr_to_goal.m"
                                }
#line 481 "goal_expr_to_goal.m"
                                {
#line 481 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__V_316_316 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 481 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__V_316_316, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__EventName_152));
#line 481 "goal_expr_to_goal.m"
                                }
#line 481 "goal_expr_to_goal.m"
                                {
#line 481 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__CallId_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 481 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__CallId_161, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_316_316));
#line 481 "goal_expr_to_goal.m"
                                }
#line 482 "goal_expr_to_goal.m"
                                {
#line 482 "goal_expr_to_goal.m"
                                  hlds__make_hlds__goal_expr_to_goal__V_317_317 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 482 "goal_expr_to_goal.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_317_317, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__CallId_161));
#line 482 "goal_expr_to_goal.m"
                                }
#line 482 "goal_expr_to_goal.m"
                                {
#line 482 "goal_expr_to_goal.m"
                                  hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(hlds__make_hlds__goal_expr_to_goal__HeadVars_156, hlds__make_hlds__goal_expr_to_goal__Args_155, hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__V_317_317, hlds__make_hlds__goal_expr_to_goal__Goal0_680, hlds__make_hlds__goal_expr_to_goal__Goal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_311_311, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_318_318, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_310_310, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_312_312, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                }
#line 485 "goal_expr_to_goal.m"
                                {
#line 485 "goal_expr_to_goal.m"
                                  hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_318_318, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198);
#line 485 "goal_expr_to_goal.m"
                                  return;
                                }
#line 469 "goal_expr_to_goal.m"
                              }
#line 116 "goal_expr_to_goal.m"
                            else
#line 116 "goal_expr_to_goal.m"
                              if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 17))))
#line 375 "goal_expr_to_goal.m"
                                {
#line 375 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_754_754 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 375 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__Cond0_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 3)));
#line 375 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__Else0_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 5)));
#line 375 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__BeforeCondSVarState_125;
#line 375 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__Cond_126;
#line 375 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__AfterCondSVarState_127;
#line 375 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__Then1_128;
#line 375 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState0_129;
#line 375 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState_130;
#line 375 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__Else1_131;
#line 375 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__AfterElseSVarState_132;
#line 375 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__Then_133;
#line 375 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__Else_134;
#line 375 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_396_396;
#line 375 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_397_397;
#line 375 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_398_398;
#line 375 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_399_399;
#line 375 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_400_400;
#line 375 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_401_401;
#line 375 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_402_402;
#line 375 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_403_403;
#line 375 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_404_404;
#line 375 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_405_405;
#line 375 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_406_406;
#line 375 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_407_407;
#line 375 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_408_408;
#line 375 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_411_411;
#line 375 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_651;
#line 375 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_652;
#line 375 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars0_653 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 375 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_654;
#line 375 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_655;
#line 375 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars0_656 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));
#line 375 "goal_expr_to_goal.m"
                                  MR_Word hlds__make_hlds__goal_expr_to_goal__Then0_658 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 4)));

#line 377 "goal_expr_to_goal.m"
                                  {
#line 377 "goal_expr_to_goal.m"
                                    parse_tree__prog_data__rename_var_list_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_754_754, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__Vars0_653, &hlds__make_hlds__goal_expr_to_goal__Vars_655);
                                  }
#line 378 "goal_expr_to_goal.m"
                                  {
#line 378 "goal_expr_to_goal.m"
                                    parse_tree__prog_data__rename_var_list_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_754_754, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__StateVars0_656, &hlds__make_hlds__goal_expr_to_goal__StateVars_654);
                                  }
#line 379 "goal_expr_to_goal.m"
                                  {
#line 379 "goal_expr_to_goal.m"
                                    hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__StateVars_654, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, &hlds__make_hlds__goal_expr_to_goal__BeforeCondSVarState_125, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_396_396);
                                  }
#line 381 "goal_expr_to_goal.m"
                                  {
#line 381 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__Cond0_123, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__Cond_126, hlds__make_hlds__goal_expr_to_goal__BeforeCondSVarState_125, &hlds__make_hlds__goal_expr_to_goal__AfterCondSVarState_127, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_397_397, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_398_398, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_399_399, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_400_400, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_396_396, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_401_401);
                                  }
#line 384 "goal_expr_to_goal.m"
                                  {
#line 384 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__Then0_658, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__Then1_128, hlds__make_hlds__goal_expr_to_goal__AfterCondSVarState_127, &hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState0_129, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_397_397, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_402_402, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_398_398, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_403_403, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_399_399, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_404_404, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_400_400, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_405_405, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_401_401, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_406_406);
                                  }
#line 387 "goal_expr_to_goal.m"
                                  {
#line 387 "goal_expr_to_goal.m"
                                    hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(hlds__make_hlds__goal_expr_to_goal__StateVars_654, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState0_129, &hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState_130);
                                  }
#line 389 "goal_expr_to_goal.m"
                                  {
#line 389 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__Else0_124, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__Else1_131, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, &hlds__make_hlds__goal_expr_to_goal__AfterElseSVarState_132, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_402_402, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_407_407, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_403_403, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_408_408, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_404_404, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_405_405, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_406_406, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_411_411);
                                  }
#line 392 "goal_expr_to_goal.m"
                                  {
#line 392 "goal_expr_to_goal.m"
                                    hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_652);
                                  }
#line 393 "goal_expr_to_goal.m"
                                  {
#line 393 "goal_expr_to_goal.m"
                                    hlds__make_hlds__state_var__svar_finish_if_then_else_18_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__StateVars_654, hlds__make_hlds__goal_expr_to_goal__Then1_128, &hlds__make_hlds__goal_expr_to_goal__Then_133, hlds__make_hlds__goal_expr_to_goal__Else1_131, &hlds__make_hlds__goal_expr_to_goal__Else_134, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, hlds__make_hlds__goal_expr_to_goal__AfterCondSVarState_127, hlds__make_hlds__goal_expr_to_goal__AfterThenSVarState_130, hlds__make_hlds__goal_expr_to_goal__AfterElseSVarState_132, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_408_408, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_407_407, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_411_411, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                  }
#line 397 "goal_expr_to_goal.m"
                                  {
#line 397 "goal_expr_to_goal.m"
                                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_651 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 397 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_651, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 397 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_651, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Vars_655));
#line 397 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_651, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Cond_126));
#line 397 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_651, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Then_133));
#line 397 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_651, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Else_134));
#line 397 "goal_expr_to_goal.m"
                                  }
#line 398 "goal_expr_to_goal.m"
                                  {
#line 398 "goal_expr_to_goal.m"
                                    MR_Word base;
#line 398 "goal_expr_to_goal.m"
                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 398 "goal_expr_to_goal.m"
                                    *hlds__make_hlds__goal_expr_to_goal__Goal_22 = base;
#line 398 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_651));
#line 398 "goal_expr_to_goal.m"
                                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_652));
#line 398 "goal_expr_to_goal.m"
                                  }
#line 375 "goal_expr_to_goal.m"
                                }
#line 116 "goal_expr_to_goal.m"
                              else
#line 116 "goal_expr_to_goal.m"
                                if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 443 "goal_expr_to_goal.m"
                                  {
#line 443 "goal_expr_to_goal.m"
                                    MR_Word hlds__make_hlds__goal_expr_to_goal__P_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 443 "goal_expr_to_goal.m"
                                    MR_Word hlds__make_hlds__goal_expr_to_goal__Q_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));
#line 443 "goal_expr_to_goal.m"
                                    MR_Word hlds__make_hlds__goal_expr_to_goal__V_338_338;
#line 443 "goal_expr_to_goal.m"
                                    MR_Word hlds__make_hlds__goal_expr_to_goal__V_339_339;
#line 443 "goal_expr_to_goal.m"
                                    MR_Word hlds__make_hlds__goal_expr_to_goal__V_340_340;
#line 443 "goal_expr_to_goal.m"
                                    MR_Word hlds__make_hlds__goal_expr_to_goal__V_341_341;
#line 443 "goal_expr_to_goal.m"
                                    MR_Word hlds__make_hlds__goal_expr_to_goal__TransformedExpr_673;

#line 445 "goal_expr_to_goal.m"
                                    {
#line 445 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__V_341_341 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 445 "goal_expr_to_goal.m"
                                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_341_341, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
#line 445 "goal_expr_to_goal.m"
                                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_341_341, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Q_148));
#line 445 "goal_expr_to_goal.m"
                                    }
#line 445 "goal_expr_to_goal.m"
                                    {
#line 445 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__V_340_340 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 445 "goal_expr_to_goal.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_340_340, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_341_341));
#line 445 "goal_expr_to_goal.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_340_340, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_20));
#line 445 "goal_expr_to_goal.m"
                                    }
#line 446 "goal_expr_to_goal.m"
                                    {
#line 446 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__V_339_339 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 446 "goal_expr_to_goal.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_339_339, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__P_147));
#line 446 "goal_expr_to_goal.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_339_339, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_340_340));
#line 446 "goal_expr_to_goal.m"
                                    }
#line 445 "goal_expr_to_goal.m"
                                    {
#line 445 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__V_338_338 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 445 "goal_expr_to_goal.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_338_338, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_339_339));
#line 445 "goal_expr_to_goal.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_338_338, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_20));
#line 445 "goal_expr_to_goal.m"
                                    }
#line 445 "goal_expr_to_goal.m"
                                    {
#line 445 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__TransformedExpr_673 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 445 "goal_expr_to_goal.m"
                                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedExpr_673, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
#line 445 "goal_expr_to_goal.m"
                                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__TransformedExpr_673, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_338_338));
#line 445 "goal_expr_to_goal.m"
                                    }
#line 447 "goal_expr_to_goal.m"
                                    /* direct tailcall eliminated */
#line 447 "goal_expr_to_goal.m"
                                    {
#line 447 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__Expr__tmp_copy_19 = hlds__make_hlds__goal_expr_to_goal__TransformedExpr_673;

#line 447 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__Expr_19 = hlds__make_hlds__goal_expr_to_goal__Expr__tmp_copy_19;
#line 447 "goal_expr_to_goal.m"
                                    }
#line 447 "goal_expr_to_goal.m"
                                    continue;
#line 443 "goal_expr_to_goal.m"
                                  }
#line 116 "goal_expr_to_goal.m"
                                else
#line 116 "goal_expr_to_goal.m"
                                  if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 400 "goal_expr_to_goal.m"
                                    {
#line 400 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_659;
#line 400 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_660;
#line 400 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_661;
#line 400 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__SubExpr0_662 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 402 "goal_expr_to_goal.m"
                                      MR_Word hlds__make_hlds__goal_expr_to_goal__V_136_136;

#line 402 "goal_expr_to_goal.m"
                                      {
#line 402 "goal_expr_to_goal.m"
                                        hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__SubExpr0_662, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__SubGoal_661, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, &hlds__make_hlds__goal_expr_to_goal__V_136_136, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                      }
#line 405 "goal_expr_to_goal.m"
                                      *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197;
#line 406 "goal_expr_to_goal.m"
                                      hlds__make_hlds__goal_expr_to_goal__GoalExpr_659 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__make_hlds__goal_expr_to_goal__SubGoal_661);
#line 407 "goal_expr_to_goal.m"
                                      {
#line 407 "goal_expr_to_goal.m"
                                        hlds__hlds_goal__goal_info_init_1_p_0(&hlds__make_hlds__goal_expr_to_goal__GoalInfo_660);
                                      }
#line 408 "goal_expr_to_goal.m"
                                      {
#line 408 "goal_expr_to_goal.m"
                                        MR_Word base;
#line 408 "goal_expr_to_goal.m"
                                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 408 "goal_expr_to_goal.m"
                                        *hlds__make_hlds__goal_expr_to_goal__Goal_22 = base;
#line 408 "goal_expr_to_goal.m"
                                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_659));
#line 408 "goal_expr_to_goal.m"
                                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_660));
#line 408 "goal_expr_to_goal.m"
                                      }
#line 400 "goal_expr_to_goal.m"
                                    }
#line 116 "goal_expr_to_goal.m"
                                  else
#line 116 "goal_expr_to_goal.m"
                                    if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 190 "goal_expr_to_goal.m"
                                      {
#line 190 "goal_expr_to_goal.m"
                                        MR_Word hlds__make_hlds__goal_expr_to_goal__V_526_526;
#line 190 "goal_expr_to_goal.m"
                                        MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_613;
#line 190 "goal_expr_to_goal.m"
                                        MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_614;
#line 190 "goal_expr_to_goal.m"
                                        MR_Word hlds__make_hlds__goal_expr_to_goal__Vars0_615 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 190 "goal_expr_to_goal.m"
                                        MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_616;
#line 190 "goal_expr_to_goal.m"
                                        MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_617;
#line 190 "goal_expr_to_goal.m"
                                        MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars0_618 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));
#line 190 "goal_expr_to_goal.m"
                                        MR_Word hlds__make_hlds__goal_expr_to_goal__SubExpr0_619 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 5)));
#line 190 "goal_expr_to_goal.m"
                                        MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars0_620 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 3)));
#line 190 "goal_expr_to_goal.m"
                                        MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars0_621 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 4)));

#line 191 "goal_expr_to_goal.m"
                                        {
#line 191 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__Vars0_615, hlds__make_hlds__goal_expr_to_goal__StateVars0_618, hlds__make_hlds__goal_expr_to_goal__DotSVars0_620, hlds__make_hlds__goal_expr_to_goal__ColonSVars0_621, hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__Vars_616, hlds__make_hlds__goal_expr_to_goal__SubExpr0_619, &hlds__make_hlds__goal_expr_to_goal__SubGoal_617, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_614, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                        }
#line 195 "goal_expr_to_goal.m"
                                        {
#line 195 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__V_526_526 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 195 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_526_526, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Vars_616));
#line 195 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_526_526, 1) = ((MR_Box) ((MR_Integer) 2));
#line 195 "goal_expr_to_goal.m"
                                        }
#line 195 "goal_expr_to_goal.m"
                                        {
#line 195 "goal_expr_to_goal.m"
                                          hlds__make_hlds__goal_expr_to_goal__GoalExpr_613 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 195 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_613, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 195 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_613, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_526_526));
#line 195 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_613, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal_617));
#line 195 "goal_expr_to_goal.m"
                                        }
#line 197 "goal_expr_to_goal.m"
                                        {
#line 197 "goal_expr_to_goal.m"
                                          MR_Word base;
#line 197 "goal_expr_to_goal.m"
                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 197 "goal_expr_to_goal.m"
                                          *hlds__make_hlds__goal_expr_to_goal__Goal_22 = base;
#line 197 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_613));
#line 197 "goal_expr_to_goal.m"
                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_614));
#line 197 "goal_expr_to_goal.m"
                                        }
#line 190 "goal_expr_to_goal.m"
                                      }
#line 116 "goal_expr_to_goal.m"
                                    else
#line 116 "goal_expr_to_goal.m"
                                      if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 180 "goal_expr_to_goal.m"
                                        {
#line 180 "goal_expr_to_goal.m"
                                          MR_Word hlds__make_hlds__goal_expr_to_goal__V_534_534;
#line 180 "goal_expr_to_goal.m"
                                          MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_604;
#line 180 "goal_expr_to_goal.m"
                                          MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_605;
#line 180 "goal_expr_to_goal.m"
                                          MR_Word hlds__make_hlds__goal_expr_to_goal__Vars0_606 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 180 "goal_expr_to_goal.m"
                                          MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_607;
#line 180 "goal_expr_to_goal.m"
                                          MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_608;
#line 180 "goal_expr_to_goal.m"
                                          MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars0_609 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));
#line 180 "goal_expr_to_goal.m"
                                          MR_Word hlds__make_hlds__goal_expr_to_goal__SubExpr0_610 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 5)));
#line 180 "goal_expr_to_goal.m"
                                          MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars0_611 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 3)));
#line 180 "goal_expr_to_goal.m"
                                          MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars0_612 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 4)));

#line 181 "goal_expr_to_goal.m"
                                          {
#line 181 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__Vars0_606, hlds__make_hlds__goal_expr_to_goal__StateVars0_609, hlds__make_hlds__goal_expr_to_goal__DotSVars0_611, hlds__make_hlds__goal_expr_to_goal__ColonSVars0_612, hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__Vars_607, hlds__make_hlds__goal_expr_to_goal__SubExpr0_610, &hlds__make_hlds__goal_expr_to_goal__SubGoal_608, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_605, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                          }
#line 185 "goal_expr_to_goal.m"
                                          {
#line 185 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__V_534_534 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 185 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_534_534, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Vars_607));
#line 185 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_534_534, 1) = ((MR_Box) ((MR_Integer) 1));
#line 185 "goal_expr_to_goal.m"
                                          }
#line 185 "goal_expr_to_goal.m"
                                          {
#line 185 "goal_expr_to_goal.m"
                                            hlds__make_hlds__goal_expr_to_goal__GoalExpr_604 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 185 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_604, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 185 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_604, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_534_534));
#line 185 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_604, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal_608));
#line 185 "goal_expr_to_goal.m"
                                          }
#line 187 "goal_expr_to_goal.m"
                                          {
#line 187 "goal_expr_to_goal.m"
                                            MR_Word base;
#line 187 "goal_expr_to_goal.m"
                                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 187 "goal_expr_to_goal.m"
                                            *hlds__make_hlds__goal_expr_to_goal__Goal_22 = base;
#line 187 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_604));
#line 187 "goal_expr_to_goal.m"
                                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_605));
#line 187 "goal_expr_to_goal.m"
                                          }
#line 180 "goal_expr_to_goal.m"
                                        }
#line 116 "goal_expr_to_goal.m"
                                      else
#line 116 "goal_expr_to_goal.m"
                                        if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 170 "goal_expr_to_goal.m"
                                          {
#line 170 "goal_expr_to_goal.m"
                                            MR_Word hlds__make_hlds__goal_expr_to_goal__DotSVars0_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 3)));
#line 170 "goal_expr_to_goal.m"
                                            MR_Word hlds__make_hlds__goal_expr_to_goal__ColonSVars0_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 4)));
#line 170 "goal_expr_to_goal.m"
                                            MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_596;
#line 170 "goal_expr_to_goal.m"
                                            MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_597;
#line 170 "goal_expr_to_goal.m"
                                            MR_Word hlds__make_hlds__goal_expr_to_goal__Vars0_598 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 170 "goal_expr_to_goal.m"
                                            MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_599;
#line 170 "goal_expr_to_goal.m"
                                            MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_600;
#line 170 "goal_expr_to_goal.m"
                                            MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_601;
#line 170 "goal_expr_to_goal.m"
                                            MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars0_602 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));
#line 170 "goal_expr_to_goal.m"
                                            MR_Word hlds__make_hlds__goal_expr_to_goal__SubExpr0_603 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 5)));

#line 171 "goal_expr_to_goal.m"
                                            {
#line 171 "goal_expr_to_goal.m"
                                              hlds__make_hlds__goal_expr_to_goal__transform_promise_eqv_goal_23_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__Vars0_598, hlds__make_hlds__goal_expr_to_goal__StateVars0_602, hlds__make_hlds__goal_expr_to_goal__DotSVars0_46, hlds__make_hlds__goal_expr_to_goal__ColonSVars0_47, hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__Vars_599, hlds__make_hlds__goal_expr_to_goal__SubExpr0_603, &hlds__make_hlds__goal_expr_to_goal__SubGoal_600, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_597, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                            }
#line 175 "goal_expr_to_goal.m"
                                            {
#line 175 "goal_expr_to_goal.m"
                                              hlds__make_hlds__goal_expr_to_goal__Reason_601 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 175 "goal_expr_to_goal.m"
                                              MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Reason_601, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Vars_599));
#line 175 "goal_expr_to_goal.m"
                                              MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__Reason_601, 1) = ((MR_Box) ((MR_Integer) 0));
#line 175 "goal_expr_to_goal.m"
                                            }
#line 176 "goal_expr_to_goal.m"
                                            {
#line 176 "goal_expr_to_goal.m"
                                              hlds__make_hlds__goal_expr_to_goal__GoalExpr_596 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 176 "goal_expr_to_goal.m"
                                              MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_596, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 176 "goal_expr_to_goal.m"
                                              MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_596, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_601));
#line 176 "goal_expr_to_goal.m"
                                              MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_596, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal_600));
#line 176 "goal_expr_to_goal.m"
                                            }
#line 177 "goal_expr_to_goal.m"
                                            {
#line 177 "goal_expr_to_goal.m"
                                              MR_Word base;
#line 177 "goal_expr_to_goal.m"
                                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 177 "goal_expr_to_goal.m"
                                              *hlds__make_hlds__goal_expr_to_goal__Goal_22 = base;
#line 177 "goal_expr_to_goal.m"
                                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_596));
#line 177 "goal_expr_to_goal.m"
                                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_597));
#line 177 "goal_expr_to_goal.m"
                                            }
#line 170 "goal_expr_to_goal.m"
                                          }
#line 116 "goal_expr_to_goal.m"
                                        else
#line 116 "goal_expr_to_goal.m"
                                          if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 160 "goal_expr_to_goal.m"
                                            {
#line 160 "goal_expr_to_goal.m"
                                              MR_Word hlds__make_hlds__goal_expr_to_goal__Purity_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 160 "goal_expr_to_goal.m"
                                              MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_591;
#line 160 "goal_expr_to_goal.m"
                                              MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_592;
#line 160 "goal_expr_to_goal.m"
                                              MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_593;
#line 160 "goal_expr_to_goal.m"
                                              MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_594;
#line 160 "goal_expr_to_goal.m"
                                              MR_Word hlds__make_hlds__goal_expr_to_goal__SubExpr0_595 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));

#line 161 "goal_expr_to_goal.m"
                                              {
#line 161 "goal_expr_to_goal.m"
                                                hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__SubExpr0_595, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__SubGoal_593, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                              }
#line 164 "goal_expr_to_goal.m"
                                              {
#line 164 "goal_expr_to_goal.m"
                                                hlds__make_hlds__goal_expr_to_goal__Reason_594 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 164 "goal_expr_to_goal.m"
                                                MR_hl_field(MR_mktag(2), hlds__make_hlds__goal_expr_to_goal__Reason_594, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Purity_45));
#line 164 "goal_expr_to_goal.m"
                                              }
#line 165 "goal_expr_to_goal.m"
                                              {
#line 165 "goal_expr_to_goal.m"
                                                hlds__make_hlds__goal_expr_to_goal__GoalExpr_591 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 165 "goal_expr_to_goal.m"
                                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_591, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 165 "goal_expr_to_goal.m"
                                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_591, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_594));
#line 165 "goal_expr_to_goal.m"
                                                MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_591, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal_593));
#line 165 "goal_expr_to_goal.m"
                                              }
#line 166 "goal_expr_to_goal.m"
                                              {
#line 166 "goal_expr_to_goal.m"
                                                hlds__hlds_goal__goal_info_init_1_p_0(&hlds__make_hlds__goal_expr_to_goal__GoalInfo_592);
                                              }
#line 167 "goal_expr_to_goal.m"
                                              {
#line 167 "goal_expr_to_goal.m"
                                                MR_Word base;
#line 167 "goal_expr_to_goal.m"
                                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 167 "goal_expr_to_goal.m"
                                                *hlds__make_hlds__goal_expr_to_goal__Goal_22 = base;
#line 167 "goal_expr_to_goal.m"
                                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_591));
#line 167 "goal_expr_to_goal.m"
                                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_592));
#line 167 "goal_expr_to_goal.m"
                                              }
#line 160 "goal_expr_to_goal.m"
                                            }
#line 116 "goal_expr_to_goal.m"
                                          else
#line 116 "goal_expr_to_goal.m"
                                            if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 207 "goal_expr_to_goal.m"
                                              {
#line 207 "goal_expr_to_goal.m"
                                                MR_Word hlds__make_hlds__goal_expr_to_goal__Var0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 207 "goal_expr_to_goal.m"
                                                MR_Word hlds__make_hlds__goal_expr_to_goal__Var_50;
#line 207 "goal_expr_to_goal.m"
                                                MR_Word hlds__make_hlds__goal_expr_to_goal__V_512_512;
#line 207 "goal_expr_to_goal.m"
                                                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_626;
#line 207 "goal_expr_to_goal.m"
                                                MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_627;
#line 207 "goal_expr_to_goal.m"
                                                MR_Word hlds__make_hlds__goal_expr_to_goal__SubExpr_628 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));
#line 207 "goal_expr_to_goal.m"
                                                MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_629;

#line 208 "goal_expr_to_goal.m"
                                                {
#line 208 "goal_expr_to_goal.m"
                                                  parse_tree__prog_data__rename_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__Var0_49, &hlds__make_hlds__goal_expr_to_goal__Var_50);
                                                }
#line 209 "goal_expr_to_goal.m"
                                                {
#line 209 "goal_expr_to_goal.m"
                                                  hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__SubExpr_628, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__SubGoal_629, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                                }
#line 212 "goal_expr_to_goal.m"
                                                {
#line 212 "goal_expr_to_goal.m"
                                                  hlds__make_hlds__goal_expr_to_goal__V_512_512 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "goal_expr_to_goal.m"
                                                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_512_512, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 212 "goal_expr_to_goal.m"
                                                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_512_512, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Var_50));
#line 212 "goal_expr_to_goal.m"
                                                }
#line 212 "goal_expr_to_goal.m"
                                                {
#line 212 "goal_expr_to_goal.m"
                                                  hlds__make_hlds__goal_expr_to_goal__GoalExpr_626 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 212 "goal_expr_to_goal.m"
                                                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_626, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 212 "goal_expr_to_goal.m"
                                                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_626, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_512_512));
#line 212 "goal_expr_to_goal.m"
                                                  MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_626, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal_629));
#line 212 "goal_expr_to_goal.m"
                                                }
#line 213 "goal_expr_to_goal.m"
                                                {
#line 213 "goal_expr_to_goal.m"
                                                  hlds__hlds_goal__goal_info_init_1_p_0(&hlds__make_hlds__goal_expr_to_goal__GoalInfo_627);
                                                }
#line 214 "goal_expr_to_goal.m"
                                                {
#line 214 "goal_expr_to_goal.m"
                                                  MR_Word base;
#line 214 "goal_expr_to_goal.m"
                                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 214 "goal_expr_to_goal.m"
                                                  *hlds__make_hlds__goal_expr_to_goal__Goal_22 = base;
#line 214 "goal_expr_to_goal.m"
                                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_626));
#line 214 "goal_expr_to_goal.m"
                                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_627));
#line 214 "goal_expr_to_goal.m"
                                                }
#line 207 "goal_expr_to_goal.m"
                                              }
#line 116 "goal_expr_to_goal.m"
                                            else
#line 116 "goal_expr_to_goal.m"
                                              if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 199 "goal_expr_to_goal.m"
                                                {
#line 199 "goal_expr_to_goal.m"
                                                  MR_Word hlds__make_hlds__goal_expr_to_goal__Detism_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 199 "goal_expr_to_goal.m"
                                                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_519_519;
#line 199 "goal_expr_to_goal.m"
                                                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_622;
#line 199 "goal_expr_to_goal.m"
                                                  MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_623;
#line 199 "goal_expr_to_goal.m"
                                                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubExpr_624 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));
#line 199 "goal_expr_to_goal.m"
                                                  MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_625;

#line 200 "goal_expr_to_goal.m"
                                                  {
#line 200 "goal_expr_to_goal.m"
                                                    hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__SubExpr_624, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__SubGoal_625, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                                  }
#line 203 "goal_expr_to_goal.m"
                                                  {
#line 203 "goal_expr_to_goal.m"
                                                    hlds__make_hlds__goal_expr_to_goal__V_519_519 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 203 "goal_expr_to_goal.m"
                                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_519_519, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 203 "goal_expr_to_goal.m"
                                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__V_519_519, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Detism_48));
#line 203 "goal_expr_to_goal.m"
                                                  }
#line 203 "goal_expr_to_goal.m"
                                                  {
#line 203 "goal_expr_to_goal.m"
                                                    hlds__make_hlds__goal_expr_to_goal__GoalExpr_622 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 203 "goal_expr_to_goal.m"
                                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_622, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 203 "goal_expr_to_goal.m"
                                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_622, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_519_519));
#line 203 "goal_expr_to_goal.m"
                                                    MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_622, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal_625));
#line 203 "goal_expr_to_goal.m"
                                                  }
#line 204 "goal_expr_to_goal.m"
                                                  {
#line 204 "goal_expr_to_goal.m"
                                                    hlds__hlds_goal__goal_info_init_1_p_0(&hlds__make_hlds__goal_expr_to_goal__GoalInfo_623);
                                                  }
#line 205 "goal_expr_to_goal.m"
                                                  {
#line 205 "goal_expr_to_goal.m"
                                                    MR_Word base;
#line 205 "goal_expr_to_goal.m"
                                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 205 "goal_expr_to_goal.m"
                                                    *hlds__make_hlds__goal_expr_to_goal__Goal_22 = base;
#line 205 "goal_expr_to_goal.m"
                                                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_622));
#line 205 "goal_expr_to_goal.m"
                                                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_623));
#line 205 "goal_expr_to_goal.m"
                                                  }
#line 199 "goal_expr_to_goal.m"
                                                }
#line 116 "goal_expr_to_goal.m"
                                              else
#line 116 "goal_expr_to_goal.m"
                                                if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 134 "goal_expr_to_goal.m"
                                                  {
#line 134 "goal_expr_to_goal.m"
                                                    MR_Word hlds__make_hlds__goal_expr_to_goal__SubExpr_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));
#line 134 "goal_expr_to_goal.m"
                                                    MR_Word hlds__make_hlds__goal_expr_to_goal__Vars_36;
#line 134 "goal_expr_to_goal.m"
                                                    MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_37;
#line 134 "goal_expr_to_goal.m"
                                                    MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_38;
#line 134 "goal_expr_to_goal.m"
                                                    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_583;
#line 134 "goal_expr_to_goal.m"
                                                    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_584;
#line 134 "goal_expr_to_goal.m"
                                                    MR_Word hlds__make_hlds__goal_expr_to_goal__Vars0_585 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));

#line 135 "goal_expr_to_goal.m"
                                                    {
#line 135 "goal_expr_to_goal.m"
                                                      parse_tree__prog_data__rename_var_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__Vars0_585, &hlds__make_hlds__goal_expr_to_goal__Vars_36);
                                                    }
#line 136 "goal_expr_to_goal.m"
                                                    {
#line 136 "goal_expr_to_goal.m"
                                                      hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__SubExpr_35, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__SubGoal_37, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                                    }
#line 139 "goal_expr_to_goal.m"
                                                    {
#line 139 "goal_expr_to_goal.m"
                                                      hlds__make_hlds__goal_expr_to_goal__Reason_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 139 "goal_expr_to_goal.m"
                                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Reason_38, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Vars_36));
#line 139 "goal_expr_to_goal.m"
                                                    }
#line 140 "goal_expr_to_goal.m"
                                                    {
#line 140 "goal_expr_to_goal.m"
                                                      hlds__make_hlds__goal_expr_to_goal__GoalExpr_583 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 140 "goal_expr_to_goal.m"
                                                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_583, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 140 "goal_expr_to_goal.m"
                                                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_583, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_38));
#line 140 "goal_expr_to_goal.m"
                                                      MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_583, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal_37));
#line 140 "goal_expr_to_goal.m"
                                                    }
#line 141 "goal_expr_to_goal.m"
                                                    {
#line 141 "goal_expr_to_goal.m"
                                                      hlds__hlds_goal__goal_info_init_1_p_0(&hlds__make_hlds__goal_expr_to_goal__GoalInfo_584);
                                                    }
#line 142 "goal_expr_to_goal.m"
                                                    {
#line 142 "goal_expr_to_goal.m"
                                                      MR_Word base;
#line 142 "goal_expr_to_goal.m"
                                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 142 "goal_expr_to_goal.m"
                                                      *hlds__make_hlds__goal_expr_to_goal__Goal_22 = base;
#line 142 "goal_expr_to_goal.m"
                                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_583));
#line 142 "goal_expr_to_goal.m"
                                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_584));
#line 142 "goal_expr_to_goal.m"
                                                    }
#line 134 "goal_expr_to_goal.m"
                                                  }
#line 116 "goal_expr_to_goal.m"
                                                else
#line 116 "goal_expr_to_goal.m"
                                                  if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 144 "goal_expr_to_goal.m"
                                                    {
#line 144 "goal_expr_to_goal.m"
                                                      MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 144 "goal_expr_to_goal.m"
                                                      MR_Word hlds__make_hlds__goal_expr_to_goal__SubExpr0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));
#line 144 "goal_expr_to_goal.m"
                                                      MR_Word hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_42;
#line 144 "goal_expr_to_goal.m"
                                                      MR_Word hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_43;
#line 144 "goal_expr_to_goal.m"
                                                      MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_550_550;
#line 144 "goal_expr_to_goal.m"
                                                      MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_586;
#line 144 "goal_expr_to_goal.m"
                                                      MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_587;
#line 144 "goal_expr_to_goal.m"
                                                      MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_588;
#line 144 "goal_expr_to_goal.m"
                                                      MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_589;

#line 146 "goal_expr_to_goal.m"
                                                      {
#line 146 "goal_expr_to_goal.m"
                                                        parse_tree__prog_data__rename_var_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__StateVars0_39, &hlds__make_hlds__goal_expr_to_goal__StateVars_588);
                                                      }
#line 147 "goal_expr_to_goal.m"
                                                      {
#line 147 "goal_expr_to_goal.m"
                                                        hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__StateVars_588, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, &hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_42, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_550_550);
                                                      }
#line 149 "goal_expr_to_goal.m"
                                                      {
#line 149 "goal_expr_to_goal.m"
                                                        hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__SubExpr0_40, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__SubGoal_589, hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_42, &hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_43, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_550_550, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                                      }
#line 152 "goal_expr_to_goal.m"
                                                      {
#line 152 "goal_expr_to_goal.m"
                                                        hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(hlds__make_hlds__goal_expr_to_goal__StateVars_588, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_43, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198);
                                                      }
#line 156 "goal_expr_to_goal.m"
                                                      {
#line 156 "goal_expr_to_goal.m"
                                                        hlds__make_hlds__goal_expr_to_goal__GoalExpr_586 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 156 "goal_expr_to_goal.m"
                                                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_586, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 156 "goal_expr_to_goal.m"
                                                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_586, 1) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_3[3]));
#line 156 "goal_expr_to_goal.m"
                                                        MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_586, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal_589));
#line 156 "goal_expr_to_goal.m"
                                                      }
#line 157 "goal_expr_to_goal.m"
                                                      {
#line 157 "goal_expr_to_goal.m"
                                                        hlds__hlds_goal__goal_info_init_1_p_0(&hlds__make_hlds__goal_expr_to_goal__GoalInfo_587);
                                                      }
#line 158 "goal_expr_to_goal.m"
                                                      {
#line 158 "goal_expr_to_goal.m"
                                                        MR_Word base;
#line 158 "goal_expr_to_goal.m"
                                                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 158 "goal_expr_to_goal.m"
                                                        *hlds__make_hlds__goal_expr_to_goal__Goal_22 = base;
#line 158 "goal_expr_to_goal.m"
                                                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_586));
#line 158 "goal_expr_to_goal.m"
                                                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_587));
#line 158 "goal_expr_to_goal.m"
                                                      }
#line 144 "goal_expr_to_goal.m"
                                                    }
#line 116 "goal_expr_to_goal.m"
                                                  else
#line 116 "goal_expr_to_goal.m"
                                                    if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 309 "goal_expr_to_goal.m"
                                                      {
#line 309 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__TypeInfo_750_750;
#line 309 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCompileTime_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 309 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeRunTime_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));
#line 309 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeIO_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 3)));
#line 309 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__Mutables_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 4)));
#line 309 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__MutableHLDSs_99;
#line 309 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__MutableStateVars_100;
#line 309 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__MutableGetExprs_101;
#line 309 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__MutableSetExprs_102;
#line 309 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_105;
#line 309 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__GetExprs_108;
#line 309 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__SetExprs_109;
#line 309 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__SubExpr1_110;
#line 309 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__V_445_445;
#line 309 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__V_446_446;
#line 309 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__V_447_447;
#line 309 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__V_448_448;
#line 309 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_451_451;
#line 309 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_636;
#line 309 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_637;
#line 309 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars_638;
#line 309 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__SubGoal_639;
#line 309 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__Reason_640;
#line 309 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__StateVars0_641;
#line 309 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__SubExpr0_642 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 5)));
#line 309 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_643;
#line 309 "goal_expr_to_goal.m"
                                                        MR_Word hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_644;

#line 310 "goal_expr_to_goal.m"
                                                        {
#line 310 "goal_expr_to_goal.m"
                                                          hlds__make_hlds__goal_expr_to_goal__V_445_445 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 310 "goal_expr_to_goal.m"
                                                          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_445_445, 0) = ((MR_Box) (&hlds__make_hlds__goal_expr_to_goal_scalar_common_4[0]));
#line 310 "goal_expr_to_goal.m"
                                                          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_445_445, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_p_0_1));
#line 310 "goal_expr_to_goal.m"
                                                          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_445_445, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 310 "goal_expr_to_goal.m"
                                                          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_445_445, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_20));
#line 310 "goal_expr_to_goal.m"
                                                          MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_445_445, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201));
#line 310 "goal_expr_to_goal.m"
                                                        }
#line 8784 "hlds.make_hlds.goal_expr_to_goal.c"
                                                        hlds__make_hlds__goal_expr_to_goal__TypeInfo_750_750 = (MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_2[0];
#line 310 "goal_expr_to_goal.m"
                                                        {
#line 310 "goal_expr_to_goal.m"
                                                          mercury__list__map4_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_trace_mutable_var_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_trace_mutable_var_hlds_0, (MR_Word) &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[0], hlds__make_hlds__goal_expr_to_goal__TypeInfo_750_750, hlds__make_hlds__goal_expr_to_goal__TypeInfo_750_750, hlds__make_hlds__goal_expr_to_goal__V_445_445, hlds__make_hlds__goal_expr_to_goal__Mutables_98, &hlds__make_hlds__goal_expr_to_goal__MutableHLDSs_99, &hlds__make_hlds__goal_expr_to_goal__MutableStateVars_100, &hlds__make_hlds__goal_expr_to_goal__MutableGetExprs_101, &hlds__make_hlds__goal_expr_to_goal__MutableSetExprs_102);
                                                        }
#line 320 "goal_expr_to_goal.m"
                                                        if ((hlds__make_hlds__goal_expr_to_goal__MaybeIO_97 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 321 "goal_expr_to_goal.m"
                                                          {
#line 322 "goal_expr_to_goal.m"
                                                            hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_105 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 323 "goal_expr_to_goal.m"
                                                            hlds__make_hlds__goal_expr_to_goal__StateVars0_641 = hlds__make_hlds__goal_expr_to_goal__MutableStateVars_100;
#line 324 "goal_expr_to_goal.m"
                                                            hlds__make_hlds__goal_expr_to_goal__GetExprs_108 = hlds__make_hlds__goal_expr_to_goal__MutableGetExprs_101;
#line 325 "goal_expr_to_goal.m"
                                                            hlds__make_hlds__goal_expr_to_goal__SetExprs_109 = hlds__make_hlds__goal_expr_to_goal__MutableSetExprs_102;
#line 321 "goal_expr_to_goal.m"
                                                          }
#line 320 "goal_expr_to_goal.m"
                                                        else
#line 313 "goal_expr_to_goal.m"
                                                          {
#line 313 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeIO_97, (MR_Integer) 0)));
#line 313 "goal_expr_to_goal.m"
                                                            MR_String hlds__make_hlds__goal_expr_to_goal__IOStateVarName_104;
#line 313 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__IOGetExpr_106;
#line 313 "goal_expr_to_goal.m"
                                                            MR_Word hlds__make_hlds__goal_expr_to_goal__IOSetExpr_107;

#line 314 "goal_expr_to_goal.m"
                                                            {
#line 314 "goal_expr_to_goal.m"
                                                              mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__IOStateVar_103, &hlds__make_hlds__goal_expr_to_goal__IOStateVarName_104);
                                                            }
#line 315 "goal_expr_to_goal.m"
                                                            {
#line 315 "goal_expr_to_goal.m"
                                                              hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 315 "goal_expr_to_goal.m"
                                                              MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_105, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVarName_104));
#line 315 "goal_expr_to_goal.m"
                                                            }
#line 316 "goal_expr_to_goal.m"
                                                            {
#line 316 "goal_expr_to_goal.m"
                                                              hlds__make_hlds__goal_expr_to_goal__extract_trace_io_var_4_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__IOStateVar_103, &hlds__make_hlds__goal_expr_to_goal__IOGetExpr_106, &hlds__make_hlds__goal_expr_to_goal__IOSetExpr_107);
                                                            }
#line 317 "goal_expr_to_goal.m"
                                                            {
#line 317 "goal_expr_to_goal.m"
                                                              hlds__make_hlds__goal_expr_to_goal__StateVars0_641 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "goal_expr_to_goal.m"
                                                              MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__StateVars0_641, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOStateVar_103));
#line 317 "goal_expr_to_goal.m"
                                                              MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__StateVars0_641, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MutableStateVars_100));
#line 317 "goal_expr_to_goal.m"
                                                            }
#line 318 "goal_expr_to_goal.m"
                                                            {
#line 318 "goal_expr_to_goal.m"
                                                              hlds__make_hlds__goal_expr_to_goal__GetExprs_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "goal_expr_to_goal.m"
                                                              MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__GetExprs_108, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOGetExpr_106));
#line 318 "goal_expr_to_goal.m"
                                                              MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__GetExprs_108, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MutableGetExprs_101));
#line 318 "goal_expr_to_goal.m"
                                                            }
#line 319 "goal_expr_to_goal.m"
                                                            {
#line 319 "goal_expr_to_goal.m"
                                                              hlds__make_hlds__goal_expr_to_goal__SetExprs_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 319 "goal_expr_to_goal.m"
                                                              MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SetExprs_109, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__IOSetExpr_107));
#line 319 "goal_expr_to_goal.m"
                                                              MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__SetExprs_109, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MutableSetExprs_102));
#line 319 "goal_expr_to_goal.m"
                                                            }
#line 313 "goal_expr_to_goal.m"
                                                          }
#line 328 "goal_expr_to_goal.m"
                                                        {
#line 328 "goal_expr_to_goal.m"
                                                          hlds__make_hlds__goal_expr_to_goal__V_448_448 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 328 "goal_expr_to_goal.m"
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_448_448, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubExpr0_642));
#line 328 "goal_expr_to_goal.m"
                                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_448_448, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 328 "goal_expr_to_goal.m"
                                                        }
#line 328 "goal_expr_to_goal.m"
                                                        {
#line 328 "goal_expr_to_goal.m"
                                                          hlds__make_hlds__goal_expr_to_goal__V_447_447 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeInfo_750_750, hlds__make_hlds__goal_expr_to_goal__V_448_448, hlds__make_hlds__goal_expr_to_goal__SetExprs_109);
                                                        }
#line 328 "goal_expr_to_goal.m"
                                                        {
#line 328 "goal_expr_to_goal.m"
                                                          hlds__make_hlds__goal_expr_to_goal__V_446_446 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__goal_expr_to_goal__TypeInfo_750_750, hlds__make_hlds__goal_expr_to_goal__GetExprs_108, hlds__make_hlds__goal_expr_to_goal__V_447_447);
                                                        }
#line 327 "goal_expr_to_goal.m"
                                                        {
#line 327 "goal_expr_to_goal.m"
                                                          hlds__make_hlds__goal_expr_to_goal__SubExpr1_110 = parse_tree__prog_util__goal_list_to_conj_2_f_0(hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__V_446_446);
                                                        }
#line 330 "goal_expr_to_goal.m"
                                                        {
#line 330 "goal_expr_to_goal.m"
                                                          parse_tree__prog_data__rename_var_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__StateVars0_641, &hlds__make_hlds__goal_expr_to_goal__StateVars_638);
                                                        }
#line 331 "goal_expr_to_goal.m"
                                                        {
#line 331 "goal_expr_to_goal.m"
                                                          hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_7_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__StateVars_638, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, &hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_643, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_451_451);
                                                        }
#line 333 "goal_expr_to_goal.m"
                                                        {
#line 333 "goal_expr_to_goal.m"
                                                          hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__SubExpr1_110, hlds__make_hlds__goal_expr_to_goal__Renaming_21, &hlds__make_hlds__goal_expr_to_goal__SubGoal_639, hlds__make_hlds__goal_expr_to_goal__BeforeInsideSVarState_643, &hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_644, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_451_451, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                                        }
#line 336 "goal_expr_to_goal.m"
                                                        {
#line 336 "goal_expr_to_goal.m"
                                                          hlds__make_hlds__state_var__svar_finish_local_state_vars_4_p_0(hlds__make_hlds__goal_expr_to_goal__StateVars_638, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, hlds__make_hlds__goal_expr_to_goal__AfterInsideSVarState_644, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198);
                                                        }
#line 340 "goal_expr_to_goal.m"
                                                        {
#line 340 "goal_expr_to_goal.m"
                                                          hlds__make_hlds__goal_expr_to_goal__Reason_640 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 340 "goal_expr_to_goal.m"
                                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_640, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 340 "goal_expr_to_goal.m"
                                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_640, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MaybeCompileTime_95));
#line 340 "goal_expr_to_goal.m"
                                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_640, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MaybeRunTime_96));
#line 340 "goal_expr_to_goal.m"
                                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_640, 3) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MaybeIOHLDS_105));
#line 340 "goal_expr_to_goal.m"
                                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_640, 4) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__MutableHLDSs_99));
#line 340 "goal_expr_to_goal.m"
                                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Reason_640, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 340 "goal_expr_to_goal.m"
                                                        }
#line 342 "goal_expr_to_goal.m"
                                                        {
#line 342 "goal_expr_to_goal.m"
                                                          hlds__make_hlds__goal_expr_to_goal__GoalExpr_636 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 342 "goal_expr_to_goal.m"
                                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_636, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 342 "goal_expr_to_goal.m"
                                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_636, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Reason_640));
#line 342 "goal_expr_to_goal.m"
                                                          MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__GoalExpr_636, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__SubGoal_639));
#line 342 "goal_expr_to_goal.m"
                                                        }
#line 343 "goal_expr_to_goal.m"
                                                        {
#line 343 "goal_expr_to_goal.m"
                                                          hlds__hlds_goal__goal_info_init_1_p_0(&hlds__make_hlds__goal_expr_to_goal__GoalInfo_637);
                                                        }
#line 344 "goal_expr_to_goal.m"
                                                        {
#line 344 "goal_expr_to_goal.m"
                                                          MR_Word base;
#line 344 "goal_expr_to_goal.m"
                                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 344 "goal_expr_to_goal.m"
                                                          *hlds__make_hlds__goal_expr_to_goal__Goal_22 = base;
#line 344 "goal_expr_to_goal.m"
                                                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_636));
#line 344 "goal_expr_to_goal.m"
                                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_637));
#line 344 "goal_expr_to_goal.m"
                                                        }
#line 309 "goal_expr_to_goal.m"
                                                      }
#line 116 "goal_expr_to_goal.m"
                                                    else
#line 116 "goal_expr_to_goal.m"
                                                      if (((((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__Expr_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 347 "goal_expr_to_goal.m"
                                                        {
#line 347 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeIO0_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 347 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__Then0_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 3)));
#line 347 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeElse0_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 4)));
#line 347 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__Catches0_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 5)));
#line 347 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 6)));
#line 347 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__SubExpr0_649 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));

#line 367 "goal_expr_to_goal.m"
                                                          if ((hlds__make_hlds__goal_expr_to_goal__MaybeIO0_113 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 368 "goal_expr_to_goal.m"
                                                            {
#line 368 "goal_expr_to_goal.m"
                                                              hlds__make_hlds__goal_expr_to_goal__transform_try_expr_without_io_21_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__SubExpr0_649, hlds__make_hlds__goal_expr_to_goal__Then0_114, hlds__make_hlds__goal_expr_to_goal__MaybeElse0_115, hlds__make_hlds__goal_expr_to_goal__Catches0_116, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_117, hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__Goal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
#line 368 "goal_expr_to_goal.m"
                                                              return;
                                                            }
#line 367 "goal_expr_to_goal.m"
                                                          else
#line 349 "goal_expr_to_goal.m"
                                                            {
#line 349 "goal_expr_to_goal.m"
                                                              MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar0_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__MaybeIO0_113, (MR_Integer) 0)));

#line 357 "goal_expr_to_goal.m"
                                                              if ((hlds__make_hlds__goal_expr_to_goal__MaybeElse0_115 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 351 "goal_expr_to_goal.m"
                                                                {
#line 351 "goal_expr_to_goal.m"
                                                                  MR_Word hlds__make_hlds__goal_expr_to_goal__IOStateVar_645;

#line 352 "goal_expr_to_goal.m"
                                                                  {
#line 352 "goal_expr_to_goal.m"
                                                                    parse_tree__prog_data__rename_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__IOStateVar0_118, &hlds__make_hlds__goal_expr_to_goal__IOStateVar_645);
                                                                  }
#line 353 "goal_expr_to_goal.m"
                                                                  {
#line 353 "goal_expr_to_goal.m"
                                                                    hlds__make_hlds__goal_expr_to_goal__transform_try_expr_with_io_22_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__IOStateVar0_118, hlds__make_hlds__goal_expr_to_goal__IOStateVar_645, hlds__make_hlds__goal_expr_to_goal__SubExpr0_649, hlds__make_hlds__goal_expr_to_goal__Then0_114, hlds__make_hlds__goal_expr_to_goal__Catches0_116, hlds__make_hlds__goal_expr_to_goal__MaybeCatchAny0_117, hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__Goal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
#line 353 "goal_expr_to_goal.m"
                                                                    return;
                                                                  }
#line 351 "goal_expr_to_goal.m"
                                                                }
#line 357 "goal_expr_to_goal.m"
                                                              else
#line 358 "goal_expr_to_goal.m"
                                                                {
#line 358 "goal_expr_to_goal.m"
                                                                  MR_Word hlds__make_hlds__goal_expr_to_goal__Msg_121;
#line 358 "goal_expr_to_goal.m"
                                                                  MR_Word hlds__make_hlds__goal_expr_to_goal__Spec_122;
#line 358 "goal_expr_to_goal.m"
                                                                  MR_Word hlds__make_hlds__goal_expr_to_goal__V_435_435;

#line 361 "goal_expr_to_goal.m"
                                                                  {
#line 361 "goal_expr_to_goal.m"
                                                                    hlds__make_hlds__goal_expr_to_goal__Msg_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 361 "goal_expr_to_goal.m"
                                                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Msg_121, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Context_20));
#line 361 "goal_expr_to_goal.m"
                                                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Msg_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__goal_expr_to_goal_scalar_common_1[20])));
#line 361 "goal_expr_to_goal.m"
                                                                  }
#line 362 "goal_expr_to_goal.m"
                                                                  {
#line 362 "goal_expr_to_goal.m"
                                                                    hlds__make_hlds__goal_expr_to_goal__V_435_435 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 362 "goal_expr_to_goal.m"
                                                                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_435_435, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Msg_121));
#line 362 "goal_expr_to_goal.m"
                                                                    MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_435_435, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 362 "goal_expr_to_goal.m"
                                                                  }
#line 362 "goal_expr_to_goal.m"
                                                                  {
#line 362 "goal_expr_to_goal.m"
                                                                    hlds__make_hlds__goal_expr_to_goal__Spec_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 362 "goal_expr_to_goal.m"
                                                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 362 "goal_expr_to_goal.m"
                                                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 362 "goal_expr_to_goal.m"
                                                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Spec_122, 2) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__V_435_435));
#line 362 "goal_expr_to_goal.m"
                                                                  }
#line 364 "goal_expr_to_goal.m"
                                                                  {
#line 364 "goal_expr_to_goal.m"
                                                                    MR_Word base;
#line 364 "goal_expr_to_goal.m"
                                                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 364 "goal_expr_to_goal.m"
                                                                    *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208 = base;
#line 364 "goal_expr_to_goal.m"
                                                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__Spec_122));
#line 364 "goal_expr_to_goal.m"
                                                                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207));
#line 364 "goal_expr_to_goal.m"
                                                                  }
#line 365 "goal_expr_to_goal.m"
                                                                  {
#line 365 "goal_expr_to_goal.m"
                                                                    *hlds__make_hlds__goal_expr_to_goal__Goal_22 = hlds__hlds_goal__true_goal_0_f_0();
                                                                  }
#line 365 "goal_expr_to_goal.m"
                                                                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197;
#line 365 "goal_expr_to_goal.m"
                                                                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199;
#line 365 "goal_expr_to_goal.m"
                                                                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201;
#line 365 "goal_expr_to_goal.m"
                                                                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203;
#line 365 "goal_expr_to_goal.m"
                                                                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205;
#line 358 "goal_expr_to_goal.m"
                                                                }
#line 349 "goal_expr_to_goal.m"
                                                            }
#line 347 "goal_expr_to_goal.m"
                                                        }
#line 116 "goal_expr_to_goal.m"
                                                      else
#line 578 "goal_expr_to_goal.m"
                                                        {
#line 578 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_763_763 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 578 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__A_187;
#line 578 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__B_188;
#line 578 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__Purity_731 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 3)));
#line 578 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__A0_732 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 1)));
#line 578 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__B0_733 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__goal_expr_to_goal__Expr_19, (MR_Integer) 2)));
#line 591 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__StateVarA_189;
#line 583 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__V_211_211;
#line 583 "goal_expr_to_goal.m"
                                                          MR_String hlds__make_hlds__goal_expr_to_goal__V_212_212;
#line 583 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__V_213_213;
#line 583 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__V_214_214;
#line 583 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__V_215_215;
#line 583 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__V_191_191;
#line 583 "goal_expr_to_goal.m"
                                                          MR_Word hlds__make_hlds__goal_expr_to_goal__V_190_190;

#line 579 "goal_expr_to_goal.m"
                                                          {
#line 579 "goal_expr_to_goal.m"
                                                            parse_tree__prog_data__rename_vars_in_term_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_763_763, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__A0_732, &hlds__make_hlds__goal_expr_to_goal__A_187);
                                                          }
#line 580 "goal_expr_to_goal.m"
                                                          {
#line 580 "goal_expr_to_goal.m"
                                                            parse_tree__prog_data__rename_vars_in_term_4_p_0(hlds__make_hlds__goal_expr_to_goal__TypeCtorInfo_763_763, (MR_Integer) 1, hlds__make_hlds__goal_expr_to_goal__Renaming_21, hlds__make_hlds__goal_expr_to_goal__B0_733, &hlds__make_hlds__goal_expr_to_goal__B_188);
                                                          }
#line 583 "goal_expr_to_goal.m"
                                                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__A_187)) == (MR_mktag((MR_Integer) 0)));
#line 583 "goal_expr_to_goal.m"
                                                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 583 "goal_expr_to_goal.m"
                                                            {
#line 583 "goal_expr_to_goal.m"
                                                              hlds__make_hlds__goal_expr_to_goal__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__A_187, (MR_Integer) 0)));
#line 583 "goal_expr_to_goal.m"
                                                              hlds__make_hlds__goal_expr_to_goal__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__A_187, (MR_Integer) 1)));
#line 583 "goal_expr_to_goal.m"
                                                              hlds__make_hlds__goal_expr_to_goal__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__A_187, (MR_Integer) 2)));
#line 583 "goal_expr_to_goal.m"
                                                              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_211_211)) == (MR_mktag((MR_Integer) 0)));
#line 583 "goal_expr_to_goal.m"
                                                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 583 "goal_expr_to_goal.m"
                                                                {
#line 583 "goal_expr_to_goal.m"
                                                                  hlds__make_hlds__goal_expr_to_goal__V_212_212 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_211_211, (MR_Integer) 0)));
#line 583 "goal_expr_to_goal.m"
                                                                  hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_212_212, (MR_String) "!") == 0);
#line 583 "goal_expr_to_goal.m"
                                                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 583 "goal_expr_to_goal.m"
                                                                    {
#line 583 "goal_expr_to_goal.m"
                                                                      hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_213_213)) == (MR_mktag((MR_Integer) 1)));
#line 583 "goal_expr_to_goal.m"
                                                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 583 "goal_expr_to_goal.m"
                                                                        {
#line 583 "goal_expr_to_goal.m"
                                                                          hlds__make_hlds__goal_expr_to_goal__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_213_213, (MR_Integer) 0)));
#line 583 "goal_expr_to_goal.m"
                                                                          hlds__make_hlds__goal_expr_to_goal__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_213_213, (MR_Integer) 1)));
#line 583 "goal_expr_to_goal.m"
                                                                          hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_215_215 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 583 "goal_expr_to_goal.m"
                                                                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 583 "goal_expr_to_goal.m"
                                                                            {
#line 583 "goal_expr_to_goal.m"
                                                                              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_214_214)) == (MR_mktag((MR_Integer) 1)));
#line 583 "goal_expr_to_goal.m"
                                                                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 583 "goal_expr_to_goal.m"
                                                                                {
#line 583 "goal_expr_to_goal.m"
                                                                                  hlds__make_hlds__goal_expr_to_goal__StateVarA_189 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_214_214, (MR_Integer) 0)));
#line 583 "goal_expr_to_goal.m"
                                                                                  hlds__make_hlds__goal_expr_to_goal__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_214_214, (MR_Integer) 1)));
#line 583 "goal_expr_to_goal.m"
                                                                                }
#line 583 "goal_expr_to_goal.m"
                                                                            }
#line 583 "goal_expr_to_goal.m"
                                                                        }
#line 583 "goal_expr_to_goal.m"
                                                                    }
#line 583 "goal_expr_to_goal.m"
                                                                }
#line 583 "goal_expr_to_goal.m"
                                                            }
#line 591 "goal_expr_to_goal.m"
                                                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 584 "goal_expr_to_goal.m"
                                                            {
#line 584 "goal_expr_to_goal.m"
                                                              MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216_216;
#line 587 "goal_expr_to_goal.m"
                                                              MR_Word hlds__make_hlds__goal_expr_to_goal__StateVarB_192;
#line 585 "goal_expr_to_goal.m"
                                                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_217_217;
#line 585 "goal_expr_to_goal.m"
                                                              MR_String hlds__make_hlds__goal_expr_to_goal__V_218_218;
#line 585 "goal_expr_to_goal.m"
                                                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_219_219;
#line 585 "goal_expr_to_goal.m"
                                                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_220_220;
#line 585 "goal_expr_to_goal.m"
                                                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_221_221;
#line 585 "goal_expr_to_goal.m"
                                                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_194_194;
#line 585 "goal_expr_to_goal.m"
                                                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_193_193;

#line 584 "goal_expr_to_goal.m"
                                                              {
#line 584 "goal_expr_to_goal.m"
                                                                hlds__make_hlds__goal_expr_to_goal__report_svar_unify_error_5_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__StateVarA_189, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216_216);
                                                              }
#line 585 "goal_expr_to_goal.m"
                                                              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__B_188)) == (MR_mktag((MR_Integer) 0)));
#line 585 "goal_expr_to_goal.m"
                                                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 585 "goal_expr_to_goal.m"
                                                                {
#line 585 "goal_expr_to_goal.m"
                                                                  hlds__make_hlds__goal_expr_to_goal__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__B_188, (MR_Integer) 0)));
#line 585 "goal_expr_to_goal.m"
                                                                  hlds__make_hlds__goal_expr_to_goal__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__B_188, (MR_Integer) 1)));
#line 585 "goal_expr_to_goal.m"
                                                                  hlds__make_hlds__goal_expr_to_goal__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__B_188, (MR_Integer) 2)));
#line 585 "goal_expr_to_goal.m"
                                                                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_217_217)) == (MR_mktag((MR_Integer) 0)));
#line 585 "goal_expr_to_goal.m"
                                                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 585 "goal_expr_to_goal.m"
                                                                    {
#line 585 "goal_expr_to_goal.m"
                                                                      hlds__make_hlds__goal_expr_to_goal__V_218_218 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_217_217, (MR_Integer) 0)));
#line 585 "goal_expr_to_goal.m"
                                                                      hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_218_218, (MR_String) "!") == 0);
#line 585 "goal_expr_to_goal.m"
                                                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 585 "goal_expr_to_goal.m"
                                                                        {
#line 585 "goal_expr_to_goal.m"
                                                                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_219_219)) == (MR_mktag((MR_Integer) 1)));
#line 585 "goal_expr_to_goal.m"
                                                                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 585 "goal_expr_to_goal.m"
                                                                            {
#line 585 "goal_expr_to_goal.m"
                                                                              hlds__make_hlds__goal_expr_to_goal__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_219_219, (MR_Integer) 0)));
#line 585 "goal_expr_to_goal.m"
                                                                              hlds__make_hlds__goal_expr_to_goal__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_219_219, (MR_Integer) 1)));
#line 585 "goal_expr_to_goal.m"
                                                                              hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_221_221 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 585 "goal_expr_to_goal.m"
                                                                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 585 "goal_expr_to_goal.m"
                                                                                {
#line 585 "goal_expr_to_goal.m"
                                                                                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_220_220)) == (MR_mktag((MR_Integer) 1)));
#line 585 "goal_expr_to_goal.m"
                                                                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 585 "goal_expr_to_goal.m"
                                                                                    {
#line 585 "goal_expr_to_goal.m"
                                                                                      hlds__make_hlds__goal_expr_to_goal__StateVarB_192 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_220_220, (MR_Integer) 0)));
#line 585 "goal_expr_to_goal.m"
                                                                                      hlds__make_hlds__goal_expr_to_goal__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_220_220, (MR_Integer) 1)));
#line 585 "goal_expr_to_goal.m"
                                                                                    }
#line 585 "goal_expr_to_goal.m"
                                                                                }
#line 585 "goal_expr_to_goal.m"
                                                                            }
#line 585 "goal_expr_to_goal.m"
                                                                        }
#line 585 "goal_expr_to_goal.m"
                                                                    }
#line 585 "goal_expr_to_goal.m"
                                                                }
#line 587 "goal_expr_to_goal.m"
                                                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 586 "goal_expr_to_goal.m"
                                                                {
#line 586 "goal_expr_to_goal.m"
                                                                  hlds__make_hlds__goal_expr_to_goal__report_svar_unify_error_5_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__StateVarB_192, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216_216, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                                                }
#line 587 "goal_expr_to_goal.m"
                                                              else
#line 586 "goal_expr_to_goal.m"
                                                                *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_216_216;
#line 590 "goal_expr_to_goal.m"
                                                              {
#line 590 "goal_expr_to_goal.m"
                                                                *hlds__make_hlds__goal_expr_to_goal__Goal_22 = hlds__hlds_goal__true_goal_0_f_0();
                                                              }
#line 590 "goal_expr_to_goal.m"
                                                              *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205;
#line 590 "goal_expr_to_goal.m"
                                                              *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203;
#line 590 "goal_expr_to_goal.m"
                                                              *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201;
#line 590 "goal_expr_to_goal.m"
                                                              *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199;
#line 590 "goal_expr_to_goal.m"
                                                              *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197;
#line 584 "goal_expr_to_goal.m"
                                                            }
#line 591 "goal_expr_to_goal.m"
                                                          else
#line 594 "goal_expr_to_goal.m"
                                                            {
#line 594 "goal_expr_to_goal.m"
                                                              MR_Word hlds__make_hlds__goal_expr_to_goal__StateVarB_730;
#line 591 "goal_expr_to_goal.m"
                                                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_223_223;
#line 591 "goal_expr_to_goal.m"
                                                              MR_String hlds__make_hlds__goal_expr_to_goal__V_224_224;
#line 591 "goal_expr_to_goal.m"
                                                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_225_225;
#line 591 "goal_expr_to_goal.m"
                                                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_226_226;
#line 591 "goal_expr_to_goal.m"
                                                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_227_227;
#line 591 "goal_expr_to_goal.m"
                                                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_196_196;
#line 591 "goal_expr_to_goal.m"
                                                              MR_Word hlds__make_hlds__goal_expr_to_goal__V_195_195;

#line 591 "goal_expr_to_goal.m"
                                                              hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__B_188)) == (MR_mktag((MR_Integer) 0)));
#line 591 "goal_expr_to_goal.m"
                                                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 591 "goal_expr_to_goal.m"
                                                                {
#line 591 "goal_expr_to_goal.m"
                                                                  hlds__make_hlds__goal_expr_to_goal__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__B_188, (MR_Integer) 0)));
#line 591 "goal_expr_to_goal.m"
                                                                  hlds__make_hlds__goal_expr_to_goal__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__B_188, (MR_Integer) 1)));
#line 591 "goal_expr_to_goal.m"
                                                                  hlds__make_hlds__goal_expr_to_goal__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__B_188, (MR_Integer) 2)));
#line 591 "goal_expr_to_goal.m"
                                                                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_223_223)) == (MR_mktag((MR_Integer) 0)));
#line 591 "goal_expr_to_goal.m"
                                                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 591 "goal_expr_to_goal.m"
                                                                    {
#line 591 "goal_expr_to_goal.m"
                                                                      hlds__make_hlds__goal_expr_to_goal__V_224_224 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__V_223_223, (MR_Integer) 0)));
#line 591 "goal_expr_to_goal.m"
                                                                      hlds__make_hlds__goal_expr_to_goal__succeeded = (strcmp(hlds__make_hlds__goal_expr_to_goal__V_224_224, (MR_String) "!") == 0);
#line 591 "goal_expr_to_goal.m"
                                                                      if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 591 "goal_expr_to_goal.m"
                                                                        {
#line 591 "goal_expr_to_goal.m"
                                                                          hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_225_225)) == (MR_mktag((MR_Integer) 1)));
#line 591 "goal_expr_to_goal.m"
                                                                          if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 591 "goal_expr_to_goal.m"
                                                                            {
#line 591 "goal_expr_to_goal.m"
                                                                              hlds__make_hlds__goal_expr_to_goal__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_225_225, (MR_Integer) 0)));
#line 591 "goal_expr_to_goal.m"
                                                                              hlds__make_hlds__goal_expr_to_goal__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_225_225, (MR_Integer) 1)));
#line 591 "goal_expr_to_goal.m"
                                                                              hlds__make_hlds__goal_expr_to_goal__succeeded = (hlds__make_hlds__goal_expr_to_goal__V_227_227 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 591 "goal_expr_to_goal.m"
                                                                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 591 "goal_expr_to_goal.m"
                                                                                {
#line 591 "goal_expr_to_goal.m"
                                                                                  hlds__make_hlds__goal_expr_to_goal__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__goal_expr_to_goal__V_226_226)) == (MR_mktag((MR_Integer) 1)));
#line 591 "goal_expr_to_goal.m"
                                                                                  if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 591 "goal_expr_to_goal.m"
                                                                                    {
#line 591 "goal_expr_to_goal.m"
                                                                                      hlds__make_hlds__goal_expr_to_goal__StateVarB_730 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_226_226, (MR_Integer) 0)));
#line 591 "goal_expr_to_goal.m"
                                                                                      hlds__make_hlds__goal_expr_to_goal__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__goal_expr_to_goal__V_226_226, (MR_Integer) 1)));
#line 591 "goal_expr_to_goal.m"
                                                                                    }
#line 591 "goal_expr_to_goal.m"
                                                                                }
#line 591 "goal_expr_to_goal.m"
                                                                            }
#line 591 "goal_expr_to_goal.m"
                                                                        }
#line 591 "goal_expr_to_goal.m"
                                                                    }
#line 591 "goal_expr_to_goal.m"
                                                                }
#line 594 "goal_expr_to_goal.m"
                                                              if (hlds__make_hlds__goal_expr_to_goal__succeeded)
#line 592 "goal_expr_to_goal.m"
                                                                {
#line 592 "goal_expr_to_goal.m"
                                                                  {
#line 592 "goal_expr_to_goal.m"
                                                                    hlds__make_hlds__goal_expr_to_goal__report_svar_unify_error_5_p_0(hlds__make_hlds__goal_expr_to_goal__Context_20, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__StateVarB_730, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                                                  }
#line 593 "goal_expr_to_goal.m"
                                                                  {
#line 593 "goal_expr_to_goal.m"
                                                                    *hlds__make_hlds__goal_expr_to_goal__Goal_22 = hlds__hlds_goal__true_goal_0_f_0();
                                                                  }
#line 593 "goal_expr_to_goal.m"
                                                                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205;
#line 593 "goal_expr_to_goal.m"
                                                                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203;
#line 593 "goal_expr_to_goal.m"
                                                                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201;
#line 593 "goal_expr_to_goal.m"
                                                                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199;
#line 593 "goal_expr_to_goal.m"
                                                                  *hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198 = hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197;
#line 592 "goal_expr_to_goal.m"
                                                                }
#line 594 "goal_expr_to_goal.m"
                                                              else
#line 597 "goal_expr_to_goal.m"
                                                                {
#line 597 "goal_expr_to_goal.m"
                                                                  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_231_231;

#line 595 "goal_expr_to_goal.m"
                                                                  {
#line 595 "goal_expr_to_goal.m"
                                                                    hlds__make_hlds__superhomogeneous__unravel_unification_19_p_0(hlds__make_hlds__goal_expr_to_goal__A_187, hlds__make_hlds__goal_expr_to_goal__B_188, hlds__make_hlds__goal_expr_to_goal__Context_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__goal_expr_to_goal__Purity_731, hlds__make_hlds__goal_expr_to_goal__Goal_22, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_197, &hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_231_231, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_199, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_200, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_201, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_202, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_203, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_204, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_205, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_206, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_207, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_208);
                                                                  }
#line 598 "goal_expr_to_goal.m"
                                                                  {
#line 598 "goal_expr_to_goal.m"
                                                                    hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_18, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_231_231, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_198);
#line 598 "goal_expr_to_goal.m"
                                                                    return;
                                                                  }
#line 597 "goal_expr_to_goal.m"
                                                                }
#line 594 "goal_expr_to_goal.m"
                                                            }
#line 578 "goal_expr_to_goal.m"
                                                        }
#line 116 "goal_expr_to_goal.m"
      }
#line 116 "goal_expr_to_goal.m"
      break;
#line 116 "goal_expr_to_goal.m"
    }
#line 100 "goal_expr_to_goal.m"
}

#line 37 "goal_expr_to_goal.m"
void MR_CALL 
hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_context_to_goal_16_p_0(
#line 37 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__LocKind_17,
#line 37 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2,
#line 37 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__Renaming_20,
#line 37 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__Goal_21,
#line 37 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_32,
#line 37 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_33,
#line 37 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_34,
#line 37 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_35,
#line 37 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_36,
#line 37 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_37,
#line 37 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_38,
#line 37 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_39,
#line 37 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_40,
#line 37 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_41,
#line 37 "goal_expr_to_goal.m"
  MR_Word hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_42,
#line 37 "goal_expr_to_goal.m"
  MR_Word * hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_43)
#line 37 "goal_expr_to_goal.m"
{
#line 92 "goal_expr_to_goal.m"
  {
#line 92 "goal_expr_to_goal.m"
    MR_bool hlds__make_hlds__goal_expr_to_goal__succeeded;
#line 92 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2, (MR_Integer) 0)));
#line 92 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__HeadVar__2_2, (MR_Integer) 1)));
#line 92 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__Goal1_28;
#line 92 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalExpr_29;
#line 92 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo1_30;
#line 92 "goal_expr_to_goal.m"
    MR_Word hlds__make_hlds__goal_expr_to_goal__GoalInfo_31;

#line 93 "goal_expr_to_goal.m"
    {
#line 93 "goal_expr_to_goal.m"
      hlds__make_hlds__goal_expr_to_goal__transform_goal_expr_to_goal_17_p_0(hlds__make_hlds__goal_expr_to_goal__LocKind_17, hlds__make_hlds__goal_expr_to_goal__Goal0_18, hlds__make_hlds__goal_expr_to_goal__Context_19, hlds__make_hlds__goal_expr_to_goal__Renaming_20, &hlds__make_hlds__goal_expr_to_goal__Goal1_28, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_0_32, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarState_33, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_0_34, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_SVarStore_35, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_0_36, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_VarSet_37, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_0_38, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_ModuleInfo_39, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_0_40, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_QualInfo_41, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_0_42, hlds__make_hlds__goal_expr_to_goal__STATE_VARIABLE_Specs_43);
    }
#line 96 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__GoalExpr_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal1_28, (MR_Integer) 0)));
#line 96 "goal_expr_to_goal.m"
    hlds__make_hlds__goal_expr_to_goal__GoalInfo1_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__goal_expr_to_goal__Goal1_28, (MR_Integer) 1)));
#line 97 "goal_expr_to_goal.m"
    {
#line 97 "goal_expr_to_goal.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(hlds__make_hlds__goal_expr_to_goal__Context_19, hlds__make_hlds__goal_expr_to_goal__GoalInfo1_30, &hlds__make_hlds__goal_expr_to_goal__GoalInfo_31);
    }
#line 98 "goal_expr_to_goal.m"
    {
#line 98 "goal_expr_to_goal.m"
      MR_Word base;
#line 98 "goal_expr_to_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 98 "goal_expr_to_goal.m"
      *hlds__make_hlds__goal_expr_to_goal__Goal_21 = base;
#line 98 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalExpr_29));
#line 98 "goal_expr_to_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__goal_expr_to_goal__GoalInfo_31));
#line 98 "goal_expr_to_goal.m"
    }
#line 92 "goal_expr_to_goal.m"
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
